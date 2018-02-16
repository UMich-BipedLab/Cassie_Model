/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:15:08 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "J_hip_flexion_left_src.h"

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
  double t770;
  double t772;
  double t783;
  double t769;
  double t786;
  double t727;
  double t771;
  double t791;
  double t792;
  double t798;
  double t802;
  double t803;
  double t804;
  double t820;
  double t821;
  double t826;
  double t830;
  double t815;
  double t817;
  double t818;
  double t837;
  double t852;
  double t853;
  double t855;
  double t857;
  double t848;
  double t849;
  double t851;
  double t866;
  double t868;
  double t869;
  double t755;
  double t759;
  double t761;
  double t767;
  double t805;
  double t806;
  double t886;
  double t887;
  double t888;
  double t890;
  double t891;
  double t892;
  double t827;
  double t831;
  double t833;
  double t838;
  double t839;
  double t840;
  double t896;
  double t897;
  double t900;
  double t856;
  double t861;
  double t862;
  double t872;
  double t873;
  double t874;
  double t907;
  double t908;
  double t909;
  double t911;
  double t912;
  double t913;
  double t930;
  double t931;
  double t932;
  double t939;
  double t942;
  double t943;
  double t945;
  double t946;
  double t947;
  double t964;
  double t965;
  double t966;
  double t975;
  double t976;
  double t979;
  double t981;
  double t982;
  double t983;
  double t999;
  double t1002;
  double t1003;
  double t1010;
  double t1011;
  double t1012;
  double t1014;
  double t1022;
  double t1024;
  double t1041;
  double t1042;
  double t1043;
  double t1045;
  double t1046;
  double t1050;
  double t1051;
  double t1052;
  double t1068;
  double t1069;
  double t1070;
  double t1073;
  double t1074;
  double t1075;
  double t1080;
  double t1081;
  double t1095;
  double t1097;
  double t1098;
  double t1102;
  double t1103;
  double t1104;
  double t1121;
  double t1122;
  double t1134;
  double t1135;
  double t1136;
  double t1139;
  double t1140;
  double t1144;
  double t1145;
  double t1099;
  double t1100;
  double t1101;
  double t1105;
  double t1106;
  double t1107;
  double t1109;
  double t1110;
  double t1111;
  double t1112;
  double t1113;
  double t1114;
  double t903;
  double t904;
  double t905;
  double t1161;
  double t1162;
  double t1163;
  double t1165;
  double t1166;
  double t1177;
  double t1178;
  double t1179;
  double t1181;
  double t1182;
  double t1183;
  double t1192;
  double t1193;
  double t1194;
  double t1196;
  double t1197;
  double t1198;
  double t919;
  double t920;
  double t922;
  double t1207;
  double t1208;
  double t1210;
  double t1211;
  double t1212;
  double t1221;
  double t1222;
  double t1223;
  double t1235;
  double t1236;
  double t1237;
  t770 = Cos(var1[5]);
  t772 = Sin(var1[3]);
  t783 = Sin(var1[4]);
  t769 = Cos(var1[3]);
  t786 = Sin(var1[5]);
  t727 = Cos(var1[6]);
  t771 = -1.*t769*t770;
  t791 = -1.*t772*t783*t786;
  t792 = t771 + t791;
  t798 = -1.*t770*t772*t783;
  t802 = t769*t786;
  t803 = t798 + t802;
  t804 = Sin(var1[6]);
  t820 = Cos(var1[7]);
  t821 = -1.*t820;
  t826 = 1. + t821;
  t830 = Sin(var1[7]);
  t815 = t727*t792;
  t817 = t803*t804;
  t818 = t815 + t817;
  t837 = Cos(var1[4]);
  t852 = Cos(var1[8]);
  t853 = -1.*t852;
  t855 = 1. + t853;
  t857 = Sin(var1[8]);
  t848 = -1.*t837*t820*t772;
  t849 = t818*t830;
  t851 = t848 + t849;
  t866 = t727*t803;
  t868 = -1.*t792*t804;
  t869 = t866 + t868;
  t755 = -1.*t727;
  t759 = 1. + t755;
  t761 = 0.135*t759;
  t767 = 0. + t761;
  t805 = -0.135*t804;
  t806 = 0. + t805;
  t886 = -1.*t770*t772;
  t887 = t769*t783*t786;
  t888 = t886 + t887;
  t890 = t769*t770*t783;
  t891 = t772*t786;
  t892 = t890 + t891;
  t827 = 0.135*t826;
  t831 = 0.049*t830;
  t833 = 0. + t827 + t831;
  t838 = -0.049*t826;
  t839 = 0.135*t830;
  t840 = 0. + t838 + t839;
  t896 = t727*t888;
  t897 = t892*t804;
  t900 = t896 + t897;
  t856 = -0.049*t855;
  t861 = -0.09*t857;
  t862 = 0. + t856 + t861;
  t872 = -0.09*t855;
  t873 = 0.049*t857;
  t874 = 0. + t872 + t873;
  t907 = t769*t837*t820;
  t908 = t900*t830;
  t909 = t907 + t908;
  t911 = t727*t892;
  t912 = -1.*t888*t804;
  t913 = t911 + t912;
  t930 = t769*t837*t727*t786;
  t931 = t769*t837*t770*t804;
  t932 = t930 + t931;
  t939 = -1.*t769*t820*t783;
  t942 = t932*t830;
  t943 = t939 + t942;
  t945 = t769*t837*t770*t727;
  t946 = -1.*t769*t837*t786*t804;
  t947 = t945 + t946;
  t964 = t837*t727*t772*t786;
  t965 = t837*t770*t772*t804;
  t966 = t964 + t965;
  t975 = -1.*t820*t772*t783;
  t976 = t966*t830;
  t979 = t975 + t976;
  t981 = t837*t770*t727*t772;
  t982 = -1.*t837*t772*t786*t804;
  t983 = t981 + t982;
  t999 = -1.*t727*t783*t786;
  t1002 = -1.*t770*t783*t804;
  t1003 = t999 + t1002;
  t1010 = -1.*t837*t820;
  t1011 = t1003*t830;
  t1012 = t1010 + t1011;
  t1014 = -1.*t770*t727*t783;
  t1022 = t783*t786*t804;
  t1024 = t1014 + t1022;
  t1041 = t770*t772;
  t1042 = -1.*t769*t783*t786;
  t1043 = t1041 + t1042;
  t1045 = t1043*t804;
  t1046 = t911 + t1045;
  t1050 = t727*t1043;
  t1051 = -1.*t892*t804;
  t1052 = t1050 + t1051;
  t1068 = t770*t772*t783;
  t1069 = -1.*t769*t786;
  t1070 = t1068 + t1069;
  t1073 = t727*t1070;
  t1074 = t792*t804;
  t1075 = t1073 + t1074;
  t1080 = -1.*t1070*t804;
  t1081 = t815 + t1080;
  t1095 = t837*t770*t727;
  t1097 = -1.*t837*t786*t804;
  t1098 = t1095 + t1097;
  t1102 = -1.*t837*t727*t786;
  t1103 = -1.*t837*t770*t804;
  t1104 = t1102 + t1103;
  t1121 = -1.*t727*t888;
  t1122 = t1121 + t1051;
  t1134 = t769*t770;
  t1135 = t772*t783*t786;
  t1136 = t1134 + t1135;
  t1139 = -1.*t1136*t804;
  t1140 = t1073 + t1139;
  t1144 = -1.*t727*t1136;
  t1145 = t1144 + t1080;
  t1099 = 0.135*t820*t1098;
  t1100 = t1098*t833;
  t1101 = t1098*t830*t862;
  t1105 = t1104*t874;
  t1106 = t852*t1098*t830;
  t1107 = t1104*t857;
  t1109 = t1106 + t1107;
  t1110 = -0.049*t1109;
  t1111 = t852*t1104;
  t1112 = -1.*t1098*t830*t857;
  t1113 = t1111 + t1112;
  t1114 = -0.09*t1113;
  t903 = t820*t900;
  t904 = -1.*t769*t837*t830;
  t905 = t903 + t904;
  t1161 = 0.135*t820;
  t1162 = -0.049*t830;
  t1163 = t1161 + t1162;
  t1165 = 0.049*t820;
  t1166 = t1165 + t839;
  t1177 = t727*t1136;
  t1178 = t1070*t804;
  t1179 = t1177 + t1178;
  t1181 = t820*t1179;
  t1182 = -1.*t837*t772*t830;
  t1183 = t1181 + t1182;
  t1192 = t837*t727*t786;
  t1193 = t837*t770*t804;
  t1194 = t1192 + t1193;
  t1196 = t820*t1194;
  t1197 = t783*t830;
  t1198 = t1196 + t1197;
  t919 = t852*t913;
  t920 = -1.*t909*t857;
  t922 = t919 + t920;
  t1207 = 0.049*t852;
  t1208 = t1207 + t861;
  t1210 = -0.09*t852;
  t1211 = -0.049*t857;
  t1212 = t1210 + t1211;
  t1221 = t837*t820*t772;
  t1222 = t1179*t830;
  t1223 = t1221 + t1222;
  t1235 = -1.*t820*t783;
  t1236 = t1194*t830;
  t1237 = t1235 + t1236;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t767*t792 + t803*t806 + t818*t833 + 0.135*(t818*t820 + t772*t830*t837) - 1.*t772*t837*t840 + t851*t862 - 0.09*(-1.*t851*t857 + t852*t869) - 0.049*(t851*t852 + t857*t869) + t869*t874;
  p_output1[10]=t769*t837*t840 + t767*t888 + t806*t892 + t833*t900 + 0.135*t905 + t862*t909 + t874*t913 - 0.049*(t852*t909 + t857*t913) - 0.09*t922;
  p_output1[11]=0;
  p_output1[12]=t767*t769*t786*t837 + t769*t770*t806*t837 - 1.*t769*t783*t840 + t833*t932 + 0.135*(t769*t783*t830 + t820*t932) + t862*t943 + t874*t947 - 0.09*(-1.*t857*t943 + t852*t947) - 0.049*(t852*t943 + t857*t947);
  p_output1[13]=t767*t772*t786*t837 + t770*t772*t806*t837 - 1.*t772*t783*t840 + t833*t966 + 0.135*(t772*t783*t830 + t820*t966) + t862*t979 + t874*t983 - 0.09*(-1.*t857*t979 + t852*t983) - 0.049*(t852*t979 + t857*t983);
  p_output1[14]=-1.*t767*t783*t786 - 1.*t770*t783*t806 + t1003*t833 + 0.135*(t1003*t820 + t830*t837) - 1.*t837*t840 - 0.09*(t1024*t852 - 1.*t1012*t857) - 0.049*(t1012*t852 + t1024*t857) + t1012*t862 + t1024*t874;
  p_output1[15]=t1043*t806 + 0.135*t1046*t820 + t1046*t833 - 0.049*(t1046*t830*t852 + t1052*t857) - 0.09*(t1052*t852 - 1.*t1046*t830*t857) + t1046*t830*t862 + t1052*t874 + t767*t892;
  p_output1[16]=t1070*t767 + t792*t806 + 0.135*t1075*t820 + t1075*t833 - 0.049*(t1075*t830*t852 + t1081*t857) - 0.09*(t1081*t852 - 1.*t1075*t830*t857) + t1075*t830*t862 + t1081*t874;
  p_output1[17]=t1099 + t1100 + t1101 + t1105 + t1110 + t1114 + t767*t770*t837 - 1.*t786*t806*t837;
  p_output1[18]=t1122*t874 + 0.135*t804*t888 - 0.135*t727*t892 + 0.135*t820*t913 + t833*t913 + t830*t862*t913 - 0.049*(t1122*t857 + t830*t852*t913) - 0.09*(t1122*t852 - 1.*t830*t857*t913);
  p_output1[19]=-0.135*t1070*t727 + 0.135*t1136*t804 + 0.135*t1140*t820 + t1140*t833 - 0.049*(t1140*t830*t852 + t1145*t857) - 0.09*(t1145*t852 - 1.*t1140*t830*t857) + t1140*t830*t862 + t1145*t874;
  p_output1[20]=t1099 + t1100 + t1101 + t1105 + t1110 + t1114 - 0.135*t727*t770*t837 + 0.135*t786*t804*t837;
  p_output1[21]=t1163*t769*t837 + t1166*t900 + 0.135*(-1.*t769*t820*t837 - 1.*t830*t900) - 0.049*t852*t905 + 0.09*t857*t905 + t862*t905;
  p_output1[22]=t1166*t1179 + t1163*t772*t837 + 0.135*(-1.*t1179*t830 + t848) - 0.049*t1183*t852 + 0.09*t1183*t857 + t1183*t862;
  p_output1[23]=t1166*t1194 - 1.*t1163*t783 + 0.135*(t783*t820 - 1.*t1194*t830) - 0.049*t1198*t852 + 0.09*t1198*t857 + t1198*t862;
  p_output1[24]=t1212*t909 + t1208*t913 - 0.09*(-1.*t852*t909 - 1.*t857*t913) - 0.049*t922;
  p_output1[25]=t1140*t1208 + t1212*t1223 - 0.09*(-1.*t1223*t852 - 1.*t1140*t857) - 0.049*(t1140*t852 - 1.*t1223*t857);
  p_output1[26]=t1098*t1208 + t1212*t1237 - 0.09*(-1.*t1237*t852 - 1.*t1098*t857) - 0.049*(t1098*t852 - 1.*t1237*t857);
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
}



void J_hip_flexion_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
