/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:16:05 GMT-05:00
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
  double t107;
  double t313;
  double t346;
  double t323;
  double t383;
  double t108;
  double t110;
  double t240;
  double t295;
  double t456;
  double t336;
  double t391;
  double t415;
  double t471;
  double t472;
  double t497;
  double t445;
  double t555;
  double t571;
  double t1440;
  double t1346;
  double t1380;
  double t1412;
  double t1315;
  double t1442;
  double t1451;
  double t1463;
  double t1566;
  double t1413;
  double t1487;
  double t1525;
  double t1313;
  double t1576;
  double t1604;
  double t1607;
  double t1654;
  double t1534;
  double t1620;
  double t1635;
  double t1312;
  double t1659;
  double t1672;
  double t1699;
  double t1772;
  double t1643;
  double t1701;
  double t1702;
  double t1307;
  double t1812;
  double t1819;
  double t1821;
  double t1949;
  double t1751;
  double t1874;
  double t1911;
  double t1291;
  double t1980;
  double t1994;
  double t2007;
  double t691;
  double t717;
  double t766;
  double t869;
  double t931;
  double t945;
  double t812;
  double t984;
  double t1006;
  double t2458;
  double t2520;
  double t2534;
  double t2556;
  double t2577;
  double t2579;
  double t2536;
  double t2585;
  double t2594;
  double t2654;
  double t2655;
  double t2661;
  double t2632;
  double t2683;
  double t2703;
  double t2719;
  double t2789;
  double t2790;
  double t2705;
  double t2796;
  double t2797;
  double t2815;
  double t2829;
  double t2842;
  double t2806;
  double t2876;
  double t2886;
  double t2909;
  double t2919;
  double t2953;
  double t1088;
  double t1108;
  double t1186;
  double t3178;
  double t3199;
  double t3213;
  double t3224;
  double t3236;
  double t3238;
  double t3217;
  double t3251;
  double t3273;
  double t3290;
  double t3305;
  double t3329;
  double t3278;
  double t3330;
  double t3340;
  double t3379;
  double t3385;
  double t3396;
  double t3349;
  double t3397;
  double t3416;
  double t3441;
  double t3443;
  double t3444;
  double t3438;
  double t3448;
  double t3464;
  double t3550;
  double t3554;
  double t3561;
  double t1928;
  double t2024;
  double t2059;
  double t2153;
  double t2207;
  double t2208;
  double t2905;
  double t2955;
  double t2979;
  double t3085;
  double t3113;
  double t3127;
  double t3494;
  double t3587;
  double t3622;
  double t3696;
  double t3701;
  double t3710;
  double t3835;
  double t3838;
  double t4039;
  double t4065;
  double t4195;
  double t4239;
  double t4386;
  double t4387;
  double t4504;
  double t4537;
  double t4604;
  double t4605;
  double t3842;
  double t3851;
  double t3903;
  double t3918;
  double t3924;
  double t3933;
  double t3935;
  double t3944;
  double t3965;
  double t3985;
  double t3989;
  double t4030;
  double t4118;
  double t4130;
  double t4131;
  double t4164;
  double t4171;
  double t4178;
  double t4240;
  double t4248;
  double t4261;
  double t4300;
  double t4307;
  double t4320;
  double t4398;
  double t4400;
  double t4403;
  double t4439;
  double t4479;
  double t4493;
  double t4566;
  double t4570;
  double t4571;
  double t4590;
  double t4596;
  double t4597;
  double t4611;
  double t4616;
  double t4619;
  double t4624;
  double t4626;
  double t4628;
  t107 = Cos(var1[3]);
  t313 = Cos(var1[5]);
  t346 = Sin(var1[3]);
  t323 = Sin(var1[4]);
  t383 = Sin(var1[5]);
  t108 = Cos(var1[4]);
  t110 = Sin(var1[14]);
  t240 = Cos(var1[14]);
  t295 = Sin(var1[13]);
  t456 = Cos(var1[13]);
  t336 = t107*t313*t323;
  t391 = t346*t383;
  t415 = t336 + t391;
  t471 = -1.*t313*t346;
  t472 = t107*t323*t383;
  t497 = t471 + t472;
  t445 = t295*t415;
  t555 = t456*t497;
  t571 = t445 + t555;
  t1440 = Cos(var1[15]);
  t1346 = t456*t415;
  t1380 = -1.*t295*t497;
  t1412 = t1346 + t1380;
  t1315 = Sin(var1[15]);
  t1442 = t240*t107*t108;
  t1451 = t110*t571;
  t1463 = t1442 + t1451;
  t1566 = Cos(var1[16]);
  t1413 = t1315*t1412;
  t1487 = t1440*t1463;
  t1525 = t1413 + t1487;
  t1313 = Sin(var1[16]);
  t1576 = t1440*t1412;
  t1604 = -1.*t1315*t1463;
  t1607 = t1576 + t1604;
  t1654 = Cos(var1[17]);
  t1534 = -1.*t1313*t1525;
  t1620 = t1566*t1607;
  t1635 = t1534 + t1620;
  t1312 = Sin(var1[17]);
  t1659 = t1566*t1525;
  t1672 = t1313*t1607;
  t1699 = t1659 + t1672;
  t1772 = Cos(var1[18]);
  t1643 = t1312*t1635;
  t1701 = t1654*t1699;
  t1702 = t1643 + t1701;
  t1307 = Sin(var1[18]);
  t1812 = t1654*t1635;
  t1819 = -1.*t1312*t1699;
  t1821 = t1812 + t1819;
  t1949 = Cos(var1[19]);
  t1751 = -1.*t1307*t1702;
  t1874 = t1772*t1821;
  t1911 = t1751 + t1874;
  t1291 = Sin(var1[19]);
  t1980 = t1772*t1702;
  t1994 = t1307*t1821;
  t2007 = t1980 + t1994;
  t691 = t313*t346*t323;
  t717 = -1.*t107*t383;
  t766 = t691 + t717;
  t869 = t107*t313;
  t931 = t346*t323*t383;
  t945 = t869 + t931;
  t812 = t295*t766;
  t984 = t456*t945;
  t1006 = t812 + t984;
  t2458 = t456*t766;
  t2520 = -1.*t295*t945;
  t2534 = t2458 + t2520;
  t2556 = t240*t108*t346;
  t2577 = t110*t1006;
  t2579 = t2556 + t2577;
  t2536 = t1315*t2534;
  t2585 = t1440*t2579;
  t2594 = t2536 + t2585;
  t2654 = t1440*t2534;
  t2655 = -1.*t1315*t2579;
  t2661 = t2654 + t2655;
  t2632 = -1.*t1313*t2594;
  t2683 = t1566*t2661;
  t2703 = t2632 + t2683;
  t2719 = t1566*t2594;
  t2789 = t1313*t2661;
  t2790 = t2719 + t2789;
  t2705 = t1312*t2703;
  t2796 = t1654*t2790;
  t2797 = t2705 + t2796;
  t2815 = t1654*t2703;
  t2829 = -1.*t1312*t2790;
  t2842 = t2815 + t2829;
  t2806 = -1.*t1307*t2797;
  t2876 = t1772*t2842;
  t2886 = t2806 + t2876;
  t2909 = t1772*t2797;
  t2919 = t1307*t2842;
  t2953 = t2909 + t2919;
  t1088 = t108*t313*t295;
  t1108 = t456*t108*t383;
  t1186 = t1088 + t1108;
  t3178 = t456*t108*t313;
  t3199 = -1.*t108*t295*t383;
  t3213 = t3178 + t3199;
  t3224 = -1.*t240*t323;
  t3236 = t110*t1186;
  t3238 = t3224 + t3236;
  t3217 = t1315*t3213;
  t3251 = t1440*t3238;
  t3273 = t3217 + t3251;
  t3290 = t1440*t3213;
  t3305 = -1.*t1315*t3238;
  t3329 = t3290 + t3305;
  t3278 = -1.*t1313*t3273;
  t3330 = t1566*t3329;
  t3340 = t3278 + t3330;
  t3379 = t1566*t3273;
  t3385 = t1313*t3329;
  t3396 = t3379 + t3385;
  t3349 = t1312*t3340;
  t3397 = t1654*t3396;
  t3416 = t3349 + t3397;
  t3441 = t1654*t3340;
  t3443 = -1.*t1312*t3396;
  t3444 = t3441 + t3443;
  t3438 = -1.*t1307*t3416;
  t3448 = t1772*t3444;
  t3464 = t3438 + t3448;
  t3550 = t1772*t3416;
  t3554 = t1307*t3444;
  t3561 = t3550 + t3554;
  t1928 = t1291*t1911;
  t2024 = t1949*t2007;
  t2059 = t1928 + t2024;
  t2153 = t1949*t1911;
  t2207 = -1.*t1291*t2007;
  t2208 = t2153 + t2207;
  t2905 = t1291*t2886;
  t2955 = t1949*t2953;
  t2979 = t2905 + t2955;
  t3085 = t1949*t2886;
  t3113 = -1.*t1291*t2953;
  t3127 = t3085 + t3113;
  t3494 = t1291*t3464;
  t3587 = t1949*t3561;
  t3622 = t3494 + t3587;
  t3696 = t1949*t3464;
  t3701 = -1.*t1291*t3561;
  t3710 = t3696 + t3701;
  t3835 = -1.*t240;
  t3838 = 1. + t3835;
  t4039 = -1.*t1440;
  t4065 = 1. + t4039;
  t4195 = -1.*t1566;
  t4239 = 1. + t4195;
  t4386 = -1.*t1654;
  t4387 = 1. + t4386;
  t4504 = -1.*t1772;
  t4537 = 1. + t4504;
  t4604 = -1.*t1949;
  t4605 = 1. + t4604;
  t3842 = -0.049*t3838;
  t3851 = -0.135*t110;
  t3903 = 0. + t3842 + t3851;
  t3918 = 0.135*t295;
  t3924 = 0. + t3918;
  t3933 = -1.*t456;
  t3935 = 1. + t3933;
  t3944 = -0.135*t3935;
  t3965 = 0. + t3944;
  t3985 = -0.135*t3838;
  t3989 = 0.049*t110;
  t4030 = 0. + t3985 + t3989;
  t4118 = -0.09*t4065;
  t4130 = 0.049*t1315;
  t4131 = 0. + t4118 + t4130;
  t4164 = -0.049*t4065;
  t4171 = -0.09*t1315;
  t4178 = 0. + t4164 + t4171;
  t4240 = -0.049*t4239;
  t4248 = -0.21*t1313;
  t4261 = 0. + t4240 + t4248;
  t4300 = -0.21*t4239;
  t4307 = 0.049*t1313;
  t4320 = 0. + t4300 + t4307;
  t4398 = -0.2707*t4387;
  t4400 = 0.0016*t1312;
  t4403 = 0. + t4398 + t4400;
  t4439 = -0.0016*t4387;
  t4479 = -0.2707*t1312;
  t4493 = 0. + t4439 + t4479;
  t4566 = 0.0184*t4537;
  t4570 = -0.7055*t1307;
  t4571 = 0. + t4566 + t4570;
  t4590 = -0.7055*t4537;
  t4596 = -0.0184*t1307;
  t4597 = 0. + t4590 + t4596;
  t4611 = -1.1135*t4605;
  t4616 = 0.0216*t1291;
  t4619 = 0. + t4611 + t4616;
  t4624 = -0.0216*t4605;
  t4626 = -1.1135*t1291;
  t4628 = 0. + t4624 + t4626;
  p_output1[0]=t107*t108*t110 - 1.*t240*t571;
  p_output1[1]=-1.*t1006*t240 + t108*t110*t346;
  p_output1[2]=-1.*t1186*t240 - 1.*t110*t323;
  p_output1[3]=0.;
  p_output1[4]=0.642788*t2059 + 0.766044*t2208;
  p_output1[5]=0.642788*t2979 + 0.766044*t3127;
  p_output1[6]=0.642788*t3622 + 0.766044*t3710;
  p_output1[7]=0.;
  p_output1[8]=-0.766044*t2059 + 0.642788*t2208;
  p_output1[9]=-0.766044*t2979 + 0.642788*t3127;
  p_output1[10]=-0.766044*t3622 + 0.642788*t3710;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.0306*t2059 - 1.1312*t2208 + t107*t108*t3903 + t1412*t4131 + t3924*t415 + t1463*t4178 + t1525*t4261 + t1607*t4320 + t1635*t4403 + t1699*t4493 + t1702*t4571 + t1821*t4597 + t1911*t4619 + t2007*t4628 + t3965*t497 + t4030*t571 - 0.1305*(-1.*t107*t108*t110 + t240*t571) + var1[0];
  p_output1[13]=0. + 0.0306*t2979 - 1.1312*t3127 - 0.1305*(t1006*t240 - 1.*t108*t110*t346) + t108*t346*t3903 + t1006*t4030 + t2534*t4131 + t2579*t4178 + t2594*t4261 + t2661*t4320 + t2703*t4403 + t2790*t4493 + t2797*t4571 + t2842*t4597 + t2886*t4619 + t2953*t4628 + t3924*t766 + t3965*t945 + var1[1];
  p_output1[14]=0. - 0.1305*(t1186*t240 + t110*t323) + 0.0306*t3622 - 1.1312*t3710 - 1.*t323*t3903 + t108*t313*t3924 + t108*t383*t3965 + t1186*t4030 + t3213*t4131 + t3238*t4178 + t3273*t4261 + t3329*t4320 + t3340*t4403 + t3396*t4493 + t3416*t4571 + t3444*t4597 + t3464*t4619 + t3561*t4628 + var1[2];
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

#include "H_RightToeBottom_mex.hh"

namespace SymExpression
{

void H_RightToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
