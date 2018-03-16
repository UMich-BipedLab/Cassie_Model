/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 12:16:40 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_MultisenseIMU_to_LeftToeBottom.h"

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
  double t74;
  double t123;
  double t345;
  double t567;
  double t624;
  double t724;
  double t755;
  double t1103;
  double t1778;
  double t1961;
  double t2060;
  double t2080;
  double t2468;
  double t2498;
  double t2502;
  double t2774;
  double t2789;
  double t2804;
  double t2925;
  double t2944;
  double t3085;
  double t3331;
  double t3940;
  double t3956;
  double t4028;
  double t5079;
  double t5085;
  double t5589;
  double t6540;
  double t6691;
  double t6768;
  double t6972;
  double t7164;
  double t7183;
  double t7186;
  double t7275;
  double t7291;
  double t7301;
  double t7311;
  double t7319;
  double t7322;
  double t7343;
  double t7367;
  double t7370;
  double t7371;
  double t7379;
  double t7380;
  double t7381;
  double t129;
  double t259;
  double t278;
  double t457;
  double t474;
  double t725;
  double t792;
  double t897;
  double t1148;
  double t1184;
  double t1273;
  double t2068;
  double t2095;
  double t2138;
  double t2568;
  double t2592;
  double t2623;
  double t3304;
  double t3366;
  double t3491;
  double t7405;
  double t7406;
  double t7407;
  double t7409;
  double t7411;
  double t7412;
  double t4416;
  double t4956;
  double t4957;
  double t6883;
  double t7083;
  double t7093;
  double t7415;
  double t7416;
  double t7418;
  double t7421;
  double t7423;
  double t7424;
  double t7202;
  double t7233;
  double t7253;
  double t7330;
  double t7356;
  double t7361;
  double t7427;
  double t7428;
  double t7429;
  double t7431;
  double t7432;
  double t7433;
  double t7375;
  double t7376;
  double t7378;
  double t7435;
  double t7436;
  double t7437;
  double t7439;
  double t7440;
  double t7441;
  double t7466;
  double t7467;
  double t7468;
  double t7470;
  double t7471;
  double t7472;
  double t7474;
  double t7475;
  double t7476;
  double t7478;
  double t7479;
  double t7480;
  double t7482;
  double t7483;
  double t7484;
  double t7486;
  double t7487;
  double t7488;
  t74 = Sin(var1[0]);
  t123 = Cos(var1[1]);
  t345 = Sin(var1[1]);
  t567 = Cos(var1[2]);
  t624 = -1.*t567;
  t724 = 1. + t624;
  t755 = Sin(var1[2]);
  t1103 = Cos(var1[0]);
  t1778 = Cos(var1[3]);
  t1961 = -1.*t1778;
  t2060 = 1. + t1961;
  t2080 = Sin(var1[3]);
  t2468 = t567*t74*t345;
  t2498 = t1103*t755;
  t2502 = t2468 + t2498;
  t2774 = t1103*t567;
  t2789 = -1.*t74*t345*t755;
  t2804 = t2774 + t2789;
  t2925 = Cos(var1[4]);
  t2944 = -1.*t2925;
  t3085 = 1. + t2944;
  t3331 = Sin(var1[4]);
  t3940 = -1.*t2080*t2502;
  t3956 = t1778*t2804;
  t4028 = t3940 + t3956;
  t5079 = t1778*t2502;
  t5085 = t2080*t2804;
  t5589 = t5079 + t5085;
  t6540 = Cos(var1[5]);
  t6691 = -1.*t6540;
  t6768 = 1. + t6691;
  t6972 = Sin(var1[5]);
  t7164 = t3331*t4028;
  t7183 = t2925*t5589;
  t7186 = t7164 + t7183;
  t7275 = t2925*t4028;
  t7291 = -1.*t3331*t5589;
  t7301 = t7275 + t7291;
  t7311 = Cos(var1[6]);
  t7319 = -1.*t7311;
  t7322 = 1. + t7319;
  t7343 = Sin(var1[6]);
  t7367 = -1.*t6972*t7186;
  t7370 = t6540*t7301;
  t7371 = t7367 + t7370;
  t7379 = t6540*t7186;
  t7380 = t6972*t7301;
  t7381 = t7379 + t7380;
  t129 = -1.*t123;
  t259 = 1. + t129;
  t278 = 0.135*t259;
  t457 = 0.049*t345;
  t474 = 0. + t278 + t457;
  t725 = -0.049*t724;
  t792 = -0.09*t755;
  t897 = 0. + t725 + t792;
  t1148 = -0.09*t724;
  t1184 = 0.049*t755;
  t1273 = 0. + t1148 + t1184;
  t2068 = -0.049*t2060;
  t2095 = -0.21*t2080;
  t2138 = 0. + t2068 + t2095;
  t2568 = -0.21*t2060;
  t2592 = 0.049*t2080;
  t2623 = 0. + t2568 + t2592;
  t3304 = -0.2707*t3085;
  t3366 = 0.0016*t3331;
  t3491 = 0. + t3304 + t3366;
  t7405 = t1103*t567*t345;
  t7406 = -1.*t74*t755;
  t7407 = t7405 + t7406;
  t7409 = -1.*t567*t74;
  t7411 = -1.*t1103*t345*t755;
  t7412 = t7409 + t7411;
  t4416 = -0.0016*t3085;
  t4956 = -0.2707*t3331;
  t4957 = 0. + t4416 + t4956;
  t6883 = 0.0184*t6768;
  t7083 = -0.7055*t6972;
  t7093 = 0. + t6883 + t7083;
  t7415 = -1.*t2080*t7407;
  t7416 = t1778*t7412;
  t7418 = t7415 + t7416;
  t7421 = t1778*t7407;
  t7423 = t2080*t7412;
  t7424 = t7421 + t7423;
  t7202 = -0.7055*t6768;
  t7233 = -0.0184*t6972;
  t7253 = 0. + t7202 + t7233;
  t7330 = -1.1135*t7322;
  t7356 = 0.0216*t7343;
  t7361 = 0. + t7330 + t7356;
  t7427 = t3331*t7418;
  t7428 = t2925*t7424;
  t7429 = t7427 + t7428;
  t7431 = t2925*t7418;
  t7432 = -1.*t3331*t7424;
  t7433 = t7431 + t7432;
  t7375 = -0.0216*t7322;
  t7376 = -1.1135*t7343;
  t7378 = 0. + t7375 + t7376;
  t7435 = -1.*t6972*t7429;
  t7436 = t6540*t7433;
  t7437 = t7435 + t7436;
  t7439 = t6540*t7429;
  t7440 = t6972*t7433;
  t7441 = t7439 + t7440;
  t7466 = -1.*t123*t567*t2080;
  t7467 = -1.*t1778*t123*t755;
  t7468 = t7466 + t7467;
  t7470 = t1778*t123*t567;
  t7471 = -1.*t123*t2080*t755;
  t7472 = t7470 + t7471;
  t7474 = t3331*t7468;
  t7475 = t2925*t7472;
  t7476 = t7474 + t7475;
  t7478 = t2925*t7468;
  t7479 = -1.*t3331*t7472;
  t7480 = t7478 + t7479;
  t7482 = -1.*t6972*t7476;
  t7483 = t6540*t7480;
  t7484 = t7482 + t7483;
  t7486 = t6540*t7476;
  t7487 = t6972*t7480;
  t7488 = t7486 + t7487;

  p_output1(0)=0.24925 - 1.*t1103*t1273 - 1.*t2138*t2502 - 1.*t2623*t2804 - 1.*t3491*t4028 - 1.*t4957*t5589 - 1.*t7093*t7186 - 1.*t7253*t7301 - 1.*t7361*t7371 - 1.*t7378*t7381 - 0.0306*(t7343*t7371 + t7311*t7381) + 1.1312*(t7311*t7371 - 1.*t7343*t7381) + 0.135*t74 - 0.1305*t123*t74 - 1.*t474*t74 - 1.*t345*t74*t897;
  p_output1(1)=-0.0302 + 0.135*(1. - 1.*t1103) + 0.1305*t1103*t123 + t1103*t474 - 1.*t1273*t74 + t2138*t7407 + t2623*t7412 + t3491*t7418 + t4957*t7424 + t7093*t7429 + t7253*t7433 + t7361*t7437 + t7378*t7441 + 0.0306*(t7343*t7437 + t7311*t7441) - 1.1312*(t7311*t7437 - 1.*t7343*t7441) + t1103*t345*t897;
  p_output1(2)=-0.047 - 0.049*t259 + 0.004500000000000004*t345 + t123*t2138*t567 + t3491*t7468 + t4957*t7472 + t7093*t7476 + t7253*t7480 + t7361*t7484 + t7378*t7488 + 0.0306*(t7343*t7484 + t7311*t7488) - 1.1312*(t7311*t7484 - 1.*t7343*t7488) - 1.*t123*t2623*t755 + t123*t897;
}


       
void p_MultisenseIMU_to_LeftToeBottom(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
