/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:17:59 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_LeftToeBottom_to_RightToeBottom_src.h"

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
  double t776;
  double t871;
  double t800;
  double t801;
  double t942;
  double t1079;
  double t807;
  double t952;
  double t989;
  double t769;
  double t1101;
  double t1124;
  double t1139;
  double t1263;
  double t1036;
  double t1142;
  double t1208;
  double t760;
  double t1272;
  double t1292;
  double t1341;
  double t1717;
  double t1246;
  double t1403;
  double t1539;
  double t721;
  double t1723;
  double t1731;
  double t1743;
  double t2068;
  double t1992;
  double t1999;
  double t2006;
  double t2071;
  double t2086;
  double t2127;
  double t2147;
  double t2164;
  double t2112;
  double t2228;
  double t2273;
  double t2284;
  double t2290;
  double t2317;
  double t2283;
  double t2325;
  double t2415;
  double t2472;
  double t2497;
  double t2505;
  double t2416;
  double t2509;
  double t2510;
  double t2530;
  double t2555;
  double t2565;
  double t1708;
  double t1754;
  double t1792;
  double t1855;
  double t1905;
  double t1907;
  double t2522;
  double t2573;
  double t2613;
  double t2680;
  double t2681;
  double t2694;
  double t2887;
  double t2903;
  double t2912;
  double t2974;
  double t2978;
  double t2979;
  double t2941;
  double t3027;
  double t3096;
  double t3218;
  double t3237;
  double t3249;
  double t3136;
  double t3257;
  double t3317;
  double t3526;
  double t3533;
  double t3586;
  double t3386;
  double t3623;
  double t3686;
  double t3799;
  double t3860;
  double t3891;
  double t2727;
  double t2768;
  double t2772;
  double t2656;
  double t2705;
  double t2723;
  double t3789;
  double t3901;
  double t3903;
  double t4051;
  double t4083;
  double t4171;
  double t1832;
  double t1913;
  double t1914;
  double t2785;
  double t2815;
  double t2835;
  double t2724;
  double t2842;
  double t100;
  double t4342;
  double t4352;
  double t4355;
  double t4049;
  double t4226;
  double t4228;
  double t4243;
  double t4258;
  double t4264;
  double t4323;
  double t4378;
  double t4416;
  double t4424;
  double t4440;
  double t4471;
  double t4487;
  double t4549;
  double t4550;
  double t702;
  double t4781;
  double t4597;
  double t5346;
  double t5372;
  double t5316;
  double t5408;
  double t5421;
  double t5430;
  double t5359;
  double t5377;
  double t5379;
  double t5436;
  double t5312;
  double t5481;
  double t5487;
  double t5501;
  double t5393;
  double t5447;
  double t5456;
  double t5517;
  double t5303;
  double t5575;
  double t5581;
  double t5598;
  double t5465;
  double t5535;
  double t5539;
  double t5604;
  double t5295;
  double t5625;
  double t5626;
  double t5636;
  double t5568;
  double t5606;
  double t5612;
  double t5642;
  double t2882;
  double t5777;
  double t5789;
  double t5795;
  double t5736;
  double t5742;
  double t5747;
  double t5878;
  double t5880;
  double t5883;
  double t5762;
  double t5806;
  double t5859;
  double t5920;
  double t5942;
  double t5952;
  double t5872;
  double t5887;
  double t5909;
  double t5977;
  double t5978;
  double t6008;
  double t5910;
  double t5957;
  double t5963;
  double t4605;
  double t4636;
  double t4680;
  double t6164;
  double t6201;
  double t6217;
  double t6100;
  double t6124;
  double t6131;
  double t6254;
  double t6257;
  double t6273;
  double t6145;
  double t6218;
  double t6231;
  double t6293;
  double t6299;
  double t6310;
  double t6238;
  double t6275;
  double t6279;
  double t4789;
  double t4803;
  double t4816;
  double t5621;
  double t5652;
  double t5658;
  double t5662;
  double t5664;
  double t5670;
  double t5698;
  double t5699;
  double t5716;
  double t4881;
  double t4903;
  double t4917;
  double t6281;
  double t6314;
  double t6317;
  double t6318;
  double t6333;
  double t6347;
  double t6353;
  double t6368;
  double t6386;
  double t4956;
  double t4983;
  double t5013;
  double t5970;
  double t6013;
  double t6032;
  double t6044;
  double t6060;
  double t6062;
  double t6067;
  double t6069;
  double t6087;
  double t5075;
  double t5091;
  double t5124;
  double t5152;
  double t5184;
  double t5194;
  double t5195;
  double t5213;
  double t5214;
  double t5218;
  double t6458;
  double t6459;
  double t6465;
  double t6562;
  double t6575;
  double t6584;
  double t6472;
  double t6474;
  double t6498;
  t776 = Cos(var1[1]);
  t871 = Cos(var1[3]);
  t800 = Cos(var1[2]);
  t801 = Sin(var1[3]);
  t942 = Sin(var1[2]);
  t1079 = Cos(var1[4]);
  t807 = -1.*t776*t800*t801;
  t952 = -1.*t871*t776*t942;
  t989 = t807 + t952;
  t769 = Sin(var1[4]);
  t1101 = t871*t776*t800;
  t1124 = -1.*t776*t801*t942;
  t1139 = t1101 + t1124;
  t1263 = Cos(var1[5]);
  t1036 = t769*t989;
  t1142 = t1079*t1139;
  t1208 = t1036 + t1142;
  t760 = Sin(var1[5]);
  t1272 = t1079*t989;
  t1292 = -1.*t769*t1139;
  t1341 = t1272 + t1292;
  t1717 = Cos(var1[6]);
  t1246 = -1.*t760*t1208;
  t1403 = t1263*t1341;
  t1539 = t1246 + t1403;
  t721 = Sin(var1[6]);
  t1723 = t1263*t1208;
  t1731 = t760*t1341;
  t1743 = t1723 + t1731;
  t2068 = Sin(var1[0]);
  t1992 = Cos(var1[0]);
  t1999 = Sin(var1[1]);
  t2006 = t1992*t800*t1999;
  t2071 = -1.*t2068*t942;
  t2086 = t2006 + t2071;
  t2127 = -1.*t800*t2068;
  t2147 = -1.*t1992*t1999*t942;
  t2164 = t2127 + t2147;
  t2112 = -1.*t801*t2086;
  t2228 = t871*t2164;
  t2273 = t2112 + t2228;
  t2284 = t871*t2086;
  t2290 = t801*t2164;
  t2317 = t2284 + t2290;
  t2283 = t769*t2273;
  t2325 = t1079*t2317;
  t2415 = t2283 + t2325;
  t2472 = t1079*t2273;
  t2497 = -1.*t769*t2317;
  t2505 = t2472 + t2497;
  t2416 = -1.*t760*t2415;
  t2509 = t1263*t2505;
  t2510 = t2416 + t2509;
  t2530 = t1263*t2415;
  t2555 = t760*t2505;
  t2565 = t2530 + t2555;
  t1708 = t721*t1539;
  t1754 = t1717*t1743;
  t1792 = t1708 + t1754;
  t1855 = t1717*t1539;
  t1905 = -1.*t721*t1743;
  t1907 = t1855 + t1905;
  t2522 = t721*t2510;
  t2573 = t1717*t2565;
  t2613 = t2522 + t2573;
  t2680 = t1717*t2510;
  t2681 = -1.*t721*t2565;
  t2694 = t2680 + t2681;
  t2887 = t800*t2068*t1999;
  t2903 = t1992*t942;
  t2912 = t2887 + t2903;
  t2974 = t1992*t800;
  t2978 = -1.*t2068*t1999*t942;
  t2979 = t2974 + t2978;
  t2941 = -1.*t801*t2912;
  t3027 = t871*t2979;
  t3096 = t2941 + t3027;
  t3218 = t871*t2912;
  t3237 = t801*t2979;
  t3249 = t3218 + t3237;
  t3136 = t769*t3096;
  t3257 = t1079*t3249;
  t3317 = t3136 + t3257;
  t3526 = t1079*t3096;
  t3533 = -1.*t769*t3249;
  t3586 = t3526 + t3533;
  t3386 = -1.*t760*t3317;
  t3623 = t1263*t3586;
  t3686 = t3386 + t3623;
  t3799 = t1263*t3317;
  t3860 = t760*t3586;
  t3891 = t3799 + t3860;
  t2727 = -0.766044*t1792;
  t2768 = 0.642788*t1907;
  t2772 = t2727 + t2768;
  t2656 = -0.766044*t2613;
  t2705 = 0.642788*t2694;
  t2723 = t2656 + t2705;
  t3789 = t721*t3686;
  t3901 = t1717*t3891;
  t3903 = t3789 + t3901;
  t4051 = t1717*t3686;
  t4083 = -1.*t721*t3891;
  t4171 = t4051 + t4083;
  t1832 = 0.642788*t1792;
  t1913 = 0.766044*t1907;
  t1914 = t1832 + t1913;
  t2785 = 0.642788*t2613;
  t2815 = 0.766044*t2694;
  t2835 = t2785 + t2815;
  t2724 = t1914*t2723;
  t2842 = -1.*t2772*t2835;
  t100 = Cos(var1[8]);
  t4342 = -0.766044*t3903;
  t4352 = 0.642788*t4171;
  t4355 = t4342 + t4352;
  t4049 = 0.642788*t3903;
  t4226 = 0.766044*t4171;
  t4228 = t4049 + t4226;
  t4243 = t1992*t776*t2772;
  t4258 = t1999*t2723;
  t4264 = t4243 + t4258;
  t4323 = -1.*t4228*t4264;
  t4378 = t1992*t776*t1914;
  t4416 = t1999*t2835;
  t4424 = t4378 + t4416;
  t4440 = t4355*t4424;
  t4471 = t2724 + t2842;
  t4487 = -1.*t776*t2068*t4471;
  t4549 = 0. + t4323 + t4440 + t4487;
  t4550 = 1/t4549;
  t702 = Sin(var1[7]);
  t4781 = Sin(var1[8]);
  t4597 = Cos(var1[7]);
  t5346 = Cos(var1[9]);
  t5372 = Sin(var1[9]);
  t5316 = Cos(var1[10]);
  t5408 = t4597*t5346;
  t5421 = -1.*t702*t4781*t5372;
  t5430 = t5408 + t5421;
  t5359 = t5346*t702*t4781;
  t5377 = t4597*t5372;
  t5379 = t5359 + t5377;
  t5436 = Sin(var1[10]);
  t5312 = Cos(var1[11]);
  t5481 = t5316*t5430;
  t5487 = -1.*t5379*t5436;
  t5501 = t5481 + t5487;
  t5393 = t5316*t5379;
  t5447 = t5430*t5436;
  t5456 = t5393 + t5447;
  t5517 = Sin(var1[11]);
  t5303 = Cos(var1[12]);
  t5575 = t5312*t5501;
  t5581 = -1.*t5456*t5517;
  t5598 = t5575 + t5581;
  t5465 = t5312*t5456;
  t5535 = t5501*t5517;
  t5539 = t5465 + t5535;
  t5604 = Sin(var1[12]);
  t5295 = Cos(var1[13]);
  t5625 = t5303*t5598;
  t5626 = -1.*t5539*t5604;
  t5636 = t5625 + t5626;
  t5568 = t5303*t5539;
  t5606 = t5598*t5604;
  t5612 = t5568 + t5606;
  t5642 = Sin(var1[13]);
  t2882 = 0. + t2724 + t2842;
  t5777 = -1.*t5346*t702;
  t5789 = -1.*t4597*t4781*t5372;
  t5795 = t5777 + t5789;
  t5736 = t4597*t5346*t4781;
  t5742 = -1.*t702*t5372;
  t5747 = t5736 + t5742;
  t5878 = t5316*t5795;
  t5880 = -1.*t5747*t5436;
  t5883 = t5878 + t5880;
  t5762 = t5316*t5747;
  t5806 = t5795*t5436;
  t5859 = t5762 + t5806;
  t5920 = t5312*t5883;
  t5942 = -1.*t5859*t5517;
  t5952 = t5920 + t5942;
  t5872 = t5312*t5859;
  t5887 = t5883*t5517;
  t5909 = t5872 + t5887;
  t5977 = t5303*t5952;
  t5978 = -1.*t5909*t5604;
  t6008 = t5977 + t5978;
  t5910 = t5303*t5909;
  t5957 = t5952*t5604;
  t5963 = t5910 + t5957;
  t4605 = -1.*t1914*t4355;
  t4636 = t2772*t4228;
  t4680 = 0. + t4605 + t4636;
  t6164 = -1.*t100*t5316*t5372;
  t6201 = -1.*t100*t5346*t5436;
  t6217 = t6164 + t6201;
  t6100 = t100*t5346*t5316;
  t6124 = -1.*t100*t5372*t5436;
  t6131 = t6100 + t6124;
  t6254 = t5312*t6217;
  t6257 = -1.*t6131*t5517;
  t6273 = t6254 + t6257;
  t6145 = t5312*t6131;
  t6218 = t6217*t5517;
  t6231 = t6145 + t6218;
  t6293 = t5303*t6273;
  t6299 = -1.*t6231*t5604;
  t6310 = t6293 + t6299;
  t6238 = t5303*t6231;
  t6275 = t6273*t5604;
  t6279 = t6238 + t6275;
  t4789 = t2835*t4355;
  t4803 = -1.*t2723*t4228;
  t4816 = 0. + t4789 + t4803;
  t5621 = t5295*t5612;
  t5652 = t5636*t5642;
  t5658 = t5621 + t5652;
  t5662 = 0.642788*t5658;
  t5664 = t5295*t5636;
  t5670 = -1.*t5612*t5642;
  t5698 = t5664 + t5670;
  t5699 = 0.766044*t5698;
  t5716 = t5662 + t5699;
  t4881 = -1.*t1992*t776*t2772;
  t4903 = -1.*t1999*t2723;
  t4917 = 0. + t4881 + t4903;
  t6281 = t5295*t6279;
  t6314 = t6310*t5642;
  t6317 = t6281 + t6314;
  t6318 = 0.642788*t6317;
  t6333 = t5295*t6310;
  t6347 = -1.*t6279*t5642;
  t6353 = t6333 + t6347;
  t6368 = 0.766044*t6353;
  t6386 = t6318 + t6368;
  t4956 = -1.*t776*t2068*t2723;
  t4983 = t1992*t776*t4355;
  t5013 = 0. + t4956 + t4983;
  t5970 = t5295*t5963;
  t6013 = t6008*t5642;
  t6032 = t5970 + t6013;
  t6044 = 0.642788*t6032;
  t6060 = t5295*t6008;
  t6062 = -1.*t5963*t5642;
  t6067 = t6060 + t6062;
  t6069 = 0.766044*t6067;
  t6087 = t6044 + t6069;
  t5075 = t776*t2068*t2772;
  t5091 = t1999*t4355;
  t5124 = 0. + t5075 + t5091;
  t5152 = 0. + t4378 + t4416;
  t5184 = t776*t2068*t2835;
  t5194 = -1.*t1992*t776*t4228;
  t5195 = 0. + t5184 + t5194;
  t5213 = -1.*t776*t2068*t1914;
  t5214 = -1.*t1999*t4228;
  t5218 = 0. + t5213 + t5214;
  t6458 = -0.766044*t5658;
  t6459 = 0.642788*t5698;
  t6465 = t6458 + t6459;
  t6562 = -0.766044*t6317;
  t6575 = 0.642788*t6353;
  t6584 = t6562 + t6575;
  t6472 = -0.766044*t6032;
  t6474 = 0.642788*t6067;
  t6498 = t6472 + t6474;
  p_output1[0]=0. - 1.*t100*t4550*t4597*t4680 + t4550*t4781*t4816 - 1.*t100*t2882*t4550*t702;
  p_output1[1]=0. + t4550*t4781*t5013 - 1.*t100*t4550*t4597*t5124 - 1.*t100*t4550*t4917*t702;
  p_output1[2]=0. + t4550*t4781*t5195 - 1.*t100*t4550*t4597*t5218 - 1.*t100*t4550*t5152*t702;
  p_output1[3]=0. + t2882*t4550*t5716 + t4550*t4680*t6087 + t4550*t4816*t6386;
  p_output1[4]=0. + t4550*t4917*t5716 + t4550*t5124*t6087 + t4550*t5013*t6386;
  p_output1[5]=0. + t4550*t5152*t5716 + t4550*t5218*t6087 + t4550*t5195*t6386;
  p_output1[6]=0. + t2882*t4550*t6465 + t4550*t4680*t6498 + t4550*t4816*t6584;
  p_output1[7]=0. + t4550*t4917*t6465 + t4550*t5124*t6498 + t4550*t5013*t6584;
  p_output1[8]=0. + t4550*t5152*t6465 + t4550*t5218*t6498 + t4550*t5195*t6584;
}



void R_LeftToeBottom_to_RightToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
