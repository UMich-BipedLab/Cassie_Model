/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:11:59 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_toe_joint_right_src.h"

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
  double t67;
  double t2842;
  double t3712;
  double t2990;
  double t4546;
  double t1176;
  double t1184;
  double t1233;
  double t1441;
  double t1916;
  double t3283;
  double t4555;
  double t4982;
  double t5040;
  double t8030;
  double t8092;
  double t8147;
  double t183;
  double t8163;
  double t8167;
  double t8168;
  double t8174;
  double t8185;
  double t8189;
  double t8211;
  double t8230;
  double t8235;
  double t8236;
  double t8254;
  double t8260;
  double t8278;
  double t8288;
  double t8293;
  double t8296;
  double t8303;
  double t8310;
  double t8313;
  double t8315;
  double t8333;
  double t8335;
  double t8337;
  double t8342;
  double t8349;
  double t8350;
  double t8361;
  double t8365;
  double t8367;
  double t8373;
  double t8395;
  double t8396;
  double t8398;
  double t8401;
  double t8403;
  double t8405;
  double t8409;
  double t8414;
  double t8417;
  double t8418;
  double t8431;
  double t8433;
  double t8438;
  double t1266;
  double t1571;
  double t1874;
  double t1953;
  double t2215;
  double t5242;
  double t5353;
  double t5559;
  double t8022;
  double t8151;
  double t8156;
  double t8157;
  double t8473;
  double t8474;
  double t8477;
  double t8482;
  double t8483;
  double t8484;
  double t8194;
  double t8223;
  double t8227;
  double t8487;
  double t8495;
  double t8497;
  double t8246;
  double t8249;
  double t8252;
  double t8302;
  double t8306;
  double t8308;
  double t8505;
  double t8506;
  double t8513;
  double t8530;
  double t8534;
  double t8537;
  double t8322;
  double t8327;
  double t8332;
  double t8352;
  double t8363;
  double t8364;
  double t8542;
  double t8543;
  double t8547;
  double t8550;
  double t8551;
  double t8552;
  double t8382;
  double t8383;
  double t8389;
  double t8406;
  double t8412;
  double t8413;
  double t8556;
  double t8557;
  double t8558;
  double t8560;
  double t8564;
  double t8571;
  double t8425;
  double t8429;
  double t8430;
  double t8574;
  double t8575;
  double t8578;
  double t8582;
  double t8585;
  double t8588;
  double t8619;
  double t8620;
  double t8621;
  double t8623;
  double t8624;
  double t8626;
  double t8637;
  double t8639;
  double t8640;
  double t8644;
  double t8646;
  double t8647;
  double t8649;
  double t8650;
  double t8651;
  double t8653;
  double t8654;
  double t8656;
  double t8661;
  double t8662;
  double t8663;
  double t8667;
  double t8668;
  double t8670;
  double t8674;
  double t8675;
  double t8676;
  t67 = Cos(var1[3]);
  t2842 = Cos(var1[5]);
  t3712 = Sin(var1[3]);
  t2990 = Sin(var1[4]);
  t4546 = Sin(var1[5]);
  t1176 = Cos(var1[14]);
  t1184 = -1.*t1176;
  t1233 = 1. + t1184;
  t1441 = Sin(var1[14]);
  t1916 = Sin(var1[13]);
  t3283 = t67*t2842*t2990;
  t4555 = t3712*t4546;
  t4982 = t3283 + t4555;
  t5040 = Cos(var1[13]);
  t8030 = -1.*t2842*t3712;
  t8092 = t67*t2990*t4546;
  t8147 = t8030 + t8092;
  t183 = Cos(var1[4]);
  t8163 = t1916*t4982;
  t8167 = t5040*t8147;
  t8168 = t8163 + t8167;
  t8174 = Cos(var1[15]);
  t8185 = -1.*t8174;
  t8189 = 1. + t8185;
  t8211 = Sin(var1[15]);
  t8230 = t5040*t4982;
  t8235 = -1.*t1916*t8147;
  t8236 = t8230 + t8235;
  t8254 = t1176*t67*t183;
  t8260 = t1441*t8168;
  t8278 = t8254 + t8260;
  t8288 = Cos(var1[16]);
  t8293 = -1.*t8288;
  t8296 = 1. + t8293;
  t8303 = Sin(var1[16]);
  t8310 = t8211*t8236;
  t8313 = t8174*t8278;
  t8315 = t8310 + t8313;
  t8333 = t8174*t8236;
  t8335 = -1.*t8211*t8278;
  t8337 = t8333 + t8335;
  t8342 = Cos(var1[17]);
  t8349 = -1.*t8342;
  t8350 = 1. + t8349;
  t8361 = Sin(var1[17]);
  t8365 = -1.*t8303*t8315;
  t8367 = t8288*t8337;
  t8373 = t8365 + t8367;
  t8395 = t8288*t8315;
  t8396 = t8303*t8337;
  t8398 = t8395 + t8396;
  t8401 = Cos(var1[18]);
  t8403 = -1.*t8401;
  t8405 = 1. + t8403;
  t8409 = Sin(var1[18]);
  t8414 = t8361*t8373;
  t8417 = t8342*t8398;
  t8418 = t8414 + t8417;
  t8431 = t8342*t8373;
  t8433 = -1.*t8361*t8398;
  t8438 = t8431 + t8433;
  t1266 = -0.049*t1233;
  t1571 = -0.135*t1441;
  t1874 = 0. + t1266 + t1571;
  t1953 = 0.135*t1916;
  t2215 = 0. + t1953;
  t5242 = -1.*t5040;
  t5353 = 1. + t5242;
  t5559 = -0.135*t5353;
  t8022 = 0. + t5559;
  t8151 = -0.135*t1233;
  t8156 = 0.049*t1441;
  t8157 = 0. + t8151 + t8156;
  t8473 = t2842*t3712*t2990;
  t8474 = -1.*t67*t4546;
  t8477 = t8473 + t8474;
  t8482 = t67*t2842;
  t8483 = t3712*t2990*t4546;
  t8484 = t8482 + t8483;
  t8194 = -0.09*t8189;
  t8223 = 0.049*t8211;
  t8227 = 0. + t8194 + t8223;
  t8487 = t1916*t8477;
  t8495 = t5040*t8484;
  t8497 = t8487 + t8495;
  t8246 = -0.049*t8189;
  t8249 = -0.09*t8211;
  t8252 = 0. + t8246 + t8249;
  t8302 = -0.049*t8296;
  t8306 = -0.21*t8303;
  t8308 = 0. + t8302 + t8306;
  t8505 = t5040*t8477;
  t8506 = -1.*t1916*t8484;
  t8513 = t8505 + t8506;
  t8530 = t1176*t183*t3712;
  t8534 = t1441*t8497;
  t8537 = t8530 + t8534;
  t8322 = -0.21*t8296;
  t8327 = 0.049*t8303;
  t8332 = 0. + t8322 + t8327;
  t8352 = -0.2707*t8350;
  t8363 = 0.0016*t8361;
  t8364 = 0. + t8352 + t8363;
  t8542 = t8211*t8513;
  t8543 = t8174*t8537;
  t8547 = t8542 + t8543;
  t8550 = t8174*t8513;
  t8551 = -1.*t8211*t8537;
  t8552 = t8550 + t8551;
  t8382 = -0.0016*t8350;
  t8383 = -0.2707*t8361;
  t8389 = 0. + t8382 + t8383;
  t8406 = 0.0184*t8405;
  t8412 = -0.7055*t8409;
  t8413 = 0. + t8406 + t8412;
  t8556 = -1.*t8303*t8547;
  t8557 = t8288*t8552;
  t8558 = t8556 + t8557;
  t8560 = t8288*t8547;
  t8564 = t8303*t8552;
  t8571 = t8560 + t8564;
  t8425 = -0.7055*t8405;
  t8429 = -0.0184*t8409;
  t8430 = 0. + t8425 + t8429;
  t8574 = t8361*t8558;
  t8575 = t8342*t8571;
  t8578 = t8574 + t8575;
  t8582 = t8342*t8558;
  t8585 = -1.*t8361*t8571;
  t8588 = t8582 + t8585;
  t8619 = t183*t2842*t1916;
  t8620 = t5040*t183*t4546;
  t8621 = t8619 + t8620;
  t8623 = t5040*t183*t2842;
  t8624 = -1.*t183*t1916*t4546;
  t8626 = t8623 + t8624;
  t8637 = -1.*t1176*t2990;
  t8639 = t1441*t8621;
  t8640 = t8637 + t8639;
  t8644 = t8211*t8626;
  t8646 = t8174*t8640;
  t8647 = t8644 + t8646;
  t8649 = t8174*t8626;
  t8650 = -1.*t8211*t8640;
  t8651 = t8649 + t8650;
  t8653 = -1.*t8303*t8647;
  t8654 = t8288*t8651;
  t8656 = t8653 + t8654;
  t8661 = t8288*t8647;
  t8662 = t8303*t8651;
  t8663 = t8661 + t8662;
  t8667 = t8361*t8656;
  t8668 = t8342*t8663;
  t8670 = t8667 + t8668;
  t8674 = t8342*t8656;
  t8675 = -1.*t8361*t8663;
  t8676 = t8674 + t8675;
  p_output1[0]=0. + t2215*t4982 + t183*t1874*t67 + t8022*t8147 + t8157*t8168 - 0.1305*(-1.*t1441*t183*t67 + t1176*t8168) + t8227*t8236 + t8252*t8278 + t8308*t8315 + t8332*t8337 + t8364*t8373 + t8389*t8398 + t8413*t8418 + t8430*t8438 - 1.1135*(-1.*t8409*t8418 + t8401*t8438) - 0.0216*(t8401*t8418 + t8409*t8438) + var1[0];
  p_output1[1]=0. + t183*t1874*t3712 + t2215*t8477 + t8022*t8484 + t8157*t8497 - 0.1305*(-1.*t1441*t183*t3712 + t1176*t8497) + t8227*t8513 + t8252*t8537 + t8308*t8547 + t8332*t8552 + t8364*t8558 + t8389*t8571 + t8413*t8578 + t8430*t8588 - 1.1135*(-1.*t8409*t8578 + t8401*t8588) - 0.0216*(t8401*t8578 + t8409*t8588) + var1[1];
  p_output1[2]=0. + t183*t2215*t2842 - 1.*t1874*t2990 + t183*t4546*t8022 + t8157*t8621 - 0.1305*(t1441*t2990 + t1176*t8621) + t8227*t8626 + t8252*t8640 + t8308*t8647 + t8332*t8651 + t8364*t8656 + t8389*t8663 + t8413*t8670 + t8430*t8676 - 1.1135*(-1.*t8409*t8670 + t8401*t8676) - 0.0216*(t8401*t8670 + t8409*t8676) + var1[2];
}



void p_toe_joint_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
