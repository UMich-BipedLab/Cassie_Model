/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:15:54 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_toe_joint_right_src.h"

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
  double t271;
  double t1751;
  double t2224;
  double t1755;
  double t2463;
  double t377;
  double t510;
  double t545;
  double t1348;
  double t1739;
  double t1759;
  double t2651;
  double t2666;
  double t2926;
  double t3772;
  double t3828;
  double t3952;
  double t371;
  double t4313;
  double t4360;
  double t4366;
  double t4747;
  double t4827;
  double t4829;
  double t4873;
  double t5332;
  double t5412;
  double t5417;
  double t6397;
  double t6443;
  double t6465;
  double t6477;
  double t6497;
  double t6504;
  double t6571;
  double t6780;
  double t6789;
  double t6806;
  double t6990;
  double t7052;
  double t7054;
  double t7059;
  double t7095;
  double t7098;
  double t7314;
  double t7676;
  double t7717;
  double t7998;
  double t8495;
  double t8523;
  double t8775;
  double t8891;
  double t8925;
  double t8944;
  double t8977;
  double t8995;
  double t8996;
  double t9007;
  double t9071;
  double t9075;
  double t9079;
  double t9107;
  double t9112;
  double t9137;
  double t9160;
  double t9198;
  double t9210;
  double t9213;
  double t9223;
  double t9225;
  double t9229;
  double t771;
  double t1353;
  double t1737;
  double t1743;
  double t1747;
  double t2930;
  double t3099;
  double t3480;
  double t3748;
  double t4229;
  double t4253;
  double t4265;
  double t9272;
  double t9276;
  double t9277;
  double t9284;
  double t9285;
  double t9290;
  double t4834;
  double t5131;
  double t5240;
  double t9296;
  double t9297;
  double t9300;
  double t6264;
  double t6312;
  double t6330;
  double t6563;
  double t6599;
  double t6656;
  double t9305;
  double t9306;
  double t9309;
  double t9325;
  double t9338;
  double t9339;
  double t6828;
  double t6840;
  double t6960;
  double t7103;
  double t7432;
  double t7623;
  double t9353;
  double t9355;
  double t9358;
  double t9368;
  double t9373;
  double t9377;
  double t8123;
  double t8139;
  double t8171;
  double t8971;
  double t8984;
  double t8985;
  double t9386;
  double t9389;
  double t9392;
  double t9400;
  double t9402;
  double t9404;
  double t9057;
  double t9062;
  double t9065;
  double t9155;
  double t9184;
  double t9189;
  double t9411;
  double t9414;
  double t9415;
  double t9418;
  double t9421;
  double t9422;
  double t9217;
  double t9219;
  double t9222;
  double t9429;
  double t9431;
  double t9438;
  double t9445;
  double t9446;
  double t9451;
  double t9509;
  double t9514;
  double t9517;
  double t9526;
  double t9529;
  double t9531;
  double t9547;
  double t9550;
  double t9557;
  double t9565;
  double t9566;
  double t9567;
  double t9572;
  double t9573;
  double t9577;
  double t9579;
  double t9581;
  double t9582;
  double t9587;
  double t9588;
  double t9591;
  double t9596;
  double t9597;
  double t9599;
  double t9601;
  double t9603;
  double t9608;
  double t9610;
  double t9613;
  double t9614;
  double t9618;
  double t9619;
  double t9623;
  t271 = Cos(var1[3]);
  t1751 = Cos(var1[5]);
  t2224 = Sin(var1[3]);
  t1755 = Sin(var1[4]);
  t2463 = Sin(var1[5]);
  t377 = Cos(var1[14]);
  t510 = -1.*t377;
  t545 = 1. + t510;
  t1348 = Sin(var1[14]);
  t1739 = Sin(var1[13]);
  t1759 = t271*t1751*t1755;
  t2651 = t2224*t2463;
  t2666 = t1759 + t2651;
  t2926 = Cos(var1[13]);
  t3772 = -1.*t1751*t2224;
  t3828 = t271*t1755*t2463;
  t3952 = t3772 + t3828;
  t371 = Cos(var1[4]);
  t4313 = t1739*t2666;
  t4360 = t2926*t3952;
  t4366 = t4313 + t4360;
  t4747 = Cos(var1[15]);
  t4827 = -1.*t4747;
  t4829 = 1. + t4827;
  t4873 = Sin(var1[15]);
  t5332 = t2926*t2666;
  t5412 = -1.*t1739*t3952;
  t5417 = t5332 + t5412;
  t6397 = t377*t271*t371;
  t6443 = t1348*t4366;
  t6465 = t6397 + t6443;
  t6477 = Cos(var1[16]);
  t6497 = -1.*t6477;
  t6504 = 1. + t6497;
  t6571 = Sin(var1[16]);
  t6780 = t4873*t5417;
  t6789 = t4747*t6465;
  t6806 = t6780 + t6789;
  t6990 = t4747*t5417;
  t7052 = -1.*t4873*t6465;
  t7054 = t6990 + t7052;
  t7059 = Cos(var1[17]);
  t7095 = -1.*t7059;
  t7098 = 1. + t7095;
  t7314 = Sin(var1[17]);
  t7676 = -1.*t6571*t6806;
  t7717 = t6477*t7054;
  t7998 = t7676 + t7717;
  t8495 = t6477*t6806;
  t8523 = t6571*t7054;
  t8775 = t8495 + t8523;
  t8891 = Cos(var1[18]);
  t8925 = -1.*t8891;
  t8944 = 1. + t8925;
  t8977 = Sin(var1[18]);
  t8995 = t7314*t7998;
  t8996 = t7059*t8775;
  t9007 = t8995 + t8996;
  t9071 = t7059*t7998;
  t9075 = -1.*t7314*t8775;
  t9079 = t9071 + t9075;
  t9107 = Cos(var1[19]);
  t9112 = -1.*t9107;
  t9137 = 1. + t9112;
  t9160 = Sin(var1[19]);
  t9198 = -1.*t8977*t9007;
  t9210 = t8891*t9079;
  t9213 = t9198 + t9210;
  t9223 = t8891*t9007;
  t9225 = t8977*t9079;
  t9229 = t9223 + t9225;
  t771 = -0.049*t545;
  t1353 = -0.135*t1348;
  t1737 = 0. + t771 + t1353;
  t1743 = 0.135*t1739;
  t1747 = 0. + t1743;
  t2930 = -1.*t2926;
  t3099 = 1. + t2930;
  t3480 = -0.135*t3099;
  t3748 = 0. + t3480;
  t4229 = -0.135*t545;
  t4253 = 0.049*t1348;
  t4265 = 0. + t4229 + t4253;
  t9272 = t1751*t2224*t1755;
  t9276 = -1.*t271*t2463;
  t9277 = t9272 + t9276;
  t9284 = t271*t1751;
  t9285 = t2224*t1755*t2463;
  t9290 = t9284 + t9285;
  t4834 = -0.09*t4829;
  t5131 = 0.049*t4873;
  t5240 = 0. + t4834 + t5131;
  t9296 = t1739*t9277;
  t9297 = t2926*t9290;
  t9300 = t9296 + t9297;
  t6264 = -0.049*t4829;
  t6312 = -0.09*t4873;
  t6330 = 0. + t6264 + t6312;
  t6563 = -0.049*t6504;
  t6599 = -0.21*t6571;
  t6656 = 0. + t6563 + t6599;
  t9305 = t2926*t9277;
  t9306 = -1.*t1739*t9290;
  t9309 = t9305 + t9306;
  t9325 = t377*t371*t2224;
  t9338 = t1348*t9300;
  t9339 = t9325 + t9338;
  t6828 = -0.21*t6504;
  t6840 = 0.049*t6571;
  t6960 = 0. + t6828 + t6840;
  t7103 = -0.2707*t7098;
  t7432 = 0.0016*t7314;
  t7623 = 0. + t7103 + t7432;
  t9353 = t4873*t9309;
  t9355 = t4747*t9339;
  t9358 = t9353 + t9355;
  t9368 = t4747*t9309;
  t9373 = -1.*t4873*t9339;
  t9377 = t9368 + t9373;
  t8123 = -0.0016*t7098;
  t8139 = -0.2707*t7314;
  t8171 = 0. + t8123 + t8139;
  t8971 = 0.0184*t8944;
  t8984 = -0.7055*t8977;
  t8985 = 0. + t8971 + t8984;
  t9386 = -1.*t6571*t9358;
  t9389 = t6477*t9377;
  t9392 = t9386 + t9389;
  t9400 = t6477*t9358;
  t9402 = t6571*t9377;
  t9404 = t9400 + t9402;
  t9057 = -0.7055*t8944;
  t9062 = -0.0184*t8977;
  t9065 = 0. + t9057 + t9062;
  t9155 = -1.1135*t9137;
  t9184 = 0.0216*t9160;
  t9189 = 0. + t9155 + t9184;
  t9411 = t7314*t9392;
  t9414 = t7059*t9404;
  t9415 = t9411 + t9414;
  t9418 = t7059*t9392;
  t9421 = -1.*t7314*t9404;
  t9422 = t9418 + t9421;
  t9217 = -0.0216*t9137;
  t9219 = -1.1135*t9160;
  t9222 = 0. + t9217 + t9219;
  t9429 = -1.*t8977*t9415;
  t9431 = t8891*t9422;
  t9438 = t9429 + t9431;
  t9445 = t8891*t9415;
  t9446 = t8977*t9422;
  t9451 = t9445 + t9446;
  t9509 = t371*t1751*t1739;
  t9514 = t2926*t371*t2463;
  t9517 = t9509 + t9514;
  t9526 = t2926*t371*t1751;
  t9529 = -1.*t371*t1739*t2463;
  t9531 = t9526 + t9529;
  t9547 = -1.*t377*t1755;
  t9550 = t1348*t9517;
  t9557 = t9547 + t9550;
  t9565 = t4873*t9531;
  t9566 = t4747*t9557;
  t9567 = t9565 + t9566;
  t9572 = t4747*t9531;
  t9573 = -1.*t4873*t9557;
  t9577 = t9572 + t9573;
  t9579 = -1.*t6571*t9567;
  t9581 = t6477*t9577;
  t9582 = t9579 + t9581;
  t9587 = t6477*t9567;
  t9588 = t6571*t9577;
  t9591 = t9587 + t9588;
  t9596 = t7314*t9582;
  t9597 = t7059*t9591;
  t9599 = t9596 + t9597;
  t9601 = t7059*t9582;
  t9603 = -1.*t7314*t9591;
  t9608 = t9601 + t9603;
  t9610 = -1.*t8977*t9599;
  t9613 = t8891*t9608;
  t9614 = t9610 + t9613;
  t9618 = t8891*t9599;
  t9619 = t8977*t9608;
  t9623 = t9618 + t9619;
  p_output1[0]=0. + t1747*t2666 + t1737*t271*t371 + t3748*t3952 + t4265*t4366 - 0.1305*(-1.*t1348*t271*t371 + t377*t4366) + t5240*t5417 + t6330*t6465 + t6656*t6806 + t6960*t7054 + t7623*t7998 + t8171*t8775 + t8985*t9007 + t9065*t9079 + t9189*t9213 + t9222*t9229 - 0.0216*(t9160*t9213 + t9107*t9229) - 1.1135*(t9107*t9213 - 1.*t9160*t9229) + var1[0];
  p_output1[1]=0. + t1737*t2224*t371 + t1747*t9277 + t3748*t9290 + t4265*t9300 - 0.1305*(-1.*t1348*t2224*t371 + t377*t9300) + t5240*t9309 + t6330*t9339 + t6656*t9358 + t6960*t9377 + t7623*t9392 + t8171*t9404 + t8985*t9415 + t9065*t9422 + t9189*t9438 + t9222*t9451 - 0.0216*(t9160*t9438 + t9107*t9451) - 1.1135*(t9107*t9438 - 1.*t9160*t9451) + var1[1];
  p_output1[2]=0. - 1.*t1737*t1755 + t1747*t1751*t371 + t2463*t371*t3748 + t4265*t9517 - 0.1305*(t1348*t1755 + t377*t9517) + t5240*t9531 + t6330*t9557 + t6656*t9567 + t6960*t9577 + t7623*t9582 + t8171*t9591 + t8985*t9599 + t9065*t9608 + t9189*t9614 + t9222*t9623 - 0.0216*(t9160*t9614 + t9107*t9623) - 1.1135*(t9107*t9614 - 1.*t9160*t9623) + var1[2];
}



void p_toe_joint_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
