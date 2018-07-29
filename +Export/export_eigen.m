function [ ] = export_eigen( exprs, name, export_path, vars )
res_path = fullfile(fileparts(which('Export.export_slrt')), 'res');

src_export_path = fullfile(export_path,'src');
mex_export_path = fullfile(export_path,'mex');
inc_export_path = fullfile(export_path,'include');

if ~exist(src_export_path,'dir')
    mkdir(src_export_path);
end
if ~exist(mex_export_path,'dir')
    mkdir(mex_export_path);
end
if ~exist(inc_export_path,'dir')
    mkdir(inc_export_path);
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
export(exprs{:}, 'File', fullfile(export_path,name), ...
    'Vars', vars, ...
    'TemplateHeader', fullfile(res_path, 'template_eigen.h'), ...
    'TemplateFile', fullfile(res_path, 'template_eigen.c'), ...
    'BuildMex', false, 'ForceExport', true);

movefile(fullfile(export_path,[name,'.cc']),...
    fullfile(src_export_path,[name,'.cpp']));
movefile(fullfile(export_path,[name,'.hh']),...
    fullfile(inc_export_path,[name,'.h']));
% !rename *.cc *.cpp
% !rename *.hh *.h
% movefile *.cpp* src
% movefile *.h* include
% cd(current_dir);

end

