/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:28 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "J_hip_abduction_right_src.h"

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
  double t2228;
  double t6550;
  double t6539;
  double t6543;
  double t6552;
  double t6521;
  double t6546;
  double t6555;
  double t6556;
  double t6560;
  double t6573;
  double t6575;
  double t6577;
  double t1733;
  double t6532;
  double t6533;
  double t6563;
  double t6566;
  double t6568;
  double t6570;
  double t6594;
  double t6595;
  double t6596;
  double t6598;
  double t6599;
  double t6600;
  double t6651;
  double t6652;
  double t6654;
  double t6664;
  double t6666;
  double t6667;
  double t6658;
  double t6674;
  double t6698;
  double t6699;
  double t6700;
  double t6681;
  double t6682;
  double t6683;
  double t6684;
  t2228 = Sin(var1[3]);
  t6550 = Cos(var1[3]);
  t6539 = Cos(var1[5]);
  t6543 = Sin(var1[4]);
  t6552 = Sin(var1[5]);
  t6521 = Sin(var1[13]);
  t6546 = -1.*t6539*t2228*t6543;
  t6555 = t6550*t6552;
  t6556 = t6546 + t6555;
  t6560 = Cos(var1[13]);
  t6573 = -1.*t6550*t6539;
  t6575 = -1.*t2228*t6543*t6552;
  t6577 = t6573 + t6575;
  t1733 = Cos(var1[4]);
  t6532 = 0.135*t6521;
  t6533 = 0. + t6532;
  t6563 = -1.*t6560;
  t6566 = 1. + t6563;
  t6568 = -0.135*t6566;
  t6570 = 0. + t6568;
  t6594 = t6550*t6539*t6543;
  t6595 = t2228*t6552;
  t6596 = t6594 + t6595;
  t6598 = -1.*t6539*t2228;
  t6599 = t6550*t6543*t6552;
  t6600 = t6598 + t6599;
  t6651 = t6539*t2228;
  t6652 = -1.*t6550*t6543*t6552;
  t6654 = t6651 + t6652;
  t6664 = t6539*t2228*t6543;
  t6666 = -1.*t6550*t6552;
  t6667 = t6664 + t6666;
  t6658 = t6560*t6596;
  t6674 = t6560*t6667;
  t6698 = t6550*t6539;
  t6699 = t2228*t6543*t6552;
  t6700 = t6698 + t6699;
  t6681 = t6560*t1733*t6539;
  t6682 = -1.*t1733*t6521*t6552;
  t6683 = t6681 + t6682;
  t6684 = -0.135*t6683;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=0.049*t1733*t2228 + t6533*t6556 + t6570*t6577 - 0.135*(t6521*t6556 + t6560*t6577);
  p_output1[10]=-0.049*t1733*t6550 + t6533*t6596 + t6570*t6600 - 0.135*(t6521*t6596 + t6560*t6600);
  p_output1[11]=0;
  p_output1[12]=t1733*t6533*t6539*t6550 + 0.049*t6543*t6550 - 0.135*(t1733*t6521*t6539*t6550 + t1733*t6550*t6552*t6560) + t1733*t6550*t6552*t6570;
  p_output1[13]=t1733*t2228*t6533*t6539 + 0.049*t2228*t6543 - 0.135*(t1733*t2228*t6521*t6539 + t1733*t2228*t6552*t6560) + t1733*t2228*t6552*t6570;
  p_output1[14]=0.049*t1733 - 1.*t6533*t6539*t6543 - 0.135*(-1.*t6521*t6539*t6543 - 1.*t6543*t6552*t6560) - 1.*t6543*t6552*t6570;
  p_output1[15]=t6570*t6596 + t6533*t6654 - 0.135*(t6521*t6654 + t6658);
  p_output1[16]=t6533*t6577 + t6570*t6667 - 0.135*(t6521*t6577 + t6674);
  p_output1[17]=-1.*t1733*t6533*t6552 + t1733*t6539*t6570 + t6684;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0.135*t6560*t6596 - 0.135*t6521*t6600 - 0.135*(-1.*t6521*t6600 + t6658);
  p_output1[40]=0.135*t6560*t6667 - 0.135*t6521*t6700 - 0.135*(t6674 - 1.*t6521*t6700);
  p_output1[41]=-0.135*t1733*t6521*t6552 + 0.135*t1733*t6539*t6560 + t6684;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
}



void J_hip_abduction_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
