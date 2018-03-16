/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 12:16:28 GMT-04:00
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
  double t696;
  double t5466;
  double t5527;
  double t5448;
  double t5536;
  double t5365;
  double t5645;
  double t5674;
  double t5683;
  double t5521;
  double t5544;
  double t5616;
  double t5684;
  double t5106;
  double t5716;
  double t5717;
  double t5730;
  double t5622;
  double t5703;
  double t5706;
  double t5751;
  double t2455;
  double t5796;
  double t5808;
  double t5823;
  double t5707;
  double t5766;
  double t5776;
  double t5828;
  double t455;
  double t213;
  double t819;
  double t5865;
  double t5866;
  double t5875;
  double t5853;
  double t5856;
  double t5860;
  double t5892;
  double t5893;
  double t5898;
  double t5861;
  double t5878;
  double t5881;
  double t5911;
  double t5912;
  double t5919;
  double t5882;
  double t5900;
  double t5906;
  double t5930;
  double t5931;
  double t5932;
  double t5908;
  double t5920;
  double t5923;
  double t5957;
  double t5958;
  double t5959;
  double t5949;
  double t5950;
  double t5953;
  double t5963;
  double t5966;
  double t5967;
  double t5956;
  double t5960;
  double t5961;
  double t5971;
  double t5972;
  double t5973;
  double t5962;
  double t5968;
  double t5969;
  double t5979;
  double t5980;
  double t5981;
  double t5970;
  double t5976;
  double t5977;
  double t5782;
  double t5832;
  double t5836;
  double t5841;
  double t5846;
  double t5848;
  double t5926;
  double t5936;
  double t5937;
  double t5939;
  double t5940;
  double t5941;
  double t5978;
  double t5982;
  double t5983;
  double t5985;
  double t5986;
  double t5987;
  t696 = Cos(var1[8]);
  t5466 = Cos(var1[10]);
  t5527 = Sin(var1[9]);
  t5448 = Cos(var1[9]);
  t5536 = Sin(var1[10]);
  t5365 = Cos(var1[11]);
  t5645 = -1.*t696*t5466*t5527;
  t5674 = -1.*t696*t5448*t5536;
  t5683 = t5645 + t5674;
  t5521 = t696*t5448*t5466;
  t5544 = -1.*t696*t5527*t5536;
  t5616 = t5521 + t5544;
  t5684 = Sin(var1[11]);
  t5106 = Cos(var1[12]);
  t5716 = t5365*t5683;
  t5717 = -1.*t5616*t5684;
  t5730 = t5716 + t5717;
  t5622 = t5365*t5616;
  t5703 = t5683*t5684;
  t5706 = t5622 + t5703;
  t5751 = Sin(var1[12]);
  t2455 = Cos(var1[13]);
  t5796 = t5106*t5730;
  t5808 = -1.*t5706*t5751;
  t5823 = t5796 + t5808;
  t5707 = t5106*t5706;
  t5766 = t5730*t5751;
  t5776 = t5707 + t5766;
  t5828 = Sin(var1[13]);
  t455 = Cos(var1[7]);
  t213 = Sin(var1[8]);
  t819 = Sin(var1[7]);
  t5865 = -1.*t5448*t819;
  t5866 = -1.*t455*t213*t5527;
  t5875 = t5865 + t5866;
  t5853 = t455*t5448*t213;
  t5856 = -1.*t819*t5527;
  t5860 = t5853 + t5856;
  t5892 = t5466*t5875;
  t5893 = -1.*t5860*t5536;
  t5898 = t5892 + t5893;
  t5861 = t5466*t5860;
  t5878 = t5875*t5536;
  t5881 = t5861 + t5878;
  t5911 = t5365*t5898;
  t5912 = -1.*t5881*t5684;
  t5919 = t5911 + t5912;
  t5882 = t5365*t5881;
  t5900 = t5898*t5684;
  t5906 = t5882 + t5900;
  t5930 = t5106*t5919;
  t5931 = -1.*t5906*t5751;
  t5932 = t5930 + t5931;
  t5908 = t5106*t5906;
  t5920 = t5919*t5751;
  t5923 = t5908 + t5920;
  t5957 = t455*t5448;
  t5958 = -1.*t819*t213*t5527;
  t5959 = t5957 + t5958;
  t5949 = t5448*t819*t213;
  t5950 = t455*t5527;
  t5953 = t5949 + t5950;
  t5963 = t5466*t5959;
  t5966 = -1.*t5953*t5536;
  t5967 = t5963 + t5966;
  t5956 = t5466*t5953;
  t5960 = t5959*t5536;
  t5961 = t5956 + t5960;
  t5971 = t5365*t5967;
  t5972 = -1.*t5961*t5684;
  t5973 = t5971 + t5972;
  t5962 = t5365*t5961;
  t5968 = t5967*t5684;
  t5969 = t5962 + t5968;
  t5979 = t5106*t5973;
  t5980 = -1.*t5969*t5751;
  t5981 = t5979 + t5980;
  t5970 = t5106*t5969;
  t5976 = t5973*t5751;
  t5977 = t5970 + t5976;
  t5782 = t2455*t5776;
  t5832 = t5823*t5828;
  t5836 = t5782 + t5832;
  t5841 = t2455*t5823;
  t5846 = -1.*t5776*t5828;
  t5848 = t5841 + t5846;
  t5926 = t2455*t5923;
  t5936 = t5932*t5828;
  t5937 = t5926 + t5936;
  t5939 = t2455*t5932;
  t5940 = -1.*t5923*t5828;
  t5941 = t5939 + t5940;
  t5978 = t2455*t5977;
  t5982 = t5981*t5828;
  t5983 = t5978 + t5982;
  t5985 = t2455*t5981;
  t5986 = -1.*t5977*t5828;
  t5987 = t5985 + t5986;

  p_output1(0)=0. + t213;
  p_output1(1)=0. + t455*t696;
  p_output1(2)=0. + t696*t819;
  p_output1(3)=0. + 0.642788*t5836 + 0.766044*t5848;
  p_output1(4)=0. - 0.642788*t5937 - 0.766044*t5941;
  p_output1(5)=0. - 0.642788*t5983 - 0.766044*t5987;
  p_output1(6)=0. - 0.766044*t5836 + 0.642788*t5848;
  p_output1(7)=0. + 0.766044*t5937 - 0.642788*t5941;
  p_output1(8)=0. + 0.766044*t5983 - 0.642788*t5987;
}


       
void R_VectorNav_to_RightToeBottom(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
