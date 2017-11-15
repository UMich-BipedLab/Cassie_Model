function [output1] = R_MultisenseHead(var1)
    if coder.target('MATLAB')
        [output1] = R_MultisenseHead_mex(var1);
    else
        coder.cinclude('R_MultisenseHead_src.h');
        
        output1 = zeros(3, 3);

        
        coder.ceval('R_MultisenseHead_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
