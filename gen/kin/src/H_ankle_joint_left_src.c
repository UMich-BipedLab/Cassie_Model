/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 11:08:07 GMT-04:00
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
  double t3651;
  double t3679;
  double t3711;
  double t3702;
  double t3716;
  double t3675;
  double t3750;
  double t3751;
  double t3753;
  double t3705;
  double t3730;
  double t3744;
  double t3756;
  double t3606;
  double t3793;
  double t3801;
  double t3804;
  double t3665;
  double t3669;
  double t3671;
  double t3749;
  double t3764;
  double t3769;
  double t3775;
  double t3780;
  double t3785;
  double t3807;
  double t3821;
  double t3789;
  double t3808;
  double t3812;
  double t1402;
  double t3827;
  double t3828;
  double t3831;
  double t3844;
  double t3817;
  double t3832;
  double t3836;
  double t939;
  double t3845;
  double t3847;
  double t3850;
  double t693;
  double t3915;
  double t3919;
  double t3920;
  double t3899;
  double t3901;
  double t3903;
  double t3935;
  double t3939;
  double t3943;
  double t3897;
  double t3907;
  double t3921;
  double t3923;
  double t3926;
  double t3930;
  double t3933;
  double t3944;
  double t3945;
  double t3948;
  double t3951;
  double t3953;
  double t3866;
  double t3947;
  double t3957;
  double t3958;
  double t3962;
  double t3963;
  double t3965;
  double t4021;
  double t4024;
  double t4025;
  double t3992;
  double t3994;
  double t3997;
  double t3998;
  double t4012;
  double t4016;
  double t4018;
  double t4034;
  double t4037;
  double t4040;
  double t4041;
  double t4045;
  double t4038;
  double t4046;
  double t4047;
  double t4051;
  double t4053;
  double t4057;
  double t3840;
  double t3852;
  double t3855;
  double t3872;
  double t3874;
  double t3882;
  double t3961;
  double t3970;
  double t3971;
  double t3976;
  double t3978;
  double t3980;
  double t4048;
  double t4059;
  double t4065;
  double t4070;
  double t4073;
  double t4078;
  double t4145;
  double t4147;
  double t4184;
  double t4187;
  double t4219;
  double t4221;
  double t4239;
  double t4243;
  double t4259;
  double t4262;
  double t4082;
  double t4086;
  double t4090;
  double t4130;
  double t4131;
  double t4133;
  double t4134;
  double t4138;
  double t4140;
  double t4148;
  double t4153;
  double t4156;
  double t4160;
  double t4164;
  double t4165;
  double t4191;
  double t4197;
  double t4200;
  double t4210;
  double t4212;
  double t4215;
  double t4222;
  double t4224;
  double t4225;
  double t4227;
  double t4231;
  double t4235;
  double t4244;
  double t4246;
  double t4249;
  double t4251;
  double t4252;
  double t4255;
  double t4267;
  double t4268;
  double t4270;
  double t4273;
  double t4276;
  double t4277;
  double t4095;
  double t4097;
  double t4099;
  double t4100;
  double t4105;
  double t4106;
  t3651 = Cos(var1[3]);
  t3679 = Cos(var1[5]);
  t3711 = Sin(var1[4]);
  t3702 = Sin(var1[3]);
  t3716 = Sin(var1[5]);
  t3675 = Cos(var1[6]);
  t3750 = t3651*t3679*t3711;
  t3751 = t3702*t3716;
  t3753 = t3750 + t3751;
  t3705 = -1.*t3679*t3702;
  t3730 = t3651*t3711*t3716;
  t3744 = t3705 + t3730;
  t3756 = Sin(var1[6]);
  t3606 = Cos(var1[8]);
  t3793 = t3675*t3753;
  t3801 = -1.*t3744*t3756;
  t3804 = t3793 + t3801;
  t3665 = Cos(var1[4]);
  t3669 = Cos(var1[7]);
  t3671 = t3651*t3665*t3669;
  t3749 = t3675*t3744;
  t3764 = t3753*t3756;
  t3769 = t3749 + t3764;
  t3775 = Sin(var1[7]);
  t3780 = t3769*t3775;
  t3785 = t3671 + t3780;
  t3807 = Sin(var1[8]);
  t3821 = Cos(var1[9]);
  t3789 = t3606*t3785;
  t3808 = t3804*t3807;
  t3812 = t3789 + t3808;
  t1402 = Sin(var1[9]);
  t3827 = t3606*t3804;
  t3828 = -1.*t3785*t3807;
  t3831 = t3827 + t3828;
  t3844 = Cos(var1[10]);
  t3817 = -1.*t1402*t3812;
  t3832 = t3821*t3831;
  t3836 = t3817 + t3832;
  t939 = Sin(var1[10]);
  t3845 = t3821*t3812;
  t3847 = t1402*t3831;
  t3850 = t3845 + t3847;
  t693 = Sin(var1[11]);
  t3915 = t3679*t3702*t3711;
  t3919 = -1.*t3651*t3716;
  t3920 = t3915 + t3919;
  t3899 = t3651*t3679;
  t3901 = t3702*t3711*t3716;
  t3903 = t3899 + t3901;
  t3935 = t3675*t3920;
  t3939 = -1.*t3903*t3756;
  t3943 = t3935 + t3939;
  t3897 = t3665*t3669*t3702;
  t3907 = t3675*t3903;
  t3921 = t3920*t3756;
  t3923 = t3907 + t3921;
  t3926 = t3923*t3775;
  t3930 = t3897 + t3926;
  t3933 = t3606*t3930;
  t3944 = t3943*t3807;
  t3945 = t3933 + t3944;
  t3948 = t3606*t3943;
  t3951 = -1.*t3930*t3807;
  t3953 = t3948 + t3951;
  t3866 = Cos(var1[11]);
  t3947 = -1.*t1402*t3945;
  t3957 = t3821*t3953;
  t3958 = t3947 + t3957;
  t3962 = t3821*t3945;
  t3963 = t1402*t3953;
  t3965 = t3962 + t3963;
  t4021 = t3665*t3679*t3675;
  t4024 = -1.*t3665*t3716*t3756;
  t4025 = t4021 + t4024;
  t3992 = -1.*t3669*t3711;
  t3994 = t3665*t3675*t3716;
  t3997 = t3665*t3679*t3756;
  t3998 = t3994 + t3997;
  t4012 = t3998*t3775;
  t4016 = t3992 + t4012;
  t4018 = t3606*t4016;
  t4034 = t4025*t3807;
  t4037 = t4018 + t4034;
  t4040 = t3606*t4025;
  t4041 = -1.*t4016*t3807;
  t4045 = t4040 + t4041;
  t4038 = -1.*t1402*t4037;
  t4046 = t3821*t4045;
  t4047 = t4038 + t4046;
  t4051 = t3821*t4037;
  t4053 = t1402*t4045;
  t4057 = t4051 + t4053;
  t3840 = t939*t3836;
  t3852 = t3844*t3850;
  t3855 = t3840 + t3852;
  t3872 = t3844*t3836;
  t3874 = -1.*t939*t3850;
  t3882 = t3872 + t3874;
  t3961 = t939*t3958;
  t3970 = t3844*t3965;
  t3971 = t3961 + t3970;
  t3976 = t3844*t3958;
  t3978 = -1.*t939*t3965;
  t3980 = t3976 + t3978;
  t4048 = t939*t4047;
  t4059 = t3844*t4057;
  t4065 = t4048 + t4059;
  t4070 = t3844*t4047;
  t4073 = -1.*t939*t4057;
  t4078 = t4070 + t4073;
  t4145 = -1.*t3669;
  t4147 = 1. + t4145;
  t4184 = -1.*t3606;
  t4187 = 1. + t4184;
  t4219 = -1.*t3821;
  t4221 = 1. + t4219;
  t4239 = -1.*t3844;
  t4243 = 1. + t4239;
  t4259 = -1.*t3866;
  t4262 = 1. + t4259;
  t4082 = t3866*t3855;
  t4086 = t693*t3882;
  t4090 = t4082 + t4086;
  t4130 = -1.*t3675;
  t4131 = 1. + t4130;
  t4133 = 0.135*t4131;
  t4134 = 0. + t4133;
  t4138 = -0.135*t3756;
  t4140 = 0. + t4138;
  t4148 = 0.135*t4147;
  t4153 = 0.049*t3775;
  t4156 = 0. + t4148 + t4153;
  t4160 = -0.049*t4147;
  t4164 = 0.135*t3775;
  t4165 = 0. + t4160 + t4164;
  t4191 = -0.049*t4187;
  t4197 = -0.09*t3807;
  t4200 = 0. + t4191 + t4197;
  t4210 = -0.09*t4187;
  t4212 = 0.049*t3807;
  t4215 = 0. + t4210 + t4212;
  t4222 = -0.049*t4221;
  t4224 = -0.21*t1402;
  t4225 = 0. + t4222 + t4224;
  t4227 = -0.21*t4221;
  t4231 = 0.049*t1402;
  t4235 = 0. + t4227 + t4231;
  t4244 = -0.2707*t4243;
  t4246 = 0.0016*t939;
  t4249 = 0. + t4244 + t4246;
  t4251 = -0.0016*t4243;
  t4252 = -0.2707*t939;
  t4255 = 0. + t4251 + t4252;
  t4267 = 0.0184*t4262;
  t4268 = -0.7055*t693;
  t4270 = 0. + t4267 + t4268;
  t4273 = -0.7055*t4262;
  t4276 = -0.0184*t693;
  t4277 = 0. + t4273 + t4276;
  t4095 = t3866*t3971;
  t4097 = t693*t3980;
  t4099 = t4095 + t4097;
  t4100 = t3866*t4065;
  t4105 = t693*t4078;
  t4106 = t4100 + t4105;
  p_output1[0]=-1.*t3866*t3882 + t3855*t693;
  p_output1[1]=-1.*t3866*t3980 + t3971*t693;
  p_output1[2]=-1.*t3866*t4078 + t4065*t693;
  p_output1[3]=0.;
  p_output1[4]=t4090;
  p_output1[5]=t4099;
  p_output1[6]=t4106;
  p_output1[7]=0.;
  p_output1[8]=-1.*t3669*t3769 + t3651*t3665*t3775;
  p_output1[9]=t3665*t3702*t3775 - 1.*t3669*t3923;
  p_output1[10]=-1.*t3711*t3775 - 1.*t3669*t3998;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.1305*(t3669*t3769 - 1.*t3651*t3665*t3775) + 0.0184*t4090 + t3744*t4134 + t3753*t4140 + t3769*t4156 + t3651*t3665*t4165 + t3785*t4200 + t3804*t4215 + t3812*t4225 + t3831*t4235 + t3836*t4249 + t3850*t4255 + t3855*t4270 + t3882*t4277 - 0.7055*(t3866*t3882 - 1.*t3855*t693) + var1[0];
  p_output1[13]=0. + 0.1305*(-1.*t3665*t3702*t3775 + t3669*t3923) + 0.0184*t4099 + t3903*t4134 + t3920*t4140 + t3923*t4156 + t3665*t3702*t4165 + t3930*t4200 + t3943*t4215 + t3945*t4225 + t3953*t4235 + t3958*t4249 + t3965*t4255 + t3971*t4270 + t3980*t4277 - 0.7055*(t3866*t3980 - 1.*t3971*t693) + var1[1];
  p_output1[14]=0. + 0.1305*(t3711*t3775 + t3669*t3998) + 0.0184*t4106 + t3665*t3716*t4134 + t3665*t3679*t4140 + t3998*t4156 - 1.*t3711*t4165 + t4016*t4200 + t4025*t4215 + t4037*t4225 + t4045*t4235 + t4047*t4249 + t4057*t4255 + t4065*t4270 + t4078*t4277 - 0.7055*(t3866*t4078 - 1.*t4065*t693) + var1[2];
  p_output1[15]=1.;
}



void H_ankle_joint_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
