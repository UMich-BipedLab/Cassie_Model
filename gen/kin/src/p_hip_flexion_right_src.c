/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:15:36 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_hip_flexion_right_src.h"

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
  double t4455;
  double t7151;
  double t7154;
  double t7152;
  double t7155;
  double t7113;
  double t7116;
  double t7124;
  double t7132;
  double t7145;
  double t7153;
  double t7156;
  double t7158;
  double t7165;
  double t7172;
  double t7173;
  double t7174;
  double t7110;
  double t7179;
  double t7181;
  double t7182;
  double t7184;
  double t7185;
  double t7186;
  double t7188;
  double t7191;
  double t7192;
  double t7194;
  double t7207;
  double t7208;
  double t7209;
  double t7126;
  double t7139;
  double t7140;
  double t7146;
  double t7148;
  double t7166;
  double t7167;
  double t7170;
  double t7171;
  double t7176;
  double t7177;
  double t7178;
  double t7222;
  double t7223;
  double t7224;
  double t7226;
  double t7227;
  double t7228;
  double t7187;
  double t7189;
  double t7190;
  double t7230;
  double t7231;
  double t7232;
  double t7201;
  double t7203;
  double t7204;
  double t7236;
  double t7237;
  double t7238;
  double t7246;
  double t7247;
  double t7248;
  double t7262;
  double t7263;
  double t7264;
  double t7266;
  double t7267;
  double t7268;
  double t7274;
  double t7275;
  double t7276;
  t4455 = Cos(var1[3]);
  t7151 = Cos(var1[5]);
  t7154 = Sin(var1[3]);
  t7152 = Sin(var1[4]);
  t7155 = Sin(var1[5]);
  t7113 = Cos(var1[14]);
  t7116 = -1.*t7113;
  t7124 = 1. + t7116;
  t7132 = Sin(var1[14]);
  t7145 = Sin(var1[13]);
  t7153 = t4455*t7151*t7152;
  t7156 = t7154*t7155;
  t7158 = t7153 + t7156;
  t7165 = Cos(var1[13]);
  t7172 = -1.*t7151*t7154;
  t7173 = t4455*t7152*t7155;
  t7174 = t7172 + t7173;
  t7110 = Cos(var1[4]);
  t7179 = t7145*t7158;
  t7181 = t7165*t7174;
  t7182 = t7179 + t7181;
  t7184 = Cos(var1[15]);
  t7185 = -1.*t7184;
  t7186 = 1. + t7185;
  t7188 = Sin(var1[15]);
  t7191 = t7165*t7158;
  t7192 = -1.*t7145*t7174;
  t7194 = t7191 + t7192;
  t7207 = t7113*t4455*t7110;
  t7208 = t7132*t7182;
  t7209 = t7207 + t7208;
  t7126 = -0.049*t7124;
  t7139 = -0.135*t7132;
  t7140 = 0. + t7126 + t7139;
  t7146 = 0.135*t7145;
  t7148 = 0. + t7146;
  t7166 = -1.*t7165;
  t7167 = 1. + t7166;
  t7170 = -0.135*t7167;
  t7171 = 0. + t7170;
  t7176 = -0.135*t7124;
  t7177 = 0.049*t7132;
  t7178 = 0. + t7176 + t7177;
  t7222 = t7151*t7154*t7152;
  t7223 = -1.*t4455*t7155;
  t7224 = t7222 + t7223;
  t7226 = t4455*t7151;
  t7227 = t7154*t7152*t7155;
  t7228 = t7226 + t7227;
  t7187 = -0.09*t7186;
  t7189 = 0.049*t7188;
  t7190 = 0. + t7187 + t7189;
  t7230 = t7145*t7224;
  t7231 = t7165*t7228;
  t7232 = t7230 + t7231;
  t7201 = -0.049*t7186;
  t7203 = -0.09*t7188;
  t7204 = 0. + t7201 + t7203;
  t7236 = t7165*t7224;
  t7237 = -1.*t7145*t7228;
  t7238 = t7236 + t7237;
  t7246 = t7113*t7110*t7154;
  t7247 = t7132*t7232;
  t7248 = t7246 + t7247;
  t7262 = t7110*t7151*t7145;
  t7263 = t7165*t7110*t7155;
  t7264 = t7262 + t7263;
  t7266 = t7165*t7110*t7151;
  t7267 = -1.*t7110*t7145*t7155;
  t7268 = t7266 + t7267;
  t7274 = -1.*t7113*t7152;
  t7275 = t7132*t7264;
  t7276 = t7274 + t7275;
  p_output1[0]=0. + t4455*t7110*t7140 + t7148*t7158 + t7171*t7174 + t7178*t7182 - 0.135*(-1.*t4455*t7110*t7132 + t7113*t7182) + t7190*t7194 + t7204*t7209 - 0.049*(t7188*t7194 + t7184*t7209) - 0.09*(t7184*t7194 - 1.*t7188*t7209) + var1[0];
  p_output1[1]=0. + t7110*t7140*t7154 + t7148*t7224 + t7171*t7228 + t7178*t7232 - 0.135*(-1.*t7110*t7132*t7154 + t7113*t7232) + t7190*t7238 + t7204*t7248 - 0.049*(t7188*t7238 + t7184*t7248) - 0.09*(t7184*t7238 - 1.*t7188*t7248) + var1[1];
  p_output1[2]=0. + t7110*t7148*t7151 - 1.*t7140*t7152 + t7110*t7155*t7171 + t7178*t7264 - 0.135*(t7132*t7152 + t7113*t7264) + t7190*t7268 + t7204*t7276 - 0.049*(t7188*t7268 + t7184*t7276) - 0.09*(t7184*t7268 - 1.*t7188*t7276) + var1[2];
}



void p_hip_flexion_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
