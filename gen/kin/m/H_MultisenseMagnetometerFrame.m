function [output1] = H_MultisenseMagnetometerFrame(var1)
    if coder.target('MATLAB')
        [output1] = H_MultisenseMagnetometerFrame_mex(var1);
    else
        coder.cinclude('H_MultisenseMagnetometerFrame_src.h');
        
        output1 = zeros(4, 4);

        
        coder.ceval('H_MultisenseMagnetometerFrame_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
