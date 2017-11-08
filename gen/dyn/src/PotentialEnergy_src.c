/*
 * Automatically Generated from Mathematica.
 * Tue 7 Nov 2017 23:05:33 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "PotentialEnergy_src.h"

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
  double t8;
  double t11;
  double t24;
  double t36;
  double t71;
  double t91;
  double t41;
  double t59;
  double t61;
  double t72;
  double t74;
  double t81;
  double t84;
  double t92;
  double t148;
  double t152;
  double t156;
  double t163;
  double t93;
  double t98;
  double t112;
  double t121;
  double t130;
  double t138;
  double t157;
  double t167;
  double t171;
  double t173;
  double t185;
  double t189;
  double t192;
  double t193;
  double t204;
  double t208;
  double t217;
  double t262;
  double t266;
  double t268;
  double t298;
  double t223;
  double t224;
  double t241;
  double t293;
  double t308;
  double t309;
  double t310;
  double t319;
  double t322;
  double t330;
  double t332;
  double t337;
  double t338;
  double t340;
  double t377;
  double t379;
  double t381;
  double t385;
  double t346;
  double t348;
  double t351;
  double t382;
  double t387;
  double t391;
  double t392;
  double t400;
  double t401;
  double t404;
  double t405;
  double t409;
  double t423;
  double t429;
  double t452;
  double t454;
  double t458;
  double t469;
  double t432;
  double t433;
  double t437;
  double t467;
  double t474;
  double t483;
  double t496;
  double t500;
  double t501;
  double t502;
  double t506;
  double t507;
  double t514;
  double t516;
  double t530;
  double t531;
  double t545;
  double t549;
  double t518;
  double t520;
  double t521;
  double t546;
  double t556;
  double t559;
  double t560;
  double t564;
  double t566;
  double t567;
  double t568;
  double t571;
  double t575;
  double t576;
  double t604;
  double t611;
  double t619;
  double t636;
  double t582;
  double t584;
  double t591;
  double t66;
  double t725;
  double t743;
  double t729;
  double t730;
  double t731;
  double t735;
  double t736;
  double t749;
  double t750;
  double t766;
  double t782;
  double t785;
  double t791;
  double t768;
  double t769;
  double t776;
  double t804;
  double t805;
  double t817;
  double t822;
  double t821;
  double t826;
  double t828;
  double t830;
  double t832;
  double t834;
  double t836;
  double t846;
  double t851;
  double t853;
  double t857;
  double t862;
  double t868;
  double t869;
  double t907;
  double t908;
  double t910;
  double t921;
  double t912;
  double t923;
  double t925;
  double t929;
  double t939;
  double t942;
  double t943;
  double t949;
  double t956;
  double t978;
  double t989;
  double t1026;
  double t1028;
  double t1029;
  double t1035;
  double t994;
  double t997;
  double t1004;
  double t1033;
  double t1038;
  double t1039;
  double t1040;
  double t1041;
  double t1042;
  double t1044;
  double t1047;
  double t1049;
  double t1053;
  double t1057;
  double t1079;
  double t1084;
  double t1087;
  double t1092;
  double t1064;
  double t1065;
  double t1070;
  double t1088;
  double t1094;
  double t1095;
  double t1096;
  double t1098;
  double t1099;
  double t1100;
  double t1101;
  double t1105;
  double t1112;
  double t1116;
  double t1130;
  double t1132;
  double t1135;
  double t1138;
  double t1120;
  double t1121;
  double t1123;
  double t1136;
  double t1139;
  double t1142;
  double t1146;
  double t1156;
  double t1158;
  double t1161;
  double t1162;
  double t1163;
  double t1164;
  double t1167;
  double t1185;
  double t1187;
  double t1192;
  double t1200;
  double t1174;
  double t1176;
  double t1178;
  t8 = Cos(var1[4]);
  t11 = Cos(var1[5]);
  t24 = Sin(var1[4]);
  t36 = Sin(var1[13]);
  t71 = Cos(var1[13]);
  t91 = Sin(var1[5]);
  t41 = 0.135*t36;
  t59 = 0. + t41;
  t61 = t8*t11*t59;
  t72 = -1.*t71;
  t74 = 1. + t72;
  t81 = -0.135*t74;
  t84 = 0. + t81;
  t92 = t84*t8*t91;
  t148 = Cos(var1[14]);
  t152 = -1.*t148;
  t156 = 1. + t152;
  t163 = Sin(var1[14]);
  t93 = t8*t11*t36;
  t98 = t71*t8*t91;
  t112 = t93 + t98;
  t121 = t71*t8*t11;
  t130 = -1.*t8*t36*t91;
  t138 = t121 + t130;
  t157 = -0.049*t156;
  t167 = -0.135*t163;
  t171 = 0. + t157 + t167;
  t173 = -1.*t171*t24;
  t185 = -0.135*t156;
  t189 = 0.049*t163;
  t192 = 0. + t185 + t189;
  t193 = t192*t112;
  t204 = t163*t24;
  t208 = t148*t112;
  t217 = t204 + t208;
  t262 = Cos(var1[15]);
  t266 = -1.*t262;
  t268 = 1. + t266;
  t298 = Sin(var1[15]);
  t223 = -1.*t148*t24;
  t224 = t163*t112;
  t241 = t223 + t224;
  t293 = -0.09*t268;
  t308 = 0.049*t298;
  t309 = 0. + t293 + t308;
  t310 = t309*t138;
  t319 = -0.049*t268;
  t322 = -0.09*t298;
  t330 = 0. + t319 + t322;
  t332 = t330*t241;
  t337 = t298*t138;
  t338 = t262*t241;
  t340 = t337 + t338;
  t377 = Cos(var1[16]);
  t379 = -1.*t377;
  t381 = 1. + t379;
  t385 = Sin(var1[16]);
  t346 = t262*t138;
  t348 = -1.*t298*t241;
  t351 = t346 + t348;
  t382 = -0.049*t381;
  t387 = -0.21*t385;
  t391 = 0. + t382 + t387;
  t392 = t391*t340;
  t400 = -0.21*t381;
  t401 = 0.049*t385;
  t404 = 0. + t400 + t401;
  t405 = t404*t351;
  t409 = -1.*t385*t340;
  t423 = t377*t351;
  t429 = t409 + t423;
  t452 = Cos(var1[17]);
  t454 = -1.*t452;
  t458 = 1. + t454;
  t469 = Sin(var1[17]);
  t432 = t377*t340;
  t433 = t385*t351;
  t437 = t432 + t433;
  t467 = -0.2707*t458;
  t474 = 0.0016*t469;
  t483 = 0. + t467 + t474;
  t496 = t483*t429;
  t500 = -0.0016*t458;
  t501 = -0.2707*t469;
  t502 = 0. + t500 + t501;
  t506 = t502*t437;
  t507 = t469*t429;
  t514 = t452*t437;
  t516 = t507 + t514;
  t530 = Cos(var1[18]);
  t531 = -1.*t530;
  t545 = 1. + t531;
  t549 = Sin(var1[18]);
  t518 = t452*t429;
  t520 = -1.*t469*t437;
  t521 = t518 + t520;
  t546 = 0.0184*t545;
  t556 = -0.7055*t549;
  t559 = 0. + t546 + t556;
  t560 = t559*t516;
  t564 = -0.7055*t545;
  t566 = -0.0184*t549;
  t567 = 0. + t564 + t566;
  t568 = t567*t521;
  t571 = -1.*t549*t516;
  t575 = t530*t521;
  t576 = t571 + t575;
  t604 = Cos(var1[19]);
  t611 = -1.*t604;
  t619 = 1. + t611;
  t636 = Sin(var1[19]);
  t582 = t530*t516;
  t584 = t549*t521;
  t591 = t582 + t584;
  t66 = 0.0233*t24;
  t725 = Cos(var1[6]);
  t743 = Sin(var1[6]);
  t729 = -1.*t725;
  t730 = 1. + t729;
  t731 = 0.135*t730;
  t735 = 0. + t731;
  t736 = t8*t735*t91;
  t749 = -0.135*t743;
  t750 = 0. + t749;
  t766 = t8*t11*t750;
  t782 = t8*t11*t725;
  t785 = -1.*t8*t91*t743;
  t791 = t782 + t785;
  t768 = t8*t725*t91;
  t769 = t8*t11*t743;
  t776 = t768 + t769;
  t804 = Cos(var1[7]);
  t805 = -1.*t804;
  t817 = 1. + t805;
  t822 = Sin(var1[7]);
  t821 = 0.135*t817;
  t826 = 0.049*t822;
  t828 = 0. + t821 + t826;
  t830 = t776*t828;
  t832 = -0.049*t817;
  t834 = 0.135*t822;
  t836 = 0. + t832 + t834;
  t846 = -1.*t24*t836;
  t851 = t804*t776;
  t853 = t24*t822;
  t857 = t851 + t853;
  t862 = -1.*t804*t24;
  t868 = t776*t822;
  t869 = t862 + t868;
  t907 = Cos(var1[8]);
  t908 = -1.*t907;
  t910 = 1. + t908;
  t921 = Sin(var1[8]);
  t912 = -0.049*t910;
  t923 = -0.09*t921;
  t925 = 0. + t912 + t923;
  t929 = t869*t925;
  t939 = -0.09*t910;
  t942 = 0.049*t921;
  t943 = 0. + t939 + t942;
  t949 = t791*t943;
  t956 = t907*t869;
  t978 = t791*t921;
  t989 = t956 + t978;
  t1026 = Cos(var1[9]);
  t1028 = -1.*t1026;
  t1029 = 1. + t1028;
  t1035 = Sin(var1[9]);
  t994 = t907*t791;
  t997 = -1.*t869*t921;
  t1004 = t994 + t997;
  t1033 = -0.049*t1029;
  t1038 = -0.21*t1035;
  t1039 = 0. + t1033 + t1038;
  t1040 = t1039*t989;
  t1041 = -0.21*t1029;
  t1042 = 0.049*t1035;
  t1044 = 0. + t1041 + t1042;
  t1047 = t1044*t1004;
  t1049 = -1.*t1035*t989;
  t1053 = t1026*t1004;
  t1057 = t1049 + t1053;
  t1079 = Cos(var1[10]);
  t1084 = -1.*t1079;
  t1087 = 1. + t1084;
  t1092 = Sin(var1[10]);
  t1064 = t1026*t989;
  t1065 = t1035*t1004;
  t1070 = t1064 + t1065;
  t1088 = -0.2707*t1087;
  t1094 = 0.0016*t1092;
  t1095 = 0. + t1088 + t1094;
  t1096 = t1095*t1057;
  t1098 = -0.0016*t1087;
  t1099 = -0.2707*t1092;
  t1100 = 0. + t1098 + t1099;
  t1101 = t1100*t1070;
  t1105 = t1092*t1057;
  t1112 = t1079*t1070;
  t1116 = t1105 + t1112;
  t1130 = Cos(var1[11]);
  t1132 = -1.*t1130;
  t1135 = 1. + t1132;
  t1138 = Sin(var1[11]);
  t1120 = t1079*t1057;
  t1121 = -1.*t1092*t1070;
  t1123 = t1120 + t1121;
  t1136 = 0.0184*t1135;
  t1139 = -0.7055*t1138;
  t1142 = 0. + t1136 + t1139;
  t1146 = t1142*t1116;
  t1156 = -0.7055*t1135;
  t1158 = -0.0184*t1138;
  t1161 = 0. + t1156 + t1158;
  t1162 = t1161*t1123;
  t1163 = -1.*t1138*t1116;
  t1164 = t1130*t1123;
  t1167 = t1163 + t1164;
  t1185 = Cos(var1[12]);
  t1187 = -1.*t1185;
  t1192 = 1. + t1187;
  t1200 = Sin(var1[12]);
  t1174 = t1130*t1116;
  t1176 = t1138*t1123;
  t1178 = t1174 + t1176;
  p_output1[0]=17.8542*(0. + t66 + t736 + t766 + 0.1351*t776 + 0.0179*t791 + var1[2]) + 101.3373*(-0.0507*t24 + 0.0284*t11*t8 + var1[2]) + 11.4777*(0. + t736 + t766 - 0.0343*t791 + t830 + t846 + 0.135*t857 - 0.049*t869 + var1[2]) + 11.4777*(0. - 0.0343*t138 + t173 + t193 - 0.135*t217 - 0.049*t241 + t61 + t92 + var1[2]) + 54.1512*(0. + t173 + t193 - 0.1708*t217 + t310 + t332 - 0.0489*t340 - 0.1498*t351 + t61 + t92 + var1[2]) + 7.43598*(0. + t173 + t193 - 0.1327*t217 + t310 + t332 + t392 + t405 - 0.233*t429 - 0.0169*t437 + t61 + t92 + var1[2]) + 5.66037*(0. + t173 + t193 - 0.1303*t217 + t310 + t332 + t392 + t405 + t496 + t506 - 0.0004*t516 - 0.4541*t521 + t61 + t92 + var1[2]) + 7.67142*(0. + t173 + t193 - 0.1318*t217 + t310 + t332 + t392 + t405 + t496 + t506 + t560 + t568 - 0.816*t576 - 0.0122*t591 + t61 + t92 + var1[2]) + 1.4715*(0. + t173 + t193 - 0.1306*t217 + t310 + t332 + t392 + t405 + t496 + t506 + t560 + t568 + t61 + t591*(0. - 0.0216*t619 - 1.1135*t636) + t576*(0. - 1.1135*t619 + 0.0216*t636) + 0.0059*(t591*t604 + t576*t636) - 1.1182*(t576*t604 - 1.*t591*t636) + t92 + var1[2]) + 17.8542*(0. - 0.1351*t112 + 0.0179*t138 + t61 + t66 + t92 + var1[2]) + 5.66037*(0. + t1040 + t1047 + t1096 + t1101 - 0.0004*t1116 - 0.4541*t1123 + t736 + t766 + t830 + t846 + 0.1303*t857 + t929 + t949 + var1[2]) + 1.4715*(0. + t1040 + t1047 + t1096 + t1101 + t1146 + t1162 + t1178*(0. - 0.0216*t1192 - 1.1135*t1200) + t1167*(0. - 1.1135*t1192 + 0.0216*t1200) + 0.0059*(t1178*t1185 + t1167*t1200) - 1.1182*(t1167*t1185 - 1.*t1178*t1200) + t736 + t766 + t830 + t846 + 0.1306*t857 + t929 + t949 + var1[2]) + 7.67142*(0. + t1040 + t1047 + t1096 + t1101 + t1146 + t1162 - 0.816*t1167 - 0.0122*t1178 + t736 + t766 + t830 + t846 + 0.1318*t857 + t929 + t949 + var1[2]) + 7.43598*(0. + t1040 + t1047 - 0.233*t1057 - 0.0169*t1070 + t736 + t766 + t830 + t846 + 0.1327*t857 + t929 + t949 + var1[2]) + 54.1512*(0. - 0.1498*t1004 + t736 + t766 + t830 + t846 + 0.1708*t857 + t929 + t949 - 0.0489*t989 + var1[2]);
}



void PotentialEnergy_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
