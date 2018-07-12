/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:36:50 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_VectorNav_to_LeftToeBottom_src.h"

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
  double t699;
  double t2093;
  double t1938;
  double t1941;
  double t2134;
  double t2226;
  double t2071;
  double t2149;
  double t2151;
  double t1798;
  double t2257;
  double t2278;
  double t2291;
  double t2453;
  double t2196;
  double t2294;
  double t2333;
  double t1451;
  double t2489;
  double t2578;
  double t2580;
  double t2722;
  double t2415;
  double t2584;
  double t2629;
  double t1374;
  double t2737;
  double t2749;
  double t2894;
  double t389;
  double t148;
  double t981;
  double t3223;
  double t3380;
  double t3397;
  double t3429;
  double t3465;
  double t3689;
  double t3417;
  double t3701;
  double t3738;
  double t3832;
  double t3872;
  double t3891;
  double t3829;
  double t3898;
  double t3917;
  double t4034;
  double t4036;
  double t4067;
  double t4001;
  double t4081;
  double t4085;
  double t4132;
  double t4156;
  double t4157;
  double t4475;
  double t4479;
  double t4484;
  double t4491;
  double t4518;
  double t4524;
  double t4488;
  double t4533;
  double t4594;
  double t4675;
  double t4686;
  double t4698;
  double t4662;
  double t4719;
  double t4767;
  double t4790;
  double t4871;
  double t4889;
  double t4769;
  double t4946;
  double t4960;
  double t4993;
  double t5002;
  double t5017;
  double t2639;
  double t2922;
  double t2934;
  double t3016;
  double t3112;
  double t3145;
  double t4091;
  double t4199;
  double t4285;
  double t4383;
  double t4393;
  double t4419;
  double t4985;
  double t5070;
  double t5072;
  double t5132;
  double t5194;
  double t5228;
  t699 = Cos(var1[1]);
  t2093 = Cos(var1[3]);
  t1938 = Cos(var1[2]);
  t1941 = Sin(var1[3]);
  t2134 = Sin(var1[2]);
  t2226 = Cos(var1[4]);
  t2071 = -1.*t699*t1938*t1941;
  t2149 = -1.*t2093*t699*t2134;
  t2151 = t2071 + t2149;
  t1798 = Sin(var1[4]);
  t2257 = t2093*t699*t1938;
  t2278 = -1.*t699*t1941*t2134;
  t2291 = t2257 + t2278;
  t2453 = Cos(var1[5]);
  t2196 = t1798*t2151;
  t2294 = t2226*t2291;
  t2333 = t2196 + t2294;
  t1451 = Sin(var1[5]);
  t2489 = t2226*t2151;
  t2578 = -1.*t1798*t2291;
  t2580 = t2489 + t2578;
  t2722 = Cos(var1[6]);
  t2415 = -1.*t1451*t2333;
  t2584 = t2453*t2580;
  t2629 = t2415 + t2584;
  t1374 = Sin(var1[6]);
  t2737 = t2453*t2333;
  t2749 = t1451*t2580;
  t2894 = t2737 + t2749;
  t389 = Cos(var1[0]);
  t148 = Sin(var1[1]);
  t981 = Sin(var1[0]);
  t3223 = t389*t1938*t148;
  t3380 = -1.*t981*t2134;
  t3397 = t3223 + t3380;
  t3429 = -1.*t1938*t981;
  t3465 = -1.*t389*t148*t2134;
  t3689 = t3429 + t3465;
  t3417 = -1.*t1941*t3397;
  t3701 = t2093*t3689;
  t3738 = t3417 + t3701;
  t3832 = t2093*t3397;
  t3872 = t1941*t3689;
  t3891 = t3832 + t3872;
  t3829 = t1798*t3738;
  t3898 = t2226*t3891;
  t3917 = t3829 + t3898;
  t4034 = t2226*t3738;
  t4036 = -1.*t1798*t3891;
  t4067 = t4034 + t4036;
  t4001 = -1.*t1451*t3917;
  t4081 = t2453*t4067;
  t4085 = t4001 + t4081;
  t4132 = t2453*t3917;
  t4156 = t1451*t4067;
  t4157 = t4132 + t4156;
  t4475 = t1938*t981*t148;
  t4479 = t389*t2134;
  t4484 = t4475 + t4479;
  t4491 = t389*t1938;
  t4518 = -1.*t981*t148*t2134;
  t4524 = t4491 + t4518;
  t4488 = -1.*t1941*t4484;
  t4533 = t2093*t4524;
  t4594 = t4488 + t4533;
  t4675 = t2093*t4484;
  t4686 = t1941*t4524;
  t4698 = t4675 + t4686;
  t4662 = t1798*t4594;
  t4719 = t2226*t4698;
  t4767 = t4662 + t4719;
  t4790 = t2226*t4594;
  t4871 = -1.*t1798*t4698;
  t4889 = t4790 + t4871;
  t4769 = -1.*t1451*t4767;
  t4946 = t2453*t4889;
  t4960 = t4769 + t4946;
  t4993 = t2453*t4767;
  t5002 = t1451*t4889;
  t5017 = t4993 + t5002;
  t2639 = t1374*t2629;
  t2922 = t2722*t2894;
  t2934 = t2639 + t2922;
  t3016 = t2722*t2629;
  t3112 = -1.*t1374*t2894;
  t3145 = t3016 + t3112;
  t4091 = t1374*t4085;
  t4199 = t2722*t4157;
  t4285 = t4091 + t4199;
  t4383 = t2722*t4085;
  t4393 = -1.*t1374*t4157;
  t4419 = t4383 + t4393;
  t4985 = t1374*t4960;
  t5070 = t2722*t5017;
  t5072 = t4985 + t5070;
  t5132 = t2722*t4960;
  t5194 = -1.*t1374*t5017;
  t5228 = t5132 + t5194;
  p_output1[0]=0. + t148;
  p_output1[1]=0. - 1.*t389*t699;
  p_output1[2]=0. - 1.*t699*t981;
  p_output1[3]=0. + 0.642788*t2934 + 0.766044*t3145;
  p_output1[4]=0. + 0.642788*t4285 + 0.766044*t4419;
  p_output1[5]=0. + 0.642788*t5072 + 0.766044*t5228;
  p_output1[6]=0. - 0.766044*t2934 + 0.642788*t3145;
  p_output1[7]=0. - 0.766044*t4285 + 0.642788*t4419;
  p_output1[8]=0. - 0.766044*t5072 + 0.642788*t5228;
}



void R_VectorNav_to_LeftToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
