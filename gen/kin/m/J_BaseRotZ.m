function [output1] = J_BaseRotZ(var1)
    if coder.target('MATLAB')
        [output1] = J_BaseRotZ_mex(var1);
    else
        coder.cinclude('J_BaseRotZ_src.h');
        
        output1 = zeros(3, 20);

        
        coder.ceval('J_BaseRotZ_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
