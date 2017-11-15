/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:33:04 GMT-05:00
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
  double t550;
  double t677;
  double t692;
  double t678;
  double t741;
  double t576;
  double t585;
  double t598;
  double t614;
  double t656;
  double t685;
  double t811;
  double t817;
  double t900;
  double t1235;
  double t1378;
  double t1407;
  double t572;
  double t1711;
  double t1757;
  double t1783;
  double t1904;
  double t1920;
  double t2020;
  double t2113;
  double t2285;
  double t2384;
  double t2400;
  double t2838;
  double t2847;
  double t2863;
  double t2891;
  double t2926;
  double t2938;
  double t2953;
  double t2994;
  double t2995;
  double t3009;
  double t3190;
  double t3201;
  double t3207;
  double t3280;
  double t3290;
  double t3291;
  double t3341;
  double t3433;
  double t3435;
  double t3499;
  double t3575;
  double t3622;
  double t3624;
  double t3641;
  double t3659;
  double t3675;
  double t3720;
  double t3812;
  double t3824;
  double t3825;
  double t3879;
  double t3896;
  double t3910;
  double t3984;
  double t3998;
  double t4015;
  double t4073;
  double t4123;
  double t4135;
  double t4140;
  double t4184;
  double t4198;
  double t4206;
  double t604;
  double t630;
  double t638;
  double t665;
  double t672;
  double t928;
  double t998;
  double t1087;
  double t1207;
  double t1598;
  double t1651;
  double t1698;
  double t4329;
  double t4336;
  double t4338;
  double t4368;
  double t4384;
  double t4386;
  double t2102;
  double t2167;
  double t2267;
  double t4410;
  double t4431;
  double t4451;
  double t2679;
  double t2681;
  double t2711;
  double t2943;
  double t2968;
  double t2972;
  double t4460;
  double t4464;
  double t4468;
  double t4654;
  double t4658;
  double t4659;
  double t3039;
  double t3045;
  double t3077;
  double t3310;
  double t3366;
  double t3381;
  double t4662;
  double t4665;
  double t4670;
  double t4674;
  double t4678;
  double t4681;
  double t3551;
  double t3559;
  double t3573;
  double t3683;
  double t3738;
  double t3768;
  double t4690;
  double t4699;
  double t4701;
  double t4715;
  double t4718;
  double t4721;
  double t3833;
  double t3845;
  double t3875;
  double t4038;
  double t4114;
  double t4121;
  double t4726;
  double t4728;
  double t4729;
  double t4731;
  double t4732;
  double t4733;
  double t4167;
  double t4172;
  double t4180;
  double t4735;
  double t4739;
  double t4740;
  double t4742;
  double t4743;
  double t4747;
  double t4799;
  double t4805;
  double t4807;
  double t4812;
  double t4815;
  double t4816;
  double t4836;
  double t4841;
  double t4842;
  double t4874;
  double t4878;
  double t4886;
  double t4900;
  double t4912;
  double t4913;
  double t4923;
  double t4933;
  double t4935;
  double t4944;
  double t4945;
  double t4949;
  double t4955;
  double t4959;
  double t4966;
  double t4984;
  double t4991;
  double t4999;
  double t5014;
  double t5018;
  double t5019;
  double t5037;
  double t5047;
  double t5056;
  t550 = Cos(var1[3]);
  t677 = Cos(var1[5]);
  t692 = Sin(var1[3]);
  t678 = Sin(var1[4]);
  t741 = Sin(var1[5]);
  t576 = Cos(var1[14]);
  t585 = -1.*t576;
  t598 = 1. + t585;
  t614 = Sin(var1[14]);
  t656 = Sin(var1[13]);
  t685 = t550*t677*t678;
  t811 = t692*t741;
  t817 = t685 + t811;
  t900 = Cos(var1[13]);
  t1235 = -1.*t677*t692;
  t1378 = t550*t678*t741;
  t1407 = t1235 + t1378;
  t572 = Cos(var1[4]);
  t1711 = t656*t817;
  t1757 = t900*t1407;
  t1783 = t1711 + t1757;
  t1904 = Cos(var1[15]);
  t1920 = -1.*t1904;
  t2020 = 1. + t1920;
  t2113 = Sin(var1[15]);
  t2285 = t900*t817;
  t2384 = -1.*t656*t1407;
  t2400 = t2285 + t2384;
  t2838 = t576*t550*t572;
  t2847 = t614*t1783;
  t2863 = t2838 + t2847;
  t2891 = Cos(var1[16]);
  t2926 = -1.*t2891;
  t2938 = 1. + t2926;
  t2953 = Sin(var1[16]);
  t2994 = t2113*t2400;
  t2995 = t1904*t2863;
  t3009 = t2994 + t2995;
  t3190 = t1904*t2400;
  t3201 = -1.*t2113*t2863;
  t3207 = t3190 + t3201;
  t3280 = Cos(var1[17]);
  t3290 = -1.*t3280;
  t3291 = 1. + t3290;
  t3341 = Sin(var1[17]);
  t3433 = -1.*t2953*t3009;
  t3435 = t2891*t3207;
  t3499 = t3433 + t3435;
  t3575 = t2891*t3009;
  t3622 = t2953*t3207;
  t3624 = t3575 + t3622;
  t3641 = Cos(var1[18]);
  t3659 = -1.*t3641;
  t3675 = 1. + t3659;
  t3720 = Sin(var1[18]);
  t3812 = t3341*t3499;
  t3824 = t3280*t3624;
  t3825 = t3812 + t3824;
  t3879 = t3280*t3499;
  t3896 = -1.*t3341*t3624;
  t3910 = t3879 + t3896;
  t3984 = Cos(var1[19]);
  t3998 = -1.*t3984;
  t4015 = 1. + t3998;
  t4073 = Sin(var1[19]);
  t4123 = -1.*t3720*t3825;
  t4135 = t3641*t3910;
  t4140 = t4123 + t4135;
  t4184 = t3641*t3825;
  t4198 = t3720*t3910;
  t4206 = t4184 + t4198;
  t604 = -0.049*t598;
  t630 = -0.135*t614;
  t638 = 0. + t604 + t630;
  t665 = 0.135*t656;
  t672 = 0. + t665;
  t928 = -1.*t900;
  t998 = 1. + t928;
  t1087 = -0.135*t998;
  t1207 = 0. + t1087;
  t1598 = -0.135*t598;
  t1651 = 0.049*t614;
  t1698 = 0. + t1598 + t1651;
  t4329 = t677*t692*t678;
  t4336 = -1.*t550*t741;
  t4338 = t4329 + t4336;
  t4368 = t550*t677;
  t4384 = t692*t678*t741;
  t4386 = t4368 + t4384;
  t2102 = -0.09*t2020;
  t2167 = 0.049*t2113;
  t2267 = 0. + t2102 + t2167;
  t4410 = t656*t4338;
  t4431 = t900*t4386;
  t4451 = t4410 + t4431;
  t2679 = -0.049*t2020;
  t2681 = -0.09*t2113;
  t2711 = 0. + t2679 + t2681;
  t2943 = -0.049*t2938;
  t2968 = -0.21*t2953;
  t2972 = 0. + t2943 + t2968;
  t4460 = t900*t4338;
  t4464 = -1.*t656*t4386;
  t4468 = t4460 + t4464;
  t4654 = t576*t572*t692;
  t4658 = t614*t4451;
  t4659 = t4654 + t4658;
  t3039 = -0.21*t2938;
  t3045 = 0.049*t2953;
  t3077 = 0. + t3039 + t3045;
  t3310 = -0.2707*t3291;
  t3366 = 0.0016*t3341;
  t3381 = 0. + t3310 + t3366;
  t4662 = t2113*t4468;
  t4665 = t1904*t4659;
  t4670 = t4662 + t4665;
  t4674 = t1904*t4468;
  t4678 = -1.*t2113*t4659;
  t4681 = t4674 + t4678;
  t3551 = -0.0016*t3291;
  t3559 = -0.2707*t3341;
  t3573 = 0. + t3551 + t3559;
  t3683 = 0.0184*t3675;
  t3738 = -0.7055*t3720;
  t3768 = 0. + t3683 + t3738;
  t4690 = -1.*t2953*t4670;
  t4699 = t2891*t4681;
  t4701 = t4690 + t4699;
  t4715 = t2891*t4670;
  t4718 = t2953*t4681;
  t4721 = t4715 + t4718;
  t3833 = -0.7055*t3675;
  t3845 = -0.0184*t3720;
  t3875 = 0. + t3833 + t3845;
  t4038 = -1.1135*t4015;
  t4114 = 0.0216*t4073;
  t4121 = 0. + t4038 + t4114;
  t4726 = t3341*t4701;
  t4728 = t3280*t4721;
  t4729 = t4726 + t4728;
  t4731 = t3280*t4701;
  t4732 = -1.*t3341*t4721;
  t4733 = t4731 + t4732;
  t4167 = -0.0216*t4015;
  t4172 = -1.1135*t4073;
  t4180 = 0. + t4167 + t4172;
  t4735 = -1.*t3720*t4729;
  t4739 = t3641*t4733;
  t4740 = t4735 + t4739;
  t4742 = t3641*t4729;
  t4743 = t3720*t4733;
  t4747 = t4742 + t4743;
  t4799 = t572*t677*t656;
  t4805 = t900*t572*t741;
  t4807 = t4799 + t4805;
  t4812 = t900*t572*t677;
  t4815 = -1.*t572*t656*t741;
  t4816 = t4812 + t4815;
  t4836 = -1.*t576*t678;
  t4841 = t614*t4807;
  t4842 = t4836 + t4841;
  t4874 = t2113*t4816;
  t4878 = t1904*t4842;
  t4886 = t4874 + t4878;
  t4900 = t1904*t4816;
  t4912 = -1.*t2113*t4842;
  t4913 = t4900 + t4912;
  t4923 = -1.*t2953*t4886;
  t4933 = t2891*t4913;
  t4935 = t4923 + t4933;
  t4944 = t2891*t4886;
  t4945 = t2953*t4913;
  t4949 = t4944 + t4945;
  t4955 = t3341*t4935;
  t4959 = t3280*t4949;
  t4966 = t4955 + t4959;
  t4984 = t3280*t4935;
  t4991 = -1.*t3341*t4949;
  t4999 = t4984 + t4991;
  t5014 = -1.*t3720*t4966;
  t5018 = t3641*t4999;
  t5019 = t5014 + t5018;
  t5037 = t3641*t4966;
  t5047 = t3720*t4999;
  t5056 = t5037 + t5047;
  p_output1[0]=0. + t1207*t1407 + t1698*t1783 + t2267*t2400 + t2711*t2863 + t2972*t3009 + t3077*t3207 + t3381*t3499 + t3573*t3624 + t3768*t3825 + t3875*t3910 + t4121*t4140 + t4180*t4206 + 0.0306*(t4073*t4140 + t3984*t4206) - 1.1312*(t3984*t4140 - 1.*t4073*t4206) - 0.1305*(t1783*t576 - 1.*t550*t572*t614) + t550*t572*t638 + t672*t817 + var1[0];
  p_output1[1]=0. + t1207*t4386 + t1698*t4451 + t2267*t4468 + t2711*t4659 + t2972*t4670 + t3077*t4681 + t3381*t4701 + t3573*t4721 + t3768*t4729 + t3875*t4733 + t4121*t4740 + t4180*t4747 + 0.0306*(t4073*t4740 + t3984*t4747) - 1.1312*(t3984*t4740 - 1.*t4073*t4747) + t4338*t672 + t572*t638*t692 - 0.1305*(t4451*t576 - 1.*t572*t614*t692) + var1[1];
  p_output1[2]=0. + t1698*t4807 + t2267*t4816 + t2711*t4842 + t2972*t4886 + t3077*t4913 + t3381*t4935 + t3573*t4949 + t3768*t4966 + t3875*t4999 + t4121*t5019 + t4180*t5056 + 0.0306*(t4073*t5019 + t3984*t5056) - 1.1312*(t3984*t5019 - 1.*t4073*t5056) + t572*t672*t677 - 1.*t638*t678 - 0.1305*(t4807*t576 + t614*t678) + t1207*t572*t741 + var1[2];
}



void p_RightToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
