function [output1] = H_RightToeFront(var1)
    if coder.target('MATLAB')
        [output1] = H_RightToeFront_mex(var1);
    else
        coder.cinclude('H_RightToeFront_src.h');
        
        output1 = zeros(4, 4);

        
        coder.ceval('H_RightToeFront_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
