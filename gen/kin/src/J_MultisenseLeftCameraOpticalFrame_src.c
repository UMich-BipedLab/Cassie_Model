/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:34:43 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "J_MultisenseLeftCameraOpticalFrame_src.h"

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
  double t2643;
  double t4931;
  double t4565;
  double t4904;
  double t4933;
  double t947;
  double t5013;
  double t5022;
  double t5033;
  double t4982;
  double t4990;
  double t5004;
  t2643 = Sin(var1[3]);
  t4931 = Cos(var1[3]);
  t4565 = Cos(var1[5]);
  t4904 = Sin(var1[4]);
  t4933 = Sin(var1[5]);
  t947 = Cos(var1[4]);
  t5013 = t4931*t4565*t4904;
  t5022 = t2643*t4933;
  t5033 = t5013 + t5022;
  t4982 = -1.*t4931*t4565;
  t4990 = -1.*t2643*t4904*t4933;
  t5004 = t4982 + t4990;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=0.25*(-1.*t2643*t4565*t4904 + t4931*t4933) + 0.035*t5004 - 0.052*t2643*t947;
  p_output1[10]=0.035*(-1.*t2643*t4565 + t4904*t4931*t4933) + 0.25*t5033 + 0.052*t4931*t947;
  p_output1[11]=0;
  p_output1[12]=-0.052*t4904*t4931 + 0.25*t4565*t4931*t947 + 0.035*t4931*t4933*t947;
  p_output1[13]=-0.052*t2643*t4904 + 0.25*t2643*t4565*t947 + 0.035*t2643*t4933*t947;
  p_output1[14]=-0.25*t4565*t4904 - 0.035*t4904*t4933 - 0.052*t947;
  p_output1[15]=0.25*(t2643*t4565 - 1.*t4904*t4931*t4933) + 0.035*t5033;
  p_output1[16]=0.035*(t2643*t4565*t4904 - 1.*t4931*t4933) + 0.25*t5004;
  p_output1[17]=0.035*t4565*t947 - 0.25*t4933*t947;
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
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
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



void J_MultisenseLeftCameraOpticalFrame_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
