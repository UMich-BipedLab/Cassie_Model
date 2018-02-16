/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:17:35 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "J_MultisenseIMU_to_RightToeBottom_src.h"

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
  double t92;
  double t222;
  double t976;
  double t1434;
  double t1548;
  double t1648;
  double t1777;
  double t2189;
  double t2902;
  double t3000;
  double t3078;
  double t3281;
  double t2624;
  double t2715;
  double t2786;
  double t3583;
  double t3674;
  double t3703;
  double t4569;
  double t4646;
  double t4698;
  double t4892;
  double t4076;
  double t4373;
  double t4431;
  double t4957;
  double t4969;
  double t5034;
  double t5260;
  double t5361;
  double t5376;
  double t5424;
  double t5164;
  double t5177;
  double t5202;
  double t5565;
  double t5602;
  double t5677;
  double t6186;
  double t6199;
  double t6214;
  double t6233;
  double t6072;
  double t6098;
  double t6114;
  double t6547;
  double t6657;
  double t7117;
  double t621;
  double t699;
  double t769;
  double t1066;
  double t1117;
  double t1686;
  double t1801;
  double t1882;
  double t2227;
  double t2430;
  double t2431;
  double t3142;
  double t3355;
  double t3395;
  double t3715;
  double t3728;
  double t3747;
  double t7715;
  double t7719;
  double t7723;
  double t7742;
  double t7743;
  double t7751;
  double t4770;
  double t4903;
  double t4905;
  double t5036;
  double t5079;
  double t5097;
  double t7768;
  double t7769;
  double t7771;
  double t7787;
  double t7793;
  double t7800;
  double t5420;
  double t5452;
  double t5471;
  double t5717;
  double t5752;
  double t5801;
  double t7814;
  double t7820;
  double t7827;
  double t7829;
  double t7835;
  double t7845;
  double t6228;
  double t6343;
  double t6480;
  double t7125;
  double t7392;
  double t7409;
  double t7854;
  double t7858;
  double t7871;
  double t7874;
  double t7875;
  double t7876;
  double t7900;
  double t7903;
  double t7912;
  double t7915;
  double t7916;
  double t7919;
  double t7920;
  double t7921;
  double t7925;
  double t7927;
  double t7930;
  double t7937;
  double t7939;
  double t7940;
  double t7942;
  double t7943;
  double t7944;
  double t7946;
  double t7947;
  double t7948;
  double t7898;
  double t7899;
  double t7905;
  double t7906;
  double t7908;
  double t7909;
  double t7910;
  double t7918;
  double t7924;
  double t7933;
  double t7941;
  double t7945;
  double t7949;
  double t7950;
  double t7951;
  double t7952;
  double t7954;
  double t7959;
  double t7961;
  double t7964;
  double t7965;
  double t7968;
  double t2003;
  double t2604;
  double t3581;
  double t3764;
  double t4918;
  double t5132;
  double t5553;
  double t5974;
  double t6519;
  double t7458;
  double t7487;
  double t7497;
  double t7531;
  double t7532;
  double t7547;
  double t7616;
  double t7625;
  double t7632;
  double t7705;
  double t7711;
  double t7734;
  double t7766;
  double t7779;
  double t7812;
  double t7828;
  double t7853;
  double t7873;
  double t7878;
  double t7879;
  double t7880;
  double t7885;
  double t7886;
  double t7887;
  double t7888;
  double t7889;
  double t7891;
  double t7997;
  double t8000;
  double t8003;
  double t7978;
  double t7993;
  double t7994;
  double t8004;
  double t8005;
  double t8008;
  double t7987;
  double t8010;
  double t8011;
  double t8012;
  double t8018;
  double t8019;
  double t8022;
  double t8031;
  double t8032;
  double t8033;
  double t8035;
  double t8036;
  double t8038;
  double t8045;
  double t8047;
  double t8048;
  double t8058;
  double t8060;
  double t8061;
  double t8064;
  double t8066;
  double t8068;
  double t8074;
  double t8075;
  double t8077;
  double t8084;
  double t8085;
  double t8086;
  double t8088;
  double t8089;
  double t8090;
  double t8097;
  double t8099;
  double t8101;
  double t8108;
  double t8109;
  double t8111;
  double t8113;
  double t8114;
  double t8115;
  double t8119;
  double t8120;
  double t8122;
  t92 = Cos(var1[7]);
  t222 = Cos(var1[8]);
  t976 = Sin(var1[8]);
  t1434 = Cos(var1[9]);
  t1548 = -1.*t1434;
  t1648 = 1. + t1548;
  t1777 = Sin(var1[9]);
  t2189 = Sin(var1[7]);
  t2902 = Cos(var1[10]);
  t3000 = -1.*t2902;
  t3078 = 1. + t3000;
  t3281 = Sin(var1[10]);
  t2624 = t92*t1434*t976;
  t2715 = -1.*t2189*t1777;
  t2786 = t2624 + t2715;
  t3583 = -1.*t1434*t2189;
  t3674 = -1.*t92*t976*t1777;
  t3703 = t3583 + t3674;
  t4569 = Cos(var1[11]);
  t4646 = -1.*t4569;
  t4698 = 1. + t4646;
  t4892 = Sin(var1[11]);
  t4076 = t2902*t2786;
  t4373 = t3703*t3281;
  t4431 = t4076 + t4373;
  t4957 = t2902*t3703;
  t4969 = -1.*t2786*t3281;
  t5034 = t4957 + t4969;
  t5260 = Cos(var1[12]);
  t5361 = -1.*t5260;
  t5376 = 1. + t5361;
  t5424 = Sin(var1[12]);
  t5164 = t4569*t4431;
  t5177 = t5034*t4892;
  t5202 = t5164 + t5177;
  t5565 = t4569*t5034;
  t5602 = -1.*t4431*t4892;
  t5677 = t5565 + t5602;
  t6186 = Cos(var1[13]);
  t6199 = -1.*t6186;
  t6214 = 1. + t6199;
  t6233 = Sin(var1[13]);
  t6072 = t5260*t5202;
  t6098 = t5677*t5424;
  t6114 = t6072 + t6098;
  t6547 = t5260*t5677;
  t6657 = -1.*t5202*t5424;
  t7117 = t6547 + t6657;
  t621 = -1.*t222;
  t699 = 1. + t621;
  t769 = -0.135*t699;
  t1066 = 0.049*t976;
  t1117 = 0. + t769 + t1066;
  t1686 = -0.049*t1648;
  t1801 = -0.09*t1777;
  t1882 = 0. + t1686 + t1801;
  t2227 = -0.09*t1648;
  t2430 = 0.049*t1777;
  t2431 = 0. + t2227 + t2430;
  t3142 = -0.049*t3078;
  t3355 = -0.21*t3281;
  t3395 = 0. + t3142 + t3355;
  t3715 = -0.21*t3078;
  t3728 = 0.049*t3281;
  t3747 = 0. + t3715 + t3728;
  t7715 = t1434*t2189*t976;
  t7719 = t92*t1777;
  t7723 = t7715 + t7719;
  t7742 = t92*t1434;
  t7743 = -1.*t2189*t976*t1777;
  t7751 = t7742 + t7743;
  t4770 = -0.0016*t4698;
  t4903 = -0.2707*t4892;
  t4905 = 0. + t4770 + t4903;
  t5036 = -0.2707*t4698;
  t5079 = 0.0016*t4892;
  t5097 = 0. + t5036 + t5079;
  t7768 = t2902*t7723;
  t7769 = t7751*t3281;
  t7771 = t7768 + t7769;
  t7787 = t2902*t7751;
  t7793 = -1.*t7723*t3281;
  t7800 = t7787 + t7793;
  t5420 = 0.0184*t5376;
  t5452 = -0.7055*t5424;
  t5471 = 0. + t5420 + t5452;
  t5717 = -0.7055*t5376;
  t5752 = -0.0184*t5424;
  t5801 = 0. + t5717 + t5752;
  t7814 = t4569*t7771;
  t7820 = t7800*t4892;
  t7827 = t7814 + t7820;
  t7829 = t4569*t7800;
  t7835 = -1.*t7771*t4892;
  t7845 = t7829 + t7835;
  t6228 = -0.0216*t6214;
  t6343 = -1.1135*t6233;
  t6480 = 0. + t6228 + t6343;
  t7125 = -1.1135*t6214;
  t7392 = 0.0216*t6233;
  t7409 = 0. + t7125 + t7392;
  t7854 = t5260*t7827;
  t7858 = t7845*t5424;
  t7871 = t7854 + t7858;
  t7874 = t5260*t7845;
  t7875 = -1.*t7827*t5424;
  t7876 = t7874 + t7875;
  t7900 = -1.*t2189;
  t7903 = 0. + t7900;
  t7912 = t222*t1434*t2902;
  t7915 = -1.*t222*t1777*t3281;
  t7916 = t7912 + t7915;
  t7919 = -1.*t222*t2902*t1777;
  t7920 = -1.*t222*t1434*t3281;
  t7921 = t7919 + t7920;
  t7925 = t4569*t7916;
  t7927 = t7921*t4892;
  t7930 = t7925 + t7927;
  t7937 = t4569*t7921;
  t7939 = -1.*t7916*t4892;
  t7940 = t7937 + t7939;
  t7942 = t5260*t7930;
  t7943 = t7940*t5424;
  t7944 = t7942 + t7943;
  t7946 = t5260*t7940;
  t7947 = -1.*t7930*t5424;
  t7948 = t7946 + t7947;
  t7898 = -1.*t92;
  t7899 = 0. + t7898;
  t7905 = 0.049*t222;
  t7906 = -0.004500000000000004*t976;
  t7908 = t222*t1882;
  t7909 = t222*t1434*t3395;
  t7910 = -1.*t222*t1777*t3747;
  t7918 = t7916*t4905;
  t7924 = t7921*t5097;
  t7933 = t7930*t5471;
  t7941 = t7940*t5801;
  t7945 = t7944*t6480;
  t7949 = t7948*t7409;
  t7950 = t6186*t7944;
  t7951 = t7948*t6233;
  t7952 = t7950 + t7951;
  t7954 = 0.0306*t7952;
  t7959 = t6186*t7948;
  t7961 = -1.*t7944*t6233;
  t7964 = t7959 + t7961;
  t7965 = -1.1312*t7964;
  t7968 = 0. + t7905 + t7906 + t7908 + t7909 + t7910 + t7918 + t7924 + t7933 + t7941 + t7945 + t7949 + t7954 + t7965;
  t2003 = t92*t976*t1882;
  t2604 = -1.*t2189*t2431;
  t3581 = t2786*t3395;
  t3764 = t3703*t3747;
  t4918 = t4431*t4905;
  t5132 = t5034*t5097;
  t5553 = t5202*t5471;
  t5974 = t5677*t5801;
  t6519 = t6114*t6480;
  t7458 = t7117*t7409;
  t7487 = t6186*t6114;
  t7497 = t7117*t6233;
  t7531 = t7487 + t7497;
  t7532 = 0.0306*t7531;
  t7547 = t6186*t7117;
  t7616 = -1.*t6114*t6233;
  t7625 = t7547 + t7616;
  t7632 = -1.1312*t7625;
  t7705 = -1.*t2189*t976*t1882;
  t7711 = -1.*t92*t2431;
  t7734 = -1.*t7723*t3395;
  t7766 = -1.*t7751*t3747;
  t7779 = -1.*t7771*t4905;
  t7812 = -1.*t7800*t5097;
  t7828 = -1.*t7827*t5471;
  t7853 = -1.*t7845*t5801;
  t7873 = -1.*t7871*t6480;
  t7878 = -1.*t7876*t7409;
  t7879 = t6186*t7871;
  t7880 = t7876*t6233;
  t7885 = t7879 + t7880;
  t7886 = -0.0306*t7885;
  t7887 = t6186*t7876;
  t7888 = -1.*t7871*t6233;
  t7889 = t7887 + t7888;
  t7891 = 1.1312*t7889;
  t7997 = -1.*t92*t222;
  t8000 = 0. + t7997;
  t8003 = 0. + t976;
  t7978 = 0.004500000000000004*t92*t222;
  t7993 = t222*t2189;
  t7994 = 0. + t7993;
  t8004 = 0.049*t222*t1434;
  t8005 = -0.09*t222*t1777;
  t8008 = 0. + t8004 + t7906 + t8005 + t7909 + t7910 + t7918 + t7924 + t7933 + t7941 + t7945 + t7949 + t7954 + t7965;
  t7987 = -0.004500000000000004*t222*t2189;
  t8010 = 0.049*t2786;
  t8011 = 0.09*t3703;
  t8012 = 0. + t7978 + t8010 + t8011 + t3581 + t3764 + t4918 + t5132 + t5553 + t5974 + t6519 + t7458 + t7532 + t7632;
  t8018 = -0.049*t7723;
  t8019 = -0.09*t7751;
  t8022 = 0. + t7987 + t8018 + t8019 + t7734 + t7766 + t7779 + t7812 + t7828 + t7853 + t7873 + t7878 + t7886 + t7891;
  t8031 = 0.21*t7921;
  t8032 = 0.049*t7916;
  t8033 = 0. + t8031 + t8032 + t7918 + t7924 + t7933 + t7941 + t7945 + t7949 + t7954 + t7965;
  t8035 = 0.21*t5034;
  t8036 = 0.049*t4431;
  t8038 = 0. + t8035 + t8036 + t4918 + t5132 + t5553 + t5974 + t6519 + t7458 + t7532 + t7632;
  t8045 = -0.21*t7800;
  t8047 = -0.049*t7771;
  t8048 = 0. + t8045 + t8047 + t7779 + t7812 + t7828 + t7853 + t7873 + t7878 + t7886 + t7891;
  t8058 = 0.0016*t7930;
  t8060 = 0.2707*t7940;
  t8061 = 0. + t8058 + t8060 + t7933 + t7941 + t7945 + t7949 + t7954 + t7965;
  t8064 = 0.0016*t5202;
  t8066 = 0.2707*t5677;
  t8068 = 0. + t8064 + t8066 + t5553 + t5974 + t6519 + t7458 + t7532 + t7632;
  t8074 = -0.0016*t7827;
  t8075 = -0.2707*t7845;
  t8077 = 0. + t8074 + t8075 + t7828 + t7853 + t7873 + t7878 + t7886 + t7891;
  t8084 = 0.7055*t7948;
  t8085 = -0.0184*t7944;
  t8086 = 0. + t8084 + t8085 + t7945 + t7949 + t7954 + t7965;
  t8088 = 0.7055*t7117;
  t8089 = -0.0184*t6114;
  t8090 = 0. + t8088 + t8089 + t6519 + t7458 + t7532 + t7632;
  t8097 = -0.7055*t7876;
  t8099 = 0.0184*t7871;
  t8101 = 0. + t8097 + t8099 + t7873 + t7878 + t7886 + t7891;
  t8108 = 0.052199999999999996*t7952;
  t8109 = -0.01770000000000005*t7964;
  t8111 = 0. + t8108 + t8109;
  t8113 = 0.052199999999999996*t7531;
  t8114 = -0.01770000000000005*t7625;
  t8115 = 0. + t8113 + t8114;
  t8119 = -0.052199999999999996*t7885;
  t8120 = 0.01770000000000005*t7889;
  t8122 = 0. + t8119 + t8120;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
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
  p_output1[42]=0.;
  p_output1[43]=0.;
  p_output1[44]=1.;
  p_output1[45]=0. - 1.*(0. + t2003 + t2604 + t3581 + t3764 + t4918 + t5132 + t5553 + t5974 + t6519 + t7458 + t7532 + t7632 + 0.135*t92 + t1117*t92 - 0.1305*t222*t92);
  p_output1[46]=0. - 0.135*t2189 - 1.*t1117*t2189 + 0.1305*t2189*t222 + t7705 + t7711 + t7734 + t7766 + t7779 + t7812 + t7828 + t7853 + t7873 + t7878 + t7886 + t7891;
  p_output1[47]=0.;
  p_output1[48]=t7899;
  p_output1[49]=t7903;
  p_output1[50]=0.;
  p_output1[51]=0. + t7903*t7968;
  p_output1[52]=0. - 1.*t7899*t7968;
  p_output1[53]=-1.*t7903*(0. + t7705 + t7711 + t7734 + t7766 + t7779 + t7812 + t7828 + t7853 + t7873 + t7878 + t7886 + t7891 + t7987 - 0.09*t92 - 0.049*t2189*t976) + t7899*(0. + t2003 - 0.09*t2189 + t2604 + t3581 + t3764 + t4918 + t5132 + t5553 + t5974 + t6519 + t7458 + t7532 + t7632 + t7978 + 0.049*t92*t976);
  p_output1[54]=t7994;
  p_output1[55]=t8000;
  p_output1[56]=t8003;
  p_output1[57]=t8000*t8008 - 1.*t8003*t8012;
  p_output1[58]=-1.*t7994*t8008 + t8003*t8022;
  p_output1[59]=t7994*t8012 - 1.*t8000*t8022;
  p_output1[60]=t7994;
  p_output1[61]=t8000;
  p_output1[62]=t8003;
  p_output1[63]=t8000*t8033 - 1.*t8003*t8038;
  p_output1[64]=-1.*t7994*t8033 + t8003*t8048;
  p_output1[65]=t7994*t8038 - 1.*t8000*t8048;
  p_output1[66]=t7994;
  p_output1[67]=t8000;
  p_output1[68]=t8003;
  p_output1[69]=t8000*t8061 - 1.*t8003*t8068;
  p_output1[70]=-1.*t7994*t8061 + t8003*t8077;
  p_output1[71]=t7994*t8068 - 1.*t8000*t8077;
  p_output1[72]=t7994;
  p_output1[73]=t8000;
  p_output1[74]=t8003;
  p_output1[75]=t8000*t8086 - 1.*t8003*t8090;
  p_output1[76]=-1.*t7994*t8086 + t8003*t8101;
  p_output1[77]=t7994*t8090 - 1.*t8000*t8101;
  p_output1[78]=t7994;
  p_output1[79]=t8000;
  p_output1[80]=t8003;
  p_output1[81]=t8000*t8111 - 1.*t8003*t8115;
  p_output1[82]=-1.*t7994*t8111 + t8003*t8122;
  p_output1[83]=t7994*t8115 - 1.*t8000*t8122;
}



void J_MultisenseIMU_to_RightToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
