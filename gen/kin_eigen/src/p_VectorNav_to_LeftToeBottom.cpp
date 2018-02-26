/*
 * Automatically Generated from Mathematica.
 * Mon 26 Feb 2018 15:42:57 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_VectorNav_to_LeftToeBottom.h"

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
  double t274;
  double t620;
  double t721;
  double t722;
  double t878;
  double t881;
  double t1485;
  double t2424;
  double t2428;
  double t2453;
  double t2587;
  double t2877;
  double t2996;
  double t3011;
  double t3193;
  double t3263;
  double t3270;
  double t3304;
  double t3343;
  double t3391;
  double t3983;
  double t4031;
  double t4115;
  double t4376;
  double t4959;
  double t5049;
  double t5056;
  double t5270;
  double t5719;
  double t5793;
  double t6047;
  double t6567;
  double t7978;
  double t8001;
  double t8186;
  double t8197;
  double t8210;
  double t8304;
  double t441;
  double t496;
  double t1173;
  double t1352;
  double t1471;
  double t1484;
  double t1494;
  double t1642;
  double t879;
  double t898;
  double t995;
  double t8324;
  double t1814;
  double t1879;
  double t1921;
  double t2552;
  double t2632;
  double t2690;
  double t8330;
  double t8331;
  double t8334;
  double t8337;
  double t8339;
  double t8342;
  double t3057;
  double t3142;
  double t3153;
  double t3425;
  double t3987;
  double t3990;
  double t8348;
  double t8350;
  double t8351;
  double t8354;
  double t8355;
  double t8356;
  double t4557;
  double t4722;
  double t4736;
  double t5811;
  double t6052;
  double t6381;
  double t8359;
  double t8362;
  double t8364;
  double t8367;
  double t8368;
  double t8370;
  double t8034;
  double t8161;
  double t8178;
  double t8372;
  double t8373;
  double t8374;
  double t8376;
  double t8377;
  double t8378;
  double t8316;
  double t8317;
  double t8319;
  double t8325;
  double t8326;
  double t8327;
  double t8400;
  double t8401;
  double t8402;
  double t8405;
  double t8408;
  double t8410;
  double t8413;
  double t8414;
  double t8416;
  double t8418;
  double t8419;
  double t8420;
  double t8422;
  double t8423;
  double t8424;
  double t8426;
  double t8427;
  double t8428;
  double t8430;
  double t8431;
  double t8432;
  double t8434;
  double t8435;
  double t8436;
  t274 = Cos(var1[1]);
  t620 = Cos(var1[2]);
  t721 = Cos(var1[3]);
  t722 = -1.*t721;
  t878 = 1. + t722;
  t881 = Sin(var1[3]);
  t1485 = Sin(var1[2]);
  t2424 = Cos(var1[4]);
  t2428 = -1.*t2424;
  t2453 = 1. + t2428;
  t2587 = Sin(var1[4]);
  t2877 = -1.*t274*t620*t881;
  t2996 = -1.*t721*t274*t1485;
  t3011 = t2877 + t2996;
  t3193 = t721*t274*t620;
  t3263 = -1.*t274*t881*t1485;
  t3270 = t3193 + t3263;
  t3304 = Cos(var1[5]);
  t3343 = -1.*t3304;
  t3391 = 1. + t3343;
  t3983 = Sin(var1[5]);
  t4031 = t2587*t3011;
  t4115 = t2424*t3270;
  t4376 = t4031 + t4115;
  t4959 = t2424*t3011;
  t5049 = -1.*t2587*t3270;
  t5056 = t4959 + t5049;
  t5270 = Cos(var1[6]);
  t5719 = -1.*t5270;
  t5793 = 1. + t5719;
  t6047 = Sin(var1[6]);
  t6567 = -1.*t3983*t4376;
  t7978 = t3304*t5056;
  t8001 = t6567 + t7978;
  t8186 = t3304*t4376;
  t8197 = t3983*t5056;
  t8210 = t8186 + t8197;
  t8304 = Cos(var1[0]);
  t441 = -1.*t274;
  t496 = 1. + t441;
  t1173 = Sin(var1[1]);
  t1352 = -1.*t620;
  t1471 = 1. + t1352;
  t1484 = -0.049*t1471;
  t1494 = -0.09*t1485;
  t1642 = 0. + t1484 + t1494;
  t879 = -0.049*t878;
  t898 = -0.21*t881;
  t995 = 0. + t879 + t898;
  t8324 = Sin(var1[0]);
  t1814 = -0.21*t878;
  t1879 = 0.049*t881;
  t1921 = 0. + t1814 + t1879;
  t2552 = -0.2707*t2453;
  t2632 = 0.0016*t2587;
  t2690 = 0. + t2552 + t2632;
  t8330 = t8304*t620*t1173;
  t8331 = -1.*t8324*t1485;
  t8334 = t8330 + t8331;
  t8337 = -1.*t620*t8324;
  t8339 = -1.*t8304*t1173*t1485;
  t8342 = t8337 + t8339;
  t3057 = -0.0016*t2453;
  t3142 = -0.2707*t2587;
  t3153 = 0. + t3057 + t3142;
  t3425 = 0.0184*t3391;
  t3987 = -0.7055*t3983;
  t3990 = 0. + t3425 + t3987;
  t8348 = -1.*t881*t8334;
  t8350 = t721*t8342;
  t8351 = t8348 + t8350;
  t8354 = t721*t8334;
  t8355 = t881*t8342;
  t8356 = t8354 + t8355;
  t4557 = -0.7055*t3391;
  t4722 = -0.0184*t3983;
  t4736 = 0. + t4557 + t4722;
  t5811 = -1.1135*t5793;
  t6052 = 0.0216*t6047;
  t6381 = 0. + t5811 + t6052;
  t8359 = t2587*t8351;
  t8362 = t2424*t8356;
  t8364 = t8359 + t8362;
  t8367 = t2424*t8351;
  t8368 = -1.*t2587*t8356;
  t8370 = t8367 + t8368;
  t8034 = -0.0216*t5793;
  t8161 = -1.1135*t6047;
  t8178 = 0. + t8034 + t8161;
  t8372 = -1.*t3983*t8364;
  t8373 = t3304*t8370;
  t8374 = t8372 + t8373;
  t8376 = t3304*t8364;
  t8377 = t3983*t8370;
  t8378 = t8376 + t8377;
  t8316 = 0.135*t496;
  t8317 = 0.049*t1173;
  t8319 = 0. + t8316 + t8317;
  t8325 = -0.09*t1471;
  t8326 = 0.049*t1485;
  t8327 = 0. + t8325 + t8326;
  t8400 = t620*t8324*t1173;
  t8401 = t8304*t1485;
  t8402 = t8400 + t8401;
  t8405 = t8304*t620;
  t8408 = -1.*t8324*t1173*t1485;
  t8410 = t8405 + t8408;
  t8413 = -1.*t881*t8402;
  t8414 = t721*t8410;
  t8416 = t8413 + t8414;
  t8418 = t721*t8402;
  t8419 = t881*t8410;
  t8420 = t8418 + t8419;
  t8422 = t2587*t8416;
  t8423 = t2424*t8420;
  t8424 = t8422 + t8423;
  t8426 = t2424*t8416;
  t8427 = -1.*t2587*t8420;
  t8428 = t8426 + t8427;
  t8430 = -1.*t3983*t8424;
  t8431 = t3304*t8428;
  t8432 = t8430 + t8431;
  t8434 = t3304*t8424;
  t8435 = t3983*t8428;
  t8436 = t8434 + t8435;

  p_output1(0)=-0.03155 + 0.004500000000000004*t1173 + t1642*t274 - 1.*t1485*t1921*t274 + t2690*t3011 + t3153*t3270 + t3990*t4376 - 0.049*t496 + t4736*t5056 + t6381*t8001 + t8178*t8210 + 0.0306*(t6047*t8001 + t5270*t8210) - 1.1312*(t5270*t8001 - 1.*t6047*t8210) + t274*t620*t995;
  p_output1(1)=0. - 0.135*(1. - 1.*t8304) - 1.*t1173*t1642*t8304 - 0.1305*t274*t8304 - 1.*t8304*t8319 + t8324*t8327 - 1.*t1921*t8342 - 1.*t2690*t8351 - 1.*t3153*t8356 - 1.*t3990*t8364 - 1.*t4736*t8370 - 1.*t6381*t8374 - 1.*t8178*t8378 - 0.0306*(t6047*t8374 + t5270*t8378) + 1.1312*(t5270*t8374 - 1.*t6047*t8378) - 1.*t8334*t995;
  p_output1(2)=-0.07996 + 0.135*t8324 - 1.*t1173*t1642*t8324 - 0.1305*t274*t8324 - 1.*t8319*t8324 - 1.*t8304*t8327 - 1.*t1921*t8410 - 1.*t2690*t8416 - 1.*t3153*t8420 - 1.*t3990*t8424 - 1.*t4736*t8428 - 1.*t6381*t8432 - 1.*t8178*t8436 - 0.0306*(t6047*t8432 + t5270*t8436) + 1.1312*(t5270*t8432 - 1.*t6047*t8436) - 1.*t8402*t995;
}


       
void p_VectorNav_to_LeftToeBottom(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
