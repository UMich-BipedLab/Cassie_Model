/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:33:56 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_toe_joint_right_src.h"

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
  double t446;
  double t364;
  double t391;
  double t467;
  double t586;
  double t417;
  double t554;
  double t571;
  double t315;
  double t611;
  double t710;
  double t764;
  double t849;
  double t580;
  double t771;
  double t829;
  double t312;
  double t878;
  double t891;
  double t893;
  double t913;
  double t921;
  double t939;
  double t947;
  double t995;
  double t1004;
  double t1059;
  double t838;
  double t1020;
  double t1037;
  double t287;
  double t1060;
  double t1063;
  double t1065;
  double t1166;
  double t1043;
  double t1145;
  double t1164;
  double t284;
  double t1173;
  double t1229;
  double t1244;
  double t1350;
  double t1165;
  double t1293;
  double t1324;
  double t245;
  double t1368;
  double t1374;
  double t1386;
  double t33;
  double t1525;
  double t1578;
  double t1581;
  double t1602;
  double t1623;
  double t1637;
  double t1587;
  double t1643;
  double t1680;
  double t1781;
  double t1807;
  double t1827;
  double t1828;
  double t1841;
  double t1848;
  double t1734;
  double t1849;
  double t1856;
  double t1906;
  double t1935;
  double t1944;
  double t1882;
  double t1953;
  double t1961;
  double t1993;
  double t2016;
  double t2024;
  double t1462;
  double t1964;
  double t2044;
  double t2047;
  double t2073;
  double t2081;
  double t2082;
  double t2166;
  double t2181;
  double t2185;
  double t2241;
  double t2267;
  double t2276;
  double t2298;
  double t2302;
  double t2335;
  double t2208;
  double t2381;
  double t2401;
  double t2434;
  double t2437;
  double t2438;
  double t2416;
  double t2459;
  double t2483;
  double t2495;
  double t2505;
  double t2518;
  double t2484;
  double t2519;
  double t2542;
  double t2558;
  double t2577;
  double t2588;
  double t1347;
  double t1410;
  double t1420;
  double t1481;
  double t1489;
  double t1504;
  double t2064;
  double t2095;
  double t2096;
  double t2129;
  double t2130;
  double t2136;
  double t2554;
  double t2594;
  double t2598;
  double t2642;
  double t2656;
  double t2664;
  double t2889;
  double t2940;
  double t3120;
  double t3137;
  double t3255;
  double t3257;
  double t3333;
  double t3340;
  double t3430;
  double t3452;
  double t3524;
  double t3527;
  double t2691;
  double t2696;
  double t2710;
  double t2950;
  double t2970;
  double t2974;
  double t2995;
  double t3020;
  double t3028;
  double t3031;
  double t3035;
  double t3060;
  double t3076;
  double t3079;
  double t3097;
  double t3157;
  double t3164;
  double t3173;
  double t3218;
  double t3221;
  double t3242;
  double t3258;
  double t3259;
  double t3272;
  double t3279;
  double t3287;
  double t3318;
  double t3344;
  double t3354;
  double t3361;
  double t3371;
  double t3384;
  double t3402;
  double t3454;
  double t3455;
  double t3474;
  double t3480;
  double t3482;
  double t3494;
  double t3534;
  double t3536;
  double t3543;
  double t3554;
  double t3557;
  double t3565;
  double t2716;
  double t2736;
  double t2762;
  double t2781;
  double t2817;
  double t2831;
  t377 = Cos(var1[5]);
  t446 = Sin(var1[3]);
  t364 = Cos(var1[3]);
  t391 = Sin(var1[4]);
  t467 = Sin(var1[5]);
  t586 = Sin(var1[13]);
  t417 = t364*t377*t391;
  t554 = t446*t467;
  t571 = t417 + t554;
  t315 = Cos(var1[13]);
  t611 = -1.*t377*t446;
  t710 = t364*t391*t467;
  t764 = t611 + t710;
  t849 = Cos(var1[15]);
  t580 = t315*t571;
  t771 = -1.*t586*t764;
  t829 = t580 + t771;
  t312 = Sin(var1[15]);
  t878 = Cos(var1[14]);
  t891 = Cos(var1[4]);
  t893 = t878*t364*t891;
  t913 = Sin(var1[14]);
  t921 = t586*t571;
  t939 = t315*t764;
  t947 = t921 + t939;
  t995 = t913*t947;
  t1004 = t893 + t995;
  t1059 = Cos(var1[16]);
  t838 = t312*t829;
  t1020 = t849*t1004;
  t1037 = t838 + t1020;
  t287 = Sin(var1[16]);
  t1060 = t849*t829;
  t1063 = -1.*t312*t1004;
  t1065 = t1060 + t1063;
  t1166 = Cos(var1[17]);
  t1043 = -1.*t287*t1037;
  t1145 = t1059*t1065;
  t1164 = t1043 + t1145;
  t284 = Sin(var1[17]);
  t1173 = t1059*t1037;
  t1229 = t287*t1065;
  t1244 = t1173 + t1229;
  t1350 = Cos(var1[18]);
  t1165 = t284*t1164;
  t1293 = t1166*t1244;
  t1324 = t1165 + t1293;
  t245 = Sin(var1[18]);
  t1368 = t1166*t1164;
  t1374 = -1.*t284*t1244;
  t1386 = t1368 + t1374;
  t33 = Cos(var1[19]);
  t1525 = t377*t446*t391;
  t1578 = -1.*t364*t467;
  t1581 = t1525 + t1578;
  t1602 = t364*t377;
  t1623 = t446*t391*t467;
  t1637 = t1602 + t1623;
  t1587 = t315*t1581;
  t1643 = -1.*t586*t1637;
  t1680 = t1587 + t1643;
  t1781 = t878*t891*t446;
  t1807 = t586*t1581;
  t1827 = t315*t1637;
  t1828 = t1807 + t1827;
  t1841 = t913*t1828;
  t1848 = t1781 + t1841;
  t1734 = t312*t1680;
  t1849 = t849*t1848;
  t1856 = t1734 + t1849;
  t1906 = t849*t1680;
  t1935 = -1.*t312*t1848;
  t1944 = t1906 + t1935;
  t1882 = -1.*t287*t1856;
  t1953 = t1059*t1944;
  t1961 = t1882 + t1953;
  t1993 = t1059*t1856;
  t2016 = t287*t1944;
  t2024 = t1993 + t2016;
  t1462 = Sin(var1[19]);
  t1964 = t284*t1961;
  t2044 = t1166*t2024;
  t2047 = t1964 + t2044;
  t2073 = t1166*t1961;
  t2081 = -1.*t284*t2024;
  t2082 = t2073 + t2081;
  t2166 = t315*t891*t377;
  t2181 = -1.*t891*t586*t467;
  t2185 = t2166 + t2181;
  t2241 = -1.*t878*t391;
  t2267 = t891*t377*t586;
  t2276 = t315*t891*t467;
  t2298 = t2267 + t2276;
  t2302 = t913*t2298;
  t2335 = t2241 + t2302;
  t2208 = t312*t2185;
  t2381 = t849*t2335;
  t2401 = t2208 + t2381;
  t2434 = t849*t2185;
  t2437 = -1.*t312*t2335;
  t2438 = t2434 + t2437;
  t2416 = -1.*t287*t2401;
  t2459 = t1059*t2438;
  t2483 = t2416 + t2459;
  t2495 = t1059*t2401;
  t2505 = t287*t2438;
  t2518 = t2495 + t2505;
  t2484 = t284*t2483;
  t2519 = t1166*t2518;
  t2542 = t2484 + t2519;
  t2558 = t1166*t2483;
  t2577 = -1.*t284*t2518;
  t2588 = t2558 + t2577;
  t1347 = -1.*t245*t1324;
  t1410 = t1350*t1386;
  t1420 = t1347 + t1410;
  t1481 = t1350*t1324;
  t1489 = t245*t1386;
  t1504 = t1481 + t1489;
  t2064 = -1.*t245*t2047;
  t2095 = t1350*t2082;
  t2096 = t2064 + t2095;
  t2129 = t1350*t2047;
  t2130 = t245*t2082;
  t2136 = t2129 + t2130;
  t2554 = -1.*t245*t2542;
  t2594 = t1350*t2588;
  t2598 = t2554 + t2594;
  t2642 = t1350*t2542;
  t2656 = t245*t2588;
  t2664 = t2642 + t2656;
  t2889 = -1.*t878;
  t2940 = 1. + t2889;
  t3120 = -1.*t849;
  t3137 = 1. + t3120;
  t3255 = -1.*t1059;
  t3257 = 1. + t3255;
  t3333 = -1.*t1166;
  t3340 = 1. + t3333;
  t3430 = -1.*t1350;
  t3452 = 1. + t3430;
  t3524 = -1.*t33;
  t3527 = 1. + t3524;
  t2691 = t1462*t1420;
  t2696 = t33*t1504;
  t2710 = t2691 + t2696;
  t2950 = -0.049*t2940;
  t2970 = -0.135*t913;
  t2974 = 0. + t2950 + t2970;
  t2995 = 0.135*t586;
  t3020 = 0. + t2995;
  t3028 = -1.*t315;
  t3031 = 1. + t3028;
  t3035 = -0.135*t3031;
  t3060 = 0. + t3035;
  t3076 = -0.135*t2940;
  t3079 = 0.049*t913;
  t3097 = 0. + t3076 + t3079;
  t3157 = -0.09*t3137;
  t3164 = 0.049*t312;
  t3173 = 0. + t3157 + t3164;
  t3218 = -0.049*t3137;
  t3221 = -0.09*t312;
  t3242 = 0. + t3218 + t3221;
  t3258 = -0.049*t3257;
  t3259 = -0.21*t287;
  t3272 = 0. + t3258 + t3259;
  t3279 = -0.21*t3257;
  t3287 = 0.049*t287;
  t3318 = 0. + t3279 + t3287;
  t3344 = -0.2707*t3340;
  t3354 = 0.0016*t284;
  t3361 = 0. + t3344 + t3354;
  t3371 = -0.0016*t3340;
  t3384 = -0.2707*t284;
  t3402 = 0. + t3371 + t3384;
  t3454 = 0.0184*t3452;
  t3455 = -0.7055*t245;
  t3474 = 0. + t3454 + t3455;
  t3480 = -0.7055*t3452;
  t3482 = -0.0184*t245;
  t3494 = 0. + t3480 + t3482;
  t3534 = -1.1135*t3527;
  t3536 = 0.0216*t1462;
  t3543 = 0. + t3534 + t3536;
  t3554 = -0.0216*t3527;
  t3557 = -1.1135*t1462;
  t3565 = 0. + t3554 + t3557;
  t2716 = t1462*t2096;
  t2736 = t33*t2136;
  t2762 = t2716 + t2736;
  t2781 = t1462*t2598;
  t2817 = t33*t2664;
  t2831 = t2781 + t2817;
  p_output1[0]=t1462*t1504 - 1.*t1420*t33;
  p_output1[1]=t1462*t2136 - 1.*t2096*t33;
  p_output1[2]=t1462*t2664 - 1.*t2598*t33;
  p_output1[3]=0.;
  p_output1[4]=t2710;
  p_output1[5]=t2762;
  p_output1[6]=t2831;
  p_output1[7]=0.;
  p_output1[8]=t364*t891*t913 - 1.*t878*t947;
  p_output1[9]=-1.*t1828*t878 + t446*t891*t913;
  p_output1[10]=-1.*t2298*t878 - 1.*t391*t913;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.0216*t2710 + t1004*t3242 + t1037*t3272 - 1.1135*(-1.*t1462*t1504 + t1420*t33) + t1065*t3318 + t1164*t3361 + t1244*t3402 + t1324*t3474 + t1386*t3494 + t1420*t3543 + t1504*t3565 + t3020*t571 + t3060*t764 + t3173*t829 + t2974*t364*t891 + t3097*t947 - 0.1305*(-1.*t364*t891*t913 + t878*t947) + var1[0];
  p_output1[13]=0. - 0.0216*t2762 + t1581*t3020 + t1637*t3060 + t1828*t3097 + t1680*t3173 + t1848*t3242 + t1856*t3272 - 1.1135*(-1.*t1462*t2136 + t2096*t33) + t1944*t3318 + t1961*t3361 + t2024*t3402 + t2047*t3474 + t2082*t3494 + t2096*t3543 + t2136*t3565 + t2974*t446*t891 - 0.1305*(t1828*t878 - 1.*t446*t891*t913) + var1[1];
  p_output1[14]=0. - 0.0216*t2831 + t2298*t3097 + t2185*t3173 + t2335*t3242 + t2401*t3272 - 1.1135*(-1.*t1462*t2664 + t2598*t33) + t2438*t3318 + t2483*t3361 + t2518*t3402 + t2542*t3474 + t2588*t3494 + t2598*t3543 + t2664*t3565 - 1.*t2974*t391 + t3020*t377*t891 + t3060*t467*t891 - 0.1305*(t2298*t878 + t391*t913) + var1[2];
  p_output1[15]=1.;
}



void H_toe_joint_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
