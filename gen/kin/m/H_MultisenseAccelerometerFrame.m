function [output1] = H_MultisenseAccelerometerFrame(var1)
    if coder.target('MATLAB')
        [output1] = H_MultisenseAccelerometerFrame_mex(var1);
    else
        coder.cinclude('H_MultisenseAccelerometerFrame_src.h');
        
        output1 = zeros(4, 4);

        
        coder.ceval('H_MultisenseAccelerometerFrame_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
