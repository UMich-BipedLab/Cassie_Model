function [output1] = H_MultisenseRightCameraFrame(var1)
    if coder.target('MATLAB')
        [output1] = H_MultisenseRightCameraFrame_mex(var1);
    else
        coder.cinclude('H_MultisenseRightCameraFrame_src.h');
        
        output1 = zeros(4, 4);

        
        coder.ceval('H_MultisenseRightCameraFrame_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
