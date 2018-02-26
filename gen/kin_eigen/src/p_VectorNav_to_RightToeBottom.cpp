/*
 * Automatically Generated from Mathematica.
 * Mon 26 Feb 2018 15:42:56 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_VectorNav_to_RightToeBottom.h"

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
  double t34;
  double t364;
  double t627;
  double t1131;
  double t1144;
  double t1153;
  double t1437;
  double t2288;
  double t2344;
  double t2397;
  double t2582;
  double t2211;
  double t2216;
  double t2224;
  double t2945;
  double t2954;
  double t3085;
  double t4001;
  double t4021;
  double t4054;
  double t4205;
  double t3603;
  double t3796;
  double t3944;
  double t4650;
  double t4684;
  double t4703;
  double t5408;
  double t5576;
  double t5668;
  double t7341;
  double t5100;
  double t5172;
  double t5259;
  double t7918;
  double t7940;
  double t7942;
  double t8014;
  double t197;
  double t254;
  double t318;
  double t440;
  double t445;
  double t525;
  double t818;
  double t855;
  double t8071;
  double t1154;
  double t1448;
  double t1493;
  double t1686;
  double t1886;
  double t2029;
  double t8090;
  double t8092;
  double t8094;
  double t8099;
  double t8103;
  double t8105;
  double t2419;
  double t2636;
  double t2637;
  double t3182;
  double t3304;
  double t3342;
  double t8108;
  double t8111;
  double t8117;
  double t8119;
  double t8125;
  double t8129;
  double t4095;
  double t4466;
  double t4475;
  double t4836;
  double t4878;
  double t5030;
  double t8139;
  double t8140;
  double t8141;
  double t8148;
  double t8149;
  double t8151;
  double t6996;
  double t7842;
  double t7857;
  double t7955;
  double t7966;
  double t7970;
  double t8153;
  double t8154;
  double t8158;
  double t8162;
  double t8166;
  double t8169;
  double t8036;
  double t8039;
  double t8048;
  double t8072;
  double t8077;
  double t8082;
  double t8211;
  double t8212;
  double t8214;
  double t8219;
  double t8220;
  double t8221;
  double t8223;
  double t8224;
  double t8225;
  double t8229;
  double t8230;
  double t8231;
  double t8233;
  double t8234;
  double t8235;
  double t8240;
  double t8241;
  double t8242;
  double t8244;
  double t8245;
  double t8246;
  double t8248;
  double t8249;
  double t8250;
  t34 = Cos(var1[8]);
  t364 = Cos(var1[9]);
  t627 = Sin(var1[9]);
  t1131 = Cos(var1[10]);
  t1144 = -1.*t1131;
  t1153 = 1. + t1144;
  t1437 = Sin(var1[10]);
  t2288 = Cos(var1[11]);
  t2344 = -1.*t2288;
  t2397 = 1. + t2344;
  t2582 = Sin(var1[11]);
  t2211 = t34*t364*t1131;
  t2216 = -1.*t34*t627*t1437;
  t2224 = t2211 + t2216;
  t2945 = -1.*t34*t1131*t627;
  t2954 = -1.*t34*t364*t1437;
  t3085 = t2945 + t2954;
  t4001 = Cos(var1[12]);
  t4021 = -1.*t4001;
  t4054 = 1. + t4021;
  t4205 = Sin(var1[12]);
  t3603 = t2288*t2224;
  t3796 = t3085*t2582;
  t3944 = t3603 + t3796;
  t4650 = t2288*t3085;
  t4684 = -1.*t2224*t2582;
  t4703 = t4650 + t4684;
  t5408 = Cos(var1[13]);
  t5576 = -1.*t5408;
  t5668 = 1. + t5576;
  t7341 = Sin(var1[13]);
  t5100 = t4001*t3944;
  t5172 = t4703*t4205;
  t5259 = t5100 + t5172;
  t7918 = t4001*t4703;
  t7940 = -1.*t3944*t4205;
  t7942 = t7918 + t7940;
  t8014 = Cos(var1[7]);
  t197 = -1.*t34;
  t254 = 1. + t197;
  t318 = Sin(var1[8]);
  t440 = -1.*t364;
  t445 = 1. + t440;
  t525 = -0.049*t445;
  t818 = -0.09*t627;
  t855 = 0. + t525 + t818;
  t8071 = Sin(var1[7]);
  t1154 = -0.049*t1153;
  t1448 = -0.21*t1437;
  t1493 = 0. + t1154 + t1448;
  t1686 = -0.21*t1153;
  t1886 = 0.049*t1437;
  t2029 = 0. + t1686 + t1886;
  t8090 = t8014*t364*t318;
  t8092 = -1.*t8071*t627;
  t8094 = t8090 + t8092;
  t8099 = -1.*t364*t8071;
  t8103 = -1.*t8014*t318*t627;
  t8105 = t8099 + t8103;
  t2419 = -0.0016*t2397;
  t2636 = -0.2707*t2582;
  t2637 = 0. + t2419 + t2636;
  t3182 = -0.2707*t2397;
  t3304 = 0.0016*t2582;
  t3342 = 0. + t3182 + t3304;
  t8108 = t1131*t8094;
  t8111 = t8105*t1437;
  t8117 = t8108 + t8111;
  t8119 = t1131*t8105;
  t8125 = -1.*t8094*t1437;
  t8129 = t8119 + t8125;
  t4095 = 0.0184*t4054;
  t4466 = -0.7055*t4205;
  t4475 = 0. + t4095 + t4466;
  t4836 = -0.7055*t4054;
  t4878 = -0.0184*t4205;
  t5030 = 0. + t4836 + t4878;
  t8139 = t2288*t8117;
  t8140 = t8129*t2582;
  t8141 = t8139 + t8140;
  t8148 = t2288*t8129;
  t8149 = -1.*t8117*t2582;
  t8151 = t8148 + t8149;
  t6996 = -0.0216*t5668;
  t7842 = -1.1135*t7341;
  t7857 = 0. + t6996 + t7842;
  t7955 = -1.1135*t5668;
  t7966 = 0.0216*t7341;
  t7970 = 0. + t7955 + t7966;
  t8153 = t4001*t8141;
  t8154 = t8151*t4205;
  t8158 = t8153 + t8154;
  t8162 = t4001*t8151;
  t8166 = -1.*t8141*t4205;
  t8169 = t8162 + t8166;
  t8036 = -0.135*t254;
  t8039 = 0.049*t318;
  t8048 = 0. + t8036 + t8039;
  t8072 = -0.09*t445;
  t8077 = 0.049*t627;
  t8082 = 0. + t8072 + t8077;
  t8211 = t364*t8071*t318;
  t8212 = t8014*t627;
  t8214 = t8211 + t8212;
  t8219 = t8014*t364;
  t8220 = -1.*t8071*t318*t627;
  t8221 = t8219 + t8220;
  t8223 = t1131*t8214;
  t8224 = t8221*t1437;
  t8225 = t8223 + t8224;
  t8229 = t1131*t8221;
  t8230 = -1.*t8214*t1437;
  t8231 = t8229 + t8230;
  t8233 = t2288*t8225;
  t8234 = t8231*t2582;
  t8235 = t8233 + t8234;
  t8240 = t2288*t8231;
  t8241 = -1.*t8225*t2582;
  t8242 = t8240 + t8241;
  t8244 = t4001*t8235;
  t8245 = t8242*t4205;
  t8246 = t8244 + t8245;
  t8248 = t4001*t8242;
  t8249 = -1.*t8235*t4205;
  t8250 = t8248 + t8249;

  p_output1(0)=-0.03155 - 0.049*t254 + t2224*t2637 - 0.004500000000000004*t318 + t3085*t3342 + t1493*t34*t364 + t3944*t4475 + t4703*t5030 - 1.*t2029*t34*t627 + t5259*t7857 - 1.1312*(-1.*t5259*t7341 + t5408*t7942) + 0.0306*(t5259*t5408 + t7341*t7942) + t7942*t7970 + t34*t855;
  p_output1(1)=0. + 0.135*(1. - 1.*t8014) + 0.1305*t34*t8014 - 1.*t8014*t8048 + t8071*t8082 - 1.*t1493*t8094 - 1.*t2029*t8105 - 1.*t2637*t8117 - 1.*t3342*t8129 - 1.*t4475*t8141 - 1.*t5030*t8151 - 1.*t7857*t8158 - 1.*t7970*t8169 + 1.1312*(-1.*t7341*t8158 + t5408*t8169) - 0.0306*(t5408*t8158 + t7341*t8169) - 1.*t318*t8014*t855;
  p_output1(2)=-0.07996 - 0.135*t8071 + 0.1305*t34*t8071 - 1.*t8048*t8071 - 1.*t8014*t8082 - 1.*t1493*t8214 - 1.*t2029*t8221 - 1.*t2637*t8225 - 1.*t3342*t8231 - 1.*t4475*t8235 - 1.*t5030*t8242 - 1.*t7857*t8246 - 1.*t7970*t8250 + 1.1312*(-1.*t7341*t8246 + t5408*t8250) - 0.0306*(t5408*t8246 + t7341*t8250) - 1.*t318*t8071*t855;
}


       
void p_VectorNav_to_RightToeBottom(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
