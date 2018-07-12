/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:33:21 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_toe_joint_left_src.h"

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
  double t1315;
  double t2912;
  double t3858;
  double t3102;
  double t4057;
  double t2704;
  double t4194;
  double t4574;
  double t4646;
  double t3171;
  double t4073;
  double t4152;
  double t4662;
  double t1306;
  double t4761;
  double t4762;
  double t4766;
  double t1404;
  double t2094;
  double t2195;
  double t4157;
  double t4686;
  double t4706;
  double t4723;
  double t4724;
  double t4727;
  double t4782;
  double t4796;
  double t4739;
  double t4787;
  double t4793;
  double t799;
  double t4802;
  double t4804;
  double t4824;
  double t4872;
  double t4795;
  double t4850;
  double t4854;
  double t518;
  double t4873;
  double t4875;
  double t4886;
  double t4922;
  double t4865;
  double t4890;
  double t4891;
  double t246;
  double t4927;
  double t4930;
  double t4933;
  double t215;
  double t5096;
  double t5131;
  double t5136;
  double t5068;
  double t5070;
  double t5072;
  double t5159;
  double t5167;
  double t5169;
  double t5060;
  double t5094;
  double t5141;
  double t5143;
  double t5148;
  double t5149;
  double t5150;
  double t5177;
  double t5179;
  double t5220;
  double t5245;
  double t5260;
  double t5201;
  double t5266;
  double t5268;
  double t5273;
  double t5277;
  double t5280;
  double t4969;
  double t5269;
  double t5285;
  double t5290;
  double t5307;
  double t5314;
  double t5323;
  double t5452;
  double t5454;
  double t5457;
  double t5381;
  double t5387;
  double t5390;
  double t5413;
  double t5426;
  double t5437;
  double t5442;
  double t5460;
  double t5468;
  double t5505;
  double t5509;
  double t5515;
  double t5477;
  double t5521;
  double t5526;
  double t5551;
  double t5555;
  double t5566;
  double t5543;
  double t5575;
  double t5589;
  double t5612;
  double t5614;
  double t5615;
  double t4897;
  double t4954;
  double t4958;
  double t4998;
  double t5025;
  double t5035;
  double t5291;
  double t5327;
  double t5328;
  double t5348;
  double t5356;
  double t5365;
  double t5608;
  double t5617;
  double t5624;
  double t5629;
  double t5638;
  double t5647;
  t1315 = Cos(var1[3]);
  t2912 = Cos(var1[5]);
  t3858 = Sin(var1[4]);
  t3102 = Sin(var1[3]);
  t4057 = Sin(var1[5]);
  t2704 = Cos(var1[6]);
  t4194 = t1315*t2912*t3858;
  t4574 = t3102*t4057;
  t4646 = t4194 + t4574;
  t3171 = -1.*t2912*t3102;
  t4073 = t1315*t3858*t4057;
  t4152 = t3171 + t4073;
  t4662 = Sin(var1[6]);
  t1306 = Cos(var1[8]);
  t4761 = t2704*t4646;
  t4762 = -1.*t4152*t4662;
  t4766 = t4761 + t4762;
  t1404 = Cos(var1[4]);
  t2094 = Cos(var1[7]);
  t2195 = t1315*t1404*t2094;
  t4157 = t2704*t4152;
  t4686 = t4646*t4662;
  t4706 = t4157 + t4686;
  t4723 = Sin(var1[7]);
  t4724 = t4706*t4723;
  t4727 = t2195 + t4724;
  t4782 = Sin(var1[8]);
  t4796 = Cos(var1[9]);
  t4739 = t1306*t4727;
  t4787 = t4766*t4782;
  t4793 = t4739 + t4787;
  t799 = Sin(var1[9]);
  t4802 = t1306*t4766;
  t4804 = -1.*t4727*t4782;
  t4824 = t4802 + t4804;
  t4872 = Cos(var1[10]);
  t4795 = -1.*t799*t4793;
  t4850 = t4796*t4824;
  t4854 = t4795 + t4850;
  t518 = Sin(var1[10]);
  t4873 = t4796*t4793;
  t4875 = t799*t4824;
  t4886 = t4873 + t4875;
  t4922 = Cos(var1[11]);
  t4865 = t518*t4854;
  t4890 = t4872*t4886;
  t4891 = t4865 + t4890;
  t246 = Sin(var1[11]);
  t4927 = t4872*t4854;
  t4930 = -1.*t518*t4886;
  t4933 = t4927 + t4930;
  t215 = Cos(var1[12]);
  t5096 = t2912*t3102*t3858;
  t5131 = -1.*t1315*t4057;
  t5136 = t5096 + t5131;
  t5068 = t1315*t2912;
  t5070 = t3102*t3858*t4057;
  t5072 = t5068 + t5070;
  t5159 = t2704*t5136;
  t5167 = -1.*t5072*t4662;
  t5169 = t5159 + t5167;
  t5060 = t1404*t2094*t3102;
  t5094 = t2704*t5072;
  t5141 = t5136*t4662;
  t5143 = t5094 + t5141;
  t5148 = t5143*t4723;
  t5149 = t5060 + t5148;
  t5150 = t1306*t5149;
  t5177 = t5169*t4782;
  t5179 = t5150 + t5177;
  t5220 = t1306*t5169;
  t5245 = -1.*t5149*t4782;
  t5260 = t5220 + t5245;
  t5201 = -1.*t799*t5179;
  t5266 = t4796*t5260;
  t5268 = t5201 + t5266;
  t5273 = t4796*t5179;
  t5277 = t799*t5260;
  t5280 = t5273 + t5277;
  t4969 = Sin(var1[12]);
  t5269 = t518*t5268;
  t5285 = t4872*t5280;
  t5290 = t5269 + t5285;
  t5307 = t4872*t5268;
  t5314 = -1.*t518*t5280;
  t5323 = t5307 + t5314;
  t5452 = t1404*t2912*t2704;
  t5454 = -1.*t1404*t4057*t4662;
  t5457 = t5452 + t5454;
  t5381 = -1.*t2094*t3858;
  t5387 = t1404*t2704*t4057;
  t5390 = t1404*t2912*t4662;
  t5413 = t5387 + t5390;
  t5426 = t5413*t4723;
  t5437 = t5381 + t5426;
  t5442 = t1306*t5437;
  t5460 = t5457*t4782;
  t5468 = t5442 + t5460;
  t5505 = t1306*t5457;
  t5509 = -1.*t5437*t4782;
  t5515 = t5505 + t5509;
  t5477 = -1.*t799*t5468;
  t5521 = t4796*t5515;
  t5526 = t5477 + t5521;
  t5551 = t4796*t5468;
  t5555 = t799*t5515;
  t5566 = t5551 + t5555;
  t5543 = t518*t5526;
  t5575 = t4872*t5566;
  t5589 = t5543 + t5575;
  t5612 = t4872*t5526;
  t5614 = -1.*t518*t5566;
  t5615 = t5612 + t5614;
  t4897 = -1.*t246*t4891;
  t4954 = t4922*t4933;
  t4958 = t4897 + t4954;
  t4998 = t4922*t4891;
  t5025 = t246*t4933;
  t5035 = t4998 + t5025;
  t5291 = -1.*t246*t5290;
  t5327 = t4922*t5323;
  t5328 = t5291 + t5327;
  t5348 = t4922*t5290;
  t5356 = t246*t5323;
  t5365 = t5348 + t5356;
  t5608 = -1.*t246*t5589;
  t5617 = t4922*t5615;
  t5624 = t5608 + t5617;
  t5629 = t4922*t5589;
  t5638 = t246*t5615;
  t5647 = t5629 + t5638;
  p_output1[0]=-1.*t215*t4958 + t4969*t5035;
  p_output1[1]=-1.*t215*t5328 + t4969*t5365;
  p_output1[2]=-1.*t215*t5624 + t4969*t5647;
  p_output1[3]=t4958*t4969 + t215*t5035;
  p_output1[4]=t4969*t5328 + t215*t5365;
  p_output1[5]=t4969*t5624 + t215*t5647;
  p_output1[6]=-1.*t2094*t4706 + t1315*t1404*t4723;
  p_output1[7]=t1404*t3102*t4723 - 1.*t2094*t5143;
  p_output1[8]=-1.*t3858*t4723 - 1.*t2094*t5413;
}



void R_toe_joint_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
