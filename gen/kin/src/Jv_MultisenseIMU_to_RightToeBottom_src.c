/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:17:38 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jv_MultisenseIMU_to_RightToeBottom_src.h"

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
  double t269;
  double t359;
  double t626;
  double t1136;
  double t1353;
  double t1393;
  double t1409;
  double t1599;
  double t1937;
  double t2034;
  double t2036;
  double t2126;
  double t1754;
  double t1824;
  double t1899;
  double t2330;
  double t2379;
  double t2452;
  double t2912;
  double t2980;
  double t3135;
  double t3313;
  double t2615;
  double t2709;
  double t2717;
  double t3566;
  double t3581;
  double t3665;
  double t3857;
  double t3879;
  double t3891;
  double t3978;
  double t3757;
  double t3775;
  double t3781;
  double t4260;
  double t4304;
  double t4380;
  double t4548;
  double t4549;
  double t4594;
  double t4723;
  double t4479;
  double t4493;
  double t4541;
  double t5034;
  double t5079;
  double t5109;
  double t432;
  double t527;
  double t551;
  double t727;
  double t905;
  double t1394;
  double t1423;
  double t1527;
  double t1663;
  double t1711;
  double t1745;
  double t2044;
  double t2237;
  double t2291;
  double t2476;
  double t2535;
  double t2540;
  double t5696;
  double t5716;
  double t5717;
  double t5747;
  double t5759;
  double t5766;
  double t3228;
  double t3342;
  double t3373;
  double t3669;
  double t3677;
  double t3702;
  double t5808;
  double t5845;
  double t5860;
  double t6116;
  double t6132;
  double t6136;
  double t3952;
  double t4075;
  double t4190;
  double t4402;
  double t4408;
  double t4424;
  double t6201;
  double t6283;
  double t6343;
  double t6443;
  double t6472;
  double t6662;
  double t4720;
  double t4730;
  double t4760;
  double t5112;
  double t5132;
  double t5263;
  double t6757;
  double t6773;
  double t6792;
  double t7107;
  double t7193;
  double t7298;
  double t7552;
  double t7554;
  double t7559;
  double t7561;
  double t7562;
  double t7566;
  double t7575;
  double t7581;
  double t7584;
  double t7589;
  double t7592;
  double t7607;
  double t7631;
  double t7632;
  double t7644;
  double t7657;
  double t7659;
  double t7695;
  double t7532;
  double t7539;
  double t7542;
  double t7544;
  double t7547;
  double t7560;
  double t7569;
  double t7587;
  double t7625;
  double t7645;
  double t7698;
  double t7702;
  double t7719;
  double t7720;
  double t7742;
  double t7748;
  double t7753;
  double t7768;
  double t7769;
  double t7772;
  double t7862;
  double t7868;
  double t1537;
  double t1746;
  double t2316;
  double t2548;
  double t3402;
  double t3704;
  double t4257;
  double t4436;
  double t4770;
  double t5264;
  double t5285;
  double t5312;
  double t5374;
  double t5386;
  double t5412;
  double t5452;
  double t5460;
  double t5484;
  double t7525;
  double t7527;
  double t5655;
  double t5677;
  double t5723;
  double t5784;
  double t6079;
  double t6159;
  double t6385;
  double t6756;
  double t7029;
  double t7442;
  double t7459;
  double t7460;
  double t7463;
  double t7472;
  double t7487;
  double t7489;
  double t7492;
  double t7501;
  double t7880;
  double t7925;
  double t7933;
  double t7937;
  double t7942;
  double t7908;
  double t7965;
  double t7969;
  double t7946;
  double t7948;
  double t7951;
  double t7921;
  double t7924;
  double t7976;
  double t7979;
  double t7982;
  double t7992;
  double t7993;
  double t8004;
  double t8011;
  double t8014;
  double t8018;
  double t8028;
  double t8031;
  double t8032;
  double t8043;
  double t8049;
  double t8050;
  double t8057;
  double t8060;
  double t8062;
  double t8073;
  double t8074;
  double t8075;
  double t8084;
  double t8087;
  double t8088;
  double t8091;
  double t8092;
  double t8097;
  double t8104;
  double t8105;
  double t8107;
  double t8118;
  double t8119;
  double t8120;
  double t8125;
  double t8126;
  double t8127;
  double t8132;
  double t8133;
  double t8135;
  t269 = Cos(var1[7]);
  t359 = Cos(var1[8]);
  t626 = Sin(var1[8]);
  t1136 = Cos(var1[9]);
  t1353 = -1.*t1136;
  t1393 = 1. + t1353;
  t1409 = Sin(var1[9]);
  t1599 = Sin(var1[7]);
  t1937 = Cos(var1[10]);
  t2034 = -1.*t1937;
  t2036 = 1. + t2034;
  t2126 = Sin(var1[10]);
  t1754 = t269*t1136*t626;
  t1824 = -1.*t1599*t1409;
  t1899 = t1754 + t1824;
  t2330 = -1.*t1136*t1599;
  t2379 = -1.*t269*t626*t1409;
  t2452 = t2330 + t2379;
  t2912 = Cos(var1[11]);
  t2980 = -1.*t2912;
  t3135 = 1. + t2980;
  t3313 = Sin(var1[11]);
  t2615 = t1937*t1899;
  t2709 = t2452*t2126;
  t2717 = t2615 + t2709;
  t3566 = t1937*t2452;
  t3581 = -1.*t1899*t2126;
  t3665 = t3566 + t3581;
  t3857 = Cos(var1[12]);
  t3879 = -1.*t3857;
  t3891 = 1. + t3879;
  t3978 = Sin(var1[12]);
  t3757 = t2912*t2717;
  t3775 = t3665*t3313;
  t3781 = t3757 + t3775;
  t4260 = t2912*t3665;
  t4304 = -1.*t2717*t3313;
  t4380 = t4260 + t4304;
  t4548 = Cos(var1[13]);
  t4549 = -1.*t4548;
  t4594 = 1. + t4549;
  t4723 = Sin(var1[13]);
  t4479 = t3857*t3781;
  t4493 = t4380*t3978;
  t4541 = t4479 + t4493;
  t5034 = t3857*t4380;
  t5079 = -1.*t3781*t3978;
  t5109 = t5034 + t5079;
  t432 = -1.*t359;
  t527 = 1. + t432;
  t551 = -0.135*t527;
  t727 = 0.049*t626;
  t905 = 0. + t551 + t727;
  t1394 = -0.049*t1393;
  t1423 = -0.09*t1409;
  t1527 = 0. + t1394 + t1423;
  t1663 = -0.09*t1393;
  t1711 = 0.049*t1409;
  t1745 = 0. + t1663 + t1711;
  t2044 = -0.049*t2036;
  t2237 = -0.21*t2126;
  t2291 = 0. + t2044 + t2237;
  t2476 = -0.21*t2036;
  t2535 = 0.049*t2126;
  t2540 = 0. + t2476 + t2535;
  t5696 = t1136*t1599*t626;
  t5716 = t269*t1409;
  t5717 = t5696 + t5716;
  t5747 = t269*t1136;
  t5759 = -1.*t1599*t626*t1409;
  t5766 = t5747 + t5759;
  t3228 = -0.0016*t3135;
  t3342 = -0.2707*t3313;
  t3373 = 0. + t3228 + t3342;
  t3669 = -0.2707*t3135;
  t3677 = 0.0016*t3313;
  t3702 = 0. + t3669 + t3677;
  t5808 = t1937*t5717;
  t5845 = t5766*t2126;
  t5860 = t5808 + t5845;
  t6116 = t1937*t5766;
  t6132 = -1.*t5717*t2126;
  t6136 = t6116 + t6132;
  t3952 = 0.0184*t3891;
  t4075 = -0.7055*t3978;
  t4190 = 0. + t3952 + t4075;
  t4402 = -0.7055*t3891;
  t4408 = -0.0184*t3978;
  t4424 = 0. + t4402 + t4408;
  t6201 = t2912*t5860;
  t6283 = t6136*t3313;
  t6343 = t6201 + t6283;
  t6443 = t2912*t6136;
  t6472 = -1.*t5860*t3313;
  t6662 = t6443 + t6472;
  t4720 = -0.0216*t4594;
  t4730 = -1.1135*t4723;
  t4760 = 0. + t4720 + t4730;
  t5112 = -1.1135*t4594;
  t5132 = 0.0216*t4723;
  t5263 = 0. + t5112 + t5132;
  t6757 = t3857*t6343;
  t6773 = t6662*t3978;
  t6792 = t6757 + t6773;
  t7107 = t3857*t6662;
  t7193 = -1.*t6343*t3978;
  t7298 = t7107 + t7193;
  t7552 = t359*t1136*t1937;
  t7554 = -1.*t359*t1409*t2126;
  t7559 = t7552 + t7554;
  t7561 = -1.*t359*t1937*t1409;
  t7562 = -1.*t359*t1136*t2126;
  t7566 = t7561 + t7562;
  t7575 = t2912*t7559;
  t7581 = t7566*t3313;
  t7584 = t7575 + t7581;
  t7589 = t2912*t7566;
  t7592 = -1.*t7559*t3313;
  t7607 = t7589 + t7592;
  t7631 = t3857*t7584;
  t7632 = t7607*t3978;
  t7644 = t7631 + t7632;
  t7657 = t3857*t7607;
  t7659 = -1.*t7584*t3978;
  t7695 = t7657 + t7659;
  t7532 = 0.049*t359;
  t7539 = -0.004500000000000004*t626;
  t7542 = t359*t1527;
  t7544 = t359*t1136*t2291;
  t7547 = -1.*t359*t1409*t2540;
  t7560 = t7559*t3373;
  t7569 = t7566*t3702;
  t7587 = t7584*t4190;
  t7625 = t7607*t4424;
  t7645 = t7644*t4760;
  t7698 = t7695*t5263;
  t7702 = t4548*t7644;
  t7719 = t7695*t4723;
  t7720 = t7702 + t7719;
  t7742 = 0.0306*t7720;
  t7748 = t4548*t7695;
  t7753 = -1.*t7644*t4723;
  t7768 = t7748 + t7753;
  t7769 = -1.1312*t7768;
  t7772 = 0. + t7532 + t7539 + t7542 + t7544 + t7547 + t7560 + t7569 + t7587 + t7625 + t7645 + t7698 + t7742 + t7769;
  t7862 = -1.*t269;
  t7868 = 0. + t7862;
  t1537 = t269*t626*t1527;
  t1746 = -1.*t1599*t1745;
  t2316 = t1899*t2291;
  t2548 = t2452*t2540;
  t3402 = t2717*t3373;
  t3704 = t3665*t3702;
  t4257 = t3781*t4190;
  t4436 = t4380*t4424;
  t4770 = t4541*t4760;
  t5264 = t5109*t5263;
  t5285 = t4548*t4541;
  t5312 = t5109*t4723;
  t5374 = t5285 + t5312;
  t5386 = 0.0306*t5374;
  t5412 = t4548*t5109;
  t5452 = -1.*t4541*t4723;
  t5460 = t5412 + t5452;
  t5484 = -1.1312*t5460;
  t7525 = -1.*t1599;
  t7527 = 0. + t7525;
  t5655 = -1.*t1599*t626*t1527;
  t5677 = -1.*t269*t1745;
  t5723 = -1.*t5717*t2291;
  t5784 = -1.*t5766*t2540;
  t6079 = -1.*t5860*t3373;
  t6159 = -1.*t6136*t3702;
  t6385 = -1.*t6343*t4190;
  t6756 = -1.*t6662*t4424;
  t7029 = -1.*t6792*t4760;
  t7442 = -1.*t7298*t5263;
  t7459 = t4548*t6792;
  t7460 = t7298*t4723;
  t7463 = t7459 + t7460;
  t7472 = -0.0306*t7463;
  t7487 = t4548*t7298;
  t7489 = -1.*t6792*t4723;
  t7492 = t7487 + t7489;
  t7501 = 1.1312*t7492;
  t7880 = 0.004500000000000004*t269*t359;
  t7925 = 0.049*t359*t1136;
  t7933 = -0.09*t359*t1409;
  t7937 = 0. + t7925 + t7539 + t7933 + t7544 + t7547 + t7560 + t7569 + t7587 + t7625 + t7645 + t7698 + t7742 + t7769;
  t7942 = 0. + t626;
  t7908 = -0.004500000000000004*t359*t1599;
  t7965 = t359*t1599;
  t7969 = 0. + t7965;
  t7946 = 0.049*t1899;
  t7948 = 0.09*t2452;
  t7951 = 0. + t7880 + t7946 + t7948 + t2316 + t2548 + t3402 + t3704 + t4257 + t4436 + t4770 + t5264 + t5386 + t5484;
  t7921 = -1.*t269*t359;
  t7924 = 0. + t7921;
  t7976 = -0.049*t5717;
  t7979 = -0.09*t5766;
  t7982 = 0. + t7908 + t7976 + t7979 + t5723 + t5784 + t6079 + t6159 + t6385 + t6756 + t7029 + t7442 + t7472 + t7501;
  t7992 = 0.21*t7566;
  t7993 = 0.049*t7559;
  t8004 = 0. + t7992 + t7993 + t7560 + t7569 + t7587 + t7625 + t7645 + t7698 + t7742 + t7769;
  t8011 = 0.21*t3665;
  t8014 = 0.049*t2717;
  t8018 = 0. + t8011 + t8014 + t3402 + t3704 + t4257 + t4436 + t4770 + t5264 + t5386 + t5484;
  t8028 = -0.21*t6136;
  t8031 = -0.049*t5860;
  t8032 = 0. + t8028 + t8031 + t6079 + t6159 + t6385 + t6756 + t7029 + t7442 + t7472 + t7501;
  t8043 = 0.0016*t7584;
  t8049 = 0.2707*t7607;
  t8050 = 0. + t8043 + t8049 + t7587 + t7625 + t7645 + t7698 + t7742 + t7769;
  t8057 = 0.0016*t3781;
  t8060 = 0.2707*t4380;
  t8062 = 0. + t8057 + t8060 + t4257 + t4436 + t4770 + t5264 + t5386 + t5484;
  t8073 = -0.0016*t6343;
  t8074 = -0.2707*t6662;
  t8075 = 0. + t8073 + t8074 + t6385 + t6756 + t7029 + t7442 + t7472 + t7501;
  t8084 = 0.7055*t7695;
  t8087 = -0.0184*t7644;
  t8088 = 0. + t8084 + t8087 + t7645 + t7698 + t7742 + t7769;
  t8091 = 0.7055*t5109;
  t8092 = -0.0184*t4541;
  t8097 = 0. + t8091 + t8092 + t4770 + t5264 + t5386 + t5484;
  t8104 = -0.7055*t7298;
  t8105 = 0.0184*t6792;
  t8107 = 0. + t8104 + t8105 + t7029 + t7442 + t7472 + t7501;
  t8118 = 0.052199999999999996*t7720;
  t8119 = -0.01770000000000005*t7768;
  t8120 = 0. + t8118 + t8119;
  t8125 = 0.052199999999999996*t5374;
  t8126 = -0.01770000000000005*t5460;
  t8127 = 0. + t8125 + t8126;
  t8132 = -0.052199999999999996*t7463;
  t8133 = 0.01770000000000005*t7492;
  t8135 = 0. + t8132 + t8133;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0. - 1.*(0. + t1537 + t1746 + t2316 + t2548 + 0.135*t269 + t3402 - 0.1305*t269*t359 + t3704 + t4257 + t4436 + t4770 + t5264 + t5386 + t5484 + t269*t905);
  p_output1[22]=0. - 0.135*t1599 + 0.1305*t1599*t359 + t5655 + t5677 + t5723 + t5784 + t6079 + t6159 + t6385 + t6756 + t7029 + t7442 + t7472 + t7501 - 1.*t1599*t905;
  p_output1[23]=0.;
  p_output1[24]=0. + t7527*t7772;
  p_output1[25]=0. - 1.*t7772*t7868;
  p_output1[26]=t7868*(0. + t1537 - 0.09*t1599 + t1746 + t2316 + t2548 + t3402 + t3704 + t4257 + t4436 + t4770 + t5264 + t5386 + t5484 + 0.049*t269*t626 + t7880) - 1.*t7527*(0. - 0.09*t269 + t5655 + t5677 + t5723 + t5784 + t6079 + t6159 - 0.049*t1599*t626 + t6385 + t6756 + t7029 + t7442 + t7472 + t7501 + t7908);
  p_output1[27]=t7924*t7937 - 1.*t7942*t7951;
  p_output1[28]=-1.*t7937*t7969 + t7942*t7982;
  p_output1[29]=t7951*t7969 - 1.*t7924*t7982;
  p_output1[30]=t7924*t8004 - 1.*t7942*t8018;
  p_output1[31]=-1.*t7969*t8004 + t7942*t8032;
  p_output1[32]=t7969*t8018 - 1.*t7924*t8032;
  p_output1[33]=t7924*t8050 - 1.*t7942*t8062;
  p_output1[34]=-1.*t7969*t8050 + t7942*t8075;
  p_output1[35]=t7969*t8062 - 1.*t7924*t8075;
  p_output1[36]=t7924*t8088 - 1.*t7942*t8097;
  p_output1[37]=-1.*t7969*t8088 + t7942*t8107;
  p_output1[38]=t7969*t8097 - 1.*t7924*t8107;
  p_output1[39]=t7924*t8120 - 1.*t7942*t8127;
  p_output1[40]=-1.*t7969*t8120 + t7942*t8135;
  p_output1[41]=t7969*t8127 - 1.*t7924*t8135;
}



void Jv_MultisenseIMU_to_RightToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
