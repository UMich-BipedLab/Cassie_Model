/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:36:24 GMT-05:00
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
  double t265;
  double t371;
  double t1044;
  double t1363;
  double t1593;
  double t1607;
  double t1618;
  double t2324;
  double t2416;
  double t2503;
  double t2795;
  double t2910;
  double t3213;
  double t3317;
  double t3405;
  double t3900;
  double t3917;
  double t3954;
  double t4019;
  double t4033;
  double t4063;
  double t4179;
  double t4692;
  double t4746;
  double t4749;
  double t5152;
  double t5193;
  double t5210;
  double t5245;
  double t5294;
  double t5336;
  double t5395;
  double t5512;
  double t5523;
  double t5542;
  double t5586;
  double t5605;
  double t5619;
  double t5644;
  double t5645;
  double t5655;
  double t5671;
  double t5785;
  double t5790;
  double t5791;
  double t5838;
  double t5845;
  double t5859;
  double t542;
  double t761;
  double t937;
  double t1104;
  double t1117;
  double t1609;
  double t1737;
  double t2053;
  double t2330;
  double t2349;
  double t2388;
  double t2848;
  double t3040;
  double t3126;
  double t3771;
  double t3822;
  double t3862;
  double t4127;
  double t4598;
  double t4676;
  double t6240;
  double t6279;
  double t6291;
  double t6301;
  double t6308;
  double t6337;
  double t4785;
  double t4816;
  double t5134;
  double t5391;
  double t5401;
  double t5425;
  double t6384;
  double t6396;
  double t6425;
  double t6429;
  double t6448;
  double t6461;
  double t5554;
  double t5560;
  double t5567;
  double t5665;
  double t5720;
  double t5754;
  double t6493;
  double t6506;
  double t6518;
  double t6523;
  double t6525;
  double t6541;
  double t5816;
  double t5821;
  double t5834;
  double t6554;
  double t6560;
  double t6562;
  double t6595;
  double t6596;
  double t6608;
  double t6841;
  double t6850;
  double t6852;
  double t6860;
  double t6862;
  double t6867;
  double t6870;
  double t6871;
  double t6874;
  double t6882;
  double t6888;
  double t6890;
  double t6897;
  double t6903;
  double t6910;
  double t6923;
  double t6933;
  double t6954;
  double t6781;
  double t6797;
  double t6799;
  double t7102;
  double t7116;
  double t7122;
  double t7132;
  double t7136;
  double t7140;
  double t7145;
  double t7148;
  double t7151;
  double t7160;
  double t7171;
  double t7179;
  double t7189;
  double t7195;
  double t7196;
  double t7209;
  double t7212;
  double t7224;
  double t7416;
  double t7432;
  double t7437;
  double t7482;
  double t7503;
  double t7504;
  double t7510;
  double t7514;
  double t7523;
  double t7562;
  double t7568;
  double t7585;
  double t7596;
  double t7603;
  double t7607;
  double t7616;
  double t7618;
  double t7624;
  double t7704;
  double t7707;
  double t7709;
  double t7713;
  double t7714;
  double t7715;
  double t7723;
  double t7726;
  double t7738;
  double t7740;
  double t7743;
  double t7749;
  double t7761;
  double t7767;
  double t7776;
  double t7778;
  double t7787;
  double t7798;
  double t7804;
  double t7806;
  double t7671;
  double t7673;
  double t7684;
  double t7687;
  double t7688;
  double t7841;
  double t7842;
  double t7843;
  double t7849;
  double t7857;
  double t7865;
  double t7868;
  double t7870;
  double t7877;
  double t7882;
  double t7885;
  double t7895;
  double t7901;
  double t7902;
  double t7904;
  double t7907;
  double t7908;
  double t7912;
  double t7913;
  double t7914;
  double t7934;
  double t7935;
  double t7937;
  double t7939;
  double t7940;
  double t7947;
  double t7949;
  double t7950;
  double t7952;
  double t7954;
  double t7955;
  double t7958;
  double t7960;
  double t7961;
  double t7962;
  double t7969;
  double t7970;
  double t7972;
  double t8005;
  double t8007;
  double t8008;
  double t8024;
  double t8030;
  double t8033;
  double t8034;
  double t8036;
  double t8040;
  double t8044;
  double t8055;
  double t8059;
  double t8060;
  double t8065;
  double t8068;
  double t8069;
  double t8071;
  double t8073;
  double t8075;
  double t7994;
  double t7996;
  double t8002;
  double t8012;
  double t8013;
  double t8114;
  double t8115;
  double t8117;
  double t8118;
  double t8119;
  double t8123;
  double t8127;
  double t8132;
  double t8133;
  double t8135;
  double t8137;
  double t8138;
  double t8139;
  double t7938;
  double t7948;
  double t7953;
  double t7959;
  double t7964;
  double t7974;
  double t7975;
  double t7976;
  double t7977;
  double t7981;
  double t7982;
  double t7983;
  double t7984;
  double t7989;
  double t8167;
  double t8168;
  double t8170;
  double t8172;
  double t8174;
  double t8178;
  double t8180;
  double t8182;
  double t8183;
  double t8186;
  double t8189;
  double t8190;
  double t8191;
  double t8160;
  double t8161;
  double t8164;
  double t8165;
  double t8166;
  double t8207;
  double t8208;
  double t8211;
  double t8212;
  double t8215;
  double t8216;
  double t8217;
  double t8232;
  double t8233;
  double t8234;
  double t8238;
  double t8239;
  double t8241;
  double t8242;
  double t8245;
  double t8246;
  double t8248;
  double t8250;
  double t8251;
  double t8252;
  double t8269;
  double t8271;
  double t8272;
  double t8278;
  double t8279;
  double t8281;
  double t8282;
  double t8265;
  double t8266;
  double t8268;
  double t8275;
  double t8276;
  double t8296;
  double t8297;
  double t6055;
  double t8310;
  double t8311;
  double t8313;
  double t8318;
  double t8319;
  double t8321;
  double t8322;
  double t8284;
  double t8348;
  double t8349;
  double t8350;
  double t8288;
  double t8340;
  double t8341;
  double t8344;
  double t8345;
  double t8346;
  double t8299;
  double t6074;
  double t6086;
  double t8325;
  double t8379;
  double t8380;
  double t8381;
  double t8332;
  t265 = Cos(var1[0]);
  t371 = Cos(var1[1]);
  t1044 = Sin(var1[1]);
  t1363 = Cos(var1[2]);
  t1593 = -1.*t1363;
  t1607 = 1. + t1593;
  t1618 = Sin(var1[2]);
  t2324 = Sin(var1[0]);
  t2416 = Cos(var1[3]);
  t2503 = -1.*t2416;
  t2795 = 1. + t2503;
  t2910 = Sin(var1[3]);
  t3213 = t265*t1363*t1044;
  t3317 = -1.*t2324*t1618;
  t3405 = t3213 + t3317;
  t3900 = -1.*t1363*t2324;
  t3917 = -1.*t265*t1044*t1618;
  t3954 = t3900 + t3917;
  t4019 = Cos(var1[4]);
  t4033 = -1.*t4019;
  t4063 = 1. + t4033;
  t4179 = Sin(var1[4]);
  t4692 = -1.*t2910*t3405;
  t4746 = t2416*t3954;
  t4749 = t4692 + t4746;
  t5152 = t2416*t3405;
  t5193 = t2910*t3954;
  t5210 = t5152 + t5193;
  t5245 = Cos(var1[5]);
  t5294 = -1.*t5245;
  t5336 = 1. + t5294;
  t5395 = Sin(var1[5]);
  t5512 = t4179*t4749;
  t5523 = t4019*t5210;
  t5542 = t5512 + t5523;
  t5586 = t4019*t4749;
  t5605 = -1.*t4179*t5210;
  t5619 = t5586 + t5605;
  t5644 = Cos(var1[6]);
  t5645 = -1.*t5644;
  t5655 = 1. + t5645;
  t5671 = Sin(var1[6]);
  t5785 = -1.*t5395*t5542;
  t5790 = t5245*t5619;
  t5791 = t5785 + t5790;
  t5838 = t5245*t5542;
  t5845 = t5395*t5619;
  t5859 = t5838 + t5845;
  t542 = -1.*t371;
  t761 = 1. + t542;
  t937 = 0.135*t761;
  t1104 = 0.049*t1044;
  t1117 = 0. + t937 + t1104;
  t1609 = -0.049*t1607;
  t1737 = -0.09*t1618;
  t2053 = 0. + t1609 + t1737;
  t2330 = -0.09*t1607;
  t2349 = 0.049*t1618;
  t2388 = 0. + t2330 + t2349;
  t2848 = -0.049*t2795;
  t3040 = -0.21*t2910;
  t3126 = 0. + t2848 + t3040;
  t3771 = -0.21*t2795;
  t3822 = 0.049*t2910;
  t3862 = 0. + t3771 + t3822;
  t4127 = -0.2707*t4063;
  t4598 = 0.0016*t4179;
  t4676 = 0. + t4127 + t4598;
  t6240 = -1.*t1363*t2324*t1044;
  t6279 = -1.*t265*t1618;
  t6291 = t6240 + t6279;
  t6301 = -1.*t265*t1363;
  t6308 = t2324*t1044*t1618;
  t6337 = t6301 + t6308;
  t4785 = -0.0016*t4063;
  t4816 = -0.2707*t4179;
  t5134 = 0. + t4785 + t4816;
  t5391 = 0.0184*t5336;
  t5401 = -0.7055*t5395;
  t5425 = 0. + t5391 + t5401;
  t6384 = -1.*t2910*t6291;
  t6396 = t2416*t6337;
  t6425 = t6384 + t6396;
  t6429 = t2416*t6291;
  t6448 = t2910*t6337;
  t6461 = t6429 + t6448;
  t5554 = -0.7055*t5336;
  t5560 = -0.0184*t5395;
  t5567 = 0. + t5554 + t5560;
  t5665 = -1.1135*t5655;
  t5720 = 0.0216*t5671;
  t5754 = 0. + t5665 + t5720;
  t6493 = t4179*t6425;
  t6506 = t4019*t6461;
  t6518 = t6493 + t6506;
  t6523 = t4019*t6425;
  t6525 = -1.*t4179*t6461;
  t6541 = t6523 + t6525;
  t5816 = -0.0216*t5655;
  t5821 = -1.1135*t5671;
  t5834 = 0. + t5816 + t5821;
  t6554 = -1.*t5395*t6518;
  t6560 = t5245*t6541;
  t6562 = t6554 + t6560;
  t6595 = t5245*t6518;
  t6596 = t5395*t6541;
  t6608 = t6595 + t6596;
  t6841 = -1.*t371*t1363*t2910*t2324;
  t6850 = -1.*t2416*t371*t2324*t1618;
  t6852 = t6841 + t6850;
  t6860 = t2416*t371*t1363*t2324;
  t6862 = -1.*t371*t2910*t2324*t1618;
  t6867 = t6860 + t6862;
  t6870 = t4179*t6852;
  t6871 = t4019*t6867;
  t6874 = t6870 + t6871;
  t6882 = t4019*t6852;
  t6888 = -1.*t4179*t6867;
  t6890 = t6882 + t6888;
  t6897 = -1.*t5395*t6874;
  t6903 = t5245*t6890;
  t6910 = t6897 + t6903;
  t6923 = t5245*t6874;
  t6933 = t5395*t6890;
  t6954 = t6923 + t6933;
  t6781 = 0.049*t371;
  t6797 = 0.135*t1044;
  t6799 = t6781 + t6797;
  t7102 = -1.*t265*t371*t1363*t2910;
  t7116 = -1.*t2416*t265*t371*t1618;
  t7122 = t7102 + t7116;
  t7132 = t2416*t265*t371*t1363;
  t7136 = -1.*t265*t371*t2910*t1618;
  t7140 = t7132 + t7136;
  t7145 = t4179*t7122;
  t7148 = t4019*t7140;
  t7151 = t7145 + t7148;
  t7160 = t4019*t7122;
  t7171 = -1.*t4179*t7140;
  t7179 = t7160 + t7171;
  t7189 = -1.*t5395*t7151;
  t7195 = t5245*t7179;
  t7196 = t7189 + t7195;
  t7209 = t5245*t7151;
  t7212 = t5395*t7179;
  t7224 = t7209 + t7212;
  t7416 = t1363*t2910*t1044;
  t7432 = t2416*t1044*t1618;
  t7437 = t7416 + t7432;
  t7482 = -1.*t2416*t1363*t1044;
  t7503 = t2910*t1044*t1618;
  t7504 = t7482 + t7503;
  t7510 = t4179*t7437;
  t7514 = t4019*t7504;
  t7523 = t7510 + t7514;
  t7562 = t4019*t7437;
  t7568 = -1.*t4179*t7504;
  t7585 = t7562 + t7568;
  t7596 = -1.*t5395*t7523;
  t7603 = t5245*t7585;
  t7607 = t7596 + t7603;
  t7616 = t5245*t7523;
  t7618 = t5395*t7585;
  t7624 = t7616 + t7618;
  t7704 = t265*t1363;
  t7707 = -1.*t2324*t1044*t1618;
  t7709 = t7704 + t7707;
  t7713 = t2910*t6291;
  t7714 = t2416*t7709;
  t7715 = t7713 + t7714;
  t7723 = -1.*t2910*t7709;
  t7726 = t6429 + t7723;
  t7738 = -1.*t4179*t7715;
  t7740 = t4019*t7726;
  t7743 = t7738 + t7740;
  t7749 = t4019*t7715;
  t7761 = t4179*t7726;
  t7767 = t7749 + t7761;
  t7776 = t5395*t7743;
  t7778 = t5245*t7767;
  t7787 = t7776 + t7778;
  t7798 = t5245*t7743;
  t7804 = -1.*t5395*t7767;
  t7806 = t7798 + t7804;
  t7671 = 0.049*t1363;
  t7673 = t7671 + t1737;
  t7684 = -0.09*t1363;
  t7687 = -0.049*t1618;
  t7688 = t7684 + t7687;
  t7841 = -1.*t265*t1363*t1044;
  t7842 = t2324*t1618;
  t7843 = t7841 + t7842;
  t7849 = t2910*t7843;
  t7857 = t7849 + t4746;
  t7865 = t2416*t7843;
  t7868 = -1.*t2910*t3954;
  t7870 = t7865 + t7868;
  t7877 = -1.*t4179*t7857;
  t7882 = t4019*t7870;
  t7885 = t7877 + t7882;
  t7895 = t4019*t7857;
  t7901 = t4179*t7870;
  t7902 = t7895 + t7901;
  t7904 = t5395*t7885;
  t7907 = t5245*t7902;
  t7908 = t7904 + t7907;
  t7912 = t5245*t7885;
  t7913 = -1.*t5395*t7902;
  t7914 = t7912 + t7913;
  t7934 = -1.*t371*t1363*t2910;
  t7935 = -1.*t2416*t371*t1618;
  t7937 = t7934 + t7935;
  t7939 = -1.*t2416*t371*t1363;
  t7940 = t371*t2910*t1618;
  t7947 = t7939 + t7940;
  t7949 = -1.*t4179*t7937;
  t7950 = t4019*t7947;
  t7952 = t7949 + t7950;
  t7954 = t4019*t7937;
  t7955 = t4179*t7947;
  t7958 = t7954 + t7955;
  t7960 = t5395*t7952;
  t7961 = t5245*t7958;
  t7962 = t7960 + t7961;
  t7969 = t5245*t7952;
  t7970 = -1.*t5395*t7958;
  t7972 = t7969 + t7970;
  t8005 = t1363*t2324*t1044;
  t8007 = t265*t1618;
  t8008 = t8005 + t8007;
  t8024 = -1.*t2910*t8008;
  t8030 = t8024 + t7714;
  t8033 = -1.*t2416*t8008;
  t8034 = t8033 + t7723;
  t8036 = -1.*t4179*t8030;
  t8040 = t4019*t8034;
  t8044 = t8036 + t8040;
  t8055 = t4019*t8030;
  t8059 = t4179*t8034;
  t8060 = t8055 + t8059;
  t8065 = t5395*t8044;
  t8068 = t5245*t8060;
  t8069 = t8065 + t8068;
  t8071 = t5245*t8044;
  t8073 = -1.*t5395*t8060;
  t8075 = t8071 + t8073;
  t7994 = -0.21*t2416;
  t7996 = -0.049*t2910;
  t8002 = t7994 + t7996;
  t8012 = 0.049*t2416;
  t8013 = t8012 + t3040;
  t8114 = -1.*t2416*t3405;
  t8115 = t8114 + t7868;
  t8117 = -1.*t4179*t4749;
  t8118 = t4019*t8115;
  t8119 = t8117 + t8118;
  t8123 = t4179*t8115;
  t8127 = t5586 + t8123;
  t8132 = t5395*t8119;
  t8133 = t5245*t8127;
  t8135 = t8132 + t8133;
  t8137 = t5245*t8119;
  t8138 = -1.*t5395*t8127;
  t8139 = t8137 + t8138;
  t7938 = t5134*t7937;
  t7948 = t4676*t7947;
  t7953 = t5567*t7952;
  t7959 = t5425*t7958;
  t7964 = t5834*t7962;
  t7974 = t5754*t7972;
  t7975 = -1.*t5671*t7962;
  t7976 = t5644*t7972;
  t7977 = t7975 + t7976;
  t7981 = -1.1312*t7977;
  t7982 = t5644*t7962;
  t7983 = t5671*t7972;
  t7984 = t7982 + t7983;
  t7989 = 0.0306*t7984;
  t8167 = t2416*t8008;
  t8168 = t2910*t7709;
  t8170 = t8167 + t8168;
  t8172 = -1.*t4019*t8170;
  t8174 = t8036 + t8172;
  t8178 = -1.*t4179*t8170;
  t8180 = t8055 + t8178;
  t8182 = t5395*t8174;
  t8183 = t5245*t8180;
  t8186 = t8182 + t8183;
  t8189 = t5245*t8174;
  t8190 = -1.*t5395*t8180;
  t8191 = t8189 + t8190;
  t8160 = 0.0016*t4019;
  t8161 = t8160 + t4816;
  t8164 = -0.2707*t4019;
  t8165 = -0.0016*t4179;
  t8166 = t8164 + t8165;
  t8207 = -1.*t4019*t5210;
  t8208 = t8117 + t8207;
  t8211 = t5395*t8208;
  t8212 = t8211 + t5790;
  t8215 = t5245*t8208;
  t8216 = -1.*t5395*t5619;
  t8217 = t8215 + t8216;
  t8232 = t2416*t371*t1363;
  t8233 = -1.*t371*t2910*t1618;
  t8234 = t8232 + t8233;
  t8238 = -1.*t4019*t8234;
  t8239 = t7949 + t8238;
  t8241 = -1.*t4179*t8234;
  t8242 = t7954 + t8241;
  t8245 = t5395*t8239;
  t8246 = t5245*t8242;
  t8248 = t8245 + t8246;
  t8250 = t5245*t8239;
  t8251 = -1.*t5395*t8242;
  t8252 = t8250 + t8251;
  t8269 = t4179*t8030;
  t8271 = t4019*t8170;
  t8272 = t8269 + t8271;
  t8278 = -1.*t5395*t8272;
  t8279 = t8278 + t8183;
  t8281 = -1.*t5245*t8272;
  t8282 = t8281 + t8190;
  t8265 = -0.7055*t5245;
  t8266 = 0.0184*t5395;
  t8268 = t8265 + t8266;
  t8275 = -0.0184*t5245;
  t8276 = t8275 + t5401;
  t8296 = -1.*t5245*t5542;
  t8297 = t8296 + t8216;
  t6055 = t5644*t5791;
  t8310 = t4179*t7937;
  t8311 = t4019*t8234;
  t8313 = t8310 + t8311;
  t8318 = -1.*t5395*t8313;
  t8319 = t8318 + t8246;
  t8321 = -1.*t5245*t8313;
  t8322 = t8321 + t8251;
  t8284 = -1.*t5671*t8279;
  t8348 = t5245*t8272;
  t8349 = t5395*t8180;
  t8350 = t8348 + t8349;
  t8288 = t5644*t8279;
  t8340 = 0.0216*t5644;
  t8341 = t8340 + t5821;
  t8344 = -1.1135*t5644;
  t8345 = -0.0216*t5671;
  t8346 = t8344 + t8345;
  t8299 = -1.*t5671*t5791;
  t6074 = -1.*t5671*t5859;
  t6086 = t6055 + t6074;
  t8325 = -1.*t5671*t8319;
  t8379 = t5245*t8313;
  t8380 = t5395*t8242;
  t8381 = t8379 + t8380;
  t8332 = t5644*t8319;
  p_output1[0]=t2324*t2388 + 0.135*t265 - 1.*t1117*t265 - 1.*t1044*t2053*t265 - 1.*t3126*t3405 - 0.1305*t265*t371 - 1.*t3862*t3954 - 1.*t4676*t4749 - 1.*t5134*t5210 - 1.*t5425*t5542 - 1.*t5567*t5619 - 1.*t5754*t5791 - 1.*t5834*t5859 - 0.0306*(t5671*t5791 + t5644*t5859) + 1.1312*t6086;
  p_output1[1]=0.135*t2324 - 1.*t1117*t2324 - 1.*t1044*t2053*t2324 - 1.*t2388*t265 - 0.1305*t2324*t371 + t3126*t6291 + t3862*t6337 + t4676*t6425 + t5134*t6461 + t5425*t6518 + t5567*t6541 + t5754*t6562 + t5834*t6608 + 0.0306*(t5671*t6562 + t5644*t6608) - 1.1312*(t5644*t6562 - 1.*t5671*t6608);
  p_output1[2]=0;
  p_output1[3]=0.1305*t1044*t2324 - 1.*t2053*t2324*t371 - 1.*t1363*t2324*t3126*t371 + t1618*t2324*t371*t3862 - 1.*t2324*t6799 - 1.*t4676*t6852 - 1.*t5134*t6867 - 1.*t5425*t6874 - 1.*t5567*t6890 - 1.*t5754*t6910 - 1.*t5834*t6954 - 0.0306*(t5671*t6910 + t5644*t6954) + 1.1312*(t5644*t6910 - 1.*t5671*t6954);
  p_output1[4]=-0.1305*t1044*t265 + t2053*t265*t371 + t1363*t265*t3126*t371 - 1.*t1618*t265*t371*t3862 + t265*t6799 + t4676*t7122 + t5134*t7140 + t5425*t7151 + t5567*t7179 + t5754*t7196 + t5834*t7224 + 0.0306*(t5671*t7196 + t5644*t7224) - 1.1312*(t5644*t7196 - 1.*t5671*t7224);
  p_output1[5]=-0.049*t1044 - 1.*t1044*t2053 - 1.*t1044*t1363*t3126 + 0.004500000000000004*t371 + t1044*t1618*t3862 + t4676*t7437 + t5134*t7504 + t5425*t7523 + t5567*t7585 + t5754*t7607 + t5834*t7624 + 0.0306*(t5671*t7607 + t5644*t7624) - 1.1312*(t5644*t7607 - 1.*t5671*t7624);
  p_output1[6]=-1.*t3862*t6291 - 1.*t265*t7673 - 1.*t1044*t2324*t7688 - 1.*t3126*t7709 - 1.*t5134*t7715 - 1.*t4676*t7726 - 1.*t5567*t7743 - 1.*t5425*t7767 - 1.*t5834*t7787 - 1.*t5754*t7806 + 1.1312*(-1.*t5671*t7787 + t5644*t7806) - 0.0306*(t5644*t7787 + t5671*t7806);
  p_output1[7]=t3126*t3954 - 1.*t2324*t7673 + t1044*t265*t7688 + t3862*t7843 + t5134*t7857 + t4676*t7870 + t5567*t7885 + t5425*t7902 + t5834*t7908 + t5754*t7914 - 1.1312*(-1.*t5671*t7908 + t5644*t7914) + 0.0306*(t5644*t7908 + t5671*t7914);
  p_output1[8]=-1.*t1618*t3126*t371 - 1.*t1363*t371*t3862 + t371*t7688 + t7938 + t7948 + t7953 + t7959 + t7964 + t7974 + t7981 + t7989;
  p_output1[9]=-1.*t8002*t8008 - 1.*t7709*t8013 - 1.*t5134*t8030 - 1.*t4676*t8034 - 1.*t5567*t8044 - 1.*t5425*t8060 - 1.*t5834*t8069 - 1.*t5754*t8075 + 1.1312*(-1.*t5671*t8069 + t5644*t8075) - 0.0306*(t5644*t8069 + t5671*t8075);
  p_output1[10]=t4749*t5134 + t3405*t8002 + t3954*t8013 + t4676*t8115 + t5567*t8119 + t5425*t8127 + t5834*t8135 + t5754*t8139 - 1.1312*(-1.*t5671*t8135 + t5644*t8139) + 0.0306*(t5644*t8135 + t5671*t8139);
  p_output1[11]=t7938 + t7948 + t7953 + t7959 + t7964 + t7974 + t7981 + t7989 + t1363*t371*t8002 - 1.*t1618*t371*t8013;
  p_output1[12]=-1.*t8030*t8161 - 1.*t8166*t8170 - 1.*t5567*t8174 - 1.*t5425*t8180 - 1.*t5834*t8186 - 1.*t5754*t8191 + 1.1312*(-1.*t5671*t8186 + t5644*t8191) - 0.0306*(t5644*t8186 + t5671*t8191);
  p_output1[13]=t5425*t5619 + t4749*t8161 + t5210*t8166 + t5567*t8208 + t5834*t8212 + t5754*t8217 - 1.1312*(-1.*t5671*t8212 + t5644*t8217) + 0.0306*(t5644*t8212 + t5671*t8217);
  p_output1[14]=t7937*t8161 + t8166*t8234 + t5567*t8239 + t5425*t8242 + t5834*t8248 + t5754*t8252 - 1.1312*(-1.*t5671*t8248 + t5644*t8252) + 0.0306*(t5644*t8248 + t5671*t8252);
  p_output1[15]=-1.*t8268*t8272 - 1.*t8180*t8276 - 1.*t5834*t8279 - 1.*t5754*t8282 + 1.1312*(t5644*t8282 + t8284) - 0.0306*(t5671*t8282 + t8288);
  p_output1[16]=t5791*t5834 + t5542*t8268 + t5619*t8276 + t5754*t8297 + 0.0306*(t6055 + t5671*t8297) - 1.1312*(t5644*t8297 + t8299);
  p_output1[17]=t8242*t8276 + t8268*t8313 + t5834*t8319 + t5754*t8322 - 1.1312*(t5644*t8322 + t8325) + 0.0306*(t5671*t8322 + t8332);
  p_output1[18]=-1.*t8279*t8341 - 1.*t8346*t8350 + 1.1312*(t8284 - 1.*t5644*t8350) - 0.0306*(t8288 - 1.*t5671*t8350);
  p_output1[19]=0.0306*t6086 - 1.1312*(-1.*t5644*t5859 + t8299) + t5791*t8341 + t5859*t8346;
  p_output1[20]=t8319*t8341 + t8346*t8381 - 1.1312*(t8325 - 1.*t5644*t8381) + 0.0306*(t8332 - 1.*t5671*t8381);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 14, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_MultisenseIMU_to_LeftToeBottom_mex.hh"

namespace SymExpression
{

void J_MultisenseIMU_to_LeftToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
