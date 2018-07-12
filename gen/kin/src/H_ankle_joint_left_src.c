/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:33:15 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_ankle_joint_left_src.h"

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
  double t431;
  double t499;
  double t656;
  double t532;
  double t700;
  double t487;
  double t842;
  double t855;
  double t857;
  double t647;
  double t708;
  double t757;
  double t863;
  double t397;
  double t1025;
  double t1063;
  double t1081;
  double t451;
  double t458;
  double t475;
  double t828;
  double t878;
  double t880;
  double t922;
  double t941;
  double t984;
  double t1095;
  double t1127;
  double t994;
  double t1107;
  double t1113;
  double t271;
  double t1151;
  double t1157;
  double t1169;
  double t1255;
  double t1114;
  double t1191;
  double t1199;
  double t237;
  double t1264;
  double t1276;
  double t1292;
  double t190;
  double t1643;
  double t1665;
  double t1726;
  double t1537;
  double t1570;
  double t1585;
  double t1892;
  double t1900;
  double t1953;
  double t1535;
  double t1602;
  double t1735;
  double t1810;
  double t1836;
  double t1883;
  double t1884;
  double t1988;
  double t2009;
  double t2025;
  double t2032;
  double t2060;
  double t1444;
  double t2018;
  double t2069;
  double t2073;
  double t2095;
  double t2099;
  double t2121;
  double t2447;
  double t2461;
  double t2464;
  double t2329;
  double t2335;
  double t2349;
  double t2364;
  double t2393;
  double t2398;
  double t2437;
  double t2499;
  double t2522;
  double t2558;
  double t2662;
  double t2673;
  double t2530;
  double t2685;
  double t2696;
  double t2701;
  double t2710;
  double t2713;
  double t1246;
  double t1362;
  double t1367;
  double t1475;
  double t1486;
  double t1492;
  double t2088;
  double t2136;
  double t2141;
  double t2208;
  double t2259;
  double t2261;
  double t2697;
  double t2730;
  double t2751;
  double t2785;
  double t2789;
  double t2798;
  double t3337;
  double t3345;
  double t3678;
  double t3679;
  double t3765;
  double t3766;
  double t3899;
  double t3932;
  double t4014;
  double t4016;
  double t2863;
  double t2873;
  double t2877;
  double t3141;
  double t3148;
  double t3157;
  double t3173;
  double t3223;
  double t3255;
  double t3372;
  double t3382;
  double t3482;
  double t3510;
  double t3538;
  double t3543;
  double t3687;
  double t3704;
  double t3709;
  double t3715;
  double t3720;
  double t3725;
  double t3783;
  double t3799;
  double t3801;
  double t3869;
  double t3881;
  double t3887;
  double t3941;
  double t3952;
  double t3955;
  double t3990;
  double t3996;
  double t4004;
  double t4028;
  double t4032;
  double t4045;
  double t4059;
  double t4078;
  double t4080;
  double t2884;
  double t2889;
  double t2916;
  double t2940;
  double t2944;
  double t2949;
  t431 = Cos(var1[3]);
  t499 = Cos(var1[5]);
  t656 = Sin(var1[4]);
  t532 = Sin(var1[3]);
  t700 = Sin(var1[5]);
  t487 = Cos(var1[6]);
  t842 = t431*t499*t656;
  t855 = t532*t700;
  t857 = t842 + t855;
  t647 = -1.*t499*t532;
  t708 = t431*t656*t700;
  t757 = t647 + t708;
  t863 = Sin(var1[6]);
  t397 = Cos(var1[8]);
  t1025 = t487*t857;
  t1063 = -1.*t757*t863;
  t1081 = t1025 + t1063;
  t451 = Cos(var1[4]);
  t458 = Cos(var1[7]);
  t475 = t431*t451*t458;
  t828 = t487*t757;
  t878 = t857*t863;
  t880 = t828 + t878;
  t922 = Sin(var1[7]);
  t941 = t880*t922;
  t984 = t475 + t941;
  t1095 = Sin(var1[8]);
  t1127 = Cos(var1[9]);
  t994 = t397*t984;
  t1107 = t1081*t1095;
  t1113 = t994 + t1107;
  t271 = Sin(var1[9]);
  t1151 = t397*t1081;
  t1157 = -1.*t984*t1095;
  t1169 = t1151 + t1157;
  t1255 = Cos(var1[10]);
  t1114 = -1.*t271*t1113;
  t1191 = t1127*t1169;
  t1199 = t1114 + t1191;
  t237 = Sin(var1[10]);
  t1264 = t1127*t1113;
  t1276 = t271*t1169;
  t1292 = t1264 + t1276;
  t190 = Sin(var1[11]);
  t1643 = t499*t532*t656;
  t1665 = -1.*t431*t700;
  t1726 = t1643 + t1665;
  t1537 = t431*t499;
  t1570 = t532*t656*t700;
  t1585 = t1537 + t1570;
  t1892 = t487*t1726;
  t1900 = -1.*t1585*t863;
  t1953 = t1892 + t1900;
  t1535 = t451*t458*t532;
  t1602 = t487*t1585;
  t1735 = t1726*t863;
  t1810 = t1602 + t1735;
  t1836 = t1810*t922;
  t1883 = t1535 + t1836;
  t1884 = t397*t1883;
  t1988 = t1953*t1095;
  t2009 = t1884 + t1988;
  t2025 = t397*t1953;
  t2032 = -1.*t1883*t1095;
  t2060 = t2025 + t2032;
  t1444 = Cos(var1[11]);
  t2018 = -1.*t271*t2009;
  t2069 = t1127*t2060;
  t2073 = t2018 + t2069;
  t2095 = t1127*t2009;
  t2099 = t271*t2060;
  t2121 = t2095 + t2099;
  t2447 = t451*t499*t487;
  t2461 = -1.*t451*t700*t863;
  t2464 = t2447 + t2461;
  t2329 = -1.*t458*t656;
  t2335 = t451*t487*t700;
  t2349 = t451*t499*t863;
  t2364 = t2335 + t2349;
  t2393 = t2364*t922;
  t2398 = t2329 + t2393;
  t2437 = t397*t2398;
  t2499 = t2464*t1095;
  t2522 = t2437 + t2499;
  t2558 = t397*t2464;
  t2662 = -1.*t2398*t1095;
  t2673 = t2558 + t2662;
  t2530 = -1.*t271*t2522;
  t2685 = t1127*t2673;
  t2696 = t2530 + t2685;
  t2701 = t1127*t2522;
  t2710 = t271*t2673;
  t2713 = t2701 + t2710;
  t1246 = t237*t1199;
  t1362 = t1255*t1292;
  t1367 = t1246 + t1362;
  t1475 = t1255*t1199;
  t1486 = -1.*t237*t1292;
  t1492 = t1475 + t1486;
  t2088 = t237*t2073;
  t2136 = t1255*t2121;
  t2141 = t2088 + t2136;
  t2208 = t1255*t2073;
  t2259 = -1.*t237*t2121;
  t2261 = t2208 + t2259;
  t2697 = t237*t2696;
  t2730 = t1255*t2713;
  t2751 = t2697 + t2730;
  t2785 = t1255*t2696;
  t2789 = -1.*t237*t2713;
  t2798 = t2785 + t2789;
  t3337 = -1.*t458;
  t3345 = 1. + t3337;
  t3678 = -1.*t397;
  t3679 = 1. + t3678;
  t3765 = -1.*t1127;
  t3766 = 1. + t3765;
  t3899 = -1.*t1255;
  t3932 = 1. + t3899;
  t4014 = -1.*t1444;
  t4016 = 1. + t4014;
  t2863 = t1444*t1367;
  t2873 = t190*t1492;
  t2877 = t2863 + t2873;
  t3141 = -1.*t487;
  t3148 = 1. + t3141;
  t3157 = 0.135*t3148;
  t3173 = 0. + t3157;
  t3223 = -0.135*t863;
  t3255 = 0. + t3223;
  t3372 = 0.135*t3345;
  t3382 = 0.049*t922;
  t3482 = 0. + t3372 + t3382;
  t3510 = -0.049*t3345;
  t3538 = 0.135*t922;
  t3543 = 0. + t3510 + t3538;
  t3687 = -0.049*t3679;
  t3704 = -0.09*t1095;
  t3709 = 0. + t3687 + t3704;
  t3715 = -0.09*t3679;
  t3720 = 0.049*t1095;
  t3725 = 0. + t3715 + t3720;
  t3783 = -0.049*t3766;
  t3799 = -0.21*t271;
  t3801 = 0. + t3783 + t3799;
  t3869 = -0.21*t3766;
  t3881 = 0.049*t271;
  t3887 = 0. + t3869 + t3881;
  t3941 = -0.2707*t3932;
  t3952 = 0.0016*t237;
  t3955 = 0. + t3941 + t3952;
  t3990 = -0.0016*t3932;
  t3996 = -0.2707*t237;
  t4004 = 0. + t3990 + t3996;
  t4028 = 0.0184*t4016;
  t4032 = -0.7055*t190;
  t4045 = 0. + t4028 + t4032;
  t4059 = -0.7055*t4016;
  t4078 = -0.0184*t190;
  t4080 = 0. + t4059 + t4078;
  t2884 = t1444*t2141;
  t2889 = t190*t2261;
  t2916 = t2884 + t2889;
  t2940 = t1444*t2751;
  t2944 = t190*t2798;
  t2949 = t2940 + t2944;
  p_output1[0]=-1.*t1444*t1492 + t1367*t190;
  p_output1[1]=t190*t2141 - 1.*t1444*t2261;
  p_output1[2]=t190*t2751 - 1.*t1444*t2798;
  p_output1[3]=0.;
  p_output1[4]=t2877;
  p_output1[5]=t2916;
  p_output1[6]=t2949;
  p_output1[7]=0.;
  p_output1[8]=-1.*t458*t880 + t431*t451*t922;
  p_output1[9]=-1.*t1810*t458 + t451*t532*t922;
  p_output1[10]=-1.*t2364*t458 - 1.*t656*t922;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.7055*(t1444*t1492 - 1.*t1367*t190) + 0.0184*t2877 + t1081*t3725 + t1113*t3801 + t1169*t3887 + t1199*t3955 + t1292*t4004 + t1367*t4045 + t1492*t4080 + t3543*t431*t451 + t3173*t757 + t3255*t857 + t3482*t880 + 0.1305*(t458*t880 - 1.*t431*t451*t922) + t3709*t984 + var1[0];
  p_output1[13]=0. - 0.7055*(-1.*t190*t2141 + t1444*t2261) + 0.0184*t2916 + t1585*t3173 + t1726*t3255 + t1810*t3482 + t1883*t3709 + t1953*t3725 + t2009*t3801 + t2060*t3887 + t2073*t3955 + t2121*t4004 + t2141*t4045 + t2261*t4080 + t3543*t451*t532 + 0.1305*(t1810*t458 - 1.*t451*t532*t922) + var1[1];
  p_output1[14]=0. - 0.7055*(-1.*t190*t2751 + t1444*t2798) + 0.0184*t2949 + t2364*t3482 + t2398*t3709 + t2464*t3725 + t2522*t3801 + t2673*t3887 + t2696*t3955 + t2713*t4004 + t2751*t4045 + t2798*t4080 + t3255*t451*t499 - 1.*t3543*t656 + t3173*t451*t700 + 0.1305*(t2364*t458 + t656*t922) + var1[2];
  p_output1[15]=1.;
}



void H_ankle_joint_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
