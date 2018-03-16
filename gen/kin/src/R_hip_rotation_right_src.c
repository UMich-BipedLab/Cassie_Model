/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 11:08:18 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_hip_rotation_right_src.h"

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
  double t6939;
  double t6972;
  double t3829;
  double t6962;
  double t6992;
  double t1429;
  double t7000;
  double t7066;
  double t6964;
  double t6994;
  double t6997;
  double t7009;
  double t7023;
  double t7024;
  double t7070;
  double t7073;
  double t7041;
  double t7042;
  double t7051;
  double t7055;
  double t7060;
  double t7062;
  double t7075;
  double t7076;
  double t7080;
  double t7085;
  double t7086;
  double t7087;
  double t7092;
  double t7093;
  double t7094;
  t6939 = Cos(var1[5]);
  t6972 = Sin(var1[3]);
  t3829 = Cos(var1[3]);
  t6962 = Sin(var1[4]);
  t6992 = Sin(var1[5]);
  t1429 = Cos(var1[13]);
  t7000 = Sin(var1[13]);
  t7066 = Cos(var1[4]);
  t6964 = t3829*t6939*t6962;
  t6994 = t6972*t6992;
  t6997 = t6964 + t6994;
  t7009 = -1.*t6939*t6972;
  t7023 = t3829*t6962*t6992;
  t7024 = t7009 + t7023;
  t7070 = Cos(var1[14]);
  t7073 = Sin(var1[14]);
  t7041 = t6939*t6972*t6962;
  t7042 = -1.*t3829*t6992;
  t7051 = t7041 + t7042;
  t7055 = t3829*t6939;
  t7060 = t6972*t6962*t6992;
  t7062 = t7055 + t7060;
  t7075 = t7000*t6997;
  t7076 = t1429*t7024;
  t7080 = t7075 + t7076;
  t7085 = t7000*t7051;
  t7086 = t1429*t7062;
  t7087 = t7085 + t7086;
  t7092 = t7066*t6939*t7000;
  t7093 = t1429*t7066*t6992;
  t7094 = t7092 + t7093;
  p_output1[0]=-1.*t1429*t6997 + t7000*t7024;
  p_output1[1]=-1.*t1429*t7051 + t7000*t7062;
  p_output1[2]=-1.*t1429*t6939*t7066 + t6992*t7000*t7066;
  p_output1[3]=t3829*t7066*t7070 + t7073*t7080;
  p_output1[4]=t6972*t7066*t7070 + t7073*t7087;
  p_output1[5]=-1.*t6962*t7070 + t7073*t7094;
  p_output1[6]=t3829*t7066*t7073 - 1.*t7070*t7080;
  p_output1[7]=t6972*t7066*t7073 - 1.*t7070*t7087;
  p_output1[8]=-1.*t6962*t7073 - 1.*t7070*t7094;
}



void R_hip_rotation_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
