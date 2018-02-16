/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:15:30 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_hip_abduction_right_src.h"

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
  double t6358;
  double t1869;
  double t6595;
  double t6578;
  double t6602;
  double t6605;
  double t6600;
  double t6618;
  double t6603;
  double t6612;
  double t6613;
  double t6620;
  double t6621;
  double t6625;
  double t6629;
  double t6630;
  double t6631;
  double t6634;
  double t6635;
  double t6643;
  double t6616;
  double t6626;
  double t6627;
  double t6674;
  double t6677;
  double t6682;
  double t6683;
  double t6685;
  double t6688;
  double t6632;
  double t6644;
  double t6646;
  double t6647;
  double t6648;
  double t6650;
  t6358 = Cos(var1[4]);
  t1869 = Cos(var1[3]);
  t6595 = Sin(var1[4]);
  t6578 = Sin(var1[3]);
  t6602 = Cos(var1[5]);
  t6605 = Sin(var1[5]);
  t6600 = Sin(var1[13]);
  t6618 = Cos(var1[13]);
  t6603 = t1869*t6602*t6595;
  t6612 = t6578*t6605;
  t6613 = t6603 + t6612;
  t6620 = -1.*t6602*t6578;
  t6621 = t1869*t6595*t6605;
  t6625 = t6620 + t6621;
  t6629 = t6602*t6578*t6595;
  t6630 = -1.*t1869*t6605;
  t6631 = t6629 + t6630;
  t6634 = t1869*t6602;
  t6635 = t6578*t6595*t6605;
  t6643 = t6634 + t6635;
  t6616 = t6600*t6613;
  t6626 = t6618*t6625;
  t6627 = t6616 + t6626;
  t6674 = 0.135*t6600;
  t6677 = 0. + t6674;
  t6682 = -1.*t6618;
  t6683 = 1. + t6682;
  t6685 = -0.135*t6683;
  t6688 = 0. + t6685;
  t6632 = t6600*t6631;
  t6644 = t6618*t6643;
  t6646 = t6632 + t6644;
  t6647 = t6358*t6602*t6600;
  t6648 = t6618*t6358*t6605;
  t6650 = t6647 + t6648;
  p_output1[0]=t1869*t6358;
  p_output1[1]=t6358*t6578;
  p_output1[2]=-1.*t6595;
  p_output1[3]=0.;
  p_output1[4]=t6627;
  p_output1[5]=t6646;
  p_output1[6]=t6650;
  p_output1[7]=0.;
  p_output1[8]=t6613*t6618 - 1.*t6600*t6625;
  p_output1[9]=t6618*t6631 - 1.*t6600*t6643;
  p_output1[10]=-1.*t6358*t6600*t6605 + t6358*t6602*t6618;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.049*t1869*t6358 - 0.135*t6627 + t6613*t6677 + t6625*t6688 + var1[0];
  p_output1[13]=0. - 0.049*t6358*t6578 - 0.135*t6646 + t6631*t6677 + t6643*t6688 + var1[1];
  p_output1[14]=0. + 0.049*t6595 - 0.135*t6650 + t6358*t6602*t6677 + t6358*t6605*t6688 + var1[2];
  p_output1[15]=1.;
}



void H_hip_abduction_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
