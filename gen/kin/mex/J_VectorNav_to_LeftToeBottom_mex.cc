/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:36:07 GMT-05:00
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
  double t165;
  double t762;
  double t1450;
  double t1785;
  double t1849;
  double t1854;
  double t1948;
  double t2097;
  double t2410;
  double t2420;
  double t2459;
  double t2599;
  double t2743;
  double t2918;
  double t2922;
  double t3096;
  double t3216;
  double t3281;
  double t3534;
  double t3568;
  double t3579;
  double t3721;
  double t3956;
  double t3988;
  double t4003;
  double t4420;
  double t4438;
  double t4461;
  double t4491;
  double t4497;
  double t4525;
  double t4537;
  double t4555;
  double t4562;
  double t4569;
  double t4600;
  double t4614;
  double t4670;
  double t4782;
  double t4795;
  double t4802;
  double t4879;
  double t4988;
  double t5002;
  double t5012;
  double t5314;
  double t5337;
  double t5378;
  double t1195;
  double t1198;
  double t1331;
  double t1520;
  double t1525;
  double t1944;
  double t1962;
  double t1970;
  double t2111;
  double t2165;
  double t2168;
  double t2564;
  double t2609;
  double t2652;
  double t3039;
  double t3062;
  double t3091;
  double t3703;
  double t3788;
  double t3918;
  double t5692;
  double t5706;
  double t5717;
  double t5730;
  double t5732;
  double t5752;
  double t4109;
  double t4223;
  double t4244;
  double t4528;
  double t4538;
  double t4553;
  double t5764;
  double t5772;
  double t5773;
  double t5796;
  double t5829;
  double t5848;
  double t4580;
  double t4582;
  double t4592;
  double t4836;
  double t4954;
  double t4986;
  double t5955;
  double t6011;
  double t6038;
  double t6045;
  double t6093;
  double t6099;
  double t5227;
  double t5285;
  double t5298;
  double t6148;
  double t6185;
  double t6222;
  double t6250;
  double t6258;
  double t6259;
  double t6325;
  double t6330;
  double t6334;
  double t6340;
  double t6349;
  double t6350;
  double t6354;
  double t6360;
  double t6376;
  double t6382;
  double t6389;
  double t6397;
  double t6405;
  double t6412;
  double t6414;
  double t6427;
  double t6428;
  double t6442;
  double t6547;
  double t6548;
  double t6550;
  double t6555;
  double t6557;
  double t6568;
  double t6572;
  double t6573;
  double t6577;
  double t6579;
  double t6580;
  double t6585;
  double t6593;
  double t6598;
  double t6609;
  double t6617;
  double t6622;
  double t6624;
  double t6496;
  double t6514;
  double t6537;
  double t6695;
  double t6697;
  double t6700;
  double t6717;
  double t6751;
  double t6761;
  double t6774;
  double t6777;
  double t6785;
  double t6801;
  double t6808;
  double t6809;
  double t6826;
  double t6827;
  double t6828;
  double t6832;
  double t6833;
  double t6835;
  double t6932;
  double t6934;
  double t6940;
  double t6944;
  double t6945;
  double t6946;
  double t6950;
  double t6957;
  double t6960;
  double t6963;
  double t6964;
  double t6968;
  double t6971;
  double t6972;
  double t6984;
  double t6993;
  double t6998;
  double t6999;
  double t6913;
  double t6917;
  double t6918;
  double t7047;
  double t7048;
  double t7049;
  double t7058;
  double t7059;
  double t7065;
  double t7066;
  double t7075;
  double t7080;
  double t7083;
  double t7088;
  double t7098;
  double t7110;
  double t7115;
  double t7119;
  double t7123;
  double t7127;
  double t7141;
  double t7143;
  double t7146;
  double t7033;
  double t7037;
  double t7217;
  double t7230;
  double t7233;
  double t7248;
  double t7254;
  double t7256;
  double t7265;
  double t7266;
  double t7275;
  double t7276;
  double t7283;
  double t7286;
  double t7288;
  double t7290;
  double t7297;
  double t7301;
  double t7303;
  double t7308;
  double t7310;
  double t7311;
  double t6941;
  double t6949;
  double t6962;
  double t6969;
  double t6991;
  double t7001;
  double t7008;
  double t7009;
  double t7010;
  double t7011;
  double t7013;
  double t7016;
  double t7019;
  double t7023;
  double t7372;
  double t7377;
  double t7385;
  double t7390;
  double t7393;
  double t7420;
  double t7424;
  double t7428;
  double t7429;
  double t7430;
  double t7438;
  double t7439;
  double t7445;
  double t7451;
  double t7455;
  double t7460;
  double t7461;
  double t7463;
  double t7494;
  double t7495;
  double t7497;
  double t7500;
  double t7502;
  double t7506;
  double t7507;
  double t7509;
  double t7510;
  double t7511;
  double t7513;
  double t7514;
  double t7516;
  double t7522;
  double t7524;
  double t7525;
  double t7528;
  double t7530;
  double t7533;
  double t7554;
  double t7555;
  double t7556;
  double t7559;
  double t7562;
  double t7564;
  double t7566;
  double t7568;
  double t7570;
  double t7571;
  double t7573;
  double t7574;
  double t7575;
  double t7546;
  double t7547;
  double t7549;
  double t7552;
  double t7553;
  double t7592;
  double t7593;
  double t7599;
  double t7600;
  double t7603;
  double t7604;
  double t7606;
  double t7628;
  double t7629;
  double t7633;
  double t7640;
  double t7642;
  double t7652;
  double t7653;
  double t7658;
  double t7659;
  double t7660;
  double t7662;
  double t7664;
  double t7668;
  double t7701;
  double t7702;
  double t7703;
  double t7716;
  double t7719;
  double t7721;
  double t7722;
  double t7697;
  double t7699;
  double t7700;
  double t7706;
  double t7710;
  double t7757;
  double t7758;
  double t6285;
  double t7780;
  double t7781;
  double t7782;
  double t7786;
  double t7789;
  double t7792;
  double t7793;
  double t7730;
  double t7829;
  double t7836;
  double t7839;
  double t7737;
  double t7817;
  double t7818;
  double t7823;
  double t7824;
  double t7827;
  double t7760;
  double t6289;
  double t6294;
  double t7795;
  double t7881;
  double t7882;
  double t7883;
  double t7805;
  t165 = Sin(var1[0]);
  t762 = Cos(var1[1]);
  t1450 = Sin(var1[1]);
  t1785 = Cos(var1[2]);
  t1849 = -1.*t1785;
  t1854 = 1. + t1849;
  t1948 = Sin(var1[2]);
  t2097 = Cos(var1[0]);
  t2410 = Cos(var1[3]);
  t2420 = -1.*t2410;
  t2459 = 1. + t2420;
  t2599 = Sin(var1[3]);
  t2743 = -1.*t1785*t165*t1450;
  t2918 = -1.*t2097*t1948;
  t2922 = t2743 + t2918;
  t3096 = -1.*t2097*t1785;
  t3216 = t165*t1450*t1948;
  t3281 = t3096 + t3216;
  t3534 = Cos(var1[4]);
  t3568 = -1.*t3534;
  t3579 = 1. + t3568;
  t3721 = Sin(var1[4]);
  t3956 = -1.*t2599*t2922;
  t3988 = t2410*t3281;
  t4003 = t3956 + t3988;
  t4420 = t2410*t2922;
  t4438 = t2599*t3281;
  t4461 = t4420 + t4438;
  t4491 = Cos(var1[5]);
  t4497 = -1.*t4491;
  t4525 = 1. + t4497;
  t4537 = Sin(var1[5]);
  t4555 = t3721*t4003;
  t4562 = t3534*t4461;
  t4569 = t4555 + t4562;
  t4600 = t3534*t4003;
  t4614 = -1.*t3721*t4461;
  t4670 = t4600 + t4614;
  t4782 = Cos(var1[6]);
  t4795 = -1.*t4782;
  t4802 = 1. + t4795;
  t4879 = Sin(var1[6]);
  t4988 = -1.*t4537*t4569;
  t5002 = t4491*t4670;
  t5012 = t4988 + t5002;
  t5314 = t4491*t4569;
  t5337 = t4537*t4670;
  t5378 = t5314 + t5337;
  t1195 = -1.*t762;
  t1198 = 1. + t1195;
  t1331 = 0.135*t1198;
  t1520 = 0.049*t1450;
  t1525 = 0. + t1331 + t1520;
  t1944 = -0.049*t1854;
  t1962 = -0.09*t1948;
  t1970 = 0. + t1944 + t1962;
  t2111 = -0.09*t1854;
  t2165 = 0.049*t1948;
  t2168 = 0. + t2111 + t2165;
  t2564 = -0.049*t2459;
  t2609 = -0.21*t2599;
  t2652 = 0. + t2564 + t2609;
  t3039 = -0.21*t2459;
  t3062 = 0.049*t2599;
  t3091 = 0. + t3039 + t3062;
  t3703 = -0.2707*t3579;
  t3788 = 0.0016*t3721;
  t3918 = 0. + t3703 + t3788;
  t5692 = t2097*t1785*t1450;
  t5706 = -1.*t165*t1948;
  t5717 = t5692 + t5706;
  t5730 = -1.*t1785*t165;
  t5732 = -1.*t2097*t1450*t1948;
  t5752 = t5730 + t5732;
  t4109 = -0.0016*t3579;
  t4223 = -0.2707*t3721;
  t4244 = 0. + t4109 + t4223;
  t4528 = 0.0184*t4525;
  t4538 = -0.7055*t4537;
  t4553 = 0. + t4528 + t4538;
  t5764 = -1.*t2599*t5717;
  t5772 = t2410*t5752;
  t5773 = t5764 + t5772;
  t5796 = t2410*t5717;
  t5829 = t2599*t5752;
  t5848 = t5796 + t5829;
  t4580 = -0.7055*t4525;
  t4582 = -0.0184*t4537;
  t4592 = 0. + t4580 + t4582;
  t4836 = -1.1135*t4802;
  t4954 = 0.0216*t4879;
  t4986 = 0. + t4836 + t4954;
  t5955 = t3721*t5773;
  t6011 = t3534*t5848;
  t6038 = t5955 + t6011;
  t6045 = t3534*t5773;
  t6093 = -1.*t3721*t5848;
  t6099 = t6045 + t6093;
  t5227 = -0.0216*t4802;
  t5285 = -1.1135*t4879;
  t5298 = 0. + t5227 + t5285;
  t6148 = -1.*t4537*t6038;
  t6185 = t4491*t6099;
  t6222 = t6148 + t6185;
  t6250 = t4491*t6038;
  t6258 = t4537*t6099;
  t6259 = t6250 + t6258;
  t6325 = t1785*t2599*t1450;
  t6330 = t2410*t1450*t1948;
  t6334 = t6325 + t6330;
  t6340 = -1.*t2410*t1785*t1450;
  t6349 = t2599*t1450*t1948;
  t6350 = t6340 + t6349;
  t6354 = t3721*t6334;
  t6360 = t3534*t6350;
  t6376 = t6354 + t6360;
  t6382 = t3534*t6334;
  t6389 = -1.*t3721*t6350;
  t6397 = t6382 + t6389;
  t6405 = -1.*t4537*t6376;
  t6412 = t4491*t6397;
  t6414 = t6405 + t6412;
  t6427 = t4491*t6376;
  t6428 = t4537*t6397;
  t6442 = t6427 + t6428;
  t6547 = -1.*t2097*t762*t1785*t2599;
  t6548 = -1.*t2410*t2097*t762*t1948;
  t6550 = t6547 + t6548;
  t6555 = t2410*t2097*t762*t1785;
  t6557 = -1.*t2097*t762*t2599*t1948;
  t6568 = t6555 + t6557;
  t6572 = t3721*t6550;
  t6573 = t3534*t6568;
  t6577 = t6572 + t6573;
  t6579 = t3534*t6550;
  t6580 = -1.*t3721*t6568;
  t6585 = t6579 + t6580;
  t6593 = -1.*t4537*t6577;
  t6598 = t4491*t6585;
  t6609 = t6593 + t6598;
  t6617 = t4491*t6577;
  t6622 = t4537*t6585;
  t6624 = t6617 + t6622;
  t6496 = 0.049*t762;
  t6514 = 0.135*t1450;
  t6537 = t6496 + t6514;
  t6695 = -1.*t762*t1785*t2599*t165;
  t6697 = -1.*t2410*t762*t165*t1948;
  t6700 = t6695 + t6697;
  t6717 = t2410*t762*t1785*t165;
  t6751 = -1.*t762*t2599*t165*t1948;
  t6761 = t6717 + t6751;
  t6774 = t3721*t6700;
  t6777 = t3534*t6761;
  t6785 = t6774 + t6777;
  t6801 = t3534*t6700;
  t6808 = -1.*t3721*t6761;
  t6809 = t6801 + t6808;
  t6826 = -1.*t4537*t6785;
  t6827 = t4491*t6809;
  t6828 = t6826 + t6827;
  t6832 = t4491*t6785;
  t6833 = t4537*t6809;
  t6835 = t6832 + t6833;
  t6932 = -1.*t762*t1785*t2599;
  t6934 = -1.*t2410*t762*t1948;
  t6940 = t6932 + t6934;
  t6944 = -1.*t2410*t762*t1785;
  t6945 = t762*t2599*t1948;
  t6946 = t6944 + t6945;
  t6950 = -1.*t3721*t6940;
  t6957 = t3534*t6946;
  t6960 = t6950 + t6957;
  t6963 = t3534*t6940;
  t6964 = t3721*t6946;
  t6968 = t6963 + t6964;
  t6971 = t4537*t6960;
  t6972 = t4491*t6968;
  t6984 = t6971 + t6972;
  t6993 = t4491*t6960;
  t6998 = -1.*t4537*t6968;
  t6999 = t6993 + t6998;
  t6913 = -0.09*t1785;
  t6917 = -0.049*t1948;
  t6918 = t6913 + t6917;
  t7047 = -1.*t2097*t1785*t1450;
  t7048 = t165*t1948;
  t7049 = t7047 + t7048;
  t7058 = t2599*t7049;
  t7059 = t7058 + t5772;
  t7065 = t2410*t7049;
  t7066 = -1.*t2599*t5752;
  t7075 = t7065 + t7066;
  t7080 = -1.*t3721*t7059;
  t7083 = t3534*t7075;
  t7088 = t7080 + t7083;
  t7098 = t3534*t7059;
  t7110 = t3721*t7075;
  t7115 = t7098 + t7110;
  t7119 = t4537*t7088;
  t7123 = t4491*t7115;
  t7127 = t7119 + t7123;
  t7141 = t4491*t7088;
  t7143 = -1.*t4537*t7115;
  t7146 = t7141 + t7143;
  t7033 = 0.049*t1785;
  t7037 = t7033 + t1962;
  t7217 = t2097*t1785;
  t7230 = -1.*t165*t1450*t1948;
  t7233 = t7217 + t7230;
  t7248 = t2599*t2922;
  t7254 = t2410*t7233;
  t7256 = t7248 + t7254;
  t7265 = -1.*t2599*t7233;
  t7266 = t4420 + t7265;
  t7275 = -1.*t3721*t7256;
  t7276 = t3534*t7266;
  t7283 = t7275 + t7276;
  t7286 = t3534*t7256;
  t7288 = t3721*t7266;
  t7290 = t7286 + t7288;
  t7297 = t4537*t7283;
  t7301 = t4491*t7290;
  t7303 = t7297 + t7301;
  t7308 = t4491*t7283;
  t7310 = -1.*t4537*t7290;
  t7311 = t7308 + t7310;
  t6941 = t4244*t6940;
  t6949 = t3918*t6946;
  t6962 = t4592*t6960;
  t6969 = t4553*t6968;
  t6991 = t5298*t6984;
  t7001 = t4986*t6999;
  t7008 = -1.*t4879*t6984;
  t7009 = t4782*t6999;
  t7010 = t7008 + t7009;
  t7011 = -1.1312*t7010;
  t7013 = t4782*t6984;
  t7016 = t4879*t6999;
  t7019 = t7013 + t7016;
  t7023 = 0.0306*t7019;
  t7372 = -0.21*t2410;
  t7377 = -0.049*t2599;
  t7385 = t7372 + t7377;
  t7390 = 0.049*t2410;
  t7393 = t7390 + t2609;
  t7420 = -1.*t2410*t5717;
  t7424 = t7420 + t7066;
  t7428 = -1.*t3721*t5773;
  t7429 = t3534*t7424;
  t7430 = t7428 + t7429;
  t7438 = t3721*t7424;
  t7439 = t6045 + t7438;
  t7445 = t4537*t7430;
  t7451 = t4491*t7439;
  t7455 = t7445 + t7451;
  t7460 = t4491*t7430;
  t7461 = -1.*t4537*t7439;
  t7463 = t7460 + t7461;
  t7494 = t1785*t165*t1450;
  t7495 = t2097*t1948;
  t7497 = t7494 + t7495;
  t7500 = -1.*t2599*t7497;
  t7502 = t7500 + t7254;
  t7506 = -1.*t2410*t7497;
  t7507 = t7506 + t7265;
  t7509 = -1.*t3721*t7502;
  t7510 = t3534*t7507;
  t7511 = t7509 + t7510;
  t7513 = t3534*t7502;
  t7514 = t3721*t7507;
  t7516 = t7513 + t7514;
  t7522 = t4537*t7511;
  t7524 = t4491*t7516;
  t7525 = t7522 + t7524;
  t7528 = t4491*t7511;
  t7530 = -1.*t4537*t7516;
  t7533 = t7528 + t7530;
  t7554 = t2410*t762*t1785;
  t7555 = -1.*t762*t2599*t1948;
  t7556 = t7554 + t7555;
  t7559 = -1.*t3534*t7556;
  t7562 = t6950 + t7559;
  t7564 = -1.*t3721*t7556;
  t7566 = t6963 + t7564;
  t7568 = t4537*t7562;
  t7570 = t4491*t7566;
  t7571 = t7568 + t7570;
  t7573 = t4491*t7562;
  t7574 = -1.*t4537*t7566;
  t7575 = t7573 + t7574;
  t7546 = 0.0016*t3534;
  t7547 = t7546 + t4223;
  t7549 = -0.2707*t3534;
  t7552 = -0.0016*t3721;
  t7553 = t7549 + t7552;
  t7592 = -1.*t3534*t5848;
  t7593 = t7428 + t7592;
  t7599 = t4537*t7593;
  t7600 = t7599 + t6185;
  t7603 = t4491*t7593;
  t7604 = -1.*t4537*t6099;
  t7606 = t7603 + t7604;
  t7628 = t2410*t7497;
  t7629 = t2599*t7233;
  t7633 = t7628 + t7629;
  t7640 = -1.*t3534*t7633;
  t7642 = t7509 + t7640;
  t7652 = -1.*t3721*t7633;
  t7653 = t7513 + t7652;
  t7658 = t4537*t7642;
  t7659 = t4491*t7653;
  t7660 = t7658 + t7659;
  t7662 = t4491*t7642;
  t7664 = -1.*t4537*t7653;
  t7668 = t7662 + t7664;
  t7701 = t3721*t6940;
  t7702 = t3534*t7556;
  t7703 = t7701 + t7702;
  t7716 = -1.*t4537*t7703;
  t7719 = t7716 + t7570;
  t7721 = -1.*t4491*t7703;
  t7722 = t7721 + t7574;
  t7697 = -0.7055*t4491;
  t7699 = 0.0184*t4537;
  t7700 = t7697 + t7699;
  t7706 = -0.0184*t4491;
  t7710 = t7706 + t4538;
  t7757 = -1.*t4491*t6038;
  t7758 = t7757 + t7604;
  t6285 = t4782*t6222;
  t7780 = t3721*t7502;
  t7781 = t3534*t7633;
  t7782 = t7780 + t7781;
  t7786 = -1.*t4537*t7782;
  t7789 = t7786 + t7659;
  t7792 = -1.*t4491*t7782;
  t7793 = t7792 + t7664;
  t7730 = -1.*t4879*t7719;
  t7829 = t4491*t7703;
  t7836 = t4537*t7566;
  t7839 = t7829 + t7836;
  t7737 = t4782*t7719;
  t7817 = 0.0216*t4782;
  t7818 = t7817 + t5285;
  t7823 = -1.1135*t4782;
  t7824 = -0.0216*t4879;
  t7827 = t7823 + t7824;
  t7760 = -1.*t4879*t6222;
  t6289 = -1.*t4879*t6259;
  t6294 = t6285 + t6289;
  t7795 = -1.*t4879*t7789;
  t7881 = t4491*t7782;
  t7882 = t4537*t7653;
  t7883 = t7881 + t7882;
  t7805 = t4782*t7789;
  p_output1[0]=0;
  p_output1[1]=-0.135*t165 + t1525*t165 + t1450*t165*t1970 + t2097*t2168 - 1.*t2652*t2922 - 1.*t3091*t3281 - 1.*t3918*t4003 - 1.*t4244*t4461 - 1.*t4553*t4569 - 1.*t4592*t4670 - 1.*t4986*t5012 - 1.*t5298*t5378 - 0.0306*(t4879*t5012 + t4782*t5378) + 1.1312*(t4782*t5012 - 1.*t4879*t5378) + 0.1305*t165*t762;
  p_output1[2]=0.135*t2097 - 1.*t1525*t2097 - 1.*t1450*t1970*t2097 + t165*t2168 - 1.*t2652*t5717 - 1.*t3091*t5752 - 1.*t3918*t5773 - 1.*t4244*t5848 - 1.*t4553*t6038 - 1.*t4592*t6099 - 1.*t4986*t6222 - 1.*t5298*t6259 - 0.0306*(t4879*t6222 + t4782*t6259) + 1.1312*t6294 - 0.1305*t2097*t762;
  p_output1[3]=-0.049*t1450 - 1.*t1450*t1970 - 1.*t1450*t1785*t2652 + t1450*t1948*t3091 + t3918*t6334 + t4244*t6350 + t4553*t6376 + t4592*t6397 + t4986*t6414 + t5298*t6442 + 0.0306*(t4879*t6414 + t4782*t6442) - 1.1312*(t4782*t6414 - 1.*t4879*t6442) + 0.004500000000000004*t762;
  p_output1[4]=0.1305*t1450*t2097 - 1.*t2097*t6537 - 1.*t3918*t6550 - 1.*t4244*t6568 - 1.*t4553*t6577 - 1.*t4592*t6585 - 1.*t4986*t6609 - 1.*t5298*t6624 - 0.0306*(t4879*t6609 + t4782*t6624) + 1.1312*(t4782*t6609 - 1.*t4879*t6624) - 1.*t1970*t2097*t762 - 1.*t1785*t2097*t2652*t762 + t1948*t2097*t3091*t762;
  p_output1[5]=0.1305*t1450*t165 - 1.*t165*t6537 - 1.*t3918*t6700 - 1.*t4244*t6761 - 1.*t4553*t6785 - 1.*t4592*t6809 - 1.*t4986*t6828 - 1.*t5298*t6835 - 0.0306*(t4879*t6828 + t4782*t6835) + 1.1312*(t4782*t6828 - 1.*t4879*t6835) - 1.*t165*t1970*t762 - 1.*t165*t1785*t2652*t762 + t165*t1948*t3091*t762;
  p_output1[6]=t6941 + t6949 + t6962 + t6969 + t6991 + t7001 + t7011 + t7023 - 1.*t1948*t2652*t762 - 1.*t1785*t3091*t762 + t6918*t762;
  p_output1[7]=-1.*t2652*t5752 - 1.*t1450*t2097*t6918 + t165*t7037 - 1.*t3091*t7049 - 1.*t4244*t7059 - 1.*t3918*t7075 - 1.*t4592*t7088 - 1.*t4553*t7115 - 1.*t5298*t7127 - 1.*t4986*t7146 + 1.1312*(-1.*t4879*t7127 + t4782*t7146) - 0.0306*(t4782*t7127 + t4879*t7146);
  p_output1[8]=-1.*t2922*t3091 - 1.*t1450*t165*t6918 - 1.*t2097*t7037 - 1.*t2652*t7233 - 1.*t4244*t7256 - 1.*t3918*t7266 - 1.*t4592*t7283 - 1.*t4553*t7290 - 1.*t5298*t7303 - 1.*t4986*t7311 + 1.1312*(-1.*t4879*t7303 + t4782*t7311) - 0.0306*(t4782*t7303 + t4879*t7311);
  p_output1[9]=t6941 + t6949 + t6962 + t6969 + t6991 + t7001 + t7011 + t7023 + t1785*t7385*t762 - 1.*t1948*t7393*t762;
  p_output1[10]=-1.*t4244*t5773 - 1.*t5717*t7385 - 1.*t5752*t7393 - 1.*t3918*t7424 - 1.*t4592*t7430 - 1.*t4553*t7439 - 1.*t5298*t7455 - 1.*t4986*t7463 + 1.1312*(-1.*t4879*t7455 + t4782*t7463) - 0.0306*(t4782*t7455 + t4879*t7463);
  p_output1[11]=-1.*t7233*t7393 - 1.*t7385*t7497 - 1.*t4244*t7502 - 1.*t3918*t7507 - 1.*t4592*t7511 - 1.*t4553*t7516 - 1.*t5298*t7525 - 1.*t4986*t7533 + 1.1312*(-1.*t4879*t7525 + t4782*t7533) - 0.0306*(t4782*t7525 + t4879*t7533);
  p_output1[12]=t6940*t7547 + t7553*t7556 + t4592*t7562 + t4553*t7566 + t5298*t7571 + t4986*t7575 - 1.1312*(-1.*t4879*t7571 + t4782*t7575) + 0.0306*(t4782*t7571 + t4879*t7575);
  p_output1[13]=-1.*t4553*t6099 - 1.*t5773*t7547 - 1.*t5848*t7553 - 1.*t4592*t7593 - 1.*t5298*t7600 - 1.*t4986*t7606 + 1.1312*(-1.*t4879*t7600 + t4782*t7606) - 0.0306*(t4782*t7600 + t4879*t7606);
  p_output1[14]=-1.*t7502*t7547 - 1.*t7553*t7633 - 1.*t4592*t7642 - 1.*t4553*t7653 - 1.*t5298*t7660 - 1.*t4986*t7668 + 1.1312*(-1.*t4879*t7660 + t4782*t7668) - 0.0306*(t4782*t7660 + t4879*t7668);
  p_output1[15]=t7700*t7703 + t7566*t7710 + t5298*t7719 + t4986*t7722 - 1.1312*(t4782*t7722 + t7730) + 0.0306*(t4879*t7722 + t7737);
  p_output1[16]=-1.*t5298*t6222 - 1.*t6038*t7700 - 1.*t6099*t7710 - 1.*t4986*t7758 - 0.0306*(t6285 + t4879*t7758) + 1.1312*(t4782*t7758 + t7760);
  p_output1[17]=-1.*t7653*t7710 - 1.*t7700*t7782 - 1.*t5298*t7789 - 1.*t4986*t7793 + 1.1312*(t4782*t7793 + t7795) - 0.0306*(t4879*t7793 + t7805);
  p_output1[18]=t7719*t7818 + t7827*t7839 - 1.1312*(t7730 - 1.*t4782*t7839) + 0.0306*(t7737 - 1.*t4879*t7839);
  p_output1[19]=-0.0306*t6294 + 1.1312*(-1.*t4782*t6259 + t7760) - 1.*t6222*t7818 - 1.*t6259*t7827;
  p_output1[20]=-1.*t7789*t7818 - 1.*t7827*t7883 + 1.1312*(t7795 - 1.*t4782*t7883) - 0.0306*(t7805 - 1.*t4879*t7883);
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
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
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

#include "J_VectorNav_to_LeftToeBottom_mex.hh"

namespace SymExpression
{

void J_VectorNav_to_LeftToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
