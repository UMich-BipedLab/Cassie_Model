/*
 * Automatically Generated from Mathematica.
 * <* DateString[] <> " " <> DateString["TimeZoneName"]  *>
 */

#ifndef <*ToUpperCase[TemplateSlot["name"]]*>_HH
#define <*ToUpperCase[TemplateSlot["name"]]*>_HH

#ifdef MATLAB_MEX_FILE
#include <tmwtypes.h>
#else
#include "rtwtypes.h"
#endif

void <*TemplateSlot["name"]*>(<*StringImplode[Table["double *p_" <> TemplateSlot["argouts"][[i]], {i, Length[TemplateSlot["argouts"]]}], ", "]*>, <*StringImplode[Table["const double *"<>ToString[arg], {arg, TemplateSlot["argins"]}], ","]*>);

#endif // <*ToUpperCase[TemplateSlot["name"]]*>_HH
