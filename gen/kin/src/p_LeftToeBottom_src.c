/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:13:04 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_LeftToeBottom_src.h"

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
  double t2659;
  double t1569;
  double t2666;
  double t2274;
  double t2739;
  double t453;
  double t2321;
  double t2793;
  double t2978;
  double t3114;
  double t3252;
  double t3487;
  double t3616;
  double t4605;
  double t4612;
  double t4856;
  double t4875;
  double t4385;
  double t4593;
  double t4601;
  double t5085;
  double t6074;
  double t7390;
  double t8505;
  double t8694;
  double t5389;
  double t5405;
  double t5774;
  double t8717;
  double t8719;
  double t8721;
  double t8743;
  double t8746;
  double t8750;
  double t8756;
  double t8776;
  double t8777;
  double t8781;
  double t8791;
  double t8794;
  double t8796;
  double t8806;
  double t8809;
  double t8810;
  double t8819;
  double t8825;
  double t8828;
  double t8833;
  double t8853;
  double t8854;
  double t8855;
  double t8861;
  double t8862;
  double t8867;
  double t8874;
  double t8887;
  double t8889;
  double t8894;
  double t8909;
  double t8911;
  double t8914;
  double t8918;
  double t8919;
  double t8921;
  double t8928;
  double t8934;
  double t8935;
  double t8938;
  double t8955;
  double t8956;
  double t8961;
  double t647;
  double t1088;
  double t1469;
  double t1470;
  double t3789;
  double t4378;
  double t9032;
  double t9036;
  double t9040;
  double t9052;
  double t9061;
  double t9066;
  double t4862;
  double t4900;
  double t4930;
  double t5156;
  double t5184;
  double t5188;
  double t9071;
  double t9072;
  double t9075;
  double t8528;
  double t8707;
  double t8710;
  double t8735;
  double t8740;
  double t8741;
  double t8754;
  double t8759;
  double t8769;
  double t9099;
  double t9100;
  double t9104;
  double t9111;
  double t9112;
  double t9116;
  double t8787;
  double t8788;
  double t8790;
  double t8816;
  double t8821;
  double t8824;
  double t9119;
  double t9123;
  double t9124;
  double t9130;
  double t9132;
  double t9133;
  double t8836;
  double t8844;
  double t8852;
  double t8868;
  double t8877;
  double t8884;
  double t9136;
  double t9139;
  double t9140;
  double t9145;
  double t9146;
  double t9148;
  double t8901;
  double t8902;
  double t8905;
  double t8923;
  double t8932;
  double t8933;
  double t9156;
  double t9158;
  double t9159;
  double t9166;
  double t9168;
  double t9172;
  double t8945;
  double t8953;
  double t8954;
  double t9178;
  double t9180;
  double t9184;
  double t9191;
  double t9192;
  double t9197;
  double t9235;
  double t9236;
  double t9237;
  double t9255;
  double t9256;
  double t9261;
  double t9267;
  double t9268;
  double t9270;
  double t9274;
  double t9275;
  double t9277;
  double t9279;
  double t9284;
  double t9285;
  double t9289;
  double t9290;
  double t9291;
  double t9297;
  double t9301;
  double t9306;
  double t9310;
  double t9313;
  double t9314;
  double t9317;
  double t9323;
  double t9324;
  double t9331;
  double t9332;
  double t9334;
  double t9339;
  double t9345;
  double t9346;
  t2659 = Cos(var1[3]);
  t1569 = Cos(var1[5]);
  t2666 = Sin(var1[4]);
  t2274 = Sin(var1[3]);
  t2739 = Sin(var1[5]);
  t453 = Cos(var1[6]);
  t2321 = -1.*t1569*t2274;
  t2793 = t2659*t2666*t2739;
  t2978 = t2321 + t2793;
  t3114 = t2659*t1569*t2666;
  t3252 = t2274*t2739;
  t3487 = t3114 + t3252;
  t3616 = Sin(var1[6]);
  t4605 = Cos(var1[7]);
  t4612 = -1.*t4605;
  t4856 = 1. + t4612;
  t4875 = Sin(var1[7]);
  t4385 = t453*t2978;
  t4593 = t3487*t3616;
  t4601 = t4385 + t4593;
  t5085 = Cos(var1[4]);
  t6074 = Cos(var1[8]);
  t7390 = -1.*t6074;
  t8505 = 1. + t7390;
  t8694 = Sin(var1[8]);
  t5389 = t2659*t5085*t4605;
  t5405 = t4601*t4875;
  t5774 = t5389 + t5405;
  t8717 = t453*t3487;
  t8719 = -1.*t2978*t3616;
  t8721 = t8717 + t8719;
  t8743 = Cos(var1[9]);
  t8746 = -1.*t8743;
  t8750 = 1. + t8746;
  t8756 = Sin(var1[9]);
  t8776 = t6074*t5774;
  t8777 = t8721*t8694;
  t8781 = t8776 + t8777;
  t8791 = t6074*t8721;
  t8794 = -1.*t5774*t8694;
  t8796 = t8791 + t8794;
  t8806 = Cos(var1[10]);
  t8809 = -1.*t8806;
  t8810 = 1. + t8809;
  t8819 = Sin(var1[10]);
  t8825 = -1.*t8756*t8781;
  t8828 = t8743*t8796;
  t8833 = t8825 + t8828;
  t8853 = t8743*t8781;
  t8854 = t8756*t8796;
  t8855 = t8853 + t8854;
  t8861 = Cos(var1[11]);
  t8862 = -1.*t8861;
  t8867 = 1. + t8862;
  t8874 = Sin(var1[11]);
  t8887 = t8819*t8833;
  t8889 = t8806*t8855;
  t8894 = t8887 + t8889;
  t8909 = t8806*t8833;
  t8911 = -1.*t8819*t8855;
  t8914 = t8909 + t8911;
  t8918 = Cos(var1[12]);
  t8919 = -1.*t8918;
  t8921 = 1. + t8919;
  t8928 = Sin(var1[12]);
  t8934 = -1.*t8874*t8894;
  t8935 = t8861*t8914;
  t8938 = t8934 + t8935;
  t8955 = t8861*t8894;
  t8956 = t8874*t8914;
  t8961 = t8955 + t8956;
  t647 = -1.*t453;
  t1088 = 1. + t647;
  t1469 = 0.135*t1088;
  t1470 = 0. + t1469;
  t3789 = -0.135*t3616;
  t4378 = 0. + t3789;
  t9032 = t2659*t1569;
  t9036 = t2274*t2666*t2739;
  t9040 = t9032 + t9036;
  t9052 = t1569*t2274*t2666;
  t9061 = -1.*t2659*t2739;
  t9066 = t9052 + t9061;
  t4862 = 0.135*t4856;
  t4900 = 0.049*t4875;
  t4930 = 0. + t4862 + t4900;
  t5156 = -0.049*t4856;
  t5184 = 0.135*t4875;
  t5188 = 0. + t5156 + t5184;
  t9071 = t453*t9040;
  t9072 = t9066*t3616;
  t9075 = t9071 + t9072;
  t8528 = -0.049*t8505;
  t8707 = -0.09*t8694;
  t8710 = 0. + t8528 + t8707;
  t8735 = -0.09*t8505;
  t8740 = 0.049*t8694;
  t8741 = 0. + t8735 + t8740;
  t8754 = -0.049*t8750;
  t8759 = -0.21*t8756;
  t8769 = 0. + t8754 + t8759;
  t9099 = t5085*t4605*t2274;
  t9100 = t9075*t4875;
  t9104 = t9099 + t9100;
  t9111 = t453*t9066;
  t9112 = -1.*t9040*t3616;
  t9116 = t9111 + t9112;
  t8787 = -0.21*t8750;
  t8788 = 0.049*t8756;
  t8790 = 0. + t8787 + t8788;
  t8816 = -0.2707*t8810;
  t8821 = 0.0016*t8819;
  t8824 = 0. + t8816 + t8821;
  t9119 = t6074*t9104;
  t9123 = t9116*t8694;
  t9124 = t9119 + t9123;
  t9130 = t6074*t9116;
  t9132 = -1.*t9104*t8694;
  t9133 = t9130 + t9132;
  t8836 = -0.0016*t8810;
  t8844 = -0.2707*t8819;
  t8852 = 0. + t8836 + t8844;
  t8868 = 0.0184*t8867;
  t8877 = -0.7055*t8874;
  t8884 = 0. + t8868 + t8877;
  t9136 = -1.*t8756*t9124;
  t9139 = t8743*t9133;
  t9140 = t9136 + t9139;
  t9145 = t8743*t9124;
  t9146 = t8756*t9133;
  t9148 = t9145 + t9146;
  t8901 = -0.7055*t8867;
  t8902 = -0.0184*t8874;
  t8905 = 0. + t8901 + t8902;
  t8923 = -1.1135*t8921;
  t8932 = 0.0216*t8928;
  t8933 = 0. + t8923 + t8932;
  t9156 = t8819*t9140;
  t9158 = t8806*t9148;
  t9159 = t9156 + t9158;
  t9166 = t8806*t9140;
  t9168 = -1.*t8819*t9148;
  t9172 = t9166 + t9168;
  t8945 = -0.0216*t8921;
  t8953 = -1.1135*t8928;
  t8954 = 0. + t8945 + t8953;
  t9178 = -1.*t8874*t9159;
  t9180 = t8861*t9172;
  t9184 = t9178 + t9180;
  t9191 = t8861*t9159;
  t9192 = t8874*t9172;
  t9197 = t9191 + t9192;
  t9235 = t5085*t453*t2739;
  t9236 = t5085*t1569*t3616;
  t9237 = t9235 + t9236;
  t9255 = -1.*t4605*t2666;
  t9256 = t9237*t4875;
  t9261 = t9255 + t9256;
  t9267 = t5085*t1569*t453;
  t9268 = -1.*t5085*t2739*t3616;
  t9270 = t9267 + t9268;
  t9274 = t6074*t9261;
  t9275 = t9270*t8694;
  t9277 = t9274 + t9275;
  t9279 = t6074*t9270;
  t9284 = -1.*t9261*t8694;
  t9285 = t9279 + t9284;
  t9289 = -1.*t8756*t9277;
  t9290 = t8743*t9285;
  t9291 = t9289 + t9290;
  t9297 = t8743*t9277;
  t9301 = t8756*t9285;
  t9306 = t9297 + t9301;
  t9310 = t8819*t9291;
  t9313 = t8806*t9306;
  t9314 = t9310 + t9313;
  t9317 = t8806*t9291;
  t9323 = -1.*t8819*t9306;
  t9324 = t9317 + t9323;
  t9331 = -1.*t8874*t9314;
  t9332 = t8861*t9324;
  t9334 = t9331 + t9332;
  t9339 = t8861*t9314;
  t9345 = t8874*t9324;
  t9346 = t9339 + t9345;
  p_output1[0]=0. + t1470*t2978 + t3487*t4378 + t4601*t4930 + 0.1305*(t4601*t4605 - 1.*t2659*t4875*t5085) + t2659*t5085*t5188 + t5774*t8710 + t8721*t8741 + t8769*t8781 + t8790*t8796 + t8824*t8833 + t8852*t8855 + t8884*t8894 + t8905*t8914 + t8933*t8938 + t8954*t8961 + 0.0306*(t8928*t8938 + t8918*t8961) - 1.1312*(t8918*t8938 - 1.*t8928*t8961) + var1[0];
  p_output1[1]=0. + t2274*t5085*t5188 + t1470*t9040 + t4378*t9066 + t4930*t9075 + 0.1305*(-1.*t2274*t4875*t5085 + t4605*t9075) + t8710*t9104 + t8741*t9116 + t8769*t9124 + t8790*t9133 + t8824*t9140 + t8852*t9148 + t8884*t9159 + t8905*t9172 + t8933*t9184 + t8954*t9197 + 0.0306*(t8928*t9184 + t8918*t9197) - 1.1312*(t8918*t9184 - 1.*t8928*t9197) + var1[1];
  p_output1[2]=0. + t1470*t2739*t5085 + t1569*t4378*t5085 - 1.*t2666*t5188 + t4930*t9237 + 0.1305*(t2666*t4875 + t4605*t9237) + t8710*t9261 + t8741*t9270 + t8769*t9277 + t8790*t9285 + t8824*t9291 + t8852*t9306 + t8884*t9314 + t8905*t9324 + t8933*t9334 + t8954*t9346 + 0.0306*(t8928*t9334 + t8918*t9346) - 1.1312*(t8918*t9334 - 1.*t8928*t9346) + var1[2];
}



void p_LeftToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
