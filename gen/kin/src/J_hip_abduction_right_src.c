/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:33:24 GMT-04:00
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
  double t591;
  double t1385;
  double t1204;
  double t1233;
  double t1494;
  double t737;
  double t1244;
  double t1708;
  double t2886;
  double t3479;
  double t5777;
  double t5876;
  double t6013;
  double t216;
  double t768;
  double t973;
  double t4000;
  double t4364;
  double t5550;
  double t5659;
  double t6775;
  double t6802;
  double t6814;
  double t6818;
  double t6824;
  double t6832;
  double t7085;
  double t7090;
  double t7098;
  double t7217;
  double t7233;
  double t7240;
  double t7122;
  double t7271;
  double t7456;
  double t7459;
  double t7463;
  double t7354;
  double t7358;
  double t7364;
  double t7376;
  t591 = Sin(var1[3]);
  t1385 = Cos(var1[3]);
  t1204 = Cos(var1[5]);
  t1233 = Sin(var1[4]);
  t1494 = Sin(var1[5]);
  t737 = Sin(var1[13]);
  t1244 = -1.*t1204*t591*t1233;
  t1708 = t1385*t1494;
  t2886 = t1244 + t1708;
  t3479 = Cos(var1[13]);
  t5777 = -1.*t1385*t1204;
  t5876 = -1.*t591*t1233*t1494;
  t6013 = t5777 + t5876;
  t216 = Cos(var1[4]);
  t768 = 0.135*t737;
  t973 = 0. + t768;
  t4000 = -1.*t3479;
  t4364 = 1. + t4000;
  t5550 = -0.135*t4364;
  t5659 = 0. + t5550;
  t6775 = t1385*t1204*t1233;
  t6802 = t591*t1494;
  t6814 = t6775 + t6802;
  t6818 = -1.*t1204*t591;
  t6824 = t1385*t1233*t1494;
  t6832 = t6818 + t6824;
  t7085 = t1204*t591;
  t7090 = -1.*t1385*t1233*t1494;
  t7098 = t7085 + t7090;
  t7217 = t1204*t591*t1233;
  t7233 = -1.*t1385*t1494;
  t7240 = t7217 + t7233;
  t7122 = t3479*t6814;
  t7271 = t3479*t7240;
  t7456 = t1385*t1204;
  t7459 = t591*t1233*t1494;
  t7463 = t7456 + t7459;
  t7354 = t3479*t216*t1204;
  t7358 = -1.*t216*t737*t1494;
  t7364 = t7354 + t7358;
  t7376 = -0.135*t7364;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=0.049*t216*t591 + t5659*t6013 - 0.135*(t3479*t6013 + t2886*t737) + t2886*t973;
  p_output1[10]=-0.049*t1385*t216 + t5659*t6832 - 0.135*(t3479*t6832 + t6814*t737) + t6814*t973;
  p_output1[11]=0;
  p_output1[12]=0.049*t1233*t1385 + t1385*t1494*t216*t5659 - 0.135*(t1385*t1494*t216*t3479 + t1204*t1385*t216*t737) + t1204*t1385*t216*t973;
  p_output1[13]=0.049*t1233*t591 + t1494*t216*t5659*t591 - 0.135*(t1494*t216*t3479*t591 + t1204*t216*t591*t737) + t1204*t216*t591*t973;
  p_output1[14]=0.049*t216 - 1.*t1233*t1494*t5659 - 0.135*(-1.*t1233*t1494*t3479 - 1.*t1204*t1233*t737) - 1.*t1204*t1233*t973;
  p_output1[15]=t5659*t6814 - 0.135*(t7122 + t7098*t737) + t7098*t973;
  p_output1[16]=t5659*t7240 - 0.135*(t7271 + t6013*t737) + t6013*t973;
  p_output1[17]=t1204*t216*t5659 + t7376 - 1.*t1494*t216*t973;
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
  p_output1[39]=0.135*t3479*t6814 - 0.135*t6832*t737 - 0.135*(t7122 - 1.*t6832*t737);
  p_output1[40]=0.135*t3479*t7240 - 0.135*t737*t7463 - 0.135*(t7271 - 1.*t737*t7463);
  p_output1[41]=0.135*t1204*t216*t3479 - 0.135*t1494*t216*t737 + t7376;
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
