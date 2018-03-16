/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 12:16:38 GMT-04:00
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
  double t37;
  double t165;
  double t481;
  double t277;
  double t801;
  double t1097;
  double t652;
  double t1402;
  double t1423;
  double t1491;
  double t894;
  double t1199;
  double t1256;
  double t1539;
  double t649;
  double t2144;
  double t2177;
  double t2288;
  double t1307;
  double t1615;
  double t1693;
  double t2413;
  double t641;
  double t2779;
  double t2940;
  double t2966;
  double t1953;
  double t2449;
  double t2497;
  double t3049;
  double t598;
  double t3336;
  double t3352;
  double t3376;
  double t2686;
  double t3051;
  double t3090;
  double t3628;
  double t6483;
  double t6519;
  double t6540;
  double t5053;
  double t5308;
  double t6093;
  double t6678;
  double t6687;
  double t6691;
  double t6342;
  double t6579;
  double t6582;
  double t6744;
  double t6759;
  double t6761;
  double t6664;
  double t6697;
  double t6701;
  double t6779;
  double t6802;
  double t6808;
  double t6724;
  double t6768;
  double t6770;
  double t6862;
  double t6863;
  double t6865;
  double t6844;
  double t6848;
  double t6857;
  double t6878;
  double t6879;
  double t6880;
  double t6859;
  double t6867;
  double t6870;
  double t6899;
  double t6900;
  double t6902;
  double t6874;
  double t6883;
  double t6894;
  double t3118;
  double t3798;
  double t3813;
  double t4235;
  double t4299;
  double t4349;
  double t6778;
  double t6816;
  double t6818;
  double t6820;
  double t6822;
  double t6828;
  double t6895;
  double t6906;
  double t6909;
  double t6918;
  double t6919;
  double t6922;
  t37 = Cos(var1[8]);
  t165 = Sin(var1[7]);
  t481 = Sin(var1[8]);
  t277 = Cos(var1[7]);
  t801 = Cos(var1[9]);
  t1097 = Sin(var1[9]);
  t652 = Cos(var1[10]);
  t1402 = t277*t801;
  t1423 = -1.*t165*t481*t1097;
  t1491 = t1402 + t1423;
  t894 = t801*t165*t481;
  t1199 = t277*t1097;
  t1256 = t894 + t1199;
  t1539 = Sin(var1[10]);
  t649 = Cos(var1[11]);
  t2144 = t652*t1491;
  t2177 = -1.*t1256*t1539;
  t2288 = t2144 + t2177;
  t1307 = t652*t1256;
  t1615 = t1491*t1539;
  t1693 = t1307 + t1615;
  t2413 = Sin(var1[11]);
  t641 = Cos(var1[12]);
  t2779 = t649*t2288;
  t2940 = -1.*t1693*t2413;
  t2966 = t2779 + t2940;
  t1953 = t649*t1693;
  t2449 = t2288*t2413;
  t2497 = t1953 + t2449;
  t3049 = Sin(var1[12]);
  t598 = Cos(var1[13]);
  t3336 = t641*t2966;
  t3352 = -1.*t2497*t3049;
  t3376 = t3336 + t3352;
  t2686 = t641*t2497;
  t3051 = t2966*t3049;
  t3090 = t2686 + t3051;
  t3628 = Sin(var1[13]);
  t6483 = -1.*t801*t165;
  t6519 = -1.*t277*t481*t1097;
  t6540 = t6483 + t6519;
  t5053 = t277*t801*t481;
  t5308 = -1.*t165*t1097;
  t6093 = t5053 + t5308;
  t6678 = t652*t6540;
  t6687 = -1.*t6093*t1539;
  t6691 = t6678 + t6687;
  t6342 = t652*t6093;
  t6579 = t6540*t1539;
  t6582 = t6342 + t6579;
  t6744 = t649*t6691;
  t6759 = -1.*t6582*t2413;
  t6761 = t6744 + t6759;
  t6664 = t649*t6582;
  t6697 = t6691*t2413;
  t6701 = t6664 + t6697;
  t6779 = t641*t6761;
  t6802 = -1.*t6701*t3049;
  t6808 = t6779 + t6802;
  t6724 = t641*t6701;
  t6768 = t6761*t3049;
  t6770 = t6724 + t6768;
  t6862 = -1.*t37*t652*t1097;
  t6863 = -1.*t37*t801*t1539;
  t6865 = t6862 + t6863;
  t6844 = t37*t801*t652;
  t6848 = -1.*t37*t1097*t1539;
  t6857 = t6844 + t6848;
  t6878 = t649*t6865;
  t6879 = -1.*t6857*t2413;
  t6880 = t6878 + t6879;
  t6859 = t649*t6857;
  t6867 = t6865*t2413;
  t6870 = t6859 + t6867;
  t6899 = t641*t6880;
  t6900 = -1.*t6870*t3049;
  t6902 = t6899 + t6900;
  t6874 = t641*t6870;
  t6883 = t6880*t3049;
  t6894 = t6874 + t6883;
  t3118 = t598*t3090;
  t3798 = t3376*t3628;
  t3813 = t3118 + t3798;
  t4235 = t598*t3376;
  t4299 = -1.*t3090*t3628;
  t4349 = t4235 + t4299;
  t6778 = t598*t6770;
  t6816 = t6808*t3628;
  t6818 = t6778 + t6816;
  t6820 = t598*t6808;
  t6822 = -1.*t6770*t3628;
  t6828 = t6820 + t6822;
  t6895 = t598*t6894;
  t6906 = t6902*t3628;
  t6909 = t6895 + t6906;
  t6918 = t598*t6902;
  t6919 = -1.*t6894*t3628;
  t6922 = t6918 + t6919;

  p_output1(0)=0. + t165*t37;
  p_output1(1)=0. - 1.*t277*t37;
  p_output1(2)=0. + t481;
  p_output1(3)=0. - 0.642788*t3813 - 0.766044*t4349;
  p_output1(4)=0. + 0.642788*t6818 + 0.766044*t6828;
  p_output1(5)=0. + 0.642788*t6909 + 0.766044*t6922;
  p_output1(6)=0. + 0.766044*t3813 - 0.642788*t4349;
  p_output1(7)=0. - 0.766044*t6818 + 0.642788*t6828;
  p_output1(8)=0. - 0.766044*t6909 + 0.642788*t6922;
}


       
void R_MultisenseIMU_to_RightToeBottom(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
