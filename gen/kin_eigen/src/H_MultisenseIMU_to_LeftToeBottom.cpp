/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 12:16:39 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_MultisenseIMU_to_LeftToeBottom.h"

#ifdef _MSC_VER
  #define INLINE __forceinline /* use __forceinline (VC++ specific) */
#else
  #define INLINE inline        /* use standard inline */
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
static void output1(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  double t43;
  double t62;
  double t865;
  double t526;
  double t1321;
  double t1688;
  double t1983;
  double t1468;
  double t1911;
  double t1927;
  double t1317;
  double t2008;
  double t2066;
  double t2144;
  double t2748;
  double t1956;
  double t2437;
  double t2469;
  double t1276;
  double t2804;
  double t2925;
  double t2991;
  double t3199;
  double t2568;
  double t2997;
  double t3056;
  double t1168;
  double t3617;
  double t3881;
  double t4106;
  double t4425;
  double t3196;
  double t4110;
  double t4327;
  double t1156;
  double t5526;
  double t5589;
  double t6342;
  double t6966;
  double t6981;
  double t6985;
  double t6991;
  double t7001;
  double t7009;
  double t6990;
  double t7032;
  double t7041;
  double t7048;
  double t7051;
  double t7054;
  double t7043;
  double t7056;
  double t7060;
  double t7075;
  double t7079;
  double t7080;
  double t7061;
  double t7083;
  double t7089;
  double t7093;
  double t7096;
  double t7117;
  double t7152;
  double t7153;
  double t7156;
  double t7164;
  double t7174;
  double t7176;
  double t7162;
  double t7178;
  double t7179;
  double t7183;
  double t7184;
  double t7186;
  double t7180;
  double t7189;
  double t7192;
  double t7201;
  double t7202;
  double t7206;
  double t4405;
  double t6540;
  double t6691;
  double t6818;
  double t6828;
  double t6883;
  double t7090;
  double t7122;
  double t7128;
  double t7135;
  double t7138;
  double t7142;
  double t7197;
  double t7215;
  double t7217;
  double t7233;
  double t7235;
  double t7238;
  double t7292;
  double t7296;
  double t7306;
  double t7308;
  double t7323;
  double t7324;
  double t7337;
  double t7338;
  double t7348;
  double t7351;
  double t7276;
  double t7278;
  double t7279;
  double t7281;
  double t7287;
  double t7297;
  double t7298;
  double t7300;
  double t7302;
  double t7303;
  double t7304;
  double t7309;
  double t7311;
  double t7312;
  double t7317;
  double t7319;
  double t7320;
  double t7326;
  double t7327;
  double t7328;
  double t7330;
  double t7331;
  double t7332;
  double t7339;
  double t7340;
  double t7341;
  double t7343;
  double t7344;
  double t7345;
  double t7354;
  double t7356;
  double t7357;
  double t7360;
  double t7361;
  double t7362;
  t43 = Cos(var1[1]);
  t62 = Sin(var1[0]);
  t865 = Sin(var1[1]);
  t526 = Cos(var1[0]);
  t1321 = Cos(var1[2]);
  t1688 = Sin(var1[2]);
  t1983 = Cos(var1[3]);
  t1468 = t1321*t62*t865;
  t1911 = t526*t1688;
  t1927 = t1468 + t1911;
  t1317 = Sin(var1[3]);
  t2008 = t526*t1321;
  t2066 = -1.*t62*t865*t1688;
  t2144 = t2008 + t2066;
  t2748 = Cos(var1[4]);
  t1956 = -1.*t1317*t1927;
  t2437 = t1983*t2144;
  t2469 = t1956 + t2437;
  t1276 = Sin(var1[4]);
  t2804 = t1983*t1927;
  t2925 = t1317*t2144;
  t2991 = t2804 + t2925;
  t3199 = Cos(var1[5]);
  t2568 = t1276*t2469;
  t2997 = t2748*t2991;
  t3056 = t2568 + t2997;
  t1168 = Sin(var1[5]);
  t3617 = t2748*t2469;
  t3881 = -1.*t1276*t2991;
  t4106 = t3617 + t3881;
  t4425 = Cos(var1[6]);
  t3196 = -1.*t1168*t3056;
  t4110 = t3199*t4106;
  t4327 = t3196 + t4110;
  t1156 = Sin(var1[6]);
  t5526 = t3199*t3056;
  t5589 = t1168*t4106;
  t6342 = t5526 + t5589;
  t6966 = t526*t1321*t865;
  t6981 = -1.*t62*t1688;
  t6985 = t6966 + t6981;
  t6991 = -1.*t1321*t62;
  t7001 = -1.*t526*t865*t1688;
  t7009 = t6991 + t7001;
  t6990 = -1.*t1317*t6985;
  t7032 = t1983*t7009;
  t7041 = t6990 + t7032;
  t7048 = t1983*t6985;
  t7051 = t1317*t7009;
  t7054 = t7048 + t7051;
  t7043 = t1276*t7041;
  t7056 = t2748*t7054;
  t7060 = t7043 + t7056;
  t7075 = t2748*t7041;
  t7079 = -1.*t1276*t7054;
  t7080 = t7075 + t7079;
  t7061 = -1.*t1168*t7060;
  t7083 = t3199*t7080;
  t7089 = t7061 + t7083;
  t7093 = t3199*t7060;
  t7096 = t1168*t7080;
  t7117 = t7093 + t7096;
  t7152 = -1.*t43*t1321*t1317;
  t7153 = -1.*t1983*t43*t1688;
  t7156 = t7152 + t7153;
  t7164 = t1983*t43*t1321;
  t7174 = -1.*t43*t1317*t1688;
  t7176 = t7164 + t7174;
  t7162 = t1276*t7156;
  t7178 = t2748*t7176;
  t7179 = t7162 + t7178;
  t7183 = t2748*t7156;
  t7184 = -1.*t1276*t7176;
  t7186 = t7183 + t7184;
  t7180 = -1.*t1168*t7179;
  t7189 = t3199*t7186;
  t7192 = t7180 + t7189;
  t7201 = t3199*t7179;
  t7202 = t1168*t7186;
  t7206 = t7201 + t7202;
  t4405 = t1156*t4327;
  t6540 = t4425*t6342;
  t6691 = t4405 + t6540;
  t6818 = t4425*t4327;
  t6828 = -1.*t1156*t6342;
  t6883 = t6818 + t6828;
  t7090 = t1156*t7089;
  t7122 = t4425*t7117;
  t7128 = t7090 + t7122;
  t7135 = t4425*t7089;
  t7138 = -1.*t1156*t7117;
  t7142 = t7135 + t7138;
  t7197 = t1156*t7192;
  t7215 = t4425*t7206;
  t7217 = t7197 + t7215;
  t7233 = t4425*t7192;
  t7235 = -1.*t1156*t7206;
  t7238 = t7233 + t7235;
  t7292 = -1.*t1321;
  t7296 = 1. + t7292;
  t7306 = -1.*t1983;
  t7308 = 1. + t7306;
  t7323 = -1.*t2748;
  t7324 = 1. + t7323;
  t7337 = -1.*t3199;
  t7338 = 1. + t7337;
  t7348 = -1.*t4425;
  t7351 = 1. + t7348;
  t7276 = -1.*t43;
  t7278 = 1. + t7276;
  t7279 = 0.135*t7278;
  t7281 = 0.049*t865;
  t7287 = 0. + t7279 + t7281;
  t7297 = -0.049*t7296;
  t7298 = -0.09*t1688;
  t7300 = 0. + t7297 + t7298;
  t7302 = -0.09*t7296;
  t7303 = 0.049*t1688;
  t7304 = 0. + t7302 + t7303;
  t7309 = -0.049*t7308;
  t7311 = -0.21*t1317;
  t7312 = 0. + t7309 + t7311;
  t7317 = -0.21*t7308;
  t7319 = 0.049*t1317;
  t7320 = 0. + t7317 + t7319;
  t7326 = -0.2707*t7324;
  t7327 = 0.0016*t1276;
  t7328 = 0. + t7326 + t7327;
  t7330 = -0.0016*t7324;
  t7331 = -0.2707*t1276;
  t7332 = 0. + t7330 + t7331;
  t7339 = 0.0184*t7338;
  t7340 = -0.7055*t1168;
  t7341 = 0. + t7339 + t7340;
  t7343 = -0.7055*t7338;
  t7344 = -0.0184*t1168;
  t7345 = 0. + t7343 + t7344;
  t7354 = -1.1135*t7351;
  t7356 = 0.0216*t1156;
  t7357 = 0. + t7354 + t7356;
  t7360 = -0.0216*t7351;
  t7361 = -1.1135*t1156;
  t7362 = 0. + t7360 + t7361;

  p_output1(0)=0. + t43*t62;
  p_output1(1)=0. - 1.*t43*t526;
  p_output1(2)=0. + t865;
  p_output1(3)=0.;
  p_output1(4)=0. - 0.642788*t6691 - 0.766044*t6883;
  p_output1(5)=0. + 0.642788*t7128 + 0.766044*t7142;
  p_output1(6)=0. + 0.642788*t7217 + 0.766044*t7238;
  p_output1(7)=0.;
  p_output1(8)=0. + 0.766044*t6691 - 0.642788*t6883;
  p_output1(9)=0. - 0.766044*t7128 + 0.642788*t7142;
  p_output1(10)=0. - 0.766044*t7217 + 0.642788*t7238;
  p_output1(11)=0.;
  p_output1(12)=0.24925 + 0.135*t62 - 0.1305*t43*t62 - 0.0306*t6691 + 1.1312*t6883 - 1.*t62*t7287 - 1.*t526*t7304 - 1.*t1927*t7312 - 1.*t2144*t7320 - 1.*t2469*t7328 - 1.*t2991*t7332 - 1.*t3056*t7341 - 1.*t4106*t7345 - 1.*t4327*t7357 - 1.*t6342*t7362 - 1.*t62*t7300*t865;
  p_output1(13)=-0.0302 + 0.135*(1. - 1.*t526) + 0.1305*t43*t526 + 0.0306*t7128 - 1.1312*t7142 + t526*t7287 - 1.*t62*t7304 + t6985*t7312 + t7009*t7320 + t7041*t7328 + t7054*t7332 + t7060*t7341 + t7080*t7345 + t7089*t7357 + t7117*t7362 + t526*t7300*t865;
  p_output1(14)=-0.047 + 0.0306*t7217 - 1.1312*t7238 - 0.049*t7278 + t43*t7300 + t1321*t43*t7312 - 1.*t1688*t43*t7320 + t7156*t7328 + t7176*t7332 + t7179*t7341 + t7186*t7345 + t7192*t7357 + t7206*t7362 + 0.004500000000000004*t865;
  p_output1(15)=1.;
}


       
void H_MultisenseIMU_to_LeftToeBottom(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
