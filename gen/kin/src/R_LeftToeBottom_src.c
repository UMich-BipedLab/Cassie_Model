/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 11:08:39 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_LeftToeBottom_src.h"

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
  double t622;
  double t514;
  double t646;
  double t579;
  double t655;
  double t238;
  double t486;
  double t853;
  double t1001;
  double t1032;
  double t580;
  double t678;
  double t699;
  double t716;
  double t749;
  double t831;
  double t843;
  double t904;
  double t987;
  double t2520;
  double t2620;
  double t2624;
  double t2630;
  double t2596;
  double t2601;
  double t2607;
  double t2675;
  double t2865;
  double t2610;
  double t2786;
  double t2793;
  double t2483;
  double t2882;
  double t2906;
  double t2974;
  double t3072;
  double t2854;
  double t2981;
  double t3035;
  double t2443;
  double t3075;
  double t3105;
  double t3121;
  double t3202;
  double t3049;
  double t3177;
  double t3179;
  double t2408;
  double t3215;
  double t3280;
  double t3284;
  double t3382;
  double t3184;
  double t3293;
  double t3298;
  double t2371;
  double t3418;
  double t3473;
  double t3597;
  double t1183;
  double t1211;
  double t1248;
  double t1386;
  double t1395;
  double t1454;
  double t1644;
  double t1706;
  double t1724;
  double t3847;
  double t3855;
  double t3877;
  double t3810;
  double t3819;
  double t3824;
  double t3838;
  double t3948;
  double t3953;
  double t3959;
  double t3979;
  double t3997;
  double t3954;
  double t4009;
  double t4050;
  double t4119;
  double t4138;
  double t4188;
  double t4117;
  double t4256;
  double t4291;
  double t4296;
  double t4299;
  double t4363;
  double t4295;
  double t4370;
  double t4380;
  double t4476;
  double t4477;
  double t4482;
  double t1881;
  double t2217;
  double t2227;
  double t4840;
  double t4842;
  double t4844;
  double t4804;
  double t4808;
  double t4809;
  double t4835;
  double t4886;
  double t4893;
  double t4906;
  double t4945;
  double t4953;
  double t4902;
  double t4966;
  double t4967;
  double t4974;
  double t4987;
  double t4992;
  double t4969;
  double t5019;
  double t5028;
  double t5064;
  double t5065;
  double t5079;
  double t5029;
  double t5100;
  double t5101;
  double t5114;
  double t5117;
  double t5125;
  double t3331;
  double t3600;
  double t3633;
  double t3644;
  double t3684;
  double t3692;
  double t4409;
  double t4513;
  double t4549;
  double t4617;
  double t4732;
  double t4748;
  double t5103;
  double t5126;
  double t5141;
  double t5170;
  double t5178;
  double t5182;
  t622 = Cos(var1[3]);
  t514 = Cos(var1[5]);
  t646 = Sin(var1[4]);
  t579 = Sin(var1[3]);
  t655 = Sin(var1[5]);
  t238 = Cos(var1[7]);
  t486 = Cos(var1[6]);
  t853 = Sin(var1[6]);
  t1001 = Cos(var1[4]);
  t1032 = Sin(var1[7]);
  t580 = -1.*t514*t579;
  t678 = t622*t646*t655;
  t699 = t580 + t678;
  t716 = t486*t699;
  t749 = t622*t514*t646;
  t831 = t579*t655;
  t843 = t749 + t831;
  t904 = t843*t853;
  t987 = t716 + t904;
  t2520 = Cos(var1[8]);
  t2620 = t486*t843;
  t2624 = -1.*t699*t853;
  t2630 = t2620 + t2624;
  t2596 = t622*t1001*t238;
  t2601 = t987*t1032;
  t2607 = t2596 + t2601;
  t2675 = Sin(var1[8]);
  t2865 = Cos(var1[9]);
  t2610 = t2520*t2607;
  t2786 = t2630*t2675;
  t2793 = t2610 + t2786;
  t2483 = Sin(var1[9]);
  t2882 = t2520*t2630;
  t2906 = -1.*t2607*t2675;
  t2974 = t2882 + t2906;
  t3072 = Cos(var1[10]);
  t2854 = -1.*t2483*t2793;
  t2981 = t2865*t2974;
  t3035 = t2854 + t2981;
  t2443 = Sin(var1[10]);
  t3075 = t2865*t2793;
  t3105 = t2483*t2974;
  t3121 = t3075 + t3105;
  t3202 = Cos(var1[11]);
  t3049 = t2443*t3035;
  t3177 = t3072*t3121;
  t3179 = t3049 + t3177;
  t2408 = Sin(var1[11]);
  t3215 = t3072*t3035;
  t3280 = -1.*t2443*t3121;
  t3284 = t3215 + t3280;
  t3382 = Cos(var1[12]);
  t3184 = -1.*t2408*t3179;
  t3293 = t3202*t3284;
  t3298 = t3184 + t3293;
  t2371 = Sin(var1[12]);
  t3418 = t3202*t3179;
  t3473 = t2408*t3284;
  t3597 = t3418 + t3473;
  t1183 = t622*t514;
  t1211 = t579*t646*t655;
  t1248 = t1183 + t1211;
  t1386 = t486*t1248;
  t1395 = t514*t579*t646;
  t1454 = -1.*t622*t655;
  t1644 = t1395 + t1454;
  t1706 = t1644*t853;
  t1724 = t1386 + t1706;
  t3847 = t486*t1644;
  t3855 = -1.*t1248*t853;
  t3877 = t3847 + t3855;
  t3810 = t1001*t238*t579;
  t3819 = t1724*t1032;
  t3824 = t3810 + t3819;
  t3838 = t2520*t3824;
  t3948 = t3877*t2675;
  t3953 = t3838 + t3948;
  t3959 = t2520*t3877;
  t3979 = -1.*t3824*t2675;
  t3997 = t3959 + t3979;
  t3954 = -1.*t2483*t3953;
  t4009 = t2865*t3997;
  t4050 = t3954 + t4009;
  t4119 = t2865*t3953;
  t4138 = t2483*t3997;
  t4188 = t4119 + t4138;
  t4117 = t2443*t4050;
  t4256 = t3072*t4188;
  t4291 = t4117 + t4256;
  t4296 = t3072*t4050;
  t4299 = -1.*t2443*t4188;
  t4363 = t4296 + t4299;
  t4295 = -1.*t2408*t4291;
  t4370 = t3202*t4363;
  t4380 = t4295 + t4370;
  t4476 = t3202*t4291;
  t4477 = t2408*t4363;
  t4482 = t4476 + t4477;
  t1881 = t1001*t486*t655;
  t2217 = t1001*t514*t853;
  t2227 = t1881 + t2217;
  t4840 = t1001*t514*t486;
  t4842 = -1.*t1001*t655*t853;
  t4844 = t4840 + t4842;
  t4804 = -1.*t238*t646;
  t4808 = t2227*t1032;
  t4809 = t4804 + t4808;
  t4835 = t2520*t4809;
  t4886 = t4844*t2675;
  t4893 = t4835 + t4886;
  t4906 = t2520*t4844;
  t4945 = -1.*t4809*t2675;
  t4953 = t4906 + t4945;
  t4902 = -1.*t2483*t4893;
  t4966 = t2865*t4953;
  t4967 = t4902 + t4966;
  t4974 = t2865*t4893;
  t4987 = t2483*t4953;
  t4992 = t4974 + t4987;
  t4969 = t2443*t4967;
  t5019 = t3072*t4992;
  t5028 = t4969 + t5019;
  t5064 = t3072*t4967;
  t5065 = -1.*t2443*t4992;
  t5079 = t5064 + t5065;
  t5029 = -1.*t2408*t5028;
  t5100 = t3202*t5079;
  t5101 = t5029 + t5100;
  t5114 = t3202*t5028;
  t5117 = t2408*t5079;
  t5125 = t5114 + t5117;
  t3331 = t2371*t3298;
  t3600 = t3382*t3597;
  t3633 = t3331 + t3600;
  t3644 = t3382*t3298;
  t3684 = -1.*t2371*t3597;
  t3692 = t3644 + t3684;
  t4409 = t2371*t4380;
  t4513 = t3382*t4482;
  t4549 = t4409 + t4513;
  t4617 = t3382*t4380;
  t4732 = -1.*t2371*t4482;
  t4748 = t4617 + t4732;
  t5103 = t2371*t5101;
  t5126 = t3382*t5125;
  t5141 = t5103 + t5126;
  t5170 = t3382*t5101;
  t5178 = -1.*t2371*t5125;
  t5182 = t5170 + t5178;
  p_output1[0]=t1001*t1032*t622 - 1.*t238*t987;
  p_output1[1]=-1.*t1724*t238 + t1001*t1032*t579;
  p_output1[2]=-1.*t2227*t238 - 1.*t1032*t646;
  p_output1[3]=0.642788*t3633 + 0.766044*t3692;
  p_output1[4]=0.642788*t4549 + 0.766044*t4748;
  p_output1[5]=0.642788*t5141 + 0.766044*t5182;
  p_output1[6]=-0.766044*t3633 + 0.642788*t3692;
  p_output1[7]=-0.766044*t4549 + 0.642788*t4748;
  p_output1[8]=-0.766044*t5141 + 0.642788*t5182;
}



void R_LeftToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
