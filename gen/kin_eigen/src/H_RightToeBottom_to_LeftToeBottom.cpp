/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 12:16:43 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RightToeBottom_to_LeftToeBottom.h"

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
static void output1(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  double t742;
  double t939;
  double t1101;
  double t938;
  double t1142;
  double t515;
  double t1418;
  double t1569;
  double t1574;
  double t1093;
  double t1148;
  double t1197;
  double t1576;
  double t110;
  double t1690;
  double t1751;
  double t1851;
  double t1327;
  double t1639;
  double t1653;
  double t1965;
  double t103;
  double t2175;
  double t2203;
  double t2213;
  double t1678;
  double t2068;
  double t2141;
  double t2234;
  double t2657;
  double t2635;
  double t2643;
  double t3094;
  double t3113;
  double t3201;
  double t2656;
  double t2781;
  double t2786;
  double t3594;
  double t3643;
  double t3651;
  double t2866;
  double t3304;
  double t3421;
  double t3847;
  double t3971;
  double t3983;
  double t3423;
  double t3827;
  double t3842;
  double t4337;
  double t4464;
  double t4666;
  double t3846;
  double t4129;
  double t4241;
  double t2147;
  double t2392;
  double t2393;
  double t2471;
  double t2498;
  double t2552;
  double t4336;
  double t4808;
  double t4956;
  double t5653;
  double t6883;
  double t7164;
  double t7373;
  double t7375;
  double t7376;
  double t7303;
  double t7330;
  double t7370;
  double t7393;
  double t7395;
  double t7396;
  double t7386;
  double t7387;
  double t7389;
  double t7418;
  double t7419;
  double t7423;
  double t7390;
  double t7403;
  double t7412;
  double t7433;
  double t7434;
  double t7438;
  double t7413;
  double t7425;
  double t7428;
  double t7446;
  double t7449;
  double t7450;
  double t7430;
  double t7439;
  double t7444;
  double t5079;
  double t7183;
  double t7202;
  double t2438;
  double t2568;
  double t2592;
  double t7445;
  double t7453;
  double t7454;
  double t7462;
  double t7463;
  double t7465;
  double t7457;
  double t7469;
  double t7473;
  double t7489;
  double t7493;
  double t7494;
  double t75;
  double t7502;
  double t7504;
  double t7383;
  double t7474;
  double t7480;
  double t7483;
  double t7487;
  double t7495;
  double t7496;
  double t7498;
  double t7506;
  double t7507;
  double t7511;
  double t7513;
  double t56;
  double t7518;
  double t7538;
  double t7529;
  double t7531;
  double t7534;
  double t7585;
  double t7582;
  double t7583;
  double t7587;
  double t7591;
  double t7584;
  double t7588;
  double t7589;
  double t7580;
  double t7592;
  double t7595;
  double t7597;
  double t7601;
  double t7590;
  double t7598;
  double t7599;
  double t7579;
  double t7602;
  double t7604;
  double t7607;
  double t7612;
  double t7600;
  double t7609;
  double t7610;
  double t7578;
  double t7613;
  double t7614;
  double t7616;
  double t7233;
  double t7379;
  double t7382;
  double t7627;
  double t7628;
  double t7629;
  double t7631;
  double t7632;
  double t7633;
  double t7630;
  double t7634;
  double t7635;
  double t7637;
  double t7638;
  double t7639;
  double t7636;
  double t7640;
  double t7641;
  double t7643;
  double t7644;
  double t7645;
  double t7642;
  double t7646;
  double t7647;
  double t7649;
  double t7650;
  double t7651;
  double t7517;
  double t7667;
  double t7668;
  double t7669;
  double t7671;
  double t7672;
  double t7677;
  double t7670;
  double t7678;
  double t7679;
  double t7681;
  double t7682;
  double t7684;
  double t7680;
  double t7687;
  double t7688;
  double t7690;
  double t7691;
  double t7692;
  double t7689;
  double t7693;
  double t7694;
  double t7698;
  double t7699;
  double t7700;
  double t7553;
  double t7554;
  double t7555;
  double t7611;
  double t7617;
  double t7618;
  double t7619;
  double t7621;
  double t7622;
  double t7623;
  double t7624;
  double t7625;
  double t7542;
  double t7543;
  double t7545;
  double t7648;
  double t7652;
  double t7653;
  double t7654;
  double t7657;
  double t7658;
  double t7661;
  double t7662;
  double t7663;
  double t7548;
  double t7549;
  double t7550;
  double t7697;
  double t7701;
  double t7702;
  double t7703;
  double t7704;
  double t7707;
  double t7708;
  double t7709;
  double t7710;
  double t7570;
  double t7573;
  double t7575;
  double t7563;
  double t7564;
  double t7565;
  double t7567;
  double t7721;
  double t7722;
  double t7724;
  double t7726;
  double t7727;
  double t7728;
  double t7730;
  double t7731;
  double t7735;
  double t7761;
  double t7764;
  double t7775;
  double t7776;
  double t7791;
  double t7792;
  double t7803;
  double t7804;
  double t7816;
  double t7817;
  double t7752;
  double t7753;
  double t7765;
  double t7766;
  double t7767;
  double t7781;
  double t7782;
  double t7783;
  double t7785;
  double t7786;
  double t7787;
  double t7793;
  double t7794;
  double t7795;
  double t7797;
  double t7798;
  double t7801;
  double t7805;
  double t7806;
  double t7807;
  double t7809;
  double t7810;
  double t7812;
  double t7818;
  double t7819;
  double t7820;
  double t7822;
  double t7823;
  double t7826;
  double t7748;
  double t7749;
  double t7750;
  double t7751;
  double t7754;
  double t7756;
  double t7757;
  double t7758;
  double t7768;
  double t7771;
  double t7772;
  double t7773;
  double t7774;
  double t7784;
  double t7788;
  double t7796;
  double t7802;
  double t7808;
  double t7815;
  double t7821;
  double t7827;
  double t7828;
  double t7829;
  double t7830;
  double t7832;
  double t7833;
  double t7834;
  double t7835;
  double t7837;
  double t7838;
  double t7839;
  double t7840;
  double t7841;
  double t7842;
  double t7843;
  double t7844;
  double t7845;
  double t7846;
  double t7878;
  double t7879;
  double t7895;
  double t7896;
  double t7905;
  double t7906;
  double t7915;
  double t7916;
  double t7875;
  double t7876;
  double t7885;
  double t7886;
  double t7887;
  double t7888;
  double t7889;
  double t7880;
  double t7881;
  double t7882;
  double t7891;
  double t7892;
  double t7893;
  double t7897;
  double t7898;
  double t7899;
  double t7901;
  double t7902;
  double t7903;
  double t7907;
  double t7908;
  double t7909;
  double t7911;
  double t7912;
  double t7913;
  double t7917;
  double t7918;
  double t7919;
  double t7921;
  double t7922;
  double t7923;
  double t7933;
  double t7934;
  double t7935;
  double t7938;
  double t7939;
  double t7940;
  double t7855;
  double t7856;
  double t7857;
  double t7859;
  double t7860;
  double t7861;
  double t7862;
  double t7863;
  double t7864;
  double t7865;
  double t7866;
  double t7867;
  double t7868;
  double t7869;
  double t7870;
  double t7871;
  double t7831;
  double t7847;
  double t7848;
  double t7877;
  double t7883;
  double t7884;
  double t7890;
  double t7894;
  double t7900;
  double t7904;
  double t7910;
  double t7914;
  double t7920;
  double t7924;
  double t7925;
  double t7926;
  double t7927;
  double t7929;
  double t7930;
  double t7931;
  double t7932;
  double t7936;
  double t7937;
  double t7941;
  double t7942;
  double t7943;
  double t7944;
  double t7945;
  double t7946;
  double t7947;
  double t7948;
  double t7949;
  double t7950;
  double t7951;
  double t7952;
  double t7954;
  double t7955;
  double t7956;
  double t7957;
  double t7958;
  double t7959;
  double t7960;
  double t7961;
  double t7962;
  double t7963;
  double t7964;
  double t7965;
  double t7966;
  double t7967;
  double t7968;
  double t7969;
  double t7972;
  double t7973;
  double t7974;
  double t7850;
  double t7851;
  double t7852;
  t742 = Cos(var1[8]);
  t939 = Cos(var1[10]);
  t1101 = Sin(var1[9]);
  t938 = Cos(var1[9]);
  t1142 = Sin(var1[10]);
  t515 = Cos(var1[11]);
  t1418 = -1.*t742*t939*t1101;
  t1569 = -1.*t742*t938*t1142;
  t1574 = t1418 + t1569;
  t1093 = t742*t938*t939;
  t1148 = -1.*t742*t1101*t1142;
  t1197 = t1093 + t1148;
  t1576 = Sin(var1[11]);
  t110 = Cos(var1[12]);
  t1690 = t515*t1574;
  t1751 = -1.*t1197*t1576;
  t1851 = t1690 + t1751;
  t1327 = t515*t1197;
  t1639 = t1574*t1576;
  t1653 = t1327 + t1639;
  t1965 = Sin(var1[12]);
  t103 = Cos(var1[13]);
  t2175 = t110*t1851;
  t2203 = -1.*t1653*t1965;
  t2213 = t2175 + t2203;
  t1678 = t110*t1653;
  t2068 = t1851*t1965;
  t2141 = t1678 + t2068;
  t2234 = Sin(var1[13]);
  t2657 = Cos(var1[7]);
  t2635 = Sin(var1[7]);
  t2643 = Sin(var1[8]);
  t3094 = t2657*t938;
  t3113 = -1.*t2635*t2643*t1101;
  t3201 = t3094 + t3113;
  t2656 = t938*t2635*t2643;
  t2781 = t2657*t1101;
  t2786 = t2656 + t2781;
  t3594 = t939*t3201;
  t3643 = -1.*t2786*t1142;
  t3651 = t3594 + t3643;
  t2866 = t939*t2786;
  t3304 = t3201*t1142;
  t3421 = t2866 + t3304;
  t3847 = t515*t3651;
  t3971 = -1.*t3421*t1576;
  t3983 = t3847 + t3971;
  t3423 = t515*t3421;
  t3827 = t3651*t1576;
  t3842 = t3423 + t3827;
  t4337 = t110*t3983;
  t4464 = -1.*t3842*t1965;
  t4666 = t4337 + t4464;
  t3846 = t110*t3842;
  t4129 = t3983*t1965;
  t4241 = t3846 + t4129;
  t2147 = t103*t2141;
  t2392 = t2213*t2234;
  t2393 = t2147 + t2392;
  t2471 = t103*t2213;
  t2498 = -1.*t2141*t2234;
  t2552 = t2471 + t2498;
  t4336 = t103*t4241;
  t4808 = t4666*t2234;
  t4956 = t4336 + t4808;
  t5653 = t103*t4666;
  t6883 = -1.*t4241*t2234;
  t7164 = t5653 + t6883;
  t7373 = 0.642788*t4956;
  t7375 = 0.766044*t7164;
  t7376 = t7373 + t7375;
  t7303 = -0.766044*t2393;
  t7330 = 0.642788*t2552;
  t7370 = t7303 + t7330;
  t7393 = -1.*t938*t2635;
  t7395 = -1.*t2657*t2643*t1101;
  t7396 = t7393 + t7395;
  t7386 = t2657*t938*t2643;
  t7387 = -1.*t2635*t1101;
  t7389 = t7386 + t7387;
  t7418 = t939*t7396;
  t7419 = -1.*t7389*t1142;
  t7423 = t7418 + t7419;
  t7390 = t939*t7389;
  t7403 = t7396*t1142;
  t7412 = t7390 + t7403;
  t7433 = t515*t7423;
  t7434 = -1.*t7412*t1576;
  t7438 = t7433 + t7434;
  t7413 = t515*t7412;
  t7425 = t7423*t1576;
  t7428 = t7413 + t7425;
  t7446 = t110*t7438;
  t7449 = -1.*t7428*t1965;
  t7450 = t7446 + t7449;
  t7430 = t110*t7428;
  t7439 = t7438*t1965;
  t7444 = t7430 + t7439;
  t5079 = -0.766044*t4956;
  t7183 = 0.642788*t7164;
  t7202 = t5079 + t7183;
  t2438 = 0.642788*t2393;
  t2568 = 0.766044*t2552;
  t2592 = t2438 + t2568;
  t7445 = t103*t7444;
  t7453 = t7450*t2234;
  t7454 = t7445 + t7453;
  t7462 = t103*t7450;
  t7463 = -1.*t7444*t2234;
  t7465 = t7462 + t7463;
  t7457 = -0.766044*t7454;
  t7469 = 0.642788*t7465;
  t7473 = t7457 + t7469;
  t7489 = 0.642788*t7454;
  t7493 = 0.766044*t7465;
  t7494 = t7489 + t7493;
  t75 = Cos(var1[1]);
  t7502 = t2592*t7473;
  t7504 = -1.*t7370*t7494;
  t7383 = t2657*t742*t7370;
  t7474 = t2643*t7473;
  t7480 = t7383 + t7474;
  t7483 = -1.*t7376*t7480;
  t7487 = t2657*t742*t2592;
  t7495 = t2643*t7494;
  t7496 = t7487 + t7495;
  t7498 = t7202*t7496;
  t7506 = t7502 + t7504;
  t7507 = -1.*t742*t2635*t7506;
  t7511 = 0. + t7483 + t7498 + t7507;
  t7513 = 1/t7511;
  t56 = Cos(var1[0]);
  t7518 = Sin(var1[0]);
  t7538 = Sin(var1[1]);
  t7529 = t7494*t7202;
  t7531 = -1.*t7473*t7376;
  t7534 = 0. + t7529 + t7531;
  t7585 = Cos(var1[3]);
  t7582 = Cos(var1[2]);
  t7583 = Sin(var1[3]);
  t7587 = Sin(var1[2]);
  t7591 = Cos(var1[4]);
  t7584 = -1.*t75*t7582*t7583;
  t7588 = -1.*t7585*t75*t7587;
  t7589 = t7584 + t7588;
  t7580 = Sin(var1[4]);
  t7592 = t7585*t75*t7582;
  t7595 = -1.*t75*t7583*t7587;
  t7597 = t7592 + t7595;
  t7601 = Cos(var1[5]);
  t7590 = t7580*t7589;
  t7598 = t7591*t7597;
  t7599 = t7590 + t7598;
  t7579 = Sin(var1[5]);
  t7602 = t7591*t7589;
  t7604 = -1.*t7580*t7597;
  t7607 = t7602 + t7604;
  t7612 = Cos(var1[6]);
  t7600 = -1.*t7579*t7599;
  t7609 = t7601*t7607;
  t7610 = t7600 + t7609;
  t7578 = Sin(var1[6]);
  t7613 = t7601*t7599;
  t7614 = t7579*t7607;
  t7616 = t7613 + t7614;
  t7233 = -1.*t2592*t7202;
  t7379 = t7370*t7376;
  t7382 = 0. + t7233 + t7379;
  t7627 = t56*t7582*t7538;
  t7628 = -1.*t7518*t7587;
  t7629 = t7627 + t7628;
  t7631 = -1.*t7582*t7518;
  t7632 = -1.*t56*t7538*t7587;
  t7633 = t7631 + t7632;
  t7630 = -1.*t7583*t7629;
  t7634 = t7585*t7633;
  t7635 = t7630 + t7634;
  t7637 = t7585*t7629;
  t7638 = t7583*t7633;
  t7639 = t7637 + t7638;
  t7636 = t7580*t7635;
  t7640 = t7591*t7639;
  t7641 = t7636 + t7640;
  t7643 = t7591*t7635;
  t7644 = -1.*t7580*t7639;
  t7645 = t7643 + t7644;
  t7642 = -1.*t7579*t7641;
  t7646 = t7601*t7645;
  t7647 = t7642 + t7646;
  t7649 = t7601*t7641;
  t7650 = t7579*t7645;
  t7651 = t7649 + t7650;
  t7517 = 0. + t7502 + t7504;
  t7667 = t7582*t7518*t7538;
  t7668 = t56*t7587;
  t7669 = t7667 + t7668;
  t7671 = t56*t7582;
  t7672 = -1.*t7518*t7538*t7587;
  t7677 = t7671 + t7672;
  t7670 = -1.*t7583*t7669;
  t7678 = t7585*t7677;
  t7679 = t7670 + t7678;
  t7681 = t7585*t7669;
  t7682 = t7583*t7677;
  t7684 = t7681 + t7682;
  t7680 = t7580*t7679;
  t7687 = t7591*t7684;
  t7688 = t7680 + t7687;
  t7690 = t7591*t7679;
  t7691 = -1.*t7580*t7684;
  t7692 = t7690 + t7691;
  t7689 = -1.*t7579*t7688;
  t7693 = t7601*t7692;
  t7694 = t7689 + t7693;
  t7698 = t7601*t7688;
  t7699 = t7579*t7692;
  t7700 = t7698 + t7699;
  t7553 = -1.*t742*t2635*t7473;
  t7554 = t2657*t742*t7202;
  t7555 = 0. + t7553 + t7554;
  t7611 = t7578*t7610;
  t7617 = t7612*t7616;
  t7618 = t7611 + t7617;
  t7619 = 0.642788*t7618;
  t7621 = t7612*t7610;
  t7622 = -1.*t7578*t7616;
  t7623 = t7621 + t7622;
  t7624 = 0.766044*t7623;
  t7625 = t7619 + t7624;
  t7542 = t742*t2635*t7370;
  t7543 = t2643*t7202;
  t7545 = 0. + t7542 + t7543;
  t7648 = t7578*t7647;
  t7652 = t7612*t7651;
  t7653 = t7648 + t7652;
  t7654 = 0.642788*t7653;
  t7657 = t7612*t7647;
  t7658 = -1.*t7578*t7651;
  t7661 = t7657 + t7658;
  t7662 = 0.766044*t7661;
  t7663 = t7654 + t7662;
  t7548 = -1.*t2657*t742*t7370;
  t7549 = -1.*t2643*t7473;
  t7550 = 0. + t7548 + t7549;
  t7697 = t7578*t7694;
  t7701 = t7612*t7700;
  t7702 = t7697 + t7701;
  t7703 = 0.642788*t7702;
  t7704 = t7612*t7694;
  t7707 = -1.*t7578*t7700;
  t7708 = t7704 + t7707;
  t7709 = 0.766044*t7708;
  t7710 = t7703 + t7709;
  t7570 = t742*t2635*t7494;
  t7573 = -1.*t2657*t742*t7376;
  t7575 = 0. + t7570 + t7573;
  t7563 = -1.*t742*t2635*t2592;
  t7564 = -1.*t2643*t7376;
  t7565 = 0. + t7563 + t7564;
  t7567 = 0. + t7487 + t7495;
  t7721 = -0.766044*t7618;
  t7722 = 0.642788*t7623;
  t7724 = t7721 + t7722;
  t7726 = -0.766044*t7653;
  t7727 = 0.642788*t7661;
  t7728 = t7726 + t7727;
  t7730 = -0.766044*t7702;
  t7731 = 0.642788*t7708;
  t7735 = t7730 + t7731;
  t7761 = -1.*t938;
  t7764 = 1. + t7761;
  t7775 = -1.*t939;
  t7776 = 1. + t7775;
  t7791 = -1.*t515;
  t7792 = 1. + t7791;
  t7803 = -1.*t110;
  t7804 = 1. + t7803;
  t7816 = -1.*t103;
  t7817 = 1. + t7816;
  t7752 = -1.*t742;
  t7753 = 1. + t7752;
  t7765 = -0.049*t7764;
  t7766 = -0.09*t1101;
  t7767 = 0. + t7765 + t7766;
  t7781 = -0.049*t7776;
  t7782 = -0.21*t1142;
  t7783 = 0. + t7781 + t7782;
  t7785 = -0.21*t7776;
  t7786 = 0.049*t1142;
  t7787 = 0. + t7785 + t7786;
  t7793 = -0.0016*t7792;
  t7794 = -0.2707*t1576;
  t7795 = 0. + t7793 + t7794;
  t7797 = -0.2707*t7792;
  t7798 = 0.0016*t1576;
  t7801 = 0. + t7797 + t7798;
  t7805 = 0.0184*t7804;
  t7806 = -0.7055*t1965;
  t7807 = 0. + t7805 + t7806;
  t7809 = -0.7055*t7804;
  t7810 = -0.0184*t1965;
  t7812 = 0. + t7809 + t7810;
  t7818 = -0.0216*t7817;
  t7819 = -1.1135*t2234;
  t7820 = 0. + t7818 + t7819;
  t7822 = -1.1135*t7817;
  t7823 = 0.0216*t2234;
  t7826 = 0. + t7822 + t7823;
  t7748 = -1.*t2657;
  t7749 = 1. + t7748;
  t7750 = -0.135*t7749;
  t7751 = -0.1305*t2657*t742;
  t7754 = -0.135*t7753;
  t7756 = 0.049*t2643;
  t7757 = 0. + t7754 + t7756;
  t7758 = t2657*t7757;
  t7768 = t2657*t2643*t7767;
  t7771 = -0.09*t7764;
  t7772 = 0.049*t1101;
  t7773 = 0. + t7771 + t7772;
  t7774 = -1.*t2635*t7773;
  t7784 = t7389*t7783;
  t7788 = t7396*t7787;
  t7796 = t7412*t7795;
  t7802 = t7423*t7801;
  t7808 = t7428*t7807;
  t7815 = t7438*t7812;
  t7821 = t7444*t7820;
  t7827 = t7450*t7826;
  t7828 = 0.0306*t7454;
  t7829 = -1.1312*t7465;
  t7830 = 0. + t7750 + t7751 + t7758 + t7768 + t7774 + t7784 + t7788 + t7796 + t7802 + t7808 + t7815 + t7821 + t7827 + t7828 + t7829;
  t7832 = -0.049*t7753;
  t7833 = -0.004500000000000004*t2643;
  t7834 = t742*t7767;
  t7835 = t742*t938*t7783;
  t7837 = -1.*t742*t1101*t7787;
  t7838 = t1197*t7795;
  t7839 = t1574*t7801;
  t7840 = t1653*t7807;
  t7841 = t1851*t7812;
  t7842 = t2141*t7820;
  t7843 = t2213*t7826;
  t7844 = 0.0306*t2393;
  t7845 = -1.1312*t2552;
  t7846 = 0. + t7832 + t7833 + t7834 + t7835 + t7837 + t7838 + t7839 + t7840 + t7841 + t7842 + t7843 + t7844 + t7845;
  t7878 = -1.*t7585;
  t7879 = 1. + t7878;
  t7895 = -1.*t7591;
  t7896 = 1. + t7895;
  t7905 = -1.*t7601;
  t7906 = 1. + t7905;
  t7915 = -1.*t7612;
  t7916 = 1. + t7915;
  t7875 = -1.*t75;
  t7876 = 1. + t7875;
  t7885 = -1.*t7582;
  t7886 = 1. + t7885;
  t7887 = -0.049*t7886;
  t7888 = -0.09*t7587;
  t7889 = 0. + t7887 + t7888;
  t7880 = -0.049*t7879;
  t7881 = -0.21*t7583;
  t7882 = 0. + t7880 + t7881;
  t7891 = -0.21*t7879;
  t7892 = 0.049*t7583;
  t7893 = 0. + t7891 + t7892;
  t7897 = -0.2707*t7896;
  t7898 = 0.0016*t7580;
  t7899 = 0. + t7897 + t7898;
  t7901 = -0.0016*t7896;
  t7902 = -0.2707*t7580;
  t7903 = 0. + t7901 + t7902;
  t7907 = 0.0184*t7906;
  t7908 = -0.7055*t7579;
  t7909 = 0. + t7907 + t7908;
  t7911 = -0.7055*t7906;
  t7912 = -0.0184*t7579;
  t7913 = 0. + t7911 + t7912;
  t7917 = -1.1135*t7916;
  t7918 = 0.0216*t7578;
  t7919 = 0. + t7917 + t7918;
  t7921 = -0.0216*t7916;
  t7922 = -1.1135*t7578;
  t7923 = 0. + t7921 + t7922;
  t7933 = 0.135*t7876;
  t7934 = 0.049*t7538;
  t7935 = 0. + t7933 + t7934;
  t7938 = -0.09*t7886;
  t7939 = 0.049*t7587;
  t7940 = 0. + t7938 + t7939;
  t7855 = 0.135*t2635;
  t7856 = -0.1305*t742*t2635;
  t7857 = t2635*t7757;
  t7859 = t2635*t2643*t7767;
  t7860 = t2657*t7773;
  t7861 = t2786*t7783;
  t7862 = t3201*t7787;
  t7863 = t3421*t7795;
  t7864 = t3651*t7801;
  t7865 = t3842*t7807;
  t7866 = t3983*t7812;
  t7867 = t4241*t7820;
  t7868 = t4666*t7826;
  t7869 = 0.0306*t4956;
  t7870 = -1.1312*t7164;
  t7871 = 0. + t7855 + t7856 + t7857 + t7859 + t7860 + t7861 + t7862 + t7863 + t7864 + t7865 + t7866 + t7867 + t7868 + t7869 + t7870;
  t7831 = t7370*t7830;
  t7847 = -1.*t7846*t7473;
  t7848 = t7831 + t7847;
  t7877 = -0.049*t7876;
  t7883 = t75*t7582*t7882;
  t7884 = 0.004500000000000004*t7538;
  t7890 = t75*t7889;
  t7894 = -1.*t75*t7893*t7587;
  t7900 = t7899*t7589;
  t7904 = t7903*t7597;
  t7910 = t7909*t7599;
  t7914 = t7913*t7607;
  t7920 = t7919*t7610;
  t7924 = t7923*t7616;
  t7925 = 0.0306*t7618;
  t7926 = -1.1312*t7623;
  t7927 = 0. + t7877 + t7883 + t7884 + t7890 + t7894 + t7900 + t7904 + t7910 + t7914 + t7920 + t7924 + t7925 + t7926;
  t7929 = -1.*t56;
  t7930 = 1. + t7929;
  t7931 = 0.135*t7930;
  t7932 = 0.1305*t56*t75;
  t7936 = t56*t7935;
  t7937 = t56*t7538*t7889;
  t7941 = -1.*t7518*t7940;
  t7942 = t7882*t7629;
  t7943 = t7893*t7633;
  t7944 = t7899*t7635;
  t7945 = t7903*t7639;
  t7946 = t7909*t7641;
  t7947 = t7913*t7645;
  t7948 = t7919*t7647;
  t7949 = t7923*t7651;
  t7950 = 0.0306*t7653;
  t7951 = -1.1312*t7661;
  t7952 = 0. + t7931 + t7932 + t7936 + t7937 + t7941 + t7942 + t7943 + t7944 + t7945 + t7946 + t7947 + t7948 + t7949 + t7950 + t7951;
  t7954 = -0.135*t7518;
  t7955 = 0.1305*t75*t7518;
  t7956 = t7518*t7935;
  t7957 = t7518*t7538*t7889;
  t7958 = t56*t7940;
  t7959 = t7882*t7669;
  t7960 = t7893*t7677;
  t7961 = t7899*t7679;
  t7962 = t7903*t7684;
  t7963 = t7909*t7688;
  t7964 = t7913*t7692;
  t7965 = t7919*t7694;
  t7966 = t7923*t7700;
  t7967 = 0.0306*t7702;
  t7968 = -1.1312*t7708;
  t7969 = 0. + t7954 + t7955 + t7956 + t7957 + t7958 + t7959 + t7960 + t7961 + t7962 + t7963 + t7964 + t7965 + t7966 + t7967 + t7968;
  t7972 = t2657*t742*t7846;
  t7973 = t2643*t7830;
  t7974 = t7972 + t7973;
  t7850 = t2592*t7830;
  t7851 = -1.*t7846*t7494;
  t7852 = t7850 + t7851;

  p_output1(0)=0. - 1.*t56*t7382*t75*t7513 - 1.*t75*t7513*t7517*t7518 + t7513*t7534*t7538;
  p_output1(1)=0. - 1.*t56*t75*t7513*t7545 - 1.*t75*t7513*t7518*t7550 + t7513*t7538*t7555;
  p_output1(2)=0. - 1.*t56*t75*t7513*t7565 - 1.*t75*t7513*t7518*t7567 + t7513*t7538*t7575;
  p_output1(3)=0.;
  p_output1(4)=0. + t7513*t7534*t7625 + t7382*t7513*t7663 + t7513*t7517*t7710;
  p_output1(5)=0. + t7513*t7555*t7625 + t7513*t7545*t7663 + t7513*t7550*t7710;
  p_output1(6)=0. + t7513*t7575*t7625 + t7513*t7565*t7663 + t7513*t7567*t7710;
  p_output1(7)=0.;
  p_output1(8)=0. + t7513*t7534*t7724 + t7382*t7513*t7728 + t7513*t7517*t7735;
  p_output1(9)=0. + t7513*t7555*t7724 + t7513*t7545*t7728 + t7513*t7550*t7735;
  p_output1(10)=0. + t7513*t7575*t7724 + t7513*t7565*t7728 + t7513*t7567*t7735;
  p_output1(11)=0.;
  p_output1(12)=t7513*(-1.*t7376*t7848 + t7202*t7852 - 1.*t7506*t7871) + t7513*t7534*t7927 + t7382*t7513*t7952 + t7513*t7517*t7969;
  p_output1(13)=t7513*t7555*t7927 + t7513*t7545*t7952 + t7513*t7550*t7969 + t7513*(-1.*t2635*t742*t7848 + t7480*t7871 - 1.*t7202*t7974);
  p_output1(14)=t7513*t7575*t7927 + t7513*t7565*t7952 + t7513*t7567*t7969 + t7513*(t2635*t742*t7852 - 1.*t7496*t7871 + t7376*t7974);
  p_output1(15)=0. + (t7483 + t7498 + t7507)*t7513;
}


       
void H_RightToeBottom_to_LeftToeBottom(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
