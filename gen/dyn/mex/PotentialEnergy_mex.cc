/*
 * Automatically Generated from Mathematica.
 * Thu 9 Nov 2017 12:27:36 GMT-05:00
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
  double t14;
  double t23;
  double t57;
  double t97;
  double t111;
  double t140;
  double t101;
  double t104;
  double t106;
  double t113;
  double t114;
  double t119;
  double t123;
  double t152;
  double t222;
  double t224;
  double t226;
  double t238;
  double t157;
  double t164;
  double t181;
  double t199;
  double t202;
  double t204;
  double t236;
  double t249;
  double t250;
  double t253;
  double t258;
  double t259;
  double t260;
  double t263;
  double t269;
  double t272;
  double t273;
  double t356;
  double t364;
  double t368;
  double t374;
  double t287;
  double t315;
  double t330;
  double t372;
  double t379;
  double t401;
  double t402;
  double t420;
  double t423;
  double t424;
  double t432;
  double t436;
  double t441;
  double t452;
  double t521;
  double t526;
  double t529;
  double t534;
  double t459;
  double t471;
  double t475;
  double t532;
  double t536;
  double t538;
  double t548;
  double t576;
  double t584;
  double t593;
  double t597;
  double t601;
  double t604;
  double t605;
  double t664;
  double t667;
  double t690;
  double t697;
  double t612;
  double t622;
  double t628;
  double t696;
  double t704;
  double t714;
  double t722;
  double t723;
  double t727;
  double t740;
  double t747;
  double t754;
  double t773;
  double t775;
  double t824;
  double t831;
  double t850;
  double t855;
  double t796;
  double t797;
  double t804;
  double t852;
  double t861;
  double t879;
  double t881;
  double t884;
  double t885;
  double t886;
  double t891;
  double t893;
  double t904;
  double t905;
  double t949;
  double t958;
  double t967;
  double t988;
  double t912;
  double t913;
  double t918;
  double t108;
  double t1112;
  double t1145;
  double t1119;
  double t1122;
  double t1126;
  double t1131;
  double t1143;
  double t1148;
  double t1154;
  double t1156;
  double t1186;
  double t1191;
  double t1194;
  double t1164;
  double t1168;
  double t1172;
  double t1215;
  double t1217;
  double t1219;
  double t1233;
  double t1227;
  double t1238;
  double t1265;
  double t1269;
  double t1272;
  double t1278;
  double t1283;
  double t1287;
  double t1288;
  double t1290;
  double t1316;
  double t1328;
  double t1330;
  double t1336;
  double t1377;
  double t1383;
  double t1392;
  double t1396;
  double t1395;
  double t1407;
  double t1410;
  double t1417;
  double t1422;
  double t1448;
  double t1462;
  double t1469;
  double t1470;
  double t1473;
  double t1482;
  double t1545;
  double t1546;
  double t1550;
  double t1570;
  double t1517;
  double t1520;
  double t1521;
  double t1558;
  double t1584;
  double t1585;
  double t1596;
  double t1599;
  double t1609;
  double t1618;
  double t1621;
  double t1625;
  double t1634;
  double t1644;
  double t1679;
  double t1683;
  double t1733;
  double t1736;
  double t1654;
  double t1658;
  double t1666;
  double t1734;
  double t1737;
  double t1740;
  double t1746;
  double t1754;
  double t1762;
  double t1771;
  double t1772;
  double t1773;
  double t1774;
  double t1784;
  double t1851;
  double t1858;
  double t1863;
  double t1891;
  double t1807;
  double t1810;
  double t1820;
  double t1867;
  double t1907;
  double t1926;
  double t1934;
  double t1947;
  double t1961;
  double t1971;
  double t1972;
  double t1984;
  double t1991;
  double t2004;
  double t2084;
  double t2107;
  double t2113;
  double t2136;
  double t2013;
  double t2014;
  double t2037;
  t14 = Cos(var1[4]);
  t23 = Cos(var1[5]);
  t57 = Sin(var1[4]);
  t97 = Sin(var1[13]);
  t111 = Cos(var1[13]);
  t140 = Sin(var1[5]);
  t101 = 0.135*t97;
  t104 = 0. + t101;
  t106 = t14*t23*t104;
  t113 = -1.*t111;
  t114 = 1. + t113;
  t119 = -0.135*t114;
  t123 = 0. + t119;
  t152 = t123*t14*t140;
  t222 = Cos(var1[14]);
  t224 = -1.*t222;
  t226 = 1. + t224;
  t238 = Sin(var1[14]);
  t157 = t14*t23*t97;
  t164 = t111*t14*t140;
  t181 = t157 + t164;
  t199 = t111*t14*t23;
  t202 = -1.*t14*t97*t140;
  t204 = t199 + t202;
  t236 = -0.049*t226;
  t249 = -0.135*t238;
  t250 = 0. + t236 + t249;
  t253 = -1.*t250*t57;
  t258 = -0.135*t226;
  t259 = 0.049*t238;
  t260 = 0. + t258 + t259;
  t263 = t260*t181;
  t269 = t238*t57;
  t272 = t222*t181;
  t273 = t269 + t272;
  t356 = Cos(var1[15]);
  t364 = -1.*t356;
  t368 = 1. + t364;
  t374 = Sin(var1[15]);
  t287 = -1.*t222*t57;
  t315 = t238*t181;
  t330 = t287 + t315;
  t372 = -0.09*t368;
  t379 = 0.049*t374;
  t401 = 0. + t372 + t379;
  t402 = t401*t204;
  t420 = -0.049*t368;
  t423 = -0.09*t374;
  t424 = 0. + t420 + t423;
  t432 = t424*t330;
  t436 = t374*t204;
  t441 = t356*t330;
  t452 = t436 + t441;
  t521 = Cos(var1[16]);
  t526 = -1.*t521;
  t529 = 1. + t526;
  t534 = Sin(var1[16]);
  t459 = t356*t204;
  t471 = -1.*t374*t330;
  t475 = t459 + t471;
  t532 = -0.049*t529;
  t536 = -0.21*t534;
  t538 = 0. + t532 + t536;
  t548 = t538*t452;
  t576 = -0.21*t529;
  t584 = 0.049*t534;
  t593 = 0. + t576 + t584;
  t597 = t593*t475;
  t601 = -1.*t534*t452;
  t604 = t521*t475;
  t605 = t601 + t604;
  t664 = Cos(var1[17]);
  t667 = -1.*t664;
  t690 = 1. + t667;
  t697 = Sin(var1[17]);
  t612 = t521*t452;
  t622 = t534*t475;
  t628 = t612 + t622;
  t696 = -0.2707*t690;
  t704 = 0.0016*t697;
  t714 = 0. + t696 + t704;
  t722 = t714*t605;
  t723 = -0.0016*t690;
  t727 = -0.2707*t697;
  t740 = 0. + t723 + t727;
  t747 = t740*t628;
  t754 = t697*t605;
  t773 = t664*t628;
  t775 = t754 + t773;
  t824 = Cos(var1[18]);
  t831 = -1.*t824;
  t850 = 1. + t831;
  t855 = Sin(var1[18]);
  t796 = t664*t605;
  t797 = -1.*t697*t628;
  t804 = t796 + t797;
  t852 = 0.0184*t850;
  t861 = -0.7055*t855;
  t879 = 0. + t852 + t861;
  t881 = t879*t775;
  t884 = -0.7055*t850;
  t885 = -0.0184*t855;
  t886 = 0. + t884 + t885;
  t891 = t886*t804;
  t893 = -1.*t855*t775;
  t904 = t824*t804;
  t905 = t893 + t904;
  t949 = Cos(var1[19]);
  t958 = -1.*t949;
  t967 = 1. + t958;
  t988 = Sin(var1[19]);
  t912 = t824*t775;
  t913 = t855*t804;
  t918 = t912 + t913;
  t108 = 0.0233*t57;
  t1112 = Cos(var1[6]);
  t1145 = Sin(var1[6]);
  t1119 = -1.*t1112;
  t1122 = 1. + t1119;
  t1126 = 0.135*t1122;
  t1131 = 0. + t1126;
  t1143 = t14*t1131*t140;
  t1148 = -0.135*t1145;
  t1154 = 0. + t1148;
  t1156 = t14*t23*t1154;
  t1186 = t14*t23*t1112;
  t1191 = -1.*t14*t140*t1145;
  t1194 = t1186 + t1191;
  t1164 = t14*t1112*t140;
  t1168 = t14*t23*t1145;
  t1172 = t1164 + t1168;
  t1215 = Cos(var1[7]);
  t1217 = -1.*t1215;
  t1219 = 1. + t1217;
  t1233 = Sin(var1[7]);
  t1227 = 0.135*t1219;
  t1238 = 0.049*t1233;
  t1265 = 0. + t1227 + t1238;
  t1269 = t1172*t1265;
  t1272 = -0.049*t1219;
  t1278 = 0.135*t1233;
  t1283 = 0. + t1272 + t1278;
  t1287 = -1.*t57*t1283;
  t1288 = t1215*t1172;
  t1290 = t57*t1233;
  t1316 = t1288 + t1290;
  t1328 = -1.*t1215*t57;
  t1330 = t1172*t1233;
  t1336 = t1328 + t1330;
  t1377 = Cos(var1[8]);
  t1383 = -1.*t1377;
  t1392 = 1. + t1383;
  t1396 = Sin(var1[8]);
  t1395 = -0.049*t1392;
  t1407 = -0.09*t1396;
  t1410 = 0. + t1395 + t1407;
  t1417 = t1336*t1410;
  t1422 = -0.09*t1392;
  t1448 = 0.049*t1396;
  t1462 = 0. + t1422 + t1448;
  t1469 = t1194*t1462;
  t1470 = t1377*t1336;
  t1473 = t1194*t1396;
  t1482 = t1470 + t1473;
  t1545 = Cos(var1[9]);
  t1546 = -1.*t1545;
  t1550 = 1. + t1546;
  t1570 = Sin(var1[9]);
  t1517 = t1377*t1194;
  t1520 = -1.*t1336*t1396;
  t1521 = t1517 + t1520;
  t1558 = -0.049*t1550;
  t1584 = -0.21*t1570;
  t1585 = 0. + t1558 + t1584;
  t1596 = t1585*t1482;
  t1599 = -0.21*t1550;
  t1609 = 0.049*t1570;
  t1618 = 0. + t1599 + t1609;
  t1621 = t1618*t1521;
  t1625 = -1.*t1570*t1482;
  t1634 = t1545*t1521;
  t1644 = t1625 + t1634;
  t1679 = Cos(var1[10]);
  t1683 = -1.*t1679;
  t1733 = 1. + t1683;
  t1736 = Sin(var1[10]);
  t1654 = t1545*t1482;
  t1658 = t1570*t1521;
  t1666 = t1654 + t1658;
  t1734 = -0.2707*t1733;
  t1737 = 0.0016*t1736;
  t1740 = 0. + t1734 + t1737;
  t1746 = t1740*t1644;
  t1754 = -0.0016*t1733;
  t1762 = -0.2707*t1736;
  t1771 = 0. + t1754 + t1762;
  t1772 = t1771*t1666;
  t1773 = t1736*t1644;
  t1774 = t1679*t1666;
  t1784 = t1773 + t1774;
  t1851 = Cos(var1[11]);
  t1858 = -1.*t1851;
  t1863 = 1. + t1858;
  t1891 = Sin(var1[11]);
  t1807 = t1679*t1644;
  t1810 = -1.*t1736*t1666;
  t1820 = t1807 + t1810;
  t1867 = 0.0184*t1863;
  t1907 = -0.7055*t1891;
  t1926 = 0. + t1867 + t1907;
  t1934 = t1926*t1784;
  t1947 = -0.7055*t1863;
  t1961 = -0.0184*t1891;
  t1971 = 0. + t1947 + t1961;
  t1972 = t1971*t1820;
  t1984 = -1.*t1891*t1784;
  t1991 = t1851*t1820;
  t2004 = t1984 + t1991;
  t2084 = Cos(var1[12]);
  t2107 = -1.*t2084;
  t2113 = 1. + t2107;
  t2136 = Sin(var1[12]);
  t2013 = t1851*t1784;
  t2014 = t1891*t1820;
  t2037 = t2013 + t2014;
  p_output1[0]=17.8542*(0. + t108 + t1143 + t1156 + 0.1351*t1172 + 0.0179*t1194 + var1[2]) + 11.4777*(0. + t1143 + t1156 - 0.0343*t1194 + t1269 + t1287 + 0.135*t1316 - 0.049*t1336 + var1[2]) + 54.1512*(0. + t1143 + t1156 + t1269 + t1287 + 0.1708*t1316 + t1417 + t1469 - 0.0489*t1482 - 0.1498*t1521 + var1[2]) + 7.43598*(0. + t1143 + t1156 + t1269 + t1287 + 0.1327*t1316 + t1417 + t1469 + t1596 + t1621 - 0.233*t1644 - 0.0169*t1666 + var1[2]) + 5.66037*(0. + t1143 + t1156 + t1269 + t1287 + 0.1303*t1316 + t1417 + t1469 + t1596 + t1621 + t1746 + t1772 - 0.0004*t1784 - 0.4541*t1820 + var1[2]) + 7.67142*(0. + t1143 + t1156 + t1269 + t1287 + 0.1318*t1316 + t1417 + t1469 + t1596 + t1621 + t1746 + t1772 + t1934 + t1972 - 0.816*t2004 - 0.0122*t2037 + var1[2]) + 17.8542*(0. + t106 + t108 + t152 - 0.1351*t181 + 0.0179*t204 + var1[2]) + 1.4715*(0. + t1143 + t1156 + t1269 + t1287 + 0.1306*t1316 + t1417 + t1469 + t1596 + t1621 + t1746 + t1772 + t1934 + t1972 + t2037*(0. - 0.0216*t2113 - 1.1135*t2136) + t2004*(0. - 1.1135*t2113 + 0.0216*t2136) + 0.0059*(t2037*t2084 + t2004*t2136) - 1.1182*(t2004*t2084 - 1.*t2037*t2136) + var1[2]) + 11.4777*(0. + t106 + t152 - 0.0343*t204 + t253 + t263 - 0.135*t273 - 0.049*t330 + var1[2]) + 54.1512*(0. + t106 + t152 + t253 + t263 - 0.1708*t273 + t402 + t432 - 0.0489*t452 - 0.1498*t475 + var1[2]) + 101.3373*(0.0284*t14*t23 - 0.0507*t57 + var1[2]) + 7.43598*(0. + t106 + t152 + t253 + t263 - 0.1327*t273 + t402 + t432 + t548 + t597 - 0.233*t605 - 0.0169*t628 + var1[2]) + 5.66037*(0. + t106 + t152 + t253 + t263 - 0.1303*t273 + t402 + t432 + t548 + t597 + t722 + t747 - 0.0004*t775 - 0.4541*t804 + var1[2]) + 7.67142*(0. + t106 + t152 + t253 + t263 - 0.1318*t273 + t402 + t432 + t548 + t597 + t722 + t747 + t881 + t891 - 0.816*t905 - 0.0122*t918 + var1[2]) + 1.4715*(0. + t106 + t152 + t253 + t263 - 0.1306*t273 + t402 + t432 + t548 + t597 + t722 + t747 + t881 + t891 + t918*(0. - 0.0216*t967 - 1.1135*t988) + t905*(0. - 1.1135*t967 + 0.0216*t988) + 0.0059*(t918*t949 + t905*t988) - 1.1182*(t905*t949 - 1.*t918*t988) + var1[2]);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "PotentialEnergy_mex.hh"

namespace SymExpression
{

void PotentialEnergy_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
