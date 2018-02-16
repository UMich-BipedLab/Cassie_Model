/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:15:56 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_toe_joint_right_src.h"

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
  double t434;
  double t496;
  double t427;
  double t450;
  double t532;
  double t634;
  double t476;
  double t604;
  double t624;
  double t416;
  double t643;
  double t657;
  double t659;
  double t671;
  double t627;
  double t661;
  double t662;
  double t413;
  double t673;
  double t675;
  double t681;
  double t683;
  double t687;
  double t689;
  double t696;
  double t707;
  double t741;
  double t787;
  double t664;
  double t774;
  double t775;
  double t392;
  double t793;
  double t805;
  double t844;
  double t926;
  double t781;
  double t848;
  double t861;
  double t375;
  double t933;
  double t940;
  double t941;
  double t1033;
  double t902;
  double t967;
  double t990;
  double t354;
  double t1035;
  double t1043;
  double t1044;
  double t234;
  double t1120;
  double t1123;
  double t1124;
  double t1133;
  double t1138;
  double t1163;
  double t1132;
  double t1165;
  double t1210;
  double t1241;
  double t1251;
  double t1254;
  double t1256;
  double t1257;
  double t1259;
  double t1234;
  double t1260;
  double t1261;
  double t1270;
  double t1275;
  double t1277;
  double t1266;
  double t1278;
  double t1281;
  double t1287;
  double t1290;
  double t1293;
  double t1068;
  double t1282;
  double t1297;
  double t1299;
  double t1301;
  double t1302;
  double t1304;
  double t1390;
  double t1435;
  double t1457;
  double t1502;
  double t1513;
  double t1515;
  double t1529;
  double t1559;
  double t1592;
  double t1461;
  double t1594;
  double t1611;
  double t1652;
  double t1673;
  double t1676;
  double t1645;
  double t1678;
  double t1689;
  double t1846;
  double t1861;
  double t1864;
  double t1715;
  double t1880;
  double t1919;
  double t1934;
  double t1983;
  double t1986;
  double t1013;
  double t1047;
  double t1048;
  double t1072;
  double t1076;
  double t1086;
  double t1300;
  double t1306;
  double t1314;
  double t1326;
  double t1371;
  double t1375;
  double t1930;
  double t1987;
  double t1990;
  double t2069;
  double t2071;
  double t2084;
  double t2663;
  double t2667;
  double t2782;
  double t2783;
  double t2826;
  double t2827;
  double t2863;
  double t2864;
  double t2884;
  double t2885;
  double t2910;
  double t2912;
  double t2289;
  double t2293;
  double t2299;
  double t2668;
  double t2674;
  double t2682;
  double t2709;
  double t2717;
  double t2729;
  double t2735;
  double t2742;
  double t2751;
  double t2755;
  double t2758;
  double t2760;
  double t2788;
  double t2791;
  double t2798;
  double t2818;
  double t2819;
  double t2820;
  double t2834;
  double t2835;
  double t2837;
  double t2849;
  double t2855;
  double t2860;
  double t2866;
  double t2867;
  double t2868;
  double t2873;
  double t2874;
  double t2877;
  double t2889;
  double t2894;
  double t2896;
  double t2902;
  double t2903;
  double t2904;
  double t2913;
  double t2916;
  double t2917;
  double t2928;
  double t2931;
  double t2934;
  double t2300;
  double t2303;
  double t2310;
  double t2333;
  double t2348;
  double t2389;
  t434 = Cos(var1[5]);
  t496 = Sin(var1[3]);
  t427 = Cos(var1[3]);
  t450 = Sin(var1[4]);
  t532 = Sin(var1[5]);
  t634 = Sin(var1[13]);
  t476 = t427*t434*t450;
  t604 = t496*t532;
  t624 = t476 + t604;
  t416 = Cos(var1[13]);
  t643 = -1.*t434*t496;
  t657 = t427*t450*t532;
  t659 = t643 + t657;
  t671 = Cos(var1[15]);
  t627 = t416*t624;
  t661 = -1.*t634*t659;
  t662 = t627 + t661;
  t413 = Sin(var1[15]);
  t673 = Cos(var1[14]);
  t675 = Cos(var1[4]);
  t681 = t673*t427*t675;
  t683 = Sin(var1[14]);
  t687 = t634*t624;
  t689 = t416*t659;
  t696 = t687 + t689;
  t707 = t683*t696;
  t741 = t681 + t707;
  t787 = Cos(var1[16]);
  t664 = t413*t662;
  t774 = t671*t741;
  t775 = t664 + t774;
  t392 = Sin(var1[16]);
  t793 = t671*t662;
  t805 = -1.*t413*t741;
  t844 = t793 + t805;
  t926 = Cos(var1[17]);
  t781 = -1.*t392*t775;
  t848 = t787*t844;
  t861 = t781 + t848;
  t375 = Sin(var1[17]);
  t933 = t787*t775;
  t940 = t392*t844;
  t941 = t933 + t940;
  t1033 = Cos(var1[18]);
  t902 = t375*t861;
  t967 = t926*t941;
  t990 = t902 + t967;
  t354 = Sin(var1[18]);
  t1035 = t926*t861;
  t1043 = -1.*t375*t941;
  t1044 = t1035 + t1043;
  t234 = Cos(var1[19]);
  t1120 = t434*t496*t450;
  t1123 = -1.*t427*t532;
  t1124 = t1120 + t1123;
  t1133 = t427*t434;
  t1138 = t496*t450*t532;
  t1163 = t1133 + t1138;
  t1132 = t416*t1124;
  t1165 = -1.*t634*t1163;
  t1210 = t1132 + t1165;
  t1241 = t673*t675*t496;
  t1251 = t634*t1124;
  t1254 = t416*t1163;
  t1256 = t1251 + t1254;
  t1257 = t683*t1256;
  t1259 = t1241 + t1257;
  t1234 = t413*t1210;
  t1260 = t671*t1259;
  t1261 = t1234 + t1260;
  t1270 = t671*t1210;
  t1275 = -1.*t413*t1259;
  t1277 = t1270 + t1275;
  t1266 = -1.*t392*t1261;
  t1278 = t787*t1277;
  t1281 = t1266 + t1278;
  t1287 = t787*t1261;
  t1290 = t392*t1277;
  t1293 = t1287 + t1290;
  t1068 = Sin(var1[19]);
  t1282 = t375*t1281;
  t1297 = t926*t1293;
  t1299 = t1282 + t1297;
  t1301 = t926*t1281;
  t1302 = -1.*t375*t1293;
  t1304 = t1301 + t1302;
  t1390 = t416*t675*t434;
  t1435 = -1.*t675*t634*t532;
  t1457 = t1390 + t1435;
  t1502 = -1.*t673*t450;
  t1513 = t675*t434*t634;
  t1515 = t416*t675*t532;
  t1529 = t1513 + t1515;
  t1559 = t683*t1529;
  t1592 = t1502 + t1559;
  t1461 = t413*t1457;
  t1594 = t671*t1592;
  t1611 = t1461 + t1594;
  t1652 = t671*t1457;
  t1673 = -1.*t413*t1592;
  t1676 = t1652 + t1673;
  t1645 = -1.*t392*t1611;
  t1678 = t787*t1676;
  t1689 = t1645 + t1678;
  t1846 = t787*t1611;
  t1861 = t392*t1676;
  t1864 = t1846 + t1861;
  t1715 = t375*t1689;
  t1880 = t926*t1864;
  t1919 = t1715 + t1880;
  t1934 = t926*t1689;
  t1983 = -1.*t375*t1864;
  t1986 = t1934 + t1983;
  t1013 = -1.*t354*t990;
  t1047 = t1033*t1044;
  t1048 = t1013 + t1047;
  t1072 = t1033*t990;
  t1076 = t354*t1044;
  t1086 = t1072 + t1076;
  t1300 = -1.*t354*t1299;
  t1306 = t1033*t1304;
  t1314 = t1300 + t1306;
  t1326 = t1033*t1299;
  t1371 = t354*t1304;
  t1375 = t1326 + t1371;
  t1930 = -1.*t354*t1919;
  t1987 = t1033*t1986;
  t1990 = t1930 + t1987;
  t2069 = t1033*t1919;
  t2071 = t354*t1986;
  t2084 = t2069 + t2071;
  t2663 = -1.*t673;
  t2667 = 1. + t2663;
  t2782 = -1.*t671;
  t2783 = 1. + t2782;
  t2826 = -1.*t787;
  t2827 = 1. + t2826;
  t2863 = -1.*t926;
  t2864 = 1. + t2863;
  t2884 = -1.*t1033;
  t2885 = 1. + t2884;
  t2910 = -1.*t234;
  t2912 = 1. + t2910;
  t2289 = t1068*t1048;
  t2293 = t234*t1086;
  t2299 = t2289 + t2293;
  t2668 = -0.049*t2667;
  t2674 = -0.135*t683;
  t2682 = 0. + t2668 + t2674;
  t2709 = 0.135*t634;
  t2717 = 0. + t2709;
  t2729 = -1.*t416;
  t2735 = 1. + t2729;
  t2742 = -0.135*t2735;
  t2751 = 0. + t2742;
  t2755 = -0.135*t2667;
  t2758 = 0.049*t683;
  t2760 = 0. + t2755 + t2758;
  t2788 = -0.09*t2783;
  t2791 = 0.049*t413;
  t2798 = 0. + t2788 + t2791;
  t2818 = -0.049*t2783;
  t2819 = -0.09*t413;
  t2820 = 0. + t2818 + t2819;
  t2834 = -0.049*t2827;
  t2835 = -0.21*t392;
  t2837 = 0. + t2834 + t2835;
  t2849 = -0.21*t2827;
  t2855 = 0.049*t392;
  t2860 = 0. + t2849 + t2855;
  t2866 = -0.2707*t2864;
  t2867 = 0.0016*t375;
  t2868 = 0. + t2866 + t2867;
  t2873 = -0.0016*t2864;
  t2874 = -0.2707*t375;
  t2877 = 0. + t2873 + t2874;
  t2889 = 0.0184*t2885;
  t2894 = -0.7055*t354;
  t2896 = 0. + t2889 + t2894;
  t2902 = -0.7055*t2885;
  t2903 = -0.0184*t354;
  t2904 = 0. + t2902 + t2903;
  t2913 = -1.1135*t2912;
  t2916 = 0.0216*t1068;
  t2917 = 0. + t2913 + t2916;
  t2928 = -0.0216*t2912;
  t2931 = -1.1135*t1068;
  t2934 = 0. + t2928 + t2931;
  t2300 = t1068*t1314;
  t2303 = t234*t1375;
  t2310 = t2300 + t2303;
  t2333 = t1068*t1990;
  t2348 = t234*t2084;
  t2389 = t2333 + t2348;
  p_output1[0]=t1068*t1086 - 1.*t1048*t234;
  p_output1[1]=t1068*t1375 - 1.*t1314*t234;
  p_output1[2]=t1068*t2084 - 1.*t1990*t234;
  p_output1[3]=0.;
  p_output1[4]=t2299;
  p_output1[5]=t2310;
  p_output1[6]=t2389;
  p_output1[7]=0.;
  p_output1[8]=t427*t675*t683 - 1.*t673*t696;
  p_output1[9]=-1.*t1256*t673 + t496*t675*t683;
  p_output1[10]=-1.*t1529*t673 - 1.*t450*t683;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.0216*t2299 - 1.1135*(-1.*t1068*t1086 + t1048*t234) + t1044*t2904 + t1048*t2917 + t1086*t2934 + t2717*t624 + t2751*t659 + t2798*t662 + t2682*t427*t675 + t2760*t696 - 0.1305*(-1.*t427*t675*t683 + t673*t696) + t2820*t741 + t2837*t775 + t2860*t844 + t2868*t861 + t2877*t941 + t2896*t990 + var1[0];
  p_output1[13]=0. - 0.0216*t2310 - 1.1135*(-1.*t1068*t1375 + t1314*t234) + t1124*t2717 + t1163*t2751 + t1256*t2760 + t1210*t2798 + t1259*t2820 + t1261*t2837 + t1277*t2860 + t1281*t2868 + t1293*t2877 + t1299*t2896 + t1304*t2904 + t1314*t2917 + t1375*t2934 + t2682*t496*t675 - 0.1305*(t1256*t673 - 1.*t496*t675*t683) + var1[1];
  p_output1[14]=0. - 1.1135*(-1.*t1068*t2084 + t1990*t234) - 0.0216*t2389 + t1529*t2760 + t1457*t2798 + t1592*t2820 + t1611*t2837 + t1676*t2860 + t1689*t2868 + t1864*t2877 + t1919*t2896 + t1986*t2904 + t1990*t2917 + t2084*t2934 - 1.*t2682*t450 + t2717*t434*t675 + t2751*t532*t675 - 0.1305*(t1529*t673 + t450*t683) + var1[2];
  p_output1[15]=1.;
}



void H_toe_joint_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
