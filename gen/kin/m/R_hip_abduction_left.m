function [output1] = R_hip_abduction_left(var1)
    if coder.target('MATLAB')
        [output1] = R_hip_abduction_left_mex(var1);
    else
        coder.cinclude('R_hip_abduction_left_src.h');
        
        output1 = zeros(3, 3);

        
        coder.ceval('R_hip_abduction_left_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
