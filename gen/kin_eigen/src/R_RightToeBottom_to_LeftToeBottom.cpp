/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:25:18 GMT-05:00
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
  double t366;
  double t456;
  double t458;
  double t431;
  double t474;
  double t354;
  double t817;
  double t824;
  double t843;
  double t457;
  double t615;
  double t752;
  double t981;
  double t305;
  double t1107;
  double t1117;
  double t1183;
  double t754;
  double t1046;
  double t1076;
  double t1184;
  double t233;
  double t1327;
  double t1356;
  double t1367;
  double t1093;
  double t1204;
  double t1223;
  double t1387;
  double t1829;
  double t1720;
  double t1745;
  double t1950;
  double t1982;
  double t2030;
  double t1791;
  double t1831;
  double t1860;
  double t2117;
  double t2208;
  double t2236;
  double t1875;
  double t2032;
  double t2053;
  double t2338;
  double t2348;
  double t2387;
  double t2085;
  double t2267;
  double t2300;
  double t2543;
  double t2549;
  double t2556;
  double t2302;
  double t2416;
  double t2485;
  double t1230;
  double t1391;
  double t1507;
  double t1519;
  double t1570;
  double t1610;
  double t2507;
  double t2586;
  double t2588;
  double t2618;
  double t2643;
  double t2715;
  double t2885;
  double t2906;
  double t2908;
  double t2819;
  double t2849;
  double t2874;
  double t3036;
  double t3088;
  double t3126;
  double t2994;
  double t3009;
  double t3015;
  double t3178;
  double t3210;
  double t3251;
  double t3034;
  double t3131;
  double t3139;
  double t3354;
  double t3386;
  double t3458;
  double t3170;
  double t3265;
  double t3278;
  double t3559;
  double t3568;
  double t3585;
  double t3340;
  double t3463;
  double t3473;
  double t2591;
  double t2748;
  double t2756;
  double t1517;
  double t1611;
  double t1658;
  double t3493;
  double t3619;
  double t3629;
  double t3660;
  double t3678;
  double t3697;
  double t3634;
  double t3714;
  double t3745;
  double t4008;
  double t4010;
  double t4016;
  double t198;
  double t4058;
  double t4100;
  double t2971;
  double t3797;
  double t3819;
  double t3834;
  double t3952;
  double t4022;
  double t4035;
  double t4044;
  double t4160;
  double t4161;
  double t4208;
  double t4247;
  double t68;
  double t4376;
  double t4641;
  double t4469;
  double t4533;
  double t4569;
  double t6053;
  double t5861;
  double t5874;
  double t6112;
  double t6176;
  double t5949;
  double t6140;
  double t6147;
  double t5840;
  double t6184;
  double t6249;
  double t6274;
  double t6454;
  double t6165;
  double t6290;
  double t6296;
  double t5823;
  double t6483;
  double t6498;
  double t6544;
  double t6601;
  double t6309;
  double t6582;
  double t6584;
  double t5810;
  double t6613;
  double t6654;
  double t6664;
  double t2805;
  double t2922;
  double t2944;
  double t6881;
  double t6885;
  double t6899;
  double t6919;
  double t6922;
  double t6935;
  double t6904;
  double t6947;
  double t6961;
  double t7171;
  double t7186;
  double t7192;
  double t7105;
  double t7194;
  double t7222;
  double t7238;
  double t7283;
  double t7293;
  double t7229;
  double t7358;
  double t7360;
  double t7429;
  double t7466;
  double t7473;
  double t4304;
  double t7823;
  double t7829;
  double t7830;
  double t7833;
  double t7843;
  double t7846;
  double t7832;
  double t7859;
  double t7887;
  double t7906;
  double t7908;
  double t7912;
  double t7890;
  double t7933;
  double t7937;
  double t7964;
  double t7969;
  double t7970;
  double t7951;
  double t7972;
  double t7974;
  double t7984;
  double t7985;
  double t7996;
  double t5048;
  double t5060;
  double t5070;
  double t6598;
  double t6689;
  double t6697;
  double t6735;
  double t6741;
  double t6771;
  double t6781;
  double t6828;
  double t6846;
  double t4765;
  double t4804;
  double t4807;
  double t7385;
  double t7530;
  double t7577;
  double t7649;
  double t7650;
  double t7664;
  double t7684;
  double t7739;
  double t7773;
  double t4872;
  double t4939;
  double t4989;
  double t7978;
  double t8011;
  double t8014;
  double t8017;
  double t8018;
  double t8027;
  double t8028;
  double t8030;
  double t8042;
  double t5632;
  double t5727;
  double t5733;
  double t5368;
  double t5392;
  double t5412;
  double t5538;
  double t8080;
  double t8082;
  double t8083;
  double t8087;
  double t8090;
  double t8095;
  double t8106;
  double t8107;
  double t8110;
  t366 = Cos(var1[8]);
  t456 = Cos(var1[10]);
  t458 = Sin(var1[9]);
  t431 = Cos(var1[9]);
  t474 = Sin(var1[10]);
  t354 = Cos(var1[11]);
  t817 = -1.*t366*t456*t458;
  t824 = -1.*t366*t431*t474;
  t843 = t817 + t824;
  t457 = t366*t431*t456;
  t615 = -1.*t366*t458*t474;
  t752 = t457 + t615;
  t981 = Sin(var1[11]);
  t305 = Cos(var1[12]);
  t1107 = t354*t843;
  t1117 = -1.*t752*t981;
  t1183 = t1107 + t1117;
  t754 = t354*t752;
  t1046 = t843*t981;
  t1076 = t754 + t1046;
  t1184 = Sin(var1[12]);
  t233 = Cos(var1[13]);
  t1327 = t305*t1183;
  t1356 = -1.*t1076*t1184;
  t1367 = t1327 + t1356;
  t1093 = t305*t1076;
  t1204 = t1183*t1184;
  t1223 = t1093 + t1204;
  t1387 = Sin(var1[13]);
  t1829 = Cos(var1[7]);
  t1720 = Sin(var1[7]);
  t1745 = Sin(var1[8]);
  t1950 = t1829*t431;
  t1982 = -1.*t1720*t1745*t458;
  t2030 = t1950 + t1982;
  t1791 = t431*t1720*t1745;
  t1831 = t1829*t458;
  t1860 = t1791 + t1831;
  t2117 = t456*t2030;
  t2208 = -1.*t1860*t474;
  t2236 = t2117 + t2208;
  t1875 = t456*t1860;
  t2032 = t2030*t474;
  t2053 = t1875 + t2032;
  t2338 = t354*t2236;
  t2348 = -1.*t2053*t981;
  t2387 = t2338 + t2348;
  t2085 = t354*t2053;
  t2267 = t2236*t981;
  t2300 = t2085 + t2267;
  t2543 = t305*t2387;
  t2549 = -1.*t2300*t1184;
  t2556 = t2543 + t2549;
  t2302 = t305*t2300;
  t2416 = t2387*t1184;
  t2485 = t2302 + t2416;
  t1230 = t233*t1223;
  t1391 = t1367*t1387;
  t1507 = t1230 + t1391;
  t1519 = t233*t1367;
  t1570 = -1.*t1223*t1387;
  t1610 = t1519 + t1570;
  t2507 = t233*t2485;
  t2586 = t2556*t1387;
  t2588 = t2507 + t2586;
  t2618 = t233*t2556;
  t2643 = -1.*t2485*t1387;
  t2715 = t2618 + t2643;
  t2885 = 0.642788*t2588;
  t2906 = 0.766044*t2715;
  t2908 = t2885 + t2906;
  t2819 = -0.766044*t1507;
  t2849 = 0.642788*t1610;
  t2874 = t2819 + t2849;
  t3036 = -1.*t431*t1720;
  t3088 = -1.*t1829*t1745*t458;
  t3126 = t3036 + t3088;
  t2994 = t1829*t431*t1745;
  t3009 = -1.*t1720*t458;
  t3015 = t2994 + t3009;
  t3178 = t456*t3126;
  t3210 = -1.*t3015*t474;
  t3251 = t3178 + t3210;
  t3034 = t456*t3015;
  t3131 = t3126*t474;
  t3139 = t3034 + t3131;
  t3354 = t354*t3251;
  t3386 = -1.*t3139*t981;
  t3458 = t3354 + t3386;
  t3170 = t354*t3139;
  t3265 = t3251*t981;
  t3278 = t3170 + t3265;
  t3559 = t305*t3458;
  t3568 = -1.*t3278*t1184;
  t3585 = t3559 + t3568;
  t3340 = t305*t3278;
  t3463 = t3458*t1184;
  t3473 = t3340 + t3463;
  t2591 = -0.766044*t2588;
  t2748 = 0.642788*t2715;
  t2756 = t2591 + t2748;
  t1517 = 0.642788*t1507;
  t1611 = 0.766044*t1610;
  t1658 = t1517 + t1611;
  t3493 = t233*t3473;
  t3619 = t3585*t1387;
  t3629 = t3493 + t3619;
  t3660 = t233*t3585;
  t3678 = -1.*t3473*t1387;
  t3697 = t3660 + t3678;
  t3634 = -0.766044*t3629;
  t3714 = 0.642788*t3697;
  t3745 = t3634 + t3714;
  t4008 = 0.642788*t3629;
  t4010 = 0.766044*t3697;
  t4016 = t4008 + t4010;
  t198 = Cos(var1[1]);
  t4058 = t1658*t3745;
  t4100 = -1.*t2874*t4016;
  t2971 = t1829*t366*t2874;
  t3797 = t1745*t3745;
  t3819 = t2971 + t3797;
  t3834 = -1.*t2908*t3819;
  t3952 = t1829*t366*t1658;
  t4022 = t1745*t4016;
  t4035 = t3952 + t4022;
  t4044 = t2756*t4035;
  t4160 = t4058 + t4100;
  t4161 = -1.*t366*t1720*t4160;
  t4208 = 0. + t3834 + t4044 + t4161;
  t4247 = 1/t4208;
  t68 = Cos(var1[0]);
  t4376 = Sin(var1[0]);
  t4641 = Sin(var1[1]);
  t4469 = t4016*t2756;
  t4533 = -1.*t3745*t2908;
  t4569 = 0. + t4469 + t4533;
  t6053 = Cos(var1[3]);
  t5861 = Cos(var1[2]);
  t5874 = Sin(var1[3]);
  t6112 = Sin(var1[2]);
  t6176 = Cos(var1[4]);
  t5949 = -1.*t198*t5861*t5874;
  t6140 = -1.*t6053*t198*t6112;
  t6147 = t5949 + t6140;
  t5840 = Sin(var1[4]);
  t6184 = t6053*t198*t5861;
  t6249 = -1.*t198*t5874*t6112;
  t6274 = t6184 + t6249;
  t6454 = Cos(var1[5]);
  t6165 = t5840*t6147;
  t6290 = t6176*t6274;
  t6296 = t6165 + t6290;
  t5823 = Sin(var1[5]);
  t6483 = t6176*t6147;
  t6498 = -1.*t5840*t6274;
  t6544 = t6483 + t6498;
  t6601 = Cos(var1[6]);
  t6309 = -1.*t5823*t6296;
  t6582 = t6454*t6544;
  t6584 = t6309 + t6582;
  t5810 = Sin(var1[6]);
  t6613 = t6454*t6296;
  t6654 = t5823*t6544;
  t6664 = t6613 + t6654;
  t2805 = -1.*t1658*t2756;
  t2922 = t2874*t2908;
  t2944 = 0. + t2805 + t2922;
  t6881 = t68*t5861*t4641;
  t6885 = -1.*t4376*t6112;
  t6899 = t6881 + t6885;
  t6919 = -1.*t5861*t4376;
  t6922 = -1.*t68*t4641*t6112;
  t6935 = t6919 + t6922;
  t6904 = -1.*t5874*t6899;
  t6947 = t6053*t6935;
  t6961 = t6904 + t6947;
  t7171 = t6053*t6899;
  t7186 = t5874*t6935;
  t7192 = t7171 + t7186;
  t7105 = t5840*t6961;
  t7194 = t6176*t7192;
  t7222 = t7105 + t7194;
  t7238 = t6176*t6961;
  t7283 = -1.*t5840*t7192;
  t7293 = t7238 + t7283;
  t7229 = -1.*t5823*t7222;
  t7358 = t6454*t7293;
  t7360 = t7229 + t7358;
  t7429 = t6454*t7222;
  t7466 = t5823*t7293;
  t7473 = t7429 + t7466;
  t4304 = 0. + t4058 + t4100;
  t7823 = t5861*t4376*t4641;
  t7829 = t68*t6112;
  t7830 = t7823 + t7829;
  t7833 = t68*t5861;
  t7843 = -1.*t4376*t4641*t6112;
  t7846 = t7833 + t7843;
  t7832 = -1.*t5874*t7830;
  t7859 = t6053*t7846;
  t7887 = t7832 + t7859;
  t7906 = t6053*t7830;
  t7908 = t5874*t7846;
  t7912 = t7906 + t7908;
  t7890 = t5840*t7887;
  t7933 = t6176*t7912;
  t7937 = t7890 + t7933;
  t7964 = t6176*t7887;
  t7969 = -1.*t5840*t7912;
  t7970 = t7964 + t7969;
  t7951 = -1.*t5823*t7937;
  t7972 = t6454*t7970;
  t7974 = t7951 + t7972;
  t7984 = t6454*t7937;
  t7985 = t5823*t7970;
  t7996 = t7984 + t7985;
  t5048 = -1.*t366*t1720*t3745;
  t5060 = t1829*t366*t2756;
  t5070 = 0. + t5048 + t5060;
  t6598 = t5810*t6584;
  t6689 = t6601*t6664;
  t6697 = t6598 + t6689;
  t6735 = 0.642788*t6697;
  t6741 = t6601*t6584;
  t6771 = -1.*t5810*t6664;
  t6781 = t6741 + t6771;
  t6828 = 0.766044*t6781;
  t6846 = t6735 + t6828;
  t4765 = t366*t1720*t2874;
  t4804 = t1745*t2756;
  t4807 = 0. + t4765 + t4804;
  t7385 = t5810*t7360;
  t7530 = t6601*t7473;
  t7577 = t7385 + t7530;
  t7649 = 0.642788*t7577;
  t7650 = t6601*t7360;
  t7664 = -1.*t5810*t7473;
  t7684 = t7650 + t7664;
  t7739 = 0.766044*t7684;
  t7773 = t7649 + t7739;
  t4872 = -1.*t1829*t366*t2874;
  t4939 = -1.*t1745*t3745;
  t4989 = 0. + t4872 + t4939;
  t7978 = t5810*t7974;
  t8011 = t6601*t7996;
  t8014 = t7978 + t8011;
  t8017 = 0.642788*t8014;
  t8018 = t6601*t7974;
  t8027 = -1.*t5810*t7996;
  t8028 = t8018 + t8027;
  t8030 = 0.766044*t8028;
  t8042 = t8017 + t8030;
  t5632 = t366*t1720*t4016;
  t5727 = -1.*t1829*t366*t2908;
  t5733 = 0. + t5632 + t5727;
  t5368 = -1.*t366*t1720*t1658;
  t5392 = -1.*t1745*t2908;
  t5412 = 0. + t5368 + t5392;
  t5538 = 0. + t3952 + t4022;
  t8080 = -0.766044*t6697;
  t8082 = 0.642788*t6781;
  t8083 = t8080 + t8082;
  t8087 = -0.766044*t7577;
  t8090 = 0.642788*t7684;
  t8095 = t8087 + t8090;
  t8106 = -0.766044*t8014;
  t8107 = 0.642788*t8028;
  t8110 = t8106 + t8107;

  p_output1(0)=0. - 1.*t198*t4247*t4304*t4376 + t4247*t4569*t4641 - 1.*t198*t2944*t4247*t68;
  p_output1(1)=0. - 1.*t198*t4247*t4376*t4989 + t4247*t4641*t5070 - 1.*t198*t4247*t4807*t68;
  p_output1(2)=0. - 1.*t198*t4247*t4376*t5538 + t4247*t4641*t5733 - 1.*t198*t4247*t5412*t68;
  p_output1(3)=0. + t4247*t4569*t6846 + t2944*t4247*t7773 + t4247*t4304*t8042;
  p_output1(4)=0. + t4247*t5070*t6846 + t4247*t4807*t7773 + t4247*t4989*t8042;
  p_output1(5)=0. + t4247*t5733*t6846 + t4247*t5412*t7773 + t4247*t5538*t8042;
  p_output1(6)=0. + t4247*t4569*t8083 + t2944*t4247*t8095 + t4247*t4304*t8110;
  p_output1(7)=0. + t4247*t5070*t8083 + t4247*t4807*t8095 + t4247*t4989*t8110;
  p_output1(8)=0. + t4247*t5733*t8083 + t4247*t5412*t8095 + t4247*t5538*t8110;
}


       
void R_RightToeBottom_to_LeftToeBottom(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
