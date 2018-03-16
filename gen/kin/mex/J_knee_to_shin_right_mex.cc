/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 11:08:25 GMT-04:00
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
  double t1850;
  double t3193;
  double t1867;
  double t1873;
  double t3586;
  double t1187;
  double t1196;
  double t1314;
  double t1474;
  double t1855;
  double t3010;
  double t3713;
  double t3917;
  double t4147;
  double t7127;
  double t7495;
  double t8062;
  double t1185;
  double t8159;
  double t8189;
  double t8202;
  double t8209;
  double t8212;
  double t8214;
  double t8219;
  double t8223;
  double t8229;
  double t8238;
  double t8289;
  double t8290;
  double t8291;
  double t8293;
  double t8296;
  double t8297;
  double t8308;
  double t8316;
  double t8318;
  double t8319;
  double t8329;
  double t8334;
  double t8335;
  double t8340;
  double t8341;
  double t8342;
  double t8345;
  double t8356;
  double t8358;
  double t8360;
  double t8378;
  double t8380;
  double t8382;
  double t1336;
  double t1521;
  double t1847;
  double t1859;
  double t1863;
  double t4587;
  double t5288;
  double t7083;
  double t7091;
  double t8108;
  double t8142;
  double t8152;
  double t8406;
  double t8408;
  double t8409;
  double t8416;
  double t8417;
  double t8418;
  double t8215;
  double t8220;
  double t8221;
  double t8423;
  double t8424;
  double t8426;
  double t8276;
  double t8281;
  double t8282;
  double t8303;
  double t8309;
  double t8312;
  double t8429;
  double t8430;
  double t8432;
  double t8438;
  double t8439;
  double t8440;
  double t8322;
  double t8323;
  double t8327;
  double t8344;
  double t8350;
  double t8351;
  double t8442;
  double t8444;
  double t8445;
  double t8447;
  double t8448;
  double t8449;
  double t8367;
  double t8369;
  double t8372;
  double t8453;
  double t8454;
  double t8455;
  double t8458;
  double t8460;
  double t8461;
  double t8478;
  double t8479;
  double t8480;
  double t8482;
  double t8483;
  double t8484;
  double t8490;
  double t8491;
  double t8492;
  double t8494;
  double t8495;
  double t8496;
  double t8498;
  double t8499;
  double t8500;
  double t8502;
  double t8503;
  double t8504;
  double t8506;
  double t8507;
  double t8508;
  double t8522;
  double t8523;
  double t8524;
  double t8526;
  double t8527;
  double t8528;
  double t8534;
  double t8535;
  double t8536;
  double t8538;
  double t8539;
  double t8540;
  double t8542;
  double t8543;
  double t8544;
  double t8546;
  double t8547;
  double t8548;
  double t8550;
  double t8551;
  double t8552;
  double t8566;
  double t8567;
  double t8568;
  double t8570;
  double t8571;
  double t8572;
  double t8578;
  double t8579;
  double t8580;
  double t8582;
  double t8583;
  double t8584;
  double t8586;
  double t8587;
  double t8588;
  double t8590;
  double t8591;
  double t8592;
  double t8594;
  double t8595;
  double t8596;
  double t8608;
  double t8609;
  double t8610;
  double t8616;
  double t8617;
  double t8612;
  double t8613;
  double t8614;
  double t8621;
  double t8622;
  double t8623;
  double t8625;
  double t8626;
  double t8627;
  double t8629;
  double t8630;
  double t8631;
  double t8633;
  double t8634;
  double t8635;
  double t8646;
  double t8647;
  double t8648;
  double t8654;
  double t8655;
  double t8656;
  double t8651;
  double t8652;
  double t8660;
  double t8661;
  double t8662;
  double t8664;
  double t8665;
  double t8666;
  double t8668;
  double t8669;
  double t8670;
  double t8672;
  double t8673;
  double t8674;
  double t8691;
  double t8692;
  double t8693;
  double t8687;
  double t8688;
  double t8689;
  double t8697;
  double t8698;
  double t8699;
  double t8701;
  double t8702;
  double t8703;
  double t8705;
  double t8706;
  double t8707;
  double t8709;
  double t8710;
  double t8711;
  double t8724;
  double t8725;
  double t8730;
  double t8731;
  double t8732;
  double t8734;
  double t8735;
  double t8736;
  double t8738;
  double t8739;
  double t8740;
  double t8742;
  double t8743;
  double t8744;
  double t8756;
  double t8757;
  double t8758;
  double t8763;
  double t8764;
  double t8760;
  double t8761;
  double t8768;
  double t8769;
  double t8770;
  double t8772;
  double t8773;
  double t8774;
  double t8776;
  double t8777;
  double t8778;
  double t8780;
  double t8781;
  double t8782;
  double t8690;
  double t8694;
  double t8695;
  double t8696;
  double t8700;
  double t8704;
  double t8708;
  double t8712;
  double t8713;
  double t8714;
  double t8715;
  double t8716;
  double t8717;
  double t8718;
  double t8719;
  double t8720;
  double t8434;
  double t8435;
  double t8436;
  double t8810;
  double t8811;
  double t8812;
  double t8814;
  double t8815;
  double t8816;
  double t8796;
  double t8797;
  double t8798;
  double t8800;
  double t8801;
  double t8828;
  double t8829;
  double t8830;
  double t8832;
  double t8833;
  double t8834;
  double t8841;
  double t8842;
  double t8843;
  double t8845;
  double t8846;
  double t8847;
  double t8859;
  double t8860;
  double t8861;
  double t8863;
  double t8864;
  double t8865;
  double t8873;
  double t8874;
  double t8875;
  double t8877;
  double t8878;
  double t8879;
  double t8897;
  double t8898;
  double t8899;
  double t8902;
  double t8903;
  double t8905;
  double t8906;
  double t8907;
  double t8890;
  double t8891;
  double t8893;
  double t8894;
  double t8895;
  double t8919;
  double t8920;
  double t8921;
  double t8923;
  double t8924;
  double t8925;
  double t8927;
  double t8928;
  double t8929;
  double t8931;
  double t8932;
  double t8933;
  double t8935;
  double t8936;
  double t8937;
  double t8949;
  double t8950;
  double t8951;
  double t8953;
  double t8954;
  double t8955;
  double t8957;
  double t8958;
  double t8959;
  double t8961;
  double t8962;
  double t8963;
  double t8965;
  double t8966;
  double t8967;
  double t8986;
  double t8987;
  double t8470;
  double t8978;
  double t8979;
  double t8980;
  double t8982;
  double t8983;
  double t8997;
  double t8998;
  double t8999;
  double t9002;
  double t9003;
  double t9005;
  double t9006;
  double t9017;
  double t9018;
  double t9019;
  double t9022;
  double t9023;
  double t9025;
  double t9026;
  double t8989;
  double t8471;
  double t8472;
  double t9037;
  double t9038;
  double t9040;
  double t9041;
  double t9042;
  double t9008;
  double t9050;
  double t9051;
  double t9052;
  double t9012;
  double t9028;
  double t9062;
  double t9063;
  double t9064;
  double t9032;
  t1850 = Sin(var1[3]);
  t3193 = Cos(var1[3]);
  t1867 = Cos(var1[5]);
  t1873 = Sin(var1[4]);
  t3586 = Sin(var1[5]);
  t1187 = Cos(var1[14]);
  t1196 = -1.*t1187;
  t1314 = 1. + t1196;
  t1474 = Sin(var1[14]);
  t1855 = Sin(var1[13]);
  t3010 = -1.*t1867*t1850*t1873;
  t3713 = t3193*t3586;
  t3917 = t3010 + t3713;
  t4147 = Cos(var1[13]);
  t7127 = -1.*t3193*t1867;
  t7495 = -1.*t1850*t1873*t3586;
  t8062 = t7127 + t7495;
  t1185 = Cos(var1[4]);
  t8159 = t1855*t3917;
  t8189 = t4147*t8062;
  t8202 = t8159 + t8189;
  t8209 = Cos(var1[15]);
  t8212 = -1.*t8209;
  t8214 = 1. + t8212;
  t8219 = Sin(var1[15]);
  t8223 = t4147*t3917;
  t8229 = -1.*t1855*t8062;
  t8238 = t8223 + t8229;
  t8289 = -1.*t1187*t1185*t1850;
  t8290 = t1474*t8202;
  t8291 = t8289 + t8290;
  t8293 = Cos(var1[16]);
  t8296 = -1.*t8293;
  t8297 = 1. + t8296;
  t8308 = Sin(var1[16]);
  t8316 = t8219*t8238;
  t8318 = t8209*t8291;
  t8319 = t8316 + t8318;
  t8329 = t8209*t8238;
  t8334 = -1.*t8219*t8291;
  t8335 = t8329 + t8334;
  t8340 = Cos(var1[17]);
  t8341 = -1.*t8340;
  t8342 = 1. + t8341;
  t8345 = Sin(var1[17]);
  t8356 = -1.*t8308*t8319;
  t8358 = t8293*t8335;
  t8360 = t8356 + t8358;
  t8378 = t8293*t8319;
  t8380 = t8308*t8335;
  t8382 = t8378 + t8380;
  t1336 = -0.049*t1314;
  t1521 = -0.135*t1474;
  t1847 = 0. + t1336 + t1521;
  t1859 = 0.135*t1855;
  t1863 = 0. + t1859;
  t4587 = -1.*t4147;
  t5288 = 1. + t4587;
  t7083 = -0.135*t5288;
  t7091 = 0. + t7083;
  t8108 = -0.135*t1314;
  t8142 = 0.049*t1474;
  t8152 = 0. + t8108 + t8142;
  t8406 = t3193*t1867*t1873;
  t8408 = t1850*t3586;
  t8409 = t8406 + t8408;
  t8416 = -1.*t1867*t1850;
  t8417 = t3193*t1873*t3586;
  t8418 = t8416 + t8417;
  t8215 = -0.09*t8214;
  t8220 = 0.049*t8219;
  t8221 = 0. + t8215 + t8220;
  t8423 = t1855*t8409;
  t8424 = t4147*t8418;
  t8426 = t8423 + t8424;
  t8276 = -0.049*t8214;
  t8281 = -0.09*t8219;
  t8282 = 0. + t8276 + t8281;
  t8303 = -0.049*t8297;
  t8309 = -0.21*t8308;
  t8312 = 0. + t8303 + t8309;
  t8429 = t4147*t8409;
  t8430 = -1.*t1855*t8418;
  t8432 = t8429 + t8430;
  t8438 = t1187*t3193*t1185;
  t8439 = t1474*t8426;
  t8440 = t8438 + t8439;
  t8322 = -0.21*t8297;
  t8323 = 0.049*t8308;
  t8327 = 0. + t8322 + t8323;
  t8344 = -0.2707*t8342;
  t8350 = 0.0016*t8345;
  t8351 = 0. + t8344 + t8350;
  t8442 = t8219*t8432;
  t8444 = t8209*t8440;
  t8445 = t8442 + t8444;
  t8447 = t8209*t8432;
  t8448 = -1.*t8219*t8440;
  t8449 = t8447 + t8448;
  t8367 = -0.0016*t8342;
  t8369 = -0.2707*t8345;
  t8372 = 0. + t8367 + t8369;
  t8453 = -1.*t8308*t8445;
  t8454 = t8293*t8449;
  t8455 = t8453 + t8454;
  t8458 = t8293*t8445;
  t8460 = t8308*t8449;
  t8461 = t8458 + t8460;
  t8478 = t3193*t1185*t1867*t1855;
  t8479 = t4147*t3193*t1185*t3586;
  t8480 = t8478 + t8479;
  t8482 = t4147*t3193*t1185*t1867;
  t8483 = -1.*t3193*t1185*t1855*t3586;
  t8484 = t8482 + t8483;
  t8490 = -1.*t1187*t3193*t1873;
  t8491 = t1474*t8480;
  t8492 = t8490 + t8491;
  t8494 = t8219*t8484;
  t8495 = t8209*t8492;
  t8496 = t8494 + t8495;
  t8498 = t8209*t8484;
  t8499 = -1.*t8219*t8492;
  t8500 = t8498 + t8499;
  t8502 = -1.*t8308*t8496;
  t8503 = t8293*t8500;
  t8504 = t8502 + t8503;
  t8506 = t8293*t8496;
  t8507 = t8308*t8500;
  t8508 = t8506 + t8507;
  t8522 = t1185*t1867*t1855*t1850;
  t8523 = t4147*t1185*t1850*t3586;
  t8524 = t8522 + t8523;
  t8526 = t4147*t1185*t1867*t1850;
  t8527 = -1.*t1185*t1855*t1850*t3586;
  t8528 = t8526 + t8527;
  t8534 = -1.*t1187*t1850*t1873;
  t8535 = t1474*t8524;
  t8536 = t8534 + t8535;
  t8538 = t8219*t8528;
  t8539 = t8209*t8536;
  t8540 = t8538 + t8539;
  t8542 = t8209*t8528;
  t8543 = -1.*t8219*t8536;
  t8544 = t8542 + t8543;
  t8546 = -1.*t8308*t8540;
  t8547 = t8293*t8544;
  t8548 = t8546 + t8547;
  t8550 = t8293*t8540;
  t8551 = t8308*t8544;
  t8552 = t8550 + t8551;
  t8566 = -1.*t1867*t1855*t1873;
  t8567 = -1.*t4147*t1873*t3586;
  t8568 = t8566 + t8567;
  t8570 = -1.*t4147*t1867*t1873;
  t8571 = t1855*t1873*t3586;
  t8572 = t8570 + t8571;
  t8578 = -1.*t1187*t1185;
  t8579 = t1474*t8568;
  t8580 = t8578 + t8579;
  t8582 = t8219*t8572;
  t8583 = t8209*t8580;
  t8584 = t8582 + t8583;
  t8586 = t8209*t8572;
  t8587 = -1.*t8219*t8580;
  t8588 = t8586 + t8587;
  t8590 = -1.*t8308*t8584;
  t8591 = t8293*t8588;
  t8592 = t8590 + t8591;
  t8594 = t8293*t8584;
  t8595 = t8308*t8588;
  t8596 = t8594 + t8595;
  t8608 = t1867*t1850;
  t8609 = -1.*t3193*t1873*t3586;
  t8610 = t8608 + t8609;
  t8616 = t1855*t8610;
  t8617 = t8429 + t8616;
  t8612 = -1.*t1855*t8409;
  t8613 = t4147*t8610;
  t8614 = t8612 + t8613;
  t8621 = t8219*t8614;
  t8622 = t8209*t1474*t8617;
  t8623 = t8621 + t8622;
  t8625 = t8209*t8614;
  t8626 = -1.*t1474*t8219*t8617;
  t8627 = t8625 + t8626;
  t8629 = -1.*t8308*t8623;
  t8630 = t8293*t8627;
  t8631 = t8629 + t8630;
  t8633 = t8293*t8623;
  t8634 = t8308*t8627;
  t8635 = t8633 + t8634;
  t8646 = t1867*t1850*t1873;
  t8647 = -1.*t3193*t3586;
  t8648 = t8646 + t8647;
  t8654 = t4147*t8648;
  t8655 = t1855*t8062;
  t8656 = t8654 + t8655;
  t8651 = -1.*t1855*t8648;
  t8652 = t8651 + t8189;
  t8660 = t8219*t8652;
  t8661 = t8209*t1474*t8656;
  t8662 = t8660 + t8661;
  t8664 = t8209*t8652;
  t8665 = -1.*t1474*t8219*t8656;
  t8666 = t8664 + t8665;
  t8668 = -1.*t8308*t8662;
  t8669 = t8293*t8666;
  t8670 = t8668 + t8669;
  t8672 = t8293*t8662;
  t8673 = t8308*t8666;
  t8674 = t8672 + t8673;
  t8691 = t4147*t1185*t1867;
  t8692 = -1.*t1185*t1855*t3586;
  t8693 = t8691 + t8692;
  t8687 = -1.*t1185*t1867*t1855;
  t8688 = -1.*t4147*t1185*t3586;
  t8689 = t8687 + t8688;
  t8697 = t8219*t8689;
  t8698 = t8209*t1474*t8693;
  t8699 = t8697 + t8698;
  t8701 = t8209*t8689;
  t8702 = -1.*t1474*t8219*t8693;
  t8703 = t8701 + t8702;
  t8705 = -1.*t8308*t8699;
  t8706 = t8293*t8703;
  t8707 = t8705 + t8706;
  t8709 = t8293*t8699;
  t8710 = t8308*t8703;
  t8711 = t8709 + t8710;
  t8724 = -1.*t4147*t8418;
  t8725 = t8612 + t8724;
  t8730 = t8219*t8725;
  t8731 = t8209*t1474*t8432;
  t8732 = t8730 + t8731;
  t8734 = t8209*t8725;
  t8735 = -1.*t1474*t8219*t8432;
  t8736 = t8734 + t8735;
  t8738 = -1.*t8308*t8732;
  t8739 = t8293*t8736;
  t8740 = t8738 + t8739;
  t8742 = t8293*t8732;
  t8743 = t8308*t8736;
  t8744 = t8742 + t8743;
  t8756 = t3193*t1867;
  t8757 = t1850*t1873*t3586;
  t8758 = t8756 + t8757;
  t8763 = -1.*t1855*t8758;
  t8764 = t8654 + t8763;
  t8760 = -1.*t4147*t8758;
  t8761 = t8651 + t8760;
  t8768 = t8219*t8761;
  t8769 = t8209*t1474*t8764;
  t8770 = t8768 + t8769;
  t8772 = t8209*t8761;
  t8773 = -1.*t1474*t8219*t8764;
  t8774 = t8772 + t8773;
  t8776 = -1.*t8308*t8770;
  t8777 = t8293*t8774;
  t8778 = t8776 + t8777;
  t8780 = t8293*t8770;
  t8781 = t8308*t8774;
  t8782 = t8780 + t8781;
  t8690 = t8221*t8689;
  t8694 = -0.1305*t1187*t8693;
  t8695 = t8152*t8693;
  t8696 = t1474*t8282*t8693;
  t8700 = t8312*t8699;
  t8704 = t8327*t8703;
  t8708 = t8351*t8707;
  t8712 = t8372*t8711;
  t8713 = t8345*t8707;
  t8714 = t8340*t8711;
  t8715 = t8713 + t8714;
  t8716 = -0.0016*t8715;
  t8717 = t8340*t8707;
  t8718 = -1.*t8345*t8711;
  t8719 = t8717 + t8718;
  t8720 = -0.2707*t8719;
  t8434 = -1.*t3193*t1185*t1474;
  t8435 = t1187*t8426;
  t8436 = t8434 + t8435;
  t8810 = -1.*t8293*t8219*t8436;
  t8811 = -1.*t8209*t8308*t8436;
  t8812 = t8810 + t8811;
  t8814 = t8209*t8293*t8436;
  t8815 = -1.*t8219*t8308*t8436;
  t8816 = t8814 + t8815;
  t8796 = -0.135*t1187;
  t8797 = -0.049*t1474;
  t8798 = t8796 + t8797;
  t8800 = 0.049*t1187;
  t8801 = t8800 + t1521;
  t8828 = t1855*t8648;
  t8829 = t4147*t8758;
  t8830 = t8828 + t8829;
  t8832 = -1.*t1185*t1474*t1850;
  t8833 = t1187*t8830;
  t8834 = t8832 + t8833;
  t8841 = -1.*t8293*t8219*t8834;
  t8842 = -1.*t8209*t8308*t8834;
  t8843 = t8841 + t8842;
  t8845 = t8209*t8293*t8834;
  t8846 = -1.*t8219*t8308*t8834;
  t8847 = t8845 + t8846;
  t8859 = t1185*t1867*t1855;
  t8860 = t4147*t1185*t3586;
  t8861 = t8859 + t8860;
  t8863 = t1474*t1873;
  t8864 = t1187*t8861;
  t8865 = t8863 + t8864;
  t8873 = -1.*t8293*t8219*t8865;
  t8874 = -1.*t8209*t8308*t8865;
  t8875 = t8873 + t8874;
  t8877 = t8209*t8293*t8865;
  t8878 = -1.*t8219*t8308*t8865;
  t8879 = t8877 + t8878;
  t8897 = -1.*t8219*t8432;
  t8898 = -1.*t8209*t8440;
  t8899 = t8897 + t8898;
  t8902 = t8308*t8899;
  t8903 = t8902 + t8454;
  t8905 = t8293*t8899;
  t8906 = -1.*t8308*t8449;
  t8907 = t8905 + t8906;
  t8890 = 0.049*t8209;
  t8891 = t8890 + t8281;
  t8893 = -0.09*t8209;
  t8894 = -0.049*t8219;
  t8895 = t8893 + t8894;
  t8919 = t1187*t1185*t1850;
  t8920 = t1474*t8830;
  t8921 = t8919 + t8920;
  t8923 = -1.*t8219*t8764;
  t8924 = -1.*t8209*t8921;
  t8925 = t8923 + t8924;
  t8927 = t8209*t8764;
  t8928 = -1.*t8219*t8921;
  t8929 = t8927 + t8928;
  t8931 = t8308*t8925;
  t8932 = t8293*t8929;
  t8933 = t8931 + t8932;
  t8935 = t8293*t8925;
  t8936 = -1.*t8308*t8929;
  t8937 = t8935 + t8936;
  t8949 = -1.*t1187*t1873;
  t8950 = t1474*t8861;
  t8951 = t8949 + t8950;
  t8953 = -1.*t8219*t8693;
  t8954 = -1.*t8209*t8951;
  t8955 = t8953 + t8954;
  t8957 = t8209*t8693;
  t8958 = -1.*t8219*t8951;
  t8959 = t8957 + t8958;
  t8961 = t8308*t8955;
  t8962 = t8293*t8959;
  t8963 = t8961 + t8962;
  t8965 = t8293*t8955;
  t8966 = -1.*t8308*t8959;
  t8967 = t8965 + t8966;
  t8986 = -1.*t8293*t8445;
  t8987 = t8986 + t8906;
  t8470 = t8340*t8455;
  t8978 = -0.21*t8293;
  t8979 = -0.049*t8308;
  t8980 = t8978 + t8979;
  t8982 = 0.049*t8293;
  t8983 = t8982 + t8309;
  t8997 = t8219*t8764;
  t8998 = t8209*t8921;
  t8999 = t8997 + t8998;
  t9002 = -1.*t8308*t8999;
  t9003 = t9002 + t8932;
  t9005 = -1.*t8293*t8999;
  t9006 = t9005 + t8936;
  t9017 = t8219*t8693;
  t9018 = t8209*t8951;
  t9019 = t9017 + t9018;
  t9022 = -1.*t8308*t9019;
  t9023 = t9022 + t8962;
  t9025 = -1.*t8293*t9019;
  t9026 = t9025 + t8966;
  t8989 = -1.*t8345*t8455;
  t8471 = -1.*t8345*t8461;
  t8472 = t8470 + t8471;
  t9037 = 0.0016*t8340;
  t9038 = t9037 + t8369;
  t9040 = -0.2707*t8340;
  t9041 = -0.0016*t8345;
  t9042 = t9040 + t9041;
  t9008 = -1.*t8345*t9003;
  t9050 = t8293*t8999;
  t9051 = t8308*t8929;
  t9052 = t9050 + t9051;
  t9012 = t8340*t9003;
  t9028 = -1.*t8345*t9023;
  t9062 = t8293*t9019;
  t9063 = t8308*t8959;
  t9064 = t9062 + t9063;
  t9032 = t8340*t9023;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=-1.*t1185*t1847*t1850 + t1863*t3917 + t7091*t8062 + t8152*t8202 - 0.1305*(t1185*t1474*t1850 + t1187*t8202) + t8221*t8238 + t8282*t8291 + t8312*t8319 + t8327*t8335 + t8351*t8360 + t8372*t8382 - 0.0016*(t8345*t8360 + t8340*t8382) - 0.2707*(t8340*t8360 - 1.*t8345*t8382);
  p_output1[10]=t1185*t1847*t3193 + t1863*t8409 + t7091*t8418 + t8152*t8426 + t8221*t8432 - 0.1305*t8436 + t8282*t8440 + t8312*t8445 + t8327*t8449 + t8351*t8455 + t8372*t8461 - 0.0016*(t8345*t8455 + t8340*t8461) - 0.2707*t8472;
  p_output1[11]=0;
  p_output1[12]=t1185*t1863*t1867*t3193 - 1.*t1847*t1873*t3193 + t1185*t3193*t3586*t7091 + t8152*t8480 - 0.1305*(t1474*t1873*t3193 + t1187*t8480) + t8221*t8484 + t8282*t8492 + t8312*t8496 + t8327*t8500 + t8351*t8504 + t8372*t8508 - 0.0016*(t8345*t8504 + t8340*t8508) - 0.2707*(t8340*t8504 - 1.*t8345*t8508);
  p_output1[13]=t1185*t1850*t1863*t1867 - 1.*t1847*t1850*t1873 + t1185*t1850*t3586*t7091 + t8152*t8524 - 0.1305*(t1474*t1850*t1873 + t1187*t8524) + t8221*t8528 + t8282*t8536 + t8312*t8540 + t8327*t8544 + t8351*t8548 + t8372*t8552 - 0.0016*(t8345*t8548 + t8340*t8552) - 0.2707*(t8340*t8548 - 1.*t8345*t8552);
  p_output1[14]=-1.*t1185*t1847 - 1.*t1863*t1867*t1873 - 1.*t1873*t3586*t7091 + t8152*t8568 - 0.1305*(t1185*t1474 + t1187*t8568) + t8221*t8572 + t8282*t8580 + t8312*t8584 + t8327*t8588 + t8351*t8592 + t8372*t8596 - 0.0016*(t8345*t8592 + t8340*t8596) - 0.2707*(t8340*t8592 - 1.*t8345*t8596);
  p_output1[15]=t7091*t8409 + t1863*t8610 + t8221*t8614 - 0.1305*t1187*t8617 + t8152*t8617 + t1474*t8282*t8617 + t8312*t8623 + t8327*t8627 + t8351*t8631 + t8372*t8635 - 0.0016*(t8345*t8631 + t8340*t8635) - 0.2707*(t8340*t8631 - 1.*t8345*t8635);
  p_output1[16]=t1863*t8062 + t7091*t8648 + t8221*t8652 - 0.1305*t1187*t8656 + t8152*t8656 + t1474*t8282*t8656 + t8312*t8662 + t8327*t8666 + t8351*t8670 + t8372*t8674 - 0.0016*(t8345*t8670 + t8340*t8674) - 0.2707*(t8340*t8670 - 1.*t8345*t8674);
  p_output1[17]=-1.*t1185*t1863*t3586 + t1185*t1867*t7091 + t8690 + t8694 + t8695 + t8696 + t8700 + t8704 + t8708 + t8712 + t8716 + t8720;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0.135*t4147*t8409 - 0.135*t1855*t8418 - 0.1305*t1187*t8432 + t8152*t8432 + t1474*t8282*t8432 + t8221*t8725 + t8312*t8732 + t8327*t8736 + t8351*t8740 + t8372*t8744 - 0.0016*(t8345*t8740 + t8340*t8744) - 0.2707*(t8340*t8740 - 1.*t8345*t8744);
  p_output1[40]=0.135*t4147*t8648 - 0.135*t1855*t8758 + t8221*t8761 - 0.1305*t1187*t8764 + t8152*t8764 + t1474*t8282*t8764 + t8312*t8770 + t8327*t8774 + t8351*t8778 + t8372*t8782 - 0.0016*(t8345*t8778 + t8340*t8782) - 0.2707*(t8340*t8778 - 1.*t8345*t8782);
  p_output1[41]=-0.135*t1185*t1855*t3586 + 0.135*t1185*t1867*t4147 + t8690 + t8694 + t8695 + t8696 + t8700 + t8704 + t8708 + t8712 + t8716 + t8720;
  p_output1[42]=-0.1305*(-1.*t1185*t1187*t3193 - 1.*t1474*t8426) + t8282*t8436 + t8209*t8312*t8436 - 1.*t8219*t8327*t8436 + t1185*t3193*t8798 + t8426*t8801 + t8351*t8812 + t8372*t8816 - 0.0016*(t8345*t8812 + t8340*t8816) - 0.2707*(t8340*t8812 - 1.*t8345*t8816);
  p_output1[43]=t1185*t1850*t8798 + t8801*t8830 - 0.1305*(t8289 - 1.*t1474*t8830) + t8282*t8834 + t8209*t8312*t8834 - 1.*t8219*t8327*t8834 + t8351*t8843 + t8372*t8847 - 0.0016*(t8345*t8843 + t8340*t8847) - 0.2707*(t8340*t8843 - 1.*t8345*t8847);
  p_output1[44]=-1.*t1873*t8798 + t8801*t8861 - 0.1305*(t1187*t1873 - 1.*t1474*t8861) + t8282*t8865 + t8209*t8312*t8865 - 1.*t8219*t8327*t8865 + t8351*t8875 + t8372*t8879 - 0.0016*(t8345*t8875 + t8340*t8879) - 0.2707*(t8340*t8875 - 1.*t8345*t8879);
  p_output1[45]=t8312*t8449 + t8432*t8891 + t8440*t8895 + t8327*t8899 + t8372*t8903 + t8351*t8907 - 0.2707*(-1.*t8345*t8903 + t8340*t8907) - 0.0016*(t8340*t8903 + t8345*t8907);
  p_output1[46]=t8764*t8891 + t8895*t8921 + t8327*t8925 + t8312*t8929 + t8372*t8933 + t8351*t8937 - 0.2707*(-1.*t8345*t8933 + t8340*t8937) - 0.0016*(t8340*t8933 + t8345*t8937);
  p_output1[47]=t8693*t8891 + t8895*t8951 + t8327*t8955 + t8312*t8959 + t8372*t8963 + t8351*t8967 - 0.2707*(-1.*t8345*t8963 + t8340*t8967) - 0.0016*(t8340*t8963 + t8345*t8967);
  p_output1[48]=t8372*t8455 + t8445*t8980 + t8449*t8983 + t8351*t8987 - 0.0016*(t8470 + t8345*t8987) - 0.2707*(t8340*t8987 + t8989);
  p_output1[49]=t8929*t8983 + t8980*t8999 + t8372*t9003 + t8351*t9006 - 0.2707*(t8340*t9006 + t9008) - 0.0016*(t8345*t9006 + t9012);
  p_output1[50]=t8959*t8983 + t8980*t9019 + t8372*t9023 + t8351*t9026 - 0.2707*(t8340*t9026 + t9028) - 0.0016*(t8345*t9026 + t9032);
  p_output1[51]=-0.0016*t8472 - 0.2707*(-1.*t8340*t8461 + t8989) + t8455*t9038 + t8461*t9042;
  p_output1[52]=t9003*t9038 + t9042*t9052 - 0.2707*(t9008 - 1.*t8340*t9052) - 0.0016*(t9012 - 1.*t8345*t9052);
  p_output1[53]=t9023*t9038 + t9042*t9064 - 0.2707*(t9028 - 1.*t8340*t9064) - 0.0016*(t9032 - 1.*t8345*t9064);
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

#include "J_knee_to_shin_right_mex.hh"

namespace SymExpression
{

void J_knee_to_shin_right_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
