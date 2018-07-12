/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:37:21 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_VectorNav_to_RightToeBottom.h"

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
  double t652;
  double t1616;
  double t1864;
  double t1571;
  double t1986;
  double t1388;
  double t2315;
  double t2345;
  double t2369;
  double t1804;
  double t1995;
  double t2026;
  double t2499;
  double t1351;
  double t2651;
  double t2773;
  double t2779;
  double t2090;
  double t2528;
  double t2535;
  double t2875;
  double t1289;
  double t2986;
  double t3044;
  double t3202;
  double t2636;
  double t2932;
  double t2944;
  double t3238;
  double t486;
  double t226;
  double t1080;
  double t3816;
  double t3874;
  double t3881;
  double t3694;
  double t3711;
  double t3765;
  double t4104;
  double t4158;
  double t4184;
  double t3815;
  double t3885;
  double t3903;
  double t4344;
  double t4424;
  double t4517;
  double t3933;
  double t4204;
  double t4231;
  double t4629;
  double t4630;
  double t4664;
  double t4255;
  double t4527;
  double t4568;
  double t5162;
  double t5322;
  double t5364;
  double t5126;
  double t5128;
  double t5155;
  double t5391;
  double t5402;
  double t5437;
  double t5156;
  double t5367;
  double t5368;
  double t5532;
  double t5540;
  double t5561;
  double t5375;
  double t5459;
  double t5507;
  double t5683;
  double t5712;
  double t5731;
  double t5521;
  double t5566;
  double t5596;
  double t2982;
  double t3287;
  double t3353;
  double t3418;
  double t3565;
  double t3584;
  double t4574;
  double t4702;
  double t4775;
  double t4881;
  double t4893;
  double t5025;
  double t5606;
  double t5775;
  double t5782;
  double t5855;
  double t5922;
  double t5927;
  t652 = Cos(var1[8]);
  t1616 = Cos(var1[10]);
  t1864 = Sin(var1[9]);
  t1571 = Cos(var1[9]);
  t1986 = Sin(var1[10]);
  t1388 = Cos(var1[11]);
  t2315 = -1.*t652*t1616*t1864;
  t2345 = -1.*t652*t1571*t1986;
  t2369 = t2315 + t2345;
  t1804 = t652*t1571*t1616;
  t1995 = -1.*t652*t1864*t1986;
  t2026 = t1804 + t1995;
  t2499 = Sin(var1[11]);
  t1351 = Cos(var1[12]);
  t2651 = t1388*t2369;
  t2773 = -1.*t2026*t2499;
  t2779 = t2651 + t2773;
  t2090 = t1388*t2026;
  t2528 = t2369*t2499;
  t2535 = t2090 + t2528;
  t2875 = Sin(var1[12]);
  t1289 = Cos(var1[13]);
  t2986 = t1351*t2779;
  t3044 = -1.*t2535*t2875;
  t3202 = t2986 + t3044;
  t2636 = t1351*t2535;
  t2932 = t2779*t2875;
  t2944 = t2636 + t2932;
  t3238 = Sin(var1[13]);
  t486 = Cos(var1[7]);
  t226 = Sin(var1[8]);
  t1080 = Sin(var1[7]);
  t3816 = -1.*t1571*t1080;
  t3874 = -1.*t486*t226*t1864;
  t3881 = t3816 + t3874;
  t3694 = t486*t1571*t226;
  t3711 = -1.*t1080*t1864;
  t3765 = t3694 + t3711;
  t4104 = t1616*t3881;
  t4158 = -1.*t3765*t1986;
  t4184 = t4104 + t4158;
  t3815 = t1616*t3765;
  t3885 = t3881*t1986;
  t3903 = t3815 + t3885;
  t4344 = t1388*t4184;
  t4424 = -1.*t3903*t2499;
  t4517 = t4344 + t4424;
  t3933 = t1388*t3903;
  t4204 = t4184*t2499;
  t4231 = t3933 + t4204;
  t4629 = t1351*t4517;
  t4630 = -1.*t4231*t2875;
  t4664 = t4629 + t4630;
  t4255 = t1351*t4231;
  t4527 = t4517*t2875;
  t4568 = t4255 + t4527;
  t5162 = t486*t1571;
  t5322 = -1.*t1080*t226*t1864;
  t5364 = t5162 + t5322;
  t5126 = t1571*t1080*t226;
  t5128 = t486*t1864;
  t5155 = t5126 + t5128;
  t5391 = t1616*t5364;
  t5402 = -1.*t5155*t1986;
  t5437 = t5391 + t5402;
  t5156 = t1616*t5155;
  t5367 = t5364*t1986;
  t5368 = t5156 + t5367;
  t5532 = t1388*t5437;
  t5540 = -1.*t5368*t2499;
  t5561 = t5532 + t5540;
  t5375 = t1388*t5368;
  t5459 = t5437*t2499;
  t5507 = t5375 + t5459;
  t5683 = t1351*t5561;
  t5712 = -1.*t5507*t2875;
  t5731 = t5683 + t5712;
  t5521 = t1351*t5507;
  t5566 = t5561*t2875;
  t5596 = t5521 + t5566;
  t2982 = t1289*t2944;
  t3287 = t3202*t3238;
  t3353 = t2982 + t3287;
  t3418 = t1289*t3202;
  t3565 = -1.*t2944*t3238;
  t3584 = t3418 + t3565;
  t4574 = t1289*t4568;
  t4702 = t4664*t3238;
  t4775 = t4574 + t4702;
  t4881 = t1289*t4664;
  t4893 = -1.*t4568*t3238;
  t5025 = t4881 + t4893;
  t5606 = t1289*t5596;
  t5775 = t5731*t3238;
  t5782 = t5606 + t5775;
  t5855 = t1289*t5731;
  t5922 = -1.*t5596*t3238;
  t5927 = t5855 + t5922;

  p_output1(0)=0. + t226;
  p_output1(1)=0. - 1.*t486*t652;
  p_output1(2)=0. - 1.*t1080*t652;
  p_output1(3)=0. + 0.642788*t3353 + 0.766044*t3584;
  p_output1(4)=0. + 0.642788*t4775 + 0.766044*t5025;
  p_output1(5)=0. + 0.642788*t5782 + 0.766044*t5927;
  p_output1(6)=0. - 0.766044*t3353 + 0.642788*t3584;
  p_output1(7)=0. - 0.766044*t4775 + 0.642788*t5025;
  p_output1(8)=0. - 0.766044*t5782 + 0.642788*t5927;
}


       
void R_VectorNav_to_RightToeBottom(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
