function [output1] = J_knee_joint_left(var1)
    if coder.target('MATLAB')
        [output1] = J_knee_joint_left_mex(var1);
    else
        coder.cinclude('J_knee_joint_left_src.h');
        
        output1 = zeros(3, 20);

        
        coder.ceval('J_knee_joint_left_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
