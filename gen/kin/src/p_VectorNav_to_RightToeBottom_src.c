/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:36:47 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_VectorNav_to_RightToeBottom_src.h"

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
  double t33;
  double t1022;
  double t1420;
  double t1606;
  double t1631;
  double t1724;
  double t2328;
  double t3392;
  double t3472;
  double t3697;
  double t3787;
  double t3286;
  double t3334;
  double t3364;
  double t4735;
  double t4771;
  double t4860;
  double t5220;
  double t5245;
  double t5370;
  double t5494;
  double t5134;
  double t5188;
  double t5213;
  double t5671;
  double t5675;
  double t5693;
  double t5759;
  double t5760;
  double t5798;
  double t5817;
  double t5736;
  double t5737;
  double t5754;
  double t5870;
  double t5874;
  double t5881;
  double t5931;
  double t94;
  double t352;
  double t674;
  double t1061;
  double t1082;
  double t1266;
  double t1459;
  double t1499;
  double t5974;
  double t1741;
  double t2514;
  double t2630;
  double t2767;
  double t2794;
  double t3109;
  double t5990;
  double t5992;
  double t5995;
  double t6002;
  double t6007;
  double t6015;
  double t3738;
  double t4006;
  double t4150;
  double t4919;
  double t4940;
  double t5050;
  double t6031;
  double t6035;
  double t6036;
  double t6043;
  double t6047;
  double t6056;
  double t5488;
  double t5571;
  double t5630;
  double t5710;
  double t5715;
  double t5728;
  double t6070;
  double t6073;
  double t6076;
  double t6087;
  double t6088;
  double t6090;
  double t5808;
  double t5821;
  double t5830;
  double t5884;
  double t5889;
  double t5892;
  double t6094;
  double t6096;
  double t6099;
  double t6107;
  double t6108;
  double t6109;
  double t5947;
  double t5950;
  double t5952;
  double t5980;
  double t5981;
  double t5984;
  double t6181;
  double t6189;
  double t6195;
  double t6202;
  double t6207;
  double t6218;
  double t6225;
  double t6226;
  double t6230;
  double t6233;
  double t6234;
  double t6235;
  double t6239;
  double t6243;
  double t6249;
  double t6259;
  double t6262;
  double t6266;
  double t6269;
  double t6271;
  double t6272;
  double t6277;
  double t6278;
  double t6283;
  t33 = Cos(var1[8]);
  t1022 = Cos(var1[9]);
  t1420 = Sin(var1[9]);
  t1606 = Cos(var1[10]);
  t1631 = -1.*t1606;
  t1724 = 1. + t1631;
  t2328 = Sin(var1[10]);
  t3392 = Cos(var1[11]);
  t3472 = -1.*t3392;
  t3697 = 1. + t3472;
  t3787 = Sin(var1[11]);
  t3286 = t33*t1022*t1606;
  t3334 = -1.*t33*t1420*t2328;
  t3364 = t3286 + t3334;
  t4735 = -1.*t33*t1606*t1420;
  t4771 = -1.*t33*t1022*t2328;
  t4860 = t4735 + t4771;
  t5220 = Cos(var1[12]);
  t5245 = -1.*t5220;
  t5370 = 1. + t5245;
  t5494 = Sin(var1[12]);
  t5134 = t3392*t3364;
  t5188 = t4860*t3787;
  t5213 = t5134 + t5188;
  t5671 = t3392*t4860;
  t5675 = -1.*t3364*t3787;
  t5693 = t5671 + t5675;
  t5759 = Cos(var1[13]);
  t5760 = -1.*t5759;
  t5798 = 1. + t5760;
  t5817 = Sin(var1[13]);
  t5736 = t5220*t5213;
  t5737 = t5693*t5494;
  t5754 = t5736 + t5737;
  t5870 = t5220*t5693;
  t5874 = -1.*t5213*t5494;
  t5881 = t5870 + t5874;
  t5931 = Cos(var1[7]);
  t94 = -1.*t33;
  t352 = 1. + t94;
  t674 = Sin(var1[8]);
  t1061 = -1.*t1022;
  t1082 = 1. + t1061;
  t1266 = -0.049*t1082;
  t1459 = -0.09*t1420;
  t1499 = 0. + t1266 + t1459;
  t5974 = Sin(var1[7]);
  t1741 = -0.049*t1724;
  t2514 = -0.21*t2328;
  t2630 = 0. + t1741 + t2514;
  t2767 = -0.21*t1724;
  t2794 = 0.049*t2328;
  t3109 = 0. + t2767 + t2794;
  t5990 = t5931*t1022*t674;
  t5992 = -1.*t5974*t1420;
  t5995 = t5990 + t5992;
  t6002 = -1.*t1022*t5974;
  t6007 = -1.*t5931*t674*t1420;
  t6015 = t6002 + t6007;
  t3738 = -0.0016*t3697;
  t4006 = -0.2707*t3787;
  t4150 = 0. + t3738 + t4006;
  t4919 = -0.2707*t3697;
  t4940 = 0.0016*t3787;
  t5050 = 0. + t4919 + t4940;
  t6031 = t1606*t5995;
  t6035 = t6015*t2328;
  t6036 = t6031 + t6035;
  t6043 = t1606*t6015;
  t6047 = -1.*t5995*t2328;
  t6056 = t6043 + t6047;
  t5488 = 0.0184*t5370;
  t5571 = -0.7055*t5494;
  t5630 = 0. + t5488 + t5571;
  t5710 = -0.7055*t5370;
  t5715 = -0.0184*t5494;
  t5728 = 0. + t5710 + t5715;
  t6070 = t3392*t6036;
  t6073 = t6056*t3787;
  t6076 = t6070 + t6073;
  t6087 = t3392*t6056;
  t6088 = -1.*t6036*t3787;
  t6090 = t6087 + t6088;
  t5808 = -0.0216*t5798;
  t5821 = -1.1135*t5817;
  t5830 = 0. + t5808 + t5821;
  t5884 = -1.1135*t5798;
  t5889 = 0.0216*t5817;
  t5892 = 0. + t5884 + t5889;
  t6094 = t5220*t6076;
  t6096 = t6090*t5494;
  t6099 = t6094 + t6096;
  t6107 = t5220*t6090;
  t6108 = -1.*t6076*t5494;
  t6109 = t6107 + t6108;
  t5947 = -0.135*t352;
  t5950 = 0.049*t674;
  t5952 = 0. + t5947 + t5950;
  t5980 = -0.09*t1082;
  t5981 = 0.049*t1420;
  t5984 = 0. + t5980 + t5981;
  t6181 = t1022*t5974*t674;
  t6189 = t5931*t1420;
  t6195 = t6181 + t6189;
  t6202 = t5931*t1022;
  t6207 = -1.*t5974*t674*t1420;
  t6218 = t6202 + t6207;
  t6225 = t1606*t6195;
  t6226 = t6218*t2328;
  t6230 = t6225 + t6226;
  t6233 = t1606*t6218;
  t6234 = -1.*t6195*t2328;
  t6235 = t6233 + t6234;
  t6239 = t3392*t6230;
  t6243 = t6235*t3787;
  t6249 = t6239 + t6243;
  t6259 = t3392*t6235;
  t6262 = -1.*t6230*t3787;
  t6266 = t6259 + t6262;
  t6269 = t5220*t6249;
  t6271 = t6266*t5494;
  t6272 = t6269 + t6271;
  t6277 = t5220*t6266;
  t6278 = -1.*t6249*t5494;
  t6283 = t6277 + t6278;
  p_output1[0]=-0.03155 + t1499*t33 + t1022*t2630*t33 - 1.*t1420*t3109*t33 - 0.049*t352 + t3364*t4150 + t4860*t5050 + t5213*t5630 + t5693*t5728 + t5754*t5830 - 1.1312*(-1.*t5754*t5817 + t5759*t5881) + 0.0306*(t5754*t5759 + t5817*t5881) + t5881*t5892 - 0.004500000000000004*t674;
  p_output1[1]=0. - 0.135*(1. - 1.*t5931) - 0.1305*t33*t5931 + t5931*t5952 - 1.*t5974*t5984 + t2630*t5995 + t3109*t6015 + t4150*t6036 + t5050*t6056 + t5630*t6076 + t5728*t6090 + t5830*t6099 + t5892*t6109 - 1.1312*(-1.*t5817*t6099 + t5759*t6109) + 0.0306*(t5759*t6099 + t5817*t6109) + t1499*t5931*t674;
  p_output1[2]=0.07996 + 0.135*t5974 - 0.1305*t33*t5974 + t5952*t5974 + t5931*t5984 + t2630*t6195 + t3109*t6218 + t4150*t6230 + t5050*t6235 + t5630*t6249 + t5728*t6266 + t5830*t6272 + t5892*t6283 - 1.1312*(-1.*t5817*t6272 + t5759*t6283) + 0.0306*(t5759*t6272 + t5817*t6283) + t1499*t5974*t674;
}



void p_VectorNav_to_RightToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
