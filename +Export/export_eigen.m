function [ ] = export_eigen( exprs, name, export_path, vars )
res_path = [fileparts(which('Export.export_eigen')), '\res\'];
current_dir = pwd;
cd(export_path);
if ~exist('mex/','dir')
    mkdir('mex');
end
if ~exist('src/','dir')
    mkdir('src');
end
if ~exist('include/','dir')
    mkdir('include');
end
cd(current_dir);

if ~iscell(exprs)
    exprs = {exprs};
end

if ~iscell(vars)
    vars = {vars};
end

% Generate mex file
export(exprs{:}, 'File', [export_path,name,'_mex'], 'Vars', vars, 'ForceExport', true);
cd(export_path);
movefile *.mex* mex
delete *.cc
delete *.hh
cd(current_dir);

% Generate c code
export(exprs{:}, 'File', [export_path,name], 'Vars', vars, 'TemplateHeader', [res_path, 'template_eigen.h'], 'TemplateFile', [res_path, 'template_eigen.c'], 'BuildMex', false, 'ForceExport', true);
cd(export_path);
!rename *.cc *.cpp
!rename *.hh *.h
movefile *.cpp* src
movefile *.h* include
cd(current_dir);

end

