/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 12:16:29 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_VectorNav_to_RightToeBottom.h"

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
static void output1(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  double t45;
  double t2317;
  double t3445;
  double t5716;
  double t5766;
  double t5796;
  double t5832;
  double t5936;
  double t5947;
  double t5949;
  double t5957;
  double t5920;
  double t5930;
  double t5932;
  double t5968;
  double t5970;
  double t5971;
  double t5995;
  double t5996;
  double t5997;
  double t5999;
  double t5990;
  double t5991;
  double t5994;
  double t6008;
  double t6010;
  double t6011;
  double t6021;
  double t6023;
  double t6025;
  double t6032;
  double t6017;
  double t6018;
  double t6020;
  double t6037;
  double t6040;
  double t6041;
  double t6062;
  double t136;
  double t800;
  double t1117;
  double t2325;
  double t2478;
  double t2693;
  double t4858;
  double t5365;
  double t6072;
  double t5823;
  double t5839;
  double t5841;
  double t5882;
  double t5898;
  double t5911;
  double t6080;
  double t6081;
  double t6083;
  double t6087;
  double t6088;
  double t6089;
  double t5956;
  double t5960;
  double t5962;
  double t5981;
  double t5983;
  double t5985;
  double t6092;
  double t6095;
  double t6096;
  double t6099;
  double t6100;
  double t6103;
  double t5998;
  double t6000;
  double t6004;
  double t6012;
  double t6013;
  double t6014;
  double t6105;
  double t6106;
  double t6107;
  double t6109;
  double t6110;
  double t6111;
  double t6028;
  double t6033;
  double t6034;
  double t6042;
  double t6045;
  double t6046;
  double t6113;
  double t6114;
  double t6115;
  double t6117;
  double t6118;
  double t6119;
  double t6067;
  double t6068;
  double t6069;
  double t6073;
  double t6075;
  double t6076;
  double t6135;
  double t6136;
  double t6137;
  double t6139;
  double t6140;
  double t6141;
  double t6143;
  double t6144;
  double t6145;
  double t6147;
  double t6148;
  double t6149;
  double t6151;
  double t6152;
  double t6153;
  double t6155;
  double t6156;
  double t6157;
  double t6159;
  double t6160;
  double t6161;
  double t6163;
  double t6164;
  double t6165;
  t45 = Cos(var1[8]);
  t2317 = Cos(var1[9]);
  t3445 = Sin(var1[9]);
  t5716 = Cos(var1[10]);
  t5766 = -1.*t5716;
  t5796 = 1. + t5766;
  t5832 = Sin(var1[10]);
  t5936 = Cos(var1[11]);
  t5947 = -1.*t5936;
  t5949 = 1. + t5947;
  t5957 = Sin(var1[11]);
  t5920 = t45*t2317*t5716;
  t5930 = -1.*t45*t3445*t5832;
  t5932 = t5920 + t5930;
  t5968 = -1.*t45*t5716*t3445;
  t5970 = -1.*t45*t2317*t5832;
  t5971 = t5968 + t5970;
  t5995 = Cos(var1[12]);
  t5996 = -1.*t5995;
  t5997 = 1. + t5996;
  t5999 = Sin(var1[12]);
  t5990 = t5936*t5932;
  t5991 = t5971*t5957;
  t5994 = t5990 + t5991;
  t6008 = t5936*t5971;
  t6010 = -1.*t5932*t5957;
  t6011 = t6008 + t6010;
  t6021 = Cos(var1[13]);
  t6023 = -1.*t6021;
  t6025 = 1. + t6023;
  t6032 = Sin(var1[13]);
  t6017 = t5995*t5994;
  t6018 = t6011*t5999;
  t6020 = t6017 + t6018;
  t6037 = t5995*t6011;
  t6040 = -1.*t5994*t5999;
  t6041 = t6037 + t6040;
  t6062 = Cos(var1[7]);
  t136 = -1.*t45;
  t800 = 1. + t136;
  t1117 = Sin(var1[8]);
  t2325 = -1.*t2317;
  t2478 = 1. + t2325;
  t2693 = -0.049*t2478;
  t4858 = -0.09*t3445;
  t5365 = 0. + t2693 + t4858;
  t6072 = Sin(var1[7]);
  t5823 = -0.049*t5796;
  t5839 = -0.21*t5832;
  t5841 = 0. + t5823 + t5839;
  t5882 = -0.21*t5796;
  t5898 = 0.049*t5832;
  t5911 = 0. + t5882 + t5898;
  t6080 = t6062*t2317*t1117;
  t6081 = -1.*t6072*t3445;
  t6083 = t6080 + t6081;
  t6087 = -1.*t2317*t6072;
  t6088 = -1.*t6062*t1117*t3445;
  t6089 = t6087 + t6088;
  t5956 = -0.0016*t5949;
  t5960 = -0.2707*t5957;
  t5962 = 0. + t5956 + t5960;
  t5981 = -0.2707*t5949;
  t5983 = 0.0016*t5957;
  t5985 = 0. + t5981 + t5983;
  t6092 = t5716*t6083;
  t6095 = t6089*t5832;
  t6096 = t6092 + t6095;
  t6099 = t5716*t6089;
  t6100 = -1.*t6083*t5832;
  t6103 = t6099 + t6100;
  t5998 = 0.0184*t5997;
  t6000 = -0.7055*t5999;
  t6004 = 0. + t5998 + t6000;
  t6012 = -0.7055*t5997;
  t6013 = -0.0184*t5999;
  t6014 = 0. + t6012 + t6013;
  t6105 = t5936*t6096;
  t6106 = t6103*t5957;
  t6107 = t6105 + t6106;
  t6109 = t5936*t6103;
  t6110 = -1.*t6096*t5957;
  t6111 = t6109 + t6110;
  t6028 = -0.0216*t6025;
  t6033 = -1.1135*t6032;
  t6034 = 0. + t6028 + t6033;
  t6042 = -1.1135*t6025;
  t6045 = 0.0216*t6032;
  t6046 = 0. + t6042 + t6045;
  t6113 = t5995*t6107;
  t6114 = t6111*t5999;
  t6115 = t6113 + t6114;
  t6117 = t5995*t6111;
  t6118 = -1.*t6107*t5999;
  t6119 = t6117 + t6118;
  t6067 = -0.135*t800;
  t6068 = 0.049*t1117;
  t6069 = 0. + t6067 + t6068;
  t6073 = -0.09*t2478;
  t6075 = 0.049*t3445;
  t6076 = 0. + t6073 + t6075;
  t6135 = t2317*t6072*t1117;
  t6136 = t6062*t3445;
  t6137 = t6135 + t6136;
  t6139 = t6062*t2317;
  t6140 = -1.*t6072*t1117*t3445;
  t6141 = t6139 + t6140;
  t6143 = t5716*t6137;
  t6144 = t6141*t5832;
  t6145 = t6143 + t6144;
  t6147 = t5716*t6141;
  t6148 = -1.*t6137*t5832;
  t6149 = t6147 + t6148;
  t6151 = t5936*t6145;
  t6152 = t6149*t5957;
  t6153 = t6151 + t6152;
  t6155 = t5936*t6149;
  t6156 = -1.*t6145*t5957;
  t6157 = t6155 + t6156;
  t6159 = t5995*t6153;
  t6160 = t6157*t5999;
  t6161 = t6159 + t6160;
  t6163 = t5995*t6157;
  t6164 = -1.*t6153*t5999;
  t6165 = t6163 + t6164;

  p_output1(0)=-0.03155 - 0.004500000000000004*t1117 + t45*t5365 + t2317*t45*t5841 - 1.*t3445*t45*t5911 + t5932*t5962 + t5971*t5985 + t5994*t6004 + t6011*t6014 + t6020*t6034 - 1.1312*(-1.*t6020*t6032 + t6021*t6041) + 0.0306*(t6020*t6021 + t6032*t6041) + t6041*t6046 - 0.049*t800;
  p_output1(1)=0. + 0.135*(1. - 1.*t6062) + 0.1305*t45*t6062 - 1.*t1117*t5365*t6062 - 1.*t6062*t6069 + t6072*t6076 - 1.*t5841*t6083 - 1.*t5911*t6089 - 1.*t5962*t6096 - 1.*t5985*t6103 - 1.*t6004*t6107 - 1.*t6014*t6111 - 1.*t6034*t6115 - 1.*t6046*t6119 + 1.1312*(-1.*t6032*t6115 + t6021*t6119) - 0.0306*(t6021*t6115 + t6032*t6119);
  p_output1(2)=-0.07996 - 0.135*t6072 + 0.1305*t45*t6072 - 1.*t1117*t5365*t6072 - 1.*t6069*t6072 - 1.*t6062*t6076 - 1.*t5841*t6137 - 1.*t5911*t6141 - 1.*t5962*t6145 - 1.*t5985*t6149 - 1.*t6004*t6153 - 1.*t6014*t6157 - 1.*t6034*t6161 - 1.*t6046*t6165 + 1.1312*(-1.*t6032*t6161 + t6021*t6165) - 0.0306*(t6021*t6161 + t6032*t6165);
}


       
void p_VectorNav_to_RightToeBottom(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
