/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 12:16:28 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_VectorNav_to_RightToeBottom.h"

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
static void output1(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  double t336;
  double t1737;
  double t2533;
  double t1320;
  double t2547;
  double t1174;
  double t4628;
  double t4813;
  double t5106;
  double t2191;
  double t3163;
  double t3330;
  double t5116;
  double t830;
  double t5237;
  double t5246;
  double t5250;
  double t4607;
  double t5134;
  double t5138;
  double t5326;
  double t573;
  double t5397;
  double t5447;
  double t5448;
  double t5234;
  double t5365;
  double t5374;
  double t5457;
  double t256;
  double t181;
  double t396;
  double t5549;
  double t5561;
  double t5566;
  double t5537;
  double t5538;
  double t5539;
  double t5622;
  double t5625;
  double t5629;
  double t5544;
  double t5569;
  double t5603;
  double t5648;
  double t5654;
  double t5669;
  double t5616;
  double t5637;
  double t5642;
  double t5684;
  double t5686;
  double t5698;
  double t5645;
  double t5674;
  double t5678;
  double t5743;
  double t5745;
  double t5746;
  double t5727;
  double t5730;
  double t5737;
  double t5770;
  double t5772;
  double t5773;
  double t5738;
  double t5751;
  double t5762;
  double t5786;
  double t5788;
  double t5789;
  double t5766;
  double t5776;
  double t5781;
  double t5817;
  double t5818;
  double t5819;
  double t5782;
  double t5796;
  double t5803;
  double t5375;
  double t5461;
  double t5466;
  double t5521;
  double t5524;
  double t5527;
  double t5683;
  double t5703;
  double t5704;
  double t5707;
  double t5709;
  double t5716;
  double t5808;
  double t5823;
  double t5828;
  double t5832;
  double t5833;
  double t5836;
  double t5870;
  double t5874;
  double t5888;
  double t5891;
  double t5903;
  double t5905;
  double t5917;
  double t5918;
  double t5857;
  double t5859;
  double t5863;
  double t5864;
  double t5865;
  double t5866;
  double t5868;
  double t5875;
  double t5878;
  double t5879;
  double t5881;
  double t5882;
  double t5883;
  double t5892;
  double t5893;
  double t5895;
  double t5898;
  double t5900;
  double t5901;
  double t5906;
  double t5908;
  double t5909;
  double t5911;
  double t5912;
  double t5914;
  double t5919;
  double t5920;
  double t5921;
  double t5923;
  double t5926;
  double t5927;
  double t5940;
  double t5941;
  double t5946;
  double t5949;
  double t5950;
  double t5951;
  t336 = Cos(var1[8]);
  t1737 = Cos(var1[10]);
  t2533 = Sin(var1[9]);
  t1320 = Cos(var1[9]);
  t2547 = Sin(var1[10]);
  t1174 = Cos(var1[11]);
  t4628 = -1.*t336*t1737*t2533;
  t4813 = -1.*t336*t1320*t2547;
  t5106 = t4628 + t4813;
  t2191 = t336*t1320*t1737;
  t3163 = -1.*t336*t2533*t2547;
  t3330 = t2191 + t3163;
  t5116 = Sin(var1[11]);
  t830 = Cos(var1[12]);
  t5237 = t1174*t5106;
  t5246 = -1.*t3330*t5116;
  t5250 = t5237 + t5246;
  t4607 = t1174*t3330;
  t5134 = t5106*t5116;
  t5138 = t4607 + t5134;
  t5326 = Sin(var1[12]);
  t573 = Cos(var1[13]);
  t5397 = t830*t5250;
  t5447 = -1.*t5138*t5326;
  t5448 = t5397 + t5447;
  t5234 = t830*t5138;
  t5365 = t5250*t5326;
  t5374 = t5234 + t5365;
  t5457 = Sin(var1[13]);
  t256 = Cos(var1[7]);
  t181 = Sin(var1[8]);
  t396 = Sin(var1[7]);
  t5549 = -1.*t1320*t396;
  t5561 = -1.*t256*t181*t2533;
  t5566 = t5549 + t5561;
  t5537 = t256*t1320*t181;
  t5538 = -1.*t396*t2533;
  t5539 = t5537 + t5538;
  t5622 = t1737*t5566;
  t5625 = -1.*t5539*t2547;
  t5629 = t5622 + t5625;
  t5544 = t1737*t5539;
  t5569 = t5566*t2547;
  t5603 = t5544 + t5569;
  t5648 = t1174*t5629;
  t5654 = -1.*t5603*t5116;
  t5669 = t5648 + t5654;
  t5616 = t1174*t5603;
  t5637 = t5629*t5116;
  t5642 = t5616 + t5637;
  t5684 = t830*t5669;
  t5686 = -1.*t5642*t5326;
  t5698 = t5684 + t5686;
  t5645 = t830*t5642;
  t5674 = t5669*t5326;
  t5678 = t5645 + t5674;
  t5743 = t256*t1320;
  t5745 = -1.*t396*t181*t2533;
  t5746 = t5743 + t5745;
  t5727 = t1320*t396*t181;
  t5730 = t256*t2533;
  t5737 = t5727 + t5730;
  t5770 = t1737*t5746;
  t5772 = -1.*t5737*t2547;
  t5773 = t5770 + t5772;
  t5738 = t1737*t5737;
  t5751 = t5746*t2547;
  t5762 = t5738 + t5751;
  t5786 = t1174*t5773;
  t5788 = -1.*t5762*t5116;
  t5789 = t5786 + t5788;
  t5766 = t1174*t5762;
  t5776 = t5773*t5116;
  t5781 = t5766 + t5776;
  t5817 = t830*t5789;
  t5818 = -1.*t5781*t5326;
  t5819 = t5817 + t5818;
  t5782 = t830*t5781;
  t5796 = t5789*t5326;
  t5803 = t5782 + t5796;
  t5375 = t573*t5374;
  t5461 = t5448*t5457;
  t5466 = t5375 + t5461;
  t5521 = t573*t5448;
  t5524 = -1.*t5374*t5457;
  t5527 = t5521 + t5524;
  t5683 = t573*t5678;
  t5703 = t5698*t5457;
  t5704 = t5683 + t5703;
  t5707 = t573*t5698;
  t5709 = -1.*t5678*t5457;
  t5716 = t5707 + t5709;
  t5808 = t573*t5803;
  t5823 = t5819*t5457;
  t5828 = t5808 + t5823;
  t5832 = t573*t5819;
  t5833 = -1.*t5803*t5457;
  t5836 = t5832 + t5833;
  t5870 = -1.*t1737;
  t5874 = 1. + t5870;
  t5888 = -1.*t1174;
  t5891 = 1. + t5888;
  t5903 = -1.*t830;
  t5905 = 1. + t5903;
  t5917 = -1.*t573;
  t5918 = 1. + t5917;
  t5857 = -1.*t336;
  t5859 = 1. + t5857;
  t5863 = -1.*t1320;
  t5864 = 1. + t5863;
  t5865 = -0.049*t5864;
  t5866 = -0.09*t2533;
  t5868 = 0. + t5865 + t5866;
  t5875 = -0.049*t5874;
  t5878 = -0.21*t2547;
  t5879 = 0. + t5875 + t5878;
  t5881 = -0.21*t5874;
  t5882 = 0.049*t2547;
  t5883 = 0. + t5881 + t5882;
  t5892 = -0.0016*t5891;
  t5893 = -0.2707*t5116;
  t5895 = 0. + t5892 + t5893;
  t5898 = -0.2707*t5891;
  t5900 = 0.0016*t5116;
  t5901 = 0. + t5898 + t5900;
  t5906 = 0.0184*t5905;
  t5908 = -0.7055*t5326;
  t5909 = 0. + t5906 + t5908;
  t5911 = -0.7055*t5905;
  t5912 = -0.0184*t5326;
  t5914 = 0. + t5911 + t5912;
  t5919 = -0.0216*t5918;
  t5920 = -1.1135*t5457;
  t5921 = 0. + t5919 + t5920;
  t5923 = -1.1135*t5918;
  t5926 = 0.0216*t5457;
  t5927 = 0. + t5923 + t5926;
  t5940 = -0.135*t5859;
  t5941 = 0.049*t181;
  t5946 = 0. + t5940 + t5941;
  t5949 = -0.09*t5864;
  t5950 = 0.049*t2533;
  t5951 = 0. + t5949 + t5950;

  p_output1(0)=0. + t181;
  p_output1(1)=0. + t256*t336;
  p_output1(2)=0. + t336*t396;
  p_output1(3)=0.;
  p_output1(4)=0. + 0.642788*t5466 + 0.766044*t5527;
  p_output1(5)=0. - 0.642788*t5704 - 0.766044*t5716;
  p_output1(6)=0. - 0.642788*t5828 - 0.766044*t5836;
  p_output1(7)=0.;
  p_output1(8)=0. - 0.766044*t5466 + 0.642788*t5527;
  p_output1(9)=0. + 0.766044*t5704 - 0.642788*t5716;
  p_output1(10)=0. + 0.766044*t5828 - 0.642788*t5836;
  p_output1(11)=0.;
  p_output1(12)=-0.03155 - 0.004500000000000004*t181 + 0.0306*t5466 - 1.1312*t5527 - 0.049*t5859 + t336*t5868 + t1320*t336*t5879 - 1.*t2533*t336*t5883 + t3330*t5895 + t5106*t5901 + t5138*t5909 + t5250*t5914 + t5374*t5921 + t5448*t5927;
  p_output1(13)=0. + 0.135*(1. - 1.*t256) + 0.1305*t256*t336 - 0.0306*t5704 + 1.1312*t5716 - 1.*t181*t256*t5868 - 1.*t5539*t5879 - 1.*t5566*t5883 - 1.*t5603*t5895 - 1.*t5629*t5901 - 1.*t5642*t5909 - 1.*t5669*t5914 - 1.*t5678*t5921 - 1.*t5698*t5927 - 1.*t256*t5946 + t396*t5951;
  p_output1(14)=-0.07996 - 0.135*t396 + 0.1305*t336*t396 - 0.0306*t5828 + 1.1312*t5836 - 1.*t181*t396*t5868 - 1.*t5737*t5879 - 1.*t5746*t5883 - 1.*t5762*t5895 - 1.*t5773*t5901 - 1.*t5781*t5909 - 1.*t5789*t5914 - 1.*t5803*t5921 - 1.*t5819*t5927 - 1.*t396*t5946 - 1.*t256*t5951;
  p_output1(15)=1.;
}


       
void H_VectorNav_to_RightToeBottom(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
