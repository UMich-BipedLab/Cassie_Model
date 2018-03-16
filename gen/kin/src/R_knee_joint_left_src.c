/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 11:08:00 GMT-04:00
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
  double t1870;
  double t1972;
  double t1975;
  double t1973;
  double t1976;
  double t1965;
  double t1999;
  double t2001;
  double t2004;
  double t1974;
  double t1988;
  double t1990;
  double t2005;
  double t1862;
  double t2014;
  double t2016;
  double t2017;
  double t1921;
  double t1930;
  double t1935;
  double t1991;
  double t2006;
  double t2009;
  double t2010;
  double t2011;
  double t2012;
  double t2018;
  double t1834;
  double t2038;
  double t2039;
  double t2042;
  double t2034;
  double t2035;
  double t2036;
  double t2025;
  double t2056;
  double t2057;
  double t2060;
  double t2033;
  double t2037;
  double t2045;
  double t2046;
  double t2048;
  double t2052;
  double t2087;
  double t2089;
  double t2090;
  double t2078;
  double t2079;
  double t2081;
  double t2082;
  double t2083;
  double t2085;
  double t2013;
  double t2019;
  double t2021;
  double t2026;
  double t2027;
  double t2028;
  double t2053;
  double t2061;
  double t2065;
  double t2068;
  double t2070;
  double t2073;
  double t2086;
  double t2091;
  double t2092;
  double t2094;
  double t2095;
  double t2096;
  t1870 = Cos(var1[3]);
  t1972 = Cos(var1[5]);
  t1975 = Sin(var1[4]);
  t1973 = Sin(var1[3]);
  t1976 = Sin(var1[5]);
  t1965 = Cos(var1[6]);
  t1999 = t1870*t1972*t1975;
  t2001 = t1973*t1976;
  t2004 = t1999 + t2001;
  t1974 = -1.*t1972*t1973;
  t1988 = t1870*t1975*t1976;
  t1990 = t1974 + t1988;
  t2005 = Sin(var1[6]);
  t1862 = Cos(var1[8]);
  t2014 = t1965*t2004;
  t2016 = -1.*t1990*t2005;
  t2017 = t2014 + t2016;
  t1921 = Cos(var1[4]);
  t1930 = Cos(var1[7]);
  t1935 = t1870*t1921*t1930;
  t1991 = t1965*t1990;
  t2006 = t2004*t2005;
  t2009 = t1991 + t2006;
  t2010 = Sin(var1[7]);
  t2011 = t2009*t2010;
  t2012 = t1935 + t2011;
  t2018 = Sin(var1[8]);
  t1834 = Sin(var1[9]);
  t2038 = t1972*t1973*t1975;
  t2039 = -1.*t1870*t1976;
  t2042 = t2038 + t2039;
  t2034 = t1870*t1972;
  t2035 = t1973*t1975*t1976;
  t2036 = t2034 + t2035;
  t2025 = Cos(var1[9]);
  t2056 = t1965*t2042;
  t2057 = -1.*t2036*t2005;
  t2060 = t2056 + t2057;
  t2033 = t1921*t1930*t1973;
  t2037 = t1965*t2036;
  t2045 = t2042*t2005;
  t2046 = t2037 + t2045;
  t2048 = t2046*t2010;
  t2052 = t2033 + t2048;
  t2087 = t1921*t1972*t1965;
  t2089 = -1.*t1921*t1976*t2005;
  t2090 = t2087 + t2089;
  t2078 = -1.*t1930*t1975;
  t2079 = t1921*t1965*t1976;
  t2081 = t1921*t1972*t2005;
  t2082 = t2079 + t2081;
  t2083 = t2082*t2010;
  t2085 = t2078 + t2083;
  t2013 = t1862*t2012;
  t2019 = t2017*t2018;
  t2021 = t2013 + t2019;
  t2026 = t1862*t2017;
  t2027 = -1.*t2012*t2018;
  t2028 = t2026 + t2027;
  t2053 = t1862*t2052;
  t2061 = t2060*t2018;
  t2065 = t2053 + t2061;
  t2068 = t1862*t2060;
  t2070 = -1.*t2052*t2018;
  t2073 = t2068 + t2070;
  t2086 = t1862*t2085;
  t2091 = t2090*t2018;
  t2092 = t2086 + t2091;
  t2094 = t1862*t2090;
  t2095 = -1.*t2085*t2018;
  t2096 = t2094 + t2095;
  p_output1[0]=t1834*t2021 - 1.*t2025*t2028;
  p_output1[1]=t1834*t2065 - 1.*t2025*t2073;
  p_output1[2]=t1834*t2092 - 1.*t2025*t2096;
  p_output1[3]=t2021*t2025 + t1834*t2028;
  p_output1[4]=t2025*t2065 + t1834*t2073;
  p_output1[5]=t2025*t2092 + t1834*t2096;
  p_output1[6]=-1.*t1930*t2009 + t1870*t1921*t2010;
  p_output1[7]=t1921*t1973*t2010 - 1.*t1930*t2046;
  p_output1[8]=-1.*t1975*t2010 - 1.*t1930*t2082;
}



void R_knee_joint_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
