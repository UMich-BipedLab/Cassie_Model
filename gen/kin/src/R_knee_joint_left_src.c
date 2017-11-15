/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:10 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_knee_joint_left_src.h"

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
  double t1906;
  double t2009;
  double t2012;
  double t2010;
  double t2013;
  double t2002;
  double t2036;
  double t2037;
  double t2040;
  double t2011;
  double t2025;
  double t2027;
  double t2041;
  double t1898;
  double t2050;
  double t2052;
  double t2053;
  double t1957;
  double t1966;
  double t1971;
  double t2028;
  double t2042;
  double t2045;
  double t2046;
  double t2047;
  double t2048;
  double t2054;
  double t1870;
  double t2074;
  double t2075;
  double t2078;
  double t2070;
  double t2071;
  double t2072;
  double t2061;
  double t2092;
  double t2093;
  double t2096;
  double t2069;
  double t2073;
  double t2081;
  double t2082;
  double t2084;
  double t2088;
  double t2123;
  double t2125;
  double t2126;
  double t2114;
  double t2115;
  double t2117;
  double t2118;
  double t2119;
  double t2121;
  double t2049;
  double t2055;
  double t2057;
  double t2062;
  double t2063;
  double t2064;
  double t2089;
  double t2097;
  double t2101;
  double t2104;
  double t2106;
  double t2109;
  double t2122;
  double t2127;
  double t2128;
  double t2130;
  double t2131;
  double t2132;
  t1906 = Cos(var1[3]);
  t2009 = Cos(var1[5]);
  t2012 = Sin(var1[4]);
  t2010 = Sin(var1[3]);
  t2013 = Sin(var1[5]);
  t2002 = Cos(var1[6]);
  t2036 = t1906*t2009*t2012;
  t2037 = t2010*t2013;
  t2040 = t2036 + t2037;
  t2011 = -1.*t2009*t2010;
  t2025 = t1906*t2012*t2013;
  t2027 = t2011 + t2025;
  t2041 = Sin(var1[6]);
  t1898 = Cos(var1[8]);
  t2050 = t2002*t2040;
  t2052 = -1.*t2027*t2041;
  t2053 = t2050 + t2052;
  t1957 = Cos(var1[4]);
  t1966 = Cos(var1[7]);
  t1971 = t1906*t1957*t1966;
  t2028 = t2002*t2027;
  t2042 = t2040*t2041;
  t2045 = t2028 + t2042;
  t2046 = Sin(var1[7]);
  t2047 = t2045*t2046;
  t2048 = t1971 + t2047;
  t2054 = Sin(var1[8]);
  t1870 = Sin(var1[9]);
  t2074 = t2009*t2010*t2012;
  t2075 = -1.*t1906*t2013;
  t2078 = t2074 + t2075;
  t2070 = t1906*t2009;
  t2071 = t2010*t2012*t2013;
  t2072 = t2070 + t2071;
  t2061 = Cos(var1[9]);
  t2092 = t2002*t2078;
  t2093 = -1.*t2072*t2041;
  t2096 = t2092 + t2093;
  t2069 = t1957*t1966*t2010;
  t2073 = t2002*t2072;
  t2081 = t2078*t2041;
  t2082 = t2073 + t2081;
  t2084 = t2082*t2046;
  t2088 = t2069 + t2084;
  t2123 = t1957*t2009*t2002;
  t2125 = -1.*t1957*t2013*t2041;
  t2126 = t2123 + t2125;
  t2114 = -1.*t1966*t2012;
  t2115 = t1957*t2002*t2013;
  t2117 = t1957*t2009*t2041;
  t2118 = t2115 + t2117;
  t2119 = t2118*t2046;
  t2121 = t2114 + t2119;
  t2049 = t1898*t2048;
  t2055 = t2053*t2054;
  t2057 = t2049 + t2055;
  t2062 = t1898*t2053;
  t2063 = -1.*t2048*t2054;
  t2064 = t2062 + t2063;
  t2089 = t1898*t2088;
  t2097 = t2096*t2054;
  t2101 = t2089 + t2097;
  t2104 = t1898*t2096;
  t2106 = -1.*t2088*t2054;
  t2109 = t2104 + t2106;
  t2122 = t1898*t2121;
  t2127 = t2126*t2054;
  t2128 = t2122 + t2127;
  t2130 = t1898*t2126;
  t2131 = -1.*t2121*t2054;
  t2132 = t2130 + t2131;
  p_output1[0]=t1870*t2057 - 1.*t2061*t2064;
  p_output1[1]=t1870*t2101 - 1.*t2061*t2109;
  p_output1[2]=t1870*t2128 - 1.*t2061*t2132;
  p_output1[3]=t2057*t2061 + t1870*t2064;
  p_output1[4]=t2061*t2101 + t1870*t2109;
  p_output1[5]=t2061*t2128 + t1870*t2132;
  p_output1[6]=-1.*t1966*t2045 + t1906*t1957*t2046;
  p_output1[7]=t1957*t2010*t2046 - 1.*t1966*t2082;
  p_output1[8]=-1.*t2012*t2046 - 1.*t1966*t2118;
}



void R_knee_joint_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
