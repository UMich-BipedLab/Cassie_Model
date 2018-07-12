/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:33:55 GMT-04:00
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
  double t203;
  double t257;
  double t126;
  double t212;
  double t274;
  double t393;
  double t245;
  double t287;
  double t312;
  double t121;
  double t416;
  double t417;
  double t425;
  double t519;
  double t391;
  double t437;
  double t446;
  double t97;
  double t522;
  double t553;
  double t554;
  double t561;
  double t571;
  double t580;
  double t585;
  double t586;
  double t610;
  double t669;
  double t467;
  double t611;
  double t617;
  double t58;
  double t710;
  double t755;
  double t764;
  double t845;
  double t656;
  double t771;
  double t829;
  double t56;
  double t849;
  double t878;
  double t885;
  double t911;
  double t838;
  double t891;
  double t902;
  double t52;
  double t913;
  double t917;
  double t921;
  double t39;
  double t1043;
  double t1056;
  double t1059;
  double t1063;
  double t1065;
  double t1081;
  double t1060;
  double t1083;
  double t1145;
  double t1165;
  double t1166;
  double t1173;
  double t1220;
  double t1229;
  double t1239;
  double t1164;
  double t1244;
  double t1245;
  double t1293;
  double t1302;
  double t1347;
  double t1276;
  double t1350;
  double t1368;
  double t1386;
  double t1410;
  double t1413;
  double t958;
  double t1374;
  double t1420;
  double t1434;
  double t1462;
  double t1471;
  double t1481;
  double t1587;
  double t1591;
  double t1602;
  double t1634;
  double t1637;
  double t1643;
  double t1651;
  double t1680;
  double t1695;
  double t1623;
  double t1734;
  double t1735;
  double t1807;
  double t1822;
  double t1827;
  double t1778;
  double t1828;
  double t1841;
  double t1849;
  double t1856;
  double t1877;
  double t1848;
  double t1882;
  double t1886;
  double t1906;
  double t1912;
  double t1935;
  double t903;
  double t939;
  double t941;
  double t995;
  double t1004;
  double t1007;
  double t1435;
  double t1489;
  double t1498;
  double t1522;
  double t1525;
  double t1563;
  double t1889;
  double t1944;
  double t1950;
  double t1961;
  double t1964;
  double t1970;
  double t2192;
  double t2205;
  double t2461;
  double t2470;
  double t2622;
  double t2638;
  double t2740;
  double t2747;
  double t2860;
  double t2870;
  double t2954;
  double t2957;
  double t2024;
  double t2044;
  double t2047;
  double t2208;
  double t2241;
  double t2252;
  double t2276;
  double t2298;
  double t2349;
  double t2377;
  double t2381;
  double t2401;
  double t2434;
  double t2437;
  double t2438;
  double t2483;
  double t2484;
  double t2495;
  double t2577;
  double t2588;
  double t2594;
  double t2656;
  double t2664;
  double t2670;
  double t2691;
  double t2696;
  double t2710;
  double t2762;
  double t2781;
  double t2817;
  double t2834;
  double t2852;
  double t2855;
  double t2873;
  double t2877;
  double t2880;
  double t2888;
  double t2889;
  double t2940;
  double t2970;
  double t2974;
  double t2979;
  double t3020;
  double t3025;
  double t3028;
  double t2064;
  double t2073;
  double t2081;
  double t2082;
  double t2095;
  double t2096;
  t203 = Cos(var1[5]);
  t257 = Sin(var1[3]);
  t126 = Cos(var1[3]);
  t212 = Sin(var1[4]);
  t274 = Sin(var1[5]);
  t393 = Sin(var1[13]);
  t245 = t126*t203*t212;
  t287 = t257*t274;
  t312 = t245 + t287;
  t121 = Cos(var1[13]);
  t416 = -1.*t203*t257;
  t417 = t126*t212*t274;
  t425 = t416 + t417;
  t519 = Cos(var1[15]);
  t391 = t121*t312;
  t437 = -1.*t393*t425;
  t446 = t391 + t437;
  t97 = Sin(var1[15]);
  t522 = Cos(var1[14]);
  t553 = Cos(var1[4]);
  t554 = t522*t126*t553;
  t561 = Sin(var1[14]);
  t571 = t393*t312;
  t580 = t121*t425;
  t585 = t571 + t580;
  t586 = t561*t585;
  t610 = t554 + t586;
  t669 = Cos(var1[16]);
  t467 = t97*t446;
  t611 = t519*t610;
  t617 = t467 + t611;
  t58 = Sin(var1[16]);
  t710 = t519*t446;
  t755 = -1.*t97*t610;
  t764 = t710 + t755;
  t845 = Cos(var1[17]);
  t656 = -1.*t58*t617;
  t771 = t669*t764;
  t829 = t656 + t771;
  t56 = Sin(var1[17]);
  t849 = t669*t617;
  t878 = t58*t764;
  t885 = t849 + t878;
  t911 = Cos(var1[18]);
  t838 = t56*t829;
  t891 = t845*t885;
  t902 = t838 + t891;
  t52 = Sin(var1[18]);
  t913 = t845*t829;
  t917 = -1.*t56*t885;
  t921 = t913 + t917;
  t39 = Cos(var1[19]);
  t1043 = t203*t257*t212;
  t1056 = -1.*t126*t274;
  t1059 = t1043 + t1056;
  t1063 = t126*t203;
  t1065 = t257*t212*t274;
  t1081 = t1063 + t1065;
  t1060 = t121*t1059;
  t1083 = -1.*t393*t1081;
  t1145 = t1060 + t1083;
  t1165 = t522*t553*t257;
  t1166 = t393*t1059;
  t1173 = t121*t1081;
  t1220 = t1166 + t1173;
  t1229 = t561*t1220;
  t1239 = t1165 + t1229;
  t1164 = t97*t1145;
  t1244 = t519*t1239;
  t1245 = t1164 + t1244;
  t1293 = t519*t1145;
  t1302 = -1.*t97*t1239;
  t1347 = t1293 + t1302;
  t1276 = -1.*t58*t1245;
  t1350 = t669*t1347;
  t1368 = t1276 + t1350;
  t1386 = t669*t1245;
  t1410 = t58*t1347;
  t1413 = t1386 + t1410;
  t958 = Sin(var1[19]);
  t1374 = t56*t1368;
  t1420 = t845*t1413;
  t1434 = t1374 + t1420;
  t1462 = t845*t1368;
  t1471 = -1.*t56*t1413;
  t1481 = t1462 + t1471;
  t1587 = t121*t553*t203;
  t1591 = -1.*t553*t393*t274;
  t1602 = t1587 + t1591;
  t1634 = -1.*t522*t212;
  t1637 = t553*t203*t393;
  t1643 = t121*t553*t274;
  t1651 = t1637 + t1643;
  t1680 = t561*t1651;
  t1695 = t1634 + t1680;
  t1623 = t97*t1602;
  t1734 = t519*t1695;
  t1735 = t1623 + t1734;
  t1807 = t519*t1602;
  t1822 = -1.*t97*t1695;
  t1827 = t1807 + t1822;
  t1778 = -1.*t58*t1735;
  t1828 = t669*t1827;
  t1841 = t1778 + t1828;
  t1849 = t669*t1735;
  t1856 = t58*t1827;
  t1877 = t1849 + t1856;
  t1848 = t56*t1841;
  t1882 = t845*t1877;
  t1886 = t1848 + t1882;
  t1906 = t845*t1841;
  t1912 = -1.*t56*t1877;
  t1935 = t1906 + t1912;
  t903 = -1.*t52*t902;
  t939 = t911*t921;
  t941 = t903 + t939;
  t995 = t911*t902;
  t1004 = t52*t921;
  t1007 = t995 + t1004;
  t1435 = -1.*t52*t1434;
  t1489 = t911*t1481;
  t1498 = t1435 + t1489;
  t1522 = t911*t1434;
  t1525 = t52*t1481;
  t1563 = t1522 + t1525;
  t1889 = -1.*t52*t1886;
  t1944 = t911*t1935;
  t1950 = t1889 + t1944;
  t1961 = t911*t1886;
  t1964 = t52*t1935;
  t1970 = t1961 + t1964;
  t2192 = -1.*t522;
  t2205 = 1. + t2192;
  t2461 = -1.*t519;
  t2470 = 1. + t2461;
  t2622 = -1.*t669;
  t2638 = 1. + t2622;
  t2740 = -1.*t845;
  t2747 = 1. + t2740;
  t2860 = -1.*t911;
  t2870 = 1. + t2860;
  t2954 = -1.*t39;
  t2957 = 1. + t2954;
  t2024 = t958*t941;
  t2044 = t39*t1007;
  t2047 = t2024 + t2044;
  t2208 = -0.049*t2205;
  t2241 = -0.135*t561;
  t2252 = 0. + t2208 + t2241;
  t2276 = 0.135*t393;
  t2298 = 0. + t2276;
  t2349 = -1.*t121;
  t2377 = 1. + t2349;
  t2381 = -0.135*t2377;
  t2401 = 0. + t2381;
  t2434 = -0.135*t2205;
  t2437 = 0.049*t561;
  t2438 = 0. + t2434 + t2437;
  t2483 = -0.09*t2470;
  t2484 = 0.049*t97;
  t2495 = 0. + t2483 + t2484;
  t2577 = -0.049*t2470;
  t2588 = -0.09*t97;
  t2594 = 0. + t2577 + t2588;
  t2656 = -0.049*t2638;
  t2664 = -0.21*t58;
  t2670 = 0. + t2656 + t2664;
  t2691 = -0.21*t2638;
  t2696 = 0.049*t58;
  t2710 = 0. + t2691 + t2696;
  t2762 = -0.2707*t2747;
  t2781 = 0.0016*t56;
  t2817 = 0. + t2762 + t2781;
  t2834 = -0.0016*t2747;
  t2852 = -0.2707*t56;
  t2855 = 0. + t2834 + t2852;
  t2873 = 0.0184*t2870;
  t2877 = -0.7055*t52;
  t2880 = 0. + t2873 + t2877;
  t2888 = -0.7055*t2870;
  t2889 = -0.0184*t52;
  t2940 = 0. + t2888 + t2889;
  t2970 = -1.1135*t2957;
  t2974 = 0.0216*t958;
  t2979 = 0. + t2970 + t2974;
  t3020 = -0.0216*t2957;
  t3025 = -1.1135*t958;
  t3028 = 0. + t3020 + t3025;
  t2064 = t958*t1498;
  t2073 = t39*t1563;
  t2081 = t2064 + t2073;
  t2082 = t958*t1950;
  t2095 = t39*t1970;
  t2096 = t2082 + t2095;
  p_output1[0]=-1.*t39*t941 + t1007*t958;
  p_output1[1]=-1.*t1498*t39 + t1563*t958;
  p_output1[2]=-1.*t1950*t39 + t1970*t958;
  p_output1[3]=0.;
  p_output1[4]=t2047;
  p_output1[5]=t2081;
  p_output1[6]=t2096;
  p_output1[7]=0.;
  p_output1[8]=t126*t553*t561 - 1.*t522*t585;
  p_output1[9]=-1.*t1220*t522 + t257*t553*t561;
  p_output1[10]=-1.*t1651*t522 - 1.*t212*t561;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.0216*t2047 + t1007*t3028 + t2298*t312 + t2401*t425 + t2495*t446 + t126*t2252*t553 + t2438*t585 - 0.1305*(-1.*t126*t553*t561 + t522*t585) + t2594*t610 + t2670*t617 + t2710*t764 + t2817*t829 + t2855*t885 + t2880*t902 + t2940*t921 + t2979*t941 - 1.1135*(t39*t941 - 1.*t1007*t958) + var1[0];
  p_output1[13]=0. - 0.0216*t2081 + t1059*t2298 + t1081*t2401 + t1220*t2438 + t1145*t2495 + t1239*t2594 + t1245*t2670 + t1347*t2710 + t1368*t2817 + t1413*t2855 + t1434*t2880 + t1481*t2940 + t1498*t2979 + t1563*t3028 + t2252*t257*t553 - 0.1305*(t1220*t522 - 1.*t257*t553*t561) - 1.1135*(t1498*t39 - 1.*t1563*t958) + var1[1];
  p_output1[14]=0. - 0.0216*t2096 - 1.*t212*t2252 + t1651*t2438 + t1602*t2495 + t1695*t2594 + t1735*t2670 + t1827*t2710 + t1841*t2817 + t1877*t2855 + t1886*t2880 + t1935*t2940 + t1950*t2979 + t1970*t3028 + t203*t2298*t553 + t2401*t274*t553 - 0.1305*(t1651*t522 + t212*t561) - 1.1135*(t1950*t39 - 1.*t1970*t958) + var1[2];
  p_output1[15]=1.;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 4, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "H_toe_joint_right_mex.hh"

namespace SymExpression
{

void H_toe_joint_right_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
