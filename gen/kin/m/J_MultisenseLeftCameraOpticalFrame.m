function [output1] = J_MultisenseLeftCameraOpticalFrame(var1)
    if coder.target('MATLAB')
        [output1] = J_MultisenseLeftCameraOpticalFrame_mex(var1);
    else
        coder.cinclude('J_MultisenseLeftCameraOpticalFrame_src.h');
        
        output1 = zeros(3, 20);

        
        coder.ceval('J_MultisenseLeftCameraOpticalFrame_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
