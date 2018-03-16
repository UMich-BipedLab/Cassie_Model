/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 12:16:32 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_VectorNav_to_LeftToeBottom.h"

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
  double t412;
  double t965;
  double t973;
  double t980;
  double t1000;
  double t1488;
  double t3077;
  double t6151;
  double t6170;
  double t6212;
  double t6219;
  double t6275;
  double t6317;
  double t6338;
  double t6372;
  double t6386;
  double t6388;
  double t6421;
  double t6425;
  double t6439;
  double t6451;
  double t6463;
  double t6467;
  double t6468;
  double t6483;
  double t6487;
  double t6488;
  double t6496;
  double t6497;
  double t6498;
  double t6500;
  double t6504;
  double t6507;
  double t6512;
  double t6537;
  double t6540;
  double t6546;
  double t6572;
  double t483;
  double t542;
  double t1823;
  double t2037;
  double t2269;
  double t2530;
  double t3334;
  double t3361;
  double t1204;
  double t1491;
  double t1641;
  double t6597;
  double t3787;
  double t3953;
  double t4287;
  double t6217;
  double t6261;
  double t6269;
  double t6606;
  double t6607;
  double t6609;
  double t6612;
  double t6618;
  double t6625;
  double t6357;
  double t6368;
  double t6370;
  double t6447;
  double t6453;
  double t6460;
  double t6629;
  double t6631;
  double t6640;
  double t6644;
  double t6649;
  double t6650;
  double t6473;
  double t6480;
  double t6481;
  double t6499;
  double t6501;
  double t6503;
  double t6657;
  double t6659;
  double t6660;
  double t6664;
  double t6667;
  double t6668;
  double t6519;
  double t6528;
  double t6535;
  double t6673;
  double t6676;
  double t6677;
  double t6679;
  double t6681;
  double t6682;
  double t6586;
  double t6587;
  double t6588;
  double t6600;
  double t6602;
  double t6603;
  double t6703;
  double t6704;
  double t6707;
  double t6709;
  double t6710;
  double t6711;
  double t6713;
  double t6714;
  double t6715;
  double t6717;
  double t6718;
  double t6719;
  double t6724;
  double t6727;
  double t6728;
  double t6731;
  double t6732;
  double t6735;
  double t6737;
  double t6738;
  double t6739;
  double t6741;
  double t6742;
  double t6743;
  t412 = Cos(var1[1]);
  t965 = Cos(var1[2]);
  t973 = Cos(var1[3]);
  t980 = -1.*t973;
  t1000 = 1. + t980;
  t1488 = Sin(var1[3]);
  t3077 = Sin(var1[2]);
  t6151 = Cos(var1[4]);
  t6170 = -1.*t6151;
  t6212 = 1. + t6170;
  t6219 = Sin(var1[4]);
  t6275 = -1.*t412*t965*t1488;
  t6317 = -1.*t973*t412*t3077;
  t6338 = t6275 + t6317;
  t6372 = t973*t412*t965;
  t6386 = -1.*t412*t1488*t3077;
  t6388 = t6372 + t6386;
  t6421 = Cos(var1[5]);
  t6425 = -1.*t6421;
  t6439 = 1. + t6425;
  t6451 = Sin(var1[5]);
  t6463 = t6219*t6338;
  t6467 = t6151*t6388;
  t6468 = t6463 + t6467;
  t6483 = t6151*t6338;
  t6487 = -1.*t6219*t6388;
  t6488 = t6483 + t6487;
  t6496 = Cos(var1[6]);
  t6497 = -1.*t6496;
  t6498 = 1. + t6497;
  t6500 = Sin(var1[6]);
  t6504 = -1.*t6451*t6468;
  t6507 = t6421*t6488;
  t6512 = t6504 + t6507;
  t6537 = t6421*t6468;
  t6540 = t6451*t6488;
  t6546 = t6537 + t6540;
  t6572 = Cos(var1[0]);
  t483 = -1.*t412;
  t542 = 1. + t483;
  t1823 = Sin(var1[1]);
  t2037 = -1.*t965;
  t2269 = 1. + t2037;
  t2530 = -0.049*t2269;
  t3334 = -0.09*t3077;
  t3361 = 0. + t2530 + t3334;
  t1204 = -0.049*t1000;
  t1491 = -0.21*t1488;
  t1641 = 0. + t1204 + t1491;
  t6597 = Sin(var1[0]);
  t3787 = -0.21*t1000;
  t3953 = 0.049*t1488;
  t4287 = 0. + t3787 + t3953;
  t6217 = -0.2707*t6212;
  t6261 = 0.0016*t6219;
  t6269 = 0. + t6217 + t6261;
  t6606 = t6572*t965*t1823;
  t6607 = -1.*t6597*t3077;
  t6609 = t6606 + t6607;
  t6612 = -1.*t965*t6597;
  t6618 = -1.*t6572*t1823*t3077;
  t6625 = t6612 + t6618;
  t6357 = -0.0016*t6212;
  t6368 = -0.2707*t6219;
  t6370 = 0. + t6357 + t6368;
  t6447 = 0.0184*t6439;
  t6453 = -0.7055*t6451;
  t6460 = 0. + t6447 + t6453;
  t6629 = -1.*t1488*t6609;
  t6631 = t973*t6625;
  t6640 = t6629 + t6631;
  t6644 = t973*t6609;
  t6649 = t1488*t6625;
  t6650 = t6644 + t6649;
  t6473 = -0.7055*t6439;
  t6480 = -0.0184*t6451;
  t6481 = 0. + t6473 + t6480;
  t6499 = -1.1135*t6498;
  t6501 = 0.0216*t6500;
  t6503 = 0. + t6499 + t6501;
  t6657 = t6219*t6640;
  t6659 = t6151*t6650;
  t6660 = t6657 + t6659;
  t6664 = t6151*t6640;
  t6667 = -1.*t6219*t6650;
  t6668 = t6664 + t6667;
  t6519 = -0.0216*t6498;
  t6528 = -1.1135*t6500;
  t6535 = 0. + t6519 + t6528;
  t6673 = -1.*t6451*t6660;
  t6676 = t6421*t6668;
  t6677 = t6673 + t6676;
  t6679 = t6421*t6660;
  t6681 = t6451*t6668;
  t6682 = t6679 + t6681;
  t6586 = 0.135*t542;
  t6587 = 0.049*t1823;
  t6588 = 0. + t6586 + t6587;
  t6600 = -0.09*t2269;
  t6602 = 0.049*t3077;
  t6603 = 0. + t6600 + t6602;
  t6703 = t965*t6597*t1823;
  t6704 = t6572*t3077;
  t6707 = t6703 + t6704;
  t6709 = t6572*t965;
  t6710 = -1.*t6597*t1823*t3077;
  t6711 = t6709 + t6710;
  t6713 = -1.*t1488*t6707;
  t6714 = t973*t6711;
  t6715 = t6713 + t6714;
  t6717 = t973*t6707;
  t6718 = t1488*t6711;
  t6719 = t6717 + t6718;
  t6724 = t6219*t6715;
  t6727 = t6151*t6719;
  t6728 = t6724 + t6727;
  t6731 = t6151*t6715;
  t6732 = -1.*t6219*t6719;
  t6735 = t6731 + t6732;
  t6737 = -1.*t6451*t6728;
  t6738 = t6421*t6735;
  t6739 = t6737 + t6738;
  t6741 = t6421*t6728;
  t6742 = t6451*t6735;
  t6743 = t6741 + t6742;

  p_output1(0)=-0.03155 + 0.004500000000000004*t1823 + t3361*t412 - 1.*t3077*t412*t4287 - 0.049*t542 + t6269*t6338 + t6370*t6388 + t6460*t6468 + t6481*t6488 + t6503*t6512 + t6535*t6546 + 0.0306*(t6500*t6512 + t6496*t6546) - 1.1312*(t6496*t6512 - 1.*t6500*t6546) + t1641*t412*t965;
  p_output1(1)=0. - 0.135*(1. - 1.*t6572) - 1.*t1823*t3361*t6572 - 0.1305*t412*t6572 - 1.*t6572*t6588 + t6597*t6603 - 1.*t1641*t6609 - 1.*t4287*t6625 - 1.*t6269*t6640 - 1.*t6370*t6650 - 1.*t6460*t6660 - 1.*t6481*t6668 - 1.*t6503*t6677 - 1.*t6535*t6682 - 0.0306*(t6500*t6677 + t6496*t6682) + 1.1312*(t6496*t6677 - 1.*t6500*t6682);
  p_output1(2)=-0.07996 + 0.135*t6597 - 1.*t1823*t3361*t6597 - 0.1305*t412*t6597 - 1.*t6588*t6597 - 1.*t6572*t6603 - 1.*t1641*t6707 - 1.*t4287*t6711 - 1.*t6269*t6715 - 1.*t6370*t6719 - 1.*t6460*t6728 - 1.*t6481*t6735 - 1.*t6503*t6739 - 1.*t6535*t6743 - 0.0306*(t6500*t6739 + t6496*t6743) + 1.1312*(t6496*t6739 - 1.*t6500*t6743);
}


       
void p_VectorNav_to_LeftToeBottom(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
