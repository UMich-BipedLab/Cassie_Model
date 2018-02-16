/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:17:42 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "J_MultisenseIMU_to_LeftToeBottom_src.h"

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
  double t30;
  double t73;
  double t258;
  double t623;
  double t713;
  double t874;
  double t1084;
  double t1422;
  double t1666;
  double t1698;
  double t1933;
  double t2027;
  double t2674;
  double t2747;
  double t2825;
  double t3310;
  double t3315;
  double t3374;
  double t3384;
  double t3401;
  double t3441;
  double t3500;
  double t3767;
  double t3770;
  double t3777;
  double t4261;
  double t4441;
  double t4460;
  double t4473;
  double t4534;
  double t4627;
  double t4710;
  double t4895;
  double t4900;
  double t5080;
  double t5351;
  double t5362;
  double t5389;
  double t5732;
  double t5765;
  double t5782;
  double t5830;
  double t5937;
  double t5993;
  double t6125;
  double t6625;
  double t6680;
  double t6794;
  double t118;
  double t191;
  double t251;
  double t348;
  double t424;
  double t1070;
  double t1150;
  double t1161;
  double t1492;
  double t1604;
  double t1632;
  double t1991;
  double t2304;
  double t2398;
  double t2952;
  double t2968;
  double t3256;
  double t3481;
  double t3593;
  double t3683;
  double t7860;
  double t7861;
  double t7863;
  double t7886;
  double t7897;
  double t7908;
  double t3897;
  double t3921;
  double t4015;
  double t4701;
  double t4726;
  double t4784;
  double t7911;
  double t7912;
  double t7913;
  double t7925;
  double t7948;
  double t7974;
  double t5231;
  double t5232;
  double t5320;
  double t5804;
  double t5837;
  double t5895;
  double t7984;
  double t7990;
  double t8011;
  double t8031;
  double t8043;
  double t8080;
  double t6270;
  double t6344;
  double t6453;
  double t8119;
  double t8124;
  double t8130;
  double t8140;
  double t8152;
  double t8157;
  double t8202;
  double t8205;
  double t8223;
  double t8225;
  double t8226;
  double t8229;
  double t8233;
  double t8235;
  double t8237;
  double t8239;
  double t8241;
  double t8244;
  double t8248;
  double t8249;
  double t8255;
  double t8256;
  double t8260;
  double t8267;
  double t8268;
  double t8271;
  double t8199;
  double t8200;
  double t8213;
  double t8214;
  double t8215;
  double t8220;
  double t8222;
  double t8228;
  double t8236;
  double t8243;
  double t8252;
  double t8261;
  double t8272;
  double t8276;
  double t8277;
  double t8279;
  double t8280;
  double t8281;
  double t8282;
  double t8284;
  double t8286;
  double t8287;
  double t1167;
  double t1665;
  double t2925;
  double t3379;
  double t3787;
  double t4464;
  double t5107;
  double t5461;
  double t6143;
  double t6798;
  double t6845;
  double t6857;
  double t6874;
  double t6942;
  double t6989;
  double t7044;
  double t7161;
  double t7312;
  double t7796;
  double t7832;
  double t7866;
  double t7909;
  double t7918;
  double t7976;
  double t8013;
  double t8103;
  double t8133;
  double t8161;
  double t8172;
  double t8173;
  double t8174;
  double t8175;
  double t8178;
  double t8183;
  double t8184;
  double t8190;
  double t8322;
  double t8326;
  double t8328;
  double t8302;
  double t8320;
  double t8321;
  double t8329;
  double t8331;
  double t8332;
  double t8313;
  double t8335;
  double t8336;
  double t8342;
  double t8348;
  double t8349;
  double t8350;
  double t8359;
  double t8360;
  double t8361;
  double t8366;
  double t8368;
  double t8369;
  double t8376;
  double t8377;
  double t8378;
  double t8388;
  double t8389;
  double t8390;
  double t8392;
  double t8394;
  double t8395;
  double t8401;
  double t8402;
  double t8403;
  double t8411;
  double t8412;
  double t8414;
  double t8417;
  double t8419;
  double t8420;
  double t8428;
  double t8429;
  double t8432;
  double t8440;
  double t8441;
  double t8442;
  double t8445;
  double t8446;
  double t8447;
  double t8451;
  double t8452;
  double t8453;
  t30 = Cos(var1[0]);
  t73 = Cos(var1[1]);
  t258 = Sin(var1[1]);
  t623 = Cos(var1[2]);
  t713 = -1.*t623;
  t874 = 1. + t713;
  t1084 = Sin(var1[2]);
  t1422 = Sin(var1[0]);
  t1666 = Cos(var1[3]);
  t1698 = -1.*t1666;
  t1933 = 1. + t1698;
  t2027 = Sin(var1[3]);
  t2674 = t30*t623*t258;
  t2747 = -1.*t1422*t1084;
  t2825 = t2674 + t2747;
  t3310 = -1.*t623*t1422;
  t3315 = -1.*t30*t258*t1084;
  t3374 = t3310 + t3315;
  t3384 = Cos(var1[4]);
  t3401 = -1.*t3384;
  t3441 = 1. + t3401;
  t3500 = Sin(var1[4]);
  t3767 = -1.*t2027*t2825;
  t3770 = t1666*t3374;
  t3777 = t3767 + t3770;
  t4261 = t1666*t2825;
  t4441 = t2027*t3374;
  t4460 = t4261 + t4441;
  t4473 = Cos(var1[5]);
  t4534 = -1.*t4473;
  t4627 = 1. + t4534;
  t4710 = Sin(var1[5]);
  t4895 = t3500*t3777;
  t4900 = t3384*t4460;
  t5080 = t4895 + t4900;
  t5351 = t3384*t3777;
  t5362 = -1.*t3500*t4460;
  t5389 = t5351 + t5362;
  t5732 = Cos(var1[6]);
  t5765 = -1.*t5732;
  t5782 = 1. + t5765;
  t5830 = Sin(var1[6]);
  t5937 = -1.*t4710*t5080;
  t5993 = t4473*t5389;
  t6125 = t5937 + t5993;
  t6625 = t4473*t5080;
  t6680 = t4710*t5389;
  t6794 = t6625 + t6680;
  t118 = -1.*t73;
  t191 = 1. + t118;
  t251 = 0.135*t191;
  t348 = 0.049*t258;
  t424 = 0. + t251 + t348;
  t1070 = -0.049*t874;
  t1150 = -0.09*t1084;
  t1161 = 0. + t1070 + t1150;
  t1492 = -0.09*t874;
  t1604 = 0.049*t1084;
  t1632 = 0. + t1492 + t1604;
  t1991 = -0.049*t1933;
  t2304 = -0.21*t2027;
  t2398 = 0. + t1991 + t2304;
  t2952 = -0.21*t1933;
  t2968 = 0.049*t2027;
  t3256 = 0. + t2952 + t2968;
  t3481 = -0.2707*t3441;
  t3593 = 0.0016*t3500;
  t3683 = 0. + t3481 + t3593;
  t7860 = t623*t1422*t258;
  t7861 = t30*t1084;
  t7863 = t7860 + t7861;
  t7886 = t30*t623;
  t7897 = -1.*t1422*t258*t1084;
  t7908 = t7886 + t7897;
  t3897 = -0.0016*t3441;
  t3921 = -0.2707*t3500;
  t4015 = 0. + t3897 + t3921;
  t4701 = 0.0184*t4627;
  t4726 = -0.7055*t4710;
  t4784 = 0. + t4701 + t4726;
  t7911 = -1.*t2027*t7863;
  t7912 = t1666*t7908;
  t7913 = t7911 + t7912;
  t7925 = t1666*t7863;
  t7948 = t2027*t7908;
  t7974 = t7925 + t7948;
  t5231 = -0.7055*t4627;
  t5232 = -0.0184*t4710;
  t5320 = 0. + t5231 + t5232;
  t5804 = -1.1135*t5782;
  t5837 = 0.0216*t5830;
  t5895 = 0. + t5804 + t5837;
  t7984 = t3500*t7913;
  t7990 = t3384*t7974;
  t8011 = t7984 + t7990;
  t8031 = t3384*t7913;
  t8043 = -1.*t3500*t7974;
  t8080 = t8031 + t8043;
  t6270 = -0.0216*t5782;
  t6344 = -1.1135*t5830;
  t6453 = 0. + t6270 + t6344;
  t8119 = -1.*t4710*t8011;
  t8124 = t4473*t8080;
  t8130 = t8119 + t8124;
  t8140 = t4473*t8011;
  t8152 = t4710*t8080;
  t8157 = t8140 + t8152;
  t8202 = -1.*t1422;
  t8205 = 0. + t8202;
  t8223 = -1.*t73*t623*t2027;
  t8225 = -1.*t1666*t73*t1084;
  t8226 = t8223 + t8225;
  t8229 = t1666*t73*t623;
  t8233 = -1.*t73*t2027*t1084;
  t8235 = t8229 + t8233;
  t8237 = t3500*t8226;
  t8239 = t3384*t8235;
  t8241 = t8237 + t8239;
  t8244 = t3384*t8226;
  t8248 = -1.*t3500*t8235;
  t8249 = t8244 + t8248;
  t8255 = -1.*t4710*t8241;
  t8256 = t4473*t8249;
  t8260 = t8255 + t8256;
  t8267 = t4473*t8241;
  t8268 = t4710*t8249;
  t8271 = t8267 + t8268;
  t8199 = -1.*t30;
  t8200 = 0. + t8199;
  t8213 = 0.049*t73;
  t8214 = t73*t623*t2398;
  t8215 = 0.004500000000000004*t258;
  t8220 = t73*t1161;
  t8222 = -1.*t73*t3256*t1084;
  t8228 = t3683*t8226;
  t8236 = t4015*t8235;
  t8243 = t4784*t8241;
  t8252 = t5320*t8249;
  t8261 = t5895*t8260;
  t8272 = t6453*t8271;
  t8276 = t5830*t8260;
  t8277 = t5732*t8271;
  t8279 = t8276 + t8277;
  t8280 = 0.0306*t8279;
  t8281 = t5732*t8260;
  t8282 = -1.*t5830*t8271;
  t8284 = t8281 + t8282;
  t8286 = -1.1312*t8284;
  t8287 = 0. + t8213 + t8214 + t8215 + t8220 + t8222 + t8228 + t8236 + t8243 + t8252 + t8261 + t8272 + t8280 + t8286;
  t1167 = t30*t258*t1161;
  t1665 = -1.*t1422*t1632;
  t2925 = t2398*t2825;
  t3379 = t3256*t3374;
  t3787 = t3683*t3777;
  t4464 = t4015*t4460;
  t5107 = t4784*t5080;
  t5461 = t5320*t5389;
  t6143 = t5895*t6125;
  t6798 = t6453*t6794;
  t6845 = t5830*t6125;
  t6857 = t5732*t6794;
  t6874 = t6845 + t6857;
  t6942 = 0.0306*t6874;
  t6989 = t5732*t6125;
  t7044 = -1.*t5830*t6794;
  t7161 = t6989 + t7044;
  t7312 = -1.1312*t7161;
  t7796 = -1.*t1422*t258*t1161;
  t7832 = -1.*t30*t1632;
  t7866 = -1.*t2398*t7863;
  t7909 = -1.*t3256*t7908;
  t7918 = -1.*t3683*t7913;
  t7976 = -1.*t4015*t7974;
  t8013 = -1.*t4784*t8011;
  t8103 = -1.*t5320*t8080;
  t8133 = -1.*t5895*t8130;
  t8161 = -1.*t6453*t8157;
  t8172 = t5830*t8130;
  t8173 = t5732*t8157;
  t8174 = t8172 + t8173;
  t8175 = -0.0306*t8174;
  t8178 = t5732*t8130;
  t8183 = -1.*t5830*t8157;
  t8184 = t8178 + t8183;
  t8190 = 1.1312*t8184;
  t8322 = -1.*t30*t73;
  t8326 = 0. + t8322;
  t8328 = 0. + t258;
  t8302 = -0.004500000000000004*t30*t73;
  t8320 = t73*t1422;
  t8321 = 0. + t8320;
  t8329 = 0.049*t73*t623;
  t8331 = -0.09*t73*t1084;
  t8332 = 0. + t8329 + t8214 + t8215 + t8331 + t8222 + t8228 + t8236 + t8243 + t8252 + t8261 + t8272 + t8280 + t8286;
  t8313 = 0.004500000000000004*t73*t1422;
  t8335 = 0.049*t2825;
  t8336 = 0.09*t3374;
  t8342 = 0. + t8302 + t8335 + t2925 + t8336 + t3379 + t3787 + t4464 + t5107 + t5461 + t6143 + t6798 + t6942 + t7312;
  t8348 = -0.049*t7863;
  t8349 = -0.09*t7908;
  t8350 = 0. + t8313 + t8348 + t7866 + t8349 + t7909 + t7918 + t7976 + t8013 + t8103 + t8133 + t8161 + t8175 + t8190;
  t8359 = 0.21*t8226;
  t8360 = 0.049*t8235;
  t8361 = 0. + t8359 + t8228 + t8360 + t8236 + t8243 + t8252 + t8261 + t8272 + t8280 + t8286;
  t8366 = 0.21*t3777;
  t8368 = 0.049*t4460;
  t8369 = 0. + t8366 + t3787 + t8368 + t4464 + t5107 + t5461 + t6143 + t6798 + t6942 + t7312;
  t8376 = -0.21*t7913;
  t8377 = -0.049*t7974;
  t8378 = 0. + t8376 + t7918 + t8377 + t7976 + t8013 + t8103 + t8133 + t8161 + t8175 + t8190;
  t8388 = 0.0016*t8241;
  t8389 = 0.2707*t8249;
  t8390 = 0. + t8388 + t8243 + t8389 + t8252 + t8261 + t8272 + t8280 + t8286;
  t8392 = 0.0016*t5080;
  t8394 = 0.2707*t5389;
  t8395 = 0. + t8392 + t5107 + t8394 + t5461 + t6143 + t6798 + t6942 + t7312;
  t8401 = -0.0016*t8011;
  t8402 = -0.2707*t8080;
  t8403 = 0. + t8401 + t8013 + t8402 + t8103 + t8133 + t8161 + t8175 + t8190;
  t8411 = 0.7055*t8260;
  t8412 = -0.0184*t8271;
  t8414 = 0. + t8411 + t8261 + t8412 + t8272 + t8280 + t8286;
  t8417 = 0.7055*t6125;
  t8419 = -0.0184*t6794;
  t8420 = 0. + t8417 + t6143 + t8419 + t6798 + t6942 + t7312;
  t8428 = -0.7055*t8130;
  t8429 = 0.0184*t8157;
  t8432 = 0. + t8428 + t8133 + t8429 + t8161 + t8175 + t8190;
  t8440 = 0.052199999999999996*t8279;
  t8441 = -0.01770000000000005*t8284;
  t8442 = 0. + t8440 + t8441;
  t8445 = 0.052199999999999996*t6874;
  t8446 = -0.01770000000000005*t7161;
  t8447 = 0. + t8445 + t8446;
  t8451 = -0.052199999999999996*t8174;
  t8452 = 0.01770000000000005*t8184;
  t8453 = 0. + t8451 + t8452;
  p_output1[0]=0.;
  p_output1[1]=0.;
  p_output1[2]=1.;
  p_output1[3]=0. - 1.*(0. + t1167 + t1665 + t2925 - 0.135*t30 + t3379 + t3787 + t30*t424 + t4464 + t5107 + t5461 + t6143 + t6798 + t6942 + 0.1305*t30*t73 + t7312);
  p_output1[4]=0. + 0.135*t1422 - 1.*t1422*t424 - 0.1305*t1422*t73 + t7796 + t7832 + t7866 + t7909 + t7918 + t7976 + t8013 + t8103 + t8133 + t8161 + t8175 + t8190;
  p_output1[5]=0.;
  p_output1[6]=t8200;
  p_output1[7]=t8205;
  p_output1[8]=0.;
  p_output1[9]=0. + t8205*t8287;
  p_output1[10]=0. - 1.*t8200*t8287;
  p_output1[11]=t8200*(0. + t1167 - 0.09*t1422 + t1665 + t2925 + 0.049*t258*t30 + t3379 + t3787 + t4464 + t5107 + t5461 + t6143 + t6798 + t6942 + t7312 + t8302) - 1.*t8205*(0. - 0.049*t1422*t258 - 0.09*t30 + t7796 + t7832 + t7866 + t7909 + t7918 + t7976 + t8013 + t8103 + t8133 + t8161 + t8175 + t8190 + t8313);
  p_output1[12]=t8321;
  p_output1[13]=t8326;
  p_output1[14]=t8328;
  p_output1[15]=t8326*t8332 - 1.*t8328*t8342;
  p_output1[16]=-1.*t8321*t8332 + t8328*t8350;
  p_output1[17]=t8321*t8342 - 1.*t8326*t8350;
  p_output1[18]=t8321;
  p_output1[19]=t8326;
  p_output1[20]=t8328;
  p_output1[21]=t8326*t8361 - 1.*t8328*t8369;
  p_output1[22]=-1.*t8321*t8361 + t8328*t8378;
  p_output1[23]=t8321*t8369 - 1.*t8326*t8378;
  p_output1[24]=t8321;
  p_output1[25]=t8326;
  p_output1[26]=t8328;
  p_output1[27]=t8326*t8390 - 1.*t8328*t8395;
  p_output1[28]=-1.*t8321*t8390 + t8328*t8403;
  p_output1[29]=t8321*t8395 - 1.*t8326*t8403;
  p_output1[30]=t8321;
  p_output1[31]=t8326;
  p_output1[32]=t8328;
  p_output1[33]=t8326*t8414 - 1.*t8328*t8420;
  p_output1[34]=-1.*t8321*t8414 + t8328*t8432;
  p_output1[35]=t8321*t8420 - 1.*t8326*t8432;
  p_output1[36]=t8321;
  p_output1[37]=t8326;
  p_output1[38]=t8328;
  p_output1[39]=t8326*t8442 - 1.*t8328*t8447;
  p_output1[40]=-1.*t8321*t8442 + t8328*t8453;
  p_output1[41]=t8321*t8447 - 1.*t8326*t8453;
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



void J_MultisenseIMU_to_LeftToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
