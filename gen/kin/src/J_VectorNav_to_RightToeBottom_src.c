/*
 * Automatically Generated from Mathematica.
 * Mon 26 Feb 2018 15:49:13 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "J_VectorNav_to_RightToeBottom_src.h"

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
  double t1370;
  double t1625;
  double t1668;
  double t1372;
  double t1627;
  double t1653;
  double t1241;
  double t1685;
  double t1722;
  double t1766;
  double t1918;
  double t1664;
  double t1825;
  double t1845;
  double t1209;
  double t2031;
  double t2054;
  double t2127;
  double t2616;
  double t1856;
  double t2141;
  double t2264;
  double t1141;
  double t2735;
  double t2794;
  double t2883;
  double t689;
  double t1108;
  double t3650;
  double t3685;
  double t3717;
  double t3547;
  double t3724;
  double t3812;
  double t3889;
  double t3895;
  double t2949;
  double t3878;
  double t3941;
  double t3980;
  double t4074;
  double t4113;
  double t4141;
  double t2494;
  double t2915;
  double t2925;
  double t2944;
  double t3017;
  double t3059;
  double t3080;
  double t3115;
  double t3355;
  double t3383;
  double t3433;
  double t84;
  double t5893;
  double t5971;
  double t5756;
  double t5814;
  double t5981;
  double t6007;
  double t6024;
  double t6038;
  double t6235;
  double t6245;
  double t6382;
  double t6408;
  double t5606;
  double t5639;
  double t5874;
  double t5876;
  double t6209;
  double t6427;
  double t6469;
  double t6554;
  double t6580;
  double t6637;
  double t6643;
  double t6645;
  double t5209;
  double t5253;
  double t5746;
  double t5755;
  double t6530;
  double t6715;
  double t6729;
  double t6862;
  double t6863;
  double t6961;
  double t6979;
  double t7059;
  double t4788;
  double t4799;
  double t4974;
  double t4981;
  double t5044;
  double t5081;
  double t5347;
  double t5426;
  double t6832;
  double t7088;
  double t7166;
  double t7195;
  double t7225;
  double t7226;
  double t7334;
  double t7347;
  double t7395;
  double t7444;
  double t7546;
  double t4049;
  double t4172;
  double t4176;
  double t4212;
  double t4269;
  double t4277;
  double t4360;
  double t4383;
  double t4384;
  double t4407;
  double t4597;
  double t4814;
  double t4946;
  double t7554;
  double t7575;
  double t7777;
  double t7785;
  double t7851;
  double t7996;
  double t8037;
  double t8115;
  double t8221;
  double t8272;
  double t8430;
  double t8487;
  double t7635;
  double t7670;
  double t184;
  double t4609;
  double t8839;
  double t8867;
  double t9000;
  double t9012;
  double t9031;
  double t8081;
  double t8096;
  double t8114;
  double t9056;
  double t8540;
  t1370 = Cos(var1[13]);
  t1625 = Sin(var1[13]);
  t1668 = Cos(var1[12]);
  t1372 = 0.642788*t1370;
  t1627 = -0.766044*t1625;
  t1653 = t1372 + t1627;
  t1241 = Sin(var1[12]);
  t1685 = -0.766044*t1370;
  t1722 = -0.642788*t1625;
  t1766 = t1685 + t1722;
  t1918 = Cos(var1[11]);
  t1664 = -1.*t1241*t1653;
  t1825 = t1668*t1766;
  t1845 = 0. + t1664 + t1825;
  t1209 = Sin(var1[11]);
  t2031 = t1668*t1653;
  t2054 = t1241*t1766;
  t2127 = 0. + t2031 + t2054;
  t2616 = Cos(var1[10]);
  t1856 = t1209*t1845;
  t2141 = t1918*t2127;
  t2264 = 0. + t1856 + t2141;
  t1141 = Sin(var1[10]);
  t2735 = t1918*t1845;
  t2794 = -1.*t1209*t2127;
  t2883 = 0. + t2735 + t2794;
  t689 = Cos(var1[8]);
  t1108 = Sin(var1[9]);
  t3650 = -0.642788*t1370;
  t3685 = 0.766044*t1625;
  t3717 = t3650 + t3685;
  t3547 = -1.*t1241*t1766;
  t3724 = t1668*t3717;
  t3812 = 0. + t3547 + t3724;
  t3889 = t1241*t3717;
  t3895 = 0. + t1825 + t3889;
  t2949 = Cos(var1[9]);
  t3878 = t1209*t3812;
  t3941 = t1918*t3895;
  t3980 = 0. + t3878 + t3941;
  t4074 = t1918*t3812;
  t4113 = -1.*t1209*t3895;
  t4141 = 0. + t4074 + t4113;
  t2494 = -1.*t1141*t2264;
  t2915 = t2616*t2883;
  t2925 = 0. + t2494 + t2915;
  t2944 = t1108*t2925;
  t3017 = t2616*t2264;
  t3059 = t1141*t2883;
  t3080 = 0. + t3017 + t3059;
  t3115 = t2949*t3080;
  t3355 = 0. + t2944 + t3115;
  t3383 = t689*t3355;
  t3433 = 0. + t3383;
  t84 = Sin(var1[8]);
  t5893 = -1.*t1370;
  t5971 = 1. + t5893;
  t5756 = -1.*t1668;
  t5814 = 1. + t5756;
  t5981 = 1.0335*t5971;
  t6007 = 1.0512*t1370;
  t6024 = -0.052199999999999996*t1625;
  t6038 = 0. + t5981 + t6007 + t6024;
  t6235 = -0.0532*t5971;
  t6245 = -0.001*t1370;
  t6382 = 0.017699999999999827*t1625;
  t6408 = 0. + t6235 + t6245 + t6382;
  t5606 = -1.*t1918;
  t5639 = 1. + t5606;
  t5874 = -0.0132*t5814;
  t5876 = -0.6255*t1241;
  t6209 = t1241*t6038;
  t6427 = t1668*t6408;
  t6469 = 0. + t5874 + t5876 + t6209 + t6427;
  t6554 = 0.6255*t5814;
  t6580 = -0.0132*t1241;
  t6637 = t1668*t6038;
  t6643 = -1.*t1241*t6408;
  t6645 = 0. + t6554 + t6580 + t6637 + t6643;
  t5209 = -1.*t2616;
  t5253 = 1. + t5209;
  t5746 = 0.1907*t5639;
  t5755 = -0.0332*t1209;
  t6530 = -1.*t1209*t6469;
  t6715 = t1918*t6645;
  t6729 = 0. + t5746 + t5755 + t6530 + t6715;
  t6862 = -0.0332*t5639;
  t6863 = -0.1907*t1209;
  t6961 = t1918*t6469;
  t6979 = t1209*t6645;
  t7059 = 0. + t6862 + t6863 + t6961 + t6979;
  t4788 = -1.*t689;
  t4799 = 1. + t4788;
  t4974 = -1.*t2949;
  t4981 = 1. + t4974;
  t5044 = -0.0806*t4981;
  t5081 = -0.01*t1108;
  t5347 = -0.0806*t5253;
  t5426 = -0.13*t1141;
  t6832 = t1141*t6729;
  t7088 = t2616*t7059;
  t7166 = 0. + t5347 + t5426 + t6832 + t7088;
  t7195 = t2949*t7166;
  t7225 = 0.13*t5253;
  t7226 = -0.0806*t1141;
  t7334 = t2616*t6729;
  t7347 = -1.*t1141*t7059;
  t7395 = 0. + t7225 + t7226 + t7334 + t7347;
  t7444 = t1108*t7395;
  t7546 = 0. + t5044 + t5081 + t7195 + t7444;
  t4049 = -1.*t1141*t3980;
  t4172 = t2616*t4141;
  t4176 = 0. + t4049 + t4172;
  t4212 = t1108*t4176;
  t4269 = t2616*t3980;
  t4277 = t1141*t4141;
  t4360 = 0. + t4269 + t4277;
  t4383 = t2949*t4360;
  t4384 = 0. + t4212 + t4383;
  t4407 = t689*t4384;
  t4597 = 0. + t4407;
  t4814 = -0.0806*t4799;
  t4946 = -0.004500000000000004*t84;
  t7554 = t689*t7546;
  t7575 = 0. + t4814 + t4946 + t7554;
  t7777 = 0.135*t4799;
  t7785 = 0.1305*t689;
  t7851 = -0.0806*t84;
  t7996 = -1.*t84*t7546;
  t8037 = 0. + t7777 + t7785 + t7851 + t7996;
  t8115 = 0.01*t4981;
  t8221 = -0.0806*t1108;
  t8272 = -1.*t1108*t7166;
  t8430 = t2949*t7395;
  t8487 = 0. + t8115 + t8221 + t8272 + t8430;
  t7635 = -1.*t84*t3355;
  t7670 = 0. + t7635;
  t184 = 0. + t84;
  t4609 = 0. + t689;
  t8839 = -1.*t84*t4384;
  t8867 = 0. + t8839;
  t9000 = t2949*t4176;
  t9012 = -1.*t1108*t4360;
  t9031 = 0. + t9000 + t9012;
  t8081 = t2949*t2925;
  t8096 = -1.*t1108*t3080;
  t8114 = 0. + t8081 + t8096;
  t9056 = t8487*t9031;
  t8540 = -1.*t8114*t8487;
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
  p_output1[42]=t184;
  p_output1[43]=t3433;
  p_output1[44]=t4597;
  p_output1[45]=0. - 0.08*t4609 + t4597*(-1.*t3433*t7575 - 1.*t7670*t8037 + t8540) + t3433*(t4597*t7575 + t8037*t8867 + t9056);
  p_output1[46]=-0.08*t7670 + t4597*(0. + t184*t7575 + t4609*t8037) - 0.135*t8114 + t184*(-1.*t4597*t7575 - 1.*t8037*t8867 - 1.*t8487*t9031);
  p_output1[47]=t3433*(0. - 1.*t184*t7575 - 1.*t4609*t8037) + t184*(t3433*t7575 + t7670*t8037 + t8114*t8487) - 0.08*t8867 - 0.135*t9031;
  p_output1[48]=0.;
  p_output1[49]=0. - 1.*t2925*t2949 + t1108*t3080;
  p_output1[50]=0. - 1.*t2949*t4176 + t1108*t4360;
  p_output1[51]=-0.0806 - 1.*(0. - 1.*t3355*t7546 + t8540)*t9031 - 1.*t8114*(0. + t4384*t7546 + t9056);
  p_output1[52]=0. - 0.135*t3355 - 0.1305*t9031;
  p_output1[53]=0. - 0.135*t4384 + 0.1305*t8114;
  p_output1[54]=1.;
  p_output1[55]=0.;
  p_output1[56]=0.;
  p_output1[57]=0.;
  p_output1[58]=0. - 0.0806*t2925 - 0.01*t3080 - 1.*t4360*t7166 - 1.*t4176*t7395;
  p_output1[59]=0. - 0.0806*t4176 - 0.01*t4360 + t3080*t7166 + t2925*t7395;
  p_output1[60]=1.;
  p_output1[61]=0.;
  p_output1[62]=0.;
  p_output1[63]=0.;
  p_output1[64]=0. - 0.13*t2264 - 0.0806*t2883 - 1.*t4141*t6729 - 1.*t3980*t7059;
  p_output1[65]=0. - 0.13*t3980 - 0.0806*t4141 + t2883*t6729 + t2264*t7059;
  p_output1[66]=1.;
  p_output1[67]=0.;
  p_output1[68]=0.;
  p_output1[69]=0.;
  p_output1[70]=0. - 0.0332*t1845 - 0.1907*t2127 - 1.*t3895*t6469 - 1.*t3812*t6645;
  p_output1[71]=0. - 0.0332*t3812 - 0.1907*t3895 + t2127*t6469 + t1845*t6645;
  p_output1[72]=1.;
  p_output1[73]=0.;
  p_output1[74]=0.;
  p_output1[75]=0.;
  p_output1[76]=0. - 0.6255*t1653 - 0.0132*t1766 - 1.*t3717*t6038 - 1.*t1766*t6408;
  p_output1[77]=0. - 0.6255*t1766 - 0.0132*t3717 + t1766*t6038 + t1653*t6408;
  p_output1[78]=1.;
  p_output1[79]=0.;
  p_output1[80]=0.;
  p_output1[81]=0.;
  p_output1[82]=0.05136484439999989;
  p_output1[83]=0.01999455480000023;
}



void J_VectorNav_to_RightToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
