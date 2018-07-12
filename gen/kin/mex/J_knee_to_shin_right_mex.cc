/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:33:44 GMT-04:00
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
  double t1124;
  double t2282;
  double t1699;
  double t1780;
  double t2340;
  double t787;
  double t837;
  double t854;
  double t920;
  double t1183;
  double t1987;
  double t2838;
  double t2960;
  double t3387;
  double t4117;
  double t4122;
  double t4229;
  double t613;
  double t4663;
  double t4704;
  double t4874;
  double t5185;
  double t5195;
  double t5925;
  double t6139;
  double t6255;
  double t6315;
  double t6375;
  double t6870;
  double t6940;
  double t7155;
  double t7269;
  double t7285;
  double t7371;
  double t7458;
  double t7611;
  double t7616;
  double t7622;
  double t7785;
  double t7804;
  double t7811;
  double t7844;
  double t7924;
  double t7927;
  double t7936;
  double t7999;
  double t8017;
  double t8057;
  double t8154;
  double t8200;
  double t8321;
  double t890;
  double t930;
  double t952;
  double t1357;
  double t1523;
  double t3400;
  double t3748;
  double t3834;
  double t4091;
  double t4388;
  double t4619;
  double t4630;
  double t8565;
  double t8571;
  double t8578;
  double t8608;
  double t8609;
  double t8610;
  double t6069;
  double t6152;
  double t6174;
  double t8615;
  double t8630;
  double t8656;
  double t6738;
  double t6770;
  double t6829;
  double t7404;
  double t7464;
  double t7549;
  double t8683;
  double t8703;
  double t8708;
  double t8785;
  double t8795;
  double t8814;
  double t7671;
  double t7680;
  double t7760;
  double t7932;
  double t7973;
  double t7992;
  double t8851;
  double t8888;
  double t8910;
  double t8926;
  double t8941;
  double t8980;
  double t8091;
  double t8098;
  double t8123;
  double t8992;
  double t9039;
  double t9046;
  double t9099;
  double t9117;
  double t9138;
  double t9236;
  double t9240;
  double t9249;
  double t9262;
  double t9289;
  double t9299;
  double t9367;
  double t9369;
  double t9380;
  double t9403;
  double t9410;
  double t9411;
  double t9436;
  double t9455;
  double t9465;
  double t9481;
  double t9490;
  double t9494;
  double t9533;
  double t9541;
  double t9553;
  double t9619;
  double t9623;
  double t9638;
  double t9647;
  double t9649;
  double t9652;
  double t9691;
  double t9699;
  double t9702;
  double t9710;
  double t9715;
  double t9722;
  double t9725;
  double t9727;
  double t9731;
  double t9733;
  double t9738;
  double t9744;
  double t9767;
  double t9771;
  double t9773;
  double t9866;
  double t9869;
  double t9874;
  double t9882;
  double t9889;
  double t9893;
  double t9907;
  double t9908;
  double t9909;
  double t9914;
  double t9915;
  double t9921;
  double t9924;
  double t9925;
  double t9926;
  double t9930;
  double t9932;
  double t9934;
  double t9942;
  double t9947;
  double t9948;
  double t9989;
  double t9990;
  double t9995;
  double t10004;
  double t10005;
  double t9997;
  double t9999;
  double t10000;
  double t10015;
  double t10017;
  double t10022;
  double t10028;
  double t10042;
  double t10044;
  double t10049;
  double t10050;
  double t10052;
  double t10055;
  double t10057;
  double t10061;
  double t10079;
  double t10083;
  double t10084;
  double t10123;
  double t10129;
  double t10130;
  double t10104;
  double t10109;
  double t10145;
  double t10150;
  double t10155;
  double t10157;
  double t10168;
  double t10190;
  double t10196;
  double t10224;
  double t10231;
  double t10240;
  double t10241;
  double t10243;
  double t10315;
  double t10318;
  double t10321;
  double t10302;
  double t10307;
  double t10311;
  double t10334;
  double t10335;
  double t10339;
  double t10344;
  double t10350;
  double t10351;
  double t10353;
  double t10354;
  double t10356;
  double t10360;
  double t10362;
  double t10363;
  double t10402;
  double t10403;
  double t10414;
  double t10418;
  double t10419;
  double t10421;
  double t10423;
  double t10425;
  double t10429;
  double t10430;
  double t10433;
  double t10436;
  double t10439;
  double t10441;
  double t10475;
  double t10476;
  double t10478;
  double t10489;
  double t10491;
  double t10484;
  double t10485;
  double t10500;
  double t10501;
  double t10502;
  double t10505;
  double t10508;
  double t10510;
  double t10515;
  double t10519;
  double t10522;
  double t10526;
  double t10530;
  double t10531;
  double t10313;
  double t10325;
  double t10330;
  double t10333;
  double t10340;
  double t10352;
  double t10357;
  double t10366;
  double t10369;
  double t10376;
  double t10378;
  double t10381;
  double t10385;
  double t10387;
  double t10390;
  double t10398;
  double t8743;
  double t8754;
  double t8766;
  double t10586;
  double t10588;
  double t10589;
  double t10591;
  double t10592;
  double t10594;
  double t10556;
  double t10558;
  double t10559;
  double t10562;
  double t10563;
  double t10620;
  double t10621;
  double t10623;
  double t10630;
  double t10631;
  double t10633;
  double t10646;
  double t10651;
  double t10653;
  double t10658;
  double t10660;
  double t10661;
  double t10687;
  double t10688;
  double t10689;
  double t10691;
  double t10693;
  double t10694;
  double t10711;
  double t10712;
  double t10713;
  double t10717;
  double t10723;
  double t10726;
  double t10761;
  double t10764;
  double t10766;
  double t10771;
  double t10773;
  double t10776;
  double t10777;
  double t10778;
  double t10752;
  double t10753;
  double t10755;
  double t10756;
  double t10757;
  double t10791;
  double t10792;
  double t10793;
  double t10796;
  double t10797;
  double t10798;
  double t10800;
  double t10801;
  double t10802;
  double t10804;
  double t10805;
  double t10806;
  double t10809;
  double t10810;
  double t10811;
  double t10823;
  double t10824;
  double t10825;
  double t10827;
  double t10828;
  double t10829;
  double t10831;
  double t10832;
  double t10833;
  double t10835;
  double t10836;
  double t10837;
  double t10839;
  double t10840;
  double t10841;
  double t10860;
  double t10861;
  double t9179;
  double t10852;
  double t10853;
  double t10854;
  double t10856;
  double t10857;
  double t10871;
  double t10872;
  double t10873;
  double t10876;
  double t10877;
  double t10879;
  double t10880;
  double t10891;
  double t10892;
  double t10893;
  double t10896;
  double t10897;
  double t10899;
  double t10900;
  double t10863;
  double t9185;
  double t9188;
  double t10911;
  double t10912;
  double t10914;
  double t10915;
  double t10916;
  double t10882;
  double t10924;
  double t10925;
  double t10926;
  double t10886;
  double t10902;
  double t10936;
  double t10937;
  double t10938;
  double t10906;
  t1124 = Sin(var1[3]);
  t2282 = Cos(var1[3]);
  t1699 = Cos(var1[5]);
  t1780 = Sin(var1[4]);
  t2340 = Sin(var1[5]);
  t787 = Cos(var1[14]);
  t837 = -1.*t787;
  t854 = 1. + t837;
  t920 = Sin(var1[14]);
  t1183 = Sin(var1[13]);
  t1987 = -1.*t1699*t1124*t1780;
  t2838 = t2282*t2340;
  t2960 = t1987 + t2838;
  t3387 = Cos(var1[13]);
  t4117 = -1.*t2282*t1699;
  t4122 = -1.*t1124*t1780*t2340;
  t4229 = t4117 + t4122;
  t613 = Cos(var1[4]);
  t4663 = t1183*t2960;
  t4704 = t3387*t4229;
  t4874 = t4663 + t4704;
  t5185 = Cos(var1[15]);
  t5195 = -1.*t5185;
  t5925 = 1. + t5195;
  t6139 = Sin(var1[15]);
  t6255 = t3387*t2960;
  t6315 = -1.*t1183*t4229;
  t6375 = t6255 + t6315;
  t6870 = -1.*t787*t613*t1124;
  t6940 = t920*t4874;
  t7155 = t6870 + t6940;
  t7269 = Cos(var1[16]);
  t7285 = -1.*t7269;
  t7371 = 1. + t7285;
  t7458 = Sin(var1[16]);
  t7611 = t6139*t6375;
  t7616 = t5185*t7155;
  t7622 = t7611 + t7616;
  t7785 = t5185*t6375;
  t7804 = -1.*t6139*t7155;
  t7811 = t7785 + t7804;
  t7844 = Cos(var1[17]);
  t7924 = -1.*t7844;
  t7927 = 1. + t7924;
  t7936 = Sin(var1[17]);
  t7999 = -1.*t7458*t7622;
  t8017 = t7269*t7811;
  t8057 = t7999 + t8017;
  t8154 = t7269*t7622;
  t8200 = t7458*t7811;
  t8321 = t8154 + t8200;
  t890 = -0.049*t854;
  t930 = -0.135*t920;
  t952 = 0. + t890 + t930;
  t1357 = 0.135*t1183;
  t1523 = 0. + t1357;
  t3400 = -1.*t3387;
  t3748 = 1. + t3400;
  t3834 = -0.135*t3748;
  t4091 = 0. + t3834;
  t4388 = -0.135*t854;
  t4619 = 0.049*t920;
  t4630 = 0. + t4388 + t4619;
  t8565 = t2282*t1699*t1780;
  t8571 = t1124*t2340;
  t8578 = t8565 + t8571;
  t8608 = -1.*t1699*t1124;
  t8609 = t2282*t1780*t2340;
  t8610 = t8608 + t8609;
  t6069 = -0.09*t5925;
  t6152 = 0.049*t6139;
  t6174 = 0. + t6069 + t6152;
  t8615 = t1183*t8578;
  t8630 = t3387*t8610;
  t8656 = t8615 + t8630;
  t6738 = -0.049*t5925;
  t6770 = -0.09*t6139;
  t6829 = 0. + t6738 + t6770;
  t7404 = -0.049*t7371;
  t7464 = -0.21*t7458;
  t7549 = 0. + t7404 + t7464;
  t8683 = t3387*t8578;
  t8703 = -1.*t1183*t8610;
  t8708 = t8683 + t8703;
  t8785 = t787*t2282*t613;
  t8795 = t920*t8656;
  t8814 = t8785 + t8795;
  t7671 = -0.21*t7371;
  t7680 = 0.049*t7458;
  t7760 = 0. + t7671 + t7680;
  t7932 = -0.2707*t7927;
  t7973 = 0.0016*t7936;
  t7992 = 0. + t7932 + t7973;
  t8851 = t6139*t8708;
  t8888 = t5185*t8814;
  t8910 = t8851 + t8888;
  t8926 = t5185*t8708;
  t8941 = -1.*t6139*t8814;
  t8980 = t8926 + t8941;
  t8091 = -0.0016*t7927;
  t8098 = -0.2707*t7936;
  t8123 = 0. + t8091 + t8098;
  t8992 = -1.*t7458*t8910;
  t9039 = t7269*t8980;
  t9046 = t8992 + t9039;
  t9099 = t7269*t8910;
  t9117 = t7458*t8980;
  t9138 = t9099 + t9117;
  t9236 = t2282*t613*t1699*t1183;
  t9240 = t3387*t2282*t613*t2340;
  t9249 = t9236 + t9240;
  t9262 = t3387*t2282*t613*t1699;
  t9289 = -1.*t2282*t613*t1183*t2340;
  t9299 = t9262 + t9289;
  t9367 = -1.*t787*t2282*t1780;
  t9369 = t920*t9249;
  t9380 = t9367 + t9369;
  t9403 = t6139*t9299;
  t9410 = t5185*t9380;
  t9411 = t9403 + t9410;
  t9436 = t5185*t9299;
  t9455 = -1.*t6139*t9380;
  t9465 = t9436 + t9455;
  t9481 = -1.*t7458*t9411;
  t9490 = t7269*t9465;
  t9494 = t9481 + t9490;
  t9533 = t7269*t9411;
  t9541 = t7458*t9465;
  t9553 = t9533 + t9541;
  t9619 = t613*t1699*t1183*t1124;
  t9623 = t3387*t613*t1124*t2340;
  t9638 = t9619 + t9623;
  t9647 = t3387*t613*t1699*t1124;
  t9649 = -1.*t613*t1183*t1124*t2340;
  t9652 = t9647 + t9649;
  t9691 = -1.*t787*t1124*t1780;
  t9699 = t920*t9638;
  t9702 = t9691 + t9699;
  t9710 = t6139*t9652;
  t9715 = t5185*t9702;
  t9722 = t9710 + t9715;
  t9725 = t5185*t9652;
  t9727 = -1.*t6139*t9702;
  t9731 = t9725 + t9727;
  t9733 = -1.*t7458*t9722;
  t9738 = t7269*t9731;
  t9744 = t9733 + t9738;
  t9767 = t7269*t9722;
  t9771 = t7458*t9731;
  t9773 = t9767 + t9771;
  t9866 = -1.*t1699*t1183*t1780;
  t9869 = -1.*t3387*t1780*t2340;
  t9874 = t9866 + t9869;
  t9882 = -1.*t3387*t1699*t1780;
  t9889 = t1183*t1780*t2340;
  t9893 = t9882 + t9889;
  t9907 = -1.*t787*t613;
  t9908 = t920*t9874;
  t9909 = t9907 + t9908;
  t9914 = t6139*t9893;
  t9915 = t5185*t9909;
  t9921 = t9914 + t9915;
  t9924 = t5185*t9893;
  t9925 = -1.*t6139*t9909;
  t9926 = t9924 + t9925;
  t9930 = -1.*t7458*t9921;
  t9932 = t7269*t9926;
  t9934 = t9930 + t9932;
  t9942 = t7269*t9921;
  t9947 = t7458*t9926;
  t9948 = t9942 + t9947;
  t9989 = t1699*t1124;
  t9990 = -1.*t2282*t1780*t2340;
  t9995 = t9989 + t9990;
  t10004 = t1183*t9995;
  t10005 = t8683 + t10004;
  t9997 = -1.*t1183*t8578;
  t9999 = t3387*t9995;
  t10000 = t9997 + t9999;
  t10015 = t6139*t10000;
  t10017 = t5185*t920*t10005;
  t10022 = t10015 + t10017;
  t10028 = t5185*t10000;
  t10042 = -1.*t920*t6139*t10005;
  t10044 = t10028 + t10042;
  t10049 = -1.*t7458*t10022;
  t10050 = t7269*t10044;
  t10052 = t10049 + t10050;
  t10055 = t7269*t10022;
  t10057 = t7458*t10044;
  t10061 = t10055 + t10057;
  t10079 = t1699*t1124*t1780;
  t10083 = -1.*t2282*t2340;
  t10084 = t10079 + t10083;
  t10123 = t3387*t10084;
  t10129 = t1183*t4229;
  t10130 = t10123 + t10129;
  t10104 = -1.*t1183*t10084;
  t10109 = t10104 + t4704;
  t10145 = t6139*t10109;
  t10150 = t5185*t920*t10130;
  t10155 = t10145 + t10150;
  t10157 = t5185*t10109;
  t10168 = -1.*t920*t6139*t10130;
  t10190 = t10157 + t10168;
  t10196 = -1.*t7458*t10155;
  t10224 = t7269*t10190;
  t10231 = t10196 + t10224;
  t10240 = t7269*t10155;
  t10241 = t7458*t10190;
  t10243 = t10240 + t10241;
  t10315 = t3387*t613*t1699;
  t10318 = -1.*t613*t1183*t2340;
  t10321 = t10315 + t10318;
  t10302 = -1.*t613*t1699*t1183;
  t10307 = -1.*t3387*t613*t2340;
  t10311 = t10302 + t10307;
  t10334 = t6139*t10311;
  t10335 = t5185*t920*t10321;
  t10339 = t10334 + t10335;
  t10344 = t5185*t10311;
  t10350 = -1.*t920*t6139*t10321;
  t10351 = t10344 + t10350;
  t10353 = -1.*t7458*t10339;
  t10354 = t7269*t10351;
  t10356 = t10353 + t10354;
  t10360 = t7269*t10339;
  t10362 = t7458*t10351;
  t10363 = t10360 + t10362;
  t10402 = -1.*t3387*t8610;
  t10403 = t9997 + t10402;
  t10414 = t6139*t10403;
  t10418 = t5185*t920*t8708;
  t10419 = t10414 + t10418;
  t10421 = t5185*t10403;
  t10423 = -1.*t920*t6139*t8708;
  t10425 = t10421 + t10423;
  t10429 = -1.*t7458*t10419;
  t10430 = t7269*t10425;
  t10433 = t10429 + t10430;
  t10436 = t7269*t10419;
  t10439 = t7458*t10425;
  t10441 = t10436 + t10439;
  t10475 = t2282*t1699;
  t10476 = t1124*t1780*t2340;
  t10478 = t10475 + t10476;
  t10489 = -1.*t1183*t10478;
  t10491 = t10123 + t10489;
  t10484 = -1.*t3387*t10478;
  t10485 = t10104 + t10484;
  t10500 = t6139*t10485;
  t10501 = t5185*t920*t10491;
  t10502 = t10500 + t10501;
  t10505 = t5185*t10485;
  t10508 = -1.*t920*t6139*t10491;
  t10510 = t10505 + t10508;
  t10515 = -1.*t7458*t10502;
  t10519 = t7269*t10510;
  t10522 = t10515 + t10519;
  t10526 = t7269*t10502;
  t10530 = t7458*t10510;
  t10531 = t10526 + t10530;
  t10313 = t6174*t10311;
  t10325 = -0.1305*t787*t10321;
  t10330 = t4630*t10321;
  t10333 = t920*t6829*t10321;
  t10340 = t7549*t10339;
  t10352 = t7760*t10351;
  t10357 = t7992*t10356;
  t10366 = t8123*t10363;
  t10369 = t7936*t10356;
  t10376 = t7844*t10363;
  t10378 = t10369 + t10376;
  t10381 = -0.0016*t10378;
  t10385 = t7844*t10356;
  t10387 = -1.*t7936*t10363;
  t10390 = t10385 + t10387;
  t10398 = -0.2707*t10390;
  t8743 = -1.*t2282*t613*t920;
  t8754 = t787*t8656;
  t8766 = t8743 + t8754;
  t10586 = -1.*t7269*t6139*t8766;
  t10588 = -1.*t5185*t7458*t8766;
  t10589 = t10586 + t10588;
  t10591 = t5185*t7269*t8766;
  t10592 = -1.*t6139*t7458*t8766;
  t10594 = t10591 + t10592;
  t10556 = -0.135*t787;
  t10558 = -0.049*t920;
  t10559 = t10556 + t10558;
  t10562 = 0.049*t787;
  t10563 = t10562 + t930;
  t10620 = t1183*t10084;
  t10621 = t3387*t10478;
  t10623 = t10620 + t10621;
  t10630 = -1.*t613*t920*t1124;
  t10631 = t787*t10623;
  t10633 = t10630 + t10631;
  t10646 = -1.*t7269*t6139*t10633;
  t10651 = -1.*t5185*t7458*t10633;
  t10653 = t10646 + t10651;
  t10658 = t5185*t7269*t10633;
  t10660 = -1.*t6139*t7458*t10633;
  t10661 = t10658 + t10660;
  t10687 = t613*t1699*t1183;
  t10688 = t3387*t613*t2340;
  t10689 = t10687 + t10688;
  t10691 = t920*t1780;
  t10693 = t787*t10689;
  t10694 = t10691 + t10693;
  t10711 = -1.*t7269*t6139*t10694;
  t10712 = -1.*t5185*t7458*t10694;
  t10713 = t10711 + t10712;
  t10717 = t5185*t7269*t10694;
  t10723 = -1.*t6139*t7458*t10694;
  t10726 = t10717 + t10723;
  t10761 = -1.*t6139*t8708;
  t10764 = -1.*t5185*t8814;
  t10766 = t10761 + t10764;
  t10771 = t7458*t10766;
  t10773 = t10771 + t9039;
  t10776 = t7269*t10766;
  t10777 = -1.*t7458*t8980;
  t10778 = t10776 + t10777;
  t10752 = 0.049*t5185;
  t10753 = t10752 + t6770;
  t10755 = -0.09*t5185;
  t10756 = -0.049*t6139;
  t10757 = t10755 + t10756;
  t10791 = t787*t613*t1124;
  t10792 = t920*t10623;
  t10793 = t10791 + t10792;
  t10796 = -1.*t6139*t10491;
  t10797 = -1.*t5185*t10793;
  t10798 = t10796 + t10797;
  t10800 = t5185*t10491;
  t10801 = -1.*t6139*t10793;
  t10802 = t10800 + t10801;
  t10804 = t7458*t10798;
  t10805 = t7269*t10802;
  t10806 = t10804 + t10805;
  t10809 = t7269*t10798;
  t10810 = -1.*t7458*t10802;
  t10811 = t10809 + t10810;
  t10823 = -1.*t787*t1780;
  t10824 = t920*t10689;
  t10825 = t10823 + t10824;
  t10827 = -1.*t6139*t10321;
  t10828 = -1.*t5185*t10825;
  t10829 = t10827 + t10828;
  t10831 = t5185*t10321;
  t10832 = -1.*t6139*t10825;
  t10833 = t10831 + t10832;
  t10835 = t7458*t10829;
  t10836 = t7269*t10833;
  t10837 = t10835 + t10836;
  t10839 = t7269*t10829;
  t10840 = -1.*t7458*t10833;
  t10841 = t10839 + t10840;
  t10860 = -1.*t7269*t8910;
  t10861 = t10860 + t10777;
  t9179 = t7844*t9046;
  t10852 = -0.21*t7269;
  t10853 = -0.049*t7458;
  t10854 = t10852 + t10853;
  t10856 = 0.049*t7269;
  t10857 = t10856 + t7464;
  t10871 = t6139*t10491;
  t10872 = t5185*t10793;
  t10873 = t10871 + t10872;
  t10876 = -1.*t7458*t10873;
  t10877 = t10876 + t10805;
  t10879 = -1.*t7269*t10873;
  t10880 = t10879 + t10810;
  t10891 = t6139*t10321;
  t10892 = t5185*t10825;
  t10893 = t10891 + t10892;
  t10896 = -1.*t7458*t10893;
  t10897 = t10896 + t10836;
  t10899 = -1.*t7269*t10893;
  t10900 = t10899 + t10840;
  t10863 = -1.*t7936*t9046;
  t9185 = -1.*t7936*t9138;
  t9188 = t9179 + t9185;
  t10911 = 0.0016*t7844;
  t10912 = t10911 + t8098;
  t10914 = -0.2707*t7844;
  t10915 = -0.0016*t7936;
  t10916 = t10914 + t10915;
  t10882 = -1.*t7936*t10877;
  t10924 = t7269*t10873;
  t10925 = t7458*t10802;
  t10926 = t10924 + t10925;
  t10886 = t7844*t10877;
  t10902 = -1.*t7936*t10897;
  t10936 = t7269*t10893;
  t10937 = t7458*t10833;
  t10938 = t10936 + t10937;
  t10906 = t7844*t10897;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1523*t2960 + t4091*t4229 + t4630*t4874 + t6174*t6375 + t6829*t7155 + t7549*t7622 + t7760*t7811 + t7992*t8057 + t8123*t8321 - 0.0016*(t7936*t8057 + t7844*t8321) - 0.2707*(t7844*t8057 - 1.*t7936*t8321) - 0.1305*(t4874*t787 + t1124*t613*t920) - 1.*t1124*t613*t952;
  p_output1[10]=t1523*t8578 + t4091*t8610 + t4630*t8656 + t6174*t8708 - 0.1305*t8766 + t6829*t8814 + t7549*t8910 + t7760*t8980 + t7992*t9046 + t8123*t9138 - 0.0016*(t7936*t9046 + t7844*t9138) - 0.2707*t9188 + t2282*t613*t952;
  p_output1[11]=0;
  p_output1[12]=t1523*t1699*t2282*t613 + t2282*t2340*t4091*t613 + t4630*t9249 - 0.1305*(t1780*t2282*t920 + t787*t9249) + t6174*t9299 + t6829*t9380 + t7549*t9411 + t7760*t9465 + t7992*t9494 - 1.*t1780*t2282*t952 + t8123*t9553 - 0.0016*(t7936*t9494 + t7844*t9553) - 0.2707*(t7844*t9494 - 1.*t7936*t9553);
  p_output1[13]=t1124*t1523*t1699*t613 + t1124*t2340*t4091*t613 - 1.*t1124*t1780*t952 + t4630*t9638 - 0.1305*(t1124*t1780*t920 + t787*t9638) + t6174*t9652 + t6829*t9702 + t7549*t9722 + t7760*t9731 + t7992*t9744 + t8123*t9773 - 0.0016*(t7936*t9744 + t7844*t9773) - 0.2707*(t7844*t9744 - 1.*t7936*t9773);
  p_output1[14]=-1.*t1523*t1699*t1780 - 1.*t1780*t2340*t4091 - 1.*t613*t952 + t4630*t9874 - 0.1305*(t613*t920 + t787*t9874) + t6174*t9893 + t6829*t9909 + t7549*t9921 + t7760*t9926 + t7992*t9934 + t8123*t9948 - 0.0016*(t7936*t9934 + t7844*t9948) - 0.2707*(t7844*t9934 - 1.*t7936*t9948);
  p_output1[15]=t10005*t4630 + t10000*t6174 + t10022*t7549 + t10044*t7760 - 0.1305*t10005*t787 - 0.0016*(t10061*t7844 + t10052*t7936) - 0.2707*(t10052*t7844 - 1.*t10061*t7936) + t10052*t7992 + t10061*t8123 + t4091*t8578 + t10005*t6829*t920 + t1523*t9995;
  p_output1[16]=t10084*t4091 + t1523*t4229 + t10130*t4630 + t10109*t6174 + t10155*t7549 + t10190*t7760 - 0.1305*t10130*t787 - 0.0016*(t10243*t7844 + t10231*t7936) - 0.2707*(t10231*t7844 - 1.*t10243*t7936) + t10231*t7992 + t10243*t8123 + t10130*t6829*t920;
  p_output1[17]=t10313 + t10325 + t10330 + t10333 + t10340 + t10352 + t10357 + t10366 + t10381 + t10398 - 1.*t1523*t2340*t613 + t1699*t4091*t613;
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
  p_output1[39]=t10403*t6174 + t10419*t7549 + t10425*t7760 - 0.0016*(t10441*t7844 + t10433*t7936) - 0.2707*(t10433*t7844 - 1.*t10441*t7936) + t10433*t7992 + t10441*t8123 + 0.135*t3387*t8578 - 0.135*t1183*t8610 + t4630*t8708 - 0.1305*t787*t8708 + t6829*t8708*t920;
  p_output1[40]=-0.135*t10478*t1183 + 0.135*t10084*t3387 + t10491*t4630 + t10485*t6174 + t10502*t7549 + t10510*t7760 - 0.1305*t10491*t787 - 0.0016*(t10531*t7844 + t10522*t7936) - 0.2707*(t10522*t7844 - 1.*t10531*t7936) + t10522*t7992 + t10531*t8123 + t10491*t6829*t920;
  p_output1[41]=t10313 + t10325 + t10330 + t10333 + t10340 + t10352 + t10357 + t10366 + t10381 + t10398 - 0.135*t1183*t2340*t613 + 0.135*t1699*t3387*t613;
  p_output1[42]=t10559*t2282*t613 - 0.0016*(t10594*t7844 + t10589*t7936) - 0.2707*(t10589*t7844 - 1.*t10594*t7936) + t10589*t7992 + t10594*t8123 + t10563*t8656 + t6829*t8766 + t5185*t7549*t8766 - 1.*t6139*t7760*t8766 - 0.1305*(-1.*t2282*t613*t787 - 1.*t8656*t920);
  p_output1[43]=t10563*t10623 + t10559*t1124*t613 + t10633*t6829 + t10633*t5185*t7549 - 1.*t10633*t6139*t7760 - 0.0016*(t10661*t7844 + t10653*t7936) - 0.2707*(t10653*t7844 - 1.*t10661*t7936) + t10653*t7992 + t10661*t8123 - 0.1305*(t6870 - 1.*t10623*t920);
  p_output1[44]=t10563*t10689 - 1.*t10559*t1780 + t10694*t6829 + t10694*t5185*t7549 - 1.*t10694*t6139*t7760 - 0.0016*(t10726*t7844 + t10713*t7936) - 0.2707*(t10713*t7844 - 1.*t10726*t7936) + t10713*t7992 + t10726*t8123 - 0.1305*(t1780*t787 - 1.*t10689*t920);
  p_output1[45]=t10766*t7760 - 0.2707*(t10778*t7844 - 1.*t10773*t7936) - 0.0016*(t10773*t7844 + t10778*t7936) + t10778*t7992 + t10773*t8123 + t10753*t8708 + t10757*t8814 + t7549*t8980;
  p_output1[46]=t10491*t10753 + t10757*t10793 + t10802*t7549 + t10798*t7760 - 0.2707*(t10811*t7844 - 1.*t10806*t7936) - 0.0016*(t10806*t7844 + t10811*t7936) + t10811*t7992 + t10806*t8123;
  p_output1[47]=t10321*t10753 + t10757*t10825 + t10833*t7549 + t10829*t7760 - 0.2707*(t10841*t7844 - 1.*t10837*t7936) - 0.0016*(t10837*t7844 + t10841*t7936) + t10841*t7992 + t10837*t8123;
  p_output1[48]=-0.2707*(t10863 + t10861*t7844) + t10861*t7992 + t10854*t8910 + t10857*t8980 + t8123*t9046 - 0.0016*(t10861*t7936 + t9179);
  p_output1[49]=t10802*t10857 + t10854*t10873 - 0.2707*(t10882 + t10880*t7844) - 0.0016*(t10886 + t10880*t7936) + t10880*t7992 + t10877*t8123;
  p_output1[50]=t10833*t10857 + t10854*t10893 - 0.2707*(t10902 + t10900*t7844) - 0.0016*(t10906 + t10900*t7936) + t10900*t7992 + t10897*t8123;
  p_output1[51]=t10912*t9046 + t10916*t9138 - 0.2707*(t10863 - 1.*t7844*t9138) - 0.0016*t9188;
  p_output1[52]=t10877*t10912 + t10916*t10926 - 0.2707*(t10882 - 1.*t10926*t7844) - 0.0016*(t10886 - 1.*t10926*t7936);
  p_output1[53]=t10897*t10912 + t10916*t10938 - 0.2707*(t10902 - 1.*t10938*t7844) - 0.0016*(t10906 - 1.*t10938*t7936);
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
