function [output1] = J_RightToeBottom_to_LeftToeBottom(var1)
    if coder.target('MATLAB')
        [output1] = J_RightToeBottom_to_LeftToeBottom_mex(var1);
    else
        coder.cinclude('J_RightToeBottom_to_LeftToeBottom_src.h');
        
        output1 = zeros(6, 14);

        
        coder.ceval('J_RightToeBottom_to_LeftToeBottom_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
