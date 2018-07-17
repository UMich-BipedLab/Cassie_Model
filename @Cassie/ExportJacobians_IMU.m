function ExportJacobians_IMU(obj, export_function, export_path)
% Computes the Manipulator Jacobians to be used for state estimation (IMU to contact)
%
%   Author: Ross Hartley
%   Date:   7/17/2018
%
% Encoder Vector
encoders = SymVariable(obj.States.x(7:end));

% --- Frames ---
H_WI = obj.OtherPoints.VectorNav.computeForwardKinematics;
H_WL = obj.ContactPoints.LeftToeBottom.computeForwardKinematics;
H_WR = obj.ContactPoints.RightToeBottom.computeForwardKinematics;
H_IL = H_WI\H_WL; H_IL = subs(H_IL, obj.States.x(1:6), zeros(6,1));
H_IR = H_WI\H_WR; H_IR = subs(H_IR, obj.States.x(1:6), zeros(6,1));
H_LR = H_WL\H_WR; H_LR = subs(H_LR, obj.States.x(1:6), zeros(6,1));
H_RL = H_WR\H_WL; H_RL = subs(H_RL, obj.States.x(1:6), zeros(6,1));

% ---- Compute Jacobians ----

% World to VectorNav (body and spatial Jacobians)
Jb_WI = obj.OtherPoints.VectorNav.computeBodyJacobian(20);
Jb_WI = Jb_WI([4:6,1:3],:);

Js_WI = obj.OtherPoints.VectorNav.computeSpatialJacobian(20);
Js_WI = Js_WI([4:6,1:3],:);

% World to Left Contact and Base to Right Contact (body and spatial Jacobians)
Jb_WL = obj.ContactPoints.LeftToeBottom.computeBodyJacobian(20); 
Jb_WL = Jb_WL([4:6,1:3],:);

Js_WL = obj.ContactPoints.LeftToeBottom.computeSpatialJacobian(20);
Js_WL = Js_WL([4:6,1:3],:);

Jb_WR = obj.ContactPoints.RightToeBottom.computeBodyJacobian(20);
Jb_WR = Jb_WR([4:6,1:3],:);

Js_WR = obj.ContactPoints.RightToeBottom.computeSpatialJacobian(20);
Js_WR = Js_WR([4:6,1:3],:);

% Compute VectorNav to Contact Jacobians
Jb_IL = -Adjoint(inv(H_IL))*Jb_WI + Jb_WL;
Jb_IL = subs(Jb_IL, obj.States.x(1:6), zeros(6,1));
Jb_IL = Jb_IL(:,7:end);

Js_IL = Adjoint(inv(H_WI))*(-Js_WI + Js_WL);
Js_IL = subs(Js_IL, obj.States.x(1:6), zeros(6,1));
Js_IL = Js_IL(:,7:end);

Jb_IR = -Adjoint(inv(H_IR))*Jb_WI + Jb_WR;
Jb_IR = subs(Jb_IR, obj.States.x(1:6), zeros(6,1));
Jb_IR = Jb_IR(:,7:end);

Js_IR = Adjoint(inv(H_WI))*(-Js_WI + Js_WR);
Js_IR = subs(Js_IR, obj.States.x(1:6), zeros(6,1));
Js_IR = Js_IR(:,7:end);

% Compute Contact to Contact Jacobians
Jb_LR = -Adjoint(inv(H_LR))*Jb_WL + Jb_WR;
Jb_LR = subs(Jb_LR, obj.States.x(1:6), zeros(6,1));
Jb_LR = Jb_LR(:,7:end);

Js_LR = Adjoint(inv(H_WL))*(-Js_WL + Js_WR);
Js_LR = subs(Js_LR, obj.States.x(1:6), zeros(6,1));
Js_LR = Js_LR(:,7:end);

Jb_RL = -Adjoint(inv(H_RL))*Jb_WR + Jb_WL;
Jb_RL = subs(Jb_RL, obj.States.x(1:6), zeros(6,1));
Jb_RL = Jb_RL(:,7:end);

Js_RL = Adjoint(inv(H_WR))*(-Js_WR + Js_WL);
Js_RL = subs(Js_RL, obj.States.x(1:6), zeros(6,1));
Js_RL = Js_RL(:,7:end);


% ---- Export Functions ----
export_function(Jb_IL, 'Jb_VectorNav_to_LeftToeBottom', export_path, encoders);
export_function(Jb_IL(1:3,:), 'Jwb_VectorNav_to_LeftToeBottom', export_path, encoders);
export_function(Jb_IL(4:6,:), 'Jvb_VectorNav_to_LeftToeBottom', export_path, encoders);

export_function(Js_IL, 'Js_VectorNav_to_LeftToeBottom', export_path, encoders);
export_function(Js_IL(1:3,:), 'Jws_VectorNav_to_LeftToeBottom', export_path, encoders);
export_function(Js_IL(4:6,:), 'Jvs_VectorNav_to_LeftToeBottom', export_path, encoders);

export_function(Jb_IR, 'Jb_VectorNav_to_RightToeBottom', export_path, encoders);
export_function(Jb_IR(1:3,:), 'Jwb_VectorNav_to_RightToeBottom', export_path, encoders);
export_function(Jb_IR(4:6,:), 'Jvb_VectorNav_to_RightToeBottom', export_path, encoders);

export_function(Js_IR, 'Js_VectorNav_to_RightToeBottom', export_path, encoders);
export_function(Js_IR(1:3,:), 'Jws_VectorNav_to_RightToeBottom', export_path, encoders);
export_function(Js_IR(4:6,:), 'Jvs_VectorNav_to_RightToeBottom', export_path, encoders);

export_function(Jb_LR, 'Jb_LeftToeBottom_to_RightToeBottom', export_path, encoders);
export_function(Jb_LR(1:3,:), 'Jwb_LeftToeBottom_to_RightToeBottom', export_path, encoders);
export_function(Jb_LR(4:6,:), 'Jvb_LeftToeBottom_to_RightToeBottom', export_path, encoders);

export_function(Jb_RL, 'Jb_RightToeBottom_to_LeftToeBottom', export_path, encoders);
export_function(Jb_RL(1:3,:), 'Jwb_RightToeBottom_to_LeftToeBottom', export_path, encoders);
export_function(Jb_RL(4:6,:), 'Jvb_RightToeBottom_to_LeftToeBottom', export_path, encoders);

export_function(Js_LR, 'Js_LeftToeBottom_to_RightToeBottom', export_path, encoders);
export_function(Js_LR(1:3,:), 'Jws_LeftToeBottom_to_RightToeBottom', export_path, encoders);
export_function(Js_LR(4:6,:), 'Jvs_LeftToeBottom_to_RightToeBottom', export_path, encoders);

export_function(Js_RL, 'Js_RightToeBottom_to_LeftToeBottom', export_path, encoders);
export_function(Js_RL(1:3,:), 'Jws_RightToeBottom_to_LeftToeBottom', export_path, encoders);
export_function(Js_RL(4:6,:), 'Jvs_RightToeBottom_to_LeftToeBottom', export_path, encoders);


end


function [ Ad ] = Adjoint( X )
%ADJOINT_SE3 Computes the adjoint of SE(3)
Ad = [X(1:3,1:3), zeros(3);
      skew(X(1:3,4))*X(1:3,1:3), X(1:3,1:3)];
end

function [Ax] = skew(v)
% Convert from vector to skew symmetric matrix
Ax = [    0, -v(3),  v(2);
       v(3),     0, -v(1);
      -v(2),  v(1),     0];
end
