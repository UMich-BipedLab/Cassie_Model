/*
 * Automatically Generated from Mathematica.
 * <* DateString[] <> " " <> DateString["TimeZoneName"]  *>
 */

#ifndef <*ToUpperCase[TemplateSlot["name"]]*>_H
#define <*ToUpperCase[TemplateSlot["name"]]*>_H
#include <Eigen/Dense>

<*StringImplode[Table["Eigen::Matrix<double,"<>ToString[TemplateSlot["argoutDims"][[i,1]]]<>","<>ToString[TemplateSlot["argoutDims"][[i,2]]]<>">", {i, Length[TemplateSlot["argouts"]]} ]]*> <*TemplateSlot["name"]*>(<*StringImplode[Table["const Eigen::Matrix<double,"<>ToString[TemplateSlot["arginDims"][[i,1]]]<>","<>ToString[TemplateSlot["arginDims"][[i,2]]]<>"> &" <> ToString[TemplateSlot["argins"][[i]]], {i, Length[TemplateSlot["argins"]]}], ", "]*>);

#endif 


