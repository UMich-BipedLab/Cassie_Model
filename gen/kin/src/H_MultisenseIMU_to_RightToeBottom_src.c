/*
 * Automatically Generated from Mathematica.
 * Mon 26 Feb 2018 15:42:37 GMT-05:00
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
  double t312;
  double t410;
  double t1597;
  double t1115;
  double t5224;
  double t5255;
  double t5210;
  double t5285;
  double t5303;
  double t5306;
  double t5245;
  double t5264;
  double t5266;
  double t5314;
  double t5204;
  double t5323;
  double t5324;
  double t5326;
  double t5269;
  double t5315;
  double t5318;
  double t5327;
  double t5177;
  double t5338;
  double t5340;
  double t5344;
  double t5320;
  double t5331;
  double t5334;
  double t5345;
  double t5164;
  double t5368;
  double t5372;
  double t5373;
  double t5335;
  double t5357;
  double t5360;
  double t5376;
  double t5400;
  double t5402;
  double t5403;
  double t5393;
  double t5396;
  double t5397;
  double t5414;
  double t5415;
  double t5417;
  double t5399;
  double t5406;
  double t5409;
  double t5425;
  double t5427;
  double t5429;
  double t5413;
  double t5418;
  double t5421;
  double t5434;
  double t5435;
  double t5436;
  double t5422;
  double t5430;
  double t5431;
  double t5458;
  double t5459;
  double t5461;
  double t5451;
  double t5452;
  double t5453;
  double t5468;
  double t5469;
  double t5471;
  double t5455;
  double t5462;
  double t5463;
  double t5478;
  double t5479;
  double t5481;
  double t5465;
  double t5472;
  double t5473;
  double t5366;
  double t5379;
  double t5381;
  double t5384;
  double t5387;
  double t5388;
  double t5433;
  double t5437;
  double t5438;
  double t5442;
  double t5443;
  double t5445;
  double t5475;
  double t5482;
  double t5483;
  double t5488;
  double t5489;
  double t5491;
  double t5512;
  double t5513;
  double t5522;
  double t5523;
  double t5532;
  double t5533;
  double t5542;
  double t5543;
  double t5552;
  double t5553;
  double t5506;
  double t5507;
  double t5508;
  double t5509;
  double t5510;
  double t5514;
  double t5515;
  double t5516;
  double t5518;
  double t5519;
  double t5520;
  double t5524;
  double t5525;
  double t5526;
  double t5528;
  double t5529;
  double t5530;
  double t5534;
  double t5535;
  double t5536;
  double t5538;
  double t5539;
  double t5540;
  double t5544;
  double t5545;
  double t5546;
  double t5548;
  double t5549;
  double t5550;
  double t5554;
  double t5555;
  double t5556;
  double t5558;
  double t5559;
  double t5560;
  t312 = Cos(var1[8]);
  t410 = Sin(var1[7]);
  t1597 = Sin(var1[8]);
  t1115 = Cos(var1[7]);
  t5224 = Cos(var1[9]);
  t5255 = Sin(var1[9]);
  t5210 = Cos(var1[10]);
  t5285 = t1115*t5224;
  t5303 = -1.*t410*t1597*t5255;
  t5306 = t5285 + t5303;
  t5245 = t5224*t410*t1597;
  t5264 = t1115*t5255;
  t5266 = t5245 + t5264;
  t5314 = Sin(var1[10]);
  t5204 = Cos(var1[11]);
  t5323 = t5210*t5306;
  t5324 = -1.*t5266*t5314;
  t5326 = t5323 + t5324;
  t5269 = t5210*t5266;
  t5315 = t5306*t5314;
  t5318 = t5269 + t5315;
  t5327 = Sin(var1[11]);
  t5177 = Cos(var1[12]);
  t5338 = t5204*t5326;
  t5340 = -1.*t5318*t5327;
  t5344 = t5338 + t5340;
  t5320 = t5204*t5318;
  t5331 = t5326*t5327;
  t5334 = t5320 + t5331;
  t5345 = Sin(var1[12]);
  t5164 = Cos(var1[13]);
  t5368 = t5177*t5344;
  t5372 = -1.*t5334*t5345;
  t5373 = t5368 + t5372;
  t5335 = t5177*t5334;
  t5357 = t5344*t5345;
  t5360 = t5335 + t5357;
  t5376 = Sin(var1[13]);
  t5400 = -1.*t5224*t410;
  t5402 = -1.*t1115*t1597*t5255;
  t5403 = t5400 + t5402;
  t5393 = t1115*t5224*t1597;
  t5396 = -1.*t410*t5255;
  t5397 = t5393 + t5396;
  t5414 = t5210*t5403;
  t5415 = -1.*t5397*t5314;
  t5417 = t5414 + t5415;
  t5399 = t5210*t5397;
  t5406 = t5403*t5314;
  t5409 = t5399 + t5406;
  t5425 = t5204*t5417;
  t5427 = -1.*t5409*t5327;
  t5429 = t5425 + t5427;
  t5413 = t5204*t5409;
  t5418 = t5417*t5327;
  t5421 = t5413 + t5418;
  t5434 = t5177*t5429;
  t5435 = -1.*t5421*t5345;
  t5436 = t5434 + t5435;
  t5422 = t5177*t5421;
  t5430 = t5429*t5345;
  t5431 = t5422 + t5430;
  t5458 = -1.*t312*t5210*t5255;
  t5459 = -1.*t312*t5224*t5314;
  t5461 = t5458 + t5459;
  t5451 = t312*t5224*t5210;
  t5452 = -1.*t312*t5255*t5314;
  t5453 = t5451 + t5452;
  t5468 = t5204*t5461;
  t5469 = -1.*t5453*t5327;
  t5471 = t5468 + t5469;
  t5455 = t5204*t5453;
  t5462 = t5461*t5327;
  t5463 = t5455 + t5462;
  t5478 = t5177*t5471;
  t5479 = -1.*t5463*t5345;
  t5481 = t5478 + t5479;
  t5465 = t5177*t5463;
  t5472 = t5471*t5345;
  t5473 = t5465 + t5472;
  t5366 = t5164*t5360;
  t5379 = t5373*t5376;
  t5381 = t5366 + t5379;
  t5384 = t5164*t5373;
  t5387 = -1.*t5360*t5376;
  t5388 = t5384 + t5387;
  t5433 = t5164*t5431;
  t5437 = t5436*t5376;
  t5438 = t5433 + t5437;
  t5442 = t5164*t5436;
  t5443 = -1.*t5431*t5376;
  t5445 = t5442 + t5443;
  t5475 = t5164*t5473;
  t5482 = t5481*t5376;
  t5483 = t5475 + t5482;
  t5488 = t5164*t5481;
  t5489 = -1.*t5473*t5376;
  t5491 = t5488 + t5489;
  t5512 = -1.*t5224;
  t5513 = 1. + t5512;
  t5522 = -1.*t5210;
  t5523 = 1. + t5522;
  t5532 = -1.*t5204;
  t5533 = 1. + t5532;
  t5542 = -1.*t5177;
  t5543 = 1. + t5542;
  t5552 = -1.*t5164;
  t5553 = 1. + t5552;
  t5506 = -1.*t312;
  t5507 = 1. + t5506;
  t5508 = -0.135*t5507;
  t5509 = 0.049*t1597;
  t5510 = 0. + t5508 + t5509;
  t5514 = -0.049*t5513;
  t5515 = -0.09*t5255;
  t5516 = 0. + t5514 + t5515;
  t5518 = -0.09*t5513;
  t5519 = 0.049*t5255;
  t5520 = 0. + t5518 + t5519;
  t5524 = -0.049*t5523;
  t5525 = -0.21*t5314;
  t5526 = 0. + t5524 + t5525;
  t5528 = -0.21*t5523;
  t5529 = 0.049*t5314;
  t5530 = 0. + t5528 + t5529;
  t5534 = -0.0016*t5533;
  t5535 = -0.2707*t5327;
  t5536 = 0. + t5534 + t5535;
  t5538 = -0.2707*t5533;
  t5539 = 0.0016*t5327;
  t5540 = 0. + t5538 + t5539;
  t5544 = 0.0184*t5543;
  t5545 = -0.7055*t5345;
  t5546 = 0. + t5544 + t5545;
  t5548 = -0.7055*t5543;
  t5549 = -0.0184*t5345;
  t5550 = 0. + t5548 + t5549;
  t5554 = -0.0216*t5553;
  t5555 = -1.1135*t5376;
  t5556 = 0. + t5554 + t5555;
  t5558 = -1.1135*t5553;
  t5559 = 0.0216*t5376;
  t5560 = 0. + t5558 + t5559;
  p_output1[0]=0. + t312*t410;
  p_output1[1]=0. - 1.*t1115*t312;
  p_output1[2]=0. + t1597;
  p_output1[3]=0.;
  p_output1[4]=0. - 0.642788*t5381 - 0.766044*t5388;
  p_output1[5]=0. + 0.642788*t5438 + 0.766044*t5445;
  p_output1[6]=0. + 0.642788*t5483 + 0.766044*t5491;
  p_output1[7]=0.;
  p_output1[8]=0. + 0.766044*t5381 - 0.642788*t5388;
  p_output1[9]=0. - 0.766044*t5438 + 0.642788*t5445;
  p_output1[10]=0. - 0.766044*t5483 + 0.642788*t5491;
  p_output1[11]=0.;
  p_output1[12]=0.24925 - 0.135*t410 + 0.1305*t312*t410 - 0.0306*t5381 + 1.1312*t5388 - 1.*t410*t5510 - 1.*t1597*t410*t5516 - 1.*t1115*t5520 - 1.*t5266*t5526 - 1.*t5306*t5530 - 1.*t5318*t5536 - 1.*t5326*t5540 - 1.*t5334*t5546 - 1.*t5344*t5550 - 1.*t5360*t5556 - 1.*t5373*t5560;
  p_output1[13]=-0.0302 - 0.135*(1. - 1.*t1115) - 0.1305*t1115*t312 + 0.0306*t5438 - 1.1312*t5445 + t1115*t5510 + t1115*t1597*t5516 - 1.*t410*t5520 + t5397*t5526 + t5403*t5530 + t5409*t5536 + t5417*t5540 + t5421*t5546 + t5429*t5550 + t5431*t5556 + t5436*t5560;
  p_output1[14]=-0.047 - 0.004500000000000004*t1597 + 0.0306*t5483 - 1.1312*t5491 - 0.049*t5507 + t312*t5516 + t312*t5224*t5526 - 1.*t312*t5255*t5530 + t5453*t5536 + t5461*t5540 + t5463*t5546 + t5471*t5550 + t5473*t5556 + t5481*t5560;
  p_output1[15]=1.;
}



void H_MultisenseIMU_to_RightToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
