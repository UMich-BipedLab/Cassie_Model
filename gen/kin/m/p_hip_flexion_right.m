function [output1] = p_hip_flexion_right(var1)
    if coder.target('MATLAB')
        [output1] = p_hip_flexion_right_mex(var1);
    else
        coder.cinclude('p_hip_flexion_right_src.h');
        
        output1 = zeros(3, 1);

        
        coder.ceval('p_hip_flexion_right_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
