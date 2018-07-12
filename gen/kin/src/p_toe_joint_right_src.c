/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:33:53 GMT-04:00
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
  double t150;
  double t2261;
  double t3852;
  double t2477;
  double t3893;
  double t342;
  double t350;
  double t943;
  double t1738;
  double t2029;
  double t2753;
  double t4006;
  double t4008;
  double t4205;
  double t4746;
  double t4763;
  double t4863;
  double t238;
  double t5446;
  double t5667;
  double t5734;
  double t5859;
  double t5971;
  double t5991;
  double t6193;
  double t6415;
  double t6417;
  double t6617;
  double t6916;
  double t6917;
  double t6927;
  double t6965;
  double t6974;
  double t7008;
  double t7015;
  double t7034;
  double t7048;
  double t7051;
  double t7120;
  double t7141;
  double t7158;
  double t7161;
  double t7167;
  double t7183;
  double t7191;
  double t7211;
  double t7231;
  double t7241;
  double t7282;
  double t7292;
  double t7295;
  double t7326;
  double t7346;
  double t7366;
  double t7387;
  double t7398;
  double t7399;
  double t7400;
  double t7417;
  double t7475;
  double t7503;
  double t7514;
  double t7518;
  double t7544;
  double t7564;
  double t7602;
  double t7608;
  double t7613;
  double t7633;
  double t7644;
  double t7659;
  double t1234;
  double t1750;
  double t1876;
  double t2084;
  double t2141;
  double t4373;
  double t4557;
  double t4616;
  double t4696;
  double t5146;
  double t5236;
  double t5270;
  double t7744;
  double t7746;
  double t7753;
  double t7772;
  double t7778;
  double t7796;
  double t6004;
  double t6267;
  double t6361;
  double t7831;
  double t7833;
  double t7841;
  double t6836;
  double t6862;
  double t6912;
  double t7014;
  double t7019;
  double t7026;
  double t7874;
  double t7891;
  double t7898;
  double t7948;
  double t7957;
  double t7960;
  double t7094;
  double t7104;
  double t7107;
  double t7189;
  double t7202;
  double t7210;
  double t7975;
  double t7983;
  double t7984;
  double t8001;
  double t8014;
  double t8018;
  double t7253;
  double t7255;
  double t7263;
  double t7386;
  double t7388;
  double t7389;
  double t8040;
  double t8044;
  double t8052;
  double t8076;
  double t8089;
  double t8093;
  double t7411;
  double t7414;
  double t7415;
  double t7556;
  double t7578;
  double t7581;
  double t8101;
  double t8103;
  double t8107;
  double t8110;
  double t8120;
  double t8127;
  double t7628;
  double t7631;
  double t7632;
  double t8146;
  double t8149;
  double t8150;
  double t8166;
  double t8168;
  double t8178;
  double t8386;
  double t8391;
  double t8399;
  double t8507;
  double t8516;
  double t8525;
  double t8568;
  double t8581;
  double t8583;
  double t8599;
  double t8606;
  double t8633;
  double t8661;
  double t8678;
  double t8683;
  double t8690;
  double t8695;
  double t8700;
  double t8709;
  double t8726;
  double t8730;
  double t8749;
  double t8752;
  double t8756;
  double t8764;
  double t8769;
  double t8777;
  double t8781;
  double t8782;
  double t8783;
  double t8787;
  double t8789;
  double t8797;
  t150 = Cos(var1[3]);
  t2261 = Cos(var1[5]);
  t3852 = Sin(var1[3]);
  t2477 = Sin(var1[4]);
  t3893 = Sin(var1[5]);
  t342 = Cos(var1[14]);
  t350 = -1.*t342;
  t943 = 1. + t350;
  t1738 = Sin(var1[14]);
  t2029 = Sin(var1[13]);
  t2753 = t150*t2261*t2477;
  t4006 = t3852*t3893;
  t4008 = t2753 + t4006;
  t4205 = Cos(var1[13]);
  t4746 = -1.*t2261*t3852;
  t4763 = t150*t2477*t3893;
  t4863 = t4746 + t4763;
  t238 = Cos(var1[4]);
  t5446 = t2029*t4008;
  t5667 = t4205*t4863;
  t5734 = t5446 + t5667;
  t5859 = Cos(var1[15]);
  t5971 = -1.*t5859;
  t5991 = 1. + t5971;
  t6193 = Sin(var1[15]);
  t6415 = t4205*t4008;
  t6417 = -1.*t2029*t4863;
  t6617 = t6415 + t6417;
  t6916 = t342*t150*t238;
  t6917 = t1738*t5734;
  t6927 = t6916 + t6917;
  t6965 = Cos(var1[16]);
  t6974 = -1.*t6965;
  t7008 = 1. + t6974;
  t7015 = Sin(var1[16]);
  t7034 = t6193*t6617;
  t7048 = t5859*t6927;
  t7051 = t7034 + t7048;
  t7120 = t5859*t6617;
  t7141 = -1.*t6193*t6927;
  t7158 = t7120 + t7141;
  t7161 = Cos(var1[17]);
  t7167 = -1.*t7161;
  t7183 = 1. + t7167;
  t7191 = Sin(var1[17]);
  t7211 = -1.*t7015*t7051;
  t7231 = t6965*t7158;
  t7241 = t7211 + t7231;
  t7282 = t6965*t7051;
  t7292 = t7015*t7158;
  t7295 = t7282 + t7292;
  t7326 = Cos(var1[18]);
  t7346 = -1.*t7326;
  t7366 = 1. + t7346;
  t7387 = Sin(var1[18]);
  t7398 = t7191*t7241;
  t7399 = t7161*t7295;
  t7400 = t7398 + t7399;
  t7417 = t7161*t7241;
  t7475 = -1.*t7191*t7295;
  t7503 = t7417 + t7475;
  t7514 = Cos(var1[19]);
  t7518 = -1.*t7514;
  t7544 = 1. + t7518;
  t7564 = Sin(var1[19]);
  t7602 = -1.*t7387*t7400;
  t7608 = t7326*t7503;
  t7613 = t7602 + t7608;
  t7633 = t7326*t7400;
  t7644 = t7387*t7503;
  t7659 = t7633 + t7644;
  t1234 = -0.049*t943;
  t1750 = -0.135*t1738;
  t1876 = 0. + t1234 + t1750;
  t2084 = 0.135*t2029;
  t2141 = 0. + t2084;
  t4373 = -1.*t4205;
  t4557 = 1. + t4373;
  t4616 = -0.135*t4557;
  t4696 = 0. + t4616;
  t5146 = -0.135*t943;
  t5236 = 0.049*t1738;
  t5270 = 0. + t5146 + t5236;
  t7744 = t2261*t3852*t2477;
  t7746 = -1.*t150*t3893;
  t7753 = t7744 + t7746;
  t7772 = t150*t2261;
  t7778 = t3852*t2477*t3893;
  t7796 = t7772 + t7778;
  t6004 = -0.09*t5991;
  t6267 = 0.049*t6193;
  t6361 = 0. + t6004 + t6267;
  t7831 = t2029*t7753;
  t7833 = t4205*t7796;
  t7841 = t7831 + t7833;
  t6836 = -0.049*t5991;
  t6862 = -0.09*t6193;
  t6912 = 0. + t6836 + t6862;
  t7014 = -0.049*t7008;
  t7019 = -0.21*t7015;
  t7026 = 0. + t7014 + t7019;
  t7874 = t4205*t7753;
  t7891 = -1.*t2029*t7796;
  t7898 = t7874 + t7891;
  t7948 = t342*t238*t3852;
  t7957 = t1738*t7841;
  t7960 = t7948 + t7957;
  t7094 = -0.21*t7008;
  t7104 = 0.049*t7015;
  t7107 = 0. + t7094 + t7104;
  t7189 = -0.2707*t7183;
  t7202 = 0.0016*t7191;
  t7210 = 0. + t7189 + t7202;
  t7975 = t6193*t7898;
  t7983 = t5859*t7960;
  t7984 = t7975 + t7983;
  t8001 = t5859*t7898;
  t8014 = -1.*t6193*t7960;
  t8018 = t8001 + t8014;
  t7253 = -0.0016*t7183;
  t7255 = -0.2707*t7191;
  t7263 = 0. + t7253 + t7255;
  t7386 = 0.0184*t7366;
  t7388 = -0.7055*t7387;
  t7389 = 0. + t7386 + t7388;
  t8040 = -1.*t7015*t7984;
  t8044 = t6965*t8018;
  t8052 = t8040 + t8044;
  t8076 = t6965*t7984;
  t8089 = t7015*t8018;
  t8093 = t8076 + t8089;
  t7411 = -0.7055*t7366;
  t7414 = -0.0184*t7387;
  t7415 = 0. + t7411 + t7414;
  t7556 = -1.1135*t7544;
  t7578 = 0.0216*t7564;
  t7581 = 0. + t7556 + t7578;
  t8101 = t7191*t8052;
  t8103 = t7161*t8093;
  t8107 = t8101 + t8103;
  t8110 = t7161*t8052;
  t8120 = -1.*t7191*t8093;
  t8127 = t8110 + t8120;
  t7628 = -0.0216*t7544;
  t7631 = -1.1135*t7564;
  t7632 = 0. + t7628 + t7631;
  t8146 = -1.*t7387*t8107;
  t8149 = t7326*t8127;
  t8150 = t8146 + t8149;
  t8166 = t7326*t8107;
  t8168 = t7387*t8127;
  t8178 = t8166 + t8168;
  t8386 = t238*t2261*t2029;
  t8391 = t4205*t238*t3893;
  t8399 = t8386 + t8391;
  t8507 = t4205*t238*t2261;
  t8516 = -1.*t238*t2029*t3893;
  t8525 = t8507 + t8516;
  t8568 = -1.*t342*t2477;
  t8581 = t1738*t8399;
  t8583 = t8568 + t8581;
  t8599 = t6193*t8525;
  t8606 = t5859*t8583;
  t8633 = t8599 + t8606;
  t8661 = t5859*t8525;
  t8678 = -1.*t6193*t8583;
  t8683 = t8661 + t8678;
  t8690 = -1.*t7015*t8633;
  t8695 = t6965*t8683;
  t8700 = t8690 + t8695;
  t8709 = t6965*t8633;
  t8726 = t7015*t8683;
  t8730 = t8709 + t8726;
  t8749 = t7191*t8700;
  t8752 = t7161*t8730;
  t8756 = t8749 + t8752;
  t8764 = t7161*t8700;
  t8769 = -1.*t7191*t8730;
  t8777 = t8764 + t8769;
  t8781 = -1.*t7387*t8756;
  t8782 = t7326*t8777;
  t8783 = t8781 + t8782;
  t8787 = t7326*t8756;
  t8789 = t7387*t8777;
  t8797 = t8787 + t8789;
  p_output1[0]=0. + t150*t1876*t238 + t2141*t4008 + t4696*t4863 + t5270*t5734 - 0.1305*(-1.*t150*t1738*t238 + t342*t5734) + t6361*t6617 + t6912*t6927 + t7026*t7051 + t7107*t7158 + t7210*t7241 + t7263*t7295 + t7389*t7400 + t7415*t7503 + t7581*t7613 + t7632*t7659 - 0.0216*(t7564*t7613 + t7514*t7659) - 1.1135*(t7514*t7613 - 1.*t7564*t7659) + var1[0];
  p_output1[1]=0. + t1876*t238*t3852 + t2141*t7753 + t4696*t7796 + t5270*t7841 - 0.1305*(-1.*t1738*t238*t3852 + t342*t7841) + t6361*t7898 + t6912*t7960 + t7026*t7984 + t7107*t8018 + t7210*t8052 + t7263*t8093 + t7389*t8107 + t7415*t8127 + t7581*t8150 + t7632*t8178 - 0.0216*(t7564*t8150 + t7514*t8178) - 1.1135*(t7514*t8150 - 1.*t7564*t8178) + var1[1];
  p_output1[2]=0. + t2141*t2261*t238 - 1.*t1876*t2477 + t238*t3893*t4696 + t5270*t8399 - 0.1305*(t1738*t2477 + t342*t8399) + t6361*t8525 + t6912*t8583 + t7026*t8633 + t7107*t8683 + t7210*t8700 + t7263*t8730 + t7389*t8756 + t7415*t8777 + t7581*t8783 + t7632*t8797 - 0.0216*(t7564*t8783 + t7514*t8797) - 1.1135*(t7514*t8783 - 1.*t7564*t8797) + var1[2];
}



void p_toe_joint_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
