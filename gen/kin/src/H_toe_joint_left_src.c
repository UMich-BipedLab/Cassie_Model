/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:33:20 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_toe_joint_left_src.h"

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
  double t531;
  double t699;
  double t791;
  double t712;
  double t803;
  double t670;
  double t907;
  double t924;
  double t935;
  double t760;
  double t868;
  double t904;
  double t971;
  double t527;
  double t1232;
  double t1296;
  double t1312;
  double t535;
  double t548;
  double t585;
  double t905;
  double t1028;
  double t1061;
  double t1082;
  double t1089;
  double t1148;
  double t1322;
  double t1417;
  double t1230;
  double t1348;
  double t1356;
  double t510;
  double t1418;
  double t1422;
  double t1446;
  double t1564;
  double t1363;
  double t1459;
  double t1511;
  double t503;
  double t1567;
  double t1626;
  double t1655;
  double t1746;
  double t1512;
  double t1704;
  double t1739;
  double t214;
  double t1751;
  double t1758;
  double t1788;
  double t25;
  double t2054;
  double t2058;
  double t2083;
  double t1962;
  double t1983;
  double t2026;
  double t2274;
  double t2295;
  double t2306;
  double t1931;
  double t2031;
  double t2090;
  double t2137;
  double t2170;
  double t2215;
  double t2249;
  double t2323;
  double t2324;
  double t2368;
  double t2455;
  double t2507;
  double t2334;
  double t2525;
  double t2531;
  double t2570;
  double t2576;
  double t2578;
  double t1858;
  double t2546;
  double t2607;
  double t2619;
  double t2659;
  double t2667;
  double t2681;
  double t3045;
  double t3072;
  double t3089;
  double t2876;
  double t2912;
  double t2938;
  double t2977;
  double t3002;
  double t3012;
  double t3026;
  double t3102;
  double t3117;
  double t3171;
  double t3184;
  double t3202;
  double t3154;
  double t3239;
  double t3250;
  double t3291;
  double t3292;
  double t3298;
  double t3274;
  double t3310;
  double t3335;
  double t3391;
  double t3424;
  double t3425;
  double t1745;
  double t1789;
  double t1814;
  double t1860;
  double t1863;
  double t1877;
  double t2624;
  double t2786;
  double t2791;
  double t2825;
  double t2827;
  double t2833;
  double t3390;
  double t3439;
  double t3502;
  double t3520;
  double t3531;
  double t3551;
  double t3979;
  double t3987;
  double t4164;
  double t4168;
  double t4287;
  double t4292;
  double t4432;
  double t4437;
  double t4566;
  double t4574;
  double t4695;
  double t4696;
  double t3591;
  double t3618;
  double t3640;
  double t3830;
  double t3879;
  double t3883;
  double t3902;
  double t3954;
  double t3962;
  double t4041;
  double t4051;
  double t4052;
  double t4067;
  double t4073;
  double t4102;
  double t4170;
  double t4172;
  double t4191;
  double t4226;
  double t4247;
  double t4261;
  double t4334;
  double t4354;
  double t4368;
  double t4380;
  double t4381;
  double t4418;
  double t4438;
  double t4444;
  double t4456;
  double t4488;
  double t4491;
  double t4493;
  double t4587;
  double t4605;
  double t4610;
  double t4662;
  double t4667;
  double t4686;
  double t4706;
  double t4723;
  double t4724;
  double t4739;
  double t4752;
  double t4759;
  double t3642;
  double t3644;
  double t3671;
  double t3682;
  double t3697;
  double t3719;
  t531 = Cos(var1[3]);
  t699 = Cos(var1[5]);
  t791 = Sin(var1[4]);
  t712 = Sin(var1[3]);
  t803 = Sin(var1[5]);
  t670 = Cos(var1[6]);
  t907 = t531*t699*t791;
  t924 = t712*t803;
  t935 = t907 + t924;
  t760 = -1.*t699*t712;
  t868 = t531*t791*t803;
  t904 = t760 + t868;
  t971 = Sin(var1[6]);
  t527 = Cos(var1[8]);
  t1232 = t670*t935;
  t1296 = -1.*t904*t971;
  t1312 = t1232 + t1296;
  t535 = Cos(var1[4]);
  t548 = Cos(var1[7]);
  t585 = t531*t535*t548;
  t905 = t670*t904;
  t1028 = t935*t971;
  t1061 = t905 + t1028;
  t1082 = Sin(var1[7]);
  t1089 = t1061*t1082;
  t1148 = t585 + t1089;
  t1322 = Sin(var1[8]);
  t1417 = Cos(var1[9]);
  t1230 = t527*t1148;
  t1348 = t1312*t1322;
  t1356 = t1230 + t1348;
  t510 = Sin(var1[9]);
  t1418 = t527*t1312;
  t1422 = -1.*t1148*t1322;
  t1446 = t1418 + t1422;
  t1564 = Cos(var1[10]);
  t1363 = -1.*t510*t1356;
  t1459 = t1417*t1446;
  t1511 = t1363 + t1459;
  t503 = Sin(var1[10]);
  t1567 = t1417*t1356;
  t1626 = t510*t1446;
  t1655 = t1567 + t1626;
  t1746 = Cos(var1[11]);
  t1512 = t503*t1511;
  t1704 = t1564*t1655;
  t1739 = t1512 + t1704;
  t214 = Sin(var1[11]);
  t1751 = t1564*t1511;
  t1758 = -1.*t503*t1655;
  t1788 = t1751 + t1758;
  t25 = Cos(var1[12]);
  t2054 = t699*t712*t791;
  t2058 = -1.*t531*t803;
  t2083 = t2054 + t2058;
  t1962 = t531*t699;
  t1983 = t712*t791*t803;
  t2026 = t1962 + t1983;
  t2274 = t670*t2083;
  t2295 = -1.*t2026*t971;
  t2306 = t2274 + t2295;
  t1931 = t535*t548*t712;
  t2031 = t670*t2026;
  t2090 = t2083*t971;
  t2137 = t2031 + t2090;
  t2170 = t2137*t1082;
  t2215 = t1931 + t2170;
  t2249 = t527*t2215;
  t2323 = t2306*t1322;
  t2324 = t2249 + t2323;
  t2368 = t527*t2306;
  t2455 = -1.*t2215*t1322;
  t2507 = t2368 + t2455;
  t2334 = -1.*t510*t2324;
  t2525 = t1417*t2507;
  t2531 = t2334 + t2525;
  t2570 = t1417*t2324;
  t2576 = t510*t2507;
  t2578 = t2570 + t2576;
  t1858 = Sin(var1[12]);
  t2546 = t503*t2531;
  t2607 = t1564*t2578;
  t2619 = t2546 + t2607;
  t2659 = t1564*t2531;
  t2667 = -1.*t503*t2578;
  t2681 = t2659 + t2667;
  t3045 = t535*t699*t670;
  t3072 = -1.*t535*t803*t971;
  t3089 = t3045 + t3072;
  t2876 = -1.*t548*t791;
  t2912 = t535*t670*t803;
  t2938 = t535*t699*t971;
  t2977 = t2912 + t2938;
  t3002 = t2977*t1082;
  t3012 = t2876 + t3002;
  t3026 = t527*t3012;
  t3102 = t3089*t1322;
  t3117 = t3026 + t3102;
  t3171 = t527*t3089;
  t3184 = -1.*t3012*t1322;
  t3202 = t3171 + t3184;
  t3154 = -1.*t510*t3117;
  t3239 = t1417*t3202;
  t3250 = t3154 + t3239;
  t3291 = t1417*t3117;
  t3292 = t510*t3202;
  t3298 = t3291 + t3292;
  t3274 = t503*t3250;
  t3310 = t1564*t3298;
  t3335 = t3274 + t3310;
  t3391 = t1564*t3250;
  t3424 = -1.*t503*t3298;
  t3425 = t3391 + t3424;
  t1745 = -1.*t214*t1739;
  t1789 = t1746*t1788;
  t1814 = t1745 + t1789;
  t1860 = t1746*t1739;
  t1863 = t214*t1788;
  t1877 = t1860 + t1863;
  t2624 = -1.*t214*t2619;
  t2786 = t1746*t2681;
  t2791 = t2624 + t2786;
  t2825 = t1746*t2619;
  t2827 = t214*t2681;
  t2833 = t2825 + t2827;
  t3390 = -1.*t214*t3335;
  t3439 = t1746*t3425;
  t3502 = t3390 + t3439;
  t3520 = t1746*t3335;
  t3531 = t214*t3425;
  t3551 = t3520 + t3531;
  t3979 = -1.*t548;
  t3987 = 1. + t3979;
  t4164 = -1.*t527;
  t4168 = 1. + t4164;
  t4287 = -1.*t1417;
  t4292 = 1. + t4287;
  t4432 = -1.*t1564;
  t4437 = 1. + t4432;
  t4566 = -1.*t1746;
  t4574 = 1. + t4566;
  t4695 = -1.*t25;
  t4696 = 1. + t4695;
  t3591 = t1858*t1814;
  t3618 = t25*t1877;
  t3640 = t3591 + t3618;
  t3830 = -1.*t670;
  t3879 = 1. + t3830;
  t3883 = 0.135*t3879;
  t3902 = 0. + t3883;
  t3954 = -0.135*t971;
  t3962 = 0. + t3954;
  t4041 = 0.135*t3987;
  t4051 = 0.049*t1082;
  t4052 = 0. + t4041 + t4051;
  t4067 = -0.049*t3987;
  t4073 = 0.135*t1082;
  t4102 = 0. + t4067 + t4073;
  t4170 = -0.049*t4168;
  t4172 = -0.09*t1322;
  t4191 = 0. + t4170 + t4172;
  t4226 = -0.09*t4168;
  t4247 = 0.049*t1322;
  t4261 = 0. + t4226 + t4247;
  t4334 = -0.049*t4292;
  t4354 = -0.21*t510;
  t4368 = 0. + t4334 + t4354;
  t4380 = -0.21*t4292;
  t4381 = 0.049*t510;
  t4418 = 0. + t4380 + t4381;
  t4438 = -0.2707*t4437;
  t4444 = 0.0016*t503;
  t4456 = 0. + t4438 + t4444;
  t4488 = -0.0016*t4437;
  t4491 = -0.2707*t503;
  t4493 = 0. + t4488 + t4491;
  t4587 = 0.0184*t4574;
  t4605 = -0.7055*t214;
  t4610 = 0. + t4587 + t4605;
  t4662 = -0.7055*t4574;
  t4667 = -0.0184*t214;
  t4686 = 0. + t4662 + t4667;
  t4706 = -1.1135*t4696;
  t4723 = 0.0216*t1858;
  t4724 = 0. + t4706 + t4723;
  t4739 = -0.0216*t4696;
  t4752 = -1.1135*t1858;
  t4759 = 0. + t4739 + t4752;
  t3642 = t1858*t2791;
  t3644 = t25*t2833;
  t3671 = t3642 + t3644;
  t3682 = t1858*t3502;
  t3697 = t25*t3551;
  t3719 = t3682 + t3697;
  p_output1[0]=t1858*t1877 - 1.*t1814*t25;
  p_output1[1]=-1.*t25*t2791 + t1858*t2833;
  p_output1[2]=-1.*t25*t3502 + t1858*t3551;
  p_output1[3]=0.;
  p_output1[4]=t3640;
  p_output1[5]=t3671;
  p_output1[6]=t3719;
  p_output1[7]=0.;
  p_output1[8]=t1082*t531*t535 - 1.*t1061*t548;
  p_output1[9]=-1.*t2137*t548 + t1082*t535*t712;
  p_output1[10]=-1.*t2977*t548 - 1.*t1082*t791;
  p_output1[11]=0.;
  p_output1[12]=0. - 1.1135*(-1.*t1858*t1877 + t1814*t25) - 0.0216*t3640 + t1061*t4052 + t1148*t4191 + t1312*t4261 + t1356*t4368 + t1446*t4418 + t1511*t4456 + t1655*t4493 + t1739*t4610 + t1788*t4686 + t1814*t4724 + t1877*t4759 + t4102*t531*t535 + 0.1305*(-1.*t1082*t531*t535 + t1061*t548) + t3902*t904 + t3962*t935 + var1[0];
  p_output1[13]=0. - 1.1135*(t25*t2791 - 1.*t1858*t2833) - 0.0216*t3671 + t2026*t3902 + t2083*t3962 + t2137*t4052 + t2215*t4191 + t2306*t4261 + t2324*t4368 + t2507*t4418 + t2531*t4456 + t2578*t4493 + t2619*t4610 + t2681*t4686 + t2791*t4724 + t2833*t4759 + t4102*t535*t712 + 0.1305*(t2137*t548 - 1.*t1082*t535*t712) + var1[1];
  p_output1[14]=0. - 1.1135*(t25*t3502 - 1.*t1858*t3551) - 0.0216*t3719 + t2977*t4052 + t3012*t4191 + t3089*t4261 + t3117*t4368 + t3202*t4418 + t3250*t4456 + t3298*t4493 + t3335*t4610 + t3425*t4686 + t3502*t4724 + t3551*t4759 + t3962*t535*t699 - 1.*t4102*t791 + 0.1305*(t2977*t548 + t1082*t791) + t3902*t535*t803 + var1[2];
  p_output1[15]=1.;
}



void H_toe_joint_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
