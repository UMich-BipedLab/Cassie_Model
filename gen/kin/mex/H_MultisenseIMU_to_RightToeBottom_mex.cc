/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:36:59 GMT-04:00
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
  double t63;
  double t368;
  double t294;
  double t656;
  double t778;
  double t588;
  double t974;
  double t1026;
  double t1130;
  double t731;
  double t810;
  double t861;
  double t1145;
  double t501;
  double t1233;
  double t1253;
  double t1300;
  double t956;
  double t1183;
  double t1195;
  double t1358;
  double t461;
  double t1565;
  double t1632;
  double t1738;
  double t1198;
  double t1385;
  double t1449;
  double t1746;
  double t460;
  double t1784;
  double t1815;
  double t1816;
  double t1494;
  double t1752;
  double t1772;
  double t1831;
  double t2182;
  double t2186;
  double t2195;
  double t2135;
  double t2145;
  double t2163;
  double t2298;
  double t2306;
  double t2314;
  double t2165;
  double t2277;
  double t2293;
  double t2390;
  double t2442;
  double t2503;
  double t2295;
  double t2332;
  double t2356;
  double t2574;
  double t2581;
  double t2624;
  double t2363;
  double t2511;
  double t2515;
  double t2935;
  double t2984;
  double t3008;
  double t2836;
  double t2850;
  double t2868;
  double t3100;
  double t3102;
  double t3193;
  double t2919;
  double t3021;
  double t3062;
  double t3246;
  double t3259;
  double t3305;
  double t3091;
  double t3207;
  double t3221;
  double t1773;
  double t1839;
  double t1854;
  double t1947;
  double t1999;
  double t2042;
  double t2530;
  double t2642;
  double t2647;
  double t2729;
  double t2749;
  double t2754;
  double t3243;
  double t3339;
  double t3343;
  double t3434;
  double t3464;
  double t3482;
  double t3758;
  double t3764;
  double t3895;
  double t3909;
  double t4018;
  double t4037;
  double t4134;
  double t4137;
  double t4207;
  double t4211;
  double t3644;
  double t3699;
  double t3704;
  double t3726;
  double t3745;
  double t3771;
  double t3775;
  double t3777;
  double t3807;
  double t3809;
  double t3829;
  double t3914;
  double t3922;
  double t3932;
  double t3987;
  double t3990;
  double t3995;
  double t4038;
  double t4049;
  double t4068;
  double t4090;
  double t4125;
  double t4128;
  double t4142;
  double t4154;
  double t4159;
  double t4165;
  double t4167;
  double t4185;
  double t4216;
  double t4217;
  double t4232;
  double t4236;
  double t4238;
  double t4250;
  t30 = Cos(var1[8]);
  t63 = Sin(var1[7]);
  t368 = Sin(var1[8]);
  t294 = Cos(var1[7]);
  t656 = Cos(var1[9]);
  t778 = Sin(var1[9]);
  t588 = Cos(var1[10]);
  t974 = t294*t656;
  t1026 = -1.*t63*t368*t778;
  t1130 = t974 + t1026;
  t731 = t656*t63*t368;
  t810 = t294*t778;
  t861 = t731 + t810;
  t1145 = Sin(var1[10]);
  t501 = Cos(var1[11]);
  t1233 = t588*t1130;
  t1253 = -1.*t861*t1145;
  t1300 = t1233 + t1253;
  t956 = t588*t861;
  t1183 = t1130*t1145;
  t1195 = t956 + t1183;
  t1358 = Sin(var1[11]);
  t461 = Cos(var1[12]);
  t1565 = t501*t1300;
  t1632 = -1.*t1195*t1358;
  t1738 = t1565 + t1632;
  t1198 = t501*t1195;
  t1385 = t1300*t1358;
  t1449 = t1198 + t1385;
  t1746 = Sin(var1[12]);
  t460 = Cos(var1[13]);
  t1784 = t461*t1738;
  t1815 = -1.*t1449*t1746;
  t1816 = t1784 + t1815;
  t1494 = t461*t1449;
  t1752 = t1738*t1746;
  t1772 = t1494 + t1752;
  t1831 = Sin(var1[13]);
  t2182 = -1.*t656*t63;
  t2186 = -1.*t294*t368*t778;
  t2195 = t2182 + t2186;
  t2135 = t294*t656*t368;
  t2145 = -1.*t63*t778;
  t2163 = t2135 + t2145;
  t2298 = t588*t2195;
  t2306 = -1.*t2163*t1145;
  t2314 = t2298 + t2306;
  t2165 = t588*t2163;
  t2277 = t2195*t1145;
  t2293 = t2165 + t2277;
  t2390 = t501*t2314;
  t2442 = -1.*t2293*t1358;
  t2503 = t2390 + t2442;
  t2295 = t501*t2293;
  t2332 = t2314*t1358;
  t2356 = t2295 + t2332;
  t2574 = t461*t2503;
  t2581 = -1.*t2356*t1746;
  t2624 = t2574 + t2581;
  t2363 = t461*t2356;
  t2511 = t2503*t1746;
  t2515 = t2363 + t2511;
  t2935 = -1.*t30*t588*t778;
  t2984 = -1.*t30*t656*t1145;
  t3008 = t2935 + t2984;
  t2836 = t30*t656*t588;
  t2850 = -1.*t30*t778*t1145;
  t2868 = t2836 + t2850;
  t3100 = t501*t3008;
  t3102 = -1.*t2868*t1358;
  t3193 = t3100 + t3102;
  t2919 = t501*t2868;
  t3021 = t3008*t1358;
  t3062 = t2919 + t3021;
  t3246 = t461*t3193;
  t3259 = -1.*t3062*t1746;
  t3305 = t3246 + t3259;
  t3091 = t461*t3062;
  t3207 = t3193*t1746;
  t3221 = t3091 + t3207;
  t1773 = t460*t1772;
  t1839 = t1816*t1831;
  t1854 = t1773 + t1839;
  t1947 = t460*t1816;
  t1999 = -1.*t1772*t1831;
  t2042 = t1947 + t1999;
  t2530 = t460*t2515;
  t2642 = t2624*t1831;
  t2647 = t2530 + t2642;
  t2729 = t460*t2624;
  t2749 = -1.*t2515*t1831;
  t2754 = t2729 + t2749;
  t3243 = t460*t3221;
  t3339 = t3305*t1831;
  t3343 = t3243 + t3339;
  t3434 = t460*t3305;
  t3464 = -1.*t3221*t1831;
  t3482 = t3434 + t3464;
  t3758 = -1.*t656;
  t3764 = 1. + t3758;
  t3895 = -1.*t588;
  t3909 = 1. + t3895;
  t4018 = -1.*t501;
  t4037 = 1. + t4018;
  t4134 = -1.*t461;
  t4137 = 1. + t4134;
  t4207 = -1.*t460;
  t4211 = 1. + t4207;
  t3644 = -1.*t30;
  t3699 = 1. + t3644;
  t3704 = -0.135*t3699;
  t3726 = 0.049*t368;
  t3745 = 0. + t3704 + t3726;
  t3771 = -0.049*t3764;
  t3775 = -0.09*t778;
  t3777 = 0. + t3771 + t3775;
  t3807 = -0.09*t3764;
  t3809 = 0.049*t778;
  t3829 = 0. + t3807 + t3809;
  t3914 = -0.049*t3909;
  t3922 = -0.21*t1145;
  t3932 = 0. + t3914 + t3922;
  t3987 = -0.21*t3909;
  t3990 = 0.049*t1145;
  t3995 = 0. + t3987 + t3990;
  t4038 = -0.0016*t4037;
  t4049 = -0.2707*t1358;
  t4068 = 0. + t4038 + t4049;
  t4090 = -0.2707*t4037;
  t4125 = 0.0016*t1358;
  t4128 = 0. + t4090 + t4125;
  t4142 = 0.0184*t4137;
  t4154 = -0.7055*t1746;
  t4159 = 0. + t4142 + t4154;
  t4165 = -0.7055*t4137;
  t4167 = -0.0184*t1746;
  t4185 = 0. + t4165 + t4167;
  t4216 = -0.0216*t4211;
  t4217 = -1.1135*t1831;
  t4232 = 0. + t4216 + t4217;
  t4236 = -1.1135*t4211;
  t4238 = 0.0216*t1831;
  t4250 = 0. + t4236 + t4238;
  p_output1[0]=0. + t30*t63;
  p_output1[1]=0. - 1.*t294*t30;
  p_output1[2]=0. + t368;
  p_output1[3]=0.;
  p_output1[4]=0. - 0.642788*t1854 - 0.766044*t2042;
  p_output1[5]=0. + 0.642788*t2647 + 0.766044*t2754;
  p_output1[6]=0. + 0.642788*t3343 + 0.766044*t3482;
  p_output1[7]=0.;
  p_output1[8]=0. + 0.766044*t1854 - 0.642788*t2042;
  p_output1[9]=0. - 0.766044*t2647 + 0.642788*t2754;
  p_output1[10]=0. - 0.766044*t3343 + 0.642788*t3482;
  p_output1[11]=0.;
  p_output1[12]=0.24925 - 0.0306*t1854 + 1.1312*t2042 - 1.*t294*t3829 - 1.*t1130*t3995 - 1.*t1195*t4068 - 1.*t1300*t4128 - 1.*t1449*t4159 - 1.*t1738*t4185 - 1.*t1772*t4232 - 1.*t1816*t4250 - 0.135*t63 + 0.1305*t30*t63 - 1.*t3745*t63 - 1.*t368*t3777*t63 - 1.*t3932*t861;
  p_output1[13]=-0.0302 + 0.0306*t2647 - 1.1312*t2754 - 0.135*(1. - 1.*t294) - 0.1305*t294*t30 + t294*t3745 + t294*t368*t3777 + t2163*t3932 + t2195*t3995 + t2293*t4068 + t2314*t4128 + t2356*t4159 + t2503*t4185 + t2515*t4232 + t2624*t4250 - 1.*t3829*t63;
  p_output1[14]=-0.047 + 0.0306*t3343 - 1.1312*t3482 - 0.004500000000000004*t368 - 0.049*t3699 + t30*t3777 + t2868*t4068 + t3008*t4128 + t3062*t4159 + t3193*t4185 + t3221*t4232 + t3305*t4250 + t30*t3932*t656 - 1.*t30*t3995*t778;
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
    ( !(mrows == 14 && ncols == 1) && 
      !(mrows == 1 && ncols == 14))) 
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

#include "H_MultisenseIMU_to_RightToeBottom_mex.hh"

namespace SymExpression
{

void H_MultisenseIMU_to_RightToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
