/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:17:41 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_MultisenseIMU_to_LeftToeBottom_src.h"

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
  double t78;
  double t716;
  double t1383;
  double t2217;
  double t2414;
  double t2620;
  double t2814;
  double t3323;
  double t3654;
  double t3717;
  double t3727;
  double t3745;
  double t3884;
  double t4110;
  double t4284;
  double t4627;
  double t4630;
  double t4790;
  double t4897;
  double t4907;
  double t4967;
  double t5058;
  double t5213;
  double t5512;
  double t5563;
  double t5966;
  double t5993;
  double t6034;
  double t6215;
  double t6282;
  double t6289;
  double t6383;
  double t6648;
  double t6842;
  double t6953;
  double t7123;
  double t7432;
  double t7483;
  double t7501;
  double t7540;
  double t7593;
  double t7622;
  double t7707;
  double t7732;
  double t7748;
  double t7817;
  double t7832;
  double t7844;
  double t811;
  double t1087;
  double t1150;
  double t1749;
  double t1766;
  double t2810;
  double t2925;
  double t2977;
  double t3526;
  double t3589;
  double t3619;
  double t3729;
  double t3802;
  double t3878;
  double t4519;
  double t4534;
  double t4625;
  double t4981;
  double t5121;
  double t5183;
  double t7984;
  double t7988;
  double t7989;
  double t7992;
  double t8010;
  double t8011;
  double t5895;
  double t5914;
  double t5926;
  double t6344;
  double t6510;
  double t6621;
  double t8026;
  double t8031;
  double t8035;
  double t8043;
  double t8053;
  double t8057;
  double t7044;
  double t7045;
  double t7046;
  double t7620;
  double t7642;
  double t7681;
  double t8066;
  double t8073;
  double t8074;
  double t8080;
  double t8082;
  double t8083;
  double t7783;
  double t7786;
  double t7807;
  double t8087;
  double t8091;
  double t8092;
  double t8102;
  double t8103;
  double t8104;
  double t8144;
  double t8145;
  double t8146;
  double t8148;
  double t8149;
  double t8150;
  double t8152;
  double t8154;
  double t8155;
  double t8157;
  double t8159;
  double t8161;
  double t8164;
  double t8165;
  double t8170;
  double t8174;
  double t8175;
  double t8177;
  t78 = Sin(var1[0]);
  t716 = Cos(var1[1]);
  t1383 = Sin(var1[1]);
  t2217 = Cos(var1[2]);
  t2414 = -1.*t2217;
  t2620 = 1. + t2414;
  t2814 = Sin(var1[2]);
  t3323 = Cos(var1[0]);
  t3654 = Cos(var1[3]);
  t3717 = -1.*t3654;
  t3727 = 1. + t3717;
  t3745 = Sin(var1[3]);
  t3884 = t2217*t78*t1383;
  t4110 = t3323*t2814;
  t4284 = t3884 + t4110;
  t4627 = t3323*t2217;
  t4630 = -1.*t78*t1383*t2814;
  t4790 = t4627 + t4630;
  t4897 = Cos(var1[4]);
  t4907 = -1.*t4897;
  t4967 = 1. + t4907;
  t5058 = Sin(var1[4]);
  t5213 = -1.*t3745*t4284;
  t5512 = t3654*t4790;
  t5563 = t5213 + t5512;
  t5966 = t3654*t4284;
  t5993 = t3745*t4790;
  t6034 = t5966 + t5993;
  t6215 = Cos(var1[5]);
  t6282 = -1.*t6215;
  t6289 = 1. + t6282;
  t6383 = Sin(var1[5]);
  t6648 = t5058*t5563;
  t6842 = t4897*t6034;
  t6953 = t6648 + t6842;
  t7123 = t4897*t5563;
  t7432 = -1.*t5058*t6034;
  t7483 = t7123 + t7432;
  t7501 = Cos(var1[6]);
  t7540 = -1.*t7501;
  t7593 = 1. + t7540;
  t7622 = Sin(var1[6]);
  t7707 = -1.*t6383*t6953;
  t7732 = t6215*t7483;
  t7748 = t7707 + t7732;
  t7817 = t6215*t6953;
  t7832 = t6383*t7483;
  t7844 = t7817 + t7832;
  t811 = -1.*t716;
  t1087 = 1. + t811;
  t1150 = 0.135*t1087;
  t1749 = 0.049*t1383;
  t1766 = 0. + t1150 + t1749;
  t2810 = -0.049*t2620;
  t2925 = -0.09*t2814;
  t2977 = 0. + t2810 + t2925;
  t3526 = -0.09*t2620;
  t3589 = 0.049*t2814;
  t3619 = 0. + t3526 + t3589;
  t3729 = -0.049*t3727;
  t3802 = -0.21*t3745;
  t3878 = 0. + t3729 + t3802;
  t4519 = -0.21*t3727;
  t4534 = 0.049*t3745;
  t4625 = 0. + t4519 + t4534;
  t4981 = -0.2707*t4967;
  t5121 = 0.0016*t5058;
  t5183 = 0. + t4981 + t5121;
  t7984 = t3323*t2217*t1383;
  t7988 = -1.*t78*t2814;
  t7989 = t7984 + t7988;
  t7992 = -1.*t2217*t78;
  t8010 = -1.*t3323*t1383*t2814;
  t8011 = t7992 + t8010;
  t5895 = -0.0016*t4967;
  t5914 = -0.2707*t5058;
  t5926 = 0. + t5895 + t5914;
  t6344 = 0.0184*t6289;
  t6510 = -0.7055*t6383;
  t6621 = 0. + t6344 + t6510;
  t8026 = -1.*t3745*t7989;
  t8031 = t3654*t8011;
  t8035 = t8026 + t8031;
  t8043 = t3654*t7989;
  t8053 = t3745*t8011;
  t8057 = t8043 + t8053;
  t7044 = -0.7055*t6289;
  t7045 = -0.0184*t6383;
  t7046 = 0. + t7044 + t7045;
  t7620 = -1.1135*t7593;
  t7642 = 0.0216*t7622;
  t7681 = 0. + t7620 + t7642;
  t8066 = t5058*t8035;
  t8073 = t4897*t8057;
  t8074 = t8066 + t8073;
  t8080 = t4897*t8035;
  t8082 = -1.*t5058*t8057;
  t8083 = t8080 + t8082;
  t7783 = -0.0216*t7593;
  t7786 = -1.1135*t7622;
  t7807 = 0. + t7783 + t7786;
  t8087 = -1.*t6383*t8074;
  t8091 = t6215*t8083;
  t8092 = t8087 + t8091;
  t8102 = t6215*t8074;
  t8103 = t6383*t8083;
  t8104 = t8102 + t8103;
  t8144 = -1.*t716*t2217*t3745;
  t8145 = -1.*t3654*t716*t2814;
  t8146 = t8144 + t8145;
  t8148 = t3654*t716*t2217;
  t8149 = -1.*t716*t3745*t2814;
  t8150 = t8148 + t8149;
  t8152 = t5058*t8146;
  t8154 = t4897*t8150;
  t8155 = t8152 + t8154;
  t8157 = t4897*t8146;
  t8159 = -1.*t5058*t8150;
  t8161 = t8157 + t8159;
  t8164 = -1.*t6383*t8155;
  t8165 = t6215*t8161;
  t8170 = t8164 + t8165;
  t8174 = t6215*t8155;
  t8175 = t6383*t8161;
  t8177 = t8174 + t8175;
  p_output1[0]=0.24925 - 1.*t3323*t3619 - 1.*t3878*t4284 - 1.*t4625*t4790 - 1.*t5183*t5563 - 1.*t5926*t6034 - 1.*t6621*t6953 - 1.*t7046*t7483 - 1.*t7681*t7748 + 0.135*t78 - 1.*t1766*t78 - 1.*t1383*t2977*t78 - 0.1305*t716*t78 - 1.*t7807*t7844 - 0.0306*(t7622*t7748 + t7501*t7844) + 1.1312*(t7501*t7748 - 1.*t7622*t7844);
  p_output1[1]=-0.0302 + 0.135*(1. - 1.*t3323) + t1766*t3323 + t1383*t2977*t3323 + 0.1305*t3323*t716 - 1.*t3619*t78 + t3878*t7989 + t4625*t8011 + t5183*t8035 + t5926*t8057 + t6621*t8074 + t7046*t8083 + t7681*t8092 + t7807*t8104 + 0.0306*(t7622*t8092 + t7501*t8104) - 1.1312*(t7501*t8092 - 1.*t7622*t8104);
  p_output1[2]=-0.047 - 0.049*t1087 + 0.004500000000000004*t1383 + t2977*t716 + t2217*t3878*t716 - 1.*t2814*t4625*t716 + t5183*t8146 + t5926*t8150 + t6621*t8155 + t7046*t8161 + t7681*t8170 + t7807*t8177 + 0.0306*(t7622*t8170 + t7501*t8177) - 1.1312*(t7501*t8170 - 1.*t7622*t8177);
}



void p_MultisenseIMU_to_LeftToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
