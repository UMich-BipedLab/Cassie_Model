/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 11:07:49 GMT-04:00
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
  double t139;
  double t151;
  double t132;
  double t154;
  double t159;
  double t161;
  double t158;
  double t171;
  double t166;
  double t168;
  double t169;
  double t160;
  double t162;
  double t163;
  double t180;
  double t181;
  double t182;
  double t175;
  double t176;
  double t177;
  double t164;
  double t172;
  double t174;
  double t205;
  double t206;
  double t208;
  double t209;
  double t211;
  double t212;
  double t178;
  double t184;
  double t185;
  double t186;
  double t187;
  double t188;
  t139 = Cos(var1[4]);
  t151 = Sin(var1[3]);
  t132 = Cos(var1[3]);
  t154 = Sin(var1[4]);
  t159 = Cos(var1[5]);
  t161 = Sin(var1[5]);
  t158 = Cos(var1[6]);
  t171 = Sin(var1[6]);
  t166 = t132*t159*t154;
  t168 = t151*t161;
  t169 = t166 + t168;
  t160 = -1.*t159*t151;
  t162 = t132*t154*t161;
  t163 = t160 + t162;
  t180 = t159*t151*t154;
  t181 = -1.*t132*t161;
  t182 = t180 + t181;
  t175 = t132*t159;
  t176 = t151*t154*t161;
  t177 = t175 + t176;
  t164 = t158*t163;
  t172 = t169*t171;
  t174 = t164 + t172;
  t205 = -1.*t158;
  t206 = 1. + t205;
  t208 = 0.135*t206;
  t209 = 0. + t208;
  t211 = -0.135*t171;
  t212 = 0. + t211;
  t178 = t158*t177;
  t184 = t182*t171;
  t185 = t178 + t184;
  t186 = t139*t158*t161;
  t187 = t139*t159*t171;
  t188 = t186 + t187;
  p_output1[0]=t132*t139;
  p_output1[1]=t139*t151;
  p_output1[2]=-1.*t154;
  p_output1[3]=0.;
  p_output1[4]=t174;
  p_output1[5]=t185;
  p_output1[6]=t188;
  p_output1[7]=0.;
  p_output1[8]=t158*t169 - 1.*t163*t171;
  p_output1[9]=-1.*t171*t177 + t158*t182;
  p_output1[10]=t139*t158*t159 - 1.*t139*t161*t171;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.049*t132*t139 + 0.135*t174 + t163*t209 + t169*t212 + var1[0];
  p_output1[13]=0. - 0.049*t139*t151 + 0.135*t185 + t177*t209 + t182*t212 + var1[1];
  p_output1[14]=0. + 0.049*t154 + 0.135*t188 + t139*t161*t209 + t139*t159*t212 + var1[2];
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
    ( !(mrows == 20 && ncols == 1) && 
      !(mrows == 1 && ncols == 20))) 
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

#include "H_hip_abduction_left_mex.hh"

namespace SymExpression
{

void H_hip_abduction_left_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
