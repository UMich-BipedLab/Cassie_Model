classdef Cassie < RobotLinks
    % Cassie class to be used with FROST
    %
    %   Author: Ross Hartley
    %   Date:   11/7/2017
    %
    
    properties
        ContactPoints = struct;
        OtherPoints = struct;
        
    end
    
    methods
        
        function obj = Cassie(urdf)
            
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
            
            % load model from the URDF file
            config = struct();
            config_file = GetFullPath(urdf);
            [config.name, config.links, config.joints, config.transmissions] = ros_load_urdf(config_file);
            obj = obj@RobotLinks(config, base, [], 'removeFixedJoints', true);
            obj.ConfigFile = config_file;
            
            %% Add Holonomic Constraints (ignore springs)
            
            % Add fixed knee to shin holonomic constraint
            fixed_knee_spring = [obj.States.x('knee_to_shin_left'); obj.States.x('knee_to_shin_right')];
            fixed_knee_spring_constr = HolonomicConstraint(obj, fixed_knee_spring, 'fixedKneeSpring', ...
                'ConstrLabel', {{'fixed_knee_spring_left', 'fixed_knee_spring_right'}}, ...
                'Jacobian', jacobian(fixed_knee_spring, obj.States.x));
            obj = addHolonomicConstraint(obj, fixed_knee_spring_constr);
            
            % Add 4-bar holonomic constraint
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
            pelvis_frame = obj.Joints(getJointIndices(obj, 'BaseRotX'));
            
            multisense_frame = config.joints(strcmp({config.joints.Child}, 'multisense'));
            if ~isempty(multisense_frame)
                obj.OtherPoints.MultisenseHead = CoordinateFrame(...
                    'Name','MultisenseHead',...
                    'Reference',pelvis_frame,...
                    'Offset',multisense_frame.Offset,...
                    'R',multisense_frame.R...
                    );
                
                obj.OtherPoints.MultisenseLeftCameraFrame = CoordinateFrame(...
                    'Name','MultisenseLeftCameraFrame',...
                    'Reference',obj.OtherPoints.MultisenseHead,...
                    'Offset',[0.052, 0.035, 0.0],...
                    'R',[0, 0, 0]...
                    );
                
                obj.OtherPoints.MultisenseRightCameraFrame = CoordinateFrame(...
                    'Name','MultisenseRightCameraFrame',...
                    'Reference',obj.OtherPoints.MultisenseHead,...
                    'Offset',[0.052, -0.035, 0.0],...
                    'R',[0, 0, 0]...
                    );
                
                obj.OtherPoints.MultisenseLeftCameraOpticalFrame = CoordinateFrame(...
                    'Name','MultisenseLeftCameraOpticalFrame',...
                    'Reference',obj.OtherPoints.MultisenseLeftCameraFrame,...
                    'Offset',[0, 0, 0],...
                    'R',[-pi/2, 0, -pi/2]...
                    );
                
                obj.OtherPoints.MultisenseRightCameraOpticalFrame = CoordinateFrame(...
                    'Name','MultisenseRightCameraOpticalFrame',...
                    'Reference',obj.OtherPoints.MultisenseRightCameraFrame,...
                    'Offset',[0, 0, 0],...
                    'R',[-pi/2, 0, -pi/2]...
                    );
                
                obj.OtherPoints.MultisenseAccelerometerFrame = CoordinateFrame(...
                    'Name','MultisenseAccelerometerFrame',...
                    'Reference',obj.OtherPoints.MultisenseHead,...
                    'Offset',[0.047, 0.0302, -0.00075],...
                    'R',[0, pi/2, 0]...
                    );
                
                obj.OtherPoints.MultisenseMagnetometerFrame = CoordinateFrame(...
                    'Name','MultisenseMagnetometerFrame',...
                    'Reference',obj.OtherPoints.MultisenseHead,...
                    'Offset',[0.047, 0.0302, -0.00075],...
                    'R',[0, pi/2, 0]...
                    );
                
                obj.OtherPoints.MultisenseGyroscopeFrame = CoordinateFrame(...
                    'Name','MultisenseGyroscopeFrame',...
                    'Reference',obj.OtherPoints.MultisenseHead,...
                    'Offset',[0.047, 0.03880, 0.00125],...
                    'R',[-pi/2, 0, -pi/2]...
                    );
                
            end
            
            vectorNav_frame = config.joints(strcmp({config.joints.Child}, 'vectorNav'));
            if ~isempty(vectorNav_frame)
                obj.OtherPoints.VectorNav = CoordinateFrame(...
                    'Name','VectorNav',...
                    'Reference',pelvis_frame,...
                    'Offset',vectorNav_frame.Offset,...
                    'R',vectorNav_frame.R...
                    );
            end
            
            
            
        end
        
        function ExportEnergy(obj, export_function, export_path)
            % Generates code for kinetic and potential energy
            
            % Kinetic Energy
            T = 0.5 * obj.States.dx' * obj.Mmat * obj.States.dx;
            export_function(T, 'KineticEnergy', export_path, {obj.States.x, obj.States.dx});
            
            % Potential Energy
            V = SymExpression();
            g = 9.81;
            for i = 1:length(obj.Links)
                p = obj.Links(i).computeCartesianPosition;
                m = obj.Links(i).Mass;
                V = V + m*g*p(3);
            end
            export_function(V, 'PotentialEnergy', export_path, {obj.States.x});
            
        end
        
        function ExportKinematics(obj, export_function, export_path)
            % Generates code for forward kinematics
            
            if ~exist(export_path,'dir')
                mkdir(export_path);
                addpath(export_path);
            end
            
            % Compute positions of all joints
            for i = 1:length(obj.Joints)
                % Create fixed frame on link after rotation of joint
                % (same origin as joint)
                frame = CoordinateFrame(...
                    'Name',obj.Joints(i).Name,...
                    'Reference',obj.Joints(i),...
                    'Offset',[0, 0, 0],...
                    'R',[0, 0, 0]);
                H = frame.computeForwardKinematics;
                p = H(1:3,end);
                J = jacobian(p, obj.States.x);
                R = H(1:3,1:3);
                export_function(p, ['p_', obj.Joints(i).Name], export_path, obj.States.x);
                export_function(J, ['J_', obj.Joints(i).Name], export_path, obj.States.x);
                export_function(H, ['H_', obj.Joints(i).Name], export_path, obj.States.x);
                export_function(R, ['R_', obj.Joints(i).Name], export_path, obj.States.x);
            end
            
            % Compute positions of contact points
            cp_fields = fields(obj.ContactPoints);
            for i = 1:length(cp_fields)
                p = obj.ContactPoints.(cp_fields{i}).computeCartesianPosition;
                J = jacobian(p, obj.States.x);
                H = obj.ContactPoints.(cp_fields{i}).computeForwardKinematics;
                R = H(1:3,1:3);
                export_function(p, ['p_', obj.ContactPoints.(cp_fields{i}).Name], export_path, obj.States.x);
                export_function(J, ['J_', obj.ContactPoints.(cp_fields{i}).Name], export_path, obj.States.x);
                export_function(H, ['H_', obj.ContactPoints.(cp_fields{i}).Name], export_path, obj.States.x);
                export_function(R, ['R_', obj.ContactPoints.(cp_fields{i}).Name], export_path, obj.States.x);
            end
            
            % Compute positions of other points
            op_fields = fields(obj.OtherPoints);
            for i = 1:length(op_fields)
                p = obj.OtherPoints.(op_fields{i}).computeCartesianPosition;
                J = jacobian(p, obj.States.x);
                H = obj.OtherPoints.(op_fields{i}).computeForwardKinematics;
                R = H(1:3,1:3);
                export_function(p, ['p_', obj.OtherPoints.(op_fields{i}).Name], export_path, obj.States.x);
                export_function(J, ['J_', obj.OtherPoints.(op_fields{i}).Name], export_path, obj.States.x);
                export_function(H, ['H_', obj.OtherPoints.(op_fields{i}).Name], export_path, obj.States.x);
                export_function(R, ['R_', obj.OtherPoints.(op_fields{i}).Name], export_path, obj.States.x);
            end
            
        end

    end
    
    
end