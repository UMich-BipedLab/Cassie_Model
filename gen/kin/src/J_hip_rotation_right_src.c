/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:11:32 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "J_hip_rotation_right_src.h"

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
  double t5889;
  double t5943;
  double t5937;
  double t5939;
  double t5945;
  double t5920;
  double t5942;
  double t5946;
  double t5947;
  double t5949;
  double t5956;
  double t5958;
  double t5959;
  double t5871;
  double t5925;
  double t5936;
  double t5950;
  double t5951;
  double t5952;
  double t5954;
  double t5974;
  double t5975;
  double t5976;
  double t5980;
  double t5981;
  double t5984;
  double t6050;
  double t6052;
  double t6054;
  double t5992;
  double t6065;
  double t6066;
  double t6068;
  double t5963;
  double t6057;
  double t5993;
  double t5994;
  double t6071;
  double t6098;
  double t6099;
  double t6100;
  double t6074;
  double t6081;
  double t6082;
  double t6083;
  double t6084;
  double t6085;
  double t6086;
  double t6087;
  double t6088;
  t5889 = Sin(var1[3]);
  t5943 = Cos(var1[3]);
  t5937 = Cos(var1[5]);
  t5939 = Sin(var1[4]);
  t5945 = Sin(var1[5]);
  t5920 = Sin(var1[13]);
  t5942 = -1.*t5937*t5889*t5939;
  t5946 = t5943*t5945;
  t5947 = t5942 + t5946;
  t5949 = Cos(var1[13]);
  t5956 = -1.*t5943*t5937;
  t5958 = -1.*t5889*t5939*t5945;
  t5959 = t5956 + t5958;
  t5871 = Cos(var1[4]);
  t5925 = 0.135*t5920;
  t5936 = 0. + t5925;
  t5950 = -1.*t5949;
  t5951 = 1. + t5950;
  t5952 = -0.135*t5951;
  t5954 = 0. + t5952;
  t5974 = t5943*t5937*t5939;
  t5975 = t5889*t5945;
  t5976 = t5974 + t5975;
  t5980 = -1.*t5937*t5889;
  t5981 = t5943*t5939*t5945;
  t5984 = t5980 + t5981;
  t6050 = t5937*t5889;
  t6052 = -1.*t5943*t5939*t5945;
  t6054 = t6050 + t6052;
  t5992 = t5949*t5976;
  t6065 = t5937*t5889*t5939;
  t6066 = -1.*t5943*t5945;
  t6068 = t6065 + t6066;
  t5963 = t5949*t5959;
  t6057 = -1.*t5920*t5976;
  t5993 = -1.*t5920*t5984;
  t5994 = t5992 + t5993;
  t6071 = -1.*t5920*t6068;
  t6098 = t5943*t5937;
  t6099 = t5889*t5939*t5945;
  t6100 = t6098 + t6099;
  t6074 = t5949*t6068;
  t6081 = -1.*t5871*t5937*t5920;
  t6082 = -1.*t5949*t5871*t5945;
  t6083 = t6081 + t6082;
  t6084 = -0.09*t6083;
  t6085 = t5949*t5871*t5937;
  t6086 = -1.*t5871*t5920*t5945;
  t6087 = t6085 + t6086;
  t6088 = -0.135*t6087;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=0.049*t5871*t5889 + t5936*t5947 + t5954*t5959 - 0.09*(t5947*t5949 - 1.*t5920*t5959) - 0.135*(t5920*t5947 + t5963);
  p_output1[10]=-0.049*t5871*t5943 + t5936*t5976 + t5954*t5984 - 0.135*(t5920*t5976 + t5949*t5984) - 0.09*t5994;
  p_output1[11]=0;
  p_output1[12]=t5871*t5936*t5937*t5943 + 0.049*t5939*t5943 - 0.09*(-1.*t5871*t5920*t5943*t5945 + t5871*t5937*t5943*t5949) - 0.135*(t5871*t5920*t5937*t5943 + t5871*t5943*t5945*t5949) + t5871*t5943*t5945*t5954;
  p_output1[13]=t5871*t5889*t5936*t5937 + 0.049*t5889*t5939 - 0.09*(-1.*t5871*t5889*t5920*t5945 + t5871*t5889*t5937*t5949) - 0.135*(t5871*t5889*t5920*t5937 + t5871*t5889*t5945*t5949) + t5871*t5889*t5945*t5954;
  p_output1[14]=0.049*t5871 - 1.*t5936*t5937*t5939 - 0.09*(t5920*t5939*t5945 - 1.*t5937*t5939*t5949) - 0.135*(-1.*t5920*t5937*t5939 - 1.*t5939*t5945*t5949) - 1.*t5939*t5945*t5954;
  p_output1[15]=t5954*t5976 + t5936*t6054 - 0.135*(t5992 + t5920*t6054) - 0.09*(t5949*t6054 + t6057);
  p_output1[16]=t5936*t5959 + t5954*t6068 - 0.09*(t5963 + t6071) - 0.135*(t5920*t5959 + t6074);
  p_output1[17]=-1.*t5871*t5936*t5945 + t5871*t5937*t5954 + t6084 + t6088;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0.135*t5949*t5976 - 0.135*t5920*t5984 - 0.135*t5994 - 0.09*(-1.*t5949*t5984 + t6057);
  p_output1[40]=0.135*t5949*t6068 - 0.135*t5920*t6100 - 0.135*(t6074 - 1.*t5920*t6100) - 0.09*(t6071 - 1.*t5949*t6100);
  p_output1[41]=-0.135*t5871*t5920*t5945 + 0.135*t5871*t5937*t5949 + t6084 + t6088;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
}



void J_hip_rotation_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
