/*
 * Automatically Generated from Mathematica.
 * Tue 26 Sep 2017 12:22:22 GMT-04:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
inline double Power(double x, double y) { return pow(x, y); }
inline double Sqrt(double x) { return sqrt(x); }

inline double Abs(double x) { return fabs(x); }

inline double Exp(double x) { return exp(x); }
inline double Log(double x) { return log(x); }

inline double Sin(double x) { return sin(x); }
inline double Cos(double x) { return cos(x); }
inline double Tan(double x) { return tan(x); }

inline double ArcSin(double x) { return asin(x); }
inline double ArcCos(double x) { return acos(x); }
inline double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
inline double ArcTan(double x, double y) { return atan2(y,x); }

inline double Sinh(double x) { return sinh(x); }
inline double Cosh(double x) { return cosh(x); }
inline double Tanh(double x) { return tanh(x); }

const double E	= 2.71828182845904523536029;
const double Pi = 3.14159265358979323846264;
const double Degree = 0.01745329251994329576924;


#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1)
{
  double t10369;
  double t10531;
  double t10317;
  double t10475;
  double t10535;
  double t7378;
  double t10599;
  double t10613;
  double t10626;
  double t10495;
  double t10537;
  double t10589;
  double t10627;
  double t7232;
  double t10655;
  double t10666;
  double t10668;
  double t10597;
  double t10628;
  double t10640;
  double t10678;
  double t10700;
  double t10642;
  double t10683;
  double t10695;
  double t3108;
  double t10703;
  double t10705;
  double t10707;
  double t10711;
  double t10727;
  double t10743;
  double t10748;
  double t10753;
  double t10759;
  double t10796;
  double t10698;
  double t10766;
  double t10782;
  double t3103;
  double t10799;
  double t10808;
  double t10810;
  double t10819;
  double t10786;
  double t10816;
  double t10817;
  double t2978;
  double t10827;
  double t10833;
  double t10837;
  double t519;
  double t10954;
  double t10957;
  double t10958;
  double t10892;
  double t10929;
  double t10937;
  double t10967;
  double t10968;
  double t10971;
  double t10942;
  double t10962;
  double t10963;
  double t10965;
  double t10981;
  double t10984;
  double t10987;
  double t10990;
  double t10998;
  double t10999;
  double t11000;
  double t11007;
  double t10986;
  double t11009;
  double t11026;
  double t11031;
  double t11034;
  double t11036;
  double t10857;
  double t11029;
  double t11045;
  double t11046;
  double t11048;
  double t11054;
  double t11055;
  double t11123;
  double t11124;
  double t11125;
  double t11104;
  double t11116;
  double t11119;
  double t11121;
  double t11130;
  double t11134;
  double t11142;
  double t11143;
  double t11145;
  double t11148;
  double t11153;
  double t11155;
  double t11135;
  double t11164;
  double t11165;
  double t11177;
  double t11179;
  double t11194;
  double t11168;
  double t11195;
  double t11197;
  double t11201;
  double t11202;
  double t11205;
  double t10818;
  double t10838;
  double t10839;
  double t10859;
  double t10864;
  double t10868;
  double t11047;
  double t11067;
  double t11071;
  double t11089;
  double t11097;
  double t11098;
  double t11199;
  double t11208;
  double t11210;
  double t11224;
  double t11227;
  double t11237;
  double t11454;
  double t11456;
  double t11437;
  double t11439;
  double t11545;
  double t11552;
  double t11601;
  double t11602;
  double t11629;
  double t11633;
  double t11248;
  double t11249;
  double t11257;
  double t11321;
  double t11322;
  double t11326;
  double t11330;
  double t11333;
  double t11335;
  double t11347;
  double t11361;
  double t11364;
  double t11365;
  double t11370;
  double t11373;
  double t11441;
  double t11442;
  double t11443;
  double t11462;
  double t11467;
  double t11473;
  double t11481;
  double t11482;
  double t11485;
  double t11526;
  double t11531;
  double t11534;
  double t11554;
  double t11557;
  double t11575;
  double t11584;
  double t11585;
  double t11593;
  double t11606;
  double t11607;
  double t11609;
  double t11613;
  double t11616;
  double t11619;
  double t11634;
  double t11635;
  double t11636;
  double t11646;
  double t11647;
  double t11650;
  double t11258;
  double t11267;
  double t11269;
  double t11270;
  double t11271;
  double t11273;
  t10369 = Cos(var1[5]);
  t10531 = Sin(var1[3]);
  t10317 = Cos(var1[3]);
  t10475 = Sin(var1[4]);
  t10535 = Sin(var1[5]);
  t7378 = Cos(var1[6]);
  t10599 = -1.*t10369*t10531;
  t10613 = t10317*t10475*t10535;
  t10626 = t10599 + t10613;
  t10495 = t10317*t10369*t10475;
  t10537 = t10531*t10535;
  t10589 = t10495 + t10537;
  t10627 = Sin(var1[6]);
  t7232 = Cos(var1[7]);
  t10655 = t7378*t10626;
  t10666 = t10589*t10627;
  t10668 = t10655 + t10666;
  t10597 = t7378*t10589;
  t10628 = -1.*t10626*t10627;
  t10640 = t10597 + t10628;
  t10678 = Sin(var1[7]);
  t10700 = Cos(var1[9]);
  t10642 = t7232*t10640;
  t10683 = -1.*t10668*t10678;
  t10695 = t10642 + t10683;
  t3108 = Sin(var1[9]);
  t10703 = Cos(var1[4]);
  t10705 = Cos(var1[8]);
  t10707 = t10317*t10703*t10705;
  t10711 = t7232*t10668;
  t10727 = t10640*t10678;
  t10743 = t10711 + t10727;
  t10748 = Sin(var1[8]);
  t10753 = t10743*t10748;
  t10759 = t10707 + t10753;
  t10796 = Cos(var1[10]);
  t10698 = t3108*t10695;
  t10766 = t10700*t10759;
  t10782 = t10698 + t10766;
  t3103 = Sin(var1[10]);
  t10799 = t10700*t10695;
  t10808 = -1.*t3108*t10759;
  t10810 = t10799 + t10808;
  t10819 = Cos(var1[11]);
  t10786 = -1.*t3103*t10782;
  t10816 = t10796*t10810;
  t10817 = t10786 + t10816;
  t2978 = Sin(var1[11]);
  t10827 = t10796*t10782;
  t10833 = t3103*t10810;
  t10837 = t10827 + t10833;
  t519 = Sin(var1[12]);
  t10954 = t10317*t10369;
  t10957 = t10531*t10475*t10535;
  t10958 = t10954 + t10957;
  t10892 = t10369*t10531*t10475;
  t10929 = -1.*t10317*t10535;
  t10937 = t10892 + t10929;
  t10967 = t7378*t10958;
  t10968 = t10937*t10627;
  t10971 = t10967 + t10968;
  t10942 = t7378*t10937;
  t10962 = -1.*t10958*t10627;
  t10963 = t10942 + t10962;
  t10965 = t7232*t10963;
  t10981 = -1.*t10971*t10678;
  t10984 = t10965 + t10981;
  t10987 = t10703*t10705*t10531;
  t10990 = t7232*t10971;
  t10998 = t10963*t10678;
  t10999 = t10990 + t10998;
  t11000 = t10999*t10748;
  t11007 = t10987 + t11000;
  t10986 = t3108*t10984;
  t11009 = t10700*t11007;
  t11026 = t10986 + t11009;
  t11031 = t10700*t10984;
  t11034 = -1.*t3108*t11007;
  t11036 = t11031 + t11034;
  t10857 = Cos(var1[12]);
  t11029 = -1.*t3103*t11026;
  t11045 = t10796*t11036;
  t11046 = t11029 + t11045;
  t11048 = t10796*t11026;
  t11054 = t3103*t11036;
  t11055 = t11048 + t11054;
  t11123 = t10703*t7378*t10535;
  t11124 = t10703*t10369*t10627;
  t11125 = t11123 + t11124;
  t11104 = t10703*t10369*t7378;
  t11116 = -1.*t10703*t10535*t10627;
  t11119 = t11104 + t11116;
  t11121 = t7232*t11119;
  t11130 = -1.*t11125*t10678;
  t11134 = t11121 + t11130;
  t11142 = -1.*t10705*t10475;
  t11143 = t7232*t11125;
  t11145 = t11119*t10678;
  t11148 = t11143 + t11145;
  t11153 = t11148*t10748;
  t11155 = t11142 + t11153;
  t11135 = t3108*t11134;
  t11164 = t10700*t11155;
  t11165 = t11135 + t11164;
  t11177 = t10700*t11134;
  t11179 = -1.*t3108*t11155;
  t11194 = t11177 + t11179;
  t11168 = -1.*t3103*t11165;
  t11195 = t10796*t11194;
  t11197 = t11168 + t11195;
  t11201 = t10796*t11165;
  t11202 = t3103*t11194;
  t11205 = t11201 + t11202;
  t10818 = t2978*t10817;
  t10838 = t10819*t10837;
  t10839 = t10818 + t10838;
  t10859 = t10819*t10817;
  t10864 = -1.*t2978*t10837;
  t10868 = t10859 + t10864;
  t11047 = t2978*t11046;
  t11067 = t10819*t11055;
  t11071 = t11047 + t11067;
  t11089 = t10819*t11046;
  t11097 = -1.*t2978*t11055;
  t11098 = t11089 + t11097;
  t11199 = t2978*t11197;
  t11208 = t10819*t11205;
  t11210 = t11199 + t11208;
  t11224 = t10819*t11197;
  t11227 = -1.*t2978*t11205;
  t11237 = t11224 + t11227;
  t11454 = -1.*t10705;
  t11456 = 1. + t11454;
  t11437 = -1.*t10700;
  t11439 = 1. + t11437;
  t11545 = -1.*t10796;
  t11552 = 1. + t11545;
  t11601 = -1.*t10819;
  t11602 = 1. + t11601;
  t11629 = -1.*t10857;
  t11633 = 1. + t11629;
  t11248 = t10857*t10839;
  t11249 = t519*t10868;
  t11257 = t11248 + t11249;
  t11321 = -1.*t7378;
  t11322 = 1. + t11321;
  t11326 = 0.135*t11322;
  t11330 = 0. + t11326;
  t11333 = -0.135*t10627;
  t11335 = 0. + t11333;
  t11347 = -1.*t7232;
  t11361 = 1. + t11347;
  t11364 = 0.135*t11361;
  t11365 = 0. + t11364;
  t11370 = -0.135*t10678;
  t11373 = 0. + t11370;
  t11441 = -0.09*t11439;
  t11442 = 0.049*t3108;
  t11443 = 0. + t11441 + t11442;
  t11462 = 0.135*t11456;
  t11467 = 0.049*t10748;
  t11473 = 0. + t11462 + t11467;
  t11481 = -0.049*t11456;
  t11482 = 0.135*t10748;
  t11485 = 0. + t11481 + t11482;
  t11526 = -0.049*t11439;
  t11531 = -0.09*t3108;
  t11534 = 0. + t11526 + t11531;
  t11554 = -0.049*t11552;
  t11557 = -0.21*t3103;
  t11575 = 0. + t11554 + t11557;
  t11584 = -0.21*t11552;
  t11585 = 0.049*t3103;
  t11593 = 0. + t11584 + t11585;
  t11606 = -0.2707*t11602;
  t11607 = 0.0016*t2978;
  t11609 = 0. + t11606 + t11607;
  t11613 = -0.0016*t11602;
  t11616 = -0.2707*t2978;
  t11619 = 0. + t11613 + t11616;
  t11634 = 0.0184*t11633;
  t11635 = -0.7055*t519;
  t11636 = 0. + t11634 + t11635;
  t11646 = -0.7055*t11633;
  t11647 = -0.0184*t519;
  t11650 = 0. + t11646 + t11647;
  t11258 = t10857*t11071;
  t11267 = t519*t11098;
  t11269 = t11258 + t11267;
  t11270 = t10857*t11210;
  t11271 = t519*t11237;
  t11273 = t11270 + t11271;
  p_output1[0]=-1.*t10857*t10868 + t10839*t519;
  p_output1[1]=-1.*t10857*t11098 + t11071*t519;
  p_output1[2]=-1.*t10857*t11237 + t11210*t519;
  p_output1[3]=0.;
  p_output1[4]=t11257;
  p_output1[5]=t11269;
  p_output1[6]=t11273;
  p_output1[7]=0.;
  p_output1[8]=-1.*t10705*t10743 + t10317*t10703*t10748;
  p_output1[9]=t10531*t10703*t10748 - 1.*t10705*t10999;
  p_output1[10]=-1.*t10475*t10748 - 1.*t10705*t11148;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.1305*(t10705*t10743 - 1.*t10317*t10703*t10748) - 0.0216*t11257 + t10626*t11330 + t10589*t11335 + t10668*t11365 + t10640*t11373 + t10695*t11443 + t10743*t11473 + t10317*t10703*t11485 + t10759*t11534 + t10782*t11575 + t10810*t11593 + t10817*t11609 + t10837*t11619 + t10839*t11636 + t10868*t11650 - 1.1135*(t10857*t10868 - 1.*t10839*t519) + var1[0];
  p_output1[13]=0. + 0.1305*(-1.*t10531*t10703*t10748 + t10705*t10999) - 0.0216*t11269 + t10958*t11330 + t10937*t11335 + t10971*t11365 + t10963*t11373 + t10984*t11443 + t10999*t11473 + t10531*t10703*t11485 + t11007*t11534 + t11026*t11575 + t11036*t11593 + t11046*t11609 + t11055*t11619 + t11071*t11636 + t11098*t11650 - 1.1135*(t10857*t11098 - 1.*t11071*t519) + var1[1];
  p_output1[14]=0. + 0.1305*(t10475*t10748 + t10705*t11148) - 0.0216*t11273 + t10535*t10703*t11330 + t10369*t10703*t11335 + t11125*t11365 + t11119*t11373 + t11134*t11443 + t11148*t11473 - 1.*t10475*t11485 + t11155*t11534 + t11165*t11575 + t11194*t11593 + t11197*t11609 + t11205*t11619 + t11210*t11636 + t11237*t11650 - 1.1135*(t10857*t11237 - 1.*t11210*t519) + var1[2];
  p_output1[15]=1.;
}



#ifdef MATLAB_MEX_FILE

#include "mex.h"
/*
 * Main function
 */
void mexFunction( int nlhs, mxArray *plhs[],
                  int nrhs, const mxArray *prhs[] )
{
  size_t mrows, ncols;

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 22 && ncols == 1) && 
      !(mrows == 1 && ncols == 22))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 4, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "H_toe_joint_left.hh"

namespace SymExpression
{

void H_toe_joint_left_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
