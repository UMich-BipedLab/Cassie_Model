/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:17:44 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jv_MultisenseIMU_to_LeftToeBottom_src.h"

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
  double t44;
  double t120;
  double t365;
  double t646;
  double t689;
  double t707;
  double t859;
  double t1248;
  double t1478;
  double t1492;
  double t1509;
  double t1680;
  double t2297;
  double t2302;
  double t2304;
  double t2494;
  double t2513;
  double t2637;
  double t2745;
  double t2916;
  double t2925;
  double t3110;
  double t3442;
  double t3460;
  double t3481;
  double t3855;
  double t3865;
  double t3918;
  double t3950;
  double t3983;
  double t4037;
  double t4249;
  double t4581;
  double t4612;
  double t4652;
  double t4835;
  double t4840;
  double t4861;
  double t4900;
  double t5024;
  double t5167;
  double t5461;
  double t5503;
  double t5504;
  double t5528;
  double t5804;
  double t5837;
  double t5844;
  double t151;
  double t321;
  double t349;
  double t485;
  double t524;
  double t747;
  double t882;
  double t993;
  double t1305;
  double t1359;
  double t1381;
  double t1586;
  double t1869;
  double t2060;
  double t2361;
  double t2421;
  double t2443;
  double t3024;
  double t3316;
  double t3437;
  double t6409;
  double t6431;
  double t6446;
  double t6462;
  double t6529;
  double t6530;
  double t3522;
  double t3770;
  double t3787;
  double t4154;
  double t4261;
  double t4464;
  double t6605;
  double t6606;
  double t6630;
  double t6739;
  double t6743;
  double t6763;
  double t4717;
  double t4726;
  double t4820;
  double t5224;
  double t5466;
  double t5480;
  double t6845;
  double t6942;
  double t6952;
  double t7025;
  double t7084;
  double t7102;
  double t5680;
  double t5722;
  double t5775;
  double t7161;
  double t7177;
  double t7272;
  double t7406;
  double t7729;
  double t7790;
  double t8256;
  double t8260;
  double t8272;
  double t8279;
  double t8281;
  double t8283;
  double t8297;
  double t8299;
  double t8302;
  double t8309;
  double t8311;
  double t8312;
  double t8318;
  double t8319;
  double t8320;
  double t8331;
  double t8335;
  double t8336;
  double t8214;
  double t8215;
  double t8220;
  double t8226;
  double t8252;
  double t8276;
  double t8284;
  double t8304;
  double t8317;
  double t8329;
  double t8339;
  double t8346;
  double t8347;
  double t8353;
  double t8359;
  double t8360;
  double t8366;
  double t8368;
  double t8371;
  double t8374;
  double t8381;
  double t8382;
  double t1167;
  double t1395;
  double t2356;
  double t2686;
  double t3483;
  double t3921;
  double t4686;
  double t4872;
  double t5556;
  double t5873;
  double t5900;
  double t5953;
  double t5964;
  double t5993;
  double t5996;
  double t6006;
  double t6018;
  double t6039;
  double t8178;
  double t8213;
  double t6270;
  double t6344;
  double t6461;
  double t6537;
  double t6647;
  double t6801;
  double t7021;
  double t7108;
  double t7292;
  double t7813;
  double t7948;
  double t7970;
  double t8063;
  double t8121;
  double t8124;
  double t8140;
  double t8152;
  double t8173;
  double t8391;
  double t8429;
  double t8433;
  double t8434;
  double t8439;
  double t8408;
  double t8451;
  double t8452;
  double t8441;
  double t8444;
  double t8446;
  double t8422;
  double t8424;
  double t8459;
  double t8460;
  double t8463;
  double t8476;
  double t8477;
  double t8479;
  double t8483;
  double t8485;
  double t8486;
  double t8493;
  double t8496;
  double t8497;
  double t8506;
  double t8507;
  double t8511;
  double t8515;
  double t8516;
  double t8517;
  double t8523;
  double t8525;
  double t8526;
  double t8537;
  double t8539;
  double t8541;
  double t8543;
  double t8544;
  double t8545;
  double t8550;
  double t8551;
  double t8552;
  double t8558;
  double t8559;
  double t8560;
  double t8563;
  double t8564;
  double t8565;
  double t8570;
  double t8572;
  double t8573;
  t44 = Cos(var1[0]);
  t120 = Cos(var1[1]);
  t365 = Sin(var1[1]);
  t646 = Cos(var1[2]);
  t689 = -1.*t646;
  t707 = 1. + t689;
  t859 = Sin(var1[2]);
  t1248 = Sin(var1[0]);
  t1478 = Cos(var1[3]);
  t1492 = -1.*t1478;
  t1509 = 1. + t1492;
  t1680 = Sin(var1[3]);
  t2297 = t44*t646*t365;
  t2302 = -1.*t1248*t859;
  t2304 = t2297 + t2302;
  t2494 = -1.*t646*t1248;
  t2513 = -1.*t44*t365*t859;
  t2637 = t2494 + t2513;
  t2745 = Cos(var1[4]);
  t2916 = -1.*t2745;
  t2925 = 1. + t2916;
  t3110 = Sin(var1[4]);
  t3442 = -1.*t1680*t2304;
  t3460 = t1478*t2637;
  t3481 = t3442 + t3460;
  t3855 = t1478*t2304;
  t3865 = t1680*t2637;
  t3918 = t3855 + t3865;
  t3950 = Cos(var1[5]);
  t3983 = -1.*t3950;
  t4037 = 1. + t3983;
  t4249 = Sin(var1[5]);
  t4581 = t3110*t3481;
  t4612 = t2745*t3918;
  t4652 = t4581 + t4612;
  t4835 = t2745*t3481;
  t4840 = -1.*t3110*t3918;
  t4861 = t4835 + t4840;
  t4900 = Cos(var1[6]);
  t5024 = -1.*t4900;
  t5167 = 1. + t5024;
  t5461 = Sin(var1[6]);
  t5503 = -1.*t4249*t4652;
  t5504 = t3950*t4861;
  t5528 = t5503 + t5504;
  t5804 = t3950*t4652;
  t5837 = t4249*t4861;
  t5844 = t5804 + t5837;
  t151 = -1.*t120;
  t321 = 1. + t151;
  t349 = 0.135*t321;
  t485 = 0.049*t365;
  t524 = 0. + t349 + t485;
  t747 = -0.049*t707;
  t882 = -0.09*t859;
  t993 = 0. + t747 + t882;
  t1305 = -0.09*t707;
  t1359 = 0.049*t859;
  t1381 = 0. + t1305 + t1359;
  t1586 = -0.049*t1509;
  t1869 = -0.21*t1680;
  t2060 = 0. + t1586 + t1869;
  t2361 = -0.21*t1509;
  t2421 = 0.049*t1680;
  t2443 = 0. + t2361 + t2421;
  t3024 = -0.2707*t2925;
  t3316 = 0.0016*t3110;
  t3437 = 0. + t3024 + t3316;
  t6409 = t646*t1248*t365;
  t6431 = t44*t859;
  t6446 = t6409 + t6431;
  t6462 = t44*t646;
  t6529 = -1.*t1248*t365*t859;
  t6530 = t6462 + t6529;
  t3522 = -0.0016*t2925;
  t3770 = -0.2707*t3110;
  t3787 = 0. + t3522 + t3770;
  t4154 = 0.0184*t4037;
  t4261 = -0.7055*t4249;
  t4464 = 0. + t4154 + t4261;
  t6605 = -1.*t1680*t6446;
  t6606 = t1478*t6530;
  t6630 = t6605 + t6606;
  t6739 = t1478*t6446;
  t6743 = t1680*t6530;
  t6763 = t6739 + t6743;
  t4717 = -0.7055*t4037;
  t4726 = -0.0184*t4249;
  t4820 = 0. + t4717 + t4726;
  t5224 = -1.1135*t5167;
  t5466 = 0.0216*t5461;
  t5480 = 0. + t5224 + t5466;
  t6845 = t3110*t6630;
  t6942 = t2745*t6763;
  t6952 = t6845 + t6942;
  t7025 = t2745*t6630;
  t7084 = -1.*t3110*t6763;
  t7102 = t7025 + t7084;
  t5680 = -0.0216*t5167;
  t5722 = -1.1135*t5461;
  t5775 = 0. + t5680 + t5722;
  t7161 = -1.*t4249*t6952;
  t7177 = t3950*t7102;
  t7272 = t7161 + t7177;
  t7406 = t3950*t6952;
  t7729 = t4249*t7102;
  t7790 = t7406 + t7729;
  t8256 = -1.*t120*t646*t1680;
  t8260 = -1.*t1478*t120*t859;
  t8272 = t8256 + t8260;
  t8279 = t1478*t120*t646;
  t8281 = -1.*t120*t1680*t859;
  t8283 = t8279 + t8281;
  t8297 = t3110*t8272;
  t8299 = t2745*t8283;
  t8302 = t8297 + t8299;
  t8309 = t2745*t8272;
  t8311 = -1.*t3110*t8283;
  t8312 = t8309 + t8311;
  t8318 = -1.*t4249*t8302;
  t8319 = t3950*t8312;
  t8320 = t8318 + t8319;
  t8331 = t3950*t8302;
  t8335 = t4249*t8312;
  t8336 = t8331 + t8335;
  t8214 = 0.049*t120;
  t8215 = t120*t646*t2060;
  t8220 = 0.004500000000000004*t365;
  t8226 = t120*t993;
  t8252 = -1.*t120*t2443*t859;
  t8276 = t3437*t8272;
  t8284 = t3787*t8283;
  t8304 = t4464*t8302;
  t8317 = t4820*t8312;
  t8329 = t5480*t8320;
  t8339 = t5775*t8336;
  t8346 = t5461*t8320;
  t8347 = t4900*t8336;
  t8353 = t8346 + t8347;
  t8359 = 0.0306*t8353;
  t8360 = t4900*t8320;
  t8366 = -1.*t5461*t8336;
  t8368 = t8360 + t8366;
  t8371 = -1.1312*t8368;
  t8374 = 0. + t8214 + t8215 + t8220 + t8226 + t8252 + t8276 + t8284 + t8304 + t8317 + t8329 + t8339 + t8359 + t8371;
  t8381 = -1.*t44;
  t8382 = 0. + t8381;
  t1167 = t44*t365*t993;
  t1395 = -1.*t1248*t1381;
  t2356 = t2060*t2304;
  t2686 = t2443*t2637;
  t3483 = t3437*t3481;
  t3921 = t3787*t3918;
  t4686 = t4464*t4652;
  t4872 = t4820*t4861;
  t5556 = t5480*t5528;
  t5873 = t5775*t5844;
  t5900 = t5461*t5528;
  t5953 = t4900*t5844;
  t5964 = t5900 + t5953;
  t5993 = 0.0306*t5964;
  t5996 = t4900*t5528;
  t6006 = -1.*t5461*t5844;
  t6018 = t5996 + t6006;
  t6039 = -1.1312*t6018;
  t8178 = -1.*t1248;
  t8213 = 0. + t8178;
  t6270 = -1.*t1248*t365*t993;
  t6344 = -1.*t44*t1381;
  t6461 = -1.*t2060*t6446;
  t6537 = -1.*t2443*t6530;
  t6647 = -1.*t3437*t6630;
  t6801 = -1.*t3787*t6763;
  t7021 = -1.*t4464*t6952;
  t7108 = -1.*t4820*t7102;
  t7292 = -1.*t5480*t7272;
  t7813 = -1.*t5775*t7790;
  t7948 = t5461*t7272;
  t7970 = t4900*t7790;
  t8063 = t7948 + t7970;
  t8121 = -0.0306*t8063;
  t8124 = t4900*t7272;
  t8140 = -1.*t5461*t7790;
  t8152 = t8124 + t8140;
  t8173 = 1.1312*t8152;
  t8391 = -0.004500000000000004*t44*t120;
  t8429 = 0.049*t120*t646;
  t8433 = -0.09*t120*t859;
  t8434 = 0. + t8429 + t8215 + t8220 + t8433 + t8252 + t8276 + t8284 + t8304 + t8317 + t8329 + t8339 + t8359 + t8371;
  t8439 = 0. + t365;
  t8408 = 0.004500000000000004*t120*t1248;
  t8451 = t120*t1248;
  t8452 = 0. + t8451;
  t8441 = 0.049*t2304;
  t8444 = 0.09*t2637;
  t8446 = 0. + t8391 + t8441 + t2356 + t8444 + t2686 + t3483 + t3921 + t4686 + t4872 + t5556 + t5873 + t5993 + t6039;
  t8422 = -1.*t44*t120;
  t8424 = 0. + t8422;
  t8459 = -0.049*t6446;
  t8460 = -0.09*t6530;
  t8463 = 0. + t8408 + t8459 + t6461 + t8460 + t6537 + t6647 + t6801 + t7021 + t7108 + t7292 + t7813 + t8121 + t8173;
  t8476 = 0.21*t8272;
  t8477 = 0.049*t8283;
  t8479 = 0. + t8476 + t8276 + t8477 + t8284 + t8304 + t8317 + t8329 + t8339 + t8359 + t8371;
  t8483 = 0.21*t3481;
  t8485 = 0.049*t3918;
  t8486 = 0. + t8483 + t3483 + t8485 + t3921 + t4686 + t4872 + t5556 + t5873 + t5993 + t6039;
  t8493 = -0.21*t6630;
  t8496 = -0.049*t6763;
  t8497 = 0. + t8493 + t6647 + t8496 + t6801 + t7021 + t7108 + t7292 + t7813 + t8121 + t8173;
  t8506 = 0.0016*t8302;
  t8507 = 0.2707*t8312;
  t8511 = 0. + t8506 + t8304 + t8507 + t8317 + t8329 + t8339 + t8359 + t8371;
  t8515 = 0.0016*t4652;
  t8516 = 0.2707*t4861;
  t8517 = 0. + t8515 + t4686 + t8516 + t4872 + t5556 + t5873 + t5993 + t6039;
  t8523 = -0.0016*t6952;
  t8525 = -0.2707*t7102;
  t8526 = 0. + t8523 + t7021 + t8525 + t7108 + t7292 + t7813 + t8121 + t8173;
  t8537 = 0.7055*t8320;
  t8539 = -0.0184*t8336;
  t8541 = 0. + t8537 + t8329 + t8539 + t8339 + t8359 + t8371;
  t8543 = 0.7055*t5528;
  t8544 = -0.0184*t5844;
  t8545 = 0. + t8543 + t5556 + t8544 + t5873 + t5993 + t6039;
  t8550 = -0.7055*t7272;
  t8551 = 0.0184*t7790;
  t8552 = 0. + t8550 + t7292 + t8551 + t7813 + t8121 + t8173;
  t8558 = 0.052199999999999996*t8353;
  t8559 = -0.01770000000000005*t8368;
  t8560 = 0. + t8558 + t8559;
  t8563 = 0.052199999999999996*t5964;
  t8564 = -0.01770000000000005*t6018;
  t8565 = 0. + t8563 + t8564;
  t8570 = -0.052199999999999996*t8063;
  t8572 = 0.01770000000000005*t8152;
  t8573 = 0. + t8570 + t8572;
  p_output1[0]=0. - 1.*(0. + t1167 + t1395 + t2356 + t2686 + t3483 + t3921 - 0.135*t44 + 0.1305*t120*t44 + t4686 + t4872 + t44*t524 + t5556 + t5873 + t5993 + t6039);
  p_output1[1]=0. + 0.135*t1248 - 0.1305*t120*t1248 - 1.*t1248*t524 + t6270 + t6344 + t6461 + t6537 + t6647 + t6801 + t7021 + t7108 + t7292 + t7813 + t8121 + t8173;
  p_output1[2]=0.;
  p_output1[3]=0. + t8213*t8374;
  p_output1[4]=0. - 1.*t8374*t8382;
  p_output1[5]=t8382*(0. + t1167 - 0.09*t1248 + t1395 + t2356 + t2686 + t3483 + t3921 + 0.049*t365*t44 + t4686 + t4872 + t5556 + t5873 + t5993 + t6039 + t8391) - 1.*t8213*(0. - 0.049*t1248*t365 - 0.09*t44 + t6270 + t6344 + t6461 + t6537 + t6647 + t6801 + t7021 + t7108 + t7292 + t7813 + t8121 + t8173 + t8408);
  p_output1[6]=t8424*t8434 - 1.*t8439*t8446;
  p_output1[7]=-1.*t8434*t8452 + t8439*t8463;
  p_output1[8]=t8446*t8452 - 1.*t8424*t8463;
  p_output1[9]=t8424*t8479 - 1.*t8439*t8486;
  p_output1[10]=-1.*t8452*t8479 + t8439*t8497;
  p_output1[11]=t8452*t8486 - 1.*t8424*t8497;
  p_output1[12]=t8424*t8511 - 1.*t8439*t8517;
  p_output1[13]=-1.*t8452*t8511 + t8439*t8526;
  p_output1[14]=t8452*t8517 - 1.*t8424*t8526;
  p_output1[15]=t8424*t8541 - 1.*t8439*t8545;
  p_output1[16]=-1.*t8452*t8541 + t8439*t8552;
  p_output1[17]=t8452*t8545 - 1.*t8424*t8552;
  p_output1[18]=t8424*t8560 - 1.*t8439*t8565;
  p_output1[19]=-1.*t8452*t8560 + t8439*t8573;
  p_output1[20]=t8452*t8565 - 1.*t8424*t8573;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
}



void Jv_MultisenseIMU_to_LeftToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
