/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:33:41 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_knee_joint_right_src.h"

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
  double t697;
  double t850;
  double t625;
  double t728;
  double t896;
  double t1132;
  double t777;
  double t953;
  double t1023;
  double t620;
  double t1172;
  double t1449;
  double t1612;
  double t1794;
  double t1131;
  double t1639;
  double t1728;
  double t556;
  double t1829;
  double t1896;
  double t1985;
  double t2112;
  double t2113;
  double t2161;
  double t2165;
  double t2186;
  double t2188;
  double t323;
  double t2804;
  double t2828;
  double t2904;
  double t2976;
  double t3167;
  double t3283;
  double t2345;
  double t2953;
  double t3300;
  double t3435;
  double t3576;
  double t3595;
  double t3703;
  double t3823;
  double t3867;
  double t3870;
  double t4321;
  double t4327;
  double t4343;
  double t4384;
  double t4386;
  double t4434;
  double t4477;
  double t4490;
  double t4502;
  double t1732;
  double t2189;
  double t2283;
  double t2445;
  double t2555;
  double t2605;
  double t3487;
  double t3896;
  double t3976;
  double t4060;
  double t4093;
  double t4228;
  double t4345;
  double t4508;
  double t4553;
  double t4583;
  double t4594;
  double t4598;
  double t5335;
  double t5366;
  double t5790;
  double t5879;
  double t6308;
  double t6336;
  double t4674;
  double t4717;
  double t4753;
  double t5407;
  double t5431;
  double t5480;
  double t5547;
  double t5573;
  double t5642;
  double t5672;
  double t5677;
  double t5681;
  double t5709;
  double t5751;
  double t5782;
  double t5890;
  double t5929;
  double t5963;
  double t6250;
  double t6297;
  double t6298;
  double t6338;
  double t6355;
  double t6363;
  double t6391;
  double t6395;
  double t6421;
  double t4764;
  double t4783;
  double t4790;
  double t4841;
  double t4895;
  double t4932;
  t697 = Cos(var1[5]);
  t850 = Sin(var1[3]);
  t625 = Cos(var1[3]);
  t728 = Sin(var1[4]);
  t896 = Sin(var1[5]);
  t1132 = Sin(var1[13]);
  t777 = t625*t697*t728;
  t953 = t850*t896;
  t1023 = t777 + t953;
  t620 = Cos(var1[13]);
  t1172 = -1.*t697*t850;
  t1449 = t625*t728*t896;
  t1612 = t1172 + t1449;
  t1794 = Cos(var1[15]);
  t1131 = t620*t1023;
  t1639 = -1.*t1132*t1612;
  t1728 = t1131 + t1639;
  t556 = Sin(var1[15]);
  t1829 = Cos(var1[14]);
  t1896 = Cos(var1[4]);
  t1985 = t1829*t625*t1896;
  t2112 = Sin(var1[14]);
  t2113 = t1132*t1023;
  t2161 = t620*t1612;
  t2165 = t2113 + t2161;
  t2186 = t2112*t2165;
  t2188 = t1985 + t2186;
  t323 = Sin(var1[16]);
  t2804 = t697*t850*t728;
  t2828 = -1.*t625*t896;
  t2904 = t2804 + t2828;
  t2976 = t625*t697;
  t3167 = t850*t728*t896;
  t3283 = t2976 + t3167;
  t2345 = Cos(var1[16]);
  t2953 = t620*t2904;
  t3300 = -1.*t1132*t3283;
  t3435 = t2953 + t3300;
  t3576 = t1829*t1896*t850;
  t3595 = t1132*t2904;
  t3703 = t620*t3283;
  t3823 = t3595 + t3703;
  t3867 = t2112*t3823;
  t3870 = t3576 + t3867;
  t4321 = t620*t1896*t697;
  t4327 = -1.*t1896*t1132*t896;
  t4343 = t4321 + t4327;
  t4384 = -1.*t1829*t728;
  t4386 = t1896*t697*t1132;
  t4434 = t620*t1896*t896;
  t4477 = t4386 + t4434;
  t4490 = t2112*t4477;
  t4502 = t4384 + t4490;
  t1732 = t556*t1728;
  t2189 = t1794*t2188;
  t2283 = t1732 + t2189;
  t2445 = t1794*t1728;
  t2555 = -1.*t556*t2188;
  t2605 = t2445 + t2555;
  t3487 = t556*t3435;
  t3896 = t1794*t3870;
  t3976 = t3487 + t3896;
  t4060 = t1794*t3435;
  t4093 = -1.*t556*t3870;
  t4228 = t4060 + t4093;
  t4345 = t556*t4343;
  t4508 = t1794*t4502;
  t4553 = t4345 + t4508;
  t4583 = t1794*t4343;
  t4594 = -1.*t556*t4502;
  t4598 = t4583 + t4594;
  t5335 = -1.*t1829;
  t5366 = 1. + t5335;
  t5790 = -1.*t1794;
  t5879 = 1. + t5790;
  t6308 = -1.*t2345;
  t6336 = 1. + t6308;
  t4674 = t2345*t2283;
  t4717 = t323*t2605;
  t4753 = t4674 + t4717;
  t5407 = -0.049*t5366;
  t5431 = -0.135*t2112;
  t5480 = 0. + t5407 + t5431;
  t5547 = 0.135*t1132;
  t5573 = 0. + t5547;
  t5642 = -1.*t620;
  t5672 = 1. + t5642;
  t5677 = -0.135*t5672;
  t5681 = 0. + t5677;
  t5709 = -0.135*t5366;
  t5751 = 0.049*t2112;
  t5782 = 0. + t5709 + t5751;
  t5890 = -0.09*t5879;
  t5929 = 0.049*t556;
  t5963 = 0. + t5890 + t5929;
  t6250 = -0.049*t5879;
  t6297 = -0.09*t556;
  t6298 = 0. + t6250 + t6297;
  t6338 = -0.049*t6336;
  t6355 = -0.21*t323;
  t6363 = 0. + t6338 + t6355;
  t6391 = -0.21*t6336;
  t6395 = 0.049*t323;
  t6421 = 0. + t6391 + t6395;
  t4764 = t2345*t3976;
  t4783 = t323*t4228;
  t4790 = t4764 + t4783;
  t4841 = t2345*t4553;
  t4895 = t323*t4598;
  t4932 = t4841 + t4895;
  p_output1[0]=-1.*t2345*t2605 + t2283*t323;
  p_output1[1]=t323*t3976 - 1.*t2345*t4228;
  p_output1[2]=t323*t4553 - 1.*t2345*t4598;
  p_output1[3]=0.;
  p_output1[4]=t4753;
  p_output1[5]=t4790;
  p_output1[6]=t4932;
  p_output1[7]=0.;
  p_output1[8]=-1.*t1829*t2165 + t1896*t2112*t625;
  p_output1[9]=-1.*t1829*t3823 + t1896*t2112*t850;
  p_output1[10]=-1.*t1829*t4477 - 1.*t2112*t728;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.21*(t2345*t2605 - 1.*t2283*t323) - 0.049*t4753 + t1023*t5573 + t1612*t5681 + t2165*t5782 + t1728*t5963 + t1896*t5480*t625 - 0.1305*(t1829*t2165 - 1.*t1896*t2112*t625) + t2188*t6298 + t2283*t6363 + t2605*t6421 + var1[0];
  p_output1[13]=0. - 0.21*(-1.*t323*t3976 + t2345*t4228) - 0.049*t4790 + t2904*t5573 + t3283*t5681 + t3823*t5782 + t3435*t5963 + t3870*t6298 + t3976*t6363 + t4228*t6421 + t1896*t5480*t850 - 0.1305*(t1829*t3823 - 1.*t1896*t2112*t850) + var1[1];
  p_output1[14]=0. - 0.21*(-1.*t323*t4553 + t2345*t4598) - 0.049*t4932 + t4477*t5782 + t4343*t5963 + t4502*t6298 + t4553*t6363 + t4598*t6421 + t1896*t5573*t697 - 1.*t5480*t728 - 0.1305*(t1829*t4477 + t2112*t728) + t1896*t5681*t896 + var1[2];
  p_output1[15]=1.;
}



void H_knee_joint_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
