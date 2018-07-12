/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:34:27 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RightToeBack_src.h"

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
  double t13;
  double t490;
  double t538;
  double t494;
  double t587;
  double t21;
  double t173;
  double t333;
  double t403;
  double t738;
  double t513;
  double t655;
  double t702;
  double t770;
  double t774;
  double t817;
  double t717;
  double t823;
  double t830;
  double t2061;
  double t1789;
  double t1814;
  double t1865;
  double t1637;
  double t2108;
  double t2109;
  double t2140;
  double t2184;
  double t2008;
  double t2159;
  double t2170;
  double t1611;
  double t2199;
  double t2281;
  double t2377;
  double t2520;
  double t2179;
  double t2496;
  double t2505;
  double t1557;
  double t2523;
  double t2541;
  double t2614;
  double t2688;
  double t2518;
  double t2618;
  double t2623;
  double t1476;
  double t2719;
  double t2752;
  double t2755;
  double t2864;
  double t2645;
  double t2784;
  double t2830;
  double t1474;
  double t2878;
  double t2905;
  double t2910;
  double t983;
  double t1011;
  double t1021;
  double t1051;
  double t1062;
  double t1121;
  double t1050;
  double t1146;
  double t1171;
  double t3032;
  double t3064;
  double t3143;
  double t3201;
  double t3205;
  double t3209;
  double t3162;
  double t3224;
  double t3233;
  double t3240;
  double t3253;
  double t3261;
  double t3238;
  double t3346;
  double t3399;
  double t3430;
  double t3443;
  double t3486;
  double t3412;
  double t3526;
  double t3542;
  double t3631;
  double t3637;
  double t3649;
  double t3596;
  double t3656;
  double t3657;
  double t3672;
  double t3676;
  double t3735;
  double t1344;
  double t1356;
  double t1387;
  double t3815;
  double t3819;
  double t3820;
  double t3830;
  double t3846;
  double t3871;
  double t3821;
  double t3882;
  double t3885;
  double t3913;
  double t3928;
  double t3953;
  double t3903;
  double t3980;
  double t3983;
  double t3992;
  double t3994;
  double t4039;
  double t3986;
  double t4042;
  double t4060;
  double t4074;
  double t4088;
  double t4094;
  double t4064;
  double t4105;
  double t4108;
  double t4149;
  double t4155;
  double t4206;
  double t2833;
  double t2939;
  double t2950;
  double t2974;
  double t2986;
  double t2987;
  double t3665;
  double t3743;
  double t3745;
  double t3785;
  double t3790;
  double t3803;
  double t4127;
  double t4224;
  double t4264;
  double t4308;
  double t4314;
  double t4322;
  t13 = Cos(var1[3]);
  t490 = Cos(var1[5]);
  t538 = Sin(var1[3]);
  t494 = Sin(var1[4]);
  t587 = Sin(var1[5]);
  t21 = Cos(var1[4]);
  t173 = Sin(var1[14]);
  t333 = Cos(var1[14]);
  t403 = Sin(var1[13]);
  t738 = Cos(var1[13]);
  t513 = t13*t490*t494;
  t655 = t538*t587;
  t702 = t513 + t655;
  t770 = -1.*t490*t538;
  t774 = t13*t494*t587;
  t817 = t770 + t774;
  t717 = t403*t702;
  t823 = t738*t817;
  t830 = t717 + t823;
  t2061 = Cos(var1[15]);
  t1789 = t738*t702;
  t1814 = -1.*t403*t817;
  t1865 = t1789 + t1814;
  t1637 = Sin(var1[15]);
  t2108 = t333*t13*t21;
  t2109 = t173*t830;
  t2140 = t2108 + t2109;
  t2184 = Cos(var1[16]);
  t2008 = t1637*t1865;
  t2159 = t2061*t2140;
  t2170 = t2008 + t2159;
  t1611 = Sin(var1[16]);
  t2199 = t2061*t1865;
  t2281 = -1.*t1637*t2140;
  t2377 = t2199 + t2281;
  t2520 = Cos(var1[17]);
  t2179 = -1.*t1611*t2170;
  t2496 = t2184*t2377;
  t2505 = t2179 + t2496;
  t1557 = Sin(var1[17]);
  t2523 = t2184*t2170;
  t2541 = t1611*t2377;
  t2614 = t2523 + t2541;
  t2688 = Cos(var1[18]);
  t2518 = t1557*t2505;
  t2618 = t2520*t2614;
  t2623 = t2518 + t2618;
  t1476 = Sin(var1[18]);
  t2719 = t2520*t2505;
  t2752 = -1.*t1557*t2614;
  t2755 = t2719 + t2752;
  t2864 = Cos(var1[19]);
  t2645 = -1.*t1476*t2623;
  t2784 = t2688*t2755;
  t2830 = t2645 + t2784;
  t1474 = Sin(var1[19]);
  t2878 = t2688*t2623;
  t2905 = t1476*t2755;
  t2910 = t2878 + t2905;
  t983 = t490*t538*t494;
  t1011 = -1.*t13*t587;
  t1021 = t983 + t1011;
  t1051 = t13*t490;
  t1062 = t538*t494*t587;
  t1121 = t1051 + t1062;
  t1050 = t403*t1021;
  t1146 = t738*t1121;
  t1171 = t1050 + t1146;
  t3032 = t738*t1021;
  t3064 = -1.*t403*t1121;
  t3143 = t3032 + t3064;
  t3201 = t333*t21*t538;
  t3205 = t173*t1171;
  t3209 = t3201 + t3205;
  t3162 = t1637*t3143;
  t3224 = t2061*t3209;
  t3233 = t3162 + t3224;
  t3240 = t2061*t3143;
  t3253 = -1.*t1637*t3209;
  t3261 = t3240 + t3253;
  t3238 = -1.*t1611*t3233;
  t3346 = t2184*t3261;
  t3399 = t3238 + t3346;
  t3430 = t2184*t3233;
  t3443 = t1611*t3261;
  t3486 = t3430 + t3443;
  t3412 = t1557*t3399;
  t3526 = t2520*t3486;
  t3542 = t3412 + t3526;
  t3631 = t2520*t3399;
  t3637 = -1.*t1557*t3486;
  t3649 = t3631 + t3637;
  t3596 = -1.*t1476*t3542;
  t3656 = t2688*t3649;
  t3657 = t3596 + t3656;
  t3672 = t2688*t3542;
  t3676 = t1476*t3649;
  t3735 = t3672 + t3676;
  t1344 = t21*t490*t403;
  t1356 = t738*t21*t587;
  t1387 = t1344 + t1356;
  t3815 = t738*t21*t490;
  t3819 = -1.*t21*t403*t587;
  t3820 = t3815 + t3819;
  t3830 = -1.*t333*t494;
  t3846 = t173*t1387;
  t3871 = t3830 + t3846;
  t3821 = t1637*t3820;
  t3882 = t2061*t3871;
  t3885 = t3821 + t3882;
  t3913 = t2061*t3820;
  t3928 = -1.*t1637*t3871;
  t3953 = t3913 + t3928;
  t3903 = -1.*t1611*t3885;
  t3980 = t2184*t3953;
  t3983 = t3903 + t3980;
  t3992 = t2184*t3885;
  t3994 = t1611*t3953;
  t4039 = t3992 + t3994;
  t3986 = t1557*t3983;
  t4042 = t2520*t4039;
  t4060 = t3986 + t4042;
  t4074 = t2520*t3983;
  t4088 = -1.*t1557*t4039;
  t4094 = t4074 + t4088;
  t4064 = -1.*t1476*t4060;
  t4105 = t2688*t4094;
  t4108 = t4064 + t4105;
  t4149 = t2688*t4060;
  t4155 = t1476*t4094;
  t4206 = t4149 + t4155;
  t2833 = t1474*t2830;
  t2939 = t2864*t2910;
  t2950 = t2833 + t2939;
  t2974 = t2864*t2830;
  t2986 = -1.*t1474*t2910;
  t2987 = t2974 + t2986;
  t3665 = t1474*t3657;
  t3743 = t2864*t3735;
  t3745 = t3665 + t3743;
  t3785 = t2864*t3657;
  t3790 = -1.*t1474*t3735;
  t3803 = t3785 + t3790;
  t4127 = t1474*t4108;
  t4224 = t2864*t4206;
  t4264 = t4127 + t4224;
  t4308 = t2864*t4108;
  t4314 = -1.*t1474*t4206;
  t4322 = t4308 + t4314;
  p_output1[0]=t13*t173*t21 - 1.*t333*t830;
  p_output1[1]=-1.*t1171*t333 + t173*t21*t538;
  p_output1[2]=-1.*t1387*t333 - 1.*t173*t494;
  p_output1[3]=0.642788*t2950 + 0.766044*t2987;
  p_output1[4]=0.642788*t3745 + 0.766044*t3803;
  p_output1[5]=0.642788*t4264 + 0.766044*t4322;
  p_output1[6]=-0.766044*t2950 + 0.642788*t2987;
  p_output1[7]=-0.766044*t3745 + 0.642788*t3803;
  p_output1[8]=-0.766044*t4264 + 0.642788*t4322;
}



void R_RightToeBack_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
