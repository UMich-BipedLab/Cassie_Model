function [output1] = p_MultisenseLeftCameraFrame(var1)
    if coder.target('MATLAB')
        [output1] = p_MultisenseLeftCameraFrame_mex(var1);
    else
        coder.cinclude('p_MultisenseLeftCameraFrame_src.h');
        
        output1 = zeros(3, 1);

        
        coder.ceval('p_MultisenseLeftCameraFrame_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
