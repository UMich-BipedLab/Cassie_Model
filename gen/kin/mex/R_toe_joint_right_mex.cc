/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:12:03 GMT-05:00
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
  double t1029;
  double t1113;
  double t1005;
  double t1048;
  double t1298;
  double t1514;
  double t1062;
  double t1387;
  double t1401;
  double t998;
  double t1552;
  double t1637;
  double t1660;
  double t1907;
  double t1467;
  double t1712;
  double t1848;
  double t927;
  double t1943;
  double t1970;
  double t2029;
  double t2066;
  double t2081;
  double t2089;
  double t2140;
  double t2178;
  double t2405;
  double t2477;
  double t1891;
  double t2430;
  double t2462;
  double t870;
  double t2515;
  double t2535;
  double t2554;
  double t2740;
  double t2468;
  double t2657;
  double t2701;
  double t790;
  double t2755;
  double t2778;
  double t2783;
  double t644;
  double t3019;
  double t3215;
  double t3262;
  double t3320;
  double t3330;
  double t3344;
  double t3312;
  double t3364;
  double t3373;
  double t3443;
  double t3470;
  double t3504;
  double t3542;
  double t3590;
  double t3604;
  double t3394;
  double t3654;
  double t3660;
  double t3664;
  double t3674;
  double t3694;
  double t2884;
  double t3662;
  double t3761;
  double t3773;
  double t3825;
  double t3846;
  double t3855;
  double t4212;
  double t4220;
  double t4224;
  double t4321;
  double t4436;
  double t4454;
  double t4456;
  double t4480;
  double t4514;
  double t4289;
  double t4564;
  double t4589;
  double t4619;
  double t4633;
  double t4646;
  double t4599;
  double t4659;
  double t4700;
  double t4720;
  double t4724;
  double t4734;
  double t2709;
  double t2840;
  double t2880;
  double t2888;
  double t2892;
  double t2896;
  double t3787;
  double t3912;
  double t3920;
  double t3925;
  double t3961;
  double t4088;
  double t4708;
  double t4754;
  double t4765;
  double t4803;
  double t4806;
  double t4807;
  t1029 = Cos(var1[5]);
  t1113 = Sin(var1[3]);
  t1005 = Cos(var1[3]);
  t1048 = Sin(var1[4]);
  t1298 = Sin(var1[5]);
  t1514 = Sin(var1[13]);
  t1062 = t1005*t1029*t1048;
  t1387 = t1113*t1298;
  t1401 = t1062 + t1387;
  t998 = Cos(var1[13]);
  t1552 = -1.*t1029*t1113;
  t1637 = t1005*t1048*t1298;
  t1660 = t1552 + t1637;
  t1907 = Cos(var1[15]);
  t1467 = t998*t1401;
  t1712 = -1.*t1514*t1660;
  t1848 = t1467 + t1712;
  t927 = Sin(var1[15]);
  t1943 = Cos(var1[14]);
  t1970 = Cos(var1[4]);
  t2029 = t1943*t1005*t1970;
  t2066 = Sin(var1[14]);
  t2081 = t1514*t1401;
  t2089 = t998*t1660;
  t2140 = t2081 + t2089;
  t2178 = t2066*t2140;
  t2405 = t2029 + t2178;
  t2477 = Cos(var1[16]);
  t1891 = t927*t1848;
  t2430 = t1907*t2405;
  t2462 = t1891 + t2430;
  t870 = Sin(var1[16]);
  t2515 = t1907*t1848;
  t2535 = -1.*t927*t2405;
  t2554 = t2515 + t2535;
  t2740 = Cos(var1[17]);
  t2468 = -1.*t870*t2462;
  t2657 = t2477*t2554;
  t2701 = t2468 + t2657;
  t790 = Sin(var1[17]);
  t2755 = t2477*t2462;
  t2778 = t870*t2554;
  t2783 = t2755 + t2778;
  t644 = Sin(var1[18]);
  t3019 = t1029*t1113*t1048;
  t3215 = -1.*t1005*t1298;
  t3262 = t3019 + t3215;
  t3320 = t1005*t1029;
  t3330 = t1113*t1048*t1298;
  t3344 = t3320 + t3330;
  t3312 = t998*t3262;
  t3364 = -1.*t1514*t3344;
  t3373 = t3312 + t3364;
  t3443 = t1943*t1970*t1113;
  t3470 = t1514*t3262;
  t3504 = t998*t3344;
  t3542 = t3470 + t3504;
  t3590 = t2066*t3542;
  t3604 = t3443 + t3590;
  t3394 = t927*t3373;
  t3654 = t1907*t3604;
  t3660 = t3394 + t3654;
  t3664 = t1907*t3373;
  t3674 = -1.*t927*t3604;
  t3694 = t3664 + t3674;
  t2884 = Cos(var1[18]);
  t3662 = -1.*t870*t3660;
  t3761 = t2477*t3694;
  t3773 = t3662 + t3761;
  t3825 = t2477*t3660;
  t3846 = t870*t3694;
  t3855 = t3825 + t3846;
  t4212 = t998*t1970*t1029;
  t4220 = -1.*t1970*t1514*t1298;
  t4224 = t4212 + t4220;
  t4321 = -1.*t1943*t1048;
  t4436 = t1970*t1029*t1514;
  t4454 = t998*t1970*t1298;
  t4456 = t4436 + t4454;
  t4480 = t2066*t4456;
  t4514 = t4321 + t4480;
  t4289 = t927*t4224;
  t4564 = t1907*t4514;
  t4589 = t4289 + t4564;
  t4619 = t1907*t4224;
  t4633 = -1.*t927*t4514;
  t4646 = t4619 + t4633;
  t4599 = -1.*t870*t4589;
  t4659 = t2477*t4646;
  t4700 = t4599 + t4659;
  t4720 = t2477*t4589;
  t4724 = t870*t4646;
  t4734 = t4720 + t4724;
  t2709 = t790*t2701;
  t2840 = t2740*t2783;
  t2880 = t2709 + t2840;
  t2888 = t2740*t2701;
  t2892 = -1.*t790*t2783;
  t2896 = t2888 + t2892;
  t3787 = t790*t3773;
  t3912 = t2740*t3855;
  t3920 = t3787 + t3912;
  t3925 = t2740*t3773;
  t3961 = -1.*t790*t3855;
  t4088 = t3925 + t3961;
  t4708 = t790*t4700;
  t4754 = t2740*t4734;
  t4765 = t4708 + t4754;
  t4803 = t2740*t4700;
  t4806 = -1.*t790*t4734;
  t4807 = t4803 + t4806;
  p_output1[0]=-1.*t2884*t2896 + t2880*t644;
  p_output1[1]=-1.*t2884*t4088 + t3920*t644;
  p_output1[2]=-1.*t2884*t4807 + t4765*t644;
  p_output1[3]=t2880*t2884 + t2896*t644;
  p_output1[4]=t2884*t3920 + t4088*t644;
  p_output1[5]=t2884*t4765 + t4807*t644;
  p_output1[6]=t1005*t1970*t2066 - 1.*t1943*t2140;
  p_output1[7]=t1113*t1970*t2066 - 1.*t1943*t3542;
  p_output1[8]=-1.*t1048*t2066 - 1.*t1943*t4456;
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

#include "R_toe_joint_right_mex.hh"

namespace SymExpression
{

void R_toe_joint_right_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
