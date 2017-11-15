/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:47 GMT-05:00
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
  double t2581;
  double t5491;
  double t4130;
  double t4508;
  double t8156;
  double t1230;
  double t1266;
  double t1716;
  double t2059;
  double t3523;
  double t4966;
  double t8187;
  double t8213;
  double t8225;
  double t8254;
  double t8270;
  double t8277;
  double t97;
  double t8294;
  double t8296;
  double t8300;
  double t8305;
  double t8306;
  double t8313;
  double t8331;
  double t8344;
  double t8345;
  double t8347;
  double t8377;
  double t8380;
  double t8381;
  double t8390;
  double t8392;
  double t8393;
  double t8397;
  double t8407;
  double t8408;
  double t8411;
  double t8419;
  double t8421;
  double t8425;
  double t8432;
  double t8433;
  double t8436;
  double t8443;
  double t8452;
  double t8455;
  double t8458;
  double t8463;
  double t8464;
  double t8466;
  double t1756;
  double t2153;
  double t2529;
  double t3663;
  double t3798;
  double t8228;
  double t8231;
  double t8243;
  double t8248;
  double t8289;
  double t8291;
  double t8293;
  double t8487;
  double t8488;
  double t8490;
  double t8493;
  double t8494;
  double t8496;
  double t8316;
  double t8336;
  double t8342;
  double t8499;
  double t8500;
  double t8502;
  double t8368;
  double t8370;
  double t8371;
  double t8396;
  double t8399;
  double t8404;
  double t8504;
  double t8505;
  double t8506;
  double t8513;
  double t8514;
  double t8515;
  double t8415;
  double t8416;
  double t8417;
  double t8439;
  double t8445;
  double t8448;
  double t8518;
  double t8520;
  double t8521;
  double t8524;
  double t8525;
  double t8527;
  double t8460;
  double t8461;
  double t8462;
  double t8530;
  double t8532;
  double t8533;
  double t8536;
  double t8537;
  double t8538;
  double t8552;
  double t8553;
  double t8554;
  double t8556;
  double t8557;
  double t8558;
  double t8564;
  double t8565;
  double t8566;
  double t8568;
  double t8569;
  double t8570;
  double t8572;
  double t8573;
  double t8574;
  double t8576;
  double t8577;
  double t8578;
  double t8580;
  double t8581;
  double t8582;
  double t8596;
  double t8597;
  double t8598;
  double t8600;
  double t8601;
  double t8602;
  double t8608;
  double t8609;
  double t8610;
  double t8612;
  double t8613;
  double t8614;
  double t8616;
  double t8617;
  double t8618;
  double t8620;
  double t8621;
  double t8622;
  double t8624;
  double t8625;
  double t8626;
  double t8640;
  double t8641;
  double t8642;
  double t8644;
  double t8645;
  double t8646;
  double t8652;
  double t8653;
  double t8654;
  double t8656;
  double t8657;
  double t8658;
  double t8660;
  double t8661;
  double t8662;
  double t8664;
  double t8665;
  double t8666;
  double t8668;
  double t8669;
  double t8670;
  double t8682;
  double t8683;
  double t8684;
  double t8690;
  double t8691;
  double t8686;
  double t8687;
  double t8688;
  double t8695;
  double t8696;
  double t8697;
  double t8699;
  double t8700;
  double t8701;
  double t8703;
  double t8704;
  double t8705;
  double t8707;
  double t8708;
  double t8709;
  double t8720;
  double t8721;
  double t8722;
  double t8728;
  double t8729;
  double t8730;
  double t8725;
  double t8726;
  double t8734;
  double t8735;
  double t8736;
  double t8738;
  double t8739;
  double t8740;
  double t8742;
  double t8743;
  double t8744;
  double t8746;
  double t8747;
  double t8748;
  double t8765;
  double t8766;
  double t8767;
  double t8761;
  double t8762;
  double t8763;
  double t8771;
  double t8772;
  double t8773;
  double t8775;
  double t8776;
  double t8777;
  double t8779;
  double t8780;
  double t8781;
  double t8783;
  double t8784;
  double t8785;
  double t8798;
  double t8799;
  double t8804;
  double t8805;
  double t8806;
  double t8808;
  double t8809;
  double t8810;
  double t8812;
  double t8813;
  double t8814;
  double t8816;
  double t8817;
  double t8818;
  double t8830;
  double t8831;
  double t8832;
  double t8837;
  double t8838;
  double t8834;
  double t8835;
  double t8842;
  double t8843;
  double t8844;
  double t8846;
  double t8847;
  double t8848;
  double t8850;
  double t8851;
  double t8852;
  double t8854;
  double t8855;
  double t8856;
  double t8764;
  double t8768;
  double t8769;
  double t8770;
  double t8774;
  double t8778;
  double t8782;
  double t8786;
  double t8787;
  double t8788;
  double t8789;
  double t8790;
  double t8791;
  double t8792;
  double t8793;
  double t8794;
  double t8508;
  double t8509;
  double t8511;
  double t8884;
  double t8885;
  double t8886;
  double t8888;
  double t8889;
  double t8890;
  double t8870;
  double t8871;
  double t8872;
  double t8874;
  double t8875;
  double t8902;
  double t8903;
  double t8904;
  double t8906;
  double t8907;
  double t8908;
  double t8915;
  double t8916;
  double t8917;
  double t8919;
  double t8920;
  double t8921;
  double t8933;
  double t8934;
  double t8935;
  double t8937;
  double t8938;
  double t8939;
  double t8947;
  double t8948;
  double t8949;
  double t8951;
  double t8952;
  double t8953;
  double t8971;
  double t8972;
  double t8973;
  double t8976;
  double t8977;
  double t8979;
  double t8980;
  double t8981;
  double t8964;
  double t8965;
  double t8967;
  double t8968;
  double t8969;
  double t8993;
  double t8994;
  double t8995;
  double t8997;
  double t8998;
  double t8999;
  double t9001;
  double t9002;
  double t9003;
  double t9005;
  double t9006;
  double t9007;
  double t9009;
  double t9010;
  double t9011;
  double t9023;
  double t9024;
  double t9025;
  double t9027;
  double t9028;
  double t9029;
  double t9031;
  double t9032;
  double t9033;
  double t9035;
  double t9036;
  double t9037;
  double t9039;
  double t9040;
  double t9041;
  double t9060;
  double t9061;
  double t8544;
  double t9052;
  double t9053;
  double t9054;
  double t9056;
  double t9057;
  double t9071;
  double t9072;
  double t9073;
  double t9076;
  double t9077;
  double t9079;
  double t9080;
  double t9091;
  double t9092;
  double t9093;
  double t9096;
  double t9097;
  double t9099;
  double t9100;
  double t9063;
  double t8545;
  double t8546;
  double t9111;
  double t9112;
  double t9114;
  double t9115;
  double t9116;
  double t9082;
  double t9124;
  double t9125;
  double t9126;
  double t9086;
  double t9102;
  double t9136;
  double t9137;
  double t9138;
  double t9106;
  t2581 = Sin(var1[3]);
  t5491 = Cos(var1[3]);
  t4130 = Cos(var1[5]);
  t4508 = Sin(var1[4]);
  t8156 = Sin(var1[5]);
  t1230 = Cos(var1[14]);
  t1266 = -1.*t1230;
  t1716 = 1. + t1266;
  t2059 = Sin(var1[14]);
  t3523 = Sin(var1[13]);
  t4966 = -1.*t4130*t2581*t4508;
  t8187 = t5491*t8156;
  t8213 = t4966 + t8187;
  t8225 = Cos(var1[13]);
  t8254 = -1.*t5491*t4130;
  t8270 = -1.*t2581*t4508*t8156;
  t8277 = t8254 + t8270;
  t97 = Cos(var1[4]);
  t8294 = t3523*t8213;
  t8296 = t8225*t8277;
  t8300 = t8294 + t8296;
  t8305 = Cos(var1[15]);
  t8306 = -1.*t8305;
  t8313 = 1. + t8306;
  t8331 = Sin(var1[15]);
  t8344 = t8225*t8213;
  t8345 = -1.*t3523*t8277;
  t8347 = t8344 + t8345;
  t8377 = -1.*t1230*t97*t2581;
  t8380 = t2059*t8300;
  t8381 = t8377 + t8380;
  t8390 = Cos(var1[16]);
  t8392 = -1.*t8390;
  t8393 = 1. + t8392;
  t8397 = Sin(var1[16]);
  t8407 = t8331*t8347;
  t8408 = t8305*t8381;
  t8411 = t8407 + t8408;
  t8419 = t8305*t8347;
  t8421 = -1.*t8331*t8381;
  t8425 = t8419 + t8421;
  t8432 = Cos(var1[17]);
  t8433 = -1.*t8432;
  t8436 = 1. + t8433;
  t8443 = Sin(var1[17]);
  t8452 = -1.*t8397*t8411;
  t8455 = t8390*t8425;
  t8458 = t8452 + t8455;
  t8463 = t8390*t8411;
  t8464 = t8397*t8425;
  t8466 = t8463 + t8464;
  t1756 = -0.049*t1716;
  t2153 = -0.135*t2059;
  t2529 = 0. + t1756 + t2153;
  t3663 = 0.135*t3523;
  t3798 = 0. + t3663;
  t8228 = -1.*t8225;
  t8231 = 1. + t8228;
  t8243 = -0.135*t8231;
  t8248 = 0. + t8243;
  t8289 = -0.135*t1716;
  t8291 = 0.049*t2059;
  t8293 = 0. + t8289 + t8291;
  t8487 = t5491*t4130*t4508;
  t8488 = t2581*t8156;
  t8490 = t8487 + t8488;
  t8493 = -1.*t4130*t2581;
  t8494 = t5491*t4508*t8156;
  t8496 = t8493 + t8494;
  t8316 = -0.09*t8313;
  t8336 = 0.049*t8331;
  t8342 = 0. + t8316 + t8336;
  t8499 = t3523*t8490;
  t8500 = t8225*t8496;
  t8502 = t8499 + t8500;
  t8368 = -0.049*t8313;
  t8370 = -0.09*t8331;
  t8371 = 0. + t8368 + t8370;
  t8396 = -0.049*t8393;
  t8399 = -0.21*t8397;
  t8404 = 0. + t8396 + t8399;
  t8504 = t8225*t8490;
  t8505 = -1.*t3523*t8496;
  t8506 = t8504 + t8505;
  t8513 = t1230*t5491*t97;
  t8514 = t2059*t8502;
  t8515 = t8513 + t8514;
  t8415 = -0.21*t8393;
  t8416 = 0.049*t8397;
  t8417 = 0. + t8415 + t8416;
  t8439 = -0.2707*t8436;
  t8445 = 0.0016*t8443;
  t8448 = 0. + t8439 + t8445;
  t8518 = t8331*t8506;
  t8520 = t8305*t8515;
  t8521 = t8518 + t8520;
  t8524 = t8305*t8506;
  t8525 = -1.*t8331*t8515;
  t8527 = t8524 + t8525;
  t8460 = -0.0016*t8436;
  t8461 = -0.2707*t8443;
  t8462 = 0. + t8460 + t8461;
  t8530 = -1.*t8397*t8521;
  t8532 = t8390*t8527;
  t8533 = t8530 + t8532;
  t8536 = t8390*t8521;
  t8537 = t8397*t8527;
  t8538 = t8536 + t8537;
  t8552 = t5491*t97*t4130*t3523;
  t8553 = t8225*t5491*t97*t8156;
  t8554 = t8552 + t8553;
  t8556 = t8225*t5491*t97*t4130;
  t8557 = -1.*t5491*t97*t3523*t8156;
  t8558 = t8556 + t8557;
  t8564 = -1.*t1230*t5491*t4508;
  t8565 = t2059*t8554;
  t8566 = t8564 + t8565;
  t8568 = t8331*t8558;
  t8569 = t8305*t8566;
  t8570 = t8568 + t8569;
  t8572 = t8305*t8558;
  t8573 = -1.*t8331*t8566;
  t8574 = t8572 + t8573;
  t8576 = -1.*t8397*t8570;
  t8577 = t8390*t8574;
  t8578 = t8576 + t8577;
  t8580 = t8390*t8570;
  t8581 = t8397*t8574;
  t8582 = t8580 + t8581;
  t8596 = t97*t4130*t3523*t2581;
  t8597 = t8225*t97*t2581*t8156;
  t8598 = t8596 + t8597;
  t8600 = t8225*t97*t4130*t2581;
  t8601 = -1.*t97*t3523*t2581*t8156;
  t8602 = t8600 + t8601;
  t8608 = -1.*t1230*t2581*t4508;
  t8609 = t2059*t8598;
  t8610 = t8608 + t8609;
  t8612 = t8331*t8602;
  t8613 = t8305*t8610;
  t8614 = t8612 + t8613;
  t8616 = t8305*t8602;
  t8617 = -1.*t8331*t8610;
  t8618 = t8616 + t8617;
  t8620 = -1.*t8397*t8614;
  t8621 = t8390*t8618;
  t8622 = t8620 + t8621;
  t8624 = t8390*t8614;
  t8625 = t8397*t8618;
  t8626 = t8624 + t8625;
  t8640 = -1.*t4130*t3523*t4508;
  t8641 = -1.*t8225*t4508*t8156;
  t8642 = t8640 + t8641;
  t8644 = -1.*t8225*t4130*t4508;
  t8645 = t3523*t4508*t8156;
  t8646 = t8644 + t8645;
  t8652 = -1.*t1230*t97;
  t8653 = t2059*t8642;
  t8654 = t8652 + t8653;
  t8656 = t8331*t8646;
  t8657 = t8305*t8654;
  t8658 = t8656 + t8657;
  t8660 = t8305*t8646;
  t8661 = -1.*t8331*t8654;
  t8662 = t8660 + t8661;
  t8664 = -1.*t8397*t8658;
  t8665 = t8390*t8662;
  t8666 = t8664 + t8665;
  t8668 = t8390*t8658;
  t8669 = t8397*t8662;
  t8670 = t8668 + t8669;
  t8682 = t4130*t2581;
  t8683 = -1.*t5491*t4508*t8156;
  t8684 = t8682 + t8683;
  t8690 = t3523*t8684;
  t8691 = t8504 + t8690;
  t8686 = -1.*t3523*t8490;
  t8687 = t8225*t8684;
  t8688 = t8686 + t8687;
  t8695 = t8331*t8688;
  t8696 = t8305*t2059*t8691;
  t8697 = t8695 + t8696;
  t8699 = t8305*t8688;
  t8700 = -1.*t2059*t8331*t8691;
  t8701 = t8699 + t8700;
  t8703 = -1.*t8397*t8697;
  t8704 = t8390*t8701;
  t8705 = t8703 + t8704;
  t8707 = t8390*t8697;
  t8708 = t8397*t8701;
  t8709 = t8707 + t8708;
  t8720 = t4130*t2581*t4508;
  t8721 = -1.*t5491*t8156;
  t8722 = t8720 + t8721;
  t8728 = t8225*t8722;
  t8729 = t3523*t8277;
  t8730 = t8728 + t8729;
  t8725 = -1.*t3523*t8722;
  t8726 = t8725 + t8296;
  t8734 = t8331*t8726;
  t8735 = t8305*t2059*t8730;
  t8736 = t8734 + t8735;
  t8738 = t8305*t8726;
  t8739 = -1.*t2059*t8331*t8730;
  t8740 = t8738 + t8739;
  t8742 = -1.*t8397*t8736;
  t8743 = t8390*t8740;
  t8744 = t8742 + t8743;
  t8746 = t8390*t8736;
  t8747 = t8397*t8740;
  t8748 = t8746 + t8747;
  t8765 = t8225*t97*t4130;
  t8766 = -1.*t97*t3523*t8156;
  t8767 = t8765 + t8766;
  t8761 = -1.*t97*t4130*t3523;
  t8762 = -1.*t8225*t97*t8156;
  t8763 = t8761 + t8762;
  t8771 = t8331*t8763;
  t8772 = t8305*t2059*t8767;
  t8773 = t8771 + t8772;
  t8775 = t8305*t8763;
  t8776 = -1.*t2059*t8331*t8767;
  t8777 = t8775 + t8776;
  t8779 = -1.*t8397*t8773;
  t8780 = t8390*t8777;
  t8781 = t8779 + t8780;
  t8783 = t8390*t8773;
  t8784 = t8397*t8777;
  t8785 = t8783 + t8784;
  t8798 = -1.*t8225*t8496;
  t8799 = t8686 + t8798;
  t8804 = t8331*t8799;
  t8805 = t8305*t2059*t8506;
  t8806 = t8804 + t8805;
  t8808 = t8305*t8799;
  t8809 = -1.*t2059*t8331*t8506;
  t8810 = t8808 + t8809;
  t8812 = -1.*t8397*t8806;
  t8813 = t8390*t8810;
  t8814 = t8812 + t8813;
  t8816 = t8390*t8806;
  t8817 = t8397*t8810;
  t8818 = t8816 + t8817;
  t8830 = t5491*t4130;
  t8831 = t2581*t4508*t8156;
  t8832 = t8830 + t8831;
  t8837 = -1.*t3523*t8832;
  t8838 = t8728 + t8837;
  t8834 = -1.*t8225*t8832;
  t8835 = t8725 + t8834;
  t8842 = t8331*t8835;
  t8843 = t8305*t2059*t8838;
  t8844 = t8842 + t8843;
  t8846 = t8305*t8835;
  t8847 = -1.*t2059*t8331*t8838;
  t8848 = t8846 + t8847;
  t8850 = -1.*t8397*t8844;
  t8851 = t8390*t8848;
  t8852 = t8850 + t8851;
  t8854 = t8390*t8844;
  t8855 = t8397*t8848;
  t8856 = t8854 + t8855;
  t8764 = t8342*t8763;
  t8768 = -0.1305*t1230*t8767;
  t8769 = t8293*t8767;
  t8770 = t2059*t8371*t8767;
  t8774 = t8404*t8773;
  t8778 = t8417*t8777;
  t8782 = t8448*t8781;
  t8786 = t8462*t8785;
  t8787 = t8443*t8781;
  t8788 = t8432*t8785;
  t8789 = t8787 + t8788;
  t8790 = -0.0016*t8789;
  t8791 = t8432*t8781;
  t8792 = -1.*t8443*t8785;
  t8793 = t8791 + t8792;
  t8794 = -0.2707*t8793;
  t8508 = -1.*t5491*t97*t2059;
  t8509 = t1230*t8502;
  t8511 = t8508 + t8509;
  t8884 = -1.*t8390*t8331*t8511;
  t8885 = -1.*t8305*t8397*t8511;
  t8886 = t8884 + t8885;
  t8888 = t8305*t8390*t8511;
  t8889 = -1.*t8331*t8397*t8511;
  t8890 = t8888 + t8889;
  t8870 = -0.135*t1230;
  t8871 = -0.049*t2059;
  t8872 = t8870 + t8871;
  t8874 = 0.049*t1230;
  t8875 = t8874 + t2153;
  t8902 = t3523*t8722;
  t8903 = t8225*t8832;
  t8904 = t8902 + t8903;
  t8906 = -1.*t97*t2059*t2581;
  t8907 = t1230*t8904;
  t8908 = t8906 + t8907;
  t8915 = -1.*t8390*t8331*t8908;
  t8916 = -1.*t8305*t8397*t8908;
  t8917 = t8915 + t8916;
  t8919 = t8305*t8390*t8908;
  t8920 = -1.*t8331*t8397*t8908;
  t8921 = t8919 + t8920;
  t8933 = t97*t4130*t3523;
  t8934 = t8225*t97*t8156;
  t8935 = t8933 + t8934;
  t8937 = t2059*t4508;
  t8938 = t1230*t8935;
  t8939 = t8937 + t8938;
  t8947 = -1.*t8390*t8331*t8939;
  t8948 = -1.*t8305*t8397*t8939;
  t8949 = t8947 + t8948;
  t8951 = t8305*t8390*t8939;
  t8952 = -1.*t8331*t8397*t8939;
  t8953 = t8951 + t8952;
  t8971 = -1.*t8331*t8506;
  t8972 = -1.*t8305*t8515;
  t8973 = t8971 + t8972;
  t8976 = t8397*t8973;
  t8977 = t8976 + t8532;
  t8979 = t8390*t8973;
  t8980 = -1.*t8397*t8527;
  t8981 = t8979 + t8980;
  t8964 = 0.049*t8305;
  t8965 = t8964 + t8370;
  t8967 = -0.09*t8305;
  t8968 = -0.049*t8331;
  t8969 = t8967 + t8968;
  t8993 = t1230*t97*t2581;
  t8994 = t2059*t8904;
  t8995 = t8993 + t8994;
  t8997 = -1.*t8331*t8838;
  t8998 = -1.*t8305*t8995;
  t8999 = t8997 + t8998;
  t9001 = t8305*t8838;
  t9002 = -1.*t8331*t8995;
  t9003 = t9001 + t9002;
  t9005 = t8397*t8999;
  t9006 = t8390*t9003;
  t9007 = t9005 + t9006;
  t9009 = t8390*t8999;
  t9010 = -1.*t8397*t9003;
  t9011 = t9009 + t9010;
  t9023 = -1.*t1230*t4508;
  t9024 = t2059*t8935;
  t9025 = t9023 + t9024;
  t9027 = -1.*t8331*t8767;
  t9028 = -1.*t8305*t9025;
  t9029 = t9027 + t9028;
  t9031 = t8305*t8767;
  t9032 = -1.*t8331*t9025;
  t9033 = t9031 + t9032;
  t9035 = t8397*t9029;
  t9036 = t8390*t9033;
  t9037 = t9035 + t9036;
  t9039 = t8390*t9029;
  t9040 = -1.*t8397*t9033;
  t9041 = t9039 + t9040;
  t9060 = -1.*t8390*t8521;
  t9061 = t9060 + t8980;
  t8544 = t8432*t8533;
  t9052 = -0.21*t8390;
  t9053 = -0.049*t8397;
  t9054 = t9052 + t9053;
  t9056 = 0.049*t8390;
  t9057 = t9056 + t8399;
  t9071 = t8331*t8838;
  t9072 = t8305*t8995;
  t9073 = t9071 + t9072;
  t9076 = -1.*t8397*t9073;
  t9077 = t9076 + t9006;
  t9079 = -1.*t8390*t9073;
  t9080 = t9079 + t9010;
  t9091 = t8331*t8767;
  t9092 = t8305*t9025;
  t9093 = t9091 + t9092;
  t9096 = -1.*t8397*t9093;
  t9097 = t9096 + t9036;
  t9099 = -1.*t8390*t9093;
  t9100 = t9099 + t9040;
  t9063 = -1.*t8443*t8533;
  t8545 = -1.*t8443*t8538;
  t8546 = t8544 + t8545;
  t9111 = 0.0016*t8432;
  t9112 = t9111 + t8461;
  t9114 = -0.2707*t8432;
  t9115 = -0.0016*t8443;
  t9116 = t9114 + t9115;
  t9082 = -1.*t8443*t9077;
  t9124 = t8390*t9073;
  t9125 = t8397*t9003;
  t9126 = t9124 + t9125;
  t9086 = t8432*t9077;
  t9102 = -1.*t8443*t9097;
  t9136 = t8390*t9093;
  t9137 = t8397*t9033;
  t9138 = t9136 + t9137;
  t9106 = t8432*t9097;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t3798*t8213 + t8248*t8277 + t8293*t8300 + t8342*t8347 + t8371*t8381 + t8404*t8411 + t8417*t8425 + t8448*t8458 + t8462*t8466 - 0.0016*(t8443*t8458 + t8432*t8466) - 0.2707*(t8432*t8458 - 1.*t8443*t8466) - 1.*t2529*t2581*t97 - 0.1305*(t1230*t8300 + t2059*t2581*t97);
  p_output1[10]=t3798*t8490 + t8248*t8496 + t8293*t8502 + t8342*t8506 - 0.1305*t8511 + t8371*t8515 + t8404*t8521 + t8417*t8527 + t8448*t8533 + t8462*t8538 - 0.0016*(t8443*t8533 + t8432*t8538) - 0.2707*t8546 + t2529*t5491*t97;
  p_output1[11]=0;
  p_output1[12]=-1.*t2529*t4508*t5491 + t8293*t8554 - 0.1305*(t2059*t4508*t5491 + t1230*t8554) + t8342*t8558 + t8371*t8566 + t8404*t8570 + t8417*t8574 + t8448*t8578 + t8462*t8582 - 0.0016*(t8443*t8578 + t8432*t8582) - 0.2707*(t8432*t8578 - 1.*t8443*t8582) + t3798*t4130*t5491*t97 + t5491*t8156*t8248*t97;
  p_output1[13]=-1.*t2529*t2581*t4508 + t8293*t8598 - 0.1305*(t2059*t2581*t4508 + t1230*t8598) + t8342*t8602 + t8371*t8610 + t8404*t8614 + t8417*t8618 + t8448*t8622 + t8462*t8626 - 0.0016*(t8443*t8622 + t8432*t8626) - 0.2707*(t8432*t8622 - 1.*t8443*t8626) + t2581*t3798*t4130*t97 + t2581*t8156*t8248*t97;
  p_output1[14]=-1.*t3798*t4130*t4508 - 1.*t4508*t8156*t8248 + t8293*t8642 + t8342*t8646 + t8371*t8654 + t8404*t8658 + t8417*t8662 + t8448*t8666 + t8462*t8670 - 0.0016*(t8443*t8666 + t8432*t8670) - 0.2707*(t8432*t8666 - 1.*t8443*t8670) - 1.*t2529*t97 - 0.1305*(t1230*t8642 + t2059*t97);
  p_output1[15]=t8248*t8490 + t3798*t8684 + t8342*t8688 - 0.1305*t1230*t8691 + t8293*t8691 + t2059*t8371*t8691 + t8404*t8697 + t8417*t8701 + t8448*t8705 + t8462*t8709 - 0.0016*(t8443*t8705 + t8432*t8709) - 0.2707*(t8432*t8705 - 1.*t8443*t8709);
  p_output1[16]=t3798*t8277 + t8248*t8722 + t8342*t8726 - 0.1305*t1230*t8730 + t8293*t8730 + t2059*t8371*t8730 + t8404*t8736 + t8417*t8740 + t8448*t8744 + t8462*t8748 - 0.0016*(t8443*t8744 + t8432*t8748) - 0.2707*(t8432*t8744 - 1.*t8443*t8748);
  p_output1[17]=t8764 + t8768 + t8769 + t8770 + t8774 + t8778 + t8782 + t8786 + t8790 + t8794 - 1.*t3798*t8156*t97 + t4130*t8248*t97;
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
  p_output1[39]=0.135*t8225*t8490 - 0.135*t3523*t8496 - 0.1305*t1230*t8506 + t8293*t8506 + t2059*t8371*t8506 + t8342*t8799 + t8404*t8806 + t8417*t8810 + t8448*t8814 + t8462*t8818 - 0.0016*(t8443*t8814 + t8432*t8818) - 0.2707*(t8432*t8814 - 1.*t8443*t8818);
  p_output1[40]=0.135*t8225*t8722 - 0.135*t3523*t8832 + t8342*t8835 - 0.1305*t1230*t8838 + t8293*t8838 + t2059*t8371*t8838 + t8404*t8844 + t8417*t8848 + t8448*t8852 + t8462*t8856 - 0.0016*(t8443*t8852 + t8432*t8856) - 0.2707*(t8432*t8852 - 1.*t8443*t8856);
  p_output1[41]=t8764 + t8768 + t8769 + t8770 + t8774 + t8778 + t8782 + t8786 + t8790 + t8794 - 0.135*t3523*t8156*t97 + 0.135*t4130*t8225*t97;
  p_output1[42]=t8371*t8511 + t8305*t8404*t8511 - 1.*t8331*t8417*t8511 + t8502*t8875 + t8448*t8886 + t8462*t8890 - 0.0016*(t8443*t8886 + t8432*t8890) - 0.2707*(t8432*t8886 - 1.*t8443*t8890) + t5491*t8872*t97 - 0.1305*(-1.*t2059*t8502 - 1.*t1230*t5491*t97);
  p_output1[43]=t8875*t8904 - 0.1305*(t8377 - 1.*t2059*t8904) + t8371*t8908 + t8305*t8404*t8908 - 1.*t8331*t8417*t8908 + t8448*t8917 + t8462*t8921 - 0.0016*(t8443*t8917 + t8432*t8921) - 0.2707*(t8432*t8917 - 1.*t8443*t8921) + t2581*t8872*t97;
  p_output1[44]=-1.*t4508*t8872 + t8875*t8935 - 0.1305*(t1230*t4508 - 1.*t2059*t8935) + t8371*t8939 + t8305*t8404*t8939 - 1.*t8331*t8417*t8939 + t8448*t8949 + t8462*t8953 - 0.0016*(t8443*t8949 + t8432*t8953) - 0.2707*(t8432*t8949 - 1.*t8443*t8953);
  p_output1[45]=t8404*t8527 + t8506*t8965 + t8515*t8969 + t8417*t8973 + t8462*t8977 + t8448*t8981 - 0.2707*(-1.*t8443*t8977 + t8432*t8981) - 0.0016*(t8432*t8977 + t8443*t8981);
  p_output1[46]=t8838*t8965 + t8969*t8995 + t8417*t8999 + t8404*t9003 + t8462*t9007 + t8448*t9011 - 0.2707*(-1.*t8443*t9007 + t8432*t9011) - 0.0016*(t8432*t9007 + t8443*t9011);
  p_output1[47]=t8767*t8965 + t8969*t9025 + t8417*t9029 + t8404*t9033 + t8462*t9037 + t8448*t9041 - 0.2707*(-1.*t8443*t9037 + t8432*t9041) - 0.0016*(t8432*t9037 + t8443*t9041);
  p_output1[48]=t8462*t8533 + t8521*t9054 + t8527*t9057 + t8448*t9061 - 0.0016*(t8544 + t8443*t9061) - 0.2707*(t8432*t9061 + t9063);
  p_output1[49]=t9003*t9057 + t9054*t9073 + t8462*t9077 + t8448*t9080 - 0.2707*(t8432*t9080 + t9082) - 0.0016*(t8443*t9080 + t9086);
  p_output1[50]=t9033*t9057 + t9054*t9093 + t8462*t9097 + t8448*t9100 - 0.2707*(t8432*t9100 + t9102) - 0.0016*(t8443*t9100 + t9106);
  p_output1[51]=-0.0016*t8546 - 0.2707*(-1.*t8432*t8538 + t9063) + t8533*t9112 + t8538*t9116;
  p_output1[52]=t9077*t9112 + t9116*t9126 - 0.2707*(t9082 - 1.*t8432*t9126) - 0.0016*(t9086 - 1.*t8443*t9126);
  p_output1[53]=t9097*t9112 + t9116*t9138 - 0.2707*(t9102 - 1.*t8432*t9138) - 0.0016*(t9106 - 1.*t8443*t9138);
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
