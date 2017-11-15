/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:25 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_toe_joint_left_src.h"

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
  double t1243;
  double t2975;
  double t4191;
  double t3334;
  double t4968;
  double t2660;
  double t5086;
  double t5091;
  double t5126;
  double t4187;
  double t5003;
  double t5043;
  double t5156;
  double t1126;
  double t5219;
  double t5232;
  double t5236;
  double t1557;
  double t1633;
  double t1767;
  double t5072;
  double t5158;
  double t5160;
  double t5178;
  double t5185;
  double t5192;
  double t5242;
  double t5268;
  double t5201;
  double t5248;
  double t5255;
  double t1075;
  double t5286;
  double t5293;
  double t5294;
  double t5307;
  double t5258;
  double t5299;
  double t5302;
  double t992;
  double t5308;
  double t5312;
  double t5320;
  double t5335;
  double t5305;
  double t5321;
  double t5324;
  double t908;
  double t5341;
  double t5343;
  double t5351;
  double t659;
  double t5403;
  double t5406;
  double t5407;
  double t5390;
  double t5392;
  double t5397;
  double t5435;
  double t5436;
  double t5440;
  double t5387;
  double t5400;
  double t5411;
  double t5414;
  double t5425;
  double t5429;
  double t5434;
  double t5442;
  double t5452;
  double t5465;
  double t5466;
  double t5470;
  double t5460;
  double t5474;
  double t5477;
  double t5483;
  double t5486;
  double t5487;
  double t5369;
  double t5482;
  double t5488;
  double t5489;
  double t5492;
  double t5495;
  double t5498;
  double t5537;
  double t5543;
  double t5545;
  double t5513;
  double t5515;
  double t5521;
  double t5525;
  double t5526;
  double t5531;
  double t5534;
  double t5546;
  double t5548;
  double t5550;
  double t5554;
  double t5559;
  double t5549;
  double t5560;
  double t5562;
  double t5573;
  double t5576;
  double t5579;
  double t5564;
  double t5580;
  double t5583;
  double t5589;
  double t5592;
  double t5596;
  double t5329;
  double t5357;
  double t5361;
  double t5373;
  double t5380;
  double t5381;
  double t5490;
  double t5499;
  double t5500;
  double t5504;
  double t5505;
  double t5508;
  double t5587;
  double t5597;
  double t5599;
  double t5601;
  double t5603;
  double t5604;
  double t5701;
  double t5703;
  double t5729;
  double t5730;
  double t5753;
  double t5754;
  double t5772;
  double t5773;
  double t5793;
  double t5805;
  double t5829;
  double t5834;
  double t5623;
  double t5626;
  double t5629;
  double t5679;
  double t5681;
  double t5683;
  double t5685;
  double t5691;
  double t5695;
  double t5705;
  double t5707;
  double t5708;
  double t5711;
  double t5714;
  double t5715;
  double t5732;
  double t5733;
  double t5735;
  double t5739;
  double t5742;
  double t5747;
  double t5755;
  double t5756;
  double t5759;
  double t5763;
  double t5764;
  double t5768;
  double t5774;
  double t5777;
  double t5780;
  double t5785;
  double t5786;
  double t5789;
  double t5807;
  double t5808;
  double t5813;
  double t5820;
  double t5822;
  double t5823;
  double t5837;
  double t5842;
  double t5844;
  double t5851;
  double t5852;
  double t5853;
  double t5630;
  double t5633;
  double t5637;
  double t5642;
  double t5649;
  double t5650;
  t1243 = Cos(var1[3]);
  t2975 = Cos(var1[5]);
  t4191 = Sin(var1[4]);
  t3334 = Sin(var1[3]);
  t4968 = Sin(var1[5]);
  t2660 = Cos(var1[6]);
  t5086 = t1243*t2975*t4191;
  t5091 = t3334*t4968;
  t5126 = t5086 + t5091;
  t4187 = -1.*t2975*t3334;
  t5003 = t1243*t4191*t4968;
  t5043 = t4187 + t5003;
  t5156 = Sin(var1[6]);
  t1126 = Cos(var1[8]);
  t5219 = t2660*t5126;
  t5232 = -1.*t5043*t5156;
  t5236 = t5219 + t5232;
  t1557 = Cos(var1[4]);
  t1633 = Cos(var1[7]);
  t1767 = t1243*t1557*t1633;
  t5072 = t2660*t5043;
  t5158 = t5126*t5156;
  t5160 = t5072 + t5158;
  t5178 = Sin(var1[7]);
  t5185 = t5160*t5178;
  t5192 = t1767 + t5185;
  t5242 = Sin(var1[8]);
  t5268 = Cos(var1[9]);
  t5201 = t1126*t5192;
  t5248 = t5236*t5242;
  t5255 = t5201 + t5248;
  t1075 = Sin(var1[9]);
  t5286 = t1126*t5236;
  t5293 = -1.*t5192*t5242;
  t5294 = t5286 + t5293;
  t5307 = Cos(var1[10]);
  t5258 = -1.*t1075*t5255;
  t5299 = t5268*t5294;
  t5302 = t5258 + t5299;
  t992 = Sin(var1[10]);
  t5308 = t5268*t5255;
  t5312 = t1075*t5294;
  t5320 = t5308 + t5312;
  t5335 = Cos(var1[11]);
  t5305 = t992*t5302;
  t5321 = t5307*t5320;
  t5324 = t5305 + t5321;
  t908 = Sin(var1[11]);
  t5341 = t5307*t5302;
  t5343 = -1.*t992*t5320;
  t5351 = t5341 + t5343;
  t659 = Cos(var1[12]);
  t5403 = t2975*t3334*t4191;
  t5406 = -1.*t1243*t4968;
  t5407 = t5403 + t5406;
  t5390 = t1243*t2975;
  t5392 = t3334*t4191*t4968;
  t5397 = t5390 + t5392;
  t5435 = t2660*t5407;
  t5436 = -1.*t5397*t5156;
  t5440 = t5435 + t5436;
  t5387 = t1557*t1633*t3334;
  t5400 = t2660*t5397;
  t5411 = t5407*t5156;
  t5414 = t5400 + t5411;
  t5425 = t5414*t5178;
  t5429 = t5387 + t5425;
  t5434 = t1126*t5429;
  t5442 = t5440*t5242;
  t5452 = t5434 + t5442;
  t5465 = t1126*t5440;
  t5466 = -1.*t5429*t5242;
  t5470 = t5465 + t5466;
  t5460 = -1.*t1075*t5452;
  t5474 = t5268*t5470;
  t5477 = t5460 + t5474;
  t5483 = t5268*t5452;
  t5486 = t1075*t5470;
  t5487 = t5483 + t5486;
  t5369 = Sin(var1[12]);
  t5482 = t992*t5477;
  t5488 = t5307*t5487;
  t5489 = t5482 + t5488;
  t5492 = t5307*t5477;
  t5495 = -1.*t992*t5487;
  t5498 = t5492 + t5495;
  t5537 = t1557*t2975*t2660;
  t5543 = -1.*t1557*t4968*t5156;
  t5545 = t5537 + t5543;
  t5513 = -1.*t1633*t4191;
  t5515 = t1557*t2660*t4968;
  t5521 = t1557*t2975*t5156;
  t5525 = t5515 + t5521;
  t5526 = t5525*t5178;
  t5531 = t5513 + t5526;
  t5534 = t1126*t5531;
  t5546 = t5545*t5242;
  t5548 = t5534 + t5546;
  t5550 = t1126*t5545;
  t5554 = -1.*t5531*t5242;
  t5559 = t5550 + t5554;
  t5549 = -1.*t1075*t5548;
  t5560 = t5268*t5559;
  t5562 = t5549 + t5560;
  t5573 = t5268*t5548;
  t5576 = t1075*t5559;
  t5579 = t5573 + t5576;
  t5564 = t992*t5562;
  t5580 = t5307*t5579;
  t5583 = t5564 + t5580;
  t5589 = t5307*t5562;
  t5592 = -1.*t992*t5579;
  t5596 = t5589 + t5592;
  t5329 = -1.*t908*t5324;
  t5357 = t5335*t5351;
  t5361 = t5329 + t5357;
  t5373 = t5335*t5324;
  t5380 = t908*t5351;
  t5381 = t5373 + t5380;
  t5490 = -1.*t908*t5489;
  t5499 = t5335*t5498;
  t5500 = t5490 + t5499;
  t5504 = t5335*t5489;
  t5505 = t908*t5498;
  t5508 = t5504 + t5505;
  t5587 = -1.*t908*t5583;
  t5597 = t5335*t5596;
  t5599 = t5587 + t5597;
  t5601 = t5335*t5583;
  t5603 = t908*t5596;
  t5604 = t5601 + t5603;
  t5701 = -1.*t1633;
  t5703 = 1. + t5701;
  t5729 = -1.*t1126;
  t5730 = 1. + t5729;
  t5753 = -1.*t5268;
  t5754 = 1. + t5753;
  t5772 = -1.*t5307;
  t5773 = 1. + t5772;
  t5793 = -1.*t5335;
  t5805 = 1. + t5793;
  t5829 = -1.*t659;
  t5834 = 1. + t5829;
  t5623 = t5369*t5361;
  t5626 = t659*t5381;
  t5629 = t5623 + t5626;
  t5679 = -1.*t2660;
  t5681 = 1. + t5679;
  t5683 = 0.135*t5681;
  t5685 = 0. + t5683;
  t5691 = -0.135*t5156;
  t5695 = 0. + t5691;
  t5705 = 0.135*t5703;
  t5707 = 0.049*t5178;
  t5708 = 0. + t5705 + t5707;
  t5711 = -0.049*t5703;
  t5714 = 0.135*t5178;
  t5715 = 0. + t5711 + t5714;
  t5732 = -0.049*t5730;
  t5733 = -0.09*t5242;
  t5735 = 0. + t5732 + t5733;
  t5739 = -0.09*t5730;
  t5742 = 0.049*t5242;
  t5747 = 0. + t5739 + t5742;
  t5755 = -0.049*t5754;
  t5756 = -0.21*t1075;
  t5759 = 0. + t5755 + t5756;
  t5763 = -0.21*t5754;
  t5764 = 0.049*t1075;
  t5768 = 0. + t5763 + t5764;
  t5774 = -0.2707*t5773;
  t5777 = 0.0016*t992;
  t5780 = 0. + t5774 + t5777;
  t5785 = -0.0016*t5773;
  t5786 = -0.2707*t992;
  t5789 = 0. + t5785 + t5786;
  t5807 = 0.0184*t5805;
  t5808 = -0.7055*t908;
  t5813 = 0. + t5807 + t5808;
  t5820 = -0.7055*t5805;
  t5822 = -0.0184*t908;
  t5823 = 0. + t5820 + t5822;
  t5837 = -1.1135*t5834;
  t5842 = 0.0216*t5369;
  t5844 = 0. + t5837 + t5842;
  t5851 = -0.0216*t5834;
  t5852 = -1.1135*t5369;
  t5853 = 0. + t5851 + t5852;
  t5630 = t5369*t5500;
  t5633 = t659*t5508;
  t5637 = t5630 + t5633;
  t5642 = t5369*t5599;
  t5649 = t659*t5604;
  t5650 = t5642 + t5649;
  p_output1[0]=t5369*t5381 - 1.*t5361*t659;
  p_output1[1]=t5369*t5508 - 1.*t5500*t659;
  p_output1[2]=t5369*t5604 - 1.*t5599*t659;
  p_output1[3]=0.;
  p_output1[4]=t5629;
  p_output1[5]=t5637;
  p_output1[6]=t5650;
  p_output1[7]=0.;
  p_output1[8]=-1.*t1633*t5160 + t1243*t1557*t5178;
  p_output1[9]=t1557*t3334*t5178 - 1.*t1633*t5414;
  p_output1[10]=-1.*t4191*t5178 - 1.*t1633*t5525;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.1305*(t1633*t5160 - 1.*t1243*t1557*t5178) - 0.0216*t5629 + t5043*t5685 + t5126*t5695 + t5160*t5708 + t1243*t1557*t5715 + t5192*t5735 + t5236*t5747 + t5255*t5759 + t5294*t5768 + t5302*t5780 + t5320*t5789 + t5324*t5813 + t5351*t5823 + t5361*t5844 + t5381*t5853 - 1.1135*(-1.*t5369*t5381 + t5361*t659) + var1[0];
  p_output1[13]=0. + 0.1305*(-1.*t1557*t3334*t5178 + t1633*t5414) - 0.0216*t5637 + t5397*t5685 + t5407*t5695 + t5414*t5708 + t1557*t3334*t5715 + t5429*t5735 + t5440*t5747 + t5452*t5759 + t5470*t5768 + t5477*t5780 + t5487*t5789 + t5489*t5813 + t5498*t5823 + t5500*t5844 + t5508*t5853 - 1.1135*(-1.*t5369*t5508 + t5500*t659) + var1[1];
  p_output1[14]=0. + 0.1305*(t4191*t5178 + t1633*t5525) - 0.0216*t5650 + t1557*t4968*t5685 + t1557*t2975*t5695 + t5525*t5708 - 1.*t4191*t5715 + t5531*t5735 + t5545*t5747 + t5548*t5759 + t5559*t5768 + t5562*t5780 + t5579*t5789 + t5583*t5813 + t5596*t5823 + t5599*t5844 + t5604*t5853 - 1.1135*(-1.*t5369*t5604 + t5599*t659) + var1[2];
  p_output1[15]=1.;
}



void H_toe_joint_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
