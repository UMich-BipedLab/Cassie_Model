function ExportKinematics_IMU_Cov(obj, export_function, export_path)
% Computes the Forward Kinematics Covariance Matrix (IMU to contact)
%
%   Author: Ross Hartley
%   Date:   11/15/2017
%
% Encoder Vector
encoders = SymVariable(obj.States.x(7:end));

% Left Foot Contact Frame
joints = obj.Joints(7:13);
joint_frames = cell(1,length(joints));
for i = 1:length(joints)
    joint_frames{i} = CoordinateFrame(...
        'Name',joints(i).Name,...
        'Reference',joints(i),...
        'Offset',[0, 0, 0],...
        'R',[0, 0, 0]);
end

frames = {obj.OtherPoints.VectorNav, joint_frames{:}, obj.ContactPoints.LeftToeBottom};
FK_Cov_I1L = Compute_FK_Covariance(frames, obj.States.x);
FK_Cov_I1L = subs(FK_Cov_I1L, obj.States.x(1:6), zeros(6,1));  

frames = {obj.OtherPoints.MultisenseAccelerometerFrame, joint_frames{:}, obj.ContactPoints.LeftToeBottom};
FK_Cov_I2L = Compute_FK_Covariance(frames, obj.States.x);
FK_Cov_I2L = subs(FK_Cov_I2L, obj.States.x(1:6), zeros(6,1));  

% Right Foot Contact Frame
joints = obj.Joints(14:end);
joint_frames = cell(1,length(joints));
for i = 1:length(joints)
    joint_frames{i} = CoordinateFrame(...
        'Name',joints(i).Name,...
        'Reference',joints(i),...
        'Offset',[0, 0, 0],...
        'R',[0, 0, 0]);
end

frames = {obj.OtherPoints.VectorNav, joint_frames{:}, obj.ContactPoints.RightToeBottom};
FK_Cov_I1R = Compute_FK_Covariance(frames, obj.States.x);
FK_Cov_I1R = subs(FK_Cov_I1R, obj.States.x(1:6), zeros(6,1));  

frames = {obj.OtherPoints.MultisenseAccelerometerFrame, joint_frames{:}, obj.ContactPoints.RightToeBottom};
FK_Cov_I2R = Compute_FK_Covariance(frames, obj.States.x);
FK_Cov_I2R = subs(FK_Cov_I2R, obj.States.x(1:6), zeros(6,1));  

% Export
N = length(frames)-1;
sigmas = SymVariable('sigma', [N-1,1]);
export_function(FK_Cov_I1L, 'Sigma_VectorNav_to_LeftToeBottom', export_path, {encoders, sigmas});
export_function(FK_Cov_I1R, 'Sigma_VectorNav_to_RightToeBottom', export_path, {encoders, sigmas});
export_function(FK_Cov_I2L, 'Sigma_MultisenseIMU_to_LeftToeBottom', export_path, {encoders, sigmas});
export_function(FK_Cov_I2R, 'Sigma_MultisenseIMU_to_RightToeBottom', export_path, {encoders, sigmas});

end
