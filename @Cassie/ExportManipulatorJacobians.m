function ExportManipulatorJacobians(obj, export_function, export_path)
% Computes the Manipulator Jacobians to be used for state estimation (IMU to contact)
%
%   Author: Ross Hartley
%   Date:   2/26/2018
%
% Encoder Vector
encoders = SymVariable(obj.States.x(7:end));

% --- Frames ---
H_IL = obj.ContactPoints.LeftToeBottom.computeForwardKinematics;
H_IR = obj.ContactPoints.RightToeBottom.computeForwardKinematics;
H_LR = H_IL\H_IR; H_LR = subs(H_LR, obj.States.x(1:6), zeros(6,1));
H_RL = H_IR\H_IL; H_RL = subs(H_RL, obj.States.x(1:6), zeros(6,1));

% ---- Compute Jacobians ----

% Base to Left Contact and Base to Right Contact Manipulator Jacobians
J_IL = obj.ContactPoints.LeftToeBottom.computeBodyJacobian(20);
J_IL = J_IL([4:6,1:3],7:end);
J_IL = subs(J_IL, obj.States.x(1:6), zeros(6,1));

J_IR = obj.ContactPoints.RightToeBottom.computeBodyJacobian(20);
J_IR = J_IR([4:6,1:3],7:end);
J_IR = subs(J_IR, obj.States.x(1:6), zeros(6,1));

% Left Contact to Right Contact and Right Contact to Left Contact Manipulator Jacobians
J_LR = -Angles.Adjoint_SE3(inv(H_LR))*J_IL + J_IR;
J_LR = subs(J_LR, obj.States.x(1:6), zeros(6,1));

J_RL = -Angles.Adjoint_SE3(inv(H_RL))*J_IR + J_IL;
J_RL = subs(J_RL, obj.States.x(1:6), zeros(6,1));

% ---- Export Functions ----
export_function(J_IL, 'J_VectorNav_to_LeftToeBottom', export_path, encoders);
export_function(J_IL(1:3,:), 'Jw_VectorNav_to_LeftToeBottom', export_path, encoders);
export_function(J_IL(4:6,:), 'Jv_VectorNav_to_LeftToeBottom', export_path, encoders);

export_function(J_IR, 'J_VectorNav_to_RightToeBottom', export_path, encoders);
export_function(J_IR(1:3,:), 'Jw_VectorNav_to_RightToeBottom', export_path, encoders);
export_function(J_IR(4:6,:), 'Jv_VectorNav_to_RightToeBottom', export_path, encoders);

export_function(J_LR, 'J_LeftToeBottom_to_RightToeBottom', export_path, encoders);
export_function(J_LR(1:3,:), 'Jw_LeftToeBottom_to_RightToeBottom', export_path, encoders);
export_function(J_LR(4:6,:), 'Jv_LeftToeBottom_to_RightToeBottom', export_path, encoders);

export_function(J_RL, 'J_RightToeBottom_to_LeftToeBottom', export_path, encoders);
export_function(J_RL(1:3,:), 'Jw_RightToeBottom_to_LeftToeBottom', export_path, encoders);
export_function(J_RL(4:6,:), 'Jv_RightToeBottom_to_LeftToeBottom', export_path, encoders);

end


