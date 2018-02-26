/*
 * Automatically Generated from Mathematica.
 * Mon 26 Feb 2018 15:43:02 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_MultisenseIMU_to_RightToeBottom.h"

#ifdef _MSC_VER
  #define INLINE __forceinline /* use __forceinline (VC++ specific) */
#else
  #define INLINE inline        /* use standard inline */
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
static void output1(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  double t132;
  double t146;
  double t512;
  double t352;
  double t1712;
  double t1892;
  double t1607;
  double t2061;
  double t2164;
  double t2212;
  double t1843;
  double t1900;
  double t1946;
  double t2385;
  double t1484;
  double t2539;
  double t2588;
  double t2589;
  double t2011;
  double t2474;
  double t2506;
  double t2750;
  double t1158;
  double t3111;
  double t3193;
  double t3425;
  double t2516;
  double t2761;
  double t3053;
  double t3487;
  double t768;
  double t3690;
  double t3691;
  double t3719;
  double t3054;
  double t3488;
  double t3570;
  double t3952;
  double t5056;
  double t5448;
  double t5543;
  double t4722;
  double t4749;
  double t4869;
  double t6785;
  double t6803;
  double t8034;
  double t5026;
  double t5603;
  double t6052;
  double t8294;
  double t8313;
  double t8320;
  double t6133;
  double t8161;
  double t8211;
  double t8358;
  double t8359;
  double t8367;
  double t8277;
  double t8323;
  double t8326;
  double t8431;
  double t8434;
  double t8439;
  double t8400;
  double t8401;
  double t8418;
  double t8451;
  double t8452;
  double t8455;
  double t8423;
  double t8441;
  double t8442;
  double t8462;
  double t8463;
  double t8465;
  double t8445;
  double t8456;
  double t8457;
  double t3652;
  double t3987;
  double t3994;
  double t4115;
  double t4197;
  double t4472;
  double t8350;
  double t8371;
  double t8377;
  double t8384;
  double t8385;
  double t8389;
  double t8459;
  double t8466;
  double t8467;
  double t8472;
  double t8473;
  double t8475;
  t132 = Cos(var1[8]);
  t146 = Sin(var1[7]);
  t512 = Sin(var1[8]);
  t352 = Cos(var1[7]);
  t1712 = Cos(var1[9]);
  t1892 = Sin(var1[9]);
  t1607 = Cos(var1[10]);
  t2061 = t352*t1712;
  t2164 = -1.*t146*t512*t1892;
  t2212 = t2061 + t2164;
  t1843 = t1712*t146*t512;
  t1900 = t352*t1892;
  t1946 = t1843 + t1900;
  t2385 = Sin(var1[10]);
  t1484 = Cos(var1[11]);
  t2539 = t1607*t2212;
  t2588 = -1.*t1946*t2385;
  t2589 = t2539 + t2588;
  t2011 = t1607*t1946;
  t2474 = t2212*t2385;
  t2506 = t2011 + t2474;
  t2750 = Sin(var1[11]);
  t1158 = Cos(var1[12]);
  t3111 = t1484*t2589;
  t3193 = -1.*t2506*t2750;
  t3425 = t3111 + t3193;
  t2516 = t1484*t2506;
  t2761 = t2589*t2750;
  t3053 = t2516 + t2761;
  t3487 = Sin(var1[12]);
  t768 = Cos(var1[13]);
  t3690 = t1158*t3425;
  t3691 = -1.*t3053*t3487;
  t3719 = t3690 + t3691;
  t3054 = t1158*t3053;
  t3488 = t3425*t3487;
  t3570 = t3054 + t3488;
  t3952 = Sin(var1[13]);
  t5056 = -1.*t1712*t146;
  t5448 = -1.*t352*t512*t1892;
  t5543 = t5056 + t5448;
  t4722 = t352*t1712*t512;
  t4749 = -1.*t146*t1892;
  t4869 = t4722 + t4749;
  t6785 = t1607*t5543;
  t6803 = -1.*t4869*t2385;
  t8034 = t6785 + t6803;
  t5026 = t1607*t4869;
  t5603 = t5543*t2385;
  t6052 = t5026 + t5603;
  t8294 = t1484*t8034;
  t8313 = -1.*t6052*t2750;
  t8320 = t8294 + t8313;
  t6133 = t1484*t6052;
  t8161 = t8034*t2750;
  t8211 = t6133 + t8161;
  t8358 = t1158*t8320;
  t8359 = -1.*t8211*t3487;
  t8367 = t8358 + t8359;
  t8277 = t1158*t8211;
  t8323 = t8320*t3487;
  t8326 = t8277 + t8323;
  t8431 = -1.*t132*t1607*t1892;
  t8434 = -1.*t132*t1712*t2385;
  t8439 = t8431 + t8434;
  t8400 = t132*t1712*t1607;
  t8401 = -1.*t132*t1892*t2385;
  t8418 = t8400 + t8401;
  t8451 = t1484*t8439;
  t8452 = -1.*t8418*t2750;
  t8455 = t8451 + t8452;
  t8423 = t1484*t8418;
  t8441 = t8439*t2750;
  t8442 = t8423 + t8441;
  t8462 = t1158*t8455;
  t8463 = -1.*t8442*t3487;
  t8465 = t8462 + t8463;
  t8445 = t1158*t8442;
  t8456 = t8455*t3487;
  t8457 = t8445 + t8456;
  t3652 = t768*t3570;
  t3987 = t3719*t3952;
  t3994 = t3652 + t3987;
  t4115 = t768*t3719;
  t4197 = -1.*t3570*t3952;
  t4472 = t4115 + t4197;
  t8350 = t768*t8326;
  t8371 = t8367*t3952;
  t8377 = t8350 + t8371;
  t8384 = t768*t8367;
  t8385 = -1.*t8326*t3952;
  t8389 = t8384 + t8385;
  t8459 = t768*t8457;
  t8466 = t8465*t3952;
  t8467 = t8459 + t8466;
  t8472 = t768*t8465;
  t8473 = -1.*t8457*t3952;
  t8475 = t8472 + t8473;

  p_output1(0)=0. + t132*t146;
  p_output1(1)=0. - 1.*t132*t352;
  p_output1(2)=0. + t512;
  p_output1(3)=0. - 0.642788*t3994 - 0.766044*t4472;
  p_output1(4)=0. + 0.642788*t8377 + 0.766044*t8389;
  p_output1(5)=0. + 0.642788*t8467 + 0.766044*t8475;
  p_output1(6)=0. + 0.766044*t3994 - 0.642788*t4472;
  p_output1(7)=0. - 0.766044*t8377 + 0.642788*t8389;
  p_output1(8)=0. - 0.766044*t8467 + 0.642788*t8475;
}


       
void R_MultisenseIMU_to_RightToeBottom(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
