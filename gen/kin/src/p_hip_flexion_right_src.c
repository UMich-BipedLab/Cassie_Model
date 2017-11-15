/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:37 GMT-05:00
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
  double t192;
  double t7136;
  double t7144;
  double t7141;
  double t7146;
  double t484;
  double t608;
  double t4225;
  double t7104;
  double t7126;
  double t7142;
  double t7147;
  double t7148;
  double t7150;
  double t7161;
  double t7162;
  double t7165;
  double t259;
  double t7171;
  double t7172;
  double t7173;
  double t7175;
  double t7177;
  double t7178;
  double t7180;
  double t7183;
  double t7184;
  double t7185;
  double t7196;
  double t7197;
  double t7199;
  double t7097;
  double t7110;
  double t7117;
  double t7134;
  double t7135;
  double t7151;
  double t7153;
  double t7158;
  double t7160;
  double t7168;
  double t7169;
  double t7170;
  double t7214;
  double t7215;
  double t7216;
  double t7218;
  double t7219;
  double t7220;
  double t7179;
  double t7181;
  double t7182;
  double t7222;
  double t7223;
  double t7224;
  double t7192;
  double t7193;
  double t7195;
  double t7226;
  double t7227;
  double t7228;
  double t7237;
  double t7239;
  double t7240;
  double t7254;
  double t7255;
  double t7256;
  double t7258;
  double t7259;
  double t7260;
  double t7266;
  double t7267;
  double t7268;
  t192 = Cos(var1[3]);
  t7136 = Cos(var1[5]);
  t7144 = Sin(var1[3]);
  t7141 = Sin(var1[4]);
  t7146 = Sin(var1[5]);
  t484 = Cos(var1[14]);
  t608 = -1.*t484;
  t4225 = 1. + t608;
  t7104 = Sin(var1[14]);
  t7126 = Sin(var1[13]);
  t7142 = t192*t7136*t7141;
  t7147 = t7144*t7146;
  t7148 = t7142 + t7147;
  t7150 = Cos(var1[13]);
  t7161 = -1.*t7136*t7144;
  t7162 = t192*t7141*t7146;
  t7165 = t7161 + t7162;
  t259 = Cos(var1[4]);
  t7171 = t7126*t7148;
  t7172 = t7150*t7165;
  t7173 = t7171 + t7172;
  t7175 = Cos(var1[15]);
  t7177 = -1.*t7175;
  t7178 = 1. + t7177;
  t7180 = Sin(var1[15]);
  t7183 = t7150*t7148;
  t7184 = -1.*t7126*t7165;
  t7185 = t7183 + t7184;
  t7196 = t484*t192*t259;
  t7197 = t7104*t7173;
  t7199 = t7196 + t7197;
  t7097 = -0.049*t4225;
  t7110 = -0.135*t7104;
  t7117 = 0. + t7097 + t7110;
  t7134 = 0.135*t7126;
  t7135 = 0. + t7134;
  t7151 = -1.*t7150;
  t7153 = 1. + t7151;
  t7158 = -0.135*t7153;
  t7160 = 0. + t7158;
  t7168 = -0.135*t4225;
  t7169 = 0.049*t7104;
  t7170 = 0. + t7168 + t7169;
  t7214 = t7136*t7144*t7141;
  t7215 = -1.*t192*t7146;
  t7216 = t7214 + t7215;
  t7218 = t192*t7136;
  t7219 = t7144*t7141*t7146;
  t7220 = t7218 + t7219;
  t7179 = -0.09*t7178;
  t7181 = 0.049*t7180;
  t7182 = 0. + t7179 + t7181;
  t7222 = t7126*t7216;
  t7223 = t7150*t7220;
  t7224 = t7222 + t7223;
  t7192 = -0.049*t7178;
  t7193 = -0.09*t7180;
  t7195 = 0. + t7192 + t7193;
  t7226 = t7150*t7216;
  t7227 = -1.*t7126*t7220;
  t7228 = t7226 + t7227;
  t7237 = t484*t259*t7144;
  t7239 = t7104*t7224;
  t7240 = t7237 + t7239;
  t7254 = t259*t7136*t7126;
  t7255 = t7150*t259*t7146;
  t7256 = t7254 + t7255;
  t7258 = t7150*t259*t7136;
  t7259 = -1.*t259*t7126*t7146;
  t7260 = t7258 + t7259;
  t7266 = -1.*t484*t7141;
  t7267 = t7104*t7256;
  t7268 = t7266 + t7267;
  p_output1[0]=0. + t192*t259*t7117 + t7135*t7148 + t7160*t7165 + t7170*t7173 - 0.135*(-1.*t192*t259*t7104 + t484*t7173) + t7182*t7185 + t7195*t7199 - 0.049*(t7180*t7185 + t7175*t7199) - 0.09*(t7175*t7185 - 1.*t7180*t7199) + var1[0];
  p_output1[1]=0. + t259*t7117*t7144 + t7135*t7216 + t7160*t7220 + t7170*t7224 - 0.135*(-1.*t259*t7104*t7144 + t484*t7224) + t7182*t7228 + t7195*t7240 - 0.049*(t7180*t7228 + t7175*t7240) - 0.09*(t7175*t7228 - 1.*t7180*t7240) + var1[1];
  p_output1[2]=0. + t259*t7135*t7136 - 1.*t7117*t7141 + t259*t7146*t7160 + t7170*t7256 - 0.135*(t7104*t7141 + t484*t7256) + t7182*t7260 + t7195*t7268 - 0.049*(t7180*t7260 + t7175*t7268) - 0.09*(t7175*t7260 - 1.*t7180*t7268) + var1[2];
}



void p_hip_flexion_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
