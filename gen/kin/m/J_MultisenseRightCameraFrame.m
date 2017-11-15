function [output1] = J_MultisenseRightCameraFrame(var1)
    if coder.target('MATLAB')
        [output1] = J_MultisenseRightCameraFrame_mex(var1);
    else
        coder.cinclude('J_MultisenseRightCameraFrame_src.h');
        
        output1 = zeros(3, 20);

        
        coder.ceval('J_MultisenseRightCameraFrame_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
