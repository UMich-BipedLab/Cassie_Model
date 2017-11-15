/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:36:05 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_VectorNav_to_LeftToeBottom_src.h"

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
  double t594;
  double t1302;
  double t1272;
  double t1287;
  double t1310;
  double t1349;
  double t1299;
  double t1313;
  double t1315;
  double t1196;
  double t1364;
  double t1369;
  double t1421;
  double t1671;
  double t1316;
  double t1478;
  double t1513;
  double t1118;
  double t1697;
  double t1741;
  double t1783;
  double t2091;
  double t1544;
  double t1821;
  double t1825;
  double t1049;
  double t2107;
  double t2232;
  double t2260;
  double t509;
  double t274;
  double t998;
  double t2770;
  double t2808;
  double t2836;
  double t2961;
  double t2989;
  double t3021;
  double t2958;
  double t3059;
  double t3124;
  double t3388;
  double t3396;
  double t3397;
  double t3210;
  double t3421;
  double t3423;
  double t3488;
  double t3498;
  double t3539;
  double t3479;
  double t3603;
  double t3608;
  double t3698;
  double t3708;
  double t3747;
  double t3989;
  double t4001;
  double t4021;
  double t4099;
  double t4117;
  double t4125;
  double t4079;
  double t4150;
  double t4158;
  double t4197;
  double t4213;
  double t4231;
  double t4176;
  double t4235;
  double t4236;
  double t4245;
  double t4252;
  double t4275;
  double t4238;
  double t4289;
  double t4298;
  double t4309;
  double t4322;
  double t4349;
  double t1832;
  double t2354;
  double t2482;
  double t2564;
  double t2611;
  double t2743;
  double t3620;
  double t3819;
  double t3866;
  double t3891;
  double t3893;
  double t3905;
  double t4303;
  double t4353;
  double t4358;
  double t4388;
  double t4389;
  double t4404;
  t594 = Cos(var1[1]);
  t1302 = Cos(var1[3]);
  t1272 = Cos(var1[2]);
  t1287 = Sin(var1[3]);
  t1310 = Sin(var1[2]);
  t1349 = Cos(var1[4]);
  t1299 = -1.*t594*t1272*t1287;
  t1313 = -1.*t1302*t594*t1310;
  t1315 = t1299 + t1313;
  t1196 = Sin(var1[4]);
  t1364 = t1302*t594*t1272;
  t1369 = -1.*t594*t1287*t1310;
  t1421 = t1364 + t1369;
  t1671 = Cos(var1[5]);
  t1316 = t1196*t1315;
  t1478 = t1349*t1421;
  t1513 = t1316 + t1478;
  t1118 = Sin(var1[5]);
  t1697 = t1349*t1315;
  t1741 = -1.*t1196*t1421;
  t1783 = t1697 + t1741;
  t2091 = Cos(var1[6]);
  t1544 = -1.*t1118*t1513;
  t1821 = t1671*t1783;
  t1825 = t1544 + t1821;
  t1049 = Sin(var1[6]);
  t2107 = t1671*t1513;
  t2232 = t1118*t1783;
  t2260 = t2107 + t2232;
  t509 = Cos(var1[0]);
  t274 = Sin(var1[1]);
  t998 = Sin(var1[0]);
  t2770 = t509*t1272*t274;
  t2808 = -1.*t998*t1310;
  t2836 = t2770 + t2808;
  t2961 = -1.*t1272*t998;
  t2989 = -1.*t509*t274*t1310;
  t3021 = t2961 + t2989;
  t2958 = -1.*t1287*t2836;
  t3059 = t1302*t3021;
  t3124 = t2958 + t3059;
  t3388 = t1302*t2836;
  t3396 = t1287*t3021;
  t3397 = t3388 + t3396;
  t3210 = t1196*t3124;
  t3421 = t1349*t3397;
  t3423 = t3210 + t3421;
  t3488 = t1349*t3124;
  t3498 = -1.*t1196*t3397;
  t3539 = t3488 + t3498;
  t3479 = -1.*t1118*t3423;
  t3603 = t1671*t3539;
  t3608 = t3479 + t3603;
  t3698 = t1671*t3423;
  t3708 = t1118*t3539;
  t3747 = t3698 + t3708;
  t3989 = t1272*t998*t274;
  t4001 = t509*t1310;
  t4021 = t3989 + t4001;
  t4099 = t509*t1272;
  t4117 = -1.*t998*t274*t1310;
  t4125 = t4099 + t4117;
  t4079 = -1.*t1287*t4021;
  t4150 = t1302*t4125;
  t4158 = t4079 + t4150;
  t4197 = t1302*t4021;
  t4213 = t1287*t4125;
  t4231 = t4197 + t4213;
  t4176 = t1196*t4158;
  t4235 = t1349*t4231;
  t4236 = t4176 + t4235;
  t4245 = t1349*t4158;
  t4252 = -1.*t1196*t4231;
  t4275 = t4245 + t4252;
  t4238 = -1.*t1118*t4236;
  t4289 = t1671*t4275;
  t4298 = t4238 + t4289;
  t4309 = t1671*t4236;
  t4322 = t1118*t4275;
  t4349 = t4309 + t4322;
  t1832 = t1049*t1825;
  t2354 = t2091*t2260;
  t2482 = t1832 + t2354;
  t2564 = t2091*t1825;
  t2611 = -1.*t1049*t2260;
  t2743 = t2564 + t2611;
  t3620 = t1049*t3608;
  t3819 = t2091*t3747;
  t3866 = t3620 + t3819;
  t3891 = t2091*t3608;
  t3893 = -1.*t1049*t3747;
  t3905 = t3891 + t3893;
  t4303 = t1049*t4298;
  t4353 = t2091*t4349;
  t4358 = t4303 + t4353;
  t4388 = t2091*t4298;
  t4389 = -1.*t1049*t4349;
  t4404 = t4388 + t4389;
  p_output1[0]=0. + t274;
  p_output1[1]=0. + t509*t594;
  p_output1[2]=0. + t594*t998;
  p_output1[3]=0. + 0.642788*t2482 + 0.766044*t2743;
  p_output1[4]=0. - 0.642788*t3866 - 0.766044*t3905;
  p_output1[5]=0. - 0.642788*t4358 - 0.766044*t4404;
  p_output1[6]=0. - 0.766044*t2482 + 0.642788*t2743;
  p_output1[7]=0. + 0.766044*t3866 - 0.642788*t3905;
  p_output1[8]=0. + 0.766044*t4358 - 0.642788*t4404;
}



void R_VectorNav_to_LeftToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
