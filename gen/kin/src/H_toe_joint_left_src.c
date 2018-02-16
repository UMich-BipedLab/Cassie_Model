/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:15:26 GMT-05:00
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
  double t5037;
  double t5103;
  double t5133;
  double t5110;
  double t5138;
  double t5064;
  double t5185;
  double t5186;
  double t5192;
  double t5126;
  double t5163;
  double t5181;
  double t5197;
  double t4983;
  double t5257;
  double t5261;
  double t5266;
  double t5038;
  double t5040;
  double t5054;
  double t5184;
  double t5205;
  double t5235;
  double t5245;
  double t5250;
  double t5253;
  double t5268;
  double t5278;
  double t5256;
  double t5269;
  double t5271;
  double t2996;
  double t5281;
  double t5284;
  double t5291;
  double t5318;
  double t5275;
  double t5302;
  double t5304;
  double t2800;
  double t5322;
  double t5326;
  double t5327;
  double t5335;
  double t5316;
  double t5330;
  double t5332;
  double t1061;
  double t5340;
  double t5345;
  double t5351;
  double t789;
  double t5414;
  double t5415;
  double t5418;
  double t5390;
  double t5394;
  double t5398;
  double t5439;
  double t5440;
  double t5443;
  double t5385;
  double t5406;
  double t5420;
  double t5424;
  double t5427;
  double t5432;
  double t5437;
  double t5444;
  double t5446;
  double t5453;
  double t5454;
  double t5455;
  double t5450;
  double t5456;
  double t5459;
  double t5463;
  double t5464;
  double t5467;
  double t5360;
  double t5460;
  double t5470;
  double t5472;
  double t5477;
  double t5480;
  double t5482;
  double t5530;
  double t5534;
  double t5535;
  double t5506;
  double t5507;
  double t5515;
  double t5518;
  double t5519;
  double t5522;
  double t5527;
  double t5538;
  double t5540;
  double t5548;
  double t5549;
  double t5550;
  double t5543;
  double t5551;
  double t5553;
  double t5555;
  double t5557;
  double t5569;
  double t5554;
  double t5574;
  double t5578;
  double t5585;
  double t5590;
  double t5593;
  double t5334;
  double t5352;
  double t5356;
  double t5362;
  double t5367;
  double t5373;
  double t5475;
  double t5485;
  double t5489;
  double t5494;
  double t5499;
  double t5500;
  double t5580;
  double t5596;
  double t5601;
  double t5606;
  double t5610;
  double t5611;
  double t5683;
  double t5684;
  double t5715;
  double t5718;
  double t5738;
  double t5740;
  double t5770;
  double t5773;
  double t5801;
  double t5805;
  double t5822;
  double t5826;
  double t5617;
  double t5624;
  double t5627;
  double t5667;
  double t5669;
  double t5670;
  double t5671;
  double t5677;
  double t5681;
  double t5687;
  double t5690;
  double t5694;
  double t5700;
  double t5702;
  double t5704;
  double t5719;
  double t5721;
  double t5722;
  double t5727;
  double t5728;
  double t5733;
  double t5743;
  double t5746;
  double t5748;
  double t5759;
  double t5761;
  double t5762;
  double t5774;
  double t5778;
  double t5779;
  double t5785;
  double t5790;
  double t5797;
  double t5806;
  double t5807;
  double t5809;
  double t5815;
  double t5817;
  double t5818;
  double t5827;
  double t5832;
  double t5835;
  double t5839;
  double t5841;
  double t5844;
  double t5628;
  double t5632;
  double t5634;
  double t5637;
  double t5639;
  double t5644;
  t5037 = Cos(var1[3]);
  t5103 = Cos(var1[5]);
  t5133 = Sin(var1[4]);
  t5110 = Sin(var1[3]);
  t5138 = Sin(var1[5]);
  t5064 = Cos(var1[6]);
  t5185 = t5037*t5103*t5133;
  t5186 = t5110*t5138;
  t5192 = t5185 + t5186;
  t5126 = -1.*t5103*t5110;
  t5163 = t5037*t5133*t5138;
  t5181 = t5126 + t5163;
  t5197 = Sin(var1[6]);
  t4983 = Cos(var1[8]);
  t5257 = t5064*t5192;
  t5261 = -1.*t5181*t5197;
  t5266 = t5257 + t5261;
  t5038 = Cos(var1[4]);
  t5040 = Cos(var1[7]);
  t5054 = t5037*t5038*t5040;
  t5184 = t5064*t5181;
  t5205 = t5192*t5197;
  t5235 = t5184 + t5205;
  t5245 = Sin(var1[7]);
  t5250 = t5235*t5245;
  t5253 = t5054 + t5250;
  t5268 = Sin(var1[8]);
  t5278 = Cos(var1[9]);
  t5256 = t4983*t5253;
  t5269 = t5266*t5268;
  t5271 = t5256 + t5269;
  t2996 = Sin(var1[9]);
  t5281 = t4983*t5266;
  t5284 = -1.*t5253*t5268;
  t5291 = t5281 + t5284;
  t5318 = Cos(var1[10]);
  t5275 = -1.*t2996*t5271;
  t5302 = t5278*t5291;
  t5304 = t5275 + t5302;
  t2800 = Sin(var1[10]);
  t5322 = t5278*t5271;
  t5326 = t2996*t5291;
  t5327 = t5322 + t5326;
  t5335 = Cos(var1[11]);
  t5316 = t2800*t5304;
  t5330 = t5318*t5327;
  t5332 = t5316 + t5330;
  t1061 = Sin(var1[11]);
  t5340 = t5318*t5304;
  t5345 = -1.*t2800*t5327;
  t5351 = t5340 + t5345;
  t789 = Cos(var1[12]);
  t5414 = t5103*t5110*t5133;
  t5415 = -1.*t5037*t5138;
  t5418 = t5414 + t5415;
  t5390 = t5037*t5103;
  t5394 = t5110*t5133*t5138;
  t5398 = t5390 + t5394;
  t5439 = t5064*t5418;
  t5440 = -1.*t5398*t5197;
  t5443 = t5439 + t5440;
  t5385 = t5038*t5040*t5110;
  t5406 = t5064*t5398;
  t5420 = t5418*t5197;
  t5424 = t5406 + t5420;
  t5427 = t5424*t5245;
  t5432 = t5385 + t5427;
  t5437 = t4983*t5432;
  t5444 = t5443*t5268;
  t5446 = t5437 + t5444;
  t5453 = t4983*t5443;
  t5454 = -1.*t5432*t5268;
  t5455 = t5453 + t5454;
  t5450 = -1.*t2996*t5446;
  t5456 = t5278*t5455;
  t5459 = t5450 + t5456;
  t5463 = t5278*t5446;
  t5464 = t2996*t5455;
  t5467 = t5463 + t5464;
  t5360 = Sin(var1[12]);
  t5460 = t2800*t5459;
  t5470 = t5318*t5467;
  t5472 = t5460 + t5470;
  t5477 = t5318*t5459;
  t5480 = -1.*t2800*t5467;
  t5482 = t5477 + t5480;
  t5530 = t5038*t5103*t5064;
  t5534 = -1.*t5038*t5138*t5197;
  t5535 = t5530 + t5534;
  t5506 = -1.*t5040*t5133;
  t5507 = t5038*t5064*t5138;
  t5515 = t5038*t5103*t5197;
  t5518 = t5507 + t5515;
  t5519 = t5518*t5245;
  t5522 = t5506 + t5519;
  t5527 = t4983*t5522;
  t5538 = t5535*t5268;
  t5540 = t5527 + t5538;
  t5548 = t4983*t5535;
  t5549 = -1.*t5522*t5268;
  t5550 = t5548 + t5549;
  t5543 = -1.*t2996*t5540;
  t5551 = t5278*t5550;
  t5553 = t5543 + t5551;
  t5555 = t5278*t5540;
  t5557 = t2996*t5550;
  t5569 = t5555 + t5557;
  t5554 = t2800*t5553;
  t5574 = t5318*t5569;
  t5578 = t5554 + t5574;
  t5585 = t5318*t5553;
  t5590 = -1.*t2800*t5569;
  t5593 = t5585 + t5590;
  t5334 = -1.*t1061*t5332;
  t5352 = t5335*t5351;
  t5356 = t5334 + t5352;
  t5362 = t5335*t5332;
  t5367 = t1061*t5351;
  t5373 = t5362 + t5367;
  t5475 = -1.*t1061*t5472;
  t5485 = t5335*t5482;
  t5489 = t5475 + t5485;
  t5494 = t5335*t5472;
  t5499 = t1061*t5482;
  t5500 = t5494 + t5499;
  t5580 = -1.*t1061*t5578;
  t5596 = t5335*t5593;
  t5601 = t5580 + t5596;
  t5606 = t5335*t5578;
  t5610 = t1061*t5593;
  t5611 = t5606 + t5610;
  t5683 = -1.*t5040;
  t5684 = 1. + t5683;
  t5715 = -1.*t4983;
  t5718 = 1. + t5715;
  t5738 = -1.*t5278;
  t5740 = 1. + t5738;
  t5770 = -1.*t5318;
  t5773 = 1. + t5770;
  t5801 = -1.*t5335;
  t5805 = 1. + t5801;
  t5822 = -1.*t789;
  t5826 = 1. + t5822;
  t5617 = t5360*t5356;
  t5624 = t789*t5373;
  t5627 = t5617 + t5624;
  t5667 = -1.*t5064;
  t5669 = 1. + t5667;
  t5670 = 0.135*t5669;
  t5671 = 0. + t5670;
  t5677 = -0.135*t5197;
  t5681 = 0. + t5677;
  t5687 = 0.135*t5684;
  t5690 = 0.049*t5245;
  t5694 = 0. + t5687 + t5690;
  t5700 = -0.049*t5684;
  t5702 = 0.135*t5245;
  t5704 = 0. + t5700 + t5702;
  t5719 = -0.049*t5718;
  t5721 = -0.09*t5268;
  t5722 = 0. + t5719 + t5721;
  t5727 = -0.09*t5718;
  t5728 = 0.049*t5268;
  t5733 = 0. + t5727 + t5728;
  t5743 = -0.049*t5740;
  t5746 = -0.21*t2996;
  t5748 = 0. + t5743 + t5746;
  t5759 = -0.21*t5740;
  t5761 = 0.049*t2996;
  t5762 = 0. + t5759 + t5761;
  t5774 = -0.2707*t5773;
  t5778 = 0.0016*t2800;
  t5779 = 0. + t5774 + t5778;
  t5785 = -0.0016*t5773;
  t5790 = -0.2707*t2800;
  t5797 = 0. + t5785 + t5790;
  t5806 = 0.0184*t5805;
  t5807 = -0.7055*t1061;
  t5809 = 0. + t5806 + t5807;
  t5815 = -0.7055*t5805;
  t5817 = -0.0184*t1061;
  t5818 = 0. + t5815 + t5817;
  t5827 = -1.1135*t5826;
  t5832 = 0.0216*t5360;
  t5835 = 0. + t5827 + t5832;
  t5839 = -0.0216*t5826;
  t5841 = -1.1135*t5360;
  t5844 = 0. + t5839 + t5841;
  t5628 = t5360*t5489;
  t5632 = t789*t5500;
  t5634 = t5628 + t5632;
  t5637 = t5360*t5601;
  t5639 = t789*t5611;
  t5644 = t5637 + t5639;
  p_output1[0]=t5360*t5373 - 1.*t5356*t789;
  p_output1[1]=t5360*t5500 - 1.*t5489*t789;
  p_output1[2]=t5360*t5611 - 1.*t5601*t789;
  p_output1[3]=0.;
  p_output1[4]=t5627;
  p_output1[5]=t5634;
  p_output1[6]=t5644;
  p_output1[7]=0.;
  p_output1[8]=-1.*t5040*t5235 + t5037*t5038*t5245;
  p_output1[9]=t5038*t5110*t5245 - 1.*t5040*t5424;
  p_output1[10]=-1.*t5133*t5245 - 1.*t5040*t5518;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.1305*(t5040*t5235 - 1.*t5037*t5038*t5245) - 0.0216*t5627 + t5181*t5671 + t5192*t5681 + t5235*t5694 + t5037*t5038*t5704 + t5253*t5722 + t5266*t5733 + t5271*t5748 + t5291*t5762 + t5304*t5779 + t5327*t5797 + t5332*t5809 + t5351*t5818 + t5356*t5835 + t5373*t5844 - 1.1135*(-1.*t5360*t5373 + t5356*t789) + var1[0];
  p_output1[13]=0. + 0.1305*(-1.*t5038*t5110*t5245 + t5040*t5424) - 0.0216*t5634 + t5398*t5671 + t5418*t5681 + t5424*t5694 + t5038*t5110*t5704 + t5432*t5722 + t5443*t5733 + t5446*t5748 + t5455*t5762 + t5459*t5779 + t5467*t5797 + t5472*t5809 + t5482*t5818 + t5489*t5835 + t5500*t5844 - 1.1135*(-1.*t5360*t5500 + t5489*t789) + var1[1];
  p_output1[14]=0. + 0.1305*(t5133*t5245 + t5040*t5518) - 0.0216*t5644 + t5038*t5138*t5671 + t5038*t5103*t5681 + t5518*t5694 - 1.*t5133*t5704 + t5522*t5722 + t5535*t5733 + t5540*t5748 + t5550*t5762 + t5553*t5779 + t5569*t5797 + t5578*t5809 + t5593*t5818 + t5601*t5835 + t5611*t5844 - 1.1135*(-1.*t5360*t5611 + t5601*t789) + var1[2];
  p_output1[15]=1.;
}



void H_toe_joint_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
