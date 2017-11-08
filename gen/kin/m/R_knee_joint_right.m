function [output1] = R_knee_joint_right(var1)
    if coder.target('MATLAB')
        [output1] = R_knee_joint_right_mex(var1);
    else
        coder.cinclude('R_knee_joint_right_src.h');
        
        output1 = zeros(3, 3);

        
        coder.ceval('R_knee_joint_right_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
