/*
 * Automatically Generated from Mathematica.
 * Mon 26 Feb 2018 15:43:03 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_MultisenseIMU_to_RightToeBottom.h"

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
static void output1(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  double t106;
  double t306;
  double t762;
  double t1271;
  double t1328;
  double t1423;
  double t1484;
  double t1703;
  double t2443;
  double t2474;
  double t2515;
  double t2533;
  double t2011;
  double t2212;
  double t2337;
  double t2761;
  double t2804;
  double t3111;
  double t3968;
  double t3971;
  double t4040;
  double t4115;
  double t3719;
  double t3857;
  double t3904;
  double t4524;
  double t4595;
  double t4722;
  double t5419;
  double t5543;
  double t5643;
  double t5655;
  double t5288;
  double t5295;
  double t5351;
  double t6486;
  double t6785;
  double t8320;
  double t8423;
  double t8455;
  double t8459;
  double t8466;
  double t8389;
  double t8396;
  double t8400;
  double t8479;
  double t8482;
  double t8483;
  double t577;
  double t666;
  double t676;
  double t1049;
  double t1198;
  double t1472;
  double t1504;
  double t1588;
  double t1709;
  double t1713;
  double t1726;
  double t2522;
  double t2539;
  double t2589;
  double t3306;
  double t3365;
  double t3488;
  double t8511;
  double t8513;
  double t8514;
  double t8516;
  double t8518;
  double t8519;
  double t4088;
  double t4186;
  double t4286;
  double t4999;
  double t5039;
  double t5046;
  double t8522;
  double t8523;
  double t8524;
  double t8527;
  double t8530;
  double t8531;
  double t5648;
  double t6133;
  double t6162;
  double t8350;
  double t8367;
  double t8371;
  double t8533;
  double t8534;
  double t8535;
  double t8537;
  double t8538;
  double t8539;
  double t8465;
  double t8472;
  double t8475;
  double t8485;
  double t8486;
  double t8487;
  double t8541;
  double t8542;
  double t8543;
  double t8545;
  double t8548;
  double t8551;
  double t8572;
  double t8573;
  double t8574;
  double t8576;
  double t8577;
  double t8578;
  double t8580;
  double t8581;
  double t8582;
  double t8584;
  double t8585;
  double t8586;
  double t8588;
  double t8589;
  double t8590;
  double t8592;
  double t8593;
  double t8594;
  t106 = Sin(var1[7]);
  t306 = Cos(var1[8]);
  t762 = Sin(var1[8]);
  t1271 = Cos(var1[9]);
  t1328 = -1.*t1271;
  t1423 = 1. + t1328;
  t1484 = Sin(var1[9]);
  t1703 = Cos(var1[7]);
  t2443 = Cos(var1[10]);
  t2474 = -1.*t2443;
  t2515 = 1. + t2474;
  t2533 = Sin(var1[10]);
  t2011 = t1271*t106*t762;
  t2212 = t1703*t1484;
  t2337 = t2011 + t2212;
  t2761 = t1703*t1271;
  t2804 = -1.*t106*t762*t1484;
  t3111 = t2761 + t2804;
  t3968 = Cos(var1[11]);
  t3971 = -1.*t3968;
  t4040 = 1. + t3971;
  t4115 = Sin(var1[11]);
  t3719 = t2443*t2337;
  t3857 = t3111*t2533;
  t3904 = t3719 + t3857;
  t4524 = t2443*t3111;
  t4595 = -1.*t2337*t2533;
  t4722 = t4524 + t4595;
  t5419 = Cos(var1[12]);
  t5543 = -1.*t5419;
  t5643 = 1. + t5543;
  t5655 = Sin(var1[12]);
  t5288 = t3968*t3904;
  t5295 = t4722*t4115;
  t5351 = t5288 + t5295;
  t6486 = t3968*t4722;
  t6785 = -1.*t3904*t4115;
  t8320 = t6486 + t6785;
  t8423 = Cos(var1[13]);
  t8455 = -1.*t8423;
  t8459 = 1. + t8455;
  t8466 = Sin(var1[13]);
  t8389 = t5419*t5351;
  t8396 = t8320*t5655;
  t8400 = t8389 + t8396;
  t8479 = t5419*t8320;
  t8482 = -1.*t5351*t5655;
  t8483 = t8479 + t8482;
  t577 = -1.*t306;
  t666 = 1. + t577;
  t676 = -0.135*t666;
  t1049 = 0.049*t762;
  t1198 = 0. + t676 + t1049;
  t1472 = -0.049*t1423;
  t1504 = -0.09*t1484;
  t1588 = 0. + t1472 + t1504;
  t1709 = -0.09*t1423;
  t1713 = 0.049*t1484;
  t1726 = 0. + t1709 + t1713;
  t2522 = -0.049*t2515;
  t2539 = -0.21*t2533;
  t2589 = 0. + t2522 + t2539;
  t3306 = -0.21*t2515;
  t3365 = 0.049*t2533;
  t3488 = 0. + t3306 + t3365;
  t8511 = t1703*t1271*t762;
  t8513 = -1.*t106*t1484;
  t8514 = t8511 + t8513;
  t8516 = -1.*t1271*t106;
  t8518 = -1.*t1703*t762*t1484;
  t8519 = t8516 + t8518;
  t4088 = -0.0016*t4040;
  t4186 = -0.2707*t4115;
  t4286 = 0. + t4088 + t4186;
  t4999 = -0.2707*t4040;
  t5039 = 0.0016*t4115;
  t5046 = 0. + t4999 + t5039;
  t8522 = t2443*t8514;
  t8523 = t8519*t2533;
  t8524 = t8522 + t8523;
  t8527 = t2443*t8519;
  t8530 = -1.*t8514*t2533;
  t8531 = t8527 + t8530;
  t5648 = 0.0184*t5643;
  t6133 = -0.7055*t5655;
  t6162 = 0. + t5648 + t6133;
  t8350 = -0.7055*t5643;
  t8367 = -0.0184*t5655;
  t8371 = 0. + t8350 + t8367;
  t8533 = t3968*t8524;
  t8534 = t8531*t4115;
  t8535 = t8533 + t8534;
  t8537 = t3968*t8531;
  t8538 = -1.*t8524*t4115;
  t8539 = t8537 + t8538;
  t8465 = -0.0216*t8459;
  t8472 = -1.1135*t8466;
  t8475 = 0. + t8465 + t8472;
  t8485 = -1.1135*t8459;
  t8486 = 0.0216*t8466;
  t8487 = 0. + t8485 + t8486;
  t8541 = t5419*t8535;
  t8542 = t8539*t5655;
  t8543 = t8541 + t8542;
  t8545 = t5419*t8539;
  t8548 = -1.*t8535*t5655;
  t8551 = t8545 + t8548;
  t8572 = t306*t1271*t2443;
  t8573 = -1.*t306*t1484*t2533;
  t8574 = t8572 + t8573;
  t8576 = -1.*t306*t2443*t1484;
  t8577 = -1.*t306*t1271*t2533;
  t8578 = t8576 + t8577;
  t8580 = t3968*t8574;
  t8581 = t8578*t4115;
  t8582 = t8580 + t8581;
  t8584 = t3968*t8578;
  t8585 = -1.*t8574*t4115;
  t8586 = t8584 + t8585;
  t8588 = t5419*t8582;
  t8589 = t8586*t5655;
  t8590 = t8588 + t8589;
  t8592 = t5419*t8586;
  t8593 = -1.*t8582*t5655;
  t8594 = t8592 + t8593;

  p_output1(0)=0.24925 - 0.135*t106 - 1.*t106*t1198 - 1.*t1703*t1726 - 1.*t2337*t2589 + 0.1305*t106*t306 - 1.*t3111*t3488 - 1.*t3904*t4286 - 1.*t4722*t5046 - 1.*t5351*t6162 - 1.*t106*t1588*t762 - 1.*t8320*t8371 - 1.*t8400*t8475 + 1.1312*(-1.*t8400*t8466 + t8423*t8483) - 0.0306*(t8400*t8423 + t8466*t8483) - 1.*t8483*t8487;
  p_output1(1)=-0.0302 - 0.135*(1. - 1.*t1703) + t1198*t1703 - 1.*t106*t1726 - 0.1305*t1703*t306 + t1588*t1703*t762 + t2589*t8514 + t3488*t8519 + t4286*t8524 + t5046*t8531 + t6162*t8535 + t8371*t8539 + t8475*t8543 + t8487*t8551 - 1.1312*(-1.*t8466*t8543 + t8423*t8551) + 0.0306*(t8423*t8543 + t8466*t8551);
  p_output1(2)=-0.047 + t1588*t306 + t1271*t2589*t306 - 1.*t1484*t306*t3488 - 0.049*t666 - 0.004500000000000004*t762 + t4286*t8574 + t5046*t8578 + t6162*t8582 + t8371*t8586 + t8475*t8590 + t8487*t8594 - 1.1312*(-1.*t8466*t8590 + t8423*t8594) + 0.0306*(t8423*t8590 + t8466*t8594);
}


       
void p_MultisenseIMU_to_RightToeBottom(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
