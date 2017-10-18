classdef CASSIE < RobotLinks
    
    properties
        ContactPoints = struct;
        OtherPoints = struct;

    end
    
    methods
        
        function obj = CASSIE(urdf)
            
            % Floating base model            
            base(6) = struct(); % 6-DOF base coordinates
            
            % the name of the base dofs 
            [base(1:6).Name] = deal('BasePosX','BasePosY','BasePosZ','BaseRotZ','BaseRotY','BaseRotX'); 
            
            % the type of the base dofs
            [base(1:3).Type] = deal('prismatic'); % the first three are prismatic joints
            [base(4:6).Type] = deal('revolute');  % the last three are revolute joints
            
            % the origin are all zeros
            [base.Offset] = deal([0,0,0]);
            [base.R] = deal([0,0,0]);
            
            % the axis of the base dofs
            [base(1:3).Axis] = deal([1,0,0],[0,1,0],[0,0,1]);
            [base(4:6).Axis] = deal([0,0,1],[0,1,0],[1,0,0]);
            
            % the parent link of the base dofs
            [base.Parent] =  deal('Origin', 'BasePosX','BasePosY','BasePosZ','BaseRotZ','BaseRotY'); 
            
            % the child link of the base dofs
            [base.Child] = deal('BasePosX','BasePosY','BasePosZ','BaseRotZ','BaseRotY','');

            % Set base DOF limits (Joint limits are read from URDF)
            [limits(1:6).lower] = deal(-10, -10, 0.5, -pi, deg2rad(-10), deg2rad(-3));
            [limits(1:6).upper] = deal(10, 10, 2, pi, deg2rad(10), deg2rad(3));
            [limits(1:6).velocity] = deal(20, 20, 20, 20, 20, 20);
            [limits.effort] = deal(0);
            for i=1:length(base)
                base(i).Limit = limits(i);
            end
            
            obj = obj@RobotLinks(urdf,base);
            
            %% Add 4-bar holonomic constraint
            four_bar = [obj.States.x('knee_joint_left'); obj.States.x('knee_joint_right')] + ...
                       [obj.States.x('ankle_joint_left'); obj.States.x('ankle_joint_right')] - ...
                       [deg2rad(13); deg2rad(13)];
            four_bar_constr = HolonomicConstraint(obj, four_bar, 'fourBar', ...
                                                      'ConstrLabel', {{'four_bar_left', 'four_bar_right'}}, ...
                                                      'Jacobian', jacobian(four_bar, obj.States.x));
            obj = addHolonomicConstraint(obj, four_bar_constr);
                        
            %% Define contact frames
            R = Angles.Rz(deg2rad(50))*Angles.Ry(-pi/2);

            % Bottom of toe
            l_foot_frame = obj.Joints(getJointIndices(obj, 'toe_joint_left'));
            obj.ContactPoints.LeftToeBottom = CoordinateFrame(...
                'Name','LeftToeBottom',...
                'Reference',l_foot_frame,...
                'Offset',[0.0177, 0.0522, 0],...
                'R',R... 
                );
            
            r_foot_frame = obj.Joints(getJointIndices(obj, 'toe_joint_right'));
            obj.ContactPoints.RightToeBottom = CoordinateFrame(...
                'Name','RightToeBottom',...
                'Reference',r_foot_frame,...
                'Offset',[0.0177, 0.0522, 0],...
                'R',R... 
                );
            
            %% define other frames
            
        end
        
        function ExportKinematics(obj, export_path)
            % Generates code for forward kinematics 
            
            if ~exist(export_path,'dir')
                mkdir(export_path);
                addpath(export_path);
            end
            
            % Compute positions of all joints
            for i = 1:length(obj.Joints)
                position = obj.Joints(i).computeCartesianPosition;
                H = obj.Joints(i).computeForwardKinematics;
                vars = obj.States.x;
                filename = [export_path, 'p_', obj.Joints(i).Name];
                export(position, 'Vars', vars, 'File', filename);
                filename = [export_path, 'H_', obj.Joints(i).Name];
                export(H, 'Vars', vars, 'File', filename);
            end
            
            % Compute positions of contact points
            cp_fields = fields(obj.ContactPoints);
            for i = 1:length(cp_fields)
                position = obj.ContactPoints.(cp_fields{i}).computeCartesianPosition;
                H = obj.ContactPoints.(cp_fields{i}).computeForwardKinematics;
                vars = obj.States.x;
                filename = [export_path, 'p_', obj.ContactPoints.(cp_fields{i}).Name];
                export(position, 'Vars', vars, 'File', filename);
                filename = [export_path, 'H_', obj.ContactPoints.(cp_fields{i}).Name];
                export(H, 'Vars', vars, 'File', filename);                
            end
            
            % Compute positions of other points
            op_fields = fields(obj.OtherPoints);
            for i = 1:length(op_fields)
                position = obj.OtherPoints.(op_fields{i}).computeCartesianPosition;
                H = obj.OtherPoints.(op_fields{i}).computeForwardKinematics;                
                vars = obj.States.x;
                filename = [export_path, 'p_', obj.OtherPoints.(op_fields{i}).Name];
                export(position, 'Vars', vars, 'File', filename);
                filename = [export_path, 'H_', obj.OtherPoints.(op_fields{i}).Name];
                export(position, 'Vars', vars, 'File', filename);                
            end
            
            
        end
    end
    
    
end