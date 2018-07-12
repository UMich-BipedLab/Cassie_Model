/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:36:51 GMT-04:00
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
  double t38;
  double t142;
  double t1110;
  double t1851;
  double t1959;
  double t2024;
  double t2080;
  double t2172;
  double t2393;
  double t2438;
  double t2497;
  double t2517;
  double t2628;
  double t2629;
  double t2742;
  double t3104;
  double t3221;
  double t3246;
  double t3395;
  double t3414;
  double t3453;
  double t3512;
  double t3551;
  double t3557;
  double t3575;
  double t3622;
  double t3639;
  double t3640;
  double t3674;
  double t3679;
  double t3682;
  double t3709;
  double t3731;
  double t3775;
  double t3795;
  double t3832;
  double t3840;
  double t3845;
  double t3869;
  double t3878;
  double t3897;
  double t3919;
  double t3930;
  double t3932;
  double t3952;
  double t4049;
  double t4077;
  double t4092;
  double t485;
  double t685;
  double t1000;
  double t1328;
  double t1431;
  double t2069;
  double t2081;
  double t2099;
  double t2174;
  double t2195;
  double t2254;
  double t2504;
  double t2551;
  double t2617;
  double t2771;
  double t2850;
  double t2980;
  double t3504;
  double t3527;
  double t3550;
  double t4259;
  double t4295;
  double t4298;
  double t4334;
  double t4357;
  double t4363;
  double t3603;
  double t3619;
  double t3620;
  double t3704;
  double t3715;
  double t3728;
  double t4384;
  double t4400;
  double t4407;
  double t4419;
  double t4437;
  double t4460;
  double t3810;
  double t3824;
  double t3829;
  double t3909;
  double t3920;
  double t3922;
  double t4479;
  double t4486;
  double t4491;
  double t4535;
  double t4594;
  double t4675;
  double t3987;
  double t3990;
  double t4018;
  double t4925;
  double t4934;
  double t4938;
  double t4961;
  double t4978;
  double t4985;
  double t5463;
  double t5540;
  double t5542;
  double t5564;
  double t5571;
  double t5588;
  double t5618;
  double t5620;
  double t5626;
  double t5659;
  double t5680;
  double t5705;
  double t5734;
  double t5747;
  double t5763;
  double t5789;
  double t5794;
  double t5808;
  double t6019;
  double t6030;
  double t6035;
  double t6052;
  double t6079;
  double t6087;
  double t6093;
  double t6114;
  double t6133;
  double t6143;
  double t6152;
  double t6154;
  double t6165;
  double t6169;
  double t6176;
  double t6196;
  double t6201;
  double t6220;
  double t5917;
  double t5952;
  double t5955;
  double t6415;
  double t6447;
  double t6454;
  double t6464;
  double t6472;
  double t6474;
  double t6483;
  double t6488;
  double t6500;
  double t6504;
  double t6509;
  double t6512;
  double t6518;
  double t6522;
  double t6525;
  double t6532;
  double t6541;
  double t6542;
  double t6589;
  double t6590;
  double t6598;
  double t6608;
  double t6612;
  double t6614;
  double t6626;
  double t6634;
  double t6637;
  double t6647;
  double t6651;
  double t6655;
  double t6659;
  double t6666;
  double t6670;
  double t6674;
  double t6679;
  double t6680;
  double t6577;
  double t6580;
  double t6584;
  double t6751;
  double t6753;
  double t6764;
  double t6770;
  double t6776;
  double t6783;
  double t6786;
  double t6787;
  double t6791;
  double t6801;
  double t6805;
  double t6810;
  double t6816;
  double t6817;
  double t6820;
  double t6830;
  double t6833;
  double t6846;
  double t6849;
  double t6850;
  double t6727;
  double t6729;
  double t6901;
  double t6903;
  double t6911;
  double t6927;
  double t6933;
  double t6939;
  double t6943;
  double t6946;
  double t6970;
  double t6975;
  double t6977;
  double t6983;
  double t6985;
  double t6999;
  double t7003;
  double t7004;
  double t7006;
  double t7016;
  double t7019;
  double t7023;
  double t6599;
  double t6617;
  double t6643;
  double t6657;
  double t6673;
  double t6689;
  double t6697;
  double t6698;
  double t6708;
  double t6710;
  double t6711;
  double t6712;
  double t6716;
  double t6718;
  double t7072;
  double t7074;
  double t7076;
  double t7080;
  double t7086;
  double t7117;
  double t7118;
  double t7121;
  double t7146;
  double t7149;
  double t7151;
  double t7154;
  double t7186;
  double t7188;
  double t7189;
  double t7200;
  double t7203;
  double t7208;
  double t7265;
  double t7269;
  double t7270;
  double t7293;
  double t7301;
  double t7311;
  double t7312;
  double t7316;
  double t7320;
  double t7321;
  double t7340;
  double t7341;
  double t7344;
  double t7351;
  double t7356;
  double t7359;
  double t7361;
  double t7365;
  double t7366;
  double t7436;
  double t7439;
  double t7443;
  double t7451;
  double t7455;
  double t7463;
  double t7467;
  double t7470;
  double t7471;
  double t7473;
  double t7479;
  double t7480;
  double t7488;
  double t7417;
  double t7419;
  double t7432;
  double t7434;
  double t7435;
  double t7535;
  double t7536;
  double t7541;
  double t7547;
  double t7559;
  double t7568;
  double t7569;
  double t7621;
  double t7626;
  double t7627;
  double t7631;
  double t7632;
  double t7641;
  double t7644;
  double t7650;
  double t7657;
  double t7663;
  double t7665;
  double t7666;
  double t7677;
  double t7726;
  double t7727;
  double t7729;
  double t7742;
  double t7744;
  double t7747;
  double t7748;
  double t7716;
  double t7722;
  double t7723;
  double t7735;
  double t7736;
  double t7779;
  double t7782;
  double t5260;
  double t7809;
  double t7810;
  double t7812;
  double t7815;
  double t7816;
  double t7821;
  double t7826;
  double t7752;
  double t7867;
  double t7873;
  double t7876;
  double t7762;
  double t7852;
  double t7855;
  double t7857;
  double t7858;
  double t7859;
  double t7788;
  double t5376;
  double t5391;
  double t7830;
  double t7914;
  double t7916;
  double t7918;
  double t7838;
  t38 = Sin(var1[0]);
  t142 = Cos(var1[1]);
  t1110 = Sin(var1[1]);
  t1851 = Cos(var1[2]);
  t1959 = -1.*t1851;
  t2024 = 1. + t1959;
  t2080 = Sin(var1[2]);
  t2172 = Cos(var1[0]);
  t2393 = Cos(var1[3]);
  t2438 = -1.*t2393;
  t2497 = 1. + t2438;
  t2517 = Sin(var1[3]);
  t2628 = -1.*t1851*t38*t1110;
  t2629 = -1.*t2172*t2080;
  t2742 = t2628 + t2629;
  t3104 = -1.*t2172*t1851;
  t3221 = t38*t1110*t2080;
  t3246 = t3104 + t3221;
  t3395 = Cos(var1[4]);
  t3414 = -1.*t3395;
  t3453 = 1. + t3414;
  t3512 = Sin(var1[4]);
  t3551 = -1.*t2517*t2742;
  t3557 = t2393*t3246;
  t3575 = t3551 + t3557;
  t3622 = t2393*t2742;
  t3639 = t2517*t3246;
  t3640 = t3622 + t3639;
  t3674 = Cos(var1[5]);
  t3679 = -1.*t3674;
  t3682 = 1. + t3679;
  t3709 = Sin(var1[5]);
  t3731 = t3512*t3575;
  t3775 = t3395*t3640;
  t3795 = t3731 + t3775;
  t3832 = t3395*t3575;
  t3840 = -1.*t3512*t3640;
  t3845 = t3832 + t3840;
  t3869 = Cos(var1[6]);
  t3878 = -1.*t3869;
  t3897 = 1. + t3878;
  t3919 = Sin(var1[6]);
  t3930 = -1.*t3709*t3795;
  t3932 = t3674*t3845;
  t3952 = t3930 + t3932;
  t4049 = t3674*t3795;
  t4077 = t3709*t3845;
  t4092 = t4049 + t4077;
  t485 = -1.*t142;
  t685 = 1. + t485;
  t1000 = 0.135*t685;
  t1328 = 0.049*t1110;
  t1431 = 0. + t1000 + t1328;
  t2069 = -0.049*t2024;
  t2081 = -0.09*t2080;
  t2099 = 0. + t2069 + t2081;
  t2174 = -0.09*t2024;
  t2195 = 0.049*t2080;
  t2254 = 0. + t2174 + t2195;
  t2504 = -0.049*t2497;
  t2551 = -0.21*t2517;
  t2617 = 0. + t2504 + t2551;
  t2771 = -0.21*t2497;
  t2850 = 0.049*t2517;
  t2980 = 0. + t2771 + t2850;
  t3504 = -0.2707*t3453;
  t3527 = 0.0016*t3512;
  t3550 = 0. + t3504 + t3527;
  t4259 = t2172*t1851*t1110;
  t4295 = -1.*t38*t2080;
  t4298 = t4259 + t4295;
  t4334 = -1.*t1851*t38;
  t4357 = -1.*t2172*t1110*t2080;
  t4363 = t4334 + t4357;
  t3603 = -0.0016*t3453;
  t3619 = -0.2707*t3512;
  t3620 = 0. + t3603 + t3619;
  t3704 = 0.0184*t3682;
  t3715 = -0.7055*t3709;
  t3728 = 0. + t3704 + t3715;
  t4384 = -1.*t2517*t4298;
  t4400 = t2393*t4363;
  t4407 = t4384 + t4400;
  t4419 = t2393*t4298;
  t4437 = t2517*t4363;
  t4460 = t4419 + t4437;
  t3810 = -0.7055*t3682;
  t3824 = -0.0184*t3709;
  t3829 = 0. + t3810 + t3824;
  t3909 = -1.1135*t3897;
  t3920 = 0.0216*t3919;
  t3922 = 0. + t3909 + t3920;
  t4479 = t3512*t4407;
  t4486 = t3395*t4460;
  t4491 = t4479 + t4486;
  t4535 = t3395*t4407;
  t4594 = -1.*t3512*t4460;
  t4675 = t4535 + t4594;
  t3987 = -0.0216*t3897;
  t3990 = -1.1135*t3919;
  t4018 = 0. + t3987 + t3990;
  t4925 = -1.*t3709*t4491;
  t4934 = t3674*t4675;
  t4938 = t4925 + t4934;
  t4961 = t3674*t4491;
  t4978 = t3709*t4675;
  t4985 = t4961 + t4978;
  t5463 = t1851*t2517*t1110;
  t5540 = t2393*t1110*t2080;
  t5542 = t5463 + t5540;
  t5564 = -1.*t2393*t1851*t1110;
  t5571 = t2517*t1110*t2080;
  t5588 = t5564 + t5571;
  t5618 = t3512*t5542;
  t5620 = t3395*t5588;
  t5626 = t5618 + t5620;
  t5659 = t3395*t5542;
  t5680 = -1.*t3512*t5588;
  t5705 = t5659 + t5680;
  t5734 = -1.*t3709*t5626;
  t5747 = t3674*t5705;
  t5763 = t5734 + t5747;
  t5789 = t3674*t5626;
  t5794 = t3709*t5705;
  t5808 = t5789 + t5794;
  t6019 = -1.*t2172*t142*t1851*t2517;
  t6030 = -1.*t2393*t2172*t142*t2080;
  t6035 = t6019 + t6030;
  t6052 = t2393*t2172*t142*t1851;
  t6079 = -1.*t2172*t142*t2517*t2080;
  t6087 = t6052 + t6079;
  t6093 = t3512*t6035;
  t6114 = t3395*t6087;
  t6133 = t6093 + t6114;
  t6143 = t3395*t6035;
  t6152 = -1.*t3512*t6087;
  t6154 = t6143 + t6152;
  t6165 = -1.*t3709*t6133;
  t6169 = t3674*t6154;
  t6176 = t6165 + t6169;
  t6196 = t3674*t6133;
  t6201 = t3709*t6154;
  t6220 = t6196 + t6201;
  t5917 = 0.049*t142;
  t5952 = 0.135*t1110;
  t5955 = t5917 + t5952;
  t6415 = -1.*t142*t1851*t2517*t38;
  t6447 = -1.*t2393*t142*t38*t2080;
  t6454 = t6415 + t6447;
  t6464 = t2393*t142*t1851*t38;
  t6472 = -1.*t142*t2517*t38*t2080;
  t6474 = t6464 + t6472;
  t6483 = t3512*t6454;
  t6488 = t3395*t6474;
  t6500 = t6483 + t6488;
  t6504 = t3395*t6454;
  t6509 = -1.*t3512*t6474;
  t6512 = t6504 + t6509;
  t6518 = -1.*t3709*t6500;
  t6522 = t3674*t6512;
  t6525 = t6518 + t6522;
  t6532 = t3674*t6500;
  t6541 = t3709*t6512;
  t6542 = t6532 + t6541;
  t6589 = -1.*t142*t1851*t2517;
  t6590 = -1.*t2393*t142*t2080;
  t6598 = t6589 + t6590;
  t6608 = -1.*t2393*t142*t1851;
  t6612 = t142*t2517*t2080;
  t6614 = t6608 + t6612;
  t6626 = -1.*t3512*t6598;
  t6634 = t3395*t6614;
  t6637 = t6626 + t6634;
  t6647 = t3395*t6598;
  t6651 = t3512*t6614;
  t6655 = t6647 + t6651;
  t6659 = t3709*t6637;
  t6666 = t3674*t6655;
  t6670 = t6659 + t6666;
  t6674 = t3674*t6637;
  t6679 = -1.*t3709*t6655;
  t6680 = t6674 + t6679;
  t6577 = -0.09*t1851;
  t6580 = -0.049*t2080;
  t6584 = t6577 + t6580;
  t6751 = -1.*t2172*t1851*t1110;
  t6753 = t38*t2080;
  t6764 = t6751 + t6753;
  t6770 = t2517*t6764;
  t6776 = t6770 + t4400;
  t6783 = t2393*t6764;
  t6786 = -1.*t2517*t4363;
  t6787 = t6783 + t6786;
  t6791 = -1.*t3512*t6776;
  t6801 = t3395*t6787;
  t6805 = t6791 + t6801;
  t6810 = t3395*t6776;
  t6816 = t3512*t6787;
  t6817 = t6810 + t6816;
  t6820 = t3709*t6805;
  t6830 = t3674*t6817;
  t6833 = t6820 + t6830;
  t6846 = t3674*t6805;
  t6849 = -1.*t3709*t6817;
  t6850 = t6846 + t6849;
  t6727 = 0.049*t1851;
  t6729 = t6727 + t2081;
  t6901 = t2172*t1851;
  t6903 = -1.*t38*t1110*t2080;
  t6911 = t6901 + t6903;
  t6927 = t2517*t2742;
  t6933 = t2393*t6911;
  t6939 = t6927 + t6933;
  t6943 = -1.*t2517*t6911;
  t6946 = t3622 + t6943;
  t6970 = -1.*t3512*t6939;
  t6975 = t3395*t6946;
  t6977 = t6970 + t6975;
  t6983 = t3395*t6939;
  t6985 = t3512*t6946;
  t6999 = t6983 + t6985;
  t7003 = t3709*t6977;
  t7004 = t3674*t6999;
  t7006 = t7003 + t7004;
  t7016 = t3674*t6977;
  t7019 = -1.*t3709*t6999;
  t7023 = t7016 + t7019;
  t6599 = t3620*t6598;
  t6617 = t3550*t6614;
  t6643 = t3829*t6637;
  t6657 = t3728*t6655;
  t6673 = t4018*t6670;
  t6689 = t3922*t6680;
  t6697 = -1.*t3919*t6670;
  t6698 = t3869*t6680;
  t6708 = t6697 + t6698;
  t6710 = -1.1312*t6708;
  t6711 = t3869*t6670;
  t6712 = t3919*t6680;
  t6716 = t6711 + t6712;
  t6718 = 0.0306*t6716;
  t7072 = -0.21*t2393;
  t7074 = -0.049*t2517;
  t7076 = t7072 + t7074;
  t7080 = 0.049*t2393;
  t7086 = t7080 + t2551;
  t7117 = -1.*t2393*t4298;
  t7118 = t7117 + t6786;
  t7121 = -1.*t3512*t4407;
  t7146 = t3395*t7118;
  t7149 = t7121 + t7146;
  t7151 = t3512*t7118;
  t7154 = t4535 + t7151;
  t7186 = t3709*t7149;
  t7188 = t3674*t7154;
  t7189 = t7186 + t7188;
  t7200 = t3674*t7149;
  t7203 = -1.*t3709*t7154;
  t7208 = t7200 + t7203;
  t7265 = t1851*t38*t1110;
  t7269 = t2172*t2080;
  t7270 = t7265 + t7269;
  t7293 = -1.*t2517*t7270;
  t7301 = t7293 + t6933;
  t7311 = -1.*t2393*t7270;
  t7312 = t7311 + t6943;
  t7316 = -1.*t3512*t7301;
  t7320 = t3395*t7312;
  t7321 = t7316 + t7320;
  t7340 = t3395*t7301;
  t7341 = t3512*t7312;
  t7344 = t7340 + t7341;
  t7351 = t3709*t7321;
  t7356 = t3674*t7344;
  t7359 = t7351 + t7356;
  t7361 = t3674*t7321;
  t7365 = -1.*t3709*t7344;
  t7366 = t7361 + t7365;
  t7436 = t2393*t142*t1851;
  t7439 = -1.*t142*t2517*t2080;
  t7443 = t7436 + t7439;
  t7451 = -1.*t3395*t7443;
  t7455 = t6626 + t7451;
  t7463 = -1.*t3512*t7443;
  t7467 = t6647 + t7463;
  t7470 = t3709*t7455;
  t7471 = t3674*t7467;
  t7473 = t7470 + t7471;
  t7479 = t3674*t7455;
  t7480 = -1.*t3709*t7467;
  t7488 = t7479 + t7480;
  t7417 = 0.0016*t3395;
  t7419 = t7417 + t3619;
  t7432 = -0.2707*t3395;
  t7434 = -0.0016*t3512;
  t7435 = t7432 + t7434;
  t7535 = -1.*t3395*t4460;
  t7536 = t7121 + t7535;
  t7541 = t3709*t7536;
  t7547 = t7541 + t4934;
  t7559 = t3674*t7536;
  t7568 = -1.*t3709*t4675;
  t7569 = t7559 + t7568;
  t7621 = t2393*t7270;
  t7626 = t2517*t6911;
  t7627 = t7621 + t7626;
  t7631 = -1.*t3395*t7627;
  t7632 = t7316 + t7631;
  t7641 = -1.*t3512*t7627;
  t7644 = t7340 + t7641;
  t7650 = t3709*t7632;
  t7657 = t3674*t7644;
  t7663 = t7650 + t7657;
  t7665 = t3674*t7632;
  t7666 = -1.*t3709*t7644;
  t7677 = t7665 + t7666;
  t7726 = t3512*t6598;
  t7727 = t3395*t7443;
  t7729 = t7726 + t7727;
  t7742 = -1.*t3709*t7729;
  t7744 = t7742 + t7471;
  t7747 = -1.*t3674*t7729;
  t7748 = t7747 + t7480;
  t7716 = -0.7055*t3674;
  t7722 = 0.0184*t3709;
  t7723 = t7716 + t7722;
  t7735 = -0.0184*t3674;
  t7736 = t7735 + t3715;
  t7779 = -1.*t3674*t4491;
  t7782 = t7779 + t7568;
  t5260 = t3869*t4938;
  t7809 = t3512*t7301;
  t7810 = t3395*t7627;
  t7812 = t7809 + t7810;
  t7815 = -1.*t3709*t7812;
  t7816 = t7815 + t7657;
  t7821 = -1.*t3674*t7812;
  t7826 = t7821 + t7666;
  t7752 = -1.*t3919*t7744;
  t7867 = t3674*t7729;
  t7873 = t3709*t7467;
  t7876 = t7867 + t7873;
  t7762 = t3869*t7744;
  t7852 = 0.0216*t3869;
  t7855 = t7852 + t3990;
  t7857 = -1.1135*t3869;
  t7858 = -0.0216*t3919;
  t7859 = t7857 + t7858;
  t7788 = -1.*t3919*t4938;
  t5376 = -1.*t3919*t4985;
  t5391 = t5260 + t5376;
  t7830 = -1.*t3919*t7816;
  t7914 = t3674*t7812;
  t7916 = t3709*t7644;
  t7918 = t7914 + t7916;
  t7838 = t3869*t7816;
  p_output1[0]=0;
  p_output1[1]=-1.*t2172*t2254 + t2617*t2742 + t2980*t3246 + t3550*t3575 + t3620*t3640 + t3728*t3795 + 0.135*t38 - 0.1305*t142*t38 - 1.*t1431*t38 - 1.*t1110*t2099*t38 + t3829*t3845 + t3922*t3952 + t4018*t4092 + 0.0306*(t3919*t3952 + t3869*t4092) - 1.1312*(t3869*t3952 - 1.*t3919*t4092);
  p_output1[2]=-0.135*t2172 + 0.1305*t142*t2172 + t1431*t2172 + t1110*t2099*t2172 - 1.*t2254*t38 + t2617*t4298 + t2980*t4363 + t3550*t4407 + t3620*t4460 + t3728*t4491 + t3829*t4675 + t3922*t4938 + t4018*t4985 + 0.0306*(t3919*t4938 + t3869*t4985) - 1.1312*t5391;
  p_output1[3]=-0.049*t1110 + 0.004500000000000004*t142 - 1.*t1110*t2099 - 1.*t1110*t1851*t2617 + t1110*t2080*t2980 + t3550*t5542 + t3620*t5588 + t3728*t5626 + t3829*t5705 + t3922*t5763 + t4018*t5808 + 0.0306*(t3919*t5763 + t3869*t5808) - 1.1312*(t3869*t5763 - 1.*t3919*t5808);
  p_output1[4]=-0.1305*t1110*t2172 + t142*t2099*t2172 + t142*t1851*t2172*t2617 - 1.*t142*t2080*t2172*t2980 + t2172*t5955 + t3550*t6035 + t3620*t6087 + t3728*t6133 + t3829*t6154 + t3922*t6176 + t4018*t6220 + 0.0306*(t3919*t6176 + t3869*t6220) - 1.1312*(t3869*t6176 - 1.*t3919*t6220);
  p_output1[5]=-0.1305*t1110*t38 + t142*t2099*t38 + t142*t1851*t2617*t38 - 1.*t142*t2080*t2980*t38 + t38*t5955 + t3550*t6454 + t3620*t6474 + t3728*t6500 + t3829*t6512 + t3922*t6525 + t4018*t6542 + 0.0306*(t3919*t6525 + t3869*t6542) - 1.1312*(t3869*t6525 - 1.*t3919*t6542);
  p_output1[6]=-1.*t142*t2080*t2617 - 1.*t142*t1851*t2980 + t142*t6584 + t6599 + t6617 + t6643 + t6657 + t6673 + t6689 + t6710 + t6718;
  p_output1[7]=t2617*t4363 + t1110*t2172*t6584 - 1.*t38*t6729 + t2980*t6764 + t3620*t6776 + t3550*t6787 + t3829*t6805 + t3728*t6817 + t4018*t6833 + t3922*t6850 - 1.1312*(-1.*t3919*t6833 + t3869*t6850) + 0.0306*(t3869*t6833 + t3919*t6850);
  p_output1[8]=t2742*t2980 + t1110*t38*t6584 + t2172*t6729 + t2617*t6911 + t3620*t6939 + t3550*t6946 + t3829*t6977 + t3728*t6999 + t4018*t7006 + t3922*t7023 - 1.1312*(-1.*t3919*t7006 + t3869*t7023) + 0.0306*(t3869*t7006 + t3919*t7023);
  p_output1[9]=t6599 + t6617 + t6643 + t6657 + t6673 + t6689 + t6710 + t6718 + t142*t1851*t7076 - 1.*t142*t2080*t7086;
  p_output1[10]=t3620*t4407 + t4298*t7076 + t4363*t7086 + t3550*t7118 + t3829*t7149 + t3728*t7154 + t4018*t7189 + t3922*t7208 - 1.1312*(-1.*t3919*t7189 + t3869*t7208) + 0.0306*(t3869*t7189 + t3919*t7208);
  p_output1[11]=t6911*t7086 + t7076*t7270 + t3620*t7301 + t3550*t7312 + t3829*t7321 + t3728*t7344 + t4018*t7359 + t3922*t7366 - 1.1312*(-1.*t3919*t7359 + t3869*t7366) + 0.0306*(t3869*t7359 + t3919*t7366);
  p_output1[12]=t6598*t7419 + t7435*t7443 + t3829*t7455 + t3728*t7467 + t4018*t7473 + t3922*t7488 - 1.1312*(-1.*t3919*t7473 + t3869*t7488) + 0.0306*(t3869*t7473 + t3919*t7488);
  p_output1[13]=t3728*t4675 + t4407*t7419 + t4460*t7435 + t3829*t7536 + t4018*t7547 + t3922*t7569 - 1.1312*(-1.*t3919*t7547 + t3869*t7569) + 0.0306*(t3869*t7547 + t3919*t7569);
  p_output1[14]=t7301*t7419 + t7435*t7627 + t3829*t7632 + t3728*t7644 + t4018*t7663 + t3922*t7677 - 1.1312*(-1.*t3919*t7663 + t3869*t7677) + 0.0306*(t3869*t7663 + t3919*t7677);
  p_output1[15]=t7723*t7729 + t7467*t7736 + t4018*t7744 + t3922*t7748 - 1.1312*(t3869*t7748 + t7752) + 0.0306*(t3919*t7748 + t7762);
  p_output1[16]=t4018*t4938 + t4491*t7723 + t4675*t7736 + t3922*t7782 + 0.0306*(t5260 + t3919*t7782) - 1.1312*(t3869*t7782 + t7788);
  p_output1[17]=t7644*t7736 + t7723*t7812 + t4018*t7816 + t3922*t7826 - 1.1312*(t3869*t7826 + t7830) + 0.0306*(t3919*t7826 + t7838);
  p_output1[18]=t7744*t7855 + t7859*t7876 - 1.1312*(t7752 - 1.*t3869*t7876) + 0.0306*(t7762 - 1.*t3919*t7876);
  p_output1[19]=0.0306*t5391 - 1.1312*(-1.*t3869*t4985 + t7788) + t4938*t7855 + t4985*t7859;
  p_output1[20]=t7816*t7855 + t7859*t7918 - 1.1312*(t7830 - 1.*t3869*t7918) + 0.0306*(t7838 - 1.*t3919*t7918);
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
