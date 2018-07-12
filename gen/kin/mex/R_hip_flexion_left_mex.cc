/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:33:02 GMT-04:00
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
  double t1097;
  double t1638;
  double t578;
  double t1359;
  double t1719;
  double t557;
  double t2079;
  double t2118;
  double t2287;
  double t1606;
  double t1768;
  double t1771;
  double t2384;
  double t536;
  double t2639;
  double t2643;
  double t3588;
  double t3651;
  double t3681;
  double t3343;
  double t3347;
  double t3506;
  double t3227;
  double t3251;
  double t2862;
  double t2878;
  double t2939;
  double t3055;
  double t3236;
  double t3237;
  double t1941;
  double t2417;
  double t2552;
  double t3886;
  double t3926;
  double t3950;
  double t4013;
  double t4031;
  double t4085;
  double t3584;
  double t3688;
  double t3785;
  double t4272;
  double t4303;
  double t4311;
  double t4324;
  double t4349;
  double t4351;
  double t4149;
  double t4224;
  double t4243;
  t1097 = Cos(var1[5]);
  t1638 = Sin(var1[3]);
  t578 = Cos(var1[3]);
  t1359 = Sin(var1[4]);
  t1719 = Sin(var1[5]);
  t557 = Cos(var1[6]);
  t2079 = -1.*t1097*t1638;
  t2118 = t578*t1359*t1719;
  t2287 = t2079 + t2118;
  t1606 = t578*t1097*t1359;
  t1768 = t1638*t1719;
  t1771 = t1606 + t1768;
  t2384 = Sin(var1[6]);
  t536 = Cos(var1[8]);
  t2639 = Cos(var1[4]);
  t2643 = Cos(var1[7]);
  t3588 = t578*t1097;
  t3651 = t1638*t1359*t1719;
  t3681 = t3588 + t3651;
  t3343 = t1097*t1638*t1359;
  t3347 = -1.*t578*t1719;
  t3506 = t3343 + t3347;
  t3227 = Sin(var1[7]);
  t3251 = Sin(var1[8]);
  t2862 = t578*t2639*t2643;
  t2878 = t557*t2287;
  t2939 = t1771*t2384;
  t3055 = t2878 + t2939;
  t3236 = t3055*t3227;
  t3237 = t2862 + t3236;
  t1941 = t557*t1771;
  t2417 = -1.*t2287*t2384;
  t2552 = t1941 + t2417;
  t3886 = t2639*t2643*t1638;
  t3926 = t557*t3681;
  t3950 = t3506*t2384;
  t4013 = t3926 + t3950;
  t4031 = t4013*t3227;
  t4085 = t3886 + t4031;
  t3584 = t557*t3506;
  t3688 = -1.*t3681*t2384;
  t3785 = t3584 + t3688;
  t4272 = -1.*t2643*t1359;
  t4303 = t2639*t557*t1719;
  t4311 = t2639*t1097*t2384;
  t4324 = t4303 + t4311;
  t4349 = t4324*t3227;
  t4351 = t4272 + t4349;
  t4149 = t2639*t1097*t557;
  t4224 = -1.*t2639*t1719*t2384;
  t4243 = t4149 + t4224;
  p_output1[0]=t3237*t3251 - 1.*t2552*t536;
  p_output1[1]=t3251*t4085 - 1.*t3785*t536;
  p_output1[2]=t3251*t4351 - 1.*t4243*t536;
  p_output1[3]=t2552*t3251 + t3237*t536;
  p_output1[4]=t3251*t3785 + t4085*t536;
  p_output1[5]=t3251*t4243 + t4351*t536;
  p_output1[6]=-1.*t2643*t3055 + t2639*t3227*t578;
  p_output1[7]=t1638*t2639*t3227 - 1.*t2643*t4013;
  p_output1[8]=-1.*t1359*t3227 - 1.*t2643*t4324;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "R_hip_flexion_left_mex.hh"

namespace SymExpression
{

void R_hip_flexion_left_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
