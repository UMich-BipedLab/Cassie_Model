/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:33:17 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_toe_joint_left_src.h"

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
  double t1181;
  double t1103;
  double t1206;
  double t1125;
  double t1227;
  double t51;
  double t1163;
  double t1314;
  double t1561;
  double t1690;
  double t1704;
  double t1814;
  double t1956;
  double t2683;
  double t2749;
  double t2803;
  double t2956;
  double t2509;
  double t2517;
  double t2518;
  double t3427;
  double t4716;
  double t4773;
  double t4801;
  double t4952;
  double t4554;
  double t4670;
  double t4704;
  double t5478;
  double t5479;
  double t5699;
  double t6355;
  double t6382;
  double t6547;
  double t6573;
  double t6606;
  double t6614;
  double t6626;
  double t6713;
  double t6738;
  double t6754;
  double t6783;
  double t6799;
  double t6810;
  double t6892;
  double t6916;
  double t6924;
  double t6936;
  double t6995;
  double t6997;
  double t7037;
  double t7047;
  double t7062;
  double t7064;
  double t7074;
  double t7090;
  double t7091;
  double t7100;
  double t7144;
  double t7171;
  double t7179;
  double t7186;
  double t7195;
  double t7199;
  double t7218;
  double t7250;
  double t7280;
  double t7289;
  double t7334;
  double t7340;
  double t7348;
  double t534;
  double t919;
  double t1037;
  double t1057;
  double t2175;
  double t2350;
  double t7466;
  double t7470;
  double t7486;
  double t7508;
  double t7510;
  double t7519;
  double t2825;
  double t2971;
  double t3134;
  double t3531;
  double t3627;
  double t3659;
  double t7528;
  double t7533;
  double t7548;
  double t4951;
  double t4994;
  double t5034;
  double t5729;
  double t6105;
  double t6156;
  double t6567;
  double t6598;
  double t6605;
  double t7627;
  double t7629;
  double t7635;
  double t7651;
  double t7667;
  double t7697;
  double t6661;
  double t6695;
  double t6710;
  double t6824;
  double t6909;
  double t6911;
  double t7706;
  double t7724;
  double t7730;
  double t7747;
  double t7750;
  double t7777;
  double t6967;
  double t6969;
  double t6972;
  double t7073;
  double t7076;
  double t7081;
  double t7797;
  double t7802;
  double t7810;
  double t7829;
  double t7835;
  double t7839;
  double t7119;
  double t7134;
  double t7142;
  double t7203;
  double t7233;
  double t7240;
  double t7856;
  double t7871;
  double t7887;
  double t7911;
  double t7914;
  double t7916;
  double t7326;
  double t7329;
  double t7331;
  double t7922;
  double t7925;
  double t7931;
  double t7976;
  double t7978;
  double t7979;
  double t8073;
  double t8090;
  double t8099;
  double t8141;
  double t8148;
  double t8149;
  double t8152;
  double t8159;
  double t8163;
  double t8174;
  double t8175;
  double t8177;
  double t8182;
  double t8192;
  double t8196;
  double t8201;
  double t8209;
  double t8214;
  double t8227;
  double t8229;
  double t8240;
  double t8246;
  double t8252;
  double t8255;
  double t8267;
  double t8268;
  double t8269;
  double t8273;
  double t8277;
  double t8279;
  double t8294;
  double t8295;
  double t8298;
  t1181 = Cos(var1[3]);
  t1103 = Cos(var1[5]);
  t1206 = Sin(var1[4]);
  t1125 = Sin(var1[3]);
  t1227 = Sin(var1[5]);
  t51 = Cos(var1[6]);
  t1163 = -1.*t1103*t1125;
  t1314 = t1181*t1206*t1227;
  t1561 = t1163 + t1314;
  t1690 = t1181*t1103*t1206;
  t1704 = t1125*t1227;
  t1814 = t1690 + t1704;
  t1956 = Sin(var1[6]);
  t2683 = Cos(var1[7]);
  t2749 = -1.*t2683;
  t2803 = 1. + t2749;
  t2956 = Sin(var1[7]);
  t2509 = t51*t1561;
  t2517 = t1814*t1956;
  t2518 = t2509 + t2517;
  t3427 = Cos(var1[4]);
  t4716 = Cos(var1[8]);
  t4773 = -1.*t4716;
  t4801 = 1. + t4773;
  t4952 = Sin(var1[8]);
  t4554 = t1181*t3427*t2683;
  t4670 = t2518*t2956;
  t4704 = t4554 + t4670;
  t5478 = t51*t1814;
  t5479 = -1.*t1561*t1956;
  t5699 = t5478 + t5479;
  t6355 = Cos(var1[9]);
  t6382 = -1.*t6355;
  t6547 = 1. + t6382;
  t6573 = Sin(var1[9]);
  t6606 = t4716*t4704;
  t6614 = t5699*t4952;
  t6626 = t6606 + t6614;
  t6713 = t4716*t5699;
  t6738 = -1.*t4704*t4952;
  t6754 = t6713 + t6738;
  t6783 = Cos(var1[10]);
  t6799 = -1.*t6783;
  t6810 = 1. + t6799;
  t6892 = Sin(var1[10]);
  t6916 = -1.*t6573*t6626;
  t6924 = t6355*t6754;
  t6936 = t6916 + t6924;
  t6995 = t6355*t6626;
  t6997 = t6573*t6754;
  t7037 = t6995 + t6997;
  t7047 = Cos(var1[11]);
  t7062 = -1.*t7047;
  t7064 = 1. + t7062;
  t7074 = Sin(var1[11]);
  t7090 = t6892*t6936;
  t7091 = t6783*t7037;
  t7100 = t7090 + t7091;
  t7144 = t6783*t6936;
  t7171 = -1.*t6892*t7037;
  t7179 = t7144 + t7171;
  t7186 = Cos(var1[12]);
  t7195 = -1.*t7186;
  t7199 = 1. + t7195;
  t7218 = Sin(var1[12]);
  t7250 = -1.*t7074*t7100;
  t7280 = t7047*t7179;
  t7289 = t7250 + t7280;
  t7334 = t7047*t7100;
  t7340 = t7074*t7179;
  t7348 = t7334 + t7340;
  t534 = -1.*t51;
  t919 = 1. + t534;
  t1037 = 0.135*t919;
  t1057 = 0. + t1037;
  t2175 = -0.135*t1956;
  t2350 = 0. + t2175;
  t7466 = t1181*t1103;
  t7470 = t1125*t1206*t1227;
  t7486 = t7466 + t7470;
  t7508 = t1103*t1125*t1206;
  t7510 = -1.*t1181*t1227;
  t7519 = t7508 + t7510;
  t2825 = 0.135*t2803;
  t2971 = 0.049*t2956;
  t3134 = 0. + t2825 + t2971;
  t3531 = -0.049*t2803;
  t3627 = 0.135*t2956;
  t3659 = 0. + t3531 + t3627;
  t7528 = t51*t7486;
  t7533 = t7519*t1956;
  t7548 = t7528 + t7533;
  t4951 = -0.049*t4801;
  t4994 = -0.09*t4952;
  t5034 = 0. + t4951 + t4994;
  t5729 = -0.09*t4801;
  t6105 = 0.049*t4952;
  t6156 = 0. + t5729 + t6105;
  t6567 = -0.049*t6547;
  t6598 = -0.21*t6573;
  t6605 = 0. + t6567 + t6598;
  t7627 = t3427*t2683*t1125;
  t7629 = t7548*t2956;
  t7635 = t7627 + t7629;
  t7651 = t51*t7519;
  t7667 = -1.*t7486*t1956;
  t7697 = t7651 + t7667;
  t6661 = -0.21*t6547;
  t6695 = 0.049*t6573;
  t6710 = 0. + t6661 + t6695;
  t6824 = -0.2707*t6810;
  t6909 = 0.0016*t6892;
  t6911 = 0. + t6824 + t6909;
  t7706 = t4716*t7635;
  t7724 = t7697*t4952;
  t7730 = t7706 + t7724;
  t7747 = t4716*t7697;
  t7750 = -1.*t7635*t4952;
  t7777 = t7747 + t7750;
  t6967 = -0.0016*t6810;
  t6969 = -0.2707*t6892;
  t6972 = 0. + t6967 + t6969;
  t7073 = 0.0184*t7064;
  t7076 = -0.7055*t7074;
  t7081 = 0. + t7073 + t7076;
  t7797 = -1.*t6573*t7730;
  t7802 = t6355*t7777;
  t7810 = t7797 + t7802;
  t7829 = t6355*t7730;
  t7835 = t6573*t7777;
  t7839 = t7829 + t7835;
  t7119 = -0.7055*t7064;
  t7134 = -0.0184*t7074;
  t7142 = 0. + t7119 + t7134;
  t7203 = -1.1135*t7199;
  t7233 = 0.0216*t7218;
  t7240 = 0. + t7203 + t7233;
  t7856 = t6892*t7810;
  t7871 = t6783*t7839;
  t7887 = t7856 + t7871;
  t7911 = t6783*t7810;
  t7914 = -1.*t6892*t7839;
  t7916 = t7911 + t7914;
  t7326 = -0.0216*t7199;
  t7329 = -1.1135*t7218;
  t7331 = 0. + t7326 + t7329;
  t7922 = -1.*t7074*t7887;
  t7925 = t7047*t7916;
  t7931 = t7922 + t7925;
  t7976 = t7047*t7887;
  t7978 = t7074*t7916;
  t7979 = t7976 + t7978;
  t8073 = t3427*t51*t1227;
  t8090 = t3427*t1103*t1956;
  t8099 = t8073 + t8090;
  t8141 = -1.*t2683*t1206;
  t8148 = t8099*t2956;
  t8149 = t8141 + t8148;
  t8152 = t3427*t1103*t51;
  t8159 = -1.*t3427*t1227*t1956;
  t8163 = t8152 + t8159;
  t8174 = t4716*t8149;
  t8175 = t8163*t4952;
  t8177 = t8174 + t8175;
  t8182 = t4716*t8163;
  t8192 = -1.*t8149*t4952;
  t8196 = t8182 + t8192;
  t8201 = -1.*t6573*t8177;
  t8209 = t6355*t8196;
  t8214 = t8201 + t8209;
  t8227 = t6355*t8177;
  t8229 = t6573*t8196;
  t8240 = t8227 + t8229;
  t8246 = t6892*t8214;
  t8252 = t6783*t8240;
  t8255 = t8246 + t8252;
  t8267 = t6783*t8214;
  t8268 = -1.*t6892*t8240;
  t8269 = t8267 + t8268;
  t8273 = -1.*t7074*t8255;
  t8277 = t7047*t8269;
  t8279 = t8273 + t8277;
  t8294 = t7047*t8255;
  t8295 = t7074*t8269;
  t8298 = t8294 + t8295;
  p_output1[0]=0. + t1057*t1561 + t1814*t2350 + t2518*t3134 + 0.1305*(t2518*t2683 - 1.*t1181*t2956*t3427) + t1181*t3427*t3659 + t4704*t5034 + t5699*t6156 + t6605*t6626 + t6710*t6754 + t6911*t6936 + t6972*t7037 + t7081*t7100 + t7142*t7179 + t7240*t7289 + t7331*t7348 - 0.0216*(t7218*t7289 + t7186*t7348) - 1.1135*(t7186*t7289 - 1.*t7218*t7348) + var1[0];
  p_output1[1]=0. + t1125*t3427*t3659 + t1057*t7486 + t2350*t7519 + t3134*t7548 + 0.1305*(-1.*t1125*t2956*t3427 + t2683*t7548) + t5034*t7635 + t6156*t7697 + t6605*t7730 + t6710*t7777 + t6911*t7810 + t6972*t7839 + t7081*t7887 + t7142*t7916 + t7240*t7931 + t7331*t7979 - 0.0216*(t7218*t7931 + t7186*t7979) - 1.1135*(t7186*t7931 - 1.*t7218*t7979) + var1[1];
  p_output1[2]=0. + t1057*t1227*t3427 + t1103*t2350*t3427 - 1.*t1206*t3659 + t3134*t8099 + 0.1305*(t1206*t2956 + t2683*t8099) + t5034*t8149 + t6156*t8163 + t6605*t8177 + t6710*t8196 + t6911*t8214 + t6972*t8240 + t7081*t8255 + t7142*t8269 + t7240*t8279 + t7331*t8298 - 0.0216*(t7218*t8279 + t7186*t8298) - 1.1135*(t7186*t8279 - 1.*t7218*t8298) + var1[2];
}



void p_toe_joint_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
