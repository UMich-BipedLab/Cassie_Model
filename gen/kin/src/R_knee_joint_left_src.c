/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:33:07 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_knee_joint_left_src.h"

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
  double t809;
  double t2027;
  double t2669;
  double t2482;
  double t2689;
  double t1908;
  double t2758;
  double t2771;
  double t3367;
  double t2541;
  double t2693;
  double t2705;
  double t3413;
  double t683;
  double t3874;
  double t3898;
  double t3901;
  double t1309;
  double t1332;
  double t1341;
  double t2712;
  double t3513;
  double t3519;
  double t3568;
  double t3658;
  double t3762;
  double t3924;
  double t324;
  double t4264;
  double t4278;
  double t4293;
  double t4151;
  double t4198;
  double t4241;
  double t4003;
  double t4496;
  double t4534;
  double t4545;
  double t4139;
  double t4249;
  double t4302;
  double t4318;
  double t4379;
  double t4382;
  double t4794;
  double t4803;
  double t4812;
  double t4697;
  double t4722;
  double t4726;
  double t4728;
  double t4729;
  double t4760;
  double t3849;
  double t3945;
  double t3959;
  double t4012;
  double t4023;
  double t4040;
  double t4439;
  double t4550;
  double t4561;
  double t4615;
  double t4629;
  double t4635;
  double t4765;
  double t4829;
  double t4830;
  double t4852;
  double t4856;
  double t4881;
  t809 = Cos(var1[3]);
  t2027 = Cos(var1[5]);
  t2669 = Sin(var1[4]);
  t2482 = Sin(var1[3]);
  t2689 = Sin(var1[5]);
  t1908 = Cos(var1[6]);
  t2758 = t809*t2027*t2669;
  t2771 = t2482*t2689;
  t3367 = t2758 + t2771;
  t2541 = -1.*t2027*t2482;
  t2693 = t809*t2669*t2689;
  t2705 = t2541 + t2693;
  t3413 = Sin(var1[6]);
  t683 = Cos(var1[8]);
  t3874 = t1908*t3367;
  t3898 = -1.*t2705*t3413;
  t3901 = t3874 + t3898;
  t1309 = Cos(var1[4]);
  t1332 = Cos(var1[7]);
  t1341 = t809*t1309*t1332;
  t2712 = t1908*t2705;
  t3513 = t3367*t3413;
  t3519 = t2712 + t3513;
  t3568 = Sin(var1[7]);
  t3658 = t3519*t3568;
  t3762 = t1341 + t3658;
  t3924 = Sin(var1[8]);
  t324 = Sin(var1[9]);
  t4264 = t2027*t2482*t2669;
  t4278 = -1.*t809*t2689;
  t4293 = t4264 + t4278;
  t4151 = t809*t2027;
  t4198 = t2482*t2669*t2689;
  t4241 = t4151 + t4198;
  t4003 = Cos(var1[9]);
  t4496 = t1908*t4293;
  t4534 = -1.*t4241*t3413;
  t4545 = t4496 + t4534;
  t4139 = t1309*t1332*t2482;
  t4249 = t1908*t4241;
  t4302 = t4293*t3413;
  t4318 = t4249 + t4302;
  t4379 = t4318*t3568;
  t4382 = t4139 + t4379;
  t4794 = t1309*t2027*t1908;
  t4803 = -1.*t1309*t2689*t3413;
  t4812 = t4794 + t4803;
  t4697 = -1.*t1332*t2669;
  t4722 = t1309*t1908*t2689;
  t4726 = t1309*t2027*t3413;
  t4728 = t4722 + t4726;
  t4729 = t4728*t3568;
  t4760 = t4697 + t4729;
  t3849 = t683*t3762;
  t3945 = t3901*t3924;
  t3959 = t3849 + t3945;
  t4012 = t683*t3901;
  t4023 = -1.*t3762*t3924;
  t4040 = t4012 + t4023;
  t4439 = t683*t4382;
  t4550 = t4545*t3924;
  t4561 = t4439 + t4550;
  t4615 = t683*t4545;
  t4629 = -1.*t4382*t3924;
  t4635 = t4615 + t4629;
  t4765 = t683*t4760;
  t4829 = t4812*t3924;
  t4830 = t4765 + t4829;
  t4852 = t683*t4812;
  t4856 = -1.*t4760*t3924;
  t4881 = t4852 + t4856;
  p_output1[0]=t324*t3959 - 1.*t4003*t4040;
  p_output1[1]=t324*t4561 - 1.*t4003*t4635;
  p_output1[2]=t324*t4830 - 1.*t4003*t4881;
  p_output1[3]=t3959*t4003 + t324*t4040;
  p_output1[4]=t4003*t4561 + t324*t4635;
  p_output1[5]=t4003*t4830 + t324*t4881;
  p_output1[6]=-1.*t1332*t3519 + t1309*t3568*t809;
  p_output1[7]=t1309*t2482*t3568 - 1.*t1332*t4318;
  p_output1[8]=-1.*t2669*t3568 - 1.*t1332*t4728;
}



void R_knee_joint_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
