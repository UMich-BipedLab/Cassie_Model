/*
 * Automatically Generated from Mathematica.
 * Mon 26 Feb 2018 15:42:39 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_MultisenseIMU_to_LeftToeBottom_src.h"

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
  double t840;
  double t1093;
  double t2223;
  double t1609;
  double t5750;
  double t5768;
  double t5802;
  double t5764;
  double t5775;
  double t5782;
  double t5743;
  double t5810;
  double t5812;
  double t5816;
  double t5832;
  double t5794;
  double t5817;
  double t5824;
  double t5728;
  double t5835;
  double t5836;
  double t5838;
  double t5847;
  double t5826;
  double t5844;
  double t5845;
  double t5698;
  double t5850;
  double t5853;
  double t5855;
  double t5871;
  double t5846;
  double t5859;
  double t5864;
  double t5681;
  double t5872;
  double t5873;
  double t5875;
  double t5892;
  double t5895;
  double t5898;
  double t5903;
  double t5904;
  double t5905;
  double t5901;
  double t5906;
  double t5907;
  double t5910;
  double t5913;
  double t5916;
  double t5908;
  double t5917;
  double t5919;
  double t5922;
  double t5924;
  double t5925;
  double t5921;
  double t5926;
  double t5927;
  double t5930;
  double t5933;
  double t5934;
  double t5949;
  double t5950;
  double t5951;
  double t5956;
  double t5957;
  double t5959;
  double t5953;
  double t5960;
  double t5961;
  double t5966;
  double t5967;
  double t5969;
  double t5963;
  double t5970;
  double t5971;
  double t5976;
  double t5977;
  double t5979;
  double t5870;
  double t5878;
  double t5879;
  double t5881;
  double t5884;
  double t5886;
  double t5929;
  double t5935;
  double t5936;
  double t5940;
  double t5941;
  double t5943;
  double t5973;
  double t5980;
  double t5981;
  double t5986;
  double t5987;
  double t5989;
  double t6010;
  double t6011;
  double t6020;
  double t6021;
  double t6030;
  double t6031;
  double t6040;
  double t6041;
  double t6050;
  double t6051;
  double t6004;
  double t6005;
  double t6006;
  double t6007;
  double t6008;
  double t6012;
  double t6013;
  double t6014;
  double t6016;
  double t6017;
  double t6018;
  double t6022;
  double t6023;
  double t6024;
  double t6026;
  double t6027;
  double t6028;
  double t6032;
  double t6033;
  double t6034;
  double t6036;
  double t6037;
  double t6038;
  double t6042;
  double t6043;
  double t6044;
  double t6046;
  double t6047;
  double t6048;
  double t6052;
  double t6053;
  double t6054;
  double t6056;
  double t6057;
  double t6058;
  t840 = Cos(var1[1]);
  t1093 = Sin(var1[0]);
  t2223 = Sin(var1[1]);
  t1609 = Cos(var1[0]);
  t5750 = Cos(var1[2]);
  t5768 = Sin(var1[2]);
  t5802 = Cos(var1[3]);
  t5764 = t5750*t1093*t2223;
  t5775 = t1609*t5768;
  t5782 = t5764 + t5775;
  t5743 = Sin(var1[3]);
  t5810 = t1609*t5750;
  t5812 = -1.*t1093*t2223*t5768;
  t5816 = t5810 + t5812;
  t5832 = Cos(var1[4]);
  t5794 = -1.*t5743*t5782;
  t5817 = t5802*t5816;
  t5824 = t5794 + t5817;
  t5728 = Sin(var1[4]);
  t5835 = t5802*t5782;
  t5836 = t5743*t5816;
  t5838 = t5835 + t5836;
  t5847 = Cos(var1[5]);
  t5826 = t5728*t5824;
  t5844 = t5832*t5838;
  t5845 = t5826 + t5844;
  t5698 = Sin(var1[5]);
  t5850 = t5832*t5824;
  t5853 = -1.*t5728*t5838;
  t5855 = t5850 + t5853;
  t5871 = Cos(var1[6]);
  t5846 = -1.*t5698*t5845;
  t5859 = t5847*t5855;
  t5864 = t5846 + t5859;
  t5681 = Sin(var1[6]);
  t5872 = t5847*t5845;
  t5873 = t5698*t5855;
  t5875 = t5872 + t5873;
  t5892 = t1609*t5750*t2223;
  t5895 = -1.*t1093*t5768;
  t5898 = t5892 + t5895;
  t5903 = -1.*t5750*t1093;
  t5904 = -1.*t1609*t2223*t5768;
  t5905 = t5903 + t5904;
  t5901 = -1.*t5743*t5898;
  t5906 = t5802*t5905;
  t5907 = t5901 + t5906;
  t5910 = t5802*t5898;
  t5913 = t5743*t5905;
  t5916 = t5910 + t5913;
  t5908 = t5728*t5907;
  t5917 = t5832*t5916;
  t5919 = t5908 + t5917;
  t5922 = t5832*t5907;
  t5924 = -1.*t5728*t5916;
  t5925 = t5922 + t5924;
  t5921 = -1.*t5698*t5919;
  t5926 = t5847*t5925;
  t5927 = t5921 + t5926;
  t5930 = t5847*t5919;
  t5933 = t5698*t5925;
  t5934 = t5930 + t5933;
  t5949 = -1.*t840*t5750*t5743;
  t5950 = -1.*t5802*t840*t5768;
  t5951 = t5949 + t5950;
  t5956 = t5802*t840*t5750;
  t5957 = -1.*t840*t5743*t5768;
  t5959 = t5956 + t5957;
  t5953 = t5728*t5951;
  t5960 = t5832*t5959;
  t5961 = t5953 + t5960;
  t5966 = t5832*t5951;
  t5967 = -1.*t5728*t5959;
  t5969 = t5966 + t5967;
  t5963 = -1.*t5698*t5961;
  t5970 = t5847*t5969;
  t5971 = t5963 + t5970;
  t5976 = t5847*t5961;
  t5977 = t5698*t5969;
  t5979 = t5976 + t5977;
  t5870 = t5681*t5864;
  t5878 = t5871*t5875;
  t5879 = t5870 + t5878;
  t5881 = t5871*t5864;
  t5884 = -1.*t5681*t5875;
  t5886 = t5881 + t5884;
  t5929 = t5681*t5927;
  t5935 = t5871*t5934;
  t5936 = t5929 + t5935;
  t5940 = t5871*t5927;
  t5941 = -1.*t5681*t5934;
  t5943 = t5940 + t5941;
  t5973 = t5681*t5971;
  t5980 = t5871*t5979;
  t5981 = t5973 + t5980;
  t5986 = t5871*t5971;
  t5987 = -1.*t5681*t5979;
  t5989 = t5986 + t5987;
  t6010 = -1.*t5750;
  t6011 = 1. + t6010;
  t6020 = -1.*t5802;
  t6021 = 1. + t6020;
  t6030 = -1.*t5832;
  t6031 = 1. + t6030;
  t6040 = -1.*t5847;
  t6041 = 1. + t6040;
  t6050 = -1.*t5871;
  t6051 = 1. + t6050;
  t6004 = -1.*t840;
  t6005 = 1. + t6004;
  t6006 = 0.135*t6005;
  t6007 = 0.049*t2223;
  t6008 = 0. + t6006 + t6007;
  t6012 = -0.049*t6011;
  t6013 = -0.09*t5768;
  t6014 = 0. + t6012 + t6013;
  t6016 = -0.09*t6011;
  t6017 = 0.049*t5768;
  t6018 = 0. + t6016 + t6017;
  t6022 = -0.049*t6021;
  t6023 = -0.21*t5743;
  t6024 = 0. + t6022 + t6023;
  t6026 = -0.21*t6021;
  t6027 = 0.049*t5743;
  t6028 = 0. + t6026 + t6027;
  t6032 = -0.2707*t6031;
  t6033 = 0.0016*t5728;
  t6034 = 0. + t6032 + t6033;
  t6036 = -0.0016*t6031;
  t6037 = -0.2707*t5728;
  t6038 = 0. + t6036 + t6037;
  t6042 = 0.0184*t6041;
  t6043 = -0.7055*t5698;
  t6044 = 0. + t6042 + t6043;
  t6046 = -0.7055*t6041;
  t6047 = -0.0184*t5698;
  t6048 = 0. + t6046 + t6047;
  t6052 = -1.1135*t6051;
  t6053 = 0.0216*t5681;
  t6054 = 0. + t6052 + t6053;
  t6056 = -0.0216*t6051;
  t6057 = -1.1135*t5681;
  t6058 = 0. + t6056 + t6057;
  p_output1[0]=0. + t1093*t840;
  p_output1[1]=0. - 1.*t1609*t840;
  p_output1[2]=0. + t2223;
  p_output1[3]=0.;
  p_output1[4]=0. - 0.642788*t5879 - 0.766044*t5886;
  p_output1[5]=0. + 0.642788*t5936 + 0.766044*t5943;
  p_output1[6]=0. + 0.642788*t5981 + 0.766044*t5989;
  p_output1[7]=0.;
  p_output1[8]=0. + 0.766044*t5879 - 0.642788*t5886;
  p_output1[9]=0. - 0.766044*t5936 + 0.642788*t5943;
  p_output1[10]=0. - 0.766044*t5981 + 0.642788*t5989;
  p_output1[11]=0.;
  p_output1[12]=0.24925 + 0.135*t1093 - 0.0306*t5879 + 1.1312*t5886 - 1.*t1093*t6008 - 1.*t1093*t2223*t6014 - 1.*t1609*t6018 - 1.*t5782*t6024 - 1.*t5816*t6028 - 1.*t5824*t6034 - 1.*t5838*t6038 - 1.*t5845*t6044 - 1.*t5855*t6048 - 1.*t5864*t6054 - 1.*t5875*t6058 - 0.1305*t1093*t840;
  p_output1[13]=-0.0302 + 0.135*(1. - 1.*t1609) + 0.0306*t5936 - 1.1312*t5943 + t1609*t6008 + t1609*t2223*t6014 - 1.*t1093*t6018 + t5898*t6024 + t5905*t6028 + t5907*t6034 + t5916*t6038 + t5919*t6044 + t5925*t6048 + t5927*t6054 + t5934*t6058 + 0.1305*t1609*t840;
  p_output1[14]=-0.047 + 0.004500000000000004*t2223 + 0.0306*t5981 - 1.1312*t5989 - 0.049*t6005 + t5951*t6034 + t5959*t6038 + t5961*t6044 + t5969*t6048 + t5971*t6054 + t5979*t6058 + t6014*t840 + t5750*t6024*t840 - 1.*t5768*t6028*t840;
  p_output1[15]=1.;
}



void H_MultisenseIMU_to_LeftToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
