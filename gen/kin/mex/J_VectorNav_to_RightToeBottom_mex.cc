/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:36:47 GMT-04:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
inline double Power(double x, double y) { return pow(x, y); }
inline double Sqrt(double x) { return sqrt(x); }

inline double Abs(double x) { return fabs(x); }

inline double Exp(double x) { return exp(x); }
inline double Log(double x) { return log(x); }

inline double Sin(double x) { return sin(x); }
inline double Cos(double x) { return cos(x); }
inline double Tan(double x) { return tan(x); }

inline double ArcSin(double x) { return asin(x); }
inline double ArcCos(double x) { return acos(x); }
inline double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
inline double ArcTan(double x, double y) { return atan2(y,x); }

inline double Sinh(double x) { return sinh(x); }
inline double Cosh(double x) { return cosh(x); }
inline double Tanh(double x) { return tanh(x); }

const double E	= 2.71828182845904523536029;
const double Pi = 3.14159265358979323846264;
const double Degree = 0.01745329251994329576924;


#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1)
{
  double t236;
  double t295;
  double t876;
  double t1018;
  double t1099;
  double t1101;
  double t1170;
  double t1220;
  double t1456;
  double t1577;
  double t1619;
  double t1701;
  double t1390;
  double t1419;
  double t1426;
  double t1774;
  double t1786;
  double t1824;
  double t1960;
  double t1991;
  double t1995;
  double t2020;
  double t1902;
  double t1909;
  double t1921;
  double t2197;
  double t2219;
  double t2229;
  double t2449;
  double t2464;
  double t2476;
  double t2494;
  double t2371;
  double t2372;
  double t2428;
  double t2633;
  double t2701;
  double t2718;
  double t2821;
  double t2883;
  double t2895;
  double t2949;
  double t2780;
  double t2785;
  double t2807;
  double t3016;
  double t3036;
  double t3045;
  double t507;
  double t594;
  double t757;
  double t950;
  double t963;
  double t1156;
  double t1200;
  double t1207;
  double t1258;
  double t1266;
  double t1307;
  double t1659;
  double t1706;
  double t1716;
  double t1838;
  double t1850;
  double t1859;
  double t3397;
  double t3426;
  double t3471;
  double t3615;
  double t3626;
  double t3655;
  double t2019;
  double t2050;
  double t2134;
  double t2263;
  double t2285;
  double t2307;
  double t3689;
  double t3714;
  double t3733;
  double t3756;
  double t3759;
  double t3766;
  double t2492;
  double t2514;
  double t2569;
  double t2730;
  double t2745;
  double t2757;
  double t3839;
  double t3863;
  double t3868;
  double t3891;
  double t3892;
  double t3905;
  double t2918;
  double t2951;
  double t2991;
  double t3070;
  double t3090;
  double t3123;
  double t3948;
  double t3961;
  double t3965;
  double t3968;
  double t3971;
  double t4005;
  double t5156;
  double t5194;
  double t5389;
  double t5463;
  double t5488;
  double t5542;
  double t5571;
  double t5581;
  double t5615;
  double t5671;
  double t5693;
  double t5710;
  double t5728;
  double t5730;
  double t5799;
  double t5830;
  double t5857;
  double t5870;
  double t5955;
  double t5959;
  double t5980;
  double t5985;
  double t5990;
  double t6015;
  double t6035;
  double t6041;
  double t6062;
  double t6087;
  double t6090;
  double t6093;
  double t6105;
  double t6115;
  double t6119;
  double t6124;
  double t6128;
  double t6131;
  double t5920;
  double t5936;
  double t5937;
  double t6237;
  double t6239;
  double t6243;
  double t6259;
  double t6266;
  double t6268;
  double t6274;
  double t6277;
  double t6294;
  double t6306;
  double t6309;
  double t6312;
  double t6326;
  double t6332;
  double t6333;
  double t6343;
  double t6346;
  double t6352;
  double t6403;
  double t6405;
  double t6417;
  double t6422;
  double t6423;
  double t6425;
  double t6431;
  double t6434;
  double t6436;
  double t6447;
  double t6448;
  double t6450;
  double t6464;
  double t6466;
  double t6467;
  double t6453;
  double t6455;
  double t6456;
  double t6384;
  double t6386;
  double t6392;
  double t6507;
  double t6508;
  double t6509;
  double t6515;
  double t6517;
  double t6522;
  double t6523;
  double t6524;
  double t6526;
  double t6527;
  double t6528;
  double t6537;
  double t6540;
  double t6544;
  double t6557;
  double t6559;
  double t6563;
  double t6550;
  double t6552;
  double t6554;
  double t6497;
  double t6499;
  double t6590;
  double t6594;
  double t6595;
  double t6600;
  double t6601;
  double t6602;
  double t6607;
  double t6608;
  double t6613;
  double t6614;
  double t6616;
  double t6622;
  double t6623;
  double t6625;
  double t6647;
  double t6649;
  double t6650;
  double t6634;
  double t6637;
  double t6639;
  double t6420;
  double t6430;
  double t6446;
  double t6452;
  double t6461;
  double t6470;
  double t6472;
  double t6473;
  double t6474;
  double t6477;
  double t6480;
  double t6481;
  double t6483;
  double t6485;
  double t6674;
  double t6676;
  double t6679;
  double t6680;
  double t6690;
  double t6709;
  double t6710;
  double t6716;
  double t6717;
  double t6721;
  double t6722;
  double t6725;
  double t6739;
  double t6743;
  double t6748;
  double t6729;
  double t6730;
  double t6732;
  double t6783;
  double t6788;
  double t6790;
  double t6794;
  double t6796;
  double t6799;
  double t6801;
  double t6808;
  double t6810;
  double t6812;
  double t6818;
  double t6819;
  double t6820;
  double t6838;
  double t6841;
  double t6848;
  double t6828;
  double t6830;
  double t6832;
  double t6881;
  double t6885;
  double t6894;
  double t6913;
  double t6922;
  double t6935;
  double t6939;
  double t6961;
  double t6966;
  double t6967;
  double t6946;
  double t6949;
  double t6951;
  double t6866;
  double t6867;
  double t6896;
  double t6901;
  double t6905;
  double t7008;
  double t7014;
  double t7037;
  double t7038;
  double t7040;
  double t7029;
  double t7031;
  double t7080;
  double t7086;
  double t7088;
  double t7096;
  double t7100;
  double t7105;
  double t7108;
  double t7136;
  double t7144;
  double t7147;
  double t7119;
  double t7121;
  double t7123;
  double t7198;
  double t7200;
  double t7205;
  double t7231;
  double t7232;
  double t7219;
  double t7222;
  double t7185;
  double t7186;
  double t7206;
  double t7208;
  double t7209;
  double t7290;
  double t7293;
  double t4285;
  double t7320;
  double t7321;
  double t7324;
  double t7337;
  double t7340;
  double t7331;
  double t7332;
  double t7389;
  double t7397;
  double t7416;
  double t7249;
  double t7255;
  double t7371;
  double t7380;
  double t7417;
  double t7418;
  double t7421;
  double t7299;
  double t4290;
  double t4595;
  double t7479;
  double t7480;
  double t7483;
  double t7355;
  double t7363;
  t236 = Sin(var1[7]);
  t295 = Cos(var1[8]);
  t876 = Sin(var1[8]);
  t1018 = Cos(var1[9]);
  t1099 = -1.*t1018;
  t1101 = 1. + t1099;
  t1170 = Sin(var1[9]);
  t1220 = Cos(var1[7]);
  t1456 = Cos(var1[10]);
  t1577 = -1.*t1456;
  t1619 = 1. + t1577;
  t1701 = Sin(var1[10]);
  t1390 = -1.*t1018*t236*t876;
  t1419 = -1.*t1220*t1170;
  t1426 = t1390 + t1419;
  t1774 = -1.*t1220*t1018;
  t1786 = t236*t876*t1170;
  t1824 = t1774 + t1786;
  t1960 = Cos(var1[11]);
  t1991 = -1.*t1960;
  t1995 = 1. + t1991;
  t2020 = Sin(var1[11]);
  t1902 = t1456*t1426;
  t1909 = t1824*t1701;
  t1921 = t1902 + t1909;
  t2197 = t1456*t1824;
  t2219 = -1.*t1426*t1701;
  t2229 = t2197 + t2219;
  t2449 = Cos(var1[12]);
  t2464 = -1.*t2449;
  t2476 = 1. + t2464;
  t2494 = Sin(var1[12]);
  t2371 = t1960*t1921;
  t2372 = t2229*t2020;
  t2428 = t2371 + t2372;
  t2633 = t1960*t2229;
  t2701 = -1.*t1921*t2020;
  t2718 = t2633 + t2701;
  t2821 = Cos(var1[13]);
  t2883 = -1.*t2821;
  t2895 = 1. + t2883;
  t2949 = Sin(var1[13]);
  t2780 = t2449*t2428;
  t2785 = t2718*t2494;
  t2807 = t2780 + t2785;
  t3016 = t2449*t2718;
  t3036 = -1.*t2428*t2494;
  t3045 = t3016 + t3036;
  t507 = -1.*t295;
  t594 = 1. + t507;
  t757 = -0.135*t594;
  t950 = 0.049*t876;
  t963 = 0. + t757 + t950;
  t1156 = -0.049*t1101;
  t1200 = -0.09*t1170;
  t1207 = 0. + t1156 + t1200;
  t1258 = -0.09*t1101;
  t1266 = 0.049*t1170;
  t1307 = 0. + t1258 + t1266;
  t1659 = -0.049*t1619;
  t1706 = -0.21*t1701;
  t1716 = 0. + t1659 + t1706;
  t1838 = -0.21*t1619;
  t1850 = 0.049*t1701;
  t1859 = 0. + t1838 + t1850;
  t3397 = t1220*t1018*t876;
  t3426 = -1.*t236*t1170;
  t3471 = t3397 + t3426;
  t3615 = -1.*t1018*t236;
  t3626 = -1.*t1220*t876*t1170;
  t3655 = t3615 + t3626;
  t2019 = -0.0016*t1995;
  t2050 = -0.2707*t2020;
  t2134 = 0. + t2019 + t2050;
  t2263 = -0.2707*t1995;
  t2285 = 0.0016*t2020;
  t2307 = 0. + t2263 + t2285;
  t3689 = t1456*t3471;
  t3714 = t3655*t1701;
  t3733 = t3689 + t3714;
  t3756 = t1456*t3655;
  t3759 = -1.*t3471*t1701;
  t3766 = t3756 + t3759;
  t2492 = 0.0184*t2476;
  t2514 = -0.7055*t2494;
  t2569 = 0. + t2492 + t2514;
  t2730 = -0.7055*t2476;
  t2745 = -0.0184*t2494;
  t2757 = 0. + t2730 + t2745;
  t3839 = t1960*t3733;
  t3863 = t3766*t2020;
  t3868 = t3839 + t3863;
  t3891 = t1960*t3766;
  t3892 = -1.*t3733*t2020;
  t3905 = t3891 + t3892;
  t2918 = -0.0216*t2895;
  t2951 = -1.1135*t2949;
  t2991 = 0. + t2918 + t2951;
  t3070 = -1.1135*t2895;
  t3090 = 0.0216*t2949;
  t3123 = 0. + t3070 + t3090;
  t3948 = t2449*t3868;
  t3961 = t3905*t2494;
  t3965 = t3948 + t3961;
  t3968 = t2449*t3905;
  t3971 = -1.*t3868*t2494;
  t4005 = t3968 + t3971;
  t5156 = -1.*t1018*t1456*t876;
  t5194 = t876*t1170*t1701;
  t5389 = t5156 + t5194;
  t5463 = t1456*t876*t1170;
  t5488 = t1018*t876*t1701;
  t5542 = t5463 + t5488;
  t5571 = t1960*t5389;
  t5581 = t5542*t2020;
  t5615 = t5571 + t5581;
  t5671 = t1960*t5542;
  t5693 = -1.*t5389*t2020;
  t5710 = t5671 + t5693;
  t5728 = t2449*t5615;
  t5730 = t5710*t2494;
  t5799 = t5728 + t5730;
  t5830 = t2449*t5710;
  t5857 = -1.*t5615*t2494;
  t5870 = t5830 + t5857;
  t5955 = t1220*t295*t1018*t1456;
  t5959 = -1.*t1220*t295*t1170*t1701;
  t5980 = t5955 + t5959;
  t5985 = -1.*t1220*t295*t1456*t1170;
  t5990 = -1.*t1220*t295*t1018*t1701;
  t6015 = t5985 + t5990;
  t6035 = t1960*t5980;
  t6041 = t6015*t2020;
  t6062 = t6035 + t6041;
  t6087 = t1960*t6015;
  t6090 = -1.*t5980*t2020;
  t6093 = t6087 + t6090;
  t6105 = t2449*t6062;
  t6115 = t6093*t2494;
  t6119 = t6105 + t6115;
  t6124 = t2449*t6093;
  t6128 = -1.*t6062*t2494;
  t6131 = t6124 + t6128;
  t5920 = 0.049*t295;
  t5936 = -0.135*t876;
  t5937 = t5920 + t5936;
  t6237 = t295*t1018*t1456*t236;
  t6239 = -1.*t295*t236*t1170*t1701;
  t6243 = t6237 + t6239;
  t6259 = -1.*t295*t1456*t236*t1170;
  t6266 = -1.*t295*t1018*t236*t1701;
  t6268 = t6259 + t6266;
  t6274 = t1960*t6243;
  t6277 = t6268*t2020;
  t6294 = t6274 + t6277;
  t6306 = t1960*t6268;
  t6309 = -1.*t6243*t2020;
  t6312 = t6306 + t6309;
  t6326 = t2449*t6294;
  t6332 = t6312*t2494;
  t6333 = t6326 + t6332;
  t6343 = t2449*t6312;
  t6346 = -1.*t6294*t2494;
  t6352 = t6343 + t6346;
  t6403 = -1.*t295*t1456*t1170;
  t6405 = -1.*t295*t1018*t1701;
  t6417 = t6403 + t6405;
  t6422 = -1.*t295*t1018*t1456;
  t6423 = t295*t1170*t1701;
  t6425 = t6422 + t6423;
  t6431 = t1960*t6417;
  t6434 = t6425*t2020;
  t6436 = t6431 + t6434;
  t6447 = t1960*t6425;
  t6448 = -1.*t6417*t2020;
  t6450 = t6447 + t6448;
  t6464 = t2449*t6450;
  t6466 = -1.*t6436*t2494;
  t6467 = t6464 + t6466;
  t6453 = t2449*t6436;
  t6455 = t6450*t2494;
  t6456 = t6453 + t6455;
  t6384 = -0.09*t1018;
  t6386 = -0.049*t1170;
  t6392 = t6384 + t6386;
  t6507 = -1.*t1220*t1018*t876;
  t6508 = t236*t1170;
  t6509 = t6507 + t6508;
  t6515 = t6509*t1701;
  t6517 = t3756 + t6515;
  t6522 = t1456*t6509;
  t6523 = -1.*t3655*t1701;
  t6524 = t6522 + t6523;
  t6526 = t1960*t6517;
  t6527 = t6524*t2020;
  t6528 = t6526 + t6527;
  t6537 = t1960*t6524;
  t6540 = -1.*t6517*t2020;
  t6544 = t6537 + t6540;
  t6557 = t2449*t6544;
  t6559 = -1.*t6528*t2494;
  t6563 = t6557 + t6559;
  t6550 = t2449*t6528;
  t6552 = t6544*t2494;
  t6554 = t6550 + t6552;
  t6497 = 0.049*t1018;
  t6499 = t6497 + t1200;
  t6590 = t1220*t1018;
  t6594 = -1.*t236*t876*t1170;
  t6595 = t6590 + t6594;
  t6600 = t1456*t6595;
  t6601 = t1426*t1701;
  t6602 = t6600 + t6601;
  t6607 = -1.*t6595*t1701;
  t6608 = t1902 + t6607;
  t6613 = t1960*t6602;
  t6614 = t6608*t2020;
  t6616 = t6613 + t6614;
  t6622 = t1960*t6608;
  t6623 = -1.*t6602*t2020;
  t6625 = t6622 + t6623;
  t6647 = t2449*t6625;
  t6649 = -1.*t6616*t2494;
  t6650 = t6647 + t6649;
  t6634 = t2449*t6616;
  t6637 = t6625*t2494;
  t6639 = t6634 + t6637;
  t6420 = t6417*t2134;
  t6430 = t6425*t2307;
  t6446 = t6436*t2569;
  t6452 = t6450*t2757;
  t6461 = t6456*t2991;
  t6470 = t6467*t3123;
  t6472 = t2821*t6467;
  t6473 = -1.*t6456*t2949;
  t6474 = t6472 + t6473;
  t6477 = -1.1312*t6474;
  t6480 = t2821*t6456;
  t6481 = t6467*t2949;
  t6483 = t6480 + t6481;
  t6485 = 0.0306*t6483;
  t6674 = 0.049*t1456;
  t6676 = t6674 + t1706;
  t6679 = -0.21*t1456;
  t6680 = -0.049*t1701;
  t6690 = t6679 + t6680;
  t6709 = -1.*t1456*t3471;
  t6710 = t6709 + t6523;
  t6716 = t6710*t2020;
  t6717 = t3891 + t6716;
  t6721 = t1960*t6710;
  t6722 = -1.*t3766*t2020;
  t6725 = t6721 + t6722;
  t6739 = t2449*t6725;
  t6743 = -1.*t6717*t2494;
  t6748 = t6739 + t6743;
  t6729 = t2449*t6717;
  t6730 = t6725*t2494;
  t6732 = t6729 + t6730;
  t6783 = t1018*t236*t876;
  t6788 = t1220*t1170;
  t6790 = t6783 + t6788;
  t6794 = -1.*t6790*t1701;
  t6796 = t6600 + t6794;
  t6799 = -1.*t1456*t6790;
  t6801 = t6799 + t6607;
  t6808 = t1960*t6796;
  t6810 = t6801*t2020;
  t6812 = t6808 + t6810;
  t6818 = t1960*t6801;
  t6819 = -1.*t6796*t2020;
  t6820 = t6818 + t6819;
  t6838 = t2449*t6820;
  t6841 = -1.*t6812*t2494;
  t6848 = t6838 + t6841;
  t6828 = t2449*t6812;
  t6830 = t6820*t2494;
  t6832 = t6828 + t6830;
  t6881 = t295*t1018*t1456;
  t6885 = -1.*t295*t1170*t1701;
  t6894 = t6881 + t6885;
  t6913 = -1.*t6894*t2020;
  t6922 = t6431 + t6913;
  t6935 = -1.*t1960*t6894;
  t6939 = t6935 + t6448;
  t6961 = t2449*t6939;
  t6966 = -1.*t6922*t2494;
  t6967 = t6961 + t6966;
  t6946 = t2449*t6922;
  t6949 = t6939*t2494;
  t6951 = t6946 + t6949;
  t6866 = 0.0016*t1960;
  t6867 = t6866 + t2050;
  t6896 = -0.2707*t1960;
  t6901 = -0.0016*t2020;
  t6905 = t6896 + t6901;
  t7008 = -1.*t1960*t3733;
  t7014 = t7008 + t6722;
  t7037 = t2449*t7014;
  t7038 = -1.*t3905*t2494;
  t7040 = t7037 + t7038;
  t7029 = t7014*t2494;
  t7031 = t3968 + t7029;
  t7080 = t1456*t6790;
  t7086 = t6595*t1701;
  t7088 = t7080 + t7086;
  t7096 = -1.*t7088*t2020;
  t7100 = t6808 + t7096;
  t7105 = -1.*t1960*t7088;
  t7108 = t7105 + t6819;
  t7136 = t2449*t7108;
  t7144 = -1.*t7100*t2494;
  t7147 = t7136 + t7144;
  t7119 = t2449*t7100;
  t7121 = t7108*t2494;
  t7123 = t7119 + t7121;
  t7198 = t1960*t6894;
  t7200 = t6417*t2020;
  t7205 = t7198 + t7200;
  t7231 = -1.*t2449*t7205;
  t7232 = t7231 + t6966;
  t7219 = -1.*t7205*t2494;
  t7222 = t6946 + t7219;
  t7185 = -0.0184*t2449;
  t7186 = t7185 + t2514;
  t7206 = -0.7055*t2449;
  t7208 = 0.0184*t2494;
  t7209 = t7206 + t7208;
  t7290 = -1.*t2449*t3868;
  t7293 = t7290 + t7038;
  t4285 = t2821*t4005;
  t7320 = t1960*t7088;
  t7321 = t6796*t2020;
  t7324 = t7320 + t7321;
  t7337 = -1.*t2449*t7324;
  t7340 = t7337 + t7144;
  t7331 = -1.*t7324*t2494;
  t7332 = t7119 + t7331;
  t7389 = t2449*t7205;
  t7397 = t6922*t2494;
  t7416 = t7389 + t7397;
  t7249 = -1.*t7222*t2949;
  t7255 = t2821*t7222;
  t7371 = 0.0216*t2821;
  t7380 = t7371 + t2951;
  t7417 = -1.1135*t2821;
  t7418 = -0.0216*t2949;
  t7421 = t7417 + t7418;
  t7299 = -1.*t4005*t2949;
  t4290 = -1.*t3965*t2949;
  t4595 = t4285 + t4290;
  t7479 = t2449*t7324;
  t7480 = t7100*t2494;
  t7483 = t7479 + t7480;
  t7355 = -1.*t7332*t2949;
  t7363 = t2821*t7332;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=-1.*t1220*t1307 + t1426*t1716 + t1824*t1859 + t1921*t2134 + t2229*t2307 - 0.135*t236 + t2428*t2569 + t2718*t2757 + 0.1305*t236*t295 + t2807*t2991 - 1.1312*(-1.*t2807*t2949 + t2821*t3045) + 0.0306*(t2807*t2821 + t2949*t3045) + t3045*t3123 - 1.*t1207*t236*t876 - 1.*t236*t963;
  p_output1[23]=0.135*t1220 - 1.*t1307*t236 - 0.1305*t1220*t295 + t1716*t3471 + t1859*t3655 + t2134*t3733 + t2307*t3766 + t2569*t3868 + t2757*t3905 + t2991*t3965 + t3123*t4005 + 0.0306*(t2821*t3965 + t2949*t4005) - 1.1312*t4595 + t1207*t1220*t876 + t1220*t963;
  p_output1[24]=-0.004500000000000004*t295 + t2134*t5389 + t2307*t5542 + t2569*t5615 + t2757*t5710 + t2991*t5799 + t3123*t5870 - 1.1312*(-1.*t2949*t5799 + t2821*t5870) + 0.0306*(t2821*t5799 + t2949*t5870) - 0.049*t876 - 1.*t1207*t876 - 1.*t1018*t1716*t876 + t1170*t1859*t876;
  p_output1[25]=t1207*t1220*t295 + t1018*t1220*t1716*t295 - 1.*t1170*t1220*t1859*t295 + t1220*t5937 + t2134*t5980 + t2307*t6015 + t2569*t6062 + t2757*t6093 + t2991*t6119 + t3123*t6131 - 1.1312*(-1.*t2949*t6119 + t2821*t6131) + 0.0306*(t2821*t6119 + t2949*t6131) + 0.1305*t1220*t876;
  p_output1[26]=t1207*t236*t295 + t1018*t1716*t236*t295 - 1.*t1170*t1859*t236*t295 + t236*t5937 + t2134*t6243 + t2307*t6268 + t2569*t6294 + t2757*t6312 + t2991*t6333 + t3123*t6352 - 1.1312*(-1.*t2949*t6333 + t2821*t6352) + 0.0306*(t2821*t6333 + t2949*t6352) + 0.1305*t236*t876;
  p_output1[27]=-1.*t1170*t1716*t295 - 1.*t1018*t1859*t295 + t295*t6392 + t6420 + t6430 + t6446 + t6452 + t6461 + t6470 + t6477 + t6485;
  p_output1[28]=t1716*t3655 - 1.*t236*t6499 + t1859*t6509 + t2134*t6517 + t2307*t6524 + t2569*t6528 + t2757*t6544 + t2991*t6554 + t3123*t6563 - 1.1312*(-1.*t2949*t6554 + t2821*t6563) + 0.0306*(t2821*t6554 + t2949*t6563) + t1220*t6392*t876;
  p_output1[29]=t1426*t1859 + t1220*t6499 + t1716*t6595 + t2134*t6602 + t2307*t6608 + t2569*t6616 + t2757*t6625 + t2991*t6639 + t3123*t6650 - 1.1312*(-1.*t2949*t6639 + t2821*t6650) + 0.0306*(t2821*t6639 + t2949*t6650) + t236*t6392*t876;
  p_output1[30]=t6420 + t6430 + t6446 + t6452 + t6461 + t6470 + t6477 + t6485 - 1.*t1170*t295*t6676 + t1018*t295*t6690;
  p_output1[31]=t2134*t3766 + t3655*t6676 + t3471*t6690 + t2307*t6710 + t2569*t6717 + t2757*t6725 + t2991*t6732 + t3123*t6748 - 1.1312*(-1.*t2949*t6732 + t2821*t6748) + 0.0306*(t2821*t6732 + t2949*t6748);
  p_output1[32]=t6595*t6676 + t6690*t6790 + t2134*t6796 + t2307*t6801 + t2569*t6812 + t2757*t6820 + t2991*t6832 + t3123*t6848 - 1.1312*(-1.*t2949*t6832 + t2821*t6848) + 0.0306*(t2821*t6832 + t2949*t6848);
  p_output1[33]=t6417*t6867 + t6894*t6905 + t2569*t6922 + t2757*t6939 + t2991*t6951 + t3123*t6967 - 1.1312*(-1.*t2949*t6951 + t2821*t6967) + 0.0306*(t2821*t6951 + t2949*t6967);
  p_output1[34]=t2569*t3905 + t3766*t6867 + t3733*t6905 + t2757*t7014 + t2991*t7031 + t3123*t7040 - 1.1312*(-1.*t2949*t7031 + t2821*t7040) + 0.0306*(t2821*t7031 + t2949*t7040);
  p_output1[35]=t6796*t6867 + t6905*t7088 + t2569*t7100 + t2757*t7108 + t2991*t7123 + t3123*t7147 - 1.1312*(-1.*t2949*t7123 + t2821*t7147) + 0.0306*(t2821*t7123 + t2949*t7147);
  p_output1[36]=t6922*t7186 + t7205*t7209 + t2991*t7222 + t3123*t7232 - 1.1312*(t2821*t7232 + t7249) + 0.0306*(t2949*t7232 + t7255);
  p_output1[37]=t2991*t4005 + t3905*t7186 + t3868*t7209 + t3123*t7293 + 0.0306*(t4285 + t2949*t7293) - 1.1312*(t2821*t7293 + t7299);
  p_output1[38]=t7100*t7186 + t7209*t7324 + t2991*t7332 + t3123*t7340 - 1.1312*(t2821*t7340 + t7355) + 0.0306*(t2949*t7340 + t7363);
  p_output1[39]=t7222*t7380 - 1.1312*(t7249 - 1.*t2821*t7416) + 0.0306*(t7255 - 1.*t2949*t7416) + t7416*t7421;
  p_output1[40]=0.0306*t4595 - 1.1312*(-1.*t2821*t3965 + t7299) + t4005*t7380 + t3965*t7421;
  p_output1[41]=t7332*t7380 + t7421*t7483 - 1.1312*(t7355 - 1.*t2821*t7483) + 0.0306*(t7363 - 1.*t2949*t7483);
}



#ifdef MATLAB_MEX_FILE

#include "mex.h"
/*
 * Main function
 */
void mexFunction( int nlhs, mxArray *plhs[],
                  int nrhs, const mxArray *prhs[] )
{
  size_t mrows, ncols;

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 14 && ncols == 1) && 
      !(mrows == 1 && ncols == 14))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 14, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_VectorNav_to_RightToeBottom_mex.hh"

namespace SymExpression
{

void J_VectorNav_to_RightToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
