/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:17:22 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "J_VectorNav_to_LeftToeBottom_src.h"

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
  double t18;
  double t87;
  double t218;
  double t443;
  double t444;
  double t477;
  double t561;
  double t822;
  double t887;
  double t889;
  double t892;
  double t907;
  double t1067;
  double t1089;
  double t1105;
  double t1472;
  double t1477;
  double t1614;
  double t1838;
  double t1884;
  double t1974;
  double t2209;
  double t2336;
  double t2348;
  double t2412;
  double t2751;
  double t2755;
  double t2852;
  double t3403;
  double t3469;
  double t3474;
  double t3487;
  double t3657;
  double t3661;
  double t3664;
  double t4040;
  double t4069;
  double t4080;
  double t4299;
  double t4455;
  double t4486;
  double t4553;
  double t4685;
  double t4692;
  double t4798;
  double t5007;
  double t5045;
  double t5056;
  double t98;
  double t109;
  double t197;
  double t243;
  double t435;
  double t521;
  double t585;
  double t651;
  double t841;
  double t846;
  double t864;
  double t906;
  double t1053;
  double t1055;
  double t1285;
  double t1286;
  double t1373;
  double t2020;
  double t2277;
  double t2282;
  double t5922;
  double t5932;
  double t5936;
  double t6217;
  double t6324;
  double t6342;
  double t2510;
  double t2526;
  double t2596;
  double t3479;
  double t3615;
  double t3648;
  double t6407;
  double t6432;
  double t6435;
  double t6452;
  double t6486;
  double t6508;
  double t3814;
  double t3928;
  double t3937;
  double t4527;
  double t4559;
  double t4598;
  double t6520;
  double t6542;
  double t6561;
  double t6611;
  double t6619;
  double t6622;
  double t4877;
  double t4979;
  double t4990;
  double t6641;
  double t6646;
  double t6678;
  double t6759;
  double t6834;
  double t6844;
  double t7204;
  double t7205;
  double t5799;
  double t5892;
  double t6169;
  double t6390;
  double t6437;
  double t6513;
  double t6592;
  double t6623;
  double t6681;
  double t6851;
  double t6949;
  double t7006;
  double t7027;
  double t7093;
  double t7145;
  double t7173;
  double t7175;
  double t7188;
  double t7198;
  double t809;
  double t871;
  double t1106;
  double t1653;
  double t2464;
  double t2996;
  double t3748;
  double t4189;
  double t4836;
  double t5187;
  double t5203;
  double t5204;
  double t5249;
  double t5276;
  double t5280;
  double t5287;
  double t5293;
  double t5446;
  double t7252;
  double t7255;
  double t7256;
  double t7264;
  double t7271;
  double t7273;
  double t7280;
  double t7283;
  double t7284;
  double t7293;
  double t7297;
  double t7299;
  double t7313;
  double t7315;
  double t7316;
  double t7325;
  double t7327;
  double t7330;
  double t7238;
  double t7241;
  double t7242;
  double t7244;
  double t7251;
  double t7257;
  double t7274;
  double t7290;
  double t7308;
  double t7317;
  double t7334;
  double t7338;
  double t7339;
  double t7344;
  double t7345;
  double t7349;
  double t7352;
  double t7353;
  double t7354;
  double t7359;
  double t7383;
  double t7386;
  double t7209;
  double t7375;
  double t7381;
  double t7231;
  double t7374;
  double t7395;
  double t7396;
  double t7397;
  double t7402;
  double t7403;
  double t7404;
  double t7387;
  double t7389;
  double t7393;
  double t7424;
  double t7425;
  double t7426;
  double t7431;
  double t7434;
  double t7438;
  double t7418;
  double t7420;
  double t7421;
  double t7469;
  double t7474;
  double t7476;
  double t7485;
  double t7487;
  double t7488;
  double t7455;
  double t7457;
  double t7461;
  double t7507;
  double t7511;
  double t7513;
  double t7531;
  double t7532;
  double t7535;
  double t7502;
  double t7503;
  double t7505;
  double t7588;
  double t7594;
  double t7596;
  double t7600;
  double t7604;
  double t7605;
  double t7564;
  double t7574;
  double t7583;
  t18 = Sin(var1[0]);
  t87 = Cos(var1[1]);
  t218 = Sin(var1[1]);
  t443 = Cos(var1[2]);
  t444 = -1.*t443;
  t477 = 1. + t444;
  t561 = Sin(var1[2]);
  t822 = Cos(var1[0]);
  t887 = Cos(var1[3]);
  t889 = -1.*t887;
  t892 = 1. + t889;
  t907 = Sin(var1[3]);
  t1067 = t443*t18*t218;
  t1089 = t822*t561;
  t1105 = t1067 + t1089;
  t1472 = t822*t443;
  t1477 = -1.*t18*t218*t561;
  t1614 = t1472 + t1477;
  t1838 = Cos(var1[4]);
  t1884 = -1.*t1838;
  t1974 = 1. + t1884;
  t2209 = Sin(var1[4]);
  t2336 = -1.*t907*t1105;
  t2348 = t887*t1614;
  t2412 = t2336 + t2348;
  t2751 = t887*t1105;
  t2755 = t907*t1614;
  t2852 = t2751 + t2755;
  t3403 = Cos(var1[5]);
  t3469 = -1.*t3403;
  t3474 = 1. + t3469;
  t3487 = Sin(var1[5]);
  t3657 = t2209*t2412;
  t3661 = t1838*t2852;
  t3664 = t3657 + t3661;
  t4040 = t1838*t2412;
  t4069 = -1.*t2209*t2852;
  t4080 = t4040 + t4069;
  t4299 = Cos(var1[6]);
  t4455 = -1.*t4299;
  t4486 = 1. + t4455;
  t4553 = Sin(var1[6]);
  t4685 = -1.*t3487*t3664;
  t4692 = t3403*t4080;
  t4798 = t4685 + t4692;
  t5007 = t3403*t3664;
  t5045 = t3487*t4080;
  t5056 = t5007 + t5045;
  t98 = -1.*t87;
  t109 = 1. + t98;
  t197 = 0.135*t109;
  t243 = 0.049*t218;
  t435 = 0. + t197 + t243;
  t521 = -0.049*t477;
  t585 = -0.09*t561;
  t651 = 0. + t521 + t585;
  t841 = -0.09*t477;
  t846 = 0.049*t561;
  t864 = 0. + t841 + t846;
  t906 = -0.049*t892;
  t1053 = -0.21*t907;
  t1055 = 0. + t906 + t1053;
  t1285 = -0.21*t892;
  t1286 = 0.049*t907;
  t1373 = 0. + t1285 + t1286;
  t2020 = -0.2707*t1974;
  t2277 = 0.0016*t2209;
  t2282 = 0. + t2020 + t2277;
  t5922 = t822*t443*t218;
  t5932 = -1.*t18*t561;
  t5936 = t5922 + t5932;
  t6217 = -1.*t443*t18;
  t6324 = -1.*t822*t218*t561;
  t6342 = t6217 + t6324;
  t2510 = -0.0016*t1974;
  t2526 = -0.2707*t2209;
  t2596 = 0. + t2510 + t2526;
  t3479 = 0.0184*t3474;
  t3615 = -0.7055*t3487;
  t3648 = 0. + t3479 + t3615;
  t6407 = -1.*t907*t5936;
  t6432 = t887*t6342;
  t6435 = t6407 + t6432;
  t6452 = t887*t5936;
  t6486 = t907*t6342;
  t6508 = t6452 + t6486;
  t3814 = -0.7055*t3474;
  t3928 = -0.0184*t3487;
  t3937 = 0. + t3814 + t3928;
  t4527 = -1.1135*t4486;
  t4559 = 0.0216*t4553;
  t4598 = 0. + t4527 + t4559;
  t6520 = t2209*t6435;
  t6542 = t1838*t6508;
  t6561 = t6520 + t6542;
  t6611 = t1838*t6435;
  t6619 = -1.*t2209*t6508;
  t6622 = t6611 + t6619;
  t4877 = -0.0216*t4486;
  t4979 = -1.1135*t4553;
  t4990 = 0. + t4877 + t4979;
  t6641 = -1.*t3487*t6561;
  t6646 = t3403*t6622;
  t6678 = t6641 + t6646;
  t6759 = t3403*t6561;
  t6834 = t3487*t6622;
  t6844 = t6759 + t6834;
  t7204 = -1.*t822;
  t7205 = 0. + t7204;
  t5799 = -1.*t822*t218*t651;
  t5892 = t18*t864;
  t6169 = -1.*t1055*t5936;
  t6390 = -1.*t1373*t6342;
  t6437 = -1.*t2282*t6435;
  t6513 = -1.*t2596*t6508;
  t6592 = -1.*t3648*t6561;
  t6623 = -1.*t3937*t6622;
  t6681 = -1.*t4598*t6678;
  t6851 = -1.*t4990*t6844;
  t6949 = t4553*t6678;
  t7006 = t4299*t6844;
  t7027 = t6949 + t7006;
  t7093 = -0.0306*t7027;
  t7145 = t4299*t6678;
  t7173 = -1.*t4553*t6844;
  t7175 = t7145 + t7173;
  t7188 = 1.1312*t7175;
  t7198 = 0. + t18;
  t809 = -1.*t18*t218*t651;
  t871 = -1.*t822*t864;
  t1106 = -1.*t1055*t1105;
  t1653 = -1.*t1373*t1614;
  t2464 = -1.*t2282*t2412;
  t2996 = -1.*t2596*t2852;
  t3748 = -1.*t3648*t3664;
  t4189 = -1.*t3937*t4080;
  t4836 = -1.*t4598*t4798;
  t5187 = -1.*t4990*t5056;
  t5203 = t4553*t4798;
  t5204 = t4299*t5056;
  t5249 = t5203 + t5204;
  t5276 = -0.0306*t5249;
  t5280 = t4299*t4798;
  t5287 = -1.*t4553*t5056;
  t5293 = t5280 + t5287;
  t5446 = 1.1312*t5293;
  t7252 = -1.*t87*t443*t907;
  t7255 = -1.*t887*t87*t561;
  t7256 = t7252 + t7255;
  t7264 = t887*t87*t443;
  t7271 = -1.*t87*t907*t561;
  t7273 = t7264 + t7271;
  t7280 = t2209*t7256;
  t7283 = t1838*t7273;
  t7284 = t7280 + t7283;
  t7293 = t1838*t7256;
  t7297 = -1.*t2209*t7273;
  t7299 = t7293 + t7297;
  t7313 = -1.*t3487*t7284;
  t7315 = t3403*t7299;
  t7316 = t7313 + t7315;
  t7325 = t3403*t7284;
  t7327 = t3487*t7299;
  t7330 = t7325 + t7327;
  t7238 = 0.049*t87;
  t7241 = t87*t443*t1055;
  t7242 = 0.004500000000000004*t218;
  t7244 = t87*t651;
  t7251 = -1.*t87*t1373*t561;
  t7257 = t2282*t7256;
  t7274 = t2596*t7273;
  t7290 = t3648*t7284;
  t7308 = t3937*t7299;
  t7317 = t4598*t7316;
  t7334 = t4990*t7330;
  t7338 = t4553*t7316;
  t7339 = t4299*t7330;
  t7344 = t7338 + t7339;
  t7345 = 0.0306*t7344;
  t7349 = t4299*t7316;
  t7352 = -1.*t4553*t7330;
  t7353 = t7349 + t7352;
  t7354 = -1.1312*t7353;
  t7359 = 0. + t7238 + t7241 + t7242 + t7244 + t7251 + t7257 + t7274 + t7290 + t7308 + t7317 + t7334 + t7345 + t7354;
  t7383 = t87*t18;
  t7386 = 0. + t7383;
  t7209 = 0.004500000000000004*t822*t87;
  t7375 = t822*t87;
  t7381 = 0. + t7375;
  t7231 = 0.004500000000000004*t87*t18;
  t7374 = 0. + t218;
  t7395 = -0.049*t1105;
  t7396 = -0.09*t1614;
  t7397 = 0. + t7231 + t7395 + t1106 + t7396 + t1653 + t2464 + t2996 + t3748 + t4189 + t4836 + t5187 + t5276 + t5446;
  t7402 = 0.049*t87*t443;
  t7403 = -0.09*t87*t561;
  t7404 = 0. + t7402 + t7241 + t7242 + t7403 + t7251 + t7257 + t7274 + t7290 + t7308 + t7317 + t7334 + t7345 + t7354;
  t7387 = -0.049*t5936;
  t7389 = -0.09*t6342;
  t7393 = 0. + t7209 + t7387 + t6169 + t7389 + t6390 + t6437 + t6513 + t6592 + t6623 + t6681 + t6851 + t7093 + t7188;
  t7424 = -0.21*t2412;
  t7425 = -0.049*t2852;
  t7426 = 0. + t7424 + t2464 + t7425 + t2996 + t3748 + t4189 + t4836 + t5187 + t5276 + t5446;
  t7431 = 0.21*t7256;
  t7434 = 0.049*t7273;
  t7438 = 0. + t7431 + t7257 + t7434 + t7274 + t7290 + t7308 + t7317 + t7334 + t7345 + t7354;
  t7418 = -0.21*t6435;
  t7420 = -0.049*t6508;
  t7421 = 0. + t7418 + t6437 + t7420 + t6513 + t6592 + t6623 + t6681 + t6851 + t7093 + t7188;
  t7469 = -0.0016*t3664;
  t7474 = -0.2707*t4080;
  t7476 = 0. + t7469 + t3748 + t7474 + t4189 + t4836 + t5187 + t5276 + t5446;
  t7485 = 0.0016*t7284;
  t7487 = 0.2707*t7299;
  t7488 = 0. + t7485 + t7290 + t7487 + t7308 + t7317 + t7334 + t7345 + t7354;
  t7455 = -0.0016*t6561;
  t7457 = -0.2707*t6622;
  t7461 = 0. + t7455 + t6592 + t7457 + t6623 + t6681 + t6851 + t7093 + t7188;
  t7507 = -0.7055*t4798;
  t7511 = 0.0184*t5056;
  t7513 = 0. + t7507 + t4836 + t7511 + t5187 + t5276 + t5446;
  t7531 = 0.7055*t7316;
  t7532 = -0.0184*t7330;
  t7535 = 0. + t7531 + t7317 + t7532 + t7334 + t7345 + t7354;
  t7502 = -0.7055*t6678;
  t7503 = 0.0184*t6844;
  t7505 = 0. + t7502 + t6681 + t7503 + t6851 + t7093 + t7188;
  t7588 = -0.052199999999999996*t5249;
  t7594 = 0.01770000000000005*t5293;
  t7596 = 0. + t7588 + t7594;
  t7600 = 0.052199999999999996*t7344;
  t7604 = -0.01770000000000005*t7353;
  t7605 = 0. + t7600 + t7604;
  t7564 = -0.052199999999999996*t7027;
  t7574 = 0.01770000000000005*t7175;
  t7583 = 0. + t7564 + t7574;
  p_output1[0]=1.;
  p_output1[1]=0.;
  p_output1[2]=0.;
  p_output1[3]=0.;
  p_output1[4]=0. - 1.*(0. + t1106 + t1653 + 0.135*t18 + t2464 + t2996 + t3748 + t4189 - 1.*t18*t435 + t4836 + t5187 + t5276 + t5446 + t809 - 0.1305*t18*t87 + t871);
  p_output1[5]=0. + t5799 + t5892 + t6169 + t6390 + t6437 + t6513 + t6592 + t6623 + t6681 + t6851 + t7093 + t7188 + 0.135*t822 - 1.*t435*t822 - 0.1305*t822*t87;
  p_output1[6]=0.;
  p_output1[7]=t7198;
  p_output1[8]=t7205;
  p_output1[9]=-1.*t7205*(0. + 0.09*t18 + t5799 + t5892 + t6169 + t6390 + t6437 + t6513 + t6592 + t6623 + t6681 + t6851 + t7093 + t7188 + t7209 - 0.049*t218*t822) + t7198*(0. + t1106 + t1653 - 0.049*t18*t218 + t2464 + t2996 + t3748 + t4189 + t4836 + t5187 + t5276 + t5446 + t7231 + t809 - 0.09*t822 + t871);
  p_output1[10]=0. + t7205*t7359;
  p_output1[11]=0. - 1.*t7198*t7359;
  p_output1[12]=t7374;
  p_output1[13]=t7381;
  p_output1[14]=t7386;
  p_output1[15]=-1.*t7386*t7393 + t7381*t7397;
  p_output1[16]=-1.*t7374*t7397 + t7386*t7404;
  p_output1[17]=t7374*t7393 - 1.*t7381*t7404;
  p_output1[18]=t7374;
  p_output1[19]=t7381;
  p_output1[20]=t7386;
  p_output1[21]=-1.*t7386*t7421 + t7381*t7426;
  p_output1[22]=-1.*t7374*t7426 + t7386*t7438;
  p_output1[23]=t7374*t7421 - 1.*t7381*t7438;
  p_output1[24]=t7374;
  p_output1[25]=t7381;
  p_output1[26]=t7386;
  p_output1[27]=-1.*t7386*t7461 + t7381*t7476;
  p_output1[28]=-1.*t7374*t7476 + t7386*t7488;
  p_output1[29]=t7374*t7461 - 1.*t7381*t7488;
  p_output1[30]=t7374;
  p_output1[31]=t7381;
  p_output1[32]=t7386;
  p_output1[33]=-1.*t7386*t7505 + t7381*t7513;
  p_output1[34]=-1.*t7374*t7513 + t7386*t7535;
  p_output1[35]=t7374*t7505 - 1.*t7381*t7535;
  p_output1[36]=t7374;
  p_output1[37]=t7381;
  p_output1[38]=t7386;
  p_output1[39]=-1.*t7386*t7583 + t7381*t7596;
  p_output1[40]=-1.*t7374*t7596 + t7386*t7605;
  p_output1[41]=t7374*t7583 - 1.*t7381*t7605;
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



void J_VectorNav_to_LeftToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
