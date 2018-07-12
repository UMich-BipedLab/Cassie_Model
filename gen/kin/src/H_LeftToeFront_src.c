/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:34:06 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_LeftToeFront_src.h"

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
  double t283;
  double t231;
  double t354;
  double t263;
  double t421;
  double t186;
  double t220;
  double t521;
  double t608;
  double t622;
  double t264;
  double t452;
  double t465;
  double t466;
  double t474;
  double t482;
  double t492;
  double t543;
  double t562;
  double t1340;
  double t1453;
  double t1464;
  double t1475;
  double t1361;
  double t1403;
  double t1418;
  double t1491;
  double t1579;
  double t1437;
  double t1514;
  double t1532;
  double t1331;
  double t1609;
  double t1641;
  double t1657;
  double t1748;
  double t1550;
  double t1667;
  double t1679;
  double t1323;
  double t1782;
  double t1809;
  double t1821;
  double t1870;
  double t1724;
  double t1832;
  double t1833;
  double t1238;
  double t1929;
  double t1959;
  double t2034;
  double t2093;
  double t1847;
  double t2037;
  double t2089;
  double t1218;
  double t2107;
  double t2124;
  double t2148;
  double t691;
  double t747;
  double t782;
  double t794;
  double t881;
  double t915;
  double t945;
  double t966;
  double t968;
  double t2352;
  double t2389;
  double t2425;
  double t2296;
  double t2310;
  double t2314;
  double t2334;
  double t2431;
  double t2446;
  double t2458;
  double t2485;
  double t2499;
  double t2450;
  double t2512;
  double t2561;
  double t2579;
  double t2590;
  double t2630;
  double t2564;
  double t2649;
  double t2690;
  double t2714;
  double t2718;
  double t2741;
  double t2698;
  double t2751;
  double t2761;
  double t2857;
  double t2879;
  double t2911;
  double t1147;
  double t1153;
  double t1154;
  double t3133;
  double t3158;
  double t3187;
  double t3072;
  double t3091;
  double t3096;
  double t3104;
  double t3188;
  double t3195;
  double t3269;
  double t3285;
  double t3290;
  double t3248;
  double t3316;
  double t3325;
  double t3369;
  double t3386;
  double t3389;
  double t3355;
  double t3421;
  double t3431;
  double t3487;
  double t3528;
  double t3532;
  double t3445;
  double t3545;
  double t3558;
  double t3570;
  double t3580;
  double t3592;
  double t2091;
  double t2151;
  double t2168;
  double t2218;
  double t2242;
  double t2255;
  double t2837;
  double t2920;
  double t2942;
  double t2982;
  double t2986;
  double t3014;
  double t3562;
  double t3637;
  double t3654;
  double t3661;
  double t3668;
  double t3675;
  double t4015;
  double t4033;
  double t4145;
  double t4147;
  double t4260;
  double t4308;
  double t4428;
  double t4454;
  double t4595;
  double t4604;
  double t4662;
  double t4666;
  double t3862;
  double t3917;
  double t3921;
  double t3927;
  double t3958;
  double t3979;
  double t4036;
  double t4056;
  double t4057;
  double t4065;
  double t4081;
  double t4087;
  double t4165;
  double t4177;
  double t4178;
  double t4201;
  double t4227;
  double t4231;
  double t4343;
  double t4346;
  double t4390;
  double t4419;
  double t4420;
  double t4421;
  double t4467;
  double t4524;
  double t4528;
  double t4547;
  double t4563;
  double t4580;
  double t4608;
  double t4609;
  double t4621;
  double t4632;
  double t4639;
  double t4640;
  double t4671;
  double t4699;
  double t4718;
  double t4736;
  double t4743;
  double t4750;
  t283 = Cos(var1[3]);
  t231 = Cos(var1[5]);
  t354 = Sin(var1[4]);
  t263 = Sin(var1[3]);
  t421 = Sin(var1[5]);
  t186 = Cos(var1[7]);
  t220 = Cos(var1[6]);
  t521 = Sin(var1[6]);
  t608 = Cos(var1[4]);
  t622 = Sin(var1[7]);
  t264 = -1.*t231*t263;
  t452 = t283*t354*t421;
  t465 = t264 + t452;
  t466 = t220*t465;
  t474 = t283*t231*t354;
  t482 = t263*t421;
  t492 = t474 + t482;
  t543 = t492*t521;
  t562 = t466 + t543;
  t1340 = Cos(var1[8]);
  t1453 = t220*t492;
  t1464 = -1.*t465*t521;
  t1475 = t1453 + t1464;
  t1361 = t283*t608*t186;
  t1403 = t562*t622;
  t1418 = t1361 + t1403;
  t1491 = Sin(var1[8]);
  t1579 = Cos(var1[9]);
  t1437 = t1340*t1418;
  t1514 = t1475*t1491;
  t1532 = t1437 + t1514;
  t1331 = Sin(var1[9]);
  t1609 = t1340*t1475;
  t1641 = -1.*t1418*t1491;
  t1657 = t1609 + t1641;
  t1748 = Cos(var1[10]);
  t1550 = -1.*t1331*t1532;
  t1667 = t1579*t1657;
  t1679 = t1550 + t1667;
  t1323 = Sin(var1[10]);
  t1782 = t1579*t1532;
  t1809 = t1331*t1657;
  t1821 = t1782 + t1809;
  t1870 = Cos(var1[11]);
  t1724 = t1323*t1679;
  t1832 = t1748*t1821;
  t1833 = t1724 + t1832;
  t1238 = Sin(var1[11]);
  t1929 = t1748*t1679;
  t1959 = -1.*t1323*t1821;
  t2034 = t1929 + t1959;
  t2093 = Cos(var1[12]);
  t1847 = -1.*t1238*t1833;
  t2037 = t1870*t2034;
  t2089 = t1847 + t2037;
  t1218 = Sin(var1[12]);
  t2107 = t1870*t1833;
  t2124 = t1238*t2034;
  t2148 = t2107 + t2124;
  t691 = t283*t231;
  t747 = t263*t354*t421;
  t782 = t691 + t747;
  t794 = t220*t782;
  t881 = t231*t263*t354;
  t915 = -1.*t283*t421;
  t945 = t881 + t915;
  t966 = t945*t521;
  t968 = t794 + t966;
  t2352 = t220*t945;
  t2389 = -1.*t782*t521;
  t2425 = t2352 + t2389;
  t2296 = t608*t186*t263;
  t2310 = t968*t622;
  t2314 = t2296 + t2310;
  t2334 = t1340*t2314;
  t2431 = t2425*t1491;
  t2446 = t2334 + t2431;
  t2458 = t1340*t2425;
  t2485 = -1.*t2314*t1491;
  t2499 = t2458 + t2485;
  t2450 = -1.*t1331*t2446;
  t2512 = t1579*t2499;
  t2561 = t2450 + t2512;
  t2579 = t1579*t2446;
  t2590 = t1331*t2499;
  t2630 = t2579 + t2590;
  t2564 = t1323*t2561;
  t2649 = t1748*t2630;
  t2690 = t2564 + t2649;
  t2714 = t1748*t2561;
  t2718 = -1.*t1323*t2630;
  t2741 = t2714 + t2718;
  t2698 = -1.*t1238*t2690;
  t2751 = t1870*t2741;
  t2761 = t2698 + t2751;
  t2857 = t1870*t2690;
  t2879 = t1238*t2741;
  t2911 = t2857 + t2879;
  t1147 = t608*t220*t421;
  t1153 = t608*t231*t521;
  t1154 = t1147 + t1153;
  t3133 = t608*t231*t220;
  t3158 = -1.*t608*t421*t521;
  t3187 = t3133 + t3158;
  t3072 = -1.*t186*t354;
  t3091 = t1154*t622;
  t3096 = t3072 + t3091;
  t3104 = t1340*t3096;
  t3188 = t3187*t1491;
  t3195 = t3104 + t3188;
  t3269 = t1340*t3187;
  t3285 = -1.*t3096*t1491;
  t3290 = t3269 + t3285;
  t3248 = -1.*t1331*t3195;
  t3316 = t1579*t3290;
  t3325 = t3248 + t3316;
  t3369 = t1579*t3195;
  t3386 = t1331*t3290;
  t3389 = t3369 + t3386;
  t3355 = t1323*t3325;
  t3421 = t1748*t3389;
  t3431 = t3355 + t3421;
  t3487 = t1748*t3325;
  t3528 = -1.*t1323*t3389;
  t3532 = t3487 + t3528;
  t3445 = -1.*t1238*t3431;
  t3545 = t1870*t3532;
  t3558 = t3445 + t3545;
  t3570 = t1870*t3431;
  t3580 = t1238*t3532;
  t3592 = t3570 + t3580;
  t2091 = t1218*t2089;
  t2151 = t2093*t2148;
  t2168 = t2091 + t2151;
  t2218 = t2093*t2089;
  t2242 = -1.*t1218*t2148;
  t2255 = t2218 + t2242;
  t2837 = t1218*t2761;
  t2920 = t2093*t2911;
  t2942 = t2837 + t2920;
  t2982 = t2093*t2761;
  t2986 = -1.*t1218*t2911;
  t3014 = t2982 + t2986;
  t3562 = t1218*t3558;
  t3637 = t2093*t3592;
  t3654 = t3562 + t3637;
  t3661 = t2093*t3558;
  t3668 = -1.*t1218*t3592;
  t3675 = t3661 + t3668;
  t4015 = -1.*t186;
  t4033 = 1. + t4015;
  t4145 = -1.*t1340;
  t4147 = 1. + t4145;
  t4260 = -1.*t1579;
  t4308 = 1. + t4260;
  t4428 = -1.*t1748;
  t4454 = 1. + t4428;
  t4595 = -1.*t1870;
  t4604 = 1. + t4595;
  t4662 = -1.*t2093;
  t4666 = 1. + t4662;
  t3862 = -1.*t220;
  t3917 = 1. + t3862;
  t3921 = 0.135*t3917;
  t3927 = 0. + t3921;
  t3958 = -0.135*t521;
  t3979 = 0. + t3958;
  t4036 = 0.135*t4033;
  t4056 = 0.049*t622;
  t4057 = 0. + t4036 + t4056;
  t4065 = -0.049*t4033;
  t4081 = 0.135*t622;
  t4087 = 0. + t4065 + t4081;
  t4165 = -0.049*t4147;
  t4177 = -0.09*t1491;
  t4178 = 0. + t4165 + t4177;
  t4201 = -0.09*t4147;
  t4227 = 0.049*t1491;
  t4231 = 0. + t4201 + t4227;
  t4343 = -0.049*t4308;
  t4346 = -0.21*t1331;
  t4390 = 0. + t4343 + t4346;
  t4419 = -0.21*t4308;
  t4420 = 0.049*t1331;
  t4421 = 0. + t4419 + t4420;
  t4467 = -0.2707*t4454;
  t4524 = 0.0016*t1323;
  t4528 = 0. + t4467 + t4524;
  t4547 = -0.0016*t4454;
  t4563 = -0.2707*t1323;
  t4580 = 0. + t4547 + t4563;
  t4608 = 0.0184*t4604;
  t4609 = -0.7055*t1238;
  t4621 = 0. + t4608 + t4609;
  t4632 = -0.7055*t4604;
  t4639 = -0.0184*t1238;
  t4640 = 0. + t4632 + t4639;
  t4671 = -1.1135*t4666;
  t4699 = 0.0216*t1218;
  t4718 = 0. + t4671 + t4699;
  t4736 = -0.0216*t4666;
  t4743 = -1.1135*t1218;
  t4750 = 0. + t4736 + t4743;
  p_output1[0]=-1.*t186*t562 + t283*t608*t622;
  p_output1[1]=t263*t608*t622 - 1.*t186*t968;
  p_output1[2]=-1.*t1154*t186 - 1.*t354*t622;
  p_output1[3]=0.;
  p_output1[4]=0.642788*t2168 + 0.766044*t2255;
  p_output1[5]=0.642788*t2942 + 0.766044*t3014;
  p_output1[6]=0.642788*t3654 + 0.766044*t3675;
  p_output1[7]=0.;
  p_output1[8]=-0.766044*t2168 + 0.642788*t2255;
  p_output1[9]=-0.766044*t2942 + 0.642788*t3014;
  p_output1[10]=-0.766044*t3654 + 0.642788*t3675;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.088451*t2168 - 1.062256*t2255 + t1418*t4178 + t1475*t4231 + t1532*t4390 + t1657*t4421 + t1679*t4528 + t1821*t4580 + t1833*t4621 + t2034*t4640 + t3927*t465 + t2089*t4718 + t2148*t4750 + t3979*t492 + t4057*t562 + t283*t4087*t608 + 0.1305*(t186*t562 - 1.*t283*t608*t622) + var1[0];
  p_output1[13]=0. + 0.088451*t2942 - 1.062256*t3014 + t2314*t4178 + t2425*t4231 + t2446*t4390 + t2499*t4421 + t2561*t4528 + t2630*t4580 + t2690*t4621 + t2741*t4640 + t2761*t4718 + t2911*t4750 + t263*t4087*t608 + t3927*t782 + t3979*t945 + t4057*t968 + 0.1305*(-1.*t263*t608*t622 + t186*t968) + var1[1];
  p_output1[14]=0. + 0.088451*t3654 - 1.062256*t3675 + t1154*t4057 - 1.*t354*t4087 + t3096*t4178 + t3187*t4231 + t3195*t4390 + t3290*t4421 + t3325*t4528 + t3389*t4580 + t3431*t4621 + t3532*t4640 + t3558*t4718 + t3592*t4750 + t231*t3979*t608 + t3927*t421*t608 + 0.1305*(t1154*t186 + t354*t622) + var1[2];
  p_output1[15]=1.;
}



void H_LeftToeFront_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
