/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:24:35 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jv_VectorNav_to_LeftToeBottom_src.h"

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
  double t528;
  double t912;
  double t1241;
  double t771;
  double t1004;
  double t1041;
  double t412;
  double t1294;
  double t1498;
  double t1550;
  double t1957;
  double t1135;
  double t1556;
  double t1765;
  double t367;
  double t1978;
  double t2167;
  double t2193;
  double t2457;
  double t1790;
  double t2277;
  double t2322;
  double t290;
  double t2514;
  double t2843;
  double t2898;
  double t119;
  double t3533;
  double t3557;
  double t3577;
  double t3513;
  double t3651;
  double t3805;
  double t3868;
  double t3919;
  double t3833;
  double t3984;
  double t4302;
  double t4457;
  double t4462;
  double t4540;
  double t3331;
  double t5818;
  double t5831;
  double t5657;
  double t5753;
  double t5851;
  double t5864;
  double t5872;
  double t5910;
  double t5932;
  double t5940;
  double t5998;
  double t6008;
  double t5451;
  double t5521;
  double t5778;
  double t5816;
  double t5927;
  double t6070;
  double t6118;
  double t6153;
  double t6155;
  double t6219;
  double t6238;
  double t6259;
  double t5211;
  double t5230;
  double t5533;
  double t5621;
  double t6122;
  double t6309;
  double t6324;
  double t6416;
  double t6424;
  double t6464;
  double t6494;
  double t6496;
  double t69;
  double t4787;
  double t4831;
  double t4869;
  double t4374;
  double t4697;
  double t4769;
  double t5017;
  double t5124;
  double t6615;
  double t6626;
  double t6654;
  double t6656;
  double t6687;
  double t5301;
  double t5327;
  double t6372;
  double t6501;
  double t6519;
  double t6848;
  double t6741;
  double t6756;
  double t6758;
  double t6828;
  double t6837;
  double t6916;
  double t6920;
  double t6923;
  double t6932;
  double t6942;
  double t6809;
  double t6824;
  double t5144;
  double t6528;
  double t6614;
  double t6715;
  double t6716;
  double t3235;
  double t3261;
  double t3304;
  double t2430;
  double t3127;
  double t3148;
  double t6841;
  double t6873;
  double t6986;
  double t6991;
  double t3183;
  double t3343;
  double t3355;
  double t3466;
  double t3476;
  double t7071;
  double t7075;
  double t7091;
  double t7094;
  double t7153;
  double t7176;
  double t7186;
  double t7187;
  double t7281;
  double t4778;
  double t4952;
  double t4980;
  double t7031;
  double t7033;
  double t7287;
  double t7323;
  double t7197;
  double t7208;
  double t6728;
  double t7188;
  t528 = Cos(var1[6]);
  t912 = Sin(var1[6]);
  t1241 = Cos(var1[5]);
  t771 = 0.642788*t528;
  t1004 = -0.766044*t912;
  t1041 = t771 + t1004;
  t412 = Sin(var1[5]);
  t1294 = 0.766044*t528;
  t1498 = 0.642788*t912;
  t1550 = t1294 + t1498;
  t1957 = Cos(var1[4]);
  t1135 = t412*t1041;
  t1556 = t1241*t1550;
  t1765 = 0. + t1135 + t1556;
  t367 = Sin(var1[4]);
  t1978 = t1241*t1041;
  t2167 = -1.*t412*t1550;
  t2193 = 0. + t1978 + t2167;
  t2457 = Sin(var1[3]);
  t1790 = -1.*t367*t1765;
  t2277 = t1957*t2193;
  t2322 = 0. + t1790 + t2277;
  t290 = Cos(var1[3]);
  t2514 = t1957*t1765;
  t2843 = t367*t2193;
  t2898 = 0. + t2514 + t2843;
  t119 = Cos(var1[2]);
  t3533 = -0.766044*t528;
  t3557 = -0.642788*t912;
  t3577 = t3533 + t3557;
  t3513 = -1.*t412*t1041;
  t3651 = t1241*t3577;
  t3805 = 0. + t3513 + t3651;
  t3868 = t412*t3577;
  t3919 = 0. + t1978 + t3868;
  t3833 = t367*t3805;
  t3984 = t1957*t3919;
  t4302 = 0. + t3833 + t3984;
  t4457 = t1957*t3805;
  t4462 = -1.*t367*t3919;
  t4540 = 0. + t4457 + t4462;
  t3331 = Sin(var1[2]);
  t5818 = -1.*t528;
  t5831 = 1. + t5818;
  t5657 = -1.*t1241;
  t5753 = 1. + t5657;
  t5851 = -0.0216*t5831;
  t5864 = 0.0306*t528;
  t5872 = 0.01770000000000005*t912;
  t5910 = 0. + t5851 + t5864 + t5872;
  t5932 = -1.1135*t5831;
  t5940 = -1.1312*t528;
  t5998 = 0.052199999999999996*t912;
  t6008 = 0. + t5932 + t5940 + t5998;
  t5451 = -1.*t1957;
  t5521 = 1. + t5451;
  t5778 = -0.7055*t5753;
  t5816 = -0.0184*t412;
  t5927 = t412*t5910;
  t6070 = t1241*t6008;
  t6118 = 0. + t5778 + t5816 + t5927 + t6070;
  t6153 = 0.0184*t5753;
  t6155 = -0.7055*t412;
  t6219 = t1241*t5910;
  t6238 = -1.*t412*t6008;
  t6259 = 0. + t6153 + t6155 + t6219 + t6238;
  t5211 = -1.*t290;
  t5230 = 1. + t5211;
  t5533 = -0.0016*t5521;
  t5621 = -0.2707*t367;
  t6122 = -1.*t367*t6118;
  t6309 = t1957*t6259;
  t6324 = 0. + t5533 + t5621 + t6122 + t6309;
  t6416 = -0.2707*t5521;
  t6424 = 0.0016*t367;
  t6464 = t1957*t6118;
  t6494 = t367*t6259;
  t6496 = 0. + t6416 + t6424 + t6464 + t6494;
  t69 = Cos(var1[1]);
  t4787 = -1.*t2457*t4302;
  t4831 = t290*t4540;
  t4869 = 0. + t4787 + t4831;
  t4374 = t290*t4302;
  t4697 = t2457*t4540;
  t4769 = 0. + t4374 + t4697;
  t5017 = -1.*t119;
  t5124 = 1. + t5017;
  t6615 = -0.049*t5230;
  t6626 = -0.21*t2457;
  t6654 = t290*t6324;
  t6656 = -1.*t2457*t6496;
  t6687 = 0. + t6615 + t6626 + t6654 + t6656;
  t5301 = -0.21*t5230;
  t5327 = 0.049*t2457;
  t6372 = t2457*t6324;
  t6501 = t290*t6496;
  t6519 = 0. + t5301 + t5327 + t6372 + t6501;
  t6848 = Sin(var1[1]);
  t6741 = t119*t4869;
  t6756 = -1.*t4769*t3331;
  t6758 = 0. + t6741 + t6756;
  t6828 = -1.*t69;
  t6837 = 1. + t6828;
  t6916 = -0.049*t5124;
  t6920 = t119*t6687;
  t6923 = -0.09*t3331;
  t6932 = -1.*t6519*t3331;
  t6942 = 0. + t6916 + t6920 + t6923 + t6932;
  t6809 = t69*t6758;
  t6824 = 0. + t6809;
  t5144 = -0.09*t5124;
  t6528 = t119*t6519;
  t6614 = 0.049*t3331;
  t6715 = t6687*t3331;
  t6716 = 0. + t5144 + t6528 + t6614 + t6715;
  t3235 = t2457*t2322;
  t3261 = t290*t2898;
  t3304 = 0. + t3235 + t3261;
  t2430 = t290*t2322;
  t3127 = -1.*t2457*t2898;
  t3148 = 0. + t2430 + t3127;
  t6841 = -0.049*t6837;
  t6873 = 0.004500000000000004*t6848;
  t6986 = t69*t6942;
  t6991 = 0. + t6841 + t6873 + t6986;
  t3183 = t119*t3148;
  t3343 = -1.*t3304*t3331;
  t3355 = 0. + t3183 + t3343;
  t3466 = t69*t3355;
  t3476 = 0. + t3466;
  t7071 = 0.135*t6837;
  t7075 = 0.1305*t69;
  t7091 = 0.049*t6848;
  t7094 = t6848*t6942;
  t7153 = 0. + t7071 + t7075 + t7091 + t7094;
  t7176 = t119*t3304;
  t7186 = t3148*t3331;
  t7187 = 0. + t7176 + t7186;
  t7281 = 0. + t6848;
  t4778 = t119*t4769;
  t4952 = t4869*t3331;
  t4980 = 0. + t4778 + t4952;
  t7031 = t6848*t6758;
  t7033 = 0. + t7031;
  t7287 = -1.*t69;
  t7323 = 0. + t7287;
  t7197 = t6848*t3355;
  t7208 = 0. + t7197;
  t6728 = t4980*t6716;
  t7188 = -1.*t6716*t7187;
  p_output1[0]=0. + t3476*(t6728 + t6824*t6991 + t7033*t7153) + t6824*(-1.*t3476*t6991 + t7188 - 1.*t7153*t7208);
  p_output1[1]=-0.135*t7187 + (-1.*t4980*t6716 - 1.*t6824*t6991 - 1.*t7033*t7153)*t7281 + t6824*(0. + t6991*t7281 + t7153*t7323);
  p_output1[2]=-0.135*t4980 + (t3476*t6991 + t6716*t7187 + t7153*t7208)*t7281 + t3476*(0. - 1.*t6991*t7281 - 1.*t7153*t7323);
  p_output1[3]=-0.049 + (0. + t6728 + t6758*t6942)*t7187 + t4980*(0. - 1.*t3355*t6942 + t7188);
  p_output1[4]=0. + 0.135*t3355 - 0.1305*t4980;
  p_output1[5]=0. + 0.135*t6758 + 0.1305*t7187;
  p_output1[6]=0.;
  p_output1[7]=0. - 0.09*t3148 + 0.049*t3304 - 1.*t4769*t6519 - 1.*t4869*t6687;
  p_output1[8]=0. + 0.049*t4769 - 0.09*t4869 + t3304*t6519 + t3148*t6687;
  p_output1[9]=0.;
  p_output1[10]=0. - 0.21*t2322 + 0.049*t2898 - 1.*t4540*t6324 - 1.*t4302*t6496;
  p_output1[11]=0. + 0.049*t4302 - 0.21*t4540 + t2322*t6324 + t2898*t6496;
  p_output1[12]=0.;
  p_output1[13]=0. + 0.0016*t1765 - 0.2707*t2193 - 1.*t3919*t6118 - 1.*t3805*t6259;
  p_output1[14]=0. - 0.2707*t3805 + 0.0016*t3919 + t1765*t6118 + t2193*t6259;
  p_output1[15]=0.;
  p_output1[16]=0. - 0.7055*t1041 - 0.0184*t1550 - 1.*t3577*t5910 - 1.*t1041*t6008;
  p_output1[17]=0. - 0.0184*t1041 - 0.7055*t3577 + t1041*t5910 + t1550*t6008;
  p_output1[18]=0.;
  p_output1[19]=0.05136484440000011;
  p_output1[20]=0.019994554799999897;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
}



void Jv_VectorNav_to_LeftToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
