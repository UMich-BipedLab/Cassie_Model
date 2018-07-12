/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:37:02 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_MultisenseIMU_to_LeftToeBottom_src.h"

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
  double t3;
  double t266;
  double t914;
  double t492;
  double t1901;
  double t1977;
  double t2265;
  double t1957;
  double t1978;
  double t2111;
  double t1679;
  double t2725;
  double t2762;
  double t2786;
  double t3012;
  double t2127;
  double t2838;
  double t2889;
  double t1197;
  double t3146;
  double t3177;
  double t3270;
  double t3548;
  double t2929;
  double t3277;
  double t3329;
  double t1114;
  double t3587;
  double t3638;
  double t3662;
  double t3970;
  double t3356;
  double t3841;
  double t3850;
  double t1005;
  double t3982;
  double t4076;
  double t4101;
  double t4593;
  double t4597;
  double t4608;
  double t4634;
  double t4667;
  double t4998;
  double t4611;
  double t5000;
  double t5062;
  double t5077;
  double t5199;
  double t5275;
  double t5072;
  double t5293;
  double t5351;
  double t5404;
  double t5429;
  double t5479;
  double t5399;
  double t5520;
  double t5522;
  double t5557;
  double t5610;
  double t5632;
  double t5774;
  double t5822;
  double t5864;
  double t5868;
  double t5869;
  double t5891;
  double t5865;
  double t5913;
  double t5954;
  double t5979;
  double t5999;
  double t6052;
  double t5978;
  double t6061;
  double t6068;
  double t6103;
  double t6104;
  double t6111;
  double t3921;
  double t4164;
  double t4171;
  double t4325;
  double t4327;
  double t4408;
  double t5543;
  double t5654;
  double t5655;
  double t5683;
  double t5698;
  double t5739;
  double t6082;
  double t6141;
  double t6153;
  double t6161;
  double t6162;
  double t6167;
  double t6577;
  double t6587;
  double t6734;
  double t6760;
  double t6846;
  double t6847;
  double t6896;
  double t6900;
  double t6961;
  double t6975;
  double t6521;
  double t6541;
  double t6543;
  double t6564;
  double t6569;
  double t6592;
  double t6597;
  double t6630;
  double t6681;
  double t6711;
  double t6712;
  double t6770;
  double t6787;
  double t6792;
  double t6809;
  double t6816;
  double t6830;
  double t6857;
  double t6859;
  double t6865;
  double t6875;
  double t6883;
  double t6886;
  double t6901;
  double t6904;
  double t6915;
  double t6933;
  double t6936;
  double t6940;
  double t6976;
  double t6983;
  double t6985;
  double t7004;
  double t7012;
  double t7016;
  t3 = Cos(var1[1]);
  t266 = Sin(var1[0]);
  t914 = Sin(var1[1]);
  t492 = Cos(var1[0]);
  t1901 = Cos(var1[2]);
  t1977 = Sin(var1[2]);
  t2265 = Cos(var1[3]);
  t1957 = t1901*t266*t914;
  t1978 = t492*t1977;
  t2111 = t1957 + t1978;
  t1679 = Sin(var1[3]);
  t2725 = t492*t1901;
  t2762 = -1.*t266*t914*t1977;
  t2786 = t2725 + t2762;
  t3012 = Cos(var1[4]);
  t2127 = -1.*t1679*t2111;
  t2838 = t2265*t2786;
  t2889 = t2127 + t2838;
  t1197 = Sin(var1[4]);
  t3146 = t2265*t2111;
  t3177 = t1679*t2786;
  t3270 = t3146 + t3177;
  t3548 = Cos(var1[5]);
  t2929 = t1197*t2889;
  t3277 = t3012*t3270;
  t3329 = t2929 + t3277;
  t1114 = Sin(var1[5]);
  t3587 = t3012*t2889;
  t3638 = -1.*t1197*t3270;
  t3662 = t3587 + t3638;
  t3970 = Cos(var1[6]);
  t3356 = -1.*t1114*t3329;
  t3841 = t3548*t3662;
  t3850 = t3356 + t3841;
  t1005 = Sin(var1[6]);
  t3982 = t3548*t3329;
  t4076 = t1114*t3662;
  t4101 = t3982 + t4076;
  t4593 = t492*t1901*t914;
  t4597 = -1.*t266*t1977;
  t4608 = t4593 + t4597;
  t4634 = -1.*t1901*t266;
  t4667 = -1.*t492*t914*t1977;
  t4998 = t4634 + t4667;
  t4611 = -1.*t1679*t4608;
  t5000 = t2265*t4998;
  t5062 = t4611 + t5000;
  t5077 = t2265*t4608;
  t5199 = t1679*t4998;
  t5275 = t5077 + t5199;
  t5072 = t1197*t5062;
  t5293 = t3012*t5275;
  t5351 = t5072 + t5293;
  t5404 = t3012*t5062;
  t5429 = -1.*t1197*t5275;
  t5479 = t5404 + t5429;
  t5399 = -1.*t1114*t5351;
  t5520 = t3548*t5479;
  t5522 = t5399 + t5520;
  t5557 = t3548*t5351;
  t5610 = t1114*t5479;
  t5632 = t5557 + t5610;
  t5774 = -1.*t3*t1901*t1679;
  t5822 = -1.*t2265*t3*t1977;
  t5864 = t5774 + t5822;
  t5868 = t2265*t3*t1901;
  t5869 = -1.*t3*t1679*t1977;
  t5891 = t5868 + t5869;
  t5865 = t1197*t5864;
  t5913 = t3012*t5891;
  t5954 = t5865 + t5913;
  t5979 = t3012*t5864;
  t5999 = -1.*t1197*t5891;
  t6052 = t5979 + t5999;
  t5978 = -1.*t1114*t5954;
  t6061 = t3548*t6052;
  t6068 = t5978 + t6061;
  t6103 = t3548*t5954;
  t6104 = t1114*t6052;
  t6111 = t6103 + t6104;
  t3921 = t1005*t3850;
  t4164 = t3970*t4101;
  t4171 = t3921 + t4164;
  t4325 = t3970*t3850;
  t4327 = -1.*t1005*t4101;
  t4408 = t4325 + t4327;
  t5543 = t1005*t5522;
  t5654 = t3970*t5632;
  t5655 = t5543 + t5654;
  t5683 = t3970*t5522;
  t5698 = -1.*t1005*t5632;
  t5739 = t5683 + t5698;
  t6082 = t1005*t6068;
  t6141 = t3970*t6111;
  t6153 = t6082 + t6141;
  t6161 = t3970*t6068;
  t6162 = -1.*t1005*t6111;
  t6167 = t6161 + t6162;
  t6577 = -1.*t1901;
  t6587 = 1. + t6577;
  t6734 = -1.*t2265;
  t6760 = 1. + t6734;
  t6846 = -1.*t3012;
  t6847 = 1. + t6846;
  t6896 = -1.*t3548;
  t6900 = 1. + t6896;
  t6961 = -1.*t3970;
  t6975 = 1. + t6961;
  t6521 = -1.*t3;
  t6541 = 1. + t6521;
  t6543 = 0.135*t6541;
  t6564 = 0.049*t914;
  t6569 = 0. + t6543 + t6564;
  t6592 = -0.049*t6587;
  t6597 = -0.09*t1977;
  t6630 = 0. + t6592 + t6597;
  t6681 = -0.09*t6587;
  t6711 = 0.049*t1977;
  t6712 = 0. + t6681 + t6711;
  t6770 = -0.049*t6760;
  t6787 = -0.21*t1679;
  t6792 = 0. + t6770 + t6787;
  t6809 = -0.21*t6760;
  t6816 = 0.049*t1679;
  t6830 = 0. + t6809 + t6816;
  t6857 = -0.2707*t6847;
  t6859 = 0.0016*t1197;
  t6865 = 0. + t6857 + t6859;
  t6875 = -0.0016*t6847;
  t6883 = -0.2707*t1197;
  t6886 = 0. + t6875 + t6883;
  t6901 = 0.0184*t6900;
  t6904 = -0.7055*t1114;
  t6915 = 0. + t6901 + t6904;
  t6933 = -0.7055*t6900;
  t6936 = -0.0184*t1114;
  t6940 = 0. + t6933 + t6936;
  t6976 = -1.1135*t6975;
  t6983 = 0.0216*t1005;
  t6985 = 0. + t6976 + t6983;
  t7004 = -0.0216*t6975;
  t7012 = -1.1135*t1005;
  t7016 = 0. + t7004 + t7012;
  p_output1[0]=0. + t266*t3;
  p_output1[1]=0. - 1.*t3*t492;
  p_output1[2]=0. + t914;
  p_output1[3]=0.;
  p_output1[4]=0. - 0.642788*t4171 - 0.766044*t4408;
  p_output1[5]=0. + 0.642788*t5655 + 0.766044*t5739;
  p_output1[6]=0. + 0.642788*t6153 + 0.766044*t6167;
  p_output1[7]=0.;
  p_output1[8]=0. + 0.766044*t4171 - 0.642788*t4408;
  p_output1[9]=0. - 0.766044*t5655 + 0.642788*t5739;
  p_output1[10]=0. - 0.766044*t6153 + 0.642788*t6167;
  p_output1[11]=0.;
  p_output1[12]=0.24925 + 0.135*t266 - 0.1305*t266*t3 - 0.0306*t4171 + 1.1312*t4408 - 1.*t266*t6569 - 1.*t492*t6712 - 1.*t2111*t6792 - 1.*t2786*t6830 - 1.*t2889*t6865 - 1.*t3270*t6886 - 1.*t3329*t6915 - 1.*t3662*t6940 - 1.*t3850*t6985 - 1.*t4101*t7016 - 1.*t266*t6630*t914;
  p_output1[13]=-0.0302 + 0.135*(1. - 1.*t492) + 0.1305*t3*t492 + 0.0306*t5655 - 1.1312*t5739 + t492*t6569 - 1.*t266*t6712 + t4608*t6792 + t4998*t6830 + t5062*t6865 + t5275*t6886 + t5351*t6915 + t5479*t6940 + t5522*t6985 + t5632*t7016 + t492*t6630*t914;
  p_output1[14]=-0.047 + 0.0306*t6153 - 1.1312*t6167 - 0.049*t6541 + t3*t6630 + t1901*t3*t6792 - 1.*t1977*t3*t6830 + t5864*t6865 + t5891*t6886 + t5954*t6915 + t6052*t6940 + t6068*t6985 + t6111*t7016 + 0.004500000000000004*t914;
  p_output1[15]=1.;
}



void H_MultisenseIMU_to_LeftToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
