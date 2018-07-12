/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:37:34 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_MultisenseIMU_to_RightToeBottom.h"

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
static void output1(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  double t18;
  double t617;
  double t1533;
  double t2087;
  double t2162;
  double t2288;
  double t2320;
  double t2436;
  double t3149;
  double t3209;
  double t3225;
  double t3342;
  double t2769;
  double t2887;
  double t2923;
  double t3501;
  double t3573;
  double t3576;
  double t3880;
  double t4028;
  double t4112;
  double t4144;
  double t3777;
  double t3789;
  double t3818;
  double t4285;
  double t4291;
  double t4470;
  double t4822;
  double t4853;
  double t4889;
  double t4914;
  double t4617;
  double t4692;
  double t4742;
  double t5040;
  double t5076;
  double t5114;
  double t5282;
  double t5291;
  double t5299;
  double t5316;
  double t5256;
  double t5265;
  double t5266;
  double t5426;
  double t5449;
  double t5462;
  double t849;
  double t1061;
  double t1221;
  double t1872;
  double t1936;
  double t2305;
  double t2388;
  double t2403;
  double t2510;
  double t2632;
  double t2684;
  double t3290;
  double t3370;
  double t3387;
  double t3603;
  double t3627;
  double t3695;
  double t5874;
  double t5892;
  double t5897;
  double t5953;
  double t6027;
  double t6074;
  double t4142;
  double t4205;
  double t4219;
  double t4484;
  double t4488;
  double t4510;
  double t6086;
  double t6101;
  double t6106;
  double t6115;
  double t6117;
  double t6135;
  double t4891;
  double t4987;
  double t4993;
  double t5154;
  double t5212;
  double t5213;
  double t6152;
  double t6172;
  double t6176;
  double t6215;
  double t6217;
  double t6271;
  double t5305;
  double t5374;
  double t5387;
  double t5486;
  double t5492;
  double t5497;
  double t6321;
  double t6333;
  double t6334;
  double t6347;
  double t6348;
  double t6355;
  double t6582;
  double t6585;
  double t6586;
  double t6604;
  double t6607;
  double t6612;
  double t6639;
  double t6642;
  double t6644;
  double t6658;
  double t6665;
  double t6678;
  double t6693;
  double t6701;
  double t6749;
  double t6762;
  double t6767;
  double t6772;
  t18 = Sin(var1[7]);
  t617 = Cos(var1[8]);
  t1533 = Sin(var1[8]);
  t2087 = Cos(var1[9]);
  t2162 = -1.*t2087;
  t2288 = 1. + t2162;
  t2320 = Sin(var1[9]);
  t2436 = Cos(var1[7]);
  t3149 = Cos(var1[10]);
  t3209 = -1.*t3149;
  t3225 = 1. + t3209;
  t3342 = Sin(var1[10]);
  t2769 = t2087*t18*t1533;
  t2887 = t2436*t2320;
  t2923 = t2769 + t2887;
  t3501 = t2436*t2087;
  t3573 = -1.*t18*t1533*t2320;
  t3576 = t3501 + t3573;
  t3880 = Cos(var1[11]);
  t4028 = -1.*t3880;
  t4112 = 1. + t4028;
  t4144 = Sin(var1[11]);
  t3777 = t3149*t2923;
  t3789 = t3576*t3342;
  t3818 = t3777 + t3789;
  t4285 = t3149*t3576;
  t4291 = -1.*t2923*t3342;
  t4470 = t4285 + t4291;
  t4822 = Cos(var1[12]);
  t4853 = -1.*t4822;
  t4889 = 1. + t4853;
  t4914 = Sin(var1[12]);
  t4617 = t3880*t3818;
  t4692 = t4470*t4144;
  t4742 = t4617 + t4692;
  t5040 = t3880*t4470;
  t5076 = -1.*t3818*t4144;
  t5114 = t5040 + t5076;
  t5282 = Cos(var1[13]);
  t5291 = -1.*t5282;
  t5299 = 1. + t5291;
  t5316 = Sin(var1[13]);
  t5256 = t4822*t4742;
  t5265 = t5114*t4914;
  t5266 = t5256 + t5265;
  t5426 = t4822*t5114;
  t5449 = -1.*t4742*t4914;
  t5462 = t5426 + t5449;
  t849 = -1.*t617;
  t1061 = 1. + t849;
  t1221 = -0.135*t1061;
  t1872 = 0.049*t1533;
  t1936 = 0. + t1221 + t1872;
  t2305 = -0.049*t2288;
  t2388 = -0.09*t2320;
  t2403 = 0. + t2305 + t2388;
  t2510 = -0.09*t2288;
  t2632 = 0.049*t2320;
  t2684 = 0. + t2510 + t2632;
  t3290 = -0.049*t3225;
  t3370 = -0.21*t3342;
  t3387 = 0. + t3290 + t3370;
  t3603 = -0.21*t3225;
  t3627 = 0.049*t3342;
  t3695 = 0. + t3603 + t3627;
  t5874 = t2436*t2087*t1533;
  t5892 = -1.*t18*t2320;
  t5897 = t5874 + t5892;
  t5953 = -1.*t2087*t18;
  t6027 = -1.*t2436*t1533*t2320;
  t6074 = t5953 + t6027;
  t4142 = -0.0016*t4112;
  t4205 = -0.2707*t4144;
  t4219 = 0. + t4142 + t4205;
  t4484 = -0.2707*t4112;
  t4488 = 0.0016*t4144;
  t4510 = 0. + t4484 + t4488;
  t6086 = t3149*t5897;
  t6101 = t6074*t3342;
  t6106 = t6086 + t6101;
  t6115 = t3149*t6074;
  t6117 = -1.*t5897*t3342;
  t6135 = t6115 + t6117;
  t4891 = 0.0184*t4889;
  t4987 = -0.7055*t4914;
  t4993 = 0. + t4891 + t4987;
  t5154 = -0.7055*t4889;
  t5212 = -0.0184*t4914;
  t5213 = 0. + t5154 + t5212;
  t6152 = t3880*t6106;
  t6172 = t6135*t4144;
  t6176 = t6152 + t6172;
  t6215 = t3880*t6135;
  t6217 = -1.*t6106*t4144;
  t6271 = t6215 + t6217;
  t5305 = -0.0216*t5299;
  t5374 = -1.1135*t5316;
  t5387 = 0. + t5305 + t5374;
  t5486 = -1.1135*t5299;
  t5492 = 0.0216*t5316;
  t5497 = 0. + t5486 + t5492;
  t6321 = t4822*t6176;
  t6333 = t6271*t4914;
  t6334 = t6321 + t6333;
  t6347 = t4822*t6271;
  t6348 = -1.*t6176*t4914;
  t6355 = t6347 + t6348;
  t6582 = t617*t2087*t3149;
  t6585 = -1.*t617*t2320*t3342;
  t6586 = t6582 + t6585;
  t6604 = -1.*t617*t3149*t2320;
  t6607 = -1.*t617*t2087*t3342;
  t6612 = t6604 + t6607;
  t6639 = t3880*t6586;
  t6642 = t6612*t4144;
  t6644 = t6639 + t6642;
  t6658 = t3880*t6612;
  t6665 = -1.*t6586*t4144;
  t6678 = t6658 + t6665;
  t6693 = t4822*t6644;
  t6701 = t6678*t4914;
  t6749 = t6693 + t6701;
  t6762 = t4822*t6678;
  t6767 = -1.*t6644*t4914;
  t6772 = t6762 + t6767;

  p_output1(0)=0.24925 - 0.135*t18 - 1.*t18*t1936 - 1.*t1533*t18*t2403 - 1.*t2436*t2684 - 1.*t2923*t3387 - 1.*t3576*t3695 - 1.*t3818*t4219 - 1.*t4470*t4510 - 1.*t4742*t4993 - 1.*t5114*t5213 - 1.*t5266*t5387 + 1.1312*(-1.*t5266*t5316 + t5282*t5462) - 0.0306*(t5266*t5282 + t5316*t5462) - 1.*t5462*t5497 + 0.1305*t18*t617;
  p_output1(1)=-0.0302 - 0.135*(1. - 1.*t2436) + t1936*t2436 + t1533*t2403*t2436 - 1.*t18*t2684 + t3387*t5897 + t3695*t6074 + t4219*t6106 + t4510*t6135 - 0.1305*t2436*t617 + t4993*t6176 + t5213*t6271 + t5387*t6334 + t5497*t6355 - 1.1312*(-1.*t5316*t6334 + t5282*t6355) + 0.0306*(t5282*t6334 + t5316*t6355);
  p_output1(2)=-0.047 - 0.049*t1061 - 0.004500000000000004*t1533 + t2403*t617 + t2087*t3387*t617 - 1.*t2320*t3695*t617 + t4219*t6586 + t4510*t6612 + t4993*t6644 + t5213*t6678 + t5387*t6749 + t5497*t6772 - 1.1312*(-1.*t5316*t6749 + t5282*t6772) + 0.0306*(t5282*t6749 + t5316*t6772);
}


       
void p_MultisenseIMU_to_RightToeBottom(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
