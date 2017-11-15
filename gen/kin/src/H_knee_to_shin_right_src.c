/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:48 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_knee_to_shin_right_src.h"

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
  double t360;
  double t605;
  double t344;
  double t402;
  double t642;
  double t895;
  double t542;
  double t690;
  double t779;
  double t237;
  double t986;
  double t1029;
  double t1043;
  double t1063;
  double t786;
  double t1053;
  double t1055;
  double t236;
  double t1071;
  double t1073;
  double t1076;
  double t1083;
  double t1104;
  double t1108;
  double t1110;
  double t1151;
  double t1152;
  double t1164;
  double t1061;
  double t1154;
  double t1155;
  double t233;
  double t1168;
  double t1177;
  double t1179;
  double t224;
  double t1607;
  double t1616;
  double t1659;
  double t1828;
  double t1876;
  double t1910;
  double t1704;
  double t2027;
  double t2087;
  double t2300;
  double t2309;
  double t2314;
  double t2350;
  double t2367;
  double t2608;
  double t1204;
  double t2225;
  double t2651;
  double t2657;
  double t2680;
  double t2685;
  double t2797;
  double t3092;
  double t3095;
  double t3109;
  double t3123;
  double t3225;
  double t3335;
  double t3359;
  double t3363;
  double t3406;
  double t3117;
  double t3437;
  double t3445;
  double t3515;
  double t3546;
  double t3776;
  double t1156;
  double t1184;
  double t1196;
  double t1270;
  double t1399;
  double t1444;
  double t2679;
  double t2799;
  double t2803;
  double t2822;
  double t3026;
  double t3044;
  double t3448;
  double t3841;
  double t3863;
  double t3900;
  double t3953;
  double t4022;
  double t4757;
  double t4796;
  double t6043;
  double t6047;
  double t8348;
  double t8359;
  double t8407;
  double t8412;
  double t4127;
  double t4134;
  double t4188;
  double t4838;
  double t4845;
  double t5188;
  double t5289;
  double t5349;
  double t5517;
  double t5526;
  double t5576;
  double t5642;
  double t5960;
  double t5997;
  double t6029;
  double t6087;
  double t6102;
  double t6138;
  double t8293;
  double t8296;
  double t8316;
  double t8360;
  double t8367;
  double t8368;
  double t8371;
  double t8380;
  double t8386;
  double t8416;
  double t8419;
  double t8425;
  double t8445;
  double t8459;
  double t8461;
  double t4193;
  double t4250;
  double t4273;
  double t4293;
  double t4337;
  double t4344;
  t360 = Cos(var1[5]);
  t605 = Sin(var1[3]);
  t344 = Cos(var1[3]);
  t402 = Sin(var1[4]);
  t642 = Sin(var1[5]);
  t895 = Sin(var1[13]);
  t542 = t344*t360*t402;
  t690 = t605*t642;
  t779 = t542 + t690;
  t237 = Cos(var1[13]);
  t986 = -1.*t360*t605;
  t1029 = t344*t402*t642;
  t1043 = t986 + t1029;
  t1063 = Cos(var1[15]);
  t786 = t237*t779;
  t1053 = -1.*t895*t1043;
  t1055 = t786 + t1053;
  t236 = Sin(var1[15]);
  t1071 = Cos(var1[14]);
  t1073 = Cos(var1[4]);
  t1076 = t1071*t344*t1073;
  t1083 = Sin(var1[14]);
  t1104 = t895*t779;
  t1108 = t237*t1043;
  t1110 = t1104 + t1108;
  t1151 = t1083*t1110;
  t1152 = t1076 + t1151;
  t1164 = Cos(var1[16]);
  t1061 = t236*t1055;
  t1154 = t1063*t1152;
  t1155 = t1061 + t1154;
  t233 = Sin(var1[16]);
  t1168 = t1063*t1055;
  t1177 = -1.*t236*t1152;
  t1179 = t1168 + t1177;
  t224 = Cos(var1[17]);
  t1607 = t360*t605*t402;
  t1616 = -1.*t344*t642;
  t1659 = t1607 + t1616;
  t1828 = t344*t360;
  t1876 = t605*t402*t642;
  t1910 = t1828 + t1876;
  t1704 = t237*t1659;
  t2027 = -1.*t895*t1910;
  t2087 = t1704 + t2027;
  t2300 = t1071*t1073*t605;
  t2309 = t895*t1659;
  t2314 = t237*t1910;
  t2350 = t2309 + t2314;
  t2367 = t1083*t2350;
  t2608 = t2300 + t2367;
  t1204 = Sin(var1[17]);
  t2225 = t236*t2087;
  t2651 = t1063*t2608;
  t2657 = t2225 + t2651;
  t2680 = t1063*t2087;
  t2685 = -1.*t236*t2608;
  t2797 = t2680 + t2685;
  t3092 = t237*t1073*t360;
  t3095 = -1.*t1073*t895*t642;
  t3109 = t3092 + t3095;
  t3123 = -1.*t1071*t402;
  t3225 = t1073*t360*t895;
  t3335 = t237*t1073*t642;
  t3359 = t3225 + t3335;
  t3363 = t1083*t3359;
  t3406 = t3123 + t3363;
  t3117 = t236*t3109;
  t3437 = t1063*t3406;
  t3445 = t3117 + t3437;
  t3515 = t1063*t3109;
  t3546 = -1.*t236*t3406;
  t3776 = t3515 + t3546;
  t1156 = -1.*t233*t1155;
  t1184 = t1164*t1179;
  t1196 = t1156 + t1184;
  t1270 = t1164*t1155;
  t1399 = t233*t1179;
  t1444 = t1270 + t1399;
  t2679 = -1.*t233*t2657;
  t2799 = t1164*t2797;
  t2803 = t2679 + t2799;
  t2822 = t1164*t2657;
  t3026 = t233*t2797;
  t3044 = t2822 + t3026;
  t3448 = -1.*t233*t3445;
  t3841 = t1164*t3776;
  t3863 = t3448 + t3841;
  t3900 = t1164*t3445;
  t3953 = t233*t3776;
  t4022 = t3900 + t3953;
  t4757 = -1.*t1071;
  t4796 = 1. + t4757;
  t6043 = -1.*t1063;
  t6047 = 1. + t6043;
  t8348 = -1.*t1164;
  t8359 = 1. + t8348;
  t8407 = -1.*t224;
  t8412 = 1. + t8407;
  t4127 = t1204*t1196;
  t4134 = t224*t1444;
  t4188 = t4127 + t4134;
  t4838 = -0.049*t4796;
  t4845 = -0.135*t1083;
  t5188 = 0. + t4838 + t4845;
  t5289 = 0.135*t895;
  t5349 = 0. + t5289;
  t5517 = -1.*t237;
  t5526 = 1. + t5517;
  t5576 = -0.135*t5526;
  t5642 = 0. + t5576;
  t5960 = -0.135*t4796;
  t5997 = 0.049*t1083;
  t6029 = 0. + t5960 + t5997;
  t6087 = -0.09*t6047;
  t6102 = 0.049*t236;
  t6138 = 0. + t6087 + t6102;
  t8293 = -0.049*t6047;
  t8296 = -0.09*t236;
  t8316 = 0. + t8293 + t8296;
  t8360 = -0.049*t8359;
  t8367 = -0.21*t233;
  t8368 = 0. + t8360 + t8367;
  t8371 = -0.21*t8359;
  t8380 = 0.049*t233;
  t8386 = 0. + t8371 + t8380;
  t8416 = -0.2707*t8412;
  t8419 = 0.0016*t1204;
  t8425 = 0. + t8416 + t8419;
  t8445 = -0.0016*t8412;
  t8459 = -0.2707*t1204;
  t8461 = 0. + t8445 + t8459;
  t4193 = t1204*t2803;
  t4250 = t224*t3044;
  t4273 = t4193 + t4250;
  t4293 = t1204*t3863;
  t4337 = t224*t4022;
  t4344 = t4293 + t4337;
  p_output1[0]=t1204*t1444 - 1.*t1196*t224;
  p_output1[1]=-1.*t224*t2803 + t1204*t3044;
  p_output1[2]=-1.*t224*t3863 + t1204*t4022;
  p_output1[3]=0.;
  p_output1[4]=t4188;
  p_output1[5]=t4273;
  p_output1[6]=t4344;
  p_output1[7]=0.;
  p_output1[8]=-1.*t1071*t1110 + t1073*t1083*t344;
  p_output1[9]=-1.*t1071*t2350 + t1073*t1083*t605;
  p_output1[10]=-1.*t1071*t3359 - 1.*t1083*t402;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.2707*(-1.*t1204*t1444 + t1196*t224) - 0.1305*(t1071*t1110 - 1.*t1073*t1083*t344) - 0.0016*t4188 + t1073*t344*t5188 + t1043*t5642 + t1110*t6029 + t1055*t6138 + t5349*t779 + t1152*t8316 + t1155*t8368 + t1179*t8386 + t1196*t8425 + t1444*t8461 + var1[0];
  p_output1[13]=0. - 0.2707*(t224*t2803 - 1.*t1204*t3044) - 0.0016*t4273 + t1659*t5349 + t1910*t5642 + t2350*t6029 + t1073*t5188*t605 - 0.1305*(t1071*t2350 - 1.*t1073*t1083*t605) + t2087*t6138 + t2608*t8316 + t2657*t8368 + t2797*t8386 + t2803*t8425 + t3044*t8461 + var1[1];
  p_output1[14]=0. - 0.1305*(t1071*t3359 + t1083*t402) - 0.2707*(t224*t3863 - 1.*t1204*t4022) - 0.0016*t4344 - 1.*t402*t5188 + t1073*t360*t5349 + t3359*t6029 + t3109*t6138 + t1073*t5642*t642 + t3406*t8316 + t3445*t8368 + t3776*t8386 + t3863*t8425 + t4022*t8461 + var1[2];
  p_output1[15]=1.;
}



void H_knee_to_shin_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
