/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:26 GMT-05:00
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
  double t5828;
  double t5952;
  double t5962;
  double t5954;
  double t5963;
  double t5951;
  double t5980;
  double t5983;
  double t5986;
  double t5958;
  double t5964;
  double t5975;
  double t5987;
  double t5673;
  double t6005;
  double t6009;
  double t6010;
  double t5846;
  double t5851;
  double t5936;
  double t5978;
  double t5988;
  double t5990;
  double t5994;
  double t5995;
  double t5998;
  double t6012;
  double t6019;
  double t6000;
  double t6015;
  double t6016;
  double t5666;
  double t6020;
  double t6024;
  double t6025;
  double t6034;
  double t6018;
  double t6026;
  double t6032;
  double t5649;
  double t6036;
  double t6037;
  double t6049;
  double t6060;
  double t6033;
  double t6052;
  double t6054;
  double t4039;
  double t6064;
  double t6068;
  double t6072;
  double t1656;
  double t6122;
  double t6123;
  double t6125;
  double t6111;
  double t6112;
  double t6114;
  double t6136;
  double t6139;
  double t6141;
  double t6110;
  double t6117;
  double t6126;
  double t6127;
  double t6129;
  double t6132;
  double t6135;
  double t6142;
  double t6146;
  double t6151;
  double t6152;
  double t6153;
  double t6147;
  double t6155;
  double t6157;
  double t6163;
  double t6167;
  double t6169;
  double t6086;
  double t6160;
  double t6171;
  double t6173;
  double t6176;
  double t6178;
  double t6180;
  double t6215;
  double t6216;
  double t6219;
  double t6198;
  double t6199;
  double t6200;
  double t6202;
  double t6203;
  double t6205;
  double t6210;
  double t6223;
  double t6225;
  double t6229;
  double t6231;
  double t6232;
  double t6226;
  double t6234;
  double t6235;
  double t6238;
  double t6239;
  double t6241;
  double t6237;
  double t6242;
  double t6248;
  double t6250;
  double t6255;
  double t6258;
  double t6057;
  double t6073;
  double t6076;
  double t6091;
  double t6096;
  double t6099;
  double t6174;
  double t6182;
  double t6186;
  double t6188;
  double t6190;
  double t6191;
  double t6249;
  double t6263;
  double t6265;
  double t6271;
  double t6272;
  double t6274;
  t5828 = Cos(var1[3]);
  t5952 = Cos(var1[5]);
  t5962 = Sin(var1[4]);
  t5954 = Sin(var1[3]);
  t5963 = Sin(var1[5]);
  t5951 = Cos(var1[6]);
  t5980 = t5828*t5952*t5962;
  t5983 = t5954*t5963;
  t5986 = t5980 + t5983;
  t5958 = -1.*t5952*t5954;
  t5964 = t5828*t5962*t5963;
  t5975 = t5958 + t5964;
  t5987 = Sin(var1[6]);
  t5673 = Cos(var1[8]);
  t6005 = t5951*t5986;
  t6009 = -1.*t5975*t5987;
  t6010 = t6005 + t6009;
  t5846 = Cos(var1[4]);
  t5851 = Cos(var1[7]);
  t5936 = t5828*t5846*t5851;
  t5978 = t5951*t5975;
  t5988 = t5986*t5987;
  t5990 = t5978 + t5988;
  t5994 = Sin(var1[7]);
  t5995 = t5990*t5994;
  t5998 = t5936 + t5995;
  t6012 = Sin(var1[8]);
  t6019 = Cos(var1[9]);
  t6000 = t5673*t5998;
  t6015 = t6010*t6012;
  t6016 = t6000 + t6015;
  t5666 = Sin(var1[9]);
  t6020 = t5673*t6010;
  t6024 = -1.*t5998*t6012;
  t6025 = t6020 + t6024;
  t6034 = Cos(var1[10]);
  t6018 = -1.*t5666*t6016;
  t6026 = t6019*t6025;
  t6032 = t6018 + t6026;
  t5649 = Sin(var1[10]);
  t6036 = t6019*t6016;
  t6037 = t5666*t6025;
  t6049 = t6036 + t6037;
  t6060 = Cos(var1[11]);
  t6033 = t5649*t6032;
  t6052 = t6034*t6049;
  t6054 = t6033 + t6052;
  t4039 = Sin(var1[11]);
  t6064 = t6034*t6032;
  t6068 = -1.*t5649*t6049;
  t6072 = t6064 + t6068;
  t1656 = Cos(var1[12]);
  t6122 = t5952*t5954*t5962;
  t6123 = -1.*t5828*t5963;
  t6125 = t6122 + t6123;
  t6111 = t5828*t5952;
  t6112 = t5954*t5962*t5963;
  t6114 = t6111 + t6112;
  t6136 = t5951*t6125;
  t6139 = -1.*t6114*t5987;
  t6141 = t6136 + t6139;
  t6110 = t5846*t5851*t5954;
  t6117 = t5951*t6114;
  t6126 = t6125*t5987;
  t6127 = t6117 + t6126;
  t6129 = t6127*t5994;
  t6132 = t6110 + t6129;
  t6135 = t5673*t6132;
  t6142 = t6141*t6012;
  t6146 = t6135 + t6142;
  t6151 = t5673*t6141;
  t6152 = -1.*t6132*t6012;
  t6153 = t6151 + t6152;
  t6147 = -1.*t5666*t6146;
  t6155 = t6019*t6153;
  t6157 = t6147 + t6155;
  t6163 = t6019*t6146;
  t6167 = t5666*t6153;
  t6169 = t6163 + t6167;
  t6086 = Sin(var1[12]);
  t6160 = t5649*t6157;
  t6171 = t6034*t6169;
  t6173 = t6160 + t6171;
  t6176 = t6034*t6157;
  t6178 = -1.*t5649*t6169;
  t6180 = t6176 + t6178;
  t6215 = t5846*t5952*t5951;
  t6216 = -1.*t5846*t5963*t5987;
  t6219 = t6215 + t6216;
  t6198 = -1.*t5851*t5962;
  t6199 = t5846*t5951*t5963;
  t6200 = t5846*t5952*t5987;
  t6202 = t6199 + t6200;
  t6203 = t6202*t5994;
  t6205 = t6198 + t6203;
  t6210 = t5673*t6205;
  t6223 = t6219*t6012;
  t6225 = t6210 + t6223;
  t6229 = t5673*t6219;
  t6231 = -1.*t6205*t6012;
  t6232 = t6229 + t6231;
  t6226 = -1.*t5666*t6225;
  t6234 = t6019*t6232;
  t6235 = t6226 + t6234;
  t6238 = t6019*t6225;
  t6239 = t5666*t6232;
  t6241 = t6238 + t6239;
  t6237 = t5649*t6235;
  t6242 = t6034*t6241;
  t6248 = t6237 + t6242;
  t6250 = t6034*t6235;
  t6255 = -1.*t5649*t6241;
  t6258 = t6250 + t6255;
  t6057 = -1.*t4039*t6054;
  t6073 = t6060*t6072;
  t6076 = t6057 + t6073;
  t6091 = t6060*t6054;
  t6096 = t4039*t6072;
  t6099 = t6091 + t6096;
  t6174 = -1.*t4039*t6173;
  t6182 = t6060*t6180;
  t6186 = t6174 + t6182;
  t6188 = t6060*t6173;
  t6190 = t4039*t6180;
  t6191 = t6188 + t6190;
  t6249 = -1.*t4039*t6248;
  t6263 = t6060*t6258;
  t6265 = t6249 + t6263;
  t6271 = t6060*t6248;
  t6272 = t4039*t6258;
  t6274 = t6271 + t6272;
  p_output1[0]=-1.*t1656*t6076 + t6086*t6099;
  p_output1[1]=-1.*t1656*t6186 + t6086*t6191;
  p_output1[2]=-1.*t1656*t6265 + t6086*t6274;
  p_output1[3]=t6076*t6086 + t1656*t6099;
  p_output1[4]=t6086*t6186 + t1656*t6191;
  p_output1[5]=t6086*t6265 + t1656*t6274;
  p_output1[6]=-1.*t5851*t5990 + t5828*t5846*t5994;
  p_output1[7]=t5846*t5954*t5994 - 1.*t5851*t6127;
  p_output1[8]=-1.*t5962*t5994 - 1.*t5851*t6202;
}



void R_toe_joint_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
