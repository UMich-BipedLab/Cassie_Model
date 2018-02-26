/*
 * Automatically Generated from Mathematica.
 * Mon 26 Feb 2018 15:42:28 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_VectorNav_to_RightToeBottom_src.h"

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
  double t509;
  double t2654;
  double t2859;
  double t2590;
  double t2891;
  double t2536;
  double t3014;
  double t3029;
  double t3059;
  double t2797;
  double t2904;
  double t2934;
  double t3069;
  double t2462;
  double t3271;
  double t3282;
  double t3291;
  double t2991;
  double t3099;
  double t3169;
  double t3299;
  double t2423;
  double t3381;
  double t3383;
  double t3406;
  double t3238;
  double t3337;
  double t3343;
  double t3410;
  double t389;
  double t282;
  double t1360;
  double t3615;
  double t3625;
  double t3626;
  double t3543;
  double t3572;
  double t3594;
  double t3644;
  double t3646;
  double t3648;
  double t3597;
  double t3634;
  double t3636;
  double t3674;
  double t3676;
  double t3677;
  double t3638;
  double t3651;
  double t3662;
  double t3693;
  double t3698;
  double t3701;
  double t3671;
  double t3678;
  double t3684;
  double t3792;
  double t3801;
  double t3810;
  double t3766;
  double t3767;
  double t3768;
  double t3842;
  double t3850;
  double t3855;
  double t3772;
  double t3816;
  double t3823;
  double t3880;
  double t3883;
  double t3886;
  double t3832;
  double t3856;
  double t3859;
  double t3896;
  double t3897;
  double t3899;
  double t3873;
  double t3889;
  double t3891;
  double t3372;
  double t3430;
  double t3439;
  double t3503;
  double t3511;
  double t3528;
  double t3685;
  double t3702;
  double t3710;
  double t3730;
  double t3733;
  double t3743;
  double t3894;
  double t3905;
  double t3908;
  double t3915;
  double t3931;
  double t3933;
  double t4020;
  double t4023;
  double t4042;
  double t4046;
  double t4068;
  double t4073;
  double t4097;
  double t4103;
  double t3983;
  double t3987;
  double t3999;
  double t4002;
  double t4003;
  double t4009;
  double t4014;
  double t4026;
  double t4029;
  double t4032;
  double t4035;
  double t4036;
  double t4037;
  double t4049;
  double t4050;
  double t4058;
  double t4061;
  double t4062;
  double t4064;
  double t4074;
  double t4075;
  double t4076;
  double t4085;
  double t4090;
  double t4091;
  double t4107;
  double t4112;
  double t4115;
  double t4119;
  double t4124;
  double t4126;
  double t4151;
  double t4153;
  double t4154;
  double t4165;
  double t4166;
  double t4167;
  t509 = Cos(var1[8]);
  t2654 = Cos(var1[10]);
  t2859 = Sin(var1[9]);
  t2590 = Cos(var1[9]);
  t2891 = Sin(var1[10]);
  t2536 = Cos(var1[11]);
  t3014 = -1.*t509*t2654*t2859;
  t3029 = -1.*t509*t2590*t2891;
  t3059 = t3014 + t3029;
  t2797 = t509*t2590*t2654;
  t2904 = -1.*t509*t2859*t2891;
  t2934 = t2797 + t2904;
  t3069 = Sin(var1[11]);
  t2462 = Cos(var1[12]);
  t3271 = t2536*t3059;
  t3282 = -1.*t2934*t3069;
  t3291 = t3271 + t3282;
  t2991 = t2536*t2934;
  t3099 = t3059*t3069;
  t3169 = t2991 + t3099;
  t3299 = Sin(var1[12]);
  t2423 = Cos(var1[13]);
  t3381 = t2462*t3291;
  t3383 = -1.*t3169*t3299;
  t3406 = t3381 + t3383;
  t3238 = t2462*t3169;
  t3337 = t3291*t3299;
  t3343 = t3238 + t3337;
  t3410 = Sin(var1[13]);
  t389 = Cos(var1[7]);
  t282 = Sin(var1[8]);
  t1360 = Sin(var1[7]);
  t3615 = -1.*t2590*t1360;
  t3625 = -1.*t389*t282*t2859;
  t3626 = t3615 + t3625;
  t3543 = t389*t2590*t282;
  t3572 = -1.*t1360*t2859;
  t3594 = t3543 + t3572;
  t3644 = t2654*t3626;
  t3646 = -1.*t3594*t2891;
  t3648 = t3644 + t3646;
  t3597 = t2654*t3594;
  t3634 = t3626*t2891;
  t3636 = t3597 + t3634;
  t3674 = t2536*t3648;
  t3676 = -1.*t3636*t3069;
  t3677 = t3674 + t3676;
  t3638 = t2536*t3636;
  t3651 = t3648*t3069;
  t3662 = t3638 + t3651;
  t3693 = t2462*t3677;
  t3698 = -1.*t3662*t3299;
  t3701 = t3693 + t3698;
  t3671 = t2462*t3662;
  t3678 = t3677*t3299;
  t3684 = t3671 + t3678;
  t3792 = t389*t2590;
  t3801 = -1.*t1360*t282*t2859;
  t3810 = t3792 + t3801;
  t3766 = t2590*t1360*t282;
  t3767 = t389*t2859;
  t3768 = t3766 + t3767;
  t3842 = t2654*t3810;
  t3850 = -1.*t3768*t2891;
  t3855 = t3842 + t3850;
  t3772 = t2654*t3768;
  t3816 = t3810*t2891;
  t3823 = t3772 + t3816;
  t3880 = t2536*t3855;
  t3883 = -1.*t3823*t3069;
  t3886 = t3880 + t3883;
  t3832 = t2536*t3823;
  t3856 = t3855*t3069;
  t3859 = t3832 + t3856;
  t3896 = t2462*t3886;
  t3897 = -1.*t3859*t3299;
  t3899 = t3896 + t3897;
  t3873 = t2462*t3859;
  t3889 = t3886*t3299;
  t3891 = t3873 + t3889;
  t3372 = t2423*t3343;
  t3430 = t3406*t3410;
  t3439 = t3372 + t3430;
  t3503 = t2423*t3406;
  t3511 = -1.*t3343*t3410;
  t3528 = t3503 + t3511;
  t3685 = t2423*t3684;
  t3702 = t3701*t3410;
  t3710 = t3685 + t3702;
  t3730 = t2423*t3701;
  t3733 = -1.*t3684*t3410;
  t3743 = t3730 + t3733;
  t3894 = t2423*t3891;
  t3905 = t3899*t3410;
  t3908 = t3894 + t3905;
  t3915 = t2423*t3899;
  t3931 = -1.*t3891*t3410;
  t3933 = t3915 + t3931;
  t4020 = -1.*t2654;
  t4023 = 1. + t4020;
  t4042 = -1.*t2536;
  t4046 = 1. + t4042;
  t4068 = -1.*t2462;
  t4073 = 1. + t4068;
  t4097 = -1.*t2423;
  t4103 = 1. + t4097;
  t3983 = -1.*t509;
  t3987 = 1. + t3983;
  t3999 = -1.*t2590;
  t4002 = 1. + t3999;
  t4003 = -0.049*t4002;
  t4009 = -0.09*t2859;
  t4014 = 0. + t4003 + t4009;
  t4026 = -0.049*t4023;
  t4029 = -0.21*t2891;
  t4032 = 0. + t4026 + t4029;
  t4035 = -0.21*t4023;
  t4036 = 0.049*t2891;
  t4037 = 0. + t4035 + t4036;
  t4049 = -0.0016*t4046;
  t4050 = -0.2707*t3069;
  t4058 = 0. + t4049 + t4050;
  t4061 = -0.2707*t4046;
  t4062 = 0.0016*t3069;
  t4064 = 0. + t4061 + t4062;
  t4074 = 0.0184*t4073;
  t4075 = -0.7055*t3299;
  t4076 = 0. + t4074 + t4075;
  t4085 = -0.7055*t4073;
  t4090 = -0.0184*t3299;
  t4091 = 0. + t4085 + t4090;
  t4107 = -0.0216*t4103;
  t4112 = -1.1135*t3410;
  t4115 = 0. + t4107 + t4112;
  t4119 = -1.1135*t4103;
  t4124 = 0.0216*t3410;
  t4126 = 0. + t4119 + t4124;
  t4151 = -0.135*t3987;
  t4153 = 0.049*t282;
  t4154 = 0. + t4151 + t4153;
  t4165 = -0.09*t4002;
  t4166 = 0.049*t2859;
  t4167 = 0. + t4165 + t4166;
  p_output1[0]=0. + t282;
  p_output1[1]=0. + t389*t509;
  p_output1[2]=0. + t1360*t509;
  p_output1[3]=0.;
  p_output1[4]=0. + 0.642788*t3439 + 0.766044*t3528;
  p_output1[5]=0. - 0.642788*t3710 - 0.766044*t3743;
  p_output1[6]=0. - 0.642788*t3908 - 0.766044*t3933;
  p_output1[7]=0.;
  p_output1[8]=0. - 0.766044*t3439 + 0.642788*t3528;
  p_output1[9]=0. + 0.766044*t3710 - 0.642788*t3743;
  p_output1[10]=0. + 0.766044*t3908 - 0.642788*t3933;
  p_output1[11]=0.;
  p_output1[12]=-0.03155 - 0.004500000000000004*t282 + 0.0306*t3439 - 1.1312*t3528 - 0.049*t3987 + t2934*t4058 + t3059*t4064 + t3169*t4076 + t3291*t4091 + t3343*t4115 + t3406*t4126 + t4014*t509 + t2590*t4032*t509 - 1.*t2859*t4037*t509;
  p_output1[13]=0. - 0.0306*t3710 + 1.1312*t3743 + 0.135*(1. - 1.*t389) - 1.*t282*t389*t4014 - 1.*t3594*t4032 - 1.*t3626*t4037 - 1.*t3636*t4058 - 1.*t3648*t4064 - 1.*t3662*t4076 - 1.*t3677*t4091 - 1.*t3684*t4115 - 1.*t3701*t4126 - 1.*t389*t4154 + t1360*t4167 + 0.1305*t389*t509;
  p_output1[14]=-0.07996 - 0.135*t1360 - 0.0306*t3908 + 1.1312*t3933 - 1.*t1360*t282*t4014 - 1.*t3768*t4032 - 1.*t3810*t4037 - 1.*t3823*t4058 - 1.*t3855*t4064 - 1.*t3859*t4076 - 1.*t3886*t4091 - 1.*t3891*t4115 - 1.*t3899*t4126 - 1.*t1360*t4154 - 1.*t389*t4167 + 0.1305*t1360*t509;
  p_output1[15]=1.;
}



void H_VectorNav_to_RightToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
