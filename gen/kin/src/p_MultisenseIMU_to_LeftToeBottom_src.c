/*
 * Automatically Generated from Mathematica.
 * Mon 26 Feb 2018 15:42:41 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_MultisenseIMU_to_LeftToeBottom_src.h"

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
  double t756;
  double t978;
  double t1465;
  double t2015;
  double t2067;
  double t2501;
  double t2997;
  double t6022;
  double t6072;
  double t6086;
  double t6092;
  double t6106;
  double t6116;
  double t6127;
  double t6134;
  double t6154;
  double t6155;
  double t6158;
  double t6163;
  double t6171;
  double t6174;
  double t6177;
  double t6182;
  double t6185;
  double t6188;
  double t6200;
  double t6201;
  double t6203;
  double t6206;
  double t6207;
  double t6208;
  double t6210;
  double t6213;
  double t6214;
  double t6215;
  double t6220;
  double t6221;
  double t6222;
  double t6226;
  double t6229;
  double t6230;
  double t6233;
  double t6236;
  double t6238;
  double t6239;
  double t6246;
  double t6248;
  double t6250;
  double t1354;
  double t1446;
  double t1454;
  double t1758;
  double t1865;
  double t2736;
  double t3189;
  double t3807;
  double t6026;
  double t6032;
  double t6046;
  double t6103;
  double t6112;
  double t6115;
  double t6146;
  double t6150;
  double t6153;
  double t6176;
  double t6180;
  double t6181;
  double t6271;
  double t6272;
  double t6273;
  double t6277;
  double t6278;
  double t6280;
  double t6194;
  double t6197;
  double t6199;
  double t6209;
  double t6211;
  double t6212;
  double t6283;
  double t6284;
  double t6286;
  double t6289;
  double t6290;
  double t6292;
  double t6217;
  double t6218;
  double t6219;
  double t6232;
  double t6234;
  double t6235;
  double t6294;
  double t6295;
  double t6296;
  double t6298;
  double t6299;
  double t6300;
  double t6242;
  double t6243;
  double t6245;
  double t6302;
  double t6303;
  double t6304;
  double t6306;
  double t6307;
  double t6308;
  double t6324;
  double t6325;
  double t6326;
  double t6328;
  double t6329;
  double t6330;
  double t6332;
  double t6333;
  double t6334;
  double t6336;
  double t6337;
  double t6338;
  double t6340;
  double t6341;
  double t6342;
  double t6344;
  double t6345;
  double t6346;
  t756 = Sin(var1[0]);
  t978 = Cos(var1[1]);
  t1465 = Sin(var1[1]);
  t2015 = Cos(var1[2]);
  t2067 = -1.*t2015;
  t2501 = 1. + t2067;
  t2997 = Sin(var1[2]);
  t6022 = Cos(var1[0]);
  t6072 = Cos(var1[3]);
  t6086 = -1.*t6072;
  t6092 = 1. + t6086;
  t6106 = Sin(var1[3]);
  t6116 = t2015*t756*t1465;
  t6127 = t6022*t2997;
  t6134 = t6116 + t6127;
  t6154 = t6022*t2015;
  t6155 = -1.*t756*t1465*t2997;
  t6158 = t6154 + t6155;
  t6163 = Cos(var1[4]);
  t6171 = -1.*t6163;
  t6174 = 1. + t6171;
  t6177 = Sin(var1[4]);
  t6182 = -1.*t6106*t6134;
  t6185 = t6072*t6158;
  t6188 = t6182 + t6185;
  t6200 = t6072*t6134;
  t6201 = t6106*t6158;
  t6203 = t6200 + t6201;
  t6206 = Cos(var1[5]);
  t6207 = -1.*t6206;
  t6208 = 1. + t6207;
  t6210 = Sin(var1[5]);
  t6213 = t6177*t6188;
  t6214 = t6163*t6203;
  t6215 = t6213 + t6214;
  t6220 = t6163*t6188;
  t6221 = -1.*t6177*t6203;
  t6222 = t6220 + t6221;
  t6226 = Cos(var1[6]);
  t6229 = -1.*t6226;
  t6230 = 1. + t6229;
  t6233 = Sin(var1[6]);
  t6236 = -1.*t6210*t6215;
  t6238 = t6206*t6222;
  t6239 = t6236 + t6238;
  t6246 = t6206*t6215;
  t6248 = t6210*t6222;
  t6250 = t6246 + t6248;
  t1354 = -1.*t978;
  t1446 = 1. + t1354;
  t1454 = 0.135*t1446;
  t1758 = 0.049*t1465;
  t1865 = 0. + t1454 + t1758;
  t2736 = -0.049*t2501;
  t3189 = -0.09*t2997;
  t3807 = 0. + t2736 + t3189;
  t6026 = -0.09*t2501;
  t6032 = 0.049*t2997;
  t6046 = 0. + t6026 + t6032;
  t6103 = -0.049*t6092;
  t6112 = -0.21*t6106;
  t6115 = 0. + t6103 + t6112;
  t6146 = -0.21*t6092;
  t6150 = 0.049*t6106;
  t6153 = 0. + t6146 + t6150;
  t6176 = -0.2707*t6174;
  t6180 = 0.0016*t6177;
  t6181 = 0. + t6176 + t6180;
  t6271 = t6022*t2015*t1465;
  t6272 = -1.*t756*t2997;
  t6273 = t6271 + t6272;
  t6277 = -1.*t2015*t756;
  t6278 = -1.*t6022*t1465*t2997;
  t6280 = t6277 + t6278;
  t6194 = -0.0016*t6174;
  t6197 = -0.2707*t6177;
  t6199 = 0. + t6194 + t6197;
  t6209 = 0.0184*t6208;
  t6211 = -0.7055*t6210;
  t6212 = 0. + t6209 + t6211;
  t6283 = -1.*t6106*t6273;
  t6284 = t6072*t6280;
  t6286 = t6283 + t6284;
  t6289 = t6072*t6273;
  t6290 = t6106*t6280;
  t6292 = t6289 + t6290;
  t6217 = -0.7055*t6208;
  t6218 = -0.0184*t6210;
  t6219 = 0. + t6217 + t6218;
  t6232 = -1.1135*t6230;
  t6234 = 0.0216*t6233;
  t6235 = 0. + t6232 + t6234;
  t6294 = t6177*t6286;
  t6295 = t6163*t6292;
  t6296 = t6294 + t6295;
  t6298 = t6163*t6286;
  t6299 = -1.*t6177*t6292;
  t6300 = t6298 + t6299;
  t6242 = -0.0216*t6230;
  t6243 = -1.1135*t6233;
  t6245 = 0. + t6242 + t6243;
  t6302 = -1.*t6210*t6296;
  t6303 = t6206*t6300;
  t6304 = t6302 + t6303;
  t6306 = t6206*t6296;
  t6307 = t6210*t6300;
  t6308 = t6306 + t6307;
  t6324 = -1.*t978*t2015*t6106;
  t6325 = -1.*t6072*t978*t2997;
  t6326 = t6324 + t6325;
  t6328 = t6072*t978*t2015;
  t6329 = -1.*t978*t6106*t2997;
  t6330 = t6328 + t6329;
  t6332 = t6177*t6326;
  t6333 = t6163*t6330;
  t6334 = t6332 + t6333;
  t6336 = t6163*t6326;
  t6337 = -1.*t6177*t6330;
  t6338 = t6336 + t6337;
  t6340 = -1.*t6210*t6334;
  t6341 = t6206*t6338;
  t6342 = t6340 + t6341;
  t6344 = t6206*t6334;
  t6345 = t6210*t6338;
  t6346 = t6344 + t6345;
  p_output1[0]=0.24925 - 1.*t6022*t6046 - 1.*t6115*t6134 - 1.*t6153*t6158 - 1.*t6181*t6188 - 1.*t6199*t6203 - 1.*t6212*t6215 - 1.*t6219*t6222 - 1.*t6235*t6239 - 1.*t6245*t6250 - 0.0306*(t6233*t6239 + t6226*t6250) + 1.1312*(t6226*t6239 - 1.*t6233*t6250) + 0.135*t756 - 1.*t1865*t756 - 1.*t1465*t3807*t756 - 0.1305*t756*t978;
  p_output1[1]=-0.0302 + 0.135*(1. - 1.*t6022) + t1865*t6022 + t1465*t3807*t6022 + t6115*t6273 + t6153*t6280 + t6181*t6286 + t6199*t6292 + t6212*t6296 + t6219*t6300 + t6235*t6304 + t6245*t6308 + 0.0306*(t6233*t6304 + t6226*t6308) - 1.1312*(t6226*t6304 - 1.*t6233*t6308) - 1.*t6046*t756 + 0.1305*t6022*t978;
  p_output1[2]=-0.047 - 0.049*t1446 + 0.004500000000000004*t1465 + t6181*t6326 + t6199*t6330 + t6212*t6334 + t6219*t6338 + t6235*t6342 + t6245*t6346 + 0.0306*(t6233*t6342 + t6226*t6346) - 1.1312*(t6226*t6342 - 1.*t6233*t6346) + t3807*t978 + t2015*t6115*t978 - 1.*t2997*t6153*t978;
}



void p_MultisenseIMU_to_LeftToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
