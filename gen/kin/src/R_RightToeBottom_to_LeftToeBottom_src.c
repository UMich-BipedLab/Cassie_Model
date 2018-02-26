/*
 * Automatically Generated from Mathematica.
 * Mon 26 Feb 2018 15:42:45 GMT-05:00
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
  double t946;
  double t1014;
  double t1152;
  double t991;
  double t1161;
  double t705;
  double t1438;
  double t1468;
  double t1528;
  double t1023;
  double t1237;
  double t1266;
  double t1594;
  double t429;
  double t1747;
  double t1802;
  double t1824;
  double t1417;
  double t1667;
  double t1693;
  double t1850;
  double t367;
  double t1890;
  double t1912;
  double t1949;
  double t1714;
  double t1854;
  double t1858;
  double t2085;
  double t2828;
  double t2671;
  double t2759;
  double t3104;
  double t3259;
  double t3319;
  double t2826;
  double t2854;
  double t2862;
  double t3680;
  double t3736;
  double t4341;
  double t2896;
  double t3356;
  double t3564;
  double t6201;
  double t6216;
  double t6248;
  double t3614;
  double t4759;
  double t5866;
  double t6301;
  double t6311;
  double t6314;
  double t6116;
  double t6264;
  double t6271;
  double t1889;
  double t2188;
  double t2253;
  double t2375;
  double t2537;
  double t2538;
  double t6295;
  double t6320;
  double t6323;
  double t6355;
  double t6371;
  double t6381;
  double t6460;
  double t6472;
  double t6480;
  double t6425;
  double t6435;
  double t6438;
  double t6538;
  double t6545;
  double t6547;
  double t6499;
  double t6509;
  double t6529;
  double t6573;
  double t6575;
  double t6583;
  double t6530;
  double t6556;
  double t6560;
  double t6602;
  double t6633;
  double t6638;
  double t6570;
  double t6589;
  double t6593;
  double t6656;
  double t6658;
  double t6659;
  double t6600;
  double t6649;
  double t6650;
  double t6343;
  double t6387;
  double t6407;
  double t2339;
  double t2558;
  double t2583;
  double t6652;
  double t6660;
  double t6666;
  double t6679;
  double t6680;
  double t6681;
  double t6672;
  double t6682;
  double t6699;
  double t6719;
  double t6743;
  double t6746;
  double t345;
  double t6762;
  double t6763;
  double t6494;
  double t6705;
  double t6706;
  double t6712;
  double t6718;
  double t6747;
  double t6748;
  double t6752;
  double t6765;
  double t6766;
  double t6769;
  double t6770;
  double t79;
  double t6775;
  double t6782;
  double t6778;
  double t6779;
  double t6780;
  double t6865;
  double t6858;
  double t6860;
  double t6868;
  double t6880;
  double t6863;
  double t6869;
  double t6871;
  double t6856;
  double t6881;
  double t6882;
  double t6883;
  double t6891;
  double t6876;
  double t6884;
  double t6885;
  double t6851;
  double t6892;
  double t6893;
  double t6895;
  double t6899;
  double t6890;
  double t6896;
  double t6897;
  double t6846;
  double t6900;
  double t6901;
  double t6902;
  double t6419;
  double t6481;
  double t6485;
  double t6915;
  double t6919;
  double t6920;
  double t6924;
  double t6925;
  double t6926;
  double t6923;
  double t6927;
  double t6928;
  double t6930;
  double t6931;
  double t6932;
  double t6929;
  double t6933;
  double t6934;
  double t6936;
  double t6937;
  double t6938;
  double t6935;
  double t6940;
  double t6941;
  double t6945;
  double t6948;
  double t6949;
  double t6772;
  double t6965;
  double t6966;
  double t6967;
  double t6969;
  double t6970;
  double t6971;
  double t6968;
  double t6972;
  double t6975;
  double t6977;
  double t6978;
  double t6979;
  double t6976;
  double t6980;
  double t6981;
  double t6985;
  double t6986;
  double t6987;
  double t6982;
  double t6988;
  double t6989;
  double t6991;
  double t6992;
  double t6993;
  double t6806;
  double t6810;
  double t6814;
  double t6898;
  double t6903;
  double t6904;
  double t6907;
  double t6908;
  double t6909;
  double t6910;
  double t6912;
  double t6913;
  double t6792;
  double t6793;
  double t6799;
  double t6942;
  double t6950;
  double t6951;
  double t6952;
  double t6955;
  double t6956;
  double t6957;
  double t6958;
  double t6959;
  double t6801;
  double t6802;
  double t6803;
  double t6990;
  double t6994;
  double t6996;
  double t6999;
  double t7000;
  double t7001;
  double t7002;
  double t7003;
  double t7004;
  double t6836;
  double t6840;
  double t6841;
  double t6819;
  double t6820;
  double t6825;
  double t6834;
  double t7017;
  double t7018;
  double t7019;
  double t7022;
  double t7023;
  double t7024;
  double t7026;
  double t7027;
  double t7028;
  t946 = Cos(var1[8]);
  t1014 = Cos(var1[10]);
  t1152 = Sin(var1[9]);
  t991 = Cos(var1[9]);
  t1161 = Sin(var1[10]);
  t705 = Cos(var1[11]);
  t1438 = -1.*t946*t1014*t1152;
  t1468 = -1.*t946*t991*t1161;
  t1528 = t1438 + t1468;
  t1023 = t946*t991*t1014;
  t1237 = -1.*t946*t1152*t1161;
  t1266 = t1023 + t1237;
  t1594 = Sin(var1[11]);
  t429 = Cos(var1[12]);
  t1747 = t705*t1528;
  t1802 = -1.*t1266*t1594;
  t1824 = t1747 + t1802;
  t1417 = t705*t1266;
  t1667 = t1528*t1594;
  t1693 = t1417 + t1667;
  t1850 = Sin(var1[12]);
  t367 = Cos(var1[13]);
  t1890 = t429*t1824;
  t1912 = -1.*t1693*t1850;
  t1949 = t1890 + t1912;
  t1714 = t429*t1693;
  t1854 = t1824*t1850;
  t1858 = t1714 + t1854;
  t2085 = Sin(var1[13]);
  t2828 = Cos(var1[7]);
  t2671 = Sin(var1[7]);
  t2759 = Sin(var1[8]);
  t3104 = t2828*t991;
  t3259 = -1.*t2671*t2759*t1152;
  t3319 = t3104 + t3259;
  t2826 = t991*t2671*t2759;
  t2854 = t2828*t1152;
  t2862 = t2826 + t2854;
  t3680 = t1014*t3319;
  t3736 = -1.*t2862*t1161;
  t4341 = t3680 + t3736;
  t2896 = t1014*t2862;
  t3356 = t3319*t1161;
  t3564 = t2896 + t3356;
  t6201 = t705*t4341;
  t6216 = -1.*t3564*t1594;
  t6248 = t6201 + t6216;
  t3614 = t705*t3564;
  t4759 = t4341*t1594;
  t5866 = t3614 + t4759;
  t6301 = t429*t6248;
  t6311 = -1.*t5866*t1850;
  t6314 = t6301 + t6311;
  t6116 = t429*t5866;
  t6264 = t6248*t1850;
  t6271 = t6116 + t6264;
  t1889 = t367*t1858;
  t2188 = t1949*t2085;
  t2253 = t1889 + t2188;
  t2375 = t367*t1949;
  t2537 = -1.*t1858*t2085;
  t2538 = t2375 + t2537;
  t6295 = t367*t6271;
  t6320 = t6314*t2085;
  t6323 = t6295 + t6320;
  t6355 = t367*t6314;
  t6371 = -1.*t6271*t2085;
  t6381 = t6355 + t6371;
  t6460 = 0.642788*t6323;
  t6472 = 0.766044*t6381;
  t6480 = t6460 + t6472;
  t6425 = -0.766044*t2253;
  t6435 = 0.642788*t2538;
  t6438 = t6425 + t6435;
  t6538 = -1.*t991*t2671;
  t6545 = -1.*t2828*t2759*t1152;
  t6547 = t6538 + t6545;
  t6499 = t2828*t991*t2759;
  t6509 = -1.*t2671*t1152;
  t6529 = t6499 + t6509;
  t6573 = t1014*t6547;
  t6575 = -1.*t6529*t1161;
  t6583 = t6573 + t6575;
  t6530 = t1014*t6529;
  t6556 = t6547*t1161;
  t6560 = t6530 + t6556;
  t6602 = t705*t6583;
  t6633 = -1.*t6560*t1594;
  t6638 = t6602 + t6633;
  t6570 = t705*t6560;
  t6589 = t6583*t1594;
  t6593 = t6570 + t6589;
  t6656 = t429*t6638;
  t6658 = -1.*t6593*t1850;
  t6659 = t6656 + t6658;
  t6600 = t429*t6593;
  t6649 = t6638*t1850;
  t6650 = t6600 + t6649;
  t6343 = -0.766044*t6323;
  t6387 = 0.642788*t6381;
  t6407 = t6343 + t6387;
  t2339 = 0.642788*t2253;
  t2558 = 0.766044*t2538;
  t2583 = t2339 + t2558;
  t6652 = t367*t6650;
  t6660 = t6659*t2085;
  t6666 = t6652 + t6660;
  t6679 = t367*t6659;
  t6680 = -1.*t6650*t2085;
  t6681 = t6679 + t6680;
  t6672 = -0.766044*t6666;
  t6682 = 0.642788*t6681;
  t6699 = t6672 + t6682;
  t6719 = 0.642788*t6666;
  t6743 = 0.766044*t6681;
  t6746 = t6719 + t6743;
  t345 = Cos(var1[1]);
  t6762 = t2583*t6699;
  t6763 = -1.*t6438*t6746;
  t6494 = t2828*t946*t6438;
  t6705 = t2759*t6699;
  t6706 = t6494 + t6705;
  t6712 = -1.*t6480*t6706;
  t6718 = t2828*t946*t2583;
  t6747 = t2759*t6746;
  t6748 = t6718 + t6747;
  t6752 = t6407*t6748;
  t6765 = t6762 + t6763;
  t6766 = -1.*t946*t2671*t6765;
  t6769 = 0. + t6712 + t6752 + t6766;
  t6770 = 1/t6769;
  t79 = Cos(var1[0]);
  t6775 = Sin(var1[0]);
  t6782 = Sin(var1[1]);
  t6778 = t6746*t6407;
  t6779 = -1.*t6699*t6480;
  t6780 = 0. + t6778 + t6779;
  t6865 = Cos(var1[3]);
  t6858 = Cos(var1[2]);
  t6860 = Sin(var1[3]);
  t6868 = Sin(var1[2]);
  t6880 = Cos(var1[4]);
  t6863 = -1.*t345*t6858*t6860;
  t6869 = -1.*t6865*t345*t6868;
  t6871 = t6863 + t6869;
  t6856 = Sin(var1[4]);
  t6881 = t6865*t345*t6858;
  t6882 = -1.*t345*t6860*t6868;
  t6883 = t6881 + t6882;
  t6891 = Cos(var1[5]);
  t6876 = t6856*t6871;
  t6884 = t6880*t6883;
  t6885 = t6876 + t6884;
  t6851 = Sin(var1[5]);
  t6892 = t6880*t6871;
  t6893 = -1.*t6856*t6883;
  t6895 = t6892 + t6893;
  t6899 = Cos(var1[6]);
  t6890 = -1.*t6851*t6885;
  t6896 = t6891*t6895;
  t6897 = t6890 + t6896;
  t6846 = Sin(var1[6]);
  t6900 = t6891*t6885;
  t6901 = t6851*t6895;
  t6902 = t6900 + t6901;
  t6419 = -1.*t2583*t6407;
  t6481 = t6438*t6480;
  t6485 = 0. + t6419 + t6481;
  t6915 = t79*t6858*t6782;
  t6919 = -1.*t6775*t6868;
  t6920 = t6915 + t6919;
  t6924 = -1.*t6858*t6775;
  t6925 = -1.*t79*t6782*t6868;
  t6926 = t6924 + t6925;
  t6923 = -1.*t6860*t6920;
  t6927 = t6865*t6926;
  t6928 = t6923 + t6927;
  t6930 = t6865*t6920;
  t6931 = t6860*t6926;
  t6932 = t6930 + t6931;
  t6929 = t6856*t6928;
  t6933 = t6880*t6932;
  t6934 = t6929 + t6933;
  t6936 = t6880*t6928;
  t6937 = -1.*t6856*t6932;
  t6938 = t6936 + t6937;
  t6935 = -1.*t6851*t6934;
  t6940 = t6891*t6938;
  t6941 = t6935 + t6940;
  t6945 = t6891*t6934;
  t6948 = t6851*t6938;
  t6949 = t6945 + t6948;
  t6772 = 0. + t6762 + t6763;
  t6965 = t6858*t6775*t6782;
  t6966 = t79*t6868;
  t6967 = t6965 + t6966;
  t6969 = t79*t6858;
  t6970 = -1.*t6775*t6782*t6868;
  t6971 = t6969 + t6970;
  t6968 = -1.*t6860*t6967;
  t6972 = t6865*t6971;
  t6975 = t6968 + t6972;
  t6977 = t6865*t6967;
  t6978 = t6860*t6971;
  t6979 = t6977 + t6978;
  t6976 = t6856*t6975;
  t6980 = t6880*t6979;
  t6981 = t6976 + t6980;
  t6985 = t6880*t6975;
  t6986 = -1.*t6856*t6979;
  t6987 = t6985 + t6986;
  t6982 = -1.*t6851*t6981;
  t6988 = t6891*t6987;
  t6989 = t6982 + t6988;
  t6991 = t6891*t6981;
  t6992 = t6851*t6987;
  t6993 = t6991 + t6992;
  t6806 = -1.*t946*t2671*t6699;
  t6810 = t2828*t946*t6407;
  t6814 = 0. + t6806 + t6810;
  t6898 = t6846*t6897;
  t6903 = t6899*t6902;
  t6904 = t6898 + t6903;
  t6907 = 0.642788*t6904;
  t6908 = t6899*t6897;
  t6909 = -1.*t6846*t6902;
  t6910 = t6908 + t6909;
  t6912 = 0.766044*t6910;
  t6913 = t6907 + t6912;
  t6792 = t946*t2671*t6438;
  t6793 = t2759*t6407;
  t6799 = 0. + t6792 + t6793;
  t6942 = t6846*t6941;
  t6950 = t6899*t6949;
  t6951 = t6942 + t6950;
  t6952 = 0.642788*t6951;
  t6955 = t6899*t6941;
  t6956 = -1.*t6846*t6949;
  t6957 = t6955 + t6956;
  t6958 = 0.766044*t6957;
  t6959 = t6952 + t6958;
  t6801 = -1.*t2828*t946*t6438;
  t6802 = -1.*t2759*t6699;
  t6803 = 0. + t6801 + t6802;
  t6990 = t6846*t6989;
  t6994 = t6899*t6993;
  t6996 = t6990 + t6994;
  t6999 = 0.642788*t6996;
  t7000 = t6899*t6989;
  t7001 = -1.*t6846*t6993;
  t7002 = t7000 + t7001;
  t7003 = 0.766044*t7002;
  t7004 = t6999 + t7003;
  t6836 = t946*t2671*t6746;
  t6840 = -1.*t2828*t946*t6480;
  t6841 = 0. + t6836 + t6840;
  t6819 = -1.*t946*t2671*t2583;
  t6820 = -1.*t2759*t6480;
  t6825 = 0. + t6819 + t6820;
  t6834 = 0. + t6718 + t6747;
  t7017 = -0.766044*t6904;
  t7018 = 0.642788*t6910;
  t7019 = t7017 + t7018;
  t7022 = -0.766044*t6951;
  t7023 = 0.642788*t6957;
  t7024 = t7022 + t7023;
  t7026 = -0.766044*t6996;
  t7027 = 0.642788*t7002;
  t7028 = t7026 + t7027;
  p_output1[0]=0. - 1.*t345*t6770*t6772*t6775 + t6770*t6780*t6782 - 1.*t345*t6485*t6770*t79;
  p_output1[1]=0. - 1.*t345*t6770*t6775*t6803 + t6770*t6782*t6814 - 1.*t345*t6770*t6799*t79;
  p_output1[2]=0. - 1.*t345*t6770*t6775*t6834 + t6770*t6782*t6841 - 1.*t345*t6770*t6825*t79;
  p_output1[3]=0. + t6770*t6780*t6913 + t6485*t6770*t6959 + t6770*t6772*t7004;
  p_output1[4]=0. + t6770*t6814*t6913 + t6770*t6799*t6959 + t6770*t6803*t7004;
  p_output1[5]=0. + t6770*t6841*t6913 + t6770*t6825*t6959 + t6770*t6834*t7004;
  p_output1[6]=0. + t6770*t6780*t7019 + t6485*t6770*t7024 + t6770*t6772*t7028;
  p_output1[7]=0. + t6770*t6814*t7019 + t6770*t6799*t7024 + t6770*t6803*t7028;
  p_output1[8]=0. + t6770*t6841*t7019 + t6770*t6825*t7024 + t6770*t6834*t7028;
}



void R_RightToeBottom_to_LeftToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
