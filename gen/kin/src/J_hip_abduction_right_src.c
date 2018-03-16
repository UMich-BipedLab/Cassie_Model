/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 11:08:12 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "J_hip_abduction_right_src.h"

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
  double t3216;
  double t6546;
  double t6524;
  double t6527;
  double t6547;
  double t5831;
  double t6540;
  double t6548;
  double t6550;
  double t6553;
  double t6563;
  double t6564;
  double t6568;
  double t2490;
  double t6358;
  double t6514;
  double t6555;
  double t6558;
  double t6559;
  double t6560;
  double t6581;
  double t6582;
  double t6583;
  double t6586;
  double t6589;
  double t6590;
  double t6632;
  double t6633;
  double t6634;
  double t6648;
  double t6649;
  double t6650;
  double t6638;
  double t6654;
  double t6682;
  double t6683;
  double t6684;
  double t6665;
  double t6666;
  double t6667;
  double t6668;
  t3216 = Sin(var1[3]);
  t6546 = Cos(var1[3]);
  t6524 = Cos(var1[5]);
  t6527 = Sin(var1[4]);
  t6547 = Sin(var1[5]);
  t5831 = Sin(var1[13]);
  t6540 = -1.*t6524*t3216*t6527;
  t6548 = t6546*t6547;
  t6550 = t6540 + t6548;
  t6553 = Cos(var1[13]);
  t6563 = -1.*t6546*t6524;
  t6564 = -1.*t3216*t6527*t6547;
  t6568 = t6563 + t6564;
  t2490 = Cos(var1[4]);
  t6358 = 0.135*t5831;
  t6514 = 0. + t6358;
  t6555 = -1.*t6553;
  t6558 = 1. + t6555;
  t6559 = -0.135*t6558;
  t6560 = 0. + t6559;
  t6581 = t6546*t6524*t6527;
  t6582 = t3216*t6547;
  t6583 = t6581 + t6582;
  t6586 = -1.*t6524*t3216;
  t6589 = t6546*t6527*t6547;
  t6590 = t6586 + t6589;
  t6632 = t6524*t3216;
  t6633 = -1.*t6546*t6527*t6547;
  t6634 = t6632 + t6633;
  t6648 = t6524*t3216*t6527;
  t6649 = -1.*t6546*t6547;
  t6650 = t6648 + t6649;
  t6638 = t6553*t6583;
  t6654 = t6553*t6650;
  t6682 = t6546*t6524;
  t6683 = t3216*t6527*t6547;
  t6684 = t6682 + t6683;
  t6665 = t6553*t2490*t6524;
  t6666 = -1.*t2490*t5831*t6547;
  t6667 = t6665 + t6666;
  t6668 = -0.135*t6667;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=0.049*t2490*t3216 + t6514*t6550 + t6560*t6568 - 0.135*(t5831*t6550 + t6553*t6568);
  p_output1[10]=-0.049*t2490*t6546 + t6514*t6583 + t6560*t6590 - 0.135*(t5831*t6583 + t6553*t6590);
  p_output1[11]=0;
  p_output1[12]=t2490*t6514*t6524*t6546 + 0.049*t6527*t6546 - 0.135*(t2490*t5831*t6524*t6546 + t2490*t6546*t6547*t6553) + t2490*t6546*t6547*t6560;
  p_output1[13]=t2490*t3216*t6514*t6524 + 0.049*t3216*t6527 - 0.135*(t2490*t3216*t5831*t6524 + t2490*t3216*t6547*t6553) + t2490*t3216*t6547*t6560;
  p_output1[14]=0.049*t2490 - 1.*t6514*t6524*t6527 - 0.135*(-1.*t5831*t6524*t6527 - 1.*t6527*t6547*t6553) - 1.*t6527*t6547*t6560;
  p_output1[15]=t6560*t6583 + t6514*t6634 - 0.135*(t5831*t6634 + t6638);
  p_output1[16]=t6514*t6568 + t6560*t6650 - 0.135*(t5831*t6568 + t6654);
  p_output1[17]=-1.*t2490*t6514*t6547 + t2490*t6524*t6560 + t6668;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
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
  p_output1[39]=0.135*t6553*t6583 - 0.135*t5831*t6590 - 0.135*(-1.*t5831*t6590 + t6638);
  p_output1[40]=0.135*t6553*t6650 - 0.135*t5831*t6684 - 0.135*(t6654 - 1.*t5831*t6684);
  p_output1[41]=-0.135*t2490*t5831*t6547 + 0.135*t2490*t6524*t6553 + t6668;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
}



void J_hip_abduction_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
