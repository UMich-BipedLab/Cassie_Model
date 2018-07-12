/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:34:16 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RightToeBottom_src.h"

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
  double t239;
  double t763;
  double t876;
  double t797;
  double t906;
  double t276;
  double t504;
  double t697;
  double t718;
  double t1052;
  double t816;
  double t998;
  double t1045;
  double t1054;
  double t1275;
  double t1280;
  double t1048;
  double t1299;
  double t1314;
  double t2553;
  double t2461;
  double t2478;
  double t2513;
  double t2441;
  double t2577;
  double t2581;
  double t2583;
  double t2735;
  double t2533;
  double t2647;
  double t2648;
  double t2427;
  double t2782;
  double t2806;
  double t2808;
  double t2919;
  double t2675;
  double t2842;
  double t2876;
  double t2426;
  double t2952;
  double t2953;
  double t2998;
  double t3077;
  double t2914;
  double t3008;
  double t3048;
  double t2424;
  double t3164;
  double t3170;
  double t3185;
  double t3267;
  double t3054;
  double t3234;
  double t3247;
  double t2355;
  double t3282;
  double t3374;
  double t3395;
  double t1651;
  double t1698;
  double t1728;
  double t1815;
  double t1823;
  double t2031;
  double t1755;
  double t2060;
  double t2070;
  double t3498;
  double t3504;
  double t3514;
  double t3560;
  double t3582;
  double t3584;
  double t3549;
  double t3595;
  double t3666;
  double t3678;
  double t3711;
  double t3718;
  double t3677;
  double t3723;
  double t3737;
  double t3746;
  double t3789;
  double t3825;
  double t3739;
  double t3833;
  double t3852;
  double t3875;
  double t3883;
  double t3884;
  double t3870;
  double t3904;
  double t3943;
  double t3946;
  double t4010;
  double t4014;
  double t2227;
  double t2235;
  double t2271;
  double t4120;
  double t4138;
  double t4140;
  double t4198;
  double t4200;
  double t4205;
  double t4174;
  double t4221;
  double t4222;
  double t4244;
  double t4252;
  double t4267;
  double t4232;
  double t4270;
  double t4277;
  double t4282;
  double t4287;
  double t4289;
  double t4281;
  double t4305;
  double t4306;
  double t4323;
  double t4326;
  double t4329;
  double t4307;
  double t4333;
  double t4342;
  double t4359;
  double t4360;
  double t4371;
  double t3248;
  double t3398;
  double t3418;
  double t3435;
  double t3452;
  double t3455;
  double t3945;
  double t4022;
  double t4024;
  double t4093;
  double t4097;
  double t4106;
  double t4345;
  double t4375;
  double t4386;
  double t4399;
  double t4405;
  double t4422;
  t239 = Cos(var1[3]);
  t763 = Cos(var1[5]);
  t876 = Sin(var1[3]);
  t797 = Sin(var1[4]);
  t906 = Sin(var1[5]);
  t276 = Cos(var1[4]);
  t504 = Sin(var1[14]);
  t697 = Cos(var1[14]);
  t718 = Sin(var1[13]);
  t1052 = Cos(var1[13]);
  t816 = t239*t763*t797;
  t998 = t876*t906;
  t1045 = t816 + t998;
  t1054 = -1.*t763*t876;
  t1275 = t239*t797*t906;
  t1280 = t1054 + t1275;
  t1048 = t718*t1045;
  t1299 = t1052*t1280;
  t1314 = t1048 + t1299;
  t2553 = Cos(var1[15]);
  t2461 = t1052*t1045;
  t2478 = -1.*t718*t1280;
  t2513 = t2461 + t2478;
  t2441 = Sin(var1[15]);
  t2577 = t697*t239*t276;
  t2581 = t504*t1314;
  t2583 = t2577 + t2581;
  t2735 = Cos(var1[16]);
  t2533 = t2441*t2513;
  t2647 = t2553*t2583;
  t2648 = t2533 + t2647;
  t2427 = Sin(var1[16]);
  t2782 = t2553*t2513;
  t2806 = -1.*t2441*t2583;
  t2808 = t2782 + t2806;
  t2919 = Cos(var1[17]);
  t2675 = -1.*t2427*t2648;
  t2842 = t2735*t2808;
  t2876 = t2675 + t2842;
  t2426 = Sin(var1[17]);
  t2952 = t2735*t2648;
  t2953 = t2427*t2808;
  t2998 = t2952 + t2953;
  t3077 = Cos(var1[18]);
  t2914 = t2426*t2876;
  t3008 = t2919*t2998;
  t3048 = t2914 + t3008;
  t2424 = Sin(var1[18]);
  t3164 = t2919*t2876;
  t3170 = -1.*t2426*t2998;
  t3185 = t3164 + t3170;
  t3267 = Cos(var1[19]);
  t3054 = -1.*t2424*t3048;
  t3234 = t3077*t3185;
  t3247 = t3054 + t3234;
  t2355 = Sin(var1[19]);
  t3282 = t3077*t3048;
  t3374 = t2424*t3185;
  t3395 = t3282 + t3374;
  t1651 = t763*t876*t797;
  t1698 = -1.*t239*t906;
  t1728 = t1651 + t1698;
  t1815 = t239*t763;
  t1823 = t876*t797*t906;
  t2031 = t1815 + t1823;
  t1755 = t718*t1728;
  t2060 = t1052*t2031;
  t2070 = t1755 + t2060;
  t3498 = t1052*t1728;
  t3504 = -1.*t718*t2031;
  t3514 = t3498 + t3504;
  t3560 = t697*t276*t876;
  t3582 = t504*t2070;
  t3584 = t3560 + t3582;
  t3549 = t2441*t3514;
  t3595 = t2553*t3584;
  t3666 = t3549 + t3595;
  t3678 = t2553*t3514;
  t3711 = -1.*t2441*t3584;
  t3718 = t3678 + t3711;
  t3677 = -1.*t2427*t3666;
  t3723 = t2735*t3718;
  t3737 = t3677 + t3723;
  t3746 = t2735*t3666;
  t3789 = t2427*t3718;
  t3825 = t3746 + t3789;
  t3739 = t2426*t3737;
  t3833 = t2919*t3825;
  t3852 = t3739 + t3833;
  t3875 = t2919*t3737;
  t3883 = -1.*t2426*t3825;
  t3884 = t3875 + t3883;
  t3870 = -1.*t2424*t3852;
  t3904 = t3077*t3884;
  t3943 = t3870 + t3904;
  t3946 = t3077*t3852;
  t4010 = t2424*t3884;
  t4014 = t3946 + t4010;
  t2227 = t276*t763*t718;
  t2235 = t1052*t276*t906;
  t2271 = t2227 + t2235;
  t4120 = t1052*t276*t763;
  t4138 = -1.*t276*t718*t906;
  t4140 = t4120 + t4138;
  t4198 = -1.*t697*t797;
  t4200 = t504*t2271;
  t4205 = t4198 + t4200;
  t4174 = t2441*t4140;
  t4221 = t2553*t4205;
  t4222 = t4174 + t4221;
  t4244 = t2553*t4140;
  t4252 = -1.*t2441*t4205;
  t4267 = t4244 + t4252;
  t4232 = -1.*t2427*t4222;
  t4270 = t2735*t4267;
  t4277 = t4232 + t4270;
  t4282 = t2735*t4222;
  t4287 = t2427*t4267;
  t4289 = t4282 + t4287;
  t4281 = t2426*t4277;
  t4305 = t2919*t4289;
  t4306 = t4281 + t4305;
  t4323 = t2919*t4277;
  t4326 = -1.*t2426*t4289;
  t4329 = t4323 + t4326;
  t4307 = -1.*t2424*t4306;
  t4333 = t3077*t4329;
  t4342 = t4307 + t4333;
  t4359 = t3077*t4306;
  t4360 = t2424*t4329;
  t4371 = t4359 + t4360;
  t3248 = t2355*t3247;
  t3398 = t3267*t3395;
  t3418 = t3248 + t3398;
  t3435 = t3267*t3247;
  t3452 = -1.*t2355*t3395;
  t3455 = t3435 + t3452;
  t3945 = t2355*t3943;
  t4022 = t3267*t4014;
  t4024 = t3945 + t4022;
  t4093 = t3267*t3943;
  t4097 = -1.*t2355*t4014;
  t4106 = t4093 + t4097;
  t4345 = t2355*t4342;
  t4375 = t3267*t4371;
  t4386 = t4345 + t4375;
  t4399 = t3267*t4342;
  t4405 = -1.*t2355*t4371;
  t4422 = t4399 + t4405;
  p_output1[0]=t239*t276*t504 - 1.*t1314*t697;
  p_output1[1]=-1.*t2070*t697 + t276*t504*t876;
  p_output1[2]=-1.*t2271*t697 - 1.*t504*t797;
  p_output1[3]=0.642788*t3418 + 0.766044*t3455;
  p_output1[4]=0.642788*t4024 + 0.766044*t4106;
  p_output1[5]=0.642788*t4386 + 0.766044*t4422;
  p_output1[6]=-0.766044*t3418 + 0.642788*t3455;
  p_output1[7]=-0.766044*t4024 + 0.642788*t4106;
  p_output1[8]=-0.766044*t4386 + 0.642788*t4422;
}



void R_RightToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
