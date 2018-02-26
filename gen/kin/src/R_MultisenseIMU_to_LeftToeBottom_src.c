/*
 * Automatically Generated from Mathematica.
 * Mon 26 Feb 2018 15:42:40 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_MultisenseIMU_to_LeftToeBottom_src.h"

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
  double t126;
  double t451;
  double t2940;
  double t1358;
  double t5908;
  double t5917;
  double t5936;
  double t5913;
  double t5925;
  double t5926;
  double t5906;
  double t5937;
  double t5956;
  double t5960;
  double t5973;
  double t5929;
  double t5966;
  double t5969;
  double t5891;
  double t5980;
  double t5986;
  double t5989;
  double t5996;
  double t5970;
  double t5990;
  double t5991;
  double t5878;
  double t5997;
  double t5998;
  double t6012;
  double t6026;
  double t5995;
  double t6016;
  double t6022;
  double t5835;
  double t6027;
  double t6032;
  double t6037;
  double t6057;
  double t6059;
  double t6061;
  double t6063;
  double t6069;
  double t6072;
  double t6062;
  double t6073;
  double t6077;
  double t6086;
  double t6087;
  double t6089;
  double t6083;
  double t6092;
  double t6093;
  double t6097;
  double t6099;
  double t6102;
  double t6095;
  double t6103;
  double t6106;
  double t6109;
  double t6112;
  double t6113;
  double t6124;
  double t6125;
  double t6126;
  double t6128;
  double t6129;
  double t6130;
  double t6127;
  double t6131;
  double t6132;
  double t6134;
  double t6135;
  double t6136;
  double t6133;
  double t6137;
  double t6138;
  double t6140;
  double t6141;
  double t6142;
  double t6025;
  double t6042;
  double t6045;
  double t6047;
  double t6049;
  double t6052;
  double t6107;
  double t6115;
  double t6116;
  double t6119;
  double t6120;
  double t6121;
  double t6139;
  double t6143;
  double t6144;
  double t6146;
  double t6147;
  double t6148;
  t126 = Cos(var1[1]);
  t451 = Sin(var1[0]);
  t2940 = Sin(var1[1]);
  t1358 = Cos(var1[0]);
  t5908 = Cos(var1[2]);
  t5917 = Sin(var1[2]);
  t5936 = Cos(var1[3]);
  t5913 = t5908*t451*t2940;
  t5925 = t1358*t5917;
  t5926 = t5913 + t5925;
  t5906 = Sin(var1[3]);
  t5937 = t1358*t5908;
  t5956 = -1.*t451*t2940*t5917;
  t5960 = t5937 + t5956;
  t5973 = Cos(var1[4]);
  t5929 = -1.*t5906*t5926;
  t5966 = t5936*t5960;
  t5969 = t5929 + t5966;
  t5891 = Sin(var1[4]);
  t5980 = t5936*t5926;
  t5986 = t5906*t5960;
  t5989 = t5980 + t5986;
  t5996 = Cos(var1[5]);
  t5970 = t5891*t5969;
  t5990 = t5973*t5989;
  t5991 = t5970 + t5990;
  t5878 = Sin(var1[5]);
  t5997 = t5973*t5969;
  t5998 = -1.*t5891*t5989;
  t6012 = t5997 + t5998;
  t6026 = Cos(var1[6]);
  t5995 = -1.*t5878*t5991;
  t6016 = t5996*t6012;
  t6022 = t5995 + t6016;
  t5835 = Sin(var1[6]);
  t6027 = t5996*t5991;
  t6032 = t5878*t6012;
  t6037 = t6027 + t6032;
  t6057 = t1358*t5908*t2940;
  t6059 = -1.*t451*t5917;
  t6061 = t6057 + t6059;
  t6063 = -1.*t5908*t451;
  t6069 = -1.*t1358*t2940*t5917;
  t6072 = t6063 + t6069;
  t6062 = -1.*t5906*t6061;
  t6073 = t5936*t6072;
  t6077 = t6062 + t6073;
  t6086 = t5936*t6061;
  t6087 = t5906*t6072;
  t6089 = t6086 + t6087;
  t6083 = t5891*t6077;
  t6092 = t5973*t6089;
  t6093 = t6083 + t6092;
  t6097 = t5973*t6077;
  t6099 = -1.*t5891*t6089;
  t6102 = t6097 + t6099;
  t6095 = -1.*t5878*t6093;
  t6103 = t5996*t6102;
  t6106 = t6095 + t6103;
  t6109 = t5996*t6093;
  t6112 = t5878*t6102;
  t6113 = t6109 + t6112;
  t6124 = -1.*t126*t5908*t5906;
  t6125 = -1.*t5936*t126*t5917;
  t6126 = t6124 + t6125;
  t6128 = t5936*t126*t5908;
  t6129 = -1.*t126*t5906*t5917;
  t6130 = t6128 + t6129;
  t6127 = t5891*t6126;
  t6131 = t5973*t6130;
  t6132 = t6127 + t6131;
  t6134 = t5973*t6126;
  t6135 = -1.*t5891*t6130;
  t6136 = t6134 + t6135;
  t6133 = -1.*t5878*t6132;
  t6137 = t5996*t6136;
  t6138 = t6133 + t6137;
  t6140 = t5996*t6132;
  t6141 = t5878*t6136;
  t6142 = t6140 + t6141;
  t6025 = t5835*t6022;
  t6042 = t6026*t6037;
  t6045 = t6025 + t6042;
  t6047 = t6026*t6022;
  t6049 = -1.*t5835*t6037;
  t6052 = t6047 + t6049;
  t6107 = t5835*t6106;
  t6115 = t6026*t6113;
  t6116 = t6107 + t6115;
  t6119 = t6026*t6106;
  t6120 = -1.*t5835*t6113;
  t6121 = t6119 + t6120;
  t6139 = t5835*t6138;
  t6143 = t6026*t6142;
  t6144 = t6139 + t6143;
  t6146 = t6026*t6138;
  t6147 = -1.*t5835*t6142;
  t6148 = t6146 + t6147;
  p_output1[0]=0. + t126*t451;
  p_output1[1]=0. - 1.*t126*t1358;
  p_output1[2]=0. + t2940;
  p_output1[3]=0. - 0.642788*t6045 - 0.766044*t6052;
  p_output1[4]=0. + 0.642788*t6116 + 0.766044*t6121;
  p_output1[5]=0. + 0.642788*t6144 + 0.766044*t6148;
  p_output1[6]=0. + 0.766044*t6045 - 0.642788*t6052;
  p_output1[7]=0. - 0.766044*t6116 + 0.642788*t6121;
  p_output1[8]=0. - 0.766044*t6144 + 0.642788*t6148;
}



void R_MultisenseIMU_to_LeftToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
