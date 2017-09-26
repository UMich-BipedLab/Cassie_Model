/*
 * Automatically Generated from Mathematica.
 * Tue 26 Sep 2017 12:22:26 GMT-04:00
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
  double t671;
  double t11153;
  double t11195;
  double t11177;
  double t11197;
  double t11121;
  double t11194;
  double t11201;
  double t11208;
  double t11248;
  double t11288;
  double t11299;
  double t11306;
  double t11370;
  double t11335;
  double t11342;
  double t11364;
  double t11319;
  double t11443;
  double t11447;
  double t11462;
  double t8858;
  double t10838;
  double t10965;
  double t10990;
  double t3199;
  double t11534;
  double t11544;
  double t11554;
  double t10967;
  double t11036;
  double t11054;
  double t11143;
  double t11145;
  double t11257;
  double t11267;
  double t11270;
  double t11280;
  double t11326;
  double t11330;
  double t11331;
  double t11333;
  double t11613;
  double t11616;
  double t11619;
  double t11634;
  double t11635;
  double t11636;
  double t11441;
  double t11442;
  double t11646;
  double t11647;
  double t11650;
  double t11655;
  double t11658;
  double t11659;
  double t11524;
  double t11526;
  double t11531;
  double t11679;
  double t11686;
  double t11687;
  double t11733;
  double t11734;
  double t11742;
  double t11745;
  double t11746;
  double t11748;
  double t11769;
  double t11774;
  double t11775;
  t671 = Cos(var1[3]);
  t11153 = Cos(var1[5]);
  t11195 = Sin(var1[3]);
  t11177 = Sin(var1[4]);
  t11197 = Sin(var1[5]);
  t11121 = Sin(var1[14]);
  t11194 = t671*t11153*t11177;
  t11201 = t11195*t11197;
  t11208 = t11194 + t11201;
  t11248 = Cos(var1[14]);
  t11288 = -1.*t11153*t11195;
  t11299 = t671*t11177*t11197;
  t11306 = t11288 + t11299;
  t11370 = Sin(var1[15]);
  t11335 = t11121*t11208;
  t11342 = t11248*t11306;
  t11364 = t11335 + t11342;
  t11319 = Cos(var1[15]);
  t11443 = t11248*t11208;
  t11447 = -1.*t11121*t11306;
  t11462 = t11443 + t11447;
  t8858 = Cos(var1[16]);
  t10838 = -1.*t8858;
  t10965 = 1. + t10838;
  t10990 = Sin(var1[16]);
  t3199 = Cos(var1[4]);
  t11534 = t11319*t11364;
  t11544 = t11370*t11462;
  t11554 = t11534 + t11544;
  t10967 = -0.049*t10965;
  t11036 = -0.135*t10990;
  t11054 = 0. + t10967 + t11036;
  t11143 = 0.135*t11121;
  t11145 = 0. + t11143;
  t11257 = -1.*t11248;
  t11267 = 1. + t11257;
  t11270 = -0.135*t11267;
  t11280 = 0. + t11270;
  t11326 = -1.*t11319;
  t11330 = 1. + t11326;
  t11331 = -0.135*t11330;
  t11333 = 0. + t11331;
  t11613 = t11153*t11195*t11177;
  t11616 = -1.*t671*t11197;
  t11619 = t11613 + t11616;
  t11634 = t671*t11153;
  t11635 = t11195*t11177*t11197;
  t11636 = t11634 + t11635;
  t11441 = 0.135*t11370;
  t11442 = 0. + t11441;
  t11646 = t11121*t11619;
  t11647 = t11248*t11636;
  t11650 = t11646 + t11647;
  t11655 = t11248*t11619;
  t11658 = -1.*t11121*t11636;
  t11659 = t11655 + t11658;
  t11524 = -0.135*t10965;
  t11526 = 0.049*t10990;
  t11531 = 0. + t11524 + t11526;
  t11679 = t11319*t11650;
  t11686 = t11370*t11659;
  t11687 = t11679 + t11686;
  t11733 = t3199*t11153*t11121;
  t11734 = t11248*t3199*t11197;
  t11742 = t11733 + t11734;
  t11745 = t11248*t3199*t11153;
  t11746 = -1.*t3199*t11121*t11197;
  t11748 = t11745 + t11746;
  t11769 = t11319*t11742;
  t11774 = t11370*t11748;
  t11775 = t11769 + t11774;
  p_output1[0]=0. + t11145*t11208 + t11280*t11306 + t11333*t11364 + t11442*t11462 - 0.09*(-1.*t11364*t11370 + t11319*t11462) + t11531*t11554 + t11054*t3199*t671 - 0.135*(-1.*t10990*t3199*t671 + t11554*t8858) - 0.049*(t10990*t11554 + t3199*t671*t8858) + var1[0];
  p_output1[1]=0. + t11145*t11619 + t11280*t11636 + t11333*t11650 + t11442*t11659 - 0.09*(-1.*t11370*t11650 + t11319*t11659) + t11531*t11687 + t11054*t11195*t3199 - 0.135*(-1.*t10990*t11195*t3199 + t11687*t8858) - 0.049*(t10990*t11687 + t11195*t3199*t8858) + var1[1];
  p_output1[2]=0. - 1.*t11054*t11177 + t11333*t11742 + t11442*t11748 - 0.09*(-1.*t11370*t11742 + t11319*t11748) + t11531*t11775 + t11145*t11153*t3199 + t11197*t11280*t3199 - 0.049*(t10990*t11775 - 1.*t11177*t8858) - 0.135*(t10990*t11177 + t11775*t8858) + var1[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "p_hip_flexion_right.hh"

namespace SymExpression
{

void p_hip_flexion_right_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
