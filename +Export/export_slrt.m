function [ ] = export_slrt( exprs, name, export_path, vars )
res_path = fullfile(fileparts(which('Export.export_slrt')), 'res');

src_export_path = fullfile(export_path,'src');
mex_export_path = fullfile(export_path,'mex');
mfile_export_path = fullfile(export_path,'m');

if ~exist(src_export_path,'dir')
    mkdir(src_export_path);
end
if ~exist(mex_export_path,'dir')
    mkdir(mex_export_path);
end
if ~exist(mfile_export_path,'dir')
    mkdir(mfile_export_path);
end


if ~iscell(exprs)
    exprs = {exprs};
end

if ~iscell(vars)
    vars = {vars};
end

% Generate mex file
export(exprs{:}, 'File', fullfile(mex_export_path,[name,'_mex']), ...
    'Vars', vars, 'ForceExport', true);

% movefile([name,'_mex','.',mexext],'mex'); % movefile *mex* mex
delete(fullfile(mex_export_path,[name,'_mex','.cc'])); % delete *.cc
delete(fullfile(mex_export_path,[name,'_mex','.hh'])); % delete *.hh
% cd(current_dir);

% Generate c code
export(exprs{:}, 'File', fullfile(src_export_path,[name,'_src']), ...
    'Vars', vars, ...
    'TemplateHeader', fullfile(res_path, 'template_slrt.h'), ...
    'TemplateFile', fullfile(res_path, 'template_slrt.c'), ...
    'BuildMex', false, 'ForceExport', true);

movefile(fullfile(src_export_path,[name,'_src','.cc']),...
    fullfile(src_export_path,[name,'_src','.c']));
movefile(fullfile(src_export_path,[name,'_src','.hh']),...
    fullfile(src_export_path,[name,'_src','.h']));
% !ren *.cc *.c
% !ren *.hh *.h
% movefile *.c* src
% movefile *.h* src


% Generate Matlab wrapper function
export(exprs{:}, 'File', fullfile(mfile_export_path,name),...
    'Vars', vars, ...
    'TemplateHeader', fullfile(res_path, 'template_slrt.h'), ...
    'TemplateFile', fullfile(res_path, 'template_slrt.m'), ...
    'BuildMex', false, 'ForceExport', true);

movefile(fullfile(mfile_export_path,[name,'.cc']),...
    fullfile(mfile_export_path,[name,'.m']));
delete(fullfile(mfile_export_path,[name,'.hh']));
% !ren *.cc *.m
% !ren *.hh *.garbage
% movefile *.m* m
% delete *.garbage

% 
end

