/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:30 GMT-05:00
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
  double t2568;
  double t154;
  double t6603;
  double t6586;
  double t6615;
  double t6621;
  double t6614;
  double t6633;
  double t6616;
  double t6622;
  double t6626;
  double t6635;
  double t6636;
  double t6639;
  double t6643;
  double t6644;
  double t6646;
  double t6648;
  double t6649;
  double t6650;
  double t6631;
  double t6640;
  double t6642;
  double t6683;
  double t6685;
  double t6691;
  double t6693;
  double t6694;
  double t6696;
  double t6647;
  double t6651;
  double t6654;
  double t6656;
  double t6659;
  double t6663;
  t2568 = Cos(var1[4]);
  t154 = Cos(var1[3]);
  t6603 = Sin(var1[4]);
  t6586 = Sin(var1[3]);
  t6615 = Cos(var1[5]);
  t6621 = Sin(var1[5]);
  t6614 = Sin(var1[13]);
  t6633 = Cos(var1[13]);
  t6616 = t154*t6615*t6603;
  t6622 = t6586*t6621;
  t6626 = t6616 + t6622;
  t6635 = -1.*t6615*t6586;
  t6636 = t154*t6603*t6621;
  t6639 = t6635 + t6636;
  t6643 = t6615*t6586*t6603;
  t6644 = -1.*t154*t6621;
  t6646 = t6643 + t6644;
  t6648 = t154*t6615;
  t6649 = t6586*t6603*t6621;
  t6650 = t6648 + t6649;
  t6631 = t6614*t6626;
  t6640 = t6633*t6639;
  t6642 = t6631 + t6640;
  t6683 = 0.135*t6614;
  t6685 = 0. + t6683;
  t6691 = -1.*t6633;
  t6693 = 1. + t6691;
  t6694 = -0.135*t6693;
  t6696 = 0. + t6694;
  t6647 = t6614*t6646;
  t6651 = t6633*t6650;
  t6654 = t6647 + t6651;
  t6656 = t2568*t6615*t6614;
  t6659 = t6633*t2568*t6621;
  t6663 = t6656 + t6659;
  p_output1[0]=t154*t2568;
  p_output1[1]=t2568*t6586;
  p_output1[2]=-1.*t6603;
  p_output1[3]=0.;
  p_output1[4]=t6642;
  p_output1[5]=t6654;
  p_output1[6]=t6663;
  p_output1[7]=0.;
  p_output1[8]=t6626*t6633 - 1.*t6614*t6639;
  p_output1[9]=t6633*t6646 - 1.*t6614*t6650;
  p_output1[10]=-1.*t2568*t6614*t6621 + t2568*t6615*t6633;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.049*t154*t2568 - 0.135*t6642 + t6626*t6685 + t6639*t6696 + var1[0];
  p_output1[13]=0. - 0.049*t2568*t6586 - 0.135*t6654 + t6646*t6685 + t6650*t6696 + var1[1];
  p_output1[14]=0. + 0.049*t6603 - 0.135*t6663 + t2568*t6615*t6685 + t2568*t6621*t6696 + var1[2];
  p_output1[15]=1.;
}



void H_hip_abduction_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
