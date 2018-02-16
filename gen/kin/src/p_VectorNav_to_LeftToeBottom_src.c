/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:17:21 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_VectorNav_to_LeftToeBottom_src.h"

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
  double t150;
  double t2327;
  double t2349;
  double t2423;
  double t2432;
  double t2491;
  double t3107;
  double t3684;
  double t3852;
  double t3886;
  double t3931;
  double t4016;
  double t4038;
  double t4226;
  double t4323;
  double t4326;
  double t4339;
  double t4376;
  double t4382;
  double t4388;
  double t4442;
  double t4455;
  double t4467;
  double t4474;
  double t4500;
  double t4510;
  double t4511;
  double t4518;
  double t4520;
  double t4523;
  double t4525;
  double t4529;
  double t4536;
  double t4539;
  double t4552;
  double t4553;
  double t4557;
  double t5095;
  double t196;
  double t878;
  double t2873;
  double t3016;
  double t3061;
  double t3074;
  double t3137;
  double t3140;
  double t2436;
  double t2794;
  double t2832;
  double t5609;
  double t3534;
  double t3597;
  double t3608;
  double t3892;
  double t3937;
  double t3994;
  double t5762;
  double t5788;
  double t5819;
  double t5863;
  double t5887;
  double t5915;
  double t4251;
  double t4287;
  double t4290;
  double t4416;
  double t4443;
  double t4451;
  double t5935;
  double t6087;
  double t6096;
  double t6169;
  double t6191;
  double t6271;
  double t4484;
  double t4486;
  double t4497;
  double t4524;
  double t4527;
  double t4528;
  double t6312;
  double t6324;
  double t6374;
  double t6424;
  double t6444;
  double t6451;
  double t4542;
  double t4545;
  double t4547;
  double t6517;
  double t6523;
  double t6560;
  double t6611;
  double t6622;
  double t6654;
  double t5397;
  double t5422;
  double t5448;
  double t5658;
  double t5691;
  double t5701;
  double t6929;
  double t6949;
  double t6992;
  double t7016;
  double t7034;
  double t7039;
  double t7053;
  double t7060;
  double t7063;
  double t7075;
  double t7086;
  double t7090;
  double t7097;
  double t7104;
  double t7110;
  double t7112;
  double t7113;
  double t7116;
  double t7124;
  double t7145;
  double t7148;
  double t7155;
  double t7157;
  double t7158;
  t150 = Cos(var1[1]);
  t2327 = Cos(var1[2]);
  t2349 = Cos(var1[3]);
  t2423 = -1.*t2349;
  t2432 = 1. + t2423;
  t2491 = Sin(var1[3]);
  t3107 = Sin(var1[2]);
  t3684 = Cos(var1[4]);
  t3852 = -1.*t3684;
  t3886 = 1. + t3852;
  t3931 = Sin(var1[4]);
  t4016 = -1.*t150*t2327*t2491;
  t4038 = -1.*t2349*t150*t3107;
  t4226 = t4016 + t4038;
  t4323 = t2349*t150*t2327;
  t4326 = -1.*t150*t2491*t3107;
  t4339 = t4323 + t4326;
  t4376 = Cos(var1[5]);
  t4382 = -1.*t4376;
  t4388 = 1. + t4382;
  t4442 = Sin(var1[5]);
  t4455 = t3931*t4226;
  t4467 = t3684*t4339;
  t4474 = t4455 + t4467;
  t4500 = t3684*t4226;
  t4510 = -1.*t3931*t4339;
  t4511 = t4500 + t4510;
  t4518 = Cos(var1[6]);
  t4520 = -1.*t4518;
  t4523 = 1. + t4520;
  t4525 = Sin(var1[6]);
  t4529 = -1.*t4442*t4474;
  t4536 = t4376*t4511;
  t4539 = t4529 + t4536;
  t4552 = t4376*t4474;
  t4553 = t4442*t4511;
  t4557 = t4552 + t4553;
  t5095 = Cos(var1[0]);
  t196 = -1.*t150;
  t878 = 1. + t196;
  t2873 = Sin(var1[1]);
  t3016 = -1.*t2327;
  t3061 = 1. + t3016;
  t3074 = -0.049*t3061;
  t3137 = -0.09*t3107;
  t3140 = 0. + t3074 + t3137;
  t2436 = -0.049*t2432;
  t2794 = -0.21*t2491;
  t2832 = 0. + t2436 + t2794;
  t5609 = Sin(var1[0]);
  t3534 = -0.21*t2432;
  t3597 = 0.049*t2491;
  t3608 = 0. + t3534 + t3597;
  t3892 = -0.2707*t3886;
  t3937 = 0.0016*t3931;
  t3994 = 0. + t3892 + t3937;
  t5762 = t5095*t2327*t2873;
  t5788 = -1.*t5609*t3107;
  t5819 = t5762 + t5788;
  t5863 = -1.*t2327*t5609;
  t5887 = -1.*t5095*t2873*t3107;
  t5915 = t5863 + t5887;
  t4251 = -0.0016*t3886;
  t4287 = -0.2707*t3931;
  t4290 = 0. + t4251 + t4287;
  t4416 = 0.0184*t4388;
  t4443 = -0.7055*t4442;
  t4451 = 0. + t4416 + t4443;
  t5935 = -1.*t2491*t5819;
  t6087 = t2349*t5915;
  t6096 = t5935 + t6087;
  t6169 = t2349*t5819;
  t6191 = t2491*t5915;
  t6271 = t6169 + t6191;
  t4484 = -0.7055*t4388;
  t4486 = -0.0184*t4442;
  t4497 = 0. + t4484 + t4486;
  t4524 = -1.1135*t4523;
  t4527 = 0.0216*t4525;
  t4528 = 0. + t4524 + t4527;
  t6312 = t3931*t6096;
  t6324 = t3684*t6271;
  t6374 = t6312 + t6324;
  t6424 = t3684*t6096;
  t6444 = -1.*t3931*t6271;
  t6451 = t6424 + t6444;
  t4542 = -0.0216*t4523;
  t4545 = -1.1135*t4525;
  t4547 = 0. + t4542 + t4545;
  t6517 = -1.*t4442*t6374;
  t6523 = t4376*t6451;
  t6560 = t6517 + t6523;
  t6611 = t4376*t6374;
  t6622 = t4442*t6451;
  t6654 = t6611 + t6622;
  t5397 = 0.135*t878;
  t5422 = 0.049*t2873;
  t5448 = 0. + t5397 + t5422;
  t5658 = -0.09*t3061;
  t5691 = 0.049*t3107;
  t5701 = 0. + t5658 + t5691;
  t6929 = t2327*t5609*t2873;
  t6949 = t5095*t3107;
  t6992 = t6929 + t6949;
  t7016 = t5095*t2327;
  t7034 = -1.*t5609*t2873*t3107;
  t7039 = t7016 + t7034;
  t7053 = -1.*t2491*t6992;
  t7060 = t2349*t7039;
  t7063 = t7053 + t7060;
  t7075 = t2349*t6992;
  t7086 = t2491*t7039;
  t7090 = t7075 + t7086;
  t7097 = t3931*t7063;
  t7104 = t3684*t7090;
  t7110 = t7097 + t7104;
  t7112 = t3684*t7063;
  t7113 = -1.*t3931*t7090;
  t7116 = t7112 + t7113;
  t7124 = -1.*t4442*t7110;
  t7145 = t4376*t7116;
  t7148 = t7124 + t7145;
  t7155 = t4376*t7110;
  t7157 = t4442*t7116;
  t7158 = t7155 + t7157;
  p_output1[0]=-0.03155 + t150*t2327*t2832 + 0.004500000000000004*t2873 + t150*t3140 - 1.*t150*t3107*t3608 + t3994*t4226 + t4290*t4339 + t4451*t4474 + t4497*t4511 + t4528*t4539 + t4547*t4557 + 0.0306*(t4525*t4539 + t4518*t4557) - 1.1312*(t4518*t4539 - 1.*t4525*t4557) - 0.049*t878;
  p_output1[1]=0. - 0.135*(1. - 1.*t5095) - 0.1305*t150*t5095 - 1.*t2873*t3140*t5095 - 1.*t5095*t5448 + t5609*t5701 - 1.*t2832*t5819 - 1.*t3608*t5915 - 1.*t3994*t6096 - 1.*t4290*t6271 - 1.*t4451*t6374 - 1.*t4497*t6451 - 1.*t4528*t6560 - 1.*t4547*t6654 - 0.0306*(t4525*t6560 + t4518*t6654) + 1.1312*(t4518*t6560 - 1.*t4525*t6654);
  p_output1[2]=-0.07996 + 0.135*t5609 - 0.1305*t150*t5609 - 1.*t2873*t3140*t5609 - 1.*t5448*t5609 - 1.*t5095*t5701 - 1.*t2832*t6992 - 1.*t3608*t7039 - 1.*t3994*t7063 - 1.*t4290*t7090 - 1.*t4451*t7110 - 1.*t4497*t7116 - 1.*t4528*t7148 - 1.*t4547*t7158 - 0.0306*(t4525*t7148 + t4518*t7158) + 1.1312*(t4518*t7148 - 1.*t4525*t7158);
}



void p_VectorNav_to_LeftToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
