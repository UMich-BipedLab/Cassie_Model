/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:34:13 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RightToeBottom_src.h"

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
  double t71;
  double t1676;
  double t2048;
  double t1972;
  double t2378;
  double t531;
  double t535;
  double t992;
  double t1072;
  double t1296;
  double t1978;
  double t2418;
  double t2432;
  double t2506;
  double t2725;
  double t2734;
  double t2800;
  double t210;
  double t2929;
  double t2989;
  double t3005;
  double t3199;
  double t3229;
  double t3241;
  double t3279;
  double t3323;
  double t3334;
  double t3373;
  double t3784;
  double t3800;
  double t3847;
  double t4017;
  double t4043;
  double t4114;
  double t4168;
  double t4251;
  double t4282;
  double t4330;
  double t4450;
  double t4476;
  double t4489;
  double t4515;
  double t4525;
  double t4538;
  double t4564;
  double t4601;
  double t4613;
  double t4626;
  double t4664;
  double t4682;
  double t4690;
  double t4714;
  double t4716;
  double t4749;
  double t4789;
  double t4853;
  double t4861;
  double t4869;
  double t4990;
  double t5001;
  double t5014;
  double t5032;
  double t5056;
  double t5081;
  double t5113;
  double t5143;
  double t5166;
  double t5175;
  double t5217;
  double t5222;
  double t5224;
  double t1061;
  double t1082;
  double t1175;
  double t1380;
  double t1552;
  double t2549;
  double t2570;
  double t2577;
  double t2715;
  double t2835;
  double t2839;
  double t2925;
  double t5350;
  double t5367;
  double t5375;
  double t5380;
  double t5383;
  double t5391;
  double t3276;
  double t3286;
  double t3313;
  double t5464;
  double t5466;
  double t5470;
  double t3648;
  double t3690;
  double t3708;
  double t4164;
  double t4198;
  double t4205;
  double t5479;
  double t5490;
  double t5497;
  double t5539;
  double t5561;
  double t5565;
  double t4366;
  double t4369;
  double t4446;
  double t4552;
  double t4596;
  double t4600;
  double t5576;
  double t5579;
  double t5590;
  double t5596;
  double t5603;
  double t5605;
  double t4634;
  double t4651;
  double t4658;
  double t4776;
  double t4798;
  double t4828;
  double t5623;
  double t5633;
  double t5636;
  double t5695;
  double t5705;
  double t5743;
  double t4910;
  double t4944;
  double t4977;
  double t5098;
  double t5123;
  double t5137;
  double t5762;
  double t5801;
  double t5834;
  double t5853;
  double t5858;
  double t5863;
  double t5193;
  double t5207;
  double t5212;
  double t5883;
  double t5908;
  double t5910;
  double t5918;
  double t5926;
  double t5936;
  double t6068;
  double t6071;
  double t6080;
  double t6085;
  double t6095;
  double t6102;
  double t6168;
  double t6181;
  double t6206;
  double t6228;
  double t6247;
  double t6248;
  double t6258;
  double t6268;
  double t6272;
  double t6300;
  double t6305;
  double t6314;
  double t6361;
  double t6362;
  double t6382;
  double t6397;
  double t6409;
  double t6417;
  double t6429;
  double t6431;
  double t6440;
  double t6467;
  double t6487;
  double t6505;
  double t6519;
  double t6583;
  double t6604;
  t71 = Cos(var1[3]);
  t1676 = Cos(var1[5]);
  t2048 = Sin(var1[3]);
  t1972 = Sin(var1[4]);
  t2378 = Sin(var1[5]);
  t531 = Cos(var1[14]);
  t535 = -1.*t531;
  t992 = 1. + t535;
  t1072 = Sin(var1[14]);
  t1296 = Sin(var1[13]);
  t1978 = t71*t1676*t1972;
  t2418 = t2048*t2378;
  t2432 = t1978 + t2418;
  t2506 = Cos(var1[13]);
  t2725 = -1.*t1676*t2048;
  t2734 = t71*t1972*t2378;
  t2800 = t2725 + t2734;
  t210 = Cos(var1[4]);
  t2929 = t1296*t2432;
  t2989 = t2506*t2800;
  t3005 = t2929 + t2989;
  t3199 = Cos(var1[15]);
  t3229 = -1.*t3199;
  t3241 = 1. + t3229;
  t3279 = Sin(var1[15]);
  t3323 = t2506*t2432;
  t3334 = -1.*t1296*t2800;
  t3373 = t3323 + t3334;
  t3784 = t531*t71*t210;
  t3800 = t1072*t3005;
  t3847 = t3784 + t3800;
  t4017 = Cos(var1[16]);
  t4043 = -1.*t4017;
  t4114 = 1. + t4043;
  t4168 = Sin(var1[16]);
  t4251 = t3279*t3373;
  t4282 = t3199*t3847;
  t4330 = t4251 + t4282;
  t4450 = t3199*t3373;
  t4476 = -1.*t3279*t3847;
  t4489 = t4450 + t4476;
  t4515 = Cos(var1[17]);
  t4525 = -1.*t4515;
  t4538 = 1. + t4525;
  t4564 = Sin(var1[17]);
  t4601 = -1.*t4168*t4330;
  t4613 = t4017*t4489;
  t4626 = t4601 + t4613;
  t4664 = t4017*t4330;
  t4682 = t4168*t4489;
  t4690 = t4664 + t4682;
  t4714 = Cos(var1[18]);
  t4716 = -1.*t4714;
  t4749 = 1. + t4716;
  t4789 = Sin(var1[18]);
  t4853 = t4564*t4626;
  t4861 = t4515*t4690;
  t4869 = t4853 + t4861;
  t4990 = t4515*t4626;
  t5001 = -1.*t4564*t4690;
  t5014 = t4990 + t5001;
  t5032 = Cos(var1[19]);
  t5056 = -1.*t5032;
  t5081 = 1. + t5056;
  t5113 = Sin(var1[19]);
  t5143 = -1.*t4789*t4869;
  t5166 = t4714*t5014;
  t5175 = t5143 + t5166;
  t5217 = t4714*t4869;
  t5222 = t4789*t5014;
  t5224 = t5217 + t5222;
  t1061 = -0.049*t992;
  t1082 = -0.135*t1072;
  t1175 = 0. + t1061 + t1082;
  t1380 = 0.135*t1296;
  t1552 = 0. + t1380;
  t2549 = -1.*t2506;
  t2570 = 1. + t2549;
  t2577 = -0.135*t2570;
  t2715 = 0. + t2577;
  t2835 = -0.135*t992;
  t2839 = 0.049*t1072;
  t2925 = 0. + t2835 + t2839;
  t5350 = t1676*t2048*t1972;
  t5367 = -1.*t71*t2378;
  t5375 = t5350 + t5367;
  t5380 = t71*t1676;
  t5383 = t2048*t1972*t2378;
  t5391 = t5380 + t5383;
  t3276 = -0.09*t3241;
  t3286 = 0.049*t3279;
  t3313 = 0. + t3276 + t3286;
  t5464 = t1296*t5375;
  t5466 = t2506*t5391;
  t5470 = t5464 + t5466;
  t3648 = -0.049*t3241;
  t3690 = -0.09*t3279;
  t3708 = 0. + t3648 + t3690;
  t4164 = -0.049*t4114;
  t4198 = -0.21*t4168;
  t4205 = 0. + t4164 + t4198;
  t5479 = t2506*t5375;
  t5490 = -1.*t1296*t5391;
  t5497 = t5479 + t5490;
  t5539 = t531*t210*t2048;
  t5561 = t1072*t5470;
  t5565 = t5539 + t5561;
  t4366 = -0.21*t4114;
  t4369 = 0.049*t4168;
  t4446 = 0. + t4366 + t4369;
  t4552 = -0.2707*t4538;
  t4596 = 0.0016*t4564;
  t4600 = 0. + t4552 + t4596;
  t5576 = t3279*t5497;
  t5579 = t3199*t5565;
  t5590 = t5576 + t5579;
  t5596 = t3199*t5497;
  t5603 = -1.*t3279*t5565;
  t5605 = t5596 + t5603;
  t4634 = -0.0016*t4538;
  t4651 = -0.2707*t4564;
  t4658 = 0. + t4634 + t4651;
  t4776 = 0.0184*t4749;
  t4798 = -0.7055*t4789;
  t4828 = 0. + t4776 + t4798;
  t5623 = -1.*t4168*t5590;
  t5633 = t4017*t5605;
  t5636 = t5623 + t5633;
  t5695 = t4017*t5590;
  t5705 = t4168*t5605;
  t5743 = t5695 + t5705;
  t4910 = -0.7055*t4749;
  t4944 = -0.0184*t4789;
  t4977 = 0. + t4910 + t4944;
  t5098 = -1.1135*t5081;
  t5123 = 0.0216*t5113;
  t5137 = 0. + t5098 + t5123;
  t5762 = t4564*t5636;
  t5801 = t4515*t5743;
  t5834 = t5762 + t5801;
  t5853 = t4515*t5636;
  t5858 = -1.*t4564*t5743;
  t5863 = t5853 + t5858;
  t5193 = -0.0216*t5081;
  t5207 = -1.1135*t5113;
  t5212 = 0. + t5193 + t5207;
  t5883 = -1.*t4789*t5834;
  t5908 = t4714*t5863;
  t5910 = t5883 + t5908;
  t5918 = t4714*t5834;
  t5926 = t4789*t5863;
  t5936 = t5918 + t5926;
  t6068 = t210*t1676*t1296;
  t6071 = t2506*t210*t2378;
  t6080 = t6068 + t6071;
  t6085 = t2506*t210*t1676;
  t6095 = -1.*t210*t1296*t2378;
  t6102 = t6085 + t6095;
  t6168 = -1.*t531*t1972;
  t6181 = t1072*t6080;
  t6206 = t6168 + t6181;
  t6228 = t3279*t6102;
  t6247 = t3199*t6206;
  t6248 = t6228 + t6247;
  t6258 = t3199*t6102;
  t6268 = -1.*t3279*t6206;
  t6272 = t6258 + t6268;
  t6300 = -1.*t4168*t6248;
  t6305 = t4017*t6272;
  t6314 = t6300 + t6305;
  t6361 = t4017*t6248;
  t6362 = t4168*t6272;
  t6382 = t6361 + t6362;
  t6397 = t4564*t6314;
  t6409 = t4515*t6382;
  t6417 = t6397 + t6409;
  t6429 = t4515*t6314;
  t6431 = -1.*t4564*t6382;
  t6440 = t6429 + t6431;
  t6467 = -1.*t4789*t6417;
  t6487 = t4714*t6440;
  t6505 = t6467 + t6487;
  t6519 = t4714*t6417;
  t6583 = t4789*t6440;
  t6604 = t6519 + t6583;
  p_output1[0]=0. + t1552*t2432 + t2715*t2800 + t2925*t3005 + t3313*t3373 + t3708*t3847 + t4205*t4330 + t4446*t4489 + t4600*t4626 + t4658*t4690 + t4828*t4869 + t4977*t5014 + t5137*t5175 + t5212*t5224 + 0.0306*(t5113*t5175 + t5032*t5224) - 1.1312*(t5032*t5175 - 1.*t5113*t5224) + t1175*t210*t71 - 0.1305*(t3005*t531 - 1.*t1072*t210*t71) + var1[0];
  p_output1[1]=0. + t1175*t2048*t210 + t1552*t5375 + t2715*t5391 + t2925*t5470 - 0.1305*(-1.*t1072*t2048*t210 + t531*t5470) + t3313*t5497 + t3708*t5565 + t4205*t5590 + t4446*t5605 + t4600*t5636 + t4658*t5743 + t4828*t5834 + t4977*t5863 + t5137*t5910 + t5212*t5936 + 0.0306*(t5113*t5910 + t5032*t5936) - 1.1312*(t5032*t5910 - 1.*t5113*t5936) + var1[1];
  p_output1[2]=0. - 1.*t1175*t1972 + t1552*t1676*t210 + t210*t2378*t2715 + t2925*t6080 - 0.1305*(t1072*t1972 + t531*t6080) + t3313*t6102 + t3708*t6206 + t4205*t6248 + t4446*t6272 + t4600*t6314 + t4658*t6382 + t4828*t6417 + t4977*t6440 + t5137*t6505 + t5212*t6604 + 0.0306*(t5113*t6505 + t5032*t6604) - 1.1312*(t5032*t6505 - 1.*t5113*t6604) + var1[2];
}



void p_RightToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
