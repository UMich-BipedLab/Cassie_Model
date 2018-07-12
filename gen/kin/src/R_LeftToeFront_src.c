/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:34:07 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_LeftToeFront_src.h"

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
  double t723;
  double t659;
  double t747;
  double t691;
  double t819;
  double t475;
  double t479;
  double t1169;
  double t1373;
  double t1391;
  double t707;
  double t923;
  double t952;
  double t978;
  double t1128;
  double t1147;
  double t1153;
  double t1226;
  double t1281;
  double t2579;
  double t2679;
  double t2714;
  double t2741;
  double t2590;
  double t2623;
  double t2654;
  double t2761;
  double t2969;
  double t2657;
  double t2879;
  double t2920;
  double t2561;
  double t3014;
  double t3018;
  double t3049;
  double t3188;
  double t2948;
  double t3091;
  double t3133;
  double t2512;
  double t3214;
  double t3261;
  double t3290;
  double t3386;
  double t3148;
  double t3316;
  double t3325;
  double t2468;
  double t3449;
  double t3469;
  double t3490;
  double t3545;
  double t3346;
  double t3496;
  double t3532;
  double t2431;
  double t3558;
  double t3570;
  double t3580;
  double t1468;
  double t1475;
  double t1514;
  double t1529;
  double t1593;
  double t1609;
  double t1782;
  double t1797;
  double t1817;
  double t3927;
  double t3948;
  double t3958;
  double t3772;
  double t3774;
  double t3788;
  double t3855;
  double t3979;
  double t4034;
  double t4065;
  double t4095;
  double t4125;
  double t4056;
  double t4144;
  double t4165;
  double t4201;
  double t4282;
  double t4315;
  double t4189;
  double t4346;
  double t4390;
  double t4419;
  double t4420;
  double t4421;
  double t4412;
  double t4467;
  double t4528;
  double t4591;
  double t4608;
  double t4609;
  double t2168;
  double t2178;
  double t2212;
  double t4807;
  double t4813;
  double t4826;
  double t4755;
  double t4767;
  double t4797;
  double t4800;
  double t4840;
  double t4845;
  double t4847;
  double t4878;
  double t4890;
  double t4846;
  double t4900;
  double t4918;
  double t4941;
  double t4960;
  double t4971;
  double t4936;
  double t4974;
  double t4991;
  double t5010;
  double t5022;
  double t5030;
  double t5003;
  double t5051;
  double t5053;
  double t5061;
  double t5083;
  double t5105;
  double t3540;
  double t3632;
  double t3637;
  double t3654;
  double t3675;
  double t3712;
  double t4580;
  double t4621;
  double t4639;
  double t4671;
  double t4699;
  double t4718;
  double t5059;
  double t5111;
  double t5122;
  double t5133;
  double t5135;
  double t5140;
  t723 = Cos(var1[3]);
  t659 = Cos(var1[5]);
  t747 = Sin(var1[4]);
  t691 = Sin(var1[3]);
  t819 = Sin(var1[5]);
  t475 = Cos(var1[7]);
  t479 = Cos(var1[6]);
  t1169 = Sin(var1[6]);
  t1373 = Cos(var1[4]);
  t1391 = Sin(var1[7]);
  t707 = -1.*t659*t691;
  t923 = t723*t747*t819;
  t952 = t707 + t923;
  t978 = t479*t952;
  t1128 = t723*t659*t747;
  t1147 = t691*t819;
  t1153 = t1128 + t1147;
  t1226 = t1153*t1169;
  t1281 = t978 + t1226;
  t2579 = Cos(var1[8]);
  t2679 = t479*t1153;
  t2714 = -1.*t952*t1169;
  t2741 = t2679 + t2714;
  t2590 = t723*t1373*t475;
  t2623 = t1281*t1391;
  t2654 = t2590 + t2623;
  t2761 = Sin(var1[8]);
  t2969 = Cos(var1[9]);
  t2657 = t2579*t2654;
  t2879 = t2741*t2761;
  t2920 = t2657 + t2879;
  t2561 = Sin(var1[9]);
  t3014 = t2579*t2741;
  t3018 = -1.*t2654*t2761;
  t3049 = t3014 + t3018;
  t3188 = Cos(var1[10]);
  t2948 = -1.*t2561*t2920;
  t3091 = t2969*t3049;
  t3133 = t2948 + t3091;
  t2512 = Sin(var1[10]);
  t3214 = t2969*t2920;
  t3261 = t2561*t3049;
  t3290 = t3214 + t3261;
  t3386 = Cos(var1[11]);
  t3148 = t2512*t3133;
  t3316 = t3188*t3290;
  t3325 = t3148 + t3316;
  t2468 = Sin(var1[11]);
  t3449 = t3188*t3133;
  t3469 = -1.*t2512*t3290;
  t3490 = t3449 + t3469;
  t3545 = Cos(var1[12]);
  t3346 = -1.*t2468*t3325;
  t3496 = t3386*t3490;
  t3532 = t3346 + t3496;
  t2431 = Sin(var1[12]);
  t3558 = t3386*t3325;
  t3570 = t2468*t3490;
  t3580 = t3558 + t3570;
  t1468 = t723*t659;
  t1475 = t691*t747*t819;
  t1514 = t1468 + t1475;
  t1529 = t479*t1514;
  t1593 = t659*t691*t747;
  t1609 = -1.*t723*t819;
  t1782 = t1593 + t1609;
  t1797 = t1782*t1169;
  t1817 = t1529 + t1797;
  t3927 = t479*t1782;
  t3948 = -1.*t1514*t1169;
  t3958 = t3927 + t3948;
  t3772 = t1373*t475*t691;
  t3774 = t1817*t1391;
  t3788 = t3772 + t3774;
  t3855 = t2579*t3788;
  t3979 = t3958*t2761;
  t4034 = t3855 + t3979;
  t4065 = t2579*t3958;
  t4095 = -1.*t3788*t2761;
  t4125 = t4065 + t4095;
  t4056 = -1.*t2561*t4034;
  t4144 = t2969*t4125;
  t4165 = t4056 + t4144;
  t4201 = t2969*t4034;
  t4282 = t2561*t4125;
  t4315 = t4201 + t4282;
  t4189 = t2512*t4165;
  t4346 = t3188*t4315;
  t4390 = t4189 + t4346;
  t4419 = t3188*t4165;
  t4420 = -1.*t2512*t4315;
  t4421 = t4419 + t4420;
  t4412 = -1.*t2468*t4390;
  t4467 = t3386*t4421;
  t4528 = t4412 + t4467;
  t4591 = t3386*t4390;
  t4608 = t2468*t4421;
  t4609 = t4591 + t4608;
  t2168 = t1373*t479*t819;
  t2178 = t1373*t659*t1169;
  t2212 = t2168 + t2178;
  t4807 = t1373*t659*t479;
  t4813 = -1.*t1373*t819*t1169;
  t4826 = t4807 + t4813;
  t4755 = -1.*t475*t747;
  t4767 = t2212*t1391;
  t4797 = t4755 + t4767;
  t4800 = t2579*t4797;
  t4840 = t4826*t2761;
  t4845 = t4800 + t4840;
  t4847 = t2579*t4826;
  t4878 = -1.*t4797*t2761;
  t4890 = t4847 + t4878;
  t4846 = -1.*t2561*t4845;
  t4900 = t2969*t4890;
  t4918 = t4846 + t4900;
  t4941 = t2969*t4845;
  t4960 = t2561*t4890;
  t4971 = t4941 + t4960;
  t4936 = t2512*t4918;
  t4974 = t3188*t4971;
  t4991 = t4936 + t4974;
  t5010 = t3188*t4918;
  t5022 = -1.*t2512*t4971;
  t5030 = t5010 + t5022;
  t5003 = -1.*t2468*t4991;
  t5051 = t3386*t5030;
  t5053 = t5003 + t5051;
  t5061 = t3386*t4991;
  t5083 = t2468*t5030;
  t5105 = t5061 + t5083;
  t3540 = t2431*t3532;
  t3632 = t3545*t3580;
  t3637 = t3540 + t3632;
  t3654 = t3545*t3532;
  t3675 = -1.*t2431*t3580;
  t3712 = t3654 + t3675;
  t4580 = t2431*t4528;
  t4621 = t3545*t4609;
  t4639 = t4580 + t4621;
  t4671 = t3545*t4528;
  t4699 = -1.*t2431*t4609;
  t4718 = t4671 + t4699;
  t5059 = t2431*t5053;
  t5111 = t3545*t5105;
  t5122 = t5059 + t5111;
  t5133 = t3545*t5053;
  t5135 = -1.*t2431*t5105;
  t5140 = t5133 + t5135;
  p_output1[0]=-1.*t1281*t475 + t1373*t1391*t723;
  p_output1[1]=-1.*t1817*t475 + t1373*t1391*t691;
  p_output1[2]=-1.*t2212*t475 - 1.*t1391*t747;
  p_output1[3]=0.642788*t3637 + 0.766044*t3712;
  p_output1[4]=0.642788*t4639 + 0.766044*t4718;
  p_output1[5]=0.642788*t5122 + 0.766044*t5140;
  p_output1[6]=-0.766044*t3637 + 0.642788*t3712;
  p_output1[7]=-0.766044*t4639 + 0.642788*t4718;
  p_output1[8]=-0.766044*t5122 + 0.642788*t5140;
}



void R_LeftToeFront_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
