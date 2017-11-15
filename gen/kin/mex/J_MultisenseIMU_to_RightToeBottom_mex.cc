/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:36:20 GMT-05:00
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
  double t85;
  double t269;
  double t812;
  double t1055;
  double t1071;
  double t1083;
  double t1175;
  double t1611;
  double t2059;
  double t2140;
  double t2180;
  double t2217;
  double t1893;
  double t1952;
  double t1987;
  double t2350;
  double t2464;
  double t2469;
  double t2637;
  double t2640;
  double t2698;
  double t2913;
  double t2618;
  double t2628;
  double t2630;
  double t3172;
  double t3186;
  double t3211;
  double t3624;
  double t3636;
  double t3665;
  double t3682;
  double t3543;
  double t3561;
  double t3567;
  double t3896;
  double t3906;
  double t3962;
  double t4251;
  double t4259;
  double t4280;
  double t4315;
  double t4124;
  double t4141;
  double t4142;
  double t4478;
  double t4520;
  double t4526;
  double t691;
  double t776;
  double t811;
  double t861;
  double t865;
  double t1115;
  double t1200;
  double t1498;
  double t1691;
  double t1764;
  double t1801;
  double t2204;
  double t2224;
  double t2265;
  double t2476;
  double t2478;
  double t2480;
  double t4979;
  double t4991;
  double t5002;
  double t5016;
  double t5032;
  double t5044;
  double t2791;
  double t3076;
  double t3082;
  double t3425;
  double t3466;
  double t3482;
  double t5069;
  double t5077;
  double t5119;
  double t5127;
  double t5130;
  double t5134;
  double t3680;
  double t3731;
  double t3796;
  double t4000;
  double t4007;
  double t4098;
  double t5189;
  double t5211;
  double t5248;
  double t5265;
  double t5272;
  double t5292;
  double t4294;
  double t4334;
  double t4344;
  double t4527;
  double t4573;
  double t4604;
  double t5300;
  double t5306;
  double t5314;
  double t5340;
  double t5354;
  double t5358;
  double t5685;
  double t5690;
  double t5693;
  double t5739;
  double t5753;
  double t5758;
  double t5775;
  double t5777;
  double t5787;
  double t5791;
  double t5796;
  double t5805;
  double t5862;
  double t5866;
  double t5870;
  double t5877;
  double t5884;
  double t5908;
  double t5555;
  double t5558;
  double t5561;
  double t6079;
  double t6082;
  double t6103;
  double t6143;
  double t6185;
  double t6239;
  double t6252;
  double t6264;
  double t6265;
  double t6283;
  double t6299;
  double t6300;
  double t6310;
  double t6324;
  double t6330;
  double t6337;
  double t6343;
  double t6354;
  double t6471;
  double t6476;
  double t6513;
  double t6542;
  double t6543;
  double t6554;
  double t6561;
  double t6562;
  double t6565;
  double t6567;
  double t6572;
  double t6588;
  double t6608;
  double t6613;
  double t6620;
  double t6639;
  double t6641;
  double t6644;
  double t6781;
  double t6794;
  double t6795;
  double t6832;
  double t6855;
  double t6864;
  double t6872;
  double t6880;
  double t6888;
  double t6890;
  double t6893;
  double t6923;
  double t6945;
  double t6946;
  double t6964;
  double t6971;
  double t6972;
  double t6955;
  double t6957;
  double t6960;
  double t6719;
  double t6720;
  double t6738;
  double t6740;
  double t6774;
  double t7085;
  double t7093;
  double t7098;
  double t7112;
  double t7113;
  double t7116;
  double t7123;
  double t7129;
  double t7135;
  double t7136;
  double t7152;
  double t7160;
  double t7178;
  double t7179;
  double t7201;
  double t7203;
  double t7204;
  double t7186;
  double t7194;
  double t7198;
  double t7279;
  double t7291;
  double t7293;
  double t7313;
  double t7316;
  double t7318;
  double t7334;
  double t7352;
  double t7355;
  double t7379;
  double t7383;
  double t7389;
  double t7416;
  double t7429;
  double t7437;
  double t7396;
  double t7404;
  double t7408;
  double t7513;
  double t7514;
  double t7524;
  double t7542;
  double t7545;
  double t7549;
  double t7551;
  double t7560;
  double t7562;
  double t7563;
  double t7570;
  double t7576;
  double t7577;
  double t7589;
  double t7599;
  double t7602;
  double t7582;
  double t7584;
  double t7586;
  double t7491;
  double t7495;
  double t7526;
  double t7528;
  double t7536;
  double t7639;
  double t7641;
  double t7654;
  double t7658;
  double t7675;
  double t7677;
  double t7683;
  double t7704;
  double t7706;
  double t7711;
  double t7685;
  double t7690;
  double t7695;
  double t7302;
  double t7329;
  double t7377;
  double t7391;
  double t7409;
  double t7445;
  double t7450;
  double t7459;
  double t7460;
  double t7468;
  double t7479;
  double t7482;
  double t7485;
  double t7486;
  double t7761;
  double t7767;
  double t7771;
  double t7794;
  double t7797;
  double t7800;
  double t7802;
  double t7823;
  double t7824;
  double t7829;
  double t7808;
  double t7810;
  double t7812;
  double t7738;
  double t7746;
  double t7775;
  double t7778;
  double t7784;
  double t7871;
  double t7872;
  double t7894;
  double t7897;
  double t7900;
  double t7884;
  double t7888;
  double t7929;
  double t7936;
  double t7941;
  double t7945;
  double t7946;
  double t7951;
  double t7952;
  double t7965;
  double t7967;
  double t7968;
  double t7957;
  double t7961;
  double t7963;
  double t7990;
  double t7991;
  double t7992;
  double t8001;
  double t8003;
  double t7998;
  double t7999;
  double t7986;
  double t7987;
  double t7993;
  double t7994;
  double t7995;
  double t8021;
  double t8022;
  double t4794;
  double t8037;
  double t8038;
  double t8039;
  double t8045;
  double t8046;
  double t8042;
  double t8043;
  double t8060;
  double t8061;
  double t8063;
  double t8006;
  double t8009;
  double t8057;
  double t8058;
  double t8064;
  double t8065;
  double t8066;
  double t8026;
  double t4806;
  double t4823;
  double t8090;
  double t8091;
  double t8092;
  double t8049;
  double t8052;
  t85 = Cos(var1[7]);
  t269 = Cos(var1[8]);
  t812 = Sin(var1[8]);
  t1055 = Cos(var1[9]);
  t1071 = -1.*t1055;
  t1083 = 1. + t1071;
  t1175 = Sin(var1[9]);
  t1611 = Sin(var1[7]);
  t2059 = Cos(var1[10]);
  t2140 = -1.*t2059;
  t2180 = 1. + t2140;
  t2217 = Sin(var1[10]);
  t1893 = t85*t1055*t812;
  t1952 = -1.*t1611*t1175;
  t1987 = t1893 + t1952;
  t2350 = -1.*t1055*t1611;
  t2464 = -1.*t85*t812*t1175;
  t2469 = t2350 + t2464;
  t2637 = Cos(var1[11]);
  t2640 = -1.*t2637;
  t2698 = 1. + t2640;
  t2913 = Sin(var1[11]);
  t2618 = t2059*t1987;
  t2628 = t2469*t2217;
  t2630 = t2618 + t2628;
  t3172 = t2059*t2469;
  t3186 = -1.*t1987*t2217;
  t3211 = t3172 + t3186;
  t3624 = Cos(var1[12]);
  t3636 = -1.*t3624;
  t3665 = 1. + t3636;
  t3682 = Sin(var1[12]);
  t3543 = t2637*t2630;
  t3561 = t3211*t2913;
  t3567 = t3543 + t3561;
  t3896 = t2637*t3211;
  t3906 = -1.*t2630*t2913;
  t3962 = t3896 + t3906;
  t4251 = Cos(var1[13]);
  t4259 = -1.*t4251;
  t4280 = 1. + t4259;
  t4315 = Sin(var1[13]);
  t4124 = t3624*t3567;
  t4141 = t3962*t3682;
  t4142 = t4124 + t4141;
  t4478 = t3624*t3962;
  t4520 = -1.*t3567*t3682;
  t4526 = t4478 + t4520;
  t691 = -1.*t269;
  t776 = 1. + t691;
  t811 = -0.135*t776;
  t861 = 0.049*t812;
  t865 = 0. + t811 + t861;
  t1115 = -0.049*t1083;
  t1200 = -0.09*t1175;
  t1498 = 0. + t1115 + t1200;
  t1691 = -0.09*t1083;
  t1764 = 0.049*t1175;
  t1801 = 0. + t1691 + t1764;
  t2204 = -0.049*t2180;
  t2224 = -0.21*t2217;
  t2265 = 0. + t2204 + t2224;
  t2476 = -0.21*t2180;
  t2478 = 0.049*t2217;
  t2480 = 0. + t2476 + t2478;
  t4979 = -1.*t1055*t1611*t812;
  t4991 = -1.*t85*t1175;
  t5002 = t4979 + t4991;
  t5016 = -1.*t85*t1055;
  t5032 = t1611*t812*t1175;
  t5044 = t5016 + t5032;
  t2791 = -0.0016*t2698;
  t3076 = -0.2707*t2913;
  t3082 = 0. + t2791 + t3076;
  t3425 = -0.2707*t2698;
  t3466 = 0.0016*t2913;
  t3482 = 0. + t3425 + t3466;
  t5069 = t2059*t5002;
  t5077 = t5044*t2217;
  t5119 = t5069 + t5077;
  t5127 = t2059*t5044;
  t5130 = -1.*t5002*t2217;
  t5134 = t5127 + t5130;
  t3680 = 0.0184*t3665;
  t3731 = -0.7055*t3682;
  t3796 = 0. + t3680 + t3731;
  t4000 = -0.7055*t3665;
  t4007 = -0.0184*t3682;
  t4098 = 0. + t4000 + t4007;
  t5189 = t2637*t5119;
  t5211 = t5134*t2913;
  t5248 = t5189 + t5211;
  t5265 = t2637*t5134;
  t5272 = -1.*t5119*t2913;
  t5292 = t5265 + t5272;
  t4294 = -0.0216*t4280;
  t4334 = -1.1135*t4315;
  t4344 = 0. + t4294 + t4334;
  t4527 = -1.1135*t4280;
  t4573 = 0.0216*t4315;
  t4604 = 0. + t4527 + t4573;
  t5300 = t3624*t5248;
  t5306 = t5292*t3682;
  t5314 = t5300 + t5306;
  t5340 = t3624*t5292;
  t5354 = -1.*t5248*t3682;
  t5358 = t5340 + t5354;
  t5685 = t269*t1055*t2059*t1611;
  t5690 = -1.*t269*t1611*t1175*t2217;
  t5693 = t5685 + t5690;
  t5739 = -1.*t269*t2059*t1611*t1175;
  t5753 = -1.*t269*t1055*t1611*t2217;
  t5758 = t5739 + t5753;
  t5775 = t2637*t5693;
  t5777 = t5758*t2913;
  t5787 = t5775 + t5777;
  t5791 = t2637*t5758;
  t5796 = -1.*t5693*t2913;
  t5805 = t5791 + t5796;
  t5862 = t3624*t5787;
  t5866 = t5805*t3682;
  t5870 = t5862 + t5866;
  t5877 = t3624*t5805;
  t5884 = -1.*t5787*t3682;
  t5908 = t5877 + t5884;
  t5555 = 0.049*t269;
  t5558 = -0.135*t812;
  t5561 = t5555 + t5558;
  t6079 = t85*t269*t1055*t2059;
  t6082 = -1.*t85*t269*t1175*t2217;
  t6103 = t6079 + t6082;
  t6143 = -1.*t85*t269*t2059*t1175;
  t6185 = -1.*t85*t269*t1055*t2217;
  t6239 = t6143 + t6185;
  t6252 = t2637*t6103;
  t6264 = t6239*t2913;
  t6265 = t6252 + t6264;
  t6283 = t2637*t6239;
  t6299 = -1.*t6103*t2913;
  t6300 = t6283 + t6299;
  t6310 = t3624*t6265;
  t6324 = t6300*t3682;
  t6330 = t6310 + t6324;
  t6337 = t3624*t6300;
  t6343 = -1.*t6265*t3682;
  t6354 = t6337 + t6343;
  t6471 = -1.*t1055*t2059*t812;
  t6476 = t812*t1175*t2217;
  t6513 = t6471 + t6476;
  t6542 = t2059*t812*t1175;
  t6543 = t1055*t812*t2217;
  t6554 = t6542 + t6543;
  t6561 = t2637*t6513;
  t6562 = t6554*t2913;
  t6565 = t6561 + t6562;
  t6567 = t2637*t6554;
  t6572 = -1.*t6513*t2913;
  t6588 = t6567 + t6572;
  t6608 = t3624*t6565;
  t6613 = t6588*t3682;
  t6620 = t6608 + t6613;
  t6639 = t3624*t6588;
  t6641 = -1.*t6565*t3682;
  t6644 = t6639 + t6641;
  t6781 = t85*t1055;
  t6794 = -1.*t1611*t812*t1175;
  t6795 = t6781 + t6794;
  t6832 = t2059*t6795;
  t6855 = t5002*t2217;
  t6864 = t6832 + t6855;
  t6872 = -1.*t6795*t2217;
  t6880 = t5069 + t6872;
  t6888 = t2637*t6864;
  t6890 = t6880*t2913;
  t6893 = t6888 + t6890;
  t6923 = t2637*t6880;
  t6945 = -1.*t6864*t2913;
  t6946 = t6923 + t6945;
  t6964 = t3624*t6946;
  t6971 = -1.*t6893*t3682;
  t6972 = t6964 + t6971;
  t6955 = t3624*t6893;
  t6957 = t6946*t3682;
  t6960 = t6955 + t6957;
  t6719 = 0.049*t1055;
  t6720 = t6719 + t1200;
  t6738 = -0.09*t1055;
  t6740 = -0.049*t1175;
  t6774 = t6738 + t6740;
  t7085 = -1.*t85*t1055*t812;
  t7093 = t1611*t1175;
  t7098 = t7085 + t7093;
  t7112 = t7098*t2217;
  t7113 = t3172 + t7112;
  t7116 = t2059*t7098;
  t7123 = -1.*t2469*t2217;
  t7129 = t7116 + t7123;
  t7135 = t2637*t7113;
  t7136 = t7129*t2913;
  t7152 = t7135 + t7136;
  t7160 = t2637*t7129;
  t7178 = -1.*t7113*t2913;
  t7179 = t7160 + t7178;
  t7201 = t3624*t7179;
  t7203 = -1.*t7152*t3682;
  t7204 = t7201 + t7203;
  t7186 = t3624*t7152;
  t7194 = t7179*t3682;
  t7198 = t7186 + t7194;
  t7279 = -1.*t269*t2059*t1175;
  t7291 = -1.*t269*t1055*t2217;
  t7293 = t7279 + t7291;
  t7313 = -1.*t269*t1055*t2059;
  t7316 = t269*t1175*t2217;
  t7318 = t7313 + t7316;
  t7334 = t2637*t7293;
  t7352 = t7318*t2913;
  t7355 = t7334 + t7352;
  t7379 = t2637*t7318;
  t7383 = -1.*t7293*t2913;
  t7389 = t7379 + t7383;
  t7416 = t3624*t7389;
  t7429 = -1.*t7355*t3682;
  t7437 = t7416 + t7429;
  t7396 = t3624*t7355;
  t7404 = t7389*t3682;
  t7408 = t7396 + t7404;
  t7513 = t1055*t1611*t812;
  t7514 = t85*t1175;
  t7524 = t7513 + t7514;
  t7542 = -1.*t7524*t2217;
  t7545 = t6832 + t7542;
  t7549 = -1.*t2059*t7524;
  t7551 = t7549 + t6872;
  t7560 = t2637*t7545;
  t7562 = t7551*t2913;
  t7563 = t7560 + t7562;
  t7570 = t2637*t7551;
  t7576 = -1.*t7545*t2913;
  t7577 = t7570 + t7576;
  t7589 = t3624*t7577;
  t7599 = -1.*t7563*t3682;
  t7602 = t7589 + t7599;
  t7582 = t3624*t7563;
  t7584 = t7577*t3682;
  t7586 = t7582 + t7584;
  t7491 = 0.049*t2059;
  t7495 = t7491 + t2224;
  t7526 = -0.21*t2059;
  t7528 = -0.049*t2217;
  t7536 = t7526 + t7528;
  t7639 = -1.*t2059*t1987;
  t7641 = t7639 + t7123;
  t7654 = t7641*t2913;
  t7658 = t3896 + t7654;
  t7675 = t2637*t7641;
  t7677 = -1.*t3211*t2913;
  t7683 = t7675 + t7677;
  t7704 = t3624*t7683;
  t7706 = -1.*t7658*t3682;
  t7711 = t7704 + t7706;
  t7685 = t3624*t7658;
  t7690 = t7683*t3682;
  t7695 = t7685 + t7690;
  t7302 = t7293*t3082;
  t7329 = t7318*t3482;
  t7377 = t7355*t3796;
  t7391 = t7389*t4098;
  t7409 = t7408*t4344;
  t7445 = t7437*t4604;
  t7450 = t4251*t7437;
  t7459 = -1.*t7408*t4315;
  t7460 = t7450 + t7459;
  t7468 = -1.1312*t7460;
  t7479 = t4251*t7408;
  t7482 = t7437*t4315;
  t7485 = t7479 + t7482;
  t7486 = 0.0306*t7485;
  t7761 = t2059*t7524;
  t7767 = t6795*t2217;
  t7771 = t7761 + t7767;
  t7794 = -1.*t7771*t2913;
  t7797 = t7560 + t7794;
  t7800 = -1.*t2637*t7771;
  t7802 = t7800 + t7576;
  t7823 = t3624*t7802;
  t7824 = -1.*t7797*t3682;
  t7829 = t7823 + t7824;
  t7808 = t3624*t7797;
  t7810 = t7802*t3682;
  t7812 = t7808 + t7810;
  t7738 = 0.0016*t2637;
  t7746 = t7738 + t3076;
  t7775 = -0.2707*t2637;
  t7778 = -0.0016*t2913;
  t7784 = t7775 + t7778;
  t7871 = -1.*t2637*t2630;
  t7872 = t7871 + t7677;
  t7894 = t3624*t7872;
  t7897 = -1.*t3962*t3682;
  t7900 = t7894 + t7897;
  t7884 = t7872*t3682;
  t7888 = t4478 + t7884;
  t7929 = t269*t1055*t2059;
  t7936 = -1.*t269*t1175*t2217;
  t7941 = t7929 + t7936;
  t7945 = -1.*t7941*t2913;
  t7946 = t7334 + t7945;
  t7951 = -1.*t2637*t7941;
  t7952 = t7951 + t7383;
  t7965 = t3624*t7952;
  t7967 = -1.*t7946*t3682;
  t7968 = t7965 + t7967;
  t7957 = t3624*t7946;
  t7961 = t7952*t3682;
  t7963 = t7957 + t7961;
  t7990 = t2637*t7771;
  t7991 = t7545*t2913;
  t7992 = t7990 + t7991;
  t8001 = -1.*t3624*t7992;
  t8003 = t8001 + t7824;
  t7998 = -1.*t7992*t3682;
  t7999 = t7808 + t7998;
  t7986 = -0.0184*t3624;
  t7987 = t7986 + t3731;
  t7993 = -0.7055*t3624;
  t7994 = 0.0184*t3682;
  t7995 = t7993 + t7994;
  t8021 = -1.*t3624*t3567;
  t8022 = t8021 + t7897;
  t4794 = t4251*t4526;
  t8037 = t2637*t7941;
  t8038 = t7293*t2913;
  t8039 = t8037 + t8038;
  t8045 = -1.*t3624*t8039;
  t8046 = t8045 + t7967;
  t8042 = -1.*t8039*t3682;
  t8043 = t7957 + t8042;
  t8060 = t3624*t7992;
  t8061 = t7797*t3682;
  t8063 = t8060 + t8061;
  t8006 = -1.*t7999*t4315;
  t8009 = t4251*t7999;
  t8057 = 0.0216*t4251;
  t8058 = t8057 + t4334;
  t8064 = -1.1135*t4251;
  t8065 = -0.0216*t4315;
  t8066 = t8064 + t8065;
  t8026 = -1.*t4526*t4315;
  t4806 = -1.*t4142*t4315;
  t4823 = t4794 + t4806;
  t8090 = t3624*t8039;
  t8091 = t7946*t3682;
  t8092 = t8090 + t8091;
  t8049 = -1.*t8043*t4315;
  t8052 = t4251*t8043;
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
  p_output1[21]=t1611*t1801 - 1.*t1987*t2265 - 1.*t2469*t2480 - 1.*t2630*t3082 - 1.*t3211*t3482 - 1.*t3567*t3796 - 1.*t3962*t4098 - 1.*t4142*t4344 - 0.0306*(t4142*t4251 + t4315*t4526) - 1.*t4526*t4604 + 1.1312*t4823 - 0.135*t85 + 0.1305*t269*t85 - 1.*t1498*t812*t85 - 1.*t85*t865;
  p_output1[22]=-0.135*t1611 + 0.1305*t1611*t269 + t2265*t5002 + t2480*t5044 + t3082*t5119 + t3482*t5134 + t3796*t5248 + t4098*t5292 + t4344*t5314 + t4604*t5358 - 1.1312*(-1.*t4315*t5314 + t4251*t5358) + 0.0306*(t4251*t5314 + t4315*t5358) - 1.*t1498*t1611*t812 - 1.*t1801*t85 - 1.*t1611*t865;
  p_output1[23]=0;
  p_output1[24]=-1.*t1498*t1611*t269 - 1.*t1055*t1611*t2265*t269 + t1175*t1611*t2480*t269 - 1.*t1611*t5561 - 1.*t3082*t5693 - 1.*t3482*t5758 - 1.*t3796*t5787 - 1.*t4098*t5805 - 1.*t4344*t5870 - 1.*t4604*t5908 + 1.1312*(-1.*t4315*t5870 + t4251*t5908) - 0.0306*(t4251*t5870 + t4315*t5908) - 0.1305*t1611*t812;
  p_output1[25]=t3082*t6103 + t3482*t6239 + t3796*t6265 + t4098*t6300 + t4344*t6330 + t4604*t6354 - 1.1312*(-1.*t4315*t6330 + t4251*t6354) + 0.0306*(t4251*t6330 + t4315*t6354) + t1498*t269*t85 + t1055*t2265*t269*t85 - 1.*t1175*t2480*t269*t85 + t5561*t85 + 0.1305*t812*t85;
  p_output1[26]=-0.004500000000000004*t269 + t3082*t6513 + t3482*t6554 + t3796*t6565 + t4098*t6588 + t4344*t6620 + t4604*t6644 - 1.1312*(-1.*t4315*t6620 + t4251*t6644) + 0.0306*(t4251*t6620 + t4315*t6644) - 0.049*t812 - 1.*t1498*t812 - 1.*t1055*t2265*t812 + t1175*t2480*t812;
  p_output1[27]=-1.*t2480*t5002 - 1.*t2265*t6795 - 1.*t3082*t6864 - 1.*t3482*t6880 - 1.*t3796*t6893 - 1.*t4098*t6946 - 1.*t4344*t6960 - 1.*t4604*t6972 + 1.1312*(-1.*t4315*t6960 + t4251*t6972) - 0.0306*(t4251*t6960 + t4315*t6972) - 1.*t1611*t6774*t812 - 1.*t6720*t85;
  p_output1[28]=t2265*t2469 - 1.*t1611*t6720 + t2480*t7098 + t3082*t7113 + t3482*t7129 + t3796*t7152 + t4098*t7179 + t4344*t7198 + t4604*t7204 - 1.1312*(-1.*t4315*t7198 + t4251*t7204) + 0.0306*(t4251*t7198 + t4315*t7204) + t6774*t812*t85;
  p_output1[29]=-1.*t1175*t2265*t269 - 1.*t1055*t2480*t269 + t269*t6774 + t7302 + t7329 + t7377 + t7391 + t7409 + t7445 + t7468 + t7486;
  p_output1[30]=-1.*t6795*t7495 - 1.*t7524*t7536 - 1.*t3082*t7545 - 1.*t3482*t7551 - 1.*t3796*t7563 - 1.*t4098*t7577 - 1.*t4344*t7586 - 1.*t4604*t7602 + 1.1312*(-1.*t4315*t7586 + t4251*t7602) - 0.0306*(t4251*t7586 + t4315*t7602);
  p_output1[31]=t3082*t3211 + t2469*t7495 + t1987*t7536 + t3482*t7641 + t3796*t7658 + t4098*t7683 + t4344*t7695 + t4604*t7711 - 1.1312*(-1.*t4315*t7695 + t4251*t7711) + 0.0306*(t4251*t7695 + t4315*t7711);
  p_output1[32]=t7302 + t7329 + t7377 + t7391 + t7409 + t7445 + t7468 + t7486 - 1.*t1175*t269*t7495 + t1055*t269*t7536;
  p_output1[33]=-1.*t7545*t7746 - 1.*t7771*t7784 - 1.*t3796*t7797 - 1.*t4098*t7802 - 1.*t4344*t7812 - 1.*t4604*t7829 + 1.1312*(-1.*t4315*t7812 + t4251*t7829) - 0.0306*(t4251*t7812 + t4315*t7829);
  p_output1[34]=t3796*t3962 + t3211*t7746 + t2630*t7784 + t4098*t7872 + t4344*t7888 + t4604*t7900 - 1.1312*(-1.*t4315*t7888 + t4251*t7900) + 0.0306*(t4251*t7888 + t4315*t7900);
  p_output1[35]=t7293*t7746 + t7784*t7941 + t3796*t7946 + t4098*t7952 + t4344*t7963 + t4604*t7968 - 1.1312*(-1.*t4315*t7963 + t4251*t7968) + 0.0306*(t4251*t7963 + t4315*t7968);
  p_output1[36]=-1.*t7797*t7987 - 1.*t7992*t7995 - 1.*t4344*t7999 - 1.*t4604*t8003 + 1.1312*(t4251*t8003 + t8006) - 0.0306*(t4315*t8003 + t8009);
  p_output1[37]=t4344*t4526 + t3962*t7987 + t3567*t7995 + t4604*t8022 + 0.0306*(t4794 + t4315*t8022) - 1.1312*(t4251*t8022 + t8026);
  p_output1[38]=t7946*t7987 + t7995*t8039 + t4344*t8043 + t4604*t8046 - 1.1312*(t4251*t8046 + t8049) + 0.0306*(t4315*t8046 + t8052);
  p_output1[39]=-1.*t7999*t8058 + 1.1312*(t8006 - 1.*t4251*t8063) - 0.0306*(t8009 - 1.*t4315*t8063) - 1.*t8063*t8066;
  p_output1[40]=0.0306*t4823 - 1.1312*(-1.*t4142*t4251 + t8026) + t4526*t8058 + t4142*t8066;
  p_output1[41]=t8043*t8058 + t8066*t8092 - 1.1312*(t8049 - 1.*t4251*t8092) + 0.0306*(t8052 - 1.*t4315*t8092);
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

#include "J_MultisenseIMU_to_RightToeBottom_mex.hh"

namespace SymExpression
{

void J_MultisenseIMU_to_RightToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
