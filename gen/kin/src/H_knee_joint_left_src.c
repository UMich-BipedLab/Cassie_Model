/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:11:06 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_knee_joint_left_src.h"

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
  double t1907;
  double t1923;
  double t1905;
  double t1909;
  double t1934;
  double t1894;
  double t1949;
  double t1950;
  double t1954;
  double t1917;
  double t1937;
  double t1940;
  double t1956;
  double t1881;
  double t1967;
  double t1968;
  double t2014;
  double t2017;
  double t2018;
  double t2004;
  double t2006;
  double t2009;
  double t1986;
  double t1995;
  double t1969;
  double t1976;
  double t1982;
  double t1984;
  double t1991;
  double t1994;
  double t1948;
  double t1957;
  double t1960;
  double t2022;
  double t2025;
  double t2026;
  double t2027;
  double t2028;
  double t2030;
  double t2013;
  double t2019;
  double t2020;
  double t2059;
  double t2061;
  double t2063;
  double t2067;
  double t2068;
  double t2069;
  double t2039;
  double t2046;
  double t2055;
  double t2127;
  double t2137;
  double t2159;
  double t2160;
  double t2074;
  double t2077;
  double t2078;
  double t2116;
  double t2117;
  double t2118;
  double t2119;
  double t2121;
  double t2122;
  double t2140;
  double t2142;
  double t2144;
  double t2148;
  double t2149;
  double t2150;
  double t2161;
  double t2163;
  double t2164;
  double t2166;
  double t2171;
  double t2174;
  double t2080;
  double t2081;
  double t2083;
  double t2096;
  double t2097;
  double t2098;
  t1907 = Cos(var1[5]);
  t1923 = Sin(var1[3]);
  t1905 = Cos(var1[3]);
  t1909 = Sin(var1[4]);
  t1934 = Sin(var1[5]);
  t1894 = Cos(var1[6]);
  t1949 = -1.*t1907*t1923;
  t1950 = t1905*t1909*t1934;
  t1954 = t1949 + t1950;
  t1917 = t1905*t1907*t1909;
  t1937 = t1923*t1934;
  t1940 = t1917 + t1937;
  t1956 = Sin(var1[6]);
  t1881 = Cos(var1[8]);
  t1967 = Cos(var1[4]);
  t1968 = Cos(var1[7]);
  t2014 = t1905*t1907;
  t2017 = t1923*t1909*t1934;
  t2018 = t2014 + t2017;
  t2004 = t1907*t1923*t1909;
  t2006 = -1.*t1905*t1934;
  t2009 = t2004 + t2006;
  t1986 = Sin(var1[7]);
  t1995 = Sin(var1[8]);
  t1969 = t1905*t1967*t1968;
  t1976 = t1894*t1954;
  t1982 = t1940*t1956;
  t1984 = t1976 + t1982;
  t1991 = t1984*t1986;
  t1994 = t1969 + t1991;
  t1948 = t1894*t1940;
  t1957 = -1.*t1954*t1956;
  t1960 = t1948 + t1957;
  t2022 = t1967*t1968*t1923;
  t2025 = t1894*t2018;
  t2026 = t2009*t1956;
  t2027 = t2025 + t2026;
  t2028 = t2027*t1986;
  t2030 = t2022 + t2028;
  t2013 = t1894*t2009;
  t2019 = -1.*t2018*t1956;
  t2020 = t2013 + t2019;
  t2059 = -1.*t1968*t1909;
  t2061 = t1967*t1894*t1934;
  t2063 = t1967*t1907*t1956;
  t2067 = t2061 + t2063;
  t2068 = t2067*t1986;
  t2069 = t2059 + t2068;
  t2039 = t1967*t1907*t1894;
  t2046 = -1.*t1967*t1934*t1956;
  t2055 = t2039 + t2046;
  t2127 = -1.*t1968;
  t2137 = 1. + t2127;
  t2159 = -1.*t1881;
  t2160 = 1. + t2159;
  t2074 = t1881*t1994;
  t2077 = t1960*t1995;
  t2078 = t2074 + t2077;
  t2116 = -1.*t1894;
  t2117 = 1. + t2116;
  t2118 = 0.135*t2117;
  t2119 = 0. + t2118;
  t2121 = -0.135*t1956;
  t2122 = 0. + t2121;
  t2140 = 0.135*t2137;
  t2142 = 0.049*t1986;
  t2144 = 0. + t2140 + t2142;
  t2148 = -0.049*t2137;
  t2149 = 0.135*t1986;
  t2150 = 0. + t2148 + t2149;
  t2161 = -0.049*t2160;
  t2163 = -0.09*t1995;
  t2164 = 0. + t2161 + t2163;
  t2166 = -0.09*t2160;
  t2171 = 0.049*t1995;
  t2174 = 0. + t2166 + t2171;
  t2080 = t1881*t2030;
  t2081 = t2020*t1995;
  t2083 = t2080 + t2081;
  t2096 = t1881*t2069;
  t2097 = t2055*t1995;
  t2098 = t2096 + t2097;
  p_output1[0]=-1.*t1881*t1960 + t1994*t1995;
  p_output1[1]=-1.*t1881*t2020 + t1995*t2030;
  p_output1[2]=-1.*t1881*t2055 + t1995*t2069;
  p_output1[3]=0.;
  p_output1[4]=t2078;
  p_output1[5]=t2083;
  p_output1[6]=t2098;
  p_output1[7]=0.;
  p_output1[8]=-1.*t1968*t1984 + t1905*t1967*t1986;
  p_output1[9]=t1923*t1967*t1986 - 1.*t1968*t2027;
  p_output1[10]=-1.*t1909*t1986 - 1.*t1968*t2067;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.1305*(t1968*t1984 - 1.*t1905*t1967*t1986) - 0.21*(t1881*t1960 - 1.*t1994*t1995) - 0.049*t2078 + t1954*t2119 + t1940*t2122 + t1984*t2144 + t1905*t1967*t2150 + t1994*t2164 + t1960*t2174 + var1[0];
  p_output1[13]=0. + 0.1305*(-1.*t1923*t1967*t1986 + t1968*t2027) - 0.21*(t1881*t2020 - 1.*t1995*t2030) - 0.049*t2083 + t2018*t2119 + t2009*t2122 + t2027*t2144 + t1923*t1967*t2150 + t2030*t2164 + t2020*t2174 + var1[1];
  p_output1[14]=0. + 0.1305*(t1909*t1986 + t1968*t2067) - 0.21*(t1881*t2055 - 1.*t1995*t2069) - 0.049*t2098 + t1934*t1967*t2119 + t1907*t1967*t2122 + t2067*t2144 - 1.*t1909*t2150 + t2069*t2164 + t2055*t2174 + var1[2];
  p_output1[15]=1.;
}



void H_knee_joint_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
