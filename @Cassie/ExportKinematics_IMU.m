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
H_WC = obj.OtherPoints.MultisenseLeftCameraOpticalFrame.computeForwardKinematics;
H_WI1 = obj.OtherPoints.VectorNav.computeForwardKinematics;
H_WI2 = obj.OtherPoints.MultisenseAccelerometerFrame.computeForwardKinematics;

H_I1B = H_WI1\H_WB; H_I1B = subs(H_I1B, obj.States.x(1:6), zeros(6,1));
H_I1R = H_WI1\H_WR; H_I1R = subs(H_I1R, obj.States.x(1:6), zeros(6,1));
H_I1L = H_WI1\H_WL; H_I1L = subs(H_I1L, obj.States.x(1:6), zeros(6,1));
H_I1C = H_WI1\H_WC; H_I1C = subs(H_I1C, obj.States.x(1:6), zeros(6,1));

H_I2B = H_WI2\H_WB; H_I2B = subs(H_I2B, obj.States.x(1:6), zeros(6,1));
H_I2R = H_WI2\H_WR; H_I2R = subs(H_I2R, obj.States.x(1:6), zeros(6,1));
H_I2L = H_WI2\H_WL; H_I2L = subs(H_I2L, obj.States.x(1:6), zeros(6,1));
H_I2C = H_WI2\H_WC; H_I2C = subs(H_I2C, obj.States.x(1:6), zeros(6,1));

H_RL = H_WR\H_WL; H_RL = subs(H_RL, obj.States.x(1:6), zeros(6,1));
H_LR = H_WL\H_WR; H_LR = subs(H_LR, obj.States.x(1:6), zeros(6,1));

% Export Functions
export_function(H_I1B, 'H_VectorNav_to_Pelvis', export_path, encoders);
export_function(H_I1B(1:3,1:3), 'R_VectorNav_to_Pelvis', export_path, encoders);
export_function(H_I1B(1:3,end), 'p_VectorNav_to_Pelvis', export_path, encoders);

export_function(H_I1R, 'H_VectorNav_to_RightToeBottom', export_path, encoders);
export_function(H_I1R(1:3,1:3), 'R_VectorNav_to_RightToeBottom', export_path, encoders);
export_function(H_I1R(1:3,end), 'p_VectorNav_to_RightToeBottom', export_path, encoders);

export_function(H_I1L, 'H_VectorNav_to_LeftToeBottom', export_path, encoders);
export_function(H_I1L(1:3,1:3), 'R_VectorNav_to_LeftToeBottom', export_path, encoders);
export_function(H_I1L(1:3,end), 'p_VectorNav_to_LeftToeBottom', export_path, encoders);

export_function(H_I1C, 'H_VectorNav_to_MultisenseLeftOpticalFrame', export_path, encoders);
export_function(H_I1C(1:3,1:3), 'R_VectorNav_to_MultisenseLeftOpticalFrame', export_path, encoders);
export_function(H_I1C(1:3,end), 'p_VectorNav_to_MultisenseLeftOpticalFrame', export_path, encoders);

export_function(H_I2B, 'H_Multisense_to_Pelvis', export_path, encoders);
export_function(H_I2B(1:3,1:3), 'R_Multisense_to_Pelvis', export_path, encoders);
export_function(H_I2B(1:3,end), 'p_Multisense_to_Pelvis', export_path, encoders);

export_function(H_I2R, 'H_MultisenseIMU_to_RightToeBottom', export_path, encoders);
export_function(H_I2R(1:3,1:3), 'R_MultisenseIMU_to_RightToeBottom', export_path, encoders);
export_function(H_I2R(1:3,end), 'p_MultisenseIMU_to_RightToeBottom', export_path, encoders);

export_function(H_I2L, 'H_MultisenseIMU_to_LeftToeBottom', export_path, encoders);
export_function(H_I2L(1:3,1:3), 'R_MultisenseIMU_to_LeftToeBottom', export_path, encoders);
export_function(H_I2L(1:3,end), 'p_MultisenseIMU_to_LeftToeBottom', export_path, encoders);

export_function(H_I2C, 'H_MultisenseIMU_to_MultisenseLeftOpticalFrame', export_path, encoders);
export_function(H_I2C(1:3,1:3), 'R_MultisenseIMU_to_MultisenseLeftOpticalFrame', export_path, encoders);
export_function(H_I2C(1:3,end), 'p_MultisenseIMU_to_MultisenseLeftOpticalFrame', export_path, encoders);

export_function(H_RL, 'H_RightToeBottom_to_LeftToeBottom', export_path, encoders);
export_function(H_RL(1:3,1:3), 'R_RightToeBottom_to_LeftToeBottom', export_path, encoders);
export_function(H_RL(1:3,end), 'p_RightToeBottom_to_LeftToeBottom', export_path, encoders);

export_function(H_LR, 'H_LeftToeBottom_to_RightToeBottom', export_path, encoders);
export_function(H_LR(1:3,1:3), 'R_LeftToeBottom_to_RightToeBottom', export_path, encoders);
export_function(H_LR(1:3,end), 'p_LeftToeBottom_to_RightToeBottom', export_path, encoders);

end


