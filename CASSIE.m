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
                        
            %% define contact frames
            Rz = @(th) [cos(th), -sin(th), 0; sin(th), cos(th), 0; 0,0,1];
            Ry = @(th) [cos(th), 0, sin(th); 0, 1, 0; -sin(th), 0, cos(th)];
            Rx = @(th) [1,0,0; 0, cos(th), -sin(th); 0, sin(th), cos(th)];
                
            % Bottom of toe
            l_foot_frame = obj.Joints(getJointIndices(obj, 'toe_joint_left'));
            H = double(subs(l_foot_frame.computeForwardKinematics, obj.States.x, zeros(22,1)));
%             R = H(1:3,1:3)'*Rz(-pi/2)*Rx(deg2rad(50));
            R = Rz(deg2rad(50))*Ry(-pi/2);
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
            
            
            % Back of toe
            obj.ContactPoints.LeftToeBottomBack = CoordinateFrame(...
                'Name','LeftToeBottomBack',...
                'Reference',l_foot_frame,...
                'Offset',[0.0798867, 0, 0],...
                'R',[pi/2,0,pi/2]... 
                );
            
            obj.ContactPoints.RightToeBottomBack = CoordinateFrame(...
                'Name','RightToeBottomBack',...
                'Reference',r_foot_frame,...
                'Offset',[0.0798867, 0, 0],...
                'R',[pi/2,0,pi/2]... 
                );
            
            % Front of toe
            obj.ContactPoints.LeftToeBottomFront = CoordinateFrame(...
                'Name','LeftToeBottomFront',...
                'Reference',l_foot_frame,...
                'Offset',[0, 0.0798867, 0],...
                'R',[pi/2,0,pi/2]... 
                );
            
            obj.ContactPoints.RightToeBottomFront = CoordinateFrame(...
                'Name','RightToeBottomFront',...
                'Reference',r_foot_frame,...
                'Offset',[0, 0.0798867, 0],...
                'R',[pi/2,0,pi/2]...
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