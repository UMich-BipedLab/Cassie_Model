/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:12:04 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_toe_joint_right_src.h"

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
  double t2243;
  double t2269;
  double t1349;
  double t2254;
  double t2281;
  double t2286;
  double t2267;
  double t2283;
  double t2284;
  double t1257;
  double t2287;
  double t2290;
  double t2291;
  double t2302;
  double t2285;
  double t2295;
  double t2296;
  double t1208;
  double t2303;
  double t2307;
  double t2308;
  double t2309;
  double t2310;
  double t2311;
  double t2312;
  double t2314;
  double t2315;
  double t2320;
  double t2297;
  double t2316;
  double t2318;
  double t1199;
  double t2322;
  double t2323;
  double t2326;
  double t2332;
  double t2319;
  double t2327;
  double t2330;
  double t594;
  double t2334;
  double t2719;
  double t2723;
  double t351;
  double t4576;
  double t4774;
  double t4860;
  double t4950;
  double t4967;
  double t5026;
  double t4899;
  double t5057;
  double t5071;
  double t5106;
  double t5163;
  double t5166;
  double t5209;
  double t5250;
  double t5257;
  double t5077;
  double t5268;
  double t5270;
  double t5276;
  double t5287;
  double t5433;
  double t3714;
  double t5275;
  double t5449;
  double t5453;
  double t5608;
  double t5641;
  double t5661;
  double t5915;
  double t5931;
  double t5958;
  double t6020;
  double t6051;
  double t6053;
  double t6324;
  double t6343;
  double t6383;
  double t5985;
  double t6468;
  double t6601;
  double t6827;
  double t6829;
  double t7043;
  double t6722;
  double t7242;
  double t7632;
  double t8194;
  double t8236;
  double t8241;
  double t2331;
  double t2883;
  double t2900;
  double t3921;
  double t4098;
  double t4102;
  double t5601;
  double t5666;
  double t5686;
  double t5825;
  double t5835;
  double t5849;
  double t7789;
  double t8308;
  double t8313;
  double t8389;
  double t8399;
  double t8413;
  t2243 = Cos(var1[5]);
  t2269 = Sin(var1[3]);
  t1349 = Cos(var1[3]);
  t2254 = Sin(var1[4]);
  t2281 = Sin(var1[5]);
  t2286 = Sin(var1[13]);
  t2267 = t1349*t2243*t2254;
  t2283 = t2269*t2281;
  t2284 = t2267 + t2283;
  t1257 = Cos(var1[13]);
  t2287 = -1.*t2243*t2269;
  t2290 = t1349*t2254*t2281;
  t2291 = t2287 + t2290;
  t2302 = Cos(var1[15]);
  t2285 = t1257*t2284;
  t2295 = -1.*t2286*t2291;
  t2296 = t2285 + t2295;
  t1208 = Sin(var1[15]);
  t2303 = Cos(var1[14]);
  t2307 = Cos(var1[4]);
  t2308 = t2303*t1349*t2307;
  t2309 = Sin(var1[14]);
  t2310 = t2286*t2284;
  t2311 = t1257*t2291;
  t2312 = t2310 + t2311;
  t2314 = t2309*t2312;
  t2315 = t2308 + t2314;
  t2320 = Cos(var1[16]);
  t2297 = t1208*t2296;
  t2316 = t2302*t2315;
  t2318 = t2297 + t2316;
  t1199 = Sin(var1[16]);
  t2322 = t2302*t2296;
  t2323 = -1.*t1208*t2315;
  t2326 = t2322 + t2323;
  t2332 = Cos(var1[17]);
  t2319 = -1.*t1199*t2318;
  t2327 = t2320*t2326;
  t2330 = t2319 + t2327;
  t594 = Sin(var1[17]);
  t2334 = t2320*t2318;
  t2719 = t1199*t2326;
  t2723 = t2334 + t2719;
  t351 = Sin(var1[18]);
  t4576 = t2243*t2269*t2254;
  t4774 = -1.*t1349*t2281;
  t4860 = t4576 + t4774;
  t4950 = t1349*t2243;
  t4967 = t2269*t2254*t2281;
  t5026 = t4950 + t4967;
  t4899 = t1257*t4860;
  t5057 = -1.*t2286*t5026;
  t5071 = t4899 + t5057;
  t5106 = t2303*t2307*t2269;
  t5163 = t2286*t4860;
  t5166 = t1257*t5026;
  t5209 = t5163 + t5166;
  t5250 = t2309*t5209;
  t5257 = t5106 + t5250;
  t5077 = t1208*t5071;
  t5268 = t2302*t5257;
  t5270 = t5077 + t5268;
  t5276 = t2302*t5071;
  t5287 = -1.*t1208*t5257;
  t5433 = t5276 + t5287;
  t3714 = Cos(var1[18]);
  t5275 = -1.*t1199*t5270;
  t5449 = t2320*t5433;
  t5453 = t5275 + t5449;
  t5608 = t2320*t5270;
  t5641 = t1199*t5433;
  t5661 = t5608 + t5641;
  t5915 = t1257*t2307*t2243;
  t5931 = -1.*t2307*t2286*t2281;
  t5958 = t5915 + t5931;
  t6020 = -1.*t2303*t2254;
  t6051 = t2307*t2243*t2286;
  t6053 = t1257*t2307*t2281;
  t6324 = t6051 + t6053;
  t6343 = t2309*t6324;
  t6383 = t6020 + t6343;
  t5985 = t1208*t5958;
  t6468 = t2302*t6383;
  t6601 = t5985 + t6468;
  t6827 = t2302*t5958;
  t6829 = -1.*t1208*t6383;
  t7043 = t6827 + t6829;
  t6722 = -1.*t1199*t6601;
  t7242 = t2320*t7043;
  t7632 = t6722 + t7242;
  t8194 = t2320*t6601;
  t8236 = t1199*t7043;
  t8241 = t8194 + t8236;
  t2331 = t594*t2330;
  t2883 = t2332*t2723;
  t2900 = t2331 + t2883;
  t3921 = t2332*t2330;
  t4098 = -1.*t594*t2723;
  t4102 = t3921 + t4098;
  t5601 = t594*t5453;
  t5666 = t2332*t5661;
  t5686 = t5601 + t5666;
  t5825 = t2332*t5453;
  t5835 = -1.*t594*t5661;
  t5849 = t5825 + t5835;
  t7789 = t594*t7632;
  t8308 = t2332*t8241;
  t8313 = t7789 + t8308;
  t8389 = t2332*t7632;
  t8399 = -1.*t594*t8241;
  t8413 = t8389 + t8399;
  p_output1[0]=t2900*t351 - 1.*t3714*t4102;
  p_output1[1]=t351*t5686 - 1.*t3714*t5849;
  p_output1[2]=t351*t8313 - 1.*t3714*t8413;
  p_output1[3]=t2900*t3714 + t351*t4102;
  p_output1[4]=t3714*t5686 + t351*t5849;
  p_output1[5]=t3714*t8313 + t351*t8413;
  p_output1[6]=t1349*t2307*t2309 - 1.*t2303*t2312;
  p_output1[7]=t2269*t2307*t2309 - 1.*t2303*t5209;
  p_output1[8]=-1.*t2254*t2309 - 1.*t2303*t6324;
}



void R_toe_joint_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
