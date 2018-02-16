/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:24:49 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "J_VectorNav_to_RightToeBottom.h"

#ifdef _MSC_VER
  #define INLINE __forceinline /* use __forceinline (VC++ specific) */
#else
  #define INLINE inline        /* use standard inline */
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
static void output1(Eigen::Matrix<double,6,14> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  double t123;
  double t148;
  double t670;
  double t992;
  double t1053;
  double t1096;
  double t1162;
  double t1379;
  double t2120;
  double t2263;
  double t2370;
  double t2424;
  double t1858;
  double t1904;
  double t2057;
  double t2560;
  double t2580;
  double t2677;
  double t2991;
  double t3043;
  double t3050;
  double t3071;
  double t2834;
  double t2919;
  double t2956;
  double t3147;
  double t3157;
  double t3163;
  double t3404;
  double t3460;
  double t3490;
  double t3519;
  double t3281;
  double t3313;
  double t3374;
  double t3604;
  double t3609;
  double t3666;
  double t3848;
  double t3862;
  double t3885;
  double t3904;
  double t3820;
  double t3838;
  double t3840;
  double t3967;
  double t3968;
  double t3974;
  double t204;
  double t263;
  double t501;
  double t698;
  double t807;
  double t1102;
  double t1168;
  double t1278;
  double t1399;
  double t1495;
  double t1523;
  double t2408;
  double t2526;
  double t2546;
  double t2703;
  double t2749;
  double t2770;
  double t4209;
  double t4215;
  double t4216;
  double t4219;
  double t4223;
  double t4224;
  double t3066;
  double t3082;
  double t3097;
  double t3179;
  double t3184;
  double t3215;
  double t4229;
  double t4231;
  double t4232;
  double t4237;
  double t4239;
  double t4241;
  double t3517;
  double t3551;
  double t3587;
  double t3718;
  double t3731;
  double t3788;
  double t4246;
  double t4253;
  double t4259;
  double t4262;
  double t4268;
  double t4277;
  double t3900;
  double t3915;
  double t3936;
  double t3984;
  double t3987;
  double t3993;
  double t4298;
  double t4300;
  double t4301;
  double t4307;
  double t4308;
  double t4317;
  double t4380;
  double t4396;
  double t4205;
  double t4206;
  double t4218;
  double t4227;
  double t4235;
  double t4245;
  double t4261;
  double t4286;
  double t4302;
  double t4329;
  double t4330;
  double t4332;
  double t4335;
  double t4337;
  double t4347;
  double t4351;
  double t4360;
  double t4366;
  double t4369;
  double t1331;
  double t1802;
  double t2557;
  double t2775;
  double t3138;
  double t3259;
  double t3590;
  double t3795;
  double t3940;
  double t3999;
  double t4056;
  double t4057;
  double t4073;
  double t4099;
  double t4109;
  double t4118;
  double t4124;
  double t4129;
  double t4516;
  double t4518;
  double t4521;
  double t4539;
  double t4544;
  double t4545;
  double t4561;
  double t4565;
  double t4567;
  double t4579;
  double t4581;
  double t4584;
  double t4587;
  double t4588;
  double t4595;
  double t4615;
  double t4629;
  double t4631;
  double t4484;
  double t4488;
  double t4495;
  double t4508;
  double t4509;
  double t4525;
  double t4557;
  double t4578;
  double t4586;
  double t4608;
  double t4632;
  double t4646;
  double t4650;
  double t4655;
  double t4663;
  double t4674;
  double t4676;
  double t4689;
  double t4698;
  double t4709;
  double t4752;
  double t4753;
  double t4401;
  double t4742;
  double t4751;
  double t4430;
  double t4741;
  double t4826;
  double t4829;
  double t4830;
  double t4856;
  double t4863;
  double t4884;
  double t4754;
  double t4801;
  double t4802;
  double t4938;
  double t4941;
  double t4942;
  double t4948;
  double t4968;
  double t4981;
  double t4914;
  double t4919;
  double t4925;
  double t5128;
  double t5130;
  double t5147;
  double t5175;
  double t5181;
  double t5186;
  double t5095;
  double t5112;
  double t5114;
  double t5258;
  double t5265;
  double t5273;
  double t5294;
  double t5298;
  double t5299;
  double t5234;
  double t5247;
  double t5248;
  double t5376;
  double t5380;
  double t5381;
  double t5386;
  double t5390;
  double t5415;
  double t5358;
  double t5360;
  double t5361;
  t123 = Sin(var1[7]);
  t148 = Cos(var1[8]);
  t670 = Sin(var1[8]);
  t992 = Cos(var1[9]);
  t1053 = -1.*t992;
  t1096 = 1. + t1053;
  t1162 = Sin(var1[9]);
  t1379 = Cos(var1[7]);
  t2120 = Cos(var1[10]);
  t2263 = -1.*t2120;
  t2370 = 1. + t2263;
  t2424 = Sin(var1[10]);
  t1858 = t992*t123*t670;
  t1904 = t1379*t1162;
  t2057 = t1858 + t1904;
  t2560 = t1379*t992;
  t2580 = -1.*t123*t670*t1162;
  t2677 = t2560 + t2580;
  t2991 = Cos(var1[11]);
  t3043 = -1.*t2991;
  t3050 = 1. + t3043;
  t3071 = Sin(var1[11]);
  t2834 = t2120*t2057;
  t2919 = t2677*t2424;
  t2956 = t2834 + t2919;
  t3147 = t2120*t2677;
  t3157 = -1.*t2057*t2424;
  t3163 = t3147 + t3157;
  t3404 = Cos(var1[12]);
  t3460 = -1.*t3404;
  t3490 = 1. + t3460;
  t3519 = Sin(var1[12]);
  t3281 = t2991*t2956;
  t3313 = t3163*t3071;
  t3374 = t3281 + t3313;
  t3604 = t2991*t3163;
  t3609 = -1.*t2956*t3071;
  t3666 = t3604 + t3609;
  t3848 = Cos(var1[13]);
  t3862 = -1.*t3848;
  t3885 = 1. + t3862;
  t3904 = Sin(var1[13]);
  t3820 = t3404*t3374;
  t3838 = t3666*t3519;
  t3840 = t3820 + t3838;
  t3967 = t3404*t3666;
  t3968 = -1.*t3374*t3519;
  t3974 = t3967 + t3968;
  t204 = -1.*t148;
  t263 = 1. + t204;
  t501 = -0.135*t263;
  t698 = 0.049*t670;
  t807 = 0. + t501 + t698;
  t1102 = -0.049*t1096;
  t1168 = -0.09*t1162;
  t1278 = 0. + t1102 + t1168;
  t1399 = -0.09*t1096;
  t1495 = 0.049*t1162;
  t1523 = 0. + t1399 + t1495;
  t2408 = -0.049*t2370;
  t2526 = -0.21*t2424;
  t2546 = 0. + t2408 + t2526;
  t2703 = -0.21*t2370;
  t2749 = 0.049*t2424;
  t2770 = 0. + t2703 + t2749;
  t4209 = t1379*t992*t670;
  t4215 = -1.*t123*t1162;
  t4216 = t4209 + t4215;
  t4219 = -1.*t992*t123;
  t4223 = -1.*t1379*t670*t1162;
  t4224 = t4219 + t4223;
  t3066 = -0.0016*t3050;
  t3082 = -0.2707*t3071;
  t3097 = 0. + t3066 + t3082;
  t3179 = -0.2707*t3050;
  t3184 = 0.0016*t3071;
  t3215 = 0. + t3179 + t3184;
  t4229 = t2120*t4216;
  t4231 = t4224*t2424;
  t4232 = t4229 + t4231;
  t4237 = t2120*t4224;
  t4239 = -1.*t4216*t2424;
  t4241 = t4237 + t4239;
  t3517 = 0.0184*t3490;
  t3551 = -0.7055*t3519;
  t3587 = 0. + t3517 + t3551;
  t3718 = -0.7055*t3490;
  t3731 = -0.0184*t3519;
  t3788 = 0. + t3718 + t3731;
  t4246 = t2991*t4232;
  t4253 = t4241*t3071;
  t4259 = t4246 + t4253;
  t4262 = t2991*t4241;
  t4268 = -1.*t4232*t3071;
  t4277 = t4262 + t4268;
  t3900 = -0.0216*t3885;
  t3915 = -1.1135*t3904;
  t3936 = 0. + t3900 + t3915;
  t3984 = -1.1135*t3885;
  t3987 = 0.0216*t3904;
  t3993 = 0. + t3984 + t3987;
  t4298 = t3404*t4259;
  t4300 = t4277*t3519;
  t4301 = t4298 + t4300;
  t4307 = t3404*t4277;
  t4308 = -1.*t4259*t3519;
  t4317 = t4307 + t4308;
  t4380 = -1.*t1379;
  t4396 = 0. + t4380;
  t4205 = -1.*t1379*t670*t1278;
  t4206 = t123*t1523;
  t4218 = -1.*t4216*t2546;
  t4227 = -1.*t4224*t2770;
  t4235 = -1.*t4232*t3097;
  t4245 = -1.*t4241*t3215;
  t4261 = -1.*t4259*t3587;
  t4286 = -1.*t4277*t3788;
  t4302 = -1.*t4301*t3936;
  t4329 = -1.*t4317*t3993;
  t4330 = t3848*t4301;
  t4332 = t4317*t3904;
  t4335 = t4330 + t4332;
  t4337 = -0.0306*t4335;
  t4347 = t3848*t4317;
  t4351 = -1.*t4301*t3904;
  t4360 = t4347 + t4351;
  t4366 = 1.1312*t4360;
  t4369 = 0. + t123;
  t1331 = -1.*t123*t670*t1278;
  t1802 = -1.*t1379*t1523;
  t2557 = -1.*t2057*t2546;
  t2775 = -1.*t2677*t2770;
  t3138 = -1.*t2956*t3097;
  t3259 = -1.*t3163*t3215;
  t3590 = -1.*t3374*t3587;
  t3795 = -1.*t3666*t3788;
  t3940 = -1.*t3840*t3936;
  t3999 = -1.*t3974*t3993;
  t4056 = t3848*t3840;
  t4057 = t3974*t3904;
  t4073 = t4056 + t4057;
  t4099 = -0.0306*t4073;
  t4109 = t3848*t3974;
  t4118 = -1.*t3840*t3904;
  t4124 = t4109 + t4118;
  t4129 = 1.1312*t4124;
  t4516 = t148*t992*t2120;
  t4518 = -1.*t148*t1162*t2424;
  t4521 = t4516 + t4518;
  t4539 = -1.*t148*t2120*t1162;
  t4544 = -1.*t148*t992*t2424;
  t4545 = t4539 + t4544;
  t4561 = t2991*t4521;
  t4565 = t4545*t3071;
  t4567 = t4561 + t4565;
  t4579 = t2991*t4545;
  t4581 = -1.*t4521*t3071;
  t4584 = t4579 + t4581;
  t4587 = t3404*t4567;
  t4588 = t4584*t3519;
  t4595 = t4587 + t4588;
  t4615 = t3404*t4584;
  t4629 = -1.*t4567*t3519;
  t4631 = t4615 + t4629;
  t4484 = 0.049*t148;
  t4488 = -0.004500000000000004*t670;
  t4495 = t148*t1278;
  t4508 = t148*t992*t2546;
  t4509 = -1.*t148*t1162*t2770;
  t4525 = t4521*t3097;
  t4557 = t4545*t3215;
  t4578 = t4567*t3587;
  t4586 = t4584*t3788;
  t4608 = t4595*t3936;
  t4632 = t4631*t3993;
  t4646 = t3848*t4595;
  t4650 = t4631*t3904;
  t4655 = t4646 + t4650;
  t4663 = 0.0306*t4655;
  t4674 = t3848*t4631;
  t4676 = -1.*t4595*t3904;
  t4689 = t4674 + t4676;
  t4698 = -1.1312*t4689;
  t4709 = 0. + t4484 + t4488 + t4495 + t4508 + t4509 + t4525 + t4557 + t4578 + t4586 + t4608 + t4632 + t4663 + t4698;
  t4752 = t148*t123;
  t4753 = 0. + t4752;
  t4401 = -0.004500000000000004*t1379*t148;
  t4742 = t1379*t148;
  t4751 = 0. + t4742;
  t4430 = -0.004500000000000004*t148*t123;
  t4741 = 0. + t670;
  t4826 = -0.049*t2057;
  t4829 = -0.09*t2677;
  t4830 = 0. + t4430 + t4826 + t4829 + t2557 + t2775 + t3138 + t3259 + t3590 + t3795 + t3940 + t3999 + t4099 + t4129;
  t4856 = 0.049*t148*t992;
  t4863 = -0.09*t148*t1162;
  t4884 = 0. + t4856 + t4488 + t4863 + t4508 + t4509 + t4525 + t4557 + t4578 + t4586 + t4608 + t4632 + t4663 + t4698;
  t4754 = -0.049*t4216;
  t4801 = -0.09*t4224;
  t4802 = 0. + t4401 + t4754 + t4801 + t4218 + t4227 + t4235 + t4245 + t4261 + t4286 + t4302 + t4329 + t4337 + t4366;
  t4938 = -0.21*t3163;
  t4941 = -0.049*t2956;
  t4942 = 0. + t4938 + t4941 + t3138 + t3259 + t3590 + t3795 + t3940 + t3999 + t4099 + t4129;
  t4948 = 0.21*t4545;
  t4968 = 0.049*t4521;
  t4981 = 0. + t4948 + t4968 + t4525 + t4557 + t4578 + t4586 + t4608 + t4632 + t4663 + t4698;
  t4914 = -0.21*t4241;
  t4919 = -0.049*t4232;
  t4925 = 0. + t4914 + t4919 + t4235 + t4245 + t4261 + t4286 + t4302 + t4329 + t4337 + t4366;
  t5128 = -0.0016*t3374;
  t5130 = -0.2707*t3666;
  t5147 = 0. + t5128 + t5130 + t3590 + t3795 + t3940 + t3999 + t4099 + t4129;
  t5175 = 0.0016*t4567;
  t5181 = 0.2707*t4584;
  t5186 = 0. + t5175 + t5181 + t4578 + t4586 + t4608 + t4632 + t4663 + t4698;
  t5095 = -0.0016*t4259;
  t5112 = -0.2707*t4277;
  t5114 = 0. + t5095 + t5112 + t4261 + t4286 + t4302 + t4329 + t4337 + t4366;
  t5258 = -0.7055*t3974;
  t5265 = 0.0184*t3840;
  t5273 = 0. + t5258 + t5265 + t3940 + t3999 + t4099 + t4129;
  t5294 = 0.7055*t4631;
  t5298 = -0.0184*t4595;
  t5299 = 0. + t5294 + t5298 + t4608 + t4632 + t4663 + t4698;
  t5234 = -0.7055*t4317;
  t5247 = 0.0184*t4301;
  t5248 = 0. + t5234 + t5247 + t4302 + t4329 + t4337 + t4366;
  t5376 = -0.052199999999999996*t4073;
  t5380 = 0.01770000000000005*t4124;
  t5381 = 0. + t5376 + t5380;
  t5386 = 0.052199999999999996*t4655;
  t5390 = -0.01770000000000005*t4689;
  t5415 = 0. + t5386 + t5390;
  t5358 = -0.052199999999999996*t4335;
  t5360 = 0.01770000000000005*t4360;
  t5361 = 0. + t5358 + t5360;

  p_output1(0)=0;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=0;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=0;
  p_output1(9)=0;
  p_output1(10)=0;
  p_output1(11)=0;
  p_output1(12)=0;
  p_output1(13)=0;
  p_output1(14)=0;
  p_output1(15)=0;
  p_output1(16)=0;
  p_output1(17)=0;
  p_output1(18)=0;
  p_output1(19)=0;
  p_output1(20)=0;
  p_output1(21)=0;
  p_output1(22)=0;
  p_output1(23)=0;
  p_output1(24)=0;
  p_output1(25)=0;
  p_output1(26)=0;
  p_output1(27)=0;
  p_output1(28)=0;
  p_output1(29)=0;
  p_output1(30)=0;
  p_output1(31)=0;
  p_output1(32)=0;
  p_output1(33)=0;
  p_output1(34)=0;
  p_output1(35)=0;
  p_output1(36)=0;
  p_output1(37)=0;
  p_output1(38)=0;
  p_output1(39)=0;
  p_output1(40)=0;
  p_output1(41)=0;
  p_output1(42)=1.;
  p_output1(43)=0.;
  p_output1(44)=0.;
  p_output1(45)=0.;
  p_output1(46)=0. - 1.*(0. - 0.135*t123 + t1331 + 0.1305*t123*t148 + t1802 + t2557 + t2775 + t3138 + t3259 + t3590 + t3795 + t3940 + t3999 + t4099 + t4129 - 1.*t123*t807);
  p_output1(47)=0. - 0.135*t1379 + 0.1305*t1379*t148 + t4205 + t4206 + t4218 + t4227 + t4235 + t4245 + t4261 + t4286 + t4302 + t4329 + t4337 + t4366 - 1.*t1379*t807;
  p_output1(48)=0.;
  p_output1(49)=t4369;
  p_output1(50)=t4396;
  p_output1(51)=t4369*(0. + t1331 - 0.09*t1379 + t1802 + t2557 + t2775 + t3138 + t3259 + t3590 + t3795 + t3940 + t3999 + t4099 + t4129 + t4430 - 0.049*t123*t670) - 1.*t4396*(0. + 0.09*t123 + t4205 + t4206 + t4218 + t4227 + t4235 + t4245 + t4261 + t4286 + t4302 + t4329 + t4337 + t4366 + t4401 - 0.049*t1379*t670);
  p_output1(52)=0. + t4396*t4709;
  p_output1(53)=0. - 1.*t4369*t4709;
  p_output1(54)=t4741;
  p_output1(55)=t4751;
  p_output1(56)=t4753;
  p_output1(57)=-1.*t4753*t4802 + t4751*t4830;
  p_output1(58)=-1.*t4741*t4830 + t4753*t4884;
  p_output1(59)=t4741*t4802 - 1.*t4751*t4884;
  p_output1(60)=t4741;
  p_output1(61)=t4751;
  p_output1(62)=t4753;
  p_output1(63)=-1.*t4753*t4925 + t4751*t4942;
  p_output1(64)=-1.*t4741*t4942 + t4753*t4981;
  p_output1(65)=t4741*t4925 - 1.*t4751*t4981;
  p_output1(66)=t4741;
  p_output1(67)=t4751;
  p_output1(68)=t4753;
  p_output1(69)=-1.*t4753*t5114 + t4751*t5147;
  p_output1(70)=-1.*t4741*t5147 + t4753*t5186;
  p_output1(71)=t4741*t5114 - 1.*t4751*t5186;
  p_output1(72)=t4741;
  p_output1(73)=t4751;
  p_output1(74)=t4753;
  p_output1(75)=-1.*t4753*t5248 + t4751*t5273;
  p_output1(76)=-1.*t4741*t5273 + t4753*t5299;
  p_output1(77)=t4741*t5248 - 1.*t4751*t5299;
  p_output1(78)=t4741;
  p_output1(79)=t4751;
  p_output1(80)=t4753;
  p_output1(81)=-1.*t4753*t5361 + t4751*t5381;
  p_output1(82)=-1.*t4741*t5381 + t4753*t5415;
  p_output1(83)=t4741*t5361 - 1.*t4751*t5415;
}


       
void J_VectorNav_to_RightToeBottom(Eigen::Matrix<double,6,14> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
