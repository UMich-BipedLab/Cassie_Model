/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:11:02 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_hip_flexion_left_src.h"

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
  double t1475;
  double t1521;
  double t1471;
  double t1497;
  double t1527;
  double t1438;
  double t1576;
  double t1609;
  double t1562;
  double t1563;
  double t1566;
  double t1517;
  double t1530;
  double t1545;
  double t1617;
  double t1594;
  double t1596;
  double t1597;
  double t1585;
  double t1591;
  double t1592;
  double t1627;
  double t1621;
  double t1624;
  double t1626;
  double t1632;
  double t1634;
  double t1636;
  double t1643;
  double t1644;
  double t1645;
  t1475 = Cos(var1[5]);
  t1521 = Sin(var1[3]);
  t1471 = Cos(var1[3]);
  t1497 = Sin(var1[4]);
  t1527 = Sin(var1[5]);
  t1438 = Cos(var1[6]);
  t1576 = Sin(var1[6]);
  t1609 = Cos(var1[4]);
  t1562 = -1.*t1475*t1521;
  t1563 = t1471*t1497*t1527;
  t1566 = t1562 + t1563;
  t1517 = t1471*t1475*t1497;
  t1530 = t1521*t1527;
  t1545 = t1517 + t1530;
  t1617 = Cos(var1[7]);
  t1594 = t1471*t1475;
  t1596 = t1521*t1497*t1527;
  t1597 = t1594 + t1596;
  t1585 = t1475*t1521*t1497;
  t1591 = -1.*t1471*t1527;
  t1592 = t1585 + t1591;
  t1627 = Sin(var1[7]);
  t1621 = t1438*t1566;
  t1624 = t1545*t1576;
  t1626 = t1621 + t1624;
  t1632 = t1438*t1597;
  t1634 = t1592*t1576;
  t1636 = t1632 + t1634;
  t1643 = t1609*t1438*t1527;
  t1644 = t1609*t1475*t1576;
  t1645 = t1643 + t1644;
  p_output1[0]=-1.*t1438*t1545 + t1566*t1576;
  p_output1[1]=-1.*t1438*t1592 + t1576*t1597;
  p_output1[2]=-1.*t1438*t1475*t1609 + t1527*t1576*t1609;
  p_output1[3]=t1471*t1609*t1617 + t1626*t1627;
  p_output1[4]=t1521*t1609*t1617 + t1627*t1636;
  p_output1[5]=-1.*t1497*t1617 + t1627*t1645;
  p_output1[6]=-1.*t1617*t1626 + t1471*t1609*t1627;
  p_output1[7]=t1521*t1609*t1627 - 1.*t1617*t1636;
  p_output1[8]=-1.*t1497*t1627 - 1.*t1617*t1645;
}



void R_hip_flexion_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
