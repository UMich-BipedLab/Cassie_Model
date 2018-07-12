/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:33:58 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_LeftToeBottom_src.h"

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
  double t752;
  double t447;
  double t809;
  double t451;
  double t922;
  double t9;
  double t683;
  double t932;
  double t1332;
  double t1810;
  double t1830;
  double t1861;
  double t1908;
  double t2167;
  double t2200;
  double t2201;
  double t2254;
  double t2027;
  double t2143;
  double t2158;
  double t2421;
  double t2693;
  double t2705;
  double t2712;
  double t2758;
  double t2540;
  double t2541;
  double t2669;
  double t2966;
  double t2996;
  double t3151;
  double t3568;
  double t3586;
  double t3587;
  double t3658;
  double t3874;
  double t3898;
  double t3901;
  double t4003;
  double t4012;
  double t4023;
  double t4097;
  double t4116;
  double t4139;
  double t4156;
  double t4241;
  double t4248;
  double t4249;
  double t4318;
  double t4379;
  double t4382;
  double t4496;
  double t4534;
  double t4545;
  double t4561;
  double t4629;
  double t4635;
  double t4697;
  double t4760;
  double t4765;
  double t4794;
  double t4812;
  double t4825;
  double t4829;
  double t4852;
  double t4882;
  double t5109;
  double t5183;
  double t5240;
  double t5254;
  double t5255;
  double t29;
  double t79;
  double t324;
  double t383;
  double t1915;
  double t1967;
  double t5376;
  double t5382;
  double t5391;
  double t5394;
  double t5398;
  double t5401;
  double t2228;
  double t2273;
  double t2320;
  double t2443;
  double t2456;
  double t2467;
  double t5429;
  double t5433;
  double t5458;
  double t2726;
  double t2771;
  double t2835;
  double t3280;
  double t3367;
  double t3513;
  double t3592;
  double t3762;
  double t3849;
  double t5498;
  double t5508;
  double t5523;
  double t5548;
  double t5603;
  double t5616;
  double t3931;
  double t3945;
  double t3959;
  double t4151;
  double t4198;
  double t4234;
  double t5627;
  double t5644;
  double t5645;
  double t5658;
  double t5661;
  double t5665;
  double t4278;
  double t4293;
  double t4302;
  double t4550;
  double t4587;
  double t4615;
  double t5688;
  double t5711;
  double t5732;
  double t5778;
  double t5788;
  double t5789;
  double t4726;
  double t4728;
  double t4729;
  double t4830;
  double t4856;
  double t4881;
  double t5797;
  double t5807;
  double t5808;
  double t5814;
  double t5826;
  double t5836;
  double t5217;
  double t5222;
  double t5226;
  double t5879;
  double t5882;
  double t5887;
  double t5922;
  double t5923;
  double t5935;
  double t6023;
  double t6032;
  double t6034;
  double t6103;
  double t6114;
  double t6123;
  double t6138;
  double t6153;
  double t6163;
  double t6171;
  double t6194;
  double t6197;
  double t6210;
  double t6214;
  double t6223;
  double t6258;
  double t6273;
  double t6282;
  double t6288;
  double t6292;
  double t6302;
  double t6307;
  double t6316;
  double t6323;
  double t6340;
  double t6352;
  double t6361;
  double t6373;
  double t6384;
  double t6386;
  double t6433;
  double t6440;
  double t6442;
  t752 = Cos(var1[3]);
  t447 = Cos(var1[5]);
  t809 = Sin(var1[4]);
  t451 = Sin(var1[3]);
  t922 = Sin(var1[5]);
  t9 = Cos(var1[6]);
  t683 = -1.*t447*t451;
  t932 = t752*t809*t922;
  t1332 = t683 + t932;
  t1810 = t752*t447*t809;
  t1830 = t451*t922;
  t1861 = t1810 + t1830;
  t1908 = Sin(var1[6]);
  t2167 = Cos(var1[7]);
  t2200 = -1.*t2167;
  t2201 = 1. + t2200;
  t2254 = Sin(var1[7]);
  t2027 = t9*t1332;
  t2143 = t1861*t1908;
  t2158 = t2027 + t2143;
  t2421 = Cos(var1[4]);
  t2693 = Cos(var1[8]);
  t2705 = -1.*t2693;
  t2712 = 1. + t2705;
  t2758 = Sin(var1[8]);
  t2540 = t752*t2421*t2167;
  t2541 = t2158*t2254;
  t2669 = t2540 + t2541;
  t2966 = t9*t1861;
  t2996 = -1.*t1332*t1908;
  t3151 = t2966 + t2996;
  t3568 = Cos(var1[9]);
  t3586 = -1.*t3568;
  t3587 = 1. + t3586;
  t3658 = Sin(var1[9]);
  t3874 = t2693*t2669;
  t3898 = t3151*t2758;
  t3901 = t3874 + t3898;
  t4003 = t2693*t3151;
  t4012 = -1.*t2669*t2758;
  t4023 = t4003 + t4012;
  t4097 = Cos(var1[10]);
  t4116 = -1.*t4097;
  t4139 = 1. + t4116;
  t4156 = Sin(var1[10]);
  t4241 = -1.*t3658*t3901;
  t4248 = t3568*t4023;
  t4249 = t4241 + t4248;
  t4318 = t3568*t3901;
  t4379 = t3658*t4023;
  t4382 = t4318 + t4379;
  t4496 = Cos(var1[11]);
  t4534 = -1.*t4496;
  t4545 = 1. + t4534;
  t4561 = Sin(var1[11]);
  t4629 = t4156*t4249;
  t4635 = t4097*t4382;
  t4697 = t4629 + t4635;
  t4760 = t4097*t4249;
  t4765 = -1.*t4156*t4382;
  t4794 = t4760 + t4765;
  t4812 = Cos(var1[12]);
  t4825 = -1.*t4812;
  t4829 = 1. + t4825;
  t4852 = Sin(var1[12]);
  t4882 = -1.*t4561*t4697;
  t5109 = t4496*t4794;
  t5183 = t4882 + t5109;
  t5240 = t4496*t4697;
  t5254 = t4561*t4794;
  t5255 = t5240 + t5254;
  t29 = -1.*t9;
  t79 = 1. + t29;
  t324 = 0.135*t79;
  t383 = 0. + t324;
  t1915 = -0.135*t1908;
  t1967 = 0. + t1915;
  t5376 = t752*t447;
  t5382 = t451*t809*t922;
  t5391 = t5376 + t5382;
  t5394 = t447*t451*t809;
  t5398 = -1.*t752*t922;
  t5401 = t5394 + t5398;
  t2228 = 0.135*t2201;
  t2273 = 0.049*t2254;
  t2320 = 0. + t2228 + t2273;
  t2443 = -0.049*t2201;
  t2456 = 0.135*t2254;
  t2467 = 0. + t2443 + t2456;
  t5429 = t9*t5391;
  t5433 = t5401*t1908;
  t5458 = t5429 + t5433;
  t2726 = -0.049*t2712;
  t2771 = -0.09*t2758;
  t2835 = 0. + t2726 + t2771;
  t3280 = -0.09*t2712;
  t3367 = 0.049*t2758;
  t3513 = 0. + t3280 + t3367;
  t3592 = -0.049*t3587;
  t3762 = -0.21*t3658;
  t3849 = 0. + t3592 + t3762;
  t5498 = t2421*t2167*t451;
  t5508 = t5458*t2254;
  t5523 = t5498 + t5508;
  t5548 = t9*t5401;
  t5603 = -1.*t5391*t1908;
  t5616 = t5548 + t5603;
  t3931 = -0.21*t3587;
  t3945 = 0.049*t3658;
  t3959 = 0. + t3931 + t3945;
  t4151 = -0.2707*t4139;
  t4198 = 0.0016*t4156;
  t4234 = 0. + t4151 + t4198;
  t5627 = t2693*t5523;
  t5644 = t5616*t2758;
  t5645 = t5627 + t5644;
  t5658 = t2693*t5616;
  t5661 = -1.*t5523*t2758;
  t5665 = t5658 + t5661;
  t4278 = -0.0016*t4139;
  t4293 = -0.2707*t4156;
  t4302 = 0. + t4278 + t4293;
  t4550 = 0.0184*t4545;
  t4587 = -0.7055*t4561;
  t4615 = 0. + t4550 + t4587;
  t5688 = -1.*t3658*t5645;
  t5711 = t3568*t5665;
  t5732 = t5688 + t5711;
  t5778 = t3568*t5645;
  t5788 = t3658*t5665;
  t5789 = t5778 + t5788;
  t4726 = -0.7055*t4545;
  t4728 = -0.0184*t4561;
  t4729 = 0. + t4726 + t4728;
  t4830 = -1.1135*t4829;
  t4856 = 0.0216*t4852;
  t4881 = 0. + t4830 + t4856;
  t5797 = t4156*t5732;
  t5807 = t4097*t5789;
  t5808 = t5797 + t5807;
  t5814 = t4097*t5732;
  t5826 = -1.*t4156*t5789;
  t5836 = t5814 + t5826;
  t5217 = -0.0216*t4829;
  t5222 = -1.1135*t4852;
  t5226 = 0. + t5217 + t5222;
  t5879 = -1.*t4561*t5808;
  t5882 = t4496*t5836;
  t5887 = t5879 + t5882;
  t5922 = t4496*t5808;
  t5923 = t4561*t5836;
  t5935 = t5922 + t5923;
  t6023 = t2421*t9*t922;
  t6032 = t2421*t447*t1908;
  t6034 = t6023 + t6032;
  t6103 = -1.*t2167*t809;
  t6114 = t6034*t2254;
  t6123 = t6103 + t6114;
  t6138 = t2421*t447*t9;
  t6153 = -1.*t2421*t922*t1908;
  t6163 = t6138 + t6153;
  t6171 = t2693*t6123;
  t6194 = t6163*t2758;
  t6197 = t6171 + t6194;
  t6210 = t2693*t6163;
  t6214 = -1.*t6123*t2758;
  t6223 = t6210 + t6214;
  t6258 = -1.*t3658*t6197;
  t6273 = t3568*t6223;
  t6282 = t6258 + t6273;
  t6288 = t3568*t6197;
  t6292 = t3658*t6223;
  t6302 = t6288 + t6292;
  t6307 = t4156*t6282;
  t6316 = t4097*t6302;
  t6323 = t6307 + t6316;
  t6340 = t4097*t6282;
  t6352 = -1.*t4156*t6302;
  t6361 = t6340 + t6352;
  t6373 = -1.*t4561*t6323;
  t6384 = t4496*t6361;
  t6386 = t6373 + t6384;
  t6433 = t4496*t6323;
  t6440 = t4561*t6361;
  t6442 = t6433 + t6440;
  p_output1[0]=0. + t1861*t1967 + t2158*t2320 + t2669*t2835 + t3151*t3513 + t1332*t383 + t3849*t3901 + t3959*t4023 + t4234*t4249 + t4302*t4382 + t4615*t4697 + t4729*t4794 + t4881*t5183 + t5226*t5255 + 0.0306*(t4852*t5183 + t4812*t5255) - 1.1312*(t4812*t5183 - 1.*t4852*t5255) + t2421*t2467*t752 + 0.1305*(t2158*t2167 - 1.*t2254*t2421*t752) + var1[0];
  p_output1[1]=0. + t2421*t2467*t451 + t383*t5391 + t1967*t5401 + t2320*t5458 + 0.1305*(-1.*t2254*t2421*t451 + t2167*t5458) + t2835*t5523 + t3513*t5616 + t3849*t5645 + t3959*t5665 + t4234*t5732 + t4302*t5789 + t4615*t5808 + t4729*t5836 + t4881*t5887 + t5226*t5935 + 0.0306*(t4852*t5887 + t4812*t5935) - 1.1312*(t4812*t5887 - 1.*t4852*t5935) + var1[1];
  p_output1[2]=0. + t1967*t2421*t447 + t2320*t6034 + t2835*t6123 + t3513*t6163 + t3849*t6197 + t3959*t6223 + t4234*t6282 + t4302*t6302 + t4615*t6323 + t4729*t6361 + t4881*t6386 + t5226*t6442 + 0.0306*(t4852*t6386 + t4812*t6442) - 1.1312*(t4812*t6386 - 1.*t4852*t6442) - 1.*t2467*t809 + 0.1305*(t2167*t6034 + t2254*t809) + t2421*t383*t922 + var1[2];
}



void p_LeftToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
