/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:16:35 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_MultisenseMagnetometerFrame_src.h"

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
  double t2575;
  double t5642;
  double t4859;
  double t2564;
  double t5682;
  double t5719;
  double t5733;
  double t5738;
  double t5739;
  double t5740;
  double t5742;
  double t5744;
  t2575 = Cos(var1[5]);
  t5642 = Sin(var1[3]);
  t4859 = Sin(var1[4]);
  t2564 = Cos(var1[3]);
  t5682 = Sin(var1[5]);
  t5719 = Cos(var1[4]);
  t5733 = -1.*t2575*t5642;
  t5738 = t2564*t4859*t5682;
  t5739 = t5733 + t5738;
  t5740 = t2564*t2575;
  t5742 = t5642*t4859*t5682;
  t5744 = t5740 + t5742;
  p_output1[0]=-1.*t2564*t2575*t4859 - 1.*t5642*t5682;
  p_output1[1]=-1.*t2575*t4859*t5642 + t2564*t5682;
  p_output1[2]=-1.*t2575*t5719;
  p_output1[3]=0;
  p_output1[4]=t5739;
  p_output1[5]=t5744;
  p_output1[6]=t5682*t5719;
  p_output1[7]=0;
  p_output1[8]=t2564*t5719;
  p_output1[9]=t5642*t5719;
  p_output1[10]=-1.*t4859;
  p_output1[11]=0;
  p_output1[12]=0.24925*(t2564*t2575*t4859 + t5642*t5682) + 0.047*t2564*t5719 + 0.0302*t5739 + var1[0];
  p_output1[13]=0.24925*(t2575*t4859*t5642 - 1.*t2564*t5682) + 0.047*t5642*t5719 + 0.0302*t5744 + var1[1];
  p_output1[14]=-0.047*t4859 + 0.24925*t2575*t5719 + 0.0302*t5682*t5719 + var1[2];
  p_output1[15]=1.;
}



void H_MultisenseMagnetometerFrame_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
