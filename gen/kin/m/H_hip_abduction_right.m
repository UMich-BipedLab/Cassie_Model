function [output1] = H_hip_abduction_right(var1)
    if coder.target('MATLAB')
        [output1] = H_hip_abduction_right_mex(var1);
    else
        coder.cinclude('H_hip_abduction_right_src.h');
        
        output1 = zeros(4, 4);

        
        coder.ceval('H_hip_abduction_right_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
