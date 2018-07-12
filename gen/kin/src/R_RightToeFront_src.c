/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:34:21 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RightToeFront_src.h"

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
  double t562;
  double t1181;
  double t1250;
  double t1186;
  double t1289;
  double t661;
  double t999;
  double t1127;
  double t1162;
  double t1392;
  double t1242;
  double t1327;
  double t1376;
  double t1401;
  double t1405;
  double t1407;
  double t1381;
  double t1487;
  double t1502;
  double t2712;
  double t2502;
  double t2531;
  double t2532;
  double t2451;
  double t2714;
  double t2851;
  double t2866;
  double t2924;
  double t2598;
  double t2891;
  double t2898;
  double t2413;
  double t2946;
  double t2978;
  double t2997;
  double t3076;
  double t2912;
  double t3002;
  double t3011;
  double t2392;
  double t3126;
  double t3158;
  double t3296;
  double t3422;
  double t3033;
  double t3353;
  double t3381;
  double t2383;
  double t3427;
  double t3574;
  double t3607;
  double t3717;
  double t3396;
  double t3612;
  double t3638;
  double t2334;
  double t3765;
  double t3768;
  double t3816;
  double t1583;
  double t1604;
  double t1648;
  double t1688;
  double t1769;
  double t1779;
  double t1677;
  double t1792;
  double t1812;
  double t4100;
  double t4143;
  double t4148;
  double t4249;
  double t4294;
  double t4296;
  double t4248;
  double t4313;
  double t4336;
  double t4367;
  double t4382;
  double t4386;
  double t4360;
  double t4429;
  double t4451;
  double t4469;
  double t4503;
  double t4548;
  double t4464;
  double t4557;
  double t4584;
  double t4616;
  double t4702;
  double t4741;
  double t4603;
  double t4742;
  double t4744;
  double t4757;
  double t4759;
  double t4765;
  double t2065;
  double t2096;
  double t2097;
  double t4872;
  double t4881;
  double t4882;
  double t4923;
  double t4945;
  double t4947;
  double t4915;
  double t4959;
  double t4980;
  double t5015;
  double t5016;
  double t5055;
  double t4997;
  double t5095;
  double t5106;
  double t5129;
  double t5155;
  double t5182;
  double t5124;
  double t5183;
  double t5190;
  double t5196;
  double t5201;
  double t5239;
  double t5192;
  double t5249;
  double t5264;
  double t5300;
  double t5306;
  double t5312;
  double t3701;
  double t3874;
  double t3884;
  double t3916;
  double t3974;
  double t4041;
  double t4755;
  double t4773;
  double t4775;
  double t4819;
  double t4823;
  double t4834;
  double t5294;
  double t5316;
  double t5340;
  double t5353;
  double t5354;
  double t5362;
  t562 = Cos(var1[3]);
  t1181 = Cos(var1[5]);
  t1250 = Sin(var1[3]);
  t1186 = Sin(var1[4]);
  t1289 = Sin(var1[5]);
  t661 = Cos(var1[4]);
  t999 = Sin(var1[14]);
  t1127 = Cos(var1[14]);
  t1162 = Sin(var1[13]);
  t1392 = Cos(var1[13]);
  t1242 = t562*t1181*t1186;
  t1327 = t1250*t1289;
  t1376 = t1242 + t1327;
  t1401 = -1.*t1181*t1250;
  t1405 = t562*t1186*t1289;
  t1407 = t1401 + t1405;
  t1381 = t1162*t1376;
  t1487 = t1392*t1407;
  t1502 = t1381 + t1487;
  t2712 = Cos(var1[15]);
  t2502 = t1392*t1376;
  t2531 = -1.*t1162*t1407;
  t2532 = t2502 + t2531;
  t2451 = Sin(var1[15]);
  t2714 = t1127*t562*t661;
  t2851 = t999*t1502;
  t2866 = t2714 + t2851;
  t2924 = Cos(var1[16]);
  t2598 = t2451*t2532;
  t2891 = t2712*t2866;
  t2898 = t2598 + t2891;
  t2413 = Sin(var1[16]);
  t2946 = t2712*t2532;
  t2978 = -1.*t2451*t2866;
  t2997 = t2946 + t2978;
  t3076 = Cos(var1[17]);
  t2912 = -1.*t2413*t2898;
  t3002 = t2924*t2997;
  t3011 = t2912 + t3002;
  t2392 = Sin(var1[17]);
  t3126 = t2924*t2898;
  t3158 = t2413*t2997;
  t3296 = t3126 + t3158;
  t3422 = Cos(var1[18]);
  t3033 = t2392*t3011;
  t3353 = t3076*t3296;
  t3381 = t3033 + t3353;
  t2383 = Sin(var1[18]);
  t3427 = t3076*t3011;
  t3574 = -1.*t2392*t3296;
  t3607 = t3427 + t3574;
  t3717 = Cos(var1[19]);
  t3396 = -1.*t2383*t3381;
  t3612 = t3422*t3607;
  t3638 = t3396 + t3612;
  t2334 = Sin(var1[19]);
  t3765 = t3422*t3381;
  t3768 = t2383*t3607;
  t3816 = t3765 + t3768;
  t1583 = t1181*t1250*t1186;
  t1604 = -1.*t562*t1289;
  t1648 = t1583 + t1604;
  t1688 = t562*t1181;
  t1769 = t1250*t1186*t1289;
  t1779 = t1688 + t1769;
  t1677 = t1162*t1648;
  t1792 = t1392*t1779;
  t1812 = t1677 + t1792;
  t4100 = t1392*t1648;
  t4143 = -1.*t1162*t1779;
  t4148 = t4100 + t4143;
  t4249 = t1127*t661*t1250;
  t4294 = t999*t1812;
  t4296 = t4249 + t4294;
  t4248 = t2451*t4148;
  t4313 = t2712*t4296;
  t4336 = t4248 + t4313;
  t4367 = t2712*t4148;
  t4382 = -1.*t2451*t4296;
  t4386 = t4367 + t4382;
  t4360 = -1.*t2413*t4336;
  t4429 = t2924*t4386;
  t4451 = t4360 + t4429;
  t4469 = t2924*t4336;
  t4503 = t2413*t4386;
  t4548 = t4469 + t4503;
  t4464 = t2392*t4451;
  t4557 = t3076*t4548;
  t4584 = t4464 + t4557;
  t4616 = t3076*t4451;
  t4702 = -1.*t2392*t4548;
  t4741 = t4616 + t4702;
  t4603 = -1.*t2383*t4584;
  t4742 = t3422*t4741;
  t4744 = t4603 + t4742;
  t4757 = t3422*t4584;
  t4759 = t2383*t4741;
  t4765 = t4757 + t4759;
  t2065 = t661*t1181*t1162;
  t2096 = t1392*t661*t1289;
  t2097 = t2065 + t2096;
  t4872 = t1392*t661*t1181;
  t4881 = -1.*t661*t1162*t1289;
  t4882 = t4872 + t4881;
  t4923 = -1.*t1127*t1186;
  t4945 = t999*t2097;
  t4947 = t4923 + t4945;
  t4915 = t2451*t4882;
  t4959 = t2712*t4947;
  t4980 = t4915 + t4959;
  t5015 = t2712*t4882;
  t5016 = -1.*t2451*t4947;
  t5055 = t5015 + t5016;
  t4997 = -1.*t2413*t4980;
  t5095 = t2924*t5055;
  t5106 = t4997 + t5095;
  t5129 = t2924*t4980;
  t5155 = t2413*t5055;
  t5182 = t5129 + t5155;
  t5124 = t2392*t5106;
  t5183 = t3076*t5182;
  t5190 = t5124 + t5183;
  t5196 = t3076*t5106;
  t5201 = -1.*t2392*t5182;
  t5239 = t5196 + t5201;
  t5192 = -1.*t2383*t5190;
  t5249 = t3422*t5239;
  t5264 = t5192 + t5249;
  t5300 = t3422*t5190;
  t5306 = t2383*t5239;
  t5312 = t5300 + t5306;
  t3701 = t2334*t3638;
  t3874 = t3717*t3816;
  t3884 = t3701 + t3874;
  t3916 = t3717*t3638;
  t3974 = -1.*t2334*t3816;
  t4041 = t3916 + t3974;
  t4755 = t2334*t4744;
  t4773 = t3717*t4765;
  t4775 = t4755 + t4773;
  t4819 = t3717*t4744;
  t4823 = -1.*t2334*t4765;
  t4834 = t4819 + t4823;
  t5294 = t2334*t5264;
  t5316 = t3717*t5312;
  t5340 = t5294 + t5316;
  t5353 = t3717*t5264;
  t5354 = -1.*t2334*t5312;
  t5362 = t5353 + t5354;
  p_output1[0]=-1.*t1127*t1502 + t562*t661*t999;
  p_output1[1]=-1.*t1127*t1812 + t1250*t661*t999;
  p_output1[2]=-1.*t1127*t2097 - 1.*t1186*t999;
  p_output1[3]=0.642788*t3884 + 0.766044*t4041;
  p_output1[4]=0.642788*t4775 + 0.766044*t4834;
  p_output1[5]=0.642788*t5340 + 0.766044*t5362;
  p_output1[6]=-0.766044*t3884 + 0.642788*t4041;
  p_output1[7]=-0.766044*t4775 + 0.642788*t4834;
  p_output1[8]=-0.766044*t5340 + 0.642788*t5362;
}



void R_RightToeFront_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
