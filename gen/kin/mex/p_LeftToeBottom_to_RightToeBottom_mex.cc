/*
 * Automatically Generated from Mathematica.
 * Mon 26 Feb 2018 15:42:48 GMT-05:00
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
  double t101;
  double t193;
  double t406;
  double t1006;
  double t1011;
  double t1039;
  double t1110;
  double t1482;
  double t1583;
  double t1603;
  double t1620;
  double t1650;
  double t1572;
  double t1574;
  double t1575;
  double t1837;
  double t1848;
  double t2053;
  double t2719;
  double t2755;
  double t2766;
  double t2778;
  double t2619;
  double t2647;
  double t2665;
  double t2895;
  double t2906;
  double t2956;
  double t3187;
  double t3234;
  double t3239;
  double t3262;
  double t3161;
  double t3179;
  double t3184;
  double t3323;
  double t3408;
  double t3409;
  double t3804;
  double t3808;
  double t3856;
  double t4124;
  double t3622;
  double t3623;
  double t3667;
  double t4375;
  double t4376;
  double t4401;
  double t7136;
  double t7454;
  double t7278;
  double t7344;
  double t7482;
  double t7549;
  double t7413;
  double t7486;
  double t7506;
  double t7131;
  double t7560;
  double t7564;
  double t7567;
  double t7636;
  double t7527;
  double t7591;
  double t7598;
  double t7097;
  double t7642;
  double t7658;
  double t7660;
  double t7685;
  double t7626;
  double t7661;
  double t7674;
  double t6972;
  double t7689;
  double t7693;
  double t7694;
  double t7771;
  double t7758;
  double t7759;
  double t7762;
  double t7774;
  double t7781;
  double t7784;
  double t7786;
  double t7794;
  double t7782;
  double t7797;
  double t7799;
  double t7804;
  double t7808;
  double t7809;
  double t7802;
  double t7812;
  double t7822;
  double t7828;
  double t7833;
  double t7836;
  double t7827;
  double t7842;
  double t7843;
  double t7846;
  double t7849;
  double t7852;
  double t7680;
  double t7711;
  double t7717;
  double t7733;
  double t7743;
  double t7745;
  double t7844;
  double t7853;
  double t7854;
  double t7862;
  double t7863;
  double t7865;
  double t7884;
  double t7885;
  double t7886;
  double t7890;
  double t7891;
  double t7892;
  double t7889;
  double t7893;
  double t7896;
  double t7905;
  double t7907;
  double t7908;
  double t7904;
  double t7910;
  double t7911;
  double t7914;
  double t7916;
  double t7917;
  double t7913;
  double t7918;
  double t7919;
  double t7923;
  double t7924;
  double t7925;
  double t7873;
  double t7874;
  double t7876;
  double t7857;
  double t7866;
  double t7868;
  double t7921;
  double t7926;
  double t7927;
  double t7929;
  double t7931;
  double t7932;
  double t7726;
  double t7755;
  double t7757;
  double t7877;
  double t7879;
  double t7880;
  double t7869;
  double t7882;
  double t263;
  double t360;
  double t405;
  double t531;
  double t574;
  double t1047;
  double t1111;
  double t1312;
  double t1526;
  double t1533;
  double t1541;
  double t1637;
  double t1664;
  double t1691;
  double t2140;
  double t2360;
  double t2403;
  double t7958;
  double t7959;
  double t7960;
  double t7962;
  double t7963;
  double t7964;
  double t2769;
  double t2798;
  double t2856;
  double t3071;
  double t3098;
  double t3113;
  double t7966;
  double t7967;
  double t7968;
  double t7970;
  double t7971;
  double t7972;
  double t3253;
  double t3294;
  double t3298;
  double t3477;
  double t3519;
  double t3561;
  double t7974;
  double t7975;
  double t7976;
  double t7978;
  double t7979;
  double t7980;
  double t3958;
  double t4154;
  double t4244;
  double t4479;
  double t4662;
  double t4821;
  double t7982;
  double t7983;
  double t7984;
  double t7986;
  double t7987;
  double t7988;
  double t7939;
  double t7940;
  double t7941;
  double t7928;
  double t7933;
  double t7934;
  double t7935;
  double t7936;
  double t7937;
  double t7938;
  double t7942;
  double t7943;
  double t7944;
  double t7945;
  double t7946;
  double t7947;
  double t7948;
  double t7949;
  double t8008;
  double t8009;
  double t8010;
  double t8012;
  double t8013;
  double t8014;
  double t8016;
  double t8017;
  double t8018;
  double t8020;
  double t8021;
  double t8022;
  double t8024;
  double t8025;
  double t8026;
  double t8028;
  double t8029;
  double t8030;
  double t8055;
  double t8056;
  double t8065;
  double t8066;
  double t8075;
  double t8076;
  double t8085;
  double t8086;
  double t8095;
  double t8096;
  double t8049;
  double t8050;
  double t8067;
  double t8068;
  double t8069;
  double t8057;
  double t8058;
  double t8059;
  double t8071;
  double t8072;
  double t8073;
  double t8077;
  double t8078;
  double t8079;
  double t8081;
  double t8082;
  double t8083;
  double t8087;
  double t8088;
  double t8089;
  double t8091;
  double t8092;
  double t8093;
  double t8097;
  double t8098;
  double t8099;
  double t8101;
  double t8102;
  double t8103;
  double t8045;
  double t8046;
  double t8047;
  double t8048;
  double t8051;
  double t8052;
  double t8053;
  double t8054;
  double t8060;
  double t8061;
  double t8062;
  double t8063;
  double t8064;
  double t8070;
  double t8074;
  double t8080;
  double t8084;
  double t8090;
  double t8094;
  double t8100;
  double t8104;
  double t8105;
  double t8106;
  double t8107;
  double t8109;
  double t8110;
  double t8111;
  double t8112;
  double t8113;
  double t8114;
  double t8115;
  double t8116;
  double t8117;
  double t8118;
  double t8119;
  double t8120;
  double t8121;
  double t8122;
  double t120;
  double t247;
  double t886;
  double t1444;
  double t1549;
  double t1768;
  double t2617;
  double t2879;
  double t3126;
  double t3321;
  double t3603;
  double t4257;
  double t4849;
  double t4890;
  double t5053;
  double t5799;
  double t6036;
  double t6227;
  double t6659;
  double t6719;
  double t6844;
  double t6929;
  double t8003;
  double t8004;
  double t8005;
  double t8006;
  double t8007;
  double t8011;
  double t8015;
  double t8019;
  double t8023;
  double t8027;
  double t8031;
  double t8032;
  double t8033;
  double t8034;
  double t8035;
  double t8036;
  double t8037;
  double t8038;
  double t8039;
  double t8040;
  double t7951;
  double t7952;
  double t7953;
  double t7954;
  double t7955;
  double t7956;
  double t7957;
  double t7961;
  double t7965;
  double t7969;
  double t7973;
  double t7977;
  double t7981;
  double t7985;
  double t7989;
  double t7990;
  double t7991;
  double t7992;
  double t7993;
  double t7994;
  double t7995;
  double t7996;
  double t7997;
  double t7998;
  double t8130;
  double t8131;
  double t8132;
  double t8133;
  double t8134;
  double t8135;
  double t8136;
  double t8137;
  double t8138;
  double t8139;
  double t8140;
  double t8141;
  double t8142;
  double t8143;
  double t8144;
  double t8145;
  double t8108;
  double t8123;
  double t8124;
  double t8162;
  double t8163;
  double t8164;
  double t8126;
  double t8127;
  double t8128;
  t101 = Sin(var1[7]);
  t193 = Cos(var1[8]);
  t406 = Sin(var1[8]);
  t1006 = Cos(var1[9]);
  t1011 = -1.*t1006;
  t1039 = 1. + t1011;
  t1110 = Sin(var1[9]);
  t1482 = Cos(var1[7]);
  t1583 = Cos(var1[10]);
  t1603 = -1.*t1583;
  t1620 = 1. + t1603;
  t1650 = Sin(var1[10]);
  t1572 = t1006*t101*t406;
  t1574 = t1482*t1110;
  t1575 = t1572 + t1574;
  t1837 = t1482*t1006;
  t1848 = -1.*t101*t406*t1110;
  t2053 = t1837 + t1848;
  t2719 = Cos(var1[11]);
  t2755 = -1.*t2719;
  t2766 = 1. + t2755;
  t2778 = Sin(var1[11]);
  t2619 = t1583*t1575;
  t2647 = t2053*t1650;
  t2665 = t2619 + t2647;
  t2895 = t1583*t2053;
  t2906 = -1.*t1575*t1650;
  t2956 = t2895 + t2906;
  t3187 = Cos(var1[12]);
  t3234 = -1.*t3187;
  t3239 = 1. + t3234;
  t3262 = Sin(var1[12]);
  t3161 = t2719*t2665;
  t3179 = t2956*t2778;
  t3184 = t3161 + t3179;
  t3323 = t2719*t2956;
  t3408 = -1.*t2665*t2778;
  t3409 = t3323 + t3408;
  t3804 = Cos(var1[13]);
  t3808 = -1.*t3804;
  t3856 = 1. + t3808;
  t4124 = Sin(var1[13]);
  t3622 = t3187*t3184;
  t3623 = t3409*t3262;
  t3667 = t3622 + t3623;
  t4375 = t3187*t3409;
  t4376 = -1.*t3184*t3262;
  t4401 = t4375 + t4376;
  t7136 = Cos(var1[1]);
  t7454 = Cos(var1[3]);
  t7278 = Cos(var1[2]);
  t7344 = Sin(var1[3]);
  t7482 = Sin(var1[2]);
  t7549 = Cos(var1[4]);
  t7413 = -1.*t7136*t7278*t7344;
  t7486 = -1.*t7454*t7136*t7482;
  t7506 = t7413 + t7486;
  t7131 = Sin(var1[4]);
  t7560 = t7454*t7136*t7278;
  t7564 = -1.*t7136*t7344*t7482;
  t7567 = t7560 + t7564;
  t7636 = Cos(var1[5]);
  t7527 = t7131*t7506;
  t7591 = t7549*t7567;
  t7598 = t7527 + t7591;
  t7097 = Sin(var1[5]);
  t7642 = t7549*t7506;
  t7658 = -1.*t7131*t7567;
  t7660 = t7642 + t7658;
  t7685 = Cos(var1[6]);
  t7626 = -1.*t7097*t7598;
  t7661 = t7636*t7660;
  t7674 = t7626 + t7661;
  t6972 = Sin(var1[6]);
  t7689 = t7636*t7598;
  t7693 = t7097*t7660;
  t7694 = t7689 + t7693;
  t7771 = Sin(var1[0]);
  t7758 = Cos(var1[0]);
  t7759 = Sin(var1[1]);
  t7762 = t7758*t7278*t7759;
  t7774 = -1.*t7771*t7482;
  t7781 = t7762 + t7774;
  t7784 = -1.*t7278*t7771;
  t7786 = -1.*t7758*t7759*t7482;
  t7794 = t7784 + t7786;
  t7782 = -1.*t7344*t7781;
  t7797 = t7454*t7794;
  t7799 = t7782 + t7797;
  t7804 = t7454*t7781;
  t7808 = t7344*t7794;
  t7809 = t7804 + t7808;
  t7802 = t7131*t7799;
  t7812 = t7549*t7809;
  t7822 = t7802 + t7812;
  t7828 = t7549*t7799;
  t7833 = -1.*t7131*t7809;
  t7836 = t7828 + t7833;
  t7827 = -1.*t7097*t7822;
  t7842 = t7636*t7836;
  t7843 = t7827 + t7842;
  t7846 = t7636*t7822;
  t7849 = t7097*t7836;
  t7852 = t7846 + t7849;
  t7680 = t6972*t7674;
  t7711 = t7685*t7694;
  t7717 = t7680 + t7711;
  t7733 = t7685*t7674;
  t7743 = -1.*t6972*t7694;
  t7745 = t7733 + t7743;
  t7844 = t6972*t7843;
  t7853 = t7685*t7852;
  t7854 = t7844 + t7853;
  t7862 = t7685*t7843;
  t7863 = -1.*t6972*t7852;
  t7865 = t7862 + t7863;
  t7884 = t7278*t7771*t7759;
  t7885 = t7758*t7482;
  t7886 = t7884 + t7885;
  t7890 = t7758*t7278;
  t7891 = -1.*t7771*t7759*t7482;
  t7892 = t7890 + t7891;
  t7889 = -1.*t7344*t7886;
  t7893 = t7454*t7892;
  t7896 = t7889 + t7893;
  t7905 = t7454*t7886;
  t7907 = t7344*t7892;
  t7908 = t7905 + t7907;
  t7904 = t7131*t7896;
  t7910 = t7549*t7908;
  t7911 = t7904 + t7910;
  t7914 = t7549*t7896;
  t7916 = -1.*t7131*t7908;
  t7917 = t7914 + t7916;
  t7913 = -1.*t7097*t7911;
  t7918 = t7636*t7917;
  t7919 = t7913 + t7918;
  t7923 = t7636*t7911;
  t7924 = t7097*t7917;
  t7925 = t7923 + t7924;
  t7873 = -0.766044*t7717;
  t7874 = 0.642788*t7745;
  t7876 = t7873 + t7874;
  t7857 = -0.766044*t7854;
  t7866 = 0.642788*t7865;
  t7868 = t7857 + t7866;
  t7921 = t6972*t7919;
  t7926 = t7685*t7925;
  t7927 = t7921 + t7926;
  t7929 = t7685*t7919;
  t7931 = -1.*t6972*t7925;
  t7932 = t7929 + t7931;
  t7726 = 0.642788*t7717;
  t7755 = 0.766044*t7745;
  t7757 = t7726 + t7755;
  t7877 = 0.642788*t7854;
  t7879 = 0.766044*t7865;
  t7880 = t7877 + t7879;
  t7869 = t7757*t7868;
  t7882 = -1.*t7876*t7880;
  t263 = -1.*t193;
  t360 = 1. + t263;
  t405 = -0.135*t360;
  t531 = 0.049*t406;
  t574 = 0. + t405 + t531;
  t1047 = -0.049*t1039;
  t1111 = -0.09*t1110;
  t1312 = 0. + t1047 + t1111;
  t1526 = -0.09*t1039;
  t1533 = 0.049*t1110;
  t1541 = 0. + t1526 + t1533;
  t1637 = -0.049*t1620;
  t1664 = -0.21*t1650;
  t1691 = 0. + t1637 + t1664;
  t2140 = -0.21*t1620;
  t2360 = 0.049*t1650;
  t2403 = 0. + t2140 + t2360;
  t7958 = t1482*t1006*t406;
  t7959 = -1.*t101*t1110;
  t7960 = t7958 + t7959;
  t7962 = -1.*t1006*t101;
  t7963 = -1.*t1482*t406*t1110;
  t7964 = t7962 + t7963;
  t2769 = -0.0016*t2766;
  t2798 = -0.2707*t2778;
  t2856 = 0. + t2769 + t2798;
  t3071 = -0.2707*t2766;
  t3098 = 0.0016*t2778;
  t3113 = 0. + t3071 + t3098;
  t7966 = t1583*t7960;
  t7967 = t7964*t1650;
  t7968 = t7966 + t7967;
  t7970 = t1583*t7964;
  t7971 = -1.*t7960*t1650;
  t7972 = t7970 + t7971;
  t3253 = 0.0184*t3239;
  t3294 = -0.7055*t3262;
  t3298 = 0. + t3253 + t3294;
  t3477 = -0.7055*t3239;
  t3519 = -0.0184*t3262;
  t3561 = 0. + t3477 + t3519;
  t7974 = t2719*t7968;
  t7975 = t7972*t2778;
  t7976 = t7974 + t7975;
  t7978 = t2719*t7972;
  t7979 = -1.*t7968*t2778;
  t7980 = t7978 + t7979;
  t3958 = -0.0216*t3856;
  t4154 = -1.1135*t4124;
  t4244 = 0. + t3958 + t4154;
  t4479 = -1.1135*t3856;
  t4662 = 0.0216*t4124;
  t4821 = 0. + t4479 + t4662;
  t7982 = t3187*t7976;
  t7983 = t7980*t3262;
  t7984 = t7982 + t7983;
  t7986 = t3187*t7980;
  t7987 = -1.*t7976*t3262;
  t7988 = t7986 + t7987;
  t7939 = -0.766044*t7927;
  t7940 = 0.642788*t7932;
  t7941 = t7939 + t7940;
  t7928 = 0.642788*t7927;
  t7933 = 0.766044*t7932;
  t7934 = t7928 + t7933;
  t7935 = t7758*t7136*t7876;
  t7936 = t7759*t7868;
  t7937 = t7935 + t7936;
  t7938 = -1.*t7934*t7937;
  t7942 = t7758*t7136*t7757;
  t7943 = t7759*t7880;
  t7944 = t7942 + t7943;
  t7945 = t7941*t7944;
  t7946 = t7869 + t7882;
  t7947 = -1.*t7136*t7771*t7946;
  t7948 = 0. + t7938 + t7945 + t7947;
  t7949 = 1/t7948;
  t8008 = t193*t1006*t1583;
  t8009 = -1.*t193*t1110*t1650;
  t8010 = t8008 + t8009;
  t8012 = -1.*t193*t1583*t1110;
  t8013 = -1.*t193*t1006*t1650;
  t8014 = t8012 + t8013;
  t8016 = t2719*t8010;
  t8017 = t8014*t2778;
  t8018 = t8016 + t8017;
  t8020 = t2719*t8014;
  t8021 = -1.*t8010*t2778;
  t8022 = t8020 + t8021;
  t8024 = t3187*t8018;
  t8025 = t8022*t3262;
  t8026 = t8024 + t8025;
  t8028 = t3187*t8022;
  t8029 = -1.*t8018*t3262;
  t8030 = t8028 + t8029;
  t8055 = -1.*t7278;
  t8056 = 1. + t8055;
  t8065 = -1.*t7454;
  t8066 = 1. + t8065;
  t8075 = -1.*t7549;
  t8076 = 1. + t8075;
  t8085 = -1.*t7636;
  t8086 = 1. + t8085;
  t8095 = -1.*t7685;
  t8096 = 1. + t8095;
  t8049 = -1.*t7136;
  t8050 = 1. + t8049;
  t8067 = -0.049*t8066;
  t8068 = -0.21*t7344;
  t8069 = 0. + t8067 + t8068;
  t8057 = -0.049*t8056;
  t8058 = -0.09*t7482;
  t8059 = 0. + t8057 + t8058;
  t8071 = -0.21*t8066;
  t8072 = 0.049*t7344;
  t8073 = 0. + t8071 + t8072;
  t8077 = -0.2707*t8076;
  t8078 = 0.0016*t7131;
  t8079 = 0. + t8077 + t8078;
  t8081 = -0.0016*t8076;
  t8082 = -0.2707*t7131;
  t8083 = 0. + t8081 + t8082;
  t8087 = 0.0184*t8086;
  t8088 = -0.7055*t7097;
  t8089 = 0. + t8087 + t8088;
  t8091 = -0.7055*t8086;
  t8092 = -0.0184*t7097;
  t8093 = 0. + t8091 + t8092;
  t8097 = -1.1135*t8096;
  t8098 = 0.0216*t6972;
  t8099 = 0. + t8097 + t8098;
  t8101 = -0.0216*t8096;
  t8102 = -1.1135*t6972;
  t8103 = 0. + t8101 + t8102;
  t8045 = -1.*t7758;
  t8046 = 1. + t8045;
  t8047 = 0.135*t8046;
  t8048 = 0.1305*t7758*t7136;
  t8051 = 0.135*t8050;
  t8052 = 0.049*t7759;
  t8053 = 0. + t8051 + t8052;
  t8054 = t7758*t8053;
  t8060 = t7758*t7759*t8059;
  t8061 = -0.09*t8056;
  t8062 = 0.049*t7482;
  t8063 = 0. + t8061 + t8062;
  t8064 = -1.*t7771*t8063;
  t8070 = t8069*t7781;
  t8074 = t8073*t7794;
  t8080 = t8079*t7799;
  t8084 = t8083*t7809;
  t8090 = t8089*t7822;
  t8094 = t8093*t7836;
  t8100 = t8099*t7843;
  t8104 = t8103*t7852;
  t8105 = 0.0306*t7854;
  t8106 = -1.1312*t7865;
  t8107 = 0. + t8047 + t8048 + t8054 + t8060 + t8064 + t8070 + t8074 + t8080 + t8084 + t8090 + t8094 + t8100 + t8104 + t8105 + t8106;
  t8109 = -0.049*t8050;
  t8110 = t7136*t7278*t8069;
  t8111 = 0.004500000000000004*t7759;
  t8112 = t7136*t8059;
  t8113 = -1.*t7136*t8073*t7482;
  t8114 = t8079*t7506;
  t8115 = t8083*t7567;
  t8116 = t8089*t7598;
  t8117 = t8093*t7660;
  t8118 = t8099*t7674;
  t8119 = t8103*t7694;
  t8120 = 0.0306*t7717;
  t8121 = -1.1312*t7745;
  t8122 = 0. + t8109 + t8110 + t8111 + t8112 + t8113 + t8114 + t8115 + t8116 + t8117 + t8118 + t8119 + t8120 + t8121;
  t120 = 0.135*t101;
  t247 = -0.1305*t193*t101;
  t886 = t101*t574;
  t1444 = t101*t406*t1312;
  t1549 = t1482*t1541;
  t1768 = t1575*t1691;
  t2617 = t2053*t2403;
  t2879 = t2665*t2856;
  t3126 = t2956*t3113;
  t3321 = t3184*t3298;
  t3603 = t3409*t3561;
  t4257 = t3667*t4244;
  t4849 = t4401*t4821;
  t4890 = t3804*t3667;
  t5053 = t4401*t4124;
  t5799 = t4890 + t5053;
  t6036 = 0.0306*t5799;
  t6227 = t3804*t4401;
  t6659 = -1.*t3667*t4124;
  t6719 = t6227 + t6659;
  t6844 = -1.1312*t6719;
  t6929 = 0. + t120 + t247 + t886 + t1444 + t1549 + t1768 + t2617 + t2879 + t3126 + t3321 + t3603 + t4257 + t4849 + t6036 + t6844;
  t8003 = -0.049*t360;
  t8004 = -0.004500000000000004*t406;
  t8005 = t193*t1312;
  t8006 = t193*t1006*t1691;
  t8007 = -1.*t193*t1110*t2403;
  t8011 = t8010*t2856;
  t8015 = t8014*t3113;
  t8019 = t8018*t3298;
  t8023 = t8022*t3561;
  t8027 = t8026*t4244;
  t8031 = t8030*t4821;
  t8032 = t3804*t8026;
  t8033 = t8030*t4124;
  t8034 = t8032 + t8033;
  t8035 = 0.0306*t8034;
  t8036 = t3804*t8030;
  t8037 = -1.*t8026*t4124;
  t8038 = t8036 + t8037;
  t8039 = -1.1312*t8038;
  t8040 = 0. + t8003 + t8004 + t8005 + t8006 + t8007 + t8011 + t8015 + t8019 + t8023 + t8027 + t8031 + t8035 + t8039;
  t7951 = -1.*t1482;
  t7952 = 1. + t7951;
  t7953 = -0.135*t7952;
  t7954 = -0.1305*t1482*t193;
  t7955 = t1482*t574;
  t7956 = t1482*t406*t1312;
  t7957 = -1.*t101*t1541;
  t7961 = t7960*t1691;
  t7965 = t7964*t2403;
  t7969 = t7968*t2856;
  t7973 = t7972*t3113;
  t7977 = t7976*t3298;
  t7981 = t7980*t3561;
  t7985 = t7984*t4244;
  t7989 = t7988*t4821;
  t7990 = t3804*t7984;
  t7991 = t7988*t4124;
  t7992 = t7990 + t7991;
  t7993 = 0.0306*t7992;
  t7994 = t3804*t7988;
  t7995 = -1.*t7984*t4124;
  t7996 = t7994 + t7995;
  t7997 = -1.1312*t7996;
  t7998 = 0. + t7953 + t7954 + t7955 + t7956 + t7957 + t7961 + t7965 + t7969 + t7973 + t7977 + t7981 + t7985 + t7989 + t7993 + t7997;
  t8130 = -0.135*t7771;
  t8131 = 0.1305*t7136*t7771;
  t8132 = t7771*t8053;
  t8133 = t7771*t7759*t8059;
  t8134 = t7758*t8063;
  t8135 = t8069*t7886;
  t8136 = t8073*t7892;
  t8137 = t8079*t7896;
  t8138 = t8083*t7908;
  t8139 = t8089*t7911;
  t8140 = t8093*t7917;
  t8141 = t8099*t7919;
  t8142 = t8103*t7925;
  t8143 = 0.0306*t7927;
  t8144 = -1.1312*t7932;
  t8145 = 0. + t8130 + t8131 + t8132 + t8133 + t8134 + t8135 + t8136 + t8137 + t8138 + t8139 + t8140 + t8141 + t8142 + t8143 + t8144;
  t8108 = t7876*t8107;
  t8123 = -1.*t8122*t7868;
  t8124 = t8108 + t8123;
  t8162 = t7758*t7136*t8122;
  t8163 = t7759*t8107;
  t8164 = t8162 + t8163;
  t8126 = t7757*t8107;
  t8127 = -1.*t8122*t7880;
  t8128 = t8126 + t8127;
  p_output1[0]=t6929*(0. + t7869 + t7882)*t7949 + (0. + t7876*t7934 - 1.*t7757*t7941)*t7949*t7998 + (0. - 1.*t7868*t7934 + t7880*t7941)*t7949*t8040 + t7949*(-1.*t7934*t8124 + t7941*t8128 - 1.*t7946*t8145);
  p_output1[1]=t6929*(0. - 1.*t7759*t7868 - 1.*t7136*t7758*t7876)*t7949 + (0. + t7136*t7771*t7876 + t7759*t7941)*t7949*t7998 + (0. - 1.*t7136*t7771*t7868 + t7136*t7758*t7941)*t7949*t8040 + t7949*(-1.*t7136*t7771*t8124 + t7937*t8145 - 1.*t7941*t8164);
  p_output1[2]=t6929*(0. + t7942 + t7943)*t7949 + (0. - 1.*t7136*t7757*t7771 - 1.*t7759*t7934)*t7949*t7998 + (0. + t7136*t7771*t7880 - 1.*t7136*t7758*t7934)*t7949*t8040 + t7949*(t7136*t7771*t8128 - 1.*t7944*t8145 + t7934*t8164);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "p_LeftToeBottom_to_RightToeBottom_mex.hh"

namespace SymExpression
{

void p_LeftToeBottom_to_RightToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
