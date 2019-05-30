% Reset 
clear; matlabrc; restoredefaultpath; clc;
cur = pwd;
EXPORT_PATH = fullfile(cur, 'gen');
if ~exist(EXPORT_PATH,'dir')
    mkdir(EXPORT_PATH);
    addpath(EXPORT_PATH);
end

% Add FROST
FROST_PATH = '../frost-dev';
addpath(FROST_PATH)
frost_addpath;

% Add model paths
addpath(genpath('urdf'));

%% Load model
cassie = Cassie(fullfile('urdf','cassie.urdf'));

%% Export Kinematics
if ~exist(fullfile(EXPORT_PATH,'kin'),'dir')
    mkdir(fullfile(EXPORT_PATH,'kin'));
    mkdir(fullfile(EXPORT_PATH,'kin','slrt'));
    mkdir(fullfile(EXPORT_PATH,'kin','eigen'));
end
cassie.ExportKinematics(@Export.export_slrt, fullfile(EXPORT_PATH,'kin','slrt'));
cassie.ExportKinematics(@Export.export_eigen, fullfile(EXPORT_PATH,'kin','eigen'));    

%% Export Dynamics
if ~exist(fullfile(EXPORT_PATH,'dyn'),'dir')
    mkdir(fullfile(EXPORT_PATH,'dyn'));
    mkdir(fullfile(EXPORT_PATH,'dyn','slrt'));
    mkdir(fullfile(EXPORT_PATH,'dyn','eigen'));
end
cassie.configureDynamics('DelayCoriolisSet',false);
cassie.ExportDynamics(@Export.export_slrt, fullfile(EXPORT_PATH,'dyn','slrt'));    
cassie.ExportDynamics(@Export.export_eigen, fullfile(EXPORT_PATH,'dyn','eigen'));    
%cassie.compile([EXPORT_PATH,'dyn/']);

%% Compute Manipulator Jacobians
cassie.ExportKinematics_IMU(@Export.export_slrt, fullfile(EXPORT_PATH,'kin','slrt'));
cassie.ExportKinematics_IMU(@Export.export_eigen, fullfile(EXPORT_PATH,'kin','eigen'));
    
cassie.ExportJacobians_IMU(@Export.export_slrt, fullfile(EXPORT_PATH,'kin','slrt'));
cassie.ExportJacobians_IMU(@Export.export_eigen, fullfile(EXPORT_PATH,'kin','eigen'));

%% Export Energy
%cassie.ExportEnergy(@Export.export_slrt, [EXPORT_PATH,'dyn/']);

%% Compute CoM position/velocity
% cassie.ExportCoM(@Export.export_slrt, [EXPORT_PATH,'kin/']);

%% Compute/export dynamics
% cassie.ExportHolonomicConstraints(@Export.export_slrt, [EXPORT_PATH,'dyn/']);
% cassie.ExportMomentum(@Export.export_slrt, [EXPORT_PATH,'dyn/']);




