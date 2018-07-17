function ExportKinematics_IMU(obj, export_function, export_path)
% Computes the Forward Kinematics to be used for state estimation (IMU to contact)
%
%   Author: Ross Hartley
%   Date:   11/15/2017
%
% Encoder Vector
encoders = SymVariable(obj.States.x(7:end));

% Frames
body_frame = CoordinateFrame(...
    'Name','Body',...
    'Reference',obj.Joints(getJointIndices(obj,'BaseRotX')),...
    'Offset',[0, 0, 0],...
    'R',[0, 0, 0]);

H_WB = body_frame.computeForwardKinematics;
H_WR = obj.ContactPoints.RightToeBottom.computeForwardKinematics;
H_WL = obj.ContactPoints.LeftToeBottom.computeForwardKinematics;
H_WI = obj.OtherPoints.VectorNav.computeForwardKinematics;

H_I1B = H_WI\H_WB; H_I1B = subs(H_I1B, obj.States.x(1:6), zeros(6,1));
H_I1R = H_WI\H_WR; H_I1R = subs(H_I1R, obj.States.x(1:6), zeros(6,1));
H_I1L = H_WI\H_WL; H_I1L = subs(H_I1L, obj.States.x(1:6), zeros(6,1));

H_RL = H_WR\H_WL; H_RL = subs(H_RL, obj.States.x(1:6), zeros(6,1));
H_LR = H_WL\H_WR; H_LR = subs(H_LR, obj.States.x(1:6), zeros(6,1));

% Export Functions
export_function(H_I1B, 'H_VectorNav_to_Pelvis', export_path, encoders);
export_function(H_I1B(1:3,1:3), 'R_VectorNav_to_Pelvis', export_path, encoders);
export_function(H_I1B(1:3,end), 'p_VectorNav_to_Pelvis', export_path, encoders);

export_function(H_I1R, 'H_VectorNav_to_RightToeBottom', export_path, encoders);
export_function(H_I1R(1:3,1:3), 'R_VectorNav_to_RightToeBottom', export_path, encoders);
export_function(H_I1R(1:3,end), 'p_VectorNav_to_RightToeBottom', export_path, encoders);
export_function(jacobian(H_I1R(1:3,end),encoders), 'Jp_VectorNav_to_RightToeBottom', export_path, encoders);

export_function(H_I1L, 'H_VectorNav_to_LeftToeBottom', export_path, encoders);
export_function(H_I1L(1:3,1:3), 'R_VectorNav_to_LeftToeBottom', export_path, encoders);
export_function(H_I1L(1:3,end), 'p_VectorNav_to_LeftToeBottom', export_path, encoders);
export_function(jacobian(H_I1L(1:3,end),encoders), 'Jp_VectorNav_to_LeftToeBottom', export_path, encoders);

export_function(H_RL, 'H_RightToeBottom_to_LeftToeBottom', export_path, encoders);
export_function(H_RL(1:3,1:3), 'R_RightToeBottom_to_LeftToeBottom', export_path, encoders);
export_function(H_RL(1:3,end), 'p_RightToeBottom_to_LeftToeBottom', export_path, encoders);
export_function(jacobian(H_RL(1:3,end),encoders), 'Jp_RightToeBottom_to_LeftToeBottom', export_path, encoders);

export_function(H_LR, 'H_LeftToeBottom_to_RightToeBottom', export_path, encoders);
export_function(H_LR(1:3,1:3), 'R_LeftToeBottom_to_RightToeBottom', export_path, encoders);
export_function(H_LR(1:3,end), 'p_LeftToeBottom_to_RightToeBottom', export_path, encoders);
export_function(jacobian(H_LR(1:3,end),encoders), 'Jp_LeftToeBottom_to_RightToeBottom', export_path, encoders);

end


