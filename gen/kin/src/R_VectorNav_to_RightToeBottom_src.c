/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:36:01 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_VectorNav_to_RightToeBottom_src.h"

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
  double t1352;
  double t2672;
  double t3102;
  double t2606;
  double t3406;
  double t2101;
  double t3961;
  double t4074;
  double t4186;
  double t3012;
  double t3546;
  double t3554;
  double t4196;
  double t1878;
  double t4557;
  double t4578;
  double t4767;
  double t3734;
  double t4316;
  double t4343;
  double t4770;
  double t1865;
  double t5065;
  double t5205;
  double t5480;
  double t4383;
  double t4943;
  double t5022;
  double t5535;
  double t1294;
  double t66;
  double t1582;
  double t5782;
  double t5797;
  double t5799;
  double t5731;
  double t5734;
  double t5741;
  double t5826;
  double t5827;
  double t5828;
  double t5755;
  double t5806;
  double t5810;
  double t5893;
  double t5920;
  double t5933;
  double t5821;
  double t5839;
  double t5846;
  double t5964;
  double t5970;
  double t5978;
  double t5865;
  double t5939;
  double t5959;
  double t6026;
  double t6029;
  double t6030;
  double t6015;
  double t6019;
  double t6020;
  double t6037;
  double t6047;
  double t6048;
  double t6023;
  double t6032;
  double t6033;
  double t6057;
  double t6061;
  double t6066;
  double t6034;
  double t6049;
  double t6053;
  double t6076;
  double t6080;
  double t6081;
  double t6054;
  double t6068;
  double t6073;
  double t5058;
  double t5539;
  double t5606;
  double t5627;
  double t5649;
  double t5656;
  double t5960;
  double t5980;
  double t5987;
  double t5998;
  double t6005;
  double t6006;
  double t6075;
  double t6085;
  double t6086;
  double t6089;
  double t6090;
  double t6091;
  t1352 = Cos(var1[8]);
  t2672 = Cos(var1[10]);
  t3102 = Sin(var1[9]);
  t2606 = Cos(var1[9]);
  t3406 = Sin(var1[10]);
  t2101 = Cos(var1[11]);
  t3961 = -1.*t1352*t2672*t3102;
  t4074 = -1.*t1352*t2606*t3406;
  t4186 = t3961 + t4074;
  t3012 = t1352*t2606*t2672;
  t3546 = -1.*t1352*t3102*t3406;
  t3554 = t3012 + t3546;
  t4196 = Sin(var1[11]);
  t1878 = Cos(var1[12]);
  t4557 = t2101*t4186;
  t4578 = -1.*t3554*t4196;
  t4767 = t4557 + t4578;
  t3734 = t2101*t3554;
  t4316 = t4186*t4196;
  t4343 = t3734 + t4316;
  t4770 = Sin(var1[12]);
  t1865 = Cos(var1[13]);
  t5065 = t1878*t4767;
  t5205 = -1.*t4343*t4770;
  t5480 = t5065 + t5205;
  t4383 = t1878*t4343;
  t4943 = t4767*t4770;
  t5022 = t4383 + t4943;
  t5535 = Sin(var1[13]);
  t1294 = Cos(var1[7]);
  t66 = Sin(var1[8]);
  t1582 = Sin(var1[7]);
  t5782 = -1.*t2606*t1582;
  t5797 = -1.*t1294*t66*t3102;
  t5799 = t5782 + t5797;
  t5731 = t1294*t2606*t66;
  t5734 = -1.*t1582*t3102;
  t5741 = t5731 + t5734;
  t5826 = t2672*t5799;
  t5827 = -1.*t5741*t3406;
  t5828 = t5826 + t5827;
  t5755 = t2672*t5741;
  t5806 = t5799*t3406;
  t5810 = t5755 + t5806;
  t5893 = t2101*t5828;
  t5920 = -1.*t5810*t4196;
  t5933 = t5893 + t5920;
  t5821 = t2101*t5810;
  t5839 = t5828*t4196;
  t5846 = t5821 + t5839;
  t5964 = t1878*t5933;
  t5970 = -1.*t5846*t4770;
  t5978 = t5964 + t5970;
  t5865 = t1878*t5846;
  t5939 = t5933*t4770;
  t5959 = t5865 + t5939;
  t6026 = t1294*t2606;
  t6029 = -1.*t1582*t66*t3102;
  t6030 = t6026 + t6029;
  t6015 = t2606*t1582*t66;
  t6019 = t1294*t3102;
  t6020 = t6015 + t6019;
  t6037 = t2672*t6030;
  t6047 = -1.*t6020*t3406;
  t6048 = t6037 + t6047;
  t6023 = t2672*t6020;
  t6032 = t6030*t3406;
  t6033 = t6023 + t6032;
  t6057 = t2101*t6048;
  t6061 = -1.*t6033*t4196;
  t6066 = t6057 + t6061;
  t6034 = t2101*t6033;
  t6049 = t6048*t4196;
  t6053 = t6034 + t6049;
  t6076 = t1878*t6066;
  t6080 = -1.*t6053*t4770;
  t6081 = t6076 + t6080;
  t6054 = t1878*t6053;
  t6068 = t6066*t4770;
  t6073 = t6054 + t6068;
  t5058 = t1865*t5022;
  t5539 = t5480*t5535;
  t5606 = t5058 + t5539;
  t5627 = t1865*t5480;
  t5649 = -1.*t5022*t5535;
  t5656 = t5627 + t5649;
  t5960 = t1865*t5959;
  t5980 = t5978*t5535;
  t5987 = t5960 + t5980;
  t5998 = t1865*t5978;
  t6005 = -1.*t5959*t5535;
  t6006 = t5998 + t6005;
  t6075 = t1865*t6073;
  t6085 = t6081*t5535;
  t6086 = t6075 + t6085;
  t6089 = t1865*t6081;
  t6090 = -1.*t6073*t5535;
  t6091 = t6089 + t6090;
  p_output1[0]=0. + t66;
  p_output1[1]=0. + t1294*t1352;
  p_output1[2]=0. + t1352*t1582;
  p_output1[3]=0. + 0.642788*t5606 + 0.766044*t5656;
  p_output1[4]=0. - 0.642788*t5987 - 0.766044*t6006;
  p_output1[5]=0. - 0.642788*t6086 - 0.766044*t6091;
  p_output1[6]=0. - 0.766044*t5606 + 0.642788*t5656;
  p_output1[7]=0. + 0.766044*t5987 - 0.642788*t6006;
  p_output1[8]=0. + 0.766044*t6086 - 0.642788*t6091;
}



void R_VectorNav_to_RightToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
