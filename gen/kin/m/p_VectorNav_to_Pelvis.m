function [output1] = p_VectorNav_to_Pelvis(var1)
    if coder.target('MATLAB')
        [output1] = p_VectorNav_to_Pelvis_mex(var1);
    else
        coder.cinclude('p_VectorNav_to_Pelvis_src.h');
        
        output1 = zeros(3, 1);

        
        coder.ceval('p_VectorNav_to_Pelvis_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
