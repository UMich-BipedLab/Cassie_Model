%% Setup
clear; clc;
cur = pwd;
addpath(genpath(cur));
export_path = fullfile(cur, 'gen/');
if ~exist(export_path,'dir')
    mkdir(export_path);
    addpath(export_path);
end

% Add FROST
FROST_PATH = '../frost-dev';
addpath(FROST_PATH)
frost_addpath;

% Add model paths
addpath(genpath('urdf'));

%% Create Model and Export Kinematics 
% Load model
cassie = CASSIE('urdf/cassie.urdf');
cassie.configureDynamics('DelayCoriolisSet',true);

% Export Kinematics
cassie.ExportKinematics([export_path,'kinematics/']);







