/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:17:50 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RightToeBottom_to_LeftToeBottom_src.h"

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
  double t490;
  double t712;
  double t809;
  double t543;
  double t836;
  double t405;
  double t1134;
  double t1306;
  double t1328;
  double t724;
  double t885;
  double t964;
  double t1374;
  double t399;
  double t1475;
  double t1480;
  double t1514;
  double t996;
  double t1453;
  double t1462;
  double t1531;
  double t366;
  double t1807;
  double t1817;
  double t1839;
  double t1466;
  double t1577;
  double t1724;
  double t1853;
  double t2300;
  double t2137;
  double t2166;
  double t2453;
  double t2492;
  double t2557;
  double t2297;
  double t2334;
  double t2383;
  double t2658;
  double t2741;
  double t2775;
  double t2400;
  double t2577;
  double t2608;
  double t2966;
  double t3047;
  double t3108;
  double t2637;
  double t2834;
  double t2835;
  double t3216;
  double t3237;
  double t3252;
  double t2921;
  double t3115;
  double t3199;
  double t1769;
  double t1887;
  double t1892;
  double t1943;
  double t1955;
  double t1956;
  double t3215;
  double t3371;
  double t3372;
  double t3426;
  double t3432;
  double t3462;
  double t3596;
  double t3633;
  double t3652;
  double t3505;
  double t3551;
  double t3587;
  double t4043;
  double t4044;
  double t4104;
  double t3888;
  double t3958;
  double t4002;
  double t4301;
  double t4412;
  double t4476;
  double t4040;
  double t4151;
  double t4269;
  double t4640;
  double t4663;
  double t4697;
  double t4270;
  double t4556;
  double t4587;
  double t4750;
  double t4843;
  double t4908;
  double t4622;
  double t4727;
  double t4736;
  double t3398;
  double t3463;
  double t3473;
  double t1918;
  double t1968;
  double t1969;
  double t4748;
  double t4962;
  double t5033;
  double t5057;
  double t5064;
  double t5070;
  double t5052;
  double t5133;
  double t5151;
  double t5429;
  double t5490;
  double t5870;
  double t214;
  double t5980;
  double t5999;
  double t3851;
  double t5208;
  double t5358;
  double t5390;
  double t5418;
  double t5876;
  double t5881;
  double t5899;
  double t6037;
  double t6057;
  double t6104;
  double t6165;
  double t173;
  double t6200;
  double t6325;
  double t6300;
  double t6313;
  double t6321;
  double t7510;
  double t7326;
  double t7335;
  double t7545;
  double t7664;
  double t7481;
  double t7576;
  double t7578;
  double t7291;
  double t7666;
  double t7694;
  double t7712;
  double t7848;
  double t7598;
  double t7733;
  double t7774;
  double t7263;
  double t7849;
  double t7902;
  double t7932;
  double t8063;
  double t7846;
  double t7960;
  double t7967;
  double t7154;
  double t8106;
  double t8192;
  double t8231;
  double t3493;
  double t3794;
  double t3834;
  double t8347;
  double t8365;
  double t8367;
  double t8407;
  double t8409;
  double t8410;
  double t8384;
  double t8415;
  double t8416;
  double t8431;
  double t8441;
  double t8449;
  double t8427;
  double t8450;
  double t8456;
  double t8465;
  double t8468;
  double t8469;
  double t8464;
  double t8470;
  double t8475;
  double t8477;
  double t8480;
  double t8483;
  double t6198;
  double t8506;
  double t8509;
  double t8512;
  double t8520;
  double t8521;
  double t8528;
  double t8518;
  double t8529;
  double t8532;
  double t8536;
  double t8542;
  double t8544;
  double t8534;
  double t8546;
  double t8547;
  double t8564;
  double t8566;
  double t8578;
  double t8548;
  double t8579;
  double t8580;
  double t8584;
  double t8590;
  double t8594;
  double t6650;
  double t6667;
  double t6737;
  double t7998;
  double t8232;
  double t8264;
  double t8270;
  double t8278;
  double t8284;
  double t8306;
  double t8320;
  double t8338;
  double t6369;
  double t6441;
  double t6479;
  double t8476;
  double t8485;
  double t8489;
  double t8492;
  double t8493;
  double t8496;
  double t8500;
  double t8501;
  double t8502;
  double t6539;
  double t6563;
  double t6579;
  double t8582;
  double t8596;
  double t8597;
  double t8600;
  double t8601;
  double t8602;
  double t8610;
  double t8611;
  double t8612;
  double t6890;
  double t6902;
  double t6990;
  double t6767;
  double t6769;
  double t6797;
  double t6831;
  double t8642;
  double t8643;
  double t8646;
  double t8649;
  double t8650;
  double t8651;
  double t8653;
  double t8654;
  double t8659;
  t490 = Cos(var1[8]);
  t712 = Cos(var1[10]);
  t809 = Sin(var1[9]);
  t543 = Cos(var1[9]);
  t836 = Sin(var1[10]);
  t405 = Cos(var1[11]);
  t1134 = -1.*t490*t712*t809;
  t1306 = -1.*t490*t543*t836;
  t1328 = t1134 + t1306;
  t724 = t490*t543*t712;
  t885 = -1.*t490*t809*t836;
  t964 = t724 + t885;
  t1374 = Sin(var1[11]);
  t399 = Cos(var1[12]);
  t1475 = t405*t1328;
  t1480 = -1.*t964*t1374;
  t1514 = t1475 + t1480;
  t996 = t405*t964;
  t1453 = t1328*t1374;
  t1462 = t996 + t1453;
  t1531 = Sin(var1[12]);
  t366 = Cos(var1[13]);
  t1807 = t399*t1514;
  t1817 = -1.*t1462*t1531;
  t1839 = t1807 + t1817;
  t1466 = t399*t1462;
  t1577 = t1514*t1531;
  t1724 = t1466 + t1577;
  t1853 = Sin(var1[13]);
  t2300 = Cos(var1[7]);
  t2137 = Sin(var1[7]);
  t2166 = Sin(var1[8]);
  t2453 = t2300*t543;
  t2492 = -1.*t2137*t2166*t809;
  t2557 = t2453 + t2492;
  t2297 = t543*t2137*t2166;
  t2334 = t2300*t809;
  t2383 = t2297 + t2334;
  t2658 = t712*t2557;
  t2741 = -1.*t2383*t836;
  t2775 = t2658 + t2741;
  t2400 = t712*t2383;
  t2577 = t2557*t836;
  t2608 = t2400 + t2577;
  t2966 = t405*t2775;
  t3047 = -1.*t2608*t1374;
  t3108 = t2966 + t3047;
  t2637 = t405*t2608;
  t2834 = t2775*t1374;
  t2835 = t2637 + t2834;
  t3216 = t399*t3108;
  t3237 = -1.*t2835*t1531;
  t3252 = t3216 + t3237;
  t2921 = t399*t2835;
  t3115 = t3108*t1531;
  t3199 = t2921 + t3115;
  t1769 = t366*t1724;
  t1887 = t1839*t1853;
  t1892 = t1769 + t1887;
  t1943 = t366*t1839;
  t1955 = -1.*t1724*t1853;
  t1956 = t1943 + t1955;
  t3215 = t366*t3199;
  t3371 = t3252*t1853;
  t3372 = t3215 + t3371;
  t3426 = t366*t3252;
  t3432 = -1.*t3199*t1853;
  t3462 = t3426 + t3432;
  t3596 = 0.642788*t3372;
  t3633 = 0.766044*t3462;
  t3652 = t3596 + t3633;
  t3505 = -0.766044*t1892;
  t3551 = 0.642788*t1956;
  t3587 = t3505 + t3551;
  t4043 = -1.*t543*t2137;
  t4044 = -1.*t2300*t2166*t809;
  t4104 = t4043 + t4044;
  t3888 = t2300*t543*t2166;
  t3958 = -1.*t2137*t809;
  t4002 = t3888 + t3958;
  t4301 = t712*t4104;
  t4412 = -1.*t4002*t836;
  t4476 = t4301 + t4412;
  t4040 = t712*t4002;
  t4151 = t4104*t836;
  t4269 = t4040 + t4151;
  t4640 = t405*t4476;
  t4663 = -1.*t4269*t1374;
  t4697 = t4640 + t4663;
  t4270 = t405*t4269;
  t4556 = t4476*t1374;
  t4587 = t4270 + t4556;
  t4750 = t399*t4697;
  t4843 = -1.*t4587*t1531;
  t4908 = t4750 + t4843;
  t4622 = t399*t4587;
  t4727 = t4697*t1531;
  t4736 = t4622 + t4727;
  t3398 = -0.766044*t3372;
  t3463 = 0.642788*t3462;
  t3473 = t3398 + t3463;
  t1918 = 0.642788*t1892;
  t1968 = 0.766044*t1956;
  t1969 = t1918 + t1968;
  t4748 = t366*t4736;
  t4962 = t4908*t1853;
  t5033 = t4748 + t4962;
  t5057 = t366*t4908;
  t5064 = -1.*t4736*t1853;
  t5070 = t5057 + t5064;
  t5052 = -0.766044*t5033;
  t5133 = 0.642788*t5070;
  t5151 = t5052 + t5133;
  t5429 = 0.642788*t5033;
  t5490 = 0.766044*t5070;
  t5870 = t5429 + t5490;
  t214 = Cos(var1[1]);
  t5980 = t1969*t5151;
  t5999 = -1.*t3587*t5870;
  t3851 = t2300*t490*t3587;
  t5208 = t2166*t5151;
  t5358 = t3851 + t5208;
  t5390 = -1.*t3652*t5358;
  t5418 = t2300*t490*t1969;
  t5876 = t2166*t5870;
  t5881 = t5418 + t5876;
  t5899 = t3473*t5881;
  t6037 = t5980 + t5999;
  t6057 = -1.*t490*t2137*t6037;
  t6104 = 0. + t5390 + t5899 + t6057;
  t6165 = 1/t6104;
  t173 = Cos(var1[0]);
  t6200 = Sin(var1[0]);
  t6325 = Sin(var1[1]);
  t6300 = t5870*t3473;
  t6313 = -1.*t5151*t3652;
  t6321 = 0. + t6300 + t6313;
  t7510 = Cos(var1[3]);
  t7326 = Cos(var1[2]);
  t7335 = Sin(var1[3]);
  t7545 = Sin(var1[2]);
  t7664 = Cos(var1[4]);
  t7481 = -1.*t214*t7326*t7335;
  t7576 = -1.*t7510*t214*t7545;
  t7578 = t7481 + t7576;
  t7291 = Sin(var1[4]);
  t7666 = t7510*t214*t7326;
  t7694 = -1.*t214*t7335*t7545;
  t7712 = t7666 + t7694;
  t7848 = Cos(var1[5]);
  t7598 = t7291*t7578;
  t7733 = t7664*t7712;
  t7774 = t7598 + t7733;
  t7263 = Sin(var1[5]);
  t7849 = t7664*t7578;
  t7902 = -1.*t7291*t7712;
  t7932 = t7849 + t7902;
  t8063 = Cos(var1[6]);
  t7846 = -1.*t7263*t7774;
  t7960 = t7848*t7932;
  t7967 = t7846 + t7960;
  t7154 = Sin(var1[6]);
  t8106 = t7848*t7774;
  t8192 = t7263*t7932;
  t8231 = t8106 + t8192;
  t3493 = -1.*t1969*t3473;
  t3794 = t3587*t3652;
  t3834 = 0. + t3493 + t3794;
  t8347 = t173*t7326*t6325;
  t8365 = -1.*t6200*t7545;
  t8367 = t8347 + t8365;
  t8407 = -1.*t7326*t6200;
  t8409 = -1.*t173*t6325*t7545;
  t8410 = t8407 + t8409;
  t8384 = -1.*t7335*t8367;
  t8415 = t7510*t8410;
  t8416 = t8384 + t8415;
  t8431 = t7510*t8367;
  t8441 = t7335*t8410;
  t8449 = t8431 + t8441;
  t8427 = t7291*t8416;
  t8450 = t7664*t8449;
  t8456 = t8427 + t8450;
  t8465 = t7664*t8416;
  t8468 = -1.*t7291*t8449;
  t8469 = t8465 + t8468;
  t8464 = -1.*t7263*t8456;
  t8470 = t7848*t8469;
  t8475 = t8464 + t8470;
  t8477 = t7848*t8456;
  t8480 = t7263*t8469;
  t8483 = t8477 + t8480;
  t6198 = 0. + t5980 + t5999;
  t8506 = t7326*t6200*t6325;
  t8509 = t173*t7545;
  t8512 = t8506 + t8509;
  t8520 = t173*t7326;
  t8521 = -1.*t6200*t6325*t7545;
  t8528 = t8520 + t8521;
  t8518 = -1.*t7335*t8512;
  t8529 = t7510*t8528;
  t8532 = t8518 + t8529;
  t8536 = t7510*t8512;
  t8542 = t7335*t8528;
  t8544 = t8536 + t8542;
  t8534 = t7291*t8532;
  t8546 = t7664*t8544;
  t8547 = t8534 + t8546;
  t8564 = t7664*t8532;
  t8566 = -1.*t7291*t8544;
  t8578 = t8564 + t8566;
  t8548 = -1.*t7263*t8547;
  t8579 = t7848*t8578;
  t8580 = t8548 + t8579;
  t8584 = t7848*t8547;
  t8590 = t7263*t8578;
  t8594 = t8584 + t8590;
  t6650 = -1.*t490*t2137*t5151;
  t6667 = t2300*t490*t3473;
  t6737 = 0. + t6650 + t6667;
  t7998 = t7154*t7967;
  t8232 = t8063*t8231;
  t8264 = t7998 + t8232;
  t8270 = 0.642788*t8264;
  t8278 = t8063*t7967;
  t8284 = -1.*t7154*t8231;
  t8306 = t8278 + t8284;
  t8320 = 0.766044*t8306;
  t8338 = t8270 + t8320;
  t6369 = t490*t2137*t3587;
  t6441 = t2166*t3473;
  t6479 = 0. + t6369 + t6441;
  t8476 = t7154*t8475;
  t8485 = t8063*t8483;
  t8489 = t8476 + t8485;
  t8492 = 0.642788*t8489;
  t8493 = t8063*t8475;
  t8496 = -1.*t7154*t8483;
  t8500 = t8493 + t8496;
  t8501 = 0.766044*t8500;
  t8502 = t8492 + t8501;
  t6539 = -1.*t2300*t490*t3587;
  t6563 = -1.*t2166*t5151;
  t6579 = 0. + t6539 + t6563;
  t8582 = t7154*t8580;
  t8596 = t8063*t8594;
  t8597 = t8582 + t8596;
  t8600 = 0.642788*t8597;
  t8601 = t8063*t8580;
  t8602 = -1.*t7154*t8594;
  t8610 = t8601 + t8602;
  t8611 = 0.766044*t8610;
  t8612 = t8600 + t8611;
  t6890 = t490*t2137*t5870;
  t6902 = -1.*t2300*t490*t3652;
  t6990 = 0. + t6890 + t6902;
  t6767 = -1.*t490*t2137*t1969;
  t6769 = -1.*t2166*t3652;
  t6797 = 0. + t6767 + t6769;
  t6831 = 0. + t5418 + t5876;
  t8642 = -0.766044*t8264;
  t8643 = 0.642788*t8306;
  t8646 = t8642 + t8643;
  t8649 = -0.766044*t8489;
  t8650 = 0.642788*t8500;
  t8651 = t8649 + t8650;
  t8653 = -0.766044*t8597;
  t8654 = 0.642788*t8610;
  t8659 = t8653 + t8654;
  p_output1[0]=0. - 1.*t173*t214*t3834*t6165 - 1.*t214*t6165*t6198*t6200 + t6165*t6321*t6325;
  p_output1[1]=0. - 1.*t173*t214*t6165*t6479 - 1.*t214*t6165*t6200*t6579 + t6165*t6325*t6737;
  p_output1[2]=0. - 1.*t173*t214*t6165*t6797 - 1.*t214*t6165*t6200*t6831 + t6165*t6325*t6990;
  p_output1[3]=0. + t6165*t6321*t8338 + t3834*t6165*t8502 + t6165*t6198*t8612;
  p_output1[4]=0. + t6165*t6737*t8338 + t6165*t6479*t8502 + t6165*t6579*t8612;
  p_output1[5]=0. + t6165*t6990*t8338 + t6165*t6797*t8502 + t6165*t6831*t8612;
  p_output1[6]=0. + t6165*t6321*t8646 + t3834*t6165*t8651 + t6165*t6198*t8659;
  p_output1[7]=0. + t6165*t6737*t8646 + t6165*t6479*t8651 + t6165*t6579*t8659;
  p_output1[8]=0. + t6165*t6990*t8646 + t6165*t6797*t8651 + t6165*t6831*t8659;
}



void R_RightToeBottom_to_LeftToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
