/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 11:09:07 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "J_MultisenseGyroscopeFrame_src.h"

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
  double t291;
  double t4583;
  double t1501;
  double t2662;
  double t4677;
  double t261;
  double t5803;
  double t5805;
  double t5806;
  double t5791;
  double t5792;
  double t5797;
  t291 = Sin(var1[3]);
  t4583 = Cos(var1[3]);
  t1501 = Cos(var1[5]);
  t2662 = Sin(var1[4]);
  t4677 = Sin(var1[5]);
  t261 = Cos(var1[4]);
  t5803 = t4583*t1501*t2662;
  t5805 = t291*t4677;
  t5806 = t5803 + t5805;
  t5791 = -1.*t4583*t1501;
  t5792 = -1.*t291*t2662*t4677;
  t5797 = t5791 + t5792;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=-0.047*t261*t291 + 0.25125*(-1.*t1501*t2662*t291 + t4583*t4677) + 0.0388*t5797;
  p_output1[10]=0.047*t261*t4583 + 0.0388*(-1.*t1501*t291 + t2662*t4583*t4677) + 0.25125*t5806;
  p_output1[11]=0;
  p_output1[12]=0.25125*t1501*t261*t4583 - 0.047*t2662*t4583 + 0.0388*t261*t4583*t4677;
  p_output1[13]=0.25125*t1501*t261*t291 - 0.047*t2662*t291 + 0.0388*t261*t291*t4677;
  p_output1[14]=-0.047*t261 - 0.25125*t1501*t2662 - 0.0388*t2662*t4677;
  p_output1[15]=0.25125*(t1501*t291 - 1.*t2662*t4583*t4677) + 0.0388*t5806;
  p_output1[16]=0.0388*(t1501*t2662*t291 - 1.*t4583*t4677) + 0.25125*t5797;
  p_output1[17]=0.0388*t1501*t261 - 0.25125*t261*t4677;
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
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
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



void J_MultisenseGyroscopeFrame_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
