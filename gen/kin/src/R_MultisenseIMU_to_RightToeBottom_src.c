/*
 * Automatically Generated from Mathematica.
 * Mon 26 Feb 2018 15:42:38 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_MultisenseIMU_to_RightToeBottom_src.h"

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
  double t113;
  double t804;
  double t1542;
  double t1130;
  double t5384;
  double t5418;
  double t5383;
  double t5445;
  double t5449;
  double t5451;
  double t5403;
  double t5429;
  double t5436;
  double t5471;
  double t5338;
  double t5492;
  double t5496;
  double t5498;
  double t5438;
  double t5478;
  double t5483;
  double t5499;
  double t5323;
  double t5505;
  double t5509;
  double t5515;
  double t5485;
  double t5501;
  double t5503;
  double t5527;
  double t2161;
  double t5541;
  double t5545;
  double t5548;
  double t5504;
  double t5529;
  double t5535;
  double t5549;
  double t5574;
  double t5580;
  double t5584;
  double t5567;
  double t5569;
  double t5570;
  double t5594;
  double t5596;
  double t5600;
  double t5573;
  double t5586;
  double t5590;
  double t5609;
  double t5610;
  double t5612;
  double t5592;
  double t5602;
  double t5604;
  double t5620;
  double t5622;
  double t5623;
  double t5606;
  double t5614;
  double t5616;
  double t5637;
  double t5638;
  double t5639;
  double t5633;
  double t5634;
  double t5635;
  double t5643;
  double t5644;
  double t5645;
  double t5636;
  double t5640;
  double t5641;
  double t5649;
  double t5650;
  double t5651;
  double t5642;
  double t5646;
  double t5647;
  double t5537;
  double t5555;
  double t5557;
  double t5561;
  double t5563;
  double t5564;
  double t5619;
  double t5624;
  double t5626;
  double t5628;
  double t5629;
  double t5630;
  double t5648;
  double t5652;
  double t5653;
  double t5655;
  double t5656;
  double t5657;
  t113 = Cos(var1[8]);
  t804 = Sin(var1[7]);
  t1542 = Sin(var1[8]);
  t1130 = Cos(var1[7]);
  t5384 = Cos(var1[9]);
  t5418 = Sin(var1[9]);
  t5383 = Cos(var1[10]);
  t5445 = t1130*t5384;
  t5449 = -1.*t804*t1542*t5418;
  t5451 = t5445 + t5449;
  t5403 = t5384*t804*t1542;
  t5429 = t1130*t5418;
  t5436 = t5403 + t5429;
  t5471 = Sin(var1[10]);
  t5338 = Cos(var1[11]);
  t5492 = t5383*t5451;
  t5496 = -1.*t5436*t5471;
  t5498 = t5492 + t5496;
  t5438 = t5383*t5436;
  t5478 = t5451*t5471;
  t5483 = t5438 + t5478;
  t5499 = Sin(var1[11]);
  t5323 = Cos(var1[12]);
  t5505 = t5338*t5498;
  t5509 = -1.*t5483*t5499;
  t5515 = t5505 + t5509;
  t5485 = t5338*t5483;
  t5501 = t5498*t5499;
  t5503 = t5485 + t5501;
  t5527 = Sin(var1[12]);
  t2161 = Cos(var1[13]);
  t5541 = t5323*t5515;
  t5545 = -1.*t5503*t5527;
  t5548 = t5541 + t5545;
  t5504 = t5323*t5503;
  t5529 = t5515*t5527;
  t5535 = t5504 + t5529;
  t5549 = Sin(var1[13]);
  t5574 = -1.*t5384*t804;
  t5580 = -1.*t1130*t1542*t5418;
  t5584 = t5574 + t5580;
  t5567 = t1130*t5384*t1542;
  t5569 = -1.*t804*t5418;
  t5570 = t5567 + t5569;
  t5594 = t5383*t5584;
  t5596 = -1.*t5570*t5471;
  t5600 = t5594 + t5596;
  t5573 = t5383*t5570;
  t5586 = t5584*t5471;
  t5590 = t5573 + t5586;
  t5609 = t5338*t5600;
  t5610 = -1.*t5590*t5499;
  t5612 = t5609 + t5610;
  t5592 = t5338*t5590;
  t5602 = t5600*t5499;
  t5604 = t5592 + t5602;
  t5620 = t5323*t5612;
  t5622 = -1.*t5604*t5527;
  t5623 = t5620 + t5622;
  t5606 = t5323*t5604;
  t5614 = t5612*t5527;
  t5616 = t5606 + t5614;
  t5637 = -1.*t113*t5383*t5418;
  t5638 = -1.*t113*t5384*t5471;
  t5639 = t5637 + t5638;
  t5633 = t113*t5384*t5383;
  t5634 = -1.*t113*t5418*t5471;
  t5635 = t5633 + t5634;
  t5643 = t5338*t5639;
  t5644 = -1.*t5635*t5499;
  t5645 = t5643 + t5644;
  t5636 = t5338*t5635;
  t5640 = t5639*t5499;
  t5641 = t5636 + t5640;
  t5649 = t5323*t5645;
  t5650 = -1.*t5641*t5527;
  t5651 = t5649 + t5650;
  t5642 = t5323*t5641;
  t5646 = t5645*t5527;
  t5647 = t5642 + t5646;
  t5537 = t2161*t5535;
  t5555 = t5548*t5549;
  t5557 = t5537 + t5555;
  t5561 = t2161*t5548;
  t5563 = -1.*t5535*t5549;
  t5564 = t5561 + t5563;
  t5619 = t2161*t5616;
  t5624 = t5623*t5549;
  t5626 = t5619 + t5624;
  t5628 = t2161*t5623;
  t5629 = -1.*t5616*t5549;
  t5630 = t5628 + t5629;
  t5648 = t2161*t5647;
  t5652 = t5651*t5549;
  t5653 = t5648 + t5652;
  t5655 = t2161*t5651;
  t5656 = -1.*t5647*t5549;
  t5657 = t5655 + t5656;
  p_output1[0]=0. + t113*t804;
  p_output1[1]=0. - 1.*t113*t1130;
  p_output1[2]=0. + t1542;
  p_output1[3]=0. - 0.642788*t5557 - 0.766044*t5564;
  p_output1[4]=0. + 0.642788*t5626 + 0.766044*t5630;
  p_output1[5]=0. + 0.642788*t5653 + 0.766044*t5657;
  p_output1[6]=0. + 0.766044*t5557 - 0.642788*t5564;
  p_output1[7]=0. - 0.766044*t5626 + 0.642788*t5630;
  p_output1[8]=0. - 0.766044*t5653 + 0.642788*t5657;
}



void R_MultisenseIMU_to_RightToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
