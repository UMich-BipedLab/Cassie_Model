/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:17:54 GMT-05:00
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
  double t176;
  double t213;
  double t234;
  double t200;
  double t289;
  double t175;
  double t381;
  double t383;
  double t408;
  double t231;
  double t311;
  double t352;
  double t438;
  double t172;
  double t510;
  double t570;
  double t573;
  double t377;
  double t482;
  double t504;
  double t600;
  double t149;
  double t706;
  double t711;
  double t717;
  double t509;
  double t617;
  double t665;
  double t731;
  double t670;
  double t775;
  double t777;
  double t791;
  double t798;
  double t808;
  double t865;
  double t923;
  double t948;
  double t1004;
  double t51;
  double t1068;
  double t1442;
  double t1452;
  double t1456;
  double t1273;
  double t1274;
  double t1311;
  double t1550;
  double t1580;
  double t1588;
  double t1430;
  double t1458;
  double t1476;
  double t1695;
  double t1752;
  double t1771;
  double t1541;
  double t1607;
  double t1621;
  double t1931;
  double t1995;
  double t2017;
  double t1627;
  double t1857;
  double t1916;
  double t2226;
  double t2267;
  double t2273;
  double t2142;
  double t2177;
  double t2193;
  double t2332;
  double t2412;
  double t2427;
  double t2215;
  double t2279;
  double t2299;
  double t2498;
  double t2553;
  double t2559;
  double t2315;
  double t2448;
  double t2462;
  double t2622;
  double t2631;
  double t2638;
  double t2479;
  double t2563;
  double t2595;
  double t1100;
  double t1184;
  double t1920;
  double t2030;
  double t2053;
  double t2083;
  double t2095;
  double t2108;
  double t2597;
  double t2639;
  double t2642;
  double t2711;
  double t2718;
  double t2719;
  double t1086;
  double t1099;
  double t1035;
  double t1048;
  double t3045;
  double t66;
  double t3058;
  double t3114;
  double t2702;
  double t2813;
  double t2816;
  double t2064;
  double t2113;
  double t2129;
  double t3142;
  double t3150;
  double t781;
  double t818;
  double t823;
  double t3171;
  double t3193;
  double t2911;
  double t2936;
  double t2946;
  double t2841;
  double t2869;
  double t2872;
  double t844;
  double t854;
  double t856;
  double t3141;
  double t3154;
  double t3201;
  double t3258;
  double t3261;
  double t3266;
  double t3291;
  double t3303;
  double t3321;
  double t3326;
  double t3329;
  double t3339;
  double t3434;
  double t3463;
  double t3468;
  double t3694;
  double t3699;
  double t3632;
  double t3638;
  double t3663;
  double t3678;
  double t3658;
  double t3690;
  double t3703;
  double t3744;
  double t3749;
  double t3762;
  double t3778;
  double t3815;
  double t3844;
  double t3859;
  double t3867;
  double t3869;
  t176 = Cos(var1[8]);
  t213 = Cos(var1[10]);
  t234 = Sin(var1[9]);
  t200 = Cos(var1[9]);
  t289 = Sin(var1[10]);
  t175 = Cos(var1[11]);
  t381 = -1.*t176*t213*t234;
  t383 = -1.*t176*t200*t289;
  t408 = t381 + t383;
  t231 = t176*t200*t213;
  t311 = -1.*t176*t234*t289;
  t352 = t231 + t311;
  t438 = Sin(var1[11]);
  t172 = Cos(var1[12]);
  t510 = t175*t408;
  t570 = -1.*t352*t438;
  t573 = t510 + t570;
  t377 = t175*t352;
  t482 = t408*t438;
  t504 = t377 + t482;
  t600 = Sin(var1[12]);
  t149 = Cos(var1[13]);
  t706 = t172*t573;
  t711 = -1.*t504*t600;
  t717 = t706 + t711;
  t509 = t172*t504;
  t617 = t573*t600;
  t665 = t509 + t617;
  t731 = Sin(var1[13]);
  t670 = t149*t665;
  t775 = t717*t731;
  t777 = t670 + t775;
  t791 = t149*t717;
  t798 = -1.*t665*t731;
  t808 = t791 + t798;
  t865 = Cos(var1[0]);
  t923 = -1.*t865;
  t948 = 0. + t923;
  t1004 = Sin(var1[7]);
  t51 = Sin(var1[8]);
  t1068 = Cos(var1[7]);
  t1442 = t1068*t200;
  t1452 = -1.*t1004*t51*t234;
  t1456 = t1442 + t1452;
  t1273 = t200*t1004*t51;
  t1274 = t1068*t234;
  t1311 = t1273 + t1274;
  t1550 = t213*t1456;
  t1580 = -1.*t1311*t289;
  t1588 = t1550 + t1580;
  t1430 = t213*t1311;
  t1458 = t1456*t289;
  t1476 = t1430 + t1458;
  t1695 = t175*t1588;
  t1752 = -1.*t1476*t438;
  t1771 = t1695 + t1752;
  t1541 = t175*t1476;
  t1607 = t1588*t438;
  t1621 = t1541 + t1607;
  t1931 = t172*t1771;
  t1995 = -1.*t1621*t600;
  t2017 = t1931 + t1995;
  t1627 = t172*t1621;
  t1857 = t1771*t600;
  t1916 = t1627 + t1857;
  t2226 = -1.*t200*t1004;
  t2267 = -1.*t1068*t51*t234;
  t2273 = t2226 + t2267;
  t2142 = t1068*t200*t51;
  t2177 = -1.*t1004*t234;
  t2193 = t2142 + t2177;
  t2332 = t213*t2273;
  t2412 = -1.*t2193*t289;
  t2427 = t2332 + t2412;
  t2215 = t213*t2193;
  t2279 = t2273*t289;
  t2299 = t2215 + t2279;
  t2498 = t175*t2427;
  t2553 = -1.*t2299*t438;
  t2559 = t2498 + t2553;
  t2315 = t175*t2299;
  t2448 = t2427*t438;
  t2462 = t2315 + t2448;
  t2622 = t172*t2559;
  t2631 = -1.*t2462*t600;
  t2638 = t2622 + t2631;
  t2479 = t172*t2462;
  t2563 = t2559*t600;
  t2595 = t2479 + t2563;
  t1100 = Sin(var1[0]);
  t1184 = 0. + t1100;
  t1920 = t149*t1916;
  t2030 = t2017*t731;
  t2053 = t1920 + t2030;
  t2083 = t149*t2017;
  t2095 = -1.*t1916*t731;
  t2108 = t2083 + t2095;
  t2597 = t149*t2595;
  t2639 = t2638*t731;
  t2642 = t2597 + t2639;
  t2711 = t149*t2638;
  t2718 = -1.*t2595*t731;
  t2719 = t2711 + t2718;
  t1086 = t1068*t176;
  t1099 = 0. + t1086;
  t1035 = t176*t1004;
  t1048 = 0. + t1035;
  t3045 = Cos(var1[1]);
  t66 = 0. + t51;
  t3058 = t865*t3045;
  t3114 = 0. + t3058;
  t2702 = -0.642788*t2642;
  t2813 = -0.766044*t2719;
  t2816 = 0. + t2702 + t2813;
  t2064 = -0.642788*t2053;
  t2113 = -0.766044*t2108;
  t2129 = 0. + t2064 + t2113;
  t3142 = t3045*t1100;
  t3150 = 0. + t3142;
  t781 = 0.642788*t777;
  t818 = 0.766044*t808;
  t823 = 0. + t781 + t818;
  t3171 = Sin(var1[1]);
  t3193 = 0. + t3171;
  t2911 = 0.766044*t2642;
  t2936 = -0.642788*t2719;
  t2946 = 0. + t2911 + t2936;
  t2841 = 0.766044*t2053;
  t2869 = -0.642788*t2108;
  t2872 = 0. + t2841 + t2869;
  t844 = -0.766044*t777;
  t854 = 0.642788*t808;
  t856 = 0. + t844 + t854;
  t3141 = t1099*t3114;
  t3154 = t1048*t3150;
  t3201 = t66*t3193;
  t3258 = t3141 + t3154 + t3201;
  t3261 = t3114*t2816;
  t3266 = t2129*t3150;
  t3291 = t823*t3193;
  t3303 = t3261 + t3266 + t3291;
  t3321 = t3114*t2946;
  t3326 = t2872*t3150;
  t3329 = t856*t3193;
  t3339 = t3321 + t3326 + t3329;
  t3434 = -1.*t1004;
  t3463 = 0. + t3434;
  t3468 = 0. + t1068;
  t3694 = -1.*t51;
  t3699 = 0. + t3694;
  t3632 = -1.*t1068*t176;
  t3638 = 0. + t3632;
  t3663 = -1.*t176*t1004;
  t3678 = 0. + t3663;
  t3658 = t3638*t1099;
  t3690 = t3678*t1048;
  t3703 = t3699*t66;
  t3744 = t3658 + t3690 + t3703;
  t3749 = t3699*t823;
  t3762 = t3638*t2816;
  t3778 = t3678*t2129;
  t3815 = t3749 + t3762 + t3778;
  t3844 = t3699*t856;
  t3859 = t3638*t2946;
  t3867 = t3678*t2872;
  t3869 = t3844 + t3859 + t3867;
  p_output1[0]=t66;
  p_output1[1]=t823;
  p_output1[2]=t856;
  p_output1[3]=0. + t1099*t1184 + t1048*t948;
  p_output1[4]=0. + t1184*t2816 + t2129*t948;
  p_output1[5]=0. + t1184*t2946 + t2872*t948;
  p_output1[6]=t3258;
  p_output1[7]=t3303;
  p_output1[8]=t3339;
  p_output1[9]=t3258;
  p_output1[10]=t3303;
  p_output1[11]=t3339;
  p_output1[12]=t3258;
  p_output1[13]=t3303;
  p_output1[14]=t3339;
  p_output1[15]=t3258;
  p_output1[16]=t3303;
  p_output1[17]=t3339;
  p_output1[18]=t3258;
  p_output1[19]=t3303;
  p_output1[20]=t3339;
  p_output1[21]=0. - 1.*t66;
  p_output1[22]=0. - 1.*t823;
  p_output1[23]=0. - 1.*t856;
  p_output1[24]=0. + t1099*t3463 + t1048*t3468;
  p_output1[25]=0. + t2816*t3463 + t2129*t3468;
  p_output1[26]=0. + t2946*t3463 + t2872*t3468;
  p_output1[27]=t3744;
  p_output1[28]=t3815;
  p_output1[29]=t3869;
  p_output1[30]=t3744;
  p_output1[31]=t3815;
  p_output1[32]=t3869;
  p_output1[33]=t3744;
  p_output1[34]=t3815;
  p_output1[35]=t3869;
  p_output1[36]=t3744;
  p_output1[37]=t3815;
  p_output1[38]=t3869;
  p_output1[39]=t3744;
  p_output1[40]=t3815;
  p_output1[41]=t3869;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 14, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Jw_RightToeBottom_to_LeftToeBottom_mex.hh"

namespace SymExpression
{

void Jw_RightToeBottom_to_LeftToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
