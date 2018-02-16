/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:15:57 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_toe_joint_right_src.h"

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
  double t1715;
  double t1987;
  double t1589;
  double t1896;
  double t2118;
  double t2776;
  double t1934;
  double t2354;
  double t2356;
  double t1536;
  double t2799;
  double t2811;
  double t2818;
  double t2949;
  double t2772;
  double t2940;
  double t2947;
  double t78;
  double t2952;
  double t2958;
  double t2959;
  double t2967;
  double t2971;
  double t2972;
  double t2973;
  double t2975;
  double t2977;
  double t3001;
  double t2948;
  double t2982;
  double t2985;
  double t76;
  double t3003;
  double t3004;
  double t3005;
  double t3015;
  double t2994;
  double t3006;
  double t3008;
  double t74;
  double t3017;
  double t3019;
  double t3023;
  double t3033;
  double t3009;
  double t3029;
  double t3030;
  double t71;
  double t3041;
  double t3051;
  double t3054;
  double t63;
  double t3162;
  double t3163;
  double t3165;
  double t3180;
  double t3186;
  double t3203;
  double t3170;
  double t3207;
  double t3208;
  double t3227;
  double t3230;
  double t3252;
  double t3269;
  double t3270;
  double t3279;
  double t3210;
  double t3294;
  double t3316;
  double t3322;
  double t3323;
  double t3325;
  double t3319;
  double t3327;
  double t3339;
  double t3360;
  double t3372;
  double t3375;
  double t3115;
  double t3358;
  double t3378;
  double t3401;
  double t3407;
  double t3421;
  double t3423;
  double t3497;
  double t3498;
  double t3517;
  double t3524;
  double t3528;
  double t3555;
  double t3557;
  double t3567;
  double t3568;
  double t3523;
  double t3571;
  double t3591;
  double t3621;
  double t3623;
  double t3631;
  double t3602;
  double t3643;
  double t3660;
  double t3679;
  double t3694;
  double t3698;
  double t3675;
  double t3709;
  double t3718;
  double t3722;
  double t3725;
  double t3737;
  double t3032;
  double t3071;
  double t3074;
  double t3123;
  double t3130;
  double t3137;
  double t3406;
  double t3429;
  double t3436;
  double t3447;
  double t3462;
  double t3463;
  double t3719;
  double t3739;
  double t3742;
  double t3763;
  double t3796;
  double t3798;
  t1715 = Cos(var1[5]);
  t1987 = Sin(var1[3]);
  t1589 = Cos(var1[3]);
  t1896 = Sin(var1[4]);
  t2118 = Sin(var1[5]);
  t2776 = Sin(var1[13]);
  t1934 = t1589*t1715*t1896;
  t2354 = t1987*t2118;
  t2356 = t1934 + t2354;
  t1536 = Cos(var1[13]);
  t2799 = -1.*t1715*t1987;
  t2811 = t1589*t1896*t2118;
  t2818 = t2799 + t2811;
  t2949 = Cos(var1[15]);
  t2772 = t1536*t2356;
  t2940 = -1.*t2776*t2818;
  t2947 = t2772 + t2940;
  t78 = Sin(var1[15]);
  t2952 = Cos(var1[14]);
  t2958 = Cos(var1[4]);
  t2959 = t2952*t1589*t2958;
  t2967 = Sin(var1[14]);
  t2971 = t2776*t2356;
  t2972 = t1536*t2818;
  t2973 = t2971 + t2972;
  t2975 = t2967*t2973;
  t2977 = t2959 + t2975;
  t3001 = Cos(var1[16]);
  t2948 = t78*t2947;
  t2982 = t2949*t2977;
  t2985 = t2948 + t2982;
  t76 = Sin(var1[16]);
  t3003 = t2949*t2947;
  t3004 = -1.*t78*t2977;
  t3005 = t3003 + t3004;
  t3015 = Cos(var1[17]);
  t2994 = -1.*t76*t2985;
  t3006 = t3001*t3005;
  t3008 = t2994 + t3006;
  t74 = Sin(var1[17]);
  t3017 = t3001*t2985;
  t3019 = t76*t3005;
  t3023 = t3017 + t3019;
  t3033 = Cos(var1[18]);
  t3009 = t74*t3008;
  t3029 = t3015*t3023;
  t3030 = t3009 + t3029;
  t71 = Sin(var1[18]);
  t3041 = t3015*t3008;
  t3051 = -1.*t74*t3023;
  t3054 = t3041 + t3051;
  t63 = Cos(var1[19]);
  t3162 = t1715*t1987*t1896;
  t3163 = -1.*t1589*t2118;
  t3165 = t3162 + t3163;
  t3180 = t1589*t1715;
  t3186 = t1987*t1896*t2118;
  t3203 = t3180 + t3186;
  t3170 = t1536*t3165;
  t3207 = -1.*t2776*t3203;
  t3208 = t3170 + t3207;
  t3227 = t2952*t2958*t1987;
  t3230 = t2776*t3165;
  t3252 = t1536*t3203;
  t3269 = t3230 + t3252;
  t3270 = t2967*t3269;
  t3279 = t3227 + t3270;
  t3210 = t78*t3208;
  t3294 = t2949*t3279;
  t3316 = t3210 + t3294;
  t3322 = t2949*t3208;
  t3323 = -1.*t78*t3279;
  t3325 = t3322 + t3323;
  t3319 = -1.*t76*t3316;
  t3327 = t3001*t3325;
  t3339 = t3319 + t3327;
  t3360 = t3001*t3316;
  t3372 = t76*t3325;
  t3375 = t3360 + t3372;
  t3115 = Sin(var1[19]);
  t3358 = t74*t3339;
  t3378 = t3015*t3375;
  t3401 = t3358 + t3378;
  t3407 = t3015*t3339;
  t3421 = -1.*t74*t3375;
  t3423 = t3407 + t3421;
  t3497 = t1536*t2958*t1715;
  t3498 = -1.*t2958*t2776*t2118;
  t3517 = t3497 + t3498;
  t3524 = -1.*t2952*t1896;
  t3528 = t2958*t1715*t2776;
  t3555 = t1536*t2958*t2118;
  t3557 = t3528 + t3555;
  t3567 = t2967*t3557;
  t3568 = t3524 + t3567;
  t3523 = t78*t3517;
  t3571 = t2949*t3568;
  t3591 = t3523 + t3571;
  t3621 = t2949*t3517;
  t3623 = -1.*t78*t3568;
  t3631 = t3621 + t3623;
  t3602 = -1.*t76*t3591;
  t3643 = t3001*t3631;
  t3660 = t3602 + t3643;
  t3679 = t3001*t3591;
  t3694 = t76*t3631;
  t3698 = t3679 + t3694;
  t3675 = t74*t3660;
  t3709 = t3015*t3698;
  t3718 = t3675 + t3709;
  t3722 = t3015*t3660;
  t3725 = -1.*t74*t3698;
  t3737 = t3722 + t3725;
  t3032 = -1.*t71*t3030;
  t3071 = t3033*t3054;
  t3074 = t3032 + t3071;
  t3123 = t3033*t3030;
  t3130 = t71*t3054;
  t3137 = t3123 + t3130;
  t3406 = -1.*t71*t3401;
  t3429 = t3033*t3423;
  t3436 = t3406 + t3429;
  t3447 = t3033*t3401;
  t3462 = t71*t3423;
  t3463 = t3447 + t3462;
  t3719 = -1.*t71*t3718;
  t3739 = t3033*t3737;
  t3742 = t3719 + t3739;
  t3763 = t3033*t3718;
  t3796 = t71*t3737;
  t3798 = t3763 + t3796;
  p_output1[0]=t3115*t3137 - 1.*t3074*t63;
  p_output1[1]=t3115*t3463 - 1.*t3436*t63;
  p_output1[2]=t3115*t3798 - 1.*t3742*t63;
  p_output1[3]=t3074*t3115 + t3137*t63;
  p_output1[4]=t3115*t3436 + t3463*t63;
  p_output1[5]=t3115*t3742 + t3798*t63;
  p_output1[6]=t1589*t2958*t2967 - 1.*t2952*t2973;
  p_output1[7]=t1987*t2958*t2967 - 1.*t2952*t3269;
  p_output1[8]=-1.*t1896*t2967 - 1.*t2952*t3557;
}



void R_toe_joint_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
