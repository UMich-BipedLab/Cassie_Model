/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:17:50 GMT-05:00
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
  double t582;
  double t303;
  double t423;
  double t431;
  double t615;
  double t301;
  double t737;
  double t740;
  double t746;
  double t517;
  double t648;
  double t656;
  double t996;
  double t297;
  double t1126;
  double t1127;
  double t1252;
  double t724;
  double t1071;
  double t1083;
  double t1328;
  double t294;
  double t1577;
  double t1592;
  double t1619;
  double t1098;
  double t1329;
  double t1466;
  double t1641;
  double t8;
  double t1839;
  double t1887;
  double t1892;
  double t1514;
  double t1642;
  double t1769;
  double t1943;
  double t2438;
  double t2637;
  double t2640;
  double t2712;
  double t2453;
  double t2469;
  double t2577;
  double t2905;
  double t2910;
  double t2921;
  double t2634;
  double t2713;
  double t2775;
  double t3115;
  double t3215;
  double t3216;
  double t2785;
  double t3003;
  double t3055;
  double t3986;
  double t4078;
  double t4151;
  double t3706;
  double t3794;
  double t3848;
  double t4495;
  double t4608;
  double t4616;
  double t3888;
  double t4301;
  double t4438;
  double t4727;
  double t4750;
  double t4776;
  double t4476;
  double t4622;
  double t4639;
  double t4908;
  double t4949;
  double t4962;
  double t4697;
  double t4792;
  double t4850;
  double t1807;
  double t1954;
  double t2190;
  double t2257;
  double t2297;
  double t2328;
  double t3108;
  double t3252;
  double t3309;
  double t3372;
  double t3398;
  double t3463;
  double t4873;
  double t4970;
  double t4987;
  double t5019;
  double t5028;
  double t5029;
  double t5429;
  double t5656;
  double t5754;
  double t5002;
  double t5043;
  double t5052;
  double t3337;
  double t3505;
  double t3552;
  double t5876;
  double t5878;
  double t5881;
  double t2232;
  double t2372;
  double t2400;
  double t6761;
  double t6764;
  double t7005;
  double t7025;
  double t7673;
  double t7733;
  double t8343;
  double t8386;
  double t8476;
  double t8477;
  double t6524;
  double t6582;
  double t6823;
  double t6825;
  double t6846;
  double t7085;
  double t7116;
  double t7156;
  double t7573;
  double t7598;
  double t7606;
  double t7763;
  double t7789;
  double t7849;
  double t7960;
  double t8306;
  double t8320;
  double t8393;
  double t8415;
  double t8431;
  double t8465;
  double t8469;
  double t8470;
  double t8480;
  double t8489;
  double t8492;
  double t8500;
  double t8502;
  double t8505;
  double t5256;
  double t5327;
  double t5418;
  double t6321;
  double t6367;
  double t6465;
  double t6477;
  double t6586;
  double t6642;
  double t6667;
  double t6685;
  double t6858;
  double t6861;
  double t6904;
  double t6969;
  double t6990;
  double t7390;
  double t7666;
  double t7932;
  double t8338;
  double t8441;
  double t8475;
  double t8493;
  double t8506;
  double t8509;
  double t8520;
  double t8542;
  double t8564;
  double t8578;
  double t8579;
  double t8580;
  double t8584;
  double t8597;
  double t8601;
  double t8610;
  double t8611;
  double t8612;
  double t8613;
  double t8614;
  double t8621;
  double t8625;
  double t6028;
  double t6041;
  double t6096;
  double t3596;
  double t5057;
  double t5070;
  double t5133;
  double t5771;
  double t5899;
  double t5904;
  double t5906;
  double t6097;
  double t6104;
  double t6150;
  double t8709;
  double t8724;
  double t8730;
  double t8731;
  double t8734;
  double t8736;
  double t8754;
  double t8774;
  double t8777;
  double t8778;
  double t8784;
  double t8789;
  double t8791;
  double t8794;
  double t8808;
  double t8809;
  double t8810;
  double t8814;
  double t8815;
  double t8816;
  double t8819;
  double t8822;
  double t8826;
  double t8827;
  double t8832;
  double t8833;
  double t8834;
  double t8839;
  double t8843;
  double t8844;
  double t8847;
  double t8851;
  double t8854;
  double t8856;
  double t8864;
  double t8865;
  double t8866;
  double t8887;
  double t8710;
  double t8711;
  double t8743;
  double t8750;
  double t8751;
  double t8752;
  double t8755;
  double t8757;
  double t8735;
  double t8737;
  double t8738;
  double t8902;
  double t8762;
  double t8763;
  double t8767;
  double t8779;
  double t8785;
  double t8787;
  double t8911;
  double t8912;
  double t8915;
  double t8917;
  double t8918;
  double t8919;
  double t8802;
  double t8803;
  double t8804;
  double t8817;
  double t8820;
  double t8821;
  double t8926;
  double t8928;
  double t8929;
  double t8931;
  double t8933;
  double t8934;
  double t8829;
  double t8830;
  double t8831;
  double t8846;
  double t8849;
  double t8850;
  double t8936;
  double t8937;
  double t8938;
  double t8941;
  double t8942;
  double t8943;
  double t8860;
  double t8862;
  double t8863;
  double t8946;
  double t8947;
  double t8950;
  double t8952;
  double t8953;
  double t8954;
  double t8893;
  double t8895;
  double t8898;
  double t8905;
  double t8906;
  double t8909;
  double t8978;
  double t8979;
  double t8980;
  double t8983;
  double t8984;
  double t8986;
  double t8988;
  double t8990;
  double t8991;
  double t8993;
  double t8994;
  double t8996;
  double t8998;
  double t8999;
  double t9000;
  double t9002;
  double t9003;
  double t9004;
  double t9006;
  double t9007;
  double t9008;
  double t9011;
  double t9012;
  double t9015;
  double t8647;
  double t8651;
  double t8653;
  double t8654;
  double t8656;
  double t8659;
  double t8661;
  double t8662;
  double t8665;
  double t8666;
  double t8670;
  double t8681;
  double t8692;
  double t8693;
  double t8694;
  double t8696;
  double t8546;
  double t8627;
  double t8628;
  double t8721;
  double t8740;
  double t8744;
  double t8759;
  double t8771;
  double t8801;
  double t8811;
  double t8828;
  double t8836;
  double t8858;
  double t8867;
  double t8868;
  double t8869;
  double t8870;
  double t8871;
  double t8874;
  double t8875;
  double t8876;
  double t8878;
  double t8879;
  double t8889;
  double t8890;
  double t8891;
  double t8892;
  double t8899;
  double t8900;
  double t8910;
  double t8916;
  double t8923;
  double t8930;
  double t8935;
  double t8939;
  double t8945;
  double t8951;
  double t8955;
  double t8956;
  double t8957;
  double t8958;
  double t8959;
  double t8960;
  double t8961;
  double t8962;
  double t8964;
  double t8965;
  double t8969;
  double t8972;
  double t8973;
  double t8975;
  double t8976;
  double t8982;
  double t8987;
  double t8992;
  double t8997;
  double t9001;
  double t9005;
  double t9009;
  double t9017;
  double t9018;
  double t9019;
  double t9020;
  double t9021;
  double t9022;
  double t9023;
  double t9025;
  double t9026;
  double t9027;
  double t9032;
  double t9033;
  double t9034;
  double t8641;
  double t8642;
  double t8643;
  t582 = Cos(var1[7]);
  t303 = Cos(var1[9]);
  t423 = Sin(var1[7]);
  t431 = Sin(var1[8]);
  t615 = Sin(var1[9]);
  t301 = Cos(var1[10]);
  t737 = t582*t303;
  t740 = -1.*t423*t431*t615;
  t746 = t737 + t740;
  t517 = t303*t423*t431;
  t648 = t582*t615;
  t656 = t517 + t648;
  t996 = Sin(var1[10]);
  t297 = Cos(var1[11]);
  t1126 = t301*t746;
  t1127 = -1.*t656*t996;
  t1252 = t1126 + t1127;
  t724 = t301*t656;
  t1071 = t746*t996;
  t1083 = t724 + t1071;
  t1328 = Sin(var1[11]);
  t294 = Cos(var1[12]);
  t1577 = t297*t1252;
  t1592 = -1.*t1083*t1328;
  t1619 = t1577 + t1592;
  t1098 = t297*t1083;
  t1329 = t1252*t1328;
  t1466 = t1098 + t1329;
  t1641 = Sin(var1[12]);
  t8 = Cos(var1[13]);
  t1839 = t294*t1619;
  t1887 = -1.*t1466*t1641;
  t1892 = t1839 + t1887;
  t1514 = t294*t1466;
  t1642 = t1619*t1641;
  t1769 = t1514 + t1642;
  t1943 = Sin(var1[13]);
  t2438 = Cos(var1[8]);
  t2637 = -1.*t2438*t301*t615;
  t2640 = -1.*t2438*t303*t996;
  t2712 = t2637 + t2640;
  t2453 = t2438*t303*t301;
  t2469 = -1.*t2438*t615*t996;
  t2577 = t2453 + t2469;
  t2905 = t297*t2712;
  t2910 = -1.*t2577*t1328;
  t2921 = t2905 + t2910;
  t2634 = t297*t2577;
  t2713 = t2712*t1328;
  t2775 = t2634 + t2713;
  t3115 = t294*t2921;
  t3215 = -1.*t2775*t1641;
  t3216 = t3115 + t3215;
  t2785 = t294*t2775;
  t3003 = t2921*t1641;
  t3055 = t2785 + t3003;
  t3986 = -1.*t303*t423;
  t4078 = -1.*t582*t431*t615;
  t4151 = t3986 + t4078;
  t3706 = t582*t303*t431;
  t3794 = -1.*t423*t615;
  t3848 = t3706 + t3794;
  t4495 = t301*t4151;
  t4608 = -1.*t3848*t996;
  t4616 = t4495 + t4608;
  t3888 = t301*t3848;
  t4301 = t4151*t996;
  t4438 = t3888 + t4301;
  t4727 = t297*t4616;
  t4750 = -1.*t4438*t1328;
  t4776 = t4727 + t4750;
  t4476 = t297*t4438;
  t4622 = t4616*t1328;
  t4639 = t4476 + t4622;
  t4908 = t294*t4776;
  t4949 = -1.*t4639*t1641;
  t4962 = t4908 + t4949;
  t4697 = t294*t4639;
  t4792 = t4776*t1641;
  t4850 = t4697 + t4792;
  t1807 = t8*t1769;
  t1954 = t1892*t1943;
  t2190 = t1807 + t1954;
  t2257 = t8*t1892;
  t2297 = -1.*t1769*t1943;
  t2328 = t2257 + t2297;
  t3108 = t8*t3055;
  t3252 = t3216*t1943;
  t3309 = t3108 + t3252;
  t3372 = t8*t3216;
  t3398 = -1.*t3055*t1943;
  t3463 = t3372 + t3398;
  t4873 = t8*t4850;
  t4970 = t4962*t1943;
  t4987 = t4873 + t4970;
  t5019 = t8*t4962;
  t5028 = -1.*t4850*t1943;
  t5029 = t5019 + t5028;
  t5429 = 0.642788*t3309;
  t5656 = 0.766044*t3463;
  t5754 = t5429 + t5656;
  t5002 = -0.766044*t4987;
  t5043 = 0.642788*t5029;
  t5052 = t5002 + t5043;
  t3337 = -0.766044*t3309;
  t3505 = 0.642788*t3463;
  t3552 = t3337 + t3505;
  t5876 = 0.642788*t4987;
  t5878 = 0.766044*t5029;
  t5881 = t5876 + t5878;
  t2232 = 0.642788*t2190;
  t2372 = 0.766044*t2328;
  t2400 = t2232 + t2372;
  t6761 = -1.*t303;
  t6764 = 1. + t6761;
  t7005 = -1.*t301;
  t7025 = 1. + t7005;
  t7673 = -1.*t297;
  t7733 = 1. + t7673;
  t8343 = -1.*t294;
  t8386 = 1. + t8343;
  t8476 = -1.*t8;
  t8477 = 1. + t8476;
  t6524 = -1.*t2438;
  t6582 = 1. + t6524;
  t6823 = -0.049*t6764;
  t6825 = -0.09*t615;
  t6846 = 0. + t6823 + t6825;
  t7085 = -0.049*t7025;
  t7116 = -0.21*t996;
  t7156 = 0. + t7085 + t7116;
  t7573 = -0.21*t7025;
  t7598 = 0.049*t996;
  t7606 = 0. + t7573 + t7598;
  t7763 = -0.0016*t7733;
  t7789 = -0.2707*t1328;
  t7849 = 0. + t7763 + t7789;
  t7960 = -0.2707*t7733;
  t8306 = 0.0016*t1328;
  t8320 = 0. + t7960 + t8306;
  t8393 = 0.0184*t8386;
  t8415 = -0.7055*t1641;
  t8431 = 0. + t8393 + t8415;
  t8465 = -0.7055*t8386;
  t8469 = -0.0184*t1641;
  t8470 = 0. + t8465 + t8469;
  t8480 = -0.0216*t8477;
  t8489 = -1.1135*t1943;
  t8492 = 0. + t8480 + t8489;
  t8500 = -1.1135*t8477;
  t8502 = 0.0216*t1943;
  t8505 = 0. + t8500 + t8502;
  t5256 = -0.766044*t2190;
  t5327 = 0.642788*t2328;
  t5418 = t5256 + t5327;
  t6321 = -1.*t582;
  t6367 = 1. + t6321;
  t6465 = -0.135*t6367;
  t6477 = -0.1305*t582*t2438;
  t6586 = -0.135*t6582;
  t6642 = 0.049*t431;
  t6667 = 0. + t6586 + t6642;
  t6685 = t582*t6667;
  t6858 = t582*t431*t6846;
  t6861 = -0.09*t6764;
  t6904 = 0.049*t615;
  t6969 = 0. + t6861 + t6904;
  t6990 = -1.*t423*t6969;
  t7390 = t3848*t7156;
  t7666 = t4151*t7606;
  t7932 = t4438*t7849;
  t8338 = t4616*t8320;
  t8441 = t4639*t8431;
  t8475 = t4776*t8470;
  t8493 = t4850*t8492;
  t8506 = t4962*t8505;
  t8509 = 0.0306*t4987;
  t8520 = -1.1312*t5029;
  t8542 = 0. + t6465 + t6477 + t6685 + t6858 + t6990 + t7390 + t7666 + t7932 + t8338 + t8441 + t8475 + t8493 + t8506 + t8509 + t8520;
  t8564 = -0.049*t6582;
  t8578 = -0.004500000000000004*t431;
  t8579 = t2438*t6846;
  t8580 = t2438*t303*t7156;
  t8584 = -1.*t2438*t615*t7606;
  t8597 = t2577*t7849;
  t8601 = t2712*t8320;
  t8610 = t2775*t8431;
  t8611 = t2921*t8470;
  t8612 = t3055*t8492;
  t8613 = t3216*t8505;
  t8614 = 0.0306*t3309;
  t8621 = -1.1312*t3463;
  t8625 = 0. + t8564 + t8578 + t8579 + t8580 + t8584 + t8597 + t8601 + t8610 + t8611 + t8612 + t8613 + t8614 + t8621;
  t6028 = t5754*t5052;
  t6041 = -1.*t3552*t5881;
  t6096 = t6028 + t6041;
  t3596 = t582*t2438*t3552;
  t5057 = t431*t5052;
  t5070 = t3596 + t5057;
  t5133 = -1.*t2400*t5070;
  t5771 = t582*t2438*t5754;
  t5899 = t431*t5881;
  t5904 = t5771 + t5899;
  t5906 = t5418*t5904;
  t6097 = -1.*t2438*t423*t6096;
  t6104 = 0. + t5133 + t5906 + t6097;
  t6150 = 1/t6104;
  t8709 = Cos(var1[1]);
  t8724 = Cos(var1[2]);
  t8730 = Cos(var1[3]);
  t8731 = -1.*t8730;
  t8734 = 1. + t8731;
  t8736 = Sin(var1[3]);
  t8754 = Sin(var1[2]);
  t8774 = Cos(var1[4]);
  t8777 = -1.*t8774;
  t8778 = 1. + t8777;
  t8784 = Sin(var1[4]);
  t8789 = -1.*t8709*t8724*t8736;
  t8791 = -1.*t8730*t8709*t8754;
  t8794 = t8789 + t8791;
  t8808 = t8730*t8709*t8724;
  t8809 = -1.*t8709*t8736*t8754;
  t8810 = t8808 + t8809;
  t8814 = Cos(var1[5]);
  t8815 = -1.*t8814;
  t8816 = 1. + t8815;
  t8819 = Sin(var1[5]);
  t8822 = t8784*t8794;
  t8826 = t8774*t8810;
  t8827 = t8822 + t8826;
  t8832 = t8774*t8794;
  t8833 = -1.*t8784*t8810;
  t8834 = t8832 + t8833;
  t8839 = Cos(var1[6]);
  t8843 = -1.*t8839;
  t8844 = 1. + t8843;
  t8847 = Sin(var1[6]);
  t8851 = -1.*t8819*t8827;
  t8854 = t8814*t8834;
  t8856 = t8851 + t8854;
  t8864 = t8814*t8827;
  t8865 = t8819*t8834;
  t8866 = t8864 + t8865;
  t8887 = Cos(var1[0]);
  t8710 = -1.*t8709;
  t8711 = 1. + t8710;
  t8743 = Sin(var1[1]);
  t8750 = -1.*t8724;
  t8751 = 1. + t8750;
  t8752 = -0.049*t8751;
  t8755 = -0.09*t8754;
  t8757 = 0. + t8752 + t8755;
  t8735 = -0.049*t8734;
  t8737 = -0.21*t8736;
  t8738 = 0. + t8735 + t8737;
  t8902 = Sin(var1[0]);
  t8762 = -0.21*t8734;
  t8763 = 0.049*t8736;
  t8767 = 0. + t8762 + t8763;
  t8779 = -0.2707*t8778;
  t8785 = 0.0016*t8784;
  t8787 = 0. + t8779 + t8785;
  t8911 = t8887*t8724*t8743;
  t8912 = -1.*t8902*t8754;
  t8915 = t8911 + t8912;
  t8917 = -1.*t8724*t8902;
  t8918 = -1.*t8887*t8743*t8754;
  t8919 = t8917 + t8918;
  t8802 = -0.0016*t8778;
  t8803 = -0.2707*t8784;
  t8804 = 0. + t8802 + t8803;
  t8817 = 0.0184*t8816;
  t8820 = -0.7055*t8819;
  t8821 = 0. + t8817 + t8820;
  t8926 = -1.*t8736*t8915;
  t8928 = t8730*t8919;
  t8929 = t8926 + t8928;
  t8931 = t8730*t8915;
  t8933 = t8736*t8919;
  t8934 = t8931 + t8933;
  t8829 = -0.7055*t8816;
  t8830 = -0.0184*t8819;
  t8831 = 0. + t8829 + t8830;
  t8846 = -1.1135*t8844;
  t8849 = 0.0216*t8847;
  t8850 = 0. + t8846 + t8849;
  t8936 = t8784*t8929;
  t8937 = t8774*t8934;
  t8938 = t8936 + t8937;
  t8941 = t8774*t8929;
  t8942 = -1.*t8784*t8934;
  t8943 = t8941 + t8942;
  t8860 = -0.0216*t8844;
  t8862 = -1.1135*t8847;
  t8863 = 0. + t8860 + t8862;
  t8946 = -1.*t8819*t8938;
  t8947 = t8814*t8943;
  t8950 = t8946 + t8947;
  t8952 = t8814*t8938;
  t8953 = t8819*t8943;
  t8954 = t8952 + t8953;
  t8893 = 0.135*t8711;
  t8895 = 0.049*t8743;
  t8898 = 0. + t8893 + t8895;
  t8905 = -0.09*t8751;
  t8906 = 0.049*t8754;
  t8909 = 0. + t8905 + t8906;
  t8978 = t8724*t8902*t8743;
  t8979 = t8887*t8754;
  t8980 = t8978 + t8979;
  t8983 = t8887*t8724;
  t8984 = -1.*t8902*t8743*t8754;
  t8986 = t8983 + t8984;
  t8988 = -1.*t8736*t8980;
  t8990 = t8730*t8986;
  t8991 = t8988 + t8990;
  t8993 = t8730*t8980;
  t8994 = t8736*t8986;
  t8996 = t8993 + t8994;
  t8998 = t8784*t8991;
  t8999 = t8774*t8996;
  t9000 = t8998 + t8999;
  t9002 = t8774*t8991;
  t9003 = -1.*t8784*t8996;
  t9004 = t9002 + t9003;
  t9006 = -1.*t8819*t9000;
  t9007 = t8814*t9004;
  t9008 = t9006 + t9007;
  t9011 = t8814*t9000;
  t9012 = t8819*t9004;
  t9015 = t9011 + t9012;
  t8647 = 0.135*t423;
  t8651 = -0.1305*t2438*t423;
  t8653 = t423*t6667;
  t8654 = t423*t431*t6846;
  t8656 = t582*t6969;
  t8659 = t656*t7156;
  t8661 = t746*t7606;
  t8662 = t1083*t7849;
  t8665 = t1252*t8320;
  t8666 = t1466*t8431;
  t8670 = t1619*t8470;
  t8681 = t1769*t8492;
  t8692 = t1892*t8505;
  t8693 = 0.0306*t2190;
  t8694 = -1.1312*t2328;
  t8696 = 0. + t8647 + t8651 + t8653 + t8654 + t8656 + t8659 + t8661 + t8662 + t8665 + t8666 + t8670 + t8681 + t8692 + t8693 + t8694;
  t8546 = t3552*t8542;
  t8627 = -1.*t8625*t5052;
  t8628 = t8546 + t8627;
  t8721 = -0.049*t8711;
  t8740 = t8709*t8724*t8738;
  t8744 = 0.004500000000000004*t8743;
  t8759 = t8709*t8757;
  t8771 = -1.*t8709*t8767*t8754;
  t8801 = t8787*t8794;
  t8811 = t8804*t8810;
  t8828 = t8821*t8827;
  t8836 = t8831*t8834;
  t8858 = t8850*t8856;
  t8867 = t8863*t8866;
  t8868 = t8847*t8856;
  t8869 = t8839*t8866;
  t8870 = t8868 + t8869;
  t8871 = 0.0306*t8870;
  t8874 = t8839*t8856;
  t8875 = -1.*t8847*t8866;
  t8876 = t8874 + t8875;
  t8878 = -1.1312*t8876;
  t8879 = 0. + t8721 + t8740 + t8744 + t8759 + t8771 + t8801 + t8811 + t8828 + t8836 + t8858 + t8867 + t8871 + t8878;
  t8889 = -1.*t8887;
  t8890 = 1. + t8889;
  t8891 = 0.135*t8890;
  t8892 = 0.1305*t8887*t8709;
  t8899 = t8887*t8898;
  t8900 = t8887*t8743*t8757;
  t8910 = -1.*t8902*t8909;
  t8916 = t8738*t8915;
  t8923 = t8767*t8919;
  t8930 = t8787*t8929;
  t8935 = t8804*t8934;
  t8939 = t8821*t8938;
  t8945 = t8831*t8943;
  t8951 = t8850*t8950;
  t8955 = t8863*t8954;
  t8956 = t8847*t8950;
  t8957 = t8839*t8954;
  t8958 = t8956 + t8957;
  t8959 = 0.0306*t8958;
  t8960 = t8839*t8950;
  t8961 = -1.*t8847*t8954;
  t8962 = t8960 + t8961;
  t8964 = -1.1312*t8962;
  t8965 = 0. + t8891 + t8892 + t8899 + t8900 + t8910 + t8916 + t8923 + t8930 + t8935 + t8939 + t8945 + t8951 + t8955 + t8959 + t8964;
  t8969 = -0.135*t8902;
  t8972 = 0.1305*t8709*t8902;
  t8973 = t8902*t8898;
  t8975 = t8902*t8743*t8757;
  t8976 = t8887*t8909;
  t8982 = t8738*t8980;
  t8987 = t8767*t8986;
  t8992 = t8787*t8991;
  t8997 = t8804*t8996;
  t9001 = t8821*t9000;
  t9005 = t8831*t9004;
  t9009 = t8850*t9008;
  t9017 = t8863*t9015;
  t9018 = t8847*t9008;
  t9019 = t8839*t9015;
  t9020 = t9018 + t9019;
  t9021 = 0.0306*t9020;
  t9022 = t8839*t9008;
  t9023 = -1.*t8847*t9015;
  t9025 = t9022 + t9023;
  t9026 = -1.1312*t9025;
  t9027 = 0. + t8969 + t8972 + t8973 + t8975 + t8976 + t8982 + t8987 + t8992 + t8997 + t9001 + t9005 + t9009 + t9017 + t9021 + t9026;
  t9032 = t582*t2438*t8625;
  t9033 = t431*t8542;
  t9034 = t9032 + t9033;
  t8641 = t5754*t8542;
  t8642 = -1.*t8625*t5881;
  t8643 = t8641 + t8642;
  p_output1[0]=t6150*(-1.*t2400*t8628 + t5418*t8643 - 1.*t6096*t8696) + (0. - 1.*t2400*t5052 + t5418*t5881)*t6150*t8879 + (0. + t2400*t3552 - 1.*t5418*t5754)*t6150*t8965 + (0. + t6028 + t6041)*t6150*t9027;
  p_output1[1]=(0. - 1.*t2438*t423*t5052 + t2438*t5418*t582)*t6150*t8879 + (0. + t2438*t3552*t423 + t431*t5418)*t6150*t8965 + (0. - 1.*t431*t5052 - 1.*t2438*t3552*t582)*t6150*t9027 + t6150*(-1.*t2438*t423*t8628 + t5070*t8696 - 1.*t5418*t9034);
  p_output1[2]=(0. - 1.*t2400*t2438*t582 + t2438*t423*t5881)*t6150*t8879 + (0. - 1.*t2400*t431 - 1.*t2438*t423*t5754)*t6150*t8965 + (0. + t5771 + t5899)*t6150*t9027 + t6150*(t2438*t423*t8643 - 1.*t5904*t8696 + t2400*t9034);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "p_RightToeBottom_to_LeftToeBottom_mex.hh"

namespace SymExpression
{

void p_RightToeBottom_to_LeftToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
