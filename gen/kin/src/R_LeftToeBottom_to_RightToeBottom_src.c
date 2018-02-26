/*
 * Automatically Generated from Mathematica.
 * Mon 26 Feb 2018 15:42:48 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_LeftToeBottom_to_RightToeBottom_src.h"

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
  double t420;
  double t765;
  double t668;
  double t716;
  double t951;
  double t1111;
  double t717;
  double t953;
  double t994;
  double t390;
  double t1312;
  double t1425;
  double t1426;
  double t1482;
  double t1110;
  double t1444;
  double t1467;
  double t320;
  double t1506;
  double t1525;
  double t1526;
  double t1574;
  double t1476;
  double t1541;
  double t1549;
  double t292;
  double t1575;
  double t1582;
  double t1590;
  double t1990;
  double t1853;
  double t1974;
  double t1988;
  double t2252;
  double t2475;
  double t2576;
  double t2658;
  double t2665;
  double t2575;
  double t2719;
  double t2778;
  double t2841;
  double t2906;
  double t2935;
  double t2785;
  double t2956;
  double t3077;
  double t3113;
  double t3115;
  double t3126;
  double t3093;
  double t3161;
  double t3179;
  double t3186;
  double t3187;
  double t3222;
  double t1572;
  double t1620;
  double t1637;
  double t1664;
  double t1736;
  double t1772;
  double t3184;
  double t3262;
  double t3298;
  double t3321;
  double t3364;
  double t3408;
  double t4244;
  double t4258;
  double t4321;
  double t4376;
  double t4399;
  double t4401;
  double t4346;
  double t4479;
  double t4662;
  double t4849;
  double t4857;
  double t4900;
  double t4821;
  double t5053;
  double t5317;
  double t5634;
  double t5740;
  double t6314;
  double t5572;
  double t6659;
  double t6719;
  double t6929;
  double t6972;
  double t7027;
  double t3603;
  double t3667;
  double t3850;
  double t3320;
  double t3409;
  double t3453;
  double t6844;
  double t7097;
  double t7104;
  double t7136;
  double t7232;
  double t7278;
  double t1638;
  double t1807;
  double t1821;
  double t3924;
  double t3975;
  double t3989;
  double t3477;
  double t4167;
  double t245;
  double t7454;
  double t7476;
  double t7480;
  double t7131;
  double t7344;
  double t7391;
  double t7403;
  double t7413;
  double t7419;
  double t7429;
  double t7482;
  double t7486;
  double t7489;
  double t7493;
  double t7496;
  double t7502;
  double t7506;
  double t7519;
  double t286;
  double t7552;
  double t7540;
  double t7667;
  double t7673;
  double t7664;
  double t7680;
  double t7684;
  double t7685;
  double t7670;
  double t7674;
  double t7677;
  double t7688;
  double t7663;
  double t7694;
  double t7695;
  double t7696;
  double t7678;
  double t7689;
  double t7692;
  double t7702;
  double t7662;
  double t7718;
  double t7725;
  double t7726;
  double t7693;
  double t7711;
  double t7712;
  double t7732;
  double t7661;
  double t7743;
  double t7744;
  double t7745;
  double t7717;
  double t7733;
  double t7736;
  double t7747;
  double t4243;
  double t7769;
  double t7770;
  double t7771;
  double t7763;
  double t7766;
  double t7767;
  double t7775;
  double t7777;
  double t7781;
  double t7768;
  double t7772;
  double t7773;
  double t7786;
  double t7790;
  double t7791;
  double t7774;
  double t7782;
  double t7783;
  double t7797;
  double t7798;
  double t7799;
  double t7784;
  double t7794;
  double t7795;
  double t7541;
  double t7543;
  double t7548;
  double t7816;
  double t7818;
  double t7822;
  double t7812;
  double t7813;
  double t7814;
  double t7828;
  double t7829;
  double t7832;
  double t7815;
  double t7823;
  double t7826;
  double t7836;
  double t7837;
  double t7842;
  double t7827;
  double t7833;
  double t7834;
  double t7560;
  double t7563;
  double t7564;
  double t7742;
  double t7748;
  double t7749;
  double t7754;
  double t7755;
  double t7756;
  double t7757;
  double t7758;
  double t7759;
  double t7577;
  double t7579;
  double t7582;
  double t7835;
  double t7843;
  double t7844;
  double t7845;
  double t7846;
  double t7847;
  double t7849;
  double t7852;
  double t7853;
  double t7586;
  double t7591;
  double t7594;
  double t7796;
  double t7800;
  double t7802;
  double t7803;
  double t7804;
  double t7805;
  double t7806;
  double t7808;
  double t7809;
  double t7610;
  double t7613;
  double t7618;
  double t7631;
  double t7638;
  double t7639;
  double t7642;
  double t7647;
  double t7650;
  double t7657;
  double t7866;
  double t7867;
  double t7868;
  double t7876;
  double t7877;
  double t7878;
  double t7872;
  double t7873;
  double t7874;
  t420 = Cos(var1[1]);
  t765 = Cos(var1[3]);
  t668 = Cos(var1[2]);
  t716 = Sin(var1[3]);
  t951 = Sin(var1[2]);
  t1111 = Cos(var1[4]);
  t717 = -1.*t420*t668*t716;
  t953 = -1.*t765*t420*t951;
  t994 = t717 + t953;
  t390 = Sin(var1[4]);
  t1312 = t765*t420*t668;
  t1425 = -1.*t420*t716*t951;
  t1426 = t1312 + t1425;
  t1482 = Cos(var1[5]);
  t1110 = t390*t994;
  t1444 = t1111*t1426;
  t1467 = t1110 + t1444;
  t320 = Sin(var1[5]);
  t1506 = t1111*t994;
  t1525 = -1.*t390*t1426;
  t1526 = t1506 + t1525;
  t1574 = Cos(var1[6]);
  t1476 = -1.*t320*t1467;
  t1541 = t1482*t1526;
  t1549 = t1476 + t1541;
  t292 = Sin(var1[6]);
  t1575 = t1482*t1467;
  t1582 = t320*t1526;
  t1590 = t1575 + t1582;
  t1990 = Sin(var1[0]);
  t1853 = Cos(var1[0]);
  t1974 = Sin(var1[1]);
  t1988 = t1853*t668*t1974;
  t2252 = -1.*t1990*t951;
  t2475 = t1988 + t2252;
  t2576 = -1.*t668*t1990;
  t2658 = -1.*t1853*t1974*t951;
  t2665 = t2576 + t2658;
  t2575 = -1.*t716*t2475;
  t2719 = t765*t2665;
  t2778 = t2575 + t2719;
  t2841 = t765*t2475;
  t2906 = t716*t2665;
  t2935 = t2841 + t2906;
  t2785 = t390*t2778;
  t2956 = t1111*t2935;
  t3077 = t2785 + t2956;
  t3113 = t1111*t2778;
  t3115 = -1.*t390*t2935;
  t3126 = t3113 + t3115;
  t3093 = -1.*t320*t3077;
  t3161 = t1482*t3126;
  t3179 = t3093 + t3161;
  t3186 = t1482*t3077;
  t3187 = t320*t3126;
  t3222 = t3186 + t3187;
  t1572 = t292*t1549;
  t1620 = t1574*t1590;
  t1637 = t1572 + t1620;
  t1664 = t1574*t1549;
  t1736 = -1.*t292*t1590;
  t1772 = t1664 + t1736;
  t3184 = t292*t3179;
  t3262 = t1574*t3222;
  t3298 = t3184 + t3262;
  t3321 = t1574*t3179;
  t3364 = -1.*t292*t3222;
  t3408 = t3321 + t3364;
  t4244 = t668*t1990*t1974;
  t4258 = t1853*t951;
  t4321 = t4244 + t4258;
  t4376 = t1853*t668;
  t4399 = -1.*t1990*t1974*t951;
  t4401 = t4376 + t4399;
  t4346 = -1.*t716*t4321;
  t4479 = t765*t4401;
  t4662 = t4346 + t4479;
  t4849 = t765*t4321;
  t4857 = t716*t4401;
  t4900 = t4849 + t4857;
  t4821 = t390*t4662;
  t5053 = t1111*t4900;
  t5317 = t4821 + t5053;
  t5634 = t1111*t4662;
  t5740 = -1.*t390*t4900;
  t6314 = t5634 + t5740;
  t5572 = -1.*t320*t5317;
  t6659 = t1482*t6314;
  t6719 = t5572 + t6659;
  t6929 = t1482*t5317;
  t6972 = t320*t6314;
  t7027 = t6929 + t6972;
  t3603 = -0.766044*t1637;
  t3667 = 0.642788*t1772;
  t3850 = t3603 + t3667;
  t3320 = -0.766044*t3298;
  t3409 = 0.642788*t3408;
  t3453 = t3320 + t3409;
  t6844 = t292*t6719;
  t7097 = t1574*t7027;
  t7104 = t6844 + t7097;
  t7136 = t1574*t6719;
  t7232 = -1.*t292*t7027;
  t7278 = t7136 + t7232;
  t1638 = 0.642788*t1637;
  t1807 = 0.766044*t1772;
  t1821 = t1638 + t1807;
  t3924 = 0.642788*t3298;
  t3975 = 0.766044*t3408;
  t3989 = t3924 + t3975;
  t3477 = t1821*t3453;
  t4167 = -1.*t3850*t3989;
  t245 = Cos(var1[8]);
  t7454 = -0.766044*t7104;
  t7476 = 0.642788*t7278;
  t7480 = t7454 + t7476;
  t7131 = 0.642788*t7104;
  t7344 = 0.766044*t7278;
  t7391 = t7131 + t7344;
  t7403 = t1853*t420*t3850;
  t7413 = t1974*t3453;
  t7419 = t7403 + t7413;
  t7429 = -1.*t7391*t7419;
  t7482 = t1853*t420*t1821;
  t7486 = t1974*t3989;
  t7489 = t7482 + t7486;
  t7493 = t7480*t7489;
  t7496 = t3477 + t4167;
  t7502 = -1.*t420*t1990*t7496;
  t7506 = 0. + t7429 + t7493 + t7502;
  t7519 = 1/t7506;
  t286 = Sin(var1[7]);
  t7552 = Sin(var1[8]);
  t7540 = Cos(var1[7]);
  t7667 = Cos(var1[9]);
  t7673 = Sin(var1[9]);
  t7664 = Cos(var1[10]);
  t7680 = t7540*t7667;
  t7684 = -1.*t286*t7552*t7673;
  t7685 = t7680 + t7684;
  t7670 = t7667*t286*t7552;
  t7674 = t7540*t7673;
  t7677 = t7670 + t7674;
  t7688 = Sin(var1[10]);
  t7663 = Cos(var1[11]);
  t7694 = t7664*t7685;
  t7695 = -1.*t7677*t7688;
  t7696 = t7694 + t7695;
  t7678 = t7664*t7677;
  t7689 = t7685*t7688;
  t7692 = t7678 + t7689;
  t7702 = Sin(var1[11]);
  t7662 = Cos(var1[12]);
  t7718 = t7663*t7696;
  t7725 = -1.*t7692*t7702;
  t7726 = t7718 + t7725;
  t7693 = t7663*t7692;
  t7711 = t7696*t7702;
  t7712 = t7693 + t7711;
  t7732 = Sin(var1[12]);
  t7661 = Cos(var1[13]);
  t7743 = t7662*t7726;
  t7744 = -1.*t7712*t7732;
  t7745 = t7743 + t7744;
  t7717 = t7662*t7712;
  t7733 = t7726*t7732;
  t7736 = t7717 + t7733;
  t7747 = Sin(var1[13]);
  t4243 = 0. + t3477 + t4167;
  t7769 = -1.*t7667*t286;
  t7770 = -1.*t7540*t7552*t7673;
  t7771 = t7769 + t7770;
  t7763 = t7540*t7667*t7552;
  t7766 = -1.*t286*t7673;
  t7767 = t7763 + t7766;
  t7775 = t7664*t7771;
  t7777 = -1.*t7767*t7688;
  t7781 = t7775 + t7777;
  t7768 = t7664*t7767;
  t7772 = t7771*t7688;
  t7773 = t7768 + t7772;
  t7786 = t7663*t7781;
  t7790 = -1.*t7773*t7702;
  t7791 = t7786 + t7790;
  t7774 = t7663*t7773;
  t7782 = t7781*t7702;
  t7783 = t7774 + t7782;
  t7797 = t7662*t7791;
  t7798 = -1.*t7783*t7732;
  t7799 = t7797 + t7798;
  t7784 = t7662*t7783;
  t7794 = t7791*t7732;
  t7795 = t7784 + t7794;
  t7541 = -1.*t1821*t7480;
  t7543 = t3850*t7391;
  t7548 = 0. + t7541 + t7543;
  t7816 = -1.*t245*t7664*t7673;
  t7818 = -1.*t245*t7667*t7688;
  t7822 = t7816 + t7818;
  t7812 = t245*t7667*t7664;
  t7813 = -1.*t245*t7673*t7688;
  t7814 = t7812 + t7813;
  t7828 = t7663*t7822;
  t7829 = -1.*t7814*t7702;
  t7832 = t7828 + t7829;
  t7815 = t7663*t7814;
  t7823 = t7822*t7702;
  t7826 = t7815 + t7823;
  t7836 = t7662*t7832;
  t7837 = -1.*t7826*t7732;
  t7842 = t7836 + t7837;
  t7827 = t7662*t7826;
  t7833 = t7832*t7732;
  t7834 = t7827 + t7833;
  t7560 = t3989*t7480;
  t7563 = -1.*t3453*t7391;
  t7564 = 0. + t7560 + t7563;
  t7742 = t7661*t7736;
  t7748 = t7745*t7747;
  t7749 = t7742 + t7748;
  t7754 = 0.642788*t7749;
  t7755 = t7661*t7745;
  t7756 = -1.*t7736*t7747;
  t7757 = t7755 + t7756;
  t7758 = 0.766044*t7757;
  t7759 = t7754 + t7758;
  t7577 = -1.*t1853*t420*t3850;
  t7579 = -1.*t1974*t3453;
  t7582 = 0. + t7577 + t7579;
  t7835 = t7661*t7834;
  t7843 = t7842*t7747;
  t7844 = t7835 + t7843;
  t7845 = 0.642788*t7844;
  t7846 = t7661*t7842;
  t7847 = -1.*t7834*t7747;
  t7849 = t7846 + t7847;
  t7852 = 0.766044*t7849;
  t7853 = t7845 + t7852;
  t7586 = -1.*t420*t1990*t3453;
  t7591 = t1853*t420*t7480;
  t7594 = 0. + t7586 + t7591;
  t7796 = t7661*t7795;
  t7800 = t7799*t7747;
  t7802 = t7796 + t7800;
  t7803 = 0.642788*t7802;
  t7804 = t7661*t7799;
  t7805 = -1.*t7795*t7747;
  t7806 = t7804 + t7805;
  t7808 = 0.766044*t7806;
  t7809 = t7803 + t7808;
  t7610 = t420*t1990*t3850;
  t7613 = t1974*t7480;
  t7618 = 0. + t7610 + t7613;
  t7631 = 0. + t7482 + t7486;
  t7638 = t420*t1990*t3989;
  t7639 = -1.*t1853*t420*t7391;
  t7642 = 0. + t7638 + t7639;
  t7647 = -1.*t420*t1990*t1821;
  t7650 = -1.*t1974*t7391;
  t7657 = 0. + t7647 + t7650;
  t7866 = -0.766044*t7749;
  t7867 = 0.642788*t7757;
  t7868 = t7866 + t7867;
  t7876 = -0.766044*t7844;
  t7877 = 0.642788*t7849;
  t7878 = t7876 + t7877;
  t7872 = -0.766044*t7802;
  t7873 = 0.642788*t7806;
  t7874 = t7872 + t7873;
  p_output1[0]=0. - 1.*t245*t286*t4243*t7519 - 1.*t245*t7519*t7540*t7548 + t7519*t7552*t7564;
  p_output1[1]=0. - 1.*t245*t286*t7519*t7582 + t7519*t7552*t7594 - 1.*t245*t7519*t7540*t7618;
  p_output1[2]=0. - 1.*t245*t286*t7519*t7631 + t7519*t7552*t7642 - 1.*t245*t7519*t7540*t7657;
  p_output1[3]=0. + t4243*t7519*t7759 + t7519*t7548*t7809 + t7519*t7564*t7853;
  p_output1[4]=0. + t7519*t7582*t7759 + t7519*t7618*t7809 + t7519*t7594*t7853;
  p_output1[5]=0. + t7519*t7631*t7759 + t7519*t7657*t7809 + t7519*t7642*t7853;
  p_output1[6]=0. + t4243*t7519*t7868 + t7519*t7548*t7874 + t7519*t7564*t7878;
  p_output1[7]=0. + t7519*t7582*t7868 + t7519*t7618*t7874 + t7519*t7594*t7878;
  p_output1[8]=0. + t7519*t7631*t7868 + t7519*t7657*t7874 + t7519*t7642*t7878;
}



void R_LeftToeBottom_to_RightToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
