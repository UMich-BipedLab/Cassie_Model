/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 12:16:37 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_MultisenseIMU_to_RightToeBottom.h"

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
  double t29;
  double t55;
  double t534;
  double t150;
  double t951;
  double t1109;
  double t879;
  double t1206;
  double t1221;
  double t1226;
  double t1097;
  double t1164;
  double t1185;
  double t1230;
  double t875;
  double t1328;
  double t1331;
  double t1368;
  double t1199;
  double t1256;
  double t1268;
  double t1375;
  double t845;
  double t1615;
  double t1625;
  double t1669;
  double t1307;
  double t1423;
  double t1469;
  double t1687;
  double t627;
  double t1953;
  double t1962;
  double t1964;
  double t1491;
  double t1693;
  double t1831;
  double t2047;
  double t2578;
  double t2581;
  double t2761;
  double t2449;
  double t2462;
  double t2492;
  double t2966;
  double t3001;
  double t3070;
  double t2497;
  double t2779;
  double t2844;
  double t3438;
  double t3482;
  double t3495;
  double t2940;
  double t3090;
  double t3282;
  double t4299;
  double t4334;
  double t4349;
  double t3336;
  double t3628;
  double t3737;
  double t6499;
  double t6507;
  double t6517;
  double t6342;
  double t6390;
  double t6453;
  double t6551;
  double t6556;
  double t6579;
  double t6483;
  double t6519;
  double t6537;
  double t6678;
  double t6686;
  double t6687;
  double t6540;
  double t6582;
  double t6586;
  double t1902;
  double t2058;
  double t2144;
  double t2199;
  double t2276;
  double t2288;
  double t3768;
  double t4953;
  double t4979;
  double t5152;
  double t5235;
  double t5308;
  double t6664;
  double t6689;
  double t6691;
  double t6701;
  double t6718;
  double t6724;
  double t6811;
  double t6814;
  double t6823;
  double t6825;
  double t6852;
  double t6853;
  double t6868;
  double t6869;
  double t6886;
  double t6888;
  double t6782;
  double t6791;
  double t6795;
  double t6802;
  double t6803;
  double t6815;
  double t6816;
  double t6817;
  double t6819;
  double t6820;
  double t6821;
  double t6826;
  double t6828;
  double t6829;
  double t6840;
  double t6844;
  double t6845;
  double t6857;
  double t6859;
  double t6861;
  double t6863;
  double t6865;
  double t6866;
  double t6870;
  double t6874;
  double t6875;
  double t6879;
  double t6880;
  double t6882;
  double t6894;
  double t6895;
  double t6898;
  double t6900;
  double t6902;
  double t6903;
  t29 = Cos(var1[8]);
  t55 = Sin(var1[7]);
  t534 = Sin(var1[8]);
  t150 = Cos(var1[7]);
  t951 = Cos(var1[9]);
  t1109 = Sin(var1[9]);
  t879 = Cos(var1[10]);
  t1206 = t150*t951;
  t1221 = -1.*t55*t534*t1109;
  t1226 = t1206 + t1221;
  t1097 = t951*t55*t534;
  t1164 = t150*t1109;
  t1185 = t1097 + t1164;
  t1230 = Sin(var1[10]);
  t875 = Cos(var1[11]);
  t1328 = t879*t1226;
  t1331 = -1.*t1185*t1230;
  t1368 = t1328 + t1331;
  t1199 = t879*t1185;
  t1256 = t1226*t1230;
  t1268 = t1199 + t1256;
  t1375 = Sin(var1[11]);
  t845 = Cos(var1[12]);
  t1615 = t875*t1368;
  t1625 = -1.*t1268*t1375;
  t1669 = t1615 + t1625;
  t1307 = t875*t1268;
  t1423 = t1368*t1375;
  t1469 = t1307 + t1423;
  t1687 = Sin(var1[12]);
  t627 = Cos(var1[13]);
  t1953 = t845*t1669;
  t1962 = -1.*t1469*t1687;
  t1964 = t1953 + t1962;
  t1491 = t845*t1469;
  t1693 = t1669*t1687;
  t1831 = t1491 + t1693;
  t2047 = Sin(var1[13]);
  t2578 = -1.*t951*t55;
  t2581 = -1.*t150*t534*t1109;
  t2761 = t2578 + t2581;
  t2449 = t150*t951*t534;
  t2462 = -1.*t55*t1109;
  t2492 = t2449 + t2462;
  t2966 = t879*t2761;
  t3001 = -1.*t2492*t1230;
  t3070 = t2966 + t3001;
  t2497 = t879*t2492;
  t2779 = t2761*t1230;
  t2844 = t2497 + t2779;
  t3438 = t875*t3070;
  t3482 = -1.*t2844*t1375;
  t3495 = t3438 + t3482;
  t2940 = t875*t2844;
  t3090 = t3070*t1375;
  t3282 = t2940 + t3090;
  t4299 = t845*t3495;
  t4334 = -1.*t3282*t1687;
  t4349 = t4299 + t4334;
  t3336 = t845*t3282;
  t3628 = t3495*t1687;
  t3737 = t3336 + t3628;
  t6499 = -1.*t29*t879*t1109;
  t6507 = -1.*t29*t951*t1230;
  t6517 = t6499 + t6507;
  t6342 = t29*t951*t879;
  t6390 = -1.*t29*t1109*t1230;
  t6453 = t6342 + t6390;
  t6551 = t875*t6517;
  t6556 = -1.*t6453*t1375;
  t6579 = t6551 + t6556;
  t6483 = t875*t6453;
  t6519 = t6517*t1375;
  t6537 = t6483 + t6519;
  t6678 = t845*t6579;
  t6686 = -1.*t6537*t1687;
  t6687 = t6678 + t6686;
  t6540 = t845*t6537;
  t6582 = t6579*t1687;
  t6586 = t6540 + t6582;
  t1902 = t627*t1831;
  t2058 = t1964*t2047;
  t2144 = t1902 + t2058;
  t2199 = t627*t1964;
  t2276 = -1.*t1831*t2047;
  t2288 = t2199 + t2276;
  t3768 = t627*t3737;
  t4953 = t4349*t2047;
  t4979 = t3768 + t4953;
  t5152 = t627*t4349;
  t5235 = -1.*t3737*t2047;
  t5308 = t5152 + t5235;
  t6664 = t627*t6586;
  t6689 = t6687*t2047;
  t6691 = t6664 + t6689;
  t6701 = t627*t6687;
  t6718 = -1.*t6586*t2047;
  t6724 = t6701 + t6718;
  t6811 = -1.*t951;
  t6814 = 1. + t6811;
  t6823 = -1.*t879;
  t6825 = 1. + t6823;
  t6852 = -1.*t875;
  t6853 = 1. + t6852;
  t6868 = -1.*t845;
  t6869 = 1. + t6868;
  t6886 = -1.*t627;
  t6888 = 1. + t6886;
  t6782 = -1.*t29;
  t6791 = 1. + t6782;
  t6795 = -0.135*t6791;
  t6802 = 0.049*t534;
  t6803 = 0. + t6795 + t6802;
  t6815 = -0.049*t6814;
  t6816 = -0.09*t1109;
  t6817 = 0. + t6815 + t6816;
  t6819 = -0.09*t6814;
  t6820 = 0.049*t1109;
  t6821 = 0. + t6819 + t6820;
  t6826 = -0.049*t6825;
  t6828 = -0.21*t1230;
  t6829 = 0. + t6826 + t6828;
  t6840 = -0.21*t6825;
  t6844 = 0.049*t1230;
  t6845 = 0. + t6840 + t6844;
  t6857 = -0.0016*t6853;
  t6859 = -0.2707*t1375;
  t6861 = 0. + t6857 + t6859;
  t6863 = -0.2707*t6853;
  t6865 = 0.0016*t1375;
  t6866 = 0. + t6863 + t6865;
  t6870 = 0.0184*t6869;
  t6874 = -0.7055*t1687;
  t6875 = 0. + t6870 + t6874;
  t6879 = -0.7055*t6869;
  t6880 = -0.0184*t1687;
  t6882 = 0. + t6879 + t6880;
  t6894 = -0.0216*t6888;
  t6895 = -1.1135*t2047;
  t6898 = 0. + t6894 + t6895;
  t6900 = -1.1135*t6888;
  t6902 = 0.0216*t2047;
  t6903 = 0. + t6900 + t6902;

  p_output1(0)=0. + t29*t55;
  p_output1(1)=0. - 1.*t150*t29;
  p_output1(2)=0. + t534;
  p_output1(3)=0.;
  p_output1(4)=0. - 0.642788*t2144 - 0.766044*t2288;
  p_output1(5)=0. + 0.642788*t4979 + 0.766044*t5308;
  p_output1(6)=0. + 0.642788*t6691 + 0.766044*t6724;
  p_output1(7)=0.;
  p_output1(8)=0. + 0.766044*t2144 - 0.642788*t2288;
  p_output1(9)=0. - 0.766044*t4979 + 0.642788*t5308;
  p_output1(10)=0. - 0.766044*t6691 + 0.642788*t6724;
  p_output1(11)=0.;
  p_output1(12)=0.24925 - 0.0306*t2144 + 1.1312*t2288 - 0.135*t55 + 0.1305*t29*t55 - 1.*t55*t6803 - 1.*t534*t55*t6817 - 1.*t150*t6821 - 1.*t1185*t6829 - 1.*t1226*t6845 - 1.*t1268*t6861 - 1.*t1368*t6866 - 1.*t1469*t6875 - 1.*t1669*t6882 - 1.*t1831*t6898 - 1.*t1964*t6903;
  p_output1(13)=-0.0302 - 0.135*(1. - 1.*t150) - 0.1305*t150*t29 + 0.0306*t4979 - 1.1312*t5308 + t150*t6803 + t150*t534*t6817 - 1.*t55*t6821 + t2492*t6829 + t2761*t6845 + t2844*t6861 + t3070*t6866 + t3282*t6875 + t3495*t6882 + t3737*t6898 + t4349*t6903;
  p_output1(14)=-0.047 - 0.004500000000000004*t534 + 0.0306*t6691 - 1.1312*t6724 - 0.049*t6791 + t29*t6817 - 1.*t1109*t29*t6845 + t6453*t6861 + t6517*t6866 + t6537*t6875 + t6579*t6882 + t6586*t6898 + t6687*t6903 + t29*t6829*t951;
  p_output1(15)=1.;
}


       
void H_MultisenseIMU_to_RightToeBottom(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
