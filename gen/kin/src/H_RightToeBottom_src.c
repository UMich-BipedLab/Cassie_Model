/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:13:14 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RightToeBottom_src.h"

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
  double t215;
  double t551;
  double t610;
  double t555;
  double t700;
  double t245;
  double t285;
  double t307;
  double t536;
  double t789;
  double t580;
  double t712;
  double t719;
  double t825;
  double t910;
  double t914;
  double t772;
  double t955;
  double t973;
  double t1611;
  double t1533;
  double t1565;
  double t1605;
  double t1530;
  double t1612;
  double t1649;
  double t1651;
  double t1770;
  double t1610;
  double t1716;
  double t1755;
  double t1506;
  double t1773;
  double t1776;
  double t1777;
  double t1815;
  double t1762;
  double t1793;
  double t1804;
  double t1437;
  double t1839;
  double t1856;
  double t1892;
  double t1985;
  double t1805;
  double t1896;
  double t1909;
  double t1297;
  double t1990;
  double t2013;
  double t2024;
  double t2106;
  double t1959;
  double t2048;
  double t2059;
  double t1289;
  double t2128;
  double t2129;
  double t2130;
  double t1069;
  double t1072;
  double t1079;
  double t1084;
  double t1107;
  double t1117;
  double t1081;
  double t1125;
  double t1153;
  double t2474;
  double t2496;
  double t2531;
  double t2569;
  double t2599;
  double t2641;
  double t2561;
  double t2644;
  double t2647;
  double t2656;
  double t2672;
  double t2674;
  double t2652;
  double t2717;
  double t2749;
  double t2811;
  double t2821;
  double t2827;
  double t2750;
  double t2830;
  double t2858;
  double t2908;
  double t2927;
  double t2929;
  double t2886;
  double t2944;
  double t2976;
  double t3014;
  double t3015;
  double t3017;
  double t1245;
  double t1259;
  double t1267;
  double t3056;
  double t3057;
  double t3061;
  double t3106;
  double t3125;
  double t3128;
  double t3098;
  double t3130;
  double t3131;
  double t3139;
  double t3141;
  double t3144;
  double t3132;
  double t3145;
  double t3147;
  double t3152;
  double t3160;
  double t3165;
  double t3151;
  double t3170;
  double t3172;
  double t3175;
  double t3180;
  double t3182;
  double t3174;
  double t3195;
  double t3199;
  double t3203;
  double t3205;
  double t3207;
  double t2097;
  double t2336;
  double t2337;
  double t2415;
  double t2423;
  double t2441;
  double t3012;
  double t3018;
  double t3022;
  double t3027;
  double t3034;
  double t3040;
  double t3200;
  double t3249;
  double t3298;
  double t3337;
  double t3347;
  double t3354;
  double t3451;
  double t3456;
  double t3628;
  double t3631;
  double t3806;
  double t3807;
  double t3856;
  double t3873;
  double t4018;
  double t4033;
  double t4087;
  double t4089;
  double t3478;
  double t3489;
  double t3493;
  double t3533;
  double t3548;
  double t3555;
  double t3562;
  double t3573;
  double t3576;
  double t3584;
  double t3588;
  double t3600;
  double t3651;
  double t3658;
  double t3663;
  double t3774;
  double t3781;
  double t3796;
  double t3814;
  double t3822;
  double t3826;
  double t3835;
  double t3839;
  double t3844;
  double t3909;
  double t3911;
  double t3917;
  double t3950;
  double t3988;
  double t3996;
  double t4035;
  double t4042;
  double t4053;
  double t4077;
  double t4078;
  double t4082;
  double t4090;
  double t4099;
  double t4105;
  double t4113;
  double t4119;
  double t4124;
  t215 = Cos(var1[3]);
  t551 = Cos(var1[5]);
  t610 = Sin(var1[3]);
  t555 = Sin(var1[4]);
  t700 = Sin(var1[5]);
  t245 = Cos(var1[4]);
  t285 = Sin(var1[14]);
  t307 = Cos(var1[14]);
  t536 = Sin(var1[13]);
  t789 = Cos(var1[13]);
  t580 = t215*t551*t555;
  t712 = t610*t700;
  t719 = t580 + t712;
  t825 = -1.*t551*t610;
  t910 = t215*t555*t700;
  t914 = t825 + t910;
  t772 = t536*t719;
  t955 = t789*t914;
  t973 = t772 + t955;
  t1611 = Cos(var1[15]);
  t1533 = t789*t719;
  t1565 = -1.*t536*t914;
  t1605 = t1533 + t1565;
  t1530 = Sin(var1[15]);
  t1612 = t307*t215*t245;
  t1649 = t285*t973;
  t1651 = t1612 + t1649;
  t1770 = Cos(var1[16]);
  t1610 = t1530*t1605;
  t1716 = t1611*t1651;
  t1755 = t1610 + t1716;
  t1506 = Sin(var1[16]);
  t1773 = t1611*t1605;
  t1776 = -1.*t1530*t1651;
  t1777 = t1773 + t1776;
  t1815 = Cos(var1[17]);
  t1762 = -1.*t1506*t1755;
  t1793 = t1770*t1777;
  t1804 = t1762 + t1793;
  t1437 = Sin(var1[17]);
  t1839 = t1770*t1755;
  t1856 = t1506*t1777;
  t1892 = t1839 + t1856;
  t1985 = Cos(var1[18]);
  t1805 = t1437*t1804;
  t1896 = t1815*t1892;
  t1909 = t1805 + t1896;
  t1297 = Sin(var1[18]);
  t1990 = t1815*t1804;
  t2013 = -1.*t1437*t1892;
  t2024 = t1990 + t2013;
  t2106 = Cos(var1[19]);
  t1959 = -1.*t1297*t1909;
  t2048 = t1985*t2024;
  t2059 = t1959 + t2048;
  t1289 = Sin(var1[19]);
  t2128 = t1985*t1909;
  t2129 = t1297*t2024;
  t2130 = t2128 + t2129;
  t1069 = t551*t610*t555;
  t1072 = -1.*t215*t700;
  t1079 = t1069 + t1072;
  t1084 = t215*t551;
  t1107 = t610*t555*t700;
  t1117 = t1084 + t1107;
  t1081 = t536*t1079;
  t1125 = t789*t1117;
  t1153 = t1081 + t1125;
  t2474 = t789*t1079;
  t2496 = -1.*t536*t1117;
  t2531 = t2474 + t2496;
  t2569 = t307*t245*t610;
  t2599 = t285*t1153;
  t2641 = t2569 + t2599;
  t2561 = t1530*t2531;
  t2644 = t1611*t2641;
  t2647 = t2561 + t2644;
  t2656 = t1611*t2531;
  t2672 = -1.*t1530*t2641;
  t2674 = t2656 + t2672;
  t2652 = -1.*t1506*t2647;
  t2717 = t1770*t2674;
  t2749 = t2652 + t2717;
  t2811 = t1770*t2647;
  t2821 = t1506*t2674;
  t2827 = t2811 + t2821;
  t2750 = t1437*t2749;
  t2830 = t1815*t2827;
  t2858 = t2750 + t2830;
  t2908 = t1815*t2749;
  t2927 = -1.*t1437*t2827;
  t2929 = t2908 + t2927;
  t2886 = -1.*t1297*t2858;
  t2944 = t1985*t2929;
  t2976 = t2886 + t2944;
  t3014 = t1985*t2858;
  t3015 = t1297*t2929;
  t3017 = t3014 + t3015;
  t1245 = t245*t551*t536;
  t1259 = t789*t245*t700;
  t1267 = t1245 + t1259;
  t3056 = t789*t245*t551;
  t3057 = -1.*t245*t536*t700;
  t3061 = t3056 + t3057;
  t3106 = -1.*t307*t555;
  t3125 = t285*t1267;
  t3128 = t3106 + t3125;
  t3098 = t1530*t3061;
  t3130 = t1611*t3128;
  t3131 = t3098 + t3130;
  t3139 = t1611*t3061;
  t3141 = -1.*t1530*t3128;
  t3144 = t3139 + t3141;
  t3132 = -1.*t1506*t3131;
  t3145 = t1770*t3144;
  t3147 = t3132 + t3145;
  t3152 = t1770*t3131;
  t3160 = t1506*t3144;
  t3165 = t3152 + t3160;
  t3151 = t1437*t3147;
  t3170 = t1815*t3165;
  t3172 = t3151 + t3170;
  t3175 = t1815*t3147;
  t3180 = -1.*t1437*t3165;
  t3182 = t3175 + t3180;
  t3174 = -1.*t1297*t3172;
  t3195 = t1985*t3182;
  t3199 = t3174 + t3195;
  t3203 = t1985*t3172;
  t3205 = t1297*t3182;
  t3207 = t3203 + t3205;
  t2097 = t1289*t2059;
  t2336 = t2106*t2130;
  t2337 = t2097 + t2336;
  t2415 = t2106*t2059;
  t2423 = -1.*t1289*t2130;
  t2441 = t2415 + t2423;
  t3012 = t1289*t2976;
  t3018 = t2106*t3017;
  t3022 = t3012 + t3018;
  t3027 = t2106*t2976;
  t3034 = -1.*t1289*t3017;
  t3040 = t3027 + t3034;
  t3200 = t1289*t3199;
  t3249 = t2106*t3207;
  t3298 = t3200 + t3249;
  t3337 = t2106*t3199;
  t3347 = -1.*t1289*t3207;
  t3354 = t3337 + t3347;
  t3451 = -1.*t307;
  t3456 = 1. + t3451;
  t3628 = -1.*t1611;
  t3631 = 1. + t3628;
  t3806 = -1.*t1770;
  t3807 = 1. + t3806;
  t3856 = -1.*t1815;
  t3873 = 1. + t3856;
  t4018 = -1.*t1985;
  t4033 = 1. + t4018;
  t4087 = -1.*t2106;
  t4089 = 1. + t4087;
  t3478 = -0.049*t3456;
  t3489 = -0.135*t285;
  t3493 = 0. + t3478 + t3489;
  t3533 = 0.135*t536;
  t3548 = 0. + t3533;
  t3555 = -1.*t789;
  t3562 = 1. + t3555;
  t3573 = -0.135*t3562;
  t3576 = 0. + t3573;
  t3584 = -0.135*t3456;
  t3588 = 0.049*t285;
  t3600 = 0. + t3584 + t3588;
  t3651 = -0.09*t3631;
  t3658 = 0.049*t1530;
  t3663 = 0. + t3651 + t3658;
  t3774 = -0.049*t3631;
  t3781 = -0.09*t1530;
  t3796 = 0. + t3774 + t3781;
  t3814 = -0.049*t3807;
  t3822 = -0.21*t1506;
  t3826 = 0. + t3814 + t3822;
  t3835 = -0.21*t3807;
  t3839 = 0.049*t1506;
  t3844 = 0. + t3835 + t3839;
  t3909 = -0.2707*t3873;
  t3911 = 0.0016*t1437;
  t3917 = 0. + t3909 + t3911;
  t3950 = -0.0016*t3873;
  t3988 = -0.2707*t1437;
  t3996 = 0. + t3950 + t3988;
  t4035 = 0.0184*t4033;
  t4042 = -0.7055*t1297;
  t4053 = 0. + t4035 + t4042;
  t4077 = -0.7055*t4033;
  t4078 = -0.0184*t1297;
  t4082 = 0. + t4077 + t4078;
  t4090 = -1.1135*t4089;
  t4099 = 0.0216*t1289;
  t4105 = 0. + t4090 + t4099;
  t4113 = -0.0216*t4089;
  t4119 = -1.1135*t1289;
  t4124 = 0. + t4113 + t4119;
  p_output1[0]=t215*t245*t285 - 1.*t307*t973;
  p_output1[1]=-1.*t1153*t307 + t245*t285*t610;
  p_output1[2]=-1.*t1267*t307 - 1.*t285*t555;
  p_output1[3]=0.;
  p_output1[4]=0.642788*t2337 + 0.766044*t2441;
  p_output1[5]=0.642788*t3022 + 0.766044*t3040;
  p_output1[6]=0.642788*t3298 + 0.766044*t3354;
  p_output1[7]=0.;
  p_output1[8]=-0.766044*t2337 + 0.642788*t2441;
  p_output1[9]=-0.766044*t3022 + 0.642788*t3040;
  p_output1[10]=-0.766044*t3298 + 0.642788*t3354;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.0306*t2337 - 1.1312*t2441 + t215*t245*t3493 + t1605*t3663 + t1651*t3796 + t1755*t3826 + t1777*t3844 + t1804*t3917 + t1892*t3996 + t1909*t4053 + t2024*t4082 + t2059*t4105 + t2130*t4124 + t3548*t719 + t3576*t914 + t3600*t973 - 0.1305*(-1.*t215*t245*t285 + t307*t973) + var1[0];
  p_output1[13]=0. + 0.0306*t3022 - 1.1312*t3040 + t1079*t3548 + t1117*t3576 + t1153*t3600 + t2531*t3663 + t2641*t3796 + t2647*t3826 + t2674*t3844 + t2749*t3917 + t2827*t3996 + t2858*t4053 + t2929*t4082 + t2976*t4105 + t3017*t4124 + t245*t3493*t610 - 0.1305*(t1153*t307 - 1.*t245*t285*t610) + var1[1];
  p_output1[14]=0. + 0.0306*t3298 - 1.1312*t3354 + t1267*t3600 + t3061*t3663 + t3128*t3796 + t3131*t3826 + t3144*t3844 + t3147*t3917 + t3165*t3996 + t3172*t4053 + t3182*t4082 + t3199*t4105 + t3207*t4124 + t245*t3548*t551 - 1.*t3493*t555 - 0.1305*(t1267*t307 + t285*t555) + t245*t3576*t700 + var1[2];
  p_output1[15]=1.;
}



void H_RightToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
