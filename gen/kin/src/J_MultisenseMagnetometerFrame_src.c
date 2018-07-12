/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:34:56 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "J_MultisenseMagnetometerFrame_src.h"

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
  double t402;
  double t2114;
  double t1942;
  double t2021;
  double t2399;
  double t208;
  double t5287;
  double t5290;
  double t5308;
  double t5225;
  double t5266;
  double t5268;
  t402 = Sin(var1[3]);
  t2114 = Cos(var1[3]);
  t1942 = Cos(var1[5]);
  t2021 = Sin(var1[4]);
  t2399 = Sin(var1[5]);
  t208 = Cos(var1[4]);
  t5287 = t2114*t1942*t2021;
  t5290 = t402*t2399;
  t5308 = t5287 + t5290;
  t5225 = -1.*t2114*t1942;
  t5266 = -1.*t402*t2021*t2399;
  t5268 = t5225 + t5266;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=-0.047*t208*t402 + 0.24925*(t2114*t2399 - 1.*t1942*t2021*t402) + 0.0302*t5268;
  p_output1[10]=0.047*t208*t2114 + 0.0302*(t2021*t2114*t2399 - 1.*t1942*t402) + 0.24925*t5308;
  p_output1[11]=0;
  p_output1[12]=-0.047*t2021*t2114 + 0.24925*t1942*t208*t2114 + 0.0302*t208*t2114*t2399;
  p_output1[13]=-0.047*t2021*t402 + 0.24925*t1942*t208*t402 + 0.0302*t208*t2399*t402;
  p_output1[14]=-0.24925*t1942*t2021 - 0.047*t208 - 0.0302*t2021*t2399;
  p_output1[15]=0.24925*(-1.*t2021*t2114*t2399 + t1942*t402) + 0.0302*t5308;
  p_output1[16]=0.0302*(-1.*t2114*t2399 + t1942*t2021*t402) + 0.24925*t5268;
  p_output1[17]=0.0302*t1942*t208 - 0.24925*t208*t2399;
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



void J_MultisenseMagnetometerFrame_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
