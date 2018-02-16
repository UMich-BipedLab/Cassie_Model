/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:25:26 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_LeftToeBottom_to_RightToeBottom.h"

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
static void output1(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  double t794;
  double t890;
  double t809;
  double t816;
  double t928;
  double t1075;
  double t849;
  double t993;
  double t1028;
  double t674;
  double t1096;
  double t1152;
  double t1190;
  double t1258;
  double t1065;
  double t1197;
  double t1202;
  double t440;
  double t1286;
  double t1371;
  double t1415;
  double t1493;
  double t1232;
  double t1433;
  double t1450;
  double t365;
  double t1535;
  double t1536;
  double t1561;
  double t2004;
  double t1966;
  double t1992;
  double t1999;
  double t2011;
  double t2015;
  double t2078;
  double t2091;
  double t2093;
  double t2022;
  double t2110;
  double t2181;
  double t2189;
  double t2195;
  double t2198;
  double t2188;
  double t2223;
  double t2224;
  double t2254;
  double t2266;
  double t2304;
  double t2244;
  double t2350;
  double t2358;
  double t2439;
  double t2452;
  double t2474;
  double t1455;
  double t1709;
  double t1814;
  double t1830;
  double t1833;
  double t1852;
  double t2360;
  double t2575;
  double t2638;
  double t2680;
  double t2682;
  double t2698;
  double t2895;
  double t2896;
  double t2928;
  double t2945;
  double t2953;
  double t2959;
  double t2936;
  double t2996;
  double t3026;
  double t3068;
  double t3094;
  double t3173;
  double t3041;
  double t3203;
  double t3243;
  double t3290;
  double t3297;
  double t3319;
  double t3282;
  double t3341;
  double t3409;
  double t3499;
  double t3614;
  double t3680;
  double t2734;
  double t2772;
  double t2796;
  double t2641;
  double t2710;
  double t2730;
  double t3467;
  double t3707;
  double t3713;
  double t3827;
  double t3829;
  double t3858;
  double t1815;
  double t1861;
  double t1884;
  double t2811;
  double t2846;
  double t2857;
  double t2732;
  double t2859;
  double t139;
  double t4007;
  double t4033;
  double t4074;
  double t3806;
  double t3865;
  double t3900;
  double t3914;
  double t3934;
  double t3938;
  double t4004;
  double t4258;
  double t4280;
  double t4289;
  double t4324;
  double t4370;
  double t4419;
  double t4433;
  double t4465;
  double t173;
  double t4758;
  double t4492;
  double t5308;
  double t5341;
  double t5304;
  double t5516;
  double t5523;
  double t5568;
  double t5318;
  double t5380;
  double t5483;
  double t5569;
  double t5297;
  double t5610;
  double t5619;
  double t5637;
  double t5490;
  double t5576;
  double t5580;
  double t5647;
  double t5276;
  double t5695;
  double t5698;
  double t5711;
  double t5606;
  double t5664;
  double t5669;
  double t5746;
  double t5263;
  double t5791;
  double t5817;
  double t5819;
  double t5680;
  double t5778;
  double t5780;
  double t5825;
  double t2865;
  double t5945;
  double t5957;
  double t5959;
  double t5925;
  double t5926;
  double t5931;
  double t5992;
  double t5995;
  double t6005;
  double t5934;
  double t5960;
  double t5970;
  double t6071;
  double t6072;
  double t6077;
  double t5988;
  double t6024;
  double t6034;
  double t6122;
  double t6138;
  double t6168;
  double t6069;
  double t6087;
  double t6093;
  double t4528;
  double t4651;
  double t4678;
  double t6320;
  double t6322;
  double t6324;
  double t6281;
  double t6298;
  double t6306;
  double t6379;
  double t6381;
  double t6396;
  double t6317;
  double t6325;
  double t6336;
  double t6418;
  double t6423;
  double t6429;
  double t6369;
  double t6407;
  double t6410;
  double t4759;
  double t4766;
  double t4770;
  double t5788;
  double t5831;
  double t5841;
  double t5857;
  double t5858;
  double t5871;
  double t5877;
  double t5883;
  double t5888;
  double t4829;
  double t4844;
  double t4857;
  double t6411;
  double t6432;
  double t6442;
  double t6464;
  double t6465;
  double t6482;
  double t6511;
  double t6516;
  double t6527;
  double t4927;
  double t4938;
  double t4978;
  double t6099;
  double t6184;
  double t6230;
  double t6247;
  double t6250;
  double t6254;
  double t6266;
  double t6269;
  double t6270;
  double t4994;
  double t5012;
  double t5031;
  double t5077;
  double t5138;
  double t5139;
  double t5140;
  double t5170;
  double t5174;
  double t5214;
  double t6655;
  double t6670;
  double t6692;
  double t6710;
  double t6721;
  double t6750;
  double t6700;
  double t6703;
  double t6706;
  t794 = Cos(var1[1]);
  t890 = Cos(var1[3]);
  t809 = Cos(var1[2]);
  t816 = Sin(var1[3]);
  t928 = Sin(var1[2]);
  t1075 = Cos(var1[4]);
  t849 = -1.*t794*t809*t816;
  t993 = -1.*t890*t794*t928;
  t1028 = t849 + t993;
  t674 = Sin(var1[4]);
  t1096 = t890*t794*t809;
  t1152 = -1.*t794*t816*t928;
  t1190 = t1096 + t1152;
  t1258 = Cos(var1[5]);
  t1065 = t674*t1028;
  t1197 = t1075*t1190;
  t1202 = t1065 + t1197;
  t440 = Sin(var1[5]);
  t1286 = t1075*t1028;
  t1371 = -1.*t674*t1190;
  t1415 = t1286 + t1371;
  t1493 = Cos(var1[6]);
  t1232 = -1.*t440*t1202;
  t1433 = t1258*t1415;
  t1450 = t1232 + t1433;
  t365 = Sin(var1[6]);
  t1535 = t1258*t1202;
  t1536 = t440*t1415;
  t1561 = t1535 + t1536;
  t2004 = Sin(var1[0]);
  t1966 = Cos(var1[0]);
  t1992 = Sin(var1[1]);
  t1999 = t1966*t809*t1992;
  t2011 = -1.*t2004*t928;
  t2015 = t1999 + t2011;
  t2078 = -1.*t809*t2004;
  t2091 = -1.*t1966*t1992*t928;
  t2093 = t2078 + t2091;
  t2022 = -1.*t816*t2015;
  t2110 = t890*t2093;
  t2181 = t2022 + t2110;
  t2189 = t890*t2015;
  t2195 = t816*t2093;
  t2198 = t2189 + t2195;
  t2188 = t674*t2181;
  t2223 = t1075*t2198;
  t2224 = t2188 + t2223;
  t2254 = t1075*t2181;
  t2266 = -1.*t674*t2198;
  t2304 = t2254 + t2266;
  t2244 = -1.*t440*t2224;
  t2350 = t1258*t2304;
  t2358 = t2244 + t2350;
  t2439 = t1258*t2224;
  t2452 = t440*t2304;
  t2474 = t2439 + t2452;
  t1455 = t365*t1450;
  t1709 = t1493*t1561;
  t1814 = t1455 + t1709;
  t1830 = t1493*t1450;
  t1833 = -1.*t365*t1561;
  t1852 = t1830 + t1833;
  t2360 = t365*t2358;
  t2575 = t1493*t2474;
  t2638 = t2360 + t2575;
  t2680 = t1493*t2358;
  t2682 = -1.*t365*t2474;
  t2698 = t2680 + t2682;
  t2895 = t809*t2004*t1992;
  t2896 = t1966*t928;
  t2928 = t2895 + t2896;
  t2945 = t1966*t809;
  t2953 = -1.*t2004*t1992*t928;
  t2959 = t2945 + t2953;
  t2936 = -1.*t816*t2928;
  t2996 = t890*t2959;
  t3026 = t2936 + t2996;
  t3068 = t890*t2928;
  t3094 = t816*t2959;
  t3173 = t3068 + t3094;
  t3041 = t674*t3026;
  t3203 = t1075*t3173;
  t3243 = t3041 + t3203;
  t3290 = t1075*t3026;
  t3297 = -1.*t674*t3173;
  t3319 = t3290 + t3297;
  t3282 = -1.*t440*t3243;
  t3341 = t1258*t3319;
  t3409 = t3282 + t3341;
  t3499 = t1258*t3243;
  t3614 = t440*t3319;
  t3680 = t3499 + t3614;
  t2734 = -0.766044*t1814;
  t2772 = 0.642788*t1852;
  t2796 = t2734 + t2772;
  t2641 = -0.766044*t2638;
  t2710 = 0.642788*t2698;
  t2730 = t2641 + t2710;
  t3467 = t365*t3409;
  t3707 = t1493*t3680;
  t3713 = t3467 + t3707;
  t3827 = t1493*t3409;
  t3829 = -1.*t365*t3680;
  t3858 = t3827 + t3829;
  t1815 = 0.642788*t1814;
  t1861 = 0.766044*t1852;
  t1884 = t1815 + t1861;
  t2811 = 0.642788*t2638;
  t2846 = 0.766044*t2698;
  t2857 = t2811 + t2846;
  t2732 = t1884*t2730;
  t2859 = -1.*t2796*t2857;
  t139 = Cos(var1[8]);
  t4007 = -0.766044*t3713;
  t4033 = 0.642788*t3858;
  t4074 = t4007 + t4033;
  t3806 = 0.642788*t3713;
  t3865 = 0.766044*t3858;
  t3900 = t3806 + t3865;
  t3914 = t1966*t794*t2796;
  t3934 = t1992*t2730;
  t3938 = t3914 + t3934;
  t4004 = -1.*t3900*t3938;
  t4258 = t1966*t794*t1884;
  t4280 = t1992*t2857;
  t4289 = t4258 + t4280;
  t4324 = t4074*t4289;
  t4370 = t2732 + t2859;
  t4419 = -1.*t794*t2004*t4370;
  t4433 = 0. + t4004 + t4324 + t4419;
  t4465 = 1/t4433;
  t173 = Sin(var1[7]);
  t4758 = Sin(var1[8]);
  t4492 = Cos(var1[7]);
  t5308 = Cos(var1[9]);
  t5341 = Sin(var1[9]);
  t5304 = Cos(var1[10]);
  t5516 = t4492*t5308;
  t5523 = -1.*t173*t4758*t5341;
  t5568 = t5516 + t5523;
  t5318 = t5308*t173*t4758;
  t5380 = t4492*t5341;
  t5483 = t5318 + t5380;
  t5569 = Sin(var1[10]);
  t5297 = Cos(var1[11]);
  t5610 = t5304*t5568;
  t5619 = -1.*t5483*t5569;
  t5637 = t5610 + t5619;
  t5490 = t5304*t5483;
  t5576 = t5568*t5569;
  t5580 = t5490 + t5576;
  t5647 = Sin(var1[11]);
  t5276 = Cos(var1[12]);
  t5695 = t5297*t5637;
  t5698 = -1.*t5580*t5647;
  t5711 = t5695 + t5698;
  t5606 = t5297*t5580;
  t5664 = t5637*t5647;
  t5669 = t5606 + t5664;
  t5746 = Sin(var1[12]);
  t5263 = Cos(var1[13]);
  t5791 = t5276*t5711;
  t5817 = -1.*t5669*t5746;
  t5819 = t5791 + t5817;
  t5680 = t5276*t5669;
  t5778 = t5711*t5746;
  t5780 = t5680 + t5778;
  t5825 = Sin(var1[13]);
  t2865 = 0. + t2732 + t2859;
  t5945 = -1.*t5308*t173;
  t5957 = -1.*t4492*t4758*t5341;
  t5959 = t5945 + t5957;
  t5925 = t4492*t5308*t4758;
  t5926 = -1.*t173*t5341;
  t5931 = t5925 + t5926;
  t5992 = t5304*t5959;
  t5995 = -1.*t5931*t5569;
  t6005 = t5992 + t5995;
  t5934 = t5304*t5931;
  t5960 = t5959*t5569;
  t5970 = t5934 + t5960;
  t6071 = t5297*t6005;
  t6072 = -1.*t5970*t5647;
  t6077 = t6071 + t6072;
  t5988 = t5297*t5970;
  t6024 = t6005*t5647;
  t6034 = t5988 + t6024;
  t6122 = t5276*t6077;
  t6138 = -1.*t6034*t5746;
  t6168 = t6122 + t6138;
  t6069 = t5276*t6034;
  t6087 = t6077*t5746;
  t6093 = t6069 + t6087;
  t4528 = -1.*t1884*t4074;
  t4651 = t2796*t3900;
  t4678 = 0. + t4528 + t4651;
  t6320 = -1.*t139*t5304*t5341;
  t6322 = -1.*t139*t5308*t5569;
  t6324 = t6320 + t6322;
  t6281 = t139*t5308*t5304;
  t6298 = -1.*t139*t5341*t5569;
  t6306 = t6281 + t6298;
  t6379 = t5297*t6324;
  t6381 = -1.*t6306*t5647;
  t6396 = t6379 + t6381;
  t6317 = t5297*t6306;
  t6325 = t6324*t5647;
  t6336 = t6317 + t6325;
  t6418 = t5276*t6396;
  t6423 = -1.*t6336*t5746;
  t6429 = t6418 + t6423;
  t6369 = t5276*t6336;
  t6407 = t6396*t5746;
  t6410 = t6369 + t6407;
  t4759 = t2857*t4074;
  t4766 = -1.*t2730*t3900;
  t4770 = 0. + t4759 + t4766;
  t5788 = t5263*t5780;
  t5831 = t5819*t5825;
  t5841 = t5788 + t5831;
  t5857 = 0.642788*t5841;
  t5858 = t5263*t5819;
  t5871 = -1.*t5780*t5825;
  t5877 = t5858 + t5871;
  t5883 = 0.766044*t5877;
  t5888 = t5857 + t5883;
  t4829 = -1.*t1966*t794*t2796;
  t4844 = -1.*t1992*t2730;
  t4857 = 0. + t4829 + t4844;
  t6411 = t5263*t6410;
  t6432 = t6429*t5825;
  t6442 = t6411 + t6432;
  t6464 = 0.642788*t6442;
  t6465 = t5263*t6429;
  t6482 = -1.*t6410*t5825;
  t6511 = t6465 + t6482;
  t6516 = 0.766044*t6511;
  t6527 = t6464 + t6516;
  t4927 = -1.*t794*t2004*t2730;
  t4938 = t1966*t794*t4074;
  t4978 = 0. + t4927 + t4938;
  t6099 = t5263*t6093;
  t6184 = t6168*t5825;
  t6230 = t6099 + t6184;
  t6247 = 0.642788*t6230;
  t6250 = t5263*t6168;
  t6254 = -1.*t6093*t5825;
  t6266 = t6250 + t6254;
  t6269 = 0.766044*t6266;
  t6270 = t6247 + t6269;
  t4994 = t794*t2004*t2796;
  t5012 = t1992*t4074;
  t5031 = 0. + t4994 + t5012;
  t5077 = 0. + t4258 + t4280;
  t5138 = t794*t2004*t2857;
  t5139 = -1.*t1966*t794*t3900;
  t5140 = 0. + t5138 + t5139;
  t5170 = -1.*t794*t2004*t1884;
  t5174 = -1.*t1992*t3900;
  t5214 = 0. + t5170 + t5174;
  t6655 = -0.766044*t5841;
  t6670 = 0.642788*t5877;
  t6692 = t6655 + t6670;
  t6710 = -0.766044*t6442;
  t6721 = 0.642788*t6511;
  t6750 = t6710 + t6721;
  t6700 = -0.766044*t6230;
  t6703 = 0.642788*t6266;
  t6706 = t6700 + t6703;

  p_output1(0)=0. - 1.*t139*t173*t2865*t4465 - 1.*t139*t4465*t4492*t4678 + t4465*t4758*t4770;
  p_output1(1)=0. - 1.*t139*t173*t4465*t4857 + t4465*t4758*t4978 - 1.*t139*t4465*t4492*t5031;
  p_output1(2)=0. - 1.*t139*t173*t4465*t5077 + t4465*t4758*t5140 - 1.*t139*t4465*t4492*t5214;
  p_output1(3)=0. + t2865*t4465*t5888 + t4465*t4678*t6270 + t4465*t4770*t6527;
  p_output1(4)=0. + t4465*t4857*t5888 + t4465*t5031*t6270 + t4465*t4978*t6527;
  p_output1(5)=0. + t4465*t5077*t5888 + t4465*t5214*t6270 + t4465*t5140*t6527;
  p_output1(6)=0. + t2865*t4465*t6692 + t4465*t4678*t6706 + t4465*t4770*t6750;
  p_output1(7)=0. + t4465*t4857*t6692 + t4465*t5031*t6706 + t4465*t4978*t6750;
  p_output1(8)=0. + t4465*t5077*t6692 + t4465*t5214*t6706 + t4465*t5140*t6750;
}


       
void R_LeftToeBottom_to_RightToeBottom(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
