function [ ] = export_slrt( exprs, name, export_path, vars )
res_path = [fileparts(which('Export.export_slrt')), '\res\'];
current_dir = pwd;
cd(export_path);
if ~exist('src/','dir')
    mkdir('src');
end
if ~exist('mex/','dir')
    mkdir('mex');
end
if ~exist('m/','dir')
    mkdir('m');
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
movefile *mex* mex
delete *.cc
delete *.hh
cd(current_dir);

% Generate c code
export(exprs{:}, 'File', [export_path,name,'_src'], 'Vars', vars, 'TemplateHeader', [res_path, 'template_slrt.h'], 'TemplateFile', [res_path, 'template_slrt.c'], 'BuildMex', false, 'ForceExport', true);
cd(export_path);
!ren *.cc *.c
!ren *.hh *.h
movefile *.c* src
movefile *.h* src
cd(current_dir);

% Generate Matlab wrapper function
export(exprs{:}, 'File', [export_path,name], 'Vars', vars, 'TemplateHeader', [res_path, 'template_slrt.h'], 'TemplateFile', [res_path, 'template_slrt.m'], 'BuildMex', false, 'ForceExport', true);
cd(export_path);
!ren *.cc *.m
!ren *.hh *.garbage
movefile *.m* m
delete *.garbage
cd(current_dir);

end

