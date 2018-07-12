/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:37:13 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_LeftToeBottom_to_RightToeBottom_src.h"

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
  double t711;
  double t795;
  double t761;
  double t782;
  double t805;
  double t1412;
  double t791;
  double t1177;
  double t1275;
  double t604;
  double t1437;
  double t1440;
  double t1470;
  double t1518;
  double t1384;
  double t1490;
  double t1492;
  double t562;
  double t1520;
  double t1545;
  double t1600;
  double t1657;
  double t1502;
  double t1610;
  double t1621;
  double t521;
  double t1691;
  double t1692;
  double t1708;
  double t2217;
  double t2161;
  double t2190;
  double t2191;
  double t2223;
  double t2327;
  double t2367;
  double t2373;
  double t2374;
  double t2357;
  double t2378;
  double t2385;
  double t2409;
  double t2415;
  double t2419;
  double t2389;
  double t2440;
  double t2544;
  double t2565;
  double t2592;
  double t2620;
  double t2548;
  double t2644;
  double t2646;
  double t2691;
  double t2734;
  double t2770;
  double t1636;
  double t1725;
  double t1730;
  double t2090;
  double t2139;
  double t2142;
  double t2689;
  double t2779;
  double t2809;
  double t2892;
  double t2903;
  double t3003;
  double t3406;
  double t3416;
  double t3469;
  double t3529;
  double t3533;
  double t3592;
  double t3479;
  double t3594;
  double t3601;
  double t3630;
  double t3652;
  double t3706;
  double t3602;
  double t3776;
  double t3781;
  double t3798;
  double t3827;
  double t3863;
  double t3791;
  double t3872;
  double t3918;
  double t3953;
  double t3988;
  double t4027;
  double t3192;
  double t3205;
  double t3280;
  double t2834;
  double t3013;
  double t3059;
  double t3952;
  double t4057;
  double t4062;
  double t4148;
  double t4177;
  double t4231;
  double t1883;
  double t2144;
  double t2148;
  double t3314;
  double t3328;
  double t3333;
  double t3125;
  double t3355;
  double t238;
  double t4378;
  double t4398;
  double t4433;
  double t4063;
  double t4279;
  double t4282;
  double t4289;
  double t4294;
  double t4346;
  double t4358;
  double t4479;
  double t4494;
  double t4550;
  double t4592;
  double t4596;
  double t4613;
  double t4630;
  double t4640;
  double t261;
  double t4876;
  double t4743;
  double t6260;
  double t6365;
  double t6252;
  double t6456;
  double t6482;
  double t6508;
  double t6342;
  double t6391;
  double t6410;
  double t6533;
  double t6228;
  double t6622;
  double t6635;
  double t6660;
  double t6435;
  double t6579;
  double t6596;
  double t6677;
  double t6175;
  double t6795;
  double t6804;
  double t6814;
  double t6612;
  double t6696;
  double t6758;
  double t6820;
  double t6125;
  double t6990;
  double t7001;
  double t7005;
  double t6765;
  double t6914;
  double t6931;
  double t7027;
  double t3369;
  double t7374;
  double t7393;
  double t7406;
  double t7202;
  double t7207;
  double t7295;
  double t7461;
  double t7464;
  double t7511;
  double t7350;
  double t7408;
  double t7424;
  double t7678;
  double t7679;
  double t7719;
  double t7446;
  double t7629;
  double t7669;
  double t7734;
  double t7757;
  double t7777;
  double t7671;
  double t7724;
  double t7725;
  double t4785;
  double t4794;
  double t4798;
  double t7980;
  double t8007;
  double t8012;
  double t7954;
  double t7959;
  double t7964;
  double t8074;
  double t8083;
  double t8100;
  double t7979;
  double t8046;
  double t8066;
  double t8144;
  double t8148;
  double t8149;
  double t8070;
  double t8105;
  double t8114;
  double t4883;
  double t5026;
  double t5035;
  double t6971;
  double t7033;
  double t7057;
  double t7066;
  double t7071;
  double t7079;
  double t7115;
  double t7170;
  double t7187;
  double t5222;
  double t5319;
  double t5341;
  double t8133;
  double t8151;
  double t8177;
  double t8189;
  double t8193;
  double t8205;
  double t8214;
  double t8222;
  double t8236;
  double t5406;
  double t5447;
  double t5505;
  double t7732;
  double t7794;
  double t7810;
  double t7824;
  double t7841;
  double t7865;
  double t7902;
  double t7906;
  double t7917;
  double t5555;
  double t5569;
  double t5648;
  double t5772;
  double t5933;
  double t5951;
  double t5969;
  double t6031;
  double t6058;
  double t6063;
  double t8335;
  double t8345;
  double t8355;
  double t8394;
  double t8413;
  double t8420;
  double t8364;
  double t8372;
  double t8386;
  t711 = Cos(var1[1]);
  t795 = Cos(var1[3]);
  t761 = Cos(var1[2]);
  t782 = Sin(var1[3]);
  t805 = Sin(var1[2]);
  t1412 = Cos(var1[4]);
  t791 = -1.*t711*t761*t782;
  t1177 = -1.*t795*t711*t805;
  t1275 = t791 + t1177;
  t604 = Sin(var1[4]);
  t1437 = t795*t711*t761;
  t1440 = -1.*t711*t782*t805;
  t1470 = t1437 + t1440;
  t1518 = Cos(var1[5]);
  t1384 = t604*t1275;
  t1490 = t1412*t1470;
  t1492 = t1384 + t1490;
  t562 = Sin(var1[5]);
  t1520 = t1412*t1275;
  t1545 = -1.*t604*t1470;
  t1600 = t1520 + t1545;
  t1657 = Cos(var1[6]);
  t1502 = -1.*t562*t1492;
  t1610 = t1518*t1600;
  t1621 = t1502 + t1610;
  t521 = Sin(var1[6]);
  t1691 = t1518*t1492;
  t1692 = t562*t1600;
  t1708 = t1691 + t1692;
  t2217 = Sin(var1[0]);
  t2161 = Cos(var1[0]);
  t2190 = Sin(var1[1]);
  t2191 = t2161*t761*t2190;
  t2223 = -1.*t2217*t805;
  t2327 = t2191 + t2223;
  t2367 = -1.*t761*t2217;
  t2373 = -1.*t2161*t2190*t805;
  t2374 = t2367 + t2373;
  t2357 = -1.*t782*t2327;
  t2378 = t795*t2374;
  t2385 = t2357 + t2378;
  t2409 = t795*t2327;
  t2415 = t782*t2374;
  t2419 = t2409 + t2415;
  t2389 = t604*t2385;
  t2440 = t1412*t2419;
  t2544 = t2389 + t2440;
  t2565 = t1412*t2385;
  t2592 = -1.*t604*t2419;
  t2620 = t2565 + t2592;
  t2548 = -1.*t562*t2544;
  t2644 = t1518*t2620;
  t2646 = t2548 + t2644;
  t2691 = t1518*t2544;
  t2734 = t562*t2620;
  t2770 = t2691 + t2734;
  t1636 = t521*t1621;
  t1725 = t1657*t1708;
  t1730 = t1636 + t1725;
  t2090 = t1657*t1621;
  t2139 = -1.*t521*t1708;
  t2142 = t2090 + t2139;
  t2689 = t521*t2646;
  t2779 = t1657*t2770;
  t2809 = t2689 + t2779;
  t2892 = t1657*t2646;
  t2903 = -1.*t521*t2770;
  t3003 = t2892 + t2903;
  t3406 = t761*t2217*t2190;
  t3416 = t2161*t805;
  t3469 = t3406 + t3416;
  t3529 = t2161*t761;
  t3533 = -1.*t2217*t2190*t805;
  t3592 = t3529 + t3533;
  t3479 = -1.*t782*t3469;
  t3594 = t795*t3592;
  t3601 = t3479 + t3594;
  t3630 = t795*t3469;
  t3652 = t782*t3592;
  t3706 = t3630 + t3652;
  t3602 = t604*t3601;
  t3776 = t1412*t3706;
  t3781 = t3602 + t3776;
  t3798 = t1412*t3601;
  t3827 = -1.*t604*t3706;
  t3863 = t3798 + t3827;
  t3791 = -1.*t562*t3781;
  t3872 = t1518*t3863;
  t3918 = t3791 + t3872;
  t3953 = t1518*t3781;
  t3988 = t562*t3863;
  t4027 = t3953 + t3988;
  t3192 = -0.766044*t1730;
  t3205 = 0.642788*t2142;
  t3280 = t3192 + t3205;
  t2834 = -0.766044*t2809;
  t3013 = 0.642788*t3003;
  t3059 = t2834 + t3013;
  t3952 = t521*t3918;
  t4057 = t1657*t4027;
  t4062 = t3952 + t4057;
  t4148 = t1657*t3918;
  t4177 = -1.*t521*t4027;
  t4231 = t4148 + t4177;
  t1883 = 0.642788*t1730;
  t2144 = 0.766044*t2142;
  t2148 = t1883 + t2144;
  t3314 = 0.642788*t2809;
  t3328 = 0.766044*t3003;
  t3333 = t3314 + t3328;
  t3125 = t2148*t3059;
  t3355 = -1.*t3280*t3333;
  t238 = Cos(var1[8]);
  t4378 = -0.766044*t4062;
  t4398 = 0.642788*t4231;
  t4433 = t4378 + t4398;
  t4063 = 0.642788*t4062;
  t4279 = 0.766044*t4231;
  t4282 = t4063 + t4279;
  t4289 = t2161*t711*t3280;
  t4294 = t2190*t3059;
  t4346 = t4289 + t4294;
  t4358 = -1.*t4282*t4346;
  t4479 = t2161*t711*t2148;
  t4494 = t2190*t3333;
  t4550 = t4479 + t4494;
  t4592 = t4433*t4550;
  t4596 = t3125 + t3355;
  t4613 = -1.*t711*t2217*t4596;
  t4630 = 0. + t4358 + t4592 + t4613;
  t4640 = 1/t4630;
  t261 = Sin(var1[7]);
  t4876 = Sin(var1[8]);
  t4743 = Cos(var1[7]);
  t6260 = Cos(var1[9]);
  t6365 = Sin(var1[9]);
  t6252 = Cos(var1[10]);
  t6456 = t4743*t6260;
  t6482 = -1.*t261*t4876*t6365;
  t6508 = t6456 + t6482;
  t6342 = t6260*t261*t4876;
  t6391 = t4743*t6365;
  t6410 = t6342 + t6391;
  t6533 = Sin(var1[10]);
  t6228 = Cos(var1[11]);
  t6622 = t6252*t6508;
  t6635 = -1.*t6410*t6533;
  t6660 = t6622 + t6635;
  t6435 = t6252*t6410;
  t6579 = t6508*t6533;
  t6596 = t6435 + t6579;
  t6677 = Sin(var1[11]);
  t6175 = Cos(var1[12]);
  t6795 = t6228*t6660;
  t6804 = -1.*t6596*t6677;
  t6814 = t6795 + t6804;
  t6612 = t6228*t6596;
  t6696 = t6660*t6677;
  t6758 = t6612 + t6696;
  t6820 = Sin(var1[12]);
  t6125 = Cos(var1[13]);
  t6990 = t6175*t6814;
  t7001 = -1.*t6758*t6820;
  t7005 = t6990 + t7001;
  t6765 = t6175*t6758;
  t6914 = t6814*t6820;
  t6931 = t6765 + t6914;
  t7027 = Sin(var1[13]);
  t3369 = 0. + t3125 + t3355;
  t7374 = -1.*t6260*t261;
  t7393 = -1.*t4743*t4876*t6365;
  t7406 = t7374 + t7393;
  t7202 = t4743*t6260*t4876;
  t7207 = -1.*t261*t6365;
  t7295 = t7202 + t7207;
  t7461 = t6252*t7406;
  t7464 = -1.*t7295*t6533;
  t7511 = t7461 + t7464;
  t7350 = t6252*t7295;
  t7408 = t7406*t6533;
  t7424 = t7350 + t7408;
  t7678 = t6228*t7511;
  t7679 = -1.*t7424*t6677;
  t7719 = t7678 + t7679;
  t7446 = t6228*t7424;
  t7629 = t7511*t6677;
  t7669 = t7446 + t7629;
  t7734 = t6175*t7719;
  t7757 = -1.*t7669*t6820;
  t7777 = t7734 + t7757;
  t7671 = t6175*t7669;
  t7724 = t7719*t6820;
  t7725 = t7671 + t7724;
  t4785 = -1.*t2148*t4433;
  t4794 = t3280*t4282;
  t4798 = 0. + t4785 + t4794;
  t7980 = -1.*t238*t6252*t6365;
  t8007 = -1.*t238*t6260*t6533;
  t8012 = t7980 + t8007;
  t7954 = t238*t6260*t6252;
  t7959 = -1.*t238*t6365*t6533;
  t7964 = t7954 + t7959;
  t8074 = t6228*t8012;
  t8083 = -1.*t7964*t6677;
  t8100 = t8074 + t8083;
  t7979 = t6228*t7964;
  t8046 = t8012*t6677;
  t8066 = t7979 + t8046;
  t8144 = t6175*t8100;
  t8148 = -1.*t8066*t6820;
  t8149 = t8144 + t8148;
  t8070 = t6175*t8066;
  t8105 = t8100*t6820;
  t8114 = t8070 + t8105;
  t4883 = t3333*t4433;
  t5026 = -1.*t3059*t4282;
  t5035 = 0. + t4883 + t5026;
  t6971 = t6125*t6931;
  t7033 = t7005*t7027;
  t7057 = t6971 + t7033;
  t7066 = 0.642788*t7057;
  t7071 = t6125*t7005;
  t7079 = -1.*t6931*t7027;
  t7115 = t7071 + t7079;
  t7170 = 0.766044*t7115;
  t7187 = t7066 + t7170;
  t5222 = -1.*t2161*t711*t3280;
  t5319 = -1.*t2190*t3059;
  t5341 = 0. + t5222 + t5319;
  t8133 = t6125*t8114;
  t8151 = t8149*t7027;
  t8177 = t8133 + t8151;
  t8189 = 0.642788*t8177;
  t8193 = t6125*t8149;
  t8205 = -1.*t8114*t7027;
  t8214 = t8193 + t8205;
  t8222 = 0.766044*t8214;
  t8236 = t8189 + t8222;
  t5406 = -1.*t711*t2217*t3059;
  t5447 = t2161*t711*t4433;
  t5505 = 0. + t5406 + t5447;
  t7732 = t6125*t7725;
  t7794 = t7777*t7027;
  t7810 = t7732 + t7794;
  t7824 = 0.642788*t7810;
  t7841 = t6125*t7777;
  t7865 = -1.*t7725*t7027;
  t7902 = t7841 + t7865;
  t7906 = 0.766044*t7902;
  t7917 = t7824 + t7906;
  t5555 = t711*t2217*t3280;
  t5569 = t2190*t4433;
  t5648 = 0. + t5555 + t5569;
  t5772 = 0. + t4479 + t4494;
  t5933 = t711*t2217*t3333;
  t5951 = -1.*t2161*t711*t4282;
  t5969 = 0. + t5933 + t5951;
  t6031 = -1.*t711*t2217*t2148;
  t6058 = -1.*t2190*t4282;
  t6063 = 0. + t6031 + t6058;
  t8335 = -0.766044*t7057;
  t8345 = 0.642788*t7115;
  t8355 = t8335 + t8345;
  t8394 = -0.766044*t8177;
  t8413 = 0.642788*t8214;
  t8420 = t8394 + t8413;
  t8364 = -0.766044*t7810;
  t8372 = 0.642788*t7902;
  t8386 = t8364 + t8372;
  p_output1[0]=0. - 1.*t238*t261*t3369*t4640 - 1.*t238*t4640*t4743*t4798 + t4640*t4876*t5035;
  p_output1[1]=0. - 1.*t238*t261*t4640*t5341 + t4640*t4876*t5505 - 1.*t238*t4640*t4743*t5648;
  p_output1[2]=0. - 1.*t238*t261*t4640*t5772 + t4640*t4876*t5969 - 1.*t238*t4640*t4743*t6063;
  p_output1[3]=0. + t3369*t4640*t7187 + t4640*t4798*t7917 + t4640*t5035*t8236;
  p_output1[4]=0. + t4640*t5341*t7187 + t4640*t5648*t7917 + t4640*t5505*t8236;
  p_output1[5]=0. + t4640*t5772*t7187 + t4640*t6063*t7917 + t4640*t5969*t8236;
  p_output1[6]=0. + t3369*t4640*t8355 + t4640*t4798*t8386 + t4640*t5035*t8420;
  p_output1[7]=0. + t4640*t5341*t8355 + t4640*t5648*t8386 + t4640*t5505*t8420;
  p_output1[8]=0. + t4640*t5772*t8355 + t4640*t6063*t8386 + t4640*t5969*t8420;
}



void R_LeftToeBottom_to_RightToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
