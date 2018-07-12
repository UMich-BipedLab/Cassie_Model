/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:33:08 GMT-04:00
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
  double t693;
  double t934;
  double t1224;
  double t607;
  double t1675;
  double t44;
  double t853;
  double t1801;
  double t1969;
  double t2249;
  double t2435;
  double t2529;
  double t2634;
  double t3245;
  double t3306;
  double t3320;
  double t3668;
  double t3123;
  double t3125;
  double t3195;
  double t3780;
  double t4925;
  double t4936;
  double t4955;
  double t5043;
  double t4725;
  double t4810;
  double t4845;
  double t5276;
  double t5311;
  double t5317;
  double t5567;
  double t5572;
  double t5590;
  double t5595;
  double t5718;
  double t5754;
  double t5763;
  double t5845;
  double t5881;
  double t5910;
  double t6020;
  double t6101;
  double t6106;
  double t6161;
  double t6178;
  double t6190;
  double t6198;
  double t6221;
  double t6229;
  double t6232;
  double t284;
  double t316;
  double t455;
  double t576;
  double t2716;
  double t2792;
  double t6409;
  double t6411;
  double t6414;
  double t6428;
  double t6432;
  double t6438;
  double t3404;
  double t3750;
  double t3756;
  double t3781;
  double t3790;
  double t4044;
  double t6450;
  double t6457;
  double t6494;
  double t5042;
  double t5048;
  double t5182;
  double t5393;
  double t5507;
  double t5540;
  double t5592;
  double t5620;
  double t5715;
  double t6596;
  double t6617;
  double t6618;
  double t6633;
  double t6645;
  double t6650;
  double t5799;
  double t5818;
  double t5831;
  double t6143;
  double t6170;
  double t6175;
  double t6678;
  double t6684;
  double t6693;
  double t6732;
  double t6750;
  double t6772;
  double t6212;
  double t6216;
  double t6220;
  double t6776;
  double t6777;
  double t6786;
  double t6788;
  double t6791;
  double t6812;
  double t6949;
  double t6951;
  double t6991;
  double t7055;
  double t7062;
  double t7066;
  double t7093;
  double t7101;
  double t7102;
  double t7110;
  double t7112;
  double t7120;
  double t7126;
  double t7127;
  double t7134;
  double t7143;
  double t7145;
  double t7146;
  double t7148;
  double t7149;
  double t7151;
  double t7221;
  double t7224;
  double t7232;
  double t7253;
  double t7257;
  double t7259;
  double t7262;
  double t7273;
  double t7278;
  double t7287;
  double t7290;
  double t7295;
  double t7306;
  double t7313;
  double t7314;
  double t7324;
  double t7332;
  double t7333;
  double t7340;
  double t7346;
  double t7349;
  double t7399;
  double t7401;
  double t7406;
  double t7435;
  double t7438;
  double t7442;
  double t7445;
  double t7447;
  double t7448;
  double t7450;
  double t7452;
  double t7453;
  double t7461;
  double t7467;
  double t7476;
  double t7483;
  double t7484;
  double t7485;
  double t7492;
  double t7497;
  double t7505;
  double t7558;
  double t7560;
  double t7570;
  double t7580;
  double t7606;
  double t7622;
  double t7624;
  double t7625;
  double t7634;
  double t7639;
  double t7641;
  double t7649;
  double t7654;
  double t7661;
  double t7665;
  double t7673;
  double t7674;
  double t7676;
  double t7680;
  double t7691;
  double t7753;
  double t7754;
  double t7759;
  double t7771;
  double t7776;
  double t7785;
  double t7809;
  double t7817;
  double t7824;
  double t7826;
  double t7830;
  double t7839;
  double t7840;
  double t7843;
  double t7850;
  double t7863;
  double t7877;
  double t7896;
  double t7900;
  double t7907;
  double t7990;
  double t7995;
  double t7998;
  double t8018;
  double t8020;
  double t8028;
  double t8034;
  double t8041;
  double t8042;
  double t8045;
  double t8046;
  double t8047;
  double t8053;
  double t8055;
  double t8060;
  double t8068;
  double t8069;
  double t8070;
  double t8127;
  double t8131;
  double t8142;
  double t8148;
  double t8150;
  double t8155;
  double t8158;
  double t8163;
  double t8170;
  double t8172;
  double t8173;
  double t8178;
  double t8189;
  double t8193;
  double t8234;
  double t8236;
  double t8237;
  double t8242;
  double t8243;
  double t8264;
  double t8268;
  double t8279;
  double t8280;
  double t8281;
  double t8284;
  double t8285;
  double t8286;
  double t8288;
  double t8291;
  double t8293;
  double t8298;
  double t8303;
  double t8305;
  double t8001;
  double t8007;
  double t8014;
  double t8032;
  double t8044;
  double t8052;
  double t8063;
  double t8076;
  double t8079;
  double t8084;
  double t8092;
  double t8093;
  double t8096;
  double t8098;
  double t8099;
  double t8103;
  double t6547;
  double t6571;
  double t6582;
  double t8375;
  double t8376;
  double t8379;
  double t8384;
  double t8386;
  double t8387;
  double t8341;
  double t8342;
  double t8343;
  double t8349;
  double t8355;
  double t8426;
  double t8427;
  double t8428;
  double t8434;
  double t8437;
  double t8439;
  double t8461;
  double t8464;
  double t8465;
  double t8468;
  double t8474;
  double t8475;
  double t8491;
  double t8494;
  double t8495;
  double t8498;
  double t8499;
  double t8503;
  double t8515;
  double t8516;
  double t8517;
  double t8519;
  double t8520;
  double t8521;
  double t8565;
  double t8566;
  double t8568;
  double t8575;
  double t8579;
  double t8582;
  double t8584;
  double t8585;
  double t8546;
  double t8551;
  double t8555;
  double t8559;
  double t8560;
  double t8603;
  double t8604;
  double t8607;
  double t8616;
  double t8624;
  double t8625;
  double t8629;
  double t8630;
  double t8635;
  double t8638;
  double t8639;
  double t8641;
  double t8646;
  double t8651;
  double t8654;
  double t8687;
  double t8689;
  double t8690;
  double t8701;
  double t8702;
  double t8703;
  double t8705;
  double t8706;
  double t8710;
  double t8712;
  double t8713;
  double t8714;
  double t8717;
  double t8721;
  double t8724;
  double t8774;
  double t8776;
  double t6876;
  double t8747;
  double t8751;
  double t8758;
  double t8765;
  double t8768;
  double t8808;
  double t8810;
  double t8813;
  double t8819;
  double t8820;
  double t8822;
  double t8823;
  double t8840;
  double t8842;
  double t8843;
  double t8847;
  double t8848;
  double t8853;
  double t8854;
  double t8778;
  double t6882;
  double t6893;
  double t8886;
  double t8889;
  double t8893;
  double t8895;
  double t8897;
  double t8827;
  double t8914;
  double t8917;
  double t8919;
  double t8833;
  double t8856;
  double t8952;
  double t8953;
  double t8957;
  double t8864;
  t693 = Cos(var1[5]);
  t934 = Sin(var1[3]);
  t1224 = Sin(var1[4]);
  t607 = Cos(var1[3]);
  t1675 = Sin(var1[5]);
  t44 = Cos(var1[6]);
  t853 = -1.*t607*t693;
  t1801 = -1.*t934*t1224*t1675;
  t1969 = t853 + t1801;
  t2249 = -1.*t693*t934*t1224;
  t2435 = t607*t1675;
  t2529 = t2249 + t2435;
  t2634 = Sin(var1[6]);
  t3245 = Cos(var1[7]);
  t3306 = -1.*t3245;
  t3320 = 1. + t3306;
  t3668 = Sin(var1[7]);
  t3123 = t44*t1969;
  t3125 = t2529*t2634;
  t3195 = t3123 + t3125;
  t3780 = Cos(var1[4]);
  t4925 = Cos(var1[8]);
  t4936 = -1.*t4925;
  t4955 = 1. + t4936;
  t5043 = Sin(var1[8]);
  t4725 = -1.*t3780*t3245*t934;
  t4810 = t3195*t3668;
  t4845 = t4725 + t4810;
  t5276 = t44*t2529;
  t5311 = -1.*t1969*t2634;
  t5317 = t5276 + t5311;
  t5567 = Cos(var1[9]);
  t5572 = -1.*t5567;
  t5590 = 1. + t5572;
  t5595 = Sin(var1[9]);
  t5718 = t4925*t4845;
  t5754 = t5317*t5043;
  t5763 = t5718 + t5754;
  t5845 = t4925*t5317;
  t5881 = -1.*t4845*t5043;
  t5910 = t5845 + t5881;
  t6020 = Cos(var1[10]);
  t6101 = -1.*t6020;
  t6106 = 1. + t6101;
  t6161 = Sin(var1[10]);
  t6178 = -1.*t5595*t5763;
  t6190 = t5567*t5910;
  t6198 = t6178 + t6190;
  t6221 = t5567*t5763;
  t6229 = t5595*t5910;
  t6232 = t6221 + t6229;
  t284 = -1.*t44;
  t316 = 1. + t284;
  t455 = 0.135*t316;
  t576 = 0. + t455;
  t2716 = -0.135*t2634;
  t2792 = 0. + t2716;
  t6409 = -1.*t693*t934;
  t6411 = t607*t1224*t1675;
  t6414 = t6409 + t6411;
  t6428 = t607*t693*t1224;
  t6432 = t934*t1675;
  t6438 = t6428 + t6432;
  t3404 = 0.135*t3320;
  t3750 = 0.049*t3668;
  t3756 = 0. + t3404 + t3750;
  t3781 = -0.049*t3320;
  t3790 = 0.135*t3668;
  t4044 = 0. + t3781 + t3790;
  t6450 = t44*t6414;
  t6457 = t6438*t2634;
  t6494 = t6450 + t6457;
  t5042 = -0.049*t4955;
  t5048 = -0.09*t5043;
  t5182 = 0. + t5042 + t5048;
  t5393 = -0.09*t4955;
  t5507 = 0.049*t5043;
  t5540 = 0. + t5393 + t5507;
  t5592 = -0.049*t5590;
  t5620 = -0.21*t5595;
  t5715 = 0. + t5592 + t5620;
  t6596 = t607*t3780*t3245;
  t6617 = t6494*t3668;
  t6618 = t6596 + t6617;
  t6633 = t44*t6438;
  t6645 = -1.*t6414*t2634;
  t6650 = t6633 + t6645;
  t5799 = -0.21*t5590;
  t5818 = 0.049*t5595;
  t5831 = 0. + t5799 + t5818;
  t6143 = -0.2707*t6106;
  t6170 = 0.0016*t6161;
  t6175 = 0. + t6143 + t6170;
  t6678 = t4925*t6618;
  t6684 = t6650*t5043;
  t6693 = t6678 + t6684;
  t6732 = t4925*t6650;
  t6750 = -1.*t6618*t5043;
  t6772 = t6732 + t6750;
  t6212 = -0.0016*t6106;
  t6216 = -0.2707*t6161;
  t6220 = 0. + t6212 + t6216;
  t6776 = -1.*t5595*t6693;
  t6777 = t5567*t6772;
  t6786 = t6776 + t6777;
  t6788 = t5567*t6693;
  t6791 = t5595*t6772;
  t6812 = t6788 + t6791;
  t6949 = t607*t3780*t44*t1675;
  t6951 = t607*t3780*t693*t2634;
  t6991 = t6949 + t6951;
  t7055 = -1.*t607*t3245*t1224;
  t7062 = t6991*t3668;
  t7066 = t7055 + t7062;
  t7093 = t607*t3780*t693*t44;
  t7101 = -1.*t607*t3780*t1675*t2634;
  t7102 = t7093 + t7101;
  t7110 = t4925*t7066;
  t7112 = t7102*t5043;
  t7120 = t7110 + t7112;
  t7126 = t4925*t7102;
  t7127 = -1.*t7066*t5043;
  t7134 = t7126 + t7127;
  t7143 = -1.*t5595*t7120;
  t7145 = t5567*t7134;
  t7146 = t7143 + t7145;
  t7148 = t5567*t7120;
  t7149 = t5595*t7134;
  t7151 = t7148 + t7149;
  t7221 = t3780*t44*t934*t1675;
  t7224 = t3780*t693*t934*t2634;
  t7232 = t7221 + t7224;
  t7253 = -1.*t3245*t934*t1224;
  t7257 = t7232*t3668;
  t7259 = t7253 + t7257;
  t7262 = t3780*t693*t44*t934;
  t7273 = -1.*t3780*t934*t1675*t2634;
  t7278 = t7262 + t7273;
  t7287 = t4925*t7259;
  t7290 = t7278*t5043;
  t7295 = t7287 + t7290;
  t7306 = t4925*t7278;
  t7313 = -1.*t7259*t5043;
  t7314 = t7306 + t7313;
  t7324 = -1.*t5595*t7295;
  t7332 = t5567*t7314;
  t7333 = t7324 + t7332;
  t7340 = t5567*t7295;
  t7346 = t5595*t7314;
  t7349 = t7340 + t7346;
  t7399 = -1.*t44*t1224*t1675;
  t7401 = -1.*t693*t1224*t2634;
  t7406 = t7399 + t7401;
  t7435 = -1.*t3780*t3245;
  t7438 = t7406*t3668;
  t7442 = t7435 + t7438;
  t7445 = -1.*t693*t44*t1224;
  t7447 = t1224*t1675*t2634;
  t7448 = t7445 + t7447;
  t7450 = t4925*t7442;
  t7452 = t7448*t5043;
  t7453 = t7450 + t7452;
  t7461 = t4925*t7448;
  t7467 = -1.*t7442*t5043;
  t7476 = t7461 + t7467;
  t7483 = -1.*t5595*t7453;
  t7484 = t5567*t7476;
  t7485 = t7483 + t7484;
  t7492 = t5567*t7453;
  t7497 = t5595*t7476;
  t7505 = t7492 + t7497;
  t7558 = t693*t934;
  t7560 = -1.*t607*t1224*t1675;
  t7570 = t7558 + t7560;
  t7580 = t7570*t2634;
  t7606 = t6633 + t7580;
  t7622 = t44*t7570;
  t7624 = -1.*t6438*t2634;
  t7625 = t7622 + t7624;
  t7634 = t4925*t7606*t3668;
  t7639 = t7625*t5043;
  t7641 = t7634 + t7639;
  t7649 = t4925*t7625;
  t7654 = -1.*t7606*t3668*t5043;
  t7661 = t7649 + t7654;
  t7665 = -1.*t5595*t7641;
  t7673 = t5567*t7661;
  t7674 = t7665 + t7673;
  t7676 = t5567*t7641;
  t7680 = t5595*t7661;
  t7691 = t7676 + t7680;
  t7753 = t693*t934*t1224;
  t7754 = -1.*t607*t1675;
  t7759 = t7753 + t7754;
  t7771 = t44*t7759;
  t7776 = t1969*t2634;
  t7785 = t7771 + t7776;
  t7809 = -1.*t7759*t2634;
  t7817 = t3123 + t7809;
  t7824 = t4925*t7785*t3668;
  t7826 = t7817*t5043;
  t7830 = t7824 + t7826;
  t7839 = t4925*t7817;
  t7840 = -1.*t7785*t3668*t5043;
  t7843 = t7839 + t7840;
  t7850 = -1.*t5595*t7830;
  t7863 = t5567*t7843;
  t7877 = t7850 + t7863;
  t7896 = t5567*t7830;
  t7900 = t5595*t7843;
  t7907 = t7896 + t7900;
  t7990 = t3780*t693*t44;
  t7995 = -1.*t3780*t1675*t2634;
  t7998 = t7990 + t7995;
  t8018 = -1.*t3780*t44*t1675;
  t8020 = -1.*t3780*t693*t2634;
  t8028 = t8018 + t8020;
  t8034 = t4925*t7998*t3668;
  t8041 = t8028*t5043;
  t8042 = t8034 + t8041;
  t8045 = t4925*t8028;
  t8046 = -1.*t7998*t3668*t5043;
  t8047 = t8045 + t8046;
  t8053 = -1.*t5595*t8042;
  t8055 = t5567*t8047;
  t8060 = t8053 + t8055;
  t8068 = t5567*t8042;
  t8069 = t5595*t8047;
  t8070 = t8068 + t8069;
  t8127 = -1.*t44*t6414;
  t8131 = t8127 + t7624;
  t8142 = t4925*t6650*t3668;
  t8148 = t8131*t5043;
  t8150 = t8142 + t8148;
  t8155 = t4925*t8131;
  t8158 = -1.*t6650*t3668*t5043;
  t8163 = t8155 + t8158;
  t8170 = -1.*t5595*t8150;
  t8172 = t5567*t8163;
  t8173 = t8170 + t8172;
  t8178 = t5567*t8150;
  t8189 = t5595*t8163;
  t8193 = t8178 + t8189;
  t8234 = t607*t693;
  t8236 = t934*t1224*t1675;
  t8237 = t8234 + t8236;
  t8242 = -1.*t8237*t2634;
  t8243 = t7771 + t8242;
  t8264 = -1.*t44*t8237;
  t8268 = t8264 + t7809;
  t8279 = t4925*t8243*t3668;
  t8280 = t8268*t5043;
  t8281 = t8279 + t8280;
  t8284 = t4925*t8268;
  t8285 = -1.*t8243*t3668*t5043;
  t8286 = t8284 + t8285;
  t8288 = -1.*t5595*t8281;
  t8291 = t5567*t8286;
  t8293 = t8288 + t8291;
  t8298 = t5567*t8281;
  t8303 = t5595*t8286;
  t8305 = t8298 + t8303;
  t8001 = 0.1305*t3245*t7998;
  t8007 = t7998*t3756;
  t8014 = t7998*t3668*t5182;
  t8032 = t8028*t5540;
  t8044 = t5715*t8042;
  t8052 = t5831*t8047;
  t8063 = t6175*t8060;
  t8076 = t6220*t8070;
  t8079 = t6161*t8060;
  t8084 = t6020*t8070;
  t8092 = t8079 + t8084;
  t8093 = -0.0016*t8092;
  t8096 = t6020*t8060;
  t8098 = -1.*t6161*t8070;
  t8099 = t8096 + t8098;
  t8103 = -0.2707*t8099;
  t6547 = t3245*t6494;
  t6571 = -1.*t607*t3780*t3668;
  t6582 = t6547 + t6571;
  t8375 = -1.*t4925*t5595*t6582;
  t8376 = -1.*t5567*t6582*t5043;
  t8379 = t8375 + t8376;
  t8384 = t5567*t4925*t6582;
  t8386 = -1.*t5595*t6582*t5043;
  t8387 = t8384 + t8386;
  t8341 = 0.135*t3245;
  t8342 = -0.049*t3668;
  t8343 = t8341 + t8342;
  t8349 = 0.049*t3245;
  t8355 = t8349 + t3790;
  t8426 = t44*t8237;
  t8427 = t7759*t2634;
  t8428 = t8426 + t8427;
  t8434 = t3245*t8428;
  t8437 = -1.*t3780*t934*t3668;
  t8439 = t8434 + t8437;
  t8461 = -1.*t4925*t5595*t8439;
  t8464 = -1.*t5567*t8439*t5043;
  t8465 = t8461 + t8464;
  t8468 = t5567*t4925*t8439;
  t8474 = -1.*t5595*t8439*t5043;
  t8475 = t8468 + t8474;
  t8491 = t3780*t44*t1675;
  t8494 = t3780*t693*t2634;
  t8495 = t8491 + t8494;
  t8498 = t3245*t8495;
  t8499 = t1224*t3668;
  t8503 = t8498 + t8499;
  t8515 = -1.*t4925*t5595*t8503;
  t8516 = -1.*t5567*t8503*t5043;
  t8517 = t8515 + t8516;
  t8519 = t5567*t4925*t8503;
  t8520 = -1.*t5595*t8503*t5043;
  t8521 = t8519 + t8520;
  t8565 = -1.*t4925*t6618;
  t8566 = -1.*t6650*t5043;
  t8568 = t8565 + t8566;
  t8575 = t5595*t8568;
  t8579 = t8575 + t6777;
  t8582 = t5567*t8568;
  t8584 = -1.*t5595*t6772;
  t8585 = t8582 + t8584;
  t8546 = 0.049*t4925;
  t8551 = t8546 + t5048;
  t8555 = -0.09*t4925;
  t8559 = -0.049*t5043;
  t8560 = t8555 + t8559;
  t8603 = t3780*t3245*t934;
  t8604 = t8428*t3668;
  t8607 = t8603 + t8604;
  t8616 = -1.*t4925*t8607;
  t8624 = -1.*t8243*t5043;
  t8625 = t8616 + t8624;
  t8629 = t4925*t8243;
  t8630 = -1.*t8607*t5043;
  t8635 = t8629 + t8630;
  t8638 = t5595*t8625;
  t8639 = t5567*t8635;
  t8641 = t8638 + t8639;
  t8646 = t5567*t8625;
  t8651 = -1.*t5595*t8635;
  t8654 = t8646 + t8651;
  t8687 = -1.*t3245*t1224;
  t8689 = t8495*t3668;
  t8690 = t8687 + t8689;
  t8701 = -1.*t4925*t8690;
  t8702 = -1.*t7998*t5043;
  t8703 = t8701 + t8702;
  t8705 = t4925*t7998;
  t8706 = -1.*t8690*t5043;
  t8710 = t8705 + t8706;
  t8712 = t5595*t8703;
  t8713 = t5567*t8710;
  t8714 = t8712 + t8713;
  t8717 = t5567*t8703;
  t8721 = -1.*t5595*t8710;
  t8724 = t8717 + t8721;
  t8774 = -1.*t5567*t6693;
  t8776 = t8774 + t8584;
  t6876 = t6020*t6786;
  t8747 = -0.21*t5567;
  t8751 = -0.049*t5595;
  t8758 = t8747 + t8751;
  t8765 = 0.049*t5567;
  t8768 = t8765 + t5620;
  t8808 = t4925*t8607;
  t8810 = t8243*t5043;
  t8813 = t8808 + t8810;
  t8819 = -1.*t5595*t8813;
  t8820 = t8819 + t8639;
  t8822 = -1.*t5567*t8813;
  t8823 = t8822 + t8651;
  t8840 = t4925*t8690;
  t8842 = t7998*t5043;
  t8843 = t8840 + t8842;
  t8847 = -1.*t5595*t8843;
  t8848 = t8847 + t8713;
  t8853 = -1.*t5567*t8843;
  t8854 = t8853 + t8721;
  t8778 = -1.*t6161*t6786;
  t6882 = -1.*t6161*t6812;
  t6893 = t6876 + t6882;
  t8886 = 0.0016*t6020;
  t8889 = t8886 + t6216;
  t8893 = -0.2707*t6020;
  t8895 = -0.0016*t6161;
  t8897 = t8893 + t8895;
  t8827 = -1.*t6161*t8820;
  t8914 = t5567*t8813;
  t8917 = t5595*t8635;
  t8919 = t8914 + t8917;
  t8833 = t6020*t8820;
  t8856 = -1.*t6161*t8848;
  t8952 = t5567*t8843;
  t8953 = t5595*t8710;
  t8957 = t8952 + t8953;
  t8864 = t6020*t8848;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t2529*t2792 + t3195*t3756 + t4845*t5182 + t5317*t5540 + t1969*t576 + t5715*t5763 + t5831*t5910 + t6175*t6198 + t6220*t6232 - 0.0016*(t6161*t6198 + t6020*t6232) - 0.2707*(t6020*t6198 - 1.*t6161*t6232) - 1.*t3780*t4044*t934 + 0.1305*(t3195*t3245 + t3668*t3780*t934);
  p_output1[10]=t3780*t4044*t607 + t576*t6414 + t2792*t6438 + t3756*t6494 + 0.1305*t6582 + t5182*t6618 + t5540*t6650 + t5715*t6693 + t5831*t6772 + t6175*t6786 + t6220*t6812 - 0.0016*(t6161*t6786 + t6020*t6812) - 0.2707*t6893;
  p_output1[11]=0;
  p_output1[12]=-1.*t1224*t4044*t607 + t1675*t3780*t576*t607 + t2792*t3780*t607*t693 + t3756*t6991 + 0.1305*(t1224*t3668*t607 + t3245*t6991) + t5182*t7066 + t5540*t7102 + t5715*t7120 + t5831*t7134 + t6175*t7146 + t6220*t7151 - 0.0016*(t6161*t7146 + t6020*t7151) - 0.2707*(t6020*t7146 - 1.*t6161*t7151);
  p_output1[13]=t3756*t7232 + t5182*t7259 + t5540*t7278 + t5715*t7295 + t5831*t7314 + t6175*t7333 + t6220*t7349 - 0.0016*(t6161*t7333 + t6020*t7349) - 0.2707*(t6020*t7333 - 1.*t6161*t7349) - 1.*t1224*t4044*t934 + t1675*t3780*t576*t934 + t2792*t3780*t693*t934 + 0.1305*(t3245*t7232 + t1224*t3668*t934);
  p_output1[14]=-1.*t3780*t4044 - 1.*t1224*t1675*t576 - 1.*t1224*t2792*t693 + t3756*t7406 + 0.1305*(t3668*t3780 + t3245*t7406) + t5182*t7442 + t5540*t7448 + t5715*t7453 + t5831*t7476 + t6175*t7485 + t6220*t7505 - 0.0016*(t6161*t7485 + t6020*t7505) - 0.2707*(t6020*t7485 - 1.*t6161*t7505);
  p_output1[15]=t576*t6438 + t2792*t7570 + 0.1305*t3245*t7606 + t3756*t7606 + t3668*t5182*t7606 + t5540*t7625 + t5715*t7641 + t5831*t7661 + t6175*t7674 + t6220*t7691 - 0.0016*(t6161*t7674 + t6020*t7691) - 0.2707*(t6020*t7674 - 1.*t6161*t7691);
  p_output1[16]=t1969*t2792 + t576*t7759 + 0.1305*t3245*t7785 + t3756*t7785 + t3668*t5182*t7785 + t5540*t7817 + t5715*t7830 + t5831*t7843 + t6175*t7877 + t6220*t7907 - 0.0016*(t6161*t7877 + t6020*t7907) - 0.2707*(t6020*t7877 - 1.*t6161*t7907);
  p_output1[17]=-1.*t1675*t2792*t3780 + t3780*t576*t693 + t8001 + t8007 + t8014 + t8032 + t8044 + t8052 + t8063 + t8076 + t8093 + t8103;
  p_output1[18]=0.135*t2634*t6414 - 0.135*t44*t6438 + 0.1305*t3245*t6650 + t3756*t6650 + t3668*t5182*t6650 + t5540*t8131 + t5715*t8150 + t5831*t8163 + t6175*t8173 + t6220*t8193 - 0.0016*(t6161*t8173 + t6020*t8193) - 0.2707*(t6020*t8173 - 1.*t6161*t8193);
  p_output1[19]=-0.135*t44*t7759 + 0.135*t2634*t8237 + 0.1305*t3245*t8243 + t3756*t8243 + t3668*t5182*t8243 + t5540*t8268 + t5715*t8281 + t5831*t8286 + t6175*t8293 + t6220*t8305 - 0.0016*(t6161*t8293 + t6020*t8305) - 0.2707*(t6020*t8293 - 1.*t6161*t8305);
  p_output1[20]=0.135*t1675*t2634*t3780 - 0.135*t3780*t44*t693 + t8001 + t8007 + t8014 + t8032 + t8044 + t8052 + t8063 + t8076 + t8093 + t8103;
  p_output1[21]=0.1305*(-1.*t3245*t3780*t607 - 1.*t3668*t6494) + t5182*t6582 + t4925*t5715*t6582 - 1.*t5043*t5831*t6582 + t3780*t607*t8343 + t6494*t8355 + t6175*t8379 + t6220*t8387 - 0.0016*(t6161*t8379 + t6020*t8387) - 0.2707*(t6020*t8379 - 1.*t6161*t8387);
  p_output1[22]=t8355*t8428 + 0.1305*(t4725 - 1.*t3668*t8428) + t5182*t8439 + t4925*t5715*t8439 - 1.*t5043*t5831*t8439 + t6175*t8465 + t6220*t8475 - 0.0016*(t6161*t8465 + t6020*t8475) - 0.2707*(t6020*t8465 - 1.*t6161*t8475) + t3780*t8343*t934;
  p_output1[23]=-1.*t1224*t8343 + t8355*t8495 + 0.1305*(t1224*t3245 - 1.*t3668*t8495) + t5182*t8503 + t4925*t5715*t8503 - 1.*t5043*t5831*t8503 + t6175*t8517 + t6220*t8521 - 0.0016*(t6161*t8517 + t6020*t8521) - 0.2707*(t6020*t8517 - 1.*t6161*t8521);
  p_output1[24]=t5715*t6772 + t6650*t8551 + t6618*t8560 + t5831*t8568 + t6220*t8579 + t6175*t8585 - 0.2707*(-1.*t6161*t8579 + t6020*t8585) - 0.0016*(t6020*t8579 + t6161*t8585);
  p_output1[25]=t8243*t8551 + t8560*t8607 + t5831*t8625 + t5715*t8635 + t6220*t8641 + t6175*t8654 - 0.2707*(-1.*t6161*t8641 + t6020*t8654) - 0.0016*(t6020*t8641 + t6161*t8654);
  p_output1[26]=t7998*t8551 + t8560*t8690 + t5831*t8703 + t5715*t8710 + t6220*t8714 + t6175*t8724 - 0.2707*(-1.*t6161*t8714 + t6020*t8724) - 0.0016*(t6020*t8714 + t6161*t8724);
  p_output1[27]=t6220*t6786 + t6693*t8758 + t6772*t8768 + t6175*t8776 - 0.0016*(t6876 + t6161*t8776) - 0.2707*(t6020*t8776 + t8778);
  p_output1[28]=t8635*t8768 + t8758*t8813 + t6220*t8820 + t6175*t8823 - 0.2707*(t6020*t8823 + t8827) - 0.0016*(t6161*t8823 + t8833);
  p_output1[29]=t8710*t8768 + t8758*t8843 + t6220*t8848 + t6175*t8854 - 0.2707*(t6020*t8854 + t8856) - 0.0016*(t6161*t8854 + t8864);
  p_output1[30]=-0.0016*t6893 - 0.2707*(-1.*t6020*t6812 + t8778) + t6786*t8889 + t6812*t8897;
  p_output1[31]=t8820*t8889 + t8897*t8919 - 0.2707*(t8827 - 1.*t6020*t8919) - 0.0016*(t8833 - 1.*t6161*t8919);
  p_output1[32]=t8848*t8889 + t8897*t8957 - 0.2707*(t8856 - 1.*t6020*t8957) - 0.0016*(t8864 - 1.*t6161*t8957);
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
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
    ( !(mrows == 20 && ncols == 1) && 
      !(mrows == 1 && ncols == 20))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 20, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_knee_to_shin_left_mex.hh"

namespace SymExpression
{

void J_knee_to_shin_left_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
