/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:25:22 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jw_RightToeBottom_to_LeftToeBottom.h"

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
static void output1(Eigen::Matrix<double,3,14> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  double t118;
  double t349;
  double t399;
  double t278;
  double t411;
  double t116;
  double t567;
  double t605;
  double t626;
  double t382;
  double t423;
  double t447;
  double t675;
  double t92;
  double t719;
  double t732;
  double t772;
  double t539;
  double t679;
  double t716;
  double t800;
  double t58;
  double t850;
  double t884;
  double t912;
  double t717;
  double t831;
  double t832;
  double t913;
  double t849;
  double t920;
  double t1009;
  double t1030;
  double t1054;
  double t1071;
  double t1247;
  double t1264;
  double t1296;
  double t1311;
  double t32;
  double t1394;
  double t1644;
  double t1688;
  double t1695;
  double t1553;
  double t1571;
  double t1580;
  double t1771;
  double t1823;
  double t1844;
  double t1622;
  double t1699;
  double t1734;
  double t1943;
  double t1969;
  double t1975;
  double t1758;
  double t1866;
  double t1891;
  double t2203;
  double t2204;
  double t2214;
  double t1942;
  double t2092;
  double t2122;
  double t2530;
  double t2543;
  double t2565;
  double t2476;
  double t2515;
  double t2522;
  double t2600;
  double t2623;
  double t2628;
  double t2528;
  double t2570;
  double t2592;
  double t2681;
  double t2702;
  double t2715;
  double t2599;
  double t2641;
  double t2648;
  double t2743;
  double t2755;
  double t2758;
  double t2664;
  double t2722;
  double t2724;
  double t1433;
  double t1481;
  double t2127;
  double t2223;
  double t2239;
  double t2365;
  double t2366;
  double t2379;
  double t2742;
  double t2776;
  double t2777;
  double t2817;
  double t2832;
  double t2835;
  double t1409;
  double t1422;
  double t1330;
  double t1348;
  double t3019;
  double t45;
  double t3037;
  double t3055;
  double t2800;
  double t2842;
  double t2855;
  double t2264;
  double t2442;
  double t2457;
  double t3076;
  double t3118;
  double t1025;
  double t1079;
  double t1105;
  double t3160;
  double t3167;
  double t2945;
  double t2951;
  double t2964;
  double t2896;
  double t2899;
  double t2902;
  double t1108;
  double t1164;
  double t1169;
  double t3068;
  double t3138;
  double t3180;
  double t3190;
  double t3196;
  double t3241;
  double t3245;
  double t3247;
  double t3251;
  double t3269;
  double t3272;
  double t3282;
  double t3441;
  double t3475;
  double t3502;
  double t3704;
  double t3710;
  double t3625;
  double t3626;
  double t3694;
  double t3697;
  double t3660;
  double t3699;
  double t3717;
  double t3719;
  double t3723;
  double t3781;
  double t3793;
  double t3802;
  double t3818;
  double t3836;
  double t3858;
  double t3876;
  t118 = Cos(var1[8]);
  t349 = Cos(var1[10]);
  t399 = Sin(var1[9]);
  t278 = Cos(var1[9]);
  t411 = Sin(var1[10]);
  t116 = Cos(var1[11]);
  t567 = -1.*t118*t349*t399;
  t605 = -1.*t118*t278*t411;
  t626 = t567 + t605;
  t382 = t118*t278*t349;
  t423 = -1.*t118*t399*t411;
  t447 = t382 + t423;
  t675 = Sin(var1[11]);
  t92 = Cos(var1[12]);
  t719 = t116*t626;
  t732 = -1.*t447*t675;
  t772 = t719 + t732;
  t539 = t116*t447;
  t679 = t626*t675;
  t716 = t539 + t679;
  t800 = Sin(var1[12]);
  t58 = Cos(var1[13]);
  t850 = t92*t772;
  t884 = -1.*t716*t800;
  t912 = t850 + t884;
  t717 = t92*t716;
  t831 = t772*t800;
  t832 = t717 + t831;
  t913 = Sin(var1[13]);
  t849 = t58*t832;
  t920 = t912*t913;
  t1009 = t849 + t920;
  t1030 = t58*t912;
  t1054 = -1.*t832*t913;
  t1071 = t1030 + t1054;
  t1247 = Cos(var1[0]);
  t1264 = -1.*t1247;
  t1296 = 0. + t1264;
  t1311 = Sin(var1[7]);
  t32 = Sin(var1[8]);
  t1394 = Cos(var1[7]);
  t1644 = t1394*t278;
  t1688 = -1.*t1311*t32*t399;
  t1695 = t1644 + t1688;
  t1553 = t278*t1311*t32;
  t1571 = t1394*t399;
  t1580 = t1553 + t1571;
  t1771 = t349*t1695;
  t1823 = -1.*t1580*t411;
  t1844 = t1771 + t1823;
  t1622 = t349*t1580;
  t1699 = t1695*t411;
  t1734 = t1622 + t1699;
  t1943 = t116*t1844;
  t1969 = -1.*t1734*t675;
  t1975 = t1943 + t1969;
  t1758 = t116*t1734;
  t1866 = t1844*t675;
  t1891 = t1758 + t1866;
  t2203 = t92*t1975;
  t2204 = -1.*t1891*t800;
  t2214 = t2203 + t2204;
  t1942 = t92*t1891;
  t2092 = t1975*t800;
  t2122 = t1942 + t2092;
  t2530 = -1.*t278*t1311;
  t2543 = -1.*t1394*t32*t399;
  t2565 = t2530 + t2543;
  t2476 = t1394*t278*t32;
  t2515 = -1.*t1311*t399;
  t2522 = t2476 + t2515;
  t2600 = t349*t2565;
  t2623 = -1.*t2522*t411;
  t2628 = t2600 + t2623;
  t2528 = t349*t2522;
  t2570 = t2565*t411;
  t2592 = t2528 + t2570;
  t2681 = t116*t2628;
  t2702 = -1.*t2592*t675;
  t2715 = t2681 + t2702;
  t2599 = t116*t2592;
  t2641 = t2628*t675;
  t2648 = t2599 + t2641;
  t2743 = t92*t2715;
  t2755 = -1.*t2648*t800;
  t2758 = t2743 + t2755;
  t2664 = t92*t2648;
  t2722 = t2715*t800;
  t2724 = t2664 + t2722;
  t1433 = Sin(var1[0]);
  t1481 = 0. + t1433;
  t2127 = t58*t2122;
  t2223 = t2214*t913;
  t2239 = t2127 + t2223;
  t2365 = t58*t2214;
  t2366 = -1.*t2122*t913;
  t2379 = t2365 + t2366;
  t2742 = t58*t2724;
  t2776 = t2758*t913;
  t2777 = t2742 + t2776;
  t2817 = t58*t2758;
  t2832 = -1.*t2724*t913;
  t2835 = t2817 + t2832;
  t1409 = t1394*t118;
  t1422 = 0. + t1409;
  t1330 = t118*t1311;
  t1348 = 0. + t1330;
  t3019 = Cos(var1[1]);
  t45 = 0. + t32;
  t3037 = t1247*t3019;
  t3055 = 0. + t3037;
  t2800 = -0.642788*t2777;
  t2842 = -0.766044*t2835;
  t2855 = 0. + t2800 + t2842;
  t2264 = -0.642788*t2239;
  t2442 = -0.766044*t2379;
  t2457 = 0. + t2264 + t2442;
  t3076 = t3019*t1433;
  t3118 = 0. + t3076;
  t1025 = 0.642788*t1009;
  t1079 = 0.766044*t1071;
  t1105 = 0. + t1025 + t1079;
  t3160 = Sin(var1[1]);
  t3167 = 0. + t3160;
  t2945 = 0.766044*t2777;
  t2951 = -0.642788*t2835;
  t2964 = 0. + t2945 + t2951;
  t2896 = 0.766044*t2239;
  t2899 = -0.642788*t2379;
  t2902 = 0. + t2896 + t2899;
  t1108 = -0.766044*t1009;
  t1164 = 0.642788*t1071;
  t1169 = 0. + t1108 + t1164;
  t3068 = t1422*t3055;
  t3138 = t1348*t3118;
  t3180 = t45*t3167;
  t3190 = t3068 + t3138 + t3180;
  t3196 = t3055*t2855;
  t3241 = t2457*t3118;
  t3245 = t1105*t3167;
  t3247 = t3196 + t3241 + t3245;
  t3251 = t3055*t2964;
  t3269 = t2902*t3118;
  t3272 = t1169*t3167;
  t3282 = t3251 + t3269 + t3272;
  t3441 = -1.*t1311;
  t3475 = 0. + t3441;
  t3502 = 0. + t1394;
  t3704 = -1.*t32;
  t3710 = 0. + t3704;
  t3625 = -1.*t1394*t118;
  t3626 = 0. + t3625;
  t3694 = -1.*t118*t1311;
  t3697 = 0. + t3694;
  t3660 = t3626*t1422;
  t3699 = t3697*t1348;
  t3717 = t3710*t45;
  t3719 = t3660 + t3699 + t3717;
  t3723 = t3710*t1105;
  t3781 = t3626*t2855;
  t3793 = t3697*t2457;
  t3802 = t3723 + t3781 + t3793;
  t3818 = t3710*t1169;
  t3836 = t3626*t2964;
  t3858 = t3697*t2902;
  t3876 = t3818 + t3836 + t3858;

  p_output1(0)=t45;
  p_output1(1)=t1105;
  p_output1(2)=t1169;
  p_output1(3)=0. + t1296*t1348 + t1422*t1481;
  p_output1(4)=0. + t1296*t2457 + t1481*t2855;
  p_output1(5)=0. + t1296*t2902 + t1481*t2964;
  p_output1(6)=t3190;
  p_output1(7)=t3247;
  p_output1(8)=t3282;
  p_output1(9)=t3190;
  p_output1(10)=t3247;
  p_output1(11)=t3282;
  p_output1(12)=t3190;
  p_output1(13)=t3247;
  p_output1(14)=t3282;
  p_output1(15)=t3190;
  p_output1(16)=t3247;
  p_output1(17)=t3282;
  p_output1(18)=t3190;
  p_output1(19)=t3247;
  p_output1(20)=t3282;
  p_output1(21)=0. - 1.*t45;
  p_output1(22)=0. - 1.*t1105;
  p_output1(23)=0. - 1.*t1169;
  p_output1(24)=0. + t1422*t3475 + t1348*t3502;
  p_output1(25)=0. + t2855*t3475 + t2457*t3502;
  p_output1(26)=0. + t2964*t3475 + t2902*t3502;
  p_output1(27)=t3719;
  p_output1(28)=t3802;
  p_output1(29)=t3876;
  p_output1(30)=t3719;
  p_output1(31)=t3802;
  p_output1(32)=t3876;
  p_output1(33)=t3719;
  p_output1(34)=t3802;
  p_output1(35)=t3876;
  p_output1(36)=t3719;
  p_output1(37)=t3802;
  p_output1(38)=t3876;
  p_output1(39)=t3719;
  p_output1(40)=t3802;
  p_output1(41)=t3876;
}


       
void Jw_RightToeBottom_to_LeftToeBottom(Eigen::Matrix<double,3,14> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
