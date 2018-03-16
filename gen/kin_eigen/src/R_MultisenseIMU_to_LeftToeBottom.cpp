/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 12:16:40 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_MultisenseIMU_to_LeftToeBottom.h"

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
  double t381;
  double t423;
  double t1049;
  double t744;
  double t2267;
  double t2717;
  double t2851;
  double t2568;
  double t2804;
  double t2833;
  double t1966;
  double t2925;
  double t2997;
  double t3473;
  double t4129;
  double t2845;
  double t3491;
  double t3617;
  double t1627;
  double t4210;
  double t4416;
  double t4805;
  double t5589;
  double t4110;
  double t4817;
  double t5293;
  double t1554;
  double t5635;
  double t5935;
  double t6540;
  double t6883;
  double t5526;
  double t6691;
  double t6768;
  double t1403;
  double t6906;
  double t6958;
  double t7009;
  double t7122;
  double t7129;
  double t7130;
  double t7156;
  double t7162;
  double t7164;
  double t7149;
  double t7178;
  double t7183;
  double t7192;
  double t7197;
  double t7201;
  double t7186;
  double t7202;
  double t7217;
  double t7233;
  double t7250;
  double t7252;
  double t7226;
  double t7253;
  double t7262;
  double t7272;
  double t7275;
  double t7279;
  double t7314;
  double t7317;
  double t7319;
  double t7326;
  double t7327;
  double t7329;
  double t7322;
  double t7330;
  double t7331;
  double t7339;
  double t7340;
  double t7342;
  double t7335;
  double t7343;
  double t7344;
  double t7354;
  double t7356;
  double t7358;
  double t6856;
  double t7032;
  double t7041;
  double t7083;
  double t7089;
  double t7090;
  double t7269;
  double t7281;
  double t7291;
  double t7301;
  double t7302;
  double t7303;
  double t7347;
  double t7360;
  double t7361;
  double t7364;
  double t7366;
  double t7367;
  t381 = Cos(var1[1]);
  t423 = Sin(var1[0]);
  t1049 = Sin(var1[1]);
  t744 = Cos(var1[0]);
  t2267 = Cos(var1[2]);
  t2717 = Sin(var1[2]);
  t2851 = Cos(var1[3]);
  t2568 = t2267*t423*t1049;
  t2804 = t744*t2717;
  t2833 = t2568 + t2804;
  t1966 = Sin(var1[3]);
  t2925 = t744*t2267;
  t2997 = -1.*t423*t1049*t2717;
  t3473 = t2925 + t2997;
  t4129 = Cos(var1[4]);
  t2845 = -1.*t1966*t2833;
  t3491 = t2851*t3473;
  t3617 = t2845 + t3491;
  t1627 = Sin(var1[4]);
  t4210 = t2851*t2833;
  t4416 = t1966*t3473;
  t4805 = t4210 + t4416;
  t5589 = Cos(var1[5]);
  t4110 = t1627*t3617;
  t4817 = t4129*t4805;
  t5293 = t4110 + t4817;
  t1554 = Sin(var1[5]);
  t5635 = t4129*t3617;
  t5935 = -1.*t1627*t4805;
  t6540 = t5635 + t5935;
  t6883 = Cos(var1[6]);
  t5526 = -1.*t1554*t5293;
  t6691 = t5589*t6540;
  t6768 = t5526 + t6691;
  t1403 = Sin(var1[6]);
  t6906 = t5589*t5293;
  t6958 = t1554*t6540;
  t7009 = t6906 + t6958;
  t7122 = t744*t2267*t1049;
  t7129 = -1.*t423*t2717;
  t7130 = t7122 + t7129;
  t7156 = -1.*t2267*t423;
  t7162 = -1.*t744*t1049*t2717;
  t7164 = t7156 + t7162;
  t7149 = -1.*t1966*t7130;
  t7178 = t2851*t7164;
  t7183 = t7149 + t7178;
  t7192 = t2851*t7130;
  t7197 = t1966*t7164;
  t7201 = t7192 + t7197;
  t7186 = t1627*t7183;
  t7202 = t4129*t7201;
  t7217 = t7186 + t7202;
  t7233 = t4129*t7183;
  t7250 = -1.*t1627*t7201;
  t7252 = t7233 + t7250;
  t7226 = -1.*t1554*t7217;
  t7253 = t5589*t7252;
  t7262 = t7226 + t7253;
  t7272 = t5589*t7217;
  t7275 = t1554*t7252;
  t7279 = t7272 + t7275;
  t7314 = -1.*t381*t2267*t1966;
  t7317 = -1.*t2851*t381*t2717;
  t7319 = t7314 + t7317;
  t7326 = t2851*t381*t2267;
  t7327 = -1.*t381*t1966*t2717;
  t7329 = t7326 + t7327;
  t7322 = t1627*t7319;
  t7330 = t4129*t7329;
  t7331 = t7322 + t7330;
  t7339 = t4129*t7319;
  t7340 = -1.*t1627*t7329;
  t7342 = t7339 + t7340;
  t7335 = -1.*t1554*t7331;
  t7343 = t5589*t7342;
  t7344 = t7335 + t7343;
  t7354 = t5589*t7331;
  t7356 = t1554*t7342;
  t7358 = t7354 + t7356;
  t6856 = t1403*t6768;
  t7032 = t6883*t7009;
  t7041 = t6856 + t7032;
  t7083 = t6883*t6768;
  t7089 = -1.*t1403*t7009;
  t7090 = t7083 + t7089;
  t7269 = t1403*t7262;
  t7281 = t6883*t7279;
  t7291 = t7269 + t7281;
  t7301 = t6883*t7262;
  t7302 = -1.*t1403*t7279;
  t7303 = t7301 + t7302;
  t7347 = t1403*t7344;
  t7360 = t6883*t7358;
  t7361 = t7347 + t7360;
  t7364 = t6883*t7344;
  t7366 = -1.*t1403*t7358;
  t7367 = t7364 + t7366;

  p_output1(0)=0. + t381*t423;
  p_output1(1)=0. - 1.*t381*t744;
  p_output1(2)=0. + t1049;
  p_output1(3)=0. - 0.642788*t7041 - 0.766044*t7090;
  p_output1(4)=0. + 0.642788*t7291 + 0.766044*t7303;
  p_output1(5)=0. + 0.642788*t7361 + 0.766044*t7367;
  p_output1(6)=0. + 0.766044*t7041 - 0.642788*t7090;
  p_output1(7)=0. - 0.766044*t7291 + 0.642788*t7303;
  p_output1(8)=0. - 0.766044*t7361 + 0.642788*t7367;
}


       
void R_MultisenseIMU_to_LeftToeBottom(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
