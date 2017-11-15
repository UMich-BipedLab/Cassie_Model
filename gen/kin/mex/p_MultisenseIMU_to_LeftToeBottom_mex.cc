/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:36:23 GMT-05:00
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
  double t30;
  double t487;
  double t935;
  double t1347;
  double t1408;
  double t2007;
  double t2134;
  double t2462;
  double t2537;
  double t2550;
  double t2563;
  double t2818;
  double t2910;
  double t2973;
  double t2985;
  double t3356;
  double t3376;
  double t3378;
  double t3445;
  double t3480;
  double t3519;
  double t3762;
  double t3810;
  double t3813;
  double t3898;
  double t4179;
  double t4206;
  double t4241;
  double t4292;
  double t4302;
  double t4356;
  double t4423;
  double t4598;
  double t4615;
  double t4630;
  double t4823;
  double t4878;
  double t4898;
  double t4912;
  double t4939;
  double t4948;
  double t5032;
  double t5102;
  double t5134;
  double t5171;
  double t5207;
  double t5210;
  double t5237;
  double t658;
  double t780;
  double t864;
  double t1240;
  double t1256;
  double t2070;
  double t2298;
  double t2339;
  double t2463;
  double t2485;
  double t2494;
  double t2795;
  double t2819;
  double t2849;
  double t3207;
  double t3314;
  double t3350;
  double t3675;
  double t3784;
  double t3790;
  double t5425;
  double t5437;
  double t5463;
  double t5473;
  double t5474;
  double t5485;
  double t3964;
  double t4056;
  double t4152;
  double t4422;
  double t4439;
  double t4460;
  double t5489;
  double t5503;
  double t5521;
  double t5530;
  double t5531;
  double t5541;
  double t4763;
  double t4792;
  double t4794;
  double t4956;
  double t5039;
  double t5086;
  double t5551;
  double t5554;
  double t5555;
  double t5567;
  double t5571;
  double t5583;
  double t5186;
  double t5193;
  double t5204;
  double t5587;
  double t5605;
  double t5614;
  double t5619;
  double t5645;
  double t5651;
  double t5914;
  double t5921;
  double t5957;
  double t5969;
  double t5974;
  double t5979;
  double t6002;
  double t6004;
  double t6014;
  double t6022;
  double t6040;
  double t6042;
  double t6059;
  double t6062;
  double t6065;
  double t6083;
  double t6086;
  double t6118;
  t30 = Sin(var1[0]);
  t487 = Cos(var1[1]);
  t935 = Sin(var1[1]);
  t1347 = Cos(var1[2]);
  t1408 = -1.*t1347;
  t2007 = 1. + t1408;
  t2134 = Sin(var1[2]);
  t2462 = Cos(var1[0]);
  t2537 = Cos(var1[3]);
  t2550 = -1.*t2537;
  t2563 = 1. + t2550;
  t2818 = Sin(var1[3]);
  t2910 = t1347*t30*t935;
  t2973 = t2462*t2134;
  t2985 = t2910 + t2973;
  t3356 = t2462*t1347;
  t3376 = -1.*t30*t935*t2134;
  t3378 = t3356 + t3376;
  t3445 = Cos(var1[4]);
  t3480 = -1.*t3445;
  t3519 = 1. + t3480;
  t3762 = Sin(var1[4]);
  t3810 = -1.*t2818*t2985;
  t3813 = t2537*t3378;
  t3898 = t3810 + t3813;
  t4179 = t2537*t2985;
  t4206 = t2818*t3378;
  t4241 = t4179 + t4206;
  t4292 = Cos(var1[5]);
  t4302 = -1.*t4292;
  t4356 = 1. + t4302;
  t4423 = Sin(var1[5]);
  t4598 = t3762*t3898;
  t4615 = t3445*t4241;
  t4630 = t4598 + t4615;
  t4823 = t3445*t3898;
  t4878 = -1.*t3762*t4241;
  t4898 = t4823 + t4878;
  t4912 = Cos(var1[6]);
  t4939 = -1.*t4912;
  t4948 = 1. + t4939;
  t5032 = Sin(var1[6]);
  t5102 = -1.*t4423*t4630;
  t5134 = t4292*t4898;
  t5171 = t5102 + t5134;
  t5207 = t4292*t4630;
  t5210 = t4423*t4898;
  t5237 = t5207 + t5210;
  t658 = -1.*t487;
  t780 = 1. + t658;
  t864 = 0.135*t780;
  t1240 = 0.049*t935;
  t1256 = 0. + t864 + t1240;
  t2070 = -0.049*t2007;
  t2298 = -0.09*t2134;
  t2339 = 0. + t2070 + t2298;
  t2463 = -0.09*t2007;
  t2485 = 0.049*t2134;
  t2494 = 0. + t2463 + t2485;
  t2795 = -0.049*t2563;
  t2819 = -0.21*t2818;
  t2849 = 0. + t2795 + t2819;
  t3207 = -0.21*t2563;
  t3314 = 0.049*t2818;
  t3350 = 0. + t3207 + t3314;
  t3675 = -0.2707*t3519;
  t3784 = 0.0016*t3762;
  t3790 = 0. + t3675 + t3784;
  t5425 = t2462*t1347*t935;
  t5437 = -1.*t30*t2134;
  t5463 = t5425 + t5437;
  t5473 = -1.*t1347*t30;
  t5474 = -1.*t2462*t935*t2134;
  t5485 = t5473 + t5474;
  t3964 = -0.0016*t3519;
  t4056 = -0.2707*t3762;
  t4152 = 0. + t3964 + t4056;
  t4422 = 0.0184*t4356;
  t4439 = -0.7055*t4423;
  t4460 = 0. + t4422 + t4439;
  t5489 = -1.*t2818*t5463;
  t5503 = t2537*t5485;
  t5521 = t5489 + t5503;
  t5530 = t2537*t5463;
  t5531 = t2818*t5485;
  t5541 = t5530 + t5531;
  t4763 = -0.7055*t4356;
  t4792 = -0.0184*t4423;
  t4794 = 0. + t4763 + t4792;
  t4956 = -1.1135*t4948;
  t5039 = 0.0216*t5032;
  t5086 = 0. + t4956 + t5039;
  t5551 = t3762*t5521;
  t5554 = t3445*t5541;
  t5555 = t5551 + t5554;
  t5567 = t3445*t5521;
  t5571 = -1.*t3762*t5541;
  t5583 = t5567 + t5571;
  t5186 = -0.0216*t4948;
  t5193 = -1.1135*t5032;
  t5204 = 0. + t5186 + t5193;
  t5587 = -1.*t4423*t5555;
  t5605 = t4292*t5583;
  t5614 = t5587 + t5605;
  t5619 = t4292*t5555;
  t5645 = t4423*t5583;
  t5651 = t5619 + t5645;
  t5914 = -1.*t487*t1347*t2818;
  t5921 = -1.*t2537*t487*t2134;
  t5957 = t5914 + t5921;
  t5969 = t2537*t487*t1347;
  t5974 = -1.*t487*t2818*t2134;
  t5979 = t5969 + t5974;
  t6002 = t3762*t5957;
  t6004 = t3445*t5979;
  t6014 = t6002 + t6004;
  t6022 = t3445*t5957;
  t6040 = -1.*t3762*t5979;
  t6042 = t6022 + t6040;
  t6059 = -1.*t4423*t6014;
  t6062 = t4292*t6042;
  t6065 = t6059 + t6062;
  t6083 = t4292*t6014;
  t6086 = t4423*t6042;
  t6118 = t6083 + t6086;
  p_output1[0]=0.24925 - 1.*t2462*t2494 - 1.*t2849*t2985 + 0.135*t30 - 1.*t1256*t30 - 1.*t3350*t3378 - 1.*t3790*t3898 - 1.*t4152*t4241 - 1.*t4460*t4630 - 0.1305*t30*t487 - 1.*t4794*t4898 - 1.*t5086*t5171 - 1.*t5204*t5237 - 0.0306*(t5032*t5171 + t4912*t5237) + 1.1312*(t4912*t5171 - 1.*t5032*t5237) - 1.*t2339*t30*t935;
  p_output1[1]=-0.0302 + 0.135*(1. - 1.*t2462) + t1256*t2462 - 1.*t2494*t30 + 0.1305*t2462*t487 + t2849*t5463 + t3350*t5485 + t3790*t5521 + t4152*t5541 + t4460*t5555 + t4794*t5583 + t5086*t5614 + t5204*t5651 + 0.0306*(t5032*t5614 + t4912*t5651) - 1.1312*(t4912*t5614 - 1.*t5032*t5651) + t2339*t2462*t935;
  p_output1[2]=-0.047 + t2339*t487 + t1347*t2849*t487 - 1.*t2134*t3350*t487 + t3790*t5957 + t4152*t5979 + t4460*t6014 + t4794*t6042 + t5086*t6065 + t5204*t6118 + 0.0306*(t5032*t6065 + t4912*t6118) - 1.1312*(t4912*t6065 - 1.*t5032*t6118) - 0.049*t780 + 0.004500000000000004*t935;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "p_MultisenseIMU_to_LeftToeBottom_mex.hh"

namespace SymExpression
{

void p_MultisenseIMU_to_LeftToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
