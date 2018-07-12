/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:34:25 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RightToeBack_src.h"

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
  double t81;
  double t374;
  double t424;
  double t411;
  double t433;
  double t162;
  double t246;
  double t291;
  double t311;
  double t480;
  double t420;
  double t439;
  double t446;
  double t496;
  double t503;
  double t510;
  double t478;
  double t591;
  double t652;
  double t1352;
  double t1324;
  double t1331;
  double t1347;
  double t1317;
  double t1356;
  double t1387;
  double t1404;
  double t1478;
  double t1350;
  double t1416;
  double t1417;
  double t1294;
  double t1506;
  double t1512;
  double t1532;
  double t1565;
  double t1461;
  double t1554;
  double t1556;
  double t1274;
  double t1581;
  double t1611;
  double t1633;
  double t1695;
  double t1557;
  double t1637;
  double t1646;
  double t1246;
  double t1708;
  double t1718;
  double t1766;
  double t1993;
  double t1668;
  double t1828;
  double t1971;
  double t1228;
  double t2007;
  double t2082;
  double t2092;
  double t744;
  double t767;
  double t823;
  double t862;
  double t964;
  double t982;
  double t846;
  double t1014;
  double t1036;
  double t2236;
  double t2239;
  double t2243;
  double t2331;
  double t2345;
  double t2359;
  double t2311;
  double t2377;
  double t2388;
  double t2446;
  double t2454;
  double t2465;
  double t2436;
  double t2469;
  double t2518;
  double t2578;
  double t2614;
  double t2615;
  double t2541;
  double t2618;
  double t2666;
  double t2688;
  double t2726;
  double t2737;
  double t2667;
  double t2752;
  double t2755;
  double t2824;
  double t2830;
  double t2846;
  double t1062;
  double t1067;
  double t1100;
  double t2974;
  double t2982;
  double t2983;
  double t2990;
  double t2994;
  double t3001;
  double t2986;
  double t3003;
  double t3010;
  double t3064;
  double t3065;
  double t3078;
  double t3028;
  double t3086;
  double t3098;
  double t3201;
  double t3261;
  double t3290;
  double t3099;
  double t3311;
  double t3315;
  double t3346;
  double t3394;
  double t3399;
  double t3325;
  double t3412;
  double t3425;
  double t3433;
  double t3443;
  double t3447;
  double t1980;
  double t2109;
  double t2123;
  double t2159;
  double t2160;
  double t2173;
  double t2758;
  double t2878;
  double t2910;
  double t2916;
  double t2937;
  double t2939;
  double t3430;
  double t3469;
  double t3489;
  double t3546;
  double t3571;
  double t3631;
  double t3779;
  double t3783;
  double t4170;
  double t4197;
  double t4328;
  double t4341;
  double t4512;
  double t4520;
  double t4721;
  double t4725;
  double t4928;
  double t4969;
  double t3785;
  double t3790;
  double t3793;
  double t3830;
  double t3836;
  double t3966;
  double t4021;
  double t4056;
  double t4060;
  double t4088;
  double t4105;
  double t4110;
  double t4206;
  double t4224;
  double t4246;
  double t4308;
  double t4311;
  double t4314;
  double t4389;
  double t4394;
  double t4398;
  double t4415;
  double t4469;
  double t4480;
  double t4553;
  double t4604;
  double t4621;
  double t4668;
  double t4690;
  double t4706;
  double t4727;
  double t4729;
  double t4736;
  double t4761;
  double t4835;
  double t4854;
  double t4972;
  double t4994;
  double t4995;
  double t5013;
  double t5033;
  double t5047;
  t81 = Cos(var1[3]);
  t374 = Cos(var1[5]);
  t424 = Sin(var1[3]);
  t411 = Sin(var1[4]);
  t433 = Sin(var1[5]);
  t162 = Cos(var1[4]);
  t246 = Sin(var1[14]);
  t291 = Cos(var1[14]);
  t311 = Sin(var1[13]);
  t480 = Cos(var1[13]);
  t420 = t81*t374*t411;
  t439 = t424*t433;
  t446 = t420 + t439;
  t496 = -1.*t374*t424;
  t503 = t81*t411*t433;
  t510 = t496 + t503;
  t478 = t311*t446;
  t591 = t480*t510;
  t652 = t478 + t591;
  t1352 = Cos(var1[15]);
  t1324 = t480*t446;
  t1331 = -1.*t311*t510;
  t1347 = t1324 + t1331;
  t1317 = Sin(var1[15]);
  t1356 = t291*t81*t162;
  t1387 = t246*t652;
  t1404 = t1356 + t1387;
  t1478 = Cos(var1[16]);
  t1350 = t1317*t1347;
  t1416 = t1352*t1404;
  t1417 = t1350 + t1416;
  t1294 = Sin(var1[16]);
  t1506 = t1352*t1347;
  t1512 = -1.*t1317*t1404;
  t1532 = t1506 + t1512;
  t1565 = Cos(var1[17]);
  t1461 = -1.*t1294*t1417;
  t1554 = t1478*t1532;
  t1556 = t1461 + t1554;
  t1274 = Sin(var1[17]);
  t1581 = t1478*t1417;
  t1611 = t1294*t1532;
  t1633 = t1581 + t1611;
  t1695 = Cos(var1[18]);
  t1557 = t1274*t1556;
  t1637 = t1565*t1633;
  t1646 = t1557 + t1637;
  t1246 = Sin(var1[18]);
  t1708 = t1565*t1556;
  t1718 = -1.*t1274*t1633;
  t1766 = t1708 + t1718;
  t1993 = Cos(var1[19]);
  t1668 = -1.*t1246*t1646;
  t1828 = t1695*t1766;
  t1971 = t1668 + t1828;
  t1228 = Sin(var1[19]);
  t2007 = t1695*t1646;
  t2082 = t1246*t1766;
  t2092 = t2007 + t2082;
  t744 = t374*t424*t411;
  t767 = -1.*t81*t433;
  t823 = t744 + t767;
  t862 = t81*t374;
  t964 = t424*t411*t433;
  t982 = t862 + t964;
  t846 = t311*t823;
  t1014 = t480*t982;
  t1036 = t846 + t1014;
  t2236 = t480*t823;
  t2239 = -1.*t311*t982;
  t2243 = t2236 + t2239;
  t2331 = t291*t162*t424;
  t2345 = t246*t1036;
  t2359 = t2331 + t2345;
  t2311 = t1317*t2243;
  t2377 = t1352*t2359;
  t2388 = t2311 + t2377;
  t2446 = t1352*t2243;
  t2454 = -1.*t1317*t2359;
  t2465 = t2446 + t2454;
  t2436 = -1.*t1294*t2388;
  t2469 = t1478*t2465;
  t2518 = t2436 + t2469;
  t2578 = t1478*t2388;
  t2614 = t1294*t2465;
  t2615 = t2578 + t2614;
  t2541 = t1274*t2518;
  t2618 = t1565*t2615;
  t2666 = t2541 + t2618;
  t2688 = t1565*t2518;
  t2726 = -1.*t1274*t2615;
  t2737 = t2688 + t2726;
  t2667 = -1.*t1246*t2666;
  t2752 = t1695*t2737;
  t2755 = t2667 + t2752;
  t2824 = t1695*t2666;
  t2830 = t1246*t2737;
  t2846 = t2824 + t2830;
  t1062 = t162*t374*t311;
  t1067 = t480*t162*t433;
  t1100 = t1062 + t1067;
  t2974 = t480*t162*t374;
  t2982 = -1.*t162*t311*t433;
  t2983 = t2974 + t2982;
  t2990 = -1.*t291*t411;
  t2994 = t246*t1100;
  t3001 = t2990 + t2994;
  t2986 = t1317*t2983;
  t3003 = t1352*t3001;
  t3010 = t2986 + t3003;
  t3064 = t1352*t2983;
  t3065 = -1.*t1317*t3001;
  t3078 = t3064 + t3065;
  t3028 = -1.*t1294*t3010;
  t3086 = t1478*t3078;
  t3098 = t3028 + t3086;
  t3201 = t1478*t3010;
  t3261 = t1294*t3078;
  t3290 = t3201 + t3261;
  t3099 = t1274*t3098;
  t3311 = t1565*t3290;
  t3315 = t3099 + t3311;
  t3346 = t1565*t3098;
  t3394 = -1.*t1274*t3290;
  t3399 = t3346 + t3394;
  t3325 = -1.*t1246*t3315;
  t3412 = t1695*t3399;
  t3425 = t3325 + t3412;
  t3433 = t1695*t3315;
  t3443 = t1246*t3399;
  t3447 = t3433 + t3443;
  t1980 = t1228*t1971;
  t2109 = t1993*t2092;
  t2123 = t1980 + t2109;
  t2159 = t1993*t1971;
  t2160 = -1.*t1228*t2092;
  t2173 = t2159 + t2160;
  t2758 = t1228*t2755;
  t2878 = t1993*t2846;
  t2910 = t2758 + t2878;
  t2916 = t1993*t2755;
  t2937 = -1.*t1228*t2846;
  t2939 = t2916 + t2937;
  t3430 = t1228*t3425;
  t3469 = t1993*t3447;
  t3489 = t3430 + t3469;
  t3546 = t1993*t3425;
  t3571 = -1.*t1228*t3447;
  t3631 = t3546 + t3571;
  t3779 = -1.*t291;
  t3783 = 1. + t3779;
  t4170 = -1.*t1352;
  t4197 = 1. + t4170;
  t4328 = -1.*t1478;
  t4341 = 1. + t4328;
  t4512 = -1.*t1565;
  t4520 = 1. + t4512;
  t4721 = -1.*t1695;
  t4725 = 1. + t4721;
  t4928 = -1.*t1993;
  t4969 = 1. + t4928;
  t3785 = -0.049*t3783;
  t3790 = -0.135*t246;
  t3793 = 0. + t3785 + t3790;
  t3830 = 0.135*t311;
  t3836 = 0. + t3830;
  t3966 = -1.*t480;
  t4021 = 1. + t3966;
  t4056 = -0.135*t4021;
  t4060 = 0. + t4056;
  t4088 = -0.135*t3783;
  t4105 = 0.049*t246;
  t4110 = 0. + t4088 + t4105;
  t4206 = -0.09*t4197;
  t4224 = 0.049*t1317;
  t4246 = 0. + t4206 + t4224;
  t4308 = -0.049*t4197;
  t4311 = -0.09*t1317;
  t4314 = 0. + t4308 + t4311;
  t4389 = -0.049*t4341;
  t4394 = -0.21*t1294;
  t4398 = 0. + t4389 + t4394;
  t4415 = -0.21*t4341;
  t4469 = 0.049*t1294;
  t4480 = 0. + t4415 + t4469;
  t4553 = -0.2707*t4520;
  t4604 = 0.0016*t1274;
  t4621 = 0. + t4553 + t4604;
  t4668 = -0.0016*t4520;
  t4690 = -0.2707*t1274;
  t4706 = 0. + t4668 + t4690;
  t4727 = 0.0184*t4725;
  t4729 = -0.7055*t1246;
  t4736 = 0. + t4727 + t4729;
  t4761 = -0.7055*t4725;
  t4835 = -0.0184*t1246;
  t4854 = 0. + t4761 + t4835;
  t4972 = -1.1135*t4969;
  t4994 = 0.0216*t1228;
  t4995 = 0. + t4972 + t4994;
  t5013 = -0.0216*t4969;
  t5033 = -1.1135*t1228;
  t5047 = 0. + t5013 + t5033;
  p_output1[0]=-1.*t291*t652 + t162*t246*t81;
  p_output1[1]=-1.*t1036*t291 + t162*t246*t424;
  p_output1[2]=-1.*t1100*t291 - 1.*t246*t411;
  p_output1[3]=0.;
  p_output1[4]=0.642788*t2123 + 0.766044*t2173;
  p_output1[5]=0.642788*t2910 + 0.766044*t2939;
  p_output1[6]=0.642788*t3489 + 0.766044*t3631;
  p_output1[7]=0.;
  p_output1[8]=-0.766044*t2123 + 0.642788*t2173;
  p_output1[9]=-0.766044*t2910 + 0.642788*t2939;
  p_output1[10]=-0.766044*t3489 + 0.642788*t3631;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.027251*t2123 - 1.200144*t2173 + t1347*t4246 + t1404*t4314 + t1417*t4398 + t3836*t446 + t1532*t4480 + t1556*t4621 + t1633*t4706 + t1646*t4736 + t1766*t4854 + t1971*t4995 + t2092*t5047 + t4060*t510 + t4110*t652 + t162*t3793*t81 - 0.1305*(t291*t652 - 1.*t162*t246*t81) + var1[0];
  p_output1[13]=0. - 0.027251*t2910 - 1.200144*t2939 + t1036*t4110 + t162*t3793*t424 - 0.1305*(t1036*t291 - 1.*t162*t246*t424) + t2243*t4246 + t2359*t4314 + t2388*t4398 + t2465*t4480 + t2518*t4621 + t2615*t4706 + t2666*t4736 + t2737*t4854 + t2755*t4995 + t2846*t5047 + t3836*t823 + t4060*t982 + var1[1];
  p_output1[14]=0. - 0.027251*t3489 - 1.200144*t3631 + t162*t374*t3836 - 1.*t3793*t411 - 0.1305*(t1100*t291 + t246*t411) + t1100*t4110 + t2983*t4246 + t3001*t4314 + t162*t4060*t433 + t3010*t4398 + t3078*t4480 + t3098*t4621 + t3290*t4706 + t3315*t4736 + t3399*t4854 + t3425*t4995 + t3447*t5047 + var1[2];
  p_output1[15]=1.;
}



void H_RightToeBack_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
