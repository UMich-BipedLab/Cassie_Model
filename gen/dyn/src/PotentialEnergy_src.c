/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:33:37 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "PotentialEnergy_src.h"

#ifdef _MSC_VER
  #define INLINE __forceinline /* use __forceinline (VC++ specific) */
#else
  #define INLINE static inline        /* use standard inline */
#endif

/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
INLINE double Power(double x, double y) { return pow(x, y); }
INLINE double Sqrt(double x) { return sqrt(x); }

INLINE double Abs(double x) { return fabs(x); }

INLINE double Exp(double x) { return exp(x); }
INLINE double Log(double x) { return log(x); }

INLINE double Sin(double x) { return sin(x); }
INLINE double Cos(double x) { return cos(x); }
INLINE double Tan(double x) { return tan(x); }

INLINE double Csc(double x) { return 1.0/sin(x); }
INLINE double Sec(double x) { return 1.0/cos(x); }

INLINE double ArcSin(double x) { return asin(x); }
INLINE double ArcCos(double x) { return acos(x); }
//INLINE double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
INLINE double ArcTan(double x, double y) { return atan2(y,x); }

INLINE double Sinh(double x) { return sinh(x); }
INLINE double Cosh(double x) { return cosh(x); }
INLINE double Tanh(double x) { return tanh(x); }

#define E 2.71828182845904523536029
#define Pi 3.14159265358979323846264
#define Degree 0.01745329251994329576924

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1)
{
  double t10;
  double t16;
  double t22;
  double t37;
  double t119;
  double t161;
  double t38;
  double t91;
  double t96;
  double t123;
  double t124;
  double t133;
  double t141;
  double t162;
  double t263;
  double t265;
  double t266;
  double t283;
  double t169;
  double t171;
  double t206;
  double t218;
  double t235;
  double t238;
  double t268;
  double t290;
  double t291;
  double t292;
  double t310;
  double t319;
  double t321;
  double t323;
  double t326;
  double t333;
  double t334;
  double t374;
  double t378;
  double t381;
  double t405;
  double t340;
  double t341;
  double t349;
  double t399;
  double t419;
  double t420;
  double t422;
  double t428;
  double t435;
  double t439;
  double t451;
  double t460;
  double t464;
  double t467;
  double t538;
  double t541;
  double t543;
  double t547;
  double t479;
  double t489;
  double t491;
  double t545;
  double t568;
  double t576;
  double t578;
  double t613;
  double t617;
  double t622;
  double t625;
  double t632;
  double t655;
  double t666;
  double t709;
  double t716;
  double t733;
  double t751;
  double t670;
  double t676;
  double t684;
  double t743;
  double t752;
  double t766;
  double t783;
  double t785;
  double t789;
  double t798;
  double t801;
  double t803;
  double t804;
  double t806;
  double t856;
  double t884;
  double t886;
  double t891;
  double t819;
  double t824;
  double t832;
  double t887;
  double t897;
  double t900;
  double t901;
  double t908;
  double t910;
  double t912;
  double t917;
  double t929;
  double t935;
  double t941;
  double t1015;
  double t1029;
  double t1030;
  double t1032;
  double t960;
  double t988;
  double t992;
  double t113;
  double t1153;
  double t1201;
  double t1156;
  double t1157;
  double t1161;
  double t1181;
  double t1187;
  double t1202;
  double t1204;
  double t1213;
  double t1238;
  double t1244;
  double t1245;
  double t1214;
  double t1217;
  double t1220;
  double t1278;
  double t1279;
  double t1305;
  double t1312;
  double t1309;
  double t1321;
  double t1323;
  double t1333;
  double t1334;
  double t1339;
  double t1341;
  double t1345;
  double t1356;
  double t1360;
  double t1363;
  double t1375;
  double t1377;
  double t1382;
  double t1437;
  double t1439;
  double t1442;
  double t1453;
  double t1448;
  double t1460;
  double t1464;
  double t1467;
  double t1475;
  double t1476;
  double t1485;
  double t1486;
  double t1498;
  double t1500;
  double t1501;
  double t1519;
  double t1520;
  double t1522;
  double t1525;
  double t1506;
  double t1507;
  double t1508;
  double t1523;
  double t1526;
  double t1534;
  double t1542;
  double t1548;
  double t1550;
  double t1552;
  double t1557;
  double t1560;
  double t1569;
  double t1571;
  double t1605;
  double t1608;
  double t1610;
  double t1612;
  double t1573;
  double t1578;
  double t1584;
  double t1611;
  double t1619;
  double t1624;
  double t1625;
  double t1626;
  double t1629;
  double t1631;
  double t1632;
  double t1635;
  double t1637;
  double t1639;
  double t1672;
  double t1674;
  double t1678;
  double t1688;
  double t1643;
  double t1645;
  double t1647;
  double t1687;
  double t1689;
  double t1691;
  double t1692;
  double t1699;
  double t1702;
  double t1704;
  double t1705;
  double t1715;
  double t1720;
  double t1731;
  double t1751;
  double t1754;
  double t1764;
  double t1774;
  double t1734;
  double t1737;
  double t1739;
  t10 = Cos(var1[4]);
  t16 = Cos(var1[5]);
  t22 = Sin(var1[4]);
  t37 = Sin(var1[13]);
  t119 = Cos(var1[13]);
  t161 = Sin(var1[5]);
  t38 = 0.135*t37;
  t91 = 0. + t38;
  t96 = t10*t16*t91;
  t123 = -1.*t119;
  t124 = 1. + t123;
  t133 = -0.135*t124;
  t141 = 0. + t133;
  t162 = t141*t10*t161;
  t263 = Cos(var1[14]);
  t265 = -1.*t263;
  t266 = 1. + t265;
  t283 = Sin(var1[14]);
  t169 = t10*t16*t37;
  t171 = t119*t10*t161;
  t206 = t169 + t171;
  t218 = t119*t10*t16;
  t235 = -1.*t10*t37*t161;
  t238 = t218 + t235;
  t268 = -0.049*t266;
  t290 = -0.135*t283;
  t291 = 0. + t268 + t290;
  t292 = -1.*t291*t22;
  t310 = -0.135*t266;
  t319 = 0.049*t283;
  t321 = 0. + t310 + t319;
  t323 = t321*t206;
  t326 = t283*t22;
  t333 = t263*t206;
  t334 = t326 + t333;
  t374 = Cos(var1[15]);
  t378 = -1.*t374;
  t381 = 1. + t378;
  t405 = Sin(var1[15]);
  t340 = -1.*t263*t22;
  t341 = t283*t206;
  t349 = t340 + t341;
  t399 = -0.09*t381;
  t419 = 0.049*t405;
  t420 = 0. + t399 + t419;
  t422 = t420*t238;
  t428 = -0.049*t381;
  t435 = -0.09*t405;
  t439 = 0. + t428 + t435;
  t451 = t439*t349;
  t460 = t405*t238;
  t464 = t374*t349;
  t467 = t460 + t464;
  t538 = Cos(var1[16]);
  t541 = -1.*t538;
  t543 = 1. + t541;
  t547 = Sin(var1[16]);
  t479 = t374*t238;
  t489 = -1.*t405*t349;
  t491 = t479 + t489;
  t545 = -0.049*t543;
  t568 = -0.21*t547;
  t576 = 0. + t545 + t568;
  t578 = t576*t467;
  t613 = -0.21*t543;
  t617 = 0.049*t547;
  t622 = 0. + t613 + t617;
  t625 = t622*t491;
  t632 = -1.*t547*t467;
  t655 = t538*t491;
  t666 = t632 + t655;
  t709 = Cos(var1[17]);
  t716 = -1.*t709;
  t733 = 1. + t716;
  t751 = Sin(var1[17]);
  t670 = t538*t467;
  t676 = t547*t491;
  t684 = t670 + t676;
  t743 = -0.2707*t733;
  t752 = 0.0016*t751;
  t766 = 0. + t743 + t752;
  t783 = t766*t666;
  t785 = -0.0016*t733;
  t789 = -0.2707*t751;
  t798 = 0. + t785 + t789;
  t801 = t798*t684;
  t803 = t751*t666;
  t804 = t709*t684;
  t806 = t803 + t804;
  t856 = Cos(var1[18]);
  t884 = -1.*t856;
  t886 = 1. + t884;
  t891 = Sin(var1[18]);
  t819 = t709*t666;
  t824 = -1.*t751*t684;
  t832 = t819 + t824;
  t887 = 0.0184*t886;
  t897 = -0.7055*t891;
  t900 = 0. + t887 + t897;
  t901 = t900*t806;
  t908 = -0.7055*t886;
  t910 = -0.0184*t891;
  t912 = 0. + t908 + t910;
  t917 = t912*t832;
  t929 = -1.*t891*t806;
  t935 = t856*t832;
  t941 = t929 + t935;
  t1015 = Cos(var1[19]);
  t1029 = -1.*t1015;
  t1030 = 1. + t1029;
  t1032 = Sin(var1[19]);
  t960 = t856*t806;
  t988 = t891*t832;
  t992 = t960 + t988;
  t113 = 0.0233*t22;
  t1153 = Cos(var1[6]);
  t1201 = Sin(var1[6]);
  t1156 = -1.*t1153;
  t1157 = 1. + t1156;
  t1161 = 0.135*t1157;
  t1181 = 0. + t1161;
  t1187 = t10*t1181*t161;
  t1202 = -0.135*t1201;
  t1204 = 0. + t1202;
  t1213 = t10*t16*t1204;
  t1238 = t10*t16*t1153;
  t1244 = -1.*t10*t161*t1201;
  t1245 = t1238 + t1244;
  t1214 = t10*t1153*t161;
  t1217 = t10*t16*t1201;
  t1220 = t1214 + t1217;
  t1278 = Cos(var1[7]);
  t1279 = -1.*t1278;
  t1305 = 1. + t1279;
  t1312 = Sin(var1[7]);
  t1309 = 0.135*t1305;
  t1321 = 0.049*t1312;
  t1323 = 0. + t1309 + t1321;
  t1333 = t1220*t1323;
  t1334 = -0.049*t1305;
  t1339 = 0.135*t1312;
  t1341 = 0. + t1334 + t1339;
  t1345 = -1.*t22*t1341;
  t1356 = t1278*t1220;
  t1360 = t22*t1312;
  t1363 = t1356 + t1360;
  t1375 = -1.*t1278*t22;
  t1377 = t1220*t1312;
  t1382 = t1375 + t1377;
  t1437 = Cos(var1[8]);
  t1439 = -1.*t1437;
  t1442 = 1. + t1439;
  t1453 = Sin(var1[8]);
  t1448 = -0.049*t1442;
  t1460 = -0.09*t1453;
  t1464 = 0. + t1448 + t1460;
  t1467 = t1382*t1464;
  t1475 = -0.09*t1442;
  t1476 = 0.049*t1453;
  t1485 = 0. + t1475 + t1476;
  t1486 = t1245*t1485;
  t1498 = t1437*t1382;
  t1500 = t1245*t1453;
  t1501 = t1498 + t1500;
  t1519 = Cos(var1[9]);
  t1520 = -1.*t1519;
  t1522 = 1. + t1520;
  t1525 = Sin(var1[9]);
  t1506 = t1437*t1245;
  t1507 = -1.*t1382*t1453;
  t1508 = t1506 + t1507;
  t1523 = -0.049*t1522;
  t1526 = -0.21*t1525;
  t1534 = 0. + t1523 + t1526;
  t1542 = t1534*t1501;
  t1548 = -0.21*t1522;
  t1550 = 0.049*t1525;
  t1552 = 0. + t1548 + t1550;
  t1557 = t1552*t1508;
  t1560 = -1.*t1525*t1501;
  t1569 = t1519*t1508;
  t1571 = t1560 + t1569;
  t1605 = Cos(var1[10]);
  t1608 = -1.*t1605;
  t1610 = 1. + t1608;
  t1612 = Sin(var1[10]);
  t1573 = t1519*t1501;
  t1578 = t1525*t1508;
  t1584 = t1573 + t1578;
  t1611 = -0.2707*t1610;
  t1619 = 0.0016*t1612;
  t1624 = 0. + t1611 + t1619;
  t1625 = t1624*t1571;
  t1626 = -0.0016*t1610;
  t1629 = -0.2707*t1612;
  t1631 = 0. + t1626 + t1629;
  t1632 = t1631*t1584;
  t1635 = t1612*t1571;
  t1637 = t1605*t1584;
  t1639 = t1635 + t1637;
  t1672 = Cos(var1[11]);
  t1674 = -1.*t1672;
  t1678 = 1. + t1674;
  t1688 = Sin(var1[11]);
  t1643 = t1605*t1571;
  t1645 = -1.*t1612*t1584;
  t1647 = t1643 + t1645;
  t1687 = 0.0184*t1678;
  t1689 = -0.7055*t1688;
  t1691 = 0. + t1687 + t1689;
  t1692 = t1691*t1639;
  t1699 = -0.7055*t1678;
  t1702 = -0.0184*t1688;
  t1704 = 0. + t1699 + t1702;
  t1705 = t1704*t1647;
  t1715 = -1.*t1688*t1639;
  t1720 = t1672*t1647;
  t1731 = t1715 + t1720;
  t1751 = Cos(var1[12]);
  t1754 = -1.*t1751;
  t1764 = 1. + t1754;
  t1774 = Sin(var1[12]);
  t1734 = t1672*t1639;
  t1737 = t1688*t1647;
  t1739 = t1734 + t1737;
  p_output1[0]=17.8542*(0. + t113 + t1187 + t1213 + 0.1351*t1220 + 0.0179*t1245 + var1[2]) + 11.4777*(0. + t1187 + t1213 - 0.0343*t1245 + t1333 + t1345 + 0.135*t1363 - 0.049*t1382 + var1[2]) + 54.1512*(0. + t1187 + t1213 + t1333 + t1345 + 0.1708*t1363 + t1467 + t1486 - 0.0489*t1501 - 0.1498*t1508 + var1[2]) + 7.43598*(0. + t1187 + t1213 + t1333 + t1345 + 0.1327*t1363 + t1467 + t1486 + t1542 + t1557 - 0.233*t1571 - 0.0169*t1584 + var1[2]) + 5.66037*(0. + t1187 + t1213 + t1333 + t1345 + 0.1303*t1363 + t1467 + t1486 + t1542 + t1557 + t1625 + t1632 - 0.0004*t1639 - 0.4541*t1647 + var1[2]) + 7.67142*(0. + t1187 + t1213 + t1333 + t1345 + 0.1318*t1363 + t1467 + t1486 + t1542 + t1557 + t1625 + t1632 + t1692 + t1705 - 0.816*t1731 - 0.0122*t1739 + var1[2]) + 1.4715*(0. + t1187 + t1213 + t1333 + t1345 + 0.1306*t1363 + t1467 + t1486 + t1542 + t1557 + t1625 + t1632 + t1692 + t1705 + t1739*(0. - 0.0216*t1764 - 1.1135*t1774) + t1731*(0. - 1.1135*t1764 + 0.0216*t1774) + 0.0059*(t1739*t1751 + t1731*t1774) - 1.1182*(t1731*t1751 - 1.*t1739*t1774) + var1[2]) + 101.3373*(0.0284*t10*t16 - 0.0507*t22 + var1[2]) + 17.8542*(0. + t113 + t162 - 0.1351*t206 + 0.0179*t238 + t96 + var1[2]) + 11.4777*(0. + t162 - 0.0343*t238 + t292 + t323 - 0.135*t334 - 0.049*t349 + t96 + var1[2]) + 54.1512*(0. + t162 + t292 + t323 - 0.1708*t334 + t422 + t451 - 0.0489*t467 - 0.1498*t491 + t96 + var1[2]) + 7.43598*(0. + t162 + t292 + t323 - 0.1327*t334 + t422 + t451 + t578 + t625 - 0.233*t666 - 0.0169*t684 + t96 + var1[2]) + 5.66037*(0. + t162 + t292 + t323 - 0.1303*t334 + t422 + t451 + t578 + t625 + t783 + t801 - 0.0004*t806 - 0.4541*t832 + t96 + var1[2]) + 7.67142*(0. + t162 + t292 + t323 - 0.1318*t334 + t422 + t451 + t578 + t625 + t783 + t801 + t901 + t917 - 0.816*t941 + t96 - 0.0122*t992 + var1[2]) + 1.4715*(0. + t162 + t292 + t323 - 0.1306*t334 + t422 + t451 + t578 + t625 + t783 + t801 + t901 + t917 + (0. - 1.1135*t1030 + 0.0216*t1032)*t941 + t96 + (0. - 0.0216*t1030 - 1.1135*t1032)*t992 + 0.0059*(t1032*t941 + t1015*t992) - 1.1182*(t1015*t941 - 1.*t1032*t992) + var1[2]);
}



void PotentialEnergy_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
