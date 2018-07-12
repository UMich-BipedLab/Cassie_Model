/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:37:10 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RightToeBottom_to_LeftToeBottom_src.h"

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
  double t979;
  double t988;
  double t1089;
  double t980;
  double t1215;
  double t878;
  double t1357;
  double t1403;
  double t1438;
  double t1057;
  double t1238;
  double t1271;
  double t1441;
  double t657;
  double t1561;
  double t1566;
  double t1607;
  double t1281;
  double t1462;
  double t1496;
  double t1644;
  double t643;
  double t1776;
  double t1861;
  double t1963;
  double t1535;
  double t1727;
  double t1729;
  double t2027;
  double t2292;
  double t2189;
  double t2227;
  double t2513;
  double t2547;
  double t2560;
  double t2253;
  double t2360;
  double t2361;
  double t2634;
  double t2659;
  double t2690;
  double t2471;
  double t2563;
  double t2583;
  double t2706;
  double t2707;
  double t2719;
  double t2587;
  double t2698;
  double t2700;
  double t2783;
  double t2810;
  double t2828;
  double t2703;
  double t2724;
  double t2736;
  double t1760;
  double t2028;
  double t2095;
  double t2121;
  double t2125;
  double t2126;
  double t2748;
  double t2834;
  double t2862;
  double t2897;
  double t2902;
  double t3004;
  double t3168;
  double t3179;
  double t3208;
  double t3061;
  double t3072;
  double t3087;
  double t3488;
  double t3524;
  double t3628;
  double t3372;
  double t3398;
  double t3431;
  double t3742;
  double t3802;
  double t3876;
  double t3435;
  double t3652;
  double t3661;
  double t3978;
  double t4110;
  double t4220;
  double t3702;
  double t3884;
  double t3888;
  double t4310;
  double t4365;
  double t4380;
  double t3976;
  double t4257;
  double t4267;
  double t2896;
  double t3029;
  double t3048;
  double t2107;
  double t2133;
  double t2150;
  double t4301;
  double t4388;
  double t4496;
  double t4525;
  double t4569;
  double t4585;
  double t4497;
  double t4679;
  double t4699;
  double t4930;
  double t4936;
  double t4966;
  double t593;
  double t5201;
  double t5226;
  double t3271;
  double t4738;
  double t4744;
  double t4819;
  double t4922;
  double t5065;
  double t5106;
  double t5123;
  double t5243;
  double t5280;
  double t5288;
  double t5311;
  double t177;
  double t5412;
  double t5570;
  double t5470;
  double t5544;
  double t5559;
  double t7259;
  double t7102;
  double t7126;
  double t7276;
  double t7338;
  double t7257;
  double t7279;
  double t7300;
  double t6969;
  double t7349;
  double t7352;
  double t7356;
  double t7492;
  double t7334;
  double t7372;
  double t7389;
  double t6842;
  double t7524;
  double t7526;
  double t7528;
  double t7686;
  double t7469;
  double t7533;
  double t7588;
  double t6836;
  double t7713;
  double t7717;
  double t7721;
  double t3056;
  double t3250;
  double t3253;
  double t7780;
  double t7799;
  double t7804;
  double t7810;
  double t7818;
  double t7824;
  double t7809;
  double t7826;
  double t7835;
  double t7857;
  double t7860;
  double t7862;
  double t7854;
  double t7867;
  double t7869;
  double t7909;
  double t7914;
  double t7921;
  double t7886;
  double t7922;
  double t7923;
  double t7932;
  double t7939;
  double t7941;
  double t5325;
  double t7972;
  double t7973;
  double t7977;
  double t7985;
  double t7986;
  double t7987;
  double t7981;
  double t7989;
  double t7991;
  double t8000;
  double t8005;
  double t8006;
  double t7998;
  double t8009;
  double t8010;
  double t8015;
  double t8017;
  double t8023;
  double t8014;
  double t8024;
  double t8027;
  double t8032;
  double t8035;
  double t8037;
  double t6028;
  double t6029;
  double t6132;
  double t7622;
  double t7726;
  double t7746;
  double t7759;
  double t7765;
  double t7769;
  double t7770;
  double t7775;
  double t7776;
  double t5600;
  double t5621;
  double t5633;
  double t7924;
  double t7948;
  double t7949;
  double t7952;
  double t7954;
  double t7955;
  double t7956;
  double t7965;
  double t7969;
  double t5756;
  double t5768;
  double t5911;
  double t8030;
  double t8049;
  double t8050;
  double t8055;
  double t8056;
  double t8063;
  double t8071;
  double t8074;
  double t8082;
  double t6400;
  double t6416;
  double t6514;
  double t6214;
  double t6258;
  double t6261;
  double t6307;
  double t8120;
  double t8121;
  double t8131;
  double t8134;
  double t8135;
  double t8136;
  double t8144;
  double t8147;
  double t8148;
  t979 = Cos(var1[8]);
  t988 = Cos(var1[10]);
  t1089 = Sin(var1[9]);
  t980 = Cos(var1[9]);
  t1215 = Sin(var1[10]);
  t878 = Cos(var1[11]);
  t1357 = -1.*t979*t988*t1089;
  t1403 = -1.*t979*t980*t1215;
  t1438 = t1357 + t1403;
  t1057 = t979*t980*t988;
  t1238 = -1.*t979*t1089*t1215;
  t1271 = t1057 + t1238;
  t1441 = Sin(var1[11]);
  t657 = Cos(var1[12]);
  t1561 = t878*t1438;
  t1566 = -1.*t1271*t1441;
  t1607 = t1561 + t1566;
  t1281 = t878*t1271;
  t1462 = t1438*t1441;
  t1496 = t1281 + t1462;
  t1644 = Sin(var1[12]);
  t643 = Cos(var1[13]);
  t1776 = t657*t1607;
  t1861 = -1.*t1496*t1644;
  t1963 = t1776 + t1861;
  t1535 = t657*t1496;
  t1727 = t1607*t1644;
  t1729 = t1535 + t1727;
  t2027 = Sin(var1[13]);
  t2292 = Cos(var1[7]);
  t2189 = Sin(var1[7]);
  t2227 = Sin(var1[8]);
  t2513 = t2292*t980;
  t2547 = -1.*t2189*t2227*t1089;
  t2560 = t2513 + t2547;
  t2253 = t980*t2189*t2227;
  t2360 = t2292*t1089;
  t2361 = t2253 + t2360;
  t2634 = t988*t2560;
  t2659 = -1.*t2361*t1215;
  t2690 = t2634 + t2659;
  t2471 = t988*t2361;
  t2563 = t2560*t1215;
  t2583 = t2471 + t2563;
  t2706 = t878*t2690;
  t2707 = -1.*t2583*t1441;
  t2719 = t2706 + t2707;
  t2587 = t878*t2583;
  t2698 = t2690*t1441;
  t2700 = t2587 + t2698;
  t2783 = t657*t2719;
  t2810 = -1.*t2700*t1644;
  t2828 = t2783 + t2810;
  t2703 = t657*t2700;
  t2724 = t2719*t1644;
  t2736 = t2703 + t2724;
  t1760 = t643*t1729;
  t2028 = t1963*t2027;
  t2095 = t1760 + t2028;
  t2121 = t643*t1963;
  t2125 = -1.*t1729*t2027;
  t2126 = t2121 + t2125;
  t2748 = t643*t2736;
  t2834 = t2828*t2027;
  t2862 = t2748 + t2834;
  t2897 = t643*t2828;
  t2902 = -1.*t2736*t2027;
  t3004 = t2897 + t2902;
  t3168 = 0.642788*t2862;
  t3179 = 0.766044*t3004;
  t3208 = t3168 + t3179;
  t3061 = -0.766044*t2095;
  t3072 = 0.642788*t2126;
  t3087 = t3061 + t3072;
  t3488 = -1.*t980*t2189;
  t3524 = -1.*t2292*t2227*t1089;
  t3628 = t3488 + t3524;
  t3372 = t2292*t980*t2227;
  t3398 = -1.*t2189*t1089;
  t3431 = t3372 + t3398;
  t3742 = t988*t3628;
  t3802 = -1.*t3431*t1215;
  t3876 = t3742 + t3802;
  t3435 = t988*t3431;
  t3652 = t3628*t1215;
  t3661 = t3435 + t3652;
  t3978 = t878*t3876;
  t4110 = -1.*t3661*t1441;
  t4220 = t3978 + t4110;
  t3702 = t878*t3661;
  t3884 = t3876*t1441;
  t3888 = t3702 + t3884;
  t4310 = t657*t4220;
  t4365 = -1.*t3888*t1644;
  t4380 = t4310 + t4365;
  t3976 = t657*t3888;
  t4257 = t4220*t1644;
  t4267 = t3976 + t4257;
  t2896 = -0.766044*t2862;
  t3029 = 0.642788*t3004;
  t3048 = t2896 + t3029;
  t2107 = 0.642788*t2095;
  t2133 = 0.766044*t2126;
  t2150 = t2107 + t2133;
  t4301 = t643*t4267;
  t4388 = t4380*t2027;
  t4496 = t4301 + t4388;
  t4525 = t643*t4380;
  t4569 = -1.*t4267*t2027;
  t4585 = t4525 + t4569;
  t4497 = -0.766044*t4496;
  t4679 = 0.642788*t4585;
  t4699 = t4497 + t4679;
  t4930 = 0.642788*t4496;
  t4936 = 0.766044*t4585;
  t4966 = t4930 + t4936;
  t593 = Cos(var1[1]);
  t5201 = t2150*t4699;
  t5226 = -1.*t3087*t4966;
  t3271 = t2292*t979*t3087;
  t4738 = t2227*t4699;
  t4744 = t3271 + t4738;
  t4819 = -1.*t3208*t4744;
  t4922 = t2292*t979*t2150;
  t5065 = t2227*t4966;
  t5106 = t4922 + t5065;
  t5123 = t3048*t5106;
  t5243 = t5201 + t5226;
  t5280 = -1.*t979*t2189*t5243;
  t5288 = 0. + t4819 + t5123 + t5280;
  t5311 = 1/t5288;
  t177 = Cos(var1[0]);
  t5412 = Sin(var1[0]);
  t5570 = Sin(var1[1]);
  t5470 = t4966*t3048;
  t5544 = -1.*t4699*t3208;
  t5559 = 0. + t5470 + t5544;
  t7259 = Cos(var1[3]);
  t7102 = Cos(var1[2]);
  t7126 = Sin(var1[3]);
  t7276 = Sin(var1[2]);
  t7338 = Cos(var1[4]);
  t7257 = -1.*t593*t7102*t7126;
  t7279 = -1.*t7259*t593*t7276;
  t7300 = t7257 + t7279;
  t6969 = Sin(var1[4]);
  t7349 = t7259*t593*t7102;
  t7352 = -1.*t593*t7126*t7276;
  t7356 = t7349 + t7352;
  t7492 = Cos(var1[5]);
  t7334 = t6969*t7300;
  t7372 = t7338*t7356;
  t7389 = t7334 + t7372;
  t6842 = Sin(var1[5]);
  t7524 = t7338*t7300;
  t7526 = -1.*t6969*t7356;
  t7528 = t7524 + t7526;
  t7686 = Cos(var1[6]);
  t7469 = -1.*t6842*t7389;
  t7533 = t7492*t7528;
  t7588 = t7469 + t7533;
  t6836 = Sin(var1[6]);
  t7713 = t7492*t7389;
  t7717 = t6842*t7528;
  t7721 = t7713 + t7717;
  t3056 = -1.*t2150*t3048;
  t3250 = t3087*t3208;
  t3253 = 0. + t3056 + t3250;
  t7780 = t177*t7102*t5570;
  t7799 = -1.*t5412*t7276;
  t7804 = t7780 + t7799;
  t7810 = -1.*t7102*t5412;
  t7818 = -1.*t177*t5570*t7276;
  t7824 = t7810 + t7818;
  t7809 = -1.*t7126*t7804;
  t7826 = t7259*t7824;
  t7835 = t7809 + t7826;
  t7857 = t7259*t7804;
  t7860 = t7126*t7824;
  t7862 = t7857 + t7860;
  t7854 = t6969*t7835;
  t7867 = t7338*t7862;
  t7869 = t7854 + t7867;
  t7909 = t7338*t7835;
  t7914 = -1.*t6969*t7862;
  t7921 = t7909 + t7914;
  t7886 = -1.*t6842*t7869;
  t7922 = t7492*t7921;
  t7923 = t7886 + t7922;
  t7932 = t7492*t7869;
  t7939 = t6842*t7921;
  t7941 = t7932 + t7939;
  t5325 = 0. + t5201 + t5226;
  t7972 = t7102*t5412*t5570;
  t7973 = t177*t7276;
  t7977 = t7972 + t7973;
  t7985 = t177*t7102;
  t7986 = -1.*t5412*t5570*t7276;
  t7987 = t7985 + t7986;
  t7981 = -1.*t7126*t7977;
  t7989 = t7259*t7987;
  t7991 = t7981 + t7989;
  t8000 = t7259*t7977;
  t8005 = t7126*t7987;
  t8006 = t8000 + t8005;
  t7998 = t6969*t7991;
  t8009 = t7338*t8006;
  t8010 = t7998 + t8009;
  t8015 = t7338*t7991;
  t8017 = -1.*t6969*t8006;
  t8023 = t8015 + t8017;
  t8014 = -1.*t6842*t8010;
  t8024 = t7492*t8023;
  t8027 = t8014 + t8024;
  t8032 = t7492*t8010;
  t8035 = t6842*t8023;
  t8037 = t8032 + t8035;
  t6028 = -1.*t979*t2189*t4699;
  t6029 = t2292*t979*t3048;
  t6132 = 0. + t6028 + t6029;
  t7622 = t6836*t7588;
  t7726 = t7686*t7721;
  t7746 = t7622 + t7726;
  t7759 = 0.642788*t7746;
  t7765 = t7686*t7588;
  t7769 = -1.*t6836*t7721;
  t7770 = t7765 + t7769;
  t7775 = 0.766044*t7770;
  t7776 = t7759 + t7775;
  t5600 = t979*t2189*t3087;
  t5621 = t2227*t3048;
  t5633 = 0. + t5600 + t5621;
  t7924 = t6836*t7923;
  t7948 = t7686*t7941;
  t7949 = t7924 + t7948;
  t7952 = 0.642788*t7949;
  t7954 = t7686*t7923;
  t7955 = -1.*t6836*t7941;
  t7956 = t7954 + t7955;
  t7965 = 0.766044*t7956;
  t7969 = t7952 + t7965;
  t5756 = -1.*t2292*t979*t3087;
  t5768 = -1.*t2227*t4699;
  t5911 = 0. + t5756 + t5768;
  t8030 = t6836*t8027;
  t8049 = t7686*t8037;
  t8050 = t8030 + t8049;
  t8055 = 0.642788*t8050;
  t8056 = t7686*t8027;
  t8063 = -1.*t6836*t8037;
  t8071 = t8056 + t8063;
  t8074 = 0.766044*t8071;
  t8082 = t8055 + t8074;
  t6400 = t979*t2189*t4966;
  t6416 = -1.*t2292*t979*t3208;
  t6514 = 0. + t6400 + t6416;
  t6214 = -1.*t979*t2189*t2150;
  t6258 = -1.*t2227*t3208;
  t6261 = 0. + t6214 + t6258;
  t6307 = 0. + t4922 + t5065;
  t8120 = -0.766044*t7746;
  t8121 = 0.642788*t7770;
  t8131 = t8120 + t8121;
  t8134 = -0.766044*t7949;
  t8135 = 0.642788*t7956;
  t8136 = t8134 + t8135;
  t8144 = -0.766044*t8050;
  t8147 = 0.642788*t8071;
  t8148 = t8144 + t8147;
  p_output1[0]=0. + t5311*t5559*t5570 - 1.*t177*t3253*t5311*t593 - 1.*t5311*t5325*t5412*t593;
  p_output1[1]=0. - 1.*t177*t5311*t5633*t593 - 1.*t5311*t5412*t5911*t593 + t5311*t5570*t6132;
  p_output1[2]=0. - 1.*t177*t5311*t593*t6261 - 1.*t5311*t5412*t593*t6307 + t5311*t5570*t6514;
  p_output1[3]=0. + t5311*t5559*t7776 + t3253*t5311*t7969 + t5311*t5325*t8082;
  p_output1[4]=0. + t5311*t6132*t7776 + t5311*t5633*t7969 + t5311*t5911*t8082;
  p_output1[5]=0. + t5311*t6514*t7776 + t5311*t6261*t7969 + t5311*t6307*t8082;
  p_output1[6]=0. + t5311*t5559*t8131 + t3253*t5311*t8136 + t5311*t5325*t8148;
  p_output1[7]=0. + t5311*t6132*t8131 + t5311*t5633*t8136 + t5311*t5911*t8148;
  p_output1[8]=0. + t5311*t6514*t8131 + t5311*t6261*t8136 + t5311*t6307*t8148;
}



void R_RightToeBottom_to_LeftToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
