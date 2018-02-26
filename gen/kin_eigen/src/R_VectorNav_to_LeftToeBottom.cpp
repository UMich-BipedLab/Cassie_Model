/*
 * Automatically Generated from Mathematica.
 * Mon 26 Feb 2018 15:42:57 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_VectorNav_to_LeftToeBottom.h"

#ifdef _MSC_VER
  #define INLINE __forceinline /* use __forceinline (VC++ specific) */
#else
  #define INLINE inline        /* use standard inline */
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
static void output1(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  double t354;
  double t2086;
  double t1934;
  double t1947;
  double t2087;
  double t2690;
  double t1997;
  double t2382;
  double t2453;
  double t1460;
  double t2771;
  double t2865;
  double t2921;
  double t3304;
  double t2636;
  double t3085;
  double t3156;
  double t1431;
  double t3330;
  double t3332;
  double t3343;
  double t3990;
  double t3182;
  double t3346;
  double t3391;
  double t1259;
  double t4030;
  double t4031;
  double t4052;
  double t138;
  double t71;
  double t672;
  double t4635;
  double t4641;
  double t4682;
  double t4715;
  double t4817;
  double t4959;
  double t4703;
  double t5049;
  double t5056;
  double t5238;
  double t5620;
  double t5959;
  double t5089;
  double t6139;
  double t6202;
  double t6474;
  double t6996;
  double t7978;
  double t6448;
  double t7991;
  double t8001;
  double t8006;
  double t8034;
  double t8072;
  double t8210;
  double t8211;
  double t8212;
  double t8229;
  double t8232;
  double t8234;
  double t8218;
  double t8239;
  double t8244;
  double t8248;
  double t8254;
  double t8261;
  double t8245;
  double t8262;
  double t8268;
  double t8277;
  double t8278;
  double t8283;
  double t8273;
  double t8284;
  double t8286;
  double t8293;
  double t8294;
  double t8296;
  double t3425;
  double t4099;
  double t4253;
  double t4376;
  double t4440;
  double t4508;
  double t8004;
  double t8108;
  double t8161;
  double t8186;
  double t8187;
  double t8193;
  double t8289;
  double t8297;
  double t8298;
  double t8304;
  double t8305;
  double t8309;
  t354 = Cos(var1[1]);
  t2086 = Cos(var1[3]);
  t1934 = Cos(var1[2]);
  t1947 = Sin(var1[3]);
  t2087 = Sin(var1[2]);
  t2690 = Cos(var1[4]);
  t1997 = -1.*t354*t1934*t1947;
  t2382 = -1.*t2086*t354*t2087;
  t2453 = t1997 + t2382;
  t1460 = Sin(var1[4]);
  t2771 = t2086*t354*t1934;
  t2865 = -1.*t354*t1947*t2087;
  t2921 = t2771 + t2865;
  t3304 = Cos(var1[5]);
  t2636 = t1460*t2453;
  t3085 = t2690*t2921;
  t3156 = t2636 + t3085;
  t1431 = Sin(var1[5]);
  t3330 = t2690*t2453;
  t3332 = -1.*t1460*t2921;
  t3343 = t3330 + t3332;
  t3990 = Cos(var1[6]);
  t3182 = -1.*t1431*t3156;
  t3346 = t3304*t3343;
  t3391 = t3182 + t3346;
  t1259 = Sin(var1[6]);
  t4030 = t3304*t3156;
  t4031 = t1431*t3343;
  t4052 = t4030 + t4031;
  t138 = Cos(var1[0]);
  t71 = Sin(var1[1]);
  t672 = Sin(var1[0]);
  t4635 = t138*t1934*t71;
  t4641 = -1.*t672*t2087;
  t4682 = t4635 + t4641;
  t4715 = -1.*t1934*t672;
  t4817 = -1.*t138*t71*t2087;
  t4959 = t4715 + t4817;
  t4703 = -1.*t1947*t4682;
  t5049 = t2086*t4959;
  t5056 = t4703 + t5049;
  t5238 = t2086*t4682;
  t5620 = t1947*t4959;
  t5959 = t5238 + t5620;
  t5089 = t1460*t5056;
  t6139 = t2690*t5959;
  t6202 = t5089 + t6139;
  t6474 = t2690*t5056;
  t6996 = -1.*t1460*t5959;
  t7978 = t6474 + t6996;
  t6448 = -1.*t1431*t6202;
  t7991 = t3304*t7978;
  t8001 = t6448 + t7991;
  t8006 = t3304*t6202;
  t8034 = t1431*t7978;
  t8072 = t8006 + t8034;
  t8210 = t1934*t672*t71;
  t8211 = t138*t2087;
  t8212 = t8210 + t8211;
  t8229 = t138*t1934;
  t8232 = -1.*t672*t71*t2087;
  t8234 = t8229 + t8232;
  t8218 = -1.*t1947*t8212;
  t8239 = t2086*t8234;
  t8244 = t8218 + t8239;
  t8248 = t2086*t8212;
  t8254 = t1947*t8234;
  t8261 = t8248 + t8254;
  t8245 = t1460*t8244;
  t8262 = t2690*t8261;
  t8268 = t8245 + t8262;
  t8277 = t2690*t8244;
  t8278 = -1.*t1460*t8261;
  t8283 = t8277 + t8278;
  t8273 = -1.*t1431*t8268;
  t8284 = t3304*t8283;
  t8286 = t8273 + t8284;
  t8293 = t3304*t8268;
  t8294 = t1431*t8283;
  t8296 = t8293 + t8294;
  t3425 = t1259*t3391;
  t4099 = t3990*t4052;
  t4253 = t3425 + t4099;
  t4376 = t3990*t3391;
  t4440 = -1.*t1259*t4052;
  t4508 = t4376 + t4440;
  t8004 = t1259*t8001;
  t8108 = t3990*t8072;
  t8161 = t8004 + t8108;
  t8186 = t3990*t8001;
  t8187 = -1.*t1259*t8072;
  t8193 = t8186 + t8187;
  t8289 = t1259*t8286;
  t8297 = t3990*t8296;
  t8298 = t8289 + t8297;
  t8304 = t3990*t8286;
  t8305 = -1.*t1259*t8296;
  t8309 = t8304 + t8305;

  p_output1(0)=0. + t71;
  p_output1(1)=0. + t138*t354;
  p_output1(2)=0. + t354*t672;
  p_output1(3)=0. + 0.642788*t4253 + 0.766044*t4508;
  p_output1(4)=0. - 0.642788*t8161 - 0.766044*t8193;
  p_output1(5)=0. - 0.642788*t8298 - 0.766044*t8309;
  p_output1(6)=0. - 0.766044*t4253 + 0.642788*t4508;
  p_output1(7)=0. + 0.766044*t8161 - 0.642788*t8193;
  p_output1(8)=0. + 0.766044*t8298 - 0.642788*t8309;
}


       
void R_VectorNav_to_LeftToeBottom(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
