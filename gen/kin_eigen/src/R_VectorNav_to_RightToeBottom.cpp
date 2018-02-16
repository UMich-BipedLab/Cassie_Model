/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:24:47 GMT-05:00
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
  double t197;
  double t723;
  double t851;
  double t631;
  double t953;
  double t538;
  double t1149;
  double t1219;
  double t1291;
  double t834;
  double t1055;
  double t1069;
  double t1316;
  double t516;
  double t1436;
  double t1456;
  double t1459;
  double t1092;
  double t1338;
  double t1344;
  double t1473;
  double t486;
  double t1529;
  double t1629;
  double t1802;
  double t1349;
  double t1504;
  double t1512;
  double t1838;
  double t191;
  double t60;
  double t410;
  double t2011;
  double t2018;
  double t2020;
  double t1976;
  double t1981;
  double t2002;
  double t2079;
  double t2110;
  double t2124;
  double t2008;
  double t2026;
  double t2042;
  double t2250;
  double t2285;
  double t2294;
  double t2075;
  double t2146;
  double t2176;
  double t2382;
  double t2383;
  double t2401;
  double t2201;
  double t2313;
  double t2336;
  double t2621;
  double t2652;
  double t2669;
  double t2546;
  double t2580;
  double t2590;
  double t2762;
  double t2765;
  double t2774;
  double t2596;
  double t2703;
  double t2708;
  double t2816;
  double t2836;
  double t2852;
  double t2716;
  double t2784;
  double t2796;
  double t2893;
  double t2895;
  double t2904;
  double t2802;
  double t2862;
  double t2888;
  double t1516;
  double t1888;
  double t1892;
  double t1902;
  double t1915;
  double t1917;
  double t2345;
  double t2417;
  double t2430;
  double t2467;
  double t2471;
  double t2478;
  double t2891;
  double t2907;
  double t2924;
  double t2958;
  double t2984;
  double t2991;
  t197 = Cos(var1[8]);
  t723 = Cos(var1[10]);
  t851 = Sin(var1[9]);
  t631 = Cos(var1[9]);
  t953 = Sin(var1[10]);
  t538 = Cos(var1[11]);
  t1149 = -1.*t197*t723*t851;
  t1219 = -1.*t197*t631*t953;
  t1291 = t1149 + t1219;
  t834 = t197*t631*t723;
  t1055 = -1.*t197*t851*t953;
  t1069 = t834 + t1055;
  t1316 = Sin(var1[11]);
  t516 = Cos(var1[12]);
  t1436 = t538*t1291;
  t1456 = -1.*t1069*t1316;
  t1459 = t1436 + t1456;
  t1092 = t538*t1069;
  t1338 = t1291*t1316;
  t1344 = t1092 + t1338;
  t1473 = Sin(var1[12]);
  t486 = Cos(var1[13]);
  t1529 = t516*t1459;
  t1629 = -1.*t1344*t1473;
  t1802 = t1529 + t1629;
  t1349 = t516*t1344;
  t1504 = t1459*t1473;
  t1512 = t1349 + t1504;
  t1838 = Sin(var1[13]);
  t191 = Cos(var1[7]);
  t60 = Sin(var1[8]);
  t410 = Sin(var1[7]);
  t2011 = -1.*t631*t410;
  t2018 = -1.*t191*t60*t851;
  t2020 = t2011 + t2018;
  t1976 = t191*t631*t60;
  t1981 = -1.*t410*t851;
  t2002 = t1976 + t1981;
  t2079 = t723*t2020;
  t2110 = -1.*t2002*t953;
  t2124 = t2079 + t2110;
  t2008 = t723*t2002;
  t2026 = t2020*t953;
  t2042 = t2008 + t2026;
  t2250 = t538*t2124;
  t2285 = -1.*t2042*t1316;
  t2294 = t2250 + t2285;
  t2075 = t538*t2042;
  t2146 = t2124*t1316;
  t2176 = t2075 + t2146;
  t2382 = t516*t2294;
  t2383 = -1.*t2176*t1473;
  t2401 = t2382 + t2383;
  t2201 = t516*t2176;
  t2313 = t2294*t1473;
  t2336 = t2201 + t2313;
  t2621 = t191*t631;
  t2652 = -1.*t410*t60*t851;
  t2669 = t2621 + t2652;
  t2546 = t631*t410*t60;
  t2580 = t191*t851;
  t2590 = t2546 + t2580;
  t2762 = t723*t2669;
  t2765 = -1.*t2590*t953;
  t2774 = t2762 + t2765;
  t2596 = t723*t2590;
  t2703 = t2669*t953;
  t2708 = t2596 + t2703;
  t2816 = t538*t2774;
  t2836 = -1.*t2708*t1316;
  t2852 = t2816 + t2836;
  t2716 = t538*t2708;
  t2784 = t2774*t1316;
  t2796 = t2716 + t2784;
  t2893 = t516*t2852;
  t2895 = -1.*t2796*t1473;
  t2904 = t2893 + t2895;
  t2802 = t516*t2796;
  t2862 = t2852*t1473;
  t2888 = t2802 + t2862;
  t1516 = t486*t1512;
  t1888 = t1802*t1838;
  t1892 = t1516 + t1888;
  t1902 = t486*t1802;
  t1915 = -1.*t1512*t1838;
  t1917 = t1902 + t1915;
  t2345 = t486*t2336;
  t2417 = t2401*t1838;
  t2430 = t2345 + t2417;
  t2467 = t486*t2401;
  t2471 = -1.*t2336*t1838;
  t2478 = t2467 + t2471;
  t2891 = t486*t2888;
  t2907 = t2904*t1838;
  t2924 = t2891 + t2907;
  t2958 = t486*t2904;
  t2984 = -1.*t2888*t1838;
  t2991 = t2958 + t2984;

  p_output1(0)=0. + t60;
  p_output1(1)=0. + t191*t197;
  p_output1(2)=0. + t197*t410;
  p_output1(3)=0. + 0.642788*t1892 + 0.766044*t1917;
  p_output1(4)=0. - 0.642788*t2430 - 0.766044*t2478;
  p_output1(5)=0. - 0.642788*t2924 - 0.766044*t2991;
  p_output1(6)=0. - 0.766044*t1892 + 0.642788*t1917;
  p_output1(7)=0. + 0.766044*t2430 - 0.642788*t2478;
  p_output1(8)=0. + 0.766044*t2924 - 0.642788*t2991;
}


       
void R_VectorNav_to_RightToeBottom(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
