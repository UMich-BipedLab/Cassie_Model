/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:17:40 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_MultisenseIMU_to_LeftToeBottom_src.h"

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
  double t192;
  double t195;
  double t786;
  double t458;
  double t2043;
  double t2276;
  double t2376;
  double t2217;
  double t2281;
  double t2316;
  double t1712;
  double t2388;
  double t2409;
  double t2476;
  double t2909;
  double t2343;
  double t2542;
  double t2649;
  double t1608;
  double t3012;
  double t3035;
  double t3155;
  double t3409;
  double t2696;
  double t3213;
  double t3273;
  double t1593;
  double t3431;
  double t3512;
  double t3526;
  double t3654;
  double t3376;
  double t3619;
  double t3627;
  double t1441;
  double t3672;
  double t3704;
  double t3846;
  double t4570;
  double t4682;
  double t4704;
  double t4721;
  double t4887;
  double t4897;
  double t4706;
  double t4907;
  double t4981;
  double t5210;
  double t5213;
  double t5275;
  double t4984;
  double t5312;
  double t5318;
  double t5443;
  double t5484;
  double t5561;
  double t5342;
  double t5563;
  double t5591;
  double t5603;
  double t5679;
  double t5696;
  double t6241;
  double t6299;
  double t6311;
  double t6363;
  double t6375;
  double t6414;
  double t6344;
  double t6417;
  double t6439;
  double t6466;
  double t6501;
  double t6510;
  double t6457;
  double t6621;
  double t6632;
  double t6757;
  double t6760;
  double t6782;
  double t3639;
  double t3866;
  double t3930;
  double t4032;
  double t4100;
  double t4110;
  double t5595;
  double t5701;
  double t5808;
  double t5921;
  double t5929;
  double t5947;
  double t6648;
  double t6815;
  double t6842;
  double t6953;
  double t6978;
  double t6984;
  t192 = Cos(var1[1]);
  t195 = Sin(var1[0]);
  t786 = Sin(var1[1]);
  t458 = Cos(var1[0]);
  t2043 = Cos(var1[2]);
  t2276 = Sin(var1[2]);
  t2376 = Cos(var1[3]);
  t2217 = t2043*t195*t786;
  t2281 = t458*t2276;
  t2316 = t2217 + t2281;
  t1712 = Sin(var1[3]);
  t2388 = t458*t2043;
  t2409 = -1.*t195*t786*t2276;
  t2476 = t2388 + t2409;
  t2909 = Cos(var1[4]);
  t2343 = -1.*t1712*t2316;
  t2542 = t2376*t2476;
  t2649 = t2343 + t2542;
  t1608 = Sin(var1[4]);
  t3012 = t2376*t2316;
  t3035 = t1712*t2476;
  t3155 = t3012 + t3035;
  t3409 = Cos(var1[5]);
  t2696 = t1608*t2649;
  t3213 = t2909*t3155;
  t3273 = t2696 + t3213;
  t1593 = Sin(var1[5]);
  t3431 = t2909*t2649;
  t3512 = -1.*t1608*t3155;
  t3526 = t3431 + t3512;
  t3654 = Cos(var1[6]);
  t3376 = -1.*t1593*t3273;
  t3619 = t3409*t3526;
  t3627 = t3376 + t3619;
  t1441 = Sin(var1[6]);
  t3672 = t3409*t3273;
  t3704 = t1593*t3526;
  t3846 = t3672 + t3704;
  t4570 = t458*t2043*t786;
  t4682 = -1.*t195*t2276;
  t4704 = t4570 + t4682;
  t4721 = -1.*t2043*t195;
  t4887 = -1.*t458*t786*t2276;
  t4897 = t4721 + t4887;
  t4706 = -1.*t1712*t4704;
  t4907 = t2376*t4897;
  t4981 = t4706 + t4907;
  t5210 = t2376*t4704;
  t5213 = t1712*t4897;
  t5275 = t5210 + t5213;
  t4984 = t1608*t4981;
  t5312 = t2909*t5275;
  t5318 = t4984 + t5312;
  t5443 = t2909*t4981;
  t5484 = -1.*t1608*t5275;
  t5561 = t5443 + t5484;
  t5342 = -1.*t1593*t5318;
  t5563 = t3409*t5561;
  t5591 = t5342 + t5563;
  t5603 = t3409*t5318;
  t5679 = t1593*t5561;
  t5696 = t5603 + t5679;
  t6241 = -1.*t192*t2043*t1712;
  t6299 = -1.*t2376*t192*t2276;
  t6311 = t6241 + t6299;
  t6363 = t2376*t192*t2043;
  t6375 = -1.*t192*t1712*t2276;
  t6414 = t6363 + t6375;
  t6344 = t1608*t6311;
  t6417 = t2909*t6414;
  t6439 = t6344 + t6417;
  t6466 = t2909*t6311;
  t6501 = -1.*t1608*t6414;
  t6510 = t6466 + t6501;
  t6457 = -1.*t1593*t6439;
  t6621 = t3409*t6510;
  t6632 = t6457 + t6621;
  t6757 = t3409*t6439;
  t6760 = t1593*t6510;
  t6782 = t6757 + t6760;
  t3639 = t1441*t3627;
  t3866 = t3654*t3846;
  t3930 = t3639 + t3866;
  t4032 = t3654*t3627;
  t4100 = -1.*t1441*t3846;
  t4110 = t4032 + t4100;
  t5595 = t1441*t5591;
  t5701 = t3654*t5696;
  t5808 = t5595 + t5701;
  t5921 = t3654*t5591;
  t5929 = -1.*t1441*t5696;
  t5947 = t5921 + t5929;
  t6648 = t1441*t6632;
  t6815 = t3654*t6782;
  t6842 = t6648 + t6815;
  t6953 = t3654*t6632;
  t6978 = -1.*t1441*t6782;
  t6984 = t6953 + t6978;
  p_output1[0]=0. + t192*t195;
  p_output1[1]=0. - 1.*t192*t458;
  p_output1[2]=0. + t786;
  p_output1[3]=0. - 0.642788*t3930 - 0.766044*t4110;
  p_output1[4]=0. + 0.642788*t5808 + 0.766044*t5947;
  p_output1[5]=0. + 0.642788*t6842 + 0.766044*t6984;
  p_output1[6]=0. + 0.766044*t3930 - 0.642788*t4110;
  p_output1[7]=0. - 0.766044*t5808 + 0.642788*t5947;
  p_output1[8]=0. - 0.766044*t6842 + 0.642788*t6984;
}



void R_MultisenseIMU_to_LeftToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
