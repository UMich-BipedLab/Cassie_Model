%% Setup
clear; clc;
cur = pwd;
addpath(genpath(cur));
export_path = fullfile(cur, 'gen/');
if ~exist(export_path,'dir')
    mkdir(export_path);
    addpath(export_path);
end

% Load Settings
load_model = true;
delay_set = true;

% Add FROST
FROST_PATH = '../frost-dev';
addpath(FROST_PATH)
frost_addpath;

% Add model paths
addpath(genpath('urdf'));

%% Create Model and Export Kinematics 
% Load model
cassie = CASSIE('urdf/cassie.urdf');

if load_model
    % Load previously saved model
    cassie.loadDynamics([export_path,'sym/'], delay_set)
else
    % Export Kinematics
    if ~exist([export_path,'kin/'],'dir')
        mkdir([export_path,'kin/']);
    end
    cassie.ExportKinematics([export_path,'kin/']);

    % Export Dynamics
    if ~exist([export_path,'dyn/'],'dir')
        mkdir([export_path,'dyn/']);
    end
    cassie.configureDynamics();
    cassie.compile([export_path,'dyn/']);

    % Save
    if ~exist([export_path,'sym/'],'dir')
        mkdir([export_path,'sym/']);
    end
    cassie.saveExpression([export_path,'sym/']);
end

