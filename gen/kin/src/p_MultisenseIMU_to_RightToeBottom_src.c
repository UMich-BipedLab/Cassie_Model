/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:17:34 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_MultisenseIMU_to_RightToeBottom_src.h"

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
  double t559;
  double t997;
  double t1261;
  double t1868;
  double t1921;
  double t1953;
  double t2413;
  double t2838;
  double t4023;
  double t4064;
  double t4090;
  double t4338;
  double t3413;
  double t3495;
  double t3721;
  double t4770;
  double t4774;
  double t5015;
  double t5307;
  double t5336;
  double t5339;
  double t5349;
  double t5221;
  double t5289;
  double t5291;
  double t5687;
  double t5838;
  double t5851;
  double t6245;
  double t6345;
  double t6493;
  double t6527;
  double t6142;
  double t6176;
  double t6236;
  double t6585;
  double t6633;
  double t6665;
  double t7303;
  double t7344;
  double t7372;
  double t7396;
  double t7125;
  double t7210;
  double t7301;
  double t7429;
  double t7436;
  double t7456;
  double t1014;
  double t1033;
  double t1061;
  double t1266;
  double t1278;
  double t2224;
  double t2478;
  double t2546;
  double t2884;
  double t2923;
  double t3362;
  double t4334;
  double t4564;
  double t4635;
  double t5034;
  double t5097;
  double t5111;
  double t7645;
  double t7649;
  double t7651;
  double t7668;
  double t7669;
  double t7672;
  double t5345;
  double t5545;
  double t5636;
  double t5903;
  double t5974;
  double t5984;
  double t7685;
  double t7692;
  double t7693;
  double t7698;
  double t7701;
  double t7702;
  double t6526;
  double t6534;
  double t6546;
  double t6746;
  double t6853;
  double t7033;
  double t7709;
  double t7711;
  double t7714;
  double t7716;
  double t7718;
  double t7719;
  double t7392;
  double t7409;
  double t7420;
  double t7458;
  double t7466;
  double t7479;
  double t7723;
  double t7734;
  double t7740;
  double t7751;
  double t7752;
  double t7756;
  double t7803;
  double t7804;
  double t7805;
  double t7809;
  double t7811;
  double t7812;
  double t7816;
  double t7818;
  double t7819;
  double t7821;
  double t7823;
  double t7825;
  double t7830;
  double t7831;
  double t7833;
  double t7838;
  double t7839;
  double t7840;
  t559 = Sin(var1[7]);
  t997 = Cos(var1[8]);
  t1261 = Sin(var1[8]);
  t1868 = Cos(var1[9]);
  t1921 = -1.*t1868;
  t1953 = 1. + t1921;
  t2413 = Sin(var1[9]);
  t2838 = Cos(var1[7]);
  t4023 = Cos(var1[10]);
  t4064 = -1.*t4023;
  t4090 = 1. + t4064;
  t4338 = Sin(var1[10]);
  t3413 = t1868*t559*t1261;
  t3495 = t2838*t2413;
  t3721 = t3413 + t3495;
  t4770 = t2838*t1868;
  t4774 = -1.*t559*t1261*t2413;
  t5015 = t4770 + t4774;
  t5307 = Cos(var1[11]);
  t5336 = -1.*t5307;
  t5339 = 1. + t5336;
  t5349 = Sin(var1[11]);
  t5221 = t4023*t3721;
  t5289 = t5015*t4338;
  t5291 = t5221 + t5289;
  t5687 = t4023*t5015;
  t5838 = -1.*t3721*t4338;
  t5851 = t5687 + t5838;
  t6245 = Cos(var1[12]);
  t6345 = -1.*t6245;
  t6493 = 1. + t6345;
  t6527 = Sin(var1[12]);
  t6142 = t5307*t5291;
  t6176 = t5851*t5349;
  t6236 = t6142 + t6176;
  t6585 = t5307*t5851;
  t6633 = -1.*t5291*t5349;
  t6665 = t6585 + t6633;
  t7303 = Cos(var1[13]);
  t7344 = -1.*t7303;
  t7372 = 1. + t7344;
  t7396 = Sin(var1[13]);
  t7125 = t6245*t6236;
  t7210 = t6665*t6527;
  t7301 = t7125 + t7210;
  t7429 = t6245*t6665;
  t7436 = -1.*t6236*t6527;
  t7456 = t7429 + t7436;
  t1014 = -1.*t997;
  t1033 = 1. + t1014;
  t1061 = -0.135*t1033;
  t1266 = 0.049*t1261;
  t1278 = 0. + t1061 + t1266;
  t2224 = -0.049*t1953;
  t2478 = -0.09*t2413;
  t2546 = 0. + t2224 + t2478;
  t2884 = -0.09*t1953;
  t2923 = 0.049*t2413;
  t3362 = 0. + t2884 + t2923;
  t4334 = -0.049*t4090;
  t4564 = -0.21*t4338;
  t4635 = 0. + t4334 + t4564;
  t5034 = -0.21*t4090;
  t5097 = 0.049*t4338;
  t5111 = 0. + t5034 + t5097;
  t7645 = t2838*t1868*t1261;
  t7649 = -1.*t559*t2413;
  t7651 = t7645 + t7649;
  t7668 = -1.*t1868*t559;
  t7669 = -1.*t2838*t1261*t2413;
  t7672 = t7668 + t7669;
  t5345 = -0.0016*t5339;
  t5545 = -0.2707*t5349;
  t5636 = 0. + t5345 + t5545;
  t5903 = -0.2707*t5339;
  t5974 = 0.0016*t5349;
  t5984 = 0. + t5903 + t5974;
  t7685 = t4023*t7651;
  t7692 = t7672*t4338;
  t7693 = t7685 + t7692;
  t7698 = t4023*t7672;
  t7701 = -1.*t7651*t4338;
  t7702 = t7698 + t7701;
  t6526 = 0.0184*t6493;
  t6534 = -0.7055*t6527;
  t6546 = 0. + t6526 + t6534;
  t6746 = -0.7055*t6493;
  t6853 = -0.0184*t6527;
  t7033 = 0. + t6746 + t6853;
  t7709 = t5307*t7693;
  t7711 = t7702*t5349;
  t7714 = t7709 + t7711;
  t7716 = t5307*t7702;
  t7718 = -1.*t7693*t5349;
  t7719 = t7716 + t7718;
  t7392 = -0.0216*t7372;
  t7409 = -1.1135*t7396;
  t7420 = 0. + t7392 + t7409;
  t7458 = -1.1135*t7372;
  t7466 = 0.0216*t7396;
  t7479 = 0. + t7458 + t7466;
  t7723 = t6245*t7714;
  t7734 = t7719*t6527;
  t7740 = t7723 + t7734;
  t7751 = t6245*t7719;
  t7752 = -1.*t7714*t6527;
  t7756 = t7751 + t7752;
  t7803 = t997*t1868*t4023;
  t7804 = -1.*t997*t2413*t4338;
  t7805 = t7803 + t7804;
  t7809 = -1.*t997*t4023*t2413;
  t7811 = -1.*t997*t1868*t4338;
  t7812 = t7809 + t7811;
  t7816 = t5307*t7805;
  t7818 = t7812*t5349;
  t7819 = t7816 + t7818;
  t7821 = t5307*t7812;
  t7823 = -1.*t7805*t5349;
  t7825 = t7821 + t7823;
  t7830 = t6245*t7819;
  t7831 = t7825*t6527;
  t7833 = t7830 + t7831;
  t7838 = t6245*t7825;
  t7839 = -1.*t7819*t6527;
  t7840 = t7838 + t7839;
  p_output1[0]=0.24925 - 1.*t2838*t3362 - 1.*t3721*t4635 - 1.*t5015*t5111 - 0.135*t559 - 1.*t1278*t559 - 1.*t1261*t2546*t559 - 1.*t5291*t5636 - 1.*t5851*t5984 - 1.*t6236*t6546 - 1.*t6665*t7033 - 1.*t7301*t7420 + 1.1312*(-1.*t7301*t7396 + t7303*t7456) - 0.0306*(t7301*t7303 + t7396*t7456) - 1.*t7456*t7479 + 0.1305*t559*t997;
  p_output1[1]=-0.0302 - 0.135*(1. - 1.*t2838) + t1278*t2838 + t1261*t2546*t2838 - 1.*t3362*t559 + t4635*t7651 + t5111*t7672 + t5636*t7693 + t5984*t7702 + t6546*t7714 + t7033*t7719 + t7420*t7740 + t7479*t7756 - 1.1312*(-1.*t7396*t7740 + t7303*t7756) + 0.0306*(t7303*t7740 + t7396*t7756) - 0.1305*t2838*t997;
  p_output1[2]=-0.047 - 0.049*t1033 - 0.004500000000000004*t1261 + t5636*t7805 + t5984*t7812 + t6546*t7819 + t7033*t7825 + t7420*t7833 + t7479*t7840 - 1.1312*(-1.*t7396*t7833 + t7303*t7840) + 0.0306*(t7303*t7833 + t7396*t7840) + t2546*t997 + t1868*t4635*t997 - 1.*t2413*t5111*t997;
}



void p_MultisenseIMU_to_RightToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
