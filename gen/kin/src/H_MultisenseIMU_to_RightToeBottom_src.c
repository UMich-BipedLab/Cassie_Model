/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:36:59 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_MultisenseIMU_to_RightToeBottom_src.h"

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
  double t125;
  double t127;
  double t407;
  double t304;
  double t918;
  double t974;
  double t854;
  double t1198;
  double t1233;
  double t1385;
  double t956;
  double t1104;
  double t1142;
  double t1418;
  double t810;
  double t1565;
  double t1641;
  double t1752;
  double t1183;
  double t1491;
  double t1494;
  double t1773;
  double t731;
  double t1897;
  double t1923;
  double t1943;
  double t1529;
  double t1784;
  double t1839;
  double t1947;
  double t730;
  double t2132;
  double t2135;
  double t2139;
  double t1854;
  double t1970;
  double t2042;
  double t2165;
  double t2530;
  double t2534;
  double t2574;
  double t2390;
  double t2398;
  double t2503;
  double t2665;
  double t2677;
  double t2729;
  double t2511;
  double t2624;
  double t2642;
  double t2816;
  double t2836;
  double t2858;
  double t2647;
  double t2754;
  double t2759;
  double t3021;
  double t3091;
  double t3100;
  double t2764;
  double t2919;
  double t3000;
  double t3482;
  double t3504;
  double t3506;
  double t3349;
  double t3350;
  double t3411;
  double t3545;
  double t3550;
  double t3557;
  double t3434;
  double t3508;
  double t3521;
  double t3617;
  double t3619;
  double t3620;
  double t3527;
  double t3583;
  double t3585;
  double t2131;
  double t2195;
  double t2222;
  double t2295;
  double t2298;
  double t2314;
  double t3008;
  double t3193;
  double t3207;
  double t3246;
  double t3305;
  double t3339;
  double t3603;
  double t3621;
  double t3622;
  double t3726;
  double t3755;
  double t3771;
  double t4163;
  double t4165;
  double t4238;
  double t4259;
  double t4377;
  double t4383;
  double t4473;
  double t4486;
  double t4570;
  double t4590;
  double t4075;
  double t4090;
  double t4125;
  double t4133;
  double t4142;
  double t4167;
  double t4191;
  double t4216;
  double t4222;
  double t4228;
  double t4235;
  double t4293;
  double t4309;
  double t4316;
  double t4362;
  double t4364;
  double t4375;
  double t4400;
  double t4408;
  double t4409;
  double t4417;
  double t4437;
  double t4443;
  double t4495;
  double t4500;
  double t4502;
  double t4535;
  double t4540;
  double t4541;
  double t4602;
  double t4672;
  double t4677;
  double t4687;
  double t4712;
  double t4743;
  t125 = Cos(var1[8]);
  t127 = Sin(var1[7]);
  t407 = Sin(var1[8]);
  t304 = Cos(var1[7]);
  t918 = Cos(var1[9]);
  t974 = Sin(var1[9]);
  t854 = Cos(var1[10]);
  t1198 = t304*t918;
  t1233 = -1.*t127*t407*t974;
  t1385 = t1198 + t1233;
  t956 = t918*t127*t407;
  t1104 = t304*t974;
  t1142 = t956 + t1104;
  t1418 = Sin(var1[10]);
  t810 = Cos(var1[11]);
  t1565 = t854*t1385;
  t1641 = -1.*t1142*t1418;
  t1752 = t1565 + t1641;
  t1183 = t854*t1142;
  t1491 = t1385*t1418;
  t1494 = t1183 + t1491;
  t1773 = Sin(var1[11]);
  t731 = Cos(var1[12]);
  t1897 = t810*t1752;
  t1923 = -1.*t1494*t1773;
  t1943 = t1897 + t1923;
  t1529 = t810*t1494;
  t1784 = t1752*t1773;
  t1839 = t1529 + t1784;
  t1947 = Sin(var1[12]);
  t730 = Cos(var1[13]);
  t2132 = t731*t1943;
  t2135 = -1.*t1839*t1947;
  t2139 = t2132 + t2135;
  t1854 = t731*t1839;
  t1970 = t1943*t1947;
  t2042 = t1854 + t1970;
  t2165 = Sin(var1[13]);
  t2530 = -1.*t918*t127;
  t2534 = -1.*t304*t407*t974;
  t2574 = t2530 + t2534;
  t2390 = t304*t918*t407;
  t2398 = -1.*t127*t974;
  t2503 = t2390 + t2398;
  t2665 = t854*t2574;
  t2677 = -1.*t2503*t1418;
  t2729 = t2665 + t2677;
  t2511 = t854*t2503;
  t2624 = t2574*t1418;
  t2642 = t2511 + t2624;
  t2816 = t810*t2729;
  t2836 = -1.*t2642*t1773;
  t2858 = t2816 + t2836;
  t2647 = t810*t2642;
  t2754 = t2729*t1773;
  t2759 = t2647 + t2754;
  t3021 = t731*t2858;
  t3091 = -1.*t2759*t1947;
  t3100 = t3021 + t3091;
  t2764 = t731*t2759;
  t2919 = t2858*t1947;
  t3000 = t2764 + t2919;
  t3482 = -1.*t125*t854*t974;
  t3504 = -1.*t125*t918*t1418;
  t3506 = t3482 + t3504;
  t3349 = t125*t918*t854;
  t3350 = -1.*t125*t974*t1418;
  t3411 = t3349 + t3350;
  t3545 = t810*t3506;
  t3550 = -1.*t3411*t1773;
  t3557 = t3545 + t3550;
  t3434 = t810*t3411;
  t3508 = t3506*t1773;
  t3521 = t3434 + t3508;
  t3617 = t731*t3557;
  t3619 = -1.*t3521*t1947;
  t3620 = t3617 + t3619;
  t3527 = t731*t3521;
  t3583 = t3557*t1947;
  t3585 = t3527 + t3583;
  t2131 = t730*t2042;
  t2195 = t2139*t2165;
  t2222 = t2131 + t2195;
  t2295 = t730*t2139;
  t2298 = -1.*t2042*t2165;
  t2314 = t2295 + t2298;
  t3008 = t730*t3000;
  t3193 = t3100*t2165;
  t3207 = t3008 + t3193;
  t3246 = t730*t3100;
  t3305 = -1.*t3000*t2165;
  t3339 = t3246 + t3305;
  t3603 = t730*t3585;
  t3621 = t3620*t2165;
  t3622 = t3603 + t3621;
  t3726 = t730*t3620;
  t3755 = -1.*t3585*t2165;
  t3771 = t3726 + t3755;
  t4163 = -1.*t918;
  t4165 = 1. + t4163;
  t4238 = -1.*t854;
  t4259 = 1. + t4238;
  t4377 = -1.*t810;
  t4383 = 1. + t4377;
  t4473 = -1.*t731;
  t4486 = 1. + t4473;
  t4570 = -1.*t730;
  t4590 = 1. + t4570;
  t4075 = -1.*t125;
  t4090 = 1. + t4075;
  t4125 = -0.135*t4090;
  t4133 = 0.049*t407;
  t4142 = 0. + t4125 + t4133;
  t4167 = -0.049*t4165;
  t4191 = -0.09*t974;
  t4216 = 0. + t4167 + t4191;
  t4222 = -0.09*t4165;
  t4228 = 0.049*t974;
  t4235 = 0. + t4222 + t4228;
  t4293 = -0.049*t4259;
  t4309 = -0.21*t1418;
  t4316 = 0. + t4293 + t4309;
  t4362 = -0.21*t4259;
  t4364 = 0.049*t1418;
  t4375 = 0. + t4362 + t4364;
  t4400 = -0.0016*t4383;
  t4408 = -0.2707*t1773;
  t4409 = 0. + t4400 + t4408;
  t4417 = -0.2707*t4383;
  t4437 = 0.0016*t1773;
  t4443 = 0. + t4417 + t4437;
  t4495 = 0.0184*t4486;
  t4500 = -0.7055*t1947;
  t4502 = 0. + t4495 + t4500;
  t4535 = -0.7055*t4486;
  t4540 = -0.0184*t1947;
  t4541 = 0. + t4535 + t4540;
  t4602 = -0.0216*t4590;
  t4672 = -1.1135*t2165;
  t4677 = 0. + t4602 + t4672;
  t4687 = -1.1135*t4590;
  t4712 = 0.0216*t2165;
  t4743 = 0. + t4687 + t4712;
  p_output1[0]=0. + t125*t127;
  p_output1[1]=0. - 1.*t125*t304;
  p_output1[2]=0. + t407;
  p_output1[3]=0.;
  p_output1[4]=0. - 0.642788*t2222 - 0.766044*t2314;
  p_output1[5]=0. + 0.642788*t3207 + 0.766044*t3339;
  p_output1[6]=0. + 0.642788*t3622 + 0.766044*t3771;
  p_output1[7]=0.;
  p_output1[8]=0. + 0.766044*t2222 - 0.642788*t2314;
  p_output1[9]=0. - 0.766044*t3207 + 0.642788*t3339;
  p_output1[10]=0. - 0.766044*t3622 + 0.642788*t3771;
  p_output1[11]=0.;
  p_output1[12]=0.24925 - 0.135*t127 + 0.1305*t125*t127 - 0.0306*t2222 + 1.1312*t2314 - 1.*t127*t4142 - 1.*t127*t407*t4216 - 1.*t304*t4235 - 1.*t1142*t4316 - 1.*t1385*t4375 - 1.*t1494*t4409 - 1.*t1752*t4443 - 1.*t1839*t4502 - 1.*t1943*t4541 - 1.*t2042*t4677 - 1.*t2139*t4743;
  p_output1[13]=-0.0302 - 0.135*(1. - 1.*t304) - 0.1305*t125*t304 + 0.0306*t3207 - 1.1312*t3339 + t304*t4142 + t304*t407*t4216 - 1.*t127*t4235 + t2503*t4316 + t2574*t4375 + t2642*t4409 + t2729*t4443 + t2759*t4502 + t2858*t4541 + t3000*t4677 + t3100*t4743;
  p_output1[14]=-0.047 + 0.0306*t3622 - 1.1312*t3771 - 0.004500000000000004*t407 - 0.049*t4090 + t125*t4216 + t3411*t4409 + t3506*t4443 + t3521*t4502 + t3557*t4541 + t3585*t4677 + t3620*t4743 + t125*t4316*t918 - 1.*t125*t4375*t974;
  p_output1[15]=1.;
}



void H_MultisenseIMU_to_RightToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
