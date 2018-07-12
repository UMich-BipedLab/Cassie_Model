/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:37:14 GMT-04:00
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
  double t59;
  double t618;
  double t1243;
  double t1287;
  double t1393;
  double t1412;
  double t1490;
  double t1621;
  double t1805;
  double t1878;
  double t1883;
  double t2014;
  double t1725;
  double t1730;
  double t1794;
  double t2345;
  double t2378;
  double t2385;
  double t2657;
  double t2681;
  double t2689;
  double t2734;
  double t2533;
  double t2620;
  double t2646;
  double t2892;
  double t2917;
  double t2969;
  double t3273;
  double t3297;
  double t3300;
  double t3324;
  double t3188;
  double t3197;
  double t3205;
  double t3470;
  double t3532;
  double t3592;
  double t3863;
  double t3872;
  double t3918;
  double t4035;
  double t3714;
  double t3776;
  double t3798;
  double t4148;
  double t4201;
  double t4217;
  double t4865;
  double t4979;
  double t4874;
  double t4883;
  double t4996;
  double t5122;
  double t4945;
  double t5035;
  double t5097;
  double t4715;
  double t5178;
  double t5195;
  double t5331;
  double t5530;
  double t5111;
  double t5367;
  double t5468;
  double t4705;
  double t5536;
  double t5550;
  double t5555;
  double t5969;
  double t5504;
  double t5569;
  double t5687;
  double t4676;
  double t6075;
  double t6088;
  double t6102;
  double t6435;
  double t6360;
  double t6380;
  double t6412;
  double t6443;
  double t6444;
  double t6496;
  double t6498;
  double t6508;
  double t6484;
  double t6536;
  double t6612;
  double t6658;
  double t6672;
  double t6696;
  double t6627;
  double t6731;
  double t6765;
  double t6814;
  double t6821;
  double t6971;
  double t6793;
  double t6990;
  double t7033;
  double t7115;
  double t7170;
  double t7190;
  double t5788;
  double t6125;
  double t6142;
  double t6228;
  double t6238;
  double t6288;
  double t7066;
  double t7255;
  double t7406;
  double t7445;
  double t7461;
  double t7490;
  double t7917;
  double t7954;
  double t7979;
  double t8054;
  double t8074;
  double t8100;
  double t8046;
  double t8133;
  double t8139;
  double t8151;
  double t8189;
  double t8193;
  double t8149;
  double t8214;
  double t8222;
  double t8247;
  double t8252;
  double t8253;
  double t8236;
  double t8255;
  double t8264;
  double t8282;
  double t8286;
  double t8314;
  double t7719;
  double t7731;
  double t7732;
  double t7408;
  double t7629;
  double t7671;
  double t8270;
  double t8317;
  double t8326;
  double t8345;
  double t8363;
  double t8364;
  double t6171;
  double t6342;
  double t6352;
  double t7734;
  double t7777;
  double t7794;
  double t7678;
  double t7841;
  double t816;
  double t853;
  double t1048;
  double t1257;
  double t1269;
  double t1487;
  double t1520;
  double t1600;
  double t1636;
  double t1648;
  double t1657;
  double t1949;
  double t2046;
  double t2090;
  double t2389;
  double t2409;
  double t2415;
  double t8545;
  double t8553;
  double t8580;
  double t8585;
  double t8586;
  double t8587;
  double t2691;
  double t2779;
  double t2814;
  double t3003;
  double t3013;
  double t3125;
  double t8596;
  double t8610;
  double t8617;
  double t8622;
  double t8631;
  double t8642;
  double t3314;
  double t3353;
  double t3406;
  double t3594;
  double t3630;
  double t3657;
  double t8651;
  double t8656;
  double t8658;
  double t8673;
  double t8675;
  double t8677;
  double t3952;
  double t4057;
  double t4063;
  double t4231;
  double t4279;
  double t4294;
  double t8681;
  double t8687;
  double t8688;
  double t8697;
  double t8700;
  double t8709;
  double t8442;
  double t8450;
  double t8461;
  double t8335;
  double t8386;
  double t8393;
  double t8413;
  double t8420;
  double t8423;
  double t8437;
  double t8463;
  double t8465;
  double t8471;
  double t8472;
  double t8476;
  double t8495;
  double t8498;
  double t8502;
  double t8765;
  double t8780;
  double t8786;
  double t8788;
  double t8789;
  double t8791;
  double t8805;
  double t8817;
  double t8819;
  double t8821;
  double t8822;
  double t8826;
  double t8835;
  double t8837;
  double t8838;
  double t8842;
  double t8843;
  double t8847;
  double t8896;
  double t8897;
  double t8918;
  double t8919;
  double t8938;
  double t8939;
  double t8951;
  double t8953;
  double t8967;
  double t8969;
  double t8885;
  double t8888;
  double t8925;
  double t8926;
  double t8929;
  double t8898;
  double t8899;
  double t8903;
  double t8931;
  double t8932;
  double t8935;
  double t8940;
  double t8941;
  double t8943;
  double t8945;
  double t8946;
  double t8948;
  double t8954;
  double t8955;
  double t8957;
  double t8960;
  double t8962;
  double t8963;
  double t8971;
  double t8973;
  double t8974;
  double t8977;
  double t8978;
  double t8979;
  double t8873;
  double t8878;
  double t8881;
  double t8884;
  double t8890;
  double t8892;
  double t8893;
  double t8895;
  double t8904;
  double t8909;
  double t8911;
  double t8915;
  double t8916;
  double t8930;
  double t8937;
  double t8944;
  double t8949;
  double t8959;
  double t8965;
  double t8976;
  double t8981;
  double t8982;
  double t8984;
  double t8985;
  double t8989;
  double t8990;
  double t8991;
  double t8992;
  double t8993;
  double t8994;
  double t8996;
  double t8997;
  double t8998;
  double t8999;
  double t9001;
  double t9002;
  double t9004;
  double t9005;
  double t425;
  double t670;
  double t1275;
  double t1610;
  double t1692;
  double t2138;
  double t2440;
  double t2834;
  double t3181;
  double t3463;
  double t3664;
  double t4126;
  double t4378;
  double t4398;
  double t4448;
  double t4465;
  double t4479;
  double t4489;
  double t4506;
  double t4550;
  double t4630;
  double t4654;
  double t8756;
  double t8757;
  double t8761;
  double t8762;
  double t8763;
  double t8787;
  double t8802;
  double t8820;
  double t8833;
  double t8839;
  double t8850;
  double t8851;
  double t8852;
  double t8853;
  double t8854;
  double t8855;
  double t8860;
  double t8861;
  double t8862;
  double t8865;
  double t8513;
  double t8516;
  double t8520;
  double t8527;
  double t8530;
  double t8540;
  double t8542;
  double t8583;
  double t8592;
  double t8619;
  double t8645;
  double t8663;
  double t8680;
  double t8695;
  double t8711;
  double t8712;
  double t8716;
  double t8721;
  double t8728;
  double t8731;
  double t8733;
  double t8735;
  double t8736;
  double t8737;
  double t9014;
  double t9015;
  double t9018;
  double t9019;
  double t9021;
  double t9023;
  double t9024;
  double t9025;
  double t9026;
  double t9027;
  double t9028;
  double t9032;
  double t9033;
  double t9034;
  double t9035;
  double t9036;
  double t8986;
  double t9006;
  double t9007;
  double t9061;
  double t9062;
  double t9063;
  double t9010;
  double t9011;
  double t9012;
  t59 = Sin(var1[7]);
  t618 = Cos(var1[8]);
  t1243 = Sin(var1[8]);
  t1287 = Cos(var1[9]);
  t1393 = -1.*t1287;
  t1412 = 1. + t1393;
  t1490 = Sin(var1[9]);
  t1621 = Cos(var1[7]);
  t1805 = Cos(var1[10]);
  t1878 = -1.*t1805;
  t1883 = 1. + t1878;
  t2014 = Sin(var1[10]);
  t1725 = t1287*t59*t1243;
  t1730 = t1621*t1490;
  t1794 = t1725 + t1730;
  t2345 = t1621*t1287;
  t2378 = -1.*t59*t1243*t1490;
  t2385 = t2345 + t2378;
  t2657 = Cos(var1[11]);
  t2681 = -1.*t2657;
  t2689 = 1. + t2681;
  t2734 = Sin(var1[11]);
  t2533 = t1805*t1794;
  t2620 = t2385*t2014;
  t2646 = t2533 + t2620;
  t2892 = t1805*t2385;
  t2917 = -1.*t1794*t2014;
  t2969 = t2892 + t2917;
  t3273 = Cos(var1[12]);
  t3297 = -1.*t3273;
  t3300 = 1. + t3297;
  t3324 = Sin(var1[12]);
  t3188 = t2657*t2646;
  t3197 = t2969*t2734;
  t3205 = t3188 + t3197;
  t3470 = t2657*t2969;
  t3532 = -1.*t2646*t2734;
  t3592 = t3470 + t3532;
  t3863 = Cos(var1[13]);
  t3872 = -1.*t3863;
  t3918 = 1. + t3872;
  t4035 = Sin(var1[13]);
  t3714 = t3273*t3205;
  t3776 = t3592*t3324;
  t3798 = t3714 + t3776;
  t4148 = t3273*t3592;
  t4201 = -1.*t3205*t3324;
  t4217 = t4148 + t4201;
  t4865 = Cos(var1[1]);
  t4979 = Cos(var1[3]);
  t4874 = Cos(var1[2]);
  t4883 = Sin(var1[3]);
  t4996 = Sin(var1[2]);
  t5122 = Cos(var1[4]);
  t4945 = -1.*t4865*t4874*t4883;
  t5035 = -1.*t4979*t4865*t4996;
  t5097 = t4945 + t5035;
  t4715 = Sin(var1[4]);
  t5178 = t4979*t4865*t4874;
  t5195 = -1.*t4865*t4883*t4996;
  t5331 = t5178 + t5195;
  t5530 = Cos(var1[5]);
  t5111 = t4715*t5097;
  t5367 = t5122*t5331;
  t5468 = t5111 + t5367;
  t4705 = Sin(var1[5]);
  t5536 = t5122*t5097;
  t5550 = -1.*t4715*t5331;
  t5555 = t5536 + t5550;
  t5969 = Cos(var1[6]);
  t5504 = -1.*t4705*t5468;
  t5569 = t5530*t5555;
  t5687 = t5504 + t5569;
  t4676 = Sin(var1[6]);
  t6075 = t5530*t5468;
  t6088 = t4705*t5555;
  t6102 = t6075 + t6088;
  t6435 = Sin(var1[0]);
  t6360 = Cos(var1[0]);
  t6380 = Sin(var1[1]);
  t6412 = t6360*t4874*t6380;
  t6443 = -1.*t6435*t4996;
  t6444 = t6412 + t6443;
  t6496 = -1.*t4874*t6435;
  t6498 = -1.*t6360*t6380*t4996;
  t6508 = t6496 + t6498;
  t6484 = -1.*t4883*t6444;
  t6536 = t4979*t6508;
  t6612 = t6484 + t6536;
  t6658 = t4979*t6444;
  t6672 = t4883*t6508;
  t6696 = t6658 + t6672;
  t6627 = t4715*t6612;
  t6731 = t5122*t6696;
  t6765 = t6627 + t6731;
  t6814 = t5122*t6612;
  t6821 = -1.*t4715*t6696;
  t6971 = t6814 + t6821;
  t6793 = -1.*t4705*t6765;
  t6990 = t5530*t6971;
  t7033 = t6793 + t6990;
  t7115 = t5530*t6765;
  t7170 = t4705*t6971;
  t7190 = t7115 + t7170;
  t5788 = t4676*t5687;
  t6125 = t5969*t6102;
  t6142 = t5788 + t6125;
  t6228 = t5969*t5687;
  t6238 = -1.*t4676*t6102;
  t6288 = t6228 + t6238;
  t7066 = t4676*t7033;
  t7255 = t5969*t7190;
  t7406 = t7066 + t7255;
  t7445 = t5969*t7033;
  t7461 = -1.*t4676*t7190;
  t7490 = t7445 + t7461;
  t7917 = t4874*t6435*t6380;
  t7954 = t6360*t4996;
  t7979 = t7917 + t7954;
  t8054 = t6360*t4874;
  t8074 = -1.*t6435*t6380*t4996;
  t8100 = t8054 + t8074;
  t8046 = -1.*t4883*t7979;
  t8133 = t4979*t8100;
  t8139 = t8046 + t8133;
  t8151 = t4979*t7979;
  t8189 = t4883*t8100;
  t8193 = t8151 + t8189;
  t8149 = t4715*t8139;
  t8214 = t5122*t8193;
  t8222 = t8149 + t8214;
  t8247 = t5122*t8139;
  t8252 = -1.*t4715*t8193;
  t8253 = t8247 + t8252;
  t8236 = -1.*t4705*t8222;
  t8255 = t5530*t8253;
  t8264 = t8236 + t8255;
  t8282 = t5530*t8222;
  t8286 = t4705*t8253;
  t8314 = t8282 + t8286;
  t7719 = -0.766044*t6142;
  t7731 = 0.642788*t6288;
  t7732 = t7719 + t7731;
  t7408 = -0.766044*t7406;
  t7629 = 0.642788*t7490;
  t7671 = t7408 + t7629;
  t8270 = t4676*t8264;
  t8317 = t5969*t8314;
  t8326 = t8270 + t8317;
  t8345 = t5969*t8264;
  t8363 = -1.*t4676*t8314;
  t8364 = t8345 + t8363;
  t6171 = 0.642788*t6142;
  t6342 = 0.766044*t6288;
  t6352 = t6171 + t6342;
  t7734 = 0.642788*t7406;
  t7777 = 0.766044*t7490;
  t7794 = t7734 + t7777;
  t7678 = t6352*t7671;
  t7841 = -1.*t7732*t7794;
  t816 = -1.*t618;
  t853 = 1. + t816;
  t1048 = -0.135*t853;
  t1257 = 0.049*t1243;
  t1269 = 0. + t1048 + t1257;
  t1487 = -0.049*t1412;
  t1520 = -0.09*t1490;
  t1600 = 0. + t1487 + t1520;
  t1636 = -0.09*t1412;
  t1648 = 0.049*t1490;
  t1657 = 0. + t1636 + t1648;
  t1949 = -0.049*t1883;
  t2046 = -0.21*t2014;
  t2090 = 0. + t1949 + t2046;
  t2389 = -0.21*t1883;
  t2409 = 0.049*t2014;
  t2415 = 0. + t2389 + t2409;
  t8545 = t1621*t1287*t1243;
  t8553 = -1.*t59*t1490;
  t8580 = t8545 + t8553;
  t8585 = -1.*t1287*t59;
  t8586 = -1.*t1621*t1243*t1490;
  t8587 = t8585 + t8586;
  t2691 = -0.0016*t2689;
  t2779 = -0.2707*t2734;
  t2814 = 0. + t2691 + t2779;
  t3003 = -0.2707*t2689;
  t3013 = 0.0016*t2734;
  t3125 = 0. + t3003 + t3013;
  t8596 = t1805*t8580;
  t8610 = t8587*t2014;
  t8617 = t8596 + t8610;
  t8622 = t1805*t8587;
  t8631 = -1.*t8580*t2014;
  t8642 = t8622 + t8631;
  t3314 = 0.0184*t3300;
  t3353 = -0.7055*t3324;
  t3406 = 0. + t3314 + t3353;
  t3594 = -0.7055*t3300;
  t3630 = -0.0184*t3324;
  t3657 = 0. + t3594 + t3630;
  t8651 = t2657*t8617;
  t8656 = t8642*t2734;
  t8658 = t8651 + t8656;
  t8673 = t2657*t8642;
  t8675 = -1.*t8617*t2734;
  t8677 = t8673 + t8675;
  t3952 = -0.0216*t3918;
  t4057 = -1.1135*t4035;
  t4063 = 0. + t3952 + t4057;
  t4231 = -1.1135*t3918;
  t4279 = 0.0216*t4035;
  t4294 = 0. + t4231 + t4279;
  t8681 = t3273*t8658;
  t8687 = t8677*t3324;
  t8688 = t8681 + t8687;
  t8697 = t3273*t8677;
  t8700 = -1.*t8658*t3324;
  t8709 = t8697 + t8700;
  t8442 = -0.766044*t8326;
  t8450 = 0.642788*t8364;
  t8461 = t8442 + t8450;
  t8335 = 0.642788*t8326;
  t8386 = 0.766044*t8364;
  t8393 = t8335 + t8386;
  t8413 = t6360*t4865*t7732;
  t8420 = t6380*t7671;
  t8423 = t8413 + t8420;
  t8437 = -1.*t8393*t8423;
  t8463 = t6360*t4865*t6352;
  t8465 = t6380*t7794;
  t8471 = t8463 + t8465;
  t8472 = t8461*t8471;
  t8476 = t7678 + t7841;
  t8495 = -1.*t4865*t6435*t8476;
  t8498 = 0. + t8437 + t8472 + t8495;
  t8502 = 1/t8498;
  t8765 = t618*t1287*t1805;
  t8780 = -1.*t618*t1490*t2014;
  t8786 = t8765 + t8780;
  t8788 = -1.*t618*t1805*t1490;
  t8789 = -1.*t618*t1287*t2014;
  t8791 = t8788 + t8789;
  t8805 = t2657*t8786;
  t8817 = t8791*t2734;
  t8819 = t8805 + t8817;
  t8821 = t2657*t8791;
  t8822 = -1.*t8786*t2734;
  t8826 = t8821 + t8822;
  t8835 = t3273*t8819;
  t8837 = t8826*t3324;
  t8838 = t8835 + t8837;
  t8842 = t3273*t8826;
  t8843 = -1.*t8819*t3324;
  t8847 = t8842 + t8843;
  t8896 = -1.*t4874;
  t8897 = 1. + t8896;
  t8918 = -1.*t4979;
  t8919 = 1. + t8918;
  t8938 = -1.*t5122;
  t8939 = 1. + t8938;
  t8951 = -1.*t5530;
  t8953 = 1. + t8951;
  t8967 = -1.*t5969;
  t8969 = 1. + t8967;
  t8885 = -1.*t4865;
  t8888 = 1. + t8885;
  t8925 = -0.049*t8919;
  t8926 = -0.21*t4883;
  t8929 = 0. + t8925 + t8926;
  t8898 = -0.049*t8897;
  t8899 = -0.09*t4996;
  t8903 = 0. + t8898 + t8899;
  t8931 = -0.21*t8919;
  t8932 = 0.049*t4883;
  t8935 = 0. + t8931 + t8932;
  t8940 = -0.2707*t8939;
  t8941 = 0.0016*t4715;
  t8943 = 0. + t8940 + t8941;
  t8945 = -0.0016*t8939;
  t8946 = -0.2707*t4715;
  t8948 = 0. + t8945 + t8946;
  t8954 = 0.0184*t8953;
  t8955 = -0.7055*t4705;
  t8957 = 0. + t8954 + t8955;
  t8960 = -0.7055*t8953;
  t8962 = -0.0184*t4705;
  t8963 = 0. + t8960 + t8962;
  t8971 = -1.1135*t8969;
  t8973 = 0.0216*t4676;
  t8974 = 0. + t8971 + t8973;
  t8977 = -0.0216*t8969;
  t8978 = -1.1135*t4676;
  t8979 = 0. + t8977 + t8978;
  t8873 = -1.*t6360;
  t8878 = 1. + t8873;
  t8881 = 0.135*t8878;
  t8884 = 0.1305*t6360*t4865;
  t8890 = 0.135*t8888;
  t8892 = 0.049*t6380;
  t8893 = 0. + t8890 + t8892;
  t8895 = t6360*t8893;
  t8904 = t6360*t6380*t8903;
  t8909 = -0.09*t8897;
  t8911 = 0.049*t4996;
  t8915 = 0. + t8909 + t8911;
  t8916 = -1.*t6435*t8915;
  t8930 = t8929*t6444;
  t8937 = t8935*t6508;
  t8944 = t8943*t6612;
  t8949 = t8948*t6696;
  t8959 = t8957*t6765;
  t8965 = t8963*t6971;
  t8976 = t8974*t7033;
  t8981 = t8979*t7190;
  t8982 = 0.0306*t7406;
  t8984 = -1.1312*t7490;
  t8985 = 0. + t8881 + t8884 + t8895 + t8904 + t8916 + t8930 + t8937 + t8944 + t8949 + t8959 + t8965 + t8976 + t8981 + t8982 + t8984;
  t8989 = -0.049*t8888;
  t8990 = t4865*t4874*t8929;
  t8991 = 0.004500000000000004*t6380;
  t8992 = t4865*t8903;
  t8993 = -1.*t4865*t8935*t4996;
  t8994 = t8943*t5097;
  t8996 = t8948*t5331;
  t8997 = t8957*t5468;
  t8998 = t8963*t5555;
  t8999 = t8974*t5687;
  t9001 = t8979*t6102;
  t9002 = 0.0306*t6142;
  t9004 = -1.1312*t6288;
  t9005 = 0. + t8989 + t8990 + t8991 + t8992 + t8993 + t8994 + t8996 + t8997 + t8998 + t8999 + t9001 + t9002 + t9004;
  t425 = 0.135*t59;
  t670 = -0.1305*t618*t59;
  t1275 = t59*t1269;
  t1610 = t59*t1243*t1600;
  t1692 = t1621*t1657;
  t2138 = t1794*t2090;
  t2440 = t2385*t2415;
  t2834 = t2646*t2814;
  t3181 = t2969*t3125;
  t3463 = t3205*t3406;
  t3664 = t3592*t3657;
  t4126 = t3798*t4063;
  t4378 = t4217*t4294;
  t4398 = t3863*t3798;
  t4448 = t4217*t4035;
  t4465 = t4398 + t4448;
  t4479 = 0.0306*t4465;
  t4489 = t3863*t4217;
  t4506 = -1.*t3798*t4035;
  t4550 = t4489 + t4506;
  t4630 = -1.1312*t4550;
  t4654 = 0. + t425 + t670 + t1275 + t1610 + t1692 + t2138 + t2440 + t2834 + t3181 + t3463 + t3664 + t4126 + t4378 + t4479 + t4630;
  t8756 = -0.049*t853;
  t8757 = -0.004500000000000004*t1243;
  t8761 = t618*t1600;
  t8762 = t618*t1287*t2090;
  t8763 = -1.*t618*t1490*t2415;
  t8787 = t8786*t2814;
  t8802 = t8791*t3125;
  t8820 = t8819*t3406;
  t8833 = t8826*t3657;
  t8839 = t8838*t4063;
  t8850 = t8847*t4294;
  t8851 = t3863*t8838;
  t8852 = t8847*t4035;
  t8853 = t8851 + t8852;
  t8854 = 0.0306*t8853;
  t8855 = t3863*t8847;
  t8860 = -1.*t8838*t4035;
  t8861 = t8855 + t8860;
  t8862 = -1.1312*t8861;
  t8865 = 0. + t8756 + t8757 + t8761 + t8762 + t8763 + t8787 + t8802 + t8820 + t8833 + t8839 + t8850 + t8854 + t8862;
  t8513 = -1.*t1621;
  t8516 = 1. + t8513;
  t8520 = -0.135*t8516;
  t8527 = -0.1305*t1621*t618;
  t8530 = t1621*t1269;
  t8540 = t1621*t1243*t1600;
  t8542 = -1.*t59*t1657;
  t8583 = t8580*t2090;
  t8592 = t8587*t2415;
  t8619 = t8617*t2814;
  t8645 = t8642*t3125;
  t8663 = t8658*t3406;
  t8680 = t8677*t3657;
  t8695 = t8688*t4063;
  t8711 = t8709*t4294;
  t8712 = t3863*t8688;
  t8716 = t8709*t4035;
  t8721 = t8712 + t8716;
  t8728 = 0.0306*t8721;
  t8731 = t3863*t8709;
  t8733 = -1.*t8688*t4035;
  t8735 = t8731 + t8733;
  t8736 = -1.1312*t8735;
  t8737 = 0. + t8520 + t8527 + t8530 + t8540 + t8542 + t8583 + t8592 + t8619 + t8645 + t8663 + t8680 + t8695 + t8711 + t8728 + t8736;
  t9014 = -0.135*t6435;
  t9015 = 0.1305*t4865*t6435;
  t9018 = t6435*t8893;
  t9019 = t6435*t6380*t8903;
  t9021 = t6360*t8915;
  t9023 = t8929*t7979;
  t9024 = t8935*t8100;
  t9025 = t8943*t8139;
  t9026 = t8948*t8193;
  t9027 = t8957*t8222;
  t9028 = t8963*t8253;
  t9032 = t8974*t8264;
  t9033 = t8979*t8314;
  t9034 = 0.0306*t8326;
  t9035 = -1.1312*t8364;
  t9036 = 0. + t9014 + t9015 + t9018 + t9019 + t9021 + t9023 + t9024 + t9025 + t9026 + t9027 + t9028 + t9032 + t9033 + t9034 + t9035;
  t8986 = t7732*t8985;
  t9006 = -1.*t9005*t7671;
  t9007 = t8986 + t9006;
  t9061 = t6360*t4865*t9005;
  t9062 = t6380*t8985;
  t9063 = t9061 + t9062;
  t9010 = t6352*t8985;
  t9011 = -1.*t9005*t7794;
  t9012 = t9010 + t9011;
  p_output1[0]=t4654*(0. + t7678 + t7841)*t8502 + (0. + t7732*t8393 - 1.*t6352*t8461)*t8502*t8737 + (0. - 1.*t7671*t8393 + t7794*t8461)*t8502*t8865 + t8502*(-1.*t8393*t9007 + t8461*t9012 - 1.*t8476*t9036);
  p_output1[1]=t4654*(0. - 1.*t6380*t7671 - 1.*t4865*t6360*t7732)*t8502 + (0. + t4865*t6435*t7732 + t6380*t8461)*t8502*t8737 + (0. - 1.*t4865*t6435*t7671 + t4865*t6360*t8461)*t8502*t8865 + t8502*(-1.*t4865*t6435*t9007 + t8423*t9036 - 1.*t8461*t9063);
  p_output1[2]=t4654*(0. + t8463 + t8465)*t8502 + (0. - 1.*t4865*t6352*t6435 - 1.*t6380*t8393)*t8502*t8737 + (0. + t4865*t6435*t7794 - 1.*t4865*t6360*t8393)*t8502*t8865 + t8502*(t4865*t6435*t9012 - 1.*t8471*t9036 + t8393*t9063);
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

#include "p_LeftToeBottom_to_RightToeBottom_mex.hh"

namespace SymExpression
{

void p_LeftToeBottom_to_RightToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
