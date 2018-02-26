/*
 * Automatically Generated from Mathematica.
 * Mon 26 Feb 2018 15:42:54 GMT-05:00
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
  double t219;
  double t503;
  double t552;
  double t487;
  double t649;
  double t475;
  double t800;
  double t816;
  double t851;
  double t524;
  double t651;
  double t726;
  double t886;
  double t455;
  double t989;
  double t1036;
  double t1048;
  double t791;
  double t915;
  double t954;
  double t1138;
  double t419;
  double t1325;
  double t1378;
  double t1444;
  double t955;
  double t1150;
  double t1242;
  double t1475;
  double t212;
  double t25;
  double t251;
  double t1897;
  double t1898;
  double t1908;
  double t1793;
  double t1862;
  double t1883;
  double t2051;
  double t2056;
  double t2065;
  double t1886;
  double t1917;
  double t1958;
  double t2080;
  double t2148;
  double t2175;
  double t2029;
  double t2072;
  double t2075;
  double t2378;
  double t2465;
  double t2510;
  double t2076;
  double t2200;
  double t2245;
  double t3117;
  double t3148;
  double t3161;
  double t2905;
  double t3071;
  double t3098;
  double t3194;
  double t3206;
  double t3212;
  double t3113;
  double t3176;
  double t3179;
  double t3286;
  double t3345;
  double t3398;
  double t3182;
  double t3243;
  double t3247;
  double t3711;
  double t3816;
  double t3863;
  double t3261;
  double t3603;
  double t3627;
  double t1324;
  double t1505;
  double t1522;
  double t1619;
  double t1672;
  double t1673;
  double t2288;
  double t2514;
  double t2561;
  double t2572;
  double t2707;
  double t2777;
  double t3692;
  double t3890;
  double t3936;
  double t4022;
  double t4055;
  double t4101;
  double t6302;
  double t6929;
  double t7812;
  double t7836;
  double t7879;
  double t7883;
  double t7936;
  double t7939;
  double t4877;
  double t4989;
  double t5134;
  double t5155;
  double t5340;
  double t5394;
  double t5402;
  double t7092;
  double t7506;
  double t7560;
  double t7613;
  double t7674;
  double t7745;
  double t7842;
  double t7843;
  double t7849;
  double t7857;
  double t7862;
  double t7869;
  double t7885;
  double t7896;
  double t7904;
  double t7919;
  double t7921;
  double t7926;
  double t7940;
  double t7942;
  double t7943;
  double t7955;
  double t7961;
  double t7965;
  double t7991;
  double t7992;
  double t7998;
  double t8006;
  double t8014;
  double t8015;
  t219 = Cos(var1[8]);
  t503 = Cos(var1[10]);
  t552 = Sin(var1[9]);
  t487 = Cos(var1[9]);
  t649 = Sin(var1[10]);
  t475 = Cos(var1[11]);
  t800 = -1.*t219*t503*t552;
  t816 = -1.*t219*t487*t649;
  t851 = t800 + t816;
  t524 = t219*t487*t503;
  t651 = -1.*t219*t552*t649;
  t726 = t524 + t651;
  t886 = Sin(var1[11]);
  t455 = Cos(var1[12]);
  t989 = t475*t851;
  t1036 = -1.*t726*t886;
  t1048 = t989 + t1036;
  t791 = t475*t726;
  t915 = t851*t886;
  t954 = t791 + t915;
  t1138 = Sin(var1[12]);
  t419 = Cos(var1[13]);
  t1325 = t455*t1048;
  t1378 = -1.*t954*t1138;
  t1444 = t1325 + t1378;
  t955 = t455*t954;
  t1150 = t1048*t1138;
  t1242 = t955 + t1150;
  t1475 = Sin(var1[13]);
  t212 = Cos(var1[7]);
  t25 = Sin(var1[8]);
  t251 = Sin(var1[7]);
  t1897 = -1.*t487*t251;
  t1898 = -1.*t212*t25*t552;
  t1908 = t1897 + t1898;
  t1793 = t212*t487*t25;
  t1862 = -1.*t251*t552;
  t1883 = t1793 + t1862;
  t2051 = t503*t1908;
  t2056 = -1.*t1883*t649;
  t2065 = t2051 + t2056;
  t1886 = t503*t1883;
  t1917 = t1908*t649;
  t1958 = t1886 + t1917;
  t2080 = t475*t2065;
  t2148 = -1.*t1958*t886;
  t2175 = t2080 + t2148;
  t2029 = t475*t1958;
  t2072 = t2065*t886;
  t2075 = t2029 + t2072;
  t2378 = t455*t2175;
  t2465 = -1.*t2075*t1138;
  t2510 = t2378 + t2465;
  t2076 = t455*t2075;
  t2200 = t2175*t1138;
  t2245 = t2076 + t2200;
  t3117 = t212*t487;
  t3148 = -1.*t251*t25*t552;
  t3161 = t3117 + t3148;
  t2905 = t487*t251*t25;
  t3071 = t212*t552;
  t3098 = t2905 + t3071;
  t3194 = t503*t3161;
  t3206 = -1.*t3098*t649;
  t3212 = t3194 + t3206;
  t3113 = t503*t3098;
  t3176 = t3161*t649;
  t3179 = t3113 + t3176;
  t3286 = t475*t3212;
  t3345 = -1.*t3179*t886;
  t3398 = t3286 + t3345;
  t3182 = t475*t3179;
  t3243 = t3212*t886;
  t3247 = t3182 + t3243;
  t3711 = t455*t3398;
  t3816 = -1.*t3247*t1138;
  t3863 = t3711 + t3816;
  t3261 = t455*t3247;
  t3603 = t3398*t1138;
  t3627 = t3261 + t3603;
  t1324 = t419*t1242;
  t1505 = t1444*t1475;
  t1522 = t1324 + t1505;
  t1619 = t419*t1444;
  t1672 = -1.*t1242*t1475;
  t1673 = t1619 + t1672;
  t2288 = t419*t2245;
  t2514 = t2510*t1475;
  t2561 = t2288 + t2514;
  t2572 = t419*t2510;
  t2707 = -1.*t2245*t1475;
  t2777 = t2572 + t2707;
  t3692 = t419*t3627;
  t3890 = t3863*t1475;
  t3936 = t3692 + t3890;
  t4022 = t419*t3863;
  t4055 = -1.*t3627*t1475;
  t4101 = t4022 + t4055;
  t6302 = -1.*t503;
  t6929 = 1. + t6302;
  t7812 = -1.*t475;
  t7836 = 1. + t7812;
  t7879 = -1.*t455;
  t7883 = 1. + t7879;
  t7936 = -1.*t419;
  t7939 = 1. + t7936;
  t4877 = -1.*t219;
  t4989 = 1. + t4877;
  t5134 = -1.*t487;
  t5155 = 1. + t5134;
  t5340 = -0.049*t5155;
  t5394 = -0.09*t552;
  t5402 = 0. + t5340 + t5394;
  t7092 = -0.049*t6929;
  t7506 = -0.21*t649;
  t7560 = 0. + t7092 + t7506;
  t7613 = -0.21*t6929;
  t7674 = 0.049*t649;
  t7745 = 0. + t7613 + t7674;
  t7842 = -0.0016*t7836;
  t7843 = -0.2707*t886;
  t7849 = 0. + t7842 + t7843;
  t7857 = -0.2707*t7836;
  t7862 = 0.0016*t886;
  t7869 = 0. + t7857 + t7862;
  t7885 = 0.0184*t7883;
  t7896 = -0.7055*t1138;
  t7904 = 0. + t7885 + t7896;
  t7919 = -0.7055*t7883;
  t7921 = -0.0184*t1138;
  t7926 = 0. + t7919 + t7921;
  t7940 = -0.0216*t7939;
  t7942 = -1.1135*t1475;
  t7943 = 0. + t7940 + t7942;
  t7955 = -1.1135*t7939;
  t7961 = 0.0216*t1475;
  t7965 = 0. + t7955 + t7961;
  t7991 = -0.135*t4989;
  t7992 = 0.049*t25;
  t7998 = 0. + t7991 + t7992;
  t8006 = -0.09*t5155;
  t8014 = 0.049*t552;
  t8015 = 0. + t8006 + t8014;

  p_output1(0)=0. + t25;
  p_output1(1)=0. + t212*t219;
  p_output1(2)=0. + t219*t251;
  p_output1(3)=0.;
  p_output1(4)=0. + 0.642788*t1522 + 0.766044*t1673;
  p_output1(5)=0. - 0.642788*t2561 - 0.766044*t2777;
  p_output1(6)=0. - 0.642788*t3936 - 0.766044*t4101;
  p_output1(7)=0.;
  p_output1(8)=0. - 0.766044*t1522 + 0.642788*t1673;
  p_output1(9)=0. + 0.766044*t2561 - 0.642788*t2777;
  p_output1(10)=0. + 0.766044*t3936 - 0.642788*t4101;
  p_output1(11)=0.;
  p_output1(12)=-0.03155 + 0.0306*t1522 - 1.1312*t1673 - 0.004500000000000004*t25 - 0.049*t4989 + t219*t5402 + t219*t487*t7560 - 1.*t219*t552*t7745 + t726*t7849 + t1048*t7926 + t1242*t7943 + t1444*t7965 + t7869*t851 + t7904*t954;
  p_output1(13)=0. + 0.135*(1. - 1.*t212) + 0.1305*t212*t219 - 0.0306*t2561 + 1.1312*t2777 - 1.*t212*t25*t5402 - 1.*t1883*t7560 - 1.*t1908*t7745 - 1.*t1958*t7849 - 1.*t2065*t7869 - 1.*t2075*t7904 - 1.*t2175*t7926 - 1.*t2245*t7943 - 1.*t2510*t7965 - 1.*t212*t7998 + t251*t8015;
  p_output1(14)=-0.07996 - 0.135*t251 + 0.1305*t219*t251 - 0.0306*t3936 + 1.1312*t4101 - 1.*t25*t251*t5402 - 1.*t3098*t7560 - 1.*t3161*t7745 - 1.*t3179*t7849 - 1.*t3212*t7869 - 1.*t3247*t7904 - 1.*t3398*t7926 - 1.*t3627*t7943 - 1.*t3863*t7965 - 1.*t251*t7998 - 1.*t212*t8015;
  p_output1(15)=1.;
}


       
void H_VectorNav_to_RightToeBottom(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
