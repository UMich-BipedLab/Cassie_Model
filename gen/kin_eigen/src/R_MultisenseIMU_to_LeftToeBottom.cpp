/*
 * Automatically Generated from Mathematica.
 * Mon 26 Feb 2018 15:43:04 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_MultisenseIMU_to_LeftToeBottom.h"

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
  double t449;
  double t589;
  double t1257;
  double t916;
  double t2331;
  double t2388;
  double t2629;
  double t2369;
  double t2512;
  double t2522;
  double t2311;
  double t2989;
  double t3060;
  double t3065;
  double t3158;
  double t2581;
  double t3081;
  double t3102;
  double t2310;
  double t3200;
  double t3290;
  double t3365;
  double t3465;
  double t3155;
  double t3432;
  double t3457;
  double t2189;
  double t3470;
  double t3474;
  double t3481;
  double t3799;
  double t3464;
  double t3644;
  double t3668;
  double t1562;
  double t3964;
  double t4050;
  double t4085;
  double t5215;
  double t5316;
  double t5414;
  double t5580;
  double t5583;
  double t5615;
  double t5447;
  double t5645;
  double t5648;
  double t5873;
  double t6067;
  double t6118;
  double t5856;
  double t6174;
  double t6217;
  double t6224;
  double t6268;
  double t6546;
  double t6223;
  double t6566;
  double t7359;
  double t8384;
  double t8465;
  double t8496;
  double t8527;
  double t8531;
  double t8532;
  double t8536;
  double t8540;
  double t8541;
  double t8534;
  double t8544;
  double t8553;
  double t8560;
  double t8562;
  double t8569;
  double t8554;
  double t8575;
  double t8579;
  double t8587;
  double t8588;
  double t8592;
  double t3766;
  double t4135;
  double t4166;
  double t4582;
  double t4798;
  double t4863;
  double t8367;
  double t8502;
  double t8506;
  double t8511;
  double t8515;
  double t8519;
  double t8584;
  double t8600;
  double t8601;
  double t8607;
  double t8608;
  double t8611;
  t449 = Cos(var1[1]);
  t589 = Sin(var1[0]);
  t1257 = Sin(var1[1]);
  t916 = Cos(var1[0]);
  t2331 = Cos(var1[2]);
  t2388 = Sin(var1[2]);
  t2629 = Cos(var1[3]);
  t2369 = t2331*t589*t1257;
  t2512 = t916*t2388;
  t2522 = t2369 + t2512;
  t2311 = Sin(var1[3]);
  t2989 = t916*t2331;
  t3060 = -1.*t589*t1257*t2388;
  t3065 = t2989 + t3060;
  t3158 = Cos(var1[4]);
  t2581 = -1.*t2311*t2522;
  t3081 = t2629*t3065;
  t3102 = t2581 + t3081;
  t2310 = Sin(var1[4]);
  t3200 = t2629*t2522;
  t3290 = t2311*t3065;
  t3365 = t3200 + t3290;
  t3465 = Cos(var1[5]);
  t3155 = t2310*t3102;
  t3432 = t3158*t3365;
  t3457 = t3155 + t3432;
  t2189 = Sin(var1[5]);
  t3470 = t3158*t3102;
  t3474 = -1.*t2310*t3365;
  t3481 = t3470 + t3474;
  t3799 = Cos(var1[6]);
  t3464 = -1.*t2189*t3457;
  t3644 = t3465*t3481;
  t3668 = t3464 + t3644;
  t1562 = Sin(var1[6]);
  t3964 = t3465*t3457;
  t4050 = t2189*t3481;
  t4085 = t3964 + t4050;
  t5215 = t916*t2331*t1257;
  t5316 = -1.*t589*t2388;
  t5414 = t5215 + t5316;
  t5580 = -1.*t2331*t589;
  t5583 = -1.*t916*t1257*t2388;
  t5615 = t5580 + t5583;
  t5447 = -1.*t2311*t5414;
  t5645 = t2629*t5615;
  t5648 = t5447 + t5645;
  t5873 = t2629*t5414;
  t6067 = t2311*t5615;
  t6118 = t5873 + t6067;
  t5856 = t2310*t5648;
  t6174 = t3158*t6118;
  t6217 = t5856 + t6174;
  t6224 = t3158*t5648;
  t6268 = -1.*t2310*t6118;
  t6546 = t6224 + t6268;
  t6223 = -1.*t2189*t6217;
  t6566 = t3465*t6546;
  t7359 = t6223 + t6566;
  t8384 = t3465*t6217;
  t8465 = t2189*t6546;
  t8496 = t8384 + t8465;
  t8527 = -1.*t449*t2331*t2311;
  t8531 = -1.*t2629*t449*t2388;
  t8532 = t8527 + t8531;
  t8536 = t2629*t449*t2331;
  t8540 = -1.*t449*t2311*t2388;
  t8541 = t8536 + t8540;
  t8534 = t2310*t8532;
  t8544 = t3158*t8541;
  t8553 = t8534 + t8544;
  t8560 = t3158*t8532;
  t8562 = -1.*t2310*t8541;
  t8569 = t8560 + t8562;
  t8554 = -1.*t2189*t8553;
  t8575 = t3465*t8569;
  t8579 = t8554 + t8575;
  t8587 = t3465*t8553;
  t8588 = t2189*t8569;
  t8592 = t8587 + t8588;
  t3766 = t1562*t3668;
  t4135 = t3799*t4085;
  t4166 = t3766 + t4135;
  t4582 = t3799*t3668;
  t4798 = -1.*t1562*t4085;
  t4863 = t4582 + t4798;
  t8367 = t1562*t7359;
  t8502 = t3799*t8496;
  t8506 = t8367 + t8502;
  t8511 = t3799*t7359;
  t8515 = -1.*t1562*t8496;
  t8519 = t8511 + t8515;
  t8584 = t1562*t8579;
  t8600 = t3799*t8592;
  t8601 = t8584 + t8600;
  t8607 = t3799*t8579;
  t8608 = -1.*t1562*t8592;
  t8611 = t8607 + t8608;

  p_output1(0)=0. + t449*t589;
  p_output1(1)=0. - 1.*t449*t916;
  p_output1(2)=0. + t1257;
  p_output1(3)=0. - 0.642788*t4166 - 0.766044*t4863;
  p_output1(4)=0. + 0.642788*t8506 + 0.766044*t8519;
  p_output1(5)=0. + 0.642788*t8601 + 0.766044*t8611;
  p_output1(6)=0. + 0.766044*t4166 - 0.642788*t4863;
  p_output1(7)=0. - 0.766044*t8506 + 0.642788*t8519;
  p_output1(8)=0. - 0.766044*t8601 + 0.642788*t8611;
}


       
void R_MultisenseIMU_to_LeftToeBottom(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
