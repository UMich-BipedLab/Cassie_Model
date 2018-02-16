/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:16:03 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RightToeBottom_src.h"

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
  double t558;
  double t2102;
  double t2253;
  double t2228;
  double t2262;
  double t1318;
  double t1322;
  double t1324;
  double t1339;
  double t1872;
  double t2229;
  double t2501;
  double t2520;
  double t2610;
  double t3202;
  double t3215;
  double t3284;
  double t1183;
  double t3493;
  double t3494;
  double t3511;
  double t3583;
  double t3699;
  double t3735;
  double t3819;
  double t3942;
  double t3948;
  double t4009;
  double t4256;
  double t4296;
  double t4363;
  double t4463;
  double t4476;
  double t4534;
  double t4555;
  double t4680;
  double t4711;
  double t4800;
  double t4904;
  double t4906;
  double t4964;
  double t4974;
  double t5100;
  double t5101;
  double t5114;
  double t5149;
  double t5152;
  double t5170;
  double t5244;
  double t5251;
  double t5265;
  double t5280;
  double t5281;
  double t5285;
  double t5304;
  double t5339;
  double t5342;
  double t5350;
  double t5389;
  double t5392;
  double t5399;
  double t5406;
  double t5409;
  double t5410;
  double t5413;
  double t5419;
  double t5420;
  double t5425;
  double t5444;
  double t5447;
  double t5455;
  double t1329;
  double t1573;
  double t1662;
  double t1881;
  double t2062;
  double t2882;
  double t2974;
  double t3042;
  double t3177;
  double t3331;
  double t3418;
  double t3430;
  double t5516;
  double t5519;
  double t5523;
  double t5535;
  double t5538;
  double t5550;
  double t3810;
  double t3838;
  double t3938;
  double t5554;
  double t5556;
  double t5557;
  double t4119;
  double t4138;
  double t4171;
  double t4551;
  double t4617;
  double t4675;
  double t5584;
  double t5585;
  double t5593;
  double t5642;
  double t5645;
  double t5652;
  double t4835;
  double t4837;
  double t4861;
  double t5103;
  double t5117;
  double t5126;
  double t5655;
  double t5657;
  double t5659;
  double t5665;
  double t5670;
  double t5671;
  double t5213;
  double t5219;
  double t5232;
  double t5303;
  double t5322;
  double t5337;
  double t5677;
  double t5694;
  double t5696;
  double t5700;
  double t5702;
  double t5705;
  double t5367;
  double t5378;
  double t5383;
  double t5411;
  double t5416;
  double t5418;
  double t5719;
  double t5722;
  double t5723;
  double t5728;
  double t5741;
  double t5742;
  double t5433;
  double t5437;
  double t5440;
  double t5759;
  double t5761;
  double t5764;
  double t5775;
  double t5778;
  double t5783;
  double t5832;
  double t5835;
  double t5836;
  double t5844;
  double t5846;
  double t5850;
  double t5872;
  double t5874;
  double t5875;
  double t5879;
  double t5880;
  double t5881;
  double t5887;
  double t5892;
  double t5896;
  double t5899;
  double t5900;
  double t5902;
  double t5909;
  double t5910;
  double t5913;
  double t5923;
  double t5924;
  double t5927;
  double t5933;
  double t5934;
  double t5937;
  double t5947;
  double t5949;
  double t5950;
  double t5955;
  double t5962;
  double t5963;
  t558 = Cos(var1[3]);
  t2102 = Cos(var1[5]);
  t2253 = Sin(var1[3]);
  t2228 = Sin(var1[4]);
  t2262 = Sin(var1[5]);
  t1318 = Cos(var1[14]);
  t1322 = -1.*t1318;
  t1324 = 1. + t1322;
  t1339 = Sin(var1[14]);
  t1872 = Sin(var1[13]);
  t2229 = t558*t2102*t2228;
  t2501 = t2253*t2262;
  t2520 = t2229 + t2501;
  t2610 = Cos(var1[13]);
  t3202 = -1.*t2102*t2253;
  t3215 = t558*t2228*t2262;
  t3284 = t3202 + t3215;
  t1183 = Cos(var1[4]);
  t3493 = t1872*t2520;
  t3494 = t2610*t3284;
  t3511 = t3493 + t3494;
  t3583 = Cos(var1[15]);
  t3699 = -1.*t3583;
  t3735 = 1. + t3699;
  t3819 = Sin(var1[15]);
  t3942 = t2610*t2520;
  t3948 = -1.*t1872*t3284;
  t4009 = t3942 + t3948;
  t4256 = t1318*t558*t1183;
  t4296 = t1339*t3511;
  t4363 = t4256 + t4296;
  t4463 = Cos(var1[16]);
  t4476 = -1.*t4463;
  t4534 = 1. + t4476;
  t4555 = Sin(var1[16]);
  t4680 = t3819*t4009;
  t4711 = t3583*t4363;
  t4800 = t4680 + t4711;
  t4904 = t3583*t4009;
  t4906 = -1.*t3819*t4363;
  t4964 = t4904 + t4906;
  t4974 = Cos(var1[17]);
  t5100 = -1.*t4974;
  t5101 = 1. + t5100;
  t5114 = Sin(var1[17]);
  t5149 = -1.*t4555*t4800;
  t5152 = t4463*t4964;
  t5170 = t5149 + t5152;
  t5244 = t4463*t4800;
  t5251 = t4555*t4964;
  t5265 = t5244 + t5251;
  t5280 = Cos(var1[18]);
  t5281 = -1.*t5280;
  t5285 = 1. + t5281;
  t5304 = Sin(var1[18]);
  t5339 = t5114*t5170;
  t5342 = t4974*t5265;
  t5350 = t5339 + t5342;
  t5389 = t4974*t5170;
  t5392 = -1.*t5114*t5265;
  t5399 = t5389 + t5392;
  t5406 = Cos(var1[19]);
  t5409 = -1.*t5406;
  t5410 = 1. + t5409;
  t5413 = Sin(var1[19]);
  t5419 = -1.*t5304*t5350;
  t5420 = t5280*t5399;
  t5425 = t5419 + t5420;
  t5444 = t5280*t5350;
  t5447 = t5304*t5399;
  t5455 = t5444 + t5447;
  t1329 = -0.049*t1324;
  t1573 = -0.135*t1339;
  t1662 = 0. + t1329 + t1573;
  t1881 = 0.135*t1872;
  t2062 = 0. + t1881;
  t2882 = -1.*t2610;
  t2974 = 1. + t2882;
  t3042 = -0.135*t2974;
  t3177 = 0. + t3042;
  t3331 = -0.135*t1324;
  t3418 = 0.049*t1339;
  t3430 = 0. + t3331 + t3418;
  t5516 = t2102*t2253*t2228;
  t5519 = -1.*t558*t2262;
  t5523 = t5516 + t5519;
  t5535 = t558*t2102;
  t5538 = t2253*t2228*t2262;
  t5550 = t5535 + t5538;
  t3810 = -0.09*t3735;
  t3838 = 0.049*t3819;
  t3938 = 0. + t3810 + t3838;
  t5554 = t1872*t5523;
  t5556 = t2610*t5550;
  t5557 = t5554 + t5556;
  t4119 = -0.049*t3735;
  t4138 = -0.09*t3819;
  t4171 = 0. + t4119 + t4138;
  t4551 = -0.049*t4534;
  t4617 = -0.21*t4555;
  t4675 = 0. + t4551 + t4617;
  t5584 = t2610*t5523;
  t5585 = -1.*t1872*t5550;
  t5593 = t5584 + t5585;
  t5642 = t1318*t1183*t2253;
  t5645 = t1339*t5557;
  t5652 = t5642 + t5645;
  t4835 = -0.21*t4534;
  t4837 = 0.049*t4555;
  t4861 = 0. + t4835 + t4837;
  t5103 = -0.2707*t5101;
  t5117 = 0.0016*t5114;
  t5126 = 0. + t5103 + t5117;
  t5655 = t3819*t5593;
  t5657 = t3583*t5652;
  t5659 = t5655 + t5657;
  t5665 = t3583*t5593;
  t5670 = -1.*t3819*t5652;
  t5671 = t5665 + t5670;
  t5213 = -0.0016*t5101;
  t5219 = -0.2707*t5114;
  t5232 = 0. + t5213 + t5219;
  t5303 = 0.0184*t5285;
  t5322 = -0.7055*t5304;
  t5337 = 0. + t5303 + t5322;
  t5677 = -1.*t4555*t5659;
  t5694 = t4463*t5671;
  t5696 = t5677 + t5694;
  t5700 = t4463*t5659;
  t5702 = t4555*t5671;
  t5705 = t5700 + t5702;
  t5367 = -0.7055*t5285;
  t5378 = -0.0184*t5304;
  t5383 = 0. + t5367 + t5378;
  t5411 = -1.1135*t5410;
  t5416 = 0.0216*t5413;
  t5418 = 0. + t5411 + t5416;
  t5719 = t5114*t5696;
  t5722 = t4974*t5705;
  t5723 = t5719 + t5722;
  t5728 = t4974*t5696;
  t5741 = -1.*t5114*t5705;
  t5742 = t5728 + t5741;
  t5433 = -0.0216*t5410;
  t5437 = -1.1135*t5413;
  t5440 = 0. + t5433 + t5437;
  t5759 = -1.*t5304*t5723;
  t5761 = t5280*t5742;
  t5764 = t5759 + t5761;
  t5775 = t5280*t5723;
  t5778 = t5304*t5742;
  t5783 = t5775 + t5778;
  t5832 = t1183*t2102*t1872;
  t5835 = t2610*t1183*t2262;
  t5836 = t5832 + t5835;
  t5844 = t2610*t1183*t2102;
  t5846 = -1.*t1183*t1872*t2262;
  t5850 = t5844 + t5846;
  t5872 = -1.*t1318*t2228;
  t5874 = t1339*t5836;
  t5875 = t5872 + t5874;
  t5879 = t3819*t5850;
  t5880 = t3583*t5875;
  t5881 = t5879 + t5880;
  t5887 = t3583*t5850;
  t5892 = -1.*t3819*t5875;
  t5896 = t5887 + t5892;
  t5899 = -1.*t4555*t5881;
  t5900 = t4463*t5896;
  t5902 = t5899 + t5900;
  t5909 = t4463*t5881;
  t5910 = t4555*t5896;
  t5913 = t5909 + t5910;
  t5923 = t5114*t5902;
  t5924 = t4974*t5913;
  t5927 = t5923 + t5924;
  t5933 = t4974*t5902;
  t5934 = -1.*t5114*t5913;
  t5937 = t5933 + t5934;
  t5947 = -1.*t5304*t5927;
  t5949 = t5280*t5937;
  t5950 = t5947 + t5949;
  t5955 = t5280*t5927;
  t5962 = t5304*t5937;
  t5963 = t5955 + t5962;
  p_output1[0]=0. + t2062*t2520 + t3177*t3284 + t3430*t3511 + t3938*t4009 + t4171*t4363 + t4675*t4800 + t4861*t4964 + t5126*t5170 + t5232*t5265 + t5337*t5350 + t5383*t5399 + t5418*t5425 + t5440*t5455 + 0.0306*(t5413*t5425 + t5406*t5455) - 1.1312*(t5406*t5425 - 1.*t5413*t5455) + t1183*t1662*t558 - 0.1305*(t1318*t3511 - 1.*t1183*t1339*t558) + var1[0];
  p_output1[1]=0. + t1183*t1662*t2253 + t2062*t5523 + t3177*t5550 + t3430*t5557 - 0.1305*(-1.*t1183*t1339*t2253 + t1318*t5557) + t3938*t5593 + t4171*t5652 + t4675*t5659 + t4861*t5671 + t5126*t5696 + t5232*t5705 + t5337*t5723 + t5383*t5742 + t5418*t5764 + t5440*t5783 + 0.0306*(t5413*t5764 + t5406*t5783) - 1.1312*(t5406*t5764 - 1.*t5413*t5783) + var1[1];
  p_output1[2]=0. + t1183*t2062*t2102 - 1.*t1662*t2228 + t1183*t2262*t3177 + t3430*t5836 - 0.1305*(t1339*t2228 + t1318*t5836) + t3938*t5850 + t4171*t5875 + t4675*t5881 + t4861*t5896 + t5126*t5902 + t5232*t5913 + t5337*t5927 + t5383*t5937 + t5418*t5950 + t5440*t5963 + 0.0306*(t5413*t5950 + t5406*t5963) - 1.1312*(t5406*t5950 - 1.*t5413*t5963) + var1[2];
}



void p_RightToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
