/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:37:33 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_MultisenseIMU_to_RightToeBottom.h"

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
  double t211;
  double t318;
  double t731;
  double t624;
  double t1493;
  double t1536;
  double t1391;
  double t2016;
  double t2057;
  double t2087;
  double t1533;
  double t1596;
  double t1694;
  double t2154;
  double t1221;
  double t2437;
  double t2441;
  double t2510;
  double t1803;
  double t2212;
  double t2331;
  double t2574;
  double t1174;
  double t2769;
  double t2777;
  double t2887;
  double t2403;
  double t2588;
  double t2608;
  double t2916;
  double t1051;
  double t3186;
  double t3196;
  double t3210;
  double t2730;
  double t2923;
  double t2954;
  double t3214;
  double t3527;
  double t3560;
  double t3573;
  double t3394;
  double t3419;
  double t3447;
  double t3738;
  double t3771;
  double t3789;
  double t3459;
  double t3603;
  double t3615;
  double t3987;
  double t4000;
  double t4018;
  double t3642;
  double t3818;
  double t3857;
  double t4144;
  double t4173;
  double t4205;
  double t3968;
  double t4038;
  double t4049;
  double t4516;
  double t4547;
  double t4557;
  double t4405;
  double t4452;
  double t4500;
  double t4692;
  double t4739;
  double t4742;
  double t4510;
  double t4602;
  double t4651;
  double t4822;
  double t4852;
  double t4853;
  double t4663;
  double t4749;
  double t4815;
  double t3132;
  double t3222;
  double t3225;
  double t3290;
  double t3292;
  double t3330;
  double t4137;
  double t4219;
  double t4264;
  double t4291;
  double t4331;
  double t4334;
  double t4818;
  double t4867;
  double t4889;
  double t4927;
  double t4947;
  double t4986;
  t211 = Cos(var1[8]);
  t318 = Sin(var1[7]);
  t731 = Sin(var1[8]);
  t624 = Cos(var1[7]);
  t1493 = Cos(var1[9]);
  t1536 = Sin(var1[9]);
  t1391 = Cos(var1[10]);
  t2016 = t624*t1493;
  t2057 = -1.*t318*t731*t1536;
  t2087 = t2016 + t2057;
  t1533 = t1493*t318*t731;
  t1596 = t624*t1536;
  t1694 = t1533 + t1596;
  t2154 = Sin(var1[10]);
  t1221 = Cos(var1[11]);
  t2437 = t1391*t2087;
  t2441 = -1.*t1694*t2154;
  t2510 = t2437 + t2441;
  t1803 = t1391*t1694;
  t2212 = t2087*t2154;
  t2331 = t1803 + t2212;
  t2574 = Sin(var1[11]);
  t1174 = Cos(var1[12]);
  t2769 = t1221*t2510;
  t2777 = -1.*t2331*t2574;
  t2887 = t2769 + t2777;
  t2403 = t1221*t2331;
  t2588 = t2510*t2574;
  t2608 = t2403 + t2588;
  t2916 = Sin(var1[12]);
  t1051 = Cos(var1[13]);
  t3186 = t1174*t2887;
  t3196 = -1.*t2608*t2916;
  t3210 = t3186 + t3196;
  t2730 = t1174*t2608;
  t2923 = t2887*t2916;
  t2954 = t2730 + t2923;
  t3214 = Sin(var1[13]);
  t3527 = -1.*t1493*t318;
  t3560 = -1.*t624*t731*t1536;
  t3573 = t3527 + t3560;
  t3394 = t624*t1493*t731;
  t3419 = -1.*t318*t1536;
  t3447 = t3394 + t3419;
  t3738 = t1391*t3573;
  t3771 = -1.*t3447*t2154;
  t3789 = t3738 + t3771;
  t3459 = t1391*t3447;
  t3603 = t3573*t2154;
  t3615 = t3459 + t3603;
  t3987 = t1221*t3789;
  t4000 = -1.*t3615*t2574;
  t4018 = t3987 + t4000;
  t3642 = t1221*t3615;
  t3818 = t3789*t2574;
  t3857 = t3642 + t3818;
  t4144 = t1174*t4018;
  t4173 = -1.*t3857*t2916;
  t4205 = t4144 + t4173;
  t3968 = t1174*t3857;
  t4038 = t4018*t2916;
  t4049 = t3968 + t4038;
  t4516 = -1.*t211*t1391*t1536;
  t4547 = -1.*t211*t1493*t2154;
  t4557 = t4516 + t4547;
  t4405 = t211*t1493*t1391;
  t4452 = -1.*t211*t1536*t2154;
  t4500 = t4405 + t4452;
  t4692 = t1221*t4557;
  t4739 = -1.*t4500*t2574;
  t4742 = t4692 + t4739;
  t4510 = t1221*t4500;
  t4602 = t4557*t2574;
  t4651 = t4510 + t4602;
  t4822 = t1174*t4742;
  t4852 = -1.*t4651*t2916;
  t4853 = t4822 + t4852;
  t4663 = t1174*t4651;
  t4749 = t4742*t2916;
  t4815 = t4663 + t4749;
  t3132 = t1051*t2954;
  t3222 = t3210*t3214;
  t3225 = t3132 + t3222;
  t3290 = t1051*t3210;
  t3292 = -1.*t2954*t3214;
  t3330 = t3290 + t3292;
  t4137 = t1051*t4049;
  t4219 = t4205*t3214;
  t4264 = t4137 + t4219;
  t4291 = t1051*t4205;
  t4331 = -1.*t4049*t3214;
  t4334 = t4291 + t4331;
  t4818 = t1051*t4815;
  t4867 = t4853*t3214;
  t4889 = t4818 + t4867;
  t4927 = t1051*t4853;
  t4947 = -1.*t4815*t3214;
  t4986 = t4927 + t4947;

  p_output1(0)=0. + t211*t318;
  p_output1(1)=0. - 1.*t211*t624;
  p_output1(2)=0. + t731;
  p_output1(3)=0. - 0.642788*t3225 - 0.766044*t3330;
  p_output1(4)=0. + 0.642788*t4264 + 0.766044*t4334;
  p_output1(5)=0. + 0.642788*t4889 + 0.766044*t4986;
  p_output1(6)=0. + 0.766044*t3225 - 0.642788*t3330;
  p_output1(7)=0. - 0.766044*t4264 + 0.642788*t4334;
  p_output1(8)=0. - 0.766044*t4889 + 0.642788*t4986;
}


       
void R_MultisenseIMU_to_RightToeBottom(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
