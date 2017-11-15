function [output1] = R_Multisense_to_Pelvis(var1)
    if coder.target('MATLAB')
        [output1] = R_Multisense_to_Pelvis_mex(var1);
    else
        coder.cinclude('R_Multisense_to_Pelvis_src.h');
        
        output1 = zeros(3, 3);

        
        coder.ceval('R_Multisense_to_Pelvis_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
