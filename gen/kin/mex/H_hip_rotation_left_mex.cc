/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:32:57 GMT-04:00
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
  double t432;
  double t754;
  double t144;
  double t655;
  double t1222;
  double t73;
  double t2041;
  double t2738;
  double t1614;
  double t1787;
  double t1921;
  double t686;
  double t1304;
  double t1390;
  double t2946;
  double t2519;
  double t2585;
  double t2616;
  double t2292;
  double t2390;
  double t2454;
  double t3118;
  double t2975;
  double t3049;
  double t3110;
  double t3193;
  double t3209;
  double t3215;
  double t3262;
  double t3316;
  double t3376;
  double t3700;
  double t3710;
  double t2965;
  double t3146;
  double t3158;
  double t3565;
  double t3594;
  double t3643;
  double t3645;
  double t3652;
  double t3654;
  double t3714;
  double t3717;
  double t3725;
  double t3743;
  double t3748;
  double t3752;
  double t3187;
  double t3233;
  double t3252;
  double t3258;
  double t3387;
  double t3405;
  t432 = Cos(var1[5]);
  t754 = Sin(var1[3]);
  t144 = Cos(var1[3]);
  t655 = Sin(var1[4]);
  t1222 = Sin(var1[5]);
  t73 = Cos(var1[6]);
  t2041 = Sin(var1[6]);
  t2738 = Cos(var1[4]);
  t1614 = -1.*t432*t754;
  t1787 = t144*t655*t1222;
  t1921 = t1614 + t1787;
  t686 = t144*t432*t655;
  t1304 = t754*t1222;
  t1390 = t686 + t1304;
  t2946 = Cos(var1[7]);
  t2519 = t144*t432;
  t2585 = t754*t655*t1222;
  t2616 = t2519 + t2585;
  t2292 = t432*t754*t655;
  t2390 = -1.*t144*t1222;
  t2454 = t2292 + t2390;
  t3118 = Sin(var1[7]);
  t2975 = t73*t1921;
  t3049 = t1390*t2041;
  t3110 = t2975 + t3049;
  t3193 = t73*t2616;
  t3209 = t2454*t2041;
  t3215 = t3193 + t3209;
  t3262 = t2738*t73*t1222;
  t3316 = t2738*t432*t2041;
  t3376 = t3262 + t3316;
  t3700 = -1.*t2946;
  t3710 = 1. + t3700;
  t2965 = t144*t2738*t2946;
  t3146 = t3110*t3118;
  t3158 = t2965 + t3146;
  t3565 = -1.*t73;
  t3594 = 1. + t3565;
  t3643 = 0.135*t3594;
  t3645 = 0. + t3643;
  t3652 = -0.135*t2041;
  t3654 = 0. + t3652;
  t3714 = 0.135*t3710;
  t3717 = 0.049*t3118;
  t3725 = 0. + t3714 + t3717;
  t3743 = -0.049*t3710;
  t3748 = 0.135*t3118;
  t3752 = 0. + t3743 + t3748;
  t3187 = t2738*t2946*t754;
  t3233 = t3215*t3118;
  t3252 = t3187 + t3233;
  t3258 = -1.*t2946*t655;
  t3387 = t3376*t3118;
  t3405 = t3258 + t3387;
  p_output1[0]=t1921*t2041 - 1.*t1390*t73;
  p_output1[1]=t2041*t2616 - 1.*t2454*t73;
  p_output1[2]=t1222*t2041*t2738 - 1.*t2738*t432*t73;
  p_output1[3]=0.;
  p_output1[4]=t3158;
  p_output1[5]=t3252;
  p_output1[6]=t3405;
  p_output1[7]=0.;
  p_output1[8]=-1.*t2946*t3110 + t144*t2738*t3118;
  p_output1[9]=-1.*t2946*t3215 + t2738*t3118*t754;
  p_output1[10]=-1.*t2946*t3376 - 1.*t3118*t655;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.135*(t2946*t3110 - 1.*t144*t2738*t3118) - 0.049*t3158 + t1921*t3645 + t1390*t3654 + t3110*t3725 + t144*t2738*t3752 - 0.09*(-1.*t1921*t2041 + t1390*t73) + var1[0];
  p_output1[13]=0. - 0.049*t3252 + t2616*t3645 + t2454*t3654 + t3215*t3725 - 0.09*(-1.*t2041*t2616 + t2454*t73) + t2738*t3752*t754 + 0.135*(t2946*t3215 - 1.*t2738*t3118*t754) + var1[1];
  p_output1[14]=0. - 0.049*t3405 + t1222*t2738*t3645 + t3376*t3725 + t2738*t3654*t432 - 1.*t3752*t655 + 0.135*(t2946*t3376 + t3118*t655) - 0.09*(-1.*t1222*t2041*t2738 + t2738*t432*t73) + var1[2];
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

#include "H_hip_rotation_left_mex.hh"

namespace SymExpression
{

void H_hip_rotation_left_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
