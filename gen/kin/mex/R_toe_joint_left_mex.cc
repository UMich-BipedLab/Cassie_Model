/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:33:20 GMT-04:00
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
  double t462;
  double t1090;
  double t1232;
  double t1218;
  double t1312;
  double t1028;
  double t1452;
  double t1458;
  double t1459;
  double t1230;
  double t1323;
  double t1342;
  double t1511;
  double t415;
  double t1842;
  double t1860;
  double t1863;
  double t509;
  double t881;
  double t886;
  double t1378;
  double t1512;
  double t1624;
  double t1704;
  double t1721;
  double t1788;
  double t1920;
  double t2031;
  double t1806;
  double t1931;
  double t1983;
  double t392;
  double t2083;
  double t2090;
  double t2249;
  double t2487;
  double t1997;
  double t2295;
  double t2306;
  double t160;
  double t2507;
  double t2525;
  double t2531;
  double t2681;
  double t2368;
  double t2546;
  double t2576;
  double t71;
  double t2737;
  double t2786;
  double t2825;
  double t32;
  double t3439;
  double t3520;
  double t3531;
  double t3239;
  double t3274;
  double t3310;
  double t3671;
  double t3697;
  double t3719;
  double t3202;
  double t3425;
  double t3569;
  double t3580;
  double t3591;
  double t3640;
  double t3642;
  double t3728;
  double t3731;
  double t3792;
  double t3804;
  double t3808;
  double t3786;
  double t3814;
  double t3828;
  double t3902;
  double t3906;
  double t3916;
  double t2938;
  double t3883;
  double t3939;
  double t3975;
  double t4047;
  double t4051;
  double t4052;
  double t4286;
  double t4334;
  double t4354;
  double t4170;
  double t4172;
  double t4191;
  double t4196;
  double t4226;
  double t4247;
  double t4261;
  double t4368;
  double t4377;
  double t4381;
  double t4418;
  double t4431;
  double t4380;
  double t4435;
  double t4438;
  double t4456;
  double t4475;
  double t4488;
  double t4455;
  double t4491;
  double t4493;
  double t4592;
  double t4603;
  double t4610;
  double t2607;
  double t2844;
  double t2864;
  double t3002;
  double t3045;
  double t3089;
  double t4010;
  double t4055;
  double t4067;
  double t4110;
  double t4133;
  double t4141;
  double t4549;
  double t4624;
  double t4625;
  double t4664;
  double t4667;
  double t4681;
  t462 = Cos(var1[3]);
  t1090 = Cos(var1[5]);
  t1232 = Sin(var1[4]);
  t1218 = Sin(var1[3]);
  t1312 = Sin(var1[5]);
  t1028 = Cos(var1[6]);
  t1452 = t462*t1090*t1232;
  t1458 = t1218*t1312;
  t1459 = t1452 + t1458;
  t1230 = -1.*t1090*t1218;
  t1323 = t462*t1232*t1312;
  t1342 = t1230 + t1323;
  t1511 = Sin(var1[6]);
  t415 = Cos(var1[8]);
  t1842 = t1028*t1459;
  t1860 = -1.*t1342*t1511;
  t1863 = t1842 + t1860;
  t509 = Cos(var1[4]);
  t881 = Cos(var1[7]);
  t886 = t462*t509*t881;
  t1378 = t1028*t1342;
  t1512 = t1459*t1511;
  t1624 = t1378 + t1512;
  t1704 = Sin(var1[7]);
  t1721 = t1624*t1704;
  t1788 = t886 + t1721;
  t1920 = Sin(var1[8]);
  t2031 = Cos(var1[9]);
  t1806 = t415*t1788;
  t1931 = t1863*t1920;
  t1983 = t1806 + t1931;
  t392 = Sin(var1[9]);
  t2083 = t415*t1863;
  t2090 = -1.*t1788*t1920;
  t2249 = t2083 + t2090;
  t2487 = Cos(var1[10]);
  t1997 = -1.*t392*t1983;
  t2295 = t2031*t2249;
  t2306 = t1997 + t2295;
  t160 = Sin(var1[10]);
  t2507 = t2031*t1983;
  t2525 = t392*t2249;
  t2531 = t2507 + t2525;
  t2681 = Cos(var1[11]);
  t2368 = t160*t2306;
  t2546 = t2487*t2531;
  t2576 = t2368 + t2546;
  t71 = Sin(var1[11]);
  t2737 = t2487*t2306;
  t2786 = -1.*t160*t2531;
  t2825 = t2737 + t2786;
  t32 = Cos(var1[12]);
  t3439 = t1090*t1218*t1232;
  t3520 = -1.*t462*t1312;
  t3531 = t3439 + t3520;
  t3239 = t462*t1090;
  t3274 = t1218*t1232*t1312;
  t3310 = t3239 + t3274;
  t3671 = t1028*t3531;
  t3697 = -1.*t3310*t1511;
  t3719 = t3671 + t3697;
  t3202 = t509*t881*t1218;
  t3425 = t1028*t3310;
  t3569 = t3531*t1511;
  t3580 = t3425 + t3569;
  t3591 = t3580*t1704;
  t3640 = t3202 + t3591;
  t3642 = t415*t3640;
  t3728 = t3719*t1920;
  t3731 = t3642 + t3728;
  t3792 = t415*t3719;
  t3804 = -1.*t3640*t1920;
  t3808 = t3792 + t3804;
  t3786 = -1.*t392*t3731;
  t3814 = t2031*t3808;
  t3828 = t3786 + t3814;
  t3902 = t2031*t3731;
  t3906 = t392*t3808;
  t3916 = t3902 + t3906;
  t2938 = Sin(var1[12]);
  t3883 = t160*t3828;
  t3939 = t2487*t3916;
  t3975 = t3883 + t3939;
  t4047 = t2487*t3828;
  t4051 = -1.*t160*t3916;
  t4052 = t4047 + t4051;
  t4286 = t509*t1090*t1028;
  t4334 = -1.*t509*t1312*t1511;
  t4354 = t4286 + t4334;
  t4170 = -1.*t881*t1232;
  t4172 = t509*t1028*t1312;
  t4191 = t509*t1090*t1511;
  t4196 = t4172 + t4191;
  t4226 = t4196*t1704;
  t4247 = t4170 + t4226;
  t4261 = t415*t4247;
  t4368 = t4354*t1920;
  t4377 = t4261 + t4368;
  t4381 = t415*t4354;
  t4418 = -1.*t4247*t1920;
  t4431 = t4381 + t4418;
  t4380 = -1.*t392*t4377;
  t4435 = t2031*t4431;
  t4438 = t4380 + t4435;
  t4456 = t2031*t4377;
  t4475 = t392*t4431;
  t4488 = t4456 + t4475;
  t4455 = t160*t4438;
  t4491 = t2487*t4488;
  t4493 = t4455 + t4491;
  t4592 = t2487*t4438;
  t4603 = -1.*t160*t4488;
  t4610 = t4592 + t4603;
  t2607 = -1.*t71*t2576;
  t2844 = t2681*t2825;
  t2864 = t2607 + t2844;
  t3002 = t2681*t2576;
  t3045 = t71*t2825;
  t3089 = t3002 + t3045;
  t4010 = -1.*t71*t3975;
  t4055 = t2681*t4052;
  t4067 = t4010 + t4055;
  t4110 = t2681*t3975;
  t4133 = t71*t4052;
  t4141 = t4110 + t4133;
  t4549 = -1.*t71*t4493;
  t4624 = t2681*t4610;
  t4625 = t4549 + t4624;
  t4664 = t2681*t4493;
  t4667 = t71*t4610;
  t4681 = t4664 + t4667;
  p_output1[0]=t2938*t3089 - 1.*t2864*t32;
  p_output1[1]=-1.*t32*t4067 + t2938*t4141;
  p_output1[2]=-1.*t32*t4625 + t2938*t4681;
  p_output1[3]=t2864*t2938 + t3089*t32;
  p_output1[4]=t2938*t4067 + t32*t4141;
  p_output1[5]=t2938*t4625 + t32*t4681;
  p_output1[6]=t1704*t462*t509 - 1.*t1624*t881;
  p_output1[7]=t1218*t1704*t509 - 1.*t3580*t881;
  p_output1[8]=-1.*t1232*t1704 - 1.*t4196*t881;
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

#include "R_toe_joint_left_mex.hh"

namespace SymExpression
{

void R_toe_joint_left_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
