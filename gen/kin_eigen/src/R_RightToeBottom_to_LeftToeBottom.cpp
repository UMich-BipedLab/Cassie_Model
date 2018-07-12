/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:37:41 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RightToeBottom_to_LeftToeBottom.h"

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
static void output1(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  double t387;
  double t628;
  double t695;
  double t461;
  double t754;
  double t373;
  double t1004;
  double t1052;
  double t1138;
  double t682;
  double t844;
  double t866;
  double t1167;
  double t330;
  double t1421;
  double t1548;
  double t1583;
  double t919;
  double t1185;
  double t1242;
  double t1585;
  double t257;
  double t1718;
  double t1739;
  double t1762;
  double t1404;
  double t1620;
  double t1633;
  double t1795;
  double t2424;
  double t2241;
  double t2283;
  double t2601;
  double t2618;
  double t2672;
  double t2377;
  double t2498;
  double t2542;
  double t2732;
  double t2761;
  double t2819;
  double t2546;
  double t2686;
  double t2714;
  double t2888;
  double t2927;
  double t2972;
  double t2717;
  double t2849;
  double t2870;
  double t3118;
  double t3159;
  double t3165;
  double t2886;
  double t3036;
  double t3080;
  double t1674;
  double t1850;
  double t1856;
  double t1907;
  double t1999;
  double t2152;
  double t3114;
  double t3168;
  double t3199;
  double t3299;
  double t3316;
  double t3361;
  double t3626;
  double t3759;
  double t3778;
  double t3509;
  double t3562;
  double t3618;
  double t3923;
  double t3928;
  double t3949;
  double t3826;
  double t3862;
  double t3871;
  double t4019;
  double t4026;
  double t4040;
  double t3897;
  double t3967;
  double t3981;
  double t4095;
  double t4115;
  double t4134;
  double t4011;
  double t4042;
  double t4048;
  double t4387;
  double t4401;
  double t4420;
  double t4074;
  double t4151;
  double t4292;
  double t3204;
  double t3377;
  double t3386;
  double t1890;
  double t2224;
  double t2230;
  double t4376;
  double t4426;
  double t4467;
  double t4493;
  double t4528;
  double t4530;
  double t4486;
  double t4534;
  double t4670;
  double t4854;
  double t4859;
  double t4888;
  double t245;
  double t4940;
  double t4972;
  double t3825;
  double t4675;
  double t4706;
  double t4711;
  double t4791;
  double t4894;
  double t4921;
  double t4928;
  double t5022;
  double t5043;
  double t5140;
  double t5147;
  double t235;
  double t5247;
  double t5674;
  double t5369;
  double t5441;
  double t5565;
  double t7059;
  double t6984;
  double t7014;
  double t7067;
  double t7228;
  double t7025;
  double t7201;
  double t7211;
  double t6930;
  double t7238;
  double t7244;
  double t7263;
  double t7309;
  double t7217;
  double t7292;
  double t7293;
  double t6898;
  double t7336;
  double t7374;
  double t7383;
  double t7458;
  double t7305;
  double t7394;
  double t7407;
  double t6844;
  double t7478;
  double t7515;
  double t7522;
  double t3497;
  double t3788;
  double t3819;
  double t7666;
  double t7674;
  double t7690;
  double t7705;
  double t7707;
  double t7714;
  double t7693;
  double t7723;
  double t7734;
  double t7750;
  double t7790;
  double t7805;
  double t7744;
  double t7806;
  double t7816;
  double t7839;
  double t7845;
  double t7849;
  double t7832;
  double t7861;
  double t7867;
  double t7903;
  double t7904;
  double t7925;
  double t5206;
  double t8085;
  double t8113;
  double t8129;
  double t8146;
  double t8183;
  double t8186;
  double t8130;
  double t8197;
  double t8218;
  double t8248;
  double t8254;
  double t8283;
  double t8230;
  double t8316;
  double t8323;
  double t8336;
  double t8343;
  double t8349;
  double t8331;
  double t8354;
  double t8357;
  double t8375;
  double t8397;
  double t8408;
  double t6271;
  double t6306;
  double t6397;
  double t7438;
  double t7533;
  double t7537;
  double t7606;
  double t7630;
  double t7632;
  double t7642;
  double t7643;
  double t7644;
  double t5852;
  double t5856;
  double t5887;
  double t7890;
  double t7976;
  double t7991;
  double t7992;
  double t8006;
  double t8013;
  double t8017;
  double t8018;
  double t8038;
  double t6051;
  double t6184;
  double t6206;
  double t8367;
  double t8431;
  double t8440;
  double t8441;
  double t8457;
  double t8463;
  double t8464;
  double t8469;
  double t8492;
  double t6742;
  double t6745;
  double t6748;
  double t6502;
  double t6595;
  double t6610;
  double t6632;
  double t8548;
  double t8583;
  double t8584;
  double t8591;
  double t8593;
  double t8596;
  double t8608;
  double t8613;
  double t8622;
  t387 = Cos(var1[8]);
  t628 = Cos(var1[10]);
  t695 = Sin(var1[9]);
  t461 = Cos(var1[9]);
  t754 = Sin(var1[10]);
  t373 = Cos(var1[11]);
  t1004 = -1.*t387*t628*t695;
  t1052 = -1.*t387*t461*t754;
  t1138 = t1004 + t1052;
  t682 = t387*t461*t628;
  t844 = -1.*t387*t695*t754;
  t866 = t682 + t844;
  t1167 = Sin(var1[11]);
  t330 = Cos(var1[12]);
  t1421 = t373*t1138;
  t1548 = -1.*t866*t1167;
  t1583 = t1421 + t1548;
  t919 = t373*t866;
  t1185 = t1138*t1167;
  t1242 = t919 + t1185;
  t1585 = Sin(var1[12]);
  t257 = Cos(var1[13]);
  t1718 = t330*t1583;
  t1739 = -1.*t1242*t1585;
  t1762 = t1718 + t1739;
  t1404 = t330*t1242;
  t1620 = t1583*t1585;
  t1633 = t1404 + t1620;
  t1795 = Sin(var1[13]);
  t2424 = Cos(var1[7]);
  t2241 = Sin(var1[7]);
  t2283 = Sin(var1[8]);
  t2601 = t2424*t461;
  t2618 = -1.*t2241*t2283*t695;
  t2672 = t2601 + t2618;
  t2377 = t461*t2241*t2283;
  t2498 = t2424*t695;
  t2542 = t2377 + t2498;
  t2732 = t628*t2672;
  t2761 = -1.*t2542*t754;
  t2819 = t2732 + t2761;
  t2546 = t628*t2542;
  t2686 = t2672*t754;
  t2714 = t2546 + t2686;
  t2888 = t373*t2819;
  t2927 = -1.*t2714*t1167;
  t2972 = t2888 + t2927;
  t2717 = t373*t2714;
  t2849 = t2819*t1167;
  t2870 = t2717 + t2849;
  t3118 = t330*t2972;
  t3159 = -1.*t2870*t1585;
  t3165 = t3118 + t3159;
  t2886 = t330*t2870;
  t3036 = t2972*t1585;
  t3080 = t2886 + t3036;
  t1674 = t257*t1633;
  t1850 = t1762*t1795;
  t1856 = t1674 + t1850;
  t1907 = t257*t1762;
  t1999 = -1.*t1633*t1795;
  t2152 = t1907 + t1999;
  t3114 = t257*t3080;
  t3168 = t3165*t1795;
  t3199 = t3114 + t3168;
  t3299 = t257*t3165;
  t3316 = -1.*t3080*t1795;
  t3361 = t3299 + t3316;
  t3626 = 0.642788*t3199;
  t3759 = 0.766044*t3361;
  t3778 = t3626 + t3759;
  t3509 = -0.766044*t1856;
  t3562 = 0.642788*t2152;
  t3618 = t3509 + t3562;
  t3923 = -1.*t461*t2241;
  t3928 = -1.*t2424*t2283*t695;
  t3949 = t3923 + t3928;
  t3826 = t2424*t461*t2283;
  t3862 = -1.*t2241*t695;
  t3871 = t3826 + t3862;
  t4019 = t628*t3949;
  t4026 = -1.*t3871*t754;
  t4040 = t4019 + t4026;
  t3897 = t628*t3871;
  t3967 = t3949*t754;
  t3981 = t3897 + t3967;
  t4095 = t373*t4040;
  t4115 = -1.*t3981*t1167;
  t4134 = t4095 + t4115;
  t4011 = t373*t3981;
  t4042 = t4040*t1167;
  t4048 = t4011 + t4042;
  t4387 = t330*t4134;
  t4401 = -1.*t4048*t1585;
  t4420 = t4387 + t4401;
  t4074 = t330*t4048;
  t4151 = t4134*t1585;
  t4292 = t4074 + t4151;
  t3204 = -0.766044*t3199;
  t3377 = 0.642788*t3361;
  t3386 = t3204 + t3377;
  t1890 = 0.642788*t1856;
  t2224 = 0.766044*t2152;
  t2230 = t1890 + t2224;
  t4376 = t257*t4292;
  t4426 = t4420*t1795;
  t4467 = t4376 + t4426;
  t4493 = t257*t4420;
  t4528 = -1.*t4292*t1795;
  t4530 = t4493 + t4528;
  t4486 = -0.766044*t4467;
  t4534 = 0.642788*t4530;
  t4670 = t4486 + t4534;
  t4854 = 0.642788*t4467;
  t4859 = 0.766044*t4530;
  t4888 = t4854 + t4859;
  t245 = Cos(var1[1]);
  t4940 = t2230*t4670;
  t4972 = -1.*t3618*t4888;
  t3825 = t2424*t387*t3618;
  t4675 = t2283*t4670;
  t4706 = t3825 + t4675;
  t4711 = -1.*t3778*t4706;
  t4791 = t2424*t387*t2230;
  t4894 = t2283*t4888;
  t4921 = t4791 + t4894;
  t4928 = t3386*t4921;
  t5022 = t4940 + t4972;
  t5043 = -1.*t387*t2241*t5022;
  t5140 = 0. + t4711 + t4928 + t5043;
  t5147 = 1/t5140;
  t235 = Cos(var1[0]);
  t5247 = Sin(var1[0]);
  t5674 = Sin(var1[1]);
  t5369 = t4888*t3386;
  t5441 = -1.*t4670*t3778;
  t5565 = 0. + t5369 + t5441;
  t7059 = Cos(var1[3]);
  t6984 = Cos(var1[2]);
  t7014 = Sin(var1[3]);
  t7067 = Sin(var1[2]);
  t7228 = Cos(var1[4]);
  t7025 = -1.*t245*t6984*t7014;
  t7201 = -1.*t7059*t245*t7067;
  t7211 = t7025 + t7201;
  t6930 = Sin(var1[4]);
  t7238 = t7059*t245*t6984;
  t7244 = -1.*t245*t7014*t7067;
  t7263 = t7238 + t7244;
  t7309 = Cos(var1[5]);
  t7217 = t6930*t7211;
  t7292 = t7228*t7263;
  t7293 = t7217 + t7292;
  t6898 = Sin(var1[5]);
  t7336 = t7228*t7211;
  t7374 = -1.*t6930*t7263;
  t7383 = t7336 + t7374;
  t7458 = Cos(var1[6]);
  t7305 = -1.*t6898*t7293;
  t7394 = t7309*t7383;
  t7407 = t7305 + t7394;
  t6844 = Sin(var1[6]);
  t7478 = t7309*t7293;
  t7515 = t6898*t7383;
  t7522 = t7478 + t7515;
  t3497 = -1.*t2230*t3386;
  t3788 = t3618*t3778;
  t3819 = 0. + t3497 + t3788;
  t7666 = t235*t6984*t5674;
  t7674 = -1.*t5247*t7067;
  t7690 = t7666 + t7674;
  t7705 = -1.*t6984*t5247;
  t7707 = -1.*t235*t5674*t7067;
  t7714 = t7705 + t7707;
  t7693 = -1.*t7014*t7690;
  t7723 = t7059*t7714;
  t7734 = t7693 + t7723;
  t7750 = t7059*t7690;
  t7790 = t7014*t7714;
  t7805 = t7750 + t7790;
  t7744 = t6930*t7734;
  t7806 = t7228*t7805;
  t7816 = t7744 + t7806;
  t7839 = t7228*t7734;
  t7845 = -1.*t6930*t7805;
  t7849 = t7839 + t7845;
  t7832 = -1.*t6898*t7816;
  t7861 = t7309*t7849;
  t7867 = t7832 + t7861;
  t7903 = t7309*t7816;
  t7904 = t6898*t7849;
  t7925 = t7903 + t7904;
  t5206 = 0. + t4940 + t4972;
  t8085 = t6984*t5247*t5674;
  t8113 = t235*t7067;
  t8129 = t8085 + t8113;
  t8146 = t235*t6984;
  t8183 = -1.*t5247*t5674*t7067;
  t8186 = t8146 + t8183;
  t8130 = -1.*t7014*t8129;
  t8197 = t7059*t8186;
  t8218 = t8130 + t8197;
  t8248 = t7059*t8129;
  t8254 = t7014*t8186;
  t8283 = t8248 + t8254;
  t8230 = t6930*t8218;
  t8316 = t7228*t8283;
  t8323 = t8230 + t8316;
  t8336 = t7228*t8218;
  t8343 = -1.*t6930*t8283;
  t8349 = t8336 + t8343;
  t8331 = -1.*t6898*t8323;
  t8354 = t7309*t8349;
  t8357 = t8331 + t8354;
  t8375 = t7309*t8323;
  t8397 = t6898*t8349;
  t8408 = t8375 + t8397;
  t6271 = -1.*t387*t2241*t4670;
  t6306 = t2424*t387*t3386;
  t6397 = 0. + t6271 + t6306;
  t7438 = t6844*t7407;
  t7533 = t7458*t7522;
  t7537 = t7438 + t7533;
  t7606 = 0.642788*t7537;
  t7630 = t7458*t7407;
  t7632 = -1.*t6844*t7522;
  t7642 = t7630 + t7632;
  t7643 = 0.766044*t7642;
  t7644 = t7606 + t7643;
  t5852 = t387*t2241*t3618;
  t5856 = t2283*t3386;
  t5887 = 0. + t5852 + t5856;
  t7890 = t6844*t7867;
  t7976 = t7458*t7925;
  t7991 = t7890 + t7976;
  t7992 = 0.642788*t7991;
  t8006 = t7458*t7867;
  t8013 = -1.*t6844*t7925;
  t8017 = t8006 + t8013;
  t8018 = 0.766044*t8017;
  t8038 = t7992 + t8018;
  t6051 = -1.*t2424*t387*t3618;
  t6184 = -1.*t2283*t4670;
  t6206 = 0. + t6051 + t6184;
  t8367 = t6844*t8357;
  t8431 = t7458*t8408;
  t8440 = t8367 + t8431;
  t8441 = 0.642788*t8440;
  t8457 = t7458*t8357;
  t8463 = -1.*t6844*t8408;
  t8464 = t8457 + t8463;
  t8469 = 0.766044*t8464;
  t8492 = t8441 + t8469;
  t6742 = t387*t2241*t4888;
  t6745 = -1.*t2424*t387*t3778;
  t6748 = 0. + t6742 + t6745;
  t6502 = -1.*t387*t2241*t2230;
  t6595 = -1.*t2283*t3778;
  t6610 = 0. + t6502 + t6595;
  t6632 = 0. + t4791 + t4894;
  t8548 = -0.766044*t7537;
  t8583 = 0.642788*t7642;
  t8584 = t8548 + t8583;
  t8591 = -0.766044*t7991;
  t8593 = 0.642788*t8017;
  t8596 = t8591 + t8593;
  t8608 = -0.766044*t8440;
  t8613 = 0.642788*t8464;
  t8622 = t8608 + t8613;

  p_output1(0)=0. - 1.*t235*t245*t3819*t5147 - 1.*t245*t5147*t5206*t5247 + t5147*t5565*t5674;
  p_output1(1)=0. - 1.*t235*t245*t5147*t5887 - 1.*t245*t5147*t5247*t6206 + t5147*t5674*t6397;
  p_output1(2)=0. - 1.*t235*t245*t5147*t6610 - 1.*t245*t5147*t5247*t6632 + t5147*t5674*t6748;
  p_output1(3)=0. + t5147*t5565*t7644 + t3819*t5147*t8038 + t5147*t5206*t8492;
  p_output1(4)=0. + t5147*t6397*t7644 + t5147*t5887*t8038 + t5147*t6206*t8492;
  p_output1(5)=0. + t5147*t6748*t7644 + t5147*t6610*t8038 + t5147*t6632*t8492;
  p_output1(6)=0. + t5147*t5565*t8584 + t3819*t5147*t8596 + t5147*t5206*t8622;
  p_output1(7)=0. + t5147*t6397*t8584 + t5147*t5887*t8596 + t5147*t6206*t8622;
  p_output1(8)=0. + t5147*t6748*t8584 + t5147*t6610*t8596 + t5147*t6632*t8622;
}


       
void R_RightToeBottom_to_LeftToeBottom(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
