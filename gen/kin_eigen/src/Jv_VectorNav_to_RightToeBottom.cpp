/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:24:51 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jv_VectorNav_to_RightToeBottom.h"

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
static void output1(Eigen::Matrix<double,3,14> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  double t21;
  double t65;
  double t420;
  double t547;
  double t548;
  double t555;
  double t642;
  double t877;
  double t1249;
  double t1277;
  double t1306;
  double t1628;
  double t1137;
  double t1138;
  double t1168;
  double t1904;
  double t1941;
  double t2015;
  double t2615;
  double t2658;
  double t2736;
  double t2897;
  double t2310;
  double t2541;
  double t2560;
  double t3182;
  double t3184;
  double t3207;
  double t3748;
  double t3820;
  double t3826;
  double t3915;
  double t3517;
  double t3581;
  double t3718;
  double t4057;
  double t4074;
  double t4092;
  double t4209;
  double t4231;
  double t4237;
  double t4252;
  double t4200;
  double t4203;
  double t4206;
  double t4298;
  double t4300;
  double t4330;
  double t210;
  double t280;
  double t379;
  double t461;
  double t508;
  double t576;
  double t645;
  double t656;
  double t933;
  double t962;
  double t1054;
  double t1385;
  double t1639;
  double t1672;
  double t2088;
  double t2108;
  double t2293;
  double t4599;
  double t4607;
  double t4615;
  double t4632;
  double t4646;
  double t4650;
  double t2834;
  double t2926;
  double t3066;
  double t3208;
  double t3342;
  double t3442;
  double t4674;
  double t4689;
  double t4698;
  double t4710;
  double t4713;
  double t4715;
  double t3863;
  double t3929;
  double t3946;
  double t4109;
  double t4129;
  double t4168;
  double t4721;
  double t4729;
  double t4742;
  double t4752;
  double t4782;
  double t4826;
  double t4246;
  double t4253;
  double t4262;
  double t4332;
  double t4389;
  double t4396;
  double t4848;
  double t4855;
  double t4856;
  double t4888;
  double t4891;
  double t4897;
  double t4588;
  double t4593;
  double t4631;
  double t4655;
  double t4701;
  double t4716;
  double t4744;
  double t4840;
  double t4863;
  double t4912;
  double t4914;
  double t4919;
  double t4938;
  double t4941;
  double t4945;
  double t4948;
  double t4952;
  double t4961;
  double t711;
  double t1132;
  double t1760;
  double t2304;
  double t3179;
  double t3481;
  double t3971;
  double t4199;
  double t4281;
  double t4413;
  double t4429;
  double t4430;
  double t4452;
  double t4464;
  double t4488;
  double t4495;
  double t4516;
  double t4537;
  double t4982;
  double t4993;
  double t5192;
  double t5193;
  double t5201;
  double t5229;
  double t5247;
  double t5251;
  double t5265;
  double t5274;
  double t5293;
  double t5305;
  double t5330;
  double t5338;
  double t5347;
  double t5348;
  double t5351;
  double t5369;
  double t5373;
  double t5376;
  double t5062;
  double t5146;
  double t5158;
  double t5170;
  double t5175;
  double t5188;
  double t5215;
  double t5258;
  double t5294;
  double t5342;
  double t5358;
  double t5380;
  double t5382;
  double t5385;
  double t5386;
  double t5388;
  double t5419;
  double t5441;
  double t5448;
  double t5451;
  double t5453;
  double t4999;
  double t5072;
  double t5509;
  double t5515;
  double t5588;
  double t5601;
  double t5611;
  double t5578;
  double t5583;
  double t5633;
  double t5640;
  double t5641;
  double t5666;
  double t5522;
  double t5545;
  double t5546;
  double t5779;
  double t5785;
  double t5789;
  double t5855;
  double t5862;
  double t5868;
  double t5741;
  double t5754;
  double t5773;
  double t5959;
  double t5960;
  double t5967;
  double t5994;
  double t6001;
  double t6004;
  double t5936;
  double t5937;
  double t5943;
  double t6070;
  double t6074;
  double t6083;
  double t6095;
  double t6097;
  double t6098;
  double t6049;
  double t6051;
  double t6054;
  double t6166;
  double t6167;
  double t6169;
  double t6178;
  double t6186;
  double t6192;
  double t6139;
  double t6143;
  double t6158;
  t21 = Sin(var1[7]);
  t65 = Cos(var1[8]);
  t420 = Sin(var1[8]);
  t547 = Cos(var1[9]);
  t548 = -1.*t547;
  t555 = 1. + t548;
  t642 = Sin(var1[9]);
  t877 = Cos(var1[7]);
  t1249 = Cos(var1[10]);
  t1277 = -1.*t1249;
  t1306 = 1. + t1277;
  t1628 = Sin(var1[10]);
  t1137 = t547*t21*t420;
  t1138 = t877*t642;
  t1168 = t1137 + t1138;
  t1904 = t877*t547;
  t1941 = -1.*t21*t420*t642;
  t2015 = t1904 + t1941;
  t2615 = Cos(var1[11]);
  t2658 = -1.*t2615;
  t2736 = 1. + t2658;
  t2897 = Sin(var1[11]);
  t2310 = t1249*t1168;
  t2541 = t2015*t1628;
  t2560 = t2310 + t2541;
  t3182 = t1249*t2015;
  t3184 = -1.*t1168*t1628;
  t3207 = t3182 + t3184;
  t3748 = Cos(var1[12]);
  t3820 = -1.*t3748;
  t3826 = 1. + t3820;
  t3915 = Sin(var1[12]);
  t3517 = t2615*t2560;
  t3581 = t3207*t2897;
  t3718 = t3517 + t3581;
  t4057 = t2615*t3207;
  t4074 = -1.*t2560*t2897;
  t4092 = t4057 + t4074;
  t4209 = Cos(var1[13]);
  t4231 = -1.*t4209;
  t4237 = 1. + t4231;
  t4252 = Sin(var1[13]);
  t4200 = t3748*t3718;
  t4203 = t4092*t3915;
  t4206 = t4200 + t4203;
  t4298 = t3748*t4092;
  t4300 = -1.*t3718*t3915;
  t4330 = t4298 + t4300;
  t210 = -1.*t65;
  t280 = 1. + t210;
  t379 = -0.135*t280;
  t461 = 0.049*t420;
  t508 = 0. + t379 + t461;
  t576 = -0.049*t555;
  t645 = -0.09*t642;
  t656 = 0. + t576 + t645;
  t933 = -0.09*t555;
  t962 = 0.049*t642;
  t1054 = 0. + t933 + t962;
  t1385 = -0.049*t1306;
  t1639 = -0.21*t1628;
  t1672 = 0. + t1385 + t1639;
  t2088 = -0.21*t1306;
  t2108 = 0.049*t1628;
  t2293 = 0. + t2088 + t2108;
  t4599 = t877*t547*t420;
  t4607 = -1.*t21*t642;
  t4615 = t4599 + t4607;
  t4632 = -1.*t547*t21;
  t4646 = -1.*t877*t420*t642;
  t4650 = t4632 + t4646;
  t2834 = -0.0016*t2736;
  t2926 = -0.2707*t2897;
  t3066 = 0. + t2834 + t2926;
  t3208 = -0.2707*t2736;
  t3342 = 0.0016*t2897;
  t3442 = 0. + t3208 + t3342;
  t4674 = t1249*t4615;
  t4689 = t4650*t1628;
  t4698 = t4674 + t4689;
  t4710 = t1249*t4650;
  t4713 = -1.*t4615*t1628;
  t4715 = t4710 + t4713;
  t3863 = 0.0184*t3826;
  t3929 = -0.7055*t3915;
  t3946 = 0. + t3863 + t3929;
  t4109 = -0.7055*t3826;
  t4129 = -0.0184*t3915;
  t4168 = 0. + t4109 + t4129;
  t4721 = t2615*t4698;
  t4729 = t4715*t2897;
  t4742 = t4721 + t4729;
  t4752 = t2615*t4715;
  t4782 = -1.*t4698*t2897;
  t4826 = t4752 + t4782;
  t4246 = -0.0216*t4237;
  t4253 = -1.1135*t4252;
  t4262 = 0. + t4246 + t4253;
  t4332 = -1.1135*t4237;
  t4389 = 0.0216*t4252;
  t4396 = 0. + t4332 + t4389;
  t4848 = t3748*t4742;
  t4855 = t4826*t3915;
  t4856 = t4848 + t4855;
  t4888 = t3748*t4826;
  t4891 = -1.*t4742*t3915;
  t4897 = t4888 + t4891;
  t4588 = -1.*t877*t420*t656;
  t4593 = t21*t1054;
  t4631 = -1.*t4615*t1672;
  t4655 = -1.*t4650*t2293;
  t4701 = -1.*t4698*t3066;
  t4716 = -1.*t4715*t3442;
  t4744 = -1.*t4742*t3946;
  t4840 = -1.*t4826*t4168;
  t4863 = -1.*t4856*t4262;
  t4912 = -1.*t4897*t4396;
  t4914 = t4209*t4856;
  t4919 = t4897*t4252;
  t4938 = t4914 + t4919;
  t4941 = -0.0306*t4938;
  t4945 = t4209*t4897;
  t4948 = -1.*t4856*t4252;
  t4952 = t4945 + t4948;
  t4961 = 1.1312*t4952;
  t711 = -1.*t21*t420*t656;
  t1132 = -1.*t877*t1054;
  t1760 = -1.*t1168*t1672;
  t2304 = -1.*t2015*t2293;
  t3179 = -1.*t2560*t3066;
  t3481 = -1.*t3207*t3442;
  t3971 = -1.*t3718*t3946;
  t4199 = -1.*t4092*t4168;
  t4281 = -1.*t4206*t4262;
  t4413 = -1.*t4330*t4396;
  t4429 = t4209*t4206;
  t4430 = t4330*t4252;
  t4452 = t4429 + t4430;
  t4464 = -0.0306*t4452;
  t4488 = t4209*t4330;
  t4495 = -1.*t4206*t4252;
  t4516 = t4488 + t4495;
  t4537 = 1.1312*t4516;
  t4982 = -1.*t877;
  t4993 = 0. + t4982;
  t5192 = t65*t547*t1249;
  t5193 = -1.*t65*t642*t1628;
  t5201 = t5192 + t5193;
  t5229 = -1.*t65*t1249*t642;
  t5247 = -1.*t65*t547*t1628;
  t5251 = t5229 + t5247;
  t5265 = t2615*t5201;
  t5274 = t5251*t2897;
  t5293 = t5265 + t5274;
  t5305 = t2615*t5251;
  t5330 = -1.*t5201*t2897;
  t5338 = t5305 + t5330;
  t5347 = t3748*t5293;
  t5348 = t5338*t3915;
  t5351 = t5347 + t5348;
  t5369 = t3748*t5338;
  t5373 = -1.*t5293*t3915;
  t5376 = t5369 + t5373;
  t5062 = 0. + t21;
  t5146 = 0.049*t65;
  t5158 = -0.004500000000000004*t420;
  t5170 = t65*t656;
  t5175 = t65*t547*t1672;
  t5188 = -1.*t65*t642*t2293;
  t5215 = t5201*t3066;
  t5258 = t5251*t3442;
  t5294 = t5293*t3946;
  t5342 = t5338*t4168;
  t5358 = t5351*t4262;
  t5380 = t5376*t4396;
  t5382 = t4209*t5351;
  t5385 = t5376*t4252;
  t5386 = t5382 + t5385;
  t5388 = 0.0306*t5386;
  t5419 = t4209*t5376;
  t5441 = -1.*t5351*t4252;
  t5448 = t5419 + t5441;
  t5451 = -1.1312*t5448;
  t5453 = 0. + t5146 + t5158 + t5170 + t5175 + t5188 + t5215 + t5258 + t5294 + t5342 + t5358 + t5380 + t5388 + t5451;
  t4999 = -0.004500000000000004*t877*t65;
  t5072 = -0.004500000000000004*t65*t21;
  t5509 = t65*t21;
  t5515 = 0. + t5509;
  t5588 = -0.049*t1168;
  t5601 = -0.09*t2015;
  t5611 = 0. + t5072 + t5588 + t5601 + t1760 + t2304 + t3179 + t3481 + t3971 + t4199 + t4281 + t4413 + t4464 + t4537;
  t5578 = t877*t65;
  t5583 = 0. + t5578;
  t5633 = 0.049*t65*t547;
  t5640 = -0.09*t65*t642;
  t5641 = 0. + t5633 + t5158 + t5640 + t5175 + t5188 + t5215 + t5258 + t5294 + t5342 + t5358 + t5380 + t5388 + t5451;
  t5666 = 0. + t420;
  t5522 = -0.049*t4615;
  t5545 = -0.09*t4650;
  t5546 = 0. + t4999 + t5522 + t5545 + t4631 + t4655 + t4701 + t4716 + t4744 + t4840 + t4863 + t4912 + t4941 + t4961;
  t5779 = -0.21*t3207;
  t5785 = -0.049*t2560;
  t5789 = 0. + t5779 + t5785 + t3179 + t3481 + t3971 + t4199 + t4281 + t4413 + t4464 + t4537;
  t5855 = 0.21*t5251;
  t5862 = 0.049*t5201;
  t5868 = 0. + t5855 + t5862 + t5215 + t5258 + t5294 + t5342 + t5358 + t5380 + t5388 + t5451;
  t5741 = -0.21*t4715;
  t5754 = -0.049*t4698;
  t5773 = 0. + t5741 + t5754 + t4701 + t4716 + t4744 + t4840 + t4863 + t4912 + t4941 + t4961;
  t5959 = -0.0016*t3718;
  t5960 = -0.2707*t4092;
  t5967 = 0. + t5959 + t5960 + t3971 + t4199 + t4281 + t4413 + t4464 + t4537;
  t5994 = 0.0016*t5293;
  t6001 = 0.2707*t5338;
  t6004 = 0. + t5994 + t6001 + t5294 + t5342 + t5358 + t5380 + t5388 + t5451;
  t5936 = -0.0016*t4742;
  t5937 = -0.2707*t4826;
  t5943 = 0. + t5936 + t5937 + t4744 + t4840 + t4863 + t4912 + t4941 + t4961;
  t6070 = -0.7055*t4330;
  t6074 = 0.0184*t4206;
  t6083 = 0. + t6070 + t6074 + t4281 + t4413 + t4464 + t4537;
  t6095 = 0.7055*t5376;
  t6097 = -0.0184*t5351;
  t6098 = 0. + t6095 + t6097 + t5358 + t5380 + t5388 + t5451;
  t6049 = -0.7055*t4897;
  t6051 = 0.0184*t4856;
  t6054 = 0. + t6049 + t6051 + t4863 + t4912 + t4941 + t4961;
  t6166 = -0.052199999999999996*t4452;
  t6167 = 0.01770000000000005*t4516;
  t6169 = 0. + t6166 + t6167;
  t6178 = 0.052199999999999996*t5386;
  t6186 = -0.01770000000000005*t5448;
  t6192 = 0. + t6178 + t6186;
  t6139 = -0.052199999999999996*t4938;
  t6143 = 0.01770000000000005*t4952;
  t6158 = 0. + t6139 + t6143;

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
  p_output1(21)=0.;
  p_output1(22)=0. - 1.*(0. + t1132 + t1760 - 0.135*t21 + t2304 + t3179 + t3481 + t3971 + t4199 + t4281 + t4413 + t4464 + t4537 - 1.*t21*t508 + 0.1305*t21*t65 + t711);
  p_output1(23)=0. + t4588 + t4593 + t4631 + t4655 + t4701 + t4716 + t4744 + t4840 + t4863 + t4912 + t4941 + t4961 - 0.135*t877 - 1.*t508*t877 + 0.1305*t65*t877;
  p_output1(24)=t5062*(0. + t1132 + t1760 + t2304 + t3179 + t3481 + t3971 + t4199 - 0.049*t21*t420 + t4281 + t4413 + t4464 + t4537 + t5072 + t711 - 0.09*t877) - 1.*t4993*(0. + 0.09*t21 + t4588 + t4593 + t4631 + t4655 + t4701 + t4716 + t4744 + t4840 + t4863 + t4912 + t4941 + t4961 + t4999 - 0.049*t420*t877);
  p_output1(25)=0. + t4993*t5453;
  p_output1(26)=0. - 1.*t5062*t5453;
  p_output1(27)=-1.*t5515*t5546 + t5583*t5611;
  p_output1(28)=t5515*t5641 - 1.*t5611*t5666;
  p_output1(29)=-1.*t5583*t5641 + t5546*t5666;
  p_output1(30)=-1.*t5515*t5773 + t5583*t5789;
  p_output1(31)=-1.*t5666*t5789 + t5515*t5868;
  p_output1(32)=t5666*t5773 - 1.*t5583*t5868;
  p_output1(33)=-1.*t5515*t5943 + t5583*t5967;
  p_output1(34)=-1.*t5666*t5967 + t5515*t6004;
  p_output1(35)=t5666*t5943 - 1.*t5583*t6004;
  p_output1(36)=-1.*t5515*t6054 + t5583*t6083;
  p_output1(37)=-1.*t5666*t6083 + t5515*t6098;
  p_output1(38)=t5666*t6054 - 1.*t5583*t6098;
  p_output1(39)=-1.*t5515*t6158 + t5583*t6169;
  p_output1(40)=-1.*t5666*t6169 + t5515*t6192;
  p_output1(41)=t5666*t6158 - 1.*t5583*t6192;
}


       
void Jv_VectorNav_to_RightToeBottom(Eigen::Matrix<double,3,14> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
