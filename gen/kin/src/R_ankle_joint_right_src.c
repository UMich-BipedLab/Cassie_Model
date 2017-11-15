/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:54 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_ankle_joint_right_src.h"

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
  double t617;
  double t850;
  double t616;
  double t748;
  double t1023;
  double t1105;
  double t750;
  double t1033;
  double t1050;
  double t615;
  double t1609;
  double t1753;
  double t1757;
  double t2452;
  double t1070;
  double t2167;
  double t2340;
  double t612;
  double t3555;
  double t3662;
  double t3694;
  double t3698;
  double t3879;
  double t3903;
  double t4040;
  double t4368;
  double t4386;
  double t4658;
  double t2358;
  double t4555;
  double t4630;
  double t610;
  double t4659;
  double t4670;
  double t4686;
  double t4752;
  double t4636;
  double t4691;
  double t4721;
  double t609;
  double t4780;
  double t4842;
  double t4871;
  double t429;
  double t5119;
  double t5163;
  double t5184;
  double t5214;
  double t5243;
  double t5301;
  double t5198;
  double t5323;
  double t5329;
  double t5377;
  double t5429;
  double t5437;
  double t5450;
  double t5457;
  double t5463;
  double t5360;
  double t5466;
  double t5504;
  double t5514;
  double t5520;
  double t5542;
  double t4939;
  double t5506;
  double t5563;
  double t5575;
  double t5584;
  double t5585;
  double t5596;
  double t5731;
  double t5748;
  double t5765;
  double t5791;
  double t5831;
  double t5838;
  double t5861;
  double t5883;
  double t5889;
  double t5784;
  double t5900;
  double t5905;
  double t5973;
  double t5982;
  double t6001;
  double t5972;
  double t6044;
  double t6045;
  double t6056;
  double t6061;
  double t6069;
  double t4743;
  double t4874;
  double t4879;
  double t5010;
  double t5018;
  double t5025;
  double t5578;
  double t5597;
  double t5680;
  double t5687;
  double t5690;
  double t5693;
  double t6051;
  double t6075;
  double t6092;
  double t6100;
  double t6108;
  double t6118;
  t617 = Cos(var1[5]);
  t850 = Sin(var1[3]);
  t616 = Cos(var1[3]);
  t748 = Sin(var1[4]);
  t1023 = Sin(var1[5]);
  t1105 = Sin(var1[13]);
  t750 = t616*t617*t748;
  t1033 = t850*t1023;
  t1050 = t750 + t1033;
  t615 = Cos(var1[13]);
  t1609 = -1.*t617*t850;
  t1753 = t616*t748*t1023;
  t1757 = t1609 + t1753;
  t2452 = Cos(var1[15]);
  t1070 = t615*t1050;
  t2167 = -1.*t1105*t1757;
  t2340 = t1070 + t2167;
  t612 = Sin(var1[15]);
  t3555 = Cos(var1[14]);
  t3662 = Cos(var1[4]);
  t3694 = t3555*t616*t3662;
  t3698 = Sin(var1[14]);
  t3879 = t1105*t1050;
  t3903 = t615*t1757;
  t4040 = t3879 + t3903;
  t4368 = t3698*t4040;
  t4386 = t3694 + t4368;
  t4658 = Cos(var1[16]);
  t2358 = t612*t2340;
  t4555 = t2452*t4386;
  t4630 = t2358 + t4555;
  t610 = Sin(var1[16]);
  t4659 = t2452*t2340;
  t4670 = -1.*t612*t4386;
  t4686 = t4659 + t4670;
  t4752 = Cos(var1[17]);
  t4636 = -1.*t610*t4630;
  t4691 = t4658*t4686;
  t4721 = t4636 + t4691;
  t609 = Sin(var1[17]);
  t4780 = t4658*t4630;
  t4842 = t610*t4686;
  t4871 = t4780 + t4842;
  t429 = Sin(var1[18]);
  t5119 = t617*t850*t748;
  t5163 = -1.*t616*t1023;
  t5184 = t5119 + t5163;
  t5214 = t616*t617;
  t5243 = t850*t748*t1023;
  t5301 = t5214 + t5243;
  t5198 = t615*t5184;
  t5323 = -1.*t1105*t5301;
  t5329 = t5198 + t5323;
  t5377 = t3555*t3662*t850;
  t5429 = t1105*t5184;
  t5437 = t615*t5301;
  t5450 = t5429 + t5437;
  t5457 = t3698*t5450;
  t5463 = t5377 + t5457;
  t5360 = t612*t5329;
  t5466 = t2452*t5463;
  t5504 = t5360 + t5466;
  t5514 = t2452*t5329;
  t5520 = -1.*t612*t5463;
  t5542 = t5514 + t5520;
  t4939 = Cos(var1[18]);
  t5506 = -1.*t610*t5504;
  t5563 = t4658*t5542;
  t5575 = t5506 + t5563;
  t5584 = t4658*t5504;
  t5585 = t610*t5542;
  t5596 = t5584 + t5585;
  t5731 = t615*t3662*t617;
  t5748 = -1.*t3662*t1105*t1023;
  t5765 = t5731 + t5748;
  t5791 = -1.*t3555*t748;
  t5831 = t3662*t617*t1105;
  t5838 = t615*t3662*t1023;
  t5861 = t5831 + t5838;
  t5883 = t3698*t5861;
  t5889 = t5791 + t5883;
  t5784 = t612*t5765;
  t5900 = t2452*t5889;
  t5905 = t5784 + t5900;
  t5973 = t2452*t5765;
  t5982 = -1.*t612*t5889;
  t6001 = t5973 + t5982;
  t5972 = -1.*t610*t5905;
  t6044 = t4658*t6001;
  t6045 = t5972 + t6044;
  t6056 = t4658*t5905;
  t6061 = t610*t6001;
  t6069 = t6056 + t6061;
  t4743 = t609*t4721;
  t4874 = t4752*t4871;
  t4879 = t4743 + t4874;
  t5010 = t4752*t4721;
  t5018 = -1.*t609*t4871;
  t5025 = t5010 + t5018;
  t5578 = t609*t5575;
  t5597 = t4752*t5596;
  t5680 = t5578 + t5597;
  t5687 = t4752*t5575;
  t5690 = -1.*t609*t5596;
  t5693 = t5687 + t5690;
  t6051 = t609*t6045;
  t6075 = t4752*t6069;
  t6092 = t6051 + t6075;
  t6100 = t4752*t6045;
  t6108 = -1.*t609*t6069;
  t6118 = t6100 + t6108;
  p_output1[0]=t429*t4879 - 1.*t4939*t5025;
  p_output1[1]=t429*t5680 - 1.*t4939*t5693;
  p_output1[2]=t429*t6092 - 1.*t4939*t6118;
  p_output1[3]=t4879*t4939 + t429*t5025;
  p_output1[4]=t4939*t5680 + t429*t5693;
  p_output1[5]=t4939*t6092 + t429*t6118;
  p_output1[6]=-1.*t3555*t4040 + t3662*t3698*t616;
  p_output1[7]=-1.*t3555*t5450 + t3662*t3698*t850;
  p_output1[8]=-1.*t3555*t5861 - 1.*t3698*t748;
}



void R_ankle_joint_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
