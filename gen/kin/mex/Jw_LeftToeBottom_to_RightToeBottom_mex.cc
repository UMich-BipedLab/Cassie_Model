/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:25:19 GMT-04:00
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
  double t135;
  double t315;
  double t268;
  double t298;
  double t318;
  double t398;
  double t299;
  double t322;
  double t329;
  double t253;
  double t451;
  double t470;
  double t473;
  double t566;
  double t332;
  double t516;
  double t543;
  double t252;
  double t577;
  double t595;
  double t597;
  double t634;
  double t552;
  double t604;
  double t619;
  double t218;
  double t655;
  double t664;
  double t704;
  double t740;
  double t627;
  double t720;
  double t725;
  double t208;
  double t742;
  double t744;
  double t749;
  double t945;
  double t949;
  double t978;
  double t991;
  double t1036;
  double t1062;
  double t1093;
  double t1026;
  double t1100;
  double t1104;
  double t1155;
  double t1159;
  double t1168;
  double t1128;
  double t1183;
  double t1188;
  double t1215;
  double t1227;
  double t1258;
  double t1353;
  double t1374;
  double t1376;
  double t1406;
  double t1439;
  double t1460;
  double t1397;
  double t1465;
  double t1468;
  double t1481;
  double t1483;
  double t1486;
  double t1469;
  double t1497;
  double t1515;
  double t1523;
  double t1525;
  double t1526;
  double t1517;
  double t1527;
  double t1532;
  double t1585;
  double t1593;
  double t1610;
  double t728;
  double t797;
  double t801;
  double t827;
  double t835;
  double t846;
  double t1195;
  double t1264;
  double t1282;
  double t1290;
  double t1300;
  double t1314;
  double t1581;
  double t1632;
  double t1643;
  double t1656;
  double t1724;
  double t1733;
  double t1805;
  double t1808;
  double t1817;
  double t1652;
  double t1736;
  double t1744;
  double t1283;
  double t1318;
  double t1324;
  double t1827;
  double t1860;
  double t1864;
  double t821;
  double t850;
  double t884;
  double t1328;
  double t1748;
  double t1768;
  double t1771;
  double t1775;
  double t1800;
  double t1804;
  double t1826;
  double t1888;
  double t1900;
  double t1920;
  double t1935;
  double t1936;
  double t1962;
  double t1972;
  double t2103;
  double t2049;
  double t2057;
  double t2082;
  double t2109;
  double t2041;
  double t2190;
  double t2192;
  double t2217;
  double t2093;
  double t2151;
  double t2161;
  double t2238;
  double t2036;
  double t2294;
  double t2317;
  double t2325;
  double t2173;
  double t2244;
  double t2289;
  double t2327;
  double t2034;
  double t2348;
  double t2350;
  double t2368;
  double t2290;
  double t2335;
  double t2344;
  double t2382;
  double t2022;
  double t2446;
  double t2476;
  double t2481;
  double t2347;
  double t2412;
  double t2424;
  double t2515;
  double t1981;
  double t1984;
  double t2671;
  double t2738;
  double t2813;
  double t2814;
  double t2673;
  double t2713;
  double t2718;
  double t2872;
  double t2895;
  double t2910;
  double t2720;
  double t2818;
  double t2831;
  double t2969;
  double t2973;
  double t3001;
  double t2860;
  double t2931;
  double t2944;
  double t3181;
  double t3182;
  double t3205;
  double t3154;
  double t3163;
  double t3173;
  double t3263;
  double t3281;
  double t3287;
  double t3176;
  double t3223;
  double t3234;
  double t3334;
  double t3366;
  double t3379;
  double t3242;
  double t3303;
  double t3307;
  double t3416;
  double t3424;
  double t3433;
  double t3328;
  double t3404;
  double t3410;
  double t2435;
  double t2521;
  double t2529;
  double t2567;
  double t2575;
  double t2583;
  double t2946;
  double t3006;
  double t3014;
  double t3022;
  double t3032;
  double t3036;
  double t3414;
  double t3438;
  double t3464;
  double t3477;
  double t3498;
  double t3501;
  double t3631;
  double t3672;
  double t3682;
  double t2609;
  double t2615;
  double t2618;
  double t3735;
  double t3768;
  double t3779;
  double t3060;
  double t3073;
  double t3139;
  double t3872;
  double t3895;
  double t3897;
  double t3539;
  double t3585;
  double t3597;
  double t2532;
  double t2589;
  double t2598;
  double t3708;
  double t3016;
  double t3041;
  double t3043;
  double t3790;
  double t3795;
  double t3841;
  double t3472;
  double t3507;
  double t3524;
  double t3903;
  double t3905;
  double t3918;
  double t1977;
  double t1995;
  double t2020;
  double t4001;
  double t4002;
  double t4005;
  double t4028;
  double t3955;
  double t3961;
  double t3988;
  double t3997;
  double t4061;
  double t4086;
  double t4094;
  double t4095;
  double t4112;
  double t4113;
  double t4114;
  double t3726;
  double t3869;
  double t3926;
  double t3937;
  double t2658;
  double t3144;
  double t3601;
  double t3622;
  double t4071;
  double t4105;
  double t4139;
  double t4141;
  double t4151;
  double t4152;
  double t4167;
  double t4169;
  double t4170;
  double t4172;
  double t4180;
  double t4183;
  double t4265;
  double t4269;
  double t4283;
  double t4295;
  double t4454;
  double t4460;
  double t4464;
  double t4504;
  double t4517;
  double t4536;
  double t4474;
  double t4544;
  double t4550;
  double t4580;
  double t4598;
  double t4604;
  double t4574;
  double t4610;
  double t4625;
  double t4667;
  double t4677;
  double t4698;
  double t4383;
  double t4393;
  double t4401;
  double t4145;
  double t4196;
  double t4218;
  double t4222;
  double t4235;
  double t4310;
  double t4324;
  double t4328;
  double t4344;
  double t4345;
  double t4354;
  double t4381;
  double t4419;
  double t4422;
  double t4423;
  double t4429;
  double t4434;
  double t4788;
  double t4789;
  double t4790;
  double t4783;
  double t4792;
  double t4797;
  double t4846;
  double t4852;
  double t4800;
  double t4873;
  double t4875;
  double t4885;
  double t4886;
  double t4939;
  double t170;
  double t4664;
  double t4699;
  double t4709;
  double t4712;
  double t4719;
  double t4720;
  double t4726;
  double t4728;
  double t4741;
  double t4752;
  double t4753;
  double t4879;
  double t4949;
  double t4956;
  double t4972;
  double t4976;
  double t4985;
  double t4990;
  double t4993;
  double t5004;
  double t5012;
  double t5016;
  double t4754;
  double t4764;
  double t5043;
  double t5045;
  double t5055;
  double t5064;
  double t5075;
  double t5427;
  double t5443;
  double t5448;
  double t5141;
  double t5148;
  double t5460;
  double t5468;
  double t5476;
  double t5167;
  double t5169;
  double t5187;
  double t5188;
  double t5201;
  double t5335;
  double t5340;
  double t5357;
  double t5378;
  double t5381;
  double t5384;
  double t5404;
  double t3943;
  double t4040;
  double t4041;
  double t4051;
  double t4060;
  double t5106;
  double t5110;
  double t5112;
  double t5129;
  double t5131;
  double t5232;
  double t5271;
  double t5290;
  double t5306;
  double t5311;
  double t5581;
  double t5595;
  double t5599;
  double t5629;
  double t5630;
  double t5632;
  double t5681;
  double t5688;
  double t5701;
  double t5717;
  double t5725;
  double t5756;
  double t5705;
  double t5775;
  double t5781;
  double t5824;
  double t5828;
  double t5844;
  double t5802;
  double t5853;
  double t5860;
  double t5887;
  double t5896;
  double t5897;
  double t6024;
  double t6069;
  double t6072;
  double t6020;
  double t6073;
  double t6082;
  double t6106;
  double t6143;
  double t6101;
  double t6161;
  double t6178;
  double t6202;
  double t6204;
  double t6216;
  double t5862;
  double t5922;
  double t5928;
  double t5948;
  double t5955;
  double t5964;
  double t6185;
  double t6220;
  double t6221;
  double t6263;
  double t6264;
  double t6267;
  t135 = Sin(var1[1]);
  t315 = Cos(var1[0]);
  t268 = Cos(var1[2]);
  t298 = Sin(var1[0]);
  t318 = Sin(var1[2]);
  t398 = Cos(var1[3]);
  t299 = t268*t298*t135;
  t322 = t315*t318;
  t329 = t299 + t322;
  t253 = Sin(var1[3]);
  t451 = t315*t268;
  t470 = -1.*t298*t135*t318;
  t473 = t451 + t470;
  t566 = Cos(var1[4]);
  t332 = -1.*t253*t329;
  t516 = t398*t473;
  t543 = t332 + t516;
  t252 = Sin(var1[4]);
  t577 = t398*t329;
  t595 = t253*t473;
  t597 = t577 + t595;
  t634 = Cos(var1[5]);
  t552 = t252*t543;
  t604 = t566*t597;
  t619 = t552 + t604;
  t218 = Sin(var1[5]);
  t655 = t566*t543;
  t664 = -1.*t252*t597;
  t704 = t655 + t664;
  t740 = Cos(var1[6]);
  t627 = -1.*t218*t619;
  t720 = t634*t704;
  t725 = t627 + t720;
  t208 = Sin(var1[6]);
  t742 = t634*t619;
  t744 = t218*t704;
  t749 = t742 + t744;
  t945 = Cos(var1[1]);
  t949 = -1.*t945*t268*t253;
  t978 = -1.*t398*t945*t318;
  t991 = t949 + t978;
  t1036 = t398*t945*t268;
  t1062 = -1.*t945*t253*t318;
  t1093 = t1036 + t1062;
  t1026 = t252*t991;
  t1100 = t566*t1093;
  t1104 = t1026 + t1100;
  t1155 = t566*t991;
  t1159 = -1.*t252*t1093;
  t1168 = t1155 + t1159;
  t1128 = -1.*t218*t1104;
  t1183 = t634*t1168;
  t1188 = t1128 + t1183;
  t1215 = t634*t1104;
  t1227 = t218*t1168;
  t1258 = t1215 + t1227;
  t1353 = t315*t268*t135;
  t1374 = -1.*t298*t318;
  t1376 = t1353 + t1374;
  t1406 = -1.*t268*t298;
  t1439 = -1.*t315*t135*t318;
  t1460 = t1406 + t1439;
  t1397 = -1.*t253*t1376;
  t1465 = t398*t1460;
  t1468 = t1397 + t1465;
  t1481 = t398*t1376;
  t1483 = t253*t1460;
  t1486 = t1481 + t1483;
  t1469 = t252*t1468;
  t1497 = t566*t1486;
  t1515 = t1469 + t1497;
  t1523 = t566*t1468;
  t1525 = -1.*t252*t1486;
  t1526 = t1523 + t1525;
  t1517 = -1.*t218*t1515;
  t1527 = t634*t1526;
  t1532 = t1517 + t1527;
  t1585 = t634*t1515;
  t1593 = t218*t1526;
  t1610 = t1585 + t1593;
  t728 = t208*t725;
  t797 = t740*t749;
  t801 = t728 + t797;
  t827 = t740*t725;
  t835 = -1.*t208*t749;
  t846 = t827 + t835;
  t1195 = t208*t1188;
  t1264 = t740*t1258;
  t1282 = t1195 + t1264;
  t1290 = t740*t1188;
  t1300 = -1.*t208*t1258;
  t1314 = t1290 + t1300;
  t1581 = t208*t1532;
  t1632 = t740*t1610;
  t1643 = t1581 + t1632;
  t1656 = t740*t1532;
  t1724 = -1.*t208*t1610;
  t1733 = t1656 + t1724;
  t1805 = 0.642788*t1282;
  t1808 = 0.766044*t1314;
  t1817 = t1805 + t1808;
  t1652 = -0.766044*t1643;
  t1736 = 0.642788*t1733;
  t1744 = t1652 + t1736;
  t1283 = -0.766044*t1282;
  t1318 = 0.642788*t1314;
  t1324 = t1283 + t1318;
  t1827 = 0.642788*t1643;
  t1860 = 0.766044*t1733;
  t1864 = t1827 + t1860;
  t821 = 0.642788*t801;
  t850 = 0.766044*t846;
  t884 = t821 + t850;
  t1328 = t315*t945*t1324;
  t1748 = t135*t1744;
  t1768 = t1328 + t1748;
  t1771 = -1.*t884*t1768;
  t1775 = -0.766044*t801;
  t1800 = 0.642788*t846;
  t1804 = t1775 + t1800;
  t1826 = t315*t945*t1817;
  t1888 = t135*t1864;
  t1900 = t1826 + t1888;
  t1920 = t1804*t1900;
  t1935 = t1817*t1744;
  t1936 = -1.*t1324*t1864;
  t1962 = t1935 + t1936;
  t1972 = -1.*t945*t298*t1962;
  t2103 = Cos(var1[7]);
  t2049 = Cos(var1[9]);
  t2057 = Sin(var1[7]);
  t2082 = Sin(var1[8]);
  t2109 = Sin(var1[9]);
  t2041 = Cos(var1[10]);
  t2190 = t2103*t2049;
  t2192 = -1.*t2057*t2082*t2109;
  t2217 = t2190 + t2192;
  t2093 = t2049*t2057*t2082;
  t2151 = t2103*t2109;
  t2161 = t2093 + t2151;
  t2238 = Sin(var1[10]);
  t2036 = Cos(var1[11]);
  t2294 = t2041*t2217;
  t2317 = -1.*t2161*t2238;
  t2325 = t2294 + t2317;
  t2173 = t2041*t2161;
  t2244 = t2217*t2238;
  t2289 = t2173 + t2244;
  t2327 = Sin(var1[11]);
  t2034 = Cos(var1[12]);
  t2348 = t2036*t2325;
  t2350 = -1.*t2289*t2327;
  t2368 = t2348 + t2350;
  t2290 = t2036*t2289;
  t2335 = t2325*t2327;
  t2344 = t2290 + t2335;
  t2382 = Sin(var1[12]);
  t2022 = Cos(var1[13]);
  t2446 = t2034*t2368;
  t2476 = -1.*t2344*t2382;
  t2481 = t2446 + t2476;
  t2347 = t2034*t2344;
  t2412 = t2368*t2382;
  t2424 = t2347 + t2412;
  t2515 = Sin(var1[13]);
  t1981 = 0. + t1771 + t1920 + t1972;
  t1984 = 1/t1981;
  t2671 = Cos(var1[8]);
  t2738 = -1.*t2671*t2041*t2109;
  t2813 = -1.*t2671*t2049*t2238;
  t2814 = t2738 + t2813;
  t2673 = t2671*t2049*t2041;
  t2713 = -1.*t2671*t2109*t2238;
  t2718 = t2673 + t2713;
  t2872 = t2036*t2814;
  t2895 = -1.*t2718*t2327;
  t2910 = t2872 + t2895;
  t2720 = t2036*t2718;
  t2818 = t2814*t2327;
  t2831 = t2720 + t2818;
  t2969 = t2034*t2910;
  t2973 = -1.*t2831*t2382;
  t3001 = t2969 + t2973;
  t2860 = t2034*t2831;
  t2931 = t2910*t2382;
  t2944 = t2860 + t2931;
  t3181 = -1.*t2049*t2057;
  t3182 = -1.*t2103*t2082*t2109;
  t3205 = t3181 + t3182;
  t3154 = t2103*t2049*t2082;
  t3163 = -1.*t2057*t2109;
  t3173 = t3154 + t3163;
  t3263 = t2041*t3205;
  t3281 = -1.*t3173*t2238;
  t3287 = t3263 + t3281;
  t3176 = t2041*t3173;
  t3223 = t3205*t2238;
  t3234 = t3176 + t3223;
  t3334 = t2036*t3287;
  t3366 = -1.*t3234*t2327;
  t3379 = t3334 + t3366;
  t3242 = t2036*t3234;
  t3303 = t3287*t2327;
  t3307 = t3242 + t3303;
  t3416 = t2034*t3379;
  t3424 = -1.*t3307*t2382;
  t3433 = t3416 + t3424;
  t3328 = t2034*t3307;
  t3404 = t3379*t2382;
  t3410 = t3328 + t3404;
  t2435 = t2022*t2424;
  t2521 = t2481*t2515;
  t2529 = t2435 + t2521;
  t2567 = t2022*t2481;
  t2575 = -1.*t2424*t2515;
  t2583 = t2567 + t2575;
  t2946 = t2022*t2944;
  t3006 = t3001*t2515;
  t3014 = t2946 + t3006;
  t3022 = t2022*t3001;
  t3032 = -1.*t2944*t2515;
  t3036 = t3022 + t3032;
  t3414 = t2022*t3410;
  t3438 = t3433*t2515;
  t3464 = t3414 + t3438;
  t3477 = t2022*t3433;
  t3498 = -1.*t3410*t2515;
  t3501 = t3477 + t3498;
  t3631 = -0.766044*t2529;
  t3672 = 0.642788*t2583;
  t3682 = t3631 + t3672;
  t2609 = -1.*t315*t945*t1324;
  t2615 = -1.*t135*t1744;
  t2618 = 0. + t2609 + t2615;
  t3735 = -0.766044*t3014;
  t3768 = 0.642788*t3036;
  t3779 = t3735 + t3768;
  t3060 = -1.*t945*t298*t1744;
  t3073 = t315*t945*t1804;
  t3139 = 0. + t3060 + t3073;
  t3872 = -0.766044*t3464;
  t3895 = 0.642788*t3501;
  t3897 = t3872 + t3895;
  t3539 = t945*t298*t1324;
  t3585 = t135*t1804;
  t3597 = 0. + t3539 + t3585;
  t2532 = 0.642788*t2529;
  t2589 = 0.766044*t2583;
  t2598 = t2532 + t2589;
  t3708 = 0. + t1826 + t1888;
  t3016 = 0.642788*t3014;
  t3041 = 0.766044*t3036;
  t3043 = t3016 + t3041;
  t3790 = t945*t298*t1864;
  t3795 = -1.*t315*t945*t884;
  t3841 = 0. + t3790 + t3795;
  t3472 = 0.642788*t3464;
  t3507 = 0.766044*t3501;
  t3524 = t3472 + t3507;
  t3903 = -1.*t945*t298*t1817;
  t3905 = -1.*t135*t884;
  t3918 = 0. + t3903 + t3905;
  t1977 = t1771 + t1920 + t1972;
  t1995 = t1977*t1984;
  t2020 = 0. + t1995;
  t4001 = t2598*t3708*t1984;
  t4002 = t3043*t3841*t1984;
  t4005 = t3524*t3918*t1984;
  t4028 = 0. + t4001 + t4002 + t4005;
  t3955 = t3682*t2618*t1984;
  t3961 = t3779*t3139*t1984;
  t3988 = t3897*t3597*t1984;
  t3997 = 0. + t3955 + t3961 + t3988;
  t4061 = 0. + t1935 + t1936;
  t4086 = -1.*t1817*t1804;
  t4094 = t1324*t884;
  t4095 = 0. + t4086 + t4094;
  t4112 = t1864*t1804;
  t4113 = -1.*t1744*t884;
  t4114 = 0. + t4112 + t4113;
  t3726 = t3682*t3708*t1984;
  t3869 = t3779*t3841*t1984;
  t3926 = t3897*t3918*t1984;
  t3937 = 0. + t3726 + t3869 + t3926;
  t2658 = t2598*t2618*t1984;
  t3144 = t3043*t3139*t1984;
  t3601 = t3524*t3597*t1984;
  t3622 = 0. + t2658 + t3144 + t3601;
  t4071 = -1.*t2671*t2057*t4061*t1984;
  t4105 = -1.*t2103*t2671*t4095*t1984;
  t4139 = t2082*t4114*t1984;
  t4141 = 0. + t4071 + t4105 + t4139;
  t4151 = -1.*t2671*t2057*t2618*t1984;
  t4152 = t2082*t3139*t1984;
  t4167 = -1.*t2103*t2671*t3597*t1984;
  t4169 = 0. + t4151 + t4152 + t4167;
  t4170 = t3682*t4061*t1984;
  t4172 = t3897*t4095*t1984;
  t4180 = t3779*t4114*t1984;
  t4183 = 0. + t4170 + t4172 + t4180;
  t4265 = t2598*t4061*t1984;
  t4269 = t3524*t4095*t1984;
  t4283 = t3043*t4114*t1984;
  t4295 = 0. + t4265 + t4269 + t4283;
  t4454 = 0.642788*t740;
  t4460 = -0.766044*t208;
  t4464 = t4454 + t4460;
  t4504 = -0.766044*t740;
  t4517 = -0.642788*t208;
  t4536 = t4504 + t4517;
  t4474 = -1.*t218*t4464;
  t4544 = t634*t4536;
  t4550 = 0. + t4474 + t4544;
  t4580 = t634*t4464;
  t4598 = t218*t4536;
  t4604 = 0. + t4580 + t4598;
  t4574 = t252*t4550;
  t4610 = t566*t4604;
  t4625 = 0. + t4574 + t4610;
  t4667 = t566*t4550;
  t4677 = -1.*t252*t4604;
  t4698 = 0. + t4667 + t4677;
  t4383 = -1.*t3622*t4183;
  t4393 = t3997*t4295;
  t4401 = t4383 + t4393;
  t4145 = t3997*t4141;
  t4196 = -1.*t4169*t4183;
  t4218 = t4145 + t4196;
  t4222 = -1.*t4028*t4218;
  t4235 = t3622*t4141;
  t4310 = -1.*t4169*t4295;
  t4324 = t4235 + t4310;
  t4328 = t3937*t4324;
  t4344 = -1.*t2671*t2057*t3708*t1984;
  t4345 = t2082*t3841*t1984;
  t4354 = -1.*t2103*t2671*t3918*t1984;
  t4381 = 0. + t4344 + t4345 + t4354;
  t4419 = t4381*t4401;
  t4422 = t4222 + t4328 + t4419;
  t4423 = t2020*t4422;
  t4429 = 0. + t4423;
  t4434 = 1/t4429;
  t4788 = 0.766044*t740;
  t4789 = 0.642788*t208;
  t4790 = t4788 + t4789;
  t4783 = t218*t4464;
  t4792 = t634*t4790;
  t4797 = 0. + t4783 + t4792;
  t4846 = -1.*t218*t4790;
  t4852 = 0. + t4580 + t4846;
  t4800 = -1.*t252*t4797;
  t4873 = t566*t4852;
  t4875 = 0. + t4800 + t4873;
  t4885 = t566*t4797;
  t4886 = t252*t4852;
  t4939 = 0. + t4885 + t4886;
  t170 = 0. + t135;
  t4664 = -1.*t253*t4625;
  t4699 = t398*t4698;
  t4709 = 0. + t4664 + t4699;
  t4712 = t268*t4709;
  t4719 = t398*t4625;
  t4720 = t253*t4698;
  t4726 = 0. + t4719 + t4720;
  t4728 = -1.*t4726*t318;
  t4741 = 0. + t4712 + t4728;
  t4752 = t945*t4741;
  t4753 = 0. + t4752;
  t4879 = t398*t4875;
  t4949 = -1.*t253*t4939;
  t4956 = 0. + t4879 + t4949;
  t4972 = t268*t4956;
  t4976 = t253*t4875;
  t4985 = t398*t4939;
  t4990 = 0. + t4976 + t4985;
  t4993 = -1.*t4990*t318;
  t5004 = 0. + t4972 + t4993;
  t5012 = t945*t5004;
  t5016 = 0. + t5012;
  t4754 = t2020*t4401;
  t4764 = 0. + t4754;
  t5043 = -1.*t4028*t4183;
  t5045 = t3937*t4295;
  t5055 = t5043 + t5045;
  t5064 = -1.*t2020*t5055;
  t5075 = 0. + t5064;
  t5427 = t268*t4726;
  t5443 = t4709*t318;
  t5448 = 0. + t5427 + t5443;
  t5141 = -1.*t2020*t4218;
  t5148 = 0. + t5141;
  t5460 = t268*t4990;
  t5468 = t4956*t318;
  t5476 = 0. + t5460 + t5468;
  t5167 = t3937*t4141;
  t5169 = -1.*t4381*t4183;
  t5187 = t5167 + t5169;
  t5188 = t2020*t5187;
  t5201 = 0. + t5188;
  t5335 = t2020*t4324;
  t5340 = 0. + t5335;
  t5357 = t4028*t4141;
  t5378 = -1.*t4381*t4295;
  t5381 = t5357 + t5378;
  t5384 = -1.*t2020*t5381;
  t5404 = 0. + t5384;
  t3943 = t3622*t3937;
  t4040 = -1.*t3997*t4028;
  t4041 = t3943 + t4040;
  t4051 = t2020*t4041;
  t4060 = 0. + t4051;
  t5106 = -1.*t3997*t4381;
  t5110 = t4169*t3937;
  t5112 = t5106 + t5110;
  t5129 = -1.*t2020*t5112;
  t5131 = 0. + t5129;
  t5232 = -1.*t3622*t4381;
  t5271 = t4169*t4028;
  t5290 = t5232 + t5271;
  t5306 = t2020*t5290;
  t5311 = 0. + t5306;
  t5581 = -1.*t4060*t4434;
  t5595 = 0. + t5581;
  t5599 = -1.*t5131*t4434;
  t5629 = 0. + t5599;
  t5630 = -1.*t5311*t4434;
  t5632 = 0. + t5630;
  t5681 = 0.642788*t2022;
  t5688 = -0.766044*t2515;
  t5701 = t5681 + t5688;
  t5717 = 0.766044*t2022;
  t5725 = 0.642788*t2515;
  t5756 = t5717 + t5725;
  t5705 = t2382*t5701;
  t5775 = t2034*t5756;
  t5781 = 0. + t5705 + t5775;
  t5824 = t2034*t5701;
  t5828 = -1.*t2382*t5756;
  t5844 = 0. + t5824 + t5828;
  t5802 = -1.*t2327*t5781;
  t5853 = t2036*t5844;
  t5860 = 0. + t5802 + t5853;
  t5887 = t2036*t5781;
  t5896 = t2327*t5844;
  t5897 = 0. + t5887 + t5896;
  t6024 = -0.766044*t2022;
  t6069 = -0.642788*t2515;
  t6072 = t6024 + t6069;
  t6020 = -1.*t2382*t5701;
  t6073 = t2034*t6072;
  t6082 = 0. + t6020 + t6073;
  t6106 = t2382*t6072;
  t6143 = 0. + t5824 + t6106;
  t6101 = t2327*t6082;
  t6161 = t2036*t6143;
  t6178 = 0. + t6101 + t6161;
  t6202 = t2036*t6082;
  t6204 = -1.*t2327*t6143;
  t6216 = 0. + t6202 + t6204;
  t5862 = t2238*t5860;
  t5922 = t2041*t5897;
  t5928 = 0. + t5862 + t5922;
  t5948 = t2041*t5860;
  t5955 = -1.*t2238*t5897;
  t5964 = 0. + t5948 + t5955;
  t6185 = -1.*t2238*t6178;
  t6220 = t2041*t6216;
  t6221 = 0. + t6185 + t6220;
  t6263 = t2041*t6178;
  t6264 = t2238*t6216;
  t6267 = 0. + t6263 + t6264;
  p_output1[0]=-1.*t170*t4060*t4434 - 1.*t4434*t4753*t4764 - 1.*t4434*t5016*t5075;
  p_output1[1]=-1.*t170*t4434*t5131 - 1.*t4434*t4753*t5148 - 1.*t4434*t5016*t5201;
  p_output1[2]=-1.*t170*t4434*t5311 - 1.*t4434*t4753*t5340 - 1.*t4434*t5016*t5404;
  p_output1[3]=0. - 1.*t4434*t4764*t5448 - 1.*t4434*t5075*t5476;
  p_output1[4]=0. - 1.*t4434*t5148*t5448 - 1.*t4434*t5201*t5476;
  p_output1[5]=0. - 1.*t4434*t5340*t5448 - 1.*t4434*t5404*t5476;
  p_output1[6]=t5595;
  p_output1[7]=t5629;
  p_output1[8]=t5632;
  p_output1[9]=t5595;
  p_output1[10]=t5629;
  p_output1[11]=t5632;
  p_output1[12]=t5595;
  p_output1[13]=t5629;
  p_output1[14]=t5632;
  p_output1[15]=t5595;
  p_output1[16]=t5629;
  p_output1[17]=t5632;
  p_output1[18]=t5595;
  p_output1[19]=t5629;
  p_output1[20]=t5632;
  p_output1[21]=0. + t2082;
  p_output1[22]=0. + t2671*(0. - 1.*t2109*t5928 + t2049*t5964);
  p_output1[23]=0. + t2671*(0. + t2049*t6221 - 1.*t2109*t6267);
  p_output1[24]=0.;
  p_output1[25]=0. + t2049*t5928 + t2109*t5964;
  p_output1[26]=0. + t2109*t6221 + t2049*t6267;
  p_output1[27]=1.;
  p_output1[28]=0.;
  p_output1[29]=0.;
  p_output1[30]=1.;
  p_output1[31]=0.;
  p_output1[32]=0.;
  p_output1[33]=1.;
  p_output1[34]=0.;
  p_output1[35]=0.;
  p_output1[36]=1.;
  p_output1[37]=0.;
  p_output1[38]=0.;
  p_output1[39]=1.;
  p_output1[40]=0.;
  p_output1[41]=0.;
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

#include "Jw_LeftToeBottom_to_RightToeBottom_mex.hh"

namespace SymExpression
{

void Jw_LeftToeBottom_to_RightToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
