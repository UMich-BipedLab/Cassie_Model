/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:24:36 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jw_VectorNav_to_RightToeBottom_src.h"

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
  double t716;
  double t1038;
  double t1329;
  double t734;
  double t1057;
  double t1135;
  double t693;
  double t1566;
  double t1713;
  double t1770;
  double t1877;
  double t1185;
  double t1801;
  double t1819;
  double t649;
  double t1984;
  double t2106;
  double t2140;
  double t2222;
  double t1876;
  double t2143;
  double t2175;
  double t609;
  double t2256;
  double t2275;
  double t2553;
  double t467;
  double t2821;
  double t3441;
  double t3490;
  double t3493;
  double t3306;
  double t3749;
  double t3798;
  double t4122;
  double t4242;
  double t468;
  double t4025;
  double t4421;
  double t4449;
  double t4490;
  double t4568;
  double t4623;
  double t2202;
  double t2566;
  double t2614;
  double t2949;
  double t3000;
  double t3089;
  double t4463;
  double t4748;
  double t4763;
  double t4789;
  double t4801;
  double t4862;
  t716 = Cos(var1[13]);
  t1038 = Sin(var1[13]);
  t1329 = Cos(var1[12]);
  t734 = 0.642788*t716;
  t1057 = -0.766044*t1038;
  t1135 = t734 + t1057;
  t693 = Sin(var1[12]);
  t1566 = 0.766044*t716;
  t1713 = 0.642788*t1038;
  t1770 = t1566 + t1713;
  t1877 = Cos(var1[11]);
  t1185 = t693*t1135;
  t1801 = t1329*t1770;
  t1819 = 0. + t1185 + t1801;
  t649 = Sin(var1[11]);
  t1984 = t1329*t1135;
  t2106 = -1.*t693*t1770;
  t2140 = 0. + t1984 + t2106;
  t2222 = Cos(var1[10]);
  t1876 = -1.*t649*t1819;
  t2143 = t1877*t2140;
  t2175 = 0. + t1876 + t2143;
  t609 = Sin(var1[10]);
  t2256 = t1877*t1819;
  t2275 = t649*t2140;
  t2553 = 0. + t2256 + t2275;
  t467 = Cos(var1[8]);
  t2821 = Cos(var1[9]);
  t3441 = -0.766044*t716;
  t3490 = -0.642788*t1038;
  t3493 = t3441 + t3490;
  t3306 = -1.*t693*t1135;
  t3749 = t1329*t3493;
  t3798 = 0. + t3306 + t3749;
  t4122 = t693*t3493;
  t4242 = 0. + t1984 + t4122;
  t468 = Sin(var1[9]);
  t4025 = t649*t3798;
  t4421 = t1877*t4242;
  t4449 = 0. + t4025 + t4421;
  t4490 = t1877*t3798;
  t4568 = -1.*t649*t4242;
  t4623 = 0. + t4490 + t4568;
  t2202 = t609*t2175;
  t2566 = t2222*t2553;
  t2614 = 0. + t2202 + t2566;
  t2949 = t2222*t2175;
  t3000 = -1.*t609*t2553;
  t3089 = 0. + t2949 + t3000;
  t4463 = -1.*t609*t4449;
  t4748 = t2222*t4623;
  t4763 = 0. + t4463 + t4748;
  t4789 = t2222*t4449;
  t4801 = t609*t4623;
  t4862 = 0. + t4789 + t4801;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0. + Sin(var1[8]);
  p_output1[22]=0. + t467*(0. + t2821*t3089 - 1.*t2614*t468);
  p_output1[23]=0. + t467*(0. + t2821*t4763 - 1.*t468*t4862);
  p_output1[24]=0.;
  p_output1[25]=0. + t2614*t2821 + t3089*t468;
  p_output1[26]=0. + t468*t4763 + t2821*t4862;
  p_output1[27]=1.;
  p_output1[28]=0.;
  p_output1[29]=0.;
  p_output1[30]=1.;
  p_output1[31]=0.;
  p_output1[32]=0.;
  p_output1[33]=1.;
  p_output1[34]=0.;
  p_output1[35]=0.;
  p_output1[36]=1.;
  p_output1[37]=0.;
  p_output1[38]=0.;
  p_output1[39]=1.;
  p_output1[40]=0.;
  p_output1[41]=0.;
}



void Jw_VectorNav_to_RightToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
