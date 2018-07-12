/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:32:57 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "J_hip_rotation_left_src.h"

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
  double t1334;
  double t1796;
  double t1823;
  double t1260;
  double t1874;
  double t140;
  double t2331;
  double t2390;
  double t2415;
  double t1574;
  double t1987;
  double t2281;
  double t2442;
  double t3018;
  double t3048;
  double t3050;
  double t3114;
  double t2946;
  double t2965;
  double t2975;
  double t3166;
  double t410;
  double t825;
  double t970;
  double t1168;
  double t2454;
  double t2513;
  double t3459;
  double t3475;
  double t3476;
  double t3403;
  double t3405;
  double t3428;
  double t3110;
  double t3132;
  double t3146;
  double t3187;
  double t3193;
  double t3196;
  double t3545;
  double t3546;
  double t3550;
  double t3727;
  double t3731;
  double t3736;
  double t3913;
  double t3922;
  double t3925;
  double t4132;
  double t4161;
  double t4168;
  double t4250;
  double t4267;
  double t4285;
  double t3492;
  double t4341;
  double t4342;
  double t4388;
  double t4392;
  double t4411;
  double t4466;
  double t4486;
  double t4489;
  double t4604;
  double t4633;
  double t4637;
  double t4300;
  double t3512;
  double t3518;
  double t4814;
  double t4838;
  double t4847;
  double t4445;
  double t4870;
  double t4874;
  double t4571;
  double t4576;
  double t4596;
  double t4602;
  double t4677;
  double t4682;
  double t4687;
  double t3556;
  double t3572;
  double t3594;
  double t4959;
  double t4968;
  double t4974;
  double t4993;
  double t5002;
  double t5078;
  double t5092;
  double t5109;
  double t3261;
  double t5185;
  double t5206;
  double t5220;
  t1334 = Cos(var1[5]);
  t1796 = Sin(var1[3]);
  t1823 = Sin(var1[4]);
  t1260 = Cos(var1[3]);
  t1874 = Sin(var1[5]);
  t140 = Cos(var1[6]);
  t2331 = -1.*t1334*t1796*t1823;
  t2390 = t1260*t1874;
  t2415 = t2331 + t2390;
  t1574 = -1.*t1260*t1334;
  t1987 = -1.*t1796*t1823*t1874;
  t2281 = t1574 + t1987;
  t2442 = Sin(var1[6]);
  t3018 = Cos(var1[7]);
  t3048 = -1.*t3018;
  t3050 = 1. + t3048;
  t3114 = Sin(var1[7]);
  t2946 = t140*t2281;
  t2965 = t2415*t2442;
  t2975 = t2946 + t2965;
  t3166 = Cos(var1[4]);
  t410 = -1.*t140;
  t825 = 1. + t410;
  t970 = 0.135*t825;
  t1168 = 0. + t970;
  t2454 = -0.135*t2442;
  t2513 = 0. + t2454;
  t3459 = t1260*t1334*t1823;
  t3475 = t1796*t1874;
  t3476 = t3459 + t3475;
  t3403 = -1.*t1334*t1796;
  t3405 = t1260*t1823*t1874;
  t3428 = t3403 + t3405;
  t3110 = 0.135*t3050;
  t3132 = 0.049*t3114;
  t3146 = 0. + t3110 + t3132;
  t3187 = -0.049*t3050;
  t3193 = 0.135*t3114;
  t3196 = 0. + t3187 + t3193;
  t3545 = t140*t3428;
  t3546 = t3476*t2442;
  t3550 = t3545 + t3546;
  t3727 = t1260*t3166*t140*t1874;
  t3731 = t1260*t3166*t1334*t2442;
  t3736 = t3727 + t3731;
  t3913 = t3166*t140*t1796*t1874;
  t3922 = t3166*t1334*t1796*t2442;
  t3925 = t3913 + t3922;
  t4132 = -1.*t140*t1823*t1874;
  t4161 = -1.*t1334*t1823*t2442;
  t4168 = t4132 + t4161;
  t4250 = t1334*t1796;
  t4267 = -1.*t1260*t1823*t1874;
  t4285 = t4250 + t4267;
  t3492 = t140*t3476;
  t4341 = t4285*t2442;
  t4342 = t3492 + t4341;
  t4388 = t1334*t1796*t1823;
  t4392 = -1.*t1260*t1874;
  t4411 = t4388 + t4392;
  t4466 = t140*t4411;
  t4486 = t2281*t2442;
  t4489 = t4466 + t4486;
  t4604 = t3166*t1334*t140;
  t4633 = -1.*t3166*t1874*t2442;
  t4637 = t4604 + t4633;
  t4300 = -1.*t3476*t2442;
  t3512 = -1.*t3428*t2442;
  t3518 = t3492 + t3512;
  t4814 = t1260*t1334;
  t4838 = t1796*t1823*t1874;
  t4847 = t4814 + t4838;
  t4445 = -1.*t4411*t2442;
  t4870 = -1.*t4847*t2442;
  t4874 = t4466 + t4870;
  t4571 = -1.*t3166*t140*t1874;
  t4576 = -1.*t3166*t1334*t2442;
  t4596 = t4571 + t4576;
  t4602 = -0.09*t4596;
  t4677 = 0.135*t3018*t4637;
  t4682 = t4637*t3146;
  t4687 = -0.049*t4637*t3114;
  t3556 = t3018*t3550;
  t3572 = -1.*t1260*t3166*t3114;
  t3594 = t3556 + t3572;
  t4959 = 0.135*t3018;
  t4968 = -0.049*t3114;
  t4974 = t4959 + t4968;
  t4993 = 0.049*t3018;
  t5002 = t4993 + t3193;
  t5078 = t140*t4847;
  t5092 = t4411*t2442;
  t5109 = t5078 + t5092;
  t3261 = -1.*t3166*t3018*t1796;
  t5185 = t3166*t140*t1874;
  t5206 = t3166*t1334*t2442;
  t5220 = t5185 + t5206;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1168*t2281 - 0.09*(t140*t2415 - 1.*t2281*t2442) + t2415*t2513 + t2975*t3146 + 0.135*(t2975*t3018 + t1796*t3114*t3166) - 1.*t1796*t3166*t3196 - 0.049*(t2975*t3114 + t3261);
  p_output1[10]=t1260*t3166*t3196 + t1168*t3428 + t2513*t3476 - 0.09*t3518 + t3146*t3550 - 0.049*(t1260*t3018*t3166 + t3114*t3550) + 0.135*t3594;
  p_output1[11]=0;
  p_output1[12]=t1168*t1260*t1874*t3166 + t1260*t1334*t2513*t3166 - 0.09*(t1260*t1334*t140*t3166 - 1.*t1260*t1874*t2442*t3166) - 1.*t1260*t1823*t3196 + t3146*t3736 + 0.135*(t1260*t1823*t3114 + t3018*t3736) - 0.049*(-1.*t1260*t1823*t3018 + t3114*t3736);
  p_output1[13]=t1168*t1796*t1874*t3166 + t1334*t1796*t2513*t3166 - 0.09*(t1334*t140*t1796*t3166 - 1.*t1796*t1874*t2442*t3166) - 1.*t1796*t1823*t3196 + t3146*t3925 + 0.135*(t1796*t1823*t3114 + t3018*t3925) - 0.049*(-1.*t1796*t1823*t3018 + t3114*t3925);
  p_output1[14]=-1.*t1168*t1823*t1874 - 0.09*(-1.*t1334*t140*t1823 + t1823*t1874*t2442) - 1.*t1334*t1823*t2513 - 1.*t3166*t3196 + t3146*t4168 + 0.135*(t3114*t3166 + t3018*t4168) - 0.049*(-1.*t3018*t3166 + t3114*t4168);
  p_output1[15]=t1168*t3476 + t2513*t4285 - 0.09*(t140*t4285 + t4300) + 0.135*t3018*t4342 - 0.049*t3114*t4342 + t3146*t4342;
  p_output1[16]=t2281*t2513 + t1168*t4411 - 0.09*(t2946 + t4445) + 0.135*t3018*t4489 - 0.049*t3114*t4489 + t3146*t4489;
  p_output1[17]=t1168*t1334*t3166 - 1.*t1874*t2513*t3166 + t4602 + t4677 + t4682 + t4687;
  p_output1[18]=0.135*t2442*t3428 - 0.135*t140*t3476 + 0.135*t3018*t3518 - 0.049*t3114*t3518 + t3146*t3518 - 0.09*(-1.*t140*t3428 + t4300);
  p_output1[19]=-0.135*t140*t4411 + 0.135*t2442*t4847 - 0.09*(t4445 - 1.*t140*t4847) + 0.135*t3018*t4874 - 0.049*t3114*t4874 + t3146*t4874;
  p_output1[20]=-0.135*t1334*t140*t3166 + 0.135*t1874*t2442*t3166 + t4602 + t4677 + t4682 + t4687;
  p_output1[21]=0.135*(-1.*t1260*t3018*t3166 - 1.*t3114*t3550) - 0.049*t3594 + t1260*t3166*t4974 + t3550*t5002;
  p_output1[22]=t1796*t3166*t4974 + t5002*t5109 - 0.049*(-1.*t1796*t3114*t3166 + t3018*t5109) + 0.135*(t3261 - 1.*t3114*t5109);
  p_output1[23]=-1.*t1823*t4974 + t5002*t5220 - 0.049*(t1823*t3114 + t3018*t5220) + 0.135*(t1823*t3018 - 1.*t3114*t5220);
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



void J_hip_rotation_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
