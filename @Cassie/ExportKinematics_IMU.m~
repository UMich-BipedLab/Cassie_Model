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

H_WRb = obj.ContactPoints.RightToeBack.computeForwardKinematics;
H_WLb = obj.ContactPoints.LeftToeBack.computeForwardKinematics;
H_WRf = obj.ContactPoints.RightToeFront.computeForwardKinematics;
H_WLf = obj.ContactPoints.LeftToeFront.computeForwardKinematics;

H_I1B = H_WI\H_WB; H_I1B = subs(H_I1B, obj.States.x(1:6), zeros(6,1));
H_I1R = H_WI\H_WR; H_I1R = subs(H_I1R, obj.States.x(1:6), zeros(6,1));
H_I1L = H_WI\H_WL; H_I1L = subs(H_I1L, obj.States.x(1:6), zeros(6,1));

H_I1Rb = H_WI\H_WRb; H_I1Rb = subs(H_I1Rb, obj.States.x(1:6), zeros(6,1));
H_I1Lb = H_WI\H_WLb; H_I1Lb = subs(H_I1Lb, obj.States.x(1:6), zeros(6,1));
H_I1Rf = H_WI\H_WRf; H_I1Rf = subs(H_I1Rf, obj.States.x(1:6), zeros(6,1));
H_I1Lf = H_WI\H_WLf; H_I1Lf = subs(H_I1Lf, obj.States.x(1:6), zeros(6,1));

H_RL = H_WR\H_WL; H_RL = subs(H_RL, obj.States.x(1:6), zeros(6,1));
H_LR = H_WL\H_WR; H_LR = subs(H_LR, obj.States.x(1:6), zeros(6,1));

H_RbLb = H_WRb\H_WLb; H_RbLb = subs(H_RbLb, obj.States.x(1:6), zeros(6,1));
H_LbRb = H_WLb\H_WRb; H_LbRb = subs(H_LbRb, obj.States.x(1:6), zeros(6,1));

H_RfLf = H_WRf\H_WLf; H_RfLf = subs(H_RfLf, obj.States.x(1:6), zeros(6,1));
H_LfRf = H_WLf\H_WRf; H_LfRf = subs(H_LfRf, obj.States.x(1:6), zeros(6,1));

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

export_function(H_I1Rb, 'H_VectorNav_to_RightToeBack', export_path, encoders);
export_function(H_I1Rb(1:3,1:3), 'R_VectorNav_to_RightToeBack', export_path, encoders);
export_function(H_I1Rb(1:3,end), 'p_VectorNav_to_RightToeBack', export_path, encoders);
export_function(jacobian(H_I1Rb(1:3,end),encoders), 'Jp_VectorNav_to_RightToeBack', export_path, encoders);

export_function(H_I1Lb, 'H_VectorNav_to_LeftToeBack', export_path, encoders);
export_function(H_I1Lb(1:3,1:3), 'R_VectorNav_to_LeftToeBack', export_path, encoders);
export_function(H_I1Lb(1:3,end), 'p_VectorNav_to_LeftToeBack', export_path, encoders);
export_function(jacobian(H_I1Lb(1:3,end),encoders), 'Jp_VectorNav_to_LeftToeBack', export_path, encoders);

export_function(H_I1Rf, 'H_VectorNav_to_RightToeFront', export_path, encoders);
export_function(H_I1Rf(1:3,1:3), 'R_VectorNav_to_RightToeFront', export_path, encoders);
export_function(H_I1Rf(1:3,end), 'p_VectorNav_to_RightToeFront', export_path, encoders);
export_function(jacobian(H_I1Rf(1:3,end),encoders), 'Jp_VectorNav_to_RightToeFront', export_path, encoders);

export_function(H_I1Lf, 'H_VectorNav_to_LeftToeFront', export_path, encoders);
export_function(H_I1Lf(1:3,1:3), 'R_VectorNav_to_LeftToeFront', export_path, encoders);
export_function(H_I1Lf(1:3,end), 'p_VectorNav_to_LeftToeFront', export_path, encoders);
export_function(jacobian(H_I1Lf(1:3,end),encoders), 'Jp_VectorNav_to_LeftToeFront', export_path, encoders);

export_function(H_RL, 'H_RightToeBottom_to_LeftToeBottom', export_path, encoders);
export_function(H_RL(1:3,1:3), 'R_RightToeBottom_to_LeftToeBottom', export_path, encoders);
export_function(H_RL(1:3,end), 'p_RightToeBottom_to_LeftToeBottom', export_path, encoders);
export_function(jacobian(H_RL(1:3,end),encoders), 'Jp_RightToeBottom_to_LeftToeBottom', export_path, encoders);

export_function(H_LR, 'H_LeftToeBottom_to_RightToeBottom', export_path, encoders);
export_function(H_LR(1:3,1:3), 'R_LeftToeBottom_to_RightToeBottom', export_path, encoders);
export_function(H_LR(1:3,end), 'p_LeftToeBottom_to_RightToeBottom', export_path, encoders);
export_function(jacobian(H_LR(1:3,end),encoders), 'Jp_LeftToeBottom_to_RightToeBottom', export_path, encoders);


export_function(H_RbLb, 'H_RightToeBack_to_LeftToeBack', export_path, encoders);
export_function(H_RbLb(1:3,1:3), 'R_RightToeBack_to_LeftToeBack', export_path, encoders);
export_function(H_RbLb(1:3,end), 'p_RightToeBack_to_LeftToeBack', export_path, encoders);
export_function(jacobian(H_RbLb(1:3,end),encoders), 'Jp_RightToeBack_to_LeftToeBack', export_path, encoders);

export_function(H_LbRb, 'H_LeftToeBack_to_RightToeBack', export_path, encoders);
export_function(H_LbRb(1:3,1:3), 'R_LeftToeBack_to_RightToeBack', export_path, encoders);
export_function(H_LbRb(1:3,end), 'p_LeftToeBack_to_RightToeBack', export_path, encoders);
export_function(jacobian(H_LbRb(1:3,end),encoders), 'Jp_LeftToeBack_to_RightToeBack', export_path, encoders);

export_function(H_RfLf, 'H_RightToeFront_to_LeftToeFront', export_path, encoders);
export_function(H_RfLf(1:3,1:3), 'R_RightToeFront_to_LeftToeFront', export_path, encoders);
export_function(H_RfLf(1:3,end), 'p_RightToeFront_to_LeftToeFront', export_path, encoders);
export_function(jacobian(H_RfLf(1:3,end),encoders), 'Jp_RightToeFront_to_LeftToeFront', export_path, encoders);

export_function(H_LfRf, 'H_LeftToeFront_to_RightToeFront', export_path, encoders);
export_function(H_LfRf(1:3,1:3), 'R_LeftToeFront_to_RightToeFront', export_path, encoders);
export_function(H_LfRf(1:3,end), 'p_LeftToeFront_to_RightToeFront', export_path, encoders);
export_function(jacobian(H_LfRf(1:3,end),encoders), 'Jp_LeftToeFront_to_RightToeFront', export_path, encoders);

end


