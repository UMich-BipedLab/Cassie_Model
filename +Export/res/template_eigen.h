/*
 * Automatically Generated from Mathematica.
 * <* DateString[] <> " " <> DateString["TimeZoneName"]  *>
 */

#ifndef <*ToUpperCase[TemplateSlot["name"]]*>_HH
#define <*ToUpperCase[TemplateSlot["name"]]*>_HH
#include <Eigen/Dense>

void <*TemplateSlot["name"]*>(<*StringImplode[Table["Eigen::Matrix<double,"<>ToString[TemplateSlot["argoutDims"][[i,1]]]<>","<>ToString[TemplateSlot["argoutDims"][[i,2]]]<>"> &p_" <> TemplateSlot["argouts"][[i]], {i, Length[TemplateSlot["argouts"]]}], ", "]*>, <*StringImplode[Table["const Eigen::Matrix<double,"<>ToString[TemplateSlot["arginDims"][[i,1]]]<>","<>ToString[TemplateSlot["arginDims"][[i,2]]]<>"> &" <> ToString[TemplateSlot["argins"][[i]]], {i, Length[TemplateSlot["argins"]]}], ", "]*>);
#endif // <*ToUpperCase[TemplateSlot["name"]]*>_HH
