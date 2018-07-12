/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:34:52 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_MultisenseAccelerometerFrame_src.h"

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
  double t2861;
  double t5064;
  double t3310;
  double t635;
  double t5091;
  double t5167;
  double t5173;
  double t5174;
  double t5177;
  double t5184;
  double t5191;
  double t5197;
  t2861 = Cos(var1[5]);
  t5064 = Sin(var1[3]);
  t3310 = Sin(var1[4]);
  t635 = Cos(var1[3]);
  t5091 = Sin(var1[5]);
  t5167 = Cos(var1[4]);
  t5173 = -1.*t2861*t5064;
  t5174 = t635*t3310*t5091;
  t5177 = t5173 + t5174;
  t5184 = t635*t2861;
  t5191 = t5064*t3310*t5091;
  t5197 = t5184 + t5191;
  p_output1[0]=-1.*t5064*t5091 - 1.*t2861*t3310*t635;
  p_output1[1]=-1.*t2861*t3310*t5064 + t5091*t635;
  p_output1[2]=-1.*t2861*t5167;
  p_output1[3]=0;
  p_output1[4]=t5177;
  p_output1[5]=t5197;
  p_output1[6]=t5091*t5167;
  p_output1[7]=0;
  p_output1[8]=t5167*t635;
  p_output1[9]=t5064*t5167;
  p_output1[10]=-1.*t3310;
  p_output1[11]=0;
  p_output1[12]=0.0302*t5177 + 0.047*t5167*t635 + 0.24925*(t5064*t5091 + t2861*t3310*t635) + var1[0];
  p_output1[13]=0.047*t5064*t5167 + 0.0302*t5197 + 0.24925*(t2861*t3310*t5064 - 1.*t5091*t635) + var1[1];
  p_output1[14]=-0.047*t3310 + 0.24925*t2861*t5167 + 0.0302*t5091*t5167 + var1[2];
  p_output1[15]=1.;
}



void H_MultisenseAccelerometerFrame_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
