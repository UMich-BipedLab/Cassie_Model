/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:11:54 GMT-05:00
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
  double t3281;
  double t7710;
  double t7639;
  double t7690;
  double t7713;
  double t1428;
  double t1430;
  double t1432;
  double t1747;
  double t3751;
  double t7704;
  double t7719;
  double t7720;
  double t7736;
  double t7744;
  double t7746;
  double t7756;
  double t1375;
  double t7778;
  double t7781;
  double t7782;
  double t7785;
  double t7786;
  double t7789;
  double t7800;
  double t7815;
  double t7817;
  double t7820;
  double t7838;
  double t7843;
  double t7846;
  double t7850;
  double t7853;
  double t7854;
  double t7857;
  double t7862;
  double t7864;
  double t7866;
  double t7878;
  double t7880;
  double t7882;
  double t7885;
  double t7887;
  double t7888;
  double t7890;
  double t7894;
  double t7896;
  double t7897;
  double t7904;
  double t7905;
  double t7906;
  double t1615;
  double t1949;
  double t2227;
  double t5204;
  double t7629;
  double t7738;
  double t7740;
  double t7741;
  double t7743;
  double t7767;
  double t7772;
  double t7777;
  double t7930;
  double t7932;
  double t7933;
  double t7935;
  double t7936;
  double t7937;
  double t7791;
  double t7804;
  double t7809;
  double t7939;
  double t7940;
  double t7941;
  double t7831;
  double t7833;
  double t7836;
  double t7855;
  double t7858;
  double t7859;
  double t7943;
  double t7944;
  double t7945;
  double t7952;
  double t7953;
  double t7954;
  double t7870;
  double t7873;
  double t7874;
  double t7889;
  double t7892;
  double t7893;
  double t7956;
  double t7958;
  double t7960;
  double t7962;
  double t7964;
  double t7965;
  double t7900;
  double t7901;
  double t7902;
  double t7968;
  double t7970;
  double t7972;
  double t7974;
  double t7976;
  double t7977;
  double t7991;
  double t7992;
  double t7993;
  double t7995;
  double t7996;
  double t7997;
  double t8003;
  double t8004;
  double t8005;
  double t8007;
  double t8008;
  double t8009;
  double t8011;
  double t8012;
  double t8013;
  double t8015;
  double t8016;
  double t8017;
  double t8019;
  double t8020;
  double t8021;
  double t8035;
  double t8036;
  double t8037;
  double t8039;
  double t8040;
  double t8041;
  double t8047;
  double t8048;
  double t8049;
  double t8051;
  double t8052;
  double t8053;
  double t8055;
  double t8056;
  double t8057;
  double t8059;
  double t8060;
  double t8061;
  double t8063;
  double t8064;
  double t8065;
  double t8079;
  double t8080;
  double t8081;
  double t8083;
  double t8084;
  double t8085;
  double t8091;
  double t8092;
  double t8093;
  double t8095;
  double t8096;
  double t8097;
  double t8099;
  double t8100;
  double t8101;
  double t8103;
  double t8104;
  double t8105;
  double t8107;
  double t8108;
  double t8109;
  double t8121;
  double t8122;
  double t8123;
  double t8129;
  double t8130;
  double t8125;
  double t8126;
  double t8127;
  double t8134;
  double t8135;
  double t8136;
  double t8138;
  double t8139;
  double t8140;
  double t8142;
  double t8143;
  double t8144;
  double t8146;
  double t8147;
  double t8148;
  double t8159;
  double t8160;
  double t8161;
  double t8167;
  double t8168;
  double t8169;
  double t8164;
  double t8165;
  double t8173;
  double t8174;
  double t8175;
  double t8177;
  double t8178;
  double t8179;
  double t8181;
  double t8182;
  double t8183;
  double t8185;
  double t8186;
  double t8187;
  double t8204;
  double t8205;
  double t8206;
  double t8200;
  double t8201;
  double t8202;
  double t8210;
  double t8211;
  double t8212;
  double t8214;
  double t8215;
  double t8216;
  double t8218;
  double t8219;
  double t8220;
  double t8222;
  double t8223;
  double t8224;
  double t8237;
  double t8238;
  double t8243;
  double t8244;
  double t8245;
  double t8247;
  double t8248;
  double t8249;
  double t8251;
  double t8252;
  double t8253;
  double t8255;
  double t8256;
  double t8257;
  double t8269;
  double t8270;
  double t8271;
  double t8276;
  double t8277;
  double t8273;
  double t8274;
  double t8281;
  double t8282;
  double t8283;
  double t8285;
  double t8286;
  double t8287;
  double t8289;
  double t8290;
  double t8291;
  double t8293;
  double t8294;
  double t8295;
  double t8203;
  double t8207;
  double t8208;
  double t8209;
  double t8213;
  double t8217;
  double t8221;
  double t8225;
  double t8226;
  double t8227;
  double t8228;
  double t8229;
  double t8230;
  double t8231;
  double t8232;
  double t8233;
  double t7947;
  double t7948;
  double t7949;
  double t8323;
  double t8324;
  double t8325;
  double t8327;
  double t8328;
  double t8329;
  double t8309;
  double t8310;
  double t8311;
  double t8313;
  double t8314;
  double t8341;
  double t8342;
  double t8343;
  double t8345;
  double t8346;
  double t8347;
  double t8354;
  double t8355;
  double t8356;
  double t8358;
  double t8359;
  double t8360;
  double t8372;
  double t8373;
  double t8374;
  double t8376;
  double t8377;
  double t8378;
  double t8386;
  double t8387;
  double t8388;
  double t8390;
  double t8391;
  double t8392;
  double t8410;
  double t8411;
  double t8412;
  double t8415;
  double t8416;
  double t8418;
  double t8419;
  double t8420;
  double t8403;
  double t8404;
  double t8406;
  double t8407;
  double t8408;
  double t8432;
  double t8433;
  double t8434;
  double t8436;
  double t8437;
  double t8438;
  double t8440;
  double t8441;
  double t8442;
  double t8444;
  double t8445;
  double t8446;
  double t8448;
  double t8449;
  double t8450;
  double t8462;
  double t8463;
  double t8464;
  double t8466;
  double t8467;
  double t8468;
  double t8470;
  double t8471;
  double t8472;
  double t8474;
  double t8475;
  double t8476;
  double t8478;
  double t8479;
  double t8480;
  double t8499;
  double t8500;
  double t7983;
  double t8491;
  double t8492;
  double t8493;
  double t8495;
  double t8496;
  double t8510;
  double t8511;
  double t8512;
  double t8515;
  double t8516;
  double t8518;
  double t8519;
  double t8530;
  double t8531;
  double t8532;
  double t8535;
  double t8536;
  double t8538;
  double t8539;
  double t8502;
  double t7984;
  double t7985;
  double t8550;
  double t8551;
  double t8553;
  double t8554;
  double t8555;
  double t8521;
  double t8563;
  double t8564;
  double t8565;
  double t8525;
  double t8541;
  double t8575;
  double t8576;
  double t8577;
  double t8545;
  t3281 = Sin(var1[3]);
  t7710 = Cos(var1[3]);
  t7639 = Cos(var1[5]);
  t7690 = Sin(var1[4]);
  t7713 = Sin(var1[5]);
  t1428 = Cos(var1[14]);
  t1430 = -1.*t1428;
  t1432 = 1. + t1430;
  t1747 = Sin(var1[14]);
  t3751 = Sin(var1[13]);
  t7704 = -1.*t7639*t3281*t7690;
  t7719 = t7710*t7713;
  t7720 = t7704 + t7719;
  t7736 = Cos(var1[13]);
  t7744 = -1.*t7710*t7639;
  t7746 = -1.*t3281*t7690*t7713;
  t7756 = t7744 + t7746;
  t1375 = Cos(var1[4]);
  t7778 = t3751*t7720;
  t7781 = t7736*t7756;
  t7782 = t7778 + t7781;
  t7785 = Cos(var1[15]);
  t7786 = -1.*t7785;
  t7789 = 1. + t7786;
  t7800 = Sin(var1[15]);
  t7815 = t7736*t7720;
  t7817 = -1.*t3751*t7756;
  t7820 = t7815 + t7817;
  t7838 = -1.*t1428*t1375*t3281;
  t7843 = t1747*t7782;
  t7846 = t7838 + t7843;
  t7850 = Cos(var1[16]);
  t7853 = -1.*t7850;
  t7854 = 1. + t7853;
  t7857 = Sin(var1[16]);
  t7862 = t7800*t7820;
  t7864 = t7785*t7846;
  t7866 = t7862 + t7864;
  t7878 = t7785*t7820;
  t7880 = -1.*t7800*t7846;
  t7882 = t7878 + t7880;
  t7885 = Cos(var1[17]);
  t7887 = -1.*t7885;
  t7888 = 1. + t7887;
  t7890 = Sin(var1[17]);
  t7894 = -1.*t7857*t7866;
  t7896 = t7850*t7882;
  t7897 = t7894 + t7896;
  t7904 = t7850*t7866;
  t7905 = t7857*t7882;
  t7906 = t7904 + t7905;
  t1615 = -0.049*t1432;
  t1949 = -0.135*t1747;
  t2227 = 0. + t1615 + t1949;
  t5204 = 0.135*t3751;
  t7629 = 0. + t5204;
  t7738 = -1.*t7736;
  t7740 = 1. + t7738;
  t7741 = -0.135*t7740;
  t7743 = 0. + t7741;
  t7767 = -0.135*t1432;
  t7772 = 0.049*t1747;
  t7777 = 0. + t7767 + t7772;
  t7930 = t7710*t7639*t7690;
  t7932 = t3281*t7713;
  t7933 = t7930 + t7932;
  t7935 = -1.*t7639*t3281;
  t7936 = t7710*t7690*t7713;
  t7937 = t7935 + t7936;
  t7791 = -0.09*t7789;
  t7804 = 0.049*t7800;
  t7809 = 0. + t7791 + t7804;
  t7939 = t3751*t7933;
  t7940 = t7736*t7937;
  t7941 = t7939 + t7940;
  t7831 = -0.049*t7789;
  t7833 = -0.09*t7800;
  t7836 = 0. + t7831 + t7833;
  t7855 = -0.049*t7854;
  t7858 = -0.21*t7857;
  t7859 = 0. + t7855 + t7858;
  t7943 = t7736*t7933;
  t7944 = -1.*t3751*t7937;
  t7945 = t7943 + t7944;
  t7952 = t1428*t7710*t1375;
  t7953 = t1747*t7941;
  t7954 = t7952 + t7953;
  t7870 = -0.21*t7854;
  t7873 = 0.049*t7857;
  t7874 = 0. + t7870 + t7873;
  t7889 = -0.2707*t7888;
  t7892 = 0.0016*t7890;
  t7893 = 0. + t7889 + t7892;
  t7956 = t7800*t7945;
  t7958 = t7785*t7954;
  t7960 = t7956 + t7958;
  t7962 = t7785*t7945;
  t7964 = -1.*t7800*t7954;
  t7965 = t7962 + t7964;
  t7900 = -0.0016*t7888;
  t7901 = -0.2707*t7890;
  t7902 = 0. + t7900 + t7901;
  t7968 = -1.*t7857*t7960;
  t7970 = t7850*t7965;
  t7972 = t7968 + t7970;
  t7974 = t7850*t7960;
  t7976 = t7857*t7965;
  t7977 = t7974 + t7976;
  t7991 = t7710*t1375*t7639*t3751;
  t7992 = t7736*t7710*t1375*t7713;
  t7993 = t7991 + t7992;
  t7995 = t7736*t7710*t1375*t7639;
  t7996 = -1.*t7710*t1375*t3751*t7713;
  t7997 = t7995 + t7996;
  t8003 = -1.*t1428*t7710*t7690;
  t8004 = t1747*t7993;
  t8005 = t8003 + t8004;
  t8007 = t7800*t7997;
  t8008 = t7785*t8005;
  t8009 = t8007 + t8008;
  t8011 = t7785*t7997;
  t8012 = -1.*t7800*t8005;
  t8013 = t8011 + t8012;
  t8015 = -1.*t7857*t8009;
  t8016 = t7850*t8013;
  t8017 = t8015 + t8016;
  t8019 = t7850*t8009;
  t8020 = t7857*t8013;
  t8021 = t8019 + t8020;
  t8035 = t1375*t7639*t3751*t3281;
  t8036 = t7736*t1375*t3281*t7713;
  t8037 = t8035 + t8036;
  t8039 = t7736*t1375*t7639*t3281;
  t8040 = -1.*t1375*t3751*t3281*t7713;
  t8041 = t8039 + t8040;
  t8047 = -1.*t1428*t3281*t7690;
  t8048 = t1747*t8037;
  t8049 = t8047 + t8048;
  t8051 = t7800*t8041;
  t8052 = t7785*t8049;
  t8053 = t8051 + t8052;
  t8055 = t7785*t8041;
  t8056 = -1.*t7800*t8049;
  t8057 = t8055 + t8056;
  t8059 = -1.*t7857*t8053;
  t8060 = t7850*t8057;
  t8061 = t8059 + t8060;
  t8063 = t7850*t8053;
  t8064 = t7857*t8057;
  t8065 = t8063 + t8064;
  t8079 = -1.*t7639*t3751*t7690;
  t8080 = -1.*t7736*t7690*t7713;
  t8081 = t8079 + t8080;
  t8083 = -1.*t7736*t7639*t7690;
  t8084 = t3751*t7690*t7713;
  t8085 = t8083 + t8084;
  t8091 = -1.*t1428*t1375;
  t8092 = t1747*t8081;
  t8093 = t8091 + t8092;
  t8095 = t7800*t8085;
  t8096 = t7785*t8093;
  t8097 = t8095 + t8096;
  t8099 = t7785*t8085;
  t8100 = -1.*t7800*t8093;
  t8101 = t8099 + t8100;
  t8103 = -1.*t7857*t8097;
  t8104 = t7850*t8101;
  t8105 = t8103 + t8104;
  t8107 = t7850*t8097;
  t8108 = t7857*t8101;
  t8109 = t8107 + t8108;
  t8121 = t7639*t3281;
  t8122 = -1.*t7710*t7690*t7713;
  t8123 = t8121 + t8122;
  t8129 = t3751*t8123;
  t8130 = t7943 + t8129;
  t8125 = -1.*t3751*t7933;
  t8126 = t7736*t8123;
  t8127 = t8125 + t8126;
  t8134 = t7800*t8127;
  t8135 = t7785*t1747*t8130;
  t8136 = t8134 + t8135;
  t8138 = t7785*t8127;
  t8139 = -1.*t1747*t7800*t8130;
  t8140 = t8138 + t8139;
  t8142 = -1.*t7857*t8136;
  t8143 = t7850*t8140;
  t8144 = t8142 + t8143;
  t8146 = t7850*t8136;
  t8147 = t7857*t8140;
  t8148 = t8146 + t8147;
  t8159 = t7639*t3281*t7690;
  t8160 = -1.*t7710*t7713;
  t8161 = t8159 + t8160;
  t8167 = t7736*t8161;
  t8168 = t3751*t7756;
  t8169 = t8167 + t8168;
  t8164 = -1.*t3751*t8161;
  t8165 = t8164 + t7781;
  t8173 = t7800*t8165;
  t8174 = t7785*t1747*t8169;
  t8175 = t8173 + t8174;
  t8177 = t7785*t8165;
  t8178 = -1.*t1747*t7800*t8169;
  t8179 = t8177 + t8178;
  t8181 = -1.*t7857*t8175;
  t8182 = t7850*t8179;
  t8183 = t8181 + t8182;
  t8185 = t7850*t8175;
  t8186 = t7857*t8179;
  t8187 = t8185 + t8186;
  t8204 = t7736*t1375*t7639;
  t8205 = -1.*t1375*t3751*t7713;
  t8206 = t8204 + t8205;
  t8200 = -1.*t1375*t7639*t3751;
  t8201 = -1.*t7736*t1375*t7713;
  t8202 = t8200 + t8201;
  t8210 = t7800*t8202;
  t8211 = t7785*t1747*t8206;
  t8212 = t8210 + t8211;
  t8214 = t7785*t8202;
  t8215 = -1.*t1747*t7800*t8206;
  t8216 = t8214 + t8215;
  t8218 = -1.*t7857*t8212;
  t8219 = t7850*t8216;
  t8220 = t8218 + t8219;
  t8222 = t7850*t8212;
  t8223 = t7857*t8216;
  t8224 = t8222 + t8223;
  t8237 = -1.*t7736*t7937;
  t8238 = t8125 + t8237;
  t8243 = t7800*t8238;
  t8244 = t7785*t1747*t7945;
  t8245 = t8243 + t8244;
  t8247 = t7785*t8238;
  t8248 = -1.*t1747*t7800*t7945;
  t8249 = t8247 + t8248;
  t8251 = -1.*t7857*t8245;
  t8252 = t7850*t8249;
  t8253 = t8251 + t8252;
  t8255 = t7850*t8245;
  t8256 = t7857*t8249;
  t8257 = t8255 + t8256;
  t8269 = t7710*t7639;
  t8270 = t3281*t7690*t7713;
  t8271 = t8269 + t8270;
  t8276 = -1.*t3751*t8271;
  t8277 = t8167 + t8276;
  t8273 = -1.*t7736*t8271;
  t8274 = t8164 + t8273;
  t8281 = t7800*t8274;
  t8282 = t7785*t1747*t8277;
  t8283 = t8281 + t8282;
  t8285 = t7785*t8274;
  t8286 = -1.*t1747*t7800*t8277;
  t8287 = t8285 + t8286;
  t8289 = -1.*t7857*t8283;
  t8290 = t7850*t8287;
  t8291 = t8289 + t8290;
  t8293 = t7850*t8283;
  t8294 = t7857*t8287;
  t8295 = t8293 + t8294;
  t8203 = t7809*t8202;
  t8207 = -0.1305*t1428*t8206;
  t8208 = t7777*t8206;
  t8209 = t1747*t7836*t8206;
  t8213 = t7859*t8212;
  t8217 = t7874*t8216;
  t8221 = t7893*t8220;
  t8225 = t7902*t8224;
  t8226 = t7890*t8220;
  t8227 = t7885*t8224;
  t8228 = t8226 + t8227;
  t8229 = 0.0184*t8228;
  t8230 = t7885*t8220;
  t8231 = -1.*t7890*t8224;
  t8232 = t8230 + t8231;
  t8233 = -0.7055*t8232;
  t7947 = -1.*t7710*t1375*t1747;
  t7948 = t1428*t7941;
  t7949 = t7947 + t7948;
  t8323 = -1.*t7850*t7800*t7949;
  t8324 = -1.*t7785*t7857*t7949;
  t8325 = t8323 + t8324;
  t8327 = t7785*t7850*t7949;
  t8328 = -1.*t7800*t7857*t7949;
  t8329 = t8327 + t8328;
  t8309 = -0.135*t1428;
  t8310 = -0.049*t1747;
  t8311 = t8309 + t8310;
  t8313 = 0.049*t1428;
  t8314 = t8313 + t1949;
  t8341 = t3751*t8161;
  t8342 = t7736*t8271;
  t8343 = t8341 + t8342;
  t8345 = -1.*t1375*t1747*t3281;
  t8346 = t1428*t8343;
  t8347 = t8345 + t8346;
  t8354 = -1.*t7850*t7800*t8347;
  t8355 = -1.*t7785*t7857*t8347;
  t8356 = t8354 + t8355;
  t8358 = t7785*t7850*t8347;
  t8359 = -1.*t7800*t7857*t8347;
  t8360 = t8358 + t8359;
  t8372 = t1375*t7639*t3751;
  t8373 = t7736*t1375*t7713;
  t8374 = t8372 + t8373;
  t8376 = t1747*t7690;
  t8377 = t1428*t8374;
  t8378 = t8376 + t8377;
  t8386 = -1.*t7850*t7800*t8378;
  t8387 = -1.*t7785*t7857*t8378;
  t8388 = t8386 + t8387;
  t8390 = t7785*t7850*t8378;
  t8391 = -1.*t7800*t7857*t8378;
  t8392 = t8390 + t8391;
  t8410 = -1.*t7800*t7945;
  t8411 = -1.*t7785*t7954;
  t8412 = t8410 + t8411;
  t8415 = t7857*t8412;
  t8416 = t8415 + t7970;
  t8418 = t7850*t8412;
  t8419 = -1.*t7857*t7965;
  t8420 = t8418 + t8419;
  t8403 = 0.049*t7785;
  t8404 = t8403 + t7833;
  t8406 = -0.09*t7785;
  t8407 = -0.049*t7800;
  t8408 = t8406 + t8407;
  t8432 = t1428*t1375*t3281;
  t8433 = t1747*t8343;
  t8434 = t8432 + t8433;
  t8436 = -1.*t7800*t8277;
  t8437 = -1.*t7785*t8434;
  t8438 = t8436 + t8437;
  t8440 = t7785*t8277;
  t8441 = -1.*t7800*t8434;
  t8442 = t8440 + t8441;
  t8444 = t7857*t8438;
  t8445 = t7850*t8442;
  t8446 = t8444 + t8445;
  t8448 = t7850*t8438;
  t8449 = -1.*t7857*t8442;
  t8450 = t8448 + t8449;
  t8462 = -1.*t1428*t7690;
  t8463 = t1747*t8374;
  t8464 = t8462 + t8463;
  t8466 = -1.*t7800*t8206;
  t8467 = -1.*t7785*t8464;
  t8468 = t8466 + t8467;
  t8470 = t7785*t8206;
  t8471 = -1.*t7800*t8464;
  t8472 = t8470 + t8471;
  t8474 = t7857*t8468;
  t8475 = t7850*t8472;
  t8476 = t8474 + t8475;
  t8478 = t7850*t8468;
  t8479 = -1.*t7857*t8472;
  t8480 = t8478 + t8479;
  t8499 = -1.*t7850*t7960;
  t8500 = t8499 + t8419;
  t7983 = t7885*t7972;
  t8491 = -0.21*t7850;
  t8492 = -0.049*t7857;
  t8493 = t8491 + t8492;
  t8495 = 0.049*t7850;
  t8496 = t8495 + t7858;
  t8510 = t7800*t8277;
  t8511 = t7785*t8434;
  t8512 = t8510 + t8511;
  t8515 = -1.*t7857*t8512;
  t8516 = t8515 + t8445;
  t8518 = -1.*t7850*t8512;
  t8519 = t8518 + t8449;
  t8530 = t7800*t8206;
  t8531 = t7785*t8464;
  t8532 = t8530 + t8531;
  t8535 = -1.*t7857*t8532;
  t8536 = t8535 + t8475;
  t8538 = -1.*t7850*t8532;
  t8539 = t8538 + t8479;
  t8502 = -1.*t7890*t7972;
  t7984 = -1.*t7890*t7977;
  t7985 = t7983 + t7984;
  t8550 = 0.0016*t7885;
  t8551 = t8550 + t7901;
  t8553 = -0.2707*t7885;
  t8554 = -0.0016*t7890;
  t8555 = t8553 + t8554;
  t8521 = -1.*t7890*t8516;
  t8563 = t7850*t8512;
  t8564 = t7857*t8442;
  t8565 = t8563 + t8564;
  t8525 = t7885*t8516;
  t8541 = -1.*t7890*t8536;
  t8575 = t7850*t8532;
  t8576 = t7857*t8472;
  t8577 = t8575 + t8576;
  t8545 = t7885*t8536;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=-1.*t1375*t2227*t3281 + t7629*t7720 + t7743*t7756 + t7777*t7782 - 0.1305*(t1375*t1747*t3281 + t1428*t7782) + t7809*t7820 + t7836*t7846 + t7859*t7866 + t7874*t7882 + t7893*t7897 + t7902*t7906 + 0.0184*(t7890*t7897 + t7885*t7906) - 0.7055*(t7885*t7897 - 1.*t7890*t7906);
  p_output1[10]=t1375*t2227*t7710 + t7629*t7933 + t7743*t7937 + t7777*t7941 + t7809*t7945 - 0.1305*t7949 + t7836*t7954 + t7859*t7960 + t7874*t7965 + t7893*t7972 + t7902*t7977 + 0.0184*(t7890*t7972 + t7885*t7977) - 0.7055*t7985;
  p_output1[11]=0;
  p_output1[12]=t1375*t7629*t7639*t7710 - 1.*t2227*t7690*t7710 + t1375*t7710*t7713*t7743 + t7777*t7993 - 0.1305*(t1747*t7690*t7710 + t1428*t7993) + t7809*t7997 + t7836*t8005 + t7859*t8009 + t7874*t8013 + t7893*t8017 + t7902*t8021 + 0.0184*(t7890*t8017 + t7885*t8021) - 0.7055*(t7885*t8017 - 1.*t7890*t8021);
  p_output1[13]=t1375*t3281*t7629*t7639 - 1.*t2227*t3281*t7690 + t1375*t3281*t7713*t7743 + t7777*t8037 - 0.1305*(t1747*t3281*t7690 + t1428*t8037) + t7809*t8041 + t7836*t8049 + t7859*t8053 + t7874*t8057 + t7893*t8061 + t7902*t8065 + 0.0184*(t7890*t8061 + t7885*t8065) - 0.7055*(t7885*t8061 - 1.*t7890*t8065);
  p_output1[14]=-1.*t1375*t2227 - 1.*t7629*t7639*t7690 - 1.*t7690*t7713*t7743 + t7777*t8081 - 0.1305*(t1375*t1747 + t1428*t8081) + t7809*t8085 + t7836*t8093 + t7859*t8097 + t7874*t8101 + t7893*t8105 + t7902*t8109 + 0.0184*(t7890*t8105 + t7885*t8109) - 0.7055*(t7885*t8105 - 1.*t7890*t8109);
  p_output1[15]=t7743*t7933 + t7629*t8123 + t7809*t8127 - 0.1305*t1428*t8130 + t7777*t8130 + t1747*t7836*t8130 + t7859*t8136 + t7874*t8140 + t7893*t8144 + t7902*t8148 + 0.0184*(t7890*t8144 + t7885*t8148) - 0.7055*(t7885*t8144 - 1.*t7890*t8148);
  p_output1[16]=t7629*t7756 + t7743*t8161 + t7809*t8165 - 0.1305*t1428*t8169 + t7777*t8169 + t1747*t7836*t8169 + t7859*t8175 + t7874*t8179 + t7893*t8183 + t7902*t8187 + 0.0184*(t7890*t8183 + t7885*t8187) - 0.7055*(t7885*t8183 - 1.*t7890*t8187);
  p_output1[17]=-1.*t1375*t7629*t7713 + t1375*t7639*t7743 + t8203 + t8207 + t8208 + t8209 + t8213 + t8217 + t8221 + t8225 + t8229 + t8233;
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
  p_output1[39]=0.135*t7736*t7933 - 0.135*t3751*t7937 - 0.1305*t1428*t7945 + t7777*t7945 + t1747*t7836*t7945 + t7809*t8238 + t7859*t8245 + t7874*t8249 + t7893*t8253 + t7902*t8257 + 0.0184*(t7890*t8253 + t7885*t8257) - 0.7055*(t7885*t8253 - 1.*t7890*t8257);
  p_output1[40]=0.135*t7736*t8161 - 0.135*t3751*t8271 + t7809*t8274 - 0.1305*t1428*t8277 + t7777*t8277 + t1747*t7836*t8277 + t7859*t8283 + t7874*t8287 + t7893*t8291 + t7902*t8295 + 0.0184*(t7890*t8291 + t7885*t8295) - 0.7055*(t7885*t8291 - 1.*t7890*t8295);
  p_output1[41]=-0.135*t1375*t3751*t7713 + 0.135*t1375*t7639*t7736 + t8203 + t8207 + t8208 + t8209 + t8213 + t8217 + t8221 + t8225 + t8229 + t8233;
  p_output1[42]=-0.1305*(-1.*t1375*t1428*t7710 - 1.*t1747*t7941) + t7836*t7949 + t7785*t7859*t7949 - 1.*t7800*t7874*t7949 + t1375*t7710*t8311 + t7941*t8314 + t7893*t8325 + t7902*t8329 + 0.0184*(t7890*t8325 + t7885*t8329) - 0.7055*(t7885*t8325 - 1.*t7890*t8329);
  p_output1[43]=t1375*t3281*t8311 + t8314*t8343 - 0.1305*(t7838 - 1.*t1747*t8343) + t7836*t8347 + t7785*t7859*t8347 - 1.*t7800*t7874*t8347 + t7893*t8356 + t7902*t8360 + 0.0184*(t7890*t8356 + t7885*t8360) - 0.7055*(t7885*t8356 - 1.*t7890*t8360);
  p_output1[44]=-1.*t7690*t8311 + t8314*t8374 - 0.1305*(t1428*t7690 - 1.*t1747*t8374) + t7836*t8378 + t7785*t7859*t8378 - 1.*t7800*t7874*t8378 + t7893*t8388 + t7902*t8392 + 0.0184*(t7890*t8388 + t7885*t8392) - 0.7055*(t7885*t8388 - 1.*t7890*t8392);
  p_output1[45]=t7859*t7965 + t7945*t8404 + t7954*t8408 + t7874*t8412 + t7902*t8416 + t7893*t8420 - 0.7055*(-1.*t7890*t8416 + t7885*t8420) + 0.0184*(t7885*t8416 + t7890*t8420);
  p_output1[46]=t8277*t8404 + t8408*t8434 + t7874*t8438 + t7859*t8442 + t7902*t8446 + t7893*t8450 - 0.7055*(-1.*t7890*t8446 + t7885*t8450) + 0.0184*(t7885*t8446 + t7890*t8450);
  p_output1[47]=t8206*t8404 + t8408*t8464 + t7874*t8468 + t7859*t8472 + t7902*t8476 + t7893*t8480 - 0.7055*(-1.*t7890*t8476 + t7885*t8480) + 0.0184*(t7885*t8476 + t7890*t8480);
  p_output1[48]=t7902*t7972 + t7960*t8493 + t7965*t8496 + t7893*t8500 + 0.0184*(t7983 + t7890*t8500) - 0.7055*(t7885*t8500 + t8502);
  p_output1[49]=t8442*t8496 + t8493*t8512 + t7902*t8516 + t7893*t8519 - 0.7055*(t7885*t8519 + t8521) + 0.0184*(t7890*t8519 + t8525);
  p_output1[50]=t8472*t8496 + t8493*t8532 + t7902*t8536 + t7893*t8539 - 0.7055*(t7885*t8539 + t8541) + 0.0184*(t7890*t8539 + t8545);
  p_output1[51]=0.0184*t7985 - 0.7055*(-1.*t7885*t7977 + t8502) + t7972*t8551 + t7977*t8555;
  p_output1[52]=t8516*t8551 + t8555*t8565 - 0.7055*(t8521 - 1.*t7885*t8565) + 0.0184*(t8525 - 1.*t7890*t8565);
  p_output1[53]=t8536*t8551 + t8555*t8577 - 0.7055*(t8541 - 1.*t7885*t8577) + 0.0184*(t8545 - 1.*t7890*t8577);
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

#include "J_ankle_joint_right_mex.hh"

namespace SymExpression
{

void J_ankle_joint_right_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
