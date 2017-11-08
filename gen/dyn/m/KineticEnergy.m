function [output1] = KineticEnergy(var1,var2)
    if coder.target('MATLAB')
        [output1] = KineticEnergy_mex(var1,var2);
    else
        coder.cinclude('KineticEnergy_src.h');
        
        output1 = zeros(1, 1);

        
        coder.ceval('KineticEnergy_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) ,coder.rref(var2) );
    end
end
