/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:33:12 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_ankle_joint_left_src.h"

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
  double t1469;
  double t716;
  double t1582;
  double t1058;
  double t1995;
  double t27;
  double t1406;
  double t2246;
  double t2355;
  double t2896;
  double t3263;
  double t3321;
  double t3331;
  double t3777;
  double t3797;
  double t3956;
  double t4433;
  double t3732;
  double t3766;
  double t3772;
  double t4950;
  double t6097;
  double t6157;
  double t6193;
  double t6268;
  double t5792;
  double t5793;
  double t6084;
  double t6304;
  double t6310;
  double t6332;
  double t6397;
  double t6401;
  double t6418;
  double t6428;
  double t6437;
  double t6450;
  double t6477;
  double t6506;
  double t6507;
  double t6513;
  double t6568;
  double t6585;
  double t6595;
  double t6625;
  double t6647;
  double t6665;
  double t6667;
  double t6777;
  double t6779;
  double t6787;
  double t6791;
  double t6817;
  double t6822;
  double t6826;
  double t6858;
  double t6859;
  double t6861;
  double t6927;
  double t6940;
  double t6949;
  double t110;
  double t134;
  double t685;
  double t689;
  double t3431;
  double t3564;
  double t7134;
  double t7136;
  double t7138;
  double t7159;
  double t7166;
  double t7170;
  double t4230;
  double t4559;
  double t4579;
  double t4971;
  double t5341;
  double t5347;
  double t7180;
  double t7186;
  double t7197;
  double t6222;
  double t6287;
  double t6288;
  double t6334;
  double t6360;
  double t6377;
  double t6424;
  double t6432;
  double t6433;
  double t7237;
  double t7239;
  double t7243;
  double t7258;
  double t7262;
  double t7276;
  double t6483;
  double t6487;
  double t6496;
  double t6606;
  double t6638;
  double t6643;
  double t7291;
  double t7294;
  double t7297;
  double t7303;
  double t7323;
  double t7329;
  double t6676;
  double t6724;
  double t6773;
  double t6824;
  double t6830;
  double t6840;
  double t7347;
  double t7348;
  double t7351;
  double t7359;
  double t7366;
  double t7377;
  double t6876;
  double t6888;
  double t6917;
  double t7391;
  double t7393;
  double t7396;
  double t7408;
  double t7409;
  double t7410;
  double t7510;
  double t7515;
  double t7524;
  double t7574;
  double t7595;
  double t7599;
  double t7621;
  double t7631;
  double t7634;
  double t7645;
  double t7648;
  double t7652;
  double t7667;
  double t7670;
  double t7676;
  double t7704;
  double t7717;
  double t7722;
  double t7731;
  double t7733;
  double t7737;
  double t7750;
  double t7753;
  double t7760;
  double t7776;
  double t7778;
  double t7804;
  t1469 = Cos(var1[3]);
  t716 = Cos(var1[5]);
  t1582 = Sin(var1[4]);
  t1058 = Sin(var1[3]);
  t1995 = Sin(var1[5]);
  t27 = Cos(var1[6]);
  t1406 = -1.*t716*t1058;
  t2246 = t1469*t1582*t1995;
  t2355 = t1406 + t2246;
  t2896 = t1469*t716*t1582;
  t3263 = t1058*t1995;
  t3321 = t2896 + t3263;
  t3331 = Sin(var1[6]);
  t3777 = Cos(var1[7]);
  t3797 = -1.*t3777;
  t3956 = 1. + t3797;
  t4433 = Sin(var1[7]);
  t3732 = t27*t2355;
  t3766 = t3321*t3331;
  t3772 = t3732 + t3766;
  t4950 = Cos(var1[4]);
  t6097 = Cos(var1[8]);
  t6157 = -1.*t6097;
  t6193 = 1. + t6157;
  t6268 = Sin(var1[8]);
  t5792 = t1469*t4950*t3777;
  t5793 = t3772*t4433;
  t6084 = t5792 + t5793;
  t6304 = t27*t3321;
  t6310 = -1.*t2355*t3331;
  t6332 = t6304 + t6310;
  t6397 = Cos(var1[9]);
  t6401 = -1.*t6397;
  t6418 = 1. + t6401;
  t6428 = Sin(var1[9]);
  t6437 = t6097*t6084;
  t6450 = t6332*t6268;
  t6477 = t6437 + t6450;
  t6506 = t6097*t6332;
  t6507 = -1.*t6084*t6268;
  t6513 = t6506 + t6507;
  t6568 = Cos(var1[10]);
  t6585 = -1.*t6568;
  t6595 = 1. + t6585;
  t6625 = Sin(var1[10]);
  t6647 = -1.*t6428*t6477;
  t6665 = t6397*t6513;
  t6667 = t6647 + t6665;
  t6777 = t6397*t6477;
  t6779 = t6428*t6513;
  t6787 = t6777 + t6779;
  t6791 = Cos(var1[11]);
  t6817 = -1.*t6791;
  t6822 = 1. + t6817;
  t6826 = Sin(var1[11]);
  t6858 = t6625*t6667;
  t6859 = t6568*t6787;
  t6861 = t6858 + t6859;
  t6927 = t6568*t6667;
  t6940 = -1.*t6625*t6787;
  t6949 = t6927 + t6940;
  t110 = -1.*t27;
  t134 = 1. + t110;
  t685 = 0.135*t134;
  t689 = 0. + t685;
  t3431 = -0.135*t3331;
  t3564 = 0. + t3431;
  t7134 = t1469*t716;
  t7136 = t1058*t1582*t1995;
  t7138 = t7134 + t7136;
  t7159 = t716*t1058*t1582;
  t7166 = -1.*t1469*t1995;
  t7170 = t7159 + t7166;
  t4230 = 0.135*t3956;
  t4559 = 0.049*t4433;
  t4579 = 0. + t4230 + t4559;
  t4971 = -0.049*t3956;
  t5341 = 0.135*t4433;
  t5347 = 0. + t4971 + t5341;
  t7180 = t27*t7138;
  t7186 = t7170*t3331;
  t7197 = t7180 + t7186;
  t6222 = -0.049*t6193;
  t6287 = -0.09*t6268;
  t6288 = 0. + t6222 + t6287;
  t6334 = -0.09*t6193;
  t6360 = 0.049*t6268;
  t6377 = 0. + t6334 + t6360;
  t6424 = -0.049*t6418;
  t6432 = -0.21*t6428;
  t6433 = 0. + t6424 + t6432;
  t7237 = t4950*t3777*t1058;
  t7239 = t7197*t4433;
  t7243 = t7237 + t7239;
  t7258 = t27*t7170;
  t7262 = -1.*t7138*t3331;
  t7276 = t7258 + t7262;
  t6483 = -0.21*t6418;
  t6487 = 0.049*t6428;
  t6496 = 0. + t6483 + t6487;
  t6606 = -0.2707*t6595;
  t6638 = 0.0016*t6625;
  t6643 = 0. + t6606 + t6638;
  t7291 = t6097*t7243;
  t7294 = t7276*t6268;
  t7297 = t7291 + t7294;
  t7303 = t6097*t7276;
  t7323 = -1.*t7243*t6268;
  t7329 = t7303 + t7323;
  t6676 = -0.0016*t6595;
  t6724 = -0.2707*t6625;
  t6773 = 0. + t6676 + t6724;
  t6824 = 0.0184*t6822;
  t6830 = -0.7055*t6826;
  t6840 = 0. + t6824 + t6830;
  t7347 = -1.*t6428*t7297;
  t7348 = t6397*t7329;
  t7351 = t7347 + t7348;
  t7359 = t6397*t7297;
  t7366 = t6428*t7329;
  t7377 = t7359 + t7366;
  t6876 = -0.7055*t6822;
  t6888 = -0.0184*t6826;
  t6917 = 0. + t6876 + t6888;
  t7391 = t6625*t7351;
  t7393 = t6568*t7377;
  t7396 = t7391 + t7393;
  t7408 = t6568*t7351;
  t7409 = -1.*t6625*t7377;
  t7410 = t7408 + t7409;
  t7510 = t4950*t27*t1995;
  t7515 = t4950*t716*t3331;
  t7524 = t7510 + t7515;
  t7574 = -1.*t3777*t1582;
  t7595 = t7524*t4433;
  t7599 = t7574 + t7595;
  t7621 = t4950*t716*t27;
  t7631 = -1.*t4950*t1995*t3331;
  t7634 = t7621 + t7631;
  t7645 = t6097*t7599;
  t7648 = t7634*t6268;
  t7652 = t7645 + t7648;
  t7667 = t6097*t7634;
  t7670 = -1.*t7599*t6268;
  t7676 = t7667 + t7670;
  t7704 = -1.*t6428*t7652;
  t7717 = t6397*t7676;
  t7722 = t7704 + t7717;
  t7731 = t6397*t7652;
  t7733 = t6428*t7676;
  t7737 = t7731 + t7733;
  t7750 = t6625*t7722;
  t7753 = t6568*t7737;
  t7760 = t7750 + t7753;
  t7776 = t6568*t7722;
  t7778 = -1.*t6625*t7737;
  t7804 = t7776 + t7778;
  p_output1[0]=0. + t3321*t3564 + t3772*t4579 + 0.1305*(t3772*t3777 - 1.*t1469*t4433*t4950) + t1469*t4950*t5347 + t6084*t6288 + t6332*t6377 + t6433*t6477 + t6496*t6513 + t6643*t6667 + t6773*t6787 + t6840*t6861 + t2355*t689 + t6917*t6949 - 0.7055*(-1.*t6826*t6861 + t6791*t6949) + 0.0184*(t6791*t6861 + t6826*t6949) + var1[0];
  p_output1[1]=0. + t1058*t4950*t5347 + t689*t7138 + t3564*t7170 + t4579*t7197 + 0.1305*(-1.*t1058*t4433*t4950 + t3777*t7197) + t6288*t7243 + t6377*t7276 + t6433*t7297 + t6496*t7329 + t6643*t7351 + t6773*t7377 + t6840*t7396 + t6917*t7410 - 0.7055*(-1.*t6826*t7396 + t6791*t7410) + 0.0184*(t6791*t7396 + t6826*t7410) + var1[1];
  p_output1[2]=0. - 1.*t1582*t5347 + t1995*t4950*t689 + t3564*t4950*t716 + t4579*t7524 + 0.1305*(t1582*t4433 + t3777*t7524) + t6288*t7599 + t6377*t7634 + t6433*t7652 + t6496*t7676 + t6643*t7722 + t6773*t7737 + t6840*t7760 + t6917*t7804 - 0.7055*(-1.*t6826*t7760 + t6791*t7804) + 0.0184*(t6791*t7760 + t6826*t7804) + var1[2];
}



void p_ankle_joint_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
