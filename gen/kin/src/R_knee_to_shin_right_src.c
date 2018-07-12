/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:33:48 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_knee_to_shin_right_src.h"

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
  double t1198;
  double t1772;
  double t1026;
  double t1253;
  double t1784;
  double t2503;
  double t1358;
  double t1839;
  double t1947;
  double t956;
  double t2729;
  double t2754;
  double t2984;
  double t3350;
  double t2131;
  double t3062;
  double t3207;
  double t588;
  double t3432;
  double t3699;
  double t3726;
  double t3755;
  double t3758;
  double t3764;
  double t3771;
  double t3807;
  double t3809;
  double t4068;
  double t3339;
  double t3895;
  double t3981;
  double t304;
  double t4134;
  double t4142;
  double t4154;
  double t161;
  double t4509;
  double t4541;
  double t4602;
  double t4687;
  double t4712;
  double t4751;
  double t4677;
  double t4786;
  double t4799;
  double t4817;
  double t4832;
  double t4836;
  double t4866;
  double t4955;
  double t4975;
  double t4362;
  double t4810;
  double t4988;
  double t5048;
  double t5147;
  double t5153;
  double t5219;
  double t5388;
  double t5399;
  double t5409;
  double t5520;
  double t5536;
  double t5545;
  double t5584;
  double t5594;
  double t5610;
  double t5511;
  double t5694;
  double t5720;
  double t5766;
  double t5803;
  double t5813;
  double t3995;
  double t4207;
  double t4309;
  double t4408;
  double t4409;
  double t4417;
  double t5078;
  double t5221;
  double t5237;
  double t5259;
  double t5282;
  double t5296;
  double t5748;
  double t5815;
  double t5829;
  double t5855;
  double t5888;
  double t5891;
  t1198 = Cos(var1[5]);
  t1772 = Sin(var1[3]);
  t1026 = Cos(var1[3]);
  t1253 = Sin(var1[4]);
  t1784 = Sin(var1[5]);
  t2503 = Sin(var1[13]);
  t1358 = t1026*t1198*t1253;
  t1839 = t1772*t1784;
  t1947 = t1358 + t1839;
  t956 = Cos(var1[13]);
  t2729 = -1.*t1198*t1772;
  t2754 = t1026*t1253*t1784;
  t2984 = t2729 + t2754;
  t3350 = Cos(var1[15]);
  t2131 = t956*t1947;
  t3062 = -1.*t2503*t2984;
  t3207 = t2131 + t3062;
  t588 = Sin(var1[15]);
  t3432 = Cos(var1[14]);
  t3699 = Cos(var1[4]);
  t3726 = t3432*t1026*t3699;
  t3755 = Sin(var1[14]);
  t3758 = t2503*t1947;
  t3764 = t956*t2984;
  t3771 = t3758 + t3764;
  t3807 = t3755*t3771;
  t3809 = t3726 + t3807;
  t4068 = Cos(var1[16]);
  t3339 = t588*t3207;
  t3895 = t3350*t3809;
  t3981 = t3339 + t3895;
  t304 = Sin(var1[16]);
  t4134 = t3350*t3207;
  t4142 = -1.*t588*t3809;
  t4154 = t4134 + t4142;
  t161 = Cos(var1[17]);
  t4509 = t1198*t1772*t1253;
  t4541 = -1.*t1026*t1784;
  t4602 = t4509 + t4541;
  t4687 = t1026*t1198;
  t4712 = t1772*t1253*t1784;
  t4751 = t4687 + t4712;
  t4677 = t956*t4602;
  t4786 = -1.*t2503*t4751;
  t4799 = t4677 + t4786;
  t4817 = t3432*t3699*t1772;
  t4832 = t2503*t4602;
  t4836 = t956*t4751;
  t4866 = t4832 + t4836;
  t4955 = t3755*t4866;
  t4975 = t4817 + t4955;
  t4362 = Sin(var1[17]);
  t4810 = t588*t4799;
  t4988 = t3350*t4975;
  t5048 = t4810 + t4988;
  t5147 = t3350*t4799;
  t5153 = -1.*t588*t4975;
  t5219 = t5147 + t5153;
  t5388 = t956*t3699*t1198;
  t5399 = -1.*t3699*t2503*t1784;
  t5409 = t5388 + t5399;
  t5520 = -1.*t3432*t1253;
  t5536 = t3699*t1198*t2503;
  t5545 = t956*t3699*t1784;
  t5584 = t5536 + t5545;
  t5594 = t3755*t5584;
  t5610 = t5520 + t5594;
  t5511 = t588*t5409;
  t5694 = t3350*t5610;
  t5720 = t5511 + t5694;
  t5766 = t3350*t5409;
  t5803 = -1.*t588*t5610;
  t5813 = t5766 + t5803;
  t3995 = -1.*t304*t3981;
  t4207 = t4068*t4154;
  t4309 = t3995 + t4207;
  t4408 = t4068*t3981;
  t4409 = t304*t4154;
  t4417 = t4408 + t4409;
  t5078 = -1.*t304*t5048;
  t5221 = t4068*t5219;
  t5237 = t5078 + t5221;
  t5259 = t4068*t5048;
  t5282 = t304*t5219;
  t5296 = t5259 + t5282;
  t5748 = -1.*t304*t5720;
  t5815 = t4068*t5813;
  t5829 = t5748 + t5815;
  t5855 = t4068*t5720;
  t5888 = t304*t5813;
  t5891 = t5855 + t5888;
  p_output1[0]=-1.*t161*t4309 + t4362*t4417;
  p_output1[1]=-1.*t161*t5237 + t4362*t5296;
  p_output1[2]=-1.*t161*t5829 + t4362*t5891;
  p_output1[3]=t4309*t4362 + t161*t4417;
  p_output1[4]=t4362*t5237 + t161*t5296;
  p_output1[5]=t4362*t5829 + t161*t5891;
  p_output1[6]=t1026*t3699*t3755 - 1.*t3432*t3771;
  p_output1[7]=t1772*t3699*t3755 - 1.*t3432*t4866;
  p_output1[8]=-1.*t1253*t3755 - 1.*t3432*t5584;
}



void R_knee_to_shin_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
