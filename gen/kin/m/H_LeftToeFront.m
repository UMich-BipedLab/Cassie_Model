function [output1] = H_LeftToeFront(var1)
    if coder.target('MATLAB')
        [output1] = H_LeftToeFront_mex(var1);
    else
        coder.cinclude('H_LeftToeFront_src.h');
        
        output1 = zeros(4, 4);

        
        coder.ceval('H_LeftToeFront_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
