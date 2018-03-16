/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 12:16:30 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_VectorNav_to_LeftToeBottom.h"

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
static void output1(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  double t274;
  double t1114;
  double t853;
  double t932;
  double t1120;
  double t1242;
  double t954;
  double t1121;
  double t1123;
  double t836;
  double t1246;
  double t1381;
  double t1398;
  double t1712;
  double t1210;
  double t1591;
  double t1664;
  double t827;
  double t1739;
  double t1768;
  double t1798;
  double t1894;
  double t1691;
  double t1822;
  double t1873;
  double t614;
  double t2148;
  double t2383;
  double t2396;
  double t258;
  double t88;
  double t332;
  double t3387;
  double t3537;
  double t4858;
  double t5875;
  double t5919;
  double t5998;
  double t5823;
  double t6005;
  double t6011;
  double t6051;
  double t6064;
  double t6080;
  double t6042;
  double t6113;
  double t6120;
  double t6129;
  double t6133;
  double t6136;
  double t6124;
  double t6139;
  double t6142;
  double t6146;
  double t6151;
  double t6158;
  double t6188;
  double t6189;
  double t6190;
  double t6194;
  double t6199;
  double t6207;
  double t6193;
  double t6208;
  double t6211;
  double t6217;
  double t6219;
  double t6223;
  double t6212;
  double t6224;
  double t6225;
  double t6232;
  double t6233;
  double t6236;
  double t6228;
  double t6237;
  double t6239;
  double t6250;
  double t6253;
  double t6260;
  double t1887;
  double t2404;
  double t2511;
  double t2750;
  double t3007;
  double t3023;
  double t6143;
  double t6159;
  double t6163;
  double t6177;
  double t6178;
  double t6179;
  double t6244;
  double t6261;
  double t6264;
  double t6269;
  double t6270;
  double t6272;
  double t6310;
  double t6311;
  double t6350;
  double t6355;
  double t6376;
  double t6382;
  double t6391;
  double t6392;
  double t6303;
  double t6307;
  double t6327;
  double t6330;
  double t6332;
  double t6334;
  double t6335;
  double t6316;
  double t6317;
  double t6323;
  double t6340;
  double t6342;
  double t6344;
  double t6357;
  double t6359;
  double t6362;
  double t6368;
  double t6370;
  double t6371;
  double t6383;
  double t6384;
  double t6385;
  double t6387;
  double t6388;
  double t6389;
  double t6393;
  double t6397;
  double t6398;
  double t6409;
  double t6410;
  double t6414;
  double t6437;
  double t6439;
  double t6440;
  double t6447;
  double t6451;
  double t6452;
  t274 = Cos(var1[1]);
  t1114 = Cos(var1[3]);
  t853 = Cos(var1[2]);
  t932 = Sin(var1[3]);
  t1120 = Sin(var1[2]);
  t1242 = Cos(var1[4]);
  t954 = -1.*t274*t853*t932;
  t1121 = -1.*t1114*t274*t1120;
  t1123 = t954 + t1121;
  t836 = Sin(var1[4]);
  t1246 = t1114*t274*t853;
  t1381 = -1.*t274*t932*t1120;
  t1398 = t1246 + t1381;
  t1712 = Cos(var1[5]);
  t1210 = t836*t1123;
  t1591 = t1242*t1398;
  t1664 = t1210 + t1591;
  t827 = Sin(var1[5]);
  t1739 = t1242*t1123;
  t1768 = -1.*t836*t1398;
  t1798 = t1739 + t1768;
  t1894 = Cos(var1[6]);
  t1691 = -1.*t827*t1664;
  t1822 = t1712*t1798;
  t1873 = t1691 + t1822;
  t614 = Sin(var1[6]);
  t2148 = t1712*t1664;
  t2383 = t827*t1798;
  t2396 = t2148 + t2383;
  t258 = Cos(var1[0]);
  t88 = Sin(var1[1]);
  t332 = Sin(var1[0]);
  t3387 = t258*t853*t88;
  t3537 = -1.*t332*t1120;
  t4858 = t3387 + t3537;
  t5875 = -1.*t853*t332;
  t5919 = -1.*t258*t88*t1120;
  t5998 = t5875 + t5919;
  t5823 = -1.*t932*t4858;
  t6005 = t1114*t5998;
  t6011 = t5823 + t6005;
  t6051 = t1114*t4858;
  t6064 = t932*t5998;
  t6080 = t6051 + t6064;
  t6042 = t836*t6011;
  t6113 = t1242*t6080;
  t6120 = t6042 + t6113;
  t6129 = t1242*t6011;
  t6133 = -1.*t836*t6080;
  t6136 = t6129 + t6133;
  t6124 = -1.*t827*t6120;
  t6139 = t1712*t6136;
  t6142 = t6124 + t6139;
  t6146 = t1712*t6120;
  t6151 = t827*t6136;
  t6158 = t6146 + t6151;
  t6188 = t853*t332*t88;
  t6189 = t258*t1120;
  t6190 = t6188 + t6189;
  t6194 = t258*t853;
  t6199 = -1.*t332*t88*t1120;
  t6207 = t6194 + t6199;
  t6193 = -1.*t932*t6190;
  t6208 = t1114*t6207;
  t6211 = t6193 + t6208;
  t6217 = t1114*t6190;
  t6219 = t932*t6207;
  t6223 = t6217 + t6219;
  t6212 = t836*t6211;
  t6224 = t1242*t6223;
  t6225 = t6212 + t6224;
  t6232 = t1242*t6211;
  t6233 = -1.*t836*t6223;
  t6236 = t6232 + t6233;
  t6228 = -1.*t827*t6225;
  t6237 = t1712*t6236;
  t6239 = t6228 + t6237;
  t6250 = t1712*t6225;
  t6253 = t827*t6236;
  t6260 = t6250 + t6253;
  t1887 = t614*t1873;
  t2404 = t1894*t2396;
  t2511 = t1887 + t2404;
  t2750 = t1894*t1873;
  t3007 = -1.*t614*t2396;
  t3023 = t2750 + t3007;
  t6143 = t614*t6142;
  t6159 = t1894*t6158;
  t6163 = t6143 + t6159;
  t6177 = t1894*t6142;
  t6178 = -1.*t614*t6158;
  t6179 = t6177 + t6178;
  t6244 = t614*t6239;
  t6261 = t1894*t6260;
  t6264 = t6244 + t6261;
  t6269 = t1894*t6239;
  t6270 = -1.*t614*t6260;
  t6272 = t6269 + t6270;
  t6310 = -1.*t1114;
  t6311 = 1. + t6310;
  t6350 = -1.*t1242;
  t6355 = 1. + t6350;
  t6376 = -1.*t1712;
  t6382 = 1. + t6376;
  t6391 = -1.*t1894;
  t6392 = 1. + t6391;
  t6303 = -1.*t274;
  t6307 = 1. + t6303;
  t6327 = -1.*t853;
  t6330 = 1. + t6327;
  t6332 = -0.049*t6330;
  t6334 = -0.09*t1120;
  t6335 = 0. + t6332 + t6334;
  t6316 = -0.049*t6311;
  t6317 = -0.21*t932;
  t6323 = 0. + t6316 + t6317;
  t6340 = -0.21*t6311;
  t6342 = 0.049*t932;
  t6344 = 0. + t6340 + t6342;
  t6357 = -0.2707*t6355;
  t6359 = 0.0016*t836;
  t6362 = 0. + t6357 + t6359;
  t6368 = -0.0016*t6355;
  t6370 = -0.2707*t836;
  t6371 = 0. + t6368 + t6370;
  t6383 = 0.0184*t6382;
  t6384 = -0.7055*t827;
  t6385 = 0. + t6383 + t6384;
  t6387 = -0.7055*t6382;
  t6388 = -0.0184*t827;
  t6389 = 0. + t6387 + t6388;
  t6393 = -1.1135*t6392;
  t6397 = 0.0216*t614;
  t6398 = 0. + t6393 + t6397;
  t6409 = -0.0216*t6392;
  t6410 = -1.1135*t614;
  t6414 = 0. + t6409 + t6410;
  t6437 = 0.135*t6307;
  t6439 = 0.049*t88;
  t6440 = 0. + t6437 + t6439;
  t6447 = -0.09*t6330;
  t6451 = 0.049*t1120;
  t6452 = 0. + t6447 + t6451;

  p_output1(0)=0. + t88;
  p_output1(1)=0. + t258*t274;
  p_output1(2)=0. + t274*t332;
  p_output1(3)=0.;
  p_output1(4)=0. + 0.642788*t2511 + 0.766044*t3023;
  p_output1(5)=0. - 0.642788*t6163 - 0.766044*t6179;
  p_output1(6)=0. - 0.642788*t6264 - 0.766044*t6272;
  p_output1(7)=0.;
  p_output1(8)=0. - 0.766044*t2511 + 0.642788*t3023;
  p_output1(9)=0. + 0.766044*t6163 - 0.642788*t6179;
  p_output1(10)=0. + 0.766044*t6264 - 0.642788*t6272;
  p_output1(11)=0.;
  p_output1(12)=-0.03155 + 0.0306*t2511 - 1.1312*t3023 - 0.049*t6307 + t274*t6335 - 1.*t1120*t274*t6344 + t1123*t6362 + t1398*t6371 + t1664*t6385 + t1798*t6389 + t1873*t6398 + t2396*t6414 + t274*t6323*t853 + 0.004500000000000004*t88;
  p_output1(13)=0. - 0.135*(1. - 1.*t258) - 0.1305*t258*t274 - 0.0306*t6163 + 1.1312*t6179 - 1.*t4858*t6323 - 1.*t5998*t6344 - 1.*t6011*t6362 - 1.*t6080*t6371 - 1.*t6120*t6385 - 1.*t6136*t6389 - 1.*t6142*t6398 - 1.*t6158*t6414 - 1.*t258*t6440 + t332*t6452 - 1.*t258*t6335*t88;
  p_output1(14)=-0.07996 + 0.135*t332 - 0.1305*t274*t332 - 0.0306*t6264 + 1.1312*t6272 - 1.*t6190*t6323 - 1.*t6207*t6344 - 1.*t6211*t6362 - 1.*t6223*t6371 - 1.*t6225*t6385 - 1.*t6236*t6389 - 1.*t6239*t6398 - 1.*t6260*t6414 - 1.*t332*t6440 - 1.*t258*t6452 - 1.*t332*t6335*t88;
  p_output1(15)=1.;
}


       
void H_VectorNav_to_LeftToeBottom(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
