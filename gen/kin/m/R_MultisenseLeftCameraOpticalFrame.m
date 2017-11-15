function [output1] = R_MultisenseLeftCameraOpticalFrame(var1)
    if coder.target('MATLAB')
        [output1] = R_MultisenseLeftCameraOpticalFrame_mex(var1);
    else
        coder.cinclude('R_MultisenseLeftCameraOpticalFrame_src.h');
        
        output1 = zeros(3, 3);

        
        coder.ceval('R_MultisenseLeftCameraOpticalFrame_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
