/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:42 GMT-05:00
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
  double t7654;
  double t7707;
  double t7691;
  double t7692;
  double t7708;
  double t1320;
  double t1485;
  double t1535;
  double t3596;
  double t7672;
  double t7693;
  double t7712;
  double t7715;
  double t7717;
  double t7736;
  double t7738;
  double t7741;
  double t1009;
  double t7751;
  double t7752;
  double t7753;
  double t7756;
  double t7757;
  double t7758;
  double t7764;
  double t7773;
  double t7774;
  double t7776;
  double t7793;
  double t7796;
  double t7797;
  double t7803;
  double t7804;
  double t7805;
  double t7807;
  double t7811;
  double t7812;
  double t7814;
  double t7822;
  double t7823;
  double t7824;
  double t3168;
  double t5202;
  double t7616;
  double t7676;
  double t7687;
  double t7720;
  double t7721;
  double t7722;
  double t7724;
  double t7745;
  double t7747;
  double t7750;
  double t7845;
  double t7846;
  double t7847;
  double t7849;
  double t7850;
  double t7851;
  double t7760;
  double t7769;
  double t7772;
  double t7853;
  double t7854;
  double t7855;
  double t7787;
  double t7790;
  double t7792;
  double t7806;
  double t7809;
  double t7810;
  double t7857;
  double t7858;
  double t7859;
  double t7866;
  double t7867;
  double t7868;
  double t7816;
  double t7818;
  double t7819;
  double t7872;
  double t7873;
  double t7874;
  double t7877;
  double t7880;
  double t7881;
  double t7895;
  double t7896;
  double t7897;
  double t7899;
  double t7900;
  double t7901;
  double t7907;
  double t7908;
  double t7909;
  double t7911;
  double t7912;
  double t7913;
  double t7915;
  double t7916;
  double t7917;
  double t7931;
  double t7932;
  double t7933;
  double t7935;
  double t7936;
  double t7937;
  double t7943;
  double t7944;
  double t7945;
  double t7947;
  double t7948;
  double t7949;
  double t7951;
  double t7952;
  double t7953;
  double t7967;
  double t7968;
  double t7969;
  double t7971;
  double t7972;
  double t7973;
  double t7979;
  double t7980;
  double t7981;
  double t7983;
  double t7984;
  double t7985;
  double t7987;
  double t7988;
  double t7989;
  double t8001;
  double t8002;
  double t8003;
  double t8009;
  double t8010;
  double t8005;
  double t8006;
  double t8007;
  double t8014;
  double t8015;
  double t8016;
  double t8018;
  double t8019;
  double t8020;
  double t8031;
  double t8032;
  double t8033;
  double t8039;
  double t8040;
  double t8041;
  double t8036;
  double t8037;
  double t8045;
  double t8046;
  double t8047;
  double t8049;
  double t8050;
  double t8051;
  double t8068;
  double t8069;
  double t8070;
  double t8064;
  double t8065;
  double t8066;
  double t8074;
  double t8075;
  double t8076;
  double t8078;
  double t8079;
  double t8080;
  double t8093;
  double t8094;
  double t8099;
  double t8100;
  double t8101;
  double t8103;
  double t8104;
  double t8105;
  double t8117;
  double t8118;
  double t8119;
  double t8124;
  double t8125;
  double t8121;
  double t8122;
  double t8129;
  double t8130;
  double t8131;
  double t8133;
  double t8134;
  double t8135;
  double t8067;
  double t8071;
  double t8072;
  double t8073;
  double t8077;
  double t8081;
  double t8082;
  double t8083;
  double t8084;
  double t8085;
  double t8086;
  double t8087;
  double t8088;
  double t8089;
  double t7861;
  double t7863;
  double t7864;
  double t8149;
  double t8150;
  double t8151;
  double t8153;
  double t8154;
  double t8173;
  double t8174;
  double t8175;
  double t8177;
  double t8178;
  double t8179;
  double t8196;
  double t8197;
  double t8198;
  double t8200;
  double t8201;
  double t8202;
  double t8226;
  double t8227;
  double t8228;
  double t7884;
  double t8219;
  double t8220;
  double t8222;
  double t8223;
  double t8224;
  double t8240;
  double t8241;
  double t8242;
  double t8244;
  double t8245;
  double t8246;
  double t8248;
  double t8249;
  double t8250;
  double t8262;
  double t8263;
  double t8264;
  double t8266;
  double t8267;
  double t8268;
  double t8270;
  double t8271;
  double t8272;
  double t7883;
  double t7885;
  double t8235;
  double t8283;
  double t8284;
  double t8285;
  double t8287;
  double t8288;
  double t8295;
  double t8296;
  double t8297;
  double t8253;
  double t8257;
  double t8307;
  double t8308;
  double t8309;
  double t8275;
  double t8279;
  t7654 = Sin(var1[3]);
  t7707 = Cos(var1[3]);
  t7691 = Cos(var1[5]);
  t7692 = Sin(var1[4]);
  t7708 = Sin(var1[5]);
  t1320 = Cos(var1[14]);
  t1485 = -1.*t1320;
  t1535 = 1. + t1485;
  t3596 = Sin(var1[14]);
  t7672 = Sin(var1[13]);
  t7693 = -1.*t7691*t7654*t7692;
  t7712 = t7707*t7708;
  t7715 = t7693 + t7712;
  t7717 = Cos(var1[13]);
  t7736 = -1.*t7707*t7691;
  t7738 = -1.*t7654*t7692*t7708;
  t7741 = t7736 + t7738;
  t1009 = Cos(var1[4]);
  t7751 = t7672*t7715;
  t7752 = t7717*t7741;
  t7753 = t7751 + t7752;
  t7756 = Cos(var1[15]);
  t7757 = -1.*t7756;
  t7758 = 1. + t7757;
  t7764 = Sin(var1[15]);
  t7773 = t7717*t7715;
  t7774 = -1.*t7672*t7741;
  t7776 = t7773 + t7774;
  t7793 = -1.*t1320*t1009*t7654;
  t7796 = t3596*t7753;
  t7797 = t7793 + t7796;
  t7803 = Cos(var1[16]);
  t7804 = -1.*t7803;
  t7805 = 1. + t7804;
  t7807 = Sin(var1[16]);
  t7811 = t7764*t7776;
  t7812 = t7756*t7797;
  t7814 = t7811 + t7812;
  t7822 = t7756*t7776;
  t7823 = -1.*t7764*t7797;
  t7824 = t7822 + t7823;
  t3168 = -0.049*t1535;
  t5202 = -0.135*t3596;
  t7616 = 0. + t3168 + t5202;
  t7676 = 0.135*t7672;
  t7687 = 0. + t7676;
  t7720 = -1.*t7717;
  t7721 = 1. + t7720;
  t7722 = -0.135*t7721;
  t7724 = 0. + t7722;
  t7745 = -0.135*t1535;
  t7747 = 0.049*t3596;
  t7750 = 0. + t7745 + t7747;
  t7845 = t7707*t7691*t7692;
  t7846 = t7654*t7708;
  t7847 = t7845 + t7846;
  t7849 = -1.*t7691*t7654;
  t7850 = t7707*t7692*t7708;
  t7851 = t7849 + t7850;
  t7760 = -0.09*t7758;
  t7769 = 0.049*t7764;
  t7772 = 0. + t7760 + t7769;
  t7853 = t7672*t7847;
  t7854 = t7717*t7851;
  t7855 = t7853 + t7854;
  t7787 = -0.049*t7758;
  t7790 = -0.09*t7764;
  t7792 = 0. + t7787 + t7790;
  t7806 = -0.049*t7805;
  t7809 = -0.21*t7807;
  t7810 = 0. + t7806 + t7809;
  t7857 = t7717*t7847;
  t7858 = -1.*t7672*t7851;
  t7859 = t7857 + t7858;
  t7866 = t1320*t7707*t1009;
  t7867 = t3596*t7855;
  t7868 = t7866 + t7867;
  t7816 = -0.21*t7805;
  t7818 = 0.049*t7807;
  t7819 = 0. + t7816 + t7818;
  t7872 = t7764*t7859;
  t7873 = t7756*t7868;
  t7874 = t7872 + t7873;
  t7877 = t7756*t7859;
  t7880 = -1.*t7764*t7868;
  t7881 = t7877 + t7880;
  t7895 = t7707*t1009*t7691*t7672;
  t7896 = t7717*t7707*t1009*t7708;
  t7897 = t7895 + t7896;
  t7899 = t7717*t7707*t1009*t7691;
  t7900 = -1.*t7707*t1009*t7672*t7708;
  t7901 = t7899 + t7900;
  t7907 = -1.*t1320*t7707*t7692;
  t7908 = t3596*t7897;
  t7909 = t7907 + t7908;
  t7911 = t7764*t7901;
  t7912 = t7756*t7909;
  t7913 = t7911 + t7912;
  t7915 = t7756*t7901;
  t7916 = -1.*t7764*t7909;
  t7917 = t7915 + t7916;
  t7931 = t1009*t7691*t7672*t7654;
  t7932 = t7717*t1009*t7654*t7708;
  t7933 = t7931 + t7932;
  t7935 = t7717*t1009*t7691*t7654;
  t7936 = -1.*t1009*t7672*t7654*t7708;
  t7937 = t7935 + t7936;
  t7943 = -1.*t1320*t7654*t7692;
  t7944 = t3596*t7933;
  t7945 = t7943 + t7944;
  t7947 = t7764*t7937;
  t7948 = t7756*t7945;
  t7949 = t7947 + t7948;
  t7951 = t7756*t7937;
  t7952 = -1.*t7764*t7945;
  t7953 = t7951 + t7952;
  t7967 = -1.*t7691*t7672*t7692;
  t7968 = -1.*t7717*t7692*t7708;
  t7969 = t7967 + t7968;
  t7971 = -1.*t7717*t7691*t7692;
  t7972 = t7672*t7692*t7708;
  t7973 = t7971 + t7972;
  t7979 = -1.*t1320*t1009;
  t7980 = t3596*t7969;
  t7981 = t7979 + t7980;
  t7983 = t7764*t7973;
  t7984 = t7756*t7981;
  t7985 = t7983 + t7984;
  t7987 = t7756*t7973;
  t7988 = -1.*t7764*t7981;
  t7989 = t7987 + t7988;
  t8001 = t7691*t7654;
  t8002 = -1.*t7707*t7692*t7708;
  t8003 = t8001 + t8002;
  t8009 = t7672*t8003;
  t8010 = t7857 + t8009;
  t8005 = -1.*t7672*t7847;
  t8006 = t7717*t8003;
  t8007 = t8005 + t8006;
  t8014 = t7764*t8007;
  t8015 = t7756*t3596*t8010;
  t8016 = t8014 + t8015;
  t8018 = t7756*t8007;
  t8019 = -1.*t3596*t7764*t8010;
  t8020 = t8018 + t8019;
  t8031 = t7691*t7654*t7692;
  t8032 = -1.*t7707*t7708;
  t8033 = t8031 + t8032;
  t8039 = t7717*t8033;
  t8040 = t7672*t7741;
  t8041 = t8039 + t8040;
  t8036 = -1.*t7672*t8033;
  t8037 = t8036 + t7752;
  t8045 = t7764*t8037;
  t8046 = t7756*t3596*t8041;
  t8047 = t8045 + t8046;
  t8049 = t7756*t8037;
  t8050 = -1.*t3596*t7764*t8041;
  t8051 = t8049 + t8050;
  t8068 = t7717*t1009*t7691;
  t8069 = -1.*t1009*t7672*t7708;
  t8070 = t8068 + t8069;
  t8064 = -1.*t1009*t7691*t7672;
  t8065 = -1.*t7717*t1009*t7708;
  t8066 = t8064 + t8065;
  t8074 = t7764*t8066;
  t8075 = t7756*t3596*t8070;
  t8076 = t8074 + t8075;
  t8078 = t7756*t8066;
  t8079 = -1.*t3596*t7764*t8070;
  t8080 = t8078 + t8079;
  t8093 = -1.*t7717*t7851;
  t8094 = t8005 + t8093;
  t8099 = t7764*t8094;
  t8100 = t7756*t3596*t7859;
  t8101 = t8099 + t8100;
  t8103 = t7756*t8094;
  t8104 = -1.*t3596*t7764*t7859;
  t8105 = t8103 + t8104;
  t8117 = t7707*t7691;
  t8118 = t7654*t7692*t7708;
  t8119 = t8117 + t8118;
  t8124 = -1.*t7672*t8119;
  t8125 = t8039 + t8124;
  t8121 = -1.*t7717*t8119;
  t8122 = t8036 + t8121;
  t8129 = t7764*t8122;
  t8130 = t7756*t3596*t8125;
  t8131 = t8129 + t8130;
  t8133 = t7756*t8122;
  t8134 = -1.*t3596*t7764*t8125;
  t8135 = t8133 + t8134;
  t8067 = t7772*t8066;
  t8071 = -0.1305*t1320*t8070;
  t8072 = t7750*t8070;
  t8073 = t3596*t7792*t8070;
  t8077 = t7810*t8076;
  t8081 = t7819*t8080;
  t8082 = -1.*t7807*t8076;
  t8083 = t7803*t8080;
  t8084 = t8082 + t8083;
  t8085 = -0.21*t8084;
  t8086 = t7803*t8076;
  t8087 = t7807*t8080;
  t8088 = t8086 + t8087;
  t8089 = -0.049*t8088;
  t7861 = -1.*t7707*t1009*t3596;
  t7863 = t1320*t7855;
  t7864 = t7861 + t7863;
  t8149 = -0.135*t1320;
  t8150 = -0.049*t3596;
  t8151 = t8149 + t8150;
  t8153 = 0.049*t1320;
  t8154 = t8153 + t5202;
  t8173 = t7672*t8033;
  t8174 = t7717*t8119;
  t8175 = t8173 + t8174;
  t8177 = -1.*t1009*t3596*t7654;
  t8178 = t1320*t8175;
  t8179 = t8177 + t8178;
  t8196 = t1009*t7691*t7672;
  t8197 = t7717*t1009*t7708;
  t8198 = t8196 + t8197;
  t8200 = t3596*t7692;
  t8201 = t1320*t8198;
  t8202 = t8200 + t8201;
  t8226 = -1.*t7764*t7859;
  t8227 = -1.*t7756*t7868;
  t8228 = t8226 + t8227;
  t7884 = t7803*t7881;
  t8219 = 0.049*t7756;
  t8220 = t8219 + t7790;
  t8222 = -0.09*t7756;
  t8223 = -0.049*t7764;
  t8224 = t8222 + t8223;
  t8240 = t1320*t1009*t7654;
  t8241 = t3596*t8175;
  t8242 = t8240 + t8241;
  t8244 = -1.*t7764*t8125;
  t8245 = -1.*t7756*t8242;
  t8246 = t8244 + t8245;
  t8248 = t7756*t8125;
  t8249 = -1.*t7764*t8242;
  t8250 = t8248 + t8249;
  t8262 = -1.*t1320*t7692;
  t8263 = t3596*t8198;
  t8264 = t8262 + t8263;
  t8266 = -1.*t7764*t8070;
  t8267 = -1.*t7756*t8264;
  t8268 = t8266 + t8267;
  t8270 = t7756*t8070;
  t8271 = -1.*t7764*t8264;
  t8272 = t8270 + t8271;
  t7883 = -1.*t7807*t7874;
  t7885 = t7883 + t7884;
  t8235 = -1.*t7807*t7881;
  t8283 = -0.21*t7803;
  t8284 = -0.049*t7807;
  t8285 = t8283 + t8284;
  t8287 = 0.049*t7803;
  t8288 = t8287 + t7809;
  t8295 = t7764*t8125;
  t8296 = t7756*t8242;
  t8297 = t8295 + t8296;
  t8253 = t7803*t8250;
  t8257 = -1.*t7807*t8250;
  t8307 = t7764*t8070;
  t8308 = t7756*t8264;
  t8309 = t8307 + t8308;
  t8275 = t7803*t8272;
  t8279 = -1.*t7807*t8272;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=-1.*t1009*t7616*t7654 + t7687*t7715 + t7724*t7741 + t7750*t7753 - 0.1305*(t1009*t3596*t7654 + t1320*t7753) + t7772*t7776 + t7792*t7797 + t7810*t7814 + t7819*t7824 - 0.21*(-1.*t7807*t7814 + t7803*t7824) - 0.049*(t7803*t7814 + t7807*t7824);
  p_output1[10]=t1009*t7616*t7707 + t7687*t7847 + t7724*t7851 + t7750*t7855 + t7772*t7859 - 0.1305*t7864 + t7792*t7868 + t7810*t7874 + t7819*t7881 - 0.049*(t7803*t7874 + t7807*t7881) - 0.21*t7885;
  p_output1[11]=0;
  p_output1[12]=t1009*t7687*t7691*t7707 - 1.*t7616*t7692*t7707 + t1009*t7707*t7708*t7724 + t7750*t7897 - 0.1305*(t3596*t7692*t7707 + t1320*t7897) + t7772*t7901 + t7792*t7909 + t7810*t7913 + t7819*t7917 - 0.21*(-1.*t7807*t7913 + t7803*t7917) - 0.049*(t7803*t7913 + t7807*t7917);
  p_output1[13]=t1009*t7654*t7687*t7691 - 1.*t7616*t7654*t7692 + t1009*t7654*t7708*t7724 + t7750*t7933 - 0.1305*(t3596*t7654*t7692 + t1320*t7933) + t7772*t7937 + t7792*t7945 + t7810*t7949 + t7819*t7953 - 0.21*(-1.*t7807*t7949 + t7803*t7953) - 0.049*(t7803*t7949 + t7807*t7953);
  p_output1[14]=-1.*t1009*t7616 - 1.*t7687*t7691*t7692 - 1.*t7692*t7708*t7724 + t7750*t7969 - 0.1305*(t1009*t3596 + t1320*t7969) + t7772*t7973 + t7792*t7981 + t7810*t7985 + t7819*t7989 - 0.21*(-1.*t7807*t7985 + t7803*t7989) - 0.049*(t7803*t7985 + t7807*t7989);
  p_output1[15]=t7724*t7847 + t7687*t8003 + t7772*t8007 - 0.1305*t1320*t8010 + t7750*t8010 + t3596*t7792*t8010 + t7810*t8016 + t7819*t8020 - 0.21*(-1.*t7807*t8016 + t7803*t8020) - 0.049*(t7803*t8016 + t7807*t8020);
  p_output1[16]=t7687*t7741 + t7724*t8033 + t7772*t8037 - 0.1305*t1320*t8041 + t7750*t8041 + t3596*t7792*t8041 + t7810*t8047 + t7819*t8051 - 0.21*(-1.*t7807*t8047 + t7803*t8051) - 0.049*(t7803*t8047 + t7807*t8051);
  p_output1[17]=-1.*t1009*t7687*t7708 + t1009*t7691*t7724 + t8067 + t8071 + t8072 + t8073 + t8077 + t8081 + t8085 + t8089;
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
  p_output1[39]=0.135*t7717*t7847 - 0.135*t7672*t7851 - 0.1305*t1320*t7859 + t7750*t7859 + t3596*t7792*t7859 + t7772*t8094 + t7810*t8101 + t7819*t8105 - 0.21*(-1.*t7807*t8101 + t7803*t8105) - 0.049*(t7803*t8101 + t7807*t8105);
  p_output1[40]=0.135*t7717*t8033 - 0.135*t7672*t8119 + t7772*t8122 - 0.1305*t1320*t8125 + t7750*t8125 + t3596*t7792*t8125 + t7810*t8131 + t7819*t8135 - 0.21*(-1.*t7807*t8131 + t7803*t8135) - 0.049*(t7803*t8131 + t7807*t8135);
  p_output1[41]=-0.135*t1009*t7672*t7708 + 0.135*t1009*t7691*t7717 + t8067 + t8071 + t8072 + t8073 + t8077 + t8081 + t8085 + t8089;
  p_output1[42]=-0.1305*(-1.*t1009*t1320*t7707 - 1.*t3596*t7855) + t7792*t7864 + t7756*t7810*t7864 - 1.*t7764*t7819*t7864 - 0.21*(-1.*t7764*t7803*t7864 - 1.*t7756*t7807*t7864) - 0.049*(t7756*t7803*t7864 - 1.*t7764*t7807*t7864) + t1009*t7707*t8151 + t7855*t8154;
  p_output1[43]=t1009*t7654*t8151 + t8154*t8175 - 0.1305*(t7793 - 1.*t3596*t8175) + t7792*t8179 + t7756*t7810*t8179 - 1.*t7764*t7819*t8179 - 0.21*(-1.*t7764*t7803*t8179 - 1.*t7756*t7807*t8179) - 0.049*(t7756*t7803*t8179 - 1.*t7764*t7807*t8179);
  p_output1[44]=-1.*t7692*t8151 + t8154*t8198 - 0.1305*(t1320*t7692 - 1.*t3596*t8198) + t7792*t8202 + t7756*t7810*t8202 - 1.*t7764*t7819*t8202 - 0.21*(-1.*t7764*t7803*t8202 - 1.*t7756*t7807*t8202) - 0.049*(t7756*t7803*t8202 - 1.*t7764*t7807*t8202);
  p_output1[45]=t7810*t7881 + t7859*t8220 + t7868*t8224 + t7819*t8228 - 0.049*(t7884 + t7807*t8228) - 0.21*(t7803*t8228 + t8235);
  p_output1[46]=t8125*t8220 + t8224*t8242 + t7819*t8246 + t7810*t8250 - 0.049*(t7807*t8246 + t8253) - 0.21*(t7803*t8246 + t8257);
  p_output1[47]=t8070*t8220 + t8224*t8264 + t7819*t8268 + t7810*t8272 - 0.049*(t7807*t8268 + t8275) - 0.21*(t7803*t8268 + t8279);
  p_output1[48]=-0.049*t7885 - 0.21*(-1.*t7803*t7874 + t8235) + t7874*t8285 + t7881*t8288;
  p_output1[49]=t8250*t8288 + t8285*t8297 - 0.21*(t8257 - 1.*t7803*t8297) - 0.049*(t8253 - 1.*t7807*t8297);
  p_output1[50]=t8272*t8288 + t8285*t8309 - 0.21*(t8279 - 1.*t7803*t8309) - 0.049*(t8275 - 1.*t7807*t8309);
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
    ( !(mrows == 20 && ncols == 1) && 
      !(mrows == 1 && ncols == 20))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 20, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_knee_joint_right_mex.hh"

namespace SymExpression
{

void J_knee_joint_right_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
