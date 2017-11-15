function [output1] = J_MultisenseLeftCameraFrame(var1)
    if coder.target('MATLAB')
        [output1] = J_MultisenseLeftCameraFrame_mex(var1);
    else
        coder.cinclude('J_MultisenseLeftCameraFrame_src.h');
        
        output1 = zeros(3, 20);

        
        coder.ceval('J_MultisenseLeftCameraFrame_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
