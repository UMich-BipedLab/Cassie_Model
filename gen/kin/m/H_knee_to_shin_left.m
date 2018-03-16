function [output1] = H_knee_to_shin_left(var1)
    if coder.target('MATLAB')
        [output1] = H_knee_to_shin_left_mex(var1);
    else
        coder.cinclude('H_knee_to_shin_left_src.h');
        
        output1 = zeros(4, 4);

        
        coder.ceval('H_knee_to_shin_left_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
