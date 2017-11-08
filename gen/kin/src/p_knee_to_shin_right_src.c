/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:11:48 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_knee_to_shin_right_src.h"

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
  double t217;
  double t7027;
  double t7035;
  double t7031;
  double t7038;
  double t243;
  double t247;
  double t252;
  double t597;
  double t2956;
  double t7032;
  double t7039;
  double t7040;
  double t7046;
  double t7053;
  double t7054;
  double t7055;
  double t240;
  double t7065;
  double t7067;
  double t7068;
  double t7070;
  double t7071;
  double t7073;
  double t7075;
  double t7078;
  double t7080;
  double t7085;
  double t7097;
  double t7100;
  double t7101;
  double t7103;
  double t7104;
  double t7105;
  double t7107;
  double t7110;
  double t7111;
  double t7113;
  double t7119;
  double t7120;
  double t7122;
  double t486;
  double t1972;
  double t2482;
  double t7012;
  double t7025;
  double t7048;
  double t7050;
  double t7051;
  double t7052;
  double t7061;
  double t7063;
  double t7064;
  double t7136;
  double t7138;
  double t7139;
  double t7143;
  double t7144;
  double t7145;
  double t7074;
  double t7076;
  double t7077;
  double t7147;
  double t7148;
  double t7149;
  double t7094;
  double t7095;
  double t7096;
  double t7106;
  double t7108;
  double t7109;
  double t7151;
  double t7152;
  double t7153;
  double t7159;
  double t7161;
  double t7162;
  double t7115;
  double t7116;
  double t7118;
  double t7164;
  double t7165;
  double t7166;
  double t7170;
  double t7171;
  double t7172;
  double t7189;
  double t7190;
  double t7191;
  double t7193;
  double t7194;
  double t7195;
  double t7201;
  double t7202;
  double t7203;
  double t7205;
  double t7206;
  double t7207;
  double t7209;
  double t7210;
  double t7211;
  t217 = Cos(var1[3]);
  t7027 = Cos(var1[5]);
  t7035 = Sin(var1[3]);
  t7031 = Sin(var1[4]);
  t7038 = Sin(var1[5]);
  t243 = Cos(var1[14]);
  t247 = -1.*t243;
  t252 = 1. + t247;
  t597 = Sin(var1[14]);
  t2956 = Sin(var1[13]);
  t7032 = t217*t7027*t7031;
  t7039 = t7035*t7038;
  t7040 = t7032 + t7039;
  t7046 = Cos(var1[13]);
  t7053 = -1.*t7027*t7035;
  t7054 = t217*t7031*t7038;
  t7055 = t7053 + t7054;
  t240 = Cos(var1[4]);
  t7065 = t2956*t7040;
  t7067 = t7046*t7055;
  t7068 = t7065 + t7067;
  t7070 = Cos(var1[15]);
  t7071 = -1.*t7070;
  t7073 = 1. + t7071;
  t7075 = Sin(var1[15]);
  t7078 = t7046*t7040;
  t7080 = -1.*t2956*t7055;
  t7085 = t7078 + t7080;
  t7097 = t243*t217*t240;
  t7100 = t597*t7068;
  t7101 = t7097 + t7100;
  t7103 = Cos(var1[16]);
  t7104 = -1.*t7103;
  t7105 = 1. + t7104;
  t7107 = Sin(var1[16]);
  t7110 = t7075*t7085;
  t7111 = t7070*t7101;
  t7113 = t7110 + t7111;
  t7119 = t7070*t7085;
  t7120 = -1.*t7075*t7101;
  t7122 = t7119 + t7120;
  t486 = -0.049*t252;
  t1972 = -0.135*t597;
  t2482 = 0. + t486 + t1972;
  t7012 = 0.135*t2956;
  t7025 = 0. + t7012;
  t7048 = -1.*t7046;
  t7050 = 1. + t7048;
  t7051 = -0.135*t7050;
  t7052 = 0. + t7051;
  t7061 = -0.135*t252;
  t7063 = 0.049*t597;
  t7064 = 0. + t7061 + t7063;
  t7136 = t7027*t7035*t7031;
  t7138 = -1.*t217*t7038;
  t7139 = t7136 + t7138;
  t7143 = t217*t7027;
  t7144 = t7035*t7031*t7038;
  t7145 = t7143 + t7144;
  t7074 = -0.09*t7073;
  t7076 = 0.049*t7075;
  t7077 = 0. + t7074 + t7076;
  t7147 = t2956*t7139;
  t7148 = t7046*t7145;
  t7149 = t7147 + t7148;
  t7094 = -0.049*t7073;
  t7095 = -0.09*t7075;
  t7096 = 0. + t7094 + t7095;
  t7106 = -0.049*t7105;
  t7108 = -0.21*t7107;
  t7109 = 0. + t7106 + t7108;
  t7151 = t7046*t7139;
  t7152 = -1.*t2956*t7145;
  t7153 = t7151 + t7152;
  t7159 = t243*t240*t7035;
  t7161 = t597*t7149;
  t7162 = t7159 + t7161;
  t7115 = -0.21*t7105;
  t7116 = 0.049*t7107;
  t7118 = 0. + t7115 + t7116;
  t7164 = t7075*t7153;
  t7165 = t7070*t7162;
  t7166 = t7164 + t7165;
  t7170 = t7070*t7153;
  t7171 = -1.*t7075*t7162;
  t7172 = t7170 + t7171;
  t7189 = t240*t7027*t2956;
  t7190 = t7046*t240*t7038;
  t7191 = t7189 + t7190;
  t7193 = t7046*t240*t7027;
  t7194 = -1.*t240*t2956*t7038;
  t7195 = t7193 + t7194;
  t7201 = -1.*t243*t7031;
  t7202 = t597*t7191;
  t7203 = t7201 + t7202;
  t7205 = t7075*t7195;
  t7206 = t7070*t7203;
  t7207 = t7205 + t7206;
  t7209 = t7070*t7195;
  t7210 = -1.*t7075*t7203;
  t7211 = t7209 + t7210;
  p_output1[0]=0. + t217*t240*t2482 + t7025*t7040 + t7052*t7055 + t7064*t7068 - 0.1305*(-1.*t217*t240*t597 + t243*t7068) + t7077*t7085 + t7096*t7101 + t7109*t7113 + t7118*t7122 - 0.2707*(-1.*t7107*t7113 + t7103*t7122) - 0.0016*(t7103*t7113 + t7107*t7122) + var1[0];
  p_output1[1]=0. + t240*t2482*t7035 + t7025*t7139 + t7052*t7145 + t7064*t7149 - 0.1305*(-1.*t240*t597*t7035 + t243*t7149) + t7077*t7153 + t7096*t7162 + t7109*t7166 + t7118*t7172 - 0.2707*(-1.*t7107*t7166 + t7103*t7172) - 0.0016*(t7103*t7166 + t7107*t7172) + var1[1];
  p_output1[2]=0. + t240*t7025*t7027 - 1.*t2482*t7031 + t240*t7038*t7052 + t7064*t7191 - 0.1305*(t597*t7031 + t243*t7191) + t7077*t7195 + t7096*t7203 + t7109*t7207 + t7118*t7211 - 0.2707*(-1.*t7107*t7207 + t7103*t7211) - 0.0016*(t7103*t7207 + t7107*t7211) + var1[2];
}



void p_knee_to_shin_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
