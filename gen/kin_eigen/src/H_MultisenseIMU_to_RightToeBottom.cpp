/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:37:32 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_MultisenseIMU_to_RightToeBottom.h"

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
static void output1(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  double t137;
  double t171;
  double t459;
  double t217;
  double t938;
  double t1014;
  double t888;
  double t1251;
  double t1371;
  double t1389;
  double t1013;
  double t1051;
  double t1067;
  double t1430;
  double t802;
  double t1536;
  double t1672;
  double t1682;
  double t1174;
  double t1493;
  double t1498;
  double t1693;
  double t786;
  double t1803;
  double t1865;
  double t1871;
  double t1517;
  double t1694;
  double t1699;
  double t1896;
  double t742;
  double t2087;
  double t2101;
  double t2105;
  double t1763;
  double t2016;
  double t2051;
  double t2184;
  double t2629;
  double t2671;
  double t2769;
  double t2574;
  double t2577;
  double t2579;
  double t2916;
  double t2963;
  double t3015;
  double t2608;
  double t2866;
  double t2879;
  double t3174;
  double t3194;
  double t3210;
  double t2887;
  double t3032;
  double t3065;
  double t3292;
  double t3315;
  double t3325;
  double t3132;
  double t3214;
  double t3224;
  double t3569;
  double t3571;
  double t3573;
  double t3459;
  double t3487;
  double t3525;
  double t3680;
  double t3700;
  double t3738;
  double t3560;
  double t3603;
  double t3607;
  double t3851;
  double t3853;
  double t3857;
  double t3642;
  double t3771;
  double t3785;
  double t2057;
  double t2375;
  double t2403;
  double t2441;
  double t2451;
  double t2460;
  double t3284;
  double t3330;
  double t3342;
  double t3387;
  double t3405;
  double t3419;
  double t3818;
  double t3858;
  double t3987;
  double t4038;
  double t4046;
  double t4049;
  double t4619;
  double t4622;
  double t4845;
  double t4849;
  double t5016;
  double t5067;
  double t5268;
  double t5280;
  double t5388;
  double t5404;
  double t4542;
  double t4546;
  double t4547;
  double t4557;
  double t4599;
  double t4663;
  double t4692;
  double t4728;
  double t4742;
  double t4749;
  double t4802;
  double t4852;
  double t4867;
  double t4871;
  double t4927;
  double t4947;
  double t4983;
  double t5083;
  double t5154;
  double t5203;
  double t5212;
  double t5213;
  double t5219;
  double t5282;
  double t5291;
  double t5295;
  double t5305;
  double t5316;
  double t5356;
  double t5411;
  double t5426;
  double t5445;
  double t5462;
  double t5486;
  double t5493;
  t137 = Cos(var1[8]);
  t171 = Sin(var1[7]);
  t459 = Sin(var1[8]);
  t217 = Cos(var1[7]);
  t938 = Cos(var1[9]);
  t1014 = Sin(var1[9]);
  t888 = Cos(var1[10]);
  t1251 = t217*t938;
  t1371 = -1.*t171*t459*t1014;
  t1389 = t1251 + t1371;
  t1013 = t938*t171*t459;
  t1051 = t217*t1014;
  t1067 = t1013 + t1051;
  t1430 = Sin(var1[10]);
  t802 = Cos(var1[11]);
  t1536 = t888*t1389;
  t1672 = -1.*t1067*t1430;
  t1682 = t1536 + t1672;
  t1174 = t888*t1067;
  t1493 = t1389*t1430;
  t1498 = t1174 + t1493;
  t1693 = Sin(var1[11]);
  t786 = Cos(var1[12]);
  t1803 = t802*t1682;
  t1865 = -1.*t1498*t1693;
  t1871 = t1803 + t1865;
  t1517 = t802*t1498;
  t1694 = t1682*t1693;
  t1699 = t1517 + t1694;
  t1896 = Sin(var1[12]);
  t742 = Cos(var1[13]);
  t2087 = t786*t1871;
  t2101 = -1.*t1699*t1896;
  t2105 = t2087 + t2101;
  t1763 = t786*t1699;
  t2016 = t1871*t1896;
  t2051 = t1763 + t2016;
  t2184 = Sin(var1[13]);
  t2629 = -1.*t938*t171;
  t2671 = -1.*t217*t459*t1014;
  t2769 = t2629 + t2671;
  t2574 = t217*t938*t459;
  t2577 = -1.*t171*t1014;
  t2579 = t2574 + t2577;
  t2916 = t888*t2769;
  t2963 = -1.*t2579*t1430;
  t3015 = t2916 + t2963;
  t2608 = t888*t2579;
  t2866 = t2769*t1430;
  t2879 = t2608 + t2866;
  t3174 = t802*t3015;
  t3194 = -1.*t2879*t1693;
  t3210 = t3174 + t3194;
  t2887 = t802*t2879;
  t3032 = t3015*t1693;
  t3065 = t2887 + t3032;
  t3292 = t786*t3210;
  t3315 = -1.*t3065*t1896;
  t3325 = t3292 + t3315;
  t3132 = t786*t3065;
  t3214 = t3210*t1896;
  t3224 = t3132 + t3214;
  t3569 = -1.*t137*t888*t1014;
  t3571 = -1.*t137*t938*t1430;
  t3573 = t3569 + t3571;
  t3459 = t137*t938*t888;
  t3487 = -1.*t137*t1014*t1430;
  t3525 = t3459 + t3487;
  t3680 = t802*t3573;
  t3700 = -1.*t3525*t1693;
  t3738 = t3680 + t3700;
  t3560 = t802*t3525;
  t3603 = t3573*t1693;
  t3607 = t3560 + t3603;
  t3851 = t786*t3738;
  t3853 = -1.*t3607*t1896;
  t3857 = t3851 + t3853;
  t3642 = t786*t3607;
  t3771 = t3738*t1896;
  t3785 = t3642 + t3771;
  t2057 = t742*t2051;
  t2375 = t2105*t2184;
  t2403 = t2057 + t2375;
  t2441 = t742*t2105;
  t2451 = -1.*t2051*t2184;
  t2460 = t2441 + t2451;
  t3284 = t742*t3224;
  t3330 = t3325*t2184;
  t3342 = t3284 + t3330;
  t3387 = t742*t3325;
  t3405 = -1.*t3224*t2184;
  t3419 = t3387 + t3405;
  t3818 = t742*t3785;
  t3858 = t3857*t2184;
  t3987 = t3818 + t3858;
  t4038 = t742*t3857;
  t4046 = -1.*t3785*t2184;
  t4049 = t4038 + t4046;
  t4619 = -1.*t938;
  t4622 = 1. + t4619;
  t4845 = -1.*t888;
  t4849 = 1. + t4845;
  t5016 = -1.*t802;
  t5067 = 1. + t5016;
  t5268 = -1.*t786;
  t5280 = 1. + t5268;
  t5388 = -1.*t742;
  t5404 = 1. + t5388;
  t4542 = -1.*t137;
  t4546 = 1. + t4542;
  t4547 = -0.135*t4546;
  t4557 = 0.049*t459;
  t4599 = 0. + t4547 + t4557;
  t4663 = -0.049*t4622;
  t4692 = -0.09*t1014;
  t4728 = 0. + t4663 + t4692;
  t4742 = -0.09*t4622;
  t4749 = 0.049*t1014;
  t4802 = 0. + t4742 + t4749;
  t4852 = -0.049*t4849;
  t4867 = -0.21*t1430;
  t4871 = 0. + t4852 + t4867;
  t4927 = -0.21*t4849;
  t4947 = 0.049*t1430;
  t4983 = 0. + t4927 + t4947;
  t5083 = -0.0016*t5067;
  t5154 = -0.2707*t1693;
  t5203 = 0. + t5083 + t5154;
  t5212 = -0.2707*t5067;
  t5213 = 0.0016*t1693;
  t5219 = 0. + t5212 + t5213;
  t5282 = 0.0184*t5280;
  t5291 = -0.7055*t1896;
  t5295 = 0. + t5282 + t5291;
  t5305 = -0.7055*t5280;
  t5316 = -0.0184*t1896;
  t5356 = 0. + t5305 + t5316;
  t5411 = -0.0216*t5404;
  t5426 = -1.1135*t2184;
  t5445 = 0. + t5411 + t5426;
  t5462 = -1.1135*t5404;
  t5486 = 0.0216*t2184;
  t5493 = 0. + t5462 + t5486;

  p_output1(0)=0. + t137*t171;
  p_output1(1)=0. - 1.*t137*t217;
  p_output1(2)=0. + t459;
  p_output1(3)=0.;
  p_output1(4)=0. - 0.642788*t2403 - 0.766044*t2460;
  p_output1(5)=0. + 0.642788*t3342 + 0.766044*t3419;
  p_output1(6)=0. + 0.642788*t3987 + 0.766044*t4049;
  p_output1(7)=0.;
  p_output1(8)=0. + 0.766044*t2403 - 0.642788*t2460;
  p_output1(9)=0. - 0.766044*t3342 + 0.642788*t3419;
  p_output1(10)=0. - 0.766044*t3987 + 0.642788*t4049;
  p_output1(11)=0.;
  p_output1(12)=0.24925 - 0.135*t171 + 0.1305*t137*t171 - 0.0306*t2403 + 1.1312*t2460 - 1.*t171*t4599 - 1.*t171*t459*t4728 - 1.*t217*t4802 - 1.*t1067*t4871 - 1.*t1389*t4983 - 1.*t1498*t5203 - 1.*t1682*t5219 - 1.*t1699*t5295 - 1.*t1871*t5356 - 1.*t2051*t5445 - 1.*t2105*t5493;
  p_output1(13)=-0.0302 - 0.135*(1. - 1.*t217) - 0.1305*t137*t217 + 0.0306*t3342 - 1.1312*t3419 + t217*t4599 + t217*t459*t4728 - 1.*t171*t4802 + t2579*t4871 + t2769*t4983 + t2879*t5203 + t3015*t5219 + t3065*t5295 + t3210*t5356 + t3224*t5445 + t3325*t5493;
  p_output1(14)=-0.047 + 0.0306*t3987 - 1.1312*t4049 - 0.049*t4546 - 0.004500000000000004*t459 + t137*t4728 - 1.*t1014*t137*t4983 + t3525*t5203 + t3573*t5219 + t3607*t5295 + t3738*t5356 + t3785*t5445 + t3857*t5493 + t137*t4871*t938;
  p_output1(15)=1.;
}


       
void H_MultisenseIMU_to_RightToeBottom(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
