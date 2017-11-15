/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:52 GMT-05:00
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
  double t80;
  double t104;
  double t78;
  double t82;
  double t133;
  double t464;
  double t84;
  double t221;
  double t241;
  double t75;
  double t469;
  double t470;
  double t516;
  double t560;
  double t384;
  double t518;
  double t521;
  double t73;
  double t574;
  double t629;
  double t720;
  double t721;
  double t788;
  double t835;
  double t858;
  double t931;
  double t938;
  double t1113;
  double t559;
  double t941;
  double t960;
  double t54;
  double t1120;
  double t1148;
  double t1160;
  double t1291;
  double t1049;
  double t1163;
  double t1189;
  double t51;
  double t1292;
  double t1327;
  double t1343;
  double t28;
  double t1710;
  double t1724;
  double t1730;
  double t1734;
  double t1740;
  double t1750;
  double t1732;
  double t1761;
  double t1762;
  double t1801;
  double t1804;
  double t1805;
  double t1812;
  double t1815;
  double t1836;
  double t1799;
  double t1843;
  double t1849;
  double t1859;
  double t1860;
  double t1888;
  double t1405;
  double t1854;
  double t1907;
  double t1926;
  double t1928;
  double t1929;
  double t1938;
  double t2001;
  double t2005;
  double t2006;
  double t2021;
  double t2022;
  double t2026;
  double t2030;
  double t2034;
  double t2038;
  double t2018;
  double t2044;
  double t2083;
  double t2088;
  double t2106;
  double t2121;
  double t2085;
  double t2127;
  double t2140;
  double t2165;
  double t2167;
  double t2190;
  double t1200;
  double t1346;
  double t1361;
  double t1431;
  double t1477;
  double t1529;
  double t1927;
  double t1940;
  double t1943;
  double t1961;
  double t1974;
  double t1980;
  double t2162;
  double t2196;
  double t2197;
  double t2217;
  double t2255;
  double t2260;
  double t2628;
  double t2630;
  double t2944;
  double t2974;
  double t3459;
  double t3486;
  double t3739;
  double t3836;
  double t4019;
  double t4063;
  double t2311;
  double t2347;
  double t2358;
  double t2638;
  double t2640;
  double t2643;
  double t2661;
  double t2673;
  double t2785;
  double t2789;
  double t2832;
  double t2857;
  double t2864;
  double t2865;
  double t2868;
  double t2982;
  double t3017;
  double t3085;
  double t3252;
  double t3282;
  double t3360;
  double t3524;
  double t3534;
  double t3585;
  double t3662;
  double t3673;
  double t3703;
  double t3856;
  double t3872;
  double t3879;
  double t3925;
  double t3943;
  double t3966;
  double t4070;
  double t4075;
  double t4081;
  double t4119;
  double t4160;
  double t4162;
  double t2424;
  double t2440;
  double t2452;
  double t2464;
  double t2468;
  double t2484;
  t80 = Cos(var1[5]);
  t104 = Sin(var1[3]);
  t78 = Cos(var1[3]);
  t82 = Sin(var1[4]);
  t133 = Sin(var1[5]);
  t464 = Sin(var1[13]);
  t84 = t78*t80*t82;
  t221 = t104*t133;
  t241 = t84 + t221;
  t75 = Cos(var1[13]);
  t469 = -1.*t80*t104;
  t470 = t78*t82*t133;
  t516 = t469 + t470;
  t560 = Cos(var1[15]);
  t384 = t75*t241;
  t518 = -1.*t464*t516;
  t521 = t384 + t518;
  t73 = Sin(var1[15]);
  t574 = Cos(var1[14]);
  t629 = Cos(var1[4]);
  t720 = t574*t78*t629;
  t721 = Sin(var1[14]);
  t788 = t464*t241;
  t835 = t75*t516;
  t858 = t788 + t835;
  t931 = t721*t858;
  t938 = t720 + t931;
  t1113 = Cos(var1[16]);
  t559 = t73*t521;
  t941 = t560*t938;
  t960 = t559 + t941;
  t54 = Sin(var1[16]);
  t1120 = t560*t521;
  t1148 = -1.*t73*t938;
  t1160 = t1120 + t1148;
  t1291 = Cos(var1[17]);
  t1049 = -1.*t54*t960;
  t1163 = t1113*t1160;
  t1189 = t1049 + t1163;
  t51 = Sin(var1[17]);
  t1292 = t1113*t960;
  t1327 = t54*t1160;
  t1343 = t1292 + t1327;
  t28 = Sin(var1[18]);
  t1710 = t80*t104*t82;
  t1724 = -1.*t78*t133;
  t1730 = t1710 + t1724;
  t1734 = t78*t80;
  t1740 = t104*t82*t133;
  t1750 = t1734 + t1740;
  t1732 = t75*t1730;
  t1761 = -1.*t464*t1750;
  t1762 = t1732 + t1761;
  t1801 = t574*t629*t104;
  t1804 = t464*t1730;
  t1805 = t75*t1750;
  t1812 = t1804 + t1805;
  t1815 = t721*t1812;
  t1836 = t1801 + t1815;
  t1799 = t73*t1762;
  t1843 = t560*t1836;
  t1849 = t1799 + t1843;
  t1859 = t560*t1762;
  t1860 = -1.*t73*t1836;
  t1888 = t1859 + t1860;
  t1405 = Cos(var1[18]);
  t1854 = -1.*t54*t1849;
  t1907 = t1113*t1888;
  t1926 = t1854 + t1907;
  t1928 = t1113*t1849;
  t1929 = t54*t1888;
  t1938 = t1928 + t1929;
  t2001 = t75*t629*t80;
  t2005 = -1.*t629*t464*t133;
  t2006 = t2001 + t2005;
  t2021 = -1.*t574*t82;
  t2022 = t629*t80*t464;
  t2026 = t75*t629*t133;
  t2030 = t2022 + t2026;
  t2034 = t721*t2030;
  t2038 = t2021 + t2034;
  t2018 = t73*t2006;
  t2044 = t560*t2038;
  t2083 = t2018 + t2044;
  t2088 = t560*t2006;
  t2106 = -1.*t73*t2038;
  t2121 = t2088 + t2106;
  t2085 = -1.*t54*t2083;
  t2127 = t1113*t2121;
  t2140 = t2085 + t2127;
  t2165 = t1113*t2083;
  t2167 = t54*t2121;
  t2190 = t2165 + t2167;
  t1200 = t51*t1189;
  t1346 = t1291*t1343;
  t1361 = t1200 + t1346;
  t1431 = t1291*t1189;
  t1477 = -1.*t51*t1343;
  t1529 = t1431 + t1477;
  t1927 = t51*t1926;
  t1940 = t1291*t1938;
  t1943 = t1927 + t1940;
  t1961 = t1291*t1926;
  t1974 = -1.*t51*t1938;
  t1980 = t1961 + t1974;
  t2162 = t51*t2140;
  t2196 = t1291*t2190;
  t2197 = t2162 + t2196;
  t2217 = t1291*t2140;
  t2255 = -1.*t51*t2190;
  t2260 = t2217 + t2255;
  t2628 = -1.*t574;
  t2630 = 1. + t2628;
  t2944 = -1.*t560;
  t2974 = 1. + t2944;
  t3459 = -1.*t1113;
  t3486 = 1. + t3459;
  t3739 = -1.*t1291;
  t3836 = 1. + t3739;
  t4019 = -1.*t1405;
  t4063 = 1. + t4019;
  t2311 = t1405*t1361;
  t2347 = t28*t1529;
  t2358 = t2311 + t2347;
  t2638 = -0.049*t2630;
  t2640 = -0.135*t721;
  t2643 = 0. + t2638 + t2640;
  t2661 = 0.135*t464;
  t2673 = 0. + t2661;
  t2785 = -1.*t75;
  t2789 = 1. + t2785;
  t2832 = -0.135*t2789;
  t2857 = 0. + t2832;
  t2864 = -0.135*t2630;
  t2865 = 0.049*t721;
  t2868 = 0. + t2864 + t2865;
  t2982 = -0.09*t2974;
  t3017 = 0.049*t73;
  t3085 = 0. + t2982 + t3017;
  t3252 = -0.049*t2974;
  t3282 = -0.09*t73;
  t3360 = 0. + t3252 + t3282;
  t3524 = -0.049*t3486;
  t3534 = -0.21*t54;
  t3585 = 0. + t3524 + t3534;
  t3662 = -0.21*t3486;
  t3673 = 0.049*t54;
  t3703 = 0. + t3662 + t3673;
  t3856 = -0.2707*t3836;
  t3872 = 0.0016*t51;
  t3879 = 0. + t3856 + t3872;
  t3925 = -0.0016*t3836;
  t3943 = -0.2707*t51;
  t3966 = 0. + t3925 + t3943;
  t4070 = 0.0184*t4063;
  t4075 = -0.7055*t28;
  t4081 = 0. + t4070 + t4075;
  t4119 = -0.7055*t4063;
  t4160 = -0.0184*t28;
  t4162 = 0. + t4119 + t4160;
  t2424 = t1405*t1943;
  t2440 = t28*t1980;
  t2452 = t2424 + t2440;
  t2464 = t1405*t2197;
  t2468 = t28*t2260;
  t2484 = t2464 + t2468;
  p_output1[0]=-1.*t1405*t1529 + t1361*t28;
  p_output1[1]=-1.*t1405*t1980 + t1943*t28;
  p_output1[2]=-1.*t1405*t2260 + t2197*t28;
  p_output1[3]=0.;
  p_output1[4]=t2358;
  p_output1[5]=t2452;
  p_output1[6]=t2484;
  p_output1[7]=0.;
  p_output1[8]=t629*t721*t78 - 1.*t574*t858;
  p_output1[9]=-1.*t1812*t574 + t104*t629*t721;
  p_output1[10]=-1.*t2030*t574 - 1.*t721*t82;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.0184*t2358 + t241*t2673 - 0.7055*(t1405*t1529 - 1.*t1361*t28) + t1160*t3703 + t1189*t3879 + t1343*t3966 + t1361*t4081 + t1529*t4162 + t2857*t516 + t3085*t521 + t2643*t629*t78 + t2868*t858 - 0.1305*(-1.*t629*t721*t78 + t574*t858) + t3360*t938 + t3585*t960 + var1[0];
  p_output1[13]=0. + 0.0184*t2452 + t1730*t2673 - 0.7055*(t1405*t1980 - 1.*t1943*t28) + t1750*t2857 + t1812*t2868 + t1762*t3085 + t1836*t3360 + t1849*t3585 + t1888*t3703 + t1926*t3879 + t1938*t3966 + t1943*t4081 + t1980*t4162 + t104*t2643*t629 - 0.1305*(t1812*t574 - 1.*t104*t629*t721) + var1[1];
  p_output1[14]=0. + 0.0184*t2484 - 0.7055*(t1405*t2260 - 1.*t2197*t28) + t2030*t2868 + t2006*t3085 + t2038*t3360 + t2083*t3585 + t2121*t3703 + t2140*t3879 + t2190*t3966 + t2197*t4081 + t2260*t4162 + t133*t2857*t629 + t2673*t629*t80 - 1.*t2643*t82 - 0.1305*(t2030*t574 + t721*t82) + var1[2];
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

#include "H_ankle_joint_right_mex.hh"

namespace SymExpression
{

void H_ankle_joint_right_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
