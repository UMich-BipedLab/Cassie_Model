/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:11:43 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "J_knee_joint_right_src.h"

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
  double t2483;
  double t6570;
  double t6554;
  double t6555;
  double t6578;
  double t484;
  double t648;
  double t676;
  double t1093;
  double t6510;
  double t6557;
  double t6579;
  double t6581;
  double t6583;
  double t6601;
  double t6602;
  double t6603;
  double t354;
  double t6611;
  double t6613;
  double t6614;
  double t6618;
  double t6624;
  double t6625;
  double t6629;
  double t6633;
  double t6634;
  double t6635;
  double t6647;
  double t6649;
  double t6650;
  double t682;
  double t1900;
  double t2034;
  double t6530;
  double t6532;
  double t6585;
  double t6586;
  double t6592;
  double t6598;
  double t6608;
  double t6609;
  double t6610;
  double t6670;
  double t6672;
  double t6673;
  double t6675;
  double t6676;
  double t6677;
  double t6627;
  double t6630;
  double t6631;
  double t6679;
  double t6680;
  double t6681;
  double t6643;
  double t6645;
  double t6646;
  double t6685;
  double t6686;
  double t6687;
  double t6695;
  double t6696;
  double t6697;
  double t6713;
  double t6714;
  double t6715;
  double t6717;
  double t6719;
  double t6721;
  double t6727;
  double t6728;
  double t6729;
  double t6749;
  double t6750;
  double t6751;
  double t6753;
  double t6754;
  double t6755;
  double t6762;
  double t6763;
  double t6765;
  double t6781;
  double t6782;
  double t6785;
  double t6789;
  double t6790;
  double t6791;
  double t6798;
  double t6799;
  double t6800;
  double t6821;
  double t6823;
  double t6825;
  double t6833;
  double t6834;
  double t6827;
  double t6830;
  double t6831;
  double t6850;
  double t6853;
  double t6854;
  double t6860;
  double t6861;
  double t6862;
  double t6857;
  double t6858;
  double t6882;
  double t6883;
  double t6884;
  double t6878;
  double t6879;
  double t6880;
  double t6902;
  double t6903;
  double t6918;
  double t6919;
  double t6920;
  double t6925;
  double t6926;
  double t6922;
  double t6923;
  double t6881;
  double t6885;
  double t6887;
  double t6889;
  double t6890;
  double t6891;
  double t6892;
  double t6893;
  double t6894;
  double t6895;
  double t6896;
  double t6897;
  double t6689;
  double t6691;
  double t6693;
  double t6945;
  double t6946;
  double t6947;
  double t6949;
  double t6950;
  double t6961;
  double t6962;
  double t6963;
  double t6965;
  double t6966;
  double t6967;
  double t6976;
  double t6977;
  double t6978;
  double t6980;
  double t6981;
  double t6982;
  double t6703;
  double t6704;
  double t6705;
  double t6991;
  double t6992;
  double t6994;
  double t6995;
  double t6996;
  double t7005;
  double t7006;
  double t7007;
  double t7019;
  double t7020;
  double t7021;
  t2483 = Sin(var1[3]);
  t6570 = Cos(var1[3]);
  t6554 = Cos(var1[5]);
  t6555 = Sin(var1[4]);
  t6578 = Sin(var1[5]);
  t484 = Cos(var1[14]);
  t648 = -1.*t484;
  t676 = 1. + t648;
  t1093 = Sin(var1[14]);
  t6510 = Sin(var1[13]);
  t6557 = -1.*t6554*t2483*t6555;
  t6579 = t6570*t6578;
  t6581 = t6557 + t6579;
  t6583 = Cos(var1[13]);
  t6601 = -1.*t6570*t6554;
  t6602 = -1.*t2483*t6555*t6578;
  t6603 = t6601 + t6602;
  t354 = Cos(var1[4]);
  t6611 = t6510*t6581;
  t6613 = t6583*t6603;
  t6614 = t6611 + t6613;
  t6618 = Cos(var1[15]);
  t6624 = -1.*t6618;
  t6625 = 1. + t6624;
  t6629 = Sin(var1[15]);
  t6633 = t6583*t6581;
  t6634 = -1.*t6510*t6603;
  t6635 = t6633 + t6634;
  t6647 = -1.*t484*t354*t2483;
  t6649 = t1093*t6614;
  t6650 = t6647 + t6649;
  t682 = -0.049*t676;
  t1900 = -0.135*t1093;
  t2034 = 0. + t682 + t1900;
  t6530 = 0.135*t6510;
  t6532 = 0. + t6530;
  t6585 = -1.*t6583;
  t6586 = 1. + t6585;
  t6592 = -0.135*t6586;
  t6598 = 0. + t6592;
  t6608 = -0.135*t676;
  t6609 = 0.049*t1093;
  t6610 = 0. + t6608 + t6609;
  t6670 = t6570*t6554*t6555;
  t6672 = t2483*t6578;
  t6673 = t6670 + t6672;
  t6675 = -1.*t6554*t2483;
  t6676 = t6570*t6555*t6578;
  t6677 = t6675 + t6676;
  t6627 = -0.09*t6625;
  t6630 = 0.049*t6629;
  t6631 = 0. + t6627 + t6630;
  t6679 = t6510*t6673;
  t6680 = t6583*t6677;
  t6681 = t6679 + t6680;
  t6643 = -0.049*t6625;
  t6645 = -0.09*t6629;
  t6646 = 0. + t6643 + t6645;
  t6685 = t6583*t6673;
  t6686 = -1.*t6510*t6677;
  t6687 = t6685 + t6686;
  t6695 = t484*t6570*t354;
  t6696 = t1093*t6681;
  t6697 = t6695 + t6696;
  t6713 = t6570*t354*t6554*t6510;
  t6714 = t6583*t6570*t354*t6578;
  t6715 = t6713 + t6714;
  t6717 = t6583*t6570*t354*t6554;
  t6719 = -1.*t6570*t354*t6510*t6578;
  t6721 = t6717 + t6719;
  t6727 = -1.*t484*t6570*t6555;
  t6728 = t1093*t6715;
  t6729 = t6727 + t6728;
  t6749 = t354*t6554*t6510*t2483;
  t6750 = t6583*t354*t2483*t6578;
  t6751 = t6749 + t6750;
  t6753 = t6583*t354*t6554*t2483;
  t6754 = -1.*t354*t6510*t2483*t6578;
  t6755 = t6753 + t6754;
  t6762 = -1.*t484*t2483*t6555;
  t6763 = t1093*t6751;
  t6765 = t6762 + t6763;
  t6781 = -1.*t6554*t6510*t6555;
  t6782 = -1.*t6583*t6555*t6578;
  t6785 = t6781 + t6782;
  t6789 = -1.*t6583*t6554*t6555;
  t6790 = t6510*t6555*t6578;
  t6791 = t6789 + t6790;
  t6798 = -1.*t484*t354;
  t6799 = t1093*t6785;
  t6800 = t6798 + t6799;
  t6821 = t6554*t2483;
  t6823 = -1.*t6570*t6555*t6578;
  t6825 = t6821 + t6823;
  t6833 = t6510*t6825;
  t6834 = t6685 + t6833;
  t6827 = -1.*t6510*t6673;
  t6830 = t6583*t6825;
  t6831 = t6827 + t6830;
  t6850 = t6554*t2483*t6555;
  t6853 = -1.*t6570*t6578;
  t6854 = t6850 + t6853;
  t6860 = t6583*t6854;
  t6861 = t6510*t6603;
  t6862 = t6860 + t6861;
  t6857 = -1.*t6510*t6854;
  t6858 = t6857 + t6613;
  t6882 = t6583*t354*t6554;
  t6883 = -1.*t354*t6510*t6578;
  t6884 = t6882 + t6883;
  t6878 = -1.*t354*t6554*t6510;
  t6879 = -1.*t6583*t354*t6578;
  t6880 = t6878 + t6879;
  t6902 = -1.*t6583*t6677;
  t6903 = t6827 + t6902;
  t6918 = t6570*t6554;
  t6919 = t2483*t6555*t6578;
  t6920 = t6918 + t6919;
  t6925 = -1.*t6510*t6920;
  t6926 = t6860 + t6925;
  t6922 = -1.*t6583*t6920;
  t6923 = t6857 + t6922;
  t6881 = t6631*t6880;
  t6885 = -0.1305*t484*t6884;
  t6887 = t6610*t6884;
  t6889 = t1093*t6646*t6884;
  t6890 = t6629*t6880;
  t6891 = t6618*t1093*t6884;
  t6892 = t6890 + t6891;
  t6893 = -0.049*t6892;
  t6894 = t6618*t6880;
  t6895 = -1.*t1093*t6629*t6884;
  t6896 = t6894 + t6895;
  t6897 = -0.21*t6896;
  t6689 = -1.*t6570*t354*t1093;
  t6691 = t484*t6681;
  t6693 = t6689 + t6691;
  t6945 = -0.135*t484;
  t6946 = -0.049*t1093;
  t6947 = t6945 + t6946;
  t6949 = 0.049*t484;
  t6950 = t6949 + t1900;
  t6961 = t6510*t6854;
  t6962 = t6583*t6920;
  t6963 = t6961 + t6962;
  t6965 = -1.*t354*t1093*t2483;
  t6966 = t484*t6963;
  t6967 = t6965 + t6966;
  t6976 = t354*t6554*t6510;
  t6977 = t6583*t354*t6578;
  t6978 = t6976 + t6977;
  t6980 = t1093*t6555;
  t6981 = t484*t6978;
  t6982 = t6980 + t6981;
  t6703 = t6618*t6687;
  t6704 = -1.*t6629*t6697;
  t6705 = t6703 + t6704;
  t6991 = 0.049*t6618;
  t6992 = t6991 + t6645;
  t6994 = -0.09*t6618;
  t6995 = -0.049*t6629;
  t6996 = t6994 + t6995;
  t7005 = t484*t354*t2483;
  t7006 = t1093*t6963;
  t7007 = t7005 + t7006;
  t7019 = -1.*t484*t6555;
  t7020 = t1093*t6978;
  t7021 = t7019 + t7020;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=-1.*t2034*t2483*t354 + t6532*t6581 + t6598*t6603 + t6610*t6614 - 0.1305*(t1093*t2483*t354 + t484*t6614) + t6631*t6635 + t6646*t6650 - 0.049*(t6629*t6635 + t6618*t6650) - 0.21*(t6618*t6635 - 1.*t6629*t6650);
  p_output1[10]=t2034*t354*t6570 + t6532*t6673 + t6598*t6677 + t6610*t6681 + t6631*t6687 - 0.1305*t6693 + t6646*t6697 - 0.049*(t6629*t6687 + t6618*t6697) - 0.21*t6705;
  p_output1[11]=0;
  p_output1[12]=t354*t6532*t6554*t6570 - 1.*t2034*t6555*t6570 + t354*t6570*t6578*t6598 + t6610*t6715 - 0.1305*(t1093*t6555*t6570 + t484*t6715) + t6631*t6721 + t6646*t6729 - 0.049*(t6629*t6721 + t6618*t6729) - 0.21*(t6618*t6721 - 1.*t6629*t6729);
  p_output1[13]=t2483*t354*t6532*t6554 - 1.*t2034*t2483*t6555 + t2483*t354*t6578*t6598 + t6610*t6751 - 0.1305*(t1093*t2483*t6555 + t484*t6751) + t6631*t6755 + t6646*t6765 - 0.049*(t6629*t6755 + t6618*t6765) - 0.21*(t6618*t6755 - 1.*t6629*t6765);
  p_output1[14]=-1.*t2034*t354 - 1.*t6532*t6554*t6555 - 1.*t6555*t6578*t6598 + t6610*t6785 - 0.1305*(t1093*t354 + t484*t6785) + t6631*t6791 + t6646*t6800 - 0.049*(t6629*t6791 + t6618*t6800) - 0.21*(t6618*t6791 - 1.*t6629*t6800);
  p_output1[15]=t6598*t6673 + t6532*t6825 + t6631*t6831 - 0.1305*t484*t6834 + t6610*t6834 + t1093*t6646*t6834 - 0.049*(t6629*t6831 + t1093*t6618*t6834) - 0.21*(t6618*t6831 - 1.*t1093*t6629*t6834);
  p_output1[16]=t6532*t6603 + t6598*t6854 + t6631*t6858 - 0.1305*t484*t6862 + t6610*t6862 + t1093*t6646*t6862 - 0.049*(t6629*t6858 + t1093*t6618*t6862) - 0.21*(t6618*t6858 - 1.*t1093*t6629*t6862);
  p_output1[17]=-1.*t354*t6532*t6578 + t354*t6554*t6598 + t6881 + t6885 + t6887 + t6889 + t6893 + t6897;
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
  p_output1[39]=0.135*t6583*t6673 - 0.135*t6510*t6677 - 0.1305*t484*t6687 + t6610*t6687 + t1093*t6646*t6687 + t6631*t6903 - 0.21*(-1.*t1093*t6629*t6687 + t6618*t6903) - 0.049*(t1093*t6618*t6687 + t6629*t6903);
  p_output1[40]=0.135*t6583*t6854 - 0.135*t6510*t6920 + t6631*t6923 - 0.1305*t484*t6926 + t6610*t6926 + t1093*t6646*t6926 - 0.049*(t6629*t6923 + t1093*t6618*t6926) - 0.21*(t6618*t6923 - 1.*t1093*t6629*t6926);
  p_output1[41]=-0.135*t354*t6510*t6578 + 0.135*t354*t6554*t6583 + t6881 + t6885 + t6887 + t6889 + t6893 + t6897;
  p_output1[42]=-0.1305*(-1.*t354*t484*t6570 - 1.*t1093*t6681) - 0.049*t6618*t6693 + 0.21*t6629*t6693 + t6646*t6693 + t354*t6570*t6947 + t6681*t6950;
  p_output1[43]=t2483*t354*t6947 + t6950*t6963 - 0.1305*(t6647 - 1.*t1093*t6963) - 0.049*t6618*t6967 + 0.21*t6629*t6967 + t6646*t6967;
  p_output1[44]=-1.*t6555*t6947 + t6950*t6978 - 0.1305*(t484*t6555 - 1.*t1093*t6978) - 0.049*t6618*t6982 + 0.21*t6629*t6982 + t6646*t6982;
  p_output1[45]=-0.21*(-1.*t6629*t6687 - 1.*t6618*t6697) - 0.049*t6705 + t6687*t6992 + t6697*t6996;
  p_output1[46]=t6926*t6992 + t6996*t7007 - 0.21*(-1.*t6629*t6926 - 1.*t6618*t7007) - 0.049*(t6618*t6926 - 1.*t6629*t7007);
  p_output1[47]=t6884*t6992 + t6996*t7021 - 0.21*(-1.*t6629*t6884 - 1.*t6618*t7021) - 0.049*(t6618*t6884 - 1.*t6629*t7021);
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



void J_knee_joint_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
