function [output1] = J_LeftToeFront(var1)
    if coder.target('MATLAB')
        [output1] = J_LeftToeFront_mex(var1);
    else
        coder.cinclude('J_LeftToeFront_src.h');
        
        output1 = zeros(3, 20);

        
        coder.ceval('J_LeftToeFront_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
