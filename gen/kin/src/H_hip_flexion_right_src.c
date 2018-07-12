/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:33:37 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_hip_flexion_right_src.h"

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
  double t677;
  double t1033;
  double t595;
  double t802;
  double t1041;
  double t2356;
  double t917;
  double t1257;
  double t1636;
  double t412;
  double t2439;
  double t2512;
  double t2573;
  double t37;
  double t2811;
  double t2845;
  double t2866;
  double t3071;
  double t3757;
  double t3796;
  double t3894;
  double t3914;
  double t3935;
  double t3965;
  double t1929;
  double t2584;
  double t2658;
  double t2994;
  double t3341;
  double t3388;
  double t3404;
  double t3419;
  double t3493;
  double t3904;
  double t4058;
  double t4273;
  double t4352;
  double t4442;
  double t4467;
  double t4500;
  double t4529;
  double t4601;
  double t4660;
  double t4705;
  double t4719;
  double t4864;
  double t4935;
  double t4966;
  double t4974;
  double t5010;
  double t5018;
  double t6086;
  double t6165;
  double t6662;
  double t6672;
  double t5091;
  double t5122;
  double t5124;
  double t6218;
  double t6244;
  double t6282;
  double t6320;
  double t6331;
  double t6429;
  double t6467;
  double t6471;
  double t6534;
  double t6548;
  double t6553;
  double t6574;
  double t6686;
  double t6774;
  double t6781;
  double t6847;
  double t6889;
  double t6897;
  double t5281;
  double t5373;
  double t5434;
  double t5531;
  double t5535;
  double t5600;
  t677 = Cos(var1[5]);
  t1033 = Sin(var1[3]);
  t595 = Cos(var1[3]);
  t802 = Sin(var1[4]);
  t1041 = Sin(var1[5]);
  t2356 = Sin(var1[13]);
  t917 = t595*t677*t802;
  t1257 = t1033*t1041;
  t1636 = t917 + t1257;
  t412 = Cos(var1[13]);
  t2439 = -1.*t677*t1033;
  t2512 = t595*t802*t1041;
  t2573 = t2439 + t2512;
  t37 = Cos(var1[15]);
  t2811 = Sin(var1[15]);
  t2845 = Cos(var1[14]);
  t2866 = Cos(var1[4]);
  t3071 = Sin(var1[14]);
  t3757 = t677*t1033*t802;
  t3796 = -1.*t595*t1041;
  t3894 = t3757 + t3796;
  t3914 = t595*t677;
  t3935 = t1033*t802*t1041;
  t3965 = t3914 + t3935;
  t1929 = t412*t1636;
  t2584 = -1.*t2356*t2573;
  t2658 = t1929 + t2584;
  t2994 = t2845*t595*t2866;
  t3341 = t2356*t1636;
  t3388 = t412*t2573;
  t3404 = t3341 + t3388;
  t3419 = t3071*t3404;
  t3493 = t2994 + t3419;
  t3904 = t412*t3894;
  t4058 = -1.*t2356*t3965;
  t4273 = t3904 + t4058;
  t4352 = t2845*t2866*t1033;
  t4442 = t2356*t3894;
  t4467 = t412*t3965;
  t4500 = t4442 + t4467;
  t4529 = t3071*t4500;
  t4601 = t4352 + t4529;
  t4660 = t412*t2866*t677;
  t4705 = -1.*t2866*t2356*t1041;
  t4719 = t4660 + t4705;
  t4864 = -1.*t2845*t802;
  t4935 = t2866*t677*t2356;
  t4966 = t412*t2866*t1041;
  t4974 = t4935 + t4966;
  t5010 = t3071*t4974;
  t5018 = t4864 + t5010;
  t6086 = -1.*t2845;
  t6165 = 1. + t6086;
  t6662 = -1.*t37;
  t6672 = 1. + t6662;
  t5091 = t2811*t2658;
  t5122 = t37*t3493;
  t5124 = t5091 + t5122;
  t6218 = -0.049*t6165;
  t6244 = -0.135*t3071;
  t6282 = 0. + t6218 + t6244;
  t6320 = 0.135*t2356;
  t6331 = 0. + t6320;
  t6429 = -1.*t412;
  t6467 = 1. + t6429;
  t6471 = -0.135*t6467;
  t6534 = 0. + t6471;
  t6548 = -0.135*t6165;
  t6553 = 0.049*t3071;
  t6574 = 0. + t6548 + t6553;
  t6686 = -0.09*t6672;
  t6774 = 0.049*t2811;
  t6781 = 0. + t6686 + t6774;
  t6847 = -0.049*t6672;
  t6889 = -0.09*t2811;
  t6897 = 0. + t6847 + t6889;
  t5281 = t2811*t4273;
  t5373 = t37*t4601;
  t5434 = t5281 + t5373;
  t5531 = t2811*t4719;
  t5535 = t37*t5018;
  t5600 = t5531 + t5535;
  p_output1[0]=t2811*t3493 - 1.*t2658*t37;
  p_output1[1]=-1.*t37*t4273 + t2811*t4601;
  p_output1[2]=-1.*t37*t4719 + t2811*t5018;
  p_output1[3]=0.;
  p_output1[4]=t5124;
  p_output1[5]=t5434;
  p_output1[6]=t5600;
  p_output1[7]=0.;
  p_output1[8]=-1.*t2845*t3404 + t2866*t3071*t595;
  p_output1[9]=t1033*t2866*t3071 - 1.*t2845*t4500;
  p_output1[10]=-1.*t2845*t4974 - 1.*t3071*t802;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.09*(-1.*t2811*t3493 + t2658*t37) - 0.049*t5124 - 0.135*(t2845*t3404 - 1.*t2866*t3071*t595) + t2866*t595*t6282 + t1636*t6331 + t2573*t6534 + t3404*t6574 + t2658*t6781 + t3493*t6897 + var1[0];
  p_output1[13]=0. - 0.135*(-1.*t1033*t2866*t3071 + t2845*t4500) - 0.09*(t37*t4273 - 1.*t2811*t4601) - 0.049*t5434 + t1033*t2866*t6282 + t3894*t6331 + t3965*t6534 + t4500*t6574 + t4273*t6781 + t4601*t6897 + var1[1];
  p_output1[14]=0. - 0.09*(t37*t4719 - 1.*t2811*t5018) - 0.049*t5600 + t1041*t2866*t6534 + t4974*t6574 + t2866*t6331*t677 + t4719*t6781 + t5018*t6897 - 1.*t6282*t802 - 0.135*(t2845*t4974 + t3071*t802) + var1[2];
  p_output1[15]=1.;
}



void H_hip_flexion_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
