/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:33:36 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "J_hip_flexion_right_src.h"

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
  double t1656;
  double t2451;
  double t2290;
  double t2327;
  double t2602;
  double t50;
  double t70;
  double t142;
  double t596;
  double t2002;
  double t2363;
  double t2695;
  double t2723;
  double t2874;
  double t3348;
  double t3360;
  double t3484;
  double t27;
  double t4467;
  double t4719;
  double t5122;
  double t5289;
  double t5424;
  double t5427;
  double t5506;
  double t5764;
  double t5781;
  double t5802;
  double t6279;
  double t6291;
  double t6439;
  double t310;
  double t1032;
  double t1129;
  double t2042;
  double t2053;
  double t3039;
  double t3113;
  double t3174;
  double t3270;
  double t3935;
  double t3940;
  double t4058;
  double t6897;
  double t6913;
  double t6922;
  double t6928;
  double t6937;
  double t7010;
  double t5434;
  double t5559;
  double t5578;
  double t7049;
  double t7078;
  double t7123;
  double t6165;
  double t6178;
  double t6218;
  double t7160;
  double t7172;
  double t7173;
  double t7347;
  double t7391;
  double t7397;
  double t7679;
  double t7698;
  double t7728;
  double t7773;
  double t7793;
  double t7815;
  double t7925;
  double t7928;
  double t7939;
  double t8091;
  double t8092;
  double t8095;
  double t8133;
  double t8135;
  double t8163;
  double t8184;
  double t8191;
  double t8195;
  double t8256;
  double t8264;
  double t8270;
  double t8285;
  double t8308;
  double t8320;
  double t8383;
  double t8388;
  double t8394;
  double t8522;
  double t8524;
  double t8530;
  double t8563;
  double t8564;
  double t8535;
  double t8543;
  double t8550;
  double t8657;
  double t8659;
  double t8660;
  double t8724;
  double t8732;
  double t8733;
  double t8688;
  double t8691;
  double t8814;
  double t8904;
  double t8905;
  double t8798;
  double t8799;
  double t8800;
  double t9022;
  double t9033;
  double t9108;
  double t9109;
  double t9123;
  double t9130;
  double t9135;
  double t9125;
  double t9128;
  double t8810;
  double t8918;
  double t8923;
  double t8936;
  double t8946;
  double t8949;
  double t8954;
  double t8960;
  double t8985;
  double t8994;
  double t9004;
  double t9010;
  double t7240;
  double t7247;
  double t7252;
  double t9193;
  double t9201;
  double t9203;
  double t9210;
  double t9215;
  double t9260;
  double t9267;
  double t9271;
  double t9278;
  double t9281;
  double t9282;
  double t9336;
  double t9338;
  double t9343;
  double t9358;
  double t9362;
  double t9365;
  double t7469;
  double t7494;
  double t7529;
  double t9391;
  double t9396;
  double t9409;
  double t9410;
  double t9412;
  double t9452;
  double t9466;
  double t9467;
  double t9529;
  double t9533;
  double t9547;
  t1656 = Sin(var1[3]);
  t2451 = Cos(var1[3]);
  t2290 = Cos(var1[5]);
  t2327 = Sin(var1[4]);
  t2602 = Sin(var1[5]);
  t50 = Cos(var1[14]);
  t70 = -1.*t50;
  t142 = 1. + t70;
  t596 = Sin(var1[14]);
  t2002 = Sin(var1[13]);
  t2363 = -1.*t2290*t1656*t2327;
  t2695 = t2451*t2602;
  t2723 = t2363 + t2695;
  t2874 = Cos(var1[13]);
  t3348 = -1.*t2451*t2290;
  t3360 = -1.*t1656*t2327*t2602;
  t3484 = t3348 + t3360;
  t27 = Cos(var1[4]);
  t4467 = t2002*t2723;
  t4719 = t2874*t3484;
  t5122 = t4467 + t4719;
  t5289 = Cos(var1[15]);
  t5424 = -1.*t5289;
  t5427 = 1. + t5424;
  t5506 = Sin(var1[15]);
  t5764 = t2874*t2723;
  t5781 = -1.*t2002*t3484;
  t5802 = t5764 + t5781;
  t6279 = -1.*t50*t27*t1656;
  t6291 = t596*t5122;
  t6439 = t6279 + t6291;
  t310 = -0.049*t142;
  t1032 = -0.135*t596;
  t1129 = 0. + t310 + t1032;
  t2042 = 0.135*t2002;
  t2053 = 0. + t2042;
  t3039 = -1.*t2874;
  t3113 = 1. + t3039;
  t3174 = -0.135*t3113;
  t3270 = 0. + t3174;
  t3935 = -0.135*t142;
  t3940 = 0.049*t596;
  t4058 = 0. + t3935 + t3940;
  t6897 = t2451*t2290*t2327;
  t6913 = t1656*t2602;
  t6922 = t6897 + t6913;
  t6928 = -1.*t2290*t1656;
  t6937 = t2451*t2327*t2602;
  t7010 = t6928 + t6937;
  t5434 = -0.09*t5427;
  t5559 = 0.049*t5506;
  t5578 = 0. + t5434 + t5559;
  t7049 = t2002*t6922;
  t7078 = t2874*t7010;
  t7123 = t7049 + t7078;
  t6165 = -0.049*t5427;
  t6178 = -0.09*t5506;
  t6218 = 0. + t6165 + t6178;
  t7160 = t2874*t6922;
  t7172 = -1.*t2002*t7010;
  t7173 = t7160 + t7172;
  t7347 = t50*t2451*t27;
  t7391 = t596*t7123;
  t7397 = t7347 + t7391;
  t7679 = t2451*t27*t2290*t2002;
  t7698 = t2874*t2451*t27*t2602;
  t7728 = t7679 + t7698;
  t7773 = t2874*t2451*t27*t2290;
  t7793 = -1.*t2451*t27*t2002*t2602;
  t7815 = t7773 + t7793;
  t7925 = -1.*t50*t2451*t2327;
  t7928 = t596*t7728;
  t7939 = t7925 + t7928;
  t8091 = t27*t2290*t2002*t1656;
  t8092 = t2874*t27*t1656*t2602;
  t8095 = t8091 + t8092;
  t8133 = t2874*t27*t2290*t1656;
  t8135 = -1.*t27*t2002*t1656*t2602;
  t8163 = t8133 + t8135;
  t8184 = -1.*t50*t1656*t2327;
  t8191 = t596*t8095;
  t8195 = t8184 + t8191;
  t8256 = -1.*t2290*t2002*t2327;
  t8264 = -1.*t2874*t2327*t2602;
  t8270 = t8256 + t8264;
  t8285 = -1.*t2874*t2290*t2327;
  t8308 = t2002*t2327*t2602;
  t8320 = t8285 + t8308;
  t8383 = -1.*t50*t27;
  t8388 = t596*t8270;
  t8394 = t8383 + t8388;
  t8522 = t2290*t1656;
  t8524 = -1.*t2451*t2327*t2602;
  t8530 = t8522 + t8524;
  t8563 = t2002*t8530;
  t8564 = t7160 + t8563;
  t8535 = -1.*t2002*t6922;
  t8543 = t2874*t8530;
  t8550 = t8535 + t8543;
  t8657 = t2290*t1656*t2327;
  t8659 = -1.*t2451*t2602;
  t8660 = t8657 + t8659;
  t8724 = t2874*t8660;
  t8732 = t2002*t3484;
  t8733 = t8724 + t8732;
  t8688 = -1.*t2002*t8660;
  t8691 = t8688 + t4719;
  t8814 = t2874*t27*t2290;
  t8904 = -1.*t27*t2002*t2602;
  t8905 = t8814 + t8904;
  t8798 = -1.*t27*t2290*t2002;
  t8799 = -1.*t2874*t27*t2602;
  t8800 = t8798 + t8799;
  t9022 = -1.*t2874*t7010;
  t9033 = t8535 + t9022;
  t9108 = t2451*t2290;
  t9109 = t1656*t2327*t2602;
  t9123 = t9108 + t9109;
  t9130 = -1.*t2002*t9123;
  t9135 = t8724 + t9130;
  t9125 = -1.*t2874*t9123;
  t9128 = t8688 + t9125;
  t8810 = t5578*t8800;
  t8918 = -0.135*t50*t8905;
  t8923 = t4058*t8905;
  t8936 = t596*t6218*t8905;
  t8946 = t5506*t8800;
  t8949 = t5289*t596*t8905;
  t8954 = t8946 + t8949;
  t8960 = -0.049*t8954;
  t8985 = t5289*t8800;
  t8994 = -1.*t596*t5506*t8905;
  t9004 = t8985 + t8994;
  t9010 = -0.09*t9004;
  t7240 = -1.*t2451*t27*t596;
  t7247 = t50*t7123;
  t7252 = t7240 + t7247;
  t9193 = -0.135*t50;
  t9201 = -0.049*t596;
  t9203 = t9193 + t9201;
  t9210 = 0.049*t50;
  t9215 = t9210 + t1032;
  t9260 = t2002*t8660;
  t9267 = t2874*t9123;
  t9271 = t9260 + t9267;
  t9278 = -1.*t27*t596*t1656;
  t9281 = t50*t9271;
  t9282 = t9278 + t9281;
  t9336 = t27*t2290*t2002;
  t9338 = t2874*t27*t2602;
  t9343 = t9336 + t9338;
  t9358 = t596*t2327;
  t9362 = t50*t9343;
  t9365 = t9358 + t9362;
  t7469 = t5289*t7173;
  t7494 = -1.*t5506*t7397;
  t7529 = t7469 + t7494;
  t9391 = 0.049*t5289;
  t9396 = t9391 + t6178;
  t9409 = -0.09*t5289;
  t9410 = -0.049*t5506;
  t9412 = t9409 + t9410;
  t9452 = t50*t27*t1656;
  t9466 = t596*t9271;
  t9467 = t9452 + t9466;
  t9529 = -1.*t50*t2327;
  t9533 = t596*t9343;
  t9547 = t9529 + t9533;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=-1.*t1129*t1656*t27 + t2053*t2723 + t3270*t3484 + t4058*t5122 + t5578*t5802 - 0.135*(t50*t5122 + t1656*t27*t596) + t6218*t6439 - 0.049*(t5506*t5802 + t5289*t6439) - 0.09*(t5289*t5802 - 1.*t5506*t6439);
  p_output1[10]=t1129*t2451*t27 + t2053*t6922 + t3270*t7010 + t4058*t7123 + t5578*t7173 - 0.135*t7252 + t6218*t7397 - 0.049*(t5506*t7173 + t5289*t7397) - 0.09*t7529;
  p_output1[11]=0;
  p_output1[12]=-1.*t1129*t2327*t2451 + t2053*t2290*t2451*t27 + t2451*t2602*t27*t3270 + t4058*t7728 - 0.135*(t2327*t2451*t596 + t50*t7728) + t5578*t7815 + t6218*t7939 - 0.049*(t5506*t7815 + t5289*t7939) - 0.09*(t5289*t7815 - 1.*t5506*t7939);
  p_output1[13]=-1.*t1129*t1656*t2327 + t1656*t2053*t2290*t27 + t1656*t2602*t27*t3270 + t4058*t8095 - 0.135*(t1656*t2327*t596 + t50*t8095) + t5578*t8163 + t6218*t8195 - 0.049*(t5506*t8163 + t5289*t8195) - 0.09*(t5289*t8163 - 1.*t5506*t8195);
  p_output1[14]=-1.*t2053*t2290*t2327 - 1.*t1129*t27 - 1.*t2327*t2602*t3270 + t4058*t8270 - 0.135*(t27*t596 + t50*t8270) + t5578*t8320 + t6218*t8394 - 0.049*(t5506*t8320 + t5289*t8394) - 0.09*(t5289*t8320 - 1.*t5506*t8394);
  p_output1[15]=t3270*t6922 + t2053*t8530 + t5578*t8550 + t4058*t8564 - 0.135*t50*t8564 + t596*t6218*t8564 - 0.049*(t5506*t8550 + t5289*t596*t8564) - 0.09*(t5289*t8550 - 1.*t5506*t596*t8564);
  p_output1[16]=t2053*t3484 + t3270*t8660 + t5578*t8691 + t4058*t8733 - 0.135*t50*t8733 + t596*t6218*t8733 - 0.049*(t5506*t8691 + t5289*t596*t8733) - 0.09*(t5289*t8691 - 1.*t5506*t596*t8733);
  p_output1[17]=-1.*t2053*t2602*t27 + t2290*t27*t3270 + t8810 + t8918 + t8923 + t8936 + t8960 + t9010;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
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
  p_output1[39]=0.135*t2874*t6922 - 0.135*t2002*t7010 + t4058*t7173 - 0.135*t50*t7173 + t596*t6218*t7173 + t5578*t9033 - 0.09*(-1.*t5506*t596*t7173 + t5289*t9033) - 0.049*(t5289*t596*t7173 + t5506*t9033);
  p_output1[40]=0.135*t2874*t8660 - 0.135*t2002*t9123 + t5578*t9128 + t4058*t9135 - 0.135*t50*t9135 + t596*t6218*t9135 - 0.049*(t5506*t9128 + t5289*t596*t9135) - 0.09*(t5289*t9128 - 1.*t5506*t596*t9135);
  p_output1[41]=-0.135*t2002*t2602*t27 + 0.135*t2290*t27*t2874 + t8810 + t8918 + t8923 + t8936 + t8960 + t9010;
  p_output1[42]=-0.135*(-1.*t2451*t27*t50 - 1.*t596*t7123) - 0.049*t5289*t7252 + 0.09*t5506*t7252 + t6218*t7252 + t2451*t27*t9203 + t7123*t9215;
  p_output1[43]=t1656*t27*t9203 + t9215*t9271 - 0.135*(t6279 - 1.*t596*t9271) - 0.049*t5289*t9282 + 0.09*t5506*t9282 + t6218*t9282;
  p_output1[44]=-1.*t2327*t9203 + t9215*t9343 - 0.135*(t2327*t50 - 1.*t596*t9343) - 0.049*t5289*t9365 + 0.09*t5506*t9365 + t6218*t9365;
  p_output1[45]=-0.09*(-1.*t5506*t7173 - 1.*t5289*t7397) - 0.049*t7529 + t7173*t9396 + t7397*t9412;
  p_output1[46]=t9135*t9396 + t9412*t9467 - 0.09*(-1.*t5506*t9135 - 1.*t5289*t9467) - 0.049*(t5289*t9135 - 1.*t5506*t9467);
  p_output1[47]=t8905*t9396 + t9412*t9547 - 0.09*(-1.*t5506*t8905 - 1.*t5289*t9547) - 0.049*(t5289*t8905 - 1.*t5506*t9547);
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
}



void J_hip_flexion_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
