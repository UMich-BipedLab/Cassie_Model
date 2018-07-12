/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:37:45 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_LeftToeBottom_to_RightToeBottom.h"

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
static void output1(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  double t104;
  double t239;
  double t1025;
  double t1260;
  double t1307;
  double t1325;
  double t1372;
  double t1506;
  double t1892;
  double t1912;
  double t1928;
  double t2022;
  double t1817;
  double t1837;
  double t1868;
  double t2221;
  double t2281;
  double t2286;
  double t2519;
  double t2563;
  double t2572;
  double t2615;
  double t2445;
  double t2465;
  double t2495;
  double t2655;
  double t2676;
  double t2711;
  double t2941;
  double t2966;
  double t2994;
  double t3058;
  double t2926;
  double t2931;
  double t2934;
  double t3105;
  double t3106;
  double t3139;
  double t3378;
  double t3380;
  double t3390;
  double t3440;
  double t3344;
  double t3354;
  double t3357;
  double t3492;
  double t3502;
  double t3530;
  double t3897;
  double t4107;
  double t3930;
  double t3941;
  double t4141;
  double t4351;
  double t3996;
  double t4176;
  double t4263;
  double t3879;
  double t4357;
  double t4442;
  double t4494;
  double t4718;
  double t4286;
  double t4536;
  double t4650;
  double t3868;
  double t4727;
  double t4731;
  double t4759;
  double t5020;
  double t4664;
  double t4835;
  double t4964;
  double t3822;
  double t5036;
  double t5088;
  double t5103;
  double t5563;
  double t5394;
  double t5424;
  double t5478;
  double t5603;
  double t5644;
  double t5691;
  double t5704;
  double t5732;
  double t5656;
  double t5828;
  double t5840;
  double t5919;
  double t5937;
  double t5938;
  double t5910;
  double t5979;
  double t6005;
  double t6035;
  double t6046;
  double t6048;
  double t6032;
  double t6056;
  double t6068;
  double t6107;
  double t6114;
  double t6137;
  double t5001;
  double t5140;
  double t5177;
  double t5200;
  double t5220;
  double t5245;
  double t6073;
  double t6151;
  double t6153;
  double t6168;
  double t6192;
  double t6218;
  double t6371;
  double t6395;
  double t6398;
  double t6408;
  double t6447;
  double t6449;
  double t6407;
  double t6527;
  double t6534;
  double t6550;
  double t6561;
  double t6567;
  double t6538;
  double t6579;
  double t6609;
  double t6624;
  double t6640;
  double t6642;
  double t6618;
  double t6659;
  double t6685;
  double t6712;
  double t6742;
  double t6748;
  double t6277;
  double t6296;
  double t6308;
  double t6154;
  double t6233;
  double t6250;
  double t6709;
  double t6763;
  double t6793;
  double t6900;
  double t6903;
  double t6913;
  double t5197;
  double t5284;
  double t5339;
  double t6332;
  double t6343;
  double t6353;
  double t6255;
  double t6363;
  double t514;
  double t561;
  double t680;
  double t1154;
  double t1158;
  double t1327;
  double t1443;
  double t1452;
  double t1525;
  double t1526;
  double t1531;
  double t1961;
  double t2031;
  double t2140;
  double t2300;
  double t2382;
  double t2426;
  double t7404;
  double t7409;
  double t7427;
  double t7458;
  double t7481;
  double t7498;
  double t2593;
  double t2638;
  double t2639;
  double t2716;
  double t2787;
  double t2836;
  double t7519;
  double t7527;
  double t7537;
  double t7631;
  double t7643;
  double t7644;
  double t3025;
  double t3063;
  double t3079;
  double t3189;
  double t3217;
  double t3219;
  double t7652;
  double t7685;
  double t7695;
  double t7709;
  double t7710;
  double t7715;
  double t3422;
  double t3462;
  double t3476;
  double t3549;
  double t3564;
  double t3578;
  double t7721;
  double t7728;
  double t7750;
  double t7764;
  double t7766;
  double t7769;
  double t7011;
  double t7049;
  double t7072;
  double t6866;
  double t6938;
  double t6939;
  double t6958;
  double t6970;
  double t6985;
  double t6987;
  double t7073;
  double t7089;
  double t7096;
  double t7147;
  double t7153;
  double t7168;
  double t7189;
  double t7203;
  double t7977;
  double t7981;
  double t7983;
  double t8028;
  double t8040;
  double t8128;
  double t8169;
  double t8180;
  double t8189;
  double t8230;
  double t8242;
  double t8254;
  double t8300;
  double t8307;
  double t8436;
  double t8447;
  double t8466;
  double t8479;
  double t8729;
  double t8733;
  double t8995;
  double t9016;
  double t9138;
  double t9153;
  double t9280;
  double t9282;
  double t9390;
  double t9395;
  double t8688;
  double t8704;
  double t9029;
  double t9030;
  double t9031;
  double t8801;
  double t8814;
  double t8815;
  double t9056;
  double t9104;
  double t9108;
  double t9161;
  double t9178;
  double t9180;
  double t9195;
  double t9229;
  double t9259;
  double t9287;
  double t9293;
  double t9296;
  double t9329;
  double t9333;
  double t9352;
  double t9396;
  double t9402;
  double t9408;
  double t9418;
  double t9419;
  double t9430;
  double t8627;
  double t8637;
  double t8638;
  double t8670;
  double t8706;
  double t8709;
  double t8716;
  double t8725;
  double t8845;
  double t8868;
  double t8888;
  double t8920;
  double t8980;
  double t9039;
  double t9135;
  double t9191;
  double t9266;
  double t9325;
  double t9386;
  double t9413;
  double t9434;
  double t9435;
  double t9439;
  double t9443;
  double t9452;
  double t9453;
  double t9457;
  double t9458;
  double t9460;
  double t9461;
  double t9462;
  double t9463;
  double t9464;
  double t9465;
  double t9466;
  double t9467;
  double t9468;
  double t9469;
  double t120;
  double t354;
  double t1189;
  double t1481;
  double t1774;
  double t2193;
  double t2430;
  double t2642;
  double t2852;
  double t3094;
  double t3301;
  double t3477;
  double t3596;
  double t3625;
  double t3691;
  double t3705;
  double t3724;
  double t3766;
  double t3781;
  double t3791;
  double t3795;
  double t3809;
  double t7953;
  double t7957;
  double t7962;
  double t7967;
  double t7968;
  double t7998;
  double t8138;
  double t8221;
  double t8257;
  double t8440;
  double t8488;
  double t8492;
  double t8496;
  double t8517;
  double t8552;
  double t8563;
  double t8577;
  double t8579;
  double t8583;
  double t8595;
  double t7220;
  double t7274;
  double t7313;
  double t7337;
  double t7368;
  double t7383;
  double t7395;
  double t7437;
  double t7515;
  double t7558;
  double t7646;
  double t7703;
  double t7720;
  double t7752;
  double t7770;
  double t7771;
  double t7776;
  double t7784;
  double t7787;
  double t7792;
  double t7800;
  double t7842;
  double t7891;
  double t7902;
  double t9482;
  double t9483;
  double t9490;
  double t9491;
  double t9496;
  double t9497;
  double t9498;
  double t9499;
  double t9500;
  double t9501;
  double t9502;
  double t9504;
  double t9505;
  double t9506;
  double t9508;
  double t9509;
  double t9444;
  double t9470;
  double t9472;
  double t9530;
  double t9531;
  double t9532;
  double t9477;
  double t9479;
  double t9480;
  t104 = Sin(var1[7]);
  t239 = Cos(var1[8]);
  t1025 = Sin(var1[8]);
  t1260 = Cos(var1[9]);
  t1307 = -1.*t1260;
  t1325 = 1. + t1307;
  t1372 = Sin(var1[9]);
  t1506 = Cos(var1[7]);
  t1892 = Cos(var1[10]);
  t1912 = -1.*t1892;
  t1928 = 1. + t1912;
  t2022 = Sin(var1[10]);
  t1817 = t1260*t104*t1025;
  t1837 = t1506*t1372;
  t1868 = t1817 + t1837;
  t2221 = t1506*t1260;
  t2281 = -1.*t104*t1025*t1372;
  t2286 = t2221 + t2281;
  t2519 = Cos(var1[11]);
  t2563 = -1.*t2519;
  t2572 = 1. + t2563;
  t2615 = Sin(var1[11]);
  t2445 = t1892*t1868;
  t2465 = t2286*t2022;
  t2495 = t2445 + t2465;
  t2655 = t1892*t2286;
  t2676 = -1.*t1868*t2022;
  t2711 = t2655 + t2676;
  t2941 = Cos(var1[12]);
  t2966 = -1.*t2941;
  t2994 = 1. + t2966;
  t3058 = Sin(var1[12]);
  t2926 = t2519*t2495;
  t2931 = t2711*t2615;
  t2934 = t2926 + t2931;
  t3105 = t2519*t2711;
  t3106 = -1.*t2495*t2615;
  t3139 = t3105 + t3106;
  t3378 = Cos(var1[13]);
  t3380 = -1.*t3378;
  t3390 = 1. + t3380;
  t3440 = Sin(var1[13]);
  t3344 = t2941*t2934;
  t3354 = t3139*t3058;
  t3357 = t3344 + t3354;
  t3492 = t2941*t3139;
  t3502 = -1.*t2934*t3058;
  t3530 = t3492 + t3502;
  t3897 = Cos(var1[1]);
  t4107 = Cos(var1[3]);
  t3930 = Cos(var1[2]);
  t3941 = Sin(var1[3]);
  t4141 = Sin(var1[2]);
  t4351 = Cos(var1[4]);
  t3996 = -1.*t3897*t3930*t3941;
  t4176 = -1.*t4107*t3897*t4141;
  t4263 = t3996 + t4176;
  t3879 = Sin(var1[4]);
  t4357 = t4107*t3897*t3930;
  t4442 = -1.*t3897*t3941*t4141;
  t4494 = t4357 + t4442;
  t4718 = Cos(var1[5]);
  t4286 = t3879*t4263;
  t4536 = t4351*t4494;
  t4650 = t4286 + t4536;
  t3868 = Sin(var1[5]);
  t4727 = t4351*t4263;
  t4731 = -1.*t3879*t4494;
  t4759 = t4727 + t4731;
  t5020 = Cos(var1[6]);
  t4664 = -1.*t3868*t4650;
  t4835 = t4718*t4759;
  t4964 = t4664 + t4835;
  t3822 = Sin(var1[6]);
  t5036 = t4718*t4650;
  t5088 = t3868*t4759;
  t5103 = t5036 + t5088;
  t5563 = Sin(var1[0]);
  t5394 = Cos(var1[0]);
  t5424 = Sin(var1[1]);
  t5478 = t5394*t3930*t5424;
  t5603 = -1.*t5563*t4141;
  t5644 = t5478 + t5603;
  t5691 = -1.*t3930*t5563;
  t5704 = -1.*t5394*t5424*t4141;
  t5732 = t5691 + t5704;
  t5656 = -1.*t3941*t5644;
  t5828 = t4107*t5732;
  t5840 = t5656 + t5828;
  t5919 = t4107*t5644;
  t5937 = t3941*t5732;
  t5938 = t5919 + t5937;
  t5910 = t3879*t5840;
  t5979 = t4351*t5938;
  t6005 = t5910 + t5979;
  t6035 = t4351*t5840;
  t6046 = -1.*t3879*t5938;
  t6048 = t6035 + t6046;
  t6032 = -1.*t3868*t6005;
  t6056 = t4718*t6048;
  t6068 = t6032 + t6056;
  t6107 = t4718*t6005;
  t6114 = t3868*t6048;
  t6137 = t6107 + t6114;
  t5001 = t3822*t4964;
  t5140 = t5020*t5103;
  t5177 = t5001 + t5140;
  t5200 = t5020*t4964;
  t5220 = -1.*t3822*t5103;
  t5245 = t5200 + t5220;
  t6073 = t3822*t6068;
  t6151 = t5020*t6137;
  t6153 = t6073 + t6151;
  t6168 = t5020*t6068;
  t6192 = -1.*t3822*t6137;
  t6218 = t6168 + t6192;
  t6371 = t3930*t5563*t5424;
  t6395 = t5394*t4141;
  t6398 = t6371 + t6395;
  t6408 = t5394*t3930;
  t6447 = -1.*t5563*t5424*t4141;
  t6449 = t6408 + t6447;
  t6407 = -1.*t3941*t6398;
  t6527 = t4107*t6449;
  t6534 = t6407 + t6527;
  t6550 = t4107*t6398;
  t6561 = t3941*t6449;
  t6567 = t6550 + t6561;
  t6538 = t3879*t6534;
  t6579 = t4351*t6567;
  t6609 = t6538 + t6579;
  t6624 = t4351*t6534;
  t6640 = -1.*t3879*t6567;
  t6642 = t6624 + t6640;
  t6618 = -1.*t3868*t6609;
  t6659 = t4718*t6642;
  t6685 = t6618 + t6659;
  t6712 = t4718*t6609;
  t6742 = t3868*t6642;
  t6748 = t6712 + t6742;
  t6277 = -0.766044*t5177;
  t6296 = 0.642788*t5245;
  t6308 = t6277 + t6296;
  t6154 = -0.766044*t6153;
  t6233 = 0.642788*t6218;
  t6250 = t6154 + t6233;
  t6709 = t3822*t6685;
  t6763 = t5020*t6748;
  t6793 = t6709 + t6763;
  t6900 = t5020*t6685;
  t6903 = -1.*t3822*t6748;
  t6913 = t6900 + t6903;
  t5197 = 0.642788*t5177;
  t5284 = 0.766044*t5245;
  t5339 = t5197 + t5284;
  t6332 = 0.642788*t6153;
  t6343 = 0.766044*t6218;
  t6353 = t6332 + t6343;
  t6255 = t5339*t6250;
  t6363 = -1.*t6308*t6353;
  t514 = -1.*t239;
  t561 = 1. + t514;
  t680 = -0.135*t561;
  t1154 = 0.049*t1025;
  t1158 = 0. + t680 + t1154;
  t1327 = -0.049*t1325;
  t1443 = -0.09*t1372;
  t1452 = 0. + t1327 + t1443;
  t1525 = -0.09*t1325;
  t1526 = 0.049*t1372;
  t1531 = 0. + t1525 + t1526;
  t1961 = -0.049*t1928;
  t2031 = -0.21*t2022;
  t2140 = 0. + t1961 + t2031;
  t2300 = -0.21*t1928;
  t2382 = 0.049*t2022;
  t2426 = 0. + t2300 + t2382;
  t7404 = t1506*t1260*t1025;
  t7409 = -1.*t104*t1372;
  t7427 = t7404 + t7409;
  t7458 = -1.*t1260*t104;
  t7481 = -1.*t1506*t1025*t1372;
  t7498 = t7458 + t7481;
  t2593 = -0.0016*t2572;
  t2638 = -0.2707*t2615;
  t2639 = 0. + t2593 + t2638;
  t2716 = -0.2707*t2572;
  t2787 = 0.0016*t2615;
  t2836 = 0. + t2716 + t2787;
  t7519 = t1892*t7427;
  t7527 = t7498*t2022;
  t7537 = t7519 + t7527;
  t7631 = t1892*t7498;
  t7643 = -1.*t7427*t2022;
  t7644 = t7631 + t7643;
  t3025 = 0.0184*t2994;
  t3063 = -0.7055*t3058;
  t3079 = 0. + t3025 + t3063;
  t3189 = -0.7055*t2994;
  t3217 = -0.0184*t3058;
  t3219 = 0. + t3189 + t3217;
  t7652 = t2519*t7537;
  t7685 = t7644*t2615;
  t7695 = t7652 + t7685;
  t7709 = t2519*t7644;
  t7710 = -1.*t7537*t2615;
  t7715 = t7709 + t7710;
  t3422 = -0.0216*t3390;
  t3462 = -1.1135*t3440;
  t3476 = 0. + t3422 + t3462;
  t3549 = -1.1135*t3390;
  t3564 = 0.0216*t3440;
  t3578 = 0. + t3549 + t3564;
  t7721 = t2941*t7695;
  t7728 = t7715*t3058;
  t7750 = t7721 + t7728;
  t7764 = t2941*t7715;
  t7766 = -1.*t7695*t3058;
  t7769 = t7764 + t7766;
  t7011 = -0.766044*t6793;
  t7049 = 0.642788*t6913;
  t7072 = t7011 + t7049;
  t6866 = 0.642788*t6793;
  t6938 = 0.766044*t6913;
  t6939 = t6866 + t6938;
  t6958 = t5394*t3897*t6308;
  t6970 = t5424*t6250;
  t6985 = t6958 + t6970;
  t6987 = -1.*t6939*t6985;
  t7073 = t5394*t3897*t5339;
  t7089 = t5424*t6353;
  t7096 = t7073 + t7089;
  t7147 = t7072*t7096;
  t7153 = t6255 + t6363;
  t7168 = -1.*t3897*t5563*t7153;
  t7189 = 0. + t6987 + t7147 + t7168;
  t7203 = 1/t7189;
  t7977 = t239*t1260*t1892;
  t7981 = -1.*t239*t1372*t2022;
  t7983 = t7977 + t7981;
  t8028 = -1.*t239*t1892*t1372;
  t8040 = -1.*t239*t1260*t2022;
  t8128 = t8028 + t8040;
  t8169 = t2519*t7983;
  t8180 = t8128*t2615;
  t8189 = t8169 + t8180;
  t8230 = t2519*t8128;
  t8242 = -1.*t7983*t2615;
  t8254 = t8230 + t8242;
  t8300 = t2941*t8189;
  t8307 = t8254*t3058;
  t8436 = t8300 + t8307;
  t8447 = t2941*t8254;
  t8466 = -1.*t8189*t3058;
  t8479 = t8447 + t8466;
  t8729 = -1.*t3930;
  t8733 = 1. + t8729;
  t8995 = -1.*t4107;
  t9016 = 1. + t8995;
  t9138 = -1.*t4351;
  t9153 = 1. + t9138;
  t9280 = -1.*t4718;
  t9282 = 1. + t9280;
  t9390 = -1.*t5020;
  t9395 = 1. + t9390;
  t8688 = -1.*t3897;
  t8704 = 1. + t8688;
  t9029 = -0.049*t9016;
  t9030 = -0.21*t3941;
  t9031 = 0. + t9029 + t9030;
  t8801 = -0.049*t8733;
  t8814 = -0.09*t4141;
  t8815 = 0. + t8801 + t8814;
  t9056 = -0.21*t9016;
  t9104 = 0.049*t3941;
  t9108 = 0. + t9056 + t9104;
  t9161 = -0.2707*t9153;
  t9178 = 0.0016*t3879;
  t9180 = 0. + t9161 + t9178;
  t9195 = -0.0016*t9153;
  t9229 = -0.2707*t3879;
  t9259 = 0. + t9195 + t9229;
  t9287 = 0.0184*t9282;
  t9293 = -0.7055*t3868;
  t9296 = 0. + t9287 + t9293;
  t9329 = -0.7055*t9282;
  t9333 = -0.0184*t3868;
  t9352 = 0. + t9329 + t9333;
  t9396 = -1.1135*t9395;
  t9402 = 0.0216*t3822;
  t9408 = 0. + t9396 + t9402;
  t9418 = -0.0216*t9395;
  t9419 = -1.1135*t3822;
  t9430 = 0. + t9418 + t9419;
  t8627 = -1.*t5394;
  t8637 = 1. + t8627;
  t8638 = 0.135*t8637;
  t8670 = 0.1305*t5394*t3897;
  t8706 = 0.135*t8704;
  t8709 = 0.049*t5424;
  t8716 = 0. + t8706 + t8709;
  t8725 = t5394*t8716;
  t8845 = t5394*t5424*t8815;
  t8868 = -0.09*t8733;
  t8888 = 0.049*t4141;
  t8920 = 0. + t8868 + t8888;
  t8980 = -1.*t5563*t8920;
  t9039 = t9031*t5644;
  t9135 = t9108*t5732;
  t9191 = t9180*t5840;
  t9266 = t9259*t5938;
  t9325 = t9296*t6005;
  t9386 = t9352*t6048;
  t9413 = t9408*t6068;
  t9434 = t9430*t6137;
  t9435 = 0.0306*t6153;
  t9439 = -1.1312*t6218;
  t9443 = 0. + t8638 + t8670 + t8725 + t8845 + t8980 + t9039 + t9135 + t9191 + t9266 + t9325 + t9386 + t9413 + t9434 + t9435 + t9439;
  t9452 = -0.049*t8704;
  t9453 = t3897*t3930*t9031;
  t9457 = 0.004500000000000004*t5424;
  t9458 = t3897*t8815;
  t9460 = -1.*t3897*t9108*t4141;
  t9461 = t9180*t4263;
  t9462 = t9259*t4494;
  t9463 = t9296*t4650;
  t9464 = t9352*t4759;
  t9465 = t9408*t4964;
  t9466 = t9430*t5103;
  t9467 = 0.0306*t5177;
  t9468 = -1.1312*t5245;
  t9469 = 0. + t9452 + t9453 + t9457 + t9458 + t9460 + t9461 + t9462 + t9463 + t9464 + t9465 + t9466 + t9467 + t9468;
  t120 = 0.135*t104;
  t354 = -0.1305*t239*t104;
  t1189 = t104*t1158;
  t1481 = t104*t1025*t1452;
  t1774 = t1506*t1531;
  t2193 = t1868*t2140;
  t2430 = t2286*t2426;
  t2642 = t2495*t2639;
  t2852 = t2711*t2836;
  t3094 = t2934*t3079;
  t3301 = t3139*t3219;
  t3477 = t3357*t3476;
  t3596 = t3530*t3578;
  t3625 = t3378*t3357;
  t3691 = t3530*t3440;
  t3705 = t3625 + t3691;
  t3724 = 0.0306*t3705;
  t3766 = t3378*t3530;
  t3781 = -1.*t3357*t3440;
  t3791 = t3766 + t3781;
  t3795 = -1.1312*t3791;
  t3809 = 0. + t120 + t354 + t1189 + t1481 + t1774 + t2193 + t2430 + t2642 + t2852 + t3094 + t3301 + t3477 + t3596 + t3724 + t3795;
  t7953 = -0.049*t561;
  t7957 = -0.004500000000000004*t1025;
  t7962 = t239*t1452;
  t7967 = t239*t1260*t2140;
  t7968 = -1.*t239*t1372*t2426;
  t7998 = t7983*t2639;
  t8138 = t8128*t2836;
  t8221 = t8189*t3079;
  t8257 = t8254*t3219;
  t8440 = t8436*t3476;
  t8488 = t8479*t3578;
  t8492 = t3378*t8436;
  t8496 = t8479*t3440;
  t8517 = t8492 + t8496;
  t8552 = 0.0306*t8517;
  t8563 = t3378*t8479;
  t8577 = -1.*t8436*t3440;
  t8579 = t8563 + t8577;
  t8583 = -1.1312*t8579;
  t8595 = 0. + t7953 + t7957 + t7962 + t7967 + t7968 + t7998 + t8138 + t8221 + t8257 + t8440 + t8488 + t8552 + t8583;
  t7220 = -1.*t1506;
  t7274 = 1. + t7220;
  t7313 = -0.135*t7274;
  t7337 = -0.1305*t1506*t239;
  t7368 = t1506*t1158;
  t7383 = t1506*t1025*t1452;
  t7395 = -1.*t104*t1531;
  t7437 = t7427*t2140;
  t7515 = t7498*t2426;
  t7558 = t7537*t2639;
  t7646 = t7644*t2836;
  t7703 = t7695*t3079;
  t7720 = t7715*t3219;
  t7752 = t7750*t3476;
  t7770 = t7769*t3578;
  t7771 = t3378*t7750;
  t7776 = t7769*t3440;
  t7784 = t7771 + t7776;
  t7787 = 0.0306*t7784;
  t7792 = t3378*t7769;
  t7800 = -1.*t7750*t3440;
  t7842 = t7792 + t7800;
  t7891 = -1.1312*t7842;
  t7902 = 0. + t7313 + t7337 + t7368 + t7383 + t7395 + t7437 + t7515 + t7558 + t7646 + t7703 + t7720 + t7752 + t7770 + t7787 + t7891;
  t9482 = -0.135*t5563;
  t9483 = 0.1305*t3897*t5563;
  t9490 = t5563*t8716;
  t9491 = t5563*t5424*t8815;
  t9496 = t5394*t8920;
  t9497 = t9031*t6398;
  t9498 = t9108*t6449;
  t9499 = t9180*t6534;
  t9500 = t9259*t6567;
  t9501 = t9296*t6609;
  t9502 = t9352*t6642;
  t9504 = t9408*t6685;
  t9505 = t9430*t6748;
  t9506 = 0.0306*t6793;
  t9508 = -1.1312*t6913;
  t9509 = 0. + t9482 + t9483 + t9490 + t9491 + t9496 + t9497 + t9498 + t9499 + t9500 + t9501 + t9502 + t9504 + t9505 + t9506 + t9508;
  t9444 = t6308*t9443;
  t9470 = -1.*t9469*t6250;
  t9472 = t9444 + t9470;
  t9530 = t5394*t3897*t9469;
  t9531 = t5424*t9443;
  t9532 = t9530 + t9531;
  t9477 = t5339*t9443;
  t9479 = -1.*t9469*t6353;
  t9480 = t9477 + t9479;

  p_output1(0)=t3809*(0. + t6255 + t6363)*t7203 + (0. + t6308*t6939 - 1.*t5339*t7072)*t7203*t7902 + (0. - 1.*t6250*t6939 + t6353*t7072)*t7203*t8595 + t7203*(-1.*t6939*t9472 + t7072*t9480 - 1.*t7153*t9509);
  p_output1(1)=t3809*(0. - 1.*t5424*t6250 - 1.*t3897*t5394*t6308)*t7203 + (0. + t3897*t5563*t6308 + t5424*t7072)*t7203*t7902 + (0. - 1.*t3897*t5563*t6250 + t3897*t5394*t7072)*t7203*t8595 + t7203*(-1.*t3897*t5563*t9472 + t6985*t9509 - 1.*t7072*t9532);
  p_output1(2)=t3809*(0. + t7073 + t7089)*t7203 + (0. - 1.*t3897*t5339*t5563 - 1.*t5424*t6939)*t7203*t7902 + (0. + t3897*t5563*t6353 - 1.*t3897*t5394*t6939)*t7203*t8595 + t7203*(t3897*t5563*t9480 - 1.*t7096*t9509 + t6939*t9532);
}


       
void p_LeftToeBottom_to_RightToeBottom(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
