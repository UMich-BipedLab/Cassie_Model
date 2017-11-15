/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:44 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_knee_joint_right_src.h"

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
  double t949;
  double t1128;
  double t882;
  double t974;
  double t1138;
  double t1851;
  double t1057;
  double t1569;
  double t1794;
  double t872;
  double t1941;
  double t2002;
  double t2009;
  double t2084;
  double t1822;
  double t2063;
  double t2070;
  double t742;
  double t2089;
  double t2092;
  double t2114;
  double t2117;
  double t2119;
  double t2131;
  double t2244;
  double t2277;
  double t2425;
  double t347;
  double t2883;
  double t3031;
  double t3035;
  double t3064;
  double t3284;
  double t3413;
  double t2542;
  double t3060;
  double t3442;
  double t3522;
  double t3762;
  double t4007;
  double t4179;
  double t4392;
  double t4439;
  double t4458;
  double t7667;
  double t7676;
  double t7712;
  double t7716;
  double t7722;
  double t7742;
  double t7745;
  double t7750;
  double t7752;
  double t2079;
  double t2444;
  double t2447;
  double t2641;
  double t2658;
  double t2736;
  double t3633;
  double t4583;
  double t4867;
  double t5128;
  double t5134;
  double t5251;
  double t7715;
  double t7776;
  double t7784;
  double t7806;
  double t7809;
  double t7815;
  double t7893;
  double t7894;
  double t7926;
  double t7927;
  double t7948;
  double t7950;
  double t7838;
  double t7840;
  double t7841;
  double t7895;
  double t7896;
  double t7897;
  double t7901;
  double t7903;
  double t7905;
  double t7910;
  double t7911;
  double t7915;
  double t7920;
  double t7922;
  double t7923;
  double t7930;
  double t7931;
  double t7932;
  double t7939;
  double t7940;
  double t7942;
  double t7954;
  double t7955;
  double t7957;
  double t7960;
  double t7962;
  double t7965;
  double t7845;
  double t7846;
  double t7857;
  double t7860;
  double t7863;
  double t7865;
  t949 = Cos(var1[5]);
  t1128 = Sin(var1[3]);
  t882 = Cos(var1[3]);
  t974 = Sin(var1[4]);
  t1138 = Sin(var1[5]);
  t1851 = Sin(var1[13]);
  t1057 = t882*t949*t974;
  t1569 = t1128*t1138;
  t1794 = t1057 + t1569;
  t872 = Cos(var1[13]);
  t1941 = -1.*t949*t1128;
  t2002 = t882*t974*t1138;
  t2009 = t1941 + t2002;
  t2084 = Cos(var1[15]);
  t1822 = t872*t1794;
  t2063 = -1.*t1851*t2009;
  t2070 = t1822 + t2063;
  t742 = Sin(var1[15]);
  t2089 = Cos(var1[14]);
  t2092 = Cos(var1[4]);
  t2114 = t2089*t882*t2092;
  t2117 = Sin(var1[14]);
  t2119 = t1851*t1794;
  t2131 = t872*t2009;
  t2244 = t2119 + t2131;
  t2277 = t2117*t2244;
  t2425 = t2114 + t2277;
  t347 = Sin(var1[16]);
  t2883 = t949*t1128*t974;
  t3031 = -1.*t882*t1138;
  t3035 = t2883 + t3031;
  t3064 = t882*t949;
  t3284 = t1128*t974*t1138;
  t3413 = t3064 + t3284;
  t2542 = Cos(var1[16]);
  t3060 = t872*t3035;
  t3442 = -1.*t1851*t3413;
  t3522 = t3060 + t3442;
  t3762 = t2089*t2092*t1128;
  t4007 = t1851*t3035;
  t4179 = t872*t3413;
  t4392 = t4007 + t4179;
  t4439 = t2117*t4392;
  t4458 = t3762 + t4439;
  t7667 = t872*t2092*t949;
  t7676 = -1.*t2092*t1851*t1138;
  t7712 = t7667 + t7676;
  t7716 = -1.*t2089*t974;
  t7722 = t2092*t949*t1851;
  t7742 = t872*t2092*t1138;
  t7745 = t7722 + t7742;
  t7750 = t2117*t7745;
  t7752 = t7716 + t7750;
  t2079 = t742*t2070;
  t2444 = t2084*t2425;
  t2447 = t2079 + t2444;
  t2641 = t2084*t2070;
  t2658 = -1.*t742*t2425;
  t2736 = t2641 + t2658;
  t3633 = t742*t3522;
  t4583 = t2084*t4458;
  t4867 = t3633 + t4583;
  t5128 = t2084*t3522;
  t5134 = -1.*t742*t4458;
  t5251 = t5128 + t5134;
  t7715 = t742*t7712;
  t7776 = t2084*t7752;
  t7784 = t7715 + t7776;
  t7806 = t2084*t7712;
  t7809 = -1.*t742*t7752;
  t7815 = t7806 + t7809;
  t7893 = -1.*t2089;
  t7894 = 1. + t7893;
  t7926 = -1.*t2084;
  t7927 = 1. + t7926;
  t7948 = -1.*t2542;
  t7950 = 1. + t7948;
  t7838 = t2542*t2447;
  t7840 = t347*t2736;
  t7841 = t7838 + t7840;
  t7895 = -0.049*t7894;
  t7896 = -0.135*t2117;
  t7897 = 0. + t7895 + t7896;
  t7901 = 0.135*t1851;
  t7903 = 0. + t7901;
  t7905 = -1.*t872;
  t7910 = 1. + t7905;
  t7911 = -0.135*t7910;
  t7915 = 0. + t7911;
  t7920 = -0.135*t7894;
  t7922 = 0.049*t2117;
  t7923 = 0. + t7920 + t7922;
  t7930 = -0.09*t7927;
  t7931 = 0.049*t742;
  t7932 = 0. + t7930 + t7931;
  t7939 = -0.049*t7927;
  t7940 = -0.09*t742;
  t7942 = 0. + t7939 + t7940;
  t7954 = -0.049*t7950;
  t7955 = -0.21*t347;
  t7957 = 0. + t7954 + t7955;
  t7960 = -0.21*t7950;
  t7962 = 0.049*t347;
  t7965 = 0. + t7960 + t7962;
  t7845 = t2542*t4867;
  t7846 = t347*t5251;
  t7857 = t7845 + t7846;
  t7860 = t2542*t7784;
  t7863 = t347*t7815;
  t7865 = t7860 + t7863;
  p_output1[0]=-1.*t2542*t2736 + t2447*t347;
  p_output1[1]=t347*t4867 - 1.*t2542*t5251;
  p_output1[2]=t347*t7784 - 1.*t2542*t7815;
  p_output1[3]=0.;
  p_output1[4]=t7841;
  p_output1[5]=t7857;
  p_output1[6]=t7865;
  p_output1[7]=0.;
  p_output1[8]=-1.*t2089*t2244 + t2092*t2117*t882;
  p_output1[9]=t1128*t2092*t2117 - 1.*t2089*t4392;
  p_output1[10]=-1.*t2089*t7745 - 1.*t2117*t974;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.21*(t2542*t2736 - 1.*t2447*t347) - 0.049*t7841 + t1794*t7903 + t2009*t7915 + t2244*t7923 + t2070*t7932 + t2425*t7942 + t2447*t7957 + t2736*t7965 + t2092*t7897*t882 - 0.1305*(t2089*t2244 - 1.*t2092*t2117*t882) + var1[0];
  p_output1[13]=0. - 0.1305*(-1.*t1128*t2092*t2117 + t2089*t4392) - 0.21*(-1.*t347*t4867 + t2542*t5251) - 0.049*t7857 + t1128*t2092*t7897 + t3035*t7903 + t3413*t7915 + t4392*t7923 + t3522*t7932 + t4458*t7942 + t4867*t7957 + t5251*t7965 + var1[1];
  p_output1[14]=0. - 0.21*(-1.*t347*t7784 + t2542*t7815) - 0.049*t7865 + t1138*t2092*t7915 + t7745*t7923 + t7712*t7932 + t7752*t7942 + t7784*t7957 + t7815*t7965 + t2092*t7903*t949 - 1.*t7897*t974 - 0.1305*(t2089*t7745 + t2117*t974) + var1[2];
  p_output1[15]=1.;
}



void H_knee_joint_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
