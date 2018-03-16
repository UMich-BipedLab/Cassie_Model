/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 12:16:00 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_VectorNav_to_LeftToeBottom_src.h"

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
  double t637;
  double t786;
  double t769;
  double t770;
  double t788;
  double t812;
  double t782;
  double t794;
  double t796;
  double t765;
  double t813;
  double t816;
  double t819;
  double t841;
  double t803;
  double t828;
  double t832;
  double t756;
  double t844;
  double t861;
  double t868;
  double t892;
  double t833;
  double t877;
  double t884;
  double t743;
  double t900;
  double t902;
  double t903;
  double t621;
  double t492;
  double t715;
  double t940;
  double t941;
  double t948;
  double t961;
  double t965;
  double t969;
  double t954;
  double t970;
  double t973;
  double t979;
  double t987;
  double t993;
  double t978;
  double t998;
  double t1001;
  double t1006;
  double t1012;
  double t1014;
  double t1005;
  double t1016;
  double t1018;
  double t1022;
  double t1025;
  double t1034;
  double t1081;
  double t1087;
  double t1095;
  double t1099;
  double t1102;
  double t1103;
  double t1096;
  double t1107;
  double t1127;
  double t1131;
  double t1132;
  double t1138;
  double t1128;
  double t1141;
  double t1151;
  double t1160;
  double t1162;
  double t1163;
  double t1154;
  double t1168;
  double t1170;
  double t1174;
  double t1177;
  double t1179;
  double t885;
  double t908;
  double t911;
  double t915;
  double t916;
  double t923;
  double t1020;
  double t1051;
  double t1052;
  double t1061;
  double t1072;
  double t1074;
  double t1173;
  double t1180;
  double t1181;
  double t1188;
  double t1195;
  double t1200;
  double t1240;
  double t1243;
  double t1275;
  double t1276;
  double t1290;
  double t1294;
  double t1310;
  double t1314;
  double t1233;
  double t1236;
  double t1254;
  double t1256;
  double t1257;
  double t1262;
  double t1263;
  double t1244;
  double t1248;
  double t1249;
  double t1269;
  double t1270;
  double t1273;
  double t1277;
  double t1278;
  double t1279;
  double t1281;
  double t1283;
  double t1286;
  double t1297;
  double t1298;
  double t1299;
  double t1304;
  double t1305;
  double t1306;
  double t1316;
  double t1319;
  double t1322;
  double t1328;
  double t1329;
  double t1330;
  double t1343;
  double t1344;
  double t1345;
  double t1350;
  double t1353;
  double t1356;
  t637 = Cos(var1[1]);
  t786 = Cos(var1[3]);
  t769 = Cos(var1[2]);
  t770 = Sin(var1[3]);
  t788 = Sin(var1[2]);
  t812 = Cos(var1[4]);
  t782 = -1.*t637*t769*t770;
  t794 = -1.*t786*t637*t788;
  t796 = t782 + t794;
  t765 = Sin(var1[4]);
  t813 = t786*t637*t769;
  t816 = -1.*t637*t770*t788;
  t819 = t813 + t816;
  t841 = Cos(var1[5]);
  t803 = t765*t796;
  t828 = t812*t819;
  t832 = t803 + t828;
  t756 = Sin(var1[5]);
  t844 = t812*t796;
  t861 = -1.*t765*t819;
  t868 = t844 + t861;
  t892 = Cos(var1[6]);
  t833 = -1.*t756*t832;
  t877 = t841*t868;
  t884 = t833 + t877;
  t743 = Sin(var1[6]);
  t900 = t841*t832;
  t902 = t756*t868;
  t903 = t900 + t902;
  t621 = Cos(var1[0]);
  t492 = Sin(var1[1]);
  t715 = Sin(var1[0]);
  t940 = t621*t769*t492;
  t941 = -1.*t715*t788;
  t948 = t940 + t941;
  t961 = -1.*t769*t715;
  t965 = -1.*t621*t492*t788;
  t969 = t961 + t965;
  t954 = -1.*t770*t948;
  t970 = t786*t969;
  t973 = t954 + t970;
  t979 = t786*t948;
  t987 = t770*t969;
  t993 = t979 + t987;
  t978 = t765*t973;
  t998 = t812*t993;
  t1001 = t978 + t998;
  t1006 = t812*t973;
  t1012 = -1.*t765*t993;
  t1014 = t1006 + t1012;
  t1005 = -1.*t756*t1001;
  t1016 = t841*t1014;
  t1018 = t1005 + t1016;
  t1022 = t841*t1001;
  t1025 = t756*t1014;
  t1034 = t1022 + t1025;
  t1081 = t769*t715*t492;
  t1087 = t621*t788;
  t1095 = t1081 + t1087;
  t1099 = t621*t769;
  t1102 = -1.*t715*t492*t788;
  t1103 = t1099 + t1102;
  t1096 = -1.*t770*t1095;
  t1107 = t786*t1103;
  t1127 = t1096 + t1107;
  t1131 = t786*t1095;
  t1132 = t770*t1103;
  t1138 = t1131 + t1132;
  t1128 = t765*t1127;
  t1141 = t812*t1138;
  t1151 = t1128 + t1141;
  t1160 = t812*t1127;
  t1162 = -1.*t765*t1138;
  t1163 = t1160 + t1162;
  t1154 = -1.*t756*t1151;
  t1168 = t841*t1163;
  t1170 = t1154 + t1168;
  t1174 = t841*t1151;
  t1177 = t756*t1163;
  t1179 = t1174 + t1177;
  t885 = t743*t884;
  t908 = t892*t903;
  t911 = t885 + t908;
  t915 = t892*t884;
  t916 = -1.*t743*t903;
  t923 = t915 + t916;
  t1020 = t743*t1018;
  t1051 = t892*t1034;
  t1052 = t1020 + t1051;
  t1061 = t892*t1018;
  t1072 = -1.*t743*t1034;
  t1074 = t1061 + t1072;
  t1173 = t743*t1170;
  t1180 = t892*t1179;
  t1181 = t1173 + t1180;
  t1188 = t892*t1170;
  t1195 = -1.*t743*t1179;
  t1200 = t1188 + t1195;
  t1240 = -1.*t786;
  t1243 = 1. + t1240;
  t1275 = -1.*t812;
  t1276 = 1. + t1275;
  t1290 = -1.*t841;
  t1294 = 1. + t1290;
  t1310 = -1.*t892;
  t1314 = 1. + t1310;
  t1233 = -1.*t637;
  t1236 = 1. + t1233;
  t1254 = -1.*t769;
  t1256 = 1. + t1254;
  t1257 = -0.049*t1256;
  t1262 = -0.09*t788;
  t1263 = 0. + t1257 + t1262;
  t1244 = -0.049*t1243;
  t1248 = -0.21*t770;
  t1249 = 0. + t1244 + t1248;
  t1269 = -0.21*t1243;
  t1270 = 0.049*t770;
  t1273 = 0. + t1269 + t1270;
  t1277 = -0.2707*t1276;
  t1278 = 0.0016*t765;
  t1279 = 0. + t1277 + t1278;
  t1281 = -0.0016*t1276;
  t1283 = -0.2707*t765;
  t1286 = 0. + t1281 + t1283;
  t1297 = 0.0184*t1294;
  t1298 = -0.7055*t756;
  t1299 = 0. + t1297 + t1298;
  t1304 = -0.7055*t1294;
  t1305 = -0.0184*t756;
  t1306 = 0. + t1304 + t1305;
  t1316 = -1.1135*t1314;
  t1319 = 0.0216*t743;
  t1322 = 0. + t1316 + t1319;
  t1328 = -0.0216*t1314;
  t1329 = -1.1135*t743;
  t1330 = 0. + t1328 + t1329;
  t1343 = 0.135*t1236;
  t1344 = 0.049*t492;
  t1345 = 0. + t1343 + t1344;
  t1350 = -0.09*t1256;
  t1353 = 0.049*t788;
  t1356 = 0. + t1350 + t1353;
  p_output1[0]=0. + t492;
  p_output1[1]=0. + t621*t637;
  p_output1[2]=0. + t637*t715;
  p_output1[3]=0.;
  p_output1[4]=0. + 0.642788*t911 + 0.766044*t923;
  p_output1[5]=0. - 0.642788*t1052 - 0.766044*t1074;
  p_output1[6]=0. - 0.642788*t1181 - 0.766044*t1200;
  p_output1[7]=0.;
  p_output1[8]=0. - 0.766044*t911 + 0.642788*t923;
  p_output1[9]=0. + 0.766044*t1052 - 0.642788*t1074;
  p_output1[10]=0. + 0.766044*t1181 - 0.642788*t1200;
  p_output1[11]=0.;
  p_output1[12]=-0.03155 - 0.049*t1236 + 0.004500000000000004*t492 + t1263*t637 + t1249*t637*t769 - 1.*t1273*t637*t788 + t1279*t796 + t1286*t819 + t1299*t832 + t1306*t868 + t1322*t884 + t1330*t903 + 0.0306*t911 - 1.1312*t923;
  p_output1[13]=0. - 0.0306*t1052 + 1.1312*t1074 - 1.*t1001*t1299 - 1.*t1014*t1306 - 1.*t1018*t1322 - 1.*t1034*t1330 - 0.135*(1. - 1.*t621) - 1.*t1345*t621 - 1.*t1263*t492*t621 - 0.1305*t621*t637 + t1356*t715 - 1.*t1249*t948 - 1.*t1273*t969 - 1.*t1279*t973 - 1.*t1286*t993;
  p_output1[14]=-0.07996 - 0.0306*t1181 + 1.1312*t1200 - 1.*t1095*t1249 - 1.*t1103*t1273 - 1.*t1127*t1279 - 1.*t1138*t1286 - 1.*t1151*t1299 - 1.*t1163*t1306 - 1.*t1170*t1322 - 1.*t1179*t1330 - 1.*t1356*t621 + 0.135*t715 - 1.*t1345*t715 - 1.*t1263*t492*t715 - 0.1305*t637*t715;
  p_output1[15]=1.;
}



void H_VectorNav_to_LeftToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
