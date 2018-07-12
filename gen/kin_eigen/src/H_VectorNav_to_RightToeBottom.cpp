/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:37:20 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_VectorNav_to_RightToeBottom.h"

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
static void output1(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  double t198;
  double t1021;
  double t1096;
  double t997;
  double t1101;
  double t959;
  double t1239;
  double t1321;
  double t1351;
  double t1092;
  double t1103;
  double t1172;
  double t1383;
  double t788;
  double t1571;
  double t1574;
  double t1582;
  double t1202;
  double t1388;
  double t1455;
  double t1600;
  double t735;
  double t1722;
  double t1852;
  double t1864;
  double t1520;
  double t1610;
  double t1635;
  double t1893;
  double t189;
  double t40;
  double t280;
  double t2516;
  double t2521;
  double t2524;
  double t2392;
  double t2447;
  double t2450;
  double t2540;
  double t2571;
  double t2636;
  double t2499;
  double t2528;
  double t2529;
  double t2779;
  double t2830;
  double t2875;
  double t2535;
  double t2651;
  double t2691;
  double t2944;
  double t2969;
  double t2982;
  double t2773;
  double t2910;
  double t2928;
  double t3401;
  double t3498;
  double t3605;
  double t3267;
  double t3287;
  double t3350;
  double t3768;
  double t3776;
  double t3815;
  double t3353;
  double t3635;
  double t3664;
  double t3903;
  double t3904;
  double t3933;
  double t3694;
  double t3816;
  double t3873;
  double t4158;
  double t4160;
  double t4184;
  double t3885;
  double t3971;
  double t3983;
  double t1638;
  double t1948;
  double t2026;
  double t2090;
  double t2196;
  double t2315;
  double t2932;
  double t2986;
  double t3013;
  double t3044;
  double t3089;
  double t3171;
  double t4104;
  double t4204;
  double t4231;
  double t4344;
  double t4386;
  double t4424;
  double t5090;
  double t5109;
  double t5333;
  double t5343;
  double t5466;
  double t5491;
  double t5630;
  double t5659;
  double t4680;
  double t4695;
  double t4740;
  double t4750;
  double t4826;
  double t4893;
  double t5025;
  double t5124;
  double t5128;
  double t5155;
  double t5162;
  double t5174;
  double t5218;
  double t5364;
  double t5367;
  double t5368;
  double t5391;
  double t5402;
  double t5437;
  double t5507;
  double t5521;
  double t5532;
  double t5561;
  double t5566;
  double t5596;
  double t5683;
  double t5712;
  double t5731;
  double t5786;
  double t5922;
  double t5927;
  double t6142;
  double t6149;
  double t6159;
  double t6172;
  double t6188;
  double t6189;
  t198 = Cos(var1[8]);
  t1021 = Cos(var1[10]);
  t1096 = Sin(var1[9]);
  t997 = Cos(var1[9]);
  t1101 = Sin(var1[10]);
  t959 = Cos(var1[11]);
  t1239 = -1.*t198*t1021*t1096;
  t1321 = -1.*t198*t997*t1101;
  t1351 = t1239 + t1321;
  t1092 = t198*t997*t1021;
  t1103 = -1.*t198*t1096*t1101;
  t1172 = t1092 + t1103;
  t1383 = Sin(var1[11]);
  t788 = Cos(var1[12]);
  t1571 = t959*t1351;
  t1574 = -1.*t1172*t1383;
  t1582 = t1571 + t1574;
  t1202 = t959*t1172;
  t1388 = t1351*t1383;
  t1455 = t1202 + t1388;
  t1600 = Sin(var1[12]);
  t735 = Cos(var1[13]);
  t1722 = t788*t1582;
  t1852 = -1.*t1455*t1600;
  t1864 = t1722 + t1852;
  t1520 = t788*t1455;
  t1610 = t1582*t1600;
  t1635 = t1520 + t1610;
  t1893 = Sin(var1[13]);
  t189 = Cos(var1[7]);
  t40 = Sin(var1[8]);
  t280 = Sin(var1[7]);
  t2516 = -1.*t997*t280;
  t2521 = -1.*t189*t40*t1096;
  t2524 = t2516 + t2521;
  t2392 = t189*t997*t40;
  t2447 = -1.*t280*t1096;
  t2450 = t2392 + t2447;
  t2540 = t1021*t2524;
  t2571 = -1.*t2450*t1101;
  t2636 = t2540 + t2571;
  t2499 = t1021*t2450;
  t2528 = t2524*t1101;
  t2529 = t2499 + t2528;
  t2779 = t959*t2636;
  t2830 = -1.*t2529*t1383;
  t2875 = t2779 + t2830;
  t2535 = t959*t2529;
  t2651 = t2636*t1383;
  t2691 = t2535 + t2651;
  t2944 = t788*t2875;
  t2969 = -1.*t2691*t1600;
  t2982 = t2944 + t2969;
  t2773 = t788*t2691;
  t2910 = t2875*t1600;
  t2928 = t2773 + t2910;
  t3401 = t189*t997;
  t3498 = -1.*t280*t40*t1096;
  t3605 = t3401 + t3498;
  t3267 = t997*t280*t40;
  t3287 = t189*t1096;
  t3350 = t3267 + t3287;
  t3768 = t1021*t3605;
  t3776 = -1.*t3350*t1101;
  t3815 = t3768 + t3776;
  t3353 = t1021*t3350;
  t3635 = t3605*t1101;
  t3664 = t3353 + t3635;
  t3903 = t959*t3815;
  t3904 = -1.*t3664*t1383;
  t3933 = t3903 + t3904;
  t3694 = t959*t3664;
  t3816 = t3815*t1383;
  t3873 = t3694 + t3816;
  t4158 = t788*t3933;
  t4160 = -1.*t3873*t1600;
  t4184 = t4158 + t4160;
  t3885 = t788*t3873;
  t3971 = t3933*t1600;
  t3983 = t3885 + t3971;
  t1638 = t735*t1635;
  t1948 = t1864*t1893;
  t2026 = t1638 + t1948;
  t2090 = t735*t1864;
  t2196 = -1.*t1635*t1893;
  t2315 = t2090 + t2196;
  t2932 = t735*t2928;
  t2986 = t2982*t1893;
  t3013 = t2932 + t2986;
  t3044 = t735*t2982;
  t3089 = -1.*t2928*t1893;
  t3171 = t3044 + t3089;
  t4104 = t735*t3983;
  t4204 = t4184*t1893;
  t4231 = t4104 + t4204;
  t4344 = t735*t4184;
  t4386 = -1.*t3983*t1893;
  t4424 = t4344 + t4386;
  t5090 = -1.*t1021;
  t5109 = 1. + t5090;
  t5333 = -1.*t959;
  t5343 = 1. + t5333;
  t5466 = -1.*t788;
  t5491 = 1. + t5466;
  t5630 = -1.*t735;
  t5659 = 1. + t5630;
  t4680 = -1.*t198;
  t4695 = 1. + t4680;
  t4740 = -1.*t997;
  t4750 = 1. + t4740;
  t4826 = -0.049*t4750;
  t4893 = -0.09*t1096;
  t5025 = 0. + t4826 + t4893;
  t5124 = -0.049*t5109;
  t5128 = -0.21*t1101;
  t5155 = 0. + t5124 + t5128;
  t5162 = -0.21*t5109;
  t5174 = 0.049*t1101;
  t5218 = 0. + t5162 + t5174;
  t5364 = -0.0016*t5343;
  t5367 = -0.2707*t1383;
  t5368 = 0. + t5364 + t5367;
  t5391 = -0.2707*t5343;
  t5402 = 0.0016*t1383;
  t5437 = 0. + t5391 + t5402;
  t5507 = 0.0184*t5491;
  t5521 = -0.7055*t1600;
  t5532 = 0. + t5507 + t5521;
  t5561 = -0.7055*t5491;
  t5566 = -0.0184*t1600;
  t5596 = 0. + t5561 + t5566;
  t5683 = -0.0216*t5659;
  t5712 = -1.1135*t1893;
  t5731 = 0. + t5683 + t5712;
  t5786 = -1.1135*t5659;
  t5922 = 0.0216*t1893;
  t5927 = 0. + t5786 + t5922;
  t6142 = -0.135*t4695;
  t6149 = 0.049*t40;
  t6159 = 0. + t6142 + t6149;
  t6172 = -0.09*t4750;
  t6188 = 0.049*t1096;
  t6189 = 0. + t6172 + t6188;

  p_output1(0)=0. + t40;
  p_output1(1)=0. - 1.*t189*t198;
  p_output1(2)=0. - 1.*t198*t280;
  p_output1(3)=0.;
  p_output1(4)=0. + 0.642788*t2026 + 0.766044*t2315;
  p_output1(5)=0. + 0.642788*t3013 + 0.766044*t3171;
  p_output1(6)=0. + 0.642788*t4231 + 0.766044*t4424;
  p_output1(7)=0.;
  p_output1(8)=0. - 0.766044*t2026 + 0.642788*t2315;
  p_output1(9)=0. - 0.766044*t3013 + 0.642788*t3171;
  p_output1(10)=0. - 0.766044*t4231 + 0.642788*t4424;
  p_output1(11)=0.;
  p_output1(12)=-0.03155 + 0.0306*t2026 - 1.1312*t2315 - 0.004500000000000004*t40 - 0.049*t4695 + t198*t5025 - 1.*t1096*t198*t5218 + t1172*t5368 + t1351*t5437 + t1455*t5532 + t1582*t5596 + t1635*t5731 + t1864*t5927 + t198*t5155*t997;
  p_output1(13)=0. - 0.135*(1. - 1.*t189) - 0.1305*t189*t198 + 0.0306*t3013 - 1.1312*t3171 + t189*t40*t5025 + t2450*t5155 + t2524*t5218 + t2529*t5368 + t2636*t5437 + t2691*t5532 + t2875*t5596 + t2928*t5731 + t2982*t5927 + t189*t6159 - 1.*t280*t6189;
  p_output1(14)=0.07996 + 0.135*t280 - 0.1305*t198*t280 + 0.0306*t4231 - 1.1312*t4424 + t280*t40*t5025 + t3350*t5155 + t3605*t5218 + t3664*t5368 + t3815*t5437 + t3873*t5532 + t3933*t5596 + t3983*t5731 + t4184*t5927 + t280*t6159 + t189*t6189;
  p_output1(15)=1.;
}


       
void H_VectorNav_to_RightToeBottom(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
