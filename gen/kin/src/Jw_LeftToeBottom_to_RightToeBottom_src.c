/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:18:04 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jw_LeftToeBottom_to_RightToeBottom_src.h"

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
  double t584;
  double t756;
  double t649;
  double t697;
  double t763;
  double t866;
  double t714;
  double t780;
  double t829;
  double t523;
  double t873;
  double t896;
  double t908;
  double t965;
  double t837;
  double t912;
  double t944;
  double t475;
  double t968;
  double t986;
  double t1013;
  double t1050;
  double t963;
  double t1026;
  double t1027;
  double t455;
  double t1051;
  double t1061;
  double t1097;
  double t1045;
  double t1125;
  double t1146;
  double t1181;
  double t1194;
  double t1196;
  double t1446;
  double t1480;
  double t1506;
  double t1515;
  double t41;
  double t1677;
  double t1683;
  double t1699;
  double t1704;
  double t1742;
  double t1744;
  double t1702;
  double t1746;
  double t1749;
  double t1755;
  double t1762;
  double t1763;
  double t1751;
  double t1791;
  double t1840;
  double t1870;
  double t1871;
  double t1928;
  double t1849;
  double t1935;
  double t1945;
  double t2070;
  double t2084;
  double t2116;
  double t1556;
  double t2343;
  double t2350;
  double t2354;
  double t2363;
  double t2366;
  double t2393;
  double t2357;
  double t2410;
  double t2444;
  double t2475;
  double t2504;
  double t2512;
  double t2474;
  double t2521;
  double t2550;
  double t2575;
  double t2647;
  double t2650;
  double t2574;
  double t2701;
  double t2705;
  double t2717;
  double t2734;
  double t2737;
  double t2026;
  double t2157;
  double t2191;
  double t2252;
  double t2295;
  double t2315;
  double t2712;
  double t2786;
  double t2793;
  double t2802;
  double t2806;
  double t2808;
  double t1460;
  double t1479;
  double t1575;
  double t1634;
  double t43;
  double t3033;
  double t3040;
  double t1179;
  double t1205;
  double t1219;
  double t2987;
  double t2988;
  double t2245;
  double t2318;
  double t2324;
  double t3002;
  double t3013;
  double t2797;
  double t2820;
  double t2824;
  double t1337;
  double t1378;
  double t1395;
  double t2865;
  double t2875;
  double t2920;
  double t2927;
  double t2928;
  double t2947;
  double t3001;
  double t3021;
  double t3049;
  double t3056;
  double t3087;
  double t3098;
  double t3099;
  double t3136;
  double t3162;
  double t3163;
  double t3164;
  double t3169;
  double t3170;
  double t3183;
  double t3195;
  double t3198;
  double t3231;
  double t3465;
  double t3517;
  double t3523;
  double t3479;
  double t3480;
  double t3485;
  double t3502;
  double t3484;
  double t3513;
  double t3535;
  double t3538;
  double t3541;
  double t3561;
  double t3584;
  double t3593;
  double t3619;
  double t3631;
  double t3644;
  double t3649;
  t584 = Cos(var1[1]);
  t756 = Cos(var1[3]);
  t649 = Cos(var1[2]);
  t697 = Sin(var1[3]);
  t763 = Sin(var1[2]);
  t866 = Cos(var1[4]);
  t714 = -1.*t584*t649*t697;
  t780 = -1.*t756*t584*t763;
  t829 = t714 + t780;
  t523 = Sin(var1[4]);
  t873 = t756*t584*t649;
  t896 = -1.*t584*t697*t763;
  t908 = t873 + t896;
  t965 = Cos(var1[5]);
  t837 = t523*t829;
  t912 = t866*t908;
  t944 = t837 + t912;
  t475 = Sin(var1[5]);
  t968 = t866*t829;
  t986 = -1.*t523*t908;
  t1013 = t968 + t986;
  t1050 = Cos(var1[6]);
  t963 = -1.*t475*t944;
  t1026 = t965*t1013;
  t1027 = t963 + t1026;
  t455 = Sin(var1[6]);
  t1051 = t965*t944;
  t1061 = t475*t1013;
  t1097 = t1051 + t1061;
  t1045 = t455*t1027;
  t1125 = t1050*t1097;
  t1146 = t1045 + t1125;
  t1181 = t1050*t1027;
  t1194 = -1.*t455*t1097;
  t1196 = t1181 + t1194;
  t1446 = Cos(var1[0]);
  t1480 = Sin(var1[0]);
  t1506 = -1.*t1480;
  t1515 = 0. + t1506;
  t41 = Sin(var1[1]);
  t1677 = t1446*t649*t41;
  t1683 = -1.*t1480*t763;
  t1699 = t1677 + t1683;
  t1704 = -1.*t649*t1480;
  t1742 = -1.*t1446*t41*t763;
  t1744 = t1704 + t1742;
  t1702 = -1.*t697*t1699;
  t1746 = t756*t1744;
  t1749 = t1702 + t1746;
  t1755 = t756*t1699;
  t1762 = t697*t1744;
  t1763 = t1755 + t1762;
  t1751 = t523*t1749;
  t1791 = t866*t1763;
  t1840 = t1751 + t1791;
  t1870 = t866*t1749;
  t1871 = -1.*t523*t1763;
  t1928 = t1870 + t1871;
  t1849 = -1.*t475*t1840;
  t1935 = t965*t1928;
  t1945 = t1849 + t1935;
  t2070 = t965*t1840;
  t2084 = t475*t1928;
  t2116 = t2070 + t2084;
  t1556 = 0. + t1446;
  t2343 = t649*t1480*t41;
  t2350 = t1446*t763;
  t2354 = t2343 + t2350;
  t2363 = t1446*t649;
  t2366 = -1.*t1480*t41*t763;
  t2393 = t2363 + t2366;
  t2357 = -1.*t697*t2354;
  t2410 = t756*t2393;
  t2444 = t2357 + t2410;
  t2475 = t756*t2354;
  t2504 = t697*t2393;
  t2512 = t2475 + t2504;
  t2474 = t523*t2444;
  t2521 = t866*t2512;
  t2550 = t2474 + t2521;
  t2575 = t866*t2444;
  t2647 = -1.*t523*t2512;
  t2650 = t2575 + t2647;
  t2574 = -1.*t475*t2550;
  t2701 = t965*t2650;
  t2705 = t2574 + t2701;
  t2717 = t965*t2550;
  t2734 = t475*t2650;
  t2737 = t2717 + t2734;
  t2026 = t455*t1945;
  t2157 = t1050*t2116;
  t2191 = t2026 + t2157;
  t2252 = t1050*t1945;
  t2295 = -1.*t455*t2116;
  t2315 = t2252 + t2295;
  t2712 = t455*t2705;
  t2786 = t1050*t2737;
  t2793 = t2712 + t2786;
  t2802 = t1050*t2705;
  t2806 = -1.*t455*t2737;
  t2808 = t2802 + t2806;
  t1460 = t1446*t584;
  t1479 = 0. + t1460;
  t1575 = t584*t1480;
  t1634 = 0. + t1575;
  t43 = 0. + t41;
  t3033 = -1.*t41;
  t3040 = 0. + t3033;
  t1179 = 0.642788*t1146;
  t1205 = 0.766044*t1196;
  t1219 = 0. + t1179 + t1205;
  t2987 = -1.*t1446*t584;
  t2988 = 0. + t2987;
  t2245 = -0.642788*t2191;
  t2318 = -0.766044*t2315;
  t2324 = 0. + t2245 + t2318;
  t3002 = -1.*t584*t1480;
  t3013 = 0. + t3002;
  t2797 = -0.642788*t2793;
  t2820 = -0.766044*t2808;
  t2824 = 0. + t2797 + t2820;
  t1337 = -0.766044*t1146;
  t1378 = 0.642788*t1196;
  t1395 = 0. + t1337 + t1378;
  t2865 = 0.766044*t2191;
  t2875 = -0.642788*t2315;
  t2920 = 0. + t2865 + t2875;
  t2927 = 0.766044*t2793;
  t2928 = -0.642788*t2808;
  t2947 = 0. + t2927 + t2928;
  t3001 = t2988*t1479;
  t3021 = t3013*t1634;
  t3049 = t3040*t43;
  t3056 = t3001 + t3021 + t3049;
  t3087 = t3040*t1219;
  t3098 = t2988*t2324;
  t3099 = t3013*t2824;
  t3136 = t3087 + t3098 + t3099;
  t3162 = t3040*t1395;
  t3163 = t2988*t2920;
  t3164 = t3013*t2947;
  t3169 = t3162 + t3163 + t3164;
  t3170 = Sin(var1[7]);
  t3183 = 0. + t3170;
  t3195 = Cos(var1[7]);
  t3198 = -1.*t3195;
  t3231 = 0. + t3198;
  t3465 = Cos(var1[8]);
  t3517 = Sin(var1[8]);
  t3523 = 0. + t3517;
  t3479 = t3195*t3465;
  t3480 = 0. + t3479;
  t3485 = t3465*t3170;
  t3502 = 0. + t3485;
  t3484 = t3480*t1479;
  t3513 = t3502*t1634;
  t3535 = t3523*t43;
  t3538 = t3484 + t3513 + t3535;
  t3541 = t3523*t1219;
  t3561 = t3480*t2324;
  t3584 = t3502*t2824;
  t3593 = t3541 + t3561 + t3584;
  t3619 = t3523*t1395;
  t3631 = t3480*t2920;
  t3644 = t3502*t2947;
  t3649 = t3619 + t3631 + t3644;
  p_output1[0]=0. - 1.*t43;
  p_output1[1]=0. - 1.*t1219;
  p_output1[2]=0. - 1.*t1395;
  p_output1[3]=0. + t1479*t1515 + t1556*t1634;
  p_output1[4]=0. + t1515*t2324 + t1556*t2824;
  p_output1[5]=0. + t1515*t2920 + t1556*t2947;
  p_output1[6]=t3056;
  p_output1[7]=t3136;
  p_output1[8]=t3169;
  p_output1[9]=t3056;
  p_output1[10]=t3136;
  p_output1[11]=t3169;
  p_output1[12]=t3056;
  p_output1[13]=t3136;
  p_output1[14]=t3169;
  p_output1[15]=t3056;
  p_output1[16]=t3136;
  p_output1[17]=t3169;
  p_output1[18]=t3056;
  p_output1[19]=t3136;
  p_output1[20]=t3169;
  p_output1[21]=t43;
  p_output1[22]=t1219;
  p_output1[23]=t1395;
  p_output1[24]=0. + t1479*t3183 + t1634*t3231;
  p_output1[25]=0. + t2324*t3183 + t2824*t3231;
  p_output1[26]=0. + t2920*t3183 + t2947*t3231;
  p_output1[27]=t3538;
  p_output1[28]=t3593;
  p_output1[29]=t3649;
  p_output1[30]=t3538;
  p_output1[31]=t3593;
  p_output1[32]=t3649;
  p_output1[33]=t3538;
  p_output1[34]=t3593;
  p_output1[35]=t3649;
  p_output1[36]=t3538;
  p_output1[37]=t3593;
  p_output1[38]=t3649;
  p_output1[39]=t3538;
  p_output1[40]=t3593;
  p_output1[41]=t3649;
}



void Jw_LeftToeBottom_to_RightToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
