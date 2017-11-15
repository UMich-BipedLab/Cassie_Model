/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:33:18 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_MultisenseRightCameraFrame_src.h"

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
  double t359;
  double t399;
  double t331;
  double t1656;
  double t2035;
  double t4276;
  double t4807;
  double t4812;
  double t4845;
  double t3989;
  double t4768;
  double t4776;
  double t4852;
  double t4855;
  double t4856;
  double t4777;
  double t4779;
  double t4786;
  t359 = Cos(var1[4]);
  t399 = Sin(var1[3]);
  t331 = Cos(var1[3]);
  t1656 = Sin(var1[4]);
  t2035 = Cos(var1[5]);
  t4276 = Sin(var1[5]);
  t4807 = t331*t2035*t1656;
  t4812 = t399*t4276;
  t4845 = t4807 + t4812;
  t3989 = -1.*t2035*t399;
  t4768 = t331*t1656*t4276;
  t4776 = t3989 + t4768;
  t4852 = t2035*t399*t1656;
  t4855 = -1.*t331*t4276;
  t4856 = t4852 + t4855;
  t4777 = t331*t2035;
  t4779 = t399*t1656*t4276;
  t4786 = t4777 + t4779;
  p_output1[0]=t331*t359;
  p_output1[1]=t359*t399;
  p_output1[2]=-1.*t1656;
  p_output1[3]=0;
  p_output1[4]=t4776;
  p_output1[5]=t4786;
  p_output1[6]=t359*t4276;
  p_output1[7]=0;
  p_output1[8]=t4845;
  p_output1[9]=t4856;
  p_output1[10]=t2035*t359;
  p_output1[11]=0;
  p_output1[12]=0.052*t331*t359 - 0.035*t4776 + 0.25*t4845 + var1[0];
  p_output1[13]=0.052*t359*t399 - 0.035*t4786 + 0.25*t4856 + var1[1];
  p_output1[14]=-0.052*t1656 + 0.25*t2035*t359 - 0.035*t359*t4276 + var1[2];
  p_output1[15]=1.;
}



void H_MultisenseRightCameraFrame_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
