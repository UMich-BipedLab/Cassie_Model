/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:37:01 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_MultisenseIMU_to_RightToeBottom_src.h"

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
  double t312;
  double t675;
  double t1043;
  double t1461;
  double t1558;
  double t1590;
  double t1854;
  double t2067;
  double t2901;
  double t2990;
  double t3054;
  double t3101;
  double t2178;
  double t2427;
  double t2654;
  double t3279;
  double t3335;
  double t3420;
  double t3842;
  double t3987;
  double t4041;
  double t4154;
  double t3552;
  double t3809;
  double t3813;
  double t4540;
  double t4545;
  double t4687;
  double t5102;
  double t5145;
  double t5154;
  double t5260;
  double t5053;
  double t5072;
  double t5099;
  double t5351;
  double t5356;
  double t5378;
  double t5422;
  double t5427;
  double t5441;
  double t5463;
  double t5404;
  double t5409;
  double t5414;
  double t5501;
  double t5511;
  double t5519;
  double t895;
  double t1004;
  double t1037;
  double t1063;
  double t1164;
  double t1782;
  double t1857;
  double t1866;
  double t2078;
  double t2089;
  double t2136;
  double t3092;
  double t3107;
  double t3211;
  double t3436;
  double t3437;
  double t3511;
  double t5774;
  double t5794;
  double t5803;
  double t5814;
  double t5815;
  double t5822;
  double t4125;
  double t4187;
  double t4281;
  double t4840;
  double t4911;
  double t4934;
  double t5829;
  double t5831;
  double t5838;
  double t5855;
  double t5859;
  double t5864;
  double t5199;
  double t5282;
  double t5319;
  double t5388;
  double t5392;
  double t5396;
  double t5868;
  double t5869;
  double t5883;
  double t5891;
  double t5899;
  double t5913;
  double t5451;
  double t5464;
  double t5469;
  double t5520;
  double t5528;
  double t5545;
  double t5938;
  double t5954;
  double t5958;
  double t5979;
  double t5982;
  double t5983;
  double t6169;
  double t6174;
  double t6187;
  double t6194;
  double t6201;
  double t6206;
  double t6235;
  double t6237;
  double t6247;
  double t6281;
  double t6284;
  double t6306;
  double t6324;
  double t6327;
  double t6329;
  double t6345;
  double t6347;
  double t6353;
  t312 = Sin(var1[7]);
  t675 = Cos(var1[8]);
  t1043 = Sin(var1[8]);
  t1461 = Cos(var1[9]);
  t1558 = -1.*t1461;
  t1590 = 1. + t1558;
  t1854 = Sin(var1[9]);
  t2067 = Cos(var1[7]);
  t2901 = Cos(var1[10]);
  t2990 = -1.*t2901;
  t3054 = 1. + t2990;
  t3101 = Sin(var1[10]);
  t2178 = t1461*t312*t1043;
  t2427 = t2067*t1854;
  t2654 = t2178 + t2427;
  t3279 = t2067*t1461;
  t3335 = -1.*t312*t1043*t1854;
  t3420 = t3279 + t3335;
  t3842 = Cos(var1[11]);
  t3987 = -1.*t3842;
  t4041 = 1. + t3987;
  t4154 = Sin(var1[11]);
  t3552 = t2901*t2654;
  t3809 = t3420*t3101;
  t3813 = t3552 + t3809;
  t4540 = t2901*t3420;
  t4545 = -1.*t2654*t3101;
  t4687 = t4540 + t4545;
  t5102 = Cos(var1[12]);
  t5145 = -1.*t5102;
  t5154 = 1. + t5145;
  t5260 = Sin(var1[12]);
  t5053 = t3842*t3813;
  t5072 = t4687*t4154;
  t5099 = t5053 + t5072;
  t5351 = t3842*t4687;
  t5356 = -1.*t3813*t4154;
  t5378 = t5351 + t5356;
  t5422 = Cos(var1[13]);
  t5427 = -1.*t5422;
  t5441 = 1. + t5427;
  t5463 = Sin(var1[13]);
  t5404 = t5102*t5099;
  t5409 = t5378*t5260;
  t5414 = t5404 + t5409;
  t5501 = t5102*t5378;
  t5511 = -1.*t5099*t5260;
  t5519 = t5501 + t5511;
  t895 = -1.*t675;
  t1004 = 1. + t895;
  t1037 = -0.135*t1004;
  t1063 = 0.049*t1043;
  t1164 = 0. + t1037 + t1063;
  t1782 = -0.049*t1590;
  t1857 = -0.09*t1854;
  t1866 = 0. + t1782 + t1857;
  t2078 = -0.09*t1590;
  t2089 = 0.049*t1854;
  t2136 = 0. + t2078 + t2089;
  t3092 = -0.049*t3054;
  t3107 = -0.21*t3101;
  t3211 = 0. + t3092 + t3107;
  t3436 = -0.21*t3054;
  t3437 = 0.049*t3101;
  t3511 = 0. + t3436 + t3437;
  t5774 = t2067*t1461*t1043;
  t5794 = -1.*t312*t1854;
  t5803 = t5774 + t5794;
  t5814 = -1.*t1461*t312;
  t5815 = -1.*t2067*t1043*t1854;
  t5822 = t5814 + t5815;
  t4125 = -0.0016*t4041;
  t4187 = -0.2707*t4154;
  t4281 = 0. + t4125 + t4187;
  t4840 = -0.2707*t4041;
  t4911 = 0.0016*t4154;
  t4934 = 0. + t4840 + t4911;
  t5829 = t2901*t5803;
  t5831 = t5822*t3101;
  t5838 = t5829 + t5831;
  t5855 = t2901*t5822;
  t5859 = -1.*t5803*t3101;
  t5864 = t5855 + t5859;
  t5199 = 0.0184*t5154;
  t5282 = -0.7055*t5260;
  t5319 = 0. + t5199 + t5282;
  t5388 = -0.7055*t5154;
  t5392 = -0.0184*t5260;
  t5396 = 0. + t5388 + t5392;
  t5868 = t3842*t5838;
  t5869 = t5864*t4154;
  t5883 = t5868 + t5869;
  t5891 = t3842*t5864;
  t5899 = -1.*t5838*t4154;
  t5913 = t5891 + t5899;
  t5451 = -0.0216*t5441;
  t5464 = -1.1135*t5463;
  t5469 = 0. + t5451 + t5464;
  t5520 = -1.1135*t5441;
  t5528 = 0.0216*t5463;
  t5545 = 0. + t5520 + t5528;
  t5938 = t5102*t5883;
  t5954 = t5913*t5260;
  t5958 = t5938 + t5954;
  t5979 = t5102*t5913;
  t5982 = -1.*t5883*t5260;
  t5983 = t5979 + t5982;
  t6169 = t675*t1461*t2901;
  t6174 = -1.*t675*t1854*t3101;
  t6187 = t6169 + t6174;
  t6194 = -1.*t675*t2901*t1854;
  t6201 = -1.*t675*t1461*t3101;
  t6206 = t6194 + t6201;
  t6235 = t3842*t6187;
  t6237 = t6206*t4154;
  t6247 = t6235 + t6237;
  t6281 = t3842*t6206;
  t6284 = -1.*t6187*t4154;
  t6306 = t6281 + t6284;
  t6324 = t5102*t6247;
  t6327 = t6306*t5260;
  t6329 = t6324 + t6327;
  t6345 = t5102*t6306;
  t6347 = -1.*t6247*t5260;
  t6353 = t6345 + t6347;
  p_output1[0]=0.24925 - 1.*t2067*t2136 - 0.135*t312 - 1.*t1164*t312 - 1.*t1043*t1866*t312 - 1.*t2654*t3211 - 1.*t3420*t3511 - 1.*t3813*t4281 - 1.*t4687*t4934 - 1.*t5099*t5319 - 1.*t5378*t5396 - 1.*t5414*t5469 + 1.1312*(-1.*t5414*t5463 + t5422*t5519) - 0.0306*(t5414*t5422 + t5463*t5519) - 1.*t5519*t5545 + 0.1305*t312*t675;
  p_output1[1]=-0.0302 - 0.135*(1. - 1.*t2067) + t1164*t2067 + t1043*t1866*t2067 - 1.*t2136*t312 + t3211*t5803 + t3511*t5822 + t4281*t5838 + t4934*t5864 + t5319*t5883 + t5396*t5913 + t5469*t5958 + t5545*t5983 - 1.1312*(-1.*t5463*t5958 + t5422*t5983) + 0.0306*(t5422*t5958 + t5463*t5983) - 0.1305*t2067*t675;
  p_output1[2]=-0.047 - 0.049*t1004 - 0.004500000000000004*t1043 + t4281*t6187 + t4934*t6206 + t5319*t6247 + t5396*t6306 + t5469*t6329 + t5545*t6353 - 1.1312*(-1.*t5463*t6329 + t5422*t6353) + 0.0306*(t5422*t6329 + t5463*t6353) + t1866*t675 + t1461*t3211*t675 - 1.*t1854*t3511*t675;
}



void p_MultisenseIMU_to_RightToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
