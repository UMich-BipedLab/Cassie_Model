function [output1] = H_BaseRotZ(var1)
    if coder.target('MATLAB')
        [output1] = H_BaseRotZ_mex(var1);
    else
        coder.cinclude('H_BaseRotZ_src.h');
        
        output1 = zeros(4, 4);

        
        coder.ceval('H_BaseRotZ_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
