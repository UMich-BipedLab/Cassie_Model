/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:36:02 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_VectorNav_to_RightToeBottom_src.h"

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
  double t119;
  double t513;
  double t1003;
  double t1865;
  double t2101;
  double t2305;
  double t2394;
  double t3316;
  double t3411;
  double t3668;
  double t3876;
  double t3118;
  double t3261;
  double t3264;
  double t4065;
  double t4108;
  double t4112;
  double t5129;
  double t5160;
  double t5439;
  double t5606;
  double t5048;
  double t5072;
  double t5121;
  double t5799;
  double t5852;
  double t5900;
  double t6048;
  double t6081;
  double t6086;
  double t6095;
  double t6023;
  double t6032;
  double t6037;
  double t6106;
  double t6109;
  double t6110;
  double t6155;
  double t138;
  double t140;
  double t238;
  double t514;
  double t623;
  double t1002;
  double t1024;
  double t1243;
  double t6173;
  double t2317;
  double t2414;
  double t2470;
  double t2760;
  double t2916;
  double t2997;
  double t6186;
  double t6190;
  double t6196;
  double t6198;
  double t6200;
  double t6201;
  double t3690;
  double t3908;
  double t3920;
  double t4653;
  double t4832;
  double t4943;
  double t6207;
  double t6210;
  double t6214;
  double t6221;
  double t6223;
  double t6224;
  double t5449;
  double t5627;
  double t5656;
  double t5960;
  double t5978;
  double t6009;
  double t6227;
  double t6231;
  double t6232;
  double t6234;
  double t6235;
  double t6237;
  double t6089;
  double t6099;
  double t6100;
  double t6122;
  double t6126;
  double t6130;
  double t6239;
  double t6241;
  double t6242;
  double t6246;
  double t6248;
  double t6249;
  double t6164;
  double t6166;
  double t6167;
  double t6176;
  double t6178;
  double t6182;
  double t6321;
  double t6349;
  double t6356;
  double t6362;
  double t6364;
  double t6398;
  double t6406;
  double t6411;
  double t6431;
  double t6437;
  double t6440;
  double t6450;
  double t6462;
  double t6467;
  double t6479;
  double t6488;
  double t6489;
  double t6506;
  double t6514;
  double t6515;
  double t6516;
  double t6524;
  double t6527;
  double t6528;
  t119 = Cos(var1[8]);
  t513 = Cos(var1[9]);
  t1003 = Sin(var1[9]);
  t1865 = Cos(var1[10]);
  t2101 = -1.*t1865;
  t2305 = 1. + t2101;
  t2394 = Sin(var1[10]);
  t3316 = Cos(var1[11]);
  t3411 = -1.*t3316;
  t3668 = 1. + t3411;
  t3876 = Sin(var1[11]);
  t3118 = t119*t513*t1865;
  t3261 = -1.*t119*t1003*t2394;
  t3264 = t3118 + t3261;
  t4065 = -1.*t119*t1865*t1003;
  t4108 = -1.*t119*t513*t2394;
  t4112 = t4065 + t4108;
  t5129 = Cos(var1[12]);
  t5160 = -1.*t5129;
  t5439 = 1. + t5160;
  t5606 = Sin(var1[12]);
  t5048 = t3316*t3264;
  t5072 = t4112*t3876;
  t5121 = t5048 + t5072;
  t5799 = t3316*t4112;
  t5852 = -1.*t3264*t3876;
  t5900 = t5799 + t5852;
  t6048 = Cos(var1[13]);
  t6081 = -1.*t6048;
  t6086 = 1. + t6081;
  t6095 = Sin(var1[13]);
  t6023 = t5129*t5121;
  t6032 = t5900*t5606;
  t6037 = t6023 + t6032;
  t6106 = t5129*t5900;
  t6109 = -1.*t5121*t5606;
  t6110 = t6106 + t6109;
  t6155 = Cos(var1[7]);
  t138 = -1.*t119;
  t140 = 1. + t138;
  t238 = Sin(var1[8]);
  t514 = -1.*t513;
  t623 = 1. + t514;
  t1002 = -0.049*t623;
  t1024 = -0.09*t1003;
  t1243 = 0. + t1002 + t1024;
  t6173 = Sin(var1[7]);
  t2317 = -0.049*t2305;
  t2414 = -0.21*t2394;
  t2470 = 0. + t2317 + t2414;
  t2760 = -0.21*t2305;
  t2916 = 0.049*t2394;
  t2997 = 0. + t2760 + t2916;
  t6186 = t6155*t513*t238;
  t6190 = -1.*t6173*t1003;
  t6196 = t6186 + t6190;
  t6198 = -1.*t513*t6173;
  t6200 = -1.*t6155*t238*t1003;
  t6201 = t6198 + t6200;
  t3690 = -0.0016*t3668;
  t3908 = -0.2707*t3876;
  t3920 = 0. + t3690 + t3908;
  t4653 = -0.2707*t3668;
  t4832 = 0.0016*t3876;
  t4943 = 0. + t4653 + t4832;
  t6207 = t1865*t6196;
  t6210 = t6201*t2394;
  t6214 = t6207 + t6210;
  t6221 = t1865*t6201;
  t6223 = -1.*t6196*t2394;
  t6224 = t6221 + t6223;
  t5449 = 0.0184*t5439;
  t5627 = -0.7055*t5606;
  t5656 = 0. + t5449 + t5627;
  t5960 = -0.7055*t5439;
  t5978 = -0.0184*t5606;
  t6009 = 0. + t5960 + t5978;
  t6227 = t3316*t6214;
  t6231 = t6224*t3876;
  t6232 = t6227 + t6231;
  t6234 = t3316*t6224;
  t6235 = -1.*t6214*t3876;
  t6237 = t6234 + t6235;
  t6089 = -0.0216*t6086;
  t6099 = -1.1135*t6095;
  t6100 = 0. + t6089 + t6099;
  t6122 = -1.1135*t6086;
  t6126 = 0.0216*t6095;
  t6130 = 0. + t6122 + t6126;
  t6239 = t5129*t6232;
  t6241 = t6237*t5606;
  t6242 = t6239 + t6241;
  t6246 = t5129*t6237;
  t6248 = -1.*t6232*t5606;
  t6249 = t6246 + t6248;
  t6164 = -0.135*t140;
  t6166 = 0.049*t238;
  t6167 = 0. + t6164 + t6166;
  t6176 = -0.09*t623;
  t6178 = 0.049*t1003;
  t6182 = 0. + t6176 + t6178;
  t6321 = t513*t6173*t238;
  t6349 = t6155*t1003;
  t6356 = t6321 + t6349;
  t6362 = t6155*t513;
  t6364 = -1.*t6173*t238*t1003;
  t6398 = t6362 + t6364;
  t6406 = t1865*t6356;
  t6411 = t6398*t2394;
  t6431 = t6406 + t6411;
  t6437 = t1865*t6398;
  t6440 = -1.*t6356*t2394;
  t6450 = t6437 + t6440;
  t6462 = t3316*t6431;
  t6467 = t6450*t3876;
  t6479 = t6462 + t6467;
  t6488 = t3316*t6450;
  t6489 = -1.*t6431*t3876;
  t6506 = t6488 + t6489;
  t6514 = t5129*t6479;
  t6515 = t6506*t5606;
  t6516 = t6514 + t6515;
  t6524 = t5129*t6506;
  t6527 = -1.*t6479*t5606;
  t6528 = t6524 + t6527;
  p_output1[0]=-0.03155 + t119*t1243 - 0.049*t140 - 0.004500000000000004*t238 - 1.*t1003*t119*t2997 + t3264*t3920 + t4112*t4943 + t119*t2470*t513 + t5121*t5656 + t5900*t6009 + t6037*t6100 - 1.1312*(-1.*t6037*t6095 + t6048*t6110) + 0.0306*(t6037*t6048 + t6095*t6110) + t6110*t6130;
  p_output1[1]=0. + 0.135*(1. - 1.*t6155) + 0.1305*t119*t6155 - 1.*t1243*t238*t6155 - 1.*t6155*t6167 + t6173*t6182 - 1.*t2470*t6196 - 1.*t2997*t6201 - 1.*t3920*t6214 - 1.*t4943*t6224 - 1.*t5656*t6232 - 1.*t6009*t6237 - 1.*t6100*t6242 - 1.*t6130*t6249 + 1.1312*(-1.*t6095*t6242 + t6048*t6249) - 0.0306*(t6048*t6242 + t6095*t6249);
  p_output1[2]=-0.07996 - 0.135*t6173 + 0.1305*t119*t6173 - 1.*t1243*t238*t6173 - 1.*t6167*t6173 - 1.*t6155*t6182 - 1.*t2470*t6356 - 1.*t2997*t6398 - 1.*t3920*t6431 - 1.*t4943*t6450 - 1.*t5656*t6479 - 1.*t6009*t6506 - 1.*t6100*t6516 - 1.*t6130*t6528 + 1.1312*(-1.*t6095*t6516 + t6048*t6528) - 0.0306*(t6048*t6516 + t6095*t6528);
}



void p_VectorNav_to_RightToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
