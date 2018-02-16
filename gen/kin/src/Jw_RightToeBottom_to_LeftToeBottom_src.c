/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:17:55 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jw_RightToeBottom_to_LeftToeBottom_src.h"

#ifdef _MSC_VER
  #define INLINE __forceinline /* use __forceinline (VC++ specific) */
#else
  #define INLINE static inline        /* use standard inline */
#endif

/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
INLINE double Power(double x, double y) { return pow(x, y); }
INLINE double Sqrt(double x) { return sqrt(x); }

INLINE double Abs(double x) { return fabs(x); }

INLINE double Exp(double x) { return exp(x); }
INLINE double Log(double x) { return log(x); }

INLINE double Sin(double x) { return sin(x); }
INLINE double Cos(double x) { return cos(x); }
INLINE double Tan(double x) { return tan(x); }

INLINE double Csc(double x) { return 1.0/sin(x); }
INLINE double Sec(double x) { return 1.0/cos(x); }

INLINE double ArcSin(double x) { return asin(x); }
INLINE double ArcCos(double x) { return acos(x); }
//INLINE double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
INLINE double ArcTan(double x, double y) { return atan2(y,x); }

INLINE double Sinh(double x) { return sinh(x); }
INLINE double Cosh(double x) { return cosh(x); }
INLINE double Tanh(double x) { return tanh(x); }

#define E 2.71828182845904523536029
#define Pi 3.14159265358979323846264
#define Degree 0.01745329251994329576924

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1)
{
  double t377;
  double t482;
  double t510;
  double t408;
  double t573;
  double t231;
  double t706;
  double t717;
  double t775;
  double t509;
  double t617;
  double t664;
  double t777;
  double t175;
  double t818;
  double t823;
  double t844;
  double t670;
  double t781;
  double t791;
  double t854;
  double t172;
  double t1048;
  double t1049;
  double t1075;
  double t808;
  double t856;
  double t948;
  double t1086;
  double t1035;
  double t1099;
  double t1100;
  double t1198;
  double t1250;
  double t1273;
  double t1456;
  double t1458;
  double t1541;
  double t1550;
  double t66;
  double t1695;
  double t2113;
  double t2129;
  double t2139;
  double t2053;
  double t2064;
  double t2083;
  double t2279;
  double t2315;
  double t2332;
  double t2108;
  double t2142;
  double t2215;
  double t2498;
  double t2559;
  double t2563;
  double t2273;
  double t2427;
  double t2448;
  double t2639;
  double t2642;
  double t2702;
  double t2479;
  double t2597;
  double t2622;
  double t2946;
  double t3019;
  double t3032;
  double t2872;
  double t2908;
  double t2911;
  double t3141;
  double t3142;
  double t3150;
  double t2936;
  double t3045;
  double t3058;
  double t3201;
  double t3258;
  double t3261;
  double t3114;
  double t3154;
  double t3171;
  double t3321;
  double t3326;
  double t3329;
  double t3193;
  double t3266;
  double t3291;
  double t1920;
  double t1931;
  double t2638;
  double t2711;
  double t2719;
  double t2813;
  double t2816;
  double t2826;
  double t3303;
  double t3339;
  double t3346;
  double t3383;
  double t3389;
  double t3391;
  double t1771;
  double t1857;
  double t1588;
  double t1607;
  double t3658;
  double t149;
  double t3660;
  double t3678;
  double t3364;
  double t3421;
  double t3463;
  double t2722;
  double t2840;
  double t2841;
  double t3699;
  double t3703;
  double t1184;
  double t1274;
  double t1371;
  double t3749;
  double t3762;
  double t3536;
  double t3545;
  double t3577;
  double t3474;
  double t3505;
  double t3520;
  double t1382;
  double t1430;
  double t1442;
  double t3690;
  double t3744;
  double t3778;
  double t3807;
  double t3809;
  double t3815;
  double t3844;
  double t3859;
  double t3867;
  double t3869;
  double t3895;
  double t3896;
  double t4005;
  double t4008;
  double t4018;
  double t4341;
  double t4356;
  double t4196;
  double t4240;
  double t4273;
  double t4310;
  double t4244;
  double t4316;
  double t4362;
  double t4387;
  double t4399;
  double t4406;
  double t4417;
  double t4418;
  double t4419;
  double t4439;
  double t4451;
  double t4462;
  t377 = Cos(var1[8]);
  t482 = Cos(var1[10]);
  t510 = Sin(var1[9]);
  t408 = Cos(var1[9]);
  t573 = Sin(var1[10]);
  t231 = Cos(var1[11]);
  t706 = -1.*t377*t482*t510;
  t717 = -1.*t377*t408*t573;
  t775 = t706 + t717;
  t509 = t377*t408*t482;
  t617 = -1.*t377*t510*t573;
  t664 = t509 + t617;
  t777 = Sin(var1[11]);
  t175 = Cos(var1[12]);
  t818 = t231*t775;
  t823 = -1.*t664*t777;
  t844 = t818 + t823;
  t670 = t231*t664;
  t781 = t775*t777;
  t791 = t670 + t781;
  t854 = Sin(var1[12]);
  t172 = Cos(var1[13]);
  t1048 = t175*t844;
  t1049 = -1.*t791*t854;
  t1075 = t1048 + t1049;
  t808 = t175*t791;
  t856 = t844*t854;
  t948 = t808 + t856;
  t1086 = Sin(var1[13]);
  t1035 = t172*t948;
  t1099 = t1075*t1086;
  t1100 = t1035 + t1099;
  t1198 = t172*t1075;
  t1250 = -1.*t948*t1086;
  t1273 = t1198 + t1250;
  t1456 = Cos(var1[0]);
  t1458 = -1.*t1456;
  t1541 = 0. + t1458;
  t1550 = Sin(var1[7]);
  t66 = Sin(var1[8]);
  t1695 = Cos(var1[7]);
  t2113 = t1695*t408;
  t2129 = -1.*t1550*t66*t510;
  t2139 = t2113 + t2129;
  t2053 = t408*t1550*t66;
  t2064 = t1695*t510;
  t2083 = t2053 + t2064;
  t2279 = t482*t2139;
  t2315 = -1.*t2083*t573;
  t2332 = t2279 + t2315;
  t2108 = t482*t2083;
  t2142 = t2139*t573;
  t2215 = t2108 + t2142;
  t2498 = t231*t2332;
  t2559 = -1.*t2215*t777;
  t2563 = t2498 + t2559;
  t2273 = t231*t2215;
  t2427 = t2332*t777;
  t2448 = t2273 + t2427;
  t2639 = t175*t2563;
  t2642 = -1.*t2448*t854;
  t2702 = t2639 + t2642;
  t2479 = t175*t2448;
  t2597 = t2563*t854;
  t2622 = t2479 + t2597;
  t2946 = -1.*t408*t1550;
  t3019 = -1.*t1695*t66*t510;
  t3032 = t2946 + t3019;
  t2872 = t1695*t408*t66;
  t2908 = -1.*t1550*t510;
  t2911 = t2872 + t2908;
  t3141 = t482*t3032;
  t3142 = -1.*t2911*t573;
  t3150 = t3141 + t3142;
  t2936 = t482*t2911;
  t3045 = t3032*t573;
  t3058 = t2936 + t3045;
  t3201 = t231*t3150;
  t3258 = -1.*t3058*t777;
  t3261 = t3201 + t3258;
  t3114 = t231*t3058;
  t3154 = t3150*t777;
  t3171 = t3114 + t3154;
  t3321 = t175*t3261;
  t3326 = -1.*t3171*t854;
  t3329 = t3321 + t3326;
  t3193 = t175*t3171;
  t3266 = t3261*t854;
  t3291 = t3193 + t3266;
  t1920 = Sin(var1[0]);
  t1931 = 0. + t1920;
  t2638 = t172*t2622;
  t2711 = t2702*t1086;
  t2719 = t2638 + t2711;
  t2813 = t172*t2702;
  t2816 = -1.*t2622*t1086;
  t2826 = t2813 + t2816;
  t3303 = t172*t3291;
  t3339 = t3329*t1086;
  t3346 = t3303 + t3339;
  t3383 = t172*t3329;
  t3389 = -1.*t3291*t1086;
  t3391 = t3383 + t3389;
  t1771 = t1695*t377;
  t1857 = 0. + t1771;
  t1588 = t377*t1550;
  t1607 = 0. + t1588;
  t3658 = Cos(var1[1]);
  t149 = 0. + t66;
  t3660 = t1456*t3658;
  t3678 = 0. + t3660;
  t3364 = -0.642788*t3346;
  t3421 = -0.766044*t3391;
  t3463 = 0. + t3364 + t3421;
  t2722 = -0.642788*t2719;
  t2840 = -0.766044*t2826;
  t2841 = 0. + t2722 + t2840;
  t3699 = t3658*t1920;
  t3703 = 0. + t3699;
  t1184 = 0.642788*t1100;
  t1274 = 0.766044*t1273;
  t1371 = 0. + t1184 + t1274;
  t3749 = Sin(var1[1]);
  t3762 = 0. + t3749;
  t3536 = 0.766044*t3346;
  t3545 = -0.642788*t3391;
  t3577 = 0. + t3536 + t3545;
  t3474 = 0.766044*t2719;
  t3505 = -0.642788*t2826;
  t3520 = 0. + t3474 + t3505;
  t1382 = -0.766044*t1100;
  t1430 = 0.642788*t1273;
  t1442 = 0. + t1382 + t1430;
  t3690 = t1857*t3678;
  t3744 = t1607*t3703;
  t3778 = t149*t3762;
  t3807 = t3690 + t3744 + t3778;
  t3809 = t3678*t3463;
  t3815 = t2841*t3703;
  t3844 = t1371*t3762;
  t3859 = t3809 + t3815 + t3844;
  t3867 = t3678*t3577;
  t3869 = t3520*t3703;
  t3895 = t1442*t3762;
  t3896 = t3867 + t3869 + t3895;
  t4005 = -1.*t1550;
  t4008 = 0. + t4005;
  t4018 = 0. + t1695;
  t4341 = -1.*t66;
  t4356 = 0. + t4341;
  t4196 = -1.*t1695*t377;
  t4240 = 0. + t4196;
  t4273 = -1.*t377*t1550;
  t4310 = 0. + t4273;
  t4244 = t4240*t1857;
  t4316 = t4310*t1607;
  t4362 = t4356*t149;
  t4387 = t4244 + t4316 + t4362;
  t4399 = t4356*t1371;
  t4406 = t4240*t3463;
  t4417 = t4310*t2841;
  t4418 = t4399 + t4406 + t4417;
  t4419 = t4356*t1442;
  t4439 = t4240*t3577;
  t4451 = t4310*t3520;
  t4462 = t4419 + t4439 + t4451;
  p_output1[0]=t149;
  p_output1[1]=t1371;
  p_output1[2]=t1442;
  p_output1[3]=0. + t1541*t1607 + t1857*t1931;
  p_output1[4]=0. + t1541*t2841 + t1931*t3463;
  p_output1[5]=0. + t1541*t3520 + t1931*t3577;
  p_output1[6]=t3807;
  p_output1[7]=t3859;
  p_output1[8]=t3896;
  p_output1[9]=t3807;
  p_output1[10]=t3859;
  p_output1[11]=t3896;
  p_output1[12]=t3807;
  p_output1[13]=t3859;
  p_output1[14]=t3896;
  p_output1[15]=t3807;
  p_output1[16]=t3859;
  p_output1[17]=t3896;
  p_output1[18]=t3807;
  p_output1[19]=t3859;
  p_output1[20]=t3896;
  p_output1[21]=0. - 1.*t149;
  p_output1[22]=0. - 1.*t1371;
  p_output1[23]=0. - 1.*t1442;
  p_output1[24]=0. + t1857*t4008 + t1607*t4018;
  p_output1[25]=0. + t3463*t4008 + t2841*t4018;
  p_output1[26]=0. + t3577*t4008 + t3520*t4018;
  p_output1[27]=t4387;
  p_output1[28]=t4418;
  p_output1[29]=t4462;
  p_output1[30]=t4387;
  p_output1[31]=t4418;
  p_output1[32]=t4462;
  p_output1[33]=t4387;
  p_output1[34]=t4418;
  p_output1[35]=t4462;
  p_output1[36]=t4387;
  p_output1[37]=t4418;
  p_output1[38]=t4462;
  p_output1[39]=t4387;
  p_output1[40]=t4418;
  p_output1[41]=t4462;
}



void Jw_RightToeBottom_to_LeftToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
