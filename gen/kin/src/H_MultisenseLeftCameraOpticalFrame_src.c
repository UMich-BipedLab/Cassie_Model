/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:34:44 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_MultisenseLeftCameraOpticalFrame_src.h"

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
  double t3293;
  double t1935;
  double t2203;
  double t3523;
  double t4153;
  double t4380;
  t3293 = Cos(var1[3]);
  t1935 = Cos(var1[5]);
  t2203 = Sin(var1[3]);
  t3523 = Sin(var1[4]);
  t4153 = Sin(var1[5]);
  t4380 = Cos(var1[4]);
  p_output1[0]=t1935*t2203 - 1.*t3293*t3523*t4153;
  p_output1[1]=-1.*t1935*t3293 - 1.*t2203*t3523*t4153;
  p_output1[2]=-1.*t4153*t4380;
  p_output1[3]=0;
  p_output1[4]=-1.*t1935*t3293*t3523 - 1.*t2203*t4153;
  p_output1[5]=-1.*t1935*t2203*t3523 + t3293*t4153;
  p_output1[6]=-1.*t1935*t4380;
  p_output1[7]=0;
  p_output1[8]=t3293*t4380;
  p_output1[9]=t2203*t4380;
  p_output1[10]=-1.*t3523;
  p_output1[11]=0;
  p_output1[12]=0.25*(t1935*t3293*t3523 + t2203*t4153) + 0.035*(-1.*t1935*t2203 + t3293*t3523*t4153) + 0.052*t3293*t4380 + var1[0];
  p_output1[13]=0.25*(t1935*t2203*t3523 - 1.*t3293*t4153) + 0.035*(t1935*t3293 + t2203*t3523*t4153) + 0.052*t2203*t4380 + var1[1];
  p_output1[14]=-0.052*t3523 + 0.25*t1935*t4380 + 0.035*t4153*t4380 + var1[2];
  p_output1[15]=1.;
}



void H_MultisenseLeftCameraOpticalFrame_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
