/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:36:23 GMT-05:00
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
  double t137;
  double t592;
  double t1239;
  double t1268;
  double t1345;
  double t2070;
  double t2296;
  double t2485;
  double t2973;
  double t2979;
  double t2988;
  double t3207;
  double t3317;
  double t3355;
  double t3356;
  double t3813;
  double t3837;
  double t3903;
  double t3952;
  double t3964;
  double t3982;
  double t4056;
  double t4269;
  double t4375;
  double t4422;
  double t4676;
  double t4692;
  double t4763;
  double t4823;
  double t4901;
  double t4956;
  double t5039;
  double t5186;
  double t5193;
  double t5207;
  double t5294;
  double t5300;
  double t5318;
  double t5344;
  double t5350;
  double t5359;
  double t5388;
  double t5397;
  double t5398;
  double t5416;
  double t5486;
  double t5500;
  double t5503;
  double t864;
  double t902;
  double t973;
  double t1240;
  double t1254;
  double t2259;
  double t2298;
  double t2389;
  double t2523;
  double t2795;
  double t2819;
  double t3040;
  double t3213;
  double t3314;
  double t3675;
  double t3771;
  double t3784;
  double t4049;
  double t4179;
  double t4206;
  double t5665;
  double t5666;
  double t5706;
  double t5728;
  double t5777;
  double t5785;
  double t4598;
  double t4615;
  double t4666;
  double t4999;
  double t5134;
  double t5175;
  double t5809;
  double t5815;
  double t5816;
  double t5859;
  double t5862;
  double t5866;
  double t5241;
  double t5245;
  double t5278;
  double t5360;
  double t5395;
  double t5396;
  double t5890;
  double t5957;
  double t5965;
  double t5993;
  double t6002;
  double t6004;
  double t5425;
  double t5465;
  double t5485;
  double t6022;
  double t6035;
  double t6042;
  double t6062;
  double t6074;
  double t6083;
  double t6318;
  double t6329;
  double t6337;
  double t6363;
  double t6370;
  double t6383;
  double t6396;
  double t6400;
  double t6422;
  double t6427;
  double t6428;
  double t6429;
  double t6456;
  double t6461;
  double t6462;
  double t6493;
  double t6506;
  double t6508;
  t137 = Sin(var1[0]);
  t592 = Cos(var1[1]);
  t1239 = Sin(var1[1]);
  t1268 = Cos(var1[2]);
  t1345 = -1.*t1268;
  t2070 = 1. + t1345;
  t2296 = Sin(var1[2]);
  t2485 = Cos(var1[0]);
  t2973 = Cos(var1[3]);
  t2979 = -1.*t2973;
  t2988 = 1. + t2979;
  t3207 = Sin(var1[3]);
  t3317 = t1268*t137*t1239;
  t3355 = t2485*t2296;
  t3356 = t3317 + t3355;
  t3813 = t2485*t1268;
  t3837 = -1.*t137*t1239*t2296;
  t3903 = t3813 + t3837;
  t3952 = Cos(var1[4]);
  t3964 = -1.*t3952;
  t3982 = 1. + t3964;
  t4056 = Sin(var1[4]);
  t4269 = -1.*t3207*t3356;
  t4375 = t2973*t3903;
  t4422 = t4269 + t4375;
  t4676 = t2973*t3356;
  t4692 = t3207*t3903;
  t4763 = t4676 + t4692;
  t4823 = Cos(var1[5]);
  t4901 = -1.*t4823;
  t4956 = 1. + t4901;
  t5039 = Sin(var1[5]);
  t5186 = t4056*t4422;
  t5193 = t3952*t4763;
  t5207 = t5186 + t5193;
  t5294 = t3952*t4422;
  t5300 = -1.*t4056*t4763;
  t5318 = t5294 + t5300;
  t5344 = Cos(var1[6]);
  t5350 = -1.*t5344;
  t5359 = 1. + t5350;
  t5388 = Sin(var1[6]);
  t5397 = -1.*t5039*t5207;
  t5398 = t4823*t5318;
  t5416 = t5397 + t5398;
  t5486 = t4823*t5207;
  t5500 = t5039*t5318;
  t5503 = t5486 + t5500;
  t864 = -1.*t592;
  t902 = 1. + t864;
  t973 = 0.135*t902;
  t1240 = 0.049*t1239;
  t1254 = 0. + t973 + t1240;
  t2259 = -0.049*t2070;
  t2298 = -0.09*t2296;
  t2389 = 0. + t2259 + t2298;
  t2523 = -0.09*t2070;
  t2795 = 0.049*t2296;
  t2819 = 0. + t2523 + t2795;
  t3040 = -0.049*t2988;
  t3213 = -0.21*t3207;
  t3314 = 0. + t3040 + t3213;
  t3675 = -0.21*t2988;
  t3771 = 0.049*t3207;
  t3784 = 0. + t3675 + t3771;
  t4049 = -0.2707*t3982;
  t4179 = 0.0016*t4056;
  t4206 = 0. + t4049 + t4179;
  t5665 = t2485*t1268*t1239;
  t5666 = -1.*t137*t2296;
  t5706 = t5665 + t5666;
  t5728 = -1.*t1268*t137;
  t5777 = -1.*t2485*t1239*t2296;
  t5785 = t5728 + t5777;
  t4598 = -0.0016*t3982;
  t4615 = -0.2707*t4056;
  t4666 = 0. + t4598 + t4615;
  t4999 = 0.0184*t4956;
  t5134 = -0.7055*t5039;
  t5175 = 0. + t4999 + t5134;
  t5809 = -1.*t3207*t5706;
  t5815 = t2973*t5785;
  t5816 = t5809 + t5815;
  t5859 = t2973*t5706;
  t5862 = t3207*t5785;
  t5866 = t5859 + t5862;
  t5241 = -0.7055*t4956;
  t5245 = -0.0184*t5039;
  t5278 = 0. + t5241 + t5245;
  t5360 = -1.1135*t5359;
  t5395 = 0.0216*t5388;
  t5396 = 0. + t5360 + t5395;
  t5890 = t4056*t5816;
  t5957 = t3952*t5866;
  t5965 = t5890 + t5957;
  t5993 = t3952*t5816;
  t6002 = -1.*t4056*t5866;
  t6004 = t5993 + t6002;
  t5425 = -0.0216*t5359;
  t5465 = -1.1135*t5388;
  t5485 = 0. + t5425 + t5465;
  t6022 = -1.*t5039*t5965;
  t6035 = t4823*t6004;
  t6042 = t6022 + t6035;
  t6062 = t4823*t5965;
  t6074 = t5039*t6004;
  t6083 = t6062 + t6074;
  t6318 = -1.*t592*t1268*t3207;
  t6329 = -1.*t2973*t592*t2296;
  t6337 = t6318 + t6329;
  t6363 = t2973*t592*t1268;
  t6370 = -1.*t592*t3207*t2296;
  t6383 = t6363 + t6370;
  t6396 = t4056*t6337;
  t6400 = t3952*t6383;
  t6422 = t6396 + t6400;
  t6427 = t3952*t6337;
  t6428 = -1.*t4056*t6383;
  t6429 = t6427 + t6428;
  t6456 = -1.*t5039*t6422;
  t6461 = t4823*t6429;
  t6462 = t6456 + t6461;
  t6493 = t4823*t6422;
  t6506 = t5039*t6429;
  t6508 = t6493 + t6506;
  p_output1[0]=0.24925 + 0.135*t137 - 1.*t1254*t137 - 1.*t1239*t137*t2389 - 1.*t2485*t2819 - 1.*t3314*t3356 - 1.*t3784*t3903 - 1.*t4206*t4422 - 1.*t4666*t4763 - 1.*t5175*t5207 - 1.*t5278*t5318 - 1.*t5396*t5416 - 1.*t5485*t5503 - 0.0306*(t5388*t5416 + t5344*t5503) + 1.1312*(t5344*t5416 - 1.*t5388*t5503) - 0.1305*t137*t592;
  p_output1[1]=-0.0302 + 0.135*(1. - 1.*t2485) + t1254*t2485 + t1239*t2389*t2485 - 1.*t137*t2819 + t3314*t5706 + t3784*t5785 + t4206*t5816 + t4666*t5866 + 0.1305*t2485*t592 + t5175*t5965 + t5278*t6004 + t5396*t6042 + t5485*t6083 + 0.0306*(t5388*t6042 + t5344*t6083) - 1.1312*(t5344*t6042 - 1.*t5388*t6083);
  p_output1[2]=-0.047 + 0.004500000000000004*t1239 + t2389*t592 + t1268*t3314*t592 - 1.*t2296*t3784*t592 + t4206*t6337 + t4666*t6383 + t5175*t6422 + t5278*t6429 + t5396*t6462 + t5485*t6508 + 0.0306*(t5388*t6462 + t5344*t6508) - 1.1312*(t5344*t6462 - 1.*t5388*t6508) - 0.049*t902;
}



void p_MultisenseIMU_to_LeftToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
