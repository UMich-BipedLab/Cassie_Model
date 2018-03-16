function [output1] = H_MultisenseHead(var1)
    if coder.target('MATLAB')
        [output1] = H_MultisenseHead_mex(var1);
    else
        coder.cinclude('H_MultisenseHead_src.h');
        
        output1 = zeros(4, 4);

        
        coder.ceval('H_MultisenseHead_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
