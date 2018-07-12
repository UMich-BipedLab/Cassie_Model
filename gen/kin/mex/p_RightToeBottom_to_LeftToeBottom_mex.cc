/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:37:10 GMT-04:00
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
  double t841;
  double t589;
  double t596;
  double t647;
  double t858;
  double t473;
  double t1438;
  double t1462;
  double t1490;
  double t653;
  double t1062;
  double t1238;
  double t1535;
  double t320;
  double t1776;
  double t1910;
  double t1963;
  double t1359;
  double t1559;
  double t1607;
  double t2004;
  double t242;
  double t2095;
  double t2107;
  double t2253;
  double t1727;
  double t2010;
  double t2025;
  double t2360;
  double t223;
  double t2587;
  double t2660;
  double t2690;
  double t2028;
  double t2513;
  double t2536;
  double t2699;
  double t2897;
  double t3168;
  double t3179;
  double t3206;
  double t3004;
  double t3029;
  double t3061;
  double t3396;
  double t3435;
  double t3510;
  double t3072;
  double t3271;
  double t3341;
  double t3652;
  double t3702;
  double t3740;
  double t3381;
  double t3559;
  double t3586;
  double t4585;
  double t4679;
  double t4738;
  double t4388;
  double t4394;
  double t4497;
  double t4930;
  double t4936;
  double t4937;
  double t4525;
  double t4801;
  double t4803;
  double t5313;
  double t5340;
  double t5470;
  double t4830;
  double t4942;
  double t5106;
  double t5559;
  double t5577;
  double t5578;
  double t5288;
  double t5472;
  double t5489;
  double t2563;
  double t2703;
  double t2719;
  double t2766;
  double t2783;
  double t2793;
  double t3647;
  double t3884;
  double t3976;
  double t4088;
  double t4220;
  double t4296;
  double t5547;
  double t5639;
  double t5643;
  double t5663;
  double t5706;
  double t5713;
  double t6221;
  double t6246;
  double t6287;
  double t5649;
  double t5846;
  double t5863;
  double t3978;
  double t4301;
  double t4371;
  double t6320;
  double t6506;
  double t6514;
  double t2724;
  double t2834;
  double t2862;
  double t7857;
  double t7874;
  double t7949;
  double t7952;
  double t8009;
  double t8015;
  double t8082;
  double t8087;
  double t8121;
  double t8131;
  double t7670;
  double t7686;
  double t7909;
  double t7922;
  double t7923;
  double t7954;
  double t7956;
  double t7969;
  double t7972;
  double t7973;
  double t7985;
  double t8023;
  double t8024;
  double t8027;
  double t8050;
  double t8056;
  double t8071;
  double t8094;
  double t8096;
  double t8098;
  double t8108;
  double t8115;
  double t8119;
  double t8133;
  double t8136;
  double t8144;
  double t8148;
  double t8149;
  double t8151;
  double t6029;
  double t6033;
  double t6148;
  double t7492;
  double t7528;
  double t7533;
  double t7622;
  double t7777;
  double t7780;
  double t7824;
  double t7826;
  double t7924;
  double t7928;
  double t7932;
  double t7939;
  double t7942;
  double t7971;
  double t8005;
  double t8032;
  double t8074;
  double t8105;
  double t8120;
  double t8147;
  double t8153;
  double t8155;
  double t8162;
  double t8167;
  double t8182;
  double t8185;
  double t8187;
  double t8194;
  double t8199;
  double t8200;
  double t8201;
  double t8202;
  double t8206;
  double t8208;
  double t8209;
  double t8213;
  double t8214;
  double t8215;
  double t7129;
  double t7175;
  double t7204;
  double t4380;
  double t5945;
  double t6017;
  double t6020;
  double t6295;
  double t6978;
  double t7009;
  double t7107;
  double t7280;
  double t7300;
  double t7334;
  double t8305;
  double t8311;
  double t8315;
  double t8319;
  double t8322;
  double t8324;
  double t8356;
  double t8370;
  double t8371;
  double t8373;
  double t8382;
  double t8388;
  double t8389;
  double t8391;
  double t8398;
  double t8402;
  double t8403;
  double t8406;
  double t8407;
  double t8409;
  double t8411;
  double t8414;
  double t8415;
  double t8416;
  double t8428;
  double t8430;
  double t8432;
  double t8434;
  double t8435;
  double t8436;
  double t8443;
  double t8453;
  double t8454;
  double t8455;
  double t8465;
  double t8467;
  double t8468;
  double t8499;
  double t8306;
  double t8308;
  double t8338;
  double t8352;
  double t8353;
  double t8354;
  double t8358;
  double t8359;
  double t8323;
  double t8327;
  double t8328;
  double t8518;
  double t8364;
  double t8365;
  double t8366;
  double t8377;
  double t8385;
  double t8386;
  double t8527;
  double t8529;
  double t8535;
  double t8537;
  double t8538;
  double t8539;
  double t8394;
  double t8395;
  double t8397;
  double t8410;
  double t8412;
  double t8413;
  double t8541;
  double t8543;
  double t8544;
  double t8546;
  double t8552;
  double t8554;
  double t8421;
  double t8423;
  double t8427;
  double t8437;
  double t8449;
  double t8451;
  double t8558;
  double t8559;
  double t8561;
  double t8564;
  double t8565;
  double t8566;
  double t8460;
  double t8461;
  double t8463;
  double t8569;
  double t8570;
  double t8571;
  double t8574;
  double t8575;
  double t8576;
  double t8510;
  double t8511;
  double t8512;
  double t8519;
  double t8521;
  double t8523;
  double t8609;
  double t8610;
  double t8611;
  double t8619;
  double t8620;
  double t8622;
  double t8625;
  double t8630;
  double t8631;
  double t8633;
  double t8635;
  double t8636;
  double t8640;
  double t8641;
  double t8643;
  double t8647;
  double t8649;
  double t8650;
  double t8652;
  double t8655;
  double t8656;
  double t8659;
  double t8660;
  double t8661;
  double t8243;
  double t8253;
  double t8255;
  double t8258;
  double t8260;
  double t8275;
  double t8276;
  double t8277;
  double t8281;
  double t8283;
  double t8286;
  double t8287;
  double t8290;
  double t8291;
  double t8293;
  double t8294;
  double t8177;
  double t8225;
  double t8227;
  double t8310;
  double t8330;
  double t8347;
  double t8363;
  double t8369;
  double t8393;
  double t8405;
  double t8420;
  double t8433;
  double t8456;
  double t8472;
  double t8476;
  double t8477;
  double t8478;
  double t8479;
  double t8480;
  double t8483;
  double t8484;
  double t8486;
  double t8487;
  double t8503;
  double t8506;
  double t8507;
  double t8509;
  double t8513;
  double t8516;
  double t8526;
  double t8536;
  double t8540;
  double t8545;
  double t8555;
  double t8562;
  double t8567;
  double t8572;
  double t8578;
  double t8580;
  double t8581;
  double t8582;
  double t8586;
  double t8587;
  double t8588;
  double t8592;
  double t8594;
  double t8595;
  double t8599;
  double t8601;
  double t8602;
  double t8603;
  double t8604;
  double t8614;
  double t8623;
  double t8632;
  double t8639;
  double t8645;
  double t8651;
  double t8658;
  double t8665;
  double t8668;
  double t8672;
  double t8673;
  double t8674;
  double t8675;
  double t8676;
  double t8677;
  double t8679;
  double t8680;
  double t8685;
  double t8687;
  double t8692;
  double t8233;
  double t8237;
  double t8238;
  t841 = Cos(var1[7]);
  t589 = Cos(var1[9]);
  t596 = Sin(var1[7]);
  t647 = Sin(var1[8]);
  t858 = Sin(var1[9]);
  t473 = Cos(var1[10]);
  t1438 = t841*t589;
  t1462 = -1.*t596*t647*t858;
  t1490 = t1438 + t1462;
  t653 = t589*t596*t647;
  t1062 = t841*t858;
  t1238 = t653 + t1062;
  t1535 = Sin(var1[10]);
  t320 = Cos(var1[11]);
  t1776 = t473*t1490;
  t1910 = -1.*t1238*t1535;
  t1963 = t1776 + t1910;
  t1359 = t473*t1238;
  t1559 = t1490*t1535;
  t1607 = t1359 + t1559;
  t2004 = Sin(var1[11]);
  t242 = Cos(var1[12]);
  t2095 = t320*t1963;
  t2107 = -1.*t1607*t2004;
  t2253 = t2095 + t2107;
  t1727 = t320*t1607;
  t2010 = t1963*t2004;
  t2025 = t1727 + t2010;
  t2360 = Sin(var1[12]);
  t223 = Cos(var1[13]);
  t2587 = t242*t2253;
  t2660 = -1.*t2025*t2360;
  t2690 = t2587 + t2660;
  t2028 = t242*t2025;
  t2513 = t2253*t2360;
  t2536 = t2028 + t2513;
  t2699 = Sin(var1[13]);
  t2897 = Cos(var1[8]);
  t3168 = -1.*t2897*t473*t858;
  t3179 = -1.*t2897*t589*t1535;
  t3206 = t3168 + t3179;
  t3004 = t2897*t589*t473;
  t3029 = -1.*t2897*t858*t1535;
  t3061 = t3004 + t3029;
  t3396 = t320*t3206;
  t3435 = -1.*t3061*t2004;
  t3510 = t3396 + t3435;
  t3072 = t320*t3061;
  t3271 = t3206*t2004;
  t3341 = t3072 + t3271;
  t3652 = t242*t3510;
  t3702 = -1.*t3341*t2360;
  t3740 = t3652 + t3702;
  t3381 = t242*t3341;
  t3559 = t3510*t2360;
  t3586 = t3381 + t3559;
  t4585 = -1.*t589*t596;
  t4679 = -1.*t841*t647*t858;
  t4738 = t4585 + t4679;
  t4388 = t841*t589*t647;
  t4394 = -1.*t596*t858;
  t4497 = t4388 + t4394;
  t4930 = t473*t4738;
  t4936 = -1.*t4497*t1535;
  t4937 = t4930 + t4936;
  t4525 = t473*t4497;
  t4801 = t4738*t1535;
  t4803 = t4525 + t4801;
  t5313 = t320*t4937;
  t5340 = -1.*t4803*t2004;
  t5470 = t5313 + t5340;
  t4830 = t320*t4803;
  t4942 = t4937*t2004;
  t5106 = t4830 + t4942;
  t5559 = t242*t5470;
  t5577 = -1.*t5106*t2360;
  t5578 = t5559 + t5577;
  t5288 = t242*t5106;
  t5472 = t5470*t2360;
  t5489 = t5288 + t5472;
  t2563 = t223*t2536;
  t2703 = t2690*t2699;
  t2719 = t2563 + t2703;
  t2766 = t223*t2690;
  t2783 = -1.*t2536*t2699;
  t2793 = t2766 + t2783;
  t3647 = t223*t3586;
  t3884 = t3740*t2699;
  t3976 = t3647 + t3884;
  t4088 = t223*t3740;
  t4220 = -1.*t3586*t2699;
  t4296 = t4088 + t4220;
  t5547 = t223*t5489;
  t5639 = t5578*t2699;
  t5643 = t5547 + t5639;
  t5663 = t223*t5578;
  t5706 = -1.*t5489*t2699;
  t5713 = t5663 + t5706;
  t6221 = 0.642788*t3976;
  t6246 = 0.766044*t4296;
  t6287 = t6221 + t6246;
  t5649 = -0.766044*t5643;
  t5846 = 0.642788*t5713;
  t5863 = t5649 + t5846;
  t3978 = -0.766044*t3976;
  t4301 = 0.642788*t4296;
  t4371 = t3978 + t4301;
  t6320 = 0.642788*t5643;
  t6506 = 0.766044*t5713;
  t6514 = t6320 + t6506;
  t2724 = 0.642788*t2719;
  t2834 = 0.766044*t2793;
  t2862 = t2724 + t2834;
  t7857 = -1.*t589;
  t7874 = 1. + t7857;
  t7949 = -1.*t473;
  t7952 = 1. + t7949;
  t8009 = -1.*t320;
  t8015 = 1. + t8009;
  t8082 = -1.*t242;
  t8087 = 1. + t8082;
  t8121 = -1.*t223;
  t8131 = 1. + t8121;
  t7670 = -1.*t2897;
  t7686 = 1. + t7670;
  t7909 = -0.049*t7874;
  t7922 = -0.09*t858;
  t7923 = 0. + t7909 + t7922;
  t7954 = -0.049*t7952;
  t7956 = -0.21*t1535;
  t7969 = 0. + t7954 + t7956;
  t7972 = -0.21*t7952;
  t7973 = 0.049*t1535;
  t7985 = 0. + t7972 + t7973;
  t8023 = -0.0016*t8015;
  t8024 = -0.2707*t2004;
  t8027 = 0. + t8023 + t8024;
  t8050 = -0.2707*t8015;
  t8056 = 0.0016*t2004;
  t8071 = 0. + t8050 + t8056;
  t8094 = 0.0184*t8087;
  t8096 = -0.7055*t2360;
  t8098 = 0. + t8094 + t8096;
  t8108 = -0.7055*t8087;
  t8115 = -0.0184*t2360;
  t8119 = 0. + t8108 + t8115;
  t8133 = -0.0216*t8131;
  t8136 = -1.1135*t2699;
  t8144 = 0. + t8133 + t8136;
  t8148 = -1.1135*t8131;
  t8149 = 0.0216*t2699;
  t8151 = 0. + t8148 + t8149;
  t6029 = -0.766044*t2719;
  t6033 = 0.642788*t2793;
  t6148 = t6029 + t6033;
  t7492 = -1.*t841;
  t7528 = 1. + t7492;
  t7533 = -0.135*t7528;
  t7622 = -0.1305*t841*t2897;
  t7777 = -0.135*t7686;
  t7780 = 0.049*t647;
  t7824 = 0. + t7777 + t7780;
  t7826 = t841*t7824;
  t7924 = t841*t647*t7923;
  t7928 = -0.09*t7874;
  t7932 = 0.049*t858;
  t7939 = 0. + t7928 + t7932;
  t7942 = -1.*t596*t7939;
  t7971 = t4497*t7969;
  t8005 = t4738*t7985;
  t8032 = t4803*t8027;
  t8074 = t4937*t8071;
  t8105 = t5106*t8098;
  t8120 = t5470*t8119;
  t8147 = t5489*t8144;
  t8153 = t5578*t8151;
  t8155 = 0.0306*t5643;
  t8162 = -1.1312*t5713;
  t8167 = 0. + t7533 + t7622 + t7826 + t7924 + t7942 + t7971 + t8005 + t8032 + t8074 + t8105 + t8120 + t8147 + t8153 + t8155 + t8162;
  t8182 = -0.049*t7686;
  t8185 = -0.004500000000000004*t647;
  t8187 = t2897*t7923;
  t8194 = t2897*t589*t7969;
  t8199 = -1.*t2897*t858*t7985;
  t8200 = t3061*t8027;
  t8201 = t3206*t8071;
  t8202 = t3341*t8098;
  t8206 = t3510*t8119;
  t8208 = t3586*t8144;
  t8209 = t3740*t8151;
  t8213 = 0.0306*t3976;
  t8214 = -1.1312*t4296;
  t8215 = 0. + t8182 + t8185 + t8187 + t8194 + t8199 + t8200 + t8201 + t8202 + t8206 + t8208 + t8209 + t8213 + t8214;
  t7129 = t6287*t5863;
  t7175 = -1.*t4371*t6514;
  t7204 = t7129 + t7175;
  t4380 = t841*t2897*t4371;
  t5945 = t647*t5863;
  t6017 = t4380 + t5945;
  t6020 = -1.*t2862*t6017;
  t6295 = t841*t2897*t6287;
  t6978 = t647*t6514;
  t7009 = t6295 + t6978;
  t7107 = t6148*t7009;
  t7280 = -1.*t2897*t596*t7204;
  t7300 = 0. + t6020 + t7107 + t7280;
  t7334 = 1/t7300;
  t8305 = Cos(var1[1]);
  t8311 = Cos(var1[2]);
  t8315 = Cos(var1[3]);
  t8319 = -1.*t8315;
  t8322 = 1. + t8319;
  t8324 = Sin(var1[3]);
  t8356 = Sin(var1[2]);
  t8370 = Cos(var1[4]);
  t8371 = -1.*t8370;
  t8373 = 1. + t8371;
  t8382 = Sin(var1[4]);
  t8388 = -1.*t8305*t8311*t8324;
  t8389 = -1.*t8315*t8305*t8356;
  t8391 = t8388 + t8389;
  t8398 = t8315*t8305*t8311;
  t8402 = -1.*t8305*t8324*t8356;
  t8403 = t8398 + t8402;
  t8406 = Cos(var1[5]);
  t8407 = -1.*t8406;
  t8409 = 1. + t8407;
  t8411 = Sin(var1[5]);
  t8414 = t8382*t8391;
  t8415 = t8370*t8403;
  t8416 = t8414 + t8415;
  t8428 = t8370*t8391;
  t8430 = -1.*t8382*t8403;
  t8432 = t8428 + t8430;
  t8434 = Cos(var1[6]);
  t8435 = -1.*t8434;
  t8436 = 1. + t8435;
  t8443 = Sin(var1[6]);
  t8453 = -1.*t8411*t8416;
  t8454 = t8406*t8432;
  t8455 = t8453 + t8454;
  t8465 = t8406*t8416;
  t8467 = t8411*t8432;
  t8468 = t8465 + t8467;
  t8499 = Cos(var1[0]);
  t8306 = -1.*t8305;
  t8308 = 1. + t8306;
  t8338 = Sin(var1[1]);
  t8352 = -1.*t8311;
  t8353 = 1. + t8352;
  t8354 = -0.049*t8353;
  t8358 = -0.09*t8356;
  t8359 = 0. + t8354 + t8358;
  t8323 = -0.049*t8322;
  t8327 = -0.21*t8324;
  t8328 = 0. + t8323 + t8327;
  t8518 = Sin(var1[0]);
  t8364 = -0.21*t8322;
  t8365 = 0.049*t8324;
  t8366 = 0. + t8364 + t8365;
  t8377 = -0.2707*t8373;
  t8385 = 0.0016*t8382;
  t8386 = 0. + t8377 + t8385;
  t8527 = t8499*t8311*t8338;
  t8529 = -1.*t8518*t8356;
  t8535 = t8527 + t8529;
  t8537 = -1.*t8311*t8518;
  t8538 = -1.*t8499*t8338*t8356;
  t8539 = t8537 + t8538;
  t8394 = -0.0016*t8373;
  t8395 = -0.2707*t8382;
  t8397 = 0. + t8394 + t8395;
  t8410 = 0.0184*t8409;
  t8412 = -0.7055*t8411;
  t8413 = 0. + t8410 + t8412;
  t8541 = -1.*t8324*t8535;
  t8543 = t8315*t8539;
  t8544 = t8541 + t8543;
  t8546 = t8315*t8535;
  t8552 = t8324*t8539;
  t8554 = t8546 + t8552;
  t8421 = -0.7055*t8409;
  t8423 = -0.0184*t8411;
  t8427 = 0. + t8421 + t8423;
  t8437 = -1.1135*t8436;
  t8449 = 0.0216*t8443;
  t8451 = 0. + t8437 + t8449;
  t8558 = t8382*t8544;
  t8559 = t8370*t8554;
  t8561 = t8558 + t8559;
  t8564 = t8370*t8544;
  t8565 = -1.*t8382*t8554;
  t8566 = t8564 + t8565;
  t8460 = -0.0216*t8436;
  t8461 = -1.1135*t8443;
  t8463 = 0. + t8460 + t8461;
  t8569 = -1.*t8411*t8561;
  t8570 = t8406*t8566;
  t8571 = t8569 + t8570;
  t8574 = t8406*t8561;
  t8575 = t8411*t8566;
  t8576 = t8574 + t8575;
  t8510 = 0.135*t8308;
  t8511 = 0.049*t8338;
  t8512 = 0. + t8510 + t8511;
  t8519 = -0.09*t8353;
  t8521 = 0.049*t8356;
  t8523 = 0. + t8519 + t8521;
  t8609 = t8311*t8518*t8338;
  t8610 = t8499*t8356;
  t8611 = t8609 + t8610;
  t8619 = t8499*t8311;
  t8620 = -1.*t8518*t8338*t8356;
  t8622 = t8619 + t8620;
  t8625 = -1.*t8324*t8611;
  t8630 = t8315*t8622;
  t8631 = t8625 + t8630;
  t8633 = t8315*t8611;
  t8635 = t8324*t8622;
  t8636 = t8633 + t8635;
  t8640 = t8382*t8631;
  t8641 = t8370*t8636;
  t8643 = t8640 + t8641;
  t8647 = t8370*t8631;
  t8649 = -1.*t8382*t8636;
  t8650 = t8647 + t8649;
  t8652 = -1.*t8411*t8643;
  t8655 = t8406*t8650;
  t8656 = t8652 + t8655;
  t8659 = t8406*t8643;
  t8660 = t8411*t8650;
  t8661 = t8659 + t8660;
  t8243 = 0.135*t596;
  t8253 = -0.1305*t2897*t596;
  t8255 = t596*t7824;
  t8258 = t596*t647*t7923;
  t8260 = t841*t7939;
  t8275 = t1238*t7969;
  t8276 = t1490*t7985;
  t8277 = t1607*t8027;
  t8281 = t1963*t8071;
  t8283 = t2025*t8098;
  t8286 = t2253*t8119;
  t8287 = t2536*t8144;
  t8290 = t2690*t8151;
  t8291 = 0.0306*t2719;
  t8293 = -1.1312*t2793;
  t8294 = 0. + t8243 + t8253 + t8255 + t8258 + t8260 + t8275 + t8276 + t8277 + t8281 + t8283 + t8286 + t8287 + t8290 + t8291 + t8293;
  t8177 = t4371*t8167;
  t8225 = -1.*t8215*t5863;
  t8227 = t8177 + t8225;
  t8310 = -0.049*t8308;
  t8330 = t8305*t8311*t8328;
  t8347 = 0.004500000000000004*t8338;
  t8363 = t8305*t8359;
  t8369 = -1.*t8305*t8366*t8356;
  t8393 = t8386*t8391;
  t8405 = t8397*t8403;
  t8420 = t8413*t8416;
  t8433 = t8427*t8432;
  t8456 = t8451*t8455;
  t8472 = t8463*t8468;
  t8476 = t8443*t8455;
  t8477 = t8434*t8468;
  t8478 = t8476 + t8477;
  t8479 = 0.0306*t8478;
  t8480 = t8434*t8455;
  t8483 = -1.*t8443*t8468;
  t8484 = t8480 + t8483;
  t8486 = -1.1312*t8484;
  t8487 = 0. + t8310 + t8330 + t8347 + t8363 + t8369 + t8393 + t8405 + t8420 + t8433 + t8456 + t8472 + t8479 + t8486;
  t8503 = -1.*t8499;
  t8506 = 1. + t8503;
  t8507 = 0.135*t8506;
  t8509 = 0.1305*t8499*t8305;
  t8513 = t8499*t8512;
  t8516 = t8499*t8338*t8359;
  t8526 = -1.*t8518*t8523;
  t8536 = t8328*t8535;
  t8540 = t8366*t8539;
  t8545 = t8386*t8544;
  t8555 = t8397*t8554;
  t8562 = t8413*t8561;
  t8567 = t8427*t8566;
  t8572 = t8451*t8571;
  t8578 = t8463*t8576;
  t8580 = t8443*t8571;
  t8581 = t8434*t8576;
  t8582 = t8580 + t8581;
  t8586 = 0.0306*t8582;
  t8587 = t8434*t8571;
  t8588 = -1.*t8443*t8576;
  t8592 = t8587 + t8588;
  t8594 = -1.1312*t8592;
  t8595 = 0. + t8507 + t8509 + t8513 + t8516 + t8526 + t8536 + t8540 + t8545 + t8555 + t8562 + t8567 + t8572 + t8578 + t8586 + t8594;
  t8599 = -0.135*t8518;
  t8601 = 0.1305*t8305*t8518;
  t8602 = t8518*t8512;
  t8603 = t8518*t8338*t8359;
  t8604 = t8499*t8523;
  t8614 = t8328*t8611;
  t8623 = t8366*t8622;
  t8632 = t8386*t8631;
  t8639 = t8397*t8636;
  t8645 = t8413*t8643;
  t8651 = t8427*t8650;
  t8658 = t8451*t8656;
  t8665 = t8463*t8661;
  t8668 = t8443*t8656;
  t8672 = t8434*t8661;
  t8673 = t8668 + t8672;
  t8674 = 0.0306*t8673;
  t8675 = t8434*t8656;
  t8676 = -1.*t8443*t8661;
  t8677 = t8675 + t8676;
  t8679 = -1.1312*t8677;
  t8680 = 0. + t8599 + t8601 + t8602 + t8603 + t8604 + t8614 + t8623 + t8632 + t8639 + t8645 + t8651 + t8658 + t8665 + t8674 + t8679;
  t8685 = t841*t2897*t8215;
  t8687 = t647*t8167;
  t8692 = t8685 + t8687;
  t8233 = t6287*t8167;
  t8237 = -1.*t8215*t6514;
  t8238 = t8233 + t8237;
  p_output1[0]=t7334*(-1.*t2862*t8227 + t6148*t8238 - 1.*t7204*t8294) + (0. - 1.*t2862*t5863 + t6148*t6514)*t7334*t8487 + (0. + t2862*t4371 - 1.*t6148*t6287)*t7334*t8595 + (0. + t7129 + t7175)*t7334*t8680;
  p_output1[1]=t7334*(0. - 1.*t2897*t5863*t596 + t2897*t6148*t841)*t8487 + (0. + t2897*t4371*t596 + t6148*t647)*t7334*t8595 + t7334*(0. - 1.*t5863*t647 - 1.*t2897*t4371*t841)*t8680 + t7334*(-1.*t2897*t596*t8227 + t6017*t8294 - 1.*t6148*t8692);
  p_output1[2]=t7334*(0. + t2897*t596*t6514 - 1.*t2862*t2897*t841)*t8487 + (0. - 1.*t2897*t596*t6287 - 1.*t2862*t647)*t7334*t8595 + (0. + t6295 + t6978)*t7334*t8680 + t7334*(t2897*t596*t8238 - 1.*t7009*t8294 + t2862*t8692);
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
