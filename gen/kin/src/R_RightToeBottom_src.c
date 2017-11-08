/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:13:15 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RightToeBottom_src.h"

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
  double t580;
  double t1104;
  double t1179;
  double t1107;
  double t1210;
  double t673;
  double t876;
  double t1069;
  double t1081;
  double t1274;
  double t1133;
  double t1239;
  double t1245;
  double t1281;
  double t1285;
  double t1300;
  double t1250;
  double t1340;
  double t1343;
  double t2994;
  double t2908;
  double t2929;
  double t2976;
  double t2830;
  double t3012;
  double t3015;
  double t3027;
  double t3130;
  double t2980;
  double t3039;
  double t3061;
  double t2762;
  double t3139;
  double t3144;
  double t3145;
  double t3199;
  double t3125;
  double t3147;
  double t3175;
  double t2750;
  double t3200;
  double t3205;
  double t3249;
  double t3361;
  double t3195;
  double t3306;
  double t3337;
  double t2663;
  double t3363;
  double t3403;
  double t3410;
  double t3489;
  double t3359;
  double t3427;
  double t3435;
  double t2644;
  double t3502;
  double t3548;
  double t3566;
  double t1557;
  double t1610;
  double t1612;
  double t1717;
  double t1785;
  double t1804;
  double t1714;
  double t1832;
  double t1845;
  double t3723;
  double t3743;
  double t3781;
  double t3801;
  double t3803;
  double t3822;
  double t3795;
  double t3826;
  double t3835;
  double t3849;
  double t3909;
  double t3917;
  double t3839;
  double t3950;
  double t3996;
  double t4053;
  double t4074;
  double t4077;
  double t4042;
  double t4078;
  double t4082;
  double t4119;
  double t4133;
  double t4187;
  double t4105;
  double t4188;
  double t4190;
  double t4225;
  double t4232;
  double t4239;
  double t2337;
  double t2441;
  double t2463;
  double t4414;
  double t4420;
  double t4421;
  double t4426;
  double t4461;
  double t4462;
  double t4422;
  double t4464;
  double t4468;
  double t4500;
  double t4513;
  double t4526;
  double t4479;
  double t4547;
  double t4567;
  double t4580;
  double t4594;
  double t4609;
  double t4568;
  double t4630;
  double t4650;
  double t4681;
  double t4695;
  double t4715;
  double t4677;
  double t4726;
  double t4731;
  double t4748;
  double t4755;
  double t4766;
  double t3437;
  double t3576;
  double t3586;
  double t3621;
  double t3651;
  double t3663;
  double t4219;
  double t4256;
  double t4262;
  double t4362;
  double t4388;
  double t4392;
  double t4738;
  double t4773;
  double t4791;
  double t4811;
  double t4815;
  double t4818;
  t580 = Cos(var1[3]);
  t1104 = Cos(var1[5]);
  t1179 = Sin(var1[3]);
  t1107 = Sin(var1[4]);
  t1210 = Sin(var1[5]);
  t673 = Cos(var1[4]);
  t876 = Sin(var1[14]);
  t1069 = Cos(var1[14]);
  t1081 = Sin(var1[13]);
  t1274 = Cos(var1[13]);
  t1133 = t580*t1104*t1107;
  t1239 = t1179*t1210;
  t1245 = t1133 + t1239;
  t1281 = -1.*t1104*t1179;
  t1285 = t580*t1107*t1210;
  t1300 = t1281 + t1285;
  t1250 = t1081*t1245;
  t1340 = t1274*t1300;
  t1343 = t1250 + t1340;
  t2994 = Cos(var1[15]);
  t2908 = t1274*t1245;
  t2929 = -1.*t1081*t1300;
  t2976 = t2908 + t2929;
  t2830 = Sin(var1[15]);
  t3012 = t1069*t580*t673;
  t3015 = t876*t1343;
  t3027 = t3012 + t3015;
  t3130 = Cos(var1[16]);
  t2980 = t2830*t2976;
  t3039 = t2994*t3027;
  t3061 = t2980 + t3039;
  t2762 = Sin(var1[16]);
  t3139 = t2994*t2976;
  t3144 = -1.*t2830*t3027;
  t3145 = t3139 + t3144;
  t3199 = Cos(var1[17]);
  t3125 = -1.*t2762*t3061;
  t3147 = t3130*t3145;
  t3175 = t3125 + t3147;
  t2750 = Sin(var1[17]);
  t3200 = t3130*t3061;
  t3205 = t2762*t3145;
  t3249 = t3200 + t3205;
  t3361 = Cos(var1[18]);
  t3195 = t2750*t3175;
  t3306 = t3199*t3249;
  t3337 = t3195 + t3306;
  t2663 = Sin(var1[18]);
  t3363 = t3199*t3175;
  t3403 = -1.*t2750*t3249;
  t3410 = t3363 + t3403;
  t3489 = Cos(var1[19]);
  t3359 = -1.*t2663*t3337;
  t3427 = t3361*t3410;
  t3435 = t3359 + t3427;
  t2644 = Sin(var1[19]);
  t3502 = t3361*t3337;
  t3548 = t2663*t3410;
  t3566 = t3502 + t3548;
  t1557 = t1104*t1179*t1107;
  t1610 = -1.*t580*t1210;
  t1612 = t1557 + t1610;
  t1717 = t580*t1104;
  t1785 = t1179*t1107*t1210;
  t1804 = t1717 + t1785;
  t1714 = t1081*t1612;
  t1832 = t1274*t1804;
  t1845 = t1714 + t1832;
  t3723 = t1274*t1612;
  t3743 = -1.*t1081*t1804;
  t3781 = t3723 + t3743;
  t3801 = t1069*t673*t1179;
  t3803 = t876*t1845;
  t3822 = t3801 + t3803;
  t3795 = t2830*t3781;
  t3826 = t2994*t3822;
  t3835 = t3795 + t3826;
  t3849 = t2994*t3781;
  t3909 = -1.*t2830*t3822;
  t3917 = t3849 + t3909;
  t3839 = -1.*t2762*t3835;
  t3950 = t3130*t3917;
  t3996 = t3839 + t3950;
  t4053 = t3130*t3835;
  t4074 = t2762*t3917;
  t4077 = t4053 + t4074;
  t4042 = t2750*t3996;
  t4078 = t3199*t4077;
  t4082 = t4042 + t4078;
  t4119 = t3199*t3996;
  t4133 = -1.*t2750*t4077;
  t4187 = t4119 + t4133;
  t4105 = -1.*t2663*t4082;
  t4188 = t3361*t4187;
  t4190 = t4105 + t4188;
  t4225 = t3361*t4082;
  t4232 = t2663*t4187;
  t4239 = t4225 + t4232;
  t2337 = t673*t1104*t1081;
  t2441 = t1274*t673*t1210;
  t2463 = t2337 + t2441;
  t4414 = t1274*t673*t1104;
  t4420 = -1.*t673*t1081*t1210;
  t4421 = t4414 + t4420;
  t4426 = -1.*t1069*t1107;
  t4461 = t876*t2463;
  t4462 = t4426 + t4461;
  t4422 = t2830*t4421;
  t4464 = t2994*t4462;
  t4468 = t4422 + t4464;
  t4500 = t2994*t4421;
  t4513 = -1.*t2830*t4462;
  t4526 = t4500 + t4513;
  t4479 = -1.*t2762*t4468;
  t4547 = t3130*t4526;
  t4567 = t4479 + t4547;
  t4580 = t3130*t4468;
  t4594 = t2762*t4526;
  t4609 = t4580 + t4594;
  t4568 = t2750*t4567;
  t4630 = t3199*t4609;
  t4650 = t4568 + t4630;
  t4681 = t3199*t4567;
  t4695 = -1.*t2750*t4609;
  t4715 = t4681 + t4695;
  t4677 = -1.*t2663*t4650;
  t4726 = t3361*t4715;
  t4731 = t4677 + t4726;
  t4748 = t3361*t4650;
  t4755 = t2663*t4715;
  t4766 = t4748 + t4755;
  t3437 = t2644*t3435;
  t3576 = t3489*t3566;
  t3586 = t3437 + t3576;
  t3621 = t3489*t3435;
  t3651 = -1.*t2644*t3566;
  t3663 = t3621 + t3651;
  t4219 = t2644*t4190;
  t4256 = t3489*t4239;
  t4262 = t4219 + t4256;
  t4362 = t3489*t4190;
  t4388 = -1.*t2644*t4239;
  t4392 = t4362 + t4388;
  t4738 = t2644*t4731;
  t4773 = t3489*t4766;
  t4791 = t4738 + t4773;
  t4811 = t3489*t4731;
  t4815 = -1.*t2644*t4766;
  t4818 = t4811 + t4815;
  p_output1[0]=-1.*t1069*t1343 + t580*t673*t876;
  p_output1[1]=-1.*t1069*t1845 + t1179*t673*t876;
  p_output1[2]=-1.*t1069*t2463 - 1.*t1107*t876;
  p_output1[3]=0.642788*t3586 + 0.766044*t3663;
  p_output1[4]=0.642788*t4262 + 0.766044*t4392;
  p_output1[5]=0.642788*t4791 + 0.766044*t4818;
  p_output1[6]=-0.766044*t3586 + 0.642788*t3663;
  p_output1[7]=-0.766044*t4262 + 0.642788*t4392;
  p_output1[8]=-0.766044*t4791 + 0.642788*t4818;
}



void R_RightToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
