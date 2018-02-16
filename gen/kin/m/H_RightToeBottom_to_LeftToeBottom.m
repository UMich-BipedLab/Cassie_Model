function [output1] = H_RightToeBottom_to_LeftToeBottom(var1)
    if coder.target('MATLAB')
        [output1] = H_RightToeBottom_to_LeftToeBottom_mex(var1);
    else
        coder.cinclude('H_RightToeBottom_to_LeftToeBottom_src.h');
        
        output1 = zeros(4, 4);

        
        coder.ceval('H_RightToeBottom_to_LeftToeBottom_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
