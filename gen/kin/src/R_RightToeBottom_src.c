/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 11:08:42 GMT-04:00
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
  double t632;
  double t1030;
  double t1191;
  double t1064;
  double t1412;
  double t794;
  double t801;
  double t984;
  double t1011;
  double t1672;
  double t1088;
  double t1451;
  double t1577;
  double t1734;
  double t1771;
  double t1775;
  double t1635;
  double t1857;
  double t1932;
  double t3257;
  double t3114;
  double t3127;
  double t3173;
  double t3063;
  double t3329;
  double t3379;
  double t3433;
  double t3448;
  double t3241;
  double t3435;
  double t3441;
  double t2979;
  double t3550;
  double t3646;
  double t3712;
  double t3756;
  double t3444;
  double t3744;
  double t3746;
  double t2954;
  double t3765;
  double t3768;
  double t3801;
  double t3851;
  double t3752;
  double t3811;
  double t3833;
  double t2951;
  double t3902;
  double t3944;
  double t3957;
  double t4118;
  double t3842;
  double t3968;
  double t3985;
  double t2919;
  double t4142;
  double t4156;
  double t4171;
  double t2213;
  double t2256;
  double t2451;
  double t2536;
  double t2544;
  double t2603;
  double t2458;
  double t2703;
  double t2705;
  double t4499;
  double t4503;
  double t4533;
  double t4573;
  double t4591;
  double t4597;
  double t4570;
  double t4601;
  double t4603;
  double t4616;
  double t4620;
  double t4624;
  double t4611;
  double t4628;
  double t4633;
  double t4657;
  double t4662;
  double t4664;
  double t4648;
  double t4680;
  double t4681;
  double t4688;
  double t4705;
  double t4708;
  double t4683;
  double t4709;
  double t4715;
  double t4734;
  double t4735;
  double t4739;
  double t2730;
  double t2785;
  double t2796;
  double t4761;
  double t4767;
  double t4768;
  double t4776;
  double t4777;
  double t4779;
  double t4775;
  double t4780;
  double t4781;
  double t4790;
  double t4791;
  double t4793;
  double t4789;
  double t4796;
  double t4808;
  double t4819;
  double t4825;
  double t4837;
  double t4811;
  double t4850;
  double t4851;
  double t4865;
  double t4866;
  double t4876;
  double t4861;
  double t4890;
  double t4896;
  double t4908;
  double t4910;
  double t4914;
  double t4030;
  double t4178;
  double t4185;
  double t4240;
  double t4264;
  double t4358;
  double t4731;
  double t4742;
  double t4743;
  double t4752;
  double t4756;
  double t4757;
  double t4897;
  double t4915;
  double t4943;
  double t4965;
  double t4968;
  double t4971;
  t632 = Cos(var1[3]);
  t1030 = Cos(var1[5]);
  t1191 = Sin(var1[3]);
  t1064 = Sin(var1[4]);
  t1412 = Sin(var1[5]);
  t794 = Cos(var1[4]);
  t801 = Sin(var1[14]);
  t984 = Cos(var1[14]);
  t1011 = Sin(var1[13]);
  t1672 = Cos(var1[13]);
  t1088 = t632*t1030*t1064;
  t1451 = t1191*t1412;
  t1577 = t1088 + t1451;
  t1734 = -1.*t1030*t1191;
  t1771 = t632*t1064*t1412;
  t1775 = t1734 + t1771;
  t1635 = t1011*t1577;
  t1857 = t1672*t1775;
  t1932 = t1635 + t1857;
  t3257 = Cos(var1[15]);
  t3114 = t1672*t1577;
  t3127 = -1.*t1011*t1775;
  t3173 = t3114 + t3127;
  t3063 = Sin(var1[15]);
  t3329 = t984*t632*t794;
  t3379 = t801*t1932;
  t3433 = t3329 + t3379;
  t3448 = Cos(var1[16]);
  t3241 = t3063*t3173;
  t3435 = t3257*t3433;
  t3441 = t3241 + t3435;
  t2979 = Sin(var1[16]);
  t3550 = t3257*t3173;
  t3646 = -1.*t3063*t3433;
  t3712 = t3550 + t3646;
  t3756 = Cos(var1[17]);
  t3444 = -1.*t2979*t3441;
  t3744 = t3448*t3712;
  t3746 = t3444 + t3744;
  t2954 = Sin(var1[17]);
  t3765 = t3448*t3441;
  t3768 = t2979*t3712;
  t3801 = t3765 + t3768;
  t3851 = Cos(var1[18]);
  t3752 = t2954*t3746;
  t3811 = t3756*t3801;
  t3833 = t3752 + t3811;
  t2951 = Sin(var1[18]);
  t3902 = t3756*t3746;
  t3944 = -1.*t2954*t3801;
  t3957 = t3902 + t3944;
  t4118 = Cos(var1[19]);
  t3842 = -1.*t2951*t3833;
  t3968 = t3851*t3957;
  t3985 = t3842 + t3968;
  t2919 = Sin(var1[19]);
  t4142 = t3851*t3833;
  t4156 = t2951*t3957;
  t4171 = t4142 + t4156;
  t2213 = t1030*t1191*t1064;
  t2256 = -1.*t632*t1412;
  t2451 = t2213 + t2256;
  t2536 = t632*t1030;
  t2544 = t1191*t1064*t1412;
  t2603 = t2536 + t2544;
  t2458 = t1011*t2451;
  t2703 = t1672*t2603;
  t2705 = t2458 + t2703;
  t4499 = t1672*t2451;
  t4503 = -1.*t1011*t2603;
  t4533 = t4499 + t4503;
  t4573 = t984*t794*t1191;
  t4591 = t801*t2705;
  t4597 = t4573 + t4591;
  t4570 = t3063*t4533;
  t4601 = t3257*t4597;
  t4603 = t4570 + t4601;
  t4616 = t3257*t4533;
  t4620 = -1.*t3063*t4597;
  t4624 = t4616 + t4620;
  t4611 = -1.*t2979*t4603;
  t4628 = t3448*t4624;
  t4633 = t4611 + t4628;
  t4657 = t3448*t4603;
  t4662 = t2979*t4624;
  t4664 = t4657 + t4662;
  t4648 = t2954*t4633;
  t4680 = t3756*t4664;
  t4681 = t4648 + t4680;
  t4688 = t3756*t4633;
  t4705 = -1.*t2954*t4664;
  t4708 = t4688 + t4705;
  t4683 = -1.*t2951*t4681;
  t4709 = t3851*t4708;
  t4715 = t4683 + t4709;
  t4734 = t3851*t4681;
  t4735 = t2951*t4708;
  t4739 = t4734 + t4735;
  t2730 = t794*t1030*t1011;
  t2785 = t1672*t794*t1412;
  t2796 = t2730 + t2785;
  t4761 = t1672*t794*t1030;
  t4767 = -1.*t794*t1011*t1412;
  t4768 = t4761 + t4767;
  t4776 = -1.*t984*t1064;
  t4777 = t801*t2796;
  t4779 = t4776 + t4777;
  t4775 = t3063*t4768;
  t4780 = t3257*t4779;
  t4781 = t4775 + t4780;
  t4790 = t3257*t4768;
  t4791 = -1.*t3063*t4779;
  t4793 = t4790 + t4791;
  t4789 = -1.*t2979*t4781;
  t4796 = t3448*t4793;
  t4808 = t4789 + t4796;
  t4819 = t3448*t4781;
  t4825 = t2979*t4793;
  t4837 = t4819 + t4825;
  t4811 = t2954*t4808;
  t4850 = t3756*t4837;
  t4851 = t4811 + t4850;
  t4865 = t3756*t4808;
  t4866 = -1.*t2954*t4837;
  t4876 = t4865 + t4866;
  t4861 = -1.*t2951*t4851;
  t4890 = t3851*t4876;
  t4896 = t4861 + t4890;
  t4908 = t3851*t4851;
  t4910 = t2951*t4876;
  t4914 = t4908 + t4910;
  t4030 = t2919*t3985;
  t4178 = t4118*t4171;
  t4185 = t4030 + t4178;
  t4240 = t4118*t3985;
  t4264 = -1.*t2919*t4171;
  t4358 = t4240 + t4264;
  t4731 = t2919*t4715;
  t4742 = t4118*t4739;
  t4743 = t4731 + t4742;
  t4752 = t4118*t4715;
  t4756 = -1.*t2919*t4739;
  t4757 = t4752 + t4756;
  t4897 = t2919*t4896;
  t4915 = t4118*t4914;
  t4943 = t4897 + t4915;
  t4965 = t4118*t4896;
  t4968 = -1.*t2919*t4914;
  t4971 = t4965 + t4968;
  p_output1[0]=t632*t794*t801 - 1.*t1932*t984;
  p_output1[1]=t1191*t794*t801 - 1.*t2705*t984;
  p_output1[2]=-1.*t1064*t801 - 1.*t2796*t984;
  p_output1[3]=0.642788*t4185 + 0.766044*t4358;
  p_output1[4]=0.642788*t4743 + 0.766044*t4757;
  p_output1[5]=0.642788*t4943 + 0.766044*t4971;
  p_output1[6]=-0.766044*t4185 + 0.642788*t4358;
  p_output1[7]=-0.766044*t4743 + 0.642788*t4757;
  p_output1[8]=-0.766044*t4943 + 0.642788*t4971;
}



void R_RightToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
