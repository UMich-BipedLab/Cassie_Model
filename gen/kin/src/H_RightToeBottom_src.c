/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:16:06 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RightToeBottom_src.h"

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
  double t47;
  double t279;
  double t415;
  double t336;
  double t445;
  double t52;
  double t177;
  double t185;
  double t193;
  double t660;
  double t391;
  double t472;
  double t555;
  double t665;
  double t691;
  double t766;
  double t612;
  double t785;
  double t812;
  double t1701;
  double t1635;
  double t1643;
  double t1659;
  double t1620;
  double t1812;
  double t1821;
  double t1874;
  double t1980;
  double t1672;
  double t1900;
  double t1911;
  double t1607;
  double t1994;
  double t2024;
  double t2059;
  double t2191;
  double t1928;
  double t2064;
  double t2113;
  double t1576;
  double t2193;
  double t2195;
  double t2208;
  double t2418;
  double t2153;
  double t2230;
  double t2231;
  double t1487;
  double t2424;
  double t2457;
  double t2458;
  double t2577;
  double t2339;
  double t2534;
  double t2536;
  double t1476;
  double t2585;
  double t2654;
  double t2661;
  double t914;
  double t915;
  double t931;
  double t1011;
  double t1012;
  double t1082;
  double t984;
  double t1088;
  double t1108;
  double t2842;
  double t2876;
  double t2886;
  double t2909;
  double t2919;
  double t2955;
  double t2905;
  double t2979;
  double t3022;
  double t3114;
  double t3120;
  double t3127;
  double t3085;
  double t3131;
  double t3153;
  double t3178;
  double t3213;
  double t3217;
  double t3173;
  double t3236;
  double t3251;
  double t3329;
  double t3330;
  double t3340;
  double t3290;
  double t3349;
  double t3379;
  double t3397;
  double t3433;
  double t3434;
  double t1346;
  double t1412;
  double t1413;
  double t3587;
  double t3622;
  double t3646;
  double t3710;
  double t3712;
  double t3714;
  double t3696;
  double t3746;
  double t3749;
  double t3768;
  double t3782;
  double t3810;
  double t3766;
  double t3811;
  double t3833;
  double t3842;
  double t3851;
  double t3908;
  double t3834;
  double t3918;
  double t3924;
  double t3944;
  double t3965;
  double t3983;
  double t3932;
  double t3985;
  double t3989;
  double t4031;
  double t4092;
  double t4104;
  double t2556;
  double t2683;
  double t2703;
  double t2719;
  double t2789;
  double t2796;
  double t3385;
  double t3435;
  double t3441;
  double t3448;
  double t3464;
  double t3494;
  double t4030;
  double t4118;
  double t4130;
  double t4142;
  double t4151;
  double t4155;
  double t4300;
  double t4307;
  double t4590;
  double t4596;
  double t4638;
  double t4641;
  double t4670;
  double t4672;
  double t4696;
  double t4698;
  double t4718;
  double t4722;
  double t4320;
  double t4358;
  double t4398;
  double t4403;
  double t4408;
  double t4479;
  double t4493;
  double t4499;
  double t4503;
  double t4566;
  double t4570;
  double t4571;
  double t4597;
  double t4601;
  double t4611;
  double t4628;
  double t4632;
  double t4633;
  double t4642;
  double t4643;
  double t4646;
  double t4650;
  double t4655;
  double t4657;
  double t4673;
  double t4674;
  double t4680;
  double t4683;
  double t4687;
  double t4688;
  double t4699;
  double t4700;
  double t4703;
  double t4706;
  double t4708;
  double t4709;
  double t4731;
  double t4734;
  double t4735;
  double t4739;
  double t4742;
  double t4743;
  t47 = Cos(var1[3]);
  t279 = Cos(var1[5]);
  t415 = Sin(var1[3]);
  t336 = Sin(var1[4]);
  t445 = Sin(var1[5]);
  t52 = Cos(var1[4]);
  t177 = Sin(var1[14]);
  t185 = Cos(var1[14]);
  t193 = Sin(var1[13]);
  t660 = Cos(var1[13]);
  t391 = t47*t279*t336;
  t472 = t415*t445;
  t555 = t391 + t472;
  t665 = -1.*t279*t415;
  t691 = t47*t336*t445;
  t766 = t665 + t691;
  t612 = t193*t555;
  t785 = t660*t766;
  t812 = t612 + t785;
  t1701 = Cos(var1[15]);
  t1635 = t660*t555;
  t1643 = -1.*t193*t766;
  t1659 = t1635 + t1643;
  t1620 = Sin(var1[15]);
  t1812 = t185*t47*t52;
  t1821 = t177*t812;
  t1874 = t1812 + t1821;
  t1980 = Cos(var1[16]);
  t1672 = t1620*t1659;
  t1900 = t1701*t1874;
  t1911 = t1672 + t1900;
  t1607 = Sin(var1[16]);
  t1994 = t1701*t1659;
  t2024 = -1.*t1620*t1874;
  t2059 = t1994 + t2024;
  t2191 = Cos(var1[17]);
  t1928 = -1.*t1607*t1911;
  t2064 = t1980*t2059;
  t2113 = t1928 + t2064;
  t1576 = Sin(var1[17]);
  t2193 = t1980*t1911;
  t2195 = t1607*t2059;
  t2208 = t2193 + t2195;
  t2418 = Cos(var1[18]);
  t2153 = t1576*t2113;
  t2230 = t2191*t2208;
  t2231 = t2153 + t2230;
  t1487 = Sin(var1[18]);
  t2424 = t2191*t2113;
  t2457 = -1.*t1576*t2208;
  t2458 = t2424 + t2457;
  t2577 = Cos(var1[19]);
  t2339 = -1.*t1487*t2231;
  t2534 = t2418*t2458;
  t2536 = t2339 + t2534;
  t1476 = Sin(var1[19]);
  t2585 = t2418*t2231;
  t2654 = t1487*t2458;
  t2661 = t2585 + t2654;
  t914 = t279*t415*t336;
  t915 = -1.*t47*t445;
  t931 = t914 + t915;
  t1011 = t47*t279;
  t1012 = t415*t336*t445;
  t1082 = t1011 + t1012;
  t984 = t193*t931;
  t1088 = t660*t1082;
  t1108 = t984 + t1088;
  t2842 = t660*t931;
  t2876 = -1.*t193*t1082;
  t2886 = t2842 + t2876;
  t2909 = t185*t52*t415;
  t2919 = t177*t1108;
  t2955 = t2909 + t2919;
  t2905 = t1620*t2886;
  t2979 = t1701*t2955;
  t3022 = t2905 + t2979;
  t3114 = t1701*t2886;
  t3120 = -1.*t1620*t2955;
  t3127 = t3114 + t3120;
  t3085 = -1.*t1607*t3022;
  t3131 = t1980*t3127;
  t3153 = t3085 + t3131;
  t3178 = t1980*t3022;
  t3213 = t1607*t3127;
  t3217 = t3178 + t3213;
  t3173 = t1576*t3153;
  t3236 = t2191*t3217;
  t3251 = t3173 + t3236;
  t3329 = t2191*t3153;
  t3330 = -1.*t1576*t3217;
  t3340 = t3329 + t3330;
  t3290 = -1.*t1487*t3251;
  t3349 = t2418*t3340;
  t3379 = t3290 + t3349;
  t3397 = t2418*t3251;
  t3433 = t1487*t3340;
  t3434 = t3397 + t3433;
  t1346 = t52*t279*t193;
  t1412 = t660*t52*t445;
  t1413 = t1346 + t1412;
  t3587 = t660*t52*t279;
  t3622 = -1.*t52*t193*t445;
  t3646 = t3587 + t3622;
  t3710 = -1.*t185*t336;
  t3712 = t177*t1413;
  t3714 = t3710 + t3712;
  t3696 = t1620*t3646;
  t3746 = t1701*t3714;
  t3749 = t3696 + t3746;
  t3768 = t1701*t3646;
  t3782 = -1.*t1620*t3714;
  t3810 = t3768 + t3782;
  t3766 = -1.*t1607*t3749;
  t3811 = t1980*t3810;
  t3833 = t3766 + t3811;
  t3842 = t1980*t3749;
  t3851 = t1607*t3810;
  t3908 = t3842 + t3851;
  t3834 = t1576*t3833;
  t3918 = t2191*t3908;
  t3924 = t3834 + t3918;
  t3944 = t2191*t3833;
  t3965 = -1.*t1576*t3908;
  t3983 = t3944 + t3965;
  t3932 = -1.*t1487*t3924;
  t3985 = t2418*t3983;
  t3989 = t3932 + t3985;
  t4031 = t2418*t3924;
  t4092 = t1487*t3983;
  t4104 = t4031 + t4092;
  t2556 = t1476*t2536;
  t2683 = t2577*t2661;
  t2703 = t2556 + t2683;
  t2719 = t2577*t2536;
  t2789 = -1.*t1476*t2661;
  t2796 = t2719 + t2789;
  t3385 = t1476*t3379;
  t3435 = t2577*t3434;
  t3441 = t3385 + t3435;
  t3448 = t2577*t3379;
  t3464 = -1.*t1476*t3434;
  t3494 = t3448 + t3464;
  t4030 = t1476*t3989;
  t4118 = t2577*t4104;
  t4130 = t4030 + t4118;
  t4142 = t2577*t3989;
  t4151 = -1.*t1476*t4104;
  t4155 = t4142 + t4151;
  t4300 = -1.*t185;
  t4307 = 1. + t4300;
  t4590 = -1.*t1701;
  t4596 = 1. + t4590;
  t4638 = -1.*t1980;
  t4641 = 1. + t4638;
  t4670 = -1.*t2191;
  t4672 = 1. + t4670;
  t4696 = -1.*t2418;
  t4698 = 1. + t4696;
  t4718 = -1.*t2577;
  t4722 = 1. + t4718;
  t4320 = -0.049*t4307;
  t4358 = -0.135*t177;
  t4398 = 0. + t4320 + t4358;
  t4403 = 0.135*t193;
  t4408 = 0. + t4403;
  t4479 = -1.*t660;
  t4493 = 1. + t4479;
  t4499 = -0.135*t4493;
  t4503 = 0. + t4499;
  t4566 = -0.135*t4307;
  t4570 = 0.049*t177;
  t4571 = 0. + t4566 + t4570;
  t4597 = -0.09*t4596;
  t4601 = 0.049*t1620;
  t4611 = 0. + t4597 + t4601;
  t4628 = -0.049*t4596;
  t4632 = -0.09*t1620;
  t4633 = 0. + t4628 + t4632;
  t4642 = -0.049*t4641;
  t4643 = -0.21*t1607;
  t4646 = 0. + t4642 + t4643;
  t4650 = -0.21*t4641;
  t4655 = 0.049*t1607;
  t4657 = 0. + t4650 + t4655;
  t4673 = -0.2707*t4672;
  t4674 = 0.0016*t1576;
  t4680 = 0. + t4673 + t4674;
  t4683 = -0.0016*t4672;
  t4687 = -0.2707*t1576;
  t4688 = 0. + t4683 + t4687;
  t4699 = 0.0184*t4698;
  t4700 = -0.7055*t1487;
  t4703 = 0. + t4699 + t4700;
  t4706 = -0.7055*t4698;
  t4708 = -0.0184*t1487;
  t4709 = 0. + t4706 + t4708;
  t4731 = -1.1135*t4722;
  t4734 = 0.0216*t1476;
  t4735 = 0. + t4731 + t4734;
  t4739 = -0.0216*t4722;
  t4742 = -1.1135*t1476;
  t4743 = 0. + t4739 + t4742;
  p_output1[0]=t177*t47*t52 - 1.*t185*t812;
  p_output1[1]=-1.*t1108*t185 + t177*t415*t52;
  p_output1[2]=-1.*t1413*t185 - 1.*t177*t336;
  p_output1[3]=0.;
  p_output1[4]=0.642788*t2703 + 0.766044*t2796;
  p_output1[5]=0.642788*t3441 + 0.766044*t3494;
  p_output1[6]=0.642788*t4130 + 0.766044*t4155;
  p_output1[7]=0.;
  p_output1[8]=-0.766044*t2703 + 0.642788*t2796;
  p_output1[9]=-0.766044*t3441 + 0.642788*t3494;
  p_output1[10]=-0.766044*t4130 + 0.642788*t4155;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.0306*t2703 - 1.1312*t2796 + t1659*t4611 + t1874*t4633 + t1911*t4646 + t2059*t4657 + t2113*t4680 + t2208*t4688 + t2231*t4703 + t2458*t4709 + t2536*t4735 + t2661*t4743 + t4398*t47*t52 + t4408*t555 + t4503*t766 + t4571*t812 - 0.1305*(-1.*t177*t47*t52 + t185*t812) + var1[0];
  p_output1[13]=0. + 0.0306*t3441 - 1.1312*t3494 + t1082*t4503 + t1108*t4571 + t2886*t4611 + t2955*t4633 + t3022*t4646 + t3127*t4657 + t3153*t4680 + t3217*t4688 + t3251*t4703 + t3340*t4709 + t3379*t4735 + t3434*t4743 + t415*t4398*t52 - 0.1305*(t1108*t185 - 1.*t177*t415*t52) + t4408*t931 + var1[1];
  p_output1[14]=0. - 0.1305*(t1413*t185 + t177*t336) + 0.0306*t4130 - 1.1312*t4155 - 1.*t336*t4398 + t1413*t4571 + t3646*t4611 + t3714*t4633 + t3749*t4646 + t3810*t4657 + t3833*t4680 + t3908*t4688 + t3924*t4703 + t3983*t4709 + t3989*t4735 + t4104*t4743 + t279*t4408*t52 + t445*t4503*t52 + var1[2];
  p_output1[15]=1.;
}



void H_RightToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
