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
[Q_I1L, S_I1L, Sigma_dagger_I1L, Sigma_I1L, Sigma_R_I1L, Sigma_p_I1L, Jv_I1L, Jw_I1L] = Compute_FK_Covariance(frames, obj.States.x);

frames = {obj.OtherPoints.MultisenseAccelerometerFrame, joint_frames{:}, obj.ContactPoints.LeftToeBottom};
[Q_I2L, S_I2L, Sigma_dagger_I2L, Sigma_I2L, Sigma_R_I2L, Sigma_p_I2L, Jv_I2L, Jw_I2L] = Compute_FK_Covariance(frames, obj.States.x);

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
[Q_I1R, S_I1R, Sigma_dagger_I1R, Sigma_I1R, Sigma_R_I1R, Sigma_p_I1R, Jv_I1R, Jw_I1R] = Compute_FK_Covariance(frames, obj.States.x);

frames = {obj.OtherPoints.MultisenseAccelerometerFrame, joint_frames{:}, obj.ContactPoints.RightToeBottom};
[Q_I2R, S_I2R, Sigma_dagger_I2R, Sigma_I2R, Sigma_R_I2R, Sigma_p_I2R, Jv_I2R, Jw_I2R] = Compute_FK_Covariance(frames, obj.States.x);

% Export
N = length(frames)-1;
sigmas = SymVariable('sigma', [N-1,1]);

export_function(Jv_I1L, 'Jv_VectorNav_to_LeftToeBottom', export_path, {encoders});
export_function(Jw_I1L, 'Jw_VectorNav_to_LeftToeBottom', export_path, {encoders});
export_function(Sigma_I1L, 'Sigma_VectorNav_to_LeftToeBottom', export_path, {encoders, sigmas});
export_function(Sigma_R_I1L, 'Sigma_R_VectorNav_to_LeftToeBottom', export_path, {encoders, sigmas});
export_function(Sigma_p_I1L, 'Sigma_p_VectorNav_to_LeftToeBottom', export_path, {encoders, sigmas});
export_function(Q_I1L, 'Q_VectorNav_to_LeftToeBottom', export_path, {encoders});
export_function(S_I1L, 'S_VectorNav_to_LeftToeBottom', export_path, {encoders});
export_function(Sigma_dagger_I1L, 'Sigma_dagger_VectorNav_to_LeftToeBottom', export_path, {sigmas});

export_function(Jv_I1R, 'Jv_VectorNav_to_RightToeBottom', export_path, {encoders});
export_function(Jw_I1R, 'Jw_VectorNav_to_RightToeBottom', export_path, {encoders});
export_function(Sigma_I1R, 'Sigma_VectorNav_to_RightToeBottom', export_path, {encoders, sigmas});
export_function(Sigma_R_I1R, 'Sigma_R_VectorNav_to_RightToeBottom', export_path, {encoders, sigmas});
export_function(Sigma_p_I1R, 'Sigma_p_VectorNav_to_RightToeBottom', export_path, {encoders, sigmas});
export_function(Q_I1R, 'Q_VectorNav_to_RightToeBottom', export_path, {encoders});
export_function(S_I1R, 'S_VectorNav_to_RightToeBottom', export_path, {encoders});
export_function(Sigma_dagger_I1R, 'Sigma_dagger_VectorNav_to_RightToeBottom', export_path, {sigmas});

export_function(Jv_I2L, 'Jv_MultisenseIMU_to_LeftToeBottom', export_path, {encoders});
export_function(Jw_I2L, 'Jw_MultisenseIMU_to_LeftToeBottom', export_path, {encoders});
export_function(Sigma_I2L, 'Sigma_MultisenseIMU_to_LeftToeBottom', export_path, {encoders, sigmas});
export_function(Sigma_R_I2L, 'Sigma_R_MultisenseIMU_to_LeftToeBottom', export_path, {encoders, sigmas});
export_function(Sigma_p_I2L, 'Sigma_p_MultisenseIMU_to_LeftToeBottom', export_path, {encoders, sigmas});
export_function(Q_I2L, 'Q_MultisenseIMU_to_LeftToeBottom', export_path, {encoders});
export_function(S_I2L, 'S_MultisenseIMU_to_LeftToeBottom', export_path, {encoders});
export_function(Sigma_dagger_I2L, 'Sigma_dagger_MultisenseIMU_to_LeftToeBottom', export_path, {sigmas});

export_function(Jv_I2R, 'Jv_MultisenseIMU_to_RightToeBottom', export_path, {encoders});
export_function(Jw_I2R, 'Jw_MultisenseIMU_to_RightToeBottom', export_path, {encoders});
export_function(Sigma_I2R, 'Sigma_MultisenseIMU_to_RightToeBottom', export_path, {encoders, sigmas});
export_function(Sigma_R_I2R, 'Sigma_R_MultisenseIMU_to_RightToeBottom', export_path, {encoders, sigmas});
export_function(Sigma_p_I2R, 'Sigma_p_MultisenseIMU_to_RightToeBottom', export_path, {encoders, sigmas});
export_function(Q_I2R, 'Q_MultisenseIMU_to_RightToeBottom', export_path, {encoders});
export_function(S_I2R, 'S_MultisenseIMU_to_RightToeBottom', export_path, {encoders});
export_function(Sigma_dagger_I2R, 'Sigma_dagger_MultisenseIMU_to_RightToeBottom', export_path, {sigmas});

end


function [Q, S, Sigma_dagger, Sigma, Sigma_R, Sigma_p, Jv, Jw] = Compute_FK_Covariance( frames, x )
% Computes covariance matrix for rotational/translational noise
%   
%   Author: Ross Hartley
%   Date:   11/14/2017
%   

N = length(frames)-1;
sigmas = SymVariable('sigma', [N-1,1]);

Hw1 = frames{1}.computeForwardKinematics;
HwN1 = frames{N+1}.computeForwardKinematics;
H1N1 = Hw1\HwN1;

for i = 1:(N-1)
    Hwi1 = frames{i+1}.computeForwardKinematics;
    H1i1 = Hw1\Hwi1;
    sigma_i_dagger = frames{i+1}.Reference.Axis' * sigmas(i);
    Hi1N1 = Hwi1\HwN1; % Transform from i+1 to N+1 (Contact)
    
    for n = i:(N-1)
        Hwn1 = frames{n+1}.computeForwardKinematics;
        Hwn2 = frames{n+2}.computeForwardKinematics;
        Hn1n2 = Hwn1\Hwn2;
        tn1 = Hn1n2(1:3,end); 
        tn1 = subs(tn1, x, zeros(20,1)); % Should be a constant
        
        % Translation from n to n + 1
        H1n1 = Hw1\Hwn1;   % Transform from 1 to n+1
        Hi1n1 = Hwi1\Hwn1; % Transform from i+1 to n+1
        
        % Compute Sum
        if n == i
            Si_sum = H1n1(1:3,1:3)*Angles.skew(tn1)*Hi1n1(1:3,1:3)';
        else
            Si_sum = Si_sum + H1n1(1:3,1:3)*Angles.skew(tn1)*Hi1n1(1:3,1:3)';
        end
    end
    
    % Used for computing manipulator jacobian
    zi = H1i1(1:3,1:3)*frames{i+1}.Reference.Axis';
    On = H1N1(1:3,end);
    Oi = H1i1(1:3,end);

    % Build Covariance Matrix
    if i == 1
        Jv = cross(zi', On - Oi)';
        Jw = zi;
        Q = Hi1N1(1:3,1:3)';
        S = -Si_sum;
        sigma_dagger = sigma_i_dagger;
    else
        Jv = [Jv, cross(zi', On - Oi)'];
        Jw = [Jw, zi];
        Q = [Q, Hi1N1(1:3,1:3)'];
        S = [S, -Si_sum];
        sigma_dagger = [sigma_dagger; sigma_i_dagger];
    end
end
Jv = subs(Jv, x(1:6), zeros(6,1));
Jw = subs(Jw, x(1:6), zeros(6,1));
J = [Jw; Jv];
Q = subs(Q, x(1:6), zeros(6,1));  
S = subs(S, x(1:6), zeros(6,1)); 
Sigma_dagger = abs(diag(sigma_dagger));
Sigma = [Q; S] * Sigma_dagger * [Q; S].';
Sigma_R = Q * Sigma_dagger * Q.';
Sigma_p = S * Sigma_dagger * S.';

end


