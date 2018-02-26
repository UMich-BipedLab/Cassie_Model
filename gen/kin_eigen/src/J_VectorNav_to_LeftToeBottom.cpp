/*
 * Automatically Generated from Mathematica.
 * Mon 26 Feb 2018 15:33:05 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "J_VectorNav_to_LeftToeBottom.h"

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
static void output1(Eigen::Matrix<double,6,14> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  double t22;
  double t25;
  double t33;
  double t24;
  double t27;
  double t29;
  double t21;
  double t34;
  double t36;
  double t38;
  double t47;
  double t31;
  double t41;
  double t43;
  double t20;
  double t49;
  double t51;
  double t52;
  double t60;
  double t46;
  double t54;
  double t56;
  double t18;
  double t62;
  double t64;
  double t66;
  double t13;
  double t17;
  double t94;
  double t96;
  double t97;
  double t93;
  double t98;
  double t99;
  double t104;
  double t105;
  double t101;
  double t106;
  double t109;
  double t112;
  double t113;
  double t114;
  double t84;
  double t111;
  double t115;
  double t119;
  double t120;
  double t121;
  double t122;
  double t123;
  double t124;
  double t131;
  double t132;
  double t133;
  double t77;
  double t80;
  double t81;
  double t57;
  double t68;
  double t71;
  double t164;
  double t165;
  double t160;
  double t161;
  double t166;
  double t167;
  double t168;
  double t169;
  double t171;
  double t172;
  double t173;
  double t174;
  double t154;
  double t155;
  double t162;
  double t163;
  double t170;
  double t175;
  double t176;
  double t178;
  double t179;
  double t180;
  double t181;
  double t182;
  double t148;
  double t149;
  double t158;
  double t159;
  double t177;
  double t183;
  double t184;
  double t186;
  double t187;
  double t188;
  double t189;
  double t190;
  double t72;
  double t85;
  double t88;
  double t89;
  double t92;
  double t11;
  double t143;
  double t144;
  double t195;
  double t196;
  double t197;
  double t198;
  double t199;
  double t150;
  double t151;
  double t185;
  double t191;
  double t192;
  double t203;
  double t204;
  double t207;
  double t208;
  double t209;
  double t210;
  double t211;
  double t145;
  double t193;
  double t194;
  double t200;
  double t201;
  double t205;
  double t206;
  double t212;
  double t213;
  double t217;
  double t218;
  double t219;
  double t220;
  double t221;
  double t136;
  double t138;
  double t140;
  double t215;
  double t216;
  double t12;
  double t134;
  double t225;
  double t226;
  double t227;
  double t230;
  double t231;
  double t202;
  double t228;
  t22 = Cos(var1[6]);
  t25 = Sin(var1[6]);
  t33 = Cos(var1[5]);
  t24 = 0.642788*t22;
  t27 = -0.766044*t25;
  t29 = t24 + t27;
  t21 = Sin(var1[5]);
  t34 = -0.766044*t22;
  t36 = -0.642788*t25;
  t38 = t34 + t36;
  t47 = Cos(var1[4]);
  t31 = -1.*t21*t29;
  t41 = t33*t38;
  t43 = 0. + t31 + t41;
  t20 = Sin(var1[4]);
  t49 = t33*t29;
  t51 = t21*t38;
  t52 = 0. + t49 + t51;
  t60 = Sin(var1[3]);
  t46 = t20*t43;
  t54 = t47*t52;
  t56 = 0. + t46 + t54;
  t18 = Cos(var1[3]);
  t62 = t47*t43;
  t64 = -1.*t20*t52;
  t66 = 0. + t62 + t64;
  t13 = Cos(var1[1]);
  t17 = Cos(var1[2]);
  t94 = -0.642788*t22;
  t96 = 0.766044*t25;
  t97 = t94 + t96;
  t93 = -1.*t21*t38;
  t98 = t33*t97;
  t99 = 0. + t93 + t98;
  t104 = t21*t97;
  t105 = 0. + t41 + t104;
  t101 = t20*t99;
  t106 = t47*t105;
  t109 = 0. + t101 + t106;
  t112 = t47*t99;
  t113 = -1.*t20*t105;
  t114 = 0. + t112 + t113;
  t84 = Sin(var1[2]);
  t111 = t18*t109;
  t115 = t60*t114;
  t119 = 0. + t111 + t115;
  t120 = t17*t119;
  t121 = -1.*t60*t109;
  t122 = t18*t114;
  t123 = 0. + t121 + t122;
  t124 = t123*t84;
  t131 = 0. + t120 + t124;
  t132 = t13*t131;
  t133 = 0. + t132;
  t77 = -1.*t60*t56;
  t80 = t18*t66;
  t81 = 0. + t77 + t80;
  t57 = t18*t56;
  t68 = t60*t66;
  t71 = 0. + t57 + t68;
  t164 = -1.*t22;
  t165 = 1. + t164;
  t160 = -1.*t33;
  t161 = 1. + t160;
  t166 = 1.0335*t165;
  t167 = 1.0512*t22;
  t168 = -0.052199999999999996*t25;
  t169 = 0. + t166 + t167 + t168;
  t171 = -0.0532*t165;
  t172 = -0.001*t22;
  t173 = 0.017699999999999827*t25;
  t174 = 0. + t171 + t172 + t173;
  t154 = -1.*t47;
  t155 = 1. + t154;
  t162 = -0.0132*t161;
  t163 = -0.6255*t21;
  t170 = t21*t169;
  t175 = t33*t174;
  t176 = 0. + t162 + t163 + t170 + t175;
  t178 = 0.6255*t161;
  t179 = -0.0132*t21;
  t180 = t33*t169;
  t181 = -1.*t21*t174;
  t182 = 0. + t178 + t179 + t180 + t181;
  t148 = -1.*t18;
  t149 = 1. + t148;
  t158 = 0.1907*t155;
  t159 = -0.0332*t20;
  t177 = -1.*t20*t176;
  t183 = t47*t182;
  t184 = 0. + t158 + t159 + t177 + t183;
  t186 = -0.0332*t155;
  t187 = -0.1907*t20;
  t188 = t47*t176;
  t189 = t20*t182;
  t190 = 0. + t186 + t187 + t188 + t189;
  t72 = t17*t71;
  t85 = t81*t84;
  t88 = 0. + t72 + t85;
  t89 = t13*t88;
  t92 = 0. + t89;
  t11 = Sin(var1[1]);
  t143 = -1.*t17;
  t144 = 1. + t143;
  t195 = -0.0806*t149;
  t196 = -0.13*t60;
  t197 = t60*t184;
  t198 = t18*t190;
  t199 = 0. + t195 + t196 + t197 + t198;
  t150 = 0.13*t149;
  t151 = -0.0806*t60;
  t185 = t18*t184;
  t191 = -1.*t60*t190;
  t192 = 0. + t150 + t151 + t185 + t191;
  t203 = -1.*t13;
  t204 = 1. + t203;
  t207 = -0.0806*t144;
  t208 = t17*t199;
  t209 = -0.01*t84;
  t210 = t192*t84;
  t211 = 0. + t207 + t208 + t209 + t210;
  t145 = 0.01*t144;
  t193 = t17*t192;
  t194 = -0.0806*t84;
  t200 = -1.*t199*t84;
  t201 = 0. + t145 + t193 + t194 + t200;
  t205 = -0.0806*t204;
  t206 = 0.004500000000000004*t11;
  t212 = t13*t211;
  t213 = 0. + t205 + t206 + t212;
  t217 = -0.135*t204;
  t218 = -0.1305*t13;
  t219 = -0.0806*t11;
  t220 = -1.*t11*t211;
  t221 = 0. + t217 + t218 + t219 + t220;
  t136 = t17*t81;
  t138 = -1.*t71*t84;
  t140 = 0. + t136 + t138;
  t215 = -1.*t11*t88;
  t216 = 0. + t215;
  t12 = 0. + t11;
  t134 = 0. + t13;
  t225 = t17*t123;
  t226 = -1.*t119*t84;
  t227 = 0. + t225 + t226;
  t230 = -1.*t11*t131;
  t231 = 0. + t230;
  t202 = -1.*t140*t201;
  t228 = t201*t227;

  p_output1(0)=t12;
  p_output1(1)=t92;
  p_output1(2)=t133;
  p_output1(3)=0. - 0.08*t134 + (t133*t213 + t228 + t221*t231)*t92 + t133*(t202 - 1.*t216*t221 - 1.*t213*t92);
  p_output1(4)=0.135*t140 - 0.08*t216 + t133*(0. + t12*t213 + t134*t221) + t12*(-1.*t133*t213 - 1.*t201*t227 - 1.*t221*t231);
  p_output1(5)=0.135*t227 - 0.08*t231 + (0. - 1.*t12*t213 - 1.*t134*t221)*t92 + t12*(t140*t201 + t216*t221 + t213*t92);
  p_output1(6)=0.;
  p_output1(7)=0. - 1.*t17*t81 + t71*t84;
  p_output1(8)=0. - 1.*t123*t17 + t119*t84;
  p_output1(9)=-0.0806 - 1.*t140*(0. + t131*t211 + t228) - 1.*t227*(0. + t202 - 1.*t211*t88);
  p_output1(10)=0. + 0.1305*t227 + 0.135*t88;
  p_output1(11)=0. + 0.135*t131 - 0.1305*t140;
  p_output1(12)=1.;
  p_output1(13)=0.;
  p_output1(14)=0.;
  p_output1(15)=0.;
  p_output1(16)=0. - 1.*t123*t192 - 1.*t119*t199 - 0.01*t71 - 0.0806*t81;
  p_output1(17)=0. - 0.01*t119 - 0.0806*t123 + t199*t71 + t192*t81;
  p_output1(18)=1.;
  p_output1(19)=0.;
  p_output1(20)=0.;
  p_output1(21)=0.;
  p_output1(22)=0. - 1.*t114*t184 - 1.*t109*t190 - 0.13*t56 - 0.0806*t66;
  p_output1(23)=0. - 0.13*t109 - 0.0806*t114 + t190*t56 + t184*t66;
  p_output1(24)=1.;
  p_output1(25)=0.;
  p_output1(26)=0.;
  p_output1(27)=0.;
  p_output1(28)=0. - 1.*t105*t176 - 0.0332*t43 - 0.1907*t52 - 1.*t182*t99;
  p_output1(29)=0. - 0.1907*t105 + t182*t43 + t176*t52 - 0.0332*t99;
  p_output1(30)=1.;
  p_output1(31)=0.;
  p_output1(32)=0.;
  p_output1(33)=0.;
  p_output1(34)=0. - 0.6255*t29 - 0.0132*t38 - 1.*t174*t38 - 1.*t169*t97;
  p_output1(35)=0. + t174*t29 - 0.6255*t38 + t169*t38 - 0.0132*t97;
  p_output1(36)=1.;
  p_output1(37)=0.;
  p_output1(38)=0.;
  p_output1(39)=0.;
  p_output1(40)=0.05136484439999989;
  p_output1(41)=0.01999455480000023;
  p_output1(42)=0;
  p_output1(43)=0;
  p_output1(44)=0;
  p_output1(45)=0;
  p_output1(46)=0;
  p_output1(47)=0;
  p_output1(48)=0;
  p_output1(49)=0;
  p_output1(50)=0;
  p_output1(51)=0;
  p_output1(52)=0;
  p_output1(53)=0;
  p_output1(54)=0;
  p_output1(55)=0;
  p_output1(56)=0;
  p_output1(57)=0;
  p_output1(58)=0;
  p_output1(59)=0;
  p_output1(60)=0;
  p_output1(61)=0;
  p_output1(62)=0;
  p_output1(63)=0;
  p_output1(64)=0;
  p_output1(65)=0;
  p_output1(66)=0;
  p_output1(67)=0;
  p_output1(68)=0;
  p_output1(69)=0;
  p_output1(70)=0;
  p_output1(71)=0;
  p_output1(72)=0;
  p_output1(73)=0;
  p_output1(74)=0;
  p_output1(75)=0;
  p_output1(76)=0;
  p_output1(77)=0;
  p_output1(78)=0;
  p_output1(79)=0;
  p_output1(80)=0;
  p_output1(81)=0;
  p_output1(82)=0;
  p_output1(83)=0;
}


       
void J_VectorNav_to_LeftToeBottom(Eigen::Matrix<double,6,14> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
