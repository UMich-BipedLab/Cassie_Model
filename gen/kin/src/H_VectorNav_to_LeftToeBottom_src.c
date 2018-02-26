/*
 * Automatically Generated from Mathematica.
 * Mon 26 Feb 2018 15:42:31 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_VectorNav_to_LeftToeBottom_src.h"

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
  double t1013;
  double t4663;
  double t4638;
  double t4647;
  double t4665;
  double t4699;
  double t4657;
  double t4679;
  double t4680;
  double t4613;
  double t4700;
  double t4706;
  double t4711;
  double t4727;
  double t4693;
  double t4712;
  double t4713;
  double t4605;
  double t4729;
  double t4730;
  double t4732;
  double t4766;
  double t4714;
  double t4737;
  double t4744;
  double t4578;
  double t4767;
  double t4769;
  double t4773;
  double t842;
  double t226;
  double t4305;
  double t4797;
  double t4800;
  double t4802;
  double t4806;
  double t4808;
  double t4814;
  double t4804;
  double t4825;
  double t4835;
  double t4837;
  double t4842;
  double t4844;
  double t4836;
  double t4853;
  double t4854;
  double t4861;
  double t4869;
  double t4870;
  double t4858;
  double t4872;
  double t4876;
  double t4881;
  double t4882;
  double t4885;
  double t4914;
  double t4915;
  double t4918;
  double t4920;
  double t4922;
  double t4925;
  double t4919;
  double t4926;
  double t4928;
  double t4930;
  double t4932;
  double t4938;
  double t4929;
  double t4939;
  double t4941;
  double t4944;
  double t4946;
  double t4949;
  double t4942;
  double t4950;
  double t4952;
  double t4957;
  double t4959;
  double t4960;
  double t4758;
  double t4774;
  double t4776;
  double t4782;
  double t4783;
  double t4784;
  double t4878;
  double t4886;
  double t4887;
  double t4895;
  double t4904;
  double t4905;
  double t4953;
  double t4961;
  double t4963;
  double t4965;
  double t4966;
  double t4967;
  double t4988;
  double t4989;
  double t5009;
  double t5010;
  double t5019;
  double t5020;
  double t5029;
  double t5030;
  double t4985;
  double t4986;
  double t4998;
  double t4999;
  double t5001;
  double t5002;
  double t5003;
  double t4990;
  double t4991;
  double t4995;
  double t5005;
  double t5006;
  double t5007;
  double t5011;
  double t5012;
  double t5013;
  double t5015;
  double t5016;
  double t5017;
  double t5021;
  double t5022;
  double t5023;
  double t5025;
  double t5026;
  double t5027;
  double t5031;
  double t5032;
  double t5033;
  double t5035;
  double t5036;
  double t5037;
  double t5046;
  double t5047;
  double t5048;
  double t5051;
  double t5052;
  double t5053;
  t1013 = Cos(var1[1]);
  t4663 = Cos(var1[3]);
  t4638 = Cos(var1[2]);
  t4647 = Sin(var1[3]);
  t4665 = Sin(var1[2]);
  t4699 = Cos(var1[4]);
  t4657 = -1.*t1013*t4638*t4647;
  t4679 = -1.*t4663*t1013*t4665;
  t4680 = t4657 + t4679;
  t4613 = Sin(var1[4]);
  t4700 = t4663*t1013*t4638;
  t4706 = -1.*t1013*t4647*t4665;
  t4711 = t4700 + t4706;
  t4727 = Cos(var1[5]);
  t4693 = t4613*t4680;
  t4712 = t4699*t4711;
  t4713 = t4693 + t4712;
  t4605 = Sin(var1[5]);
  t4729 = t4699*t4680;
  t4730 = -1.*t4613*t4711;
  t4732 = t4729 + t4730;
  t4766 = Cos(var1[6]);
  t4714 = -1.*t4605*t4713;
  t4737 = t4727*t4732;
  t4744 = t4714 + t4737;
  t4578 = Sin(var1[6]);
  t4767 = t4727*t4713;
  t4769 = t4605*t4732;
  t4773 = t4767 + t4769;
  t842 = Cos(var1[0]);
  t226 = Sin(var1[1]);
  t4305 = Sin(var1[0]);
  t4797 = t842*t4638*t226;
  t4800 = -1.*t4305*t4665;
  t4802 = t4797 + t4800;
  t4806 = -1.*t4638*t4305;
  t4808 = -1.*t842*t226*t4665;
  t4814 = t4806 + t4808;
  t4804 = -1.*t4647*t4802;
  t4825 = t4663*t4814;
  t4835 = t4804 + t4825;
  t4837 = t4663*t4802;
  t4842 = t4647*t4814;
  t4844 = t4837 + t4842;
  t4836 = t4613*t4835;
  t4853 = t4699*t4844;
  t4854 = t4836 + t4853;
  t4861 = t4699*t4835;
  t4869 = -1.*t4613*t4844;
  t4870 = t4861 + t4869;
  t4858 = -1.*t4605*t4854;
  t4872 = t4727*t4870;
  t4876 = t4858 + t4872;
  t4881 = t4727*t4854;
  t4882 = t4605*t4870;
  t4885 = t4881 + t4882;
  t4914 = t4638*t4305*t226;
  t4915 = t842*t4665;
  t4918 = t4914 + t4915;
  t4920 = t842*t4638;
  t4922 = -1.*t4305*t226*t4665;
  t4925 = t4920 + t4922;
  t4919 = -1.*t4647*t4918;
  t4926 = t4663*t4925;
  t4928 = t4919 + t4926;
  t4930 = t4663*t4918;
  t4932 = t4647*t4925;
  t4938 = t4930 + t4932;
  t4929 = t4613*t4928;
  t4939 = t4699*t4938;
  t4941 = t4929 + t4939;
  t4944 = t4699*t4928;
  t4946 = -1.*t4613*t4938;
  t4949 = t4944 + t4946;
  t4942 = -1.*t4605*t4941;
  t4950 = t4727*t4949;
  t4952 = t4942 + t4950;
  t4957 = t4727*t4941;
  t4959 = t4605*t4949;
  t4960 = t4957 + t4959;
  t4758 = t4578*t4744;
  t4774 = t4766*t4773;
  t4776 = t4758 + t4774;
  t4782 = t4766*t4744;
  t4783 = -1.*t4578*t4773;
  t4784 = t4782 + t4783;
  t4878 = t4578*t4876;
  t4886 = t4766*t4885;
  t4887 = t4878 + t4886;
  t4895 = t4766*t4876;
  t4904 = -1.*t4578*t4885;
  t4905 = t4895 + t4904;
  t4953 = t4578*t4952;
  t4961 = t4766*t4960;
  t4963 = t4953 + t4961;
  t4965 = t4766*t4952;
  t4966 = -1.*t4578*t4960;
  t4967 = t4965 + t4966;
  t4988 = -1.*t4663;
  t4989 = 1. + t4988;
  t5009 = -1.*t4699;
  t5010 = 1. + t5009;
  t5019 = -1.*t4727;
  t5020 = 1. + t5019;
  t5029 = -1.*t4766;
  t5030 = 1. + t5029;
  t4985 = -1.*t1013;
  t4986 = 1. + t4985;
  t4998 = -1.*t4638;
  t4999 = 1. + t4998;
  t5001 = -0.049*t4999;
  t5002 = -0.09*t4665;
  t5003 = 0. + t5001 + t5002;
  t4990 = -0.049*t4989;
  t4991 = -0.21*t4647;
  t4995 = 0. + t4990 + t4991;
  t5005 = -0.21*t4989;
  t5006 = 0.049*t4647;
  t5007 = 0. + t5005 + t5006;
  t5011 = -0.2707*t5010;
  t5012 = 0.0016*t4613;
  t5013 = 0. + t5011 + t5012;
  t5015 = -0.0016*t5010;
  t5016 = -0.2707*t4613;
  t5017 = 0. + t5015 + t5016;
  t5021 = 0.0184*t5020;
  t5022 = -0.7055*t4605;
  t5023 = 0. + t5021 + t5022;
  t5025 = -0.7055*t5020;
  t5026 = -0.0184*t4605;
  t5027 = 0. + t5025 + t5026;
  t5031 = -1.1135*t5030;
  t5032 = 0.0216*t4578;
  t5033 = 0. + t5031 + t5032;
  t5035 = -0.0216*t5030;
  t5036 = -1.1135*t4578;
  t5037 = 0. + t5035 + t5036;
  t5046 = 0.135*t4986;
  t5047 = 0.049*t226;
  t5048 = 0. + t5046 + t5047;
  t5051 = -0.09*t4999;
  t5052 = 0.049*t4665;
  t5053 = 0. + t5051 + t5052;
  p_output1[0]=0. + t226;
  p_output1[1]=0. + t1013*t842;
  p_output1[2]=0. + t1013*t4305;
  p_output1[3]=0.;
  p_output1[4]=0. + 0.642788*t4776 + 0.766044*t4784;
  p_output1[5]=0. - 0.642788*t4887 - 0.766044*t4905;
  p_output1[6]=0. - 0.642788*t4963 - 0.766044*t4967;
  p_output1[7]=0.;
  p_output1[8]=0. - 0.766044*t4776 + 0.642788*t4784;
  p_output1[9]=0. + 0.766044*t4887 - 0.642788*t4905;
  p_output1[10]=0. + 0.766044*t4963 - 0.642788*t4967;
  p_output1[11]=0.;
  p_output1[12]=-0.03155 + 0.004500000000000004*t226 + 0.0306*t4776 - 1.1312*t4784 - 0.049*t4986 + t1013*t4638*t4995 + t1013*t5003 - 1.*t1013*t4665*t5007 + t4680*t5013 + t4711*t5017 + t4713*t5023 + t4732*t5027 + t4744*t5033 + t4773*t5037;
  p_output1[13]=0. - 0.0306*t4887 + 1.1312*t4905 - 1.*t4802*t4995 - 1.*t4814*t5007 - 1.*t4835*t5013 - 1.*t4844*t5017 - 1.*t4854*t5023 - 1.*t4870*t5027 - 1.*t4876*t5033 - 1.*t4885*t5037 + t4305*t5053 - 0.135*(1. - 1.*t842) - 0.1305*t1013*t842 - 1.*t226*t5003*t842 - 1.*t5048*t842;
  p_output1[14]=-0.07996 + 0.135*t4305 - 0.1305*t1013*t4305 - 0.0306*t4963 + 1.1312*t4967 - 1.*t4918*t4995 - 1.*t226*t4305*t5003 - 1.*t4925*t5007 - 1.*t4928*t5013 - 1.*t4938*t5017 - 1.*t4941*t5023 - 1.*t4949*t5027 - 1.*t4952*t5033 - 1.*t4960*t5037 - 1.*t4305*t5048 - 1.*t5053*t842;
  p_output1[15]=1.;
}



void H_VectorNav_to_LeftToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
