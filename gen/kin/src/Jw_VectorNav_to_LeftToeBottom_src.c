/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:24:34 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jw_VectorNav_to_LeftToeBottom_src.h"

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
  double t936;
  double t1241;
  double t1345;
  double t1041;
  double t1266;
  double t1288;
  double t899;
  double t1500;
  double t1556;
  double t1666;
  double t2225;
  double t1294;
  double t1790;
  double t1910;
  double t897;
  double t2287;
  double t2444;
  double t2464;
  double t3101;
  double t2085;
  double t2562;
  double t2702;
  double t700;
  double t3127;
  double t3148;
  double t3207;
  double t554;
  double t639;
  double t3833;
  double t3879;
  double t3919;
  double t3809;
  double t3984;
  double t3991;
  double t4138;
  double t4156;
  double t4090;
  double t4203;
  double t4286;
  double t4302;
  double t4412;
  double t4451;
  double t3642;
  double t3513;
  double t3518;
  double t3543;
  double t2934;
  double t3219;
  double t3286;
  double t4632;
  double t4673;
  double t4696;
  double t4292;
  double t4452;
  double t4462;
  t936 = Cos(var1[6]);
  t1241 = Sin(var1[6]);
  t1345 = Cos(var1[5]);
  t1041 = 0.642788*t936;
  t1266 = -0.766044*t1241;
  t1288 = t1041 + t1266;
  t899 = Sin(var1[5]);
  t1500 = 0.766044*t936;
  t1556 = 0.642788*t1241;
  t1666 = t1500 + t1556;
  t2225 = Cos(var1[4]);
  t1294 = t899*t1288;
  t1790 = t1345*t1666;
  t1910 = 0. + t1294 + t1790;
  t897 = Sin(var1[4]);
  t2287 = t1345*t1288;
  t2444 = -1.*t899*t1666;
  t2464 = 0. + t2287 + t2444;
  t3101 = Sin(var1[3]);
  t2085 = -1.*t897*t1910;
  t2562 = t2225*t2464;
  t2702 = 0. + t2085 + t2562;
  t700 = Cos(var1[3]);
  t3127 = t2225*t1910;
  t3148 = t897*t2464;
  t3207 = 0. + t3127 + t3148;
  t554 = Cos(var1[1]);
  t639 = Cos(var1[2]);
  t3833 = -0.766044*t936;
  t3879 = -0.642788*t1241;
  t3919 = t3833 + t3879;
  t3809 = -1.*t899*t1288;
  t3984 = t1345*t3919;
  t3991 = 0. + t3809 + t3984;
  t4138 = t899*t3919;
  t4156 = 0. + t2287 + t4138;
  t4090 = t897*t3991;
  t4203 = t2225*t4156;
  t4286 = 0. + t4090 + t4203;
  t4302 = t2225*t3991;
  t4412 = -1.*t897*t4156;
  t4451 = 0. + t4302 + t4412;
  t3642 = Sin(var1[2]);
  t3513 = t3101*t2702;
  t3518 = t700*t3207;
  t3543 = 0. + t3513 + t3518;
  t2934 = t700*t2702;
  t3219 = -1.*t3101*t3207;
  t3286 = 0. + t2934 + t3219;
  t4632 = t700*t4286;
  t4673 = t3101*t4451;
  t4696 = 0. + t4632 + t4673;
  t4292 = -1.*t3101*t4286;
  t4452 = t700*t4451;
  t4462 = 0. + t4292 + t4452;
  p_output1[0]=0. + Sin(var1[1]);
  p_output1[1]=0. + t554*(0. - 1.*t3543*t3642 + t3286*t639);
  p_output1[2]=0. + t554*(0. - 1.*t3642*t4696 + t4462*t639);
  p_output1[3]=0.;
  p_output1[4]=0. + t3286*t3642 + t3543*t639;
  p_output1[5]=0. + t3642*t4462 + t4696*t639;
  p_output1[6]=1.;
  p_output1[7]=0.;
  p_output1[8]=0.;
  p_output1[9]=1.;
  p_output1[10]=0.;
  p_output1[11]=0.;
  p_output1[12]=1.;
  p_output1[13]=0.;
  p_output1[14]=0.;
  p_output1[15]=1.;
  p_output1[16]=0.;
  p_output1[17]=0.;
  p_output1[18]=1.;
  p_output1[19]=0.;
  p_output1[20]=0.;
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
}



void Jw_VectorNav_to_LeftToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
