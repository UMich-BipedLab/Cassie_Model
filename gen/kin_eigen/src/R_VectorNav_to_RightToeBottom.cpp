/*
 * Automatically Generated from Mathematica.
 * Mon 26 Feb 2018 15:42:55 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_VectorNav_to_RightToeBottom.h"

#ifdef _MSC_VER
  #define INLINE __forceinline /* use __forceinline (VC++ specific) */
#else
  #define INLINE inline        /* use standard inline */
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
static void output1(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  double t300;
  double t1428;
  double t1505;
  double t1324;
  double t1543;
  double t1154;
  double t1735;
  double t1780;
  double t1788;
  double t1456;
  double t1619;
  double t1687;
  double t1793;
  double t989;
  double t2029;
  double t2051;
  double t2058;
  double t1689;
  double t1886;
  double t1967;
  double t2076;
  double t855;
  double t2288;
  double t2378;
  double t2561;
  double t2023;
  double t2183;
  double t2200;
  double t2567;
  double t243;
  double t80;
  double t324;
  double t3194;
  double t3243;
  double t3261;
  double t3117;
  double t3122;
  double t3176;
  double t3603;
  double t3692;
  double t3796;
  double t3182;
  double t3268;
  double t3286;
  double t4095;
  double t4101;
  double t4316;
  double t3304;
  double t3817;
  double t3936;
  double t4458;
  double t4531;
  double t4650;
  double t4001;
  double t4327;
  double t4339;
  double t5408;
  double t5410;
  double t6996;
  double t5100;
  double t5259;
  double t5340;
  double t7613;
  double t7674;
  double t7794;
  double t5394;
  double t7092;
  double t7506;
  double t7857;
  double t7862;
  double t7873;
  double t7591;
  double t7842;
  double t7843;
  double t7919;
  double t7921;
  double t7933;
  double t7854;
  double t7885;
  double t7896;
  double t2224;
  double t2685;
  double t2777;
  double t2905;
  double t2951;
  double t2954;
  double t4369;
  double t4662;
  double t4703;
  double t4836;
  double t4856;
  double t4878;
  double t7918;
  double t7940;
  double t7942;
  double t7955;
  double t7961;
  double t7966;
  t300 = Cos(var1[8]);
  t1428 = Cos(var1[10]);
  t1505 = Sin(var1[9]);
  t1324 = Cos(var1[9]);
  t1543 = Sin(var1[10]);
  t1154 = Cos(var1[11]);
  t1735 = -1.*t300*t1428*t1505;
  t1780 = -1.*t300*t1324*t1543;
  t1788 = t1735 + t1780;
  t1456 = t300*t1324*t1428;
  t1619 = -1.*t300*t1505*t1543;
  t1687 = t1456 + t1619;
  t1793 = Sin(var1[11]);
  t989 = Cos(var1[12]);
  t2029 = t1154*t1788;
  t2051 = -1.*t1687*t1793;
  t2058 = t2029 + t2051;
  t1689 = t1154*t1687;
  t1886 = t1788*t1793;
  t1967 = t1689 + t1886;
  t2076 = Sin(var1[12]);
  t855 = Cos(var1[13]);
  t2288 = t989*t2058;
  t2378 = -1.*t1967*t2076;
  t2561 = t2288 + t2378;
  t2023 = t989*t1967;
  t2183 = t2058*t2076;
  t2200 = t2023 + t2183;
  t2567 = Sin(var1[13]);
  t243 = Cos(var1[7]);
  t80 = Sin(var1[8]);
  t324 = Sin(var1[7]);
  t3194 = -1.*t1324*t324;
  t3243 = -1.*t243*t80*t1505;
  t3261 = t3194 + t3243;
  t3117 = t243*t1324*t80;
  t3122 = -1.*t324*t1505;
  t3176 = t3117 + t3122;
  t3603 = t1428*t3261;
  t3692 = -1.*t3176*t1543;
  t3796 = t3603 + t3692;
  t3182 = t1428*t3176;
  t3268 = t3261*t1543;
  t3286 = t3182 + t3268;
  t4095 = t1154*t3796;
  t4101 = -1.*t3286*t1793;
  t4316 = t4095 + t4101;
  t3304 = t1154*t3286;
  t3817 = t3796*t1793;
  t3936 = t3304 + t3817;
  t4458 = t989*t4316;
  t4531 = -1.*t3936*t2076;
  t4650 = t4458 + t4531;
  t4001 = t989*t3936;
  t4327 = t4316*t2076;
  t4339 = t4001 + t4327;
  t5408 = t243*t1324;
  t5410 = -1.*t324*t80*t1505;
  t6996 = t5408 + t5410;
  t5100 = t1324*t324*t80;
  t5259 = t243*t1505;
  t5340 = t5100 + t5259;
  t7613 = t1428*t6996;
  t7674 = -1.*t5340*t1543;
  t7794 = t7613 + t7674;
  t5394 = t1428*t5340;
  t7092 = t6996*t1543;
  t7506 = t5394 + t7092;
  t7857 = t1154*t7794;
  t7862 = -1.*t7506*t1793;
  t7873 = t7857 + t7862;
  t7591 = t1154*t7506;
  t7842 = t7794*t1793;
  t7843 = t7591 + t7842;
  t7919 = t989*t7873;
  t7921 = -1.*t7843*t2076;
  t7933 = t7919 + t7921;
  t7854 = t989*t7843;
  t7885 = t7873*t2076;
  t7896 = t7854 + t7885;
  t2224 = t855*t2200;
  t2685 = t2561*t2567;
  t2777 = t2224 + t2685;
  t2905 = t855*t2561;
  t2951 = -1.*t2200*t2567;
  t2954 = t2905 + t2951;
  t4369 = t855*t4339;
  t4662 = t4650*t2567;
  t4703 = t4369 + t4662;
  t4836 = t855*t4650;
  t4856 = -1.*t4339*t2567;
  t4878 = t4836 + t4856;
  t7918 = t855*t7896;
  t7940 = t7933*t2567;
  t7942 = t7918 + t7940;
  t7955 = t855*t7933;
  t7961 = -1.*t7896*t2567;
  t7966 = t7955 + t7961;

  p_output1(0)=0. + t80;
  p_output1(1)=0. + t243*t300;
  p_output1(2)=0. + t300*t324;
  p_output1(3)=0. + 0.642788*t2777 + 0.766044*t2954;
  p_output1(4)=0. - 0.642788*t4703 - 0.766044*t4878;
  p_output1(5)=0. - 0.642788*t7942 - 0.766044*t7966;
  p_output1(6)=0. - 0.766044*t2777 + 0.642788*t2954;
  p_output1(7)=0. + 0.766044*t4703 - 0.642788*t4878;
  p_output1(8)=0. + 0.766044*t7942 - 0.642788*t7966;
}


       
void R_VectorNav_to_RightToeBottom(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
