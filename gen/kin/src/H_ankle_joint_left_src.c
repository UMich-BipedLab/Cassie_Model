/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:19 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_ankle_joint_left_src.h"

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
  double t3714;
  double t3751;
  double t3773;
  double t3758;
  double t3787;
  double t3748;
  double t3794;
  double t3801;
  double t3807;
  double t3770;
  double t3790;
  double t3791;
  double t3813;
  double t3712;
  double t3846;
  double t3848;
  double t3851;
  double t3715;
  double t3716;
  double t3723;
  double t3792;
  double t3819;
  double t3823;
  double t3831;
  double t3832;
  double t3835;
  double t3859;
  double t3870;
  double t3843;
  double t3861;
  double t3864;
  double t3706;
  double t3873;
  double t3874;
  double t3878;
  double t3889;
  double t3869;
  double t3883;
  double t3886;
  double t3655;
  double t3892;
  double t3895;
  double t3899;
  double t937;
  double t3963;
  double t3966;
  double t3967;
  double t3944;
  double t3950;
  double t3958;
  double t3984;
  double t3986;
  double t3987;
  double t3942;
  double t3961;
  double t3969;
  double t3973;
  double t3976;
  double t3977;
  double t3983;
  double t3990;
  double t3993;
  double t3996;
  double t3999;
  double t4000;
  double t3917;
  double t3994;
  double t4003;
  double t4004;
  double t4010;
  double t4013;
  double t4014;
  double t4075;
  double t4078;
  double t4079;
  double t4039;
  double t4047;
  double t4059;
  double t4061;
  double t4065;
  double t4066;
  double t4074;
  double t4081;
  double t4082;
  double t4086;
  double t4088;
  double t4090;
  double t4083;
  double t4091;
  double t4093;
  double t4100;
  double t4102;
  double t4109;
  double t3888;
  double t3903;
  double t3909;
  double t3926;
  double t3927;
  double t3933;
  double t4005;
  double t4016;
  double t4017;
  double t4027;
  double t4030;
  double t4033;
  double t4097;
  double t4110;
  double t4115;
  double t4119;
  double t4120;
  double t4123;
  double t4195;
  double t4197;
  double t4237;
  double t4242;
  double t4264;
  double t4267;
  double t4286;
  double t4288;
  double t4310;
  double t4312;
  double t4136;
  double t4137;
  double t4139;
  double t4176;
  double t4177;
  double t4178;
  double t4179;
  double t4184;
  double t4189;
  double t4198;
  double t4202;
  double t4203;
  double t4206;
  double t4208;
  double t4209;
  double t4245;
  double t4251;
  double t4255;
  double t4259;
  double t4260;
  double t4261;
  double t4268;
  double t4269;
  double t4272;
  double t4277;
  double t4280;
  double t4283;
  double t4290;
  double t4291;
  double t4292;
  double t4296;
  double t4300;
  double t4305;
  double t4313;
  double t4314;
  double t4316;
  double t4319;
  double t4320;
  double t4323;
  double t4142;
  double t4143;
  double t4147;
  double t4148;
  double t4155;
  double t4156;
  t3714 = Cos(var1[3]);
  t3751 = Cos(var1[5]);
  t3773 = Sin(var1[4]);
  t3758 = Sin(var1[3]);
  t3787 = Sin(var1[5]);
  t3748 = Cos(var1[6]);
  t3794 = t3714*t3751*t3773;
  t3801 = t3758*t3787;
  t3807 = t3794 + t3801;
  t3770 = -1.*t3751*t3758;
  t3790 = t3714*t3773*t3787;
  t3791 = t3770 + t3790;
  t3813 = Sin(var1[6]);
  t3712 = Cos(var1[8]);
  t3846 = t3748*t3807;
  t3848 = -1.*t3791*t3813;
  t3851 = t3846 + t3848;
  t3715 = Cos(var1[4]);
  t3716 = Cos(var1[7]);
  t3723 = t3714*t3715*t3716;
  t3792 = t3748*t3791;
  t3819 = t3807*t3813;
  t3823 = t3792 + t3819;
  t3831 = Sin(var1[7]);
  t3832 = t3823*t3831;
  t3835 = t3723 + t3832;
  t3859 = Sin(var1[8]);
  t3870 = Cos(var1[9]);
  t3843 = t3712*t3835;
  t3861 = t3851*t3859;
  t3864 = t3843 + t3861;
  t3706 = Sin(var1[9]);
  t3873 = t3712*t3851;
  t3874 = -1.*t3835*t3859;
  t3878 = t3873 + t3874;
  t3889 = Cos(var1[10]);
  t3869 = -1.*t3706*t3864;
  t3883 = t3870*t3878;
  t3886 = t3869 + t3883;
  t3655 = Sin(var1[10]);
  t3892 = t3870*t3864;
  t3895 = t3706*t3878;
  t3899 = t3892 + t3895;
  t937 = Sin(var1[11]);
  t3963 = t3751*t3758*t3773;
  t3966 = -1.*t3714*t3787;
  t3967 = t3963 + t3966;
  t3944 = t3714*t3751;
  t3950 = t3758*t3773*t3787;
  t3958 = t3944 + t3950;
  t3984 = t3748*t3967;
  t3986 = -1.*t3958*t3813;
  t3987 = t3984 + t3986;
  t3942 = t3715*t3716*t3758;
  t3961 = t3748*t3958;
  t3969 = t3967*t3813;
  t3973 = t3961 + t3969;
  t3976 = t3973*t3831;
  t3977 = t3942 + t3976;
  t3983 = t3712*t3977;
  t3990 = t3987*t3859;
  t3993 = t3983 + t3990;
  t3996 = t3712*t3987;
  t3999 = -1.*t3977*t3859;
  t4000 = t3996 + t3999;
  t3917 = Cos(var1[11]);
  t3994 = -1.*t3706*t3993;
  t4003 = t3870*t4000;
  t4004 = t3994 + t4003;
  t4010 = t3870*t3993;
  t4013 = t3706*t4000;
  t4014 = t4010 + t4013;
  t4075 = t3715*t3751*t3748;
  t4078 = -1.*t3715*t3787*t3813;
  t4079 = t4075 + t4078;
  t4039 = -1.*t3716*t3773;
  t4047 = t3715*t3748*t3787;
  t4059 = t3715*t3751*t3813;
  t4061 = t4047 + t4059;
  t4065 = t4061*t3831;
  t4066 = t4039 + t4065;
  t4074 = t3712*t4066;
  t4081 = t4079*t3859;
  t4082 = t4074 + t4081;
  t4086 = t3712*t4079;
  t4088 = -1.*t4066*t3859;
  t4090 = t4086 + t4088;
  t4083 = -1.*t3706*t4082;
  t4091 = t3870*t4090;
  t4093 = t4083 + t4091;
  t4100 = t3870*t4082;
  t4102 = t3706*t4090;
  t4109 = t4100 + t4102;
  t3888 = t3655*t3886;
  t3903 = t3889*t3899;
  t3909 = t3888 + t3903;
  t3926 = t3889*t3886;
  t3927 = -1.*t3655*t3899;
  t3933 = t3926 + t3927;
  t4005 = t3655*t4004;
  t4016 = t3889*t4014;
  t4017 = t4005 + t4016;
  t4027 = t3889*t4004;
  t4030 = -1.*t3655*t4014;
  t4033 = t4027 + t4030;
  t4097 = t3655*t4093;
  t4110 = t3889*t4109;
  t4115 = t4097 + t4110;
  t4119 = t3889*t4093;
  t4120 = -1.*t3655*t4109;
  t4123 = t4119 + t4120;
  t4195 = -1.*t3716;
  t4197 = 1. + t4195;
  t4237 = -1.*t3712;
  t4242 = 1. + t4237;
  t4264 = -1.*t3870;
  t4267 = 1. + t4264;
  t4286 = -1.*t3889;
  t4288 = 1. + t4286;
  t4310 = -1.*t3917;
  t4312 = 1. + t4310;
  t4136 = t3917*t3909;
  t4137 = t937*t3933;
  t4139 = t4136 + t4137;
  t4176 = -1.*t3748;
  t4177 = 1. + t4176;
  t4178 = 0.135*t4177;
  t4179 = 0. + t4178;
  t4184 = -0.135*t3813;
  t4189 = 0. + t4184;
  t4198 = 0.135*t4197;
  t4202 = 0.049*t3831;
  t4203 = 0. + t4198 + t4202;
  t4206 = -0.049*t4197;
  t4208 = 0.135*t3831;
  t4209 = 0. + t4206 + t4208;
  t4245 = -0.049*t4242;
  t4251 = -0.09*t3859;
  t4255 = 0. + t4245 + t4251;
  t4259 = -0.09*t4242;
  t4260 = 0.049*t3859;
  t4261 = 0. + t4259 + t4260;
  t4268 = -0.049*t4267;
  t4269 = -0.21*t3706;
  t4272 = 0. + t4268 + t4269;
  t4277 = -0.21*t4267;
  t4280 = 0.049*t3706;
  t4283 = 0. + t4277 + t4280;
  t4290 = -0.2707*t4288;
  t4291 = 0.0016*t3655;
  t4292 = 0. + t4290 + t4291;
  t4296 = -0.0016*t4288;
  t4300 = -0.2707*t3655;
  t4305 = 0. + t4296 + t4300;
  t4313 = 0.0184*t4312;
  t4314 = -0.7055*t937;
  t4316 = 0. + t4313 + t4314;
  t4319 = -0.7055*t4312;
  t4320 = -0.0184*t937;
  t4323 = 0. + t4319 + t4320;
  t4142 = t3917*t4017;
  t4143 = t937*t4033;
  t4147 = t4142 + t4143;
  t4148 = t3917*t4115;
  t4155 = t937*t4123;
  t4156 = t4148 + t4155;
  p_output1[0]=-1.*t3917*t3933 + t3909*t937;
  p_output1[1]=-1.*t3917*t4033 + t4017*t937;
  p_output1[2]=-1.*t3917*t4123 + t4115*t937;
  p_output1[3]=0.;
  p_output1[4]=t4139;
  p_output1[5]=t4147;
  p_output1[6]=t4156;
  p_output1[7]=0.;
  p_output1[8]=-1.*t3716*t3823 + t3714*t3715*t3831;
  p_output1[9]=t3715*t3758*t3831 - 1.*t3716*t3973;
  p_output1[10]=-1.*t3773*t3831 - 1.*t3716*t4061;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.1305*(t3716*t3823 - 1.*t3714*t3715*t3831) + 0.0184*t4139 + t3791*t4179 + t3807*t4189 + t3823*t4203 + t3714*t3715*t4209 + t3835*t4255 + t3851*t4261 + t3864*t4272 + t3878*t4283 + t3886*t4292 + t3899*t4305 + t3909*t4316 + t3933*t4323 - 0.7055*(t3917*t3933 - 1.*t3909*t937) + var1[0];
  p_output1[13]=0. + 0.1305*(-1.*t3715*t3758*t3831 + t3716*t3973) + 0.0184*t4147 + t3958*t4179 + t3967*t4189 + t3973*t4203 + t3715*t3758*t4209 + t3977*t4255 + t3987*t4261 + t3993*t4272 + t4000*t4283 + t4004*t4292 + t4014*t4305 + t4017*t4316 + t4033*t4323 - 0.7055*(t3917*t4033 - 1.*t4017*t937) + var1[1];
  p_output1[14]=0. + 0.1305*(t3773*t3831 + t3716*t4061) + 0.0184*t4156 + t3715*t3787*t4179 + t3715*t3751*t4189 + t4061*t4203 - 1.*t3773*t4209 + t4066*t4255 + t4079*t4261 + t4082*t4272 + t4090*t4283 + t4093*t4292 + t4109*t4305 + t4115*t4316 + t4123*t4323 - 0.7055*(t3917*t4123 - 1.*t4115*t937) + var1[2];
  p_output1[15]=1.;
}



void H_ankle_joint_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
