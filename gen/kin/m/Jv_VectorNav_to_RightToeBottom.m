function [output1] = Jv_VectorNav_to_RightToeBottom(var1)
    if coder.target('MATLAB')
        [output1] = Jv_VectorNav_to_RightToeBottom_mex(var1);
    else
        coder.cinclude('Jv_VectorNav_to_RightToeBottom_src.h');
        
        output1 = zeros(3, 14);

        
        coder.ceval('Jv_VectorNav_to_RightToeBottom_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
