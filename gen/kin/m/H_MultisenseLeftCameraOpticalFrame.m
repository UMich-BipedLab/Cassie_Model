function [output1] = H_MultisenseLeftCameraOpticalFrame(var1)
    if coder.target('MATLAB')
        [output1] = H_MultisenseLeftCameraOpticalFrame_mex(var1);
    else
        coder.cinclude('H_MultisenseLeftCameraOpticalFrame_src.h');
        
        output1 = zeros(4, 4);

        
        coder.ceval('H_MultisenseLeftCameraOpticalFrame_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
