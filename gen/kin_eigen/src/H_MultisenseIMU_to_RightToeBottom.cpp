/*
 * Automatically Generated from Mathematica.
 * Mon 26 Feb 2018 15:43:02 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_MultisenseIMU_to_RightToeBottom.h"

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
static void output1(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  double t19;
  double t28;
  double t161;
  double t137;
  double t1065;
  double t1164;
  double t922;
  double t1484;
  double t1491;
  double t1617;
  double t1158;
  double t1227;
  double t1337;
  double t1636;
  double t879;
  double t1900;
  double t1906;
  double t1907;
  double t1340;
  double t1678;
  double t1757;
  double t2035;
  double t522;
  double t2210;
  double t2416;
  double t2420;
  double t1843;
  double t2037;
  double t2059;
  double t2442;
  double t307;
  double t2536;
  double t2598;
  double t2717;
  double t2061;
  double t2474;
  double t2479;
  double t3011;
  double t4048;
  double t4090;
  double t4115;
  double t3652;
  double t3697;
  double t3907;
  double t4550;
  double t4591;
  double t4631;
  double t3987;
  double t4391;
  double t4392;
  double t5015;
  double t5045;
  double t5056;
  double t4393;
  double t4722;
  double t4825;
  double t5811;
  double t5858;
  double t6052;
  double t4869;
  double t5448;
  double t5460;
  double t8300;
  double t8309;
  double t8311;
  double t8277;
  double t8284;
  double t8289;
  double t8323;
  double t8325;
  double t8326;
  double t8294;
  double t8313;
  double t8317;
  double t8350;
  double t8352;
  double t8354;
  double t8320;
  double t8330;
  double t8335;
  double t2506;
  double t3054;
  double t3057;
  double t3193;
  double t3297;
  double t3349;
  double t5603;
  double t6133;
  double t6785;
  double t7978;
  double t8006;
  double t8034;
  double t8346;
  double t8355;
  double t8358;
  double t8362;
  double t8366;
  double t8367;
  double t8426;
  double t8429;
  double t8448;
  double t8449;
  double t8460;
  double t8461;
  double t8470;
  double t8471;
  double t8480;
  double t8481;
  double t8405;
  double t8412;
  double t8414;
  double t8418;
  double t8422;
  double t8431;
  double t8434;
  double t8438;
  double t8441;
  double t8442;
  double t8443;
  double t8451;
  double t8452;
  double t8453;
  double t8456;
  double t8457;
  double t8458;
  double t8462;
  double t8463;
  double t8464;
  double t8466;
  double t8467;
  double t8468;
  double t8472;
  double t8473;
  double t8474;
  double t8476;
  double t8477;
  double t8478;
  double t8482;
  double t8483;
  double t8484;
  double t8486;
  double t8487;
  double t8488;
  t19 = Cos(var1[8]);
  t28 = Sin(var1[7]);
  t161 = Sin(var1[8]);
  t137 = Cos(var1[7]);
  t1065 = Cos(var1[9]);
  t1164 = Sin(var1[9]);
  t922 = Cos(var1[10]);
  t1484 = t137*t1065;
  t1491 = -1.*t28*t161*t1164;
  t1617 = t1484 + t1491;
  t1158 = t1065*t28*t161;
  t1227 = t137*t1164;
  t1337 = t1158 + t1227;
  t1636 = Sin(var1[10]);
  t879 = Cos(var1[11]);
  t1900 = t922*t1617;
  t1906 = -1.*t1337*t1636;
  t1907 = t1900 + t1906;
  t1340 = t922*t1337;
  t1678 = t1617*t1636;
  t1757 = t1340 + t1678;
  t2035 = Sin(var1[11]);
  t522 = Cos(var1[12]);
  t2210 = t879*t1907;
  t2416 = -1.*t1757*t2035;
  t2420 = t2210 + t2416;
  t1843 = t879*t1757;
  t2037 = t1907*t2035;
  t2059 = t1843 + t2037;
  t2442 = Sin(var1[12]);
  t307 = Cos(var1[13]);
  t2536 = t522*t2420;
  t2598 = -1.*t2059*t2442;
  t2717 = t2536 + t2598;
  t2061 = t522*t2059;
  t2474 = t2420*t2442;
  t2479 = t2061 + t2474;
  t3011 = Sin(var1[13]);
  t4048 = -1.*t1065*t28;
  t4090 = -1.*t137*t161*t1164;
  t4115 = t4048 + t4090;
  t3652 = t137*t1065*t161;
  t3697 = -1.*t28*t1164;
  t3907 = t3652 + t3697;
  t4550 = t922*t4115;
  t4591 = -1.*t3907*t1636;
  t4631 = t4550 + t4591;
  t3987 = t922*t3907;
  t4391 = t4115*t1636;
  t4392 = t3987 + t4391;
  t5015 = t879*t4631;
  t5045 = -1.*t4392*t2035;
  t5056 = t5015 + t5045;
  t4393 = t879*t4392;
  t4722 = t4631*t2035;
  t4825 = t4393 + t4722;
  t5811 = t522*t5056;
  t5858 = -1.*t4825*t2442;
  t6052 = t5811 + t5858;
  t4869 = t522*t4825;
  t5448 = t5056*t2442;
  t5460 = t4869 + t5448;
  t8300 = -1.*t19*t922*t1164;
  t8309 = -1.*t19*t1065*t1636;
  t8311 = t8300 + t8309;
  t8277 = t19*t1065*t922;
  t8284 = -1.*t19*t1164*t1636;
  t8289 = t8277 + t8284;
  t8323 = t879*t8311;
  t8325 = -1.*t8289*t2035;
  t8326 = t8323 + t8325;
  t8294 = t879*t8289;
  t8313 = t8311*t2035;
  t8317 = t8294 + t8313;
  t8350 = t522*t8326;
  t8352 = -1.*t8317*t2442;
  t8354 = t8350 + t8352;
  t8320 = t522*t8317;
  t8330 = t8326*t2442;
  t8335 = t8320 + t8330;
  t2506 = t307*t2479;
  t3054 = t2717*t3011;
  t3057 = t2506 + t3054;
  t3193 = t307*t2717;
  t3297 = -1.*t2479*t3011;
  t3349 = t3193 + t3297;
  t5603 = t307*t5460;
  t6133 = t6052*t3011;
  t6785 = t5603 + t6133;
  t7978 = t307*t6052;
  t8006 = -1.*t5460*t3011;
  t8034 = t7978 + t8006;
  t8346 = t307*t8335;
  t8355 = t8354*t3011;
  t8358 = t8346 + t8355;
  t8362 = t307*t8354;
  t8366 = -1.*t8335*t3011;
  t8367 = t8362 + t8366;
  t8426 = -1.*t1065;
  t8429 = 1. + t8426;
  t8448 = -1.*t922;
  t8449 = 1. + t8448;
  t8460 = -1.*t879;
  t8461 = 1. + t8460;
  t8470 = -1.*t522;
  t8471 = 1. + t8470;
  t8480 = -1.*t307;
  t8481 = 1. + t8480;
  t8405 = -1.*t19;
  t8412 = 1. + t8405;
  t8414 = -0.135*t8412;
  t8418 = 0.049*t161;
  t8422 = 0. + t8414 + t8418;
  t8431 = -0.049*t8429;
  t8434 = -0.09*t1164;
  t8438 = 0. + t8431 + t8434;
  t8441 = -0.09*t8429;
  t8442 = 0.049*t1164;
  t8443 = 0. + t8441 + t8442;
  t8451 = -0.049*t8449;
  t8452 = -0.21*t1636;
  t8453 = 0. + t8451 + t8452;
  t8456 = -0.21*t8449;
  t8457 = 0.049*t1636;
  t8458 = 0. + t8456 + t8457;
  t8462 = -0.0016*t8461;
  t8463 = -0.2707*t2035;
  t8464 = 0. + t8462 + t8463;
  t8466 = -0.2707*t8461;
  t8467 = 0.0016*t2035;
  t8468 = 0. + t8466 + t8467;
  t8472 = 0.0184*t8471;
  t8473 = -0.7055*t2442;
  t8474 = 0. + t8472 + t8473;
  t8476 = -0.7055*t8471;
  t8477 = -0.0184*t2442;
  t8478 = 0. + t8476 + t8477;
  t8482 = -0.0216*t8481;
  t8483 = -1.1135*t3011;
  t8484 = 0. + t8482 + t8483;
  t8486 = -1.1135*t8481;
  t8487 = 0.0216*t3011;
  t8488 = 0. + t8486 + t8487;

  p_output1(0)=0. + t19*t28;
  p_output1(1)=0. - 1.*t137*t19;
  p_output1(2)=0. + t161;
  p_output1(3)=0.;
  p_output1(4)=0. - 0.642788*t3057 - 0.766044*t3349;
  p_output1(5)=0. + 0.642788*t6785 + 0.766044*t8034;
  p_output1(6)=0. + 0.642788*t8358 + 0.766044*t8367;
  p_output1(7)=0.;
  p_output1(8)=0. + 0.766044*t3057 - 0.642788*t3349;
  p_output1(9)=0. - 0.766044*t6785 + 0.642788*t8034;
  p_output1(10)=0. - 0.766044*t8358 + 0.642788*t8367;
  p_output1(11)=0.;
  p_output1(12)=0.24925 - 0.135*t28 + 0.1305*t19*t28 - 0.0306*t3057 + 1.1312*t3349 - 1.*t28*t8422 - 1.*t161*t28*t8438 - 1.*t137*t8443 - 1.*t1337*t8453 - 1.*t1617*t8458 - 1.*t1757*t8464 - 1.*t1907*t8468 - 1.*t2059*t8474 - 1.*t2420*t8478 - 1.*t2479*t8484 - 1.*t2717*t8488;
  p_output1(13)=-0.0302 - 0.135*(1. - 1.*t137) - 0.1305*t137*t19 + 0.0306*t6785 - 1.1312*t8034 + t137*t8422 + t137*t161*t8438 - 1.*t28*t8443 + t3907*t8453 + t4115*t8458 + t4392*t8464 + t4631*t8468 + t4825*t8474 + t5056*t8478 + t5460*t8484 + t6052*t8488;
  p_output1(14)=-0.047 - 0.004500000000000004*t161 + 0.0306*t8358 - 1.1312*t8367 - 0.049*t8412 + t19*t8438 + t1065*t19*t8453 - 1.*t1164*t19*t8458 + t8289*t8464 + t8311*t8468 + t8317*t8474 + t8326*t8478 + t8335*t8484 + t8354*t8488;
  p_output1(15)=1.;
}


       
void H_MultisenseIMU_to_RightToeBottom(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
