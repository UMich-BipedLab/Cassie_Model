/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:33:02 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_LeftToeBottom_src.h"

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
  double t462;
  double t70;
  double t475;
  double t72;
  double t490;
  double t65;
  double t67;
  double t537;
  double t555;
  double t557;
  double t434;
  double t503;
  double t508;
  double t519;
  double t523;
  double t525;
  double t536;
  double t538;
  double t544;
  double t1115;
  double t1207;
  double t1210;
  double t1211;
  double t1167;
  double t1183;
  double t1193;
  double t1213;
  double t1233;
  double t1206;
  double t1214;
  double t1226;
  double t1099;
  double t1235;
  double t1237;
  double t1238;
  double t1248;
  double t1228;
  double t1239;
  double t1241;
  double t1086;
  double t1249;
  double t1252;
  double t1254;
  double t1263;
  double t1242;
  double t1255;
  double t1256;
  double t1050;
  double t1264;
  double t1268;
  double t1274;
  double t1280;
  double t1260;
  double t1276;
  double t1278;
  double t1033;
  double t1281;
  double t1282;
  double t1285;
  double t579;
  double t584;
  double t587;
  double t592;
  double t601;
  double t603;
  double t615;
  double t617;
  double t634;
  double t1655;
  double t1679;
  double t1687;
  double t1480;
  double t1488;
  double t1536;
  double t1543;
  double t1688;
  double t1690;
  double t1753;
  double t1773;
  double t1774;
  double t1733;
  double t1775;
  double t1779;
  double t1787;
  double t1791;
  double t1795;
  double t1783;
  double t1847;
  double t1877;
  double t1886;
  double t1890;
  double t1899;
  double t1883;
  double t1904;
  double t1906;
  double t1948;
  double t1950;
  double t1978;
  double t737;
  double t843;
  double t853;
  double t2251;
  double t2262;
  double t2287;
  double t2147;
  double t2148;
  double t2149;
  double t2226;
  double t2296;
  double t2318;
  double t2339;
  double t2358;
  double t2375;
  double t2336;
  double t2381;
  double t2382;
  double t2388;
  double t2400;
  double t2401;
  double t2384;
  double t2407;
  double t2411;
  double t2495;
  double t2502;
  double t2541;
  double t2418;
  double t2545;
  double t2562;
  double t2610;
  double t2648;
  double t2668;
  double t1279;
  double t1368;
  double t1372;
  double t1389;
  double t1411;
  double t1417;
  double t1939;
  double t2009;
  double t2066;
  double t2102;
  double t2110;
  double t2113;
  double t2601;
  double t2671;
  double t2678;
  double t2683;
  double t2687;
  double t2688;
  double t2818;
  double t2819;
  double t2861;
  double t2862;
  double t2896;
  double t2901;
  double t2954;
  double t2955;
  double t2977;
  double t2978;
  double t3003;
  double t3006;
  double t2771;
  double t2778;
  double t2787;
  double t2791;
  double t2796;
  double t2810;
  double t2834;
  double t2835;
  double t2838;
  double t2842;
  double t2843;
  double t2844;
  double t2863;
  double t2870;
  double t2871;
  double t2879;
  double t2885;
  double t2890;
  double t2913;
  double t2932;
  double t2938;
  double t2948;
  double t2949;
  double t2952;
  double t2956;
  double t2962;
  double t2963;
  double t2968;
  double t2972;
  double t2973;
  double t2979;
  double t2983;
  double t2985;
  double t2994;
  double t2995;
  double t3000;
  double t3009;
  double t3011;
  double t3016;
  double t3028;
  double t3029;
  double t3030;
  t462 = Cos(var1[3]);
  t70 = Cos(var1[5]);
  t475 = Sin(var1[4]);
  t72 = Sin(var1[3]);
  t490 = Sin(var1[5]);
  t65 = Cos(var1[7]);
  t67 = Cos(var1[6]);
  t537 = Sin(var1[6]);
  t555 = Cos(var1[4]);
  t557 = Sin(var1[7]);
  t434 = -1.*t70*t72;
  t503 = t462*t475*t490;
  t508 = t434 + t503;
  t519 = t67*t508;
  t523 = t462*t70*t475;
  t525 = t72*t490;
  t536 = t523 + t525;
  t538 = t536*t537;
  t544 = t519 + t538;
  t1115 = Cos(var1[8]);
  t1207 = t67*t536;
  t1210 = -1.*t508*t537;
  t1211 = t1207 + t1210;
  t1167 = t462*t555*t65;
  t1183 = t544*t557;
  t1193 = t1167 + t1183;
  t1213 = Sin(var1[8]);
  t1233 = Cos(var1[9]);
  t1206 = t1115*t1193;
  t1214 = t1211*t1213;
  t1226 = t1206 + t1214;
  t1099 = Sin(var1[9]);
  t1235 = t1115*t1211;
  t1237 = -1.*t1193*t1213;
  t1238 = t1235 + t1237;
  t1248 = Cos(var1[10]);
  t1228 = -1.*t1099*t1226;
  t1239 = t1233*t1238;
  t1241 = t1228 + t1239;
  t1086 = Sin(var1[10]);
  t1249 = t1233*t1226;
  t1252 = t1099*t1238;
  t1254 = t1249 + t1252;
  t1263 = Cos(var1[11]);
  t1242 = t1086*t1241;
  t1255 = t1248*t1254;
  t1256 = t1242 + t1255;
  t1050 = Sin(var1[11]);
  t1264 = t1248*t1241;
  t1268 = -1.*t1086*t1254;
  t1274 = t1264 + t1268;
  t1280 = Cos(var1[12]);
  t1260 = -1.*t1050*t1256;
  t1276 = t1263*t1274;
  t1278 = t1260 + t1276;
  t1033 = Sin(var1[12]);
  t1281 = t1263*t1256;
  t1282 = t1050*t1274;
  t1285 = t1281 + t1282;
  t579 = t462*t70;
  t584 = t72*t475*t490;
  t587 = t579 + t584;
  t592 = t67*t587;
  t601 = t70*t72*t475;
  t603 = -1.*t462*t490;
  t615 = t601 + t603;
  t617 = t615*t537;
  t634 = t592 + t617;
  t1655 = t67*t615;
  t1679 = -1.*t587*t537;
  t1687 = t1655 + t1679;
  t1480 = t555*t65*t72;
  t1488 = t634*t557;
  t1536 = t1480 + t1488;
  t1543 = t1115*t1536;
  t1688 = t1687*t1213;
  t1690 = t1543 + t1688;
  t1753 = t1115*t1687;
  t1773 = -1.*t1536*t1213;
  t1774 = t1753 + t1773;
  t1733 = -1.*t1099*t1690;
  t1775 = t1233*t1774;
  t1779 = t1733 + t1775;
  t1787 = t1233*t1690;
  t1791 = t1099*t1774;
  t1795 = t1787 + t1791;
  t1783 = t1086*t1779;
  t1847 = t1248*t1795;
  t1877 = t1783 + t1847;
  t1886 = t1248*t1779;
  t1890 = -1.*t1086*t1795;
  t1899 = t1886 + t1890;
  t1883 = -1.*t1050*t1877;
  t1904 = t1263*t1899;
  t1906 = t1883 + t1904;
  t1948 = t1263*t1877;
  t1950 = t1050*t1899;
  t1978 = t1948 + t1950;
  t737 = t555*t67*t490;
  t843 = t555*t70*t537;
  t853 = t737 + t843;
  t2251 = t555*t70*t67;
  t2262 = -1.*t555*t490*t537;
  t2287 = t2251 + t2262;
  t2147 = -1.*t65*t475;
  t2148 = t853*t557;
  t2149 = t2147 + t2148;
  t2226 = t1115*t2149;
  t2296 = t2287*t1213;
  t2318 = t2226 + t2296;
  t2339 = t1115*t2287;
  t2358 = -1.*t2149*t1213;
  t2375 = t2339 + t2358;
  t2336 = -1.*t1099*t2318;
  t2381 = t1233*t2375;
  t2382 = t2336 + t2381;
  t2388 = t1233*t2318;
  t2400 = t1099*t2375;
  t2401 = t2388 + t2400;
  t2384 = t1086*t2382;
  t2407 = t1248*t2401;
  t2411 = t2384 + t2407;
  t2495 = t1248*t2382;
  t2502 = -1.*t1086*t2401;
  t2541 = t2495 + t2502;
  t2418 = -1.*t1050*t2411;
  t2545 = t1263*t2541;
  t2562 = t2418 + t2545;
  t2610 = t1263*t2411;
  t2648 = t1050*t2541;
  t2668 = t2610 + t2648;
  t1279 = t1033*t1278;
  t1368 = t1280*t1285;
  t1372 = t1279 + t1368;
  t1389 = t1280*t1278;
  t1411 = -1.*t1033*t1285;
  t1417 = t1389 + t1411;
  t1939 = t1033*t1906;
  t2009 = t1280*t1978;
  t2066 = t1939 + t2009;
  t2102 = t1280*t1906;
  t2110 = -1.*t1033*t1978;
  t2113 = t2102 + t2110;
  t2601 = t1033*t2562;
  t2671 = t1280*t2668;
  t2678 = t2601 + t2671;
  t2683 = t1280*t2562;
  t2687 = -1.*t1033*t2668;
  t2688 = t2683 + t2687;
  t2818 = -1.*t65;
  t2819 = 1. + t2818;
  t2861 = -1.*t1115;
  t2862 = 1. + t2861;
  t2896 = -1.*t1233;
  t2901 = 1. + t2896;
  t2954 = -1.*t1248;
  t2955 = 1. + t2954;
  t2977 = -1.*t1263;
  t2978 = 1. + t2977;
  t3003 = -1.*t1280;
  t3006 = 1. + t3003;
  t2771 = -1.*t67;
  t2778 = 1. + t2771;
  t2787 = 0.135*t2778;
  t2791 = 0. + t2787;
  t2796 = -0.135*t537;
  t2810 = 0. + t2796;
  t2834 = 0.135*t2819;
  t2835 = 0.049*t557;
  t2838 = 0. + t2834 + t2835;
  t2842 = -0.049*t2819;
  t2843 = 0.135*t557;
  t2844 = 0. + t2842 + t2843;
  t2863 = -0.049*t2862;
  t2870 = -0.09*t1213;
  t2871 = 0. + t2863 + t2870;
  t2879 = -0.09*t2862;
  t2885 = 0.049*t1213;
  t2890 = 0. + t2879 + t2885;
  t2913 = -0.049*t2901;
  t2932 = -0.21*t1099;
  t2938 = 0. + t2913 + t2932;
  t2948 = -0.21*t2901;
  t2949 = 0.049*t1099;
  t2952 = 0. + t2948 + t2949;
  t2956 = -0.2707*t2955;
  t2962 = 0.0016*t1086;
  t2963 = 0. + t2956 + t2962;
  t2968 = -0.0016*t2955;
  t2972 = -0.2707*t1086;
  t2973 = 0. + t2968 + t2972;
  t2979 = 0.0184*t2978;
  t2983 = -0.7055*t1050;
  t2985 = 0. + t2979 + t2983;
  t2994 = -0.7055*t2978;
  t2995 = -0.0184*t1050;
  t3000 = 0. + t2994 + t2995;
  t3009 = -1.1135*t3006;
  t3011 = 0.0216*t1033;
  t3016 = 0. + t3009 + t3011;
  t3028 = -0.0216*t3006;
  t3029 = -1.1135*t1033;
  t3030 = 0. + t3028 + t3029;
  p_output1[0]=t462*t555*t557 - 1.*t544*t65;
  p_output1[1]=-1.*t634*t65 + t555*t557*t72;
  p_output1[2]=-1.*t475*t557 - 1.*t65*t853;
  p_output1[3]=0.;
  p_output1[4]=0.642788*t1372 + 0.766044*t1417;
  p_output1[5]=0.642788*t2066 + 0.766044*t2113;
  p_output1[6]=0.642788*t2678 + 0.766044*t2688;
  p_output1[7]=0.;
  p_output1[8]=-0.766044*t1372 + 0.642788*t1417;
  p_output1[9]=-0.766044*t2066 + 0.642788*t2113;
  p_output1[10]=-0.766044*t2678 + 0.642788*t2688;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.0306*t1372 - 1.1312*t1417 + t1193*t2871 + t1211*t2890 + t1226*t2938 + t1238*t2952 + t1241*t2963 + t1254*t2973 + t1256*t2985 + t1274*t3000 + t1278*t3016 + t1285*t3030 + t2791*t508 + t2810*t536 + t2838*t544 + t2844*t462*t555 + 0.1305*(-1.*t462*t555*t557 + t544*t65) + var1[0];
  p_output1[13]=0. + 0.0306*t2066 - 1.1312*t2113 + t1536*t2871 + t1687*t2890 + t1690*t2938 + t1774*t2952 + t1779*t2963 + t1795*t2973 + t1877*t2985 + t1899*t3000 + t1906*t3016 + t1978*t3030 + t2791*t587 + t2810*t615 + t2838*t634 + t2844*t555*t72 + 0.1305*(t634*t65 - 1.*t555*t557*t72) + var1[1];
  p_output1[14]=0. + 0.0306*t2678 - 1.1312*t2688 + t2149*t2871 + t2287*t2890 + t2318*t2938 + t2375*t2952 + t2382*t2963 + t2401*t2973 + t2411*t2985 + t2541*t3000 + t2562*t3016 + t2668*t3030 - 1.*t2844*t475 + t2791*t490*t555 + t2810*t555*t70 + t2838*t853 + 0.1305*(t475*t557 + t65*t853) + var1[2];
  p_output1[15]=1.;
}



void H_LeftToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
