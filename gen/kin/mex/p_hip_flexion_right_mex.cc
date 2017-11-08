/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:11:35 GMT-05:00
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
  double t610;
  double t6133;
  double t6136;
  double t6134;
  double t6137;
  double t6105;
  double t6112;
  double t6114;
  double t6124;
  double t6130;
  double t6135;
  double t6138;
  double t6139;
  double t6141;
  double t6146;
  double t6147;
  double t6148;
  double t3328;
  double t6153;
  double t6154;
  double t6155;
  double t6120;
  double t6125;
  double t6127;
  double t6131;
  double t6132;
  double t6142;
  double t6143;
  double t6144;
  double t6145;
  double t6150;
  double t6151;
  double t6152;
  double t6171;
  double t6172;
  double t6173;
  double t6175;
  double t6176;
  double t6177;
  double t6179;
  double t6180;
  double t6181;
  double t6199;
  double t6200;
  double t6201;
  t610 = Cos(var1[3]);
  t6133 = Cos(var1[5]);
  t6136 = Sin(var1[3]);
  t6134 = Sin(var1[4]);
  t6137 = Sin(var1[5]);
  t6105 = Cos(var1[14]);
  t6112 = -1.*t6105;
  t6114 = 1. + t6112;
  t6124 = Sin(var1[14]);
  t6130 = Sin(var1[13]);
  t6135 = t610*t6133*t6134;
  t6138 = t6136*t6137;
  t6139 = t6135 + t6138;
  t6141 = Cos(var1[13]);
  t6146 = -1.*t6133*t6136;
  t6147 = t610*t6134*t6137;
  t6148 = t6146 + t6147;
  t3328 = Cos(var1[4]);
  t6153 = t6130*t6139;
  t6154 = t6141*t6148;
  t6155 = t6153 + t6154;
  t6120 = -0.049*t6114;
  t6125 = -0.135*t6124;
  t6127 = 0. + t6120 + t6125;
  t6131 = 0.135*t6130;
  t6132 = 0. + t6131;
  t6142 = -1.*t6141;
  t6143 = 1. + t6142;
  t6144 = -0.135*t6143;
  t6145 = 0. + t6144;
  t6150 = -0.135*t6114;
  t6151 = 0.049*t6124;
  t6152 = 0. + t6150 + t6151;
  t6171 = t6133*t6136*t6134;
  t6172 = -1.*t610*t6137;
  t6173 = t6171 + t6172;
  t6175 = t610*t6133;
  t6176 = t6136*t6134*t6137;
  t6177 = t6175 + t6176;
  t6179 = t6130*t6173;
  t6180 = t6141*t6177;
  t6181 = t6179 + t6180;
  t6199 = t3328*t6133*t6130;
  t6200 = t6141*t3328*t6137;
  t6201 = t6199 + t6200;
  p_output1[0]=0. + t3328*t610*t6127 + t6132*t6139 + t6145*t6148 - 0.09*(t6139*t6141 - 1.*t6130*t6148) + t6152*t6155 - 0.135*(-1.*t3328*t610*t6124 + t6105*t6155) - 0.049*(t3328*t610*t6105 + t6124*t6155) + var1[0];
  p_output1[1]=0. + t3328*t6127*t6136 + t6132*t6173 + t6145*t6177 - 0.09*(t6141*t6173 - 1.*t6130*t6177) + t6152*t6181 - 0.135*(-1.*t3328*t6124*t6136 + t6105*t6181) - 0.049*(t3328*t6105*t6136 + t6124*t6181) + var1[1];
  p_output1[2]=0. + t3328*t6132*t6133 - 1.*t6127*t6134 - 0.09*(-1.*t3328*t6130*t6137 + t3328*t6133*t6141) + t3328*t6137*t6145 + t6152*t6201 - 0.135*(t6124*t6134 + t6105*t6201) - 0.049*(-1.*t6105*t6134 + t6124*t6201) + var1[2];
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
    ( !(mrows == 20 && ncols == 1) && 
      !(mrows == 1 && ncols == 20))) 
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

#include "p_hip_flexion_right_mex.hh"

namespace SymExpression
{

void p_hip_flexion_right_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
