/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:18:00 GMT-05:00
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
  double t227;
  double t391;
  double t1178;
  double t1221;
  double t1263;
  double t1272;
  double t1341;
  double t1723;
  double t1906;
  double t1907;
  double t1913;
  double t2172;
  double t1847;
  double t1855;
  double t1882;
  double t2284;
  double t2290;
  double t2505;
  double t2815;
  double t2887;
  double t2903;
  double t2979;
  double t2704;
  double t2705;
  double t2727;
  double t3136;
  double t3218;
  double t3237;
  double t3566;
  double t3575;
  double t3586;
  double t3623;
  double t3469;
  double t3526;
  double t3563;
  double t3789;
  double t3901;
  double t3903;
  double t4258;
  double t4280;
  double t4292;
  double t4388;
  double t4243;
  double t4256;
  double t4257;
  double t4502;
  double t4549;
  double t4594;
  double t5183;
  double t5272;
  double t5184;
  double t5195;
  double t5303;
  double t5413;
  double t5227;
  double t5377;
  double t5405;
  double t5164;
  double t5434;
  double t5447;
  double t5465;
  double t5575;
  double t5406;
  double t5481;
  double t5535;
  double t5136;
  double t5585;
  double t5597;
  double t5598;
  double t5652;
  double t5550;
  double t5606;
  double t5621;
  double t5133;
  double t5658;
  double t5664;
  double t5685;
  double t5878;
  double t5806;
  double t5845;
  double t5872;
  double t5890;
  double t5892;
  double t5957;
  double t5970;
  double t6008;
  double t5920;
  double t6032;
  double t6044;
  double t6069;
  double t6072;
  double t6088;
  double t6060;
  double t6100;
  double t6117;
  double t6159;
  double t6217;
  double t6218;
  double t6140;
  double t6222;
  double t6254;
  double t6281;
  double t6289;
  double t6293;
  double t5625;
  double t5692;
  double t5697;
  double t5716;
  double t5733;
  double t5783;
  double t6275;
  double t6310;
  double t6317;
  double t6333;
  double t6353;
  double t6368;
  double t6474;
  double t6501;
  double t6562;
  double t6590;
  double t6603;
  double t6635;
  double t6584;
  double t6637;
  double t6640;
  double t6662;
  double t6663;
  double t6664;
  double t6645;
  double t6671;
  double t6673;
  double t6688;
  double t6697;
  double t6699;
  double t6675;
  double t6701;
  double t6703;
  double t6706;
  double t6708;
  double t6710;
  double t6425;
  double t6432;
  double t6433;
  double t6318;
  double t6377;
  double t6396;
  double t6704;
  double t6712;
  double t6716;
  double t6719;
  double t6723;
  double t6724;
  double t5698;
  double t5792;
  double t5795;
  double t6445;
  double t6447;
  double t6459;
  double t6420;
  double t6465;
  double t855;
  double t1148;
  double t1161;
  double t1189;
  double t1192;
  double t1284;
  double t1416;
  double t1539;
  double t1731;
  double t1790;
  double t1792;
  double t2164;
  double t2195;
  double t2228;
  double t2613;
  double t2656;
  double t2680;
  double t6937;
  double t6941;
  double t6958;
  double t6967;
  double t6973;
  double t6974;
  double t2974;
  double t3027;
  double t3044;
  double t3257;
  double t3277;
  double t3316;
  double t6985;
  double t6988;
  double t7006;
  double t7031;
  double t7035;
  double t7038;
  double t3618;
  double t3670;
  double t3702;
  double t4051;
  double t4160;
  double t4166;
  double t7046;
  double t7047;
  double t7052;
  double t7060;
  double t7075;
  double t7081;
  double t4342;
  double t4407;
  double t4424;
  double t4636;
  double t4642;
  double t4747;
  double t7090;
  double t7092;
  double t7098;
  double t7110;
  double t7118;
  double t7124;
  double t6759;
  double t6768;
  double t6783;
  double t6717;
  double t6729;
  double t6730;
  double t6736;
  double t6742;
  double t6750;
  double t6756;
  double t6784;
  double t6786;
  double t6809;
  double t6813;
  double t6824;
  double t6836;
  double t6844;
  double t6852;
  double t7217;
  double t7234;
  double t7235;
  double t7238;
  double t7239;
  double t7251;
  double t7255;
  double t7258;
  double t7265;
  double t7267;
  double t7270;
  double t7275;
  double t7279;
  double t7283;
  double t7293;
  double t7318;
  double t7323;
  double t7331;
  double t7503;
  double t7516;
  double t7557;
  double t7558;
  double t7642;
  double t7643;
  double t7711;
  double t7714;
  double t7788;
  double t7791;
  double t7465;
  double t7469;
  double t7568;
  double t7589;
  double t7590;
  double t7517;
  double t7524;
  double t7525;
  double t7602;
  double t7603;
  double t7626;
  double t7644;
  double t7663;
  double t7667;
  double t7691;
  double t7692;
  double t7696;
  double t7731;
  double t7738;
  double t7741;
  double t7752;
  double t7753;
  double t7755;
  double t7796;
  double t7798;
  double t7802;
  double t7818;
  double t7819;
  double t7824;
  double t7445;
  double t7448;
  double t7453;
  double t7455;
  double t7473;
  double t7478;
  double t7483;
  double t7489;
  double t7531;
  double t7539;
  double t7543;
  double t7546;
  double t7547;
  double t7601;
  double t7637;
  double t7682;
  double t7705;
  double t7745;
  double t7780;
  double t7805;
  double t7825;
  double t7826;
  double t7832;
  double t7835;
  double t7865;
  double t7867;
  double t7878;
  double t7886;
  double t7898;
  double t7907;
  double t7909;
  double t7914;
  double t7916;
  double t7921;
  double t7926;
  double t7928;
  double t7929;
  double t7938;
  double t259;
  double t567;
  double t1218;
  double t1590;
  double t1832;
  double t2273;
  double t2694;
  double t3096;
  double t3352;
  double t3751;
  double t4226;
  double t4440;
  double t4789;
  double t4795;
  double t4816;
  double t4844;
  double t4904;
  double t4921;
  double t4983;
  double t5013;
  double t5091;
  double t5098;
  double t7190;
  double t7192;
  double t7193;
  double t7208;
  double t7213;
  double t7237;
  double t7252;
  double t7266;
  double t7277;
  double t7296;
  double t7337;
  double t7349;
  double t7356;
  double t7361;
  double t7371;
  double t7372;
  double t7385;
  double t7389;
  double t7392;
  double t7394;
  double t6859;
  double t6871;
  double t6875;
  double t6880;
  double t6917;
  double t6924;
  double t6928;
  double t6964;
  double t6977;
  double t7027;
  double t7043;
  double t7058;
  double t7086;
  double t7100;
  double t7136;
  double t7141;
  double t7143;
  double t7147;
  double t7148;
  double t7151;
  double t7158;
  double t7159;
  double t7167;
  double t7169;
  double t8006;
  double t8013;
  double t8019;
  double t8053;
  double t8057;
  double t8060;
  double t8073;
  double t8082;
  double t8092;
  double t8109;
  double t8110;
  double t8130;
  double t8133;
  double t8150;
  double t8161;
  double t8162;
  double t7839;
  double t7939;
  double t7953;
  double t8418;
  double t8436;
  double t8443;
  double t7965;
  double t7966;
  double t7971;
  t227 = Sin(var1[7]);
  t391 = Cos(var1[8]);
  t1178 = Sin(var1[8]);
  t1221 = Cos(var1[9]);
  t1263 = -1.*t1221;
  t1272 = 1. + t1263;
  t1341 = Sin(var1[9]);
  t1723 = Cos(var1[7]);
  t1906 = Cos(var1[10]);
  t1907 = -1.*t1906;
  t1913 = 1. + t1907;
  t2172 = Sin(var1[10]);
  t1847 = t1221*t227*t1178;
  t1855 = t1723*t1341;
  t1882 = t1847 + t1855;
  t2284 = t1723*t1221;
  t2290 = -1.*t227*t1178*t1341;
  t2505 = t2284 + t2290;
  t2815 = Cos(var1[11]);
  t2887 = -1.*t2815;
  t2903 = 1. + t2887;
  t2979 = Sin(var1[11]);
  t2704 = t1906*t1882;
  t2705 = t2505*t2172;
  t2727 = t2704 + t2705;
  t3136 = t1906*t2505;
  t3218 = -1.*t1882*t2172;
  t3237 = t3136 + t3218;
  t3566 = Cos(var1[12]);
  t3575 = -1.*t3566;
  t3586 = 1. + t3575;
  t3623 = Sin(var1[12]);
  t3469 = t2815*t2727;
  t3526 = t3237*t2979;
  t3563 = t3469 + t3526;
  t3789 = t2815*t3237;
  t3901 = -1.*t2727*t2979;
  t3903 = t3789 + t3901;
  t4258 = Cos(var1[13]);
  t4280 = -1.*t4258;
  t4292 = 1. + t4280;
  t4388 = Sin(var1[13]);
  t4243 = t3566*t3563;
  t4256 = t3903*t3623;
  t4257 = t4243 + t4256;
  t4502 = t3566*t3903;
  t4549 = -1.*t3563*t3623;
  t4594 = t4502 + t4549;
  t5183 = Cos(var1[1]);
  t5272 = Cos(var1[3]);
  t5184 = Cos(var1[2]);
  t5195 = Sin(var1[3]);
  t5303 = Sin(var1[2]);
  t5413 = Cos(var1[4]);
  t5227 = -1.*t5183*t5184*t5195;
  t5377 = -1.*t5272*t5183*t5303;
  t5405 = t5227 + t5377;
  t5164 = Sin(var1[4]);
  t5434 = t5272*t5183*t5184;
  t5447 = -1.*t5183*t5195*t5303;
  t5465 = t5434 + t5447;
  t5575 = Cos(var1[5]);
  t5406 = t5164*t5405;
  t5481 = t5413*t5465;
  t5535 = t5406 + t5481;
  t5136 = Sin(var1[5]);
  t5585 = t5413*t5405;
  t5597 = -1.*t5164*t5465;
  t5598 = t5585 + t5597;
  t5652 = Cos(var1[6]);
  t5550 = -1.*t5136*t5535;
  t5606 = t5575*t5598;
  t5621 = t5550 + t5606;
  t5133 = Sin(var1[6]);
  t5658 = t5575*t5535;
  t5664 = t5136*t5598;
  t5685 = t5658 + t5664;
  t5878 = Sin(var1[0]);
  t5806 = Cos(var1[0]);
  t5845 = Sin(var1[1]);
  t5872 = t5806*t5184*t5845;
  t5890 = -1.*t5878*t5303;
  t5892 = t5872 + t5890;
  t5957 = -1.*t5184*t5878;
  t5970 = -1.*t5806*t5845*t5303;
  t6008 = t5957 + t5970;
  t5920 = -1.*t5195*t5892;
  t6032 = t5272*t6008;
  t6044 = t5920 + t6032;
  t6069 = t5272*t5892;
  t6072 = t5195*t6008;
  t6088 = t6069 + t6072;
  t6060 = t5164*t6044;
  t6100 = t5413*t6088;
  t6117 = t6060 + t6100;
  t6159 = t5413*t6044;
  t6217 = -1.*t5164*t6088;
  t6218 = t6159 + t6217;
  t6140 = -1.*t5136*t6117;
  t6222 = t5575*t6218;
  t6254 = t6140 + t6222;
  t6281 = t5575*t6117;
  t6289 = t5136*t6218;
  t6293 = t6281 + t6289;
  t5625 = t5133*t5621;
  t5692 = t5652*t5685;
  t5697 = t5625 + t5692;
  t5716 = t5652*t5621;
  t5733 = -1.*t5133*t5685;
  t5783 = t5716 + t5733;
  t6275 = t5133*t6254;
  t6310 = t5652*t6293;
  t6317 = t6275 + t6310;
  t6333 = t5652*t6254;
  t6353 = -1.*t5133*t6293;
  t6368 = t6333 + t6353;
  t6474 = t5184*t5878*t5845;
  t6501 = t5806*t5303;
  t6562 = t6474 + t6501;
  t6590 = t5806*t5184;
  t6603 = -1.*t5878*t5845*t5303;
  t6635 = t6590 + t6603;
  t6584 = -1.*t5195*t6562;
  t6637 = t5272*t6635;
  t6640 = t6584 + t6637;
  t6662 = t5272*t6562;
  t6663 = t5195*t6635;
  t6664 = t6662 + t6663;
  t6645 = t5164*t6640;
  t6671 = t5413*t6664;
  t6673 = t6645 + t6671;
  t6688 = t5413*t6640;
  t6697 = -1.*t5164*t6664;
  t6699 = t6688 + t6697;
  t6675 = -1.*t5136*t6673;
  t6701 = t5575*t6699;
  t6703 = t6675 + t6701;
  t6706 = t5575*t6673;
  t6708 = t5136*t6699;
  t6710 = t6706 + t6708;
  t6425 = -0.766044*t5697;
  t6432 = 0.642788*t5783;
  t6433 = t6425 + t6432;
  t6318 = -0.766044*t6317;
  t6377 = 0.642788*t6368;
  t6396 = t6318 + t6377;
  t6704 = t5133*t6703;
  t6712 = t5652*t6710;
  t6716 = t6704 + t6712;
  t6719 = t5652*t6703;
  t6723 = -1.*t5133*t6710;
  t6724 = t6719 + t6723;
  t5698 = 0.642788*t5697;
  t5792 = 0.766044*t5783;
  t5795 = t5698 + t5792;
  t6445 = 0.642788*t6317;
  t6447 = 0.766044*t6368;
  t6459 = t6445 + t6447;
  t6420 = t5795*t6396;
  t6465 = -1.*t6433*t6459;
  t855 = -1.*t391;
  t1148 = 1. + t855;
  t1161 = -0.135*t1148;
  t1189 = 0.049*t1178;
  t1192 = 0. + t1161 + t1189;
  t1284 = -0.049*t1272;
  t1416 = -0.09*t1341;
  t1539 = 0. + t1284 + t1416;
  t1731 = -0.09*t1272;
  t1790 = 0.049*t1341;
  t1792 = 0. + t1731 + t1790;
  t2164 = -0.049*t1913;
  t2195 = -0.21*t2172;
  t2228 = 0. + t2164 + t2195;
  t2613 = -0.21*t1913;
  t2656 = 0.049*t2172;
  t2680 = 0. + t2613 + t2656;
  t6937 = t1723*t1221*t1178;
  t6941 = -1.*t227*t1341;
  t6958 = t6937 + t6941;
  t6967 = -1.*t1221*t227;
  t6973 = -1.*t1723*t1178*t1341;
  t6974 = t6967 + t6973;
  t2974 = -0.0016*t2903;
  t3027 = -0.2707*t2979;
  t3044 = 0. + t2974 + t3027;
  t3257 = -0.2707*t2903;
  t3277 = 0.0016*t2979;
  t3316 = 0. + t3257 + t3277;
  t6985 = t1906*t6958;
  t6988 = t6974*t2172;
  t7006 = t6985 + t6988;
  t7031 = t1906*t6974;
  t7035 = -1.*t6958*t2172;
  t7038 = t7031 + t7035;
  t3618 = 0.0184*t3586;
  t3670 = -0.7055*t3623;
  t3702 = 0. + t3618 + t3670;
  t4051 = -0.7055*t3586;
  t4160 = -0.0184*t3623;
  t4166 = 0. + t4051 + t4160;
  t7046 = t2815*t7006;
  t7047 = t7038*t2979;
  t7052 = t7046 + t7047;
  t7060 = t2815*t7038;
  t7075 = -1.*t7006*t2979;
  t7081 = t7060 + t7075;
  t4342 = -0.0216*t4292;
  t4407 = -1.1135*t4388;
  t4424 = 0. + t4342 + t4407;
  t4636 = -1.1135*t4292;
  t4642 = 0.0216*t4388;
  t4747 = 0. + t4636 + t4642;
  t7090 = t3566*t7052;
  t7092 = t7081*t3623;
  t7098 = t7090 + t7092;
  t7110 = t3566*t7081;
  t7118 = -1.*t7052*t3623;
  t7124 = t7110 + t7118;
  t6759 = -0.766044*t6716;
  t6768 = 0.642788*t6724;
  t6783 = t6759 + t6768;
  t6717 = 0.642788*t6716;
  t6729 = 0.766044*t6724;
  t6730 = t6717 + t6729;
  t6736 = t5806*t5183*t6433;
  t6742 = t5845*t6396;
  t6750 = t6736 + t6742;
  t6756 = -1.*t6730*t6750;
  t6784 = t5806*t5183*t5795;
  t6786 = t5845*t6459;
  t6809 = t6784 + t6786;
  t6813 = t6783*t6809;
  t6824 = t6420 + t6465;
  t6836 = -1.*t5183*t5878*t6824;
  t6844 = 0. + t6756 + t6813 + t6836;
  t6852 = 1/t6844;
  t7217 = t391*t1221*t1906;
  t7234 = -1.*t391*t1341*t2172;
  t7235 = t7217 + t7234;
  t7238 = -1.*t391*t1906*t1341;
  t7239 = -1.*t391*t1221*t2172;
  t7251 = t7238 + t7239;
  t7255 = t2815*t7235;
  t7258 = t7251*t2979;
  t7265 = t7255 + t7258;
  t7267 = t2815*t7251;
  t7270 = -1.*t7235*t2979;
  t7275 = t7267 + t7270;
  t7279 = t3566*t7265;
  t7283 = t7275*t3623;
  t7293 = t7279 + t7283;
  t7318 = t3566*t7275;
  t7323 = -1.*t7265*t3623;
  t7331 = t7318 + t7323;
  t7503 = -1.*t5184;
  t7516 = 1. + t7503;
  t7557 = -1.*t5272;
  t7558 = 1. + t7557;
  t7642 = -1.*t5413;
  t7643 = 1. + t7642;
  t7711 = -1.*t5575;
  t7714 = 1. + t7711;
  t7788 = -1.*t5652;
  t7791 = 1. + t7788;
  t7465 = -1.*t5183;
  t7469 = 1. + t7465;
  t7568 = -0.049*t7558;
  t7589 = -0.21*t5195;
  t7590 = 0. + t7568 + t7589;
  t7517 = -0.049*t7516;
  t7524 = -0.09*t5303;
  t7525 = 0. + t7517 + t7524;
  t7602 = -0.21*t7558;
  t7603 = 0.049*t5195;
  t7626 = 0. + t7602 + t7603;
  t7644 = -0.2707*t7643;
  t7663 = 0.0016*t5164;
  t7667 = 0. + t7644 + t7663;
  t7691 = -0.0016*t7643;
  t7692 = -0.2707*t5164;
  t7696 = 0. + t7691 + t7692;
  t7731 = 0.0184*t7714;
  t7738 = -0.7055*t5136;
  t7741 = 0. + t7731 + t7738;
  t7752 = -0.7055*t7714;
  t7753 = -0.0184*t5136;
  t7755 = 0. + t7752 + t7753;
  t7796 = -1.1135*t7791;
  t7798 = 0.0216*t5133;
  t7802 = 0. + t7796 + t7798;
  t7818 = -0.0216*t7791;
  t7819 = -1.1135*t5133;
  t7824 = 0. + t7818 + t7819;
  t7445 = -1.*t5806;
  t7448 = 1. + t7445;
  t7453 = 0.135*t7448;
  t7455 = 0.1305*t5806*t5183;
  t7473 = 0.135*t7469;
  t7478 = 0.049*t5845;
  t7483 = 0. + t7473 + t7478;
  t7489 = t5806*t7483;
  t7531 = t5806*t5845*t7525;
  t7539 = -0.09*t7516;
  t7543 = 0.049*t5303;
  t7546 = 0. + t7539 + t7543;
  t7547 = -1.*t5878*t7546;
  t7601 = t7590*t5892;
  t7637 = t7626*t6008;
  t7682 = t7667*t6044;
  t7705 = t7696*t6088;
  t7745 = t7741*t6117;
  t7780 = t7755*t6218;
  t7805 = t7802*t6254;
  t7825 = t7824*t6293;
  t7826 = 0.0306*t6317;
  t7832 = -1.1312*t6368;
  t7835 = 0. + t7453 + t7455 + t7489 + t7531 + t7547 + t7601 + t7637 + t7682 + t7705 + t7745 + t7780 + t7805 + t7825 + t7826 + t7832;
  t7865 = -0.049*t7469;
  t7867 = t5183*t5184*t7590;
  t7878 = 0.004500000000000004*t5845;
  t7886 = t5183*t7525;
  t7898 = -1.*t5183*t7626*t5303;
  t7907 = t7667*t5405;
  t7909 = t7696*t5465;
  t7914 = t7741*t5535;
  t7916 = t7755*t5598;
  t7921 = t7802*t5621;
  t7926 = t7824*t5685;
  t7928 = 0.0306*t5697;
  t7929 = -1.1312*t5783;
  t7938 = 0. + t7865 + t7867 + t7878 + t7886 + t7898 + t7907 + t7909 + t7914 + t7916 + t7921 + t7926 + t7928 + t7929;
  t259 = 0.135*t227;
  t567 = -0.1305*t391*t227;
  t1218 = t227*t1192;
  t1590 = t227*t1178*t1539;
  t1832 = t1723*t1792;
  t2273 = t1882*t2228;
  t2694 = t2505*t2680;
  t3096 = t2727*t3044;
  t3352 = t3237*t3316;
  t3751 = t3563*t3702;
  t4226 = t3903*t4166;
  t4440 = t4257*t4424;
  t4789 = t4594*t4747;
  t4795 = t4258*t4257;
  t4816 = t4594*t4388;
  t4844 = t4795 + t4816;
  t4904 = 0.0306*t4844;
  t4921 = t4258*t4594;
  t4983 = -1.*t4257*t4388;
  t5013 = t4921 + t4983;
  t5091 = -1.1312*t5013;
  t5098 = 0. + t259 + t567 + t1218 + t1590 + t1832 + t2273 + t2694 + t3096 + t3352 + t3751 + t4226 + t4440 + t4789 + t4904 + t5091;
  t7190 = -0.049*t1148;
  t7192 = -0.004500000000000004*t1178;
  t7193 = t391*t1539;
  t7208 = t391*t1221*t2228;
  t7213 = -1.*t391*t1341*t2680;
  t7237 = t7235*t3044;
  t7252 = t7251*t3316;
  t7266 = t7265*t3702;
  t7277 = t7275*t4166;
  t7296 = t7293*t4424;
  t7337 = t7331*t4747;
  t7349 = t4258*t7293;
  t7356 = t7331*t4388;
  t7361 = t7349 + t7356;
  t7371 = 0.0306*t7361;
  t7372 = t4258*t7331;
  t7385 = -1.*t7293*t4388;
  t7389 = t7372 + t7385;
  t7392 = -1.1312*t7389;
  t7394 = 0. + t7190 + t7192 + t7193 + t7208 + t7213 + t7237 + t7252 + t7266 + t7277 + t7296 + t7337 + t7371 + t7392;
  t6859 = -1.*t1723;
  t6871 = 1. + t6859;
  t6875 = -0.135*t6871;
  t6880 = -0.1305*t1723*t391;
  t6917 = t1723*t1192;
  t6924 = t1723*t1178*t1539;
  t6928 = -1.*t227*t1792;
  t6964 = t6958*t2228;
  t6977 = t6974*t2680;
  t7027 = t7006*t3044;
  t7043 = t7038*t3316;
  t7058 = t7052*t3702;
  t7086 = t7081*t4166;
  t7100 = t7098*t4424;
  t7136 = t7124*t4747;
  t7141 = t4258*t7098;
  t7143 = t7124*t4388;
  t7147 = t7141 + t7143;
  t7148 = 0.0306*t7147;
  t7151 = t4258*t7124;
  t7158 = -1.*t7098*t4388;
  t7159 = t7151 + t7158;
  t7167 = -1.1312*t7159;
  t7169 = 0. + t6875 + t6880 + t6917 + t6924 + t6928 + t6964 + t6977 + t7027 + t7043 + t7058 + t7086 + t7100 + t7136 + t7148 + t7167;
  t8006 = -0.135*t5878;
  t8013 = 0.1305*t5183*t5878;
  t8019 = t5878*t7483;
  t8053 = t5878*t5845*t7525;
  t8057 = t5806*t7546;
  t8060 = t7590*t6562;
  t8073 = t7626*t6635;
  t8082 = t7667*t6640;
  t8092 = t7696*t6664;
  t8109 = t7741*t6673;
  t8110 = t7755*t6699;
  t8130 = t7802*t6703;
  t8133 = t7824*t6710;
  t8150 = 0.0306*t6716;
  t8161 = -1.1312*t6724;
  t8162 = 0. + t8006 + t8013 + t8019 + t8053 + t8057 + t8060 + t8073 + t8082 + t8092 + t8109 + t8110 + t8130 + t8133 + t8150 + t8161;
  t7839 = t6433*t7835;
  t7939 = -1.*t7938*t6396;
  t7953 = t7839 + t7939;
  t8418 = t5806*t5183*t7938;
  t8436 = t5845*t7835;
  t8443 = t8418 + t8436;
  t7965 = t5795*t7835;
  t7966 = -1.*t7938*t6459;
  t7971 = t7965 + t7966;
  p_output1[0]=t5098*(0. + t6420 + t6465)*t6852 + (0. + t6433*t6730 - 1.*t5795*t6783)*t6852*t7169 + (0. - 1.*t6396*t6730 + t6459*t6783)*t6852*t7394 + t6852*(-1.*t6730*t7953 + t6783*t7971 - 1.*t6824*t8162);
  p_output1[1]=t5098*(0. - 1.*t5845*t6396 - 1.*t5183*t5806*t6433)*t6852 + (0. + t5183*t5878*t6433 + t5845*t6783)*t6852*t7169 + (0. - 1.*t5183*t5878*t6396 + t5183*t5806*t6783)*t6852*t7394 + t6852*(-1.*t5183*t5878*t7953 + t6750*t8162 - 1.*t6783*t8443);
  p_output1[2]=t5098*(0. + t6784 + t6786)*t6852 + (0. - 1.*t5183*t5795*t5878 - 1.*t5845*t6730)*t6852*t7169 + (0. + t5183*t5878*t6459 - 1.*t5183*t5806*t6730)*t6852*t7394 + t6852*(t5183*t5878*t7971 - 1.*t6809*t8162 + t6730*t8443);
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
