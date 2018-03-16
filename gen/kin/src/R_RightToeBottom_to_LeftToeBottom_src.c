/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 12:16:18 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RightToeBottom_to_LeftToeBottom_src.h"

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
  double t3470;
  double t3494;
  double t3511;
  double t3486;
  double t3523;
  double t3437;
  double t3561;
  double t3576;
  double t3585;
  double t3502;
  double t3532;
  double t3542;
  double t3588;
  double t3372;
  double t3611;
  double t3622;
  double t3630;
  double t3549;
  double t3592;
  double t3597;
  double t3632;
  double t1430;
  double t3668;
  double t3674;
  double t3685;
  double t3598;
  double t3645;
  double t3646;
  double t3691;
  double t3740;
  double t3724;
  double t3734;
  double t3764;
  double t3773;
  double t3775;
  double t3738;
  double t3750;
  double t3757;
  double t3805;
  double t3813;
  double t3829;
  double t3763;
  double t3777;
  double t3794;
  double t3844;
  double t3848;
  double t3852;
  double t3804;
  double t3832;
  double t3835;
  double t3867;
  double t3868;
  double t3869;
  double t3843;
  double t3857;
  double t3859;
  double t3663;
  double t3695;
  double t3699;
  double t3710;
  double t3711;
  double t3716;
  double t3865;
  double t3870;
  double t3885;
  double t3890;
  double t3894;
  double t3899;
  double t3918;
  double t3921;
  double t3922;
  double t3907;
  double t3910;
  double t3915;
  double t3950;
  double t3952;
  double t3953;
  double t3932;
  double t3933;
  double t3943;
  double t3967;
  double t3969;
  double t3970;
  double t3948;
  double t3954;
  double t3960;
  double t3989;
  double t3990;
  double t3995;
  double t3964;
  double t3971;
  double t3987;
  double t4004;
  double t4005;
  double t4008;
  double t3988;
  double t3998;
  double t3999;
  double t3888;
  double t3902;
  double t3904;
  double t3704;
  double t3717;
  double t3719;
  double t4001;
  double t4009;
  double t4012;
  double t4018;
  double t4021;
  double t4022;
  double t4013;
  double t4023;
  double t4025;
  double t4045;
  double t4046;
  double t4047;
  double t1136;
  double t4054;
  double t4058;
  double t3931;
  double t4026;
  double t4033;
  double t4034;
  double t4035;
  double t4048;
  double t4049;
  double t4050;
  double t4060;
  double t4062;
  double t4063;
  double t4066;
  double t1037;
  double t4070;
  double t4076;
  double t4072;
  double t4073;
  double t4075;
  double t4131;
  double t4126;
  double t4127;
  double t4132;
  double t4140;
  double t4130;
  double t4133;
  double t4134;
  double t4125;
  double t4141;
  double t4142;
  double t4143;
  double t4147;
  double t4135;
  double t4144;
  double t4145;
  double t4124;
  double t4150;
  double t4151;
  double t4152;
  double t4156;
  double t4146;
  double t4153;
  double t4154;
  double t4123;
  double t4157;
  double t4160;
  double t4161;
  double t3906;
  double t3928;
  double t3930;
  double t4174;
  double t4175;
  double t4176;
  double t4178;
  double t4179;
  double t4180;
  double t4177;
  double t4181;
  double t4182;
  double t4186;
  double t4187;
  double t4188;
  double t4185;
  double t4189;
  double t4190;
  double t4192;
  double t4193;
  double t4194;
  double t4191;
  double t4196;
  double t4197;
  double t4199;
  double t4200;
  double t4201;
  double t4068;
  double t4211;
  double t4213;
  double t4214;
  double t4216;
  double t4218;
  double t4219;
  double t4215;
  double t4220;
  double t4221;
  double t4223;
  double t4224;
  double t4225;
  double t4222;
  double t4226;
  double t4227;
  double t4229;
  double t4230;
  double t4231;
  double t4228;
  double t4232;
  double t4233;
  double t4235;
  double t4236;
  double t4237;
  double t4094;
  double t4098;
  double t4101;
  double t4155;
  double t4162;
  double t4163;
  double t4164;
  double t4165;
  double t4166;
  double t4167;
  double t4168;
  double t4169;
  double t4079;
  double t4080;
  double t4084;
  double t4198;
  double t4202;
  double t4203;
  double t4204;
  double t4205;
  double t4206;
  double t4207;
  double t4208;
  double t4209;
  double t4087;
  double t4088;
  double t4089;
  double t4234;
  double t4238;
  double t4239;
  double t4240;
  double t4241;
  double t4242;
  double t4243;
  double t4244;
  double t4245;
  double t4112;
  double t4113;
  double t4116;
  double t4105;
  double t4106;
  double t4107;
  double t4110;
  double t4256;
  double t4257;
  double t4258;
  double t4260;
  double t4261;
  double t4262;
  double t4264;
  double t4265;
  double t4266;
  t3470 = Cos(var1[8]);
  t3494 = Cos(var1[10]);
  t3511 = Sin(var1[9]);
  t3486 = Cos(var1[9]);
  t3523 = Sin(var1[10]);
  t3437 = Cos(var1[11]);
  t3561 = -1.*t3470*t3494*t3511;
  t3576 = -1.*t3470*t3486*t3523;
  t3585 = t3561 + t3576;
  t3502 = t3470*t3486*t3494;
  t3532 = -1.*t3470*t3511*t3523;
  t3542 = t3502 + t3532;
  t3588 = Sin(var1[11]);
  t3372 = Cos(var1[12]);
  t3611 = t3437*t3585;
  t3622 = -1.*t3542*t3588;
  t3630 = t3611 + t3622;
  t3549 = t3437*t3542;
  t3592 = t3585*t3588;
  t3597 = t3549 + t3592;
  t3632 = Sin(var1[12]);
  t1430 = Cos(var1[13]);
  t3668 = t3372*t3630;
  t3674 = -1.*t3597*t3632;
  t3685 = t3668 + t3674;
  t3598 = t3372*t3597;
  t3645 = t3630*t3632;
  t3646 = t3598 + t3645;
  t3691 = Sin(var1[13]);
  t3740 = Cos(var1[7]);
  t3724 = Sin(var1[7]);
  t3734 = Sin(var1[8]);
  t3764 = t3740*t3486;
  t3773 = -1.*t3724*t3734*t3511;
  t3775 = t3764 + t3773;
  t3738 = t3486*t3724*t3734;
  t3750 = t3740*t3511;
  t3757 = t3738 + t3750;
  t3805 = t3494*t3775;
  t3813 = -1.*t3757*t3523;
  t3829 = t3805 + t3813;
  t3763 = t3494*t3757;
  t3777 = t3775*t3523;
  t3794 = t3763 + t3777;
  t3844 = t3437*t3829;
  t3848 = -1.*t3794*t3588;
  t3852 = t3844 + t3848;
  t3804 = t3437*t3794;
  t3832 = t3829*t3588;
  t3835 = t3804 + t3832;
  t3867 = t3372*t3852;
  t3868 = -1.*t3835*t3632;
  t3869 = t3867 + t3868;
  t3843 = t3372*t3835;
  t3857 = t3852*t3632;
  t3859 = t3843 + t3857;
  t3663 = t1430*t3646;
  t3695 = t3685*t3691;
  t3699 = t3663 + t3695;
  t3710 = t1430*t3685;
  t3711 = -1.*t3646*t3691;
  t3716 = t3710 + t3711;
  t3865 = t1430*t3859;
  t3870 = t3869*t3691;
  t3885 = t3865 + t3870;
  t3890 = t1430*t3869;
  t3894 = -1.*t3859*t3691;
  t3899 = t3890 + t3894;
  t3918 = 0.642788*t3885;
  t3921 = 0.766044*t3899;
  t3922 = t3918 + t3921;
  t3907 = -0.766044*t3699;
  t3910 = 0.642788*t3716;
  t3915 = t3907 + t3910;
  t3950 = -1.*t3486*t3724;
  t3952 = -1.*t3740*t3734*t3511;
  t3953 = t3950 + t3952;
  t3932 = t3740*t3486*t3734;
  t3933 = -1.*t3724*t3511;
  t3943 = t3932 + t3933;
  t3967 = t3494*t3953;
  t3969 = -1.*t3943*t3523;
  t3970 = t3967 + t3969;
  t3948 = t3494*t3943;
  t3954 = t3953*t3523;
  t3960 = t3948 + t3954;
  t3989 = t3437*t3970;
  t3990 = -1.*t3960*t3588;
  t3995 = t3989 + t3990;
  t3964 = t3437*t3960;
  t3971 = t3970*t3588;
  t3987 = t3964 + t3971;
  t4004 = t3372*t3995;
  t4005 = -1.*t3987*t3632;
  t4008 = t4004 + t4005;
  t3988 = t3372*t3987;
  t3998 = t3995*t3632;
  t3999 = t3988 + t3998;
  t3888 = -0.766044*t3885;
  t3902 = 0.642788*t3899;
  t3904 = t3888 + t3902;
  t3704 = 0.642788*t3699;
  t3717 = 0.766044*t3716;
  t3719 = t3704 + t3717;
  t4001 = t1430*t3999;
  t4009 = t4008*t3691;
  t4012 = t4001 + t4009;
  t4018 = t1430*t4008;
  t4021 = -1.*t3999*t3691;
  t4022 = t4018 + t4021;
  t4013 = -0.766044*t4012;
  t4023 = 0.642788*t4022;
  t4025 = t4013 + t4023;
  t4045 = 0.642788*t4012;
  t4046 = 0.766044*t4022;
  t4047 = t4045 + t4046;
  t1136 = Cos(var1[1]);
  t4054 = t3719*t4025;
  t4058 = -1.*t3915*t4047;
  t3931 = t3740*t3470*t3915;
  t4026 = t3734*t4025;
  t4033 = t3931 + t4026;
  t4034 = -1.*t3922*t4033;
  t4035 = t3740*t3470*t3719;
  t4048 = t3734*t4047;
  t4049 = t4035 + t4048;
  t4050 = t3904*t4049;
  t4060 = t4054 + t4058;
  t4062 = -1.*t3470*t3724*t4060;
  t4063 = 0. + t4034 + t4050 + t4062;
  t4066 = 1/t4063;
  t1037 = Cos(var1[0]);
  t4070 = Sin(var1[0]);
  t4076 = Sin(var1[1]);
  t4072 = t4047*t3904;
  t4073 = -1.*t4025*t3922;
  t4075 = 0. + t4072 + t4073;
  t4131 = Cos(var1[3]);
  t4126 = Cos(var1[2]);
  t4127 = Sin(var1[3]);
  t4132 = Sin(var1[2]);
  t4140 = Cos(var1[4]);
  t4130 = -1.*t1136*t4126*t4127;
  t4133 = -1.*t4131*t1136*t4132;
  t4134 = t4130 + t4133;
  t4125 = Sin(var1[4]);
  t4141 = t4131*t1136*t4126;
  t4142 = -1.*t1136*t4127*t4132;
  t4143 = t4141 + t4142;
  t4147 = Cos(var1[5]);
  t4135 = t4125*t4134;
  t4144 = t4140*t4143;
  t4145 = t4135 + t4144;
  t4124 = Sin(var1[5]);
  t4150 = t4140*t4134;
  t4151 = -1.*t4125*t4143;
  t4152 = t4150 + t4151;
  t4156 = Cos(var1[6]);
  t4146 = -1.*t4124*t4145;
  t4153 = t4147*t4152;
  t4154 = t4146 + t4153;
  t4123 = Sin(var1[6]);
  t4157 = t4147*t4145;
  t4160 = t4124*t4152;
  t4161 = t4157 + t4160;
  t3906 = -1.*t3719*t3904;
  t3928 = t3915*t3922;
  t3930 = 0. + t3906 + t3928;
  t4174 = t1037*t4126*t4076;
  t4175 = -1.*t4070*t4132;
  t4176 = t4174 + t4175;
  t4178 = -1.*t4126*t4070;
  t4179 = -1.*t1037*t4076*t4132;
  t4180 = t4178 + t4179;
  t4177 = -1.*t4127*t4176;
  t4181 = t4131*t4180;
  t4182 = t4177 + t4181;
  t4186 = t4131*t4176;
  t4187 = t4127*t4180;
  t4188 = t4186 + t4187;
  t4185 = t4125*t4182;
  t4189 = t4140*t4188;
  t4190 = t4185 + t4189;
  t4192 = t4140*t4182;
  t4193 = -1.*t4125*t4188;
  t4194 = t4192 + t4193;
  t4191 = -1.*t4124*t4190;
  t4196 = t4147*t4194;
  t4197 = t4191 + t4196;
  t4199 = t4147*t4190;
  t4200 = t4124*t4194;
  t4201 = t4199 + t4200;
  t4068 = 0. + t4054 + t4058;
  t4211 = t4126*t4070*t4076;
  t4213 = t1037*t4132;
  t4214 = t4211 + t4213;
  t4216 = t1037*t4126;
  t4218 = -1.*t4070*t4076*t4132;
  t4219 = t4216 + t4218;
  t4215 = -1.*t4127*t4214;
  t4220 = t4131*t4219;
  t4221 = t4215 + t4220;
  t4223 = t4131*t4214;
  t4224 = t4127*t4219;
  t4225 = t4223 + t4224;
  t4222 = t4125*t4221;
  t4226 = t4140*t4225;
  t4227 = t4222 + t4226;
  t4229 = t4140*t4221;
  t4230 = -1.*t4125*t4225;
  t4231 = t4229 + t4230;
  t4228 = -1.*t4124*t4227;
  t4232 = t4147*t4231;
  t4233 = t4228 + t4232;
  t4235 = t4147*t4227;
  t4236 = t4124*t4231;
  t4237 = t4235 + t4236;
  t4094 = -1.*t3470*t3724*t4025;
  t4098 = t3740*t3470*t3904;
  t4101 = 0. + t4094 + t4098;
  t4155 = t4123*t4154;
  t4162 = t4156*t4161;
  t4163 = t4155 + t4162;
  t4164 = 0.642788*t4163;
  t4165 = t4156*t4154;
  t4166 = -1.*t4123*t4161;
  t4167 = t4165 + t4166;
  t4168 = 0.766044*t4167;
  t4169 = t4164 + t4168;
  t4079 = t3470*t3724*t3915;
  t4080 = t3734*t3904;
  t4084 = 0. + t4079 + t4080;
  t4198 = t4123*t4197;
  t4202 = t4156*t4201;
  t4203 = t4198 + t4202;
  t4204 = 0.642788*t4203;
  t4205 = t4156*t4197;
  t4206 = -1.*t4123*t4201;
  t4207 = t4205 + t4206;
  t4208 = 0.766044*t4207;
  t4209 = t4204 + t4208;
  t4087 = -1.*t3740*t3470*t3915;
  t4088 = -1.*t3734*t4025;
  t4089 = 0. + t4087 + t4088;
  t4234 = t4123*t4233;
  t4238 = t4156*t4237;
  t4239 = t4234 + t4238;
  t4240 = 0.642788*t4239;
  t4241 = t4156*t4233;
  t4242 = -1.*t4123*t4237;
  t4243 = t4241 + t4242;
  t4244 = 0.766044*t4243;
  t4245 = t4240 + t4244;
  t4112 = t3470*t3724*t4047;
  t4113 = -1.*t3740*t3470*t3922;
  t4116 = 0. + t4112 + t4113;
  t4105 = -1.*t3470*t3724*t3719;
  t4106 = -1.*t3734*t3922;
  t4107 = 0. + t4105 + t4106;
  t4110 = 0. + t4035 + t4048;
  t4256 = -0.766044*t4163;
  t4257 = 0.642788*t4167;
  t4258 = t4256 + t4257;
  t4260 = -0.766044*t4203;
  t4261 = 0.642788*t4207;
  t4262 = t4260 + t4261;
  t4264 = -0.766044*t4239;
  t4265 = 0.642788*t4243;
  t4266 = t4264 + t4265;
  p_output1[0]=0. - 1.*t1037*t1136*t3930*t4066 - 1.*t1136*t4066*t4068*t4070 + t4066*t4075*t4076;
  p_output1[1]=0. - 1.*t1037*t1136*t4066*t4084 - 1.*t1136*t4066*t4070*t4089 + t4066*t4076*t4101;
  p_output1[2]=0. - 1.*t1037*t1136*t4066*t4107 - 1.*t1136*t4066*t4070*t4110 + t4066*t4076*t4116;
  p_output1[3]=0. + t4066*t4075*t4169 + t3930*t4066*t4209 + t4066*t4068*t4245;
  p_output1[4]=0. + t4066*t4101*t4169 + t4066*t4084*t4209 + t4066*t4089*t4245;
  p_output1[5]=0. + t4066*t4116*t4169 + t4066*t4107*t4209 + t4066*t4110*t4245;
  p_output1[6]=0. + t4066*t4075*t4258 + t3930*t4066*t4262 + t4066*t4068*t4266;
  p_output1[7]=0. + t4066*t4101*t4258 + t4066*t4084*t4262 + t4066*t4089*t4266;
  p_output1[8]=0. + t4066*t4116*t4258 + t4066*t4107*t4262 + t4066*t4110*t4266;
}



void R_RightToeBottom_to_LeftToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
