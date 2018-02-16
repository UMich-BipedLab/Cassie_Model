function [output1] = J_MultisenseIMU_to_RightToeBottom(var1)
    if coder.target('MATLAB')
        [output1] = J_MultisenseIMU_to_RightToeBottom_mex(var1);
    else
        coder.cinclude('J_MultisenseIMU_to_RightToeBottom_src.h');
        
        output1 = zeros(6, 14);

        
        coder.ceval('J_MultisenseIMU_to_RightToeBottom_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
