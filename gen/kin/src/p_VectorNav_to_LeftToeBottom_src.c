/*
 * Automatically Generated from Mathematica.
 * Mon 26 Feb 2018 15:42:32 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_VectorNav_to_LeftToeBottom_src.h"

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
  double t220;
  double t3531;
  double t4881;
  double t5047;
  double t5054;
  double t5083;
  double t5145;
  double t5168;
  double t5170;
  double t5172;
  double t5174;
  double t5183;
  double t5187;
  double t5190;
  double t5200;
  double t5201;
  double t5203;
  double t5205;
  double t5206;
  double t5207;
  double t5209;
  double t5212;
  double t5214;
  double t5215;
  double t5221;
  double t5222;
  double t5224;
  double t5227;
  double t5228;
  double t5231;
  double t5237;
  double t5241;
  double t5243;
  double t5244;
  double t5253;
  double t5255;
  double t5256;
  double t5268;
  double t363;
  double t873;
  double t5111;
  double t5117;
  double t5132;
  double t5134;
  double t5147;
  double t5148;
  double t5065;
  double t5087;
  double t5103;
  double t5281;
  double t5152;
  double t5157;
  double t5162;
  double t5173;
  double t5177;
  double t5182;
  double t5289;
  double t5290;
  double t5291;
  double t5294;
  double t5297;
  double t5299;
  double t5196;
  double t5197;
  double t5198;
  double t5208;
  double t5210;
  double t5211;
  double t5302;
  double t5303;
  double t5305;
  double t5307;
  double t5308;
  double t5309;
  double t5217;
  double t5218;
  double t5219;
  double t5235;
  double t5239;
  double t5240;
  double t5311;
  double t5312;
  double t5313;
  double t5315;
  double t5316;
  double t5317;
  double t5247;
  double t5248;
  double t5251;
  double t5319;
  double t5320;
  double t5321;
  double t5323;
  double t5324;
  double t5325;
  double t5273;
  double t5274;
  double t5275;
  double t5283;
  double t5285;
  double t5286;
  double t5341;
  double t5342;
  double t5343;
  double t5345;
  double t5346;
  double t5347;
  double t5349;
  double t5350;
  double t5351;
  double t5353;
  double t5354;
  double t5355;
  double t5357;
  double t5358;
  double t5359;
  double t5361;
  double t5362;
  double t5363;
  double t5365;
  double t5366;
  double t5367;
  double t5369;
  double t5370;
  double t5371;
  t220 = Cos(var1[1]);
  t3531 = Cos(var1[2]);
  t4881 = Cos(var1[3]);
  t5047 = -1.*t4881;
  t5054 = 1. + t5047;
  t5083 = Sin(var1[3]);
  t5145 = Sin(var1[2]);
  t5168 = Cos(var1[4]);
  t5170 = -1.*t5168;
  t5172 = 1. + t5170;
  t5174 = Sin(var1[4]);
  t5183 = -1.*t220*t3531*t5083;
  t5187 = -1.*t4881*t220*t5145;
  t5190 = t5183 + t5187;
  t5200 = t4881*t220*t3531;
  t5201 = -1.*t220*t5083*t5145;
  t5203 = t5200 + t5201;
  t5205 = Cos(var1[5]);
  t5206 = -1.*t5205;
  t5207 = 1. + t5206;
  t5209 = Sin(var1[5]);
  t5212 = t5174*t5190;
  t5214 = t5168*t5203;
  t5215 = t5212 + t5214;
  t5221 = t5168*t5190;
  t5222 = -1.*t5174*t5203;
  t5224 = t5221 + t5222;
  t5227 = Cos(var1[6]);
  t5228 = -1.*t5227;
  t5231 = 1. + t5228;
  t5237 = Sin(var1[6]);
  t5241 = -1.*t5209*t5215;
  t5243 = t5205*t5224;
  t5244 = t5241 + t5243;
  t5253 = t5205*t5215;
  t5255 = t5209*t5224;
  t5256 = t5253 + t5255;
  t5268 = Cos(var1[0]);
  t363 = -1.*t220;
  t873 = 1. + t363;
  t5111 = Sin(var1[1]);
  t5117 = -1.*t3531;
  t5132 = 1. + t5117;
  t5134 = -0.049*t5132;
  t5147 = -0.09*t5145;
  t5148 = 0. + t5134 + t5147;
  t5065 = -0.049*t5054;
  t5087 = -0.21*t5083;
  t5103 = 0. + t5065 + t5087;
  t5281 = Sin(var1[0]);
  t5152 = -0.21*t5054;
  t5157 = 0.049*t5083;
  t5162 = 0. + t5152 + t5157;
  t5173 = -0.2707*t5172;
  t5177 = 0.0016*t5174;
  t5182 = 0. + t5173 + t5177;
  t5289 = t5268*t3531*t5111;
  t5290 = -1.*t5281*t5145;
  t5291 = t5289 + t5290;
  t5294 = -1.*t3531*t5281;
  t5297 = -1.*t5268*t5111*t5145;
  t5299 = t5294 + t5297;
  t5196 = -0.0016*t5172;
  t5197 = -0.2707*t5174;
  t5198 = 0. + t5196 + t5197;
  t5208 = 0.0184*t5207;
  t5210 = -0.7055*t5209;
  t5211 = 0. + t5208 + t5210;
  t5302 = -1.*t5083*t5291;
  t5303 = t4881*t5299;
  t5305 = t5302 + t5303;
  t5307 = t4881*t5291;
  t5308 = t5083*t5299;
  t5309 = t5307 + t5308;
  t5217 = -0.7055*t5207;
  t5218 = -0.0184*t5209;
  t5219 = 0. + t5217 + t5218;
  t5235 = -1.1135*t5231;
  t5239 = 0.0216*t5237;
  t5240 = 0. + t5235 + t5239;
  t5311 = t5174*t5305;
  t5312 = t5168*t5309;
  t5313 = t5311 + t5312;
  t5315 = t5168*t5305;
  t5316 = -1.*t5174*t5309;
  t5317 = t5315 + t5316;
  t5247 = -0.0216*t5231;
  t5248 = -1.1135*t5237;
  t5251 = 0. + t5247 + t5248;
  t5319 = -1.*t5209*t5313;
  t5320 = t5205*t5317;
  t5321 = t5319 + t5320;
  t5323 = t5205*t5313;
  t5324 = t5209*t5317;
  t5325 = t5323 + t5324;
  t5273 = 0.135*t873;
  t5274 = 0.049*t5111;
  t5275 = 0. + t5273 + t5274;
  t5283 = -0.09*t5132;
  t5285 = 0.049*t5145;
  t5286 = 0. + t5283 + t5285;
  t5341 = t3531*t5281*t5111;
  t5342 = t5268*t5145;
  t5343 = t5341 + t5342;
  t5345 = t5268*t3531;
  t5346 = -1.*t5281*t5111*t5145;
  t5347 = t5345 + t5346;
  t5349 = -1.*t5083*t5343;
  t5350 = t4881*t5347;
  t5351 = t5349 + t5350;
  t5353 = t4881*t5343;
  t5354 = t5083*t5347;
  t5355 = t5353 + t5354;
  t5357 = t5174*t5351;
  t5358 = t5168*t5355;
  t5359 = t5357 + t5358;
  t5361 = t5168*t5351;
  t5362 = -1.*t5174*t5355;
  t5363 = t5361 + t5362;
  t5365 = -1.*t5209*t5359;
  t5366 = t5205*t5363;
  t5367 = t5365 + t5366;
  t5369 = t5205*t5359;
  t5370 = t5209*t5363;
  t5371 = t5369 + t5370;
  p_output1[0]=-0.03155 + t220*t3531*t5103 + 0.004500000000000004*t5111 + t220*t5148 - 1.*t220*t5145*t5162 + t5182*t5190 + t5198*t5203 + t5211*t5215 + t5219*t5224 + t5240*t5244 + t5251*t5256 + 0.0306*(t5237*t5244 + t5227*t5256) - 1.1312*(t5227*t5244 - 1.*t5237*t5256) - 0.049*t873;
  p_output1[1]=0. - 0.135*(1. - 1.*t5268) - 0.1305*t220*t5268 - 1.*t5111*t5148*t5268 - 1.*t5268*t5275 + t5281*t5286 - 1.*t5103*t5291 - 1.*t5162*t5299 - 1.*t5182*t5305 - 1.*t5198*t5309 - 1.*t5211*t5313 - 1.*t5219*t5317 - 1.*t5240*t5321 - 1.*t5251*t5325 - 0.0306*(t5237*t5321 + t5227*t5325) + 1.1312*(t5227*t5321 - 1.*t5237*t5325);
  p_output1[2]=-0.07996 + 0.135*t5281 - 0.1305*t220*t5281 - 1.*t5111*t5148*t5281 - 1.*t5275*t5281 - 1.*t5268*t5286 - 1.*t5103*t5343 - 1.*t5162*t5347 - 1.*t5182*t5351 - 1.*t5198*t5355 - 1.*t5211*t5359 - 1.*t5219*t5363 - 1.*t5240*t5367 - 1.*t5251*t5371 - 0.0306*(t5237*t5367 + t5227*t5371) + 1.1312*(t5227*t5367 - 1.*t5237*t5371);
}



void p_VectorNav_to_LeftToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
