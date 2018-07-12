/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:36:45 GMT-04:00
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
  double t489;
  double t2191;
  double t2296;
  double t2041;
  double t2423;
  double t1561;
  double t3056;
  double t3354;
  double t3659;
  double t2207;
  double t2458;
  double t2483;
  double t4135;
  double t1330;
  double t4424;
  double t4428;
  double t4445;
  double t2620;
  double t4284;
  double t4355;
  double t4454;
  double t1167;
  double t4580;
  double t4581;
  double t4583;
  double t4406;
  double t4481;
  double t4516;
  double t4623;
  double t301;
  double t74;
  double t663;
  double t4791;
  double t4807;
  double t4816;
  double t4734;
  double t4738;
  double t4776;
  double t4912;
  double t4948;
  double t4963;
  double t4778;
  double t4822;
  double t4833;
  double t5024;
  double t5046;
  double t5054;
  double t4880;
  double t4984;
  double t4987;
  double t5088;
  double t5097;
  double t5117;
  double t5000;
  double t5065;
  double t5082;
  double t5339;
  double t5342;
  double t5355;
  double t5214;
  double t5272;
  double t5299;
  double t5457;
  double t5473;
  double t5476;
  double t5320;
  double t5419;
  double t5435;
  double t5492;
  double t5503;
  double t5508;
  double t5447;
  double t5477;
  double t5478;
  double t5541;
  double t5544;
  double t5556;
  double t5485;
  double t5518;
  double t5523;
  double t4577;
  double t4641;
  double t4661;
  double t4670;
  double t4678;
  double t4710;
  double t5085;
  double t5127;
  double t5139;
  double t5152;
  double t5157;
  double t5188;
  double t5533;
  double t5560;
  double t5568;
  double t5582;
  double t5585;
  double t5617;
  double t5721;
  double t5725;
  double t5781;
  double t5793;
  double t5851;
  double t5867;
  double t5925;
  double t5928;
  double t5670;
  double t5677;
  double t5696;
  double t5704;
  double t5706;
  double t5713;
  double t5714;
  double t5732;
  double t5736;
  double t5737;
  double t5752;
  double t5754;
  double t5756;
  double t5800;
  double t5804;
  double t5808;
  double t5820;
  double t5821;
  double t5825;
  double t5872;
  double t5874;
  double t5875;
  double t5900;
  double t5910;
  double t5916;
  double t5936;
  double t5940;
  double t5941;
  double t5949;
  double t5962;
  double t5964;
  double t6002;
  double t6007;
  double t6008;
  double t6041;
  double t6043;
  double t6045;
  t489 = Cos(var1[8]);
  t2191 = Cos(var1[10]);
  t2296 = Sin(var1[9]);
  t2041 = Cos(var1[9]);
  t2423 = Sin(var1[10]);
  t1561 = Cos(var1[11]);
  t3056 = -1.*t489*t2191*t2296;
  t3354 = -1.*t489*t2041*t2423;
  t3659 = t3056 + t3354;
  t2207 = t489*t2041*t2191;
  t2458 = -1.*t489*t2296*t2423;
  t2483 = t2207 + t2458;
  t4135 = Sin(var1[11]);
  t1330 = Cos(var1[12]);
  t4424 = t1561*t3659;
  t4428 = -1.*t2483*t4135;
  t4445 = t4424 + t4428;
  t2620 = t1561*t2483;
  t4284 = t3659*t4135;
  t4355 = t2620 + t4284;
  t4454 = Sin(var1[12]);
  t1167 = Cos(var1[13]);
  t4580 = t1330*t4445;
  t4581 = -1.*t4355*t4454;
  t4583 = t4580 + t4581;
  t4406 = t1330*t4355;
  t4481 = t4445*t4454;
  t4516 = t4406 + t4481;
  t4623 = Sin(var1[13]);
  t301 = Cos(var1[7]);
  t74 = Sin(var1[8]);
  t663 = Sin(var1[7]);
  t4791 = -1.*t2041*t663;
  t4807 = -1.*t301*t74*t2296;
  t4816 = t4791 + t4807;
  t4734 = t301*t2041*t74;
  t4738 = -1.*t663*t2296;
  t4776 = t4734 + t4738;
  t4912 = t2191*t4816;
  t4948 = -1.*t4776*t2423;
  t4963 = t4912 + t4948;
  t4778 = t2191*t4776;
  t4822 = t4816*t2423;
  t4833 = t4778 + t4822;
  t5024 = t1561*t4963;
  t5046 = -1.*t4833*t4135;
  t5054 = t5024 + t5046;
  t4880 = t1561*t4833;
  t4984 = t4963*t4135;
  t4987 = t4880 + t4984;
  t5088 = t1330*t5054;
  t5097 = -1.*t4987*t4454;
  t5117 = t5088 + t5097;
  t5000 = t1330*t4987;
  t5065 = t5054*t4454;
  t5082 = t5000 + t5065;
  t5339 = t301*t2041;
  t5342 = -1.*t663*t74*t2296;
  t5355 = t5339 + t5342;
  t5214 = t2041*t663*t74;
  t5272 = t301*t2296;
  t5299 = t5214 + t5272;
  t5457 = t2191*t5355;
  t5473 = -1.*t5299*t2423;
  t5476 = t5457 + t5473;
  t5320 = t2191*t5299;
  t5419 = t5355*t2423;
  t5435 = t5320 + t5419;
  t5492 = t1561*t5476;
  t5503 = -1.*t5435*t4135;
  t5508 = t5492 + t5503;
  t5447 = t1561*t5435;
  t5477 = t5476*t4135;
  t5478 = t5447 + t5477;
  t5541 = t1330*t5508;
  t5544 = -1.*t5478*t4454;
  t5556 = t5541 + t5544;
  t5485 = t1330*t5478;
  t5518 = t5508*t4454;
  t5523 = t5485 + t5518;
  t4577 = t1167*t4516;
  t4641 = t4583*t4623;
  t4661 = t4577 + t4641;
  t4670 = t1167*t4583;
  t4678 = -1.*t4516*t4623;
  t4710 = t4670 + t4678;
  t5085 = t1167*t5082;
  t5127 = t5117*t4623;
  t5139 = t5085 + t5127;
  t5152 = t1167*t5117;
  t5157 = -1.*t5082*t4623;
  t5188 = t5152 + t5157;
  t5533 = t1167*t5523;
  t5560 = t5556*t4623;
  t5568 = t5533 + t5560;
  t5582 = t1167*t5556;
  t5585 = -1.*t5523*t4623;
  t5617 = t5582 + t5585;
  t5721 = -1.*t2191;
  t5725 = 1. + t5721;
  t5781 = -1.*t1561;
  t5793 = 1. + t5781;
  t5851 = -1.*t1330;
  t5867 = 1. + t5851;
  t5925 = -1.*t1167;
  t5928 = 1. + t5925;
  t5670 = -1.*t489;
  t5677 = 1. + t5670;
  t5696 = -1.*t2041;
  t5704 = 1. + t5696;
  t5706 = -0.049*t5704;
  t5713 = -0.09*t2296;
  t5714 = 0. + t5706 + t5713;
  t5732 = -0.049*t5725;
  t5736 = -0.21*t2423;
  t5737 = 0. + t5732 + t5736;
  t5752 = -0.21*t5725;
  t5754 = 0.049*t2423;
  t5756 = 0. + t5752 + t5754;
  t5800 = -0.0016*t5793;
  t5804 = -0.2707*t4135;
  t5808 = 0. + t5800 + t5804;
  t5820 = -0.2707*t5793;
  t5821 = 0.0016*t4135;
  t5825 = 0. + t5820 + t5821;
  t5872 = 0.0184*t5867;
  t5874 = -0.7055*t4454;
  t5875 = 0. + t5872 + t5874;
  t5900 = -0.7055*t5867;
  t5910 = -0.0184*t4454;
  t5916 = 0. + t5900 + t5910;
  t5936 = -0.0216*t5928;
  t5940 = -1.1135*t4623;
  t5941 = 0. + t5936 + t5940;
  t5949 = -1.1135*t5928;
  t5962 = 0.0216*t4623;
  t5964 = 0. + t5949 + t5962;
  t6002 = -0.135*t5677;
  t6007 = 0.049*t74;
  t6008 = 0. + t6002 + t6007;
  t6041 = -0.09*t5704;
  t6043 = 0.049*t2296;
  t6045 = 0. + t6041 + t6043;
  p_output1[0]=0. + t74;
  p_output1[1]=0. - 1.*t301*t489;
  p_output1[2]=0. - 1.*t489*t663;
  p_output1[3]=0.;
  p_output1[4]=0. + 0.642788*t4661 + 0.766044*t4710;
  p_output1[5]=0. + 0.642788*t5139 + 0.766044*t5188;
  p_output1[6]=0. + 0.642788*t5568 + 0.766044*t5617;
  p_output1[7]=0.;
  p_output1[8]=0. - 0.766044*t4661 + 0.642788*t4710;
  p_output1[9]=0. - 0.766044*t5139 + 0.642788*t5188;
  p_output1[10]=0. - 0.766044*t5568 + 0.642788*t5617;
  p_output1[11]=0.;
  p_output1[12]=-0.03155 + 0.0306*t4661 - 1.1312*t4710 - 0.049*t5677 + t489*t5714 + t2041*t489*t5737 - 1.*t2296*t489*t5756 + t2483*t5808 + t3659*t5825 + t4355*t5875 + t4445*t5916 + t4516*t5941 + t4583*t5964 - 0.004500000000000004*t74;
  p_output1[13]=0. - 0.135*(1. - 1.*t301) - 0.1305*t301*t489 + 0.0306*t5139 - 1.1312*t5188 + t4776*t5737 + t4816*t5756 + t4833*t5808 + t4963*t5825 + t4987*t5875 + t5054*t5916 + t5082*t5941 + t5117*t5964 + t301*t6008 - 1.*t6045*t663 + t301*t5714*t74;
  p_output1[14]=0.07996 + 0.0306*t5568 - 1.1312*t5617 + t5299*t5737 + t5355*t5756 + t5435*t5808 + t5476*t5825 + t5478*t5875 + t5508*t5916 + t5523*t5941 + t5556*t5964 + t301*t6045 + 0.135*t663 - 0.1305*t489*t663 + t6008*t663 + t5714*t663*t74;
  p_output1[15]=1.;
}



void H_VectorNav_to_RightToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
