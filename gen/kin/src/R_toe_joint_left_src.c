/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:11:24 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_toe_joint_left_src.h"

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
  double t991;
  double t5122;
  double t5267;
  double t5127;
  double t5269;
  double t5099;
  double t5359;
  double t5360;
  double t5365;
  double t5260;
  double t5341;
  double t5356;
  double t5371;
  double t889;
  double t5382;
  double t5387;
  double t5390;
  double t1118;
  double t1537;
  double t2539;
  double t5357;
  double t5372;
  double t5375;
  double t5376;
  double t5377;
  double t5380;
  double t5391;
  double t5408;
  double t5381;
  double t5396;
  double t5398;
  double t884;
  double t5409;
  double t5420;
  double t5423;
  double t5435;
  double t5406;
  double t5427;
  double t5430;
  double t390;
  double t5440;
  double t5443;
  double t5451;
  double t378;
  double t5478;
  double t5480;
  double t5484;
  double t5470;
  double t5472;
  double t5474;
  double t5501;
  double t5502;
  double t5503;
  double t5469;
  double t5475;
  double t5485;
  double t5490;
  double t5493;
  double t5498;
  double t5500;
  double t5505;
  double t5507;
  double t5513;
  double t5514;
  double t5518;
  double t5460;
  double t5509;
  double t5520;
  double t5523;
  double t5525;
  double t5526;
  double t5528;
  double t5556;
  double t5560;
  double t5561;
  double t5545;
  double t5546;
  double t5548;
  double t5550;
  double t5551;
  double t5552;
  double t5554;
  double t5565;
  double t5566;
  double t5569;
  double t5571;
  double t5574;
  double t5568;
  double t5576;
  double t5577;
  double t5581;
  double t5584;
  double t5585;
  double t5432;
  double t5454;
  double t5457;
  double t5461;
  double t5462;
  double t5465;
  double t5524;
  double t5529;
  double t5531;
  double t5534;
  double t5536;
  double t5538;
  double t5580;
  double t5586;
  double t5587;
  double t5589;
  double t5590;
  double t5592;
  t991 = Cos(var1[3]);
  t5122 = Cos(var1[5]);
  t5267 = Sin(var1[4]);
  t5127 = Sin(var1[3]);
  t5269 = Sin(var1[5]);
  t5099 = Cos(var1[6]);
  t5359 = t991*t5122*t5267;
  t5360 = t5127*t5269;
  t5365 = t5359 + t5360;
  t5260 = -1.*t5122*t5127;
  t5341 = t991*t5267*t5269;
  t5356 = t5260 + t5341;
  t5371 = Sin(var1[6]);
  t889 = Cos(var1[8]);
  t5382 = t5099*t5365;
  t5387 = -1.*t5356*t5371;
  t5390 = t5382 + t5387;
  t1118 = Cos(var1[4]);
  t1537 = Cos(var1[7]);
  t2539 = t991*t1118*t1537;
  t5357 = t5099*t5356;
  t5372 = t5365*t5371;
  t5375 = t5357 + t5372;
  t5376 = Sin(var1[7]);
  t5377 = t5375*t5376;
  t5380 = t2539 + t5377;
  t5391 = Sin(var1[8]);
  t5408 = Cos(var1[9]);
  t5381 = t889*t5380;
  t5396 = t5390*t5391;
  t5398 = t5381 + t5396;
  t884 = Sin(var1[9]);
  t5409 = t889*t5390;
  t5420 = -1.*t5380*t5391;
  t5423 = t5409 + t5420;
  t5435 = Cos(var1[10]);
  t5406 = -1.*t884*t5398;
  t5427 = t5408*t5423;
  t5430 = t5406 + t5427;
  t390 = Sin(var1[10]);
  t5440 = t5408*t5398;
  t5443 = t884*t5423;
  t5451 = t5440 + t5443;
  t378 = Sin(var1[11]);
  t5478 = t5122*t5127*t5267;
  t5480 = -1.*t991*t5269;
  t5484 = t5478 + t5480;
  t5470 = t991*t5122;
  t5472 = t5127*t5267*t5269;
  t5474 = t5470 + t5472;
  t5501 = t5099*t5484;
  t5502 = -1.*t5474*t5371;
  t5503 = t5501 + t5502;
  t5469 = t1118*t1537*t5127;
  t5475 = t5099*t5474;
  t5485 = t5484*t5371;
  t5490 = t5475 + t5485;
  t5493 = t5490*t5376;
  t5498 = t5469 + t5493;
  t5500 = t889*t5498;
  t5505 = t5503*t5391;
  t5507 = t5500 + t5505;
  t5513 = t889*t5503;
  t5514 = -1.*t5498*t5391;
  t5518 = t5513 + t5514;
  t5460 = Cos(var1[11]);
  t5509 = -1.*t884*t5507;
  t5520 = t5408*t5518;
  t5523 = t5509 + t5520;
  t5525 = t5408*t5507;
  t5526 = t884*t5518;
  t5528 = t5525 + t5526;
  t5556 = t1118*t5122*t5099;
  t5560 = -1.*t1118*t5269*t5371;
  t5561 = t5556 + t5560;
  t5545 = -1.*t1537*t5267;
  t5546 = t1118*t5099*t5269;
  t5548 = t1118*t5122*t5371;
  t5550 = t5546 + t5548;
  t5551 = t5550*t5376;
  t5552 = t5545 + t5551;
  t5554 = t889*t5552;
  t5565 = t5561*t5391;
  t5566 = t5554 + t5565;
  t5569 = t889*t5561;
  t5571 = -1.*t5552*t5391;
  t5574 = t5569 + t5571;
  t5568 = -1.*t884*t5566;
  t5576 = t5408*t5574;
  t5577 = t5568 + t5576;
  t5581 = t5408*t5566;
  t5584 = t884*t5574;
  t5585 = t5581 + t5584;
  t5432 = t390*t5430;
  t5454 = t5435*t5451;
  t5457 = t5432 + t5454;
  t5461 = t5435*t5430;
  t5462 = -1.*t390*t5451;
  t5465 = t5461 + t5462;
  t5524 = t390*t5523;
  t5529 = t5435*t5528;
  t5531 = t5524 + t5529;
  t5534 = t5435*t5523;
  t5536 = -1.*t390*t5528;
  t5538 = t5534 + t5536;
  t5580 = t390*t5577;
  t5586 = t5435*t5585;
  t5587 = t5580 + t5586;
  t5589 = t5435*t5577;
  t5590 = -1.*t390*t5585;
  t5592 = t5589 + t5590;
  p_output1[0]=t378*t5457 - 1.*t5460*t5465;
  p_output1[1]=t378*t5531 - 1.*t5460*t5538;
  p_output1[2]=t378*t5587 - 1.*t5460*t5592;
  p_output1[3]=t5457*t5460 + t378*t5465;
  p_output1[4]=t5460*t5531 + t378*t5538;
  p_output1[5]=t5460*t5587 + t378*t5592;
  p_output1[6]=-1.*t1537*t5375 + t1118*t5376*t991;
  p_output1[7]=t1118*t5127*t5376 - 1.*t1537*t5490;
  p_output1[8]=-1.*t5267*t5376 - 1.*t1537*t5550;
}



void R_toe_joint_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
