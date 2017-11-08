/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:13:08 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_LeftToeBottom_src.h"

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
  double t415;
  double t250;
  double t421;
  double t342;
  double t438;
  double t14;
  double t27;
  double t537;
  double t560;
  double t565;
  double t410;
  double t504;
  double t510;
  double t523;
  double t529;
  double t533;
  double t535;
  double t545;
  double t549;
  double t1246;
  double t1363;
  double t1394;
  double t1405;
  double t1288;
  double t1309;
  double t1334;
  double t1433;
  double t1524;
  double t1351;
  double t1434;
  double t1452;
  double t1175;
  double t1568;
  double t1578;
  double t1600;
  double t1628;
  double t1477;
  double t1607;
  double t1618;
  double t1109;
  double t1640;
  double t1701;
  double t1730;
  double t1898;
  double t1623;
  double t1764;
  double t1854;
  double t1092;
  double t1901;
  double t1904;
  double t1923;
  double t2018;
  double t1885;
  double t1950;
  double t1999;
  double t1080;
  double t2027;
  double t2035;
  double t2042;
  double t617;
  double t645;
  double t697;
  double t713;
  double t715;
  double t798;
  double t803;
  double t844;
  double t853;
  double t2341;
  double t2345;
  double t2371;
  double t2293;
  double t2298;
  double t2299;
  double t2333;
  double t2386;
  double t2419;
  double t2440;
  double t2566;
  double t2583;
  double t2431;
  double t2616;
  double t2636;
  double t2716;
  double t2730;
  double t2770;
  double t2698;
  double t2771;
  double t2772;
  double t2776;
  double t2780;
  double t2784;
  double t2773;
  double t2788;
  double t2790;
  double t2811;
  double t2822;
  double t2828;
  double t880;
  double t896;
  double t1030;
  double t2977;
  double t2985;
  double t3010;
  double t2953;
  double t2965;
  double t2971;
  double t2972;
  double t3099;
  double t3102;
  double t3209;
  double t3213;
  double t3220;
  double t3105;
  double t3238;
  double t3247;
  double t3255;
  double t3258;
  double t3260;
  double t3253;
  double t3326;
  double t3375;
  double t3404;
  double t3408;
  double t3440;
  double t3392;
  double t3478;
  double t3536;
  double t3570;
  double t3581;
  double t3589;
  double t2009;
  double t2053;
  double t2094;
  double t2103;
  double t2113;
  double t2172;
  double t2792;
  double t2832;
  double t2836;
  double t2850;
  double t2859;
  double t2881;
  double t3567;
  double t3594;
  double t3596;
  double t3615;
  double t3633;
  double t3637;
  double t3830;
  double t3831;
  double t3922;
  double t3926;
  double t3956;
  double t3964;
  double t3989;
  double t3995;
  double t4024;
  double t4031;
  double t4108;
  double t4112;
  double t3788;
  double t3791;
  double t3797;
  double t3799;
  double t3817;
  double t3823;
  double t3840;
  double t3843;
  double t3852;
  double t3866;
  double t3879;
  double t3881;
  double t3929;
  double t3931;
  double t3933;
  double t3944;
  double t3947;
  double t3952;
  double t3966;
  double t3967;
  double t3971;
  double t3975;
  double t3977;
  double t3981;
  double t3996;
  double t4001;
  double t4003;
  double t4013;
  double t4015;
  double t4017;
  double t4033;
  double t4034;
  double t4036;
  double t4045;
  double t4050;
  double t4051;
  double t4115;
  double t4122;
  double t4127;
  double t4144;
  double t4152;
  double t4157;
  t415 = Cos(var1[3]);
  t250 = Cos(var1[5]);
  t421 = Sin(var1[4]);
  t342 = Sin(var1[3]);
  t438 = Sin(var1[5]);
  t14 = Cos(var1[7]);
  t27 = Cos(var1[6]);
  t537 = Sin(var1[6]);
  t560 = Cos(var1[4]);
  t565 = Sin(var1[7]);
  t410 = -1.*t250*t342;
  t504 = t415*t421*t438;
  t510 = t410 + t504;
  t523 = t27*t510;
  t529 = t415*t250*t421;
  t533 = t342*t438;
  t535 = t529 + t533;
  t545 = t535*t537;
  t549 = t523 + t545;
  t1246 = Cos(var1[8]);
  t1363 = t27*t535;
  t1394 = -1.*t510*t537;
  t1405 = t1363 + t1394;
  t1288 = t415*t560*t14;
  t1309 = t549*t565;
  t1334 = t1288 + t1309;
  t1433 = Sin(var1[8]);
  t1524 = Cos(var1[9]);
  t1351 = t1246*t1334;
  t1434 = t1405*t1433;
  t1452 = t1351 + t1434;
  t1175 = Sin(var1[9]);
  t1568 = t1246*t1405;
  t1578 = -1.*t1334*t1433;
  t1600 = t1568 + t1578;
  t1628 = Cos(var1[10]);
  t1477 = -1.*t1175*t1452;
  t1607 = t1524*t1600;
  t1618 = t1477 + t1607;
  t1109 = Sin(var1[10]);
  t1640 = t1524*t1452;
  t1701 = t1175*t1600;
  t1730 = t1640 + t1701;
  t1898 = Cos(var1[11]);
  t1623 = t1109*t1618;
  t1764 = t1628*t1730;
  t1854 = t1623 + t1764;
  t1092 = Sin(var1[11]);
  t1901 = t1628*t1618;
  t1904 = -1.*t1109*t1730;
  t1923 = t1901 + t1904;
  t2018 = Cos(var1[12]);
  t1885 = -1.*t1092*t1854;
  t1950 = t1898*t1923;
  t1999 = t1885 + t1950;
  t1080 = Sin(var1[12]);
  t2027 = t1898*t1854;
  t2035 = t1092*t1923;
  t2042 = t2027 + t2035;
  t617 = t415*t250;
  t645 = t342*t421*t438;
  t697 = t617 + t645;
  t713 = t27*t697;
  t715 = t250*t342*t421;
  t798 = -1.*t415*t438;
  t803 = t715 + t798;
  t844 = t803*t537;
  t853 = t713 + t844;
  t2341 = t27*t803;
  t2345 = -1.*t697*t537;
  t2371 = t2341 + t2345;
  t2293 = t560*t14*t342;
  t2298 = t853*t565;
  t2299 = t2293 + t2298;
  t2333 = t1246*t2299;
  t2386 = t2371*t1433;
  t2419 = t2333 + t2386;
  t2440 = t1246*t2371;
  t2566 = -1.*t2299*t1433;
  t2583 = t2440 + t2566;
  t2431 = -1.*t1175*t2419;
  t2616 = t1524*t2583;
  t2636 = t2431 + t2616;
  t2716 = t1524*t2419;
  t2730 = t1175*t2583;
  t2770 = t2716 + t2730;
  t2698 = t1109*t2636;
  t2771 = t1628*t2770;
  t2772 = t2698 + t2771;
  t2776 = t1628*t2636;
  t2780 = -1.*t1109*t2770;
  t2784 = t2776 + t2780;
  t2773 = -1.*t1092*t2772;
  t2788 = t1898*t2784;
  t2790 = t2773 + t2788;
  t2811 = t1898*t2772;
  t2822 = t1092*t2784;
  t2828 = t2811 + t2822;
  t880 = t560*t27*t438;
  t896 = t560*t250*t537;
  t1030 = t880 + t896;
  t2977 = t560*t250*t27;
  t2985 = -1.*t560*t438*t537;
  t3010 = t2977 + t2985;
  t2953 = -1.*t14*t421;
  t2965 = t1030*t565;
  t2971 = t2953 + t2965;
  t2972 = t1246*t2971;
  t3099 = t3010*t1433;
  t3102 = t2972 + t3099;
  t3209 = t1246*t3010;
  t3213 = -1.*t2971*t1433;
  t3220 = t3209 + t3213;
  t3105 = -1.*t1175*t3102;
  t3238 = t1524*t3220;
  t3247 = t3105 + t3238;
  t3255 = t1524*t3102;
  t3258 = t1175*t3220;
  t3260 = t3255 + t3258;
  t3253 = t1109*t3247;
  t3326 = t1628*t3260;
  t3375 = t3253 + t3326;
  t3404 = t1628*t3247;
  t3408 = -1.*t1109*t3260;
  t3440 = t3404 + t3408;
  t3392 = -1.*t1092*t3375;
  t3478 = t1898*t3440;
  t3536 = t3392 + t3478;
  t3570 = t1898*t3375;
  t3581 = t1092*t3440;
  t3589 = t3570 + t3581;
  t2009 = t1080*t1999;
  t2053 = t2018*t2042;
  t2094 = t2009 + t2053;
  t2103 = t2018*t1999;
  t2113 = -1.*t1080*t2042;
  t2172 = t2103 + t2113;
  t2792 = t1080*t2790;
  t2832 = t2018*t2828;
  t2836 = t2792 + t2832;
  t2850 = t2018*t2790;
  t2859 = -1.*t1080*t2828;
  t2881 = t2850 + t2859;
  t3567 = t1080*t3536;
  t3594 = t2018*t3589;
  t3596 = t3567 + t3594;
  t3615 = t2018*t3536;
  t3633 = -1.*t1080*t3589;
  t3637 = t3615 + t3633;
  t3830 = -1.*t14;
  t3831 = 1. + t3830;
  t3922 = -1.*t1246;
  t3926 = 1. + t3922;
  t3956 = -1.*t1524;
  t3964 = 1. + t3956;
  t3989 = -1.*t1628;
  t3995 = 1. + t3989;
  t4024 = -1.*t1898;
  t4031 = 1. + t4024;
  t4108 = -1.*t2018;
  t4112 = 1. + t4108;
  t3788 = -1.*t27;
  t3791 = 1. + t3788;
  t3797 = 0.135*t3791;
  t3799 = 0. + t3797;
  t3817 = -0.135*t537;
  t3823 = 0. + t3817;
  t3840 = 0.135*t3831;
  t3843 = 0.049*t565;
  t3852 = 0. + t3840 + t3843;
  t3866 = -0.049*t3831;
  t3879 = 0.135*t565;
  t3881 = 0. + t3866 + t3879;
  t3929 = -0.049*t3926;
  t3931 = -0.09*t1433;
  t3933 = 0. + t3929 + t3931;
  t3944 = -0.09*t3926;
  t3947 = 0.049*t1433;
  t3952 = 0. + t3944 + t3947;
  t3966 = -0.049*t3964;
  t3967 = -0.21*t1175;
  t3971 = 0. + t3966 + t3967;
  t3975 = -0.21*t3964;
  t3977 = 0.049*t1175;
  t3981 = 0. + t3975 + t3977;
  t3996 = -0.2707*t3995;
  t4001 = 0.0016*t1109;
  t4003 = 0. + t3996 + t4001;
  t4013 = -0.0016*t3995;
  t4015 = -0.2707*t1109;
  t4017 = 0. + t4013 + t4015;
  t4033 = 0.0184*t4031;
  t4034 = -0.7055*t1092;
  t4036 = 0. + t4033 + t4034;
  t4045 = -0.7055*t4031;
  t4050 = -0.0184*t1092;
  t4051 = 0. + t4045 + t4050;
  t4115 = -1.1135*t4112;
  t4122 = 0.0216*t1080;
  t4127 = 0. + t4115 + t4122;
  t4144 = -0.0216*t4112;
  t4152 = -1.1135*t1080;
  t4157 = 0. + t4144 + t4152;
  p_output1[0]=-1.*t14*t549 + t415*t560*t565;
  p_output1[1]=t342*t560*t565 - 1.*t14*t853;
  p_output1[2]=-1.*t1030*t14 - 1.*t421*t565;
  p_output1[3]=0.;
  p_output1[4]=0.642788*t2094 + 0.766044*t2172;
  p_output1[5]=0.642788*t2836 + 0.766044*t2881;
  p_output1[6]=0.642788*t3596 + 0.766044*t3637;
  p_output1[7]=0.;
  p_output1[8]=-0.766044*t2094 + 0.642788*t2172;
  p_output1[9]=-0.766044*t2836 + 0.642788*t2881;
  p_output1[10]=-0.766044*t3596 + 0.642788*t3637;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.0306*t2094 - 1.1312*t2172 + t1334*t3933 + t1405*t3952 + t1452*t3971 + t1600*t3981 + t1618*t4003 + t1730*t4017 + t1854*t4036 + t1923*t4051 + t1999*t4127 + t2042*t4157 + t3799*t510 + t3823*t535 + t3852*t549 + t3881*t415*t560 + 0.1305*(t14*t549 - 1.*t415*t560*t565) + var1[0];
  p_output1[13]=0. + 0.0306*t2836 - 1.1312*t2881 + t2299*t3933 + t2371*t3952 + t2419*t3971 + t2583*t3981 + t2636*t4003 + t2770*t4017 + t2772*t4036 + t2784*t4051 + t2790*t4127 + t2828*t4157 + t342*t3881*t560 + t3799*t697 + t3823*t803 + t3852*t853 + 0.1305*(-1.*t342*t560*t565 + t14*t853) + var1[1];
  p_output1[14]=0. + 0.0306*t3596 - 1.1312*t3637 + t1030*t3852 + t2971*t3933 + t3010*t3952 + t3102*t3971 + t3220*t3981 + t3247*t4003 + t3260*t4017 + t3375*t4036 + t3440*t4051 + t3536*t4127 + t3589*t4157 - 1.*t3881*t421 + t250*t3823*t560 + t3799*t438*t560 + 0.1305*(t1030*t14 + t421*t565) + var1[2];
  p_output1[15]=1.;
}



void H_LeftToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
