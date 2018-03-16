/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 12:16:46 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_LeftToeBottom_to_RightToeBottom.h"

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
static void output1(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  double t362;
  double t406;
  double t374;
  double t375;
  double t462;
  double t747;
  double t405;
  double t545;
  double t719;
  double t243;
  double t787;
  double t804;
  double t855;
  double t946;
  double t730;
  double t886;
  double t890;
  double t223;
  double t953;
  double t1091;
  double t1151;
  double t1231;
  double t931;
  double t1167;
  double t1214;
  double t143;
  double t1247;
  double t1258;
  double t1274;
  double t1542;
  double t1502;
  double t1505;
  double t1536;
  double t1558;
  double t1721;
  double t2067;
  double t2075;
  double t2092;
  double t1986;
  double t2094;
  double t2098;
  double t2150;
  double t2167;
  double t2178;
  double t2101;
  double t2185;
  double t2233;
  double t2248;
  double t2252;
  double t2254;
  double t2239;
  double t2256;
  double t2270;
  double t2281;
  double t2291;
  double t2294;
  double t1227;
  double t1284;
  double t1286;
  double t1361;
  double t1372;
  double t1393;
  double t2274;
  double t2300;
  double t2320;
  double t2331;
  double t2345;
  double t2361;
  double t2721;
  double t2726;
  double t2866;
  double t2904;
  double t2939;
  double t2948;
  double t2903;
  double t2996;
  double t3011;
  double t3046;
  double t3066;
  double t3102;
  double t3045;
  double t3110;
  double t3127;
  double t3173;
  double t3180;
  double t3279;
  double t3154;
  double t3283;
  double t3307;
  double t3322;
  double t3337;
  double t3351;
  double t2526;
  double t2538;
  double t2556;
  double t2327;
  double t2434;
  double t2438;
  double t3310;
  double t3399;
  double t3446;
  double t3493;
  double t3504;
  double t3509;
  double t1306;
  double t1416;
  double t1431;
  double t2569;
  double t2646;
  double t2663;
  double t2479;
  double t2678;
  double t96;
  double t3757;
  double t3790;
  double t3801;
  double t3465;
  double t3536;
  double t3553;
  double t3574;
  double t3653;
  double t3671;
  double t3689;
  double t3999;
  double t4051;
  double t4078;
  double t4122;
  double t4233;
  double t4261;
  double t4339;
  double t4382;
  double t121;
  double t4815;
  double t4688;
  double t7904;
  double t7912;
  double t7900;
  double t7975;
  double t7996;
  double t7997;
  double t7911;
  double t7919;
  double t7926;
  double t8001;
  double t7892;
  double t8020;
  double t8024;
  double t8029;
  double t7944;
  double t8004;
  double t8010;
  double t8038;
  double t7888;
  double t8057;
  double t8058;
  double t8059;
  double t8014;
  double t8047;
  double t8049;
  double t8061;
  double t7868;
  double t8070;
  double t8071;
  double t8076;
  double t8054;
  double t8065;
  double t8066;
  double t8086;
  double t2704;
  double t8131;
  double t8133;
  double t8134;
  double t8124;
  double t8127;
  double t8128;
  double t8141;
  double t8144;
  double t8145;
  double t8130;
  double t8137;
  double t8138;
  double t8154;
  double t8156;
  double t8157;
  double t8140;
  double t8148;
  double t8149;
  double t8170;
  double t8173;
  double t8175;
  double t8153;
  double t8159;
  double t8160;
  double t4719;
  double t4732;
  double t4741;
  double t8199;
  double t8200;
  double t8201;
  double t8191;
  double t8193;
  double t8194;
  double t8210;
  double t8213;
  double t8216;
  double t8198;
  double t8203;
  double t8206;
  double t8220;
  double t8221;
  double t8226;
  double t8207;
  double t8217;
  double t8218;
  double t4819;
  double t4830;
  double t4959;
  double t8067;
  double t8087;
  double t8091;
  double t8092;
  double t8105;
  double t8109;
  double t8112;
  double t8113;
  double t8116;
  double t5126;
  double t5227;
  double t5250;
  double t8219;
  double t8227;
  double t8228;
  double t8230;
  double t8236;
  double t8237;
  double t8238;
  double t8239;
  double t8241;
  double t5277;
  double t5342;
  double t5401;
  double t8166;
  double t8176;
  double t8177;
  double t8178;
  double t8181;
  double t8184;
  double t8186;
  double t8188;
  double t8189;
  double t5666;
  double t5872;
  double t6291;
  double t7541;
  double t7704;
  double t7767;
  double t7806;
  double t7828;
  double t7833;
  double t7842;
  double t8257;
  double t8258;
  double t8259;
  double t8266;
  double t8267;
  double t8268;
  double t8262;
  double t8263;
  double t8264;
  t362 = Cos(var1[1]);
  t406 = Cos(var1[3]);
  t374 = Cos(var1[2]);
  t375 = Sin(var1[3]);
  t462 = Sin(var1[2]);
  t747 = Cos(var1[4]);
  t405 = -1.*t362*t374*t375;
  t545 = -1.*t406*t362*t462;
  t719 = t405 + t545;
  t243 = Sin(var1[4]);
  t787 = t406*t362*t374;
  t804 = -1.*t362*t375*t462;
  t855 = t787 + t804;
  t946 = Cos(var1[5]);
  t730 = t243*t719;
  t886 = t747*t855;
  t890 = t730 + t886;
  t223 = Sin(var1[5]);
  t953 = t747*t719;
  t1091 = -1.*t243*t855;
  t1151 = t953 + t1091;
  t1231 = Cos(var1[6]);
  t931 = -1.*t223*t890;
  t1167 = t946*t1151;
  t1214 = t931 + t1167;
  t143 = Sin(var1[6]);
  t1247 = t946*t890;
  t1258 = t223*t1151;
  t1274 = t1247 + t1258;
  t1542 = Sin(var1[0]);
  t1502 = Cos(var1[0]);
  t1505 = Sin(var1[1]);
  t1536 = t1502*t374*t1505;
  t1558 = -1.*t1542*t462;
  t1721 = t1536 + t1558;
  t2067 = -1.*t374*t1542;
  t2075 = -1.*t1502*t1505*t462;
  t2092 = t2067 + t2075;
  t1986 = -1.*t375*t1721;
  t2094 = t406*t2092;
  t2098 = t1986 + t2094;
  t2150 = t406*t1721;
  t2167 = t375*t2092;
  t2178 = t2150 + t2167;
  t2101 = t243*t2098;
  t2185 = t747*t2178;
  t2233 = t2101 + t2185;
  t2248 = t747*t2098;
  t2252 = -1.*t243*t2178;
  t2254 = t2248 + t2252;
  t2239 = -1.*t223*t2233;
  t2256 = t946*t2254;
  t2270 = t2239 + t2256;
  t2281 = t946*t2233;
  t2291 = t223*t2254;
  t2294 = t2281 + t2291;
  t1227 = t143*t1214;
  t1284 = t1231*t1274;
  t1286 = t1227 + t1284;
  t1361 = t1231*t1214;
  t1372 = -1.*t143*t1274;
  t1393 = t1361 + t1372;
  t2274 = t143*t2270;
  t2300 = t1231*t2294;
  t2320 = t2274 + t2300;
  t2331 = t1231*t2270;
  t2345 = -1.*t143*t2294;
  t2361 = t2331 + t2345;
  t2721 = t374*t1542*t1505;
  t2726 = t1502*t462;
  t2866 = t2721 + t2726;
  t2904 = t1502*t374;
  t2939 = -1.*t1542*t1505*t462;
  t2948 = t2904 + t2939;
  t2903 = -1.*t375*t2866;
  t2996 = t406*t2948;
  t3011 = t2903 + t2996;
  t3046 = t406*t2866;
  t3066 = t375*t2948;
  t3102 = t3046 + t3066;
  t3045 = t243*t3011;
  t3110 = t747*t3102;
  t3127 = t3045 + t3110;
  t3173 = t747*t3011;
  t3180 = -1.*t243*t3102;
  t3279 = t3173 + t3180;
  t3154 = -1.*t223*t3127;
  t3283 = t946*t3279;
  t3307 = t3154 + t3283;
  t3322 = t946*t3127;
  t3337 = t223*t3279;
  t3351 = t3322 + t3337;
  t2526 = -0.766044*t1286;
  t2538 = 0.642788*t1393;
  t2556 = t2526 + t2538;
  t2327 = -0.766044*t2320;
  t2434 = 0.642788*t2361;
  t2438 = t2327 + t2434;
  t3310 = t143*t3307;
  t3399 = t1231*t3351;
  t3446 = t3310 + t3399;
  t3493 = t1231*t3307;
  t3504 = -1.*t143*t3351;
  t3509 = t3493 + t3504;
  t1306 = 0.642788*t1286;
  t1416 = 0.766044*t1393;
  t1431 = t1306 + t1416;
  t2569 = 0.642788*t2320;
  t2646 = 0.766044*t2361;
  t2663 = t2569 + t2646;
  t2479 = t1431*t2438;
  t2678 = -1.*t2556*t2663;
  t96 = Cos(var1[8]);
  t3757 = -0.766044*t3446;
  t3790 = 0.642788*t3509;
  t3801 = t3757 + t3790;
  t3465 = 0.642788*t3446;
  t3536 = 0.766044*t3509;
  t3553 = t3465 + t3536;
  t3574 = t1502*t362*t2556;
  t3653 = t1505*t2438;
  t3671 = t3574 + t3653;
  t3689 = -1.*t3553*t3671;
  t3999 = t1502*t362*t1431;
  t4051 = t1505*t2663;
  t4078 = t3999 + t4051;
  t4122 = t3801*t4078;
  t4233 = t2479 + t2678;
  t4261 = -1.*t362*t1542*t4233;
  t4339 = 0. + t3689 + t4122 + t4261;
  t4382 = 1/t4339;
  t121 = Sin(var1[7]);
  t4815 = Sin(var1[8]);
  t4688 = Cos(var1[7]);
  t7904 = Cos(var1[9]);
  t7912 = Sin(var1[9]);
  t7900 = Cos(var1[10]);
  t7975 = t4688*t7904;
  t7996 = -1.*t121*t4815*t7912;
  t7997 = t7975 + t7996;
  t7911 = t7904*t121*t4815;
  t7919 = t4688*t7912;
  t7926 = t7911 + t7919;
  t8001 = Sin(var1[10]);
  t7892 = Cos(var1[11]);
  t8020 = t7900*t7997;
  t8024 = -1.*t7926*t8001;
  t8029 = t8020 + t8024;
  t7944 = t7900*t7926;
  t8004 = t7997*t8001;
  t8010 = t7944 + t8004;
  t8038 = Sin(var1[11]);
  t7888 = Cos(var1[12]);
  t8057 = t7892*t8029;
  t8058 = -1.*t8010*t8038;
  t8059 = t8057 + t8058;
  t8014 = t7892*t8010;
  t8047 = t8029*t8038;
  t8049 = t8014 + t8047;
  t8061 = Sin(var1[12]);
  t7868 = Cos(var1[13]);
  t8070 = t7888*t8059;
  t8071 = -1.*t8049*t8061;
  t8076 = t8070 + t8071;
  t8054 = t7888*t8049;
  t8065 = t8059*t8061;
  t8066 = t8054 + t8065;
  t8086 = Sin(var1[13]);
  t2704 = 0. + t2479 + t2678;
  t8131 = -1.*t7904*t121;
  t8133 = -1.*t4688*t4815*t7912;
  t8134 = t8131 + t8133;
  t8124 = t4688*t7904*t4815;
  t8127 = -1.*t121*t7912;
  t8128 = t8124 + t8127;
  t8141 = t7900*t8134;
  t8144 = -1.*t8128*t8001;
  t8145 = t8141 + t8144;
  t8130 = t7900*t8128;
  t8137 = t8134*t8001;
  t8138 = t8130 + t8137;
  t8154 = t7892*t8145;
  t8156 = -1.*t8138*t8038;
  t8157 = t8154 + t8156;
  t8140 = t7892*t8138;
  t8148 = t8145*t8038;
  t8149 = t8140 + t8148;
  t8170 = t7888*t8157;
  t8173 = -1.*t8149*t8061;
  t8175 = t8170 + t8173;
  t8153 = t7888*t8149;
  t8159 = t8157*t8061;
  t8160 = t8153 + t8159;
  t4719 = -1.*t1431*t3801;
  t4732 = t2556*t3553;
  t4741 = 0. + t4719 + t4732;
  t8199 = -1.*t96*t7900*t7912;
  t8200 = -1.*t96*t7904*t8001;
  t8201 = t8199 + t8200;
  t8191 = t96*t7904*t7900;
  t8193 = -1.*t96*t7912*t8001;
  t8194 = t8191 + t8193;
  t8210 = t7892*t8201;
  t8213 = -1.*t8194*t8038;
  t8216 = t8210 + t8213;
  t8198 = t7892*t8194;
  t8203 = t8201*t8038;
  t8206 = t8198 + t8203;
  t8220 = t7888*t8216;
  t8221 = -1.*t8206*t8061;
  t8226 = t8220 + t8221;
  t8207 = t7888*t8206;
  t8217 = t8216*t8061;
  t8218 = t8207 + t8217;
  t4819 = t2663*t3801;
  t4830 = -1.*t2438*t3553;
  t4959 = 0. + t4819 + t4830;
  t8067 = t7868*t8066;
  t8087 = t8076*t8086;
  t8091 = t8067 + t8087;
  t8092 = 0.642788*t8091;
  t8105 = t7868*t8076;
  t8109 = -1.*t8066*t8086;
  t8112 = t8105 + t8109;
  t8113 = 0.766044*t8112;
  t8116 = t8092 + t8113;
  t5126 = -1.*t1502*t362*t2556;
  t5227 = -1.*t1505*t2438;
  t5250 = 0. + t5126 + t5227;
  t8219 = t7868*t8218;
  t8227 = t8226*t8086;
  t8228 = t8219 + t8227;
  t8230 = 0.642788*t8228;
  t8236 = t7868*t8226;
  t8237 = -1.*t8218*t8086;
  t8238 = t8236 + t8237;
  t8239 = 0.766044*t8238;
  t8241 = t8230 + t8239;
  t5277 = -1.*t362*t1542*t2438;
  t5342 = t1502*t362*t3801;
  t5401 = 0. + t5277 + t5342;
  t8166 = t7868*t8160;
  t8176 = t8175*t8086;
  t8177 = t8166 + t8176;
  t8178 = 0.642788*t8177;
  t8181 = t7868*t8175;
  t8184 = -1.*t8160*t8086;
  t8186 = t8181 + t8184;
  t8188 = 0.766044*t8186;
  t8189 = t8178 + t8188;
  t5666 = t362*t1542*t2556;
  t5872 = t1505*t3801;
  t6291 = 0. + t5666 + t5872;
  t7541 = 0. + t3999 + t4051;
  t7704 = t362*t1542*t2663;
  t7767 = -1.*t1502*t362*t3553;
  t7806 = 0. + t7704 + t7767;
  t7828 = -1.*t362*t1542*t1431;
  t7833 = -1.*t1505*t3553;
  t7842 = 0. + t7828 + t7833;
  t8257 = -0.766044*t8091;
  t8258 = 0.642788*t8112;
  t8259 = t8257 + t8258;
  t8266 = -0.766044*t8228;
  t8267 = 0.642788*t8238;
  t8268 = t8266 + t8267;
  t8262 = -0.766044*t8177;
  t8263 = 0.642788*t8186;
  t8264 = t8262 + t8263;

  p_output1(0)=0. + t4382*t4815*t4959 - 1.*t121*t2704*t4382*t96 - 1.*t4382*t4688*t4741*t96;
  p_output1(1)=0. + t4382*t4815*t5401 - 1.*t121*t4382*t5250*t96 - 1.*t4382*t4688*t6291*t96;
  p_output1(2)=0. + t4382*t4815*t7806 - 1.*t121*t4382*t7541*t96 - 1.*t4382*t4688*t7842*t96;
  p_output1(3)=0. + t2704*t4382*t8116 + t4382*t4741*t8189 + t4382*t4959*t8241;
  p_output1(4)=0. + t4382*t5250*t8116 + t4382*t6291*t8189 + t4382*t5401*t8241;
  p_output1(5)=0. + t4382*t7541*t8116 + t4382*t7842*t8189 + t4382*t7806*t8241;
  p_output1(6)=0. + t2704*t4382*t8259 + t4382*t4741*t8264 + t4382*t4959*t8268;
  p_output1(7)=0. + t4382*t5250*t8259 + t4382*t6291*t8264 + t4382*t5401*t8268;
  p_output1(8)=0. + t4382*t7541*t8259 + t4382*t7842*t8264 + t4382*t7806*t8268;
}


       
void R_LeftToeBottom_to_RightToeBottom(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
