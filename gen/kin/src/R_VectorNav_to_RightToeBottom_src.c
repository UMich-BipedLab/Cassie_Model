/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:17:14 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_VectorNav_to_RightToeBottom_src.h"

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
  double t487;
  double t1600;
  double t1716;
  double t1581;
  double t1816;
  double t1570;
  double t2461;
  double t2462;
  double t2503;
  double t1623;
  double t1919;
  double t1930;
  double t2568;
  double t1558;
  double t2769;
  double t3059;
  double t3167;
  double t2204;
  double t2704;
  double t2753;
  double t3344;
  double t1407;
  double t4097;
  double t4159;
  double t4340;
  double t2766;
  double t3609;
  double t3707;
  double t4381;
  double t462;
  double t300;
  double t870;
  double t5796;
  double t5884;
  double t5888;
  double t5649;
  double t5731;
  double t5736;
  double t6032;
  double t6066;
  double t6069;
  double t5787;
  double t5957;
  double t5976;
  double t6150;
  double t6208;
  double t6238;
  double t6024;
  double t6075;
  double t6113;
  double t6302;
  double t6336;
  double t6347;
  double t6127;
  double t6278;
  double t6279;
  double t6565;
  double t6579;
  double t6588;
  double t6551;
  double t6552;
  double t6553;
  double t6613;
  double t6628;
  double t6636;
  double t6562;
  double t6591;
  double t6600;
  double t6664;
  double t6677;
  double t6690;
  double t6607;
  double t6637;
  double t6649;
  double t6718;
  double t6728;
  double t6736;
  double t6652;
  double t6698;
  double t6707;
  double t3951;
  double t4441;
  double t4815;
  double t5247;
  double t5323;
  double t5540;
  double t6290;
  double t6388;
  double t6402;
  double t6424;
  double t6469;
  double t6476;
  double t6711;
  double t6738;
  double t6741;
  double t6765;
  double t6770;
  double t6771;
  t487 = Cos(var1[8]);
  t1600 = Cos(var1[10]);
  t1716 = Sin(var1[9]);
  t1581 = Cos(var1[9]);
  t1816 = Sin(var1[10]);
  t1570 = Cos(var1[11]);
  t2461 = -1.*t487*t1600*t1716;
  t2462 = -1.*t487*t1581*t1816;
  t2503 = t2461 + t2462;
  t1623 = t487*t1581*t1600;
  t1919 = -1.*t487*t1716*t1816;
  t1930 = t1623 + t1919;
  t2568 = Sin(var1[11]);
  t1558 = Cos(var1[12]);
  t2769 = t1570*t2503;
  t3059 = -1.*t1930*t2568;
  t3167 = t2769 + t3059;
  t2204 = t1570*t1930;
  t2704 = t2503*t2568;
  t2753 = t2204 + t2704;
  t3344 = Sin(var1[12]);
  t1407 = Cos(var1[13]);
  t4097 = t1558*t3167;
  t4159 = -1.*t2753*t3344;
  t4340 = t4097 + t4159;
  t2766 = t1558*t2753;
  t3609 = t3167*t3344;
  t3707 = t2766 + t3609;
  t4381 = Sin(var1[13]);
  t462 = Cos(var1[7]);
  t300 = Sin(var1[8]);
  t870 = Sin(var1[7]);
  t5796 = -1.*t1581*t870;
  t5884 = -1.*t462*t300*t1716;
  t5888 = t5796 + t5884;
  t5649 = t462*t1581*t300;
  t5731 = -1.*t870*t1716;
  t5736 = t5649 + t5731;
  t6032 = t1600*t5888;
  t6066 = -1.*t5736*t1816;
  t6069 = t6032 + t6066;
  t5787 = t1600*t5736;
  t5957 = t5888*t1816;
  t5976 = t5787 + t5957;
  t6150 = t1570*t6069;
  t6208 = -1.*t5976*t2568;
  t6238 = t6150 + t6208;
  t6024 = t1570*t5976;
  t6075 = t6069*t2568;
  t6113 = t6024 + t6075;
  t6302 = t1558*t6238;
  t6336 = -1.*t6113*t3344;
  t6347 = t6302 + t6336;
  t6127 = t1558*t6113;
  t6278 = t6238*t3344;
  t6279 = t6127 + t6278;
  t6565 = t462*t1581;
  t6579 = -1.*t870*t300*t1716;
  t6588 = t6565 + t6579;
  t6551 = t1581*t870*t300;
  t6552 = t462*t1716;
  t6553 = t6551 + t6552;
  t6613 = t1600*t6588;
  t6628 = -1.*t6553*t1816;
  t6636 = t6613 + t6628;
  t6562 = t1600*t6553;
  t6591 = t6588*t1816;
  t6600 = t6562 + t6591;
  t6664 = t1570*t6636;
  t6677 = -1.*t6600*t2568;
  t6690 = t6664 + t6677;
  t6607 = t1570*t6600;
  t6637 = t6636*t2568;
  t6649 = t6607 + t6637;
  t6718 = t1558*t6690;
  t6728 = -1.*t6649*t3344;
  t6736 = t6718 + t6728;
  t6652 = t1558*t6649;
  t6698 = t6690*t3344;
  t6707 = t6652 + t6698;
  t3951 = t1407*t3707;
  t4441 = t4340*t4381;
  t4815 = t3951 + t4441;
  t5247 = t1407*t4340;
  t5323 = -1.*t3707*t4381;
  t5540 = t5247 + t5323;
  t6290 = t1407*t6279;
  t6388 = t6347*t4381;
  t6402 = t6290 + t6388;
  t6424 = t1407*t6347;
  t6469 = -1.*t6279*t4381;
  t6476 = t6424 + t6469;
  t6711 = t1407*t6707;
  t6738 = t6736*t4381;
  t6741 = t6711 + t6738;
  t6765 = t1407*t6736;
  t6770 = -1.*t6707*t4381;
  t6771 = t6765 + t6770;
  p_output1[0]=0. + t300;
  p_output1[1]=0. + t462*t487;
  p_output1[2]=0. + t487*t870;
  p_output1[3]=0. + 0.642788*t4815 + 0.766044*t5540;
  p_output1[4]=0. - 0.642788*t6402 - 0.766044*t6476;
  p_output1[5]=0. - 0.642788*t6741 - 0.766044*t6771;
  p_output1[6]=0. - 0.766044*t4815 + 0.642788*t5540;
  p_output1[7]=0. + 0.766044*t6402 - 0.642788*t6476;
  p_output1[8]=0. + 0.766044*t6741 - 0.642788*t6771;
}



void R_VectorNav_to_RightToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
