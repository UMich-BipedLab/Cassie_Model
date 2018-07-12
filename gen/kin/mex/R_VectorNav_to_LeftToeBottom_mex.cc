/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:36:49 GMT-04:00
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
  double t181;
  double t1078;
  double t958;
  double t1007;
  double t1116;
  double t1374;
  double t1017;
  double t1244;
  double t1333;
  double t941;
  double t1451;
  double t1571;
  double t1759;
  double t1938;
  double t1367;
  double t1798;
  double t1873;
  double t898;
  double t1941;
  double t1949;
  double t2071;
  double t2151;
  double t1937;
  double t2093;
  double t2134;
  double t881;
  double t2196;
  double t2226;
  double t2229;
  double t176;
  double t39;
  double t468;
  double t2489;
  double t2495;
  double t2524;
  double t2556;
  double t2561;
  double t2578;
  double t2526;
  double t2580;
  double t2584;
  double t2639;
  double t2722;
  double t2730;
  double t2629;
  double t2737;
  double t2745;
  double t2749;
  double t2815;
  double t2894;
  double t2747;
  double t2922;
  double t2934;
  double t3016;
  double t3112;
  double t3117;
  double t3429;
  double t3465;
  double t3481;
  double t3689;
  double t3721;
  double t3738;
  double t3582;
  double t3829;
  double t3832;
  double t3891;
  double t3898;
  double t3907;
  double t3872;
  double t3917;
  double t3961;
  double t4001;
  double t4007;
  double t4034;
  double t3969;
  double t4036;
  double t4067;
  double t4085;
  double t4091;
  double t4115;
  double t2149;
  double t2257;
  double t2278;
  double t2294;
  double t2297;
  double t2333;
  double t3006;
  double t3145;
  double t3154;
  double t3223;
  double t3295;
  double t3380;
  double t4081;
  double t4132;
  double t4156;
  double t4199;
  double t4260;
  double t4285;
  t181 = Cos(var1[1]);
  t1078 = Cos(var1[3]);
  t958 = Cos(var1[2]);
  t1007 = Sin(var1[3]);
  t1116 = Sin(var1[2]);
  t1374 = Cos(var1[4]);
  t1017 = -1.*t181*t958*t1007;
  t1244 = -1.*t1078*t181*t1116;
  t1333 = t1017 + t1244;
  t941 = Sin(var1[4]);
  t1451 = t1078*t181*t958;
  t1571 = -1.*t181*t1007*t1116;
  t1759 = t1451 + t1571;
  t1938 = Cos(var1[5]);
  t1367 = t941*t1333;
  t1798 = t1374*t1759;
  t1873 = t1367 + t1798;
  t898 = Sin(var1[5]);
  t1941 = t1374*t1333;
  t1949 = -1.*t941*t1759;
  t2071 = t1941 + t1949;
  t2151 = Cos(var1[6]);
  t1937 = -1.*t898*t1873;
  t2093 = t1938*t2071;
  t2134 = t1937 + t2093;
  t881 = Sin(var1[6]);
  t2196 = t1938*t1873;
  t2226 = t898*t2071;
  t2229 = t2196 + t2226;
  t176 = Cos(var1[0]);
  t39 = Sin(var1[1]);
  t468 = Sin(var1[0]);
  t2489 = t176*t958*t39;
  t2495 = -1.*t468*t1116;
  t2524 = t2489 + t2495;
  t2556 = -1.*t958*t468;
  t2561 = -1.*t176*t39*t1116;
  t2578 = t2556 + t2561;
  t2526 = -1.*t1007*t2524;
  t2580 = t1078*t2578;
  t2584 = t2526 + t2580;
  t2639 = t1078*t2524;
  t2722 = t1007*t2578;
  t2730 = t2639 + t2722;
  t2629 = t941*t2584;
  t2737 = t1374*t2730;
  t2745 = t2629 + t2737;
  t2749 = t1374*t2584;
  t2815 = -1.*t941*t2730;
  t2894 = t2749 + t2815;
  t2747 = -1.*t898*t2745;
  t2922 = t1938*t2894;
  t2934 = t2747 + t2922;
  t3016 = t1938*t2745;
  t3112 = t898*t2894;
  t3117 = t3016 + t3112;
  t3429 = t958*t468*t39;
  t3465 = t176*t1116;
  t3481 = t3429 + t3465;
  t3689 = t176*t958;
  t3721 = -1.*t468*t39*t1116;
  t3738 = t3689 + t3721;
  t3582 = -1.*t1007*t3481;
  t3829 = t1078*t3738;
  t3832 = t3582 + t3829;
  t3891 = t1078*t3481;
  t3898 = t1007*t3738;
  t3907 = t3891 + t3898;
  t3872 = t941*t3832;
  t3917 = t1374*t3907;
  t3961 = t3872 + t3917;
  t4001 = t1374*t3832;
  t4007 = -1.*t941*t3907;
  t4034 = t4001 + t4007;
  t3969 = -1.*t898*t3961;
  t4036 = t1938*t4034;
  t4067 = t3969 + t4036;
  t4085 = t1938*t3961;
  t4091 = t898*t4034;
  t4115 = t4085 + t4091;
  t2149 = t881*t2134;
  t2257 = t2151*t2229;
  t2278 = t2149 + t2257;
  t2294 = t2151*t2134;
  t2297 = -1.*t881*t2229;
  t2333 = t2294 + t2297;
  t3006 = t881*t2934;
  t3145 = t2151*t3117;
  t3154 = t3006 + t3145;
  t3223 = t2151*t2934;
  t3295 = -1.*t881*t3117;
  t3380 = t3223 + t3295;
  t4081 = t881*t4067;
  t4132 = t2151*t4115;
  t4156 = t4081 + t4132;
  t4199 = t2151*t4067;
  t4260 = -1.*t881*t4115;
  t4285 = t4199 + t4260;
  p_output1[0]=0. + t39;
  p_output1[1]=0. - 1.*t176*t181;
  p_output1[2]=0. - 1.*t181*t468;
  p_output1[3]=0. + 0.642788*t2278 + 0.766044*t2333;
  p_output1[4]=0. + 0.642788*t3154 + 0.766044*t3380;
  p_output1[5]=0. + 0.642788*t4156 + 0.766044*t4285;
  p_output1[6]=0. - 0.766044*t2278 + 0.642788*t2333;
  p_output1[7]=0. - 0.766044*t3154 + 0.642788*t3380;
  p_output1[8]=0. - 0.766044*t4156 + 0.642788*t4285;
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
    ( !(mrows == 14 && ncols == 1) && 
      !(mrows == 1 && ncols == 14))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "R_VectorNav_to_LeftToeBottom_mex.hh"

namespace SymExpression
{

void R_VectorNav_to_LeftToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
