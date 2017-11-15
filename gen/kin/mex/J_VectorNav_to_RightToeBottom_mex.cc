/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:36:02 GMT-05:00
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
  double t358;
  double t392;
  double t501;
  double t835;
  double t847;
  double t871;
  double t915;
  double t1185;
  double t1845;
  double t2045;
  double t2211;
  double t2385;
  double t1684;
  double t1689;
  double t1822;
  double t2714;
  double t2833;
  double t3086;
  double t3473;
  double t3571;
  double t3676;
  double t3691;
  double t3419;
  double t3423;
  double t3437;
  double t3786;
  double t3797;
  double t3908;
  double t4207;
  double t4274;
  double t4393;
  double t4465;
  double t4165;
  double t4201;
  double t4205;
  double t5020;
  double t5029;
  double t5038;
  double t5185;
  double t5202;
  double t5242;
  double t5289;
  double t5136;
  double t5169;
  double t5170;
  double t5460;
  double t5627;
  double t5681;
  double t450;
  double t465;
  double t485;
  double t509;
  double t527;
  double t876;
  double t918;
  double t1060;
  double t1218;
  double t1232;
  double t1409;
  double t2317;
  double t2538;
  double t2654;
  double t3116;
  double t3153;
  double t3256;
  double t6101;
  double t6106;
  double t6120;
  double t6132;
  double t6137;
  double t6138;
  double t3690;
  double t3708;
  double t3718;
  double t3980;
  double t4105;
  double t4112;
  double t6145;
  double t6148;
  double t6151;
  double t6156;
  double t6159;
  double t6161;
  double t4417;
  double t4836;
  double t4894;
  double t5048;
  double t5061;
  double t5072;
  double t6178;
  double t6179;
  double t6184;
  double t6186;
  double t6205;
  double t6207;
  double t5247;
  double t5293;
  double t5299;
  double t5703;
  double t5717;
  double t5731;
  double t6222;
  double t6226;
  double t6231;
  double t6239;
  double t6241;
  double t6244;
  double t6291;
  double t6292;
  double t6293;
  double t6295;
  double t6296;
  double t6298;
  double t6305;
  double t6307;
  double t6312;
  double t6314;
  double t6317;
  double t6320;
  double t6326;
  double t6331;
  double t6333;
  double t6338;
  double t6339;
  double t6341;
  double t6400;
  double t6402;
  double t6404;
  double t6406;
  double t6408;
  double t6410;
  double t6413;
  double t6414;
  double t6415;
  double t6418;
  double t6419;
  double t6421;
  double t6427;
  double t6428;
  double t6432;
  double t6442;
  double t6444;
  double t6445;
  double t6368;
  double t6376;
  double t6377;
  double t6480;
  double t6481;
  double t6483;
  double t6491;
  double t6492;
  double t6510;
  double t6515;
  double t6524;
  double t6529;
  double t6537;
  double t6541;
  double t6546;
  double t6576;
  double t6579;
  double t6584;
  double t6588;
  double t6591;
  double t6597;
  double t6645;
  double t6646;
  double t6648;
  double t6650;
  double t6653;
  double t6655;
  double t6658;
  double t6661;
  double t6662;
  double t6669;
  double t6671;
  double t6673;
  double t6683;
  double t6685;
  double t6686;
  double t6675;
  double t6678;
  double t6679;
  double t6628;
  double t6632;
  double t6635;
  double t6728;
  double t6731;
  double t6735;
  double t6757;
  double t6766;
  double t6771;
  double t6775;
  double t6776;
  double t6783;
  double t6786;
  double t6788;
  double t6801;
  double t6802;
  double t6803;
  double t6819;
  double t6820;
  double t6821;
  double t6808;
  double t6809;
  double t6812;
  double t6711;
  double t6715;
  double t6856;
  double t6861;
  double t6865;
  double t6880;
  double t6883;
  double t6885;
  double t6894;
  double t6898;
  double t6901;
  double t6904;
  double t6905;
  double t6913;
  double t6914;
  double t6916;
  double t6924;
  double t6926;
  double t6928;
  double t6918;
  double t6920;
  double t6921;
  double t6649;
  double t6656;
  double t6667;
  double t6674;
  double t6680;
  double t6693;
  double t6697;
  double t6699;
  double t6700;
  double t6703;
  double t6704;
  double t6705;
  double t6708;
  double t6709;
  double t6950;
  double t6956;
  double t6963;
  double t6964;
  double t6966;
  double t6975;
  double t6978;
  double t6980;
  double t6981;
  double t6984;
  double t6987;
  double t6988;
  double t7000;
  double t7002;
  double t7004;
  double t6992;
  double t6993;
  double t6994;
  double t7018;
  double t7019;
  double t7020;
  double t7025;
  double t7026;
  double t7034;
  double t7035;
  double t7037;
  double t7040;
  double t7041;
  double t7044;
  double t7045;
  double t7046;
  double t7056;
  double t7057;
  double t7063;
  double t7049;
  double t7051;
  double t7053;
  double t7091;
  double t7095;
  double t7097;
  double t7106;
  double t7107;
  double t7109;
  double t7110;
  double t7124;
  double t7125;
  double t7126;
  double t7117;
  double t7119;
  double t7120;
  double t7086;
  double t7087;
  double t7100;
  double t7101;
  double t7103;
  double t7164;
  double t7165;
  double t7179;
  double t7184;
  double t7185;
  double t7172;
  double t7174;
  double t7228;
  double t7229;
  double t7236;
  double t7240;
  double t7242;
  double t7246;
  double t7247;
  double t7266;
  double t7267;
  double t7269;
  double t7255;
  double t7256;
  double t7258;
  double t7311;
  double t7323;
  double t7327;
  double t7357;
  double t7359;
  double t7347;
  double t7348;
  double t7305;
  double t7306;
  double t7329;
  double t7336;
  double t7338;
  double t7413;
  double t7415;
  double t6267;
  double t7439;
  double t7442;
  double t7444;
  double t7452;
  double t7453;
  double t7447;
  double t7449;
  double t7494;
  double t7495;
  double t7496;
  double t7374;
  double t7378;
  double t7487;
  double t7490;
  double t7498;
  double t7500;
  double t7501;
  double t7421;
  double t6269;
  double t6272;
  double t7528;
  double t7530;
  double t7532;
  double t7458;
  double t7465;
  t358 = Sin(var1[7]);
  t392 = Cos(var1[8]);
  t501 = Sin(var1[8]);
  t835 = Cos(var1[9]);
  t847 = -1.*t835;
  t871 = 1. + t847;
  t915 = Sin(var1[9]);
  t1185 = Cos(var1[7]);
  t1845 = Cos(var1[10]);
  t2045 = -1.*t1845;
  t2211 = 1. + t2045;
  t2385 = Sin(var1[10]);
  t1684 = -1.*t835*t358*t501;
  t1689 = -1.*t1185*t915;
  t1822 = t1684 + t1689;
  t2714 = -1.*t1185*t835;
  t2833 = t358*t501*t915;
  t3086 = t2714 + t2833;
  t3473 = Cos(var1[11]);
  t3571 = -1.*t3473;
  t3676 = 1. + t3571;
  t3691 = Sin(var1[11]);
  t3419 = t1845*t1822;
  t3423 = t3086*t2385;
  t3437 = t3419 + t3423;
  t3786 = t1845*t3086;
  t3797 = -1.*t1822*t2385;
  t3908 = t3786 + t3797;
  t4207 = Cos(var1[12]);
  t4274 = -1.*t4207;
  t4393 = 1. + t4274;
  t4465 = Sin(var1[12]);
  t4165 = t3473*t3437;
  t4201 = t3908*t3691;
  t4205 = t4165 + t4201;
  t5020 = t3473*t3908;
  t5029 = -1.*t3437*t3691;
  t5038 = t5020 + t5029;
  t5185 = Cos(var1[13]);
  t5202 = -1.*t5185;
  t5242 = 1. + t5202;
  t5289 = Sin(var1[13]);
  t5136 = t4207*t4205;
  t5169 = t5038*t4465;
  t5170 = t5136 + t5169;
  t5460 = t4207*t5038;
  t5627 = -1.*t4205*t4465;
  t5681 = t5460 + t5627;
  t450 = -1.*t392;
  t465 = 1. + t450;
  t485 = -0.135*t465;
  t509 = 0.049*t501;
  t527 = 0. + t485 + t509;
  t876 = -0.049*t871;
  t918 = -0.09*t915;
  t1060 = 0. + t876 + t918;
  t1218 = -0.09*t871;
  t1232 = 0.049*t915;
  t1409 = 0. + t1218 + t1232;
  t2317 = -0.049*t2211;
  t2538 = -0.21*t2385;
  t2654 = 0. + t2317 + t2538;
  t3116 = -0.21*t2211;
  t3153 = 0.049*t2385;
  t3256 = 0. + t3116 + t3153;
  t6101 = t1185*t835*t501;
  t6106 = -1.*t358*t915;
  t6120 = t6101 + t6106;
  t6132 = -1.*t835*t358;
  t6137 = -1.*t1185*t501*t915;
  t6138 = t6132 + t6137;
  t3690 = -0.0016*t3676;
  t3708 = -0.2707*t3691;
  t3718 = 0. + t3690 + t3708;
  t3980 = -0.2707*t3676;
  t4105 = 0.0016*t3691;
  t4112 = 0. + t3980 + t4105;
  t6145 = t1845*t6120;
  t6148 = t6138*t2385;
  t6151 = t6145 + t6148;
  t6156 = t1845*t6138;
  t6159 = -1.*t6120*t2385;
  t6161 = t6156 + t6159;
  t4417 = 0.0184*t4393;
  t4836 = -0.7055*t4465;
  t4894 = 0. + t4417 + t4836;
  t5048 = -0.7055*t4393;
  t5061 = -0.0184*t4465;
  t5072 = 0. + t5048 + t5061;
  t6178 = t3473*t6151;
  t6179 = t6161*t3691;
  t6184 = t6178 + t6179;
  t6186 = t3473*t6161;
  t6205 = -1.*t6151*t3691;
  t6207 = t6186 + t6205;
  t5247 = -0.0216*t5242;
  t5293 = -1.1135*t5289;
  t5299 = 0. + t5247 + t5293;
  t5703 = -1.1135*t5242;
  t5717 = 0.0216*t5289;
  t5731 = 0. + t5703 + t5717;
  t6222 = t4207*t6184;
  t6226 = t6207*t4465;
  t6231 = t6222 + t6226;
  t6239 = t4207*t6207;
  t6241 = -1.*t6184*t4465;
  t6244 = t6239 + t6241;
  t6291 = -1.*t835*t1845*t501;
  t6292 = t501*t915*t2385;
  t6293 = t6291 + t6292;
  t6295 = t1845*t501*t915;
  t6296 = t835*t501*t2385;
  t6298 = t6295 + t6296;
  t6305 = t3473*t6293;
  t6307 = t6298*t3691;
  t6312 = t6305 + t6307;
  t6314 = t3473*t6298;
  t6317 = -1.*t6293*t3691;
  t6320 = t6314 + t6317;
  t6326 = t4207*t6312;
  t6331 = t6320*t4465;
  t6333 = t6326 + t6331;
  t6338 = t4207*t6320;
  t6339 = -1.*t6312*t4465;
  t6341 = t6338 + t6339;
  t6400 = t1185*t392*t835*t1845;
  t6402 = -1.*t1185*t392*t915*t2385;
  t6404 = t6400 + t6402;
  t6406 = -1.*t1185*t392*t1845*t915;
  t6408 = -1.*t1185*t392*t835*t2385;
  t6410 = t6406 + t6408;
  t6413 = t3473*t6404;
  t6414 = t6410*t3691;
  t6415 = t6413 + t6414;
  t6418 = t3473*t6410;
  t6419 = -1.*t6404*t3691;
  t6421 = t6418 + t6419;
  t6427 = t4207*t6415;
  t6428 = t6421*t4465;
  t6432 = t6427 + t6428;
  t6442 = t4207*t6421;
  t6444 = -1.*t6415*t4465;
  t6445 = t6442 + t6444;
  t6368 = 0.049*t392;
  t6376 = -0.135*t501;
  t6377 = t6368 + t6376;
  t6480 = t392*t835*t1845*t358;
  t6481 = -1.*t392*t358*t915*t2385;
  t6483 = t6480 + t6481;
  t6491 = -1.*t392*t1845*t358*t915;
  t6492 = -1.*t392*t835*t358*t2385;
  t6510 = t6491 + t6492;
  t6515 = t3473*t6483;
  t6524 = t6510*t3691;
  t6529 = t6515 + t6524;
  t6537 = t3473*t6510;
  t6541 = -1.*t6483*t3691;
  t6546 = t6537 + t6541;
  t6576 = t4207*t6529;
  t6579 = t6546*t4465;
  t6584 = t6576 + t6579;
  t6588 = t4207*t6546;
  t6591 = -1.*t6529*t4465;
  t6597 = t6588 + t6591;
  t6645 = -1.*t392*t1845*t915;
  t6646 = -1.*t392*t835*t2385;
  t6648 = t6645 + t6646;
  t6650 = -1.*t392*t835*t1845;
  t6653 = t392*t915*t2385;
  t6655 = t6650 + t6653;
  t6658 = t3473*t6648;
  t6661 = t6655*t3691;
  t6662 = t6658 + t6661;
  t6669 = t3473*t6655;
  t6671 = -1.*t6648*t3691;
  t6673 = t6669 + t6671;
  t6683 = t4207*t6673;
  t6685 = -1.*t6662*t4465;
  t6686 = t6683 + t6685;
  t6675 = t4207*t6662;
  t6678 = t6673*t4465;
  t6679 = t6675 + t6678;
  t6628 = -0.09*t835;
  t6632 = -0.049*t915;
  t6635 = t6628 + t6632;
  t6728 = -1.*t1185*t835*t501;
  t6731 = t358*t915;
  t6735 = t6728 + t6731;
  t6757 = t6735*t2385;
  t6766 = t6156 + t6757;
  t6771 = t1845*t6735;
  t6775 = -1.*t6138*t2385;
  t6776 = t6771 + t6775;
  t6783 = t3473*t6766;
  t6786 = t6776*t3691;
  t6788 = t6783 + t6786;
  t6801 = t3473*t6776;
  t6802 = -1.*t6766*t3691;
  t6803 = t6801 + t6802;
  t6819 = t4207*t6803;
  t6820 = -1.*t6788*t4465;
  t6821 = t6819 + t6820;
  t6808 = t4207*t6788;
  t6809 = t6803*t4465;
  t6812 = t6808 + t6809;
  t6711 = 0.049*t835;
  t6715 = t6711 + t918;
  t6856 = t1185*t835;
  t6861 = -1.*t358*t501*t915;
  t6865 = t6856 + t6861;
  t6880 = t1845*t6865;
  t6883 = t1822*t2385;
  t6885 = t6880 + t6883;
  t6894 = -1.*t6865*t2385;
  t6898 = t3419 + t6894;
  t6901 = t3473*t6885;
  t6904 = t6898*t3691;
  t6905 = t6901 + t6904;
  t6913 = t3473*t6898;
  t6914 = -1.*t6885*t3691;
  t6916 = t6913 + t6914;
  t6924 = t4207*t6916;
  t6926 = -1.*t6905*t4465;
  t6928 = t6924 + t6926;
  t6918 = t4207*t6905;
  t6920 = t6916*t4465;
  t6921 = t6918 + t6920;
  t6649 = t6648*t3718;
  t6656 = t6655*t4112;
  t6667 = t6662*t4894;
  t6674 = t6673*t5072;
  t6680 = t6679*t5299;
  t6693 = t6686*t5731;
  t6697 = t5185*t6686;
  t6699 = -1.*t6679*t5289;
  t6700 = t6697 + t6699;
  t6703 = -1.1312*t6700;
  t6704 = t5185*t6679;
  t6705 = t6686*t5289;
  t6708 = t6704 + t6705;
  t6709 = 0.0306*t6708;
  t6950 = 0.049*t1845;
  t6956 = t6950 + t2538;
  t6963 = -0.21*t1845;
  t6964 = -0.049*t2385;
  t6966 = t6963 + t6964;
  t6975 = -1.*t1845*t6120;
  t6978 = t6975 + t6775;
  t6980 = t6978*t3691;
  t6981 = t6186 + t6980;
  t6984 = t3473*t6978;
  t6987 = -1.*t6161*t3691;
  t6988 = t6984 + t6987;
  t7000 = t4207*t6988;
  t7002 = -1.*t6981*t4465;
  t7004 = t7000 + t7002;
  t6992 = t4207*t6981;
  t6993 = t6988*t4465;
  t6994 = t6992 + t6993;
  t7018 = t835*t358*t501;
  t7019 = t1185*t915;
  t7020 = t7018 + t7019;
  t7025 = -1.*t7020*t2385;
  t7026 = t6880 + t7025;
  t7034 = -1.*t1845*t7020;
  t7035 = t7034 + t6894;
  t7037 = t3473*t7026;
  t7040 = t7035*t3691;
  t7041 = t7037 + t7040;
  t7044 = t3473*t7035;
  t7045 = -1.*t7026*t3691;
  t7046 = t7044 + t7045;
  t7056 = t4207*t7046;
  t7057 = -1.*t7041*t4465;
  t7063 = t7056 + t7057;
  t7049 = t4207*t7041;
  t7051 = t7046*t4465;
  t7053 = t7049 + t7051;
  t7091 = t392*t835*t1845;
  t7095 = -1.*t392*t915*t2385;
  t7097 = t7091 + t7095;
  t7106 = -1.*t7097*t3691;
  t7107 = t6658 + t7106;
  t7109 = -1.*t3473*t7097;
  t7110 = t7109 + t6671;
  t7124 = t4207*t7110;
  t7125 = -1.*t7107*t4465;
  t7126 = t7124 + t7125;
  t7117 = t4207*t7107;
  t7119 = t7110*t4465;
  t7120 = t7117 + t7119;
  t7086 = 0.0016*t3473;
  t7087 = t7086 + t3708;
  t7100 = -0.2707*t3473;
  t7101 = -0.0016*t3691;
  t7103 = t7100 + t7101;
  t7164 = -1.*t3473*t6151;
  t7165 = t7164 + t6987;
  t7179 = t4207*t7165;
  t7184 = -1.*t6207*t4465;
  t7185 = t7179 + t7184;
  t7172 = t7165*t4465;
  t7174 = t6239 + t7172;
  t7228 = t1845*t7020;
  t7229 = t6865*t2385;
  t7236 = t7228 + t7229;
  t7240 = -1.*t7236*t3691;
  t7242 = t7037 + t7240;
  t7246 = -1.*t3473*t7236;
  t7247 = t7246 + t7045;
  t7266 = t4207*t7247;
  t7267 = -1.*t7242*t4465;
  t7269 = t7266 + t7267;
  t7255 = t4207*t7242;
  t7256 = t7247*t4465;
  t7258 = t7255 + t7256;
  t7311 = t3473*t7097;
  t7323 = t6648*t3691;
  t7327 = t7311 + t7323;
  t7357 = -1.*t4207*t7327;
  t7359 = t7357 + t7125;
  t7347 = -1.*t7327*t4465;
  t7348 = t7117 + t7347;
  t7305 = -0.0184*t4207;
  t7306 = t7305 + t4836;
  t7329 = -0.7055*t4207;
  t7336 = 0.0184*t4465;
  t7338 = t7329 + t7336;
  t7413 = -1.*t4207*t6184;
  t7415 = t7413 + t7184;
  t6267 = t5185*t6244;
  t7439 = t3473*t7236;
  t7442 = t7026*t3691;
  t7444 = t7439 + t7442;
  t7452 = -1.*t4207*t7444;
  t7453 = t7452 + t7267;
  t7447 = -1.*t7444*t4465;
  t7449 = t7255 + t7447;
  t7494 = t4207*t7327;
  t7495 = t7107*t4465;
  t7496 = t7494 + t7495;
  t7374 = -1.*t7348*t5289;
  t7378 = t5185*t7348;
  t7487 = 0.0216*t5185;
  t7490 = t7487 + t5293;
  t7498 = -1.1135*t5185;
  t7500 = -0.0216*t5289;
  t7501 = t7498 + t7500;
  t7421 = -1.*t6244*t5289;
  t6269 = -1.*t6231*t5289;
  t6272 = t6267 + t6269;
  t7528 = t4207*t7444;
  t7530 = t7242*t4465;
  t7532 = t7528 + t7530;
  t7458 = -1.*t7449*t5289;
  t7465 = t5185*t7449;
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
  p_output1[22]=t1185*t1409 - 1.*t1822*t2654 - 1.*t3086*t3256 + 0.135*t358 - 1.*t3437*t3718 - 0.1305*t358*t392 - 1.*t3908*t4112 - 1.*t4205*t4894 + t1060*t358*t501 - 1.*t5038*t5072 + t358*t527 - 1.*t5170*t5299 + 1.1312*(-1.*t5170*t5289 + t5185*t5681) - 0.0306*(t5170*t5185 + t5289*t5681) - 1.*t5681*t5731;
  p_output1[23]=-0.135*t1185 + t1409*t358 + 0.1305*t1185*t392 - 1.*t1060*t1185*t501 - 1.*t1185*t527 - 1.*t2654*t6120 - 1.*t3256*t6138 - 1.*t3718*t6151 - 1.*t4112*t6161 - 1.*t4894*t6184 - 1.*t5072*t6207 - 1.*t5299*t6231 - 1.*t5731*t6244 - 0.0306*(t5185*t6231 + t5289*t6244) + 1.1312*t6272;
  p_output1[24]=-0.004500000000000004*t392 - 0.049*t501 - 1.*t1060*t501 + t3718*t6293 + t4112*t6298 + t4894*t6312 + t5072*t6320 + t5299*t6333 + t5731*t6341 - 1.1312*(-1.*t5289*t6333 + t5185*t6341) + 0.0306*(t5185*t6333 + t5289*t6341) - 1.*t2654*t501*t835 + t3256*t501*t915;
  p_output1[25]=-1.*t1060*t1185*t392 - 0.1305*t1185*t501 - 1.*t1185*t6377 - 1.*t3718*t6404 - 1.*t4112*t6410 - 1.*t4894*t6415 - 1.*t5072*t6421 - 1.*t5299*t6432 - 1.*t5731*t6445 + 1.1312*(-1.*t5289*t6432 + t5185*t6445) - 0.0306*(t5185*t6432 + t5289*t6445) - 1.*t1185*t2654*t392*t835 + t1185*t3256*t392*t915;
  p_output1[26]=-1.*t1060*t358*t392 - 0.1305*t358*t501 - 1.*t358*t6377 - 1.*t3718*t6483 - 1.*t4112*t6510 - 1.*t4894*t6529 - 1.*t5072*t6546 - 1.*t5299*t6584 - 1.*t5731*t6597 + 1.1312*(-1.*t5289*t6584 + t5185*t6597) - 0.0306*(t5185*t6584 + t5289*t6597) - 1.*t2654*t358*t392*t835 + t3256*t358*t392*t915;
  p_output1[27]=t392*t6635 + t6649 + t6656 + t6667 + t6674 + t6680 + t6693 + t6703 + t6709 - 1.*t3256*t392*t835 - 1.*t2654*t392*t915;
  p_output1[28]=-1.*t2654*t6138 - 1.*t1185*t501*t6635 + t358*t6715 - 1.*t3256*t6735 - 1.*t3718*t6766 - 1.*t4112*t6776 - 1.*t4894*t6788 - 1.*t5072*t6803 - 1.*t5299*t6812 - 1.*t5731*t6821 + 1.1312*(-1.*t5289*t6812 + t5185*t6821) - 0.0306*(t5185*t6812 + t5289*t6821);
  p_output1[29]=-1.*t1822*t3256 - 1.*t358*t501*t6635 - 1.*t1185*t6715 - 1.*t2654*t6865 - 1.*t3718*t6885 - 1.*t4112*t6898 - 1.*t4894*t6905 - 1.*t5072*t6916 - 1.*t5299*t6921 - 1.*t5731*t6928 + 1.1312*(-1.*t5289*t6921 + t5185*t6928) - 0.0306*(t5185*t6921 + t5289*t6928);
  p_output1[30]=t6649 + t6656 + t6667 + t6674 + t6680 + t6693 + t6703 + t6709 + t392*t6966*t835 - 1.*t392*t6956*t915;
  p_output1[31]=-1.*t3718*t6161 - 1.*t6138*t6956 - 1.*t6120*t6966 - 1.*t4112*t6978 - 1.*t4894*t6981 - 1.*t5072*t6988 - 1.*t5299*t6994 - 1.*t5731*t7004 + 1.1312*(-1.*t5289*t6994 + t5185*t7004) - 0.0306*(t5185*t6994 + t5289*t7004);
  p_output1[32]=-1.*t6865*t6956 - 1.*t6966*t7020 - 1.*t3718*t7026 - 1.*t4112*t7035 - 1.*t4894*t7041 - 1.*t5072*t7046 - 1.*t5299*t7053 - 1.*t5731*t7063 + 1.1312*(-1.*t5289*t7053 + t5185*t7063) - 0.0306*(t5185*t7053 + t5289*t7063);
  p_output1[33]=t6648*t7087 + t7097*t7103 + t4894*t7107 + t5072*t7110 + t5299*t7120 + t5731*t7126 - 1.1312*(-1.*t5289*t7120 + t5185*t7126) + 0.0306*(t5185*t7120 + t5289*t7126);
  p_output1[34]=-1.*t4894*t6207 - 1.*t6161*t7087 - 1.*t6151*t7103 - 1.*t5072*t7165 - 1.*t5299*t7174 - 1.*t5731*t7185 + 1.1312*(-1.*t5289*t7174 + t5185*t7185) - 0.0306*(t5185*t7174 + t5289*t7185);
  p_output1[35]=-1.*t7026*t7087 - 1.*t7103*t7236 - 1.*t4894*t7242 - 1.*t5072*t7247 - 1.*t5299*t7258 - 1.*t5731*t7269 + 1.1312*(-1.*t5289*t7258 + t5185*t7269) - 0.0306*(t5185*t7258 + t5289*t7269);
  p_output1[36]=t7107*t7306 + t7327*t7338 + t5299*t7348 + t5731*t7359 - 1.1312*(t5185*t7359 + t7374) + 0.0306*(t5289*t7359 + t7378);
  p_output1[37]=-1.*t5299*t6244 - 1.*t6207*t7306 - 1.*t6184*t7338 - 1.*t5731*t7415 - 0.0306*(t6267 + t5289*t7415) + 1.1312*(t5185*t7415 + t7421);
  p_output1[38]=-1.*t7242*t7306 - 1.*t7338*t7444 - 1.*t5299*t7449 - 1.*t5731*t7453 + 1.1312*(t5185*t7453 + t7458) - 0.0306*(t5289*t7453 + t7465);
  p_output1[39]=t7348*t7490 - 1.1312*(t7374 - 1.*t5185*t7496) + 0.0306*(t7378 - 1.*t5289*t7496) + t7496*t7501;
  p_output1[40]=-0.0306*t6272 + 1.1312*(-1.*t5185*t6231 + t7421) - 1.*t6244*t7490 - 1.*t6231*t7501;
  p_output1[41]=-1.*t7449*t7490 - 1.*t7501*t7532 + 1.1312*(t7458 - 1.*t5185*t7532) - 0.0306*(t7465 - 1.*t5289*t7532);
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
