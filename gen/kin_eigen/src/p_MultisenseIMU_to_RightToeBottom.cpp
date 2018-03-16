/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 12:16:38 GMT-04:00
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
  double t247;
  double t446;
  double t1113;
  double t1462;
  double t1615;
  double t2002;
  double t2140;
  double t2686;
  double t3151;
  double t3687;
  double t3813;
  double t3961;
  double t3051;
  double t3056;
  double t3100;
  double t6540;
  double t6664;
  double t6678;
  double t6844;
  double t6859;
  double t6865;
  double t6899;
  double t6818;
  double t6828;
  double t6837;
  double t6923;
  double t6927;
  double t6930;
  double t6975;
  double t6976;
  double t6979;
  double t6984;
  double t6958;
  double t6966;
  double t6968;
  double t6991;
  double t6994;
  double t6997;
  double t7019;
  double t7023;
  double t7026;
  double t7029;
  double t7007;
  double t7009;
  double t7013;
  double t7043;
  double t7044;
  double t7045;
  double t703;
  double t894;
  double t958;
  double t1178;
  double t1199;
  double t2008;
  double t2144;
  double t2449;
  double t2748;
  double t2925;
  double t2936;
  double t3881;
  double t4349;
  double t4383;
  double t6691;
  double t6768;
  double t6779;
  double t7096;
  double t7097;
  double t7099;
  double t7106;
  double t7113;
  double t7114;
  double t6883;
  double t6906;
  double t6909;
  double t6932;
  double t6940;
  double t6943;
  double t7120;
  double t7122;
  double t7123;
  double t7130;
  double t7131;
  double t7135;
  double t6981;
  double t6985;
  double t6987;
  double t6999;
  double t7001;
  double t7003;
  double t7142;
  double t7147;
  double t7148;
  double t7150;
  double t7151;
  double t7152;
  double t7027;
  double t7032;
  double t7038;
  double t7048;
  double t7051;
  double t7053;
  double t7154;
  double t7156;
  double t7159;
  double t7164;
  double t7166;
  double t7171;
  double t7203;
  double t7204;
  double t7205;
  double t7207;
  double t7210;
  double t7213;
  double t7215;
  double t7217;
  double t7220;
  double t7226;
  double t7232;
  double t7233;
  double t7237;
  double t7238;
  double t7242;
  double t7245;
  double t7246;
  double t7248;
  t247 = Sin(var1[7]);
  t446 = Cos(var1[8]);
  t1113 = Sin(var1[8]);
  t1462 = Cos(var1[9]);
  t1615 = -1.*t1462;
  t2002 = 1. + t1615;
  t2140 = Sin(var1[9]);
  t2686 = Cos(var1[7]);
  t3151 = Cos(var1[10]);
  t3687 = -1.*t3151;
  t3813 = 1. + t3687;
  t3961 = Sin(var1[10]);
  t3051 = t1462*t247*t1113;
  t3056 = t2686*t2140;
  t3100 = t3051 + t3056;
  t6540 = t2686*t1462;
  t6664 = -1.*t247*t1113*t2140;
  t6678 = t6540 + t6664;
  t6844 = Cos(var1[11]);
  t6859 = -1.*t6844;
  t6865 = 1. + t6859;
  t6899 = Sin(var1[11]);
  t6818 = t3151*t3100;
  t6828 = t6678*t3961;
  t6837 = t6818 + t6828;
  t6923 = t3151*t6678;
  t6927 = -1.*t3100*t3961;
  t6930 = t6923 + t6927;
  t6975 = Cos(var1[12]);
  t6976 = -1.*t6975;
  t6979 = 1. + t6976;
  t6984 = Sin(var1[12]);
  t6958 = t6844*t6837;
  t6966 = t6930*t6899;
  t6968 = t6958 + t6966;
  t6991 = t6844*t6930;
  t6994 = -1.*t6837*t6899;
  t6997 = t6991 + t6994;
  t7019 = Cos(var1[13]);
  t7023 = -1.*t7019;
  t7026 = 1. + t7023;
  t7029 = Sin(var1[13]);
  t7007 = t6975*t6968;
  t7009 = t6997*t6984;
  t7013 = t7007 + t7009;
  t7043 = t6975*t6997;
  t7044 = -1.*t6968*t6984;
  t7045 = t7043 + t7044;
  t703 = -1.*t446;
  t894 = 1. + t703;
  t958 = -0.135*t894;
  t1178 = 0.049*t1113;
  t1199 = 0. + t958 + t1178;
  t2008 = -0.049*t2002;
  t2144 = -0.09*t2140;
  t2449 = 0. + t2008 + t2144;
  t2748 = -0.09*t2002;
  t2925 = 0.049*t2140;
  t2936 = 0. + t2748 + t2925;
  t3881 = -0.049*t3813;
  t4349 = -0.21*t3961;
  t4383 = 0. + t3881 + t4349;
  t6691 = -0.21*t3813;
  t6768 = 0.049*t3961;
  t6779 = 0. + t6691 + t6768;
  t7096 = t2686*t1462*t1113;
  t7097 = -1.*t247*t2140;
  t7099 = t7096 + t7097;
  t7106 = -1.*t1462*t247;
  t7113 = -1.*t2686*t1113*t2140;
  t7114 = t7106 + t7113;
  t6883 = -0.0016*t6865;
  t6906 = -0.2707*t6899;
  t6909 = 0. + t6883 + t6906;
  t6932 = -0.2707*t6865;
  t6940 = 0.0016*t6899;
  t6943 = 0. + t6932 + t6940;
  t7120 = t3151*t7099;
  t7122 = t7114*t3961;
  t7123 = t7120 + t7122;
  t7130 = t3151*t7114;
  t7131 = -1.*t7099*t3961;
  t7135 = t7130 + t7131;
  t6981 = 0.0184*t6979;
  t6985 = -0.7055*t6984;
  t6987 = 0. + t6981 + t6985;
  t6999 = -0.7055*t6979;
  t7001 = -0.0184*t6984;
  t7003 = 0. + t6999 + t7001;
  t7142 = t6844*t7123;
  t7147 = t7135*t6899;
  t7148 = t7142 + t7147;
  t7150 = t6844*t7135;
  t7151 = -1.*t7123*t6899;
  t7152 = t7150 + t7151;
  t7027 = -0.0216*t7026;
  t7032 = -1.1135*t7029;
  t7038 = 0. + t7027 + t7032;
  t7048 = -1.1135*t7026;
  t7051 = 0.0216*t7029;
  t7053 = 0. + t7048 + t7051;
  t7154 = t6975*t7148;
  t7156 = t7152*t6984;
  t7159 = t7154 + t7156;
  t7164 = t6975*t7152;
  t7166 = -1.*t7148*t6984;
  t7171 = t7164 + t7166;
  t7203 = t446*t1462*t3151;
  t7204 = -1.*t446*t2140*t3961;
  t7205 = t7203 + t7204;
  t7207 = -1.*t446*t3151*t2140;
  t7210 = -1.*t446*t1462*t3961;
  t7213 = t7207 + t7210;
  t7215 = t6844*t7205;
  t7217 = t7213*t6899;
  t7220 = t7215 + t7217;
  t7226 = t6844*t7213;
  t7232 = -1.*t7205*t6899;
  t7233 = t7226 + t7232;
  t7237 = t6975*t7220;
  t7238 = t7233*t6984;
  t7242 = t7237 + t7238;
  t7245 = t6975*t7233;
  t7246 = -1.*t7220*t6984;
  t7248 = t7245 + t7246;

  p_output1(0)=0.24925 - 0.135*t247 - 1.*t1199*t247 - 1.*t1113*t2449*t247 - 1.*t2686*t2936 - 1.*t3100*t4383 + 0.1305*t247*t446 - 1.*t6678*t6779 - 1.*t6837*t6909 - 1.*t6930*t6943 - 1.*t6968*t6987 - 1.*t6997*t7003 - 1.*t7013*t7038 + 1.1312*(-1.*t7013*t7029 + t7019*t7045) - 0.0306*(t7013*t7019 + t7029*t7045) - 1.*t7045*t7053;
  p_output1(1)=-0.0302 - 0.135*(1. - 1.*t2686) + t1199*t2686 + t1113*t2449*t2686 - 1.*t247*t2936 - 0.1305*t2686*t446 + t4383*t7099 + t6779*t7114 + t6909*t7123 + t6943*t7135 + t6987*t7148 + t7003*t7152 + t7038*t7159 + t7053*t7171 - 1.1312*(-1.*t7029*t7159 + t7019*t7171) + 0.0306*(t7019*t7159 + t7029*t7171);
  p_output1(2)=-0.047 - 0.004500000000000004*t1113 + t2449*t446 + t1462*t4383*t446 - 1.*t2140*t446*t6779 + t6909*t7205 + t6943*t7213 + t6987*t7220 + t7003*t7233 + t7038*t7242 + t7053*t7248 - 1.1312*(-1.*t7029*t7242 + t7019*t7248) + 0.0306*(t7019*t7242 + t7029*t7248) - 0.049*t894;
}


       
void p_MultisenseIMU_to_RightToeBottom(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
