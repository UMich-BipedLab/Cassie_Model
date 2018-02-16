/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:25:09 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_MultisenseIMU_to_LeftToeBottom.h"

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
  double t77;
  double t128;
  double t428;
  double t304;
  double t997;
  double t1034;
  double t1398;
  double t1016;
  double t1153;
  double t1242;
  double t846;
  double t1405;
  double t1420;
  double t1445;
  double t1721;
  double t1364;
  double t1576;
  double t1666;
  double t814;
  double t1763;
  double t1795;
  double t1812;
  double t1964;
  double t1711;
  double t1871;
  double t1946;
  double t680;
  double t2132;
  double t2205;
  double t2409;
  double t2454;
  double t1956;
  double t2422;
  double t2425;
  double t565;
  double t2492;
  double t2495;
  double t2516;
  double t2840;
  double t2872;
  double t2965;
  double t3056;
  double t3091;
  double t3312;
  double t2974;
  double t3384;
  double t3426;
  double t3439;
  double t3455;
  double t3462;
  double t3436;
  double t3539;
  double t3554;
  double t3635;
  double t3641;
  double t3651;
  double t3564;
  double t3766;
  double t3771;
  double t3822;
  double t3845;
  double t3883;
  double t4442;
  double t4556;
  double t4618;
  double t4736;
  double t4784;
  double t4796;
  double t4661;
  double t4876;
  double t4883;
  double t4911;
  double t4920;
  double t5000;
  double t4905;
  double t5008;
  double t5009;
  double t5048;
  double t5049;
  double t5051;
  double t2429;
  double t2535;
  double t2642;
  double t2692;
  double t2763;
  double t2768;
  double t3780;
  double t3921;
  double t4023;
  double t4072;
  double t4101;
  double t4214;
  double t5044;
  double t5052;
  double t5053;
  double t5068;
  double t5106;
  double t5111;
  double t5770;
  double t5834;
  double t6130;
  double t6180;
  double t6634;
  double t6665;
  double t6977;
  double t6992;
  double t7304;
  double t7308;
  double t5511;
  double t5512;
  double t5573;
  double t5652;
  double t5668;
  double t5849;
  double t5898;
  double t5908;
  double t5985;
  double t6014;
  double t6029;
  double t6203;
  double t6216;
  double t6287;
  double t6427;
  double t6520;
  double t6599;
  double t6678;
  double t6683;
  double t6696;
  double t6777;
  double t6880;
  double t6888;
  double t7089;
  double t7115;
  double t7119;
  double t7207;
  double t7241;
  double t7245;
  double t7316;
  double t7320;
  double t7322;
  double t7355;
  double t7381;
  double t7395;
  t77 = Cos(var1[1]);
  t128 = Sin(var1[0]);
  t428 = Sin(var1[1]);
  t304 = Cos(var1[0]);
  t997 = Cos(var1[2]);
  t1034 = Sin(var1[2]);
  t1398 = Cos(var1[3]);
  t1016 = t997*t128*t428;
  t1153 = t304*t1034;
  t1242 = t1016 + t1153;
  t846 = Sin(var1[3]);
  t1405 = t304*t997;
  t1420 = -1.*t128*t428*t1034;
  t1445 = t1405 + t1420;
  t1721 = Cos(var1[4]);
  t1364 = -1.*t846*t1242;
  t1576 = t1398*t1445;
  t1666 = t1364 + t1576;
  t814 = Sin(var1[4]);
  t1763 = t1398*t1242;
  t1795 = t846*t1445;
  t1812 = t1763 + t1795;
  t1964 = Cos(var1[5]);
  t1711 = t814*t1666;
  t1871 = t1721*t1812;
  t1946 = t1711 + t1871;
  t680 = Sin(var1[5]);
  t2132 = t1721*t1666;
  t2205 = -1.*t814*t1812;
  t2409 = t2132 + t2205;
  t2454 = Cos(var1[6]);
  t1956 = -1.*t680*t1946;
  t2422 = t1964*t2409;
  t2425 = t1956 + t2422;
  t565 = Sin(var1[6]);
  t2492 = t1964*t1946;
  t2495 = t680*t2409;
  t2516 = t2492 + t2495;
  t2840 = t304*t997*t428;
  t2872 = -1.*t128*t1034;
  t2965 = t2840 + t2872;
  t3056 = -1.*t997*t128;
  t3091 = -1.*t304*t428*t1034;
  t3312 = t3056 + t3091;
  t2974 = -1.*t846*t2965;
  t3384 = t1398*t3312;
  t3426 = t2974 + t3384;
  t3439 = t1398*t2965;
  t3455 = t846*t3312;
  t3462 = t3439 + t3455;
  t3436 = t814*t3426;
  t3539 = t1721*t3462;
  t3554 = t3436 + t3539;
  t3635 = t1721*t3426;
  t3641 = -1.*t814*t3462;
  t3651 = t3635 + t3641;
  t3564 = -1.*t680*t3554;
  t3766 = t1964*t3651;
  t3771 = t3564 + t3766;
  t3822 = t1964*t3554;
  t3845 = t680*t3651;
  t3883 = t3822 + t3845;
  t4442 = -1.*t77*t997*t846;
  t4556 = -1.*t1398*t77*t1034;
  t4618 = t4442 + t4556;
  t4736 = t1398*t77*t997;
  t4784 = -1.*t77*t846*t1034;
  t4796 = t4736 + t4784;
  t4661 = t814*t4618;
  t4876 = t1721*t4796;
  t4883 = t4661 + t4876;
  t4911 = t1721*t4618;
  t4920 = -1.*t814*t4796;
  t5000 = t4911 + t4920;
  t4905 = -1.*t680*t4883;
  t5008 = t1964*t5000;
  t5009 = t4905 + t5008;
  t5048 = t1964*t4883;
  t5049 = t680*t5000;
  t5051 = t5048 + t5049;
  t2429 = t565*t2425;
  t2535 = t2454*t2516;
  t2642 = t2429 + t2535;
  t2692 = t2454*t2425;
  t2763 = -1.*t565*t2516;
  t2768 = t2692 + t2763;
  t3780 = t565*t3771;
  t3921 = t2454*t3883;
  t4023 = t3780 + t3921;
  t4072 = t2454*t3771;
  t4101 = -1.*t565*t3883;
  t4214 = t4072 + t4101;
  t5044 = t565*t5009;
  t5052 = t2454*t5051;
  t5053 = t5044 + t5052;
  t5068 = t2454*t5009;
  t5106 = -1.*t565*t5051;
  t5111 = t5068 + t5106;
  t5770 = -1.*t997;
  t5834 = 1. + t5770;
  t6130 = -1.*t1398;
  t6180 = 1. + t6130;
  t6634 = -1.*t1721;
  t6665 = 1. + t6634;
  t6977 = -1.*t1964;
  t6992 = 1. + t6977;
  t7304 = -1.*t2454;
  t7308 = 1. + t7304;
  t5511 = -1.*t77;
  t5512 = 1. + t5511;
  t5573 = 0.135*t5512;
  t5652 = 0.049*t428;
  t5668 = 0. + t5573 + t5652;
  t5849 = -0.049*t5834;
  t5898 = -0.09*t1034;
  t5908 = 0. + t5849 + t5898;
  t5985 = -0.09*t5834;
  t6014 = 0.049*t1034;
  t6029 = 0. + t5985 + t6014;
  t6203 = -0.049*t6180;
  t6216 = -0.21*t846;
  t6287 = 0. + t6203 + t6216;
  t6427 = -0.21*t6180;
  t6520 = 0.049*t846;
  t6599 = 0. + t6427 + t6520;
  t6678 = -0.2707*t6665;
  t6683 = 0.0016*t814;
  t6696 = 0. + t6678 + t6683;
  t6777 = -0.0016*t6665;
  t6880 = -0.2707*t814;
  t6888 = 0. + t6777 + t6880;
  t7089 = 0.0184*t6992;
  t7115 = -0.7055*t680;
  t7119 = 0. + t7089 + t7115;
  t7207 = -0.7055*t6992;
  t7241 = -0.0184*t680;
  t7245 = 0. + t7207 + t7241;
  t7316 = -1.1135*t7308;
  t7320 = 0.0216*t565;
  t7322 = 0. + t7316 + t7320;
  t7355 = -0.0216*t7308;
  t7381 = -1.1135*t565;
  t7395 = 0. + t7355 + t7381;

  p_output1(0)=0. + t128*t77;
  p_output1(1)=0. - 1.*t304*t77;
  p_output1(2)=0. + t428;
  p_output1(3)=0.;
  p_output1(4)=0. - 0.642788*t2642 - 0.766044*t2768;
  p_output1(5)=0. + 0.642788*t4023 + 0.766044*t4214;
  p_output1(6)=0. + 0.642788*t5053 + 0.766044*t5111;
  p_output1(7)=0.;
  p_output1(8)=0. + 0.766044*t2642 - 0.642788*t2768;
  p_output1(9)=0. - 0.766044*t4023 + 0.642788*t4214;
  p_output1(10)=0. - 0.766044*t5053 + 0.642788*t5111;
  p_output1(11)=0.;
  p_output1(12)=0.24925 + 0.135*t128 - 0.0306*t2642 + 1.1312*t2768 - 1.*t128*t5668 - 1.*t128*t428*t5908 - 1.*t304*t6029 - 1.*t1242*t6287 - 1.*t1445*t6599 - 1.*t1666*t6696 - 1.*t1812*t6888 - 1.*t1946*t7119 - 1.*t2409*t7245 - 1.*t2425*t7322 - 1.*t2516*t7395 - 0.1305*t128*t77;
  p_output1(13)=-0.0302 + 0.135*(1. - 1.*t304) + 0.0306*t4023 - 1.1312*t4214 + t304*t5668 + t304*t428*t5908 - 1.*t128*t6029 + t2965*t6287 + t3312*t6599 + t3426*t6696 + t3462*t6888 + t3554*t7119 + t3651*t7245 + t3771*t7322 + t3883*t7395 + 0.1305*t304*t77;
  p_output1(14)=-0.047 + 0.004500000000000004*t428 + 0.0306*t5053 - 1.1312*t5111 - 0.049*t5512 + t4618*t6696 + t4796*t6888 + t4883*t7119 + t5000*t7245 + t5009*t7322 + t5051*t7395 + t5908*t77 - 1.*t1034*t6599*t77 + t6287*t77*t997;
  p_output1(15)=1.;
}


       
void H_MultisenseIMU_to_LeftToeBottom(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
