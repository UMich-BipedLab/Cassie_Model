%% Setup
clear; clc;
cur = pwd;
addpath(genpath(cur));
EXPORT_PATH = fullfile(cur, 'gen/');
if ~exist(EXPORT_PATH,'dir')
    mkdir(EXPORT_PATH);
    addpath(EXPORT_PATH);
end

% Load Settings
load_model = false;
delay_set = true;

% Add FROST
FROST_PATH = '../frost-dev';
addpath(FROST_PATH)
frost_addpath;

% Add utils
addpath(genpath('../utils'));

% Add model paths
addpath(genpath('urdf'));

%% Create Model and Export Kinematics 
% Load model
cassie = Cassie('urdf/cassie_with_sensors.urdf');

if load_model
    % Load previously saved model
    cassie.loadDynamics([EXPORT_PATH,'sym/'], delay_set)
else
    % Export Kinematics
    if ~exist([EXPORT_PATH,'kin/'],'dir')
        mkdir([EXPORT_PATH,'kin/']);
        mkdir([EXPORT_PATH,'kin_eigen/']);
    end
    cassie.ExportKinematics(@Export.export_slrt, [EXPORT_PATH,'kin/']);

    % Export Dynamics
    if ~exist([EXPORT_PATH,'dyn/'],'dir')
        mkdir([EXPORT_PATH,'dyn/']);
    end
    cassie.configureDynamics('DelayCoriolisSet',false);
    cassie.compile([EXPORT_PATH,'dyn/']);
    
    % Export Energy
    cassie.ExportEnergy(@Export.export_slrt, [EXPORT_PATH,'dyn/']);

    % Save
    if ~exist([EXPORT_PATH,'sym/'],'dir')
        mkdir([EXPORT_PATH,'sym/']);
    end
    cassie.saveExpression([EXPORT_PATH,'sym/']);
end

%% Compute Manipulator Jacobians
if ~exist([EXPORT_PATH,'kin/'],'dir')
    mkdir([EXPORT_PATH,'kin/']);
    mkdir([EXPORT_PATH,'kin_eigen/']);
end
cassie.ExportKinematics_IMU(@Export.export_slrt, [EXPORT_PATH,'kin/']);
cassie.ExportKinematics_IMU(@Export.export_eigen, [EXPORT_PATH,'kin_eigen/']);
    
cassie.ExportManipulatorJacobians(@Export.export_slrt, [EXPORT_PATH,'kin/']);
cassie.ExportManipulatorJacobians(@Export.export_eigen, [EXPORT_PATH,'kin_eigen/']);

%% Compute CoM position/velocity
cassie = Cassie('urdf/cassie_with_sensors.urdf');
% Export Kinematics
if ~exist([EXPORT_PATH,'kin/'],'dir')
    mkdir([EXPORT_PATH,'kin/']);
    mkdir([EXPORT_PATH,'kin_eigen/']);
end
cassie.ExportCoM(@Export.export_slrt, [EXPORT_PATH,'kin/']);


%% Compute/export dynamics
cassie.ExportDynamics(@Export.export_slrt, [EXPORT_PATH,'dyn/']);
cassie.ExportHolonomicConstraints(@Export.export_slrt, [EXPORT_PATH,'dyn/']);
cassie.ExportMomentum(@Export.export_slrt, [EXPORT_PATH,'dyn/']);
