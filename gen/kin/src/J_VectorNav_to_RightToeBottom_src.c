/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:17:16 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "J_VectorNav_to_RightToeBottom_src.h"

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
  double t288;
  double t296;
  double t464;
  double t694;
  double t790;
  double t866;
  double t978;
  double t1366;
  double t1736;
  double t1740;
  double t1862;
  double t2042;
  double t1626;
  double t1631;
  double t1633;
  double t2107;
  double t2160;
  double t2176;
  double t2338;
  double t2433;
  double t2444;
  double t2512;
  double t2240;
  double t2297;
  double t2318;
  double t2574;
  double t2599;
  double t2618;
  double t3454;
  double t3560;
  double t3576;
  double t3751;
  double t3266;
  double t3303;
  double t3452;
  double t3883;
  double t3920;
  double t4007;
  double t4947;
  double t5000;
  double t5150;
  double t5173;
  double t4651;
  double t4814;
  double t4857;
  double t5379;
  double t5449;
  double t5457;
  double t322;
  double t367;
  double t400;
  double t534;
  double t535;
  double t872;
  double t1271;
  double t1311;
  double t1388;
  double t1425;
  double t1459;
  double t2041;
  double t2051;
  double t2090;
  double t2179;
  double t2182;
  double t2186;
  double t6589;
  double t6606;
  double t6608;
  double t6638;
  double t6691;
  double t6695;
  double t2480;
  double t2513;
  double t2538;
  double t2710;
  double t2830;
  double t3098;
  double t6734;
  double t6738;
  double t6741;
  double t6804;
  double t6813;
  double t6816;
  double t3632;
  double t3805;
  double t3831;
  double t4051;
  double t4083;
  double t4141;
  double t6836;
  double t6839;
  double t6854;
  double t6892;
  double t6907;
  double t6913;
  double t5165;
  double t5194;
  double t5207;
  double t5491;
  double t5495;
  double t5547;
  double t6929;
  double t6936;
  double t6957;
  double t6988;
  double t6990;
  double t6997;
  double t7073;
  double t7075;
  double t6500;
  double t6548;
  double t6637;
  double t6729;
  double t6783;
  double t6830;
  double t6871;
  double t6921;
  double t6987;
  double t7010;
  double t7012;
  double t7021;
  double t7039;
  double t7040;
  double t7042;
  double t7045;
  double t7051;
  double t7060;
  double t7064;
  double t1328;
  double t1529;
  double t2091;
  double t2194;
  double t2561;
  double t3247;
  double t3864;
  double t4316;
  double t5370;
  double t5578;
  double t5647;
  double t5649;
  double t5680;
  double t5691;
  double t5737;
  double t5768;
  double t5886;
  double t5935;
  double t7139;
  double t7140;
  double t7141;
  double t7151;
  double t7154;
  double t7158;
  double t7167;
  double t7168;
  double t7172;
  double t7181;
  double t7182;
  double t7183;
  double t7185;
  double t7188;
  double t7189;
  double t7199;
  double t7202;
  double t7204;
  double t7115;
  double t7118;
  double t7121;
  double t7124;
  double t7132;
  double t7148;
  double t7166;
  double t7173;
  double t7184;
  double t7198;
  double t7205;
  double t7209;
  double t7212;
  double t7214;
  double t7218;
  double t7219;
  double t7225;
  double t7227;
  double t7229;
  double t7232;
  double t7251;
  double t7253;
  double t7076;
  double t7249;
  double t7250;
  double t7093;
  double t7245;
  double t7264;
  double t7266;
  double t7268;
  double t7278;
  double t7280;
  double t7282;
  double t7256;
  double t7257;
  double t7261;
  double t7316;
  double t7317;
  double t7321;
  double t7325;
  double t7327;
  double t7329;
  double t7299;
  double t7302;
  double t7310;
  double t7354;
  double t7356;
  double t7357;
  double t7361;
  double t7362;
  double t7365;
  double t7345;
  double t7346;
  double t7347;
  double t7381;
  double t7383;
  double t7385;
  double t7388;
  double t7389;
  double t7391;
  double t7374;
  double t7375;
  double t7377;
  double t7403;
  double t7404;
  double t7405;
  double t7410;
  double t7412;
  double t7413;
  double t7399;
  double t7400;
  double t7401;
  t288 = Sin(var1[7]);
  t296 = Cos(var1[8]);
  t464 = Sin(var1[8]);
  t694 = Cos(var1[9]);
  t790 = -1.*t694;
  t866 = 1. + t790;
  t978 = Sin(var1[9]);
  t1366 = Cos(var1[7]);
  t1736 = Cos(var1[10]);
  t1740 = -1.*t1736;
  t1862 = 1. + t1740;
  t2042 = Sin(var1[10]);
  t1626 = t694*t288*t464;
  t1631 = t1366*t978;
  t1633 = t1626 + t1631;
  t2107 = t1366*t694;
  t2160 = -1.*t288*t464*t978;
  t2176 = t2107 + t2160;
  t2338 = Cos(var1[11]);
  t2433 = -1.*t2338;
  t2444 = 1. + t2433;
  t2512 = Sin(var1[11]);
  t2240 = t1736*t1633;
  t2297 = t2176*t2042;
  t2318 = t2240 + t2297;
  t2574 = t1736*t2176;
  t2599 = -1.*t1633*t2042;
  t2618 = t2574 + t2599;
  t3454 = Cos(var1[12]);
  t3560 = -1.*t3454;
  t3576 = 1. + t3560;
  t3751 = Sin(var1[12]);
  t3266 = t2338*t2318;
  t3303 = t2618*t2512;
  t3452 = t3266 + t3303;
  t3883 = t2338*t2618;
  t3920 = -1.*t2318*t2512;
  t4007 = t3883 + t3920;
  t4947 = Cos(var1[13]);
  t5000 = -1.*t4947;
  t5150 = 1. + t5000;
  t5173 = Sin(var1[13]);
  t4651 = t3454*t3452;
  t4814 = t4007*t3751;
  t4857 = t4651 + t4814;
  t5379 = t3454*t4007;
  t5449 = -1.*t3452*t3751;
  t5457 = t5379 + t5449;
  t322 = -1.*t296;
  t367 = 1. + t322;
  t400 = -0.135*t367;
  t534 = 0.049*t464;
  t535 = 0. + t400 + t534;
  t872 = -0.049*t866;
  t1271 = -0.09*t978;
  t1311 = 0. + t872 + t1271;
  t1388 = -0.09*t866;
  t1425 = 0.049*t978;
  t1459 = 0. + t1388 + t1425;
  t2041 = -0.049*t1862;
  t2051 = -0.21*t2042;
  t2090 = 0. + t2041 + t2051;
  t2179 = -0.21*t1862;
  t2182 = 0.049*t2042;
  t2186 = 0. + t2179 + t2182;
  t6589 = t1366*t694*t464;
  t6606 = -1.*t288*t978;
  t6608 = t6589 + t6606;
  t6638 = -1.*t694*t288;
  t6691 = -1.*t1366*t464*t978;
  t6695 = t6638 + t6691;
  t2480 = -0.0016*t2444;
  t2513 = -0.2707*t2512;
  t2538 = 0. + t2480 + t2513;
  t2710 = -0.2707*t2444;
  t2830 = 0.0016*t2512;
  t3098 = 0. + t2710 + t2830;
  t6734 = t1736*t6608;
  t6738 = t6695*t2042;
  t6741 = t6734 + t6738;
  t6804 = t1736*t6695;
  t6813 = -1.*t6608*t2042;
  t6816 = t6804 + t6813;
  t3632 = 0.0184*t3576;
  t3805 = -0.7055*t3751;
  t3831 = 0. + t3632 + t3805;
  t4051 = -0.7055*t3576;
  t4083 = -0.0184*t3751;
  t4141 = 0. + t4051 + t4083;
  t6836 = t2338*t6741;
  t6839 = t6816*t2512;
  t6854 = t6836 + t6839;
  t6892 = t2338*t6816;
  t6907 = -1.*t6741*t2512;
  t6913 = t6892 + t6907;
  t5165 = -0.0216*t5150;
  t5194 = -1.1135*t5173;
  t5207 = 0. + t5165 + t5194;
  t5491 = -1.1135*t5150;
  t5495 = 0.0216*t5173;
  t5547 = 0. + t5491 + t5495;
  t6929 = t3454*t6854;
  t6936 = t6913*t3751;
  t6957 = t6929 + t6936;
  t6988 = t3454*t6913;
  t6990 = -1.*t6854*t3751;
  t6997 = t6988 + t6990;
  t7073 = -1.*t1366;
  t7075 = 0. + t7073;
  t6500 = -1.*t1366*t464*t1311;
  t6548 = t288*t1459;
  t6637 = -1.*t6608*t2090;
  t6729 = -1.*t6695*t2186;
  t6783 = -1.*t6741*t2538;
  t6830 = -1.*t6816*t3098;
  t6871 = -1.*t6854*t3831;
  t6921 = -1.*t6913*t4141;
  t6987 = -1.*t6957*t5207;
  t7010 = -1.*t6997*t5547;
  t7012 = t4947*t6957;
  t7021 = t6997*t5173;
  t7039 = t7012 + t7021;
  t7040 = -0.0306*t7039;
  t7042 = t4947*t6997;
  t7045 = -1.*t6957*t5173;
  t7051 = t7042 + t7045;
  t7060 = 1.1312*t7051;
  t7064 = 0. + t288;
  t1328 = -1.*t288*t464*t1311;
  t1529 = -1.*t1366*t1459;
  t2091 = -1.*t1633*t2090;
  t2194 = -1.*t2176*t2186;
  t2561 = -1.*t2318*t2538;
  t3247 = -1.*t2618*t3098;
  t3864 = -1.*t3452*t3831;
  t4316 = -1.*t4007*t4141;
  t5370 = -1.*t4857*t5207;
  t5578 = -1.*t5457*t5547;
  t5647 = t4947*t4857;
  t5649 = t5457*t5173;
  t5680 = t5647 + t5649;
  t5691 = -0.0306*t5680;
  t5737 = t4947*t5457;
  t5768 = -1.*t4857*t5173;
  t5886 = t5737 + t5768;
  t5935 = 1.1312*t5886;
  t7139 = t296*t694*t1736;
  t7140 = -1.*t296*t978*t2042;
  t7141 = t7139 + t7140;
  t7151 = -1.*t296*t1736*t978;
  t7154 = -1.*t296*t694*t2042;
  t7158 = t7151 + t7154;
  t7167 = t2338*t7141;
  t7168 = t7158*t2512;
  t7172 = t7167 + t7168;
  t7181 = t2338*t7158;
  t7182 = -1.*t7141*t2512;
  t7183 = t7181 + t7182;
  t7185 = t3454*t7172;
  t7188 = t7183*t3751;
  t7189 = t7185 + t7188;
  t7199 = t3454*t7183;
  t7202 = -1.*t7172*t3751;
  t7204 = t7199 + t7202;
  t7115 = 0.049*t296;
  t7118 = -0.004500000000000004*t464;
  t7121 = t296*t1311;
  t7124 = t296*t694*t2090;
  t7132 = -1.*t296*t978*t2186;
  t7148 = t7141*t2538;
  t7166 = t7158*t3098;
  t7173 = t7172*t3831;
  t7184 = t7183*t4141;
  t7198 = t7189*t5207;
  t7205 = t7204*t5547;
  t7209 = t4947*t7189;
  t7212 = t7204*t5173;
  t7214 = t7209 + t7212;
  t7218 = 0.0306*t7214;
  t7219 = t4947*t7204;
  t7225 = -1.*t7189*t5173;
  t7227 = t7219 + t7225;
  t7229 = -1.1312*t7227;
  t7232 = 0. + t7115 + t7118 + t7121 + t7124 + t7132 + t7148 + t7166 + t7173 + t7184 + t7198 + t7205 + t7218 + t7229;
  t7251 = t296*t288;
  t7253 = 0. + t7251;
  t7076 = -0.004500000000000004*t1366*t296;
  t7249 = t1366*t296;
  t7250 = 0. + t7249;
  t7093 = -0.004500000000000004*t296*t288;
  t7245 = 0. + t464;
  t7264 = -0.049*t1633;
  t7266 = -0.09*t2176;
  t7268 = 0. + t7093 + t7264 + t7266 + t2091 + t2194 + t2561 + t3247 + t3864 + t4316 + t5370 + t5578 + t5691 + t5935;
  t7278 = 0.049*t296*t694;
  t7280 = -0.09*t296*t978;
  t7282 = 0. + t7278 + t7118 + t7280 + t7124 + t7132 + t7148 + t7166 + t7173 + t7184 + t7198 + t7205 + t7218 + t7229;
  t7256 = -0.049*t6608;
  t7257 = -0.09*t6695;
  t7261 = 0. + t7076 + t7256 + t7257 + t6637 + t6729 + t6783 + t6830 + t6871 + t6921 + t6987 + t7010 + t7040 + t7060;
  t7316 = -0.21*t2618;
  t7317 = -0.049*t2318;
  t7321 = 0. + t7316 + t7317 + t2561 + t3247 + t3864 + t4316 + t5370 + t5578 + t5691 + t5935;
  t7325 = 0.21*t7158;
  t7327 = 0.049*t7141;
  t7329 = 0. + t7325 + t7327 + t7148 + t7166 + t7173 + t7184 + t7198 + t7205 + t7218 + t7229;
  t7299 = -0.21*t6816;
  t7302 = -0.049*t6741;
  t7310 = 0. + t7299 + t7302 + t6783 + t6830 + t6871 + t6921 + t6987 + t7010 + t7040 + t7060;
  t7354 = -0.0016*t3452;
  t7356 = -0.2707*t4007;
  t7357 = 0. + t7354 + t7356 + t3864 + t4316 + t5370 + t5578 + t5691 + t5935;
  t7361 = 0.0016*t7172;
  t7362 = 0.2707*t7183;
  t7365 = 0. + t7361 + t7362 + t7173 + t7184 + t7198 + t7205 + t7218 + t7229;
  t7345 = -0.0016*t6854;
  t7346 = -0.2707*t6913;
  t7347 = 0. + t7345 + t7346 + t6871 + t6921 + t6987 + t7010 + t7040 + t7060;
  t7381 = -0.7055*t5457;
  t7383 = 0.0184*t4857;
  t7385 = 0. + t7381 + t7383 + t5370 + t5578 + t5691 + t5935;
  t7388 = 0.7055*t7204;
  t7389 = -0.0184*t7189;
  t7391 = 0. + t7388 + t7389 + t7198 + t7205 + t7218 + t7229;
  t7374 = -0.7055*t6997;
  t7375 = 0.0184*t6957;
  t7377 = 0. + t7374 + t7375 + t6987 + t7010 + t7040 + t7060;
  t7403 = -0.052199999999999996*t5680;
  t7404 = 0.01770000000000005*t5886;
  t7405 = 0. + t7403 + t7404;
  t7410 = 0.052199999999999996*t7214;
  t7412 = -0.01770000000000005*t7227;
  t7413 = 0. + t7410 + t7412;
  t7399 = -0.052199999999999996*t7039;
  t7400 = 0.01770000000000005*t7051;
  t7401 = 0. + t7399 + t7400;
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
  p_output1[42]=1.;
  p_output1[43]=0.;
  p_output1[44]=0.;
  p_output1[45]=0.;
  p_output1[46]=0. - 1.*(0. + t1328 + t1529 + t2091 + t2194 + t2561 - 0.135*t288 + 0.1305*t288*t296 + t3247 + t3864 + t4316 - 1.*t288*t535 + t5370 + t5578 + t5691 + t5935);
  p_output1[47]=0. - 0.135*t1366 + 0.1305*t1366*t296 - 1.*t1366*t535 + t6500 + t6548 + t6637 + t6729 + t6783 + t6830 + t6871 + t6921 + t6987 + t7010 + t7040 + t7060;
  p_output1[48]=0.;
  p_output1[49]=t7064;
  p_output1[50]=t7075;
  p_output1[51]=-1.*t7075*(0. + 0.09*t288 - 0.049*t1366*t464 + t6500 + t6548 + t6637 + t6729 + t6783 + t6830 + t6871 + t6921 + t6987 + t7010 + t7040 + t7060 + t7076) + t7064*(0. + t1328 - 0.09*t1366 + t1529 + t2091 + t2194 + t2561 + t3247 + t3864 + t4316 - 0.049*t288*t464 + t5370 + t5578 + t5691 + t5935 + t7093);
  p_output1[52]=0. + t7075*t7232;
  p_output1[53]=0. - 1.*t7064*t7232;
  p_output1[54]=t7245;
  p_output1[55]=t7250;
  p_output1[56]=t7253;
  p_output1[57]=-1.*t7253*t7261 + t7250*t7268;
  p_output1[58]=-1.*t7245*t7268 + t7253*t7282;
  p_output1[59]=t7245*t7261 - 1.*t7250*t7282;
  p_output1[60]=t7245;
  p_output1[61]=t7250;
  p_output1[62]=t7253;
  p_output1[63]=-1.*t7253*t7310 + t7250*t7321;
  p_output1[64]=-1.*t7245*t7321 + t7253*t7329;
  p_output1[65]=t7245*t7310 - 1.*t7250*t7329;
  p_output1[66]=t7245;
  p_output1[67]=t7250;
  p_output1[68]=t7253;
  p_output1[69]=-1.*t7253*t7347 + t7250*t7357;
  p_output1[70]=-1.*t7245*t7357 + t7253*t7365;
  p_output1[71]=t7245*t7347 - 1.*t7250*t7365;
  p_output1[72]=t7245;
  p_output1[73]=t7250;
  p_output1[74]=t7253;
  p_output1[75]=-1.*t7253*t7377 + t7250*t7385;
  p_output1[76]=-1.*t7245*t7385 + t7253*t7391;
  p_output1[77]=t7245*t7377 - 1.*t7250*t7391;
  p_output1[78]=t7245;
  p_output1[79]=t7250;
  p_output1[80]=t7253;
  p_output1[81]=-1.*t7253*t7401 + t7250*t7405;
  p_output1[82]=-1.*t7245*t7405 + t7253*t7413;
  p_output1[83]=t7245*t7401 - 1.*t7250*t7413;
}



void J_VectorNav_to_RightToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
