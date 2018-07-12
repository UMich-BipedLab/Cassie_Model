/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:33:44 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_knee_to_shin_right_src.h"

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
  double t761;
  double t4518;
  double t4688;
  double t4533;
  double t4733;
  double t1820;
  double t1924;
  double t1972;
  double t2586;
  double t3763;
  double t4619;
  double t4879;
  double t4893;
  double t5284;
  double t6630;
  double t6829;
  double t6855;
  double t1271;
  double t7458;
  double t7464;
  double t7481;
  double t7552;
  double t7573;
  double t7605;
  double t7612;
  double t7623;
  double t7639;
  double t7671;
  double t7825;
  double t7837;
  double t7842;
  double t7855;
  double t7858;
  double t7902;
  double t7991;
  double t7999;
  double t8017;
  double t8026;
  double t8123;
  double t8170;
  double t8200;
  double t8241;
  double t8270;
  double t8333;
  double t8367;
  double t8438;
  double t8444;
  double t8457;
  double t8571;
  double t8578;
  double t8590;
  double t1976;
  double t2713;
  double t2789;
  double t4091;
  double t4470;
  double t5372;
  double t5725;
  double t5779;
  double t6533;
  double t7228;
  double t7269;
  double t7285;
  double t8708;
  double t8727;
  double t8730;
  double t8743;
  double t8754;
  double t8755;
  double t7611;
  double t7616;
  double t7622;
  double t8771;
  double t8785;
  double t8790;
  double t7760;
  double t7764;
  double t7804;
  double t7973;
  double t7992;
  double t7993;
  double t8814;
  double t8824;
  double t8910;
  double t8982;
  double t8992;
  double t8996;
  double t8037;
  double t8078;
  double t8091;
  double t8339;
  double t8417;
  double t8433;
  double t9039;
  double t9046;
  double t9053;
  double t9078;
  double t9079;
  double t9099;
  double t8522;
  double t8555;
  double t8565;
  double t9124;
  double t9138;
  double t9141;
  double t9148;
  double t9153;
  double t9160;
  double t9249;
  double t9262;
  double t9289;
  double t9306;
  double t9322;
  double t9336;
  double t9385;
  double t9391;
  double t9396;
  double t9403;
  double t9407;
  double t9409;
  double t9411;
  double t9415;
  double t9417;
  double t9429;
  double t9436;
  double t9452;
  double t9463;
  double t9465;
  double t9473;
  t761 = Cos(var1[3]);
  t4518 = Cos(var1[5]);
  t4688 = Sin(var1[3]);
  t4533 = Sin(var1[4]);
  t4733 = Sin(var1[5]);
  t1820 = Cos(var1[14]);
  t1924 = -1.*t1820;
  t1972 = 1. + t1924;
  t2586 = Sin(var1[14]);
  t3763 = Sin(var1[13]);
  t4619 = t761*t4518*t4533;
  t4879 = t4688*t4733;
  t4893 = t4619 + t4879;
  t5284 = Cos(var1[13]);
  t6630 = -1.*t4518*t4688;
  t6829 = t761*t4533*t4733;
  t6855 = t6630 + t6829;
  t1271 = Cos(var1[4]);
  t7458 = t3763*t4893;
  t7464 = t5284*t6855;
  t7481 = t7458 + t7464;
  t7552 = Cos(var1[15]);
  t7573 = -1.*t7552;
  t7605 = 1. + t7573;
  t7612 = Sin(var1[15]);
  t7623 = t5284*t4893;
  t7639 = -1.*t3763*t6855;
  t7671 = t7623 + t7639;
  t7825 = t1820*t761*t1271;
  t7837 = t2586*t7481;
  t7842 = t7825 + t7837;
  t7855 = Cos(var1[16]);
  t7858 = -1.*t7855;
  t7902 = 1. + t7858;
  t7991 = Sin(var1[16]);
  t7999 = t7612*t7671;
  t8017 = t7552*t7842;
  t8026 = t7999 + t8017;
  t8123 = t7552*t7671;
  t8170 = -1.*t7612*t7842;
  t8200 = t8123 + t8170;
  t8241 = Cos(var1[17]);
  t8270 = -1.*t8241;
  t8333 = 1. + t8270;
  t8367 = Sin(var1[17]);
  t8438 = -1.*t7991*t8026;
  t8444 = t7855*t8200;
  t8457 = t8438 + t8444;
  t8571 = t7855*t8026;
  t8578 = t7991*t8200;
  t8590 = t8571 + t8578;
  t1976 = -0.049*t1972;
  t2713 = -0.135*t2586;
  t2789 = 0. + t1976 + t2713;
  t4091 = 0.135*t3763;
  t4470 = 0. + t4091;
  t5372 = -1.*t5284;
  t5725 = 1. + t5372;
  t5779 = -0.135*t5725;
  t6533 = 0. + t5779;
  t7228 = -0.135*t1972;
  t7269 = 0.049*t2586;
  t7285 = 0. + t7228 + t7269;
  t8708 = t4518*t4688*t4533;
  t8727 = -1.*t761*t4733;
  t8730 = t8708 + t8727;
  t8743 = t761*t4518;
  t8754 = t4688*t4533*t4733;
  t8755 = t8743 + t8754;
  t7611 = -0.09*t7605;
  t7616 = 0.049*t7612;
  t7622 = 0. + t7611 + t7616;
  t8771 = t3763*t8730;
  t8785 = t5284*t8755;
  t8790 = t8771 + t8785;
  t7760 = -0.049*t7605;
  t7764 = -0.09*t7612;
  t7804 = 0. + t7760 + t7764;
  t7973 = -0.049*t7902;
  t7992 = -0.21*t7991;
  t7993 = 0. + t7973 + t7992;
  t8814 = t5284*t8730;
  t8824 = -1.*t3763*t8755;
  t8910 = t8814 + t8824;
  t8982 = t1820*t1271*t4688;
  t8992 = t2586*t8790;
  t8996 = t8982 + t8992;
  t8037 = -0.21*t7902;
  t8078 = 0.049*t7991;
  t8091 = 0. + t8037 + t8078;
  t8339 = -0.2707*t8333;
  t8417 = 0.0016*t8367;
  t8433 = 0. + t8339 + t8417;
  t9039 = t7612*t8910;
  t9046 = t7552*t8996;
  t9053 = t9039 + t9046;
  t9078 = t7552*t8910;
  t9079 = -1.*t7612*t8996;
  t9099 = t9078 + t9079;
  t8522 = -0.0016*t8333;
  t8555 = -0.2707*t8367;
  t8565 = 0. + t8522 + t8555;
  t9124 = -1.*t7991*t9053;
  t9138 = t7855*t9099;
  t9141 = t9124 + t9138;
  t9148 = t7855*t9053;
  t9153 = t7991*t9099;
  t9160 = t9148 + t9153;
  t9249 = t1271*t4518*t3763;
  t9262 = t5284*t1271*t4733;
  t9289 = t9249 + t9262;
  t9306 = t5284*t1271*t4518;
  t9322 = -1.*t1271*t3763*t4733;
  t9336 = t9306 + t9322;
  t9385 = -1.*t1820*t4533;
  t9391 = t2586*t9289;
  t9396 = t9385 + t9391;
  t9403 = t7612*t9336;
  t9407 = t7552*t9396;
  t9409 = t9403 + t9407;
  t9411 = t7552*t9336;
  t9415 = -1.*t7612*t9396;
  t9417 = t9411 + t9415;
  t9429 = -1.*t7991*t9409;
  t9436 = t7855*t9417;
  t9452 = t9429 + t9436;
  t9463 = t7855*t9409;
  t9465 = t7991*t9417;
  t9473 = t9463 + t9465;
  p_output1[0]=0. + t4470*t4893 + t6533*t6855 + t7285*t7481 + t1271*t2789*t761 - 0.1305*(t1820*t7481 - 1.*t1271*t2586*t761) + t7622*t7671 + t7804*t7842 + t7993*t8026 + t8091*t8200 + t8433*t8457 + t8565*t8590 - 0.0016*(t8367*t8457 + t8241*t8590) - 0.2707*(t8241*t8457 - 1.*t8367*t8590) + var1[0];
  p_output1[1]=0. + t1271*t2789*t4688 + t4470*t8730 + t6533*t8755 + t7285*t8790 - 0.1305*(-1.*t1271*t2586*t4688 + t1820*t8790) + t7622*t8910 + t7804*t8996 + t7993*t9053 + t8091*t9099 + t8433*t9141 + t8565*t9160 - 0.0016*(t8367*t9141 + t8241*t9160) - 0.2707*(t8241*t9141 - 1.*t8367*t9160) + var1[1];
  p_output1[2]=0. + t1271*t4470*t4518 - 1.*t2789*t4533 + t1271*t4733*t6533 + t7285*t9289 - 0.1305*(t2586*t4533 + t1820*t9289) + t7622*t9336 + t7804*t9396 + t7993*t9409 + t8091*t9417 + t8433*t9452 + t8565*t9473 - 0.0016*(t8367*t9452 + t8241*t9473) - 0.2707*(t8241*t9452 - 1.*t8367*t9473) + var1[2];
}



void p_knee_to_shin_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
