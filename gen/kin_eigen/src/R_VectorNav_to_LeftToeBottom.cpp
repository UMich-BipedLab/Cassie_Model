/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:24:52 GMT-05:00
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
  double t276;
  double t1648;
  double t1453;
  double t1594;
  double t1885;
  double t1997;
  double t1609;
  double t1984;
  double t1985;
  double t1426;
  double t2062;
  double t2083;
  double t2229;
  double t2488;
  double t1993;
  double t2398;
  double t2435;
  double t1080;
  double t2581;
  double t2646;
  double t2660;
  double t2847;
  double t2455;
  double t2732;
  double t2791;
  double t891;
  double t2856;
  double t2926;
  double t2930;
  double t196;
  double t127;
  double t710;
  double t3707;
  double t3830;
  double t3847;
  double t3994;
  double t4000;
  double t4057;
  double t3956;
  double t4085;
  double t4090;
  double t4109;
  double t4246;
  double t4251;
  double t4104;
  double t4273;
  double t4279;
  double t4429;
  double t4435;
  double t4464;
  double t4332;
  double t4488;
  double t4516;
  double t4578;
  double t4606;
  double t4653;
  double t4968;
  double t5005;
  double t5014;
  double t5071;
  double t5078;
  double t5117;
  double t5058;
  double t5131;
  double t5158;
  double t5170;
  double t5182;
  double t5215;
  double t5166;
  double t5251;
  double t5257;
  double t5314;
  double t5340;
  double t5347;
  double t5294;
  double t5348;
  double t5365;
  double t5382;
  double t5386;
  double t5419;
  double t2834;
  double t2982;
  double t3064;
  double t3344;
  double t3476;
  double t3491;
  double t4537;
  double t4689;
  double t4692;
  double t4730;
  double t4771;
  double t4800;
  double t5369;
  double t5420;
  double t5422;
  double t5457;
  double t5493;
  double t5494;
  t276 = Cos(var1[1]);
  t1648 = Cos(var1[3]);
  t1453 = Cos(var1[2]);
  t1594 = Sin(var1[3]);
  t1885 = Sin(var1[2]);
  t1997 = Cos(var1[4]);
  t1609 = -1.*t276*t1453*t1594;
  t1984 = -1.*t1648*t276*t1885;
  t1985 = t1609 + t1984;
  t1426 = Sin(var1[4]);
  t2062 = t1648*t276*t1453;
  t2083 = -1.*t276*t1594*t1885;
  t2229 = t2062 + t2083;
  t2488 = Cos(var1[5]);
  t1993 = t1426*t1985;
  t2398 = t1997*t2229;
  t2435 = t1993 + t2398;
  t1080 = Sin(var1[5]);
  t2581 = t1997*t1985;
  t2646 = -1.*t1426*t2229;
  t2660 = t2581 + t2646;
  t2847 = Cos(var1[6]);
  t2455 = -1.*t1080*t2435;
  t2732 = t2488*t2660;
  t2791 = t2455 + t2732;
  t891 = Sin(var1[6]);
  t2856 = t2488*t2435;
  t2926 = t1080*t2660;
  t2930 = t2856 + t2926;
  t196 = Cos(var1[0]);
  t127 = Sin(var1[1]);
  t710 = Sin(var1[0]);
  t3707 = t196*t1453*t127;
  t3830 = -1.*t710*t1885;
  t3847 = t3707 + t3830;
  t3994 = -1.*t1453*t710;
  t4000 = -1.*t196*t127*t1885;
  t4057 = t3994 + t4000;
  t3956 = -1.*t1594*t3847;
  t4085 = t1648*t4057;
  t4090 = t3956 + t4085;
  t4109 = t1648*t3847;
  t4246 = t1594*t4057;
  t4251 = t4109 + t4246;
  t4104 = t1426*t4090;
  t4273 = t1997*t4251;
  t4279 = t4104 + t4273;
  t4429 = t1997*t4090;
  t4435 = -1.*t1426*t4251;
  t4464 = t4429 + t4435;
  t4332 = -1.*t1080*t4279;
  t4488 = t2488*t4464;
  t4516 = t4332 + t4488;
  t4578 = t2488*t4279;
  t4606 = t1080*t4464;
  t4653 = t4578 + t4606;
  t4968 = t1453*t710*t127;
  t5005 = t196*t1885;
  t5014 = t4968 + t5005;
  t5071 = t196*t1453;
  t5078 = -1.*t710*t127*t1885;
  t5117 = t5071 + t5078;
  t5058 = -1.*t1594*t5014;
  t5131 = t1648*t5117;
  t5158 = t5058 + t5131;
  t5170 = t1648*t5014;
  t5182 = t1594*t5117;
  t5215 = t5170 + t5182;
  t5166 = t1426*t5158;
  t5251 = t1997*t5215;
  t5257 = t5166 + t5251;
  t5314 = t1997*t5158;
  t5340 = -1.*t1426*t5215;
  t5347 = t5314 + t5340;
  t5294 = -1.*t1080*t5257;
  t5348 = t2488*t5347;
  t5365 = t5294 + t5348;
  t5382 = t2488*t5257;
  t5386 = t1080*t5347;
  t5419 = t5382 + t5386;
  t2834 = t891*t2791;
  t2982 = t2847*t2930;
  t3064 = t2834 + t2982;
  t3344 = t2847*t2791;
  t3476 = -1.*t891*t2930;
  t3491 = t3344 + t3476;
  t4537 = t891*t4516;
  t4689 = t2847*t4653;
  t4692 = t4537 + t4689;
  t4730 = t2847*t4516;
  t4771 = -1.*t891*t4653;
  t4800 = t4730 + t4771;
  t5369 = t891*t5365;
  t5420 = t2847*t5419;
  t5422 = t5369 + t5420;
  t5457 = t2847*t5365;
  t5493 = -1.*t891*t5419;
  t5494 = t5457 + t5493;

  p_output1(0)=0. + t127;
  p_output1(1)=0. + t196*t276;
  p_output1(2)=0. + t276*t710;
  p_output1(3)=0. + 0.642788*t3064 + 0.766044*t3491;
  p_output1(4)=0. - 0.642788*t4692 - 0.766044*t4800;
  p_output1(5)=0. - 0.642788*t5422 - 0.766044*t5494;
  p_output1(6)=0. - 0.766044*t3064 + 0.642788*t3491;
  p_output1(7)=0. + 0.766044*t4692 - 0.642788*t4800;
  p_output1(8)=0. + 0.766044*t5422 - 0.642788*t5494;
}


       
void R_VectorNav_to_LeftToeBottom(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
