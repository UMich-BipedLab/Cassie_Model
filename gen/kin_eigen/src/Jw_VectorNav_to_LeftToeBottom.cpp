/*
 * Automatically Generated from Mathematica.
 * Mon 26 Feb 2018 15:33:06 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jw_VectorNav_to_LeftToeBottom.h"

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
static void output1(Eigen::Matrix<double,3,14> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  double t54;
  double t68;
  double t94;
  double t66;
  double t72;
  double t85;
  double t51;
  double t96;
  double t98;
  double t101;
  double t124;
  double t89;
  double t106;
  double t112;
  double t49;
  double t132;
  double t135;
  double t136;
  double t162;
  double t120;
  double t150;
  double t158;
  double t46;
  double t163;
  double t166;
  double t168;
  double t27;
  double t36;
  double t194;
  double t196;
  double t198;
  double t193;
  double t205;
  double t206;
  double t208;
  double t209;
  double t207;
  double t210;
  double t212;
  double t217;
  double t218;
  double t219;
  double t180;
  double t173;
  double t175;
  double t178;
  double t159;
  double t170;
  double t171;
  double t225;
  double t228;
  double t229;
  double t214;
  double t222;
  double t223;
  t54 = Cos(var1[6]);
  t68 = Sin(var1[6]);
  t94 = Cos(var1[5]);
  t66 = 0.642788*t54;
  t72 = -0.766044*t68;
  t85 = t66 + t72;
  t51 = Sin(var1[5]);
  t96 = -0.766044*t54;
  t98 = -0.642788*t68;
  t101 = t96 + t98;
  t124 = Cos(var1[4]);
  t89 = -1.*t51*t85;
  t106 = t94*t101;
  t112 = 0. + t89 + t106;
  t49 = Sin(var1[4]);
  t132 = t94*t85;
  t135 = t51*t101;
  t136 = 0. + t132 + t135;
  t162 = Sin(var1[3]);
  t120 = t49*t112;
  t150 = t124*t136;
  t158 = 0. + t120 + t150;
  t46 = Cos(var1[3]);
  t163 = t124*t112;
  t166 = -1.*t49*t136;
  t168 = 0. + t163 + t166;
  t27 = Cos(var1[1]);
  t36 = Cos(var1[2]);
  t194 = -0.642788*t54;
  t196 = 0.766044*t68;
  t198 = t194 + t196;
  t193 = -1.*t51*t101;
  t205 = t94*t198;
  t206 = 0. + t193 + t205;
  t208 = t51*t198;
  t209 = 0. + t106 + t208;
  t207 = t49*t206;
  t210 = t124*t209;
  t212 = 0. + t207 + t210;
  t217 = t124*t206;
  t218 = -1.*t49*t209;
  t219 = 0. + t217 + t218;
  t180 = Sin(var1[2]);
  t173 = -1.*t162*t158;
  t175 = t46*t168;
  t178 = 0. + t173 + t175;
  t159 = t46*t158;
  t170 = t162*t168;
  t171 = 0. + t159 + t170;
  t225 = -1.*t162*t212;
  t228 = t46*t219;
  t229 = 0. + t225 + t228;
  t214 = t46*t212;
  t222 = t162*t219;
  t223 = 0. + t214 + t222;

  p_output1(0)=0. + Sin(var1(1));
  p_output1(1)=0. + t27*(0. + t178*t180 + t171*t36);
  p_output1(2)=0. + t27*(0. + t180*t229 + t223*t36);
  p_output1(3)=0.;
  p_output1(4)=0. + t171*t180 - 1.*t178*t36;
  p_output1(5)=0. + t180*t223 - 1.*t229*t36;
  p_output1(6)=1.;
  p_output1(7)=0.;
  p_output1(8)=0.;
  p_output1(9)=1.;
  p_output1(10)=0.;
  p_output1(11)=0.;
  p_output1(12)=1.;
  p_output1(13)=0.;
  p_output1(14)=0.;
  p_output1(15)=1.;
  p_output1(16)=0.;
  p_output1(17)=0.;
  p_output1(18)=1.;
  p_output1(19)=0.;
  p_output1(20)=0.;
  p_output1(21)=0;
  p_output1(22)=0;
  p_output1(23)=0;
  p_output1(24)=0;
  p_output1(25)=0;
  p_output1(26)=0;
  p_output1(27)=0;
  p_output1(28)=0;
  p_output1(29)=0;
  p_output1(30)=0;
  p_output1(31)=0;
  p_output1(32)=0;
  p_output1(33)=0;
  p_output1(34)=0;
  p_output1(35)=0;
  p_output1(36)=0;
  p_output1(37)=0;
  p_output1(38)=0;
  p_output1(39)=0;
  p_output1(40)=0;
  p_output1(41)=0;
}


       
void Jw_VectorNav_to_LeftToeBottom(Eigen::Matrix<double,3,14> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
