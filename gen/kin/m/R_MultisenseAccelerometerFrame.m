function [output1] = R_MultisenseAccelerometerFrame(var1)
    if coder.target('MATLAB')
        [output1] = R_MultisenseAccelerometerFrame_mex(var1);
    else
        coder.cinclude('R_MultisenseAccelerometerFrame_src.h');
        
        output1 = zeros(3, 3);

        
        coder.ceval('R_MultisenseAccelerometerFrame_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
