/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:24:51 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_VectorNav_to_LeftToeBottom.h"

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
  double t379;
  double t1310;
  double t923;
  double t962;
  double t1366;
  double t1435;
  double t1138;
  double t1385;
  double t1401;
  double t865;
  double t1453;
  double t1475;
  double t1639;
  double t1884;
  double t1426;
  double t1648;
  double t1854;
  double t857;
  double t1904;
  double t1918;
  double t1974;
  double t2108;
  double t1881;
  double t2062;
  double t2083;
  double t839;
  double t2229;
  double t2581;
  double t2730;
  double t373;
  double t87;
  double t610;
  double t3121;
  double t3144;
  double t3161;
  double t3208;
  double t3254;
  double t3320;
  double t3182;
  double t3342;
  double t3402;
  double t3491;
  double t3517;
  double t3536;
  double t3476;
  double t3563;
  double t3581;
  double t3628;
  double t3639;
  double t3688;
  double t3610;
  double t3743;
  double t3863;
  double t4057;
  double t4109;
  double t4154;
  double t4516;
  double t4537;
  double t4561;
  double t4578;
  double t4579;
  double t4584;
  double t4565;
  double t4587;
  double t4593;
  double t4606;
  double t4653;
  double t4674;
  double t4599;
  double t4689;
  double t4710;
  double t4800;
  double t4848;
  double t4871;
  double t4745;
  double t4888;
  double t4919;
  double t4945;
  double t4952;
  double t4954;
  double t2088;
  double t2834;
  double t2856;
  double t2930;
  double t2953;
  double t2982;
  double t3929;
  double t4246;
  double t4273;
  double t4429;
  double t4430;
  double t4435;
  double t4938;
  double t4968;
  double t5005;
  double t5058;
  double t5066;
  double t5071;
  double t5338;
  double t5342;
  double t5458;
  double t5488;
  double t5552;
  double t5557;
  double t5672;
  double t5678;
  double t5265;
  double t5274;
  double t5376;
  double t5380;
  double t5382;
  double t5386;
  double t5388;
  double t5347;
  double t5348;
  double t5358;
  double t5420;
  double t5422;
  double t5451;
  double t5493;
  double t5494;
  double t5496;
  double t5522;
  double t5542;
  double t5543;
  double t5578;
  double t5588;
  double t5601;
  double t5628;
  double t5633;
  double t5640;
  double t5681;
  double t5690;
  double t5691;
  double t5721;
  double t5741;
  double t5754;
  double t5855;
  double t5857;
  double t5862;
  double t5912;
  double t5917;
  double t5925;
  t379 = Cos(var1[1]);
  t1310 = Cos(var1[3]);
  t923 = Cos(var1[2]);
  t962 = Sin(var1[3]);
  t1366 = Sin(var1[2]);
  t1435 = Cos(var1[4]);
  t1138 = -1.*t379*t923*t962;
  t1385 = -1.*t1310*t379*t1366;
  t1401 = t1138 + t1385;
  t865 = Sin(var1[4]);
  t1453 = t1310*t379*t923;
  t1475 = -1.*t379*t962*t1366;
  t1639 = t1453 + t1475;
  t1884 = Cos(var1[5]);
  t1426 = t865*t1401;
  t1648 = t1435*t1639;
  t1854 = t1426 + t1648;
  t857 = Sin(var1[5]);
  t1904 = t1435*t1401;
  t1918 = -1.*t865*t1639;
  t1974 = t1904 + t1918;
  t2108 = Cos(var1[6]);
  t1881 = -1.*t857*t1854;
  t2062 = t1884*t1974;
  t2083 = t1881 + t2062;
  t839 = Sin(var1[6]);
  t2229 = t1884*t1854;
  t2581 = t857*t1974;
  t2730 = t2229 + t2581;
  t373 = Cos(var1[0]);
  t87 = Sin(var1[1]);
  t610 = Sin(var1[0]);
  t3121 = t373*t923*t87;
  t3144 = -1.*t610*t1366;
  t3161 = t3121 + t3144;
  t3208 = -1.*t923*t610;
  t3254 = -1.*t373*t87*t1366;
  t3320 = t3208 + t3254;
  t3182 = -1.*t962*t3161;
  t3342 = t1310*t3320;
  t3402 = t3182 + t3342;
  t3491 = t1310*t3161;
  t3517 = t962*t3320;
  t3536 = t3491 + t3517;
  t3476 = t865*t3402;
  t3563 = t1435*t3536;
  t3581 = t3476 + t3563;
  t3628 = t1435*t3402;
  t3639 = -1.*t865*t3536;
  t3688 = t3628 + t3639;
  t3610 = -1.*t857*t3581;
  t3743 = t1884*t3688;
  t3863 = t3610 + t3743;
  t4057 = t1884*t3581;
  t4109 = t857*t3688;
  t4154 = t4057 + t4109;
  t4516 = t923*t610*t87;
  t4537 = t373*t1366;
  t4561 = t4516 + t4537;
  t4578 = t373*t923;
  t4579 = -1.*t610*t87*t1366;
  t4584 = t4578 + t4579;
  t4565 = -1.*t962*t4561;
  t4587 = t1310*t4584;
  t4593 = t4565 + t4587;
  t4606 = t1310*t4561;
  t4653 = t962*t4584;
  t4674 = t4606 + t4653;
  t4599 = t865*t4593;
  t4689 = t1435*t4674;
  t4710 = t4599 + t4689;
  t4800 = t1435*t4593;
  t4848 = -1.*t865*t4674;
  t4871 = t4800 + t4848;
  t4745 = -1.*t857*t4710;
  t4888 = t1884*t4871;
  t4919 = t4745 + t4888;
  t4945 = t1884*t4710;
  t4952 = t857*t4871;
  t4954 = t4945 + t4952;
  t2088 = t839*t2083;
  t2834 = t2108*t2730;
  t2856 = t2088 + t2834;
  t2930 = t2108*t2083;
  t2953 = -1.*t839*t2730;
  t2982 = t2930 + t2953;
  t3929 = t839*t3863;
  t4246 = t2108*t4154;
  t4273 = t3929 + t4246;
  t4429 = t2108*t3863;
  t4430 = -1.*t839*t4154;
  t4435 = t4429 + t4430;
  t4938 = t839*t4919;
  t4968 = t2108*t4954;
  t5005 = t4938 + t4968;
  t5058 = t2108*t4919;
  t5066 = -1.*t839*t4954;
  t5071 = t5058 + t5066;
  t5338 = -1.*t1310;
  t5342 = 1. + t5338;
  t5458 = -1.*t1435;
  t5488 = 1. + t5458;
  t5552 = -1.*t1884;
  t5557 = 1. + t5552;
  t5672 = -1.*t2108;
  t5678 = 1. + t5672;
  t5265 = -1.*t379;
  t5274 = 1. + t5265;
  t5376 = -1.*t923;
  t5380 = 1. + t5376;
  t5382 = -0.049*t5380;
  t5386 = -0.09*t1366;
  t5388 = 0. + t5382 + t5386;
  t5347 = -0.049*t5342;
  t5348 = -0.21*t962;
  t5358 = 0. + t5347 + t5348;
  t5420 = -0.21*t5342;
  t5422 = 0.049*t962;
  t5451 = 0. + t5420 + t5422;
  t5493 = -0.2707*t5488;
  t5494 = 0.0016*t865;
  t5496 = 0. + t5493 + t5494;
  t5522 = -0.0016*t5488;
  t5542 = -0.2707*t865;
  t5543 = 0. + t5522 + t5542;
  t5578 = 0.0184*t5557;
  t5588 = -0.7055*t857;
  t5601 = 0. + t5578 + t5588;
  t5628 = -0.7055*t5557;
  t5633 = -0.0184*t857;
  t5640 = 0. + t5628 + t5633;
  t5681 = -1.1135*t5678;
  t5690 = 0.0216*t839;
  t5691 = 0. + t5681 + t5690;
  t5721 = -0.0216*t5678;
  t5741 = -1.1135*t839;
  t5754 = 0. + t5721 + t5741;
  t5855 = 0.135*t5274;
  t5857 = 0.049*t87;
  t5862 = 0. + t5855 + t5857;
  t5912 = -0.09*t5380;
  t5917 = 0.049*t1366;
  t5925 = 0. + t5912 + t5917;

  p_output1(0)=0. + t87;
  p_output1(1)=0. + t373*t379;
  p_output1(2)=0. + t379*t610;
  p_output1(3)=0.;
  p_output1(4)=0. + 0.642788*t2856 + 0.766044*t2982;
  p_output1(5)=0. - 0.642788*t4273 - 0.766044*t4435;
  p_output1(6)=0. - 0.642788*t5005 - 0.766044*t5071;
  p_output1(7)=0.;
  p_output1(8)=0. - 0.766044*t2856 + 0.642788*t2982;
  p_output1(9)=0. + 0.766044*t4273 - 0.642788*t4435;
  p_output1(10)=0. + 0.766044*t5005 - 0.642788*t5071;
  p_output1(11)=0.;
  p_output1(12)=-0.03155 + 0.0306*t2856 - 1.1312*t2982 - 0.049*t5274 + t379*t5388 - 1.*t1366*t379*t5451 + t1401*t5496 + t1639*t5543 + t1854*t5601 + t1974*t5640 + t2083*t5691 + t2730*t5754 + 0.004500000000000004*t87 + t379*t5358*t923;
  p_output1(13)=0. - 0.135*(1. - 1.*t373) - 0.1305*t373*t379 - 0.0306*t4273 + 1.1312*t4435 - 1.*t3161*t5358 - 1.*t3320*t5451 - 1.*t3402*t5496 - 1.*t3536*t5543 - 1.*t3581*t5601 - 1.*t3688*t5640 - 1.*t3863*t5691 - 1.*t4154*t5754 - 1.*t373*t5862 + t5925*t610 - 1.*t373*t5388*t87;
  p_output1(14)=-0.07996 - 0.0306*t5005 + 1.1312*t5071 - 1.*t4561*t5358 - 1.*t4584*t5451 - 1.*t4593*t5496 - 1.*t4674*t5543 - 1.*t4710*t5601 - 1.*t4871*t5640 - 1.*t4919*t5691 - 1.*t4954*t5754 - 1.*t373*t5925 + 0.135*t610 - 0.1305*t379*t610 - 1.*t5862*t610 - 1.*t5388*t610*t87;
  p_output1(15)=1.;
}


       
void H_VectorNav_to_LeftToeBottom(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
