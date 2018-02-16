/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:17:39 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_MultisenseIMU_to_LeftToeBottom_src.h"

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
  double t139;
  double t345;
  double t551;
  double t440;
  double t1147;
  double t1201;
  double t1224;
  double t1190;
  double t1203;
  double t1205;
  double t1093;
  double t1232;
  double t1239;
  double t1246;
  double t1354;
  double t1209;
  double t1258;
  double t1295;
  double t1065;
  double t1394;
  double t1427;
  double t1533;
  double t1755;
  double t1350;
  double t1537;
  double t1644;
  double t1054;
  double t1759;
  double t1786;
  double t1808;
  double t2018;
  double t1754;
  double t1841;
  double t1923;
  double t661;
  double t2043;
  double t2316;
  double t2367;
  double t2709;
  double t2737;
  double t2773;
  double t2926;
  double t2929;
  double t2930;
  double t2778;
  double t2931;
  double t3012;
  double t3118;
  double t3188;
  double t3195;
  double t3076;
  double t3273;
  double t3342;
  double t3376;
  double t3485;
  double t3501;
  double t3364;
  double t3521;
  double t3558;
  double t3627;
  double t3639;
  double t3653;
  double t3929;
  double t3971;
  double t3980;
  double t4032;
  double t4035;
  double t4075;
  double t3982;
  double t4100;
  double t4188;
  double t4320;
  double t4365;
  double t4493;
  double t4292;
  double t4534;
  double t4570;
  double t4682;
  double t4706;
  double t4770;
  double t1932;
  double t2404;
  double t2452;
  double t2476;
  double t2548;
  double t2616;
  double t3619;
  double t3654;
  double t3665;
  double t3757;
  double t3761;
  double t3846;
  double t4675;
  double t4812;
  double t4838;
  double t4984;
  double t5067;
  double t5087;
  double t5618;
  double t5637;
  double t5834;
  double t5845;
  double t6443;
  double t6503;
  double t6655;
  double t6659;
  double t7460;
  double t7463;
  double t5575;
  double t5587;
  double t5591;
  double t5595;
  double t5599;
  double t5675;
  double t5679;
  double t5690;
  double t5701;
  double t5716;
  double t5790;
  double t5883;
  double t6116;
  double t6201;
  double t6299;
  double t6311;
  double t6329;
  double t6576;
  double t6607;
  double t6614;
  double t6632;
  double t6634;
  double t6644;
  double t6757;
  double t6815;
  double t6891;
  double t7123;
  double t7233;
  double t7379;
  double t7471;
  double t7472;
  double t7487;
  double t7501;
  double t7524;
  double t7527;
  t139 = Cos(var1[1]);
  t345 = Sin(var1[0]);
  t551 = Sin(var1[1]);
  t440 = Cos(var1[0]);
  t1147 = Cos(var1[2]);
  t1201 = Sin(var1[2]);
  t1224 = Cos(var1[3]);
  t1190 = t1147*t345*t551;
  t1203 = t440*t1201;
  t1205 = t1190 + t1203;
  t1093 = Sin(var1[3]);
  t1232 = t440*t1147;
  t1239 = -1.*t345*t551*t1201;
  t1246 = t1232 + t1239;
  t1354 = Cos(var1[4]);
  t1209 = -1.*t1093*t1205;
  t1258 = t1224*t1246;
  t1295 = t1209 + t1258;
  t1065 = Sin(var1[4]);
  t1394 = t1224*t1205;
  t1427 = t1093*t1246;
  t1533 = t1394 + t1427;
  t1755 = Cos(var1[5]);
  t1350 = t1065*t1295;
  t1537 = t1354*t1533;
  t1644 = t1350 + t1537;
  t1054 = Sin(var1[5]);
  t1759 = t1354*t1295;
  t1786 = -1.*t1065*t1533;
  t1808 = t1759 + t1786;
  t2018 = Cos(var1[6]);
  t1754 = -1.*t1054*t1644;
  t1841 = t1755*t1808;
  t1923 = t1754 + t1841;
  t661 = Sin(var1[6]);
  t2043 = t1755*t1644;
  t2316 = t1054*t1808;
  t2367 = t2043 + t2316;
  t2709 = t440*t1147*t551;
  t2737 = -1.*t345*t1201;
  t2773 = t2709 + t2737;
  t2926 = -1.*t1147*t345;
  t2929 = -1.*t440*t551*t1201;
  t2930 = t2926 + t2929;
  t2778 = -1.*t1093*t2773;
  t2931 = t1224*t2930;
  t3012 = t2778 + t2931;
  t3118 = t1224*t2773;
  t3188 = t1093*t2930;
  t3195 = t3118 + t3188;
  t3076 = t1065*t3012;
  t3273 = t1354*t3195;
  t3342 = t3076 + t3273;
  t3376 = t1354*t3012;
  t3485 = -1.*t1065*t3195;
  t3501 = t3376 + t3485;
  t3364 = -1.*t1054*t3342;
  t3521 = t1755*t3501;
  t3558 = t3364 + t3521;
  t3627 = t1755*t3342;
  t3639 = t1054*t3501;
  t3653 = t3627 + t3639;
  t3929 = -1.*t139*t1147*t1093;
  t3971 = -1.*t1224*t139*t1201;
  t3980 = t3929 + t3971;
  t4032 = t1224*t139*t1147;
  t4035 = -1.*t139*t1093*t1201;
  t4075 = t4032 + t4035;
  t3982 = t1065*t3980;
  t4100 = t1354*t4075;
  t4188 = t3982 + t4100;
  t4320 = t1354*t3980;
  t4365 = -1.*t1065*t4075;
  t4493 = t4320 + t4365;
  t4292 = -1.*t1054*t4188;
  t4534 = t1755*t4493;
  t4570 = t4292 + t4534;
  t4682 = t1755*t4188;
  t4706 = t1054*t4493;
  t4770 = t4682 + t4706;
  t1932 = t661*t1923;
  t2404 = t2018*t2367;
  t2452 = t1932 + t2404;
  t2476 = t2018*t1923;
  t2548 = -1.*t661*t2367;
  t2616 = t2476 + t2548;
  t3619 = t661*t3558;
  t3654 = t2018*t3653;
  t3665 = t3619 + t3654;
  t3757 = t2018*t3558;
  t3761 = -1.*t661*t3653;
  t3846 = t3757 + t3761;
  t4675 = t661*t4570;
  t4812 = t2018*t4770;
  t4838 = t4675 + t4812;
  t4984 = t2018*t4570;
  t5067 = -1.*t661*t4770;
  t5087 = t4984 + t5067;
  t5618 = -1.*t1147;
  t5637 = 1. + t5618;
  t5834 = -1.*t1224;
  t5845 = 1. + t5834;
  t6443 = -1.*t1354;
  t6503 = 1. + t6443;
  t6655 = -1.*t1755;
  t6659 = 1. + t6655;
  t7460 = -1.*t2018;
  t7463 = 1. + t7460;
  t5575 = -1.*t139;
  t5587 = 1. + t5575;
  t5591 = 0.135*t5587;
  t5595 = 0.049*t551;
  t5599 = 0. + t5591 + t5595;
  t5675 = -0.049*t5637;
  t5679 = -0.09*t1201;
  t5690 = 0. + t5675 + t5679;
  t5701 = -0.09*t5637;
  t5716 = 0.049*t1201;
  t5790 = 0. + t5701 + t5716;
  t5883 = -0.049*t5845;
  t6116 = -0.21*t1093;
  t6201 = 0. + t5883 + t6116;
  t6299 = -0.21*t5845;
  t6311 = 0.049*t1093;
  t6329 = 0. + t6299 + t6311;
  t6576 = -0.2707*t6503;
  t6607 = 0.0016*t1065;
  t6614 = 0. + t6576 + t6607;
  t6632 = -0.0016*t6503;
  t6634 = -0.2707*t1065;
  t6644 = 0. + t6632 + t6634;
  t6757 = 0.0184*t6659;
  t6815 = -0.7055*t1054;
  t6891 = 0. + t6757 + t6815;
  t7123 = -0.7055*t6659;
  t7233 = -0.0184*t1054;
  t7379 = 0. + t7123 + t7233;
  t7471 = -1.1135*t7463;
  t7472 = 0.0216*t661;
  t7487 = 0. + t7471 + t7472;
  t7501 = -0.0216*t7463;
  t7524 = -1.1135*t661;
  t7527 = 0. + t7501 + t7524;
  p_output1[0]=0. + t139*t345;
  p_output1[1]=0. - 1.*t139*t440;
  p_output1[2]=0. + t551;
  p_output1[3]=0.;
  p_output1[4]=0. - 0.642788*t2452 - 0.766044*t2616;
  p_output1[5]=0. + 0.642788*t3665 + 0.766044*t3846;
  p_output1[6]=0. + 0.642788*t4838 + 0.766044*t5087;
  p_output1[7]=0.;
  p_output1[8]=0. + 0.766044*t2452 - 0.642788*t2616;
  p_output1[9]=0. - 0.766044*t3665 + 0.642788*t3846;
  p_output1[10]=0. - 0.766044*t4838 + 0.642788*t5087;
  p_output1[11]=0.;
  p_output1[12]=0.24925 - 0.0306*t2452 + 1.1312*t2616 + 0.135*t345 - 0.1305*t139*t345 - 1.*t345*t5599 - 1.*t345*t551*t5690 - 1.*t440*t5790 - 1.*t1205*t6201 - 1.*t1246*t6329 - 1.*t1295*t6614 - 1.*t1533*t6644 - 1.*t1644*t6891 - 1.*t1808*t7379 - 1.*t1923*t7487 - 1.*t2367*t7527;
  p_output1[13]=-0.0302 + 0.0306*t3665 - 1.1312*t3846 + 0.135*(1. - 1.*t440) + 0.1305*t139*t440 + t440*t5599 + t440*t551*t5690 - 1.*t345*t5790 + t2773*t6201 + t2930*t6329 + t3012*t6614 + t3195*t6644 + t3342*t6891 + t3501*t7379 + t3558*t7487 + t3653*t7527;
  p_output1[14]=-0.047 + 0.0306*t4838 - 1.1312*t5087 + 0.004500000000000004*t551 - 0.049*t5587 + t139*t5690 + t1147*t139*t6201 - 1.*t1201*t139*t6329 + t3980*t6614 + t4075*t6644 + t4188*t6891 + t4493*t7379 + t4570*t7487 + t4770*t7527;
  p_output1[15]=1.;
}



void H_MultisenseIMU_to_LeftToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
