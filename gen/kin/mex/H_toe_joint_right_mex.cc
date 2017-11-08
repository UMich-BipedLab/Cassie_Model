/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:12:01 GMT-05:00
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
  double t222;
  double t276;
  double t206;
  double t228;
  double t284;
  double t506;
  double t249;
  double t338;
  double t374;
  double t151;
  double t514;
  double t522;
  double t540;
  double t755;
  double t479;
  double t595;
  double t659;
  double t150;
  double t762;
  double t770;
  double t777;
  double t786;
  double t794;
  double t799;
  double t804;
  double t811;
  double t816;
  double t829;
  double t707;
  double t818;
  double t826;
  double t69;
  double t832;
  double t835;
  double t838;
  double t860;
  double t827;
  double t843;
  double t846;
  double t50;
  double t882;
  double t891;
  double t900;
  double t48;
  double t1014;
  double t1020;
  double t1023;
  double t1036;
  double t1048;
  double t1139;
  double t1029;
  double t1190;
  double t1251;
  double t1271;
  double t1294;
  double t1298;
  double t1317;
  double t1372;
  double t1399;
  double t1258;
  double t1401;
  double t1420;
  double t1447;
  double t1460;
  double t1489;
  double t980;
  double t1425;
  double t1514;
  double t1575;
  double t1620;
  double t1684;
  double t1687;
  double t1907;
  double t1925;
  double t1943;
  double t1965;
  double t1970;
  double t2005;
  double t2011;
  double t2048;
  double t2055;
  double t1952;
  double t2066;
  double t2067;
  double t2070;
  double t2075;
  double t2081;
  double t2069;
  double t2082;
  double t2110;
  double t2124;
  double t2144;
  double t2154;
  double t854;
  double t927;
  double t938;
  double t986;
  double t987;
  double t989;
  double t1588;
  double t1727;
  double t1728;
  double t1848;
  double t1855;
  double t1882;
  double t2122;
  double t2178;
  double t2196;
  double t2313;
  double t2338;
  double t2351;
  double t2930;
  double t2943;
  double t3400;
  double t3455;
  double t3617;
  double t3647;
  double t3780;
  double t3793;
  double t4048;
  double t4181;
  double t2462;
  double t2465;
  double t2468;
  double t2957;
  double t3019;
  double t3025;
  double t3104;
  double t3116;
  double t3184;
  double t3217;
  double t3218;
  double t3219;
  double t3271;
  double t3320;
  double t3364;
  double t3470;
  double t3480;
  double t3494;
  double t3563;
  double t3590;
  double t3595;
  double t3654;
  double t3660;
  double t3664;
  double t3674;
  double t3694;
  double t3730;
  double t3836;
  double t3851;
  double t3861;
  double t3912;
  double t3920;
  double t3925;
  double t4244;
  double t4289;
  double t4293;
  double t4449;
  double t4454;
  double t4456;
  double t2515;
  double t2535;
  double t2554;
  double t2581;
  double t2591;
  double t2696;
  t222 = Cos(var1[5]);
  t276 = Sin(var1[3]);
  t206 = Cos(var1[3]);
  t228 = Sin(var1[4]);
  t284 = Sin(var1[5]);
  t506 = Sin(var1[13]);
  t249 = t206*t222*t228;
  t338 = t276*t284;
  t374 = t249 + t338;
  t151 = Cos(var1[13]);
  t514 = -1.*t222*t276;
  t522 = t206*t228*t284;
  t540 = t514 + t522;
  t755 = Cos(var1[15]);
  t479 = t151*t374;
  t595 = -1.*t506*t540;
  t659 = t479 + t595;
  t150 = Sin(var1[15]);
  t762 = Cos(var1[14]);
  t770 = Cos(var1[4]);
  t777 = t762*t206*t770;
  t786 = Sin(var1[14]);
  t794 = t506*t374;
  t799 = t151*t540;
  t804 = t794 + t799;
  t811 = t786*t804;
  t816 = t777 + t811;
  t829 = Cos(var1[16]);
  t707 = t150*t659;
  t818 = t755*t816;
  t826 = t707 + t818;
  t69 = Sin(var1[16]);
  t832 = t755*t659;
  t835 = -1.*t150*t816;
  t838 = t832 + t835;
  t860 = Cos(var1[17]);
  t827 = -1.*t69*t826;
  t843 = t829*t838;
  t846 = t827 + t843;
  t50 = Sin(var1[17]);
  t882 = t829*t826;
  t891 = t69*t838;
  t900 = t882 + t891;
  t48 = Sin(var1[18]);
  t1014 = t222*t276*t228;
  t1020 = -1.*t206*t284;
  t1023 = t1014 + t1020;
  t1036 = t206*t222;
  t1048 = t276*t228*t284;
  t1139 = t1036 + t1048;
  t1029 = t151*t1023;
  t1190 = -1.*t506*t1139;
  t1251 = t1029 + t1190;
  t1271 = t762*t770*t276;
  t1294 = t506*t1023;
  t1298 = t151*t1139;
  t1317 = t1294 + t1298;
  t1372 = t786*t1317;
  t1399 = t1271 + t1372;
  t1258 = t150*t1251;
  t1401 = t755*t1399;
  t1420 = t1258 + t1401;
  t1447 = t755*t1251;
  t1460 = -1.*t150*t1399;
  t1489 = t1447 + t1460;
  t980 = Cos(var1[18]);
  t1425 = -1.*t69*t1420;
  t1514 = t829*t1489;
  t1575 = t1425 + t1514;
  t1620 = t829*t1420;
  t1684 = t69*t1489;
  t1687 = t1620 + t1684;
  t1907 = t151*t770*t222;
  t1925 = -1.*t770*t506*t284;
  t1943 = t1907 + t1925;
  t1965 = -1.*t762*t228;
  t1970 = t770*t222*t506;
  t2005 = t151*t770*t284;
  t2011 = t1970 + t2005;
  t2048 = t786*t2011;
  t2055 = t1965 + t2048;
  t1952 = t150*t1943;
  t2066 = t755*t2055;
  t2067 = t1952 + t2066;
  t2070 = t755*t1943;
  t2075 = -1.*t150*t2055;
  t2081 = t2070 + t2075;
  t2069 = -1.*t69*t2067;
  t2082 = t829*t2081;
  t2110 = t2069 + t2082;
  t2124 = t829*t2067;
  t2144 = t69*t2081;
  t2154 = t2124 + t2144;
  t854 = t50*t846;
  t927 = t860*t900;
  t938 = t854 + t927;
  t986 = t860*t846;
  t987 = -1.*t50*t900;
  t989 = t986 + t987;
  t1588 = t50*t1575;
  t1727 = t860*t1687;
  t1728 = t1588 + t1727;
  t1848 = t860*t1575;
  t1855 = -1.*t50*t1687;
  t1882 = t1848 + t1855;
  t2122 = t50*t2110;
  t2178 = t860*t2154;
  t2196 = t2122 + t2178;
  t2313 = t860*t2110;
  t2338 = -1.*t50*t2154;
  t2351 = t2313 + t2338;
  t2930 = -1.*t762;
  t2943 = 1. + t2930;
  t3400 = -1.*t755;
  t3455 = 1. + t3400;
  t3617 = -1.*t829;
  t3647 = 1. + t3617;
  t3780 = -1.*t860;
  t3793 = 1. + t3780;
  t4048 = -1.*t980;
  t4181 = 1. + t4048;
  t2462 = t980*t938;
  t2465 = t48*t989;
  t2468 = t2462 + t2465;
  t2957 = -0.049*t2943;
  t3019 = -0.135*t786;
  t3025 = 0. + t2957 + t3019;
  t3104 = 0.135*t506;
  t3116 = 0. + t3104;
  t3184 = -1.*t151;
  t3217 = 1. + t3184;
  t3218 = -0.135*t3217;
  t3219 = 0. + t3218;
  t3271 = -0.135*t2943;
  t3320 = 0.049*t786;
  t3364 = 0. + t3271 + t3320;
  t3470 = -0.09*t3455;
  t3480 = 0.049*t150;
  t3494 = 0. + t3470 + t3480;
  t3563 = -0.049*t3455;
  t3590 = -0.09*t150;
  t3595 = 0. + t3563 + t3590;
  t3654 = -0.049*t3647;
  t3660 = -0.21*t69;
  t3664 = 0. + t3654 + t3660;
  t3674 = -0.21*t3647;
  t3694 = 0.049*t69;
  t3730 = 0. + t3674 + t3694;
  t3836 = -0.2707*t3793;
  t3851 = 0.0016*t50;
  t3861 = 0. + t3836 + t3851;
  t3912 = -0.0016*t3793;
  t3920 = -0.2707*t50;
  t3925 = 0. + t3912 + t3920;
  t4244 = 0.0184*t4181;
  t4289 = -0.7055*t48;
  t4293 = 0. + t4244 + t4289;
  t4449 = -0.7055*t4181;
  t4454 = -0.0184*t48;
  t4456 = 0. + t4449 + t4454;
  t2515 = t980*t1728;
  t2535 = t48*t1882;
  t2554 = t2515 + t2535;
  t2581 = t980*t2196;
  t2591 = t48*t2351;
  t2696 = t2581 + t2591;
  p_output1[0]=t48*t938 - 1.*t980*t989;
  p_output1[1]=t1728*t48 - 1.*t1882*t980;
  p_output1[2]=t2196*t48 - 1.*t2351*t980;
  p_output1[3]=0.;
  p_output1[4]=t2468;
  p_output1[5]=t2554;
  p_output1[6]=t2696;
  p_output1[7]=0.;
  p_output1[8]=t206*t770*t786 - 1.*t762*t804;
  p_output1[9]=-1.*t1317*t762 + t276*t770*t786;
  p_output1[10]=-1.*t2011*t762 - 1.*t228*t786;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.0216*t2468 + t3116*t374 + t3219*t540 + t3494*t659 + t206*t3025*t770 + t3364*t804 - 0.1305*(-1.*t206*t770*t786 + t762*t804) + t3595*t816 + t3664*t826 + t3730*t838 + t3861*t846 + t3925*t900 + t4293*t938 + t4456*t989 - 1.1135*(-1.*t48*t938 + t980*t989) + var1[0];
  p_output1[13]=0. - 0.0216*t2554 + t1023*t3116 + t1139*t3219 + t1317*t3364 + t1251*t3494 + t1399*t3595 + t1420*t3664 + t1489*t3730 + t1575*t3861 + t1687*t3925 + t1728*t4293 + t1882*t4456 + t276*t3025*t770 - 0.1305*(t1317*t762 - 1.*t276*t770*t786) - 1.1135*(-1.*t1728*t48 + t1882*t980) + var1[1];
  p_output1[14]=0. - 0.0216*t2696 - 1.*t228*t3025 + t2011*t3364 + t1943*t3494 + t2055*t3595 + t2067*t3664 + t2081*t3730 + t2110*t3861 + t2154*t3925 + t2196*t4293 + t2351*t4456 + t222*t3116*t770 + t284*t3219*t770 - 0.1305*(t2011*t762 + t228*t786) - 1.1135*(-1.*t2196*t48 + t2351*t980) + var1[2];
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
