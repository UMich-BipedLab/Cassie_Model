/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:37:44 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_LeftToeBottom_to_RightToeBottom.h"

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
static void output1(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  double t828;
  double t1087;
  double t850;
  double t1012;
  double t1157;
  double t1222;
  double t1050;
  double t1159;
  double t1189;
  double t826;
  double t1241;
  double t1274;
  double t1285;
  double t1325;
  double t1204;
  double t1307;
  double t1318;
  double t799;
  double t1363;
  double t1402;
  double t1448;
  double t1674;
  double t1324;
  double t1481;
  double t1506;
  double t791;
  double t1817;
  double t1837;
  double t1903;
  double t2254;
  double t2081;
  double t2137;
  double t2221;
  double t2269;
  double t2295;
  double t2335;
  double t2340;
  double t2344;
  double t2309;
  double t2363;
  double t2382;
  double t2426;
  double t2430;
  double t2435;
  double t2405;
  double t2465;
  double t2470;
  double t2563;
  double t2612;
  double t2615;
  double t2471;
  double t2638;
  double t2639;
  double t2753;
  double t2754;
  double t2858;
  double t1561;
  double t1912;
  double t1928;
  double t1961;
  double t1964;
  double t2022;
  double t2676;
  double t2926;
  double t2929;
  double t2994;
  double t2998;
  double t3011;
  double t3189;
  double t3212;
  double t3236;
  double t3243;
  double t3248;
  double t3278;
  double t3237;
  double t3344;
  double t3349;
  double t3378;
  double t3390;
  double t3423;
  double t3354;
  double t3476;
  double t3494;
  double t3530;
  double t3585;
  double t3596;
  double t3505;
  double t3625;
  double t3691;
  double t3756;
  double t3809;
  double t3850;
  double t3063;
  double t3079;
  double t3091;
  double t2966;
  double t3025;
  double t3042;
  double t3705;
  double t3897;
  double t3945;
  double t4016;
  double t4039;
  double t4099;
  double t1945;
  double t2047;
  double t2063;
  double t3094;
  double t3105;
  double t3109;
  double t3058;
  double t3166;
  double t356;
  double t4351;
  double t4409;
  double t4445;
  double t4007;
  double t4136;
  double t4197;
  double t4221;
  double t4253;
  double t4320;
  double t4335;
  double t4456;
  double t4519;
  double t4536;
  double t4650;
  double t4662;
  double t4724;
  double t4727;
  double t4797;
  double t740;
  double t5003;
  double t4851;
  double t5870;
  double t5947;
  double t5868;
  double t6035;
  double t6091;
  double t6114;
  double t5919;
  double t5978;
  double t6001;
  double t6127;
  double t5862;
  double t6329;
  double t6335;
  double t6353;
  double t6032;
  double t6192;
  double t6199;
  double t6379;
  double t5841;
  double t6463;
  double t6483;
  double t6505;
  double t6255;
  double t6387;
  double t6437;
  double t6523;
  double t5840;
  double t6573;
  double t6588;
  double t6642;
  double t6449;
  double t6538;
  double t6551;
  double t6647;
  double t3170;
  double t6885;
  double t6891;
  double t6903;
  double t6793;
  double t6809;
  double t6833;
  double t6939;
  double t6950;
  double t6960;
  double t6837;
  double t6913;
  double t6926;
  double t6987;
  double t6993;
  double t7011;
  double t6938;
  double t6970;
  double t6977;
  double t7072;
  double t7123;
  double t7132;
  double t6985;
  double t7017;
  double t7044;
  double t4885;
  double t4913;
  double t4941;
  double t7275;
  double t7278;
  double t7304;
  double t7220;
  double t7238;
  double t7270;
  double t7324;
  double t7331;
  double t7337;
  double t7274;
  double t7306;
  double t7311;
  double t7383;
  double t7388;
  double t7395;
  double t7313;
  double t7348;
  double t7352;
  double t5020;
  double t5059;
  double t5140;
  double t6567;
  double t6652;
  double t6659;
  double t6685;
  double t6709;
  double t6720;
  double t6742;
  double t6748;
  double t6754;
  double t5315;
  double t5320;
  double t5377;
  double t7368;
  double t7409;
  double t7419;
  double t7437;
  double t7440;
  double t7449;
  double t7457;
  double t7458;
  double t7475;
  double t5427;
  double t5509;
  double t5557;
  double t7049;
  double t7147;
  double t7153;
  double t7154;
  double t7171;
  double t7172;
  double t7189;
  double t7203;
  double t7206;
  double t5577;
  double t5579;
  double t5594;
  double t5628;
  double t5656;
  double t5657;
  double t5704;
  double t5778;
  double t5793;
  double t5824;
  double t7644;
  double t7652;
  double t7666;
  double t7721;
  double t7723;
  double t7750;
  double t7703;
  double t7704;
  double t7710;
  t828 = Cos(var1[1]);
  t1087 = Cos(var1[3]);
  t850 = Cos(var1[2]);
  t1012 = Sin(var1[3]);
  t1157 = Sin(var1[2]);
  t1222 = Cos(var1[4]);
  t1050 = -1.*t828*t850*t1012;
  t1159 = -1.*t1087*t828*t1157;
  t1189 = t1050 + t1159;
  t826 = Sin(var1[4]);
  t1241 = t1087*t828*t850;
  t1274 = -1.*t828*t1012*t1157;
  t1285 = t1241 + t1274;
  t1325 = Cos(var1[5]);
  t1204 = t826*t1189;
  t1307 = t1222*t1285;
  t1318 = t1204 + t1307;
  t799 = Sin(var1[5]);
  t1363 = t1222*t1189;
  t1402 = -1.*t826*t1285;
  t1448 = t1363 + t1402;
  t1674 = Cos(var1[6]);
  t1324 = -1.*t799*t1318;
  t1481 = t1325*t1448;
  t1506 = t1324 + t1481;
  t791 = Sin(var1[6]);
  t1817 = t1325*t1318;
  t1837 = t799*t1448;
  t1903 = t1817 + t1837;
  t2254 = Sin(var1[0]);
  t2081 = Cos(var1[0]);
  t2137 = Sin(var1[1]);
  t2221 = t2081*t850*t2137;
  t2269 = -1.*t2254*t1157;
  t2295 = t2221 + t2269;
  t2335 = -1.*t850*t2254;
  t2340 = -1.*t2081*t2137*t1157;
  t2344 = t2335 + t2340;
  t2309 = -1.*t1012*t2295;
  t2363 = t1087*t2344;
  t2382 = t2309 + t2363;
  t2426 = t1087*t2295;
  t2430 = t1012*t2344;
  t2435 = t2426 + t2430;
  t2405 = t826*t2382;
  t2465 = t1222*t2435;
  t2470 = t2405 + t2465;
  t2563 = t1222*t2382;
  t2612 = -1.*t826*t2435;
  t2615 = t2563 + t2612;
  t2471 = -1.*t799*t2470;
  t2638 = t1325*t2615;
  t2639 = t2471 + t2638;
  t2753 = t1325*t2470;
  t2754 = t799*t2615;
  t2858 = t2753 + t2754;
  t1561 = t791*t1506;
  t1912 = t1674*t1903;
  t1928 = t1561 + t1912;
  t1961 = t1674*t1506;
  t1964 = -1.*t791*t1903;
  t2022 = t1961 + t1964;
  t2676 = t791*t2639;
  t2926 = t1674*t2858;
  t2929 = t2676 + t2926;
  t2994 = t1674*t2639;
  t2998 = -1.*t791*t2858;
  t3011 = t2994 + t2998;
  t3189 = t850*t2254*t2137;
  t3212 = t2081*t1157;
  t3236 = t3189 + t3212;
  t3243 = t2081*t850;
  t3248 = -1.*t2254*t2137*t1157;
  t3278 = t3243 + t3248;
  t3237 = -1.*t1012*t3236;
  t3344 = t1087*t3278;
  t3349 = t3237 + t3344;
  t3378 = t1087*t3236;
  t3390 = t1012*t3278;
  t3423 = t3378 + t3390;
  t3354 = t826*t3349;
  t3476 = t1222*t3423;
  t3494 = t3354 + t3476;
  t3530 = t1222*t3349;
  t3585 = -1.*t826*t3423;
  t3596 = t3530 + t3585;
  t3505 = -1.*t799*t3494;
  t3625 = t1325*t3596;
  t3691 = t3505 + t3625;
  t3756 = t1325*t3494;
  t3809 = t799*t3596;
  t3850 = t3756 + t3809;
  t3063 = -0.766044*t1928;
  t3079 = 0.642788*t2022;
  t3091 = t3063 + t3079;
  t2966 = -0.766044*t2929;
  t3025 = 0.642788*t3011;
  t3042 = t2966 + t3025;
  t3705 = t791*t3691;
  t3897 = t1674*t3850;
  t3945 = t3705 + t3897;
  t4016 = t1674*t3691;
  t4039 = -1.*t791*t3850;
  t4099 = t4016 + t4039;
  t1945 = 0.642788*t1928;
  t2047 = 0.766044*t2022;
  t2063 = t1945 + t2047;
  t3094 = 0.642788*t2929;
  t3105 = 0.766044*t3011;
  t3109 = t3094 + t3105;
  t3058 = t2063*t3042;
  t3166 = -1.*t3091*t3109;
  t356 = Cos(var1[8]);
  t4351 = -0.766044*t3945;
  t4409 = 0.642788*t4099;
  t4445 = t4351 + t4409;
  t4007 = 0.642788*t3945;
  t4136 = 0.766044*t4099;
  t4197 = t4007 + t4136;
  t4221 = t2081*t828*t3091;
  t4253 = t2137*t3042;
  t4320 = t4221 + t4253;
  t4335 = -1.*t4197*t4320;
  t4456 = t2081*t828*t2063;
  t4519 = t2137*t3109;
  t4536 = t4456 + t4519;
  t4650 = t4445*t4536;
  t4662 = t3058 + t3166;
  t4724 = -1.*t828*t2254*t4662;
  t4727 = 0. + t4335 + t4650 + t4724;
  t4797 = 1/t4727;
  t740 = Sin(var1[7]);
  t5003 = Sin(var1[8]);
  t4851 = Cos(var1[7]);
  t5870 = Cos(var1[9]);
  t5947 = Sin(var1[9]);
  t5868 = Cos(var1[10]);
  t6035 = t4851*t5870;
  t6091 = -1.*t740*t5003*t5947;
  t6114 = t6035 + t6091;
  t5919 = t5870*t740*t5003;
  t5978 = t4851*t5947;
  t6001 = t5919 + t5978;
  t6127 = Sin(var1[10]);
  t5862 = Cos(var1[11]);
  t6329 = t5868*t6114;
  t6335 = -1.*t6001*t6127;
  t6353 = t6329 + t6335;
  t6032 = t5868*t6001;
  t6192 = t6114*t6127;
  t6199 = t6032 + t6192;
  t6379 = Sin(var1[11]);
  t5841 = Cos(var1[12]);
  t6463 = t5862*t6353;
  t6483 = -1.*t6199*t6379;
  t6505 = t6463 + t6483;
  t6255 = t5862*t6199;
  t6387 = t6353*t6379;
  t6437 = t6255 + t6387;
  t6523 = Sin(var1[12]);
  t5840 = Cos(var1[13]);
  t6573 = t5841*t6505;
  t6588 = -1.*t6437*t6523;
  t6642 = t6573 + t6588;
  t6449 = t5841*t6437;
  t6538 = t6505*t6523;
  t6551 = t6449 + t6538;
  t6647 = Sin(var1[13]);
  t3170 = 0. + t3058 + t3166;
  t6885 = -1.*t5870*t740;
  t6891 = -1.*t4851*t5003*t5947;
  t6903 = t6885 + t6891;
  t6793 = t4851*t5870*t5003;
  t6809 = -1.*t740*t5947;
  t6833 = t6793 + t6809;
  t6939 = t5868*t6903;
  t6950 = -1.*t6833*t6127;
  t6960 = t6939 + t6950;
  t6837 = t5868*t6833;
  t6913 = t6903*t6127;
  t6926 = t6837 + t6913;
  t6987 = t5862*t6960;
  t6993 = -1.*t6926*t6379;
  t7011 = t6987 + t6993;
  t6938 = t5862*t6926;
  t6970 = t6960*t6379;
  t6977 = t6938 + t6970;
  t7072 = t5841*t7011;
  t7123 = -1.*t6977*t6523;
  t7132 = t7072 + t7123;
  t6985 = t5841*t6977;
  t7017 = t7011*t6523;
  t7044 = t6985 + t7017;
  t4885 = -1.*t2063*t4445;
  t4913 = t3091*t4197;
  t4941 = 0. + t4885 + t4913;
  t7275 = -1.*t356*t5868*t5947;
  t7278 = -1.*t356*t5870*t6127;
  t7304 = t7275 + t7278;
  t7220 = t356*t5870*t5868;
  t7238 = -1.*t356*t5947*t6127;
  t7270 = t7220 + t7238;
  t7324 = t5862*t7304;
  t7331 = -1.*t7270*t6379;
  t7337 = t7324 + t7331;
  t7274 = t5862*t7270;
  t7306 = t7304*t6379;
  t7311 = t7274 + t7306;
  t7383 = t5841*t7337;
  t7388 = -1.*t7311*t6523;
  t7395 = t7383 + t7388;
  t7313 = t5841*t7311;
  t7348 = t7337*t6523;
  t7352 = t7313 + t7348;
  t5020 = t3109*t4445;
  t5059 = -1.*t3042*t4197;
  t5140 = 0. + t5020 + t5059;
  t6567 = t5840*t6551;
  t6652 = t6642*t6647;
  t6659 = t6567 + t6652;
  t6685 = 0.642788*t6659;
  t6709 = t5840*t6642;
  t6720 = -1.*t6551*t6647;
  t6742 = t6709 + t6720;
  t6748 = 0.766044*t6742;
  t6754 = t6685 + t6748;
  t5315 = -1.*t2081*t828*t3091;
  t5320 = -1.*t2137*t3042;
  t5377 = 0. + t5315 + t5320;
  t7368 = t5840*t7352;
  t7409 = t7395*t6647;
  t7419 = t7368 + t7409;
  t7437 = 0.642788*t7419;
  t7440 = t5840*t7395;
  t7449 = -1.*t7352*t6647;
  t7457 = t7440 + t7449;
  t7458 = 0.766044*t7457;
  t7475 = t7437 + t7458;
  t5427 = -1.*t828*t2254*t3042;
  t5509 = t2081*t828*t4445;
  t5557 = 0. + t5427 + t5509;
  t7049 = t5840*t7044;
  t7147 = t7132*t6647;
  t7153 = t7049 + t7147;
  t7154 = 0.642788*t7153;
  t7171 = t5840*t7132;
  t7172 = -1.*t7044*t6647;
  t7189 = t7171 + t7172;
  t7203 = 0.766044*t7189;
  t7206 = t7154 + t7203;
  t5577 = t828*t2254*t3091;
  t5579 = t2137*t4445;
  t5594 = 0. + t5577 + t5579;
  t5628 = 0. + t4456 + t4519;
  t5656 = t828*t2254*t3109;
  t5657 = -1.*t2081*t828*t4197;
  t5704 = 0. + t5656 + t5657;
  t5778 = -1.*t828*t2254*t2063;
  t5793 = -1.*t2137*t4197;
  t5824 = 0. + t5778 + t5793;
  t7644 = -0.766044*t6659;
  t7652 = 0.642788*t6742;
  t7666 = t7644 + t7652;
  t7721 = -0.766044*t7419;
  t7723 = 0.642788*t7457;
  t7750 = t7721 + t7723;
  t7703 = -0.766044*t7153;
  t7704 = 0.642788*t7189;
  t7710 = t7703 + t7704;

  p_output1(0)=0. - 1.*t356*t4797*t4851*t4941 + t4797*t5003*t5140 - 1.*t3170*t356*t4797*t740;
  p_output1(1)=0. + t4797*t5003*t5557 - 1.*t356*t4797*t4851*t5594 - 1.*t356*t4797*t5377*t740;
  p_output1(2)=0. + t4797*t5003*t5704 - 1.*t356*t4797*t4851*t5824 - 1.*t356*t4797*t5628*t740;
  p_output1(3)=0. + t3170*t4797*t6754 + t4797*t4941*t7206 + t4797*t5140*t7475;
  p_output1(4)=0. + t4797*t5377*t6754 + t4797*t5594*t7206 + t4797*t5557*t7475;
  p_output1(5)=0. + t4797*t5628*t6754 + t4797*t5824*t7206 + t4797*t5704*t7475;
  p_output1(6)=0. + t3170*t4797*t7666 + t4797*t4941*t7710 + t4797*t5140*t7750;
  p_output1(7)=0. + t4797*t5377*t7666 + t4797*t5594*t7710 + t4797*t5557*t7750;
  p_output1(8)=0. + t4797*t5628*t7666 + t4797*t5824*t7710 + t4797*t5704*t7750;
}


       
void R_LeftToeBottom_to_RightToeBottom(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
