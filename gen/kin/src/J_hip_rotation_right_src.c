/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:33:31 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "J_hip_rotation_right_src.h"

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
  double t1487;
  double t2346;
  double t2225;
  double t2240;
  double t2412;
  double t406;
  double t427;
  double t804;
  double t936;
  double t1650;
  double t2257;
  double t2463;
  double t2596;
  double t2787;
  double t3104;
  double t3269;
  double t3278;
  double t298;
  double t3575;
  double t3624;
  double t3773;
  double t861;
  double t1187;
  double t1202;
  double t1844;
  double t2101;
  double t2854;
  double t2934;
  double t2947;
  double t3053;
  double t3397;
  double t3450;
  double t3464;
  double t4471;
  double t4520;
  double t4546;
  double t4585;
  double t4652;
  double t4653;
  double t4740;
  double t4746;
  double t4792;
  double t5244;
  double t5252;
  double t5298;
  double t6305;
  double t6314;
  double t6362;
  double t7338;
  double t7343;
  double t7352;
  double t7561;
  double t7582;
  double t7583;
  double t4823;
  double t7657;
  double t7679;
  double t7728;
  double t7736;
  double t7747;
  double t7779;
  double t7783;
  double t7784;
  double t7875;
  double t7879;
  double t7883;
  double t7597;
  double t4834;
  double t4895;
  double t7765;
  double t8015;
  double t8027;
  double t8029;
  double t8066;
  double t8071;
  double t7823;
  double t7833;
  double t7847;
  double t7849;
  double t7903;
  double t7908;
  double t7913;
  double t4997;
  double t5042;
  double t5077;
  double t8128;
  double t8135;
  double t8151;
  double t8167;
  double t8169;
  double t8210;
  double t8214;
  double t8222;
  double t4393;
  double t8308;
  double t8320;
  double t8325;
  t1487 = Sin(var1[3]);
  t2346 = Cos(var1[3]);
  t2225 = Cos(var1[5]);
  t2240 = Sin(var1[4]);
  t2412 = Sin(var1[5]);
  t406 = Cos(var1[14]);
  t427 = -1.*t406;
  t804 = 1. + t427;
  t936 = Sin(var1[14]);
  t1650 = Sin(var1[13]);
  t2257 = -1.*t2225*t1487*t2240;
  t2463 = t2346*t2412;
  t2596 = t2257 + t2463;
  t2787 = Cos(var1[13]);
  t3104 = -1.*t2346*t2225;
  t3269 = -1.*t1487*t2240*t2412;
  t3278 = t3104 + t3269;
  t298 = Cos(var1[4]);
  t3575 = t1650*t2596;
  t3624 = t2787*t3278;
  t3773 = t3575 + t3624;
  t861 = -0.049*t804;
  t1187 = -0.135*t936;
  t1202 = 0. + t861 + t1187;
  t1844 = 0.135*t1650;
  t2101 = 0. + t1844;
  t2854 = -1.*t2787;
  t2934 = 1. + t2854;
  t2947 = -0.135*t2934;
  t3053 = 0. + t2947;
  t3397 = -0.135*t804;
  t3450 = 0.049*t936;
  t3464 = 0. + t3397 + t3450;
  t4471 = t2346*t2225*t2240;
  t4520 = t1487*t2412;
  t4546 = t4471 + t4520;
  t4585 = -1.*t2225*t1487;
  t4652 = t2346*t2240*t2412;
  t4653 = t4585 + t4652;
  t4740 = t1650*t4546;
  t4746 = t2787*t4653;
  t4792 = t4740 + t4746;
  t5244 = t2346*t298*t2225*t1650;
  t5252 = t2787*t2346*t298*t2412;
  t5298 = t5244 + t5252;
  t6305 = t298*t2225*t1650*t1487;
  t6314 = t2787*t298*t1487*t2412;
  t6362 = t6305 + t6314;
  t7338 = -1.*t2225*t1650*t2240;
  t7343 = -1.*t2787*t2240*t2412;
  t7352 = t7338 + t7343;
  t7561 = t2225*t1487;
  t7582 = -1.*t2346*t2240*t2412;
  t7583 = t7561 + t7582;
  t4823 = t2787*t4546;
  t7657 = t1650*t7583;
  t7679 = t4823 + t7657;
  t7728 = t2225*t1487*t2240;
  t7736 = -1.*t2346*t2412;
  t7747 = t7728 + t7736;
  t7779 = t2787*t7747;
  t7783 = t1650*t3278;
  t7784 = t7779 + t7783;
  t7875 = t2787*t298*t2225;
  t7879 = -1.*t298*t1650*t2412;
  t7883 = t7875 + t7879;
  t7597 = -1.*t1650*t4546;
  t4834 = -1.*t1650*t4653;
  t4895 = t4823 + t4834;
  t7765 = -1.*t1650*t7747;
  t8015 = t2346*t2225;
  t8027 = t1487*t2240*t2412;
  t8029 = t8015 + t8027;
  t8066 = -1.*t1650*t8029;
  t8071 = t7779 + t8066;
  t7823 = -1.*t298*t2225*t1650;
  t7833 = -1.*t2787*t298*t2412;
  t7847 = t7823 + t7833;
  t7849 = -0.09*t7847;
  t7903 = -0.135*t406*t7883;
  t7908 = t3464*t7883;
  t7913 = -0.049*t936*t7883;
  t4997 = -1.*t2346*t298*t936;
  t5042 = t406*t4792;
  t5077 = t4997 + t5042;
  t8128 = -0.135*t406;
  t8135 = -0.049*t936;
  t8151 = t8128 + t8135;
  t8167 = 0.049*t406;
  t8169 = t8167 + t1187;
  t8210 = t1650*t7747;
  t8214 = t2787*t8029;
  t8222 = t8210 + t8214;
  t4393 = -1.*t406*t298*t1487;
  t8308 = t298*t2225*t1650;
  t8320 = t2787*t298*t2412;
  t8325 = t8308 + t8320;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t2101*t2596 - 1.*t1202*t1487*t298 + t3053*t3278 - 0.09*(t2596*t2787 - 1.*t1650*t3278) + t3464*t3773 - 0.135*(t3773*t406 + t1487*t298*t936) - 0.049*(t4393 + t3773*t936);
  p_output1[10]=t1202*t2346*t298 + t2101*t4546 + t3053*t4653 + t3464*t4792 - 0.09*t4895 - 0.135*t5077 - 0.049*(t2346*t298*t406 + t4792*t936);
  p_output1[11]=0;
  p_output1[12]=-1.*t1202*t2240*t2346 + t2101*t2225*t2346*t298 - 0.09*(-1.*t1650*t2346*t2412*t298 + t2225*t2346*t2787*t298) + t2346*t2412*t298*t3053 + t3464*t5298 - 0.135*(t406*t5298 + t2240*t2346*t936) - 0.049*(-1.*t2240*t2346*t406 + t5298*t936);
  p_output1[13]=-1.*t1202*t1487*t2240 + t1487*t2101*t2225*t298 - 0.09*(-1.*t1487*t1650*t2412*t298 + t1487*t2225*t2787*t298) + t1487*t2412*t298*t3053 + t3464*t6362 - 0.135*(t406*t6362 + t1487*t2240*t936) - 0.049*(-1.*t1487*t2240*t406 + t6362*t936);
  p_output1[14]=-1.*t2101*t2225*t2240 - 0.09*(t1650*t2240*t2412 - 1.*t2225*t2240*t2787) - 1.*t1202*t298 - 1.*t2240*t2412*t3053 + t3464*t7352 - 0.135*(t406*t7352 + t298*t936) - 0.049*(-1.*t298*t406 + t7352*t936);
  p_output1[15]=t3053*t4546 + t2101*t7583 - 0.09*(t2787*t7583 + t7597) + t3464*t7679 - 0.135*t406*t7679 - 0.049*t7679*t936;
  p_output1[16]=t2101*t3278 + t3053*t7747 - 0.09*(t3624 + t7765) + t3464*t7784 - 0.135*t406*t7784 - 0.049*t7784*t936;
  p_output1[17]=-1.*t2101*t2412*t298 + t2225*t298*t3053 + t7849 + t7903 + t7908 + t7913;
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
  p_output1[39]=0.135*t2787*t4546 - 0.135*t1650*t4653 + t3464*t4895 - 0.135*t406*t4895 - 0.09*(-1.*t2787*t4653 + t7597) - 0.049*t4895*t936;
  p_output1[40]=0.135*t2787*t7747 - 0.135*t1650*t8029 - 0.09*(t7765 - 1.*t2787*t8029) + t3464*t8071 - 0.135*t406*t8071 - 0.049*t8071*t936;
  p_output1[41]=-0.135*t1650*t2412*t298 + 0.135*t2225*t2787*t298 + t7849 + t7903 + t7908 + t7913;
  p_output1[42]=-0.049*t5077 + t2346*t298*t8151 + t4792*t8169 - 0.135*(-1.*t2346*t298*t406 - 1.*t4792*t936);
  p_output1[43]=t1487*t298*t8151 + t8169*t8222 - 0.049*(t406*t8222 - 1.*t1487*t298*t936) - 0.135*(t4393 - 1.*t8222*t936);
  p_output1[44]=-1.*t2240*t8151 + t8169*t8325 - 0.049*(t406*t8325 + t2240*t936) - 0.135*(t2240*t406 - 1.*t8325*t936);
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
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



void J_hip_rotation_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
