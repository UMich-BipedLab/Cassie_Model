/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:03 GMT-05:00
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
  double t806;
  double t808;
  double t819;
  double t805;
  double t822;
  double t763;
  double t807;
  double t827;
  double t828;
  double t834;
  double t838;
  double t839;
  double t840;
  double t856;
  double t857;
  double t862;
  double t866;
  double t851;
  double t853;
  double t854;
  double t873;
  double t888;
  double t889;
  double t891;
  double t893;
  double t884;
  double t885;
  double t887;
  double t902;
  double t904;
  double t905;
  double t791;
  double t795;
  double t797;
  double t803;
  double t841;
  double t842;
  double t922;
  double t923;
  double t924;
  double t926;
  double t927;
  double t928;
  double t863;
  double t867;
  double t869;
  double t874;
  double t875;
  double t876;
  double t932;
  double t933;
  double t936;
  double t892;
  double t897;
  double t898;
  double t908;
  double t909;
  double t910;
  double t943;
  double t944;
  double t945;
  double t947;
  double t948;
  double t949;
  double t966;
  double t967;
  double t968;
  double t975;
  double t978;
  double t979;
  double t981;
  double t982;
  double t983;
  double t1000;
  double t1001;
  double t1002;
  double t1011;
  double t1012;
  double t1015;
  double t1017;
  double t1018;
  double t1019;
  double t1035;
  double t1038;
  double t1039;
  double t1046;
  double t1047;
  double t1048;
  double t1050;
  double t1058;
  double t1060;
  double t1077;
  double t1078;
  double t1079;
  double t1081;
  double t1082;
  double t1086;
  double t1087;
  double t1088;
  double t1104;
  double t1105;
  double t1106;
  double t1109;
  double t1110;
  double t1111;
  double t1116;
  double t1117;
  double t1131;
  double t1133;
  double t1134;
  double t1138;
  double t1139;
  double t1140;
  double t1157;
  double t1158;
  double t1170;
  double t1171;
  double t1172;
  double t1175;
  double t1176;
  double t1180;
  double t1181;
  double t1135;
  double t1136;
  double t1137;
  double t1141;
  double t1142;
  double t1143;
  double t1145;
  double t1146;
  double t1147;
  double t1148;
  double t1149;
  double t1150;
  double t939;
  double t940;
  double t941;
  double t1197;
  double t1198;
  double t1199;
  double t1201;
  double t1202;
  double t1213;
  double t1214;
  double t1215;
  double t1217;
  double t1218;
  double t1219;
  double t1228;
  double t1229;
  double t1230;
  double t1232;
  double t1233;
  double t1234;
  double t955;
  double t956;
  double t958;
  double t1243;
  double t1244;
  double t1246;
  double t1247;
  double t1248;
  double t1257;
  double t1258;
  double t1259;
  double t1271;
  double t1272;
  double t1273;
  t806 = Cos(var1[5]);
  t808 = Sin(var1[3]);
  t819 = Sin(var1[4]);
  t805 = Cos(var1[3]);
  t822 = Sin(var1[5]);
  t763 = Cos(var1[6]);
  t807 = -1.*t805*t806;
  t827 = -1.*t808*t819*t822;
  t828 = t807 + t827;
  t834 = -1.*t806*t808*t819;
  t838 = t805*t822;
  t839 = t834 + t838;
  t840 = Sin(var1[6]);
  t856 = Cos(var1[7]);
  t857 = -1.*t856;
  t862 = 1. + t857;
  t866 = Sin(var1[7]);
  t851 = t763*t828;
  t853 = t839*t840;
  t854 = t851 + t853;
  t873 = Cos(var1[4]);
  t888 = Cos(var1[8]);
  t889 = -1.*t888;
  t891 = 1. + t889;
  t893 = Sin(var1[8]);
  t884 = -1.*t873*t856*t808;
  t885 = t854*t866;
  t887 = t884 + t885;
  t902 = t763*t839;
  t904 = -1.*t828*t840;
  t905 = t902 + t904;
  t791 = -1.*t763;
  t795 = 1. + t791;
  t797 = 0.135*t795;
  t803 = 0. + t797;
  t841 = -0.135*t840;
  t842 = 0. + t841;
  t922 = -1.*t806*t808;
  t923 = t805*t819*t822;
  t924 = t922 + t923;
  t926 = t805*t806*t819;
  t927 = t808*t822;
  t928 = t926 + t927;
  t863 = 0.135*t862;
  t867 = 0.049*t866;
  t869 = 0. + t863 + t867;
  t874 = -0.049*t862;
  t875 = 0.135*t866;
  t876 = 0. + t874 + t875;
  t932 = t763*t924;
  t933 = t928*t840;
  t936 = t932 + t933;
  t892 = -0.049*t891;
  t897 = -0.09*t893;
  t898 = 0. + t892 + t897;
  t908 = -0.09*t891;
  t909 = 0.049*t893;
  t910 = 0. + t908 + t909;
  t943 = t805*t873*t856;
  t944 = t936*t866;
  t945 = t943 + t944;
  t947 = t763*t928;
  t948 = -1.*t924*t840;
  t949 = t947 + t948;
  t966 = t805*t873*t763*t822;
  t967 = t805*t873*t806*t840;
  t968 = t966 + t967;
  t975 = -1.*t805*t856*t819;
  t978 = t968*t866;
  t979 = t975 + t978;
  t981 = t805*t873*t806*t763;
  t982 = -1.*t805*t873*t822*t840;
  t983 = t981 + t982;
  t1000 = t873*t763*t808*t822;
  t1001 = t873*t806*t808*t840;
  t1002 = t1000 + t1001;
  t1011 = -1.*t856*t808*t819;
  t1012 = t1002*t866;
  t1015 = t1011 + t1012;
  t1017 = t873*t806*t763*t808;
  t1018 = -1.*t873*t808*t822*t840;
  t1019 = t1017 + t1018;
  t1035 = -1.*t763*t819*t822;
  t1038 = -1.*t806*t819*t840;
  t1039 = t1035 + t1038;
  t1046 = -1.*t873*t856;
  t1047 = t1039*t866;
  t1048 = t1046 + t1047;
  t1050 = -1.*t806*t763*t819;
  t1058 = t819*t822*t840;
  t1060 = t1050 + t1058;
  t1077 = t806*t808;
  t1078 = -1.*t805*t819*t822;
  t1079 = t1077 + t1078;
  t1081 = t1079*t840;
  t1082 = t947 + t1081;
  t1086 = t763*t1079;
  t1087 = -1.*t928*t840;
  t1088 = t1086 + t1087;
  t1104 = t806*t808*t819;
  t1105 = -1.*t805*t822;
  t1106 = t1104 + t1105;
  t1109 = t763*t1106;
  t1110 = t828*t840;
  t1111 = t1109 + t1110;
  t1116 = -1.*t1106*t840;
  t1117 = t851 + t1116;
  t1131 = t873*t806*t763;
  t1133 = -1.*t873*t822*t840;
  t1134 = t1131 + t1133;
  t1138 = -1.*t873*t763*t822;
  t1139 = -1.*t873*t806*t840;
  t1140 = t1138 + t1139;
  t1157 = -1.*t763*t924;
  t1158 = t1157 + t1087;
  t1170 = t805*t806;
  t1171 = t808*t819*t822;
  t1172 = t1170 + t1171;
  t1175 = -1.*t1172*t840;
  t1176 = t1109 + t1175;
  t1180 = -1.*t763*t1172;
  t1181 = t1180 + t1116;
  t1135 = 0.135*t856*t1134;
  t1136 = t1134*t869;
  t1137 = t1134*t866*t898;
  t1141 = t1140*t910;
  t1142 = t888*t1134*t866;
  t1143 = t1140*t893;
  t1145 = t1142 + t1143;
  t1146 = -0.049*t1145;
  t1147 = t888*t1140;
  t1148 = -1.*t1134*t866*t893;
  t1149 = t1147 + t1148;
  t1150 = -0.09*t1149;
  t939 = t856*t936;
  t940 = -1.*t805*t873*t866;
  t941 = t939 + t940;
  t1197 = 0.135*t856;
  t1198 = -0.049*t866;
  t1199 = t1197 + t1198;
  t1201 = 0.049*t856;
  t1202 = t1201 + t875;
  t1213 = t763*t1172;
  t1214 = t1106*t840;
  t1215 = t1213 + t1214;
  t1217 = t856*t1215;
  t1218 = -1.*t873*t808*t866;
  t1219 = t1217 + t1218;
  t1228 = t873*t763*t822;
  t1229 = t873*t806*t840;
  t1230 = t1228 + t1229;
  t1232 = t856*t1230;
  t1233 = t819*t866;
  t1234 = t1232 + t1233;
  t955 = t888*t949;
  t956 = -1.*t945*t893;
  t958 = t955 + t956;
  t1243 = 0.049*t888;
  t1244 = t1243 + t897;
  t1246 = -0.09*t888;
  t1247 = -0.049*t893;
  t1248 = t1246 + t1247;
  t1257 = t873*t856*t808;
  t1258 = t1215*t866;
  t1259 = t1257 + t1258;
  t1271 = -1.*t856*t819;
  t1272 = t1230*t866;
  t1273 = t1271 + t1272;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t803*t828 + t839*t842 + t854*t869 + 0.135*(t854*t856 + t808*t866*t873) - 1.*t808*t873*t876 + t887*t898 - 0.09*(-1.*t887*t893 + t888*t905) - 0.049*(t887*t888 + t893*t905) + t905*t910;
  p_output1[10]=t805*t873*t876 + t803*t924 + t842*t928 + t869*t936 + 0.135*t941 + t898*t945 + t910*t949 - 0.049*(t888*t945 + t893*t949) - 0.09*t958;
  p_output1[11]=0;
  p_output1[12]=t803*t805*t822*t873 + t805*t806*t842*t873 - 1.*t805*t819*t876 + t869*t968 + 0.135*(t805*t819*t866 + t856*t968) + t898*t979 + t910*t983 - 0.09*(-1.*t893*t979 + t888*t983) - 0.049*(t888*t979 + t893*t983);
  p_output1[13]=0.135*(t1002*t856 + t808*t819*t866) + t1002*t869 + t803*t808*t822*t873 + t806*t808*t842*t873 - 1.*t808*t819*t876 - 0.09*(t1019*t888 - 1.*t1015*t893) - 0.049*(t1015*t888 + t1019*t893) + t1015*t898 + t1019*t910;
  p_output1[14]=-1.*t803*t819*t822 - 1.*t806*t819*t842 + t1039*t869 + 0.135*(t1039*t856 + t866*t873) - 1.*t873*t876 - 0.09*(t1060*t888 - 1.*t1048*t893) - 0.049*(t1048*t888 + t1060*t893) + t1048*t898 + t1060*t910;
  p_output1[15]=t1079*t842 + 0.135*t1082*t856 + t1082*t869 - 0.049*(t1082*t866*t888 + t1088*t893) - 0.09*(t1088*t888 - 1.*t1082*t866*t893) + t1082*t866*t898 + t1088*t910 + t803*t928;
  p_output1[16]=t1106*t803 + t828*t842 + 0.135*t1111*t856 + t1111*t869 - 0.049*(t1111*t866*t888 + t1117*t893) - 0.09*(t1117*t888 - 1.*t1111*t866*t893) + t1111*t866*t898 + t1117*t910;
  p_output1[17]=t1135 + t1136 + t1137 + t1141 + t1146 + t1150 + t803*t806*t873 - 1.*t822*t842*t873;
  p_output1[18]=t1158*t910 + 0.135*t840*t924 - 0.135*t763*t928 + 0.135*t856*t949 + t869*t949 + t866*t898*t949 - 0.049*(t1158*t893 + t866*t888*t949) - 0.09*(t1158*t888 - 1.*t866*t893*t949);
  p_output1[19]=-0.135*t1106*t763 + 0.135*t1172*t840 + 0.135*t1176*t856 + t1176*t869 - 0.049*(t1176*t866*t888 + t1181*t893) - 0.09*(t1181*t888 - 1.*t1176*t866*t893) + t1176*t866*t898 + t1181*t910;
  p_output1[20]=t1135 + t1136 + t1137 + t1141 + t1146 + t1150 - 0.135*t763*t806*t873 + 0.135*t822*t840*t873;
  p_output1[21]=t1199*t805*t873 + t1202*t936 + 0.135*(-1.*t805*t856*t873 - 1.*t866*t936) - 0.049*t888*t941 + 0.09*t893*t941 + t898*t941;
  p_output1[22]=t1202*t1215 + t1199*t808*t873 + 0.135*(-1.*t1215*t866 + t884) - 0.049*t1219*t888 + 0.09*t1219*t893 + t1219*t898;
  p_output1[23]=t1202*t1230 - 1.*t1199*t819 + 0.135*(t819*t856 - 1.*t1230*t866) - 0.049*t1234*t888 + 0.09*t1234*t893 + t1234*t898;
  p_output1[24]=t1248*t945 + t1244*t949 - 0.09*(-1.*t888*t945 - 1.*t893*t949) - 0.049*t958;
  p_output1[25]=t1176*t1244 + t1248*t1259 - 0.09*(-1.*t1259*t888 - 1.*t1176*t893) - 0.049*(t1176*t888 - 1.*t1259*t893);
  p_output1[26]=t1134*t1244 + t1248*t1273 - 0.09*(-1.*t1273*t888 - 1.*t1134*t893) - 0.049*(t1134*t888 - 1.*t1273*t893);
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
