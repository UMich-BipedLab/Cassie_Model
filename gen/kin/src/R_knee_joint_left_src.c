/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:11:07 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_knee_joint_left_src.h"

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
  double t2164;
  double t2190;
  double t2146;
  double t2179;
  double t2203;
  double t2142;
  double t2208;
  double t2209;
  double t2210;
  double t2180;
  double t2204;
  double t2205;
  double t2211;
  double t2098;
  double t2228;
  double t2230;
  double t2249;
  double t2250;
  double t2251;
  double t2245;
  double t2246;
  double t2247;
  double t2237;
  double t2242;
  double t2232;
  double t2234;
  double t2235;
  double t2236;
  double t2238;
  double t2239;
  double t2207;
  double t2223;
  double t2225;
  double t2257;
  double t2260;
  double t2261;
  double t2262;
  double t2265;
  double t2266;
  double t2248;
  double t2252;
  double t2253;
  double t2275;
  double t2276;
  double t2277;
  double t2278;
  double t2279;
  double t2280;
  double t2271;
  double t2272;
  double t2273;
  t2164 = Cos(var1[5]);
  t2190 = Sin(var1[3]);
  t2146 = Cos(var1[3]);
  t2179 = Sin(var1[4]);
  t2203 = Sin(var1[5]);
  t2142 = Cos(var1[6]);
  t2208 = -1.*t2164*t2190;
  t2209 = t2146*t2179*t2203;
  t2210 = t2208 + t2209;
  t2180 = t2146*t2164*t2179;
  t2204 = t2190*t2203;
  t2205 = t2180 + t2204;
  t2211 = Sin(var1[6]);
  t2098 = Cos(var1[8]);
  t2228 = Cos(var1[4]);
  t2230 = Cos(var1[7]);
  t2249 = t2146*t2164;
  t2250 = t2190*t2179*t2203;
  t2251 = t2249 + t2250;
  t2245 = t2164*t2190*t2179;
  t2246 = -1.*t2146*t2203;
  t2247 = t2245 + t2246;
  t2237 = Sin(var1[7]);
  t2242 = Sin(var1[8]);
  t2232 = t2146*t2228*t2230;
  t2234 = t2142*t2210;
  t2235 = t2205*t2211;
  t2236 = t2234 + t2235;
  t2238 = t2236*t2237;
  t2239 = t2232 + t2238;
  t2207 = t2142*t2205;
  t2223 = -1.*t2210*t2211;
  t2225 = t2207 + t2223;
  t2257 = t2228*t2230*t2190;
  t2260 = t2142*t2251;
  t2261 = t2247*t2211;
  t2262 = t2260 + t2261;
  t2265 = t2262*t2237;
  t2266 = t2257 + t2265;
  t2248 = t2142*t2247;
  t2252 = -1.*t2251*t2211;
  t2253 = t2248 + t2252;
  t2275 = -1.*t2230*t2179;
  t2276 = t2228*t2142*t2203;
  t2277 = t2228*t2164*t2211;
  t2278 = t2276 + t2277;
  t2279 = t2278*t2237;
  t2280 = t2275 + t2279;
  t2271 = t2228*t2164*t2142;
  t2272 = -1.*t2228*t2203*t2211;
  t2273 = t2271 + t2272;
  p_output1[0]=-1.*t2098*t2225 + t2239*t2242;
  p_output1[1]=-1.*t2098*t2253 + t2242*t2266;
  p_output1[2]=-1.*t2098*t2273 + t2242*t2280;
  p_output1[3]=t2098*t2239 + t2225*t2242;
  p_output1[4]=t2242*t2253 + t2098*t2266;
  p_output1[5]=t2242*t2273 + t2098*t2280;
  p_output1[6]=-1.*t2230*t2236 + t2146*t2228*t2237;
  p_output1[7]=t2190*t2228*t2237 - 1.*t2230*t2262;
  p_output1[8]=-1.*t2179*t2237 - 1.*t2230*t2278;
}



void R_knee_joint_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
