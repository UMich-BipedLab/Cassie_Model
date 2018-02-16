/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:17:34 GMT-05:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
inline double Power(double x, double y) { return pow(x, y); }
inline double Sqrt(double x) { return sqrt(x); }

inline double Abs(double x) { return fabs(x); }

inline double Exp(double x) { return exp(x); }
inline double Log(double x) { return log(x); }

inline double Sin(double x) { return sin(x); }
inline double Cos(double x) { return cos(x); }
inline double Tan(double x) { return tan(x); }

inline double ArcSin(double x) { return asin(x); }
inline double ArcCos(double x) { return acos(x); }
inline double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
inline double ArcTan(double x, double y) { return atan2(y,x); }

inline double Sinh(double x) { return sinh(x); }
inline double Cosh(double x) { return cosh(x); }
inline double Tanh(double x) { return tanh(x); }

const double E	= 2.71828182845904523536029;
const double Pi = 3.14159265358979323846264;
const double Degree = 0.01745329251994329576924;


#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1)
{
  double t20;
  double t244;
  double t851;
  double t1515;
  double t1547;
  double t1640;
  double t1697;
  double t2224;
  double t3495;
  double t3575;
  double t3670;
  double t3753;
  double t3078;
  double t3088;
  double t3380;
  double t4197;
  double t4334;
  double t4646;
  double t5140;
  double t5146;
  double t5158;
  double t5221;
  double t5034;
  double t5097;
  double t5129;
  double t5602;
  double t5687;
  double t5717;
  double t6405;
  double t6526;
  double t6534;
  double t6753;
  double t6072;
  double t6343;
  double t6351;
  double t7409;
  double t7448;
  double t7458;
  double t7597;
  double t7604;
  double t7613;
  double t7619;
  double t7532;
  double t7547;
  double t7548;
  double t7640;
  double t7641;
  double t7644;
  double t481;
  double t592;
  double t621;
  double t1066;
  double t1266;
  double t1686;
  double t1777;
  double t1794;
  double t2227;
  double t2430;
  double t2478;
  double t3674;
  double t3764;
  double t3804;
  double t4698;
  double t4770;
  double t4786;
  double t7787;
  double t7793;
  double t7797;
  double t7800;
  double t7802;
  double t7803;
  double t5164;
  double t5260;
  double t5286;
  double t5752;
  double t5801;
  double t5854;
  double t7812;
  double t7814;
  double t7816;
  double t7820;
  double t7821;
  double t7825;
  double t6547;
  double t7125;
  double t7288;
  double t7487;
  double t7497;
  double t7498;
  double t7827;
  double t7829;
  double t7830;
  double t7845;
  double t7847;
  double t7850;
  double t7616;
  double t7625;
  double t7628;
  double t7645;
  double t7682;
  double t7696;
  double t7853;
  double t7854;
  double t7856;
  double t7858;
  double t7859;
  double t7865;
  double t7883;
  double t7885;
  double t7891;
  double t7892;
  double t7893;
  double t7895;
  double t7896;
  double t7898;
  double t7900;
  double t7903;
  double t7904;
  double t7906;
  double t7907;
  double t7908;
  double t7910;
  double t7912;
  double t7914;
  double t7916;
  double t7917;
  double t7918;
  double t7881;
  double t7882;
  double t7886;
  double t7887;
  double t7888;
  double t7889;
  double t7890;
  double t7894;
  double t7899;
  double t7905;
  double t7909;
  double t7915;
  double t7919;
  double t7920;
  double t7921;
  double t7924;
  double t7925;
  double t7927;
  double t7928;
  double t7930;
  double t7933;
  double t7935;
  double t2189;
  double t2888;
  double t4076;
  double t4918;
  double t5471;
  double t5974;
  double t7392;
  double t7531;
  double t7632;
  double t7698;
  double t7702;
  double t7705;
  double t7711;
  double t7715;
  double t7719;
  double t7721;
  double t7723;
  double t7734;
  double t7773;
  double t7778;
  double t7798;
  double t7806;
  double t7818;
  double t7826;
  double t7838;
  double t7851;
  double t7857;
  double t7867;
  double t7871;
  double t7873;
  double t7874;
  double t7875;
  double t7876;
  double t7877;
  double t7878;
  double t7879;
  double t7956;
  double t7957;
  double t7958;
  double t7942;
  double t7954;
  double t7955;
  double t7959;
  double t7961;
  double t7962;
  double t7948;
  double t7965;
  double t7968;
  double t7972;
  double t7977;
  double t7979;
  double t7980;
  double t7989;
  double t7990;
  double t7991;
  double t7993;
  double t7994;
  double t7996;
  double t8004;
  double t8005;
  double t8007;
  double t8014;
  double t8015;
  double t8016;
  double t8018;
  double t8019;
  double t8021;
  double t8027;
  double t8028;
  double t8029;
  double t8036;
  double t8038;
  double t8040;
  double t8042;
  double t8043;
  double t8044;
  double t8050;
  double t8053;
  double t8054;
  double t8062;
  double t8064;
  double t8065;
  double t8068;
  double t8069;
  double t8070;
  double t8075;
  double t8077;
  double t8078;
  t20 = Cos(var1[7]);
  t244 = Cos(var1[8]);
  t851 = Sin(var1[8]);
  t1515 = Cos(var1[9]);
  t1547 = -1.*t1515;
  t1640 = 1. + t1547;
  t1697 = Sin(var1[9]);
  t2224 = Sin(var1[7]);
  t3495 = Cos(var1[10]);
  t3575 = -1.*t3495;
  t3670 = 1. + t3575;
  t3753 = Sin(var1[10]);
  t3078 = t20*t1515*t851;
  t3088 = -1.*t2224*t1697;
  t3380 = t3078 + t3088;
  t4197 = -1.*t1515*t2224;
  t4334 = -1.*t20*t851*t1697;
  t4646 = t4197 + t4334;
  t5140 = Cos(var1[11]);
  t5146 = -1.*t5140;
  t5158 = 1. + t5146;
  t5221 = Sin(var1[11]);
  t5034 = t3495*t3380;
  t5097 = t4646*t3753;
  t5129 = t5034 + t5097;
  t5602 = t3495*t4646;
  t5687 = -1.*t3380*t3753;
  t5717 = t5602 + t5687;
  t6405 = Cos(var1[12]);
  t6526 = -1.*t6405;
  t6534 = 1. + t6526;
  t6753 = Sin(var1[12]);
  t6072 = t5140*t5129;
  t6343 = t5717*t5221;
  t6351 = t6072 + t6343;
  t7409 = t5140*t5717;
  t7448 = -1.*t5129*t5221;
  t7458 = t7409 + t7448;
  t7597 = Cos(var1[13]);
  t7604 = -1.*t7597;
  t7613 = 1. + t7604;
  t7619 = Sin(var1[13]);
  t7532 = t6405*t6351;
  t7547 = t7458*t6753;
  t7548 = t7532 + t7547;
  t7640 = t6405*t7458;
  t7641 = -1.*t6351*t6753;
  t7644 = t7640 + t7641;
  t481 = -1.*t244;
  t592 = 1. + t481;
  t621 = -0.135*t592;
  t1066 = 0.049*t851;
  t1266 = 0. + t621 + t1066;
  t1686 = -0.049*t1640;
  t1777 = -0.09*t1697;
  t1794 = 0. + t1686 + t1777;
  t2227 = -0.09*t1640;
  t2430 = 0.049*t1697;
  t2478 = 0. + t2227 + t2430;
  t3674 = -0.049*t3670;
  t3764 = -0.21*t3753;
  t3804 = 0. + t3674 + t3764;
  t4698 = -0.21*t3670;
  t4770 = 0.049*t3753;
  t4786 = 0. + t4698 + t4770;
  t7787 = t1515*t2224*t851;
  t7793 = t20*t1697;
  t7797 = t7787 + t7793;
  t7800 = t20*t1515;
  t7802 = -1.*t2224*t851*t1697;
  t7803 = t7800 + t7802;
  t5164 = -0.0016*t5158;
  t5260 = -0.2707*t5221;
  t5286 = 0. + t5164 + t5260;
  t5752 = -0.2707*t5158;
  t5801 = 0.0016*t5221;
  t5854 = 0. + t5752 + t5801;
  t7812 = t3495*t7797;
  t7814 = t7803*t3753;
  t7816 = t7812 + t7814;
  t7820 = t3495*t7803;
  t7821 = -1.*t7797*t3753;
  t7825 = t7820 + t7821;
  t6547 = 0.0184*t6534;
  t7125 = -0.7055*t6753;
  t7288 = 0. + t6547 + t7125;
  t7487 = -0.7055*t6534;
  t7497 = -0.0184*t6753;
  t7498 = 0. + t7487 + t7497;
  t7827 = t5140*t7816;
  t7829 = t7825*t5221;
  t7830 = t7827 + t7829;
  t7845 = t5140*t7825;
  t7847 = -1.*t7816*t5221;
  t7850 = t7845 + t7847;
  t7616 = -0.0216*t7613;
  t7625 = -1.1135*t7619;
  t7628 = 0. + t7616 + t7625;
  t7645 = -1.1135*t7613;
  t7682 = 0.0216*t7619;
  t7696 = 0. + t7645 + t7682;
  t7853 = t6405*t7830;
  t7854 = t7850*t6753;
  t7856 = t7853 + t7854;
  t7858 = t6405*t7850;
  t7859 = -1.*t7830*t6753;
  t7865 = t7858 + t7859;
  t7883 = -1.*t2224;
  t7885 = 0. + t7883;
  t7891 = t244*t1515*t3495;
  t7892 = -1.*t244*t1697*t3753;
  t7893 = t7891 + t7892;
  t7895 = -1.*t244*t3495*t1697;
  t7896 = -1.*t244*t1515*t3753;
  t7898 = t7895 + t7896;
  t7900 = t5140*t7893;
  t7903 = t7898*t5221;
  t7904 = t7900 + t7903;
  t7906 = t5140*t7898;
  t7907 = -1.*t7893*t5221;
  t7908 = t7906 + t7907;
  t7910 = t6405*t7904;
  t7912 = t7908*t6753;
  t7914 = t7910 + t7912;
  t7916 = t6405*t7908;
  t7917 = -1.*t7904*t6753;
  t7918 = t7916 + t7917;
  t7881 = -1.*t20;
  t7882 = 0. + t7881;
  t7886 = 0.049*t244;
  t7887 = -0.004500000000000004*t851;
  t7888 = t244*t1794;
  t7889 = t244*t1515*t3804;
  t7890 = -1.*t244*t1697*t4786;
  t7894 = t7893*t5286;
  t7899 = t7898*t5854;
  t7905 = t7904*t7288;
  t7909 = t7908*t7498;
  t7915 = t7914*t7628;
  t7919 = t7918*t7696;
  t7920 = t7597*t7914;
  t7921 = t7918*t7619;
  t7924 = t7920 + t7921;
  t7925 = 0.0306*t7924;
  t7927 = t7597*t7918;
  t7928 = -1.*t7914*t7619;
  t7930 = t7927 + t7928;
  t7933 = -1.1312*t7930;
  t7935 = 0. + t7886 + t7887 + t7888 + t7889 + t7890 + t7894 + t7899 + t7905 + t7909 + t7915 + t7919 + t7925 + t7933;
  t2189 = t20*t851*t1794;
  t2888 = -1.*t2224*t2478;
  t4076 = t3380*t3804;
  t4918 = t4646*t4786;
  t5471 = t5129*t5286;
  t5974 = t5717*t5854;
  t7392 = t6351*t7288;
  t7531 = t7458*t7498;
  t7632 = t7548*t7628;
  t7698 = t7644*t7696;
  t7702 = t7597*t7548;
  t7705 = t7644*t7619;
  t7711 = t7702 + t7705;
  t7715 = 0.0306*t7711;
  t7719 = t7597*t7644;
  t7721 = -1.*t7548*t7619;
  t7723 = t7719 + t7721;
  t7734 = -1.1312*t7723;
  t7773 = -1.*t2224*t851*t1794;
  t7778 = -1.*t20*t2478;
  t7798 = -1.*t7797*t3804;
  t7806 = -1.*t7803*t4786;
  t7818 = -1.*t7816*t5286;
  t7826 = -1.*t7825*t5854;
  t7838 = -1.*t7830*t7288;
  t7851 = -1.*t7850*t7498;
  t7857 = -1.*t7856*t7628;
  t7867 = -1.*t7865*t7696;
  t7871 = t7597*t7856;
  t7873 = t7865*t7619;
  t7874 = t7871 + t7873;
  t7875 = -0.0306*t7874;
  t7876 = t7597*t7865;
  t7877 = -1.*t7856*t7619;
  t7878 = t7876 + t7877;
  t7879 = 1.1312*t7878;
  t7956 = -1.*t20*t244;
  t7957 = 0. + t7956;
  t7958 = 0. + t851;
  t7942 = 0.004500000000000004*t20*t244;
  t7954 = t244*t2224;
  t7955 = 0. + t7954;
  t7959 = 0.049*t244*t1515;
  t7961 = -0.09*t244*t1697;
  t7962 = 0. + t7959 + t7887 + t7961 + t7889 + t7890 + t7894 + t7899 + t7905 + t7909 + t7915 + t7919 + t7925 + t7933;
  t7948 = -0.004500000000000004*t244*t2224;
  t7965 = 0.049*t3380;
  t7968 = 0.09*t4646;
  t7972 = 0. + t7942 + t7965 + t7968 + t4076 + t4918 + t5471 + t5974 + t7392 + t7531 + t7632 + t7698 + t7715 + t7734;
  t7977 = -0.049*t7797;
  t7979 = -0.09*t7803;
  t7980 = 0. + t7948 + t7977 + t7979 + t7798 + t7806 + t7818 + t7826 + t7838 + t7851 + t7857 + t7867 + t7875 + t7879;
  t7989 = 0.21*t7898;
  t7990 = 0.049*t7893;
  t7991 = 0. + t7989 + t7990 + t7894 + t7899 + t7905 + t7909 + t7915 + t7919 + t7925 + t7933;
  t7993 = 0.21*t5717;
  t7994 = 0.049*t5129;
  t7996 = 0. + t7993 + t7994 + t5471 + t5974 + t7392 + t7531 + t7632 + t7698 + t7715 + t7734;
  t8004 = -0.21*t7825;
  t8005 = -0.049*t7816;
  t8007 = 0. + t8004 + t8005 + t7818 + t7826 + t7838 + t7851 + t7857 + t7867 + t7875 + t7879;
  t8014 = 0.0016*t7904;
  t8015 = 0.2707*t7908;
  t8016 = 0. + t8014 + t8015 + t7905 + t7909 + t7915 + t7919 + t7925 + t7933;
  t8018 = 0.0016*t6351;
  t8019 = 0.2707*t7458;
  t8021 = 0. + t8018 + t8019 + t7392 + t7531 + t7632 + t7698 + t7715 + t7734;
  t8027 = -0.0016*t7830;
  t8028 = -0.2707*t7850;
  t8029 = 0. + t8027 + t8028 + t7838 + t7851 + t7857 + t7867 + t7875 + t7879;
  t8036 = 0.7055*t7918;
  t8038 = -0.0184*t7914;
  t8040 = 0. + t8036 + t8038 + t7915 + t7919 + t7925 + t7933;
  t8042 = 0.7055*t7644;
  t8043 = -0.0184*t7548;
  t8044 = 0. + t8042 + t8043 + t7632 + t7698 + t7715 + t7734;
  t8050 = -0.7055*t7865;
  t8053 = 0.0184*t7856;
  t8054 = 0. + t8050 + t8053 + t7857 + t7867 + t7875 + t7879;
  t8062 = 0.052199999999999996*t7924;
  t8064 = -0.01770000000000005*t7930;
  t8065 = 0. + t8062 + t8064;
  t8068 = 0.052199999999999996*t7711;
  t8069 = -0.01770000000000005*t7723;
  t8070 = 0. + t8068 + t8069;
  t8075 = -0.052199999999999996*t7874;
  t8077 = 0.01770000000000005*t7878;
  t8078 = 0. + t8075 + t8077;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
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
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0.;
  p_output1[43]=0.;
  p_output1[44]=1.;
  p_output1[45]=0. - 1.*(0. + 0.135*t20 + t1266*t20 + t2189 - 0.1305*t20*t244 + t2888 + t4076 + t4918 + t5471 + t5974 + t7392 + t7531 + t7632 + t7698 + t7715 + t7734);
  p_output1[46]=0. - 0.135*t2224 - 1.*t1266*t2224 + 0.1305*t2224*t244 + t7773 + t7778 + t7798 + t7806 + t7818 + t7826 + t7838 + t7851 + t7857 + t7867 + t7875 + t7879;
  p_output1[47]=0.;
  p_output1[48]=t7882;
  p_output1[49]=t7885;
  p_output1[50]=0.;
  p_output1[51]=0. + t7885*t7935;
  p_output1[52]=0. - 1.*t7882*t7935;
  p_output1[53]=t7882*(0. + t2189 - 0.09*t2224 + t2888 + t4076 + t4918 + t5471 + t5974 + t7392 + t7531 + t7632 + t7698 + t7715 + t7734 + t7942 + 0.049*t20*t851) - 1.*t7885*(0. - 0.09*t20 + t7773 + t7778 + t7798 + t7806 + t7818 + t7826 + t7838 + t7851 + t7857 + t7867 + t7875 + t7879 + t7948 - 0.049*t2224*t851);
  p_output1[54]=t7955;
  p_output1[55]=t7957;
  p_output1[56]=t7958;
  p_output1[57]=t7957*t7962 - 1.*t7958*t7972;
  p_output1[58]=-1.*t7955*t7962 + t7958*t7980;
  p_output1[59]=t7955*t7972 - 1.*t7957*t7980;
  p_output1[60]=t7955;
  p_output1[61]=t7957;
  p_output1[62]=t7958;
  p_output1[63]=t7957*t7991 - 1.*t7958*t7996;
  p_output1[64]=-1.*t7955*t7991 + t7958*t8007;
  p_output1[65]=t7955*t7996 - 1.*t7957*t8007;
  p_output1[66]=t7955;
  p_output1[67]=t7957;
  p_output1[68]=t7958;
  p_output1[69]=t7957*t8016 - 1.*t7958*t8021;
  p_output1[70]=-1.*t7955*t8016 + t7958*t8029;
  p_output1[71]=t7955*t8021 - 1.*t7957*t8029;
  p_output1[72]=t7955;
  p_output1[73]=t7957;
  p_output1[74]=t7958;
  p_output1[75]=t7957*t8040 - 1.*t7958*t8044;
  p_output1[76]=-1.*t7955*t8040 + t7958*t8054;
  p_output1[77]=t7955*t8044 - 1.*t7957*t8054;
  p_output1[78]=t7955;
  p_output1[79]=t7957;
  p_output1[80]=t7958;
  p_output1[81]=t7957*t8065 - 1.*t7958*t8070;
  p_output1[82]=-1.*t7955*t8065 + t7958*t8078;
  p_output1[83]=t7955*t8070 - 1.*t7957*t8078;
}



#ifdef MATLAB_MEX_FILE

#include "mex.h"
/*
 * Main function
 */
void mexFunction( int nlhs, mxArray *plhs[],
                  int nrhs, const mxArray *prhs[] )
{
  size_t mrows, ncols;

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 14 && ncols == 1) && 
      !(mrows == 1 && ncols == 14))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 6, (mwSize) 14, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_MultisenseIMU_to_RightToeBottom_mex.hh"

namespace SymExpression
{

void J_MultisenseIMU_to_RightToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
