/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:25:08 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jv_MultisenseIMU_to_RightToeBottom.h"

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
static void output1(Eigen::Matrix<double,3,14> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  double t124;
  double t260;
  double t435;
  double t826;
  double t842;
  double t900;
  double t1027;
  double t1360;
  double t1701;
  double t1722;
  double t1797;
  double t1853;
  double t1444;
  double t1464;
  double t1477;
  double t2192;
  double t2372;
  double t2409;
  double t2594;
  double t2605;
  double t2657;
  double t2757;
  double t2516;
  double t2571;
  double t2582;
  double t3020;
  double t3185;
  double t3255;
  double t3560;
  double t3612;
  double t3662;
  double t3774;
  double t3455;
  double t3487;
  double t3553;
  double t3871;
  double t3923;
  double t4072;
  double t4499;
  double t4574;
  double t4590;
  double t4645;
  double t4437;
  double t4442;
  double t4482;
  double t4784;
  double t4825;
  double t4876;
  double t331;
  double t361;
  double t409;
  double t545;
  double t748;
  double t934;
  double t1104;
  double t1217;
  double t1375;
  double t1398;
  double t1423;
  double t1801;
  double t1967;
  double t2125;
  double t2425;
  double t2445;
  double t2469;
  double t5482;
  double t5492;
  double t5505;
  double t5544;
  double t5592;
  double t5723;
  double t2740;
  double t2827;
  double t2867;
  double t3312;
  double t3336;
  double t3363;
  double t5809;
  double t5834;
  double t5837;
  double t5923;
  double t5936;
  double t5950;
  double t3768;
  double t3780;
  double t3791;
  double t4248;
  double t4291;
  double t4333;
  double t6014;
  double t6050;
  double t6067;
  double t6216;
  double t6234;
  double t6236;
  double t4618;
  double t4661;
  double t4734;
  double t5000;
  double t5008;
  double t5046;
  double t6255;
  double t6362;
  double t6438;
  double t6520;
  double t6532;
  double t6546;
  double t7089;
  double t7091;
  double t7094;
  double t7116;
  double t7117;
  double t7122;
  double t7241;
  double t7245;
  double t7284;
  double t7308;
  double t7313;
  double t7316;
  double t7322;
  double t7326;
  double t7342;
  double t7395;
  double t7398;
  double t7400;
  double t6973;
  double t6977;
  double t6992;
  double t7003;
  double t7033;
  double t7115;
  double t7207;
  double t7304;
  double t7320;
  double t7381;
  double t7406;
  double t7415;
  double t7418;
  double t7432;
  double t7443;
  double t7450;
  double t7452;
  double t7457;
  double t7460;
  double t7464;
  double t7471;
  double t7474;
  double t1239;
  double t1432;
  double t2132;
  double t2492;
  double t2965;
  double t3384;
  double t3822;
  double t4432;
  double t4736;
  double t5068;
  double t5111;
  double t5116;
  double t5150;
  double t5155;
  double t5189;
  double t5210;
  double t5212;
  double t5253;
  double t6898;
  double t6920;
  double t5462;
  double t5464;
  double t5532;
  double t5768;
  double t5838;
  double t5952;
  double t6213;
  double t6244;
  double t6456;
  double t6572;
  double t6591;
  double t6629;
  double t6665;
  double t6744;
  double t6764;
  double t6801;
  double t6858;
  double t6880;
  double t7481;
  double t7528;
  double t7529;
  double t7535;
  double t7549;
  double t7512;
  double t7592;
  double t7598;
  double t7560;
  double t7569;
  double t7578;
  double t7521;
  double t7527;
  double t7608;
  double t7609;
  double t7611;
  double t7653;
  double t7659;
  double t7666;
  double t7672;
  double t7674;
  double t7677;
  double t7690;
  double t7693;
  double t7699;
  double t7724;
  double t7726;
  double t7727;
  double t7732;
  double t7736;
  double t7737;
  double t7747;
  double t7748;
  double t7750;
  double t7774;
  double t7781;
  double t7797;
  double t7803;
  double t7807;
  double t7815;
  double t7832;
  double t7833;
  double t7835;
  double t7846;
  double t7850;
  double t7851;
  double t7856;
  double t7857;
  double t7858;
  double t7870;
  double t7871;
  double t7872;
  t124 = Cos(var1[7]);
  t260 = Cos(var1[8]);
  t435 = Sin(var1[8]);
  t826 = Cos(var1[9]);
  t842 = -1.*t826;
  t900 = 1. + t842;
  t1027 = Sin(var1[9]);
  t1360 = Sin(var1[7]);
  t1701 = Cos(var1[10]);
  t1722 = -1.*t1701;
  t1797 = 1. + t1722;
  t1853 = Sin(var1[10]);
  t1444 = t124*t826*t435;
  t1464 = -1.*t1360*t1027;
  t1477 = t1444 + t1464;
  t2192 = -1.*t826*t1360;
  t2372 = -1.*t124*t435*t1027;
  t2409 = t2192 + t2372;
  t2594 = Cos(var1[11]);
  t2605 = -1.*t2594;
  t2657 = 1. + t2605;
  t2757 = Sin(var1[11]);
  t2516 = t1701*t1477;
  t2571 = t2409*t1853;
  t2582 = t2516 + t2571;
  t3020 = t1701*t2409;
  t3185 = -1.*t1477*t1853;
  t3255 = t3020 + t3185;
  t3560 = Cos(var1[12]);
  t3612 = -1.*t3560;
  t3662 = 1. + t3612;
  t3774 = Sin(var1[12]);
  t3455 = t2594*t2582;
  t3487 = t3255*t2757;
  t3553 = t3455 + t3487;
  t3871 = t2594*t3255;
  t3923 = -1.*t2582*t2757;
  t4072 = t3871 + t3923;
  t4499 = Cos(var1[13]);
  t4574 = -1.*t4499;
  t4590 = 1. + t4574;
  t4645 = Sin(var1[13]);
  t4437 = t3560*t3553;
  t4442 = t4072*t3774;
  t4482 = t4437 + t4442;
  t4784 = t3560*t4072;
  t4825 = -1.*t3553*t3774;
  t4876 = t4784 + t4825;
  t331 = -1.*t260;
  t361 = 1. + t331;
  t409 = -0.135*t361;
  t545 = 0.049*t435;
  t748 = 0. + t409 + t545;
  t934 = -0.049*t900;
  t1104 = -0.09*t1027;
  t1217 = 0. + t934 + t1104;
  t1375 = -0.09*t900;
  t1398 = 0.049*t1027;
  t1423 = 0. + t1375 + t1398;
  t1801 = -0.049*t1797;
  t1967 = -0.21*t1853;
  t2125 = 0. + t1801 + t1967;
  t2425 = -0.21*t1797;
  t2445 = 0.049*t1853;
  t2469 = 0. + t2425 + t2445;
  t5482 = t826*t1360*t435;
  t5492 = t124*t1027;
  t5505 = t5482 + t5492;
  t5544 = t124*t826;
  t5592 = -1.*t1360*t435*t1027;
  t5723 = t5544 + t5592;
  t2740 = -0.0016*t2657;
  t2827 = -0.2707*t2757;
  t2867 = 0. + t2740 + t2827;
  t3312 = -0.2707*t2657;
  t3336 = 0.0016*t2757;
  t3363 = 0. + t3312 + t3336;
  t5809 = t1701*t5505;
  t5834 = t5723*t1853;
  t5837 = t5809 + t5834;
  t5923 = t1701*t5723;
  t5936 = -1.*t5505*t1853;
  t5950 = t5923 + t5936;
  t3768 = 0.0184*t3662;
  t3780 = -0.7055*t3774;
  t3791 = 0. + t3768 + t3780;
  t4248 = -0.7055*t3662;
  t4291 = -0.0184*t3774;
  t4333 = 0. + t4248 + t4291;
  t6014 = t2594*t5837;
  t6050 = t5950*t2757;
  t6067 = t6014 + t6050;
  t6216 = t2594*t5950;
  t6234 = -1.*t5837*t2757;
  t6236 = t6216 + t6234;
  t4618 = -0.0216*t4590;
  t4661 = -1.1135*t4645;
  t4734 = 0. + t4618 + t4661;
  t5000 = -1.1135*t4590;
  t5008 = 0.0216*t4645;
  t5046 = 0. + t5000 + t5008;
  t6255 = t3560*t6067;
  t6362 = t6236*t3774;
  t6438 = t6255 + t6362;
  t6520 = t3560*t6236;
  t6532 = -1.*t6067*t3774;
  t6546 = t6520 + t6532;
  t7089 = t260*t826*t1701;
  t7091 = -1.*t260*t1027*t1853;
  t7094 = t7089 + t7091;
  t7116 = -1.*t260*t1701*t1027;
  t7117 = -1.*t260*t826*t1853;
  t7122 = t7116 + t7117;
  t7241 = t2594*t7094;
  t7245 = t7122*t2757;
  t7284 = t7241 + t7245;
  t7308 = t2594*t7122;
  t7313 = -1.*t7094*t2757;
  t7316 = t7308 + t7313;
  t7322 = t3560*t7284;
  t7326 = t7316*t3774;
  t7342 = t7322 + t7326;
  t7395 = t3560*t7316;
  t7398 = -1.*t7284*t3774;
  t7400 = t7395 + t7398;
  t6973 = 0.049*t260;
  t6977 = -0.004500000000000004*t435;
  t6992 = t260*t1217;
  t7003 = t260*t826*t2125;
  t7033 = -1.*t260*t1027*t2469;
  t7115 = t7094*t2867;
  t7207 = t7122*t3363;
  t7304 = t7284*t3791;
  t7320 = t7316*t4333;
  t7381 = t7342*t4734;
  t7406 = t7400*t5046;
  t7415 = t4499*t7342;
  t7418 = t7400*t4645;
  t7432 = t7415 + t7418;
  t7443 = 0.0306*t7432;
  t7450 = t4499*t7400;
  t7452 = -1.*t7342*t4645;
  t7457 = t7450 + t7452;
  t7460 = -1.1312*t7457;
  t7464 = 0. + t6973 + t6977 + t6992 + t7003 + t7033 + t7115 + t7207 + t7304 + t7320 + t7381 + t7406 + t7443 + t7460;
  t7471 = -1.*t124;
  t7474 = 0. + t7471;
  t1239 = t124*t435*t1217;
  t1432 = -1.*t1360*t1423;
  t2132 = t1477*t2125;
  t2492 = t2409*t2469;
  t2965 = t2582*t2867;
  t3384 = t3255*t3363;
  t3822 = t3553*t3791;
  t4432 = t4072*t4333;
  t4736 = t4482*t4734;
  t5068 = t4876*t5046;
  t5111 = t4499*t4482;
  t5116 = t4876*t4645;
  t5150 = t5111 + t5116;
  t5155 = 0.0306*t5150;
  t5189 = t4499*t4876;
  t5210 = -1.*t4482*t4645;
  t5212 = t5189 + t5210;
  t5253 = -1.1312*t5212;
  t6898 = -1.*t1360;
  t6920 = 0. + t6898;
  t5462 = -1.*t1360*t435*t1217;
  t5464 = -1.*t124*t1423;
  t5532 = -1.*t5505*t2125;
  t5768 = -1.*t5723*t2469;
  t5838 = -1.*t5837*t2867;
  t5952 = -1.*t5950*t3363;
  t6213 = -1.*t6067*t3791;
  t6244 = -1.*t6236*t4333;
  t6456 = -1.*t6438*t4734;
  t6572 = -1.*t6546*t5046;
  t6591 = t4499*t6438;
  t6629 = t6546*t4645;
  t6665 = t6591 + t6629;
  t6744 = -0.0306*t6665;
  t6764 = t4499*t6546;
  t6801 = -1.*t6438*t4645;
  t6858 = t6764 + t6801;
  t6880 = 1.1312*t6858;
  t7481 = 0.004500000000000004*t124*t260;
  t7528 = 0.049*t260*t826;
  t7529 = -0.09*t260*t1027;
  t7535 = 0. + t7528 + t6977 + t7529 + t7003 + t7033 + t7115 + t7207 + t7304 + t7320 + t7381 + t7406 + t7443 + t7460;
  t7549 = 0. + t435;
  t7512 = -0.004500000000000004*t260*t1360;
  t7592 = t260*t1360;
  t7598 = 0. + t7592;
  t7560 = 0.049*t1477;
  t7569 = 0.09*t2409;
  t7578 = 0. + t7481 + t7560 + t7569 + t2132 + t2492 + t2965 + t3384 + t3822 + t4432 + t4736 + t5068 + t5155 + t5253;
  t7521 = -1.*t124*t260;
  t7527 = 0. + t7521;
  t7608 = -0.049*t5505;
  t7609 = -0.09*t5723;
  t7611 = 0. + t7512 + t7608 + t7609 + t5532 + t5768 + t5838 + t5952 + t6213 + t6244 + t6456 + t6572 + t6744 + t6880;
  t7653 = 0.21*t7122;
  t7659 = 0.049*t7094;
  t7666 = 0. + t7653 + t7659 + t7115 + t7207 + t7304 + t7320 + t7381 + t7406 + t7443 + t7460;
  t7672 = 0.21*t3255;
  t7674 = 0.049*t2582;
  t7677 = 0. + t7672 + t7674 + t2965 + t3384 + t3822 + t4432 + t4736 + t5068 + t5155 + t5253;
  t7690 = -0.21*t5950;
  t7693 = -0.049*t5837;
  t7699 = 0. + t7690 + t7693 + t5838 + t5952 + t6213 + t6244 + t6456 + t6572 + t6744 + t6880;
  t7724 = 0.0016*t7284;
  t7726 = 0.2707*t7316;
  t7727 = 0. + t7724 + t7726 + t7304 + t7320 + t7381 + t7406 + t7443 + t7460;
  t7732 = 0.0016*t3553;
  t7736 = 0.2707*t4072;
  t7737 = 0. + t7732 + t7736 + t3822 + t4432 + t4736 + t5068 + t5155 + t5253;
  t7747 = -0.0016*t6067;
  t7748 = -0.2707*t6236;
  t7750 = 0. + t7747 + t7748 + t6213 + t6244 + t6456 + t6572 + t6744 + t6880;
  t7774 = 0.7055*t7400;
  t7781 = -0.0184*t7342;
  t7797 = 0. + t7774 + t7781 + t7381 + t7406 + t7443 + t7460;
  t7803 = 0.7055*t4876;
  t7807 = -0.0184*t4482;
  t7815 = 0. + t7803 + t7807 + t4736 + t5068 + t5155 + t5253;
  t7832 = -0.7055*t6546;
  t7833 = 0.0184*t6438;
  t7835 = 0. + t7832 + t7833 + t6456 + t6572 + t6744 + t6880;
  t7846 = 0.052199999999999996*t7432;
  t7850 = -0.01770000000000005*t7457;
  t7851 = 0. + t7846 + t7850;
  t7856 = 0.052199999999999996*t5150;
  t7857 = -0.01770000000000005*t5212;
  t7858 = 0. + t7856 + t7857;
  t7870 = -0.052199999999999996*t6665;
  t7871 = 0.01770000000000005*t6858;
  t7872 = 0. + t7870 + t7871;

  p_output1(0)=0;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=0;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=0;
  p_output1(9)=0;
  p_output1(10)=0;
  p_output1(11)=0;
  p_output1(12)=0;
  p_output1(13)=0;
  p_output1(14)=0;
  p_output1(15)=0;
  p_output1(16)=0;
  p_output1(17)=0;
  p_output1(18)=0;
  p_output1(19)=0;
  p_output1(20)=0;
  p_output1(21)=0. - 1.*(0. + t1239 + 0.135*t124 + t1432 + t2132 + t2492 - 0.1305*t124*t260 + t2965 + t3384 + t3822 + t4432 + t4736 + t5068 + t5155 + t5253 + t124*t748);
  p_output1(22)=0. - 0.135*t1360 + 0.1305*t1360*t260 + t5462 + t5464 + t5532 + t5768 + t5838 + t5952 + t6213 + t6244 + t6456 + t6572 + t6744 + t6880 - 1.*t1360*t748;
  p_output1(23)=0.;
  p_output1(24)=0. + t6920*t7464;
  p_output1(25)=0. - 1.*t7464*t7474;
  p_output1(26)=t7474*(0. + t1239 - 0.09*t1360 + t1432 + t2132 + t2492 + t2965 + t3384 + t3822 + 0.049*t124*t435 + t4432 + t4736 + t5068 + t5155 + t5253 + t7481) - 1.*t6920*(0. - 0.09*t124 - 0.049*t1360*t435 + t5462 + t5464 + t5532 + t5768 + t5838 + t5952 + t6213 + t6244 + t6456 + t6572 + t6744 + t6880 + t7512);
  p_output1(27)=t7527*t7535 - 1.*t7549*t7578;
  p_output1(28)=-1.*t7535*t7598 + t7549*t7611;
  p_output1(29)=t7578*t7598 - 1.*t7527*t7611;
  p_output1(30)=t7527*t7666 - 1.*t7549*t7677;
  p_output1(31)=-1.*t7598*t7666 + t7549*t7699;
  p_output1(32)=t7598*t7677 - 1.*t7527*t7699;
  p_output1(33)=t7527*t7727 - 1.*t7549*t7737;
  p_output1(34)=-1.*t7598*t7727 + t7549*t7750;
  p_output1(35)=t7598*t7737 - 1.*t7527*t7750;
  p_output1(36)=t7527*t7797 - 1.*t7549*t7815;
  p_output1(37)=-1.*t7598*t7797 + t7549*t7835;
  p_output1(38)=t7598*t7815 - 1.*t7527*t7835;
  p_output1(39)=t7527*t7851 - 1.*t7549*t7858;
  p_output1(40)=-1.*t7598*t7851 + t7549*t7872;
  p_output1(41)=t7598*t7858 - 1.*t7527*t7872;
}


       
void Jv_MultisenseIMU_to_RightToeBottom(Eigen::Matrix<double,3,14> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
