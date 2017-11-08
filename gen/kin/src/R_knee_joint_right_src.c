/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:11:46 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_knee_joint_right_src.h"

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
  double t1812;
  double t6724;
  double t1734;
  double t3163;
  double t6771;
  double t6837;
  double t6643;
  double t6773;
  double t6811;
  double t426;
  double t6843;
  double t6865;
  double t6866;
  double t420;
  double t6874;
  double t6876;
  double t6880;
  double t6891;
  double t6907;
  double t6908;
  double t6909;
  double t6913;
  double t6916;
  double t6917;
  double t6836;
  double t6867;
  double t6868;
  double t6882;
  double t6892;
  double t6898;
  double t6899;
  double t6900;
  double t6904;
  double t6912;
  double t6918;
  double t6921;
  double t6927;
  double t6928;
  double t6929;
  double t6931;
  double t6932;
  double t6933;
  double t6936;
  double t6937;
  double t6938;
  double t6943;
  double t6946;
  double t6953;
  double t6954;
  double t6955;
  double t6957;
  t1812 = Cos(var1[5]);
  t6724 = Sin(var1[3]);
  t1734 = Cos(var1[3]);
  t3163 = Sin(var1[4]);
  t6771 = Sin(var1[5]);
  t6837 = Sin(var1[13]);
  t6643 = t1734*t1812*t3163;
  t6773 = t6724*t6771;
  t6811 = t6643 + t6773;
  t426 = Cos(var1[13]);
  t6843 = -1.*t1812*t6724;
  t6865 = t1734*t3163*t6771;
  t6866 = t6843 + t6865;
  t420 = Cos(var1[15]);
  t6874 = Sin(var1[15]);
  t6876 = Cos(var1[14]);
  t6880 = Cos(var1[4]);
  t6891 = Sin(var1[14]);
  t6907 = t1812*t6724*t3163;
  t6908 = -1.*t1734*t6771;
  t6909 = t6907 + t6908;
  t6913 = t1734*t1812;
  t6916 = t6724*t3163*t6771;
  t6917 = t6913 + t6916;
  t6836 = t426*t6811;
  t6867 = -1.*t6837*t6866;
  t6868 = t6836 + t6867;
  t6882 = t6876*t1734*t6880;
  t6892 = t6837*t6811;
  t6898 = t426*t6866;
  t6899 = t6892 + t6898;
  t6900 = t6891*t6899;
  t6904 = t6882 + t6900;
  t6912 = t426*t6909;
  t6918 = -1.*t6837*t6917;
  t6921 = t6912 + t6918;
  t6927 = t6876*t6880*t6724;
  t6928 = t6837*t6909;
  t6929 = t426*t6917;
  t6931 = t6928 + t6929;
  t6932 = t6891*t6931;
  t6933 = t6927 + t6932;
  t6936 = t426*t6880*t1812;
  t6937 = -1.*t6880*t6837*t6771;
  t6938 = t6936 + t6937;
  t6943 = -1.*t6876*t3163;
  t6946 = t6880*t1812*t6837;
  t6953 = t426*t6880*t6771;
  t6954 = t6946 + t6953;
  t6955 = t6891*t6954;
  t6957 = t6943 + t6955;
  p_output1[0]=-1.*t420*t6868 + t6874*t6904;
  p_output1[1]=-1.*t420*t6921 + t6874*t6933;
  p_output1[2]=-1.*t420*t6938 + t6874*t6957;
  p_output1[3]=t6868*t6874 + t420*t6904;
  p_output1[4]=t6874*t6921 + t420*t6933;
  p_output1[5]=t6874*t6938 + t420*t6957;
  p_output1[6]=t1734*t6880*t6891 - 1.*t6876*t6899;
  p_output1[7]=t6724*t6880*t6891 - 1.*t6876*t6931;
  p_output1[8]=-1.*t3163*t6891 - 1.*t6876*t6954;
}



void R_knee_joint_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
