function [<*StringImplode[Table[TemplateSlot["argouts"][[i]], {i, Length[TemplateSlot["argouts"]]}], ", "]*>] = <*TemplateSlot["name"]*>(<*StringImplode[Table[ToString[arg], {arg, TemplateSlot["argins"]}], ","]*>)
    if coder.target('MATLAB')
        [<*StringImplode[Table[TemplateSlot["argouts"][[i]], {i, Length[TemplateSlot["argouts"]]}], ", "]*>] = <*TemplateSlot["name"]<>"_mex"*>(<*StringImplode[Table[ToString[arg], {arg, TemplateSlot["argins"]}], ","]*>);
    else
        coder.cinclude('<*TemplateSlot["name"]<>"_src.h"*>');
        
        <*StringJoin@@Table[TemplateSlot["argouts"][[i]] <> " = zeros("<>ToString[TemplateSlot["argoutDims"][[i,1]]]<>", "<>ToString[TemplateSlot["argoutDims"][[i,2]]]<>");\n", {i, Length[TemplateSlot["argouts"]]}]*>
        
        coder.ceval('<*TemplateSlot["name"]<>"_src"*>' ...
            <*StringJoin@@Table[",coder.wref(" <> TemplateSlot["argouts"][[i]] <> ")", {i, Length[TemplateSlot["argouts"]]}]*> ...
            <*StringImplode[Table[",coder.rref("<>ToString[arg]<>")", {arg, TemplateSlot["argins"]}], " "]*> );
    end
end
