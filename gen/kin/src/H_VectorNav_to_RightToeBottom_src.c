/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 12:15:56 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_VectorNav_to_RightToeBottom_src.h"

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
  double t10;
  double t36;
  double t39;
  double t34;
  double t41;
  double t32;
  double t46;
  double t47;
  double t48;
  double t37;
  double t42;
  double t43;
  double t49;
  double t30;
  double t59;
  double t62;
  double t64;
  double t44;
  double t52;
  double t56;
  double t65;
  double t29;
  double t74;
  double t75;
  double t76;
  double t58;
  double t68;
  double t70;
  double t77;
  double t8;
  double t4;
  double t22;
  double t98;
  double t101;
  double t103;
  double t91;
  double t92;
  double t95;
  double t109;
  double t110;
  double t112;
  double t97;
  double t104;
  double t107;
  double t116;
  double t117;
  double t118;
  double t108;
  double t113;
  double t114;
  double t122;
  double t123;
  double t126;
  double t115;
  double t119;
  double t120;
  double t149;
  double t150;
  double t151;
  double t141;
  double t143;
  double t146;
  double t159;
  double t160;
  double t161;
  double t147;
  double t153;
  double t156;
  double t169;
  double t170;
  double t171;
  double t157;
  double t163;
  double t166;
  double t176;
  double t177;
  double t178;
  double t167;
  double t173;
  double t174;
  double t71;
  double t79;
  double t80;
  double t82;
  double t83;
  double t85;
  double t121;
  double t127;
  double t130;
  double t133;
  double t136;
  double t137;
  double t175;
  double t179;
  double t180;
  double t182;
  double t184;
  double t185;
  double t208;
  double t209;
  double t218;
  double t219;
  double t228;
  double t229;
  double t238;
  double t239;
  double t198;
  double t199;
  double t202;
  double t203;
  double t204;
  double t205;
  double t206;
  double t210;
  double t211;
  double t212;
  double t214;
  double t215;
  double t216;
  double t220;
  double t221;
  double t222;
  double t224;
  double t225;
  double t226;
  double t230;
  double t231;
  double t232;
  double t234;
  double t235;
  double t236;
  double t240;
  double t241;
  double t242;
  double t244;
  double t245;
  double t246;
  double t255;
  double t256;
  double t257;
  double t260;
  double t261;
  double t262;
  t10 = Cos(var1[8]);
  t36 = Cos(var1[10]);
  t39 = Sin(var1[9]);
  t34 = Cos(var1[9]);
  t41 = Sin(var1[10]);
  t32 = Cos(var1[11]);
  t46 = -1.*t10*t36*t39;
  t47 = -1.*t10*t34*t41;
  t48 = t46 + t47;
  t37 = t10*t34*t36;
  t42 = -1.*t10*t39*t41;
  t43 = t37 + t42;
  t49 = Sin(var1[11]);
  t30 = Cos(var1[12]);
  t59 = t32*t48;
  t62 = -1.*t43*t49;
  t64 = t59 + t62;
  t44 = t32*t43;
  t52 = t48*t49;
  t56 = t44 + t52;
  t65 = Sin(var1[12]);
  t29 = Cos(var1[13]);
  t74 = t30*t64;
  t75 = -1.*t56*t65;
  t76 = t74 + t75;
  t58 = t30*t56;
  t68 = t64*t65;
  t70 = t58 + t68;
  t77 = Sin(var1[13]);
  t8 = Cos(var1[7]);
  t4 = Sin(var1[8]);
  t22 = Sin(var1[7]);
  t98 = -1.*t34*t22;
  t101 = -1.*t8*t4*t39;
  t103 = t98 + t101;
  t91 = t8*t34*t4;
  t92 = -1.*t22*t39;
  t95 = t91 + t92;
  t109 = t36*t103;
  t110 = -1.*t95*t41;
  t112 = t109 + t110;
  t97 = t36*t95;
  t104 = t103*t41;
  t107 = t97 + t104;
  t116 = t32*t112;
  t117 = -1.*t107*t49;
  t118 = t116 + t117;
  t108 = t32*t107;
  t113 = t112*t49;
  t114 = t108 + t113;
  t122 = t30*t118;
  t123 = -1.*t114*t65;
  t126 = t122 + t123;
  t115 = t30*t114;
  t119 = t118*t65;
  t120 = t115 + t119;
  t149 = t8*t34;
  t150 = -1.*t22*t4*t39;
  t151 = t149 + t150;
  t141 = t34*t22*t4;
  t143 = t8*t39;
  t146 = t141 + t143;
  t159 = t36*t151;
  t160 = -1.*t146*t41;
  t161 = t159 + t160;
  t147 = t36*t146;
  t153 = t151*t41;
  t156 = t147 + t153;
  t169 = t32*t161;
  t170 = -1.*t156*t49;
  t171 = t169 + t170;
  t157 = t32*t156;
  t163 = t161*t49;
  t166 = t157 + t163;
  t176 = t30*t171;
  t177 = -1.*t166*t65;
  t178 = t176 + t177;
  t167 = t30*t166;
  t173 = t171*t65;
  t174 = t167 + t173;
  t71 = t29*t70;
  t79 = t76*t77;
  t80 = t71 + t79;
  t82 = t29*t76;
  t83 = -1.*t70*t77;
  t85 = t82 + t83;
  t121 = t29*t120;
  t127 = t126*t77;
  t130 = t121 + t127;
  t133 = t29*t126;
  t136 = -1.*t120*t77;
  t137 = t133 + t136;
  t175 = t29*t174;
  t179 = t178*t77;
  t180 = t175 + t179;
  t182 = t29*t178;
  t184 = -1.*t174*t77;
  t185 = t182 + t184;
  t208 = -1.*t36;
  t209 = 1. + t208;
  t218 = -1.*t32;
  t219 = 1. + t218;
  t228 = -1.*t30;
  t229 = 1. + t228;
  t238 = -1.*t29;
  t239 = 1. + t238;
  t198 = -1.*t10;
  t199 = 1. + t198;
  t202 = -1.*t34;
  t203 = 1. + t202;
  t204 = -0.049*t203;
  t205 = -0.09*t39;
  t206 = 0. + t204 + t205;
  t210 = -0.049*t209;
  t211 = -0.21*t41;
  t212 = 0. + t210 + t211;
  t214 = -0.21*t209;
  t215 = 0.049*t41;
  t216 = 0. + t214 + t215;
  t220 = -0.0016*t219;
  t221 = -0.2707*t49;
  t222 = 0. + t220 + t221;
  t224 = -0.2707*t219;
  t225 = 0.0016*t49;
  t226 = 0. + t224 + t225;
  t230 = 0.0184*t229;
  t231 = -0.7055*t65;
  t232 = 0. + t230 + t231;
  t234 = -0.7055*t229;
  t235 = -0.0184*t65;
  t236 = 0. + t234 + t235;
  t240 = -0.0216*t239;
  t241 = -1.1135*t77;
  t242 = 0. + t240 + t241;
  t244 = -1.1135*t239;
  t245 = 0.0216*t77;
  t246 = 0. + t244 + t245;
  t255 = -0.135*t199;
  t256 = 0.049*t4;
  t257 = 0. + t255 + t256;
  t260 = -0.09*t203;
  t261 = 0.049*t39;
  t262 = 0. + t260 + t261;
  p_output1[0]=0. + t4;
  p_output1[1]=0. + t10*t8;
  p_output1[2]=0. + t10*t22;
  p_output1[3]=0.;
  p_output1[4]=0. + 0.642788*t80 + 0.766044*t85;
  p_output1[5]=0. - 0.642788*t130 - 0.766044*t137;
  p_output1[6]=0. - 0.642788*t180 - 0.766044*t185;
  p_output1[7]=0.;
  p_output1[8]=0. - 0.766044*t80 + 0.642788*t85;
  p_output1[9]=0. + 0.766044*t130 - 0.642788*t137;
  p_output1[10]=0. + 0.766044*t180 - 0.642788*t185;
  p_output1[11]=0.;
  p_output1[12]=-0.03155 - 0.049*t199 + t10*t206 + t10*t212*t34 - 1.*t10*t216*t39 - 0.004500000000000004*t4 + t222*t43 + t226*t48 + t232*t56 + t236*t64 + t242*t70 + t246*t76 + 0.0306*t80 - 1.1312*t85;
  p_output1[13]=0. - 0.0306*t130 + 1.1312*t137 - 1.*t103*t216 - 1.*t107*t222 - 1.*t112*t226 - 1.*t114*t232 - 1.*t118*t236 - 1.*t120*t242 - 1.*t126*t246 + t22*t262 + 0.135*(1. - 1.*t8) + 0.1305*t10*t8 - 1.*t257*t8 - 1.*t206*t4*t8 - 1.*t212*t95;
  p_output1[14]=-0.07996 - 0.0306*t180 + 1.1312*t185 - 1.*t146*t212 - 1.*t151*t216 - 0.135*t22 + 0.1305*t10*t22 - 1.*t156*t222 - 1.*t161*t226 - 1.*t166*t232 - 1.*t171*t236 - 1.*t174*t242 - 1.*t178*t246 - 1.*t22*t257 - 1.*t206*t22*t4 - 1.*t262*t8;
  p_output1[15]=1.;
}



void H_VectorNav_to_RightToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
