function [output1] = PotentialEnergy(var1)
    if coder.target('MATLAB')
        [output1] = PotentialEnergy_mex(var1);
    else
        coder.cinclude('PotentialEnergy_src.h');
        
        output1 = zeros(1, 1);

        
        coder.ceval('PotentialEnergy_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
