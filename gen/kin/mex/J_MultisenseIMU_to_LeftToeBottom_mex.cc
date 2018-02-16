/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:17:41 GMT-05:00
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
  double t27;
  double t144;
  double t395;
  double t863;
  double t994;
  double t1062;
  double t1081;
  double t1896;
  double t2073;
  double t2210;
  double t2230;
  double t2320;
  double t2747;
  double t2767;
  double t2789;
  double t3293;
  double t3336;
  double t3379;
  double t3526;
  double t3624;
  double t3765;
  double t3802;
  double t4265;
  double t4441;
  double t4460;
  double t4726;
  double t4784;
  double t4803;
  double t5512;
  double t5668;
  double t5832;
  double t5966;
  double t6125;
  double t6344;
  double t6366;
  double t6874;
  double t6915;
  double t6989;
  double t7045;
  double t7142;
  double t7160;
  double t7269;
  double t7642;
  double t7732;
  double t7786;
  double t7886;
  double t7897;
  double t7903;
  double t270;
  double t337;
  double t348;
  double t424;
  double t520;
  double t1070;
  double t1150;
  double t1454;
  double t1933;
  double t1991;
  double t2025;
  double t2304;
  double t2398;
  double t2661;
  double t2925;
  double t2952;
  double t3248;
  double t3787;
  double t3921;
  double t4110;
  double t8031;
  double t8043;
  double t8066;
  double t8080;
  double t8083;
  double t8084;
  double t4534;
  double t4627;
  double t4713;
  double t5895;
  double t5993;
  double t6083;
  double t8099;
  double t8103;
  double t8112;
  double t8119;
  double t8124;
  double t8128;
  double t6794;
  double t6798;
  double t6826;
  double t7161;
  double t7312;
  double t7492;
  double t8130;
  double t8133;
  double t8138;
  double t8140;
  double t8146;
  double t8147;
  double t7861;
  double t7863;
  double t7880;
  double t8151;
  double t8152;
  double t8154;
  double t8157;
  double t8161;
  double t8163;
  double t8196;
  double t8197;
  double t8207;
  double t8212;
  double t8213;
  double t8215;
  double t8217;
  double t8218;
  double t8222;
  double t8223;
  double t8224;
  double t8226;
  double t8227;
  double t8228;
  double t8230;
  double t8233;
  double t8235;
  double t8237;
  double t8239;
  double t8240;
  double t8191;
  double t8193;
  double t8199;
  double t8200;
  double t8202;
  double t8205;
  double t8206;
  double t8214;
  double t8220;
  double t8225;
  double t8229;
  double t8236;
  double t8241;
  double t8243;
  double t8244;
  double t8248;
  double t8249;
  double t8252;
  double t8254;
  double t8255;
  double t8256;
  double t8259;
  double t1604;
  double t2058;
  double t2825;
  double t3481;
  double t4473;
  double t5107;
  double t6453;
  double t7044;
  double t7832;
  double t7908;
  double t7909;
  double t7911;
  double t7912;
  double t7913;
  double t7918;
  double t7922;
  double t7925;
  double t7948;
  double t8019;
  double t8025;
  double t8073;
  double t8091;
  double t8113;
  double t8129;
  double t8139;
  double t8148;
  double t8156;
  double t8165;
  double t8172;
  double t8173;
  double t8174;
  double t8175;
  double t8178;
  double t8182;
  double t8183;
  double t8184;
  double t8291;
  double t8294;
  double t8295;
  double t8271;
  double t8288;
  double t8290;
  double t8297;
  double t8299;
  double t8300;
  double t8281;
  double t8302;
  double t8304;
  double t8305;
  double t8312;
  double t8313;
  double t8315;
  double t8321;
  double t8322;
  double t8325;
  double t8328;
  double t8329;
  double t8330;
  double t8335;
  double t8336;
  double t8341;
  double t8349;
  double t8350;
  double t8352;
  double t8354;
  double t8355;
  double t8356;
  double t8360;
  double t8361;
  double t8363;
  double t8372;
  double t8374;
  double t8375;
  double t8377;
  double t8378;
  double t8380;
  double t8384;
  double t8385;
  double t8387;
  double t8394;
  double t8395;
  double t8396;
  double t8398;
  double t8399;
  double t8400;
  double t8404;
  double t8405;
  double t8406;
  t27 = Cos(var1[0]);
  t144 = Cos(var1[1]);
  t395 = Sin(var1[1]);
  t863 = Cos(var1[2]);
  t994 = -1.*t863;
  t1062 = 1. + t994;
  t1081 = Sin(var1[2]);
  t1896 = Sin(var1[0]);
  t2073 = Cos(var1[3]);
  t2210 = -1.*t2073;
  t2230 = 1. + t2210;
  t2320 = Sin(var1[3]);
  t2747 = t27*t863*t395;
  t2767 = -1.*t1896*t1081;
  t2789 = t2747 + t2767;
  t3293 = -1.*t863*t1896;
  t3336 = -1.*t27*t395*t1081;
  t3379 = t3293 + t3336;
  t3526 = Cos(var1[4]);
  t3624 = -1.*t3526;
  t3765 = 1. + t3624;
  t3802 = Sin(var1[4]);
  t4265 = -1.*t2320*t2789;
  t4441 = t2073*t3379;
  t4460 = t4265 + t4441;
  t4726 = t2073*t2789;
  t4784 = t2320*t3379;
  t4803 = t4726 + t4784;
  t5512 = Cos(var1[5]);
  t5668 = -1.*t5512;
  t5832 = 1. + t5668;
  t5966 = Sin(var1[5]);
  t6125 = t3802*t4460;
  t6344 = t3526*t4803;
  t6366 = t6125 + t6344;
  t6874 = t3526*t4460;
  t6915 = -1.*t3802*t4803;
  t6989 = t6874 + t6915;
  t7045 = Cos(var1[6]);
  t7142 = -1.*t7045;
  t7160 = 1. + t7142;
  t7269 = Sin(var1[6]);
  t7642 = -1.*t5966*t6366;
  t7732 = t5512*t6989;
  t7786 = t7642 + t7732;
  t7886 = t5512*t6366;
  t7897 = t5966*t6989;
  t7903 = t7886 + t7897;
  t270 = -1.*t144;
  t337 = 1. + t270;
  t348 = 0.135*t337;
  t424 = 0.049*t395;
  t520 = 0. + t348 + t424;
  t1070 = -0.049*t1062;
  t1150 = -0.09*t1081;
  t1454 = 0. + t1070 + t1150;
  t1933 = -0.09*t1062;
  t1991 = 0.049*t1081;
  t2025 = 0. + t1933 + t1991;
  t2304 = -0.049*t2230;
  t2398 = -0.21*t2320;
  t2661 = 0. + t2304 + t2398;
  t2925 = -0.21*t2230;
  t2952 = 0.049*t2320;
  t3248 = 0. + t2925 + t2952;
  t3787 = -0.2707*t3765;
  t3921 = 0.0016*t3802;
  t4110 = 0. + t3787 + t3921;
  t8031 = t863*t1896*t395;
  t8043 = t27*t1081;
  t8066 = t8031 + t8043;
  t8080 = t27*t863;
  t8083 = -1.*t1896*t395*t1081;
  t8084 = t8080 + t8083;
  t4534 = -0.0016*t3765;
  t4627 = -0.2707*t3802;
  t4713 = 0. + t4534 + t4627;
  t5895 = 0.0184*t5832;
  t5993 = -0.7055*t5966;
  t6083 = 0. + t5895 + t5993;
  t8099 = -1.*t2320*t8066;
  t8103 = t2073*t8084;
  t8112 = t8099 + t8103;
  t8119 = t2073*t8066;
  t8124 = t2320*t8084;
  t8128 = t8119 + t8124;
  t6794 = -0.7055*t5832;
  t6798 = -0.0184*t5966;
  t6826 = 0. + t6794 + t6798;
  t7161 = -1.1135*t7160;
  t7312 = 0.0216*t7269;
  t7492 = 0. + t7161 + t7312;
  t8130 = t3802*t8112;
  t8133 = t3526*t8128;
  t8138 = t8130 + t8133;
  t8140 = t3526*t8112;
  t8146 = -1.*t3802*t8128;
  t8147 = t8140 + t8146;
  t7861 = -0.0216*t7160;
  t7863 = -1.1135*t7269;
  t7880 = 0. + t7861 + t7863;
  t8151 = -1.*t5966*t8138;
  t8152 = t5512*t8147;
  t8154 = t8151 + t8152;
  t8157 = t5512*t8138;
  t8161 = t5966*t8147;
  t8163 = t8157 + t8161;
  t8196 = -1.*t1896;
  t8197 = 0. + t8196;
  t8207 = -1.*t144*t863*t2320;
  t8212 = -1.*t2073*t144*t1081;
  t8213 = t8207 + t8212;
  t8215 = t2073*t144*t863;
  t8217 = -1.*t144*t2320*t1081;
  t8218 = t8215 + t8217;
  t8222 = t3802*t8213;
  t8223 = t3526*t8218;
  t8224 = t8222 + t8223;
  t8226 = t3526*t8213;
  t8227 = -1.*t3802*t8218;
  t8228 = t8226 + t8227;
  t8230 = -1.*t5966*t8224;
  t8233 = t5512*t8228;
  t8235 = t8230 + t8233;
  t8237 = t5512*t8224;
  t8239 = t5966*t8228;
  t8240 = t8237 + t8239;
  t8191 = -1.*t27;
  t8193 = 0. + t8191;
  t8199 = 0.049*t144;
  t8200 = t144*t863*t2661;
  t8202 = 0.004500000000000004*t395;
  t8205 = t144*t1454;
  t8206 = -1.*t144*t3248*t1081;
  t8214 = t4110*t8213;
  t8220 = t4713*t8218;
  t8225 = t6083*t8224;
  t8229 = t6826*t8228;
  t8236 = t7492*t8235;
  t8241 = t7880*t8240;
  t8243 = t7269*t8235;
  t8244 = t7045*t8240;
  t8248 = t8243 + t8244;
  t8249 = 0.0306*t8248;
  t8252 = t7045*t8235;
  t8254 = -1.*t7269*t8240;
  t8255 = t8252 + t8254;
  t8256 = -1.1312*t8255;
  t8259 = 0. + t8199 + t8200 + t8202 + t8205 + t8206 + t8214 + t8220 + t8225 + t8229 + t8236 + t8241 + t8249 + t8256;
  t1604 = t27*t395*t1454;
  t2058 = -1.*t1896*t2025;
  t2825 = t2661*t2789;
  t3481 = t3248*t3379;
  t4473 = t4110*t4460;
  t5107 = t4713*t4803;
  t6453 = t6083*t6366;
  t7044 = t6826*t6989;
  t7832 = t7492*t7786;
  t7908 = t7880*t7903;
  t7909 = t7269*t7786;
  t7911 = t7045*t7903;
  t7912 = t7909 + t7911;
  t7913 = 0.0306*t7912;
  t7918 = t7045*t7786;
  t7922 = -1.*t7269*t7903;
  t7925 = t7918 + t7922;
  t7948 = -1.1312*t7925;
  t8019 = -1.*t1896*t395*t1454;
  t8025 = -1.*t27*t2025;
  t8073 = -1.*t2661*t8066;
  t8091 = -1.*t3248*t8084;
  t8113 = -1.*t4110*t8112;
  t8129 = -1.*t4713*t8128;
  t8139 = -1.*t6083*t8138;
  t8148 = -1.*t6826*t8147;
  t8156 = -1.*t7492*t8154;
  t8165 = -1.*t7880*t8163;
  t8172 = t7269*t8154;
  t8173 = t7045*t8163;
  t8174 = t8172 + t8173;
  t8175 = -0.0306*t8174;
  t8178 = t7045*t8154;
  t8182 = -1.*t7269*t8163;
  t8183 = t8178 + t8182;
  t8184 = 1.1312*t8183;
  t8291 = -1.*t27*t144;
  t8294 = 0. + t8291;
  t8295 = 0. + t395;
  t8271 = -0.004500000000000004*t27*t144;
  t8288 = t144*t1896;
  t8290 = 0. + t8288;
  t8297 = 0.049*t144*t863;
  t8299 = -0.09*t144*t1081;
  t8300 = 0. + t8297 + t8200 + t8202 + t8299 + t8206 + t8214 + t8220 + t8225 + t8229 + t8236 + t8241 + t8249 + t8256;
  t8281 = 0.004500000000000004*t144*t1896;
  t8302 = 0.049*t2789;
  t8304 = 0.09*t3379;
  t8305 = 0. + t8271 + t8302 + t2825 + t8304 + t3481 + t4473 + t5107 + t6453 + t7044 + t7832 + t7908 + t7913 + t7948;
  t8312 = -0.049*t8066;
  t8313 = -0.09*t8084;
  t8315 = 0. + t8281 + t8312 + t8073 + t8313 + t8091 + t8113 + t8129 + t8139 + t8148 + t8156 + t8165 + t8175 + t8184;
  t8321 = 0.21*t8213;
  t8322 = 0.049*t8218;
  t8325 = 0. + t8321 + t8214 + t8322 + t8220 + t8225 + t8229 + t8236 + t8241 + t8249 + t8256;
  t8328 = 0.21*t4460;
  t8329 = 0.049*t4803;
  t8330 = 0. + t8328 + t4473 + t8329 + t5107 + t6453 + t7044 + t7832 + t7908 + t7913 + t7948;
  t8335 = -0.21*t8112;
  t8336 = -0.049*t8128;
  t8341 = 0. + t8335 + t8113 + t8336 + t8129 + t8139 + t8148 + t8156 + t8165 + t8175 + t8184;
  t8349 = 0.0016*t8224;
  t8350 = 0.2707*t8228;
  t8352 = 0. + t8349 + t8225 + t8350 + t8229 + t8236 + t8241 + t8249 + t8256;
  t8354 = 0.0016*t6366;
  t8355 = 0.2707*t6989;
  t8356 = 0. + t8354 + t6453 + t8355 + t7044 + t7832 + t7908 + t7913 + t7948;
  t8360 = -0.0016*t8138;
  t8361 = -0.2707*t8147;
  t8363 = 0. + t8360 + t8139 + t8361 + t8148 + t8156 + t8165 + t8175 + t8184;
  t8372 = 0.7055*t8235;
  t8374 = -0.0184*t8240;
  t8375 = 0. + t8372 + t8236 + t8374 + t8241 + t8249 + t8256;
  t8377 = 0.7055*t7786;
  t8378 = -0.0184*t7903;
  t8380 = 0. + t8377 + t7832 + t8378 + t7908 + t7913 + t7948;
  t8384 = -0.7055*t8154;
  t8385 = 0.0184*t8163;
  t8387 = 0. + t8384 + t8156 + t8385 + t8165 + t8175 + t8184;
  t8394 = 0.052199999999999996*t8248;
  t8395 = -0.01770000000000005*t8255;
  t8396 = 0. + t8394 + t8395;
  t8398 = 0.052199999999999996*t7912;
  t8399 = -0.01770000000000005*t7925;
  t8400 = 0. + t8398 + t8399;
  t8404 = -0.052199999999999996*t8174;
  t8405 = 0.01770000000000005*t8183;
  t8406 = 0. + t8404 + t8405;
  p_output1[0]=0.;
  p_output1[1]=0.;
  p_output1[2]=1.;
  p_output1[3]=0. - 1.*(0. + t1604 + t2058 - 0.135*t27 + 0.1305*t144*t27 + t2825 + t3481 + t4473 + t5107 + t27*t520 + t6453 + t7044 + t7832 + t7908 + t7913 + t7948);
  p_output1[4]=0. + 0.135*t1896 - 0.1305*t144*t1896 - 1.*t1896*t520 + t8019 + t8025 + t8073 + t8091 + t8113 + t8129 + t8139 + t8148 + t8156 + t8165 + t8175 + t8184;
  p_output1[5]=0.;
  p_output1[6]=t8193;
  p_output1[7]=t8197;
  p_output1[8]=0.;
  p_output1[9]=0. + t8197*t8259;
  p_output1[10]=0. - 1.*t8193*t8259;
  p_output1[11]=t8193*(0. + t1604 - 0.09*t1896 + t2058 + t2825 + t3481 + 0.049*t27*t395 + t4473 + t5107 + t6453 + t7044 + t7832 + t7908 + t7913 + t7948 + t8271) - 1.*t8197*(0. - 0.09*t27 - 0.049*t1896*t395 + t8019 + t8025 + t8073 + t8091 + t8113 + t8129 + t8139 + t8148 + t8156 + t8165 + t8175 + t8184 + t8281);
  p_output1[12]=t8290;
  p_output1[13]=t8294;
  p_output1[14]=t8295;
  p_output1[15]=t8294*t8300 - 1.*t8295*t8305;
  p_output1[16]=-1.*t8290*t8300 + t8295*t8315;
  p_output1[17]=t8290*t8305 - 1.*t8294*t8315;
  p_output1[18]=t8290;
  p_output1[19]=t8294;
  p_output1[20]=t8295;
  p_output1[21]=t8294*t8325 - 1.*t8295*t8330;
  p_output1[22]=-1.*t8290*t8325 + t8295*t8341;
  p_output1[23]=t8290*t8330 - 1.*t8294*t8341;
  p_output1[24]=t8290;
  p_output1[25]=t8294;
  p_output1[26]=t8295;
  p_output1[27]=t8294*t8352 - 1.*t8295*t8356;
  p_output1[28]=-1.*t8290*t8352 + t8295*t8363;
  p_output1[29]=t8290*t8356 - 1.*t8294*t8363;
  p_output1[30]=t8290;
  p_output1[31]=t8294;
  p_output1[32]=t8295;
  p_output1[33]=t8294*t8375 - 1.*t8295*t8380;
  p_output1[34]=-1.*t8290*t8375 + t8295*t8387;
  p_output1[35]=t8290*t8380 - 1.*t8294*t8387;
  p_output1[36]=t8290;
  p_output1[37]=t8294;
  p_output1[38]=t8295;
  p_output1[39]=t8294*t8396 - 1.*t8295*t8400;
  p_output1[40]=-1.*t8290*t8396 + t8295*t8406;
  p_output1[41]=t8290*t8400 - 1.*t8294*t8406;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
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
  p_output1[60]=0;
  p_output1[61]=0;
  p_output1[62]=0;
  p_output1[63]=0;
  p_output1[64]=0;
  p_output1[65]=0;
  p_output1[66]=0;
  p_output1[67]=0;
  p_output1[68]=0;
  p_output1[69]=0;
  p_output1[70]=0;
  p_output1[71]=0;
  p_output1[72]=0;
  p_output1[73]=0;
  p_output1[74]=0;
  p_output1[75]=0;
  p_output1[76]=0;
  p_output1[77]=0;
  p_output1[78]=0;
  p_output1[79]=0;
  p_output1[80]=0;
  p_output1[81]=0;
  p_output1[82]=0;
  p_output1[83]=0;
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
