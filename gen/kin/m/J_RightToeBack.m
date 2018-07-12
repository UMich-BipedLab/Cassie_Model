function [output1] = J_RightToeBack(var1)
    if coder.target('MATLAB')
        [output1] = J_RightToeBack_mex(var1);
    else
        coder.cinclude('J_RightToeBack_src.h');
        
        output1 = zeros(3, 20);

        
        coder.ceval('J_RightToeBack_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
