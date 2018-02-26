/*
 * Automatically Generated from Mathematica.
 * Mon 26 Feb 2018 15:49:11 GMT-05:00
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
  double t532;
  double t679;
  double t893;
  double t541;
  double t686;
  double t755;
  double t518;
  double t935;
  double t966;
  double t971;
  double t1188;
  double t810;
  double t975;
  double t998;
  double t501;
  double t1241;
  double t1269;
  double t1323;
  double t1584;
  double t1037;
  double t1326;
  double t1468;
  double t348;
  double t1596;
  double t1606;
  double t1626;
  double t103;
  double t155;
  double t2270;
  double t2282;
  double t2293;
  double t2255;
  double t2425;
  double t2456;
  double t2492;
  double t2547;
  double t2478;
  double t2596;
  double t2597;
  double t2628;
  double t2633;
  double t2722;
  double t1914;
  double t1803;
  double t1856;
  double t1891;
  double t1551;
  double t1671;
  double t1676;
  double t2953;
  double t2982;
  double t3154;
  double t2603;
  double t2765;
  double t2845;
  t532 = Cos(var1[6]);
  t679 = Sin(var1[6]);
  t893 = Cos(var1[5]);
  t541 = 0.642788*t532;
  t686 = -0.766044*t679;
  t755 = t541 + t686;
  t518 = Sin(var1[5]);
  t935 = -0.766044*t532;
  t966 = -0.642788*t679;
  t971 = t935 + t966;
  t1188 = Cos(var1[4]);
  t810 = -1.*t518*t755;
  t975 = t893*t971;
  t998 = 0. + t810 + t975;
  t501 = Sin(var1[4]);
  t1241 = t893*t755;
  t1269 = t518*t971;
  t1323 = 0. + t1241 + t1269;
  t1584 = Sin(var1[3]);
  t1037 = t501*t998;
  t1326 = t1188*t1323;
  t1468 = 0. + t1037 + t1326;
  t348 = Cos(var1[3]);
  t1596 = t1188*t998;
  t1606 = -1.*t501*t1323;
  t1626 = 0. + t1596 + t1606;
  t103 = Cos(var1[1]);
  t155 = Cos(var1[2]);
  t2270 = -0.642788*t532;
  t2282 = 0.766044*t679;
  t2293 = t2270 + t2282;
  t2255 = -1.*t518*t971;
  t2425 = t893*t2293;
  t2456 = 0. + t2255 + t2425;
  t2492 = t518*t2293;
  t2547 = 0. + t975 + t2492;
  t2478 = t501*t2456;
  t2596 = t1188*t2547;
  t2597 = 0. + t2478 + t2596;
  t2628 = t1188*t2456;
  t2633 = -1.*t501*t2547;
  t2722 = 0. + t2628 + t2633;
  t1914 = Sin(var1[2]);
  t1803 = -1.*t1584*t1468;
  t1856 = t348*t1626;
  t1891 = 0. + t1803 + t1856;
  t1551 = t348*t1468;
  t1671 = t1584*t1626;
  t1676 = 0. + t1551 + t1671;
  t2953 = -1.*t1584*t2597;
  t2982 = t348*t2722;
  t3154 = 0. + t2953 + t2982;
  t2603 = t348*t2597;
  t2765 = t1584*t2722;
  t2845 = 0. + t2603 + t2765;
  p_output1[0]=0. + Sin(var1[1]);
  p_output1[1]=0. + t103*(0. + t155*t1676 + t1891*t1914);
  p_output1[2]=0. + t103*(0. + t155*t2845 + t1914*t3154);
  p_output1[3]=0.;
  p_output1[4]=0. - 1.*t155*t1891 + t1676*t1914;
  p_output1[5]=0. + t1914*t2845 - 1.*t155*t3154;
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
