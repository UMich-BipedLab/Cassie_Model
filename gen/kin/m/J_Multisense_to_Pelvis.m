function [output1] = J_Multisense_to_Pelvis(var1)
    if coder.target('MATLAB')
        [output1] = J_Multisense_to_Pelvis_mex(var1);
    else
        coder.cinclude('J_Multisense_to_Pelvis_src.h');
        
        output1 = zeros(3, 14);

        
        coder.ceval('J_Multisense_to_Pelvis_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
