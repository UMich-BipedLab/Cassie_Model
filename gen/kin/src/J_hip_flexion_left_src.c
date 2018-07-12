/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:33:01 GMT-04:00
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
  double t396;
  double t659;
  double t976;
  double t352;
  double t1009;
  double t19;
  double t555;
  double t1021;
  double t1073;
  double t1383;
  double t1391;
  double t1606;
  double t1648;
  double t2309;
  double t2369;
  double t2430;
  double t2514;
  double t2203;
  double t2236;
  double t2272;
  double t2767;
  double t3818;
  double t3866;
  double t3894;
  double t3969;
  double t3707;
  double t3759;
  double t3816;
  double t4224;
  double t4242;
  double t4265;
  double t91;
  double t106;
  double t220;
  double t328;
  double t1967;
  double t2044;
  double t4604;
  double t4734;
  double t4770;
  double t4795;
  double t4796;
  double t4798;
  double t2497;
  double t2721;
  double t2749;
  double t2936;
  double t3108;
  double t3244;
  double t4854;
  double t4874;
  double t4884;
  double t3950;
  double t4117;
  double t4122;
  double t4287;
  double t4303;
  double t4313;
  double t4968;
  double t4988;
  double t5002;
  double t5008;
  double t5013;
  double t5026;
  double t5185;
  double t5186;
  double t5217;
  double t5245;
  double t5255;
  double t5261;
  double t5278;
  double t5282;
  double t5283;
  double t5394;
  double t5398;
  double t5400;
  double t5450;
  double t5453;
  double t5457;
  double t5462;
  double t5464;
  double t5468;
  double t5573;
  double t5583;
  double t5584;
  double t5640;
  double t5643;
  double t5669;
  double t5672;
  double t5678;
  double t5679;
  double t5758;
  double t5764;
  double t5766;
  double t5769;
  double t5782;
  double t5807;
  double t5817;
  double t5828;
  double t5901;
  double t5904;
  double t5906;
  double t5929;
  double t5936;
  double t5948;
  double t5983;
  double t5999;
  double t6080;
  double t6081;
  double t6083;
  double t6120;
  double t6124;
  double t6126;
  double t6234;
  double t6250;
  double t6327;
  double t6335;
  double t6342;
  double t6348;
  double t6354;
  double t6365;
  double t6380;
  double t6098;
  double t6107;
  double t6114;
  double t6135;
  double t6139;
  double t6152;
  double t6155;
  double t6163;
  double t6166;
  double t6176;
  double t6189;
  double t6192;
  double t4933;
  double t4940;
  double t4947;
  double t6446;
  double t6451;
  double t6455;
  double t6463;
  double t6466;
  double t6521;
  double t6523;
  double t6539;
  double t6546;
  double t6556;
  double t6560;
  double t6586;
  double t6590;
  double t6597;
  double t6612;
  double t6617;
  double t6618;
  double t5129;
  double t5132;
  double t5136;
  double t6693;
  double t6697;
  double t6705;
  double t6707;
  double t6713;
  double t6755;
  double t6765;
  double t6771;
  double t6810;
  double t6812;
  double t6820;
  t396 = Cos(var1[5]);
  t659 = Sin(var1[3]);
  t976 = Sin(var1[4]);
  t352 = Cos(var1[3]);
  t1009 = Sin(var1[5]);
  t19 = Cos(var1[6]);
  t555 = -1.*t352*t396;
  t1021 = -1.*t659*t976*t1009;
  t1073 = t555 + t1021;
  t1383 = -1.*t396*t659*t976;
  t1391 = t352*t1009;
  t1606 = t1383 + t1391;
  t1648 = Sin(var1[6]);
  t2309 = Cos(var1[7]);
  t2369 = -1.*t2309;
  t2430 = 1. + t2369;
  t2514 = Sin(var1[7]);
  t2203 = t19*t1073;
  t2236 = t1606*t1648;
  t2272 = t2203 + t2236;
  t2767 = Cos(var1[4]);
  t3818 = Cos(var1[8]);
  t3866 = -1.*t3818;
  t3894 = 1. + t3866;
  t3969 = Sin(var1[8]);
  t3707 = -1.*t2767*t2309*t659;
  t3759 = t2272*t2514;
  t3816 = t3707 + t3759;
  t4224 = t19*t1606;
  t4242 = -1.*t1073*t1648;
  t4265 = t4224 + t4242;
  t91 = -1.*t19;
  t106 = 1. + t91;
  t220 = 0.135*t106;
  t328 = 0. + t220;
  t1967 = -0.135*t1648;
  t2044 = 0. + t1967;
  t4604 = -1.*t396*t659;
  t4734 = t352*t976*t1009;
  t4770 = t4604 + t4734;
  t4795 = t352*t396*t976;
  t4796 = t659*t1009;
  t4798 = t4795 + t4796;
  t2497 = 0.135*t2430;
  t2721 = 0.049*t2514;
  t2749 = 0. + t2497 + t2721;
  t2936 = -0.049*t2430;
  t3108 = 0.135*t2514;
  t3244 = 0. + t2936 + t3108;
  t4854 = t19*t4770;
  t4874 = t4798*t1648;
  t4884 = t4854 + t4874;
  t3950 = -0.049*t3894;
  t4117 = -0.09*t3969;
  t4122 = 0. + t3950 + t4117;
  t4287 = -0.09*t3894;
  t4303 = 0.049*t3969;
  t4313 = 0. + t4287 + t4303;
  t4968 = t352*t2767*t2309;
  t4988 = t4884*t2514;
  t5002 = t4968 + t4988;
  t5008 = t19*t4798;
  t5013 = -1.*t4770*t1648;
  t5026 = t5008 + t5013;
  t5185 = t352*t2767*t19*t1009;
  t5186 = t352*t2767*t396*t1648;
  t5217 = t5185 + t5186;
  t5245 = -1.*t352*t2309*t976;
  t5255 = t5217*t2514;
  t5261 = t5245 + t5255;
  t5278 = t352*t2767*t396*t19;
  t5282 = -1.*t352*t2767*t1009*t1648;
  t5283 = t5278 + t5282;
  t5394 = t2767*t19*t659*t1009;
  t5398 = t2767*t396*t659*t1648;
  t5400 = t5394 + t5398;
  t5450 = -1.*t2309*t659*t976;
  t5453 = t5400*t2514;
  t5457 = t5450 + t5453;
  t5462 = t2767*t396*t19*t659;
  t5464 = -1.*t2767*t659*t1009*t1648;
  t5468 = t5462 + t5464;
  t5573 = -1.*t19*t976*t1009;
  t5583 = -1.*t396*t976*t1648;
  t5584 = t5573 + t5583;
  t5640 = -1.*t2767*t2309;
  t5643 = t5584*t2514;
  t5669 = t5640 + t5643;
  t5672 = -1.*t396*t19*t976;
  t5678 = t976*t1009*t1648;
  t5679 = t5672 + t5678;
  t5758 = t396*t659;
  t5764 = -1.*t352*t976*t1009;
  t5766 = t5758 + t5764;
  t5769 = t5766*t1648;
  t5782 = t5008 + t5769;
  t5807 = t19*t5766;
  t5817 = -1.*t4798*t1648;
  t5828 = t5807 + t5817;
  t5901 = t396*t659*t976;
  t5904 = -1.*t352*t1009;
  t5906 = t5901 + t5904;
  t5929 = t19*t5906;
  t5936 = t1073*t1648;
  t5948 = t5929 + t5936;
  t5983 = -1.*t5906*t1648;
  t5999 = t2203 + t5983;
  t6080 = t2767*t396*t19;
  t6081 = -1.*t2767*t1009*t1648;
  t6083 = t6080 + t6081;
  t6120 = -1.*t2767*t19*t1009;
  t6124 = -1.*t2767*t396*t1648;
  t6126 = t6120 + t6124;
  t6234 = -1.*t19*t4770;
  t6250 = t6234 + t5817;
  t6327 = t352*t396;
  t6335 = t659*t976*t1009;
  t6342 = t6327 + t6335;
  t6348 = -1.*t6342*t1648;
  t6354 = t5929 + t6348;
  t6365 = -1.*t19*t6342;
  t6380 = t6365 + t5983;
  t6098 = 0.135*t2309*t6083;
  t6107 = t6083*t2749;
  t6114 = t6083*t2514*t4122;
  t6135 = t6126*t4313;
  t6139 = t3818*t6083*t2514;
  t6152 = t6126*t3969;
  t6155 = t6139 + t6152;
  t6163 = -0.049*t6155;
  t6166 = t3818*t6126;
  t6176 = -1.*t6083*t2514*t3969;
  t6189 = t6166 + t6176;
  t6192 = -0.09*t6189;
  t4933 = t2309*t4884;
  t4940 = -1.*t352*t2767*t2514;
  t4947 = t4933 + t4940;
  t6446 = 0.135*t2309;
  t6451 = -0.049*t2514;
  t6455 = t6446 + t6451;
  t6463 = 0.049*t2309;
  t6466 = t6463 + t3108;
  t6521 = t19*t6342;
  t6523 = t5906*t1648;
  t6539 = t6521 + t6523;
  t6546 = t2309*t6539;
  t6556 = -1.*t2767*t659*t2514;
  t6560 = t6546 + t6556;
  t6586 = t2767*t19*t1009;
  t6590 = t2767*t396*t1648;
  t6597 = t6586 + t6590;
  t6612 = t2309*t6597;
  t6617 = t976*t2514;
  t6618 = t6612 + t6617;
  t5129 = t3818*t5026;
  t5132 = -1.*t5002*t3969;
  t5136 = t5129 + t5132;
  t6693 = 0.049*t3818;
  t6697 = t6693 + t4117;
  t6705 = -0.09*t3818;
  t6707 = -0.049*t3969;
  t6713 = t6705 + t6707;
  t6755 = t2767*t2309*t659;
  t6765 = t6539*t2514;
  t6771 = t6755 + t6765;
  t6810 = -1.*t2309*t976;
  t6812 = t6597*t2514;
  t6820 = t6810 + t6812;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1606*t2044 + t2272*t2749 + t1073*t328 + t3816*t4122 - 0.09*(-1.*t3816*t3969 + t3818*t4265) - 0.049*(t3816*t3818 + t3969*t4265) + t4265*t4313 - 1.*t2767*t3244*t659 + 0.135*(t2272*t2309 + t2514*t2767*t659);
  p_output1[10]=t2767*t3244*t352 + t328*t4770 + t2044*t4798 + t2749*t4884 + 0.135*t4947 + t4122*t5002 + t4313*t5026 - 0.049*(t3818*t5002 + t3969*t5026) - 0.09*t5136;
  p_output1[11]=0;
  p_output1[12]=t1009*t2767*t328*t352 + t2044*t2767*t352*t396 + t2749*t5217 + t4122*t5261 + t4313*t5283 - 0.09*(-1.*t3969*t5261 + t3818*t5283) - 0.049*(t3818*t5261 + t3969*t5283) - 1.*t3244*t352*t976 + 0.135*(t2309*t5217 + t2514*t352*t976);
  p_output1[13]=t2749*t5400 + t4122*t5457 + t4313*t5468 - 0.09*(-1.*t3969*t5457 + t3818*t5468) - 0.049*(t3818*t5457 + t3969*t5468) + t1009*t2767*t328*t659 + t2044*t2767*t396*t659 - 1.*t3244*t659*t976 + 0.135*(t2309*t5400 + t2514*t659*t976);
  p_output1[14]=-1.*t2767*t3244 + t2749*t5584 + 0.135*(t2514*t2767 + t2309*t5584) + t4122*t5669 + t4313*t5679 - 0.09*(-1.*t3969*t5669 + t3818*t5679) - 0.049*(t3818*t5669 + t3969*t5679) - 1.*t1009*t328*t976 - 1.*t2044*t396*t976;
  p_output1[15]=t328*t4798 + t2044*t5766 + 0.135*t2309*t5782 + t2749*t5782 + t2514*t4122*t5782 + t4313*t5828 - 0.09*(-1.*t2514*t3969*t5782 + t3818*t5828) - 0.049*(t2514*t3818*t5782 + t3969*t5828);
  p_output1[16]=t1073*t2044 + t328*t5906 + 0.135*t2309*t5948 + t2749*t5948 + t2514*t4122*t5948 + t4313*t5999 - 0.09*(-1.*t2514*t3969*t5948 + t3818*t5999) - 0.049*(t2514*t3818*t5948 + t3969*t5999);
  p_output1[17]=-1.*t1009*t2044*t2767 + t2767*t328*t396 + t6098 + t6107 + t6114 + t6135 + t6163 + t6192;
  p_output1[18]=0.135*t1648*t4770 - 0.135*t19*t4798 + 0.135*t2309*t5026 + t2749*t5026 + t2514*t4122*t5026 + t4313*t6250 - 0.09*(-1.*t2514*t3969*t5026 + t3818*t6250) - 0.049*(t2514*t3818*t5026 + t3969*t6250);
  p_output1[19]=-0.135*t19*t5906 + 0.135*t1648*t6342 + 0.135*t2309*t6354 + t2749*t6354 + t2514*t4122*t6354 + t4313*t6380 - 0.09*(-1.*t2514*t3969*t6354 + t3818*t6380) - 0.049*(t2514*t3818*t6354 + t3969*t6380);
  p_output1[20]=0.135*t1009*t1648*t2767 - 0.135*t19*t2767*t396 + t6098 + t6107 + t6114 + t6135 + t6163 + t6192;
  p_output1[21]=0.135*(-1.*t2309*t2767*t352 - 1.*t2514*t4884) - 0.049*t3818*t4947 + 0.09*t3969*t4947 + t4122*t4947 + t2767*t352*t6455 + t4884*t6466;
  p_output1[22]=t6466*t6539 + 0.135*(t3707 - 1.*t2514*t6539) - 0.049*t3818*t6560 + 0.09*t3969*t6560 + t4122*t6560 + t2767*t6455*t659;
  p_output1[23]=t6466*t6597 - 0.049*t3818*t6618 + 0.09*t3969*t6618 + t4122*t6618 - 1.*t6455*t976 + 0.135*(-1.*t2514*t6597 + t2309*t976);
  p_output1[24]=-0.09*(-1.*t3818*t5002 - 1.*t3969*t5026) - 0.049*t5136 + t5026*t6697 + t5002*t6713;
  p_output1[25]=t6354*t6697 + t6713*t6771 - 0.09*(-1.*t3969*t6354 - 1.*t3818*t6771) - 0.049*(t3818*t6354 - 1.*t3969*t6771);
  p_output1[26]=t6083*t6697 + t6713*t6820 - 0.09*(-1.*t3969*t6083 - 1.*t3818*t6820) - 0.049*(t3818*t6083 - 1.*t3969*t6820);
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
