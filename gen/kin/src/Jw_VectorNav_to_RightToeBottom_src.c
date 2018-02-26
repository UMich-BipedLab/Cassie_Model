/*
 * Automatically Generated from Mathematica.
 * Mon 26 Feb 2018 15:49:14 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jw_VectorNav_to_RightToeBottom_src.h"

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
  double t1377;
  double t1625;
  double t1813;
  double t1616;
  double t1641;
  double t1710;
  double t1372;
  double t1836;
  double t1845;
  double t1856;
  double t2471;
  double t1738;
  double t2031;
  double t2140;
  double t1170;
  double t2664;
  double t2885;
  double t2893;
  double t3115;
  double t2415;
  double t2915;
  double t3059;
  double t1169;
  double t3181;
  double t3291;
  double t3295;
  double t309;
  double t358;
  double t4172;
  double t4221;
  double t4222;
  double t4074;
  double t4277;
  double t4357;
  double t4705;
  double t4739;
  double t3567;
  double t4506;
  double t4748;
  double t4752;
  double t4822;
  double t4896;
  double t4903;
  double t3106;
  double t3362;
  double t3370;
  double t3596;
  double t3685;
  double t3724;
  double t4778;
  double t4945;
  double t5016;
  double t5060;
  double t5061;
  double t5081;
  t1377 = Cos(var1[13]);
  t1625 = Sin(var1[13]);
  t1813 = Cos(var1[12]);
  t1616 = 0.642788*t1377;
  t1641 = -0.766044*t1625;
  t1710 = t1616 + t1641;
  t1372 = Sin(var1[12]);
  t1836 = -0.766044*t1377;
  t1845 = -0.642788*t1625;
  t1856 = t1836 + t1845;
  t2471 = Cos(var1[11]);
  t1738 = -1.*t1372*t1710;
  t2031 = t1813*t1856;
  t2140 = 0. + t1738 + t2031;
  t1170 = Sin(var1[11]);
  t2664 = t1813*t1710;
  t2885 = t1372*t1856;
  t2893 = 0. + t2664 + t2885;
  t3115 = Cos(var1[10]);
  t2415 = t1170*t2140;
  t2915 = t2471*t2893;
  t3059 = 0. + t2415 + t2915;
  t1169 = Sin(var1[10]);
  t3181 = t2471*t2140;
  t3291 = -1.*t1170*t2893;
  t3295 = 0. + t3181 + t3291;
  t309 = Cos(var1[8]);
  t358 = Sin(var1[9]);
  t4172 = -0.642788*t1377;
  t4221 = 0.766044*t1625;
  t4222 = t4172 + t4221;
  t4074 = -1.*t1372*t1856;
  t4277 = t1813*t4222;
  t4357 = 0. + t4074 + t4277;
  t4705 = t1372*t4222;
  t4739 = 0. + t2031 + t4705;
  t3567 = Cos(var1[9]);
  t4506 = t1170*t4357;
  t4748 = t2471*t4739;
  t4752 = 0. + t4506 + t4748;
  t4822 = t2471*t4357;
  t4896 = -1.*t1170*t4739;
  t4903 = 0. + t4822 + t4896;
  t3106 = -1.*t1169*t3059;
  t3362 = t3115*t3295;
  t3370 = 0. + t3106 + t3362;
  t3596 = t3115*t3059;
  t3685 = t1169*t3295;
  t3724 = 0. + t3596 + t3685;
  t4778 = -1.*t1169*t4752;
  t4945 = t3115*t4903;
  t5016 = 0. + t4778 + t4945;
  t5060 = t3115*t4752;
  t5061 = t1169*t4903;
  t5081 = 0. + t5060 + t5061;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0. + Sin(var1[8]);
  p_output1[22]=0. + t309*(0. + t3370*t358 + t3567*t3724);
  p_output1[23]=0. + t309*(0. + t358*t5016 + t3567*t5081);
  p_output1[24]=0.;
  p_output1[25]=0. - 1.*t3370*t3567 + t358*t3724;
  p_output1[26]=0. - 1.*t3567*t5016 + t358*t5081;
  p_output1[27]=1.;
  p_output1[28]=0.;
  p_output1[29]=0.;
  p_output1[30]=1.;
  p_output1[31]=0.;
  p_output1[32]=0.;
  p_output1[33]=1.;
  p_output1[34]=0.;
  p_output1[35]=0.;
  p_output1[36]=1.;
  p_output1[37]=0.;
  p_output1[38]=0.;
  p_output1[39]=1.;
  p_output1[40]=0.;
  p_output1[41]=0.;
}



void Jw_VectorNav_to_RightToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
