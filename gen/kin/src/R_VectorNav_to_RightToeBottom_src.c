/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:36:46 GMT-04:00
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
  double t867;
  double t1754;
  double t2312;
  double t1713;
  double t2626;
  double t1631;
  double t3060;
  double t3113;
  double t3242;
  double t2233;
  double t2704;
  double t2772;
  double t3301;
  double t1606;
  double t3697;
  double t3730;
  double t3823;
  double t2992;
  double t3320;
  double t3328;
  double t3852;
  double t1528;
  double t4150;
  double t4406;
  double t4424;
  double t3496;
  double t3973;
  double t3979;
  double t4481;
  double t733;
  double t286;
  double t1148;
  double t5000;
  double t5044;
  double t5050;
  double t4860;
  double t4912;
  double t4958;
  double t5127;
  double t5139;
  double t5188;
  double t4984;
  double t5065;
  double t5088;
  double t5272;
  double t5339;
  double t5345;
  double t5111;
  double t5213;
  double t5214;
  double t5476;
  double t5492;
  double t5494;
  double t5220;
  double t5370;
  double t5419;
  double t5671;
  double t5674;
  double t5675;
  double t5640;
  double t5645;
  double t5652;
  double t5699;
  double t5700;
  double t5706;
  double t5667;
  double t5684;
  double t5686;
  double t5730;
  double t5732;
  double t5736;
  double t5693;
  double t5710;
  double t5714;
  double t5754;
  double t5757;
  double t5760;
  double t5715;
  double t5737;
  double t5746;
  double t4131;
  double t4577;
  double t4641;
  double t4670;
  double t4710;
  double t4735;
  double t5457;
  double t5508;
  double t5533;
  double t5568;
  double t5617;
  double t5628;
  double t5752;
  double t5767;
  double t5776;
  double t5784;
  double t5796;
  double t5798;
  t867 = Cos(var1[8]);
  t1754 = Cos(var1[10]);
  t2312 = Sin(var1[9]);
  t1713 = Cos(var1[9]);
  t2626 = Sin(var1[10]);
  t1631 = Cos(var1[11]);
  t3060 = -1.*t867*t1754*t2312;
  t3113 = -1.*t867*t1713*t2626;
  t3242 = t3060 + t3113;
  t2233 = t867*t1713*t1754;
  t2704 = -1.*t867*t2312*t2626;
  t2772 = t2233 + t2704;
  t3301 = Sin(var1[11]);
  t1606 = Cos(var1[12]);
  t3697 = t1631*t3242;
  t3730 = -1.*t2772*t3301;
  t3823 = t3697 + t3730;
  t2992 = t1631*t2772;
  t3320 = t3242*t3301;
  t3328 = t2992 + t3320;
  t3852 = Sin(var1[12]);
  t1528 = Cos(var1[13]);
  t4150 = t1606*t3823;
  t4406 = -1.*t3328*t3852;
  t4424 = t4150 + t4406;
  t3496 = t1606*t3328;
  t3973 = t3823*t3852;
  t3979 = t3496 + t3973;
  t4481 = Sin(var1[13]);
  t733 = Cos(var1[7]);
  t286 = Sin(var1[8]);
  t1148 = Sin(var1[7]);
  t5000 = -1.*t1713*t1148;
  t5044 = -1.*t733*t286*t2312;
  t5050 = t5000 + t5044;
  t4860 = t733*t1713*t286;
  t4912 = -1.*t1148*t2312;
  t4958 = t4860 + t4912;
  t5127 = t1754*t5050;
  t5139 = -1.*t4958*t2626;
  t5188 = t5127 + t5139;
  t4984 = t1754*t4958;
  t5065 = t5050*t2626;
  t5088 = t4984 + t5065;
  t5272 = t1631*t5188;
  t5339 = -1.*t5088*t3301;
  t5345 = t5272 + t5339;
  t5111 = t1631*t5088;
  t5213 = t5188*t3301;
  t5214 = t5111 + t5213;
  t5476 = t1606*t5345;
  t5492 = -1.*t5214*t3852;
  t5494 = t5476 + t5492;
  t5220 = t1606*t5214;
  t5370 = t5345*t3852;
  t5419 = t5220 + t5370;
  t5671 = t733*t1713;
  t5674 = -1.*t1148*t286*t2312;
  t5675 = t5671 + t5674;
  t5640 = t1713*t1148*t286;
  t5645 = t733*t2312;
  t5652 = t5640 + t5645;
  t5699 = t1754*t5675;
  t5700 = -1.*t5652*t2626;
  t5706 = t5699 + t5700;
  t5667 = t1754*t5652;
  t5684 = t5675*t2626;
  t5686 = t5667 + t5684;
  t5730 = t1631*t5706;
  t5732 = -1.*t5686*t3301;
  t5736 = t5730 + t5732;
  t5693 = t1631*t5686;
  t5710 = t5706*t3301;
  t5714 = t5693 + t5710;
  t5754 = t1606*t5736;
  t5757 = -1.*t5714*t3852;
  t5760 = t5754 + t5757;
  t5715 = t1606*t5714;
  t5737 = t5736*t3852;
  t5746 = t5715 + t5737;
  t4131 = t1528*t3979;
  t4577 = t4424*t4481;
  t4641 = t4131 + t4577;
  t4670 = t1528*t4424;
  t4710 = -1.*t3979*t4481;
  t4735 = t4670 + t4710;
  t5457 = t1528*t5419;
  t5508 = t5494*t4481;
  t5533 = t5457 + t5508;
  t5568 = t1528*t5494;
  t5617 = -1.*t5419*t4481;
  t5628 = t5568 + t5617;
  t5752 = t1528*t5746;
  t5767 = t5760*t4481;
  t5776 = t5752 + t5767;
  t5784 = t1528*t5760;
  t5796 = -1.*t5746*t4481;
  t5798 = t5784 + t5796;
  p_output1[0]=0. + t286;
  p_output1[1]=0. - 1.*t733*t867;
  p_output1[2]=0. - 1.*t1148*t867;
  p_output1[3]=0. + 0.642788*t4641 + 0.766044*t4735;
  p_output1[4]=0. + 0.642788*t5533 + 0.766044*t5628;
  p_output1[5]=0. + 0.642788*t5776 + 0.766044*t5798;
  p_output1[6]=0. - 0.766044*t4641 + 0.642788*t4735;
  p_output1[7]=0. - 0.766044*t5533 + 0.642788*t5628;
  p_output1[8]=0. - 0.766044*t5776 + 0.642788*t5798;
}



void R_VectorNav_to_RightToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
