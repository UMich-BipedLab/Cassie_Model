/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:33:49 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_ankle_joint_right_src.h"

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
  double t337;
  double t2362;
  double t3503;
  double t2843;
  double t3749;
  double t1086;
  double t1445;
  double t1454;
  double t1576;
  double t1853;
  double t3195;
  double t4150;
  double t4222;
  double t4656;
  double t6068;
  double t6083;
  double t6201;
  double t814;
  double t6503;
  double t6579;
  double t6704;
  double t6810;
  double t6817;
  double t6842;
  double t6852;
  double t6881;
  double t6886;
  double t6907;
  double t7058;
  double t7066;
  double t7071;
  double t7082;
  double t7083;
  double t7089;
  double t7114;
  double t7158;
  double t7185;
  double t7188;
  double t7234;
  double t7236;
  double t7237;
  double t7261;
  double t7274;
  double t7279;
  double t7299;
  double t7318;
  double t7319;
  double t7324;
  double t7395;
  double t7406;
  double t7435;
  double t7483;
  double t7485;
  double t7502;
  double t7505;
  double t7576;
  double t7581;
  double t7591;
  double t7674;
  double t7678;
  double t7694;
  double t1492;
  double t1694;
  double t1802;
  double t2210;
  double t2357;
  double t4665;
  double t5487;
  double t5579;
  double t5949;
  double t6301;
  double t6364;
  double t6495;
  double t7870;
  double t7910;
  double t7926;
  double t7960;
  double t7964;
  double t7973;
  double t6844;
  double t6862;
  double t6879;
  double t8017;
  double t8056;
  double t8070;
  double t6993;
  double t7021;
  double t7055;
  double t7108;
  double t7120;
  double t7127;
  double t8087;
  double t8098;
  double t8101;
  double t8197;
  double t8200;
  double t8207;
  double t7210;
  double t7216;
  double t7227;
  double t7289;
  double t7304;
  double t7312;
  double t8237;
  double t8253;
  double t8330;
  double t8375;
  double t8390;
  double t8396;
  double t7335;
  double t7344;
  double t7373;
  double t7503;
  double t7516;
  double t7553;
  double t8418;
  double t8424;
  double t8434;
  double t8448;
  double t8459;
  double t8473;
  double t7658;
  double t7664;
  double t7671;
  double t8487;
  double t8498;
  double t8520;
  double t8536;
  double t8538;
  double t8539;
  double t8649;
  double t8654;
  double t8683;
  double t8709;
  double t8718;
  double t8730;
  double t8847;
  double t8851;
  double t8869;
  double t8912;
  double t8922;
  double t8926;
  double t8982;
  double t9008;
  double t9009;
  double t9075;
  double t9096;
  double t9097;
  double t9110;
  double t9132;
  double t9142;
  double t9161;
  double t9168;
  double t9170;
  double t9174;
  double t9179;
  double t9182;
  t337 = Cos(var1[3]);
  t2362 = Cos(var1[5]);
  t3503 = Sin(var1[3]);
  t2843 = Sin(var1[4]);
  t3749 = Sin(var1[5]);
  t1086 = Cos(var1[14]);
  t1445 = -1.*t1086;
  t1454 = 1. + t1445;
  t1576 = Sin(var1[14]);
  t1853 = Sin(var1[13]);
  t3195 = t337*t2362*t2843;
  t4150 = t3503*t3749;
  t4222 = t3195 + t4150;
  t4656 = Cos(var1[13]);
  t6068 = -1.*t2362*t3503;
  t6083 = t337*t2843*t3749;
  t6201 = t6068 + t6083;
  t814 = Cos(var1[4]);
  t6503 = t1853*t4222;
  t6579 = t4656*t6201;
  t6704 = t6503 + t6579;
  t6810 = Cos(var1[15]);
  t6817 = -1.*t6810;
  t6842 = 1. + t6817;
  t6852 = Sin(var1[15]);
  t6881 = t4656*t4222;
  t6886 = -1.*t1853*t6201;
  t6907 = t6881 + t6886;
  t7058 = t1086*t337*t814;
  t7066 = t1576*t6704;
  t7071 = t7058 + t7066;
  t7082 = Cos(var1[16]);
  t7083 = -1.*t7082;
  t7089 = 1. + t7083;
  t7114 = Sin(var1[16]);
  t7158 = t6852*t6907;
  t7185 = t6810*t7071;
  t7188 = t7158 + t7185;
  t7234 = t6810*t6907;
  t7236 = -1.*t6852*t7071;
  t7237 = t7234 + t7236;
  t7261 = Cos(var1[17]);
  t7274 = -1.*t7261;
  t7279 = 1. + t7274;
  t7299 = Sin(var1[17]);
  t7318 = -1.*t7114*t7188;
  t7319 = t7082*t7237;
  t7324 = t7318 + t7319;
  t7395 = t7082*t7188;
  t7406 = t7114*t7237;
  t7435 = t7395 + t7406;
  t7483 = Cos(var1[18]);
  t7485 = -1.*t7483;
  t7502 = 1. + t7485;
  t7505 = Sin(var1[18]);
  t7576 = t7299*t7324;
  t7581 = t7261*t7435;
  t7591 = t7576 + t7581;
  t7674 = t7261*t7324;
  t7678 = -1.*t7299*t7435;
  t7694 = t7674 + t7678;
  t1492 = -0.049*t1454;
  t1694 = -0.135*t1576;
  t1802 = 0. + t1492 + t1694;
  t2210 = 0.135*t1853;
  t2357 = 0. + t2210;
  t4665 = -1.*t4656;
  t5487 = 1. + t4665;
  t5579 = -0.135*t5487;
  t5949 = 0. + t5579;
  t6301 = -0.135*t1454;
  t6364 = 0.049*t1576;
  t6495 = 0. + t6301 + t6364;
  t7870 = t2362*t3503*t2843;
  t7910 = -1.*t337*t3749;
  t7926 = t7870 + t7910;
  t7960 = t337*t2362;
  t7964 = t3503*t2843*t3749;
  t7973 = t7960 + t7964;
  t6844 = -0.09*t6842;
  t6862 = 0.049*t6852;
  t6879 = 0. + t6844 + t6862;
  t8017 = t1853*t7926;
  t8056 = t4656*t7973;
  t8070 = t8017 + t8056;
  t6993 = -0.049*t6842;
  t7021 = -0.09*t6852;
  t7055 = 0. + t6993 + t7021;
  t7108 = -0.049*t7089;
  t7120 = -0.21*t7114;
  t7127 = 0. + t7108 + t7120;
  t8087 = t4656*t7926;
  t8098 = -1.*t1853*t7973;
  t8101 = t8087 + t8098;
  t8197 = t1086*t814*t3503;
  t8200 = t1576*t8070;
  t8207 = t8197 + t8200;
  t7210 = -0.21*t7089;
  t7216 = 0.049*t7114;
  t7227 = 0. + t7210 + t7216;
  t7289 = -0.2707*t7279;
  t7304 = 0.0016*t7299;
  t7312 = 0. + t7289 + t7304;
  t8237 = t6852*t8101;
  t8253 = t6810*t8207;
  t8330 = t8237 + t8253;
  t8375 = t6810*t8101;
  t8390 = -1.*t6852*t8207;
  t8396 = t8375 + t8390;
  t7335 = -0.0016*t7279;
  t7344 = -0.2707*t7299;
  t7373 = 0. + t7335 + t7344;
  t7503 = 0.0184*t7502;
  t7516 = -0.7055*t7505;
  t7553 = 0. + t7503 + t7516;
  t8418 = -1.*t7114*t8330;
  t8424 = t7082*t8396;
  t8434 = t8418 + t8424;
  t8448 = t7082*t8330;
  t8459 = t7114*t8396;
  t8473 = t8448 + t8459;
  t7658 = -0.7055*t7502;
  t7664 = -0.0184*t7505;
  t7671 = 0. + t7658 + t7664;
  t8487 = t7299*t8434;
  t8498 = t7261*t8473;
  t8520 = t8487 + t8498;
  t8536 = t7261*t8434;
  t8538 = -1.*t7299*t8473;
  t8539 = t8536 + t8538;
  t8649 = t814*t2362*t1853;
  t8654 = t4656*t814*t3749;
  t8683 = t8649 + t8654;
  t8709 = t4656*t814*t2362;
  t8718 = -1.*t814*t1853*t3749;
  t8730 = t8709 + t8718;
  t8847 = -1.*t1086*t2843;
  t8851 = t1576*t8683;
  t8869 = t8847 + t8851;
  t8912 = t6852*t8730;
  t8922 = t6810*t8869;
  t8926 = t8912 + t8922;
  t8982 = t6810*t8730;
  t9008 = -1.*t6852*t8869;
  t9009 = t8982 + t9008;
  t9075 = -1.*t7114*t8926;
  t9096 = t7082*t9009;
  t9097 = t9075 + t9096;
  t9110 = t7082*t8926;
  t9132 = t7114*t9009;
  t9142 = t9110 + t9132;
  t9161 = t7299*t9097;
  t9168 = t7261*t9142;
  t9170 = t9161 + t9168;
  t9174 = t7261*t9097;
  t9179 = -1.*t7299*t9142;
  t9182 = t9174 + t9179;
  p_output1[0]=0. + t2357*t4222 + t5949*t6201 + t6495*t6704 + t6879*t6907 + t7055*t7071 + t7127*t7188 + t7227*t7237 + t7312*t7324 + t7373*t7435 + t7553*t7591 + t7671*t7694 - 0.7055*(-1.*t7505*t7591 + t7483*t7694) + 0.0184*(t7483*t7591 + t7505*t7694) + t1802*t337*t814 - 0.1305*(t1086*t6704 - 1.*t1576*t337*t814) + var1[0];
  p_output1[1]=0. + t2357*t7926 + t5949*t7973 + t6495*t8070 + t6879*t8101 + t1802*t3503*t814 - 0.1305*(t1086*t8070 - 1.*t1576*t3503*t814) + t7055*t8207 + t7127*t8330 + t7227*t8396 + t7312*t8434 + t7373*t8473 + t7553*t8520 + t7671*t8539 - 0.7055*(-1.*t7505*t8520 + t7483*t8539) + 0.0184*(t7483*t8520 + t7505*t8539) + var1[1];
  p_output1[2]=0. - 1.*t1802*t2843 + t2357*t2362*t814 + t3749*t5949*t814 + t6495*t8683 - 0.1305*(t1576*t2843 + t1086*t8683) + t6879*t8730 + t7055*t8869 + t7127*t8926 + t7227*t9009 + t7312*t9097 + t7373*t9142 + t7553*t9170 + t7671*t9182 - 0.7055*(-1.*t7505*t9170 + t7483*t9182) + 0.0184*(t7483*t9170 + t7505*t9182) + var1[2];
}



void p_ankle_joint_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
