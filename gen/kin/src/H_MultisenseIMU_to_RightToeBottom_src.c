/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:17:32 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_MultisenseIMU_to_RightToeBottom_src.h"

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
  double t416;
  double t495;
  double t975;
  double t749;
  double t1399;
  double t1424;
  double t1360;
  double t1551;
  double t1679;
  double t1714;
  double t1419;
  double t1486;
  double t1504;
  double t1793;
  double t1310;
  double t2531;
  double t2543;
  double t2644;
  double t1519;
  double t2205;
  double t2306;
  double t2706;
  double t1298;
  double t2865;
  double t2891;
  double t2935;
  double t2365;
  double t2729;
  double t2742;
  double t3089;
  double t1120;
  double t3548;
  double t3590;
  double t3688;
  double t2760;
  double t3100;
  double t3117;
  double t3733;
  double t4241;
  double t4336;
  double t4346;
  double t4168;
  double t4216;
  double t4220;
  double t4729;
  double t4772;
  double t4826;
  double t4229;
  double t4522;
  double t4679;
  double t5339;
  double t5410;
  double t5468;
  double t4684;
  double t4964;
  double t5216;
  double t5557;
  double t5644;
  double t5662;
  double t5237;
  double t5476;
  double t5478;
  double t5967;
  double t5971;
  double t6007;
  double t5945;
  double t5956;
  double t5959;
  double t6031;
  double t6046;
  double t6061;
  double t5961;
  double t6015;
  double t6019;
  double t6078;
  double t6080;
  double t6082;
  double t6027;
  double t6071;
  double t6073;
  double t3507;
  double t3849;
  double t3874;
  double t3997;
  double t4022;
  double t4029;
  double t5520;
  double t5693;
  double t5848;
  double t5856;
  double t5857;
  double t5891;
  double t6077;
  double t6092;
  double t6094;
  double t6107;
  double t6111;
  double t6119;
  double t6221;
  double t6226;
  double t6255;
  double t6261;
  double t6393;
  double t6423;
  double t6682;
  double t6713;
  double t7082;
  double t7100;
  double t6184;
  double t6189;
  double t6197;
  double t6202;
  double t6212;
  double t6235;
  double t6236;
  double t6243;
  double t6246;
  double t6249;
  double t6251;
  double t6263;
  double t6266;
  double t6267;
  double t6298;
  double t6303;
  double t6308;
  double t6436;
  double t6493;
  double t6568;
  double t6575;
  double t6585;
  double t6626;
  double t6758;
  double t6761;
  double t6776;
  double t6843;
  double t6903;
  double t7027;
  double t7125;
  double t7227;
  double t7228;
  double t7257;
  double t7259;
  double t7315;
  t416 = Cos(var1[8]);
  t495 = Sin(var1[7]);
  t975 = Sin(var1[8]);
  t749 = Cos(var1[7]);
  t1399 = Cos(var1[9]);
  t1424 = Sin(var1[9]);
  t1360 = Cos(var1[10]);
  t1551 = t749*t1399;
  t1679 = -1.*t495*t975*t1424;
  t1714 = t1551 + t1679;
  t1419 = t1399*t495*t975;
  t1486 = t749*t1424;
  t1504 = t1419 + t1486;
  t1793 = Sin(var1[10]);
  t1310 = Cos(var1[11]);
  t2531 = t1360*t1714;
  t2543 = -1.*t1504*t1793;
  t2644 = t2531 + t2543;
  t1519 = t1360*t1504;
  t2205 = t1714*t1793;
  t2306 = t1519 + t2205;
  t2706 = Sin(var1[11]);
  t1298 = Cos(var1[12]);
  t2865 = t1310*t2644;
  t2891 = -1.*t2306*t2706;
  t2935 = t2865 + t2891;
  t2365 = t1310*t2306;
  t2729 = t2644*t2706;
  t2742 = t2365 + t2729;
  t3089 = Sin(var1[12]);
  t1120 = Cos(var1[13]);
  t3548 = t1298*t2935;
  t3590 = -1.*t2742*t3089;
  t3688 = t3548 + t3590;
  t2760 = t1298*t2742;
  t3100 = t2935*t3089;
  t3117 = t2760 + t3100;
  t3733 = Sin(var1[13]);
  t4241 = -1.*t1399*t495;
  t4336 = -1.*t749*t975*t1424;
  t4346 = t4241 + t4336;
  t4168 = t749*t1399*t975;
  t4216 = -1.*t495*t1424;
  t4220 = t4168 + t4216;
  t4729 = t1360*t4346;
  t4772 = -1.*t4220*t1793;
  t4826 = t4729 + t4772;
  t4229 = t1360*t4220;
  t4522 = t4346*t1793;
  t4679 = t4229 + t4522;
  t5339 = t1310*t4826;
  t5410 = -1.*t4679*t2706;
  t5468 = t5339 + t5410;
  t4684 = t1310*t4679;
  t4964 = t4826*t2706;
  t5216 = t4684 + t4964;
  t5557 = t1298*t5468;
  t5644 = -1.*t5216*t3089;
  t5662 = t5557 + t5644;
  t5237 = t1298*t5216;
  t5476 = t5468*t3089;
  t5478 = t5237 + t5476;
  t5967 = -1.*t416*t1360*t1424;
  t5971 = -1.*t416*t1399*t1793;
  t6007 = t5967 + t5971;
  t5945 = t416*t1399*t1360;
  t5956 = -1.*t416*t1424*t1793;
  t5959 = t5945 + t5956;
  t6031 = t1310*t6007;
  t6046 = -1.*t5959*t2706;
  t6061 = t6031 + t6046;
  t5961 = t1310*t5959;
  t6015 = t6007*t2706;
  t6019 = t5961 + t6015;
  t6078 = t1298*t6061;
  t6080 = -1.*t6019*t3089;
  t6082 = t6078 + t6080;
  t6027 = t1298*t6019;
  t6071 = t6061*t3089;
  t6073 = t6027 + t6071;
  t3507 = t1120*t3117;
  t3849 = t3688*t3733;
  t3874 = t3507 + t3849;
  t3997 = t1120*t3688;
  t4022 = -1.*t3117*t3733;
  t4029 = t3997 + t4022;
  t5520 = t1120*t5478;
  t5693 = t5662*t3733;
  t5848 = t5520 + t5693;
  t5856 = t1120*t5662;
  t5857 = -1.*t5478*t3733;
  t5891 = t5856 + t5857;
  t6077 = t1120*t6073;
  t6092 = t6082*t3733;
  t6094 = t6077 + t6092;
  t6107 = t1120*t6082;
  t6111 = -1.*t6073*t3733;
  t6119 = t6107 + t6111;
  t6221 = -1.*t1399;
  t6226 = 1. + t6221;
  t6255 = -1.*t1360;
  t6261 = 1. + t6255;
  t6393 = -1.*t1310;
  t6423 = 1. + t6393;
  t6682 = -1.*t1298;
  t6713 = 1. + t6682;
  t7082 = -1.*t1120;
  t7100 = 1. + t7082;
  t6184 = -1.*t416;
  t6189 = 1. + t6184;
  t6197 = -0.135*t6189;
  t6202 = 0.049*t975;
  t6212 = 0. + t6197 + t6202;
  t6235 = -0.049*t6226;
  t6236 = -0.09*t1424;
  t6243 = 0. + t6235 + t6236;
  t6246 = -0.09*t6226;
  t6249 = 0.049*t1424;
  t6251 = 0. + t6246 + t6249;
  t6263 = -0.049*t6261;
  t6266 = -0.21*t1793;
  t6267 = 0. + t6263 + t6266;
  t6298 = -0.21*t6261;
  t6303 = 0.049*t1793;
  t6308 = 0. + t6298 + t6303;
  t6436 = -0.0016*t6423;
  t6493 = -0.2707*t2706;
  t6568 = 0. + t6436 + t6493;
  t6575 = -0.2707*t6423;
  t6585 = 0.0016*t2706;
  t6626 = 0. + t6575 + t6585;
  t6758 = 0.0184*t6713;
  t6761 = -0.7055*t3089;
  t6776 = 0. + t6758 + t6761;
  t6843 = -0.7055*t6713;
  t6903 = -0.0184*t3089;
  t7027 = 0. + t6843 + t6903;
  t7125 = -0.0216*t7100;
  t7227 = -1.1135*t3733;
  t7228 = 0. + t7125 + t7227;
  t7257 = -1.1135*t7100;
  t7259 = 0.0216*t3733;
  t7315 = 0. + t7257 + t7259;
  p_output1[0]=0. + t416*t495;
  p_output1[1]=0. - 1.*t416*t749;
  p_output1[2]=0. + t975;
  p_output1[3]=0.;
  p_output1[4]=0. - 0.642788*t3874 - 0.766044*t4029;
  p_output1[5]=0. + 0.642788*t5848 + 0.766044*t5891;
  p_output1[6]=0. + 0.642788*t6094 + 0.766044*t6119;
  p_output1[7]=0.;
  p_output1[8]=0. + 0.766044*t3874 - 0.642788*t4029;
  p_output1[9]=0. - 0.766044*t5848 + 0.642788*t5891;
  p_output1[10]=0. - 0.766044*t6094 + 0.642788*t6119;
  p_output1[11]=0.;
  p_output1[12]=0.24925 - 0.0306*t3874 + 1.1312*t4029 - 0.135*t495 + 0.1305*t416*t495 - 1.*t495*t6212 - 1.*t1504*t6267 - 1.*t1714*t6308 - 1.*t2306*t6568 - 1.*t2644*t6626 - 1.*t2742*t6776 - 1.*t2935*t7027 - 1.*t3117*t7228 - 1.*t3688*t7315 - 1.*t6251*t749 - 1.*t495*t6243*t975;
  p_output1[13]=-0.0302 + 0.0306*t5848 - 1.1312*t5891 - 1.*t495*t6251 + t4220*t6267 + t4346*t6308 + t4679*t6568 + t4826*t6626 + t5216*t6776 + t5468*t7027 + t5478*t7228 + t5662*t7315 - 0.135*(1. - 1.*t749) - 0.1305*t416*t749 + t6212*t749 + t6243*t749*t975;
  p_output1[14]=-0.047 + 0.0306*t6094 - 1.1312*t6119 - 0.049*t6189 + t416*t6243 + t1399*t416*t6267 - 1.*t1424*t416*t6308 + t5959*t6568 + t6007*t6626 + t6019*t6776 + t6061*t7027 + t6073*t7228 + t6082*t7315 - 0.004500000000000004*t975;
  p_output1[15]=1.;
}



void H_MultisenseIMU_to_RightToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
