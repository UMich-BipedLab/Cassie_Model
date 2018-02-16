/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:15:46 GMT-05:00
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
  double t348;
  double t395;
  double t204;
  double t358;
  double t430;
  double t518;
  double t388;
  double t441;
  double t484;
  double t183;
  double t520;
  double t564;
  double t625;
  double t632;
  double t508;
  double t628;
  double t630;
  double t175;
  double t652;
  double t663;
  double t758;
  double t813;
  double t892;
  double t911;
  double t916;
  double t921;
  double t941;
  double t987;
  double t631;
  double t949;
  double t972;
  double t134;
  double t1000;
  double t1043;
  double t1051;
  double t131;
  double t1518;
  double t1550;
  double t1557;
  double t1562;
  double t1583;
  double t1593;
  double t1560;
  double t1608;
  double t1615;
  double t1683;
  double t1714;
  double t1742;
  double t1770;
  double t1840;
  double t1851;
  double t1303;
  double t1665;
  double t1853;
  double t1859;
  double t1941;
  double t1961;
  double t1970;
  double t2432;
  double t2459;
  double t2527;
  double t2569;
  double t2572;
  double t2576;
  double t2583;
  double t2587;
  double t2597;
  double t2559;
  double t2662;
  double t2696;
  double t2714;
  double t2718;
  double t2761;
  double t981;
  double t1094;
  double t1104;
  double t1401;
  double t1410;
  double t1471;
  double t1897;
  double t2113;
  double t2131;
  double t2192;
  double t2250;
  double t2329;
  double t2704;
  double t2763;
  double t2792;
  double t2981;
  double t3034;
  double t3057;
  double t3808;
  double t3822;
  double t4194;
  double t4291;
  double t5249;
  double t5276;
  double t5951;
  double t6615;
  double t3185;
  double t3192;
  double t3218;
  double t3853;
  double t3868;
  double t3869;
  double t3922;
  double t3956;
  double t4052;
  double t4054;
  double t4060;
  double t4072;
  double t4139;
  double t4143;
  double t4165;
  double t4293;
  double t4311;
  double t4364;
  double t4833;
  double t4848;
  double t4897;
  double t5313;
  double t5324;
  double t5609;
  double t5641;
  double t5689;
  double t5729;
  double t6622;
  double t6646;
  double t7083;
  double t8108;
  double t8152;
  double t8159;
  double t3326;
  double t3403;
  double t3446;
  double t3502;
  double t3525;
  double t3545;
  t348 = Cos(var1[5]);
  t395 = Sin(var1[3]);
  t204 = Cos(var1[3]);
  t358 = Sin(var1[4]);
  t430 = Sin(var1[5]);
  t518 = Sin(var1[13]);
  t388 = t204*t348*t358;
  t441 = t395*t430;
  t484 = t388 + t441;
  t183 = Cos(var1[13]);
  t520 = -1.*t348*t395;
  t564 = t204*t358*t430;
  t625 = t520 + t564;
  t632 = Cos(var1[15]);
  t508 = t183*t484;
  t628 = -1.*t518*t625;
  t630 = t508 + t628;
  t175 = Sin(var1[15]);
  t652 = Cos(var1[14]);
  t663 = Cos(var1[4]);
  t758 = t652*t204*t663;
  t813 = Sin(var1[14]);
  t892 = t518*t484;
  t911 = t183*t625;
  t916 = t892 + t911;
  t921 = t813*t916;
  t941 = t758 + t921;
  t987 = Cos(var1[16]);
  t631 = t175*t630;
  t949 = t632*t941;
  t972 = t631 + t949;
  t134 = Sin(var1[16]);
  t1000 = t632*t630;
  t1043 = -1.*t175*t941;
  t1051 = t1000 + t1043;
  t131 = Cos(var1[17]);
  t1518 = t348*t395*t358;
  t1550 = -1.*t204*t430;
  t1557 = t1518 + t1550;
  t1562 = t204*t348;
  t1583 = t395*t358*t430;
  t1593 = t1562 + t1583;
  t1560 = t183*t1557;
  t1608 = -1.*t518*t1593;
  t1615 = t1560 + t1608;
  t1683 = t652*t663*t395;
  t1714 = t518*t1557;
  t1742 = t183*t1593;
  t1770 = t1714 + t1742;
  t1840 = t813*t1770;
  t1851 = t1683 + t1840;
  t1303 = Sin(var1[17]);
  t1665 = t175*t1615;
  t1853 = t632*t1851;
  t1859 = t1665 + t1853;
  t1941 = t632*t1615;
  t1961 = -1.*t175*t1851;
  t1970 = t1941 + t1961;
  t2432 = t183*t663*t348;
  t2459 = -1.*t663*t518*t430;
  t2527 = t2432 + t2459;
  t2569 = -1.*t652*t358;
  t2572 = t663*t348*t518;
  t2576 = t183*t663*t430;
  t2583 = t2572 + t2576;
  t2587 = t813*t2583;
  t2597 = t2569 + t2587;
  t2559 = t175*t2527;
  t2662 = t632*t2597;
  t2696 = t2559 + t2662;
  t2714 = t632*t2527;
  t2718 = -1.*t175*t2597;
  t2761 = t2714 + t2718;
  t981 = -1.*t134*t972;
  t1094 = t987*t1051;
  t1104 = t981 + t1094;
  t1401 = t987*t972;
  t1410 = t134*t1051;
  t1471 = t1401 + t1410;
  t1897 = -1.*t134*t1859;
  t2113 = t987*t1970;
  t2131 = t1897 + t2113;
  t2192 = t987*t1859;
  t2250 = t134*t1970;
  t2329 = t2192 + t2250;
  t2704 = -1.*t134*t2696;
  t2763 = t987*t2761;
  t2792 = t2704 + t2763;
  t2981 = t987*t2696;
  t3034 = t134*t2761;
  t3057 = t2981 + t3034;
  t3808 = -1.*t652;
  t3822 = 1. + t3808;
  t4194 = -1.*t632;
  t4291 = 1. + t4194;
  t5249 = -1.*t987;
  t5276 = 1. + t5249;
  t5951 = -1.*t131;
  t6615 = 1. + t5951;
  t3185 = t1303*t1104;
  t3192 = t131*t1471;
  t3218 = t3185 + t3192;
  t3853 = -0.049*t3822;
  t3868 = -0.135*t813;
  t3869 = 0. + t3853 + t3868;
  t3922 = 0.135*t518;
  t3956 = 0. + t3922;
  t4052 = -1.*t183;
  t4054 = 1. + t4052;
  t4060 = -0.135*t4054;
  t4072 = 0. + t4060;
  t4139 = -0.135*t3822;
  t4143 = 0.049*t813;
  t4165 = 0. + t4139 + t4143;
  t4293 = -0.09*t4291;
  t4311 = 0.049*t175;
  t4364 = 0. + t4293 + t4311;
  t4833 = -0.049*t4291;
  t4848 = -0.09*t175;
  t4897 = 0. + t4833 + t4848;
  t5313 = -0.049*t5276;
  t5324 = -0.21*t134;
  t5609 = 0. + t5313 + t5324;
  t5641 = -0.21*t5276;
  t5689 = 0.049*t134;
  t5729 = 0. + t5641 + t5689;
  t6622 = -0.2707*t6615;
  t6646 = 0.0016*t1303;
  t7083 = 0. + t6622 + t6646;
  t8108 = -0.0016*t6615;
  t8152 = -0.2707*t1303;
  t8159 = 0. + t8108 + t8152;
  t3326 = t1303*t2131;
  t3403 = t131*t2329;
  t3446 = t3326 + t3403;
  t3502 = t1303*t2792;
  t3525 = t131*t3057;
  t3545 = t3502 + t3525;
  p_output1[0]=-1.*t1104*t131 + t1303*t1471;
  p_output1[1]=-1.*t131*t2131 + t1303*t2329;
  p_output1[2]=-1.*t131*t2792 + t1303*t3057;
  p_output1[3]=0.;
  p_output1[4]=t3218;
  p_output1[5]=t3446;
  p_output1[6]=t3545;
  p_output1[7]=0.;
  p_output1[8]=t204*t663*t813 - 1.*t652*t916;
  p_output1[9]=-1.*t1770*t652 + t395*t663*t813;
  p_output1[10]=-1.*t2583*t652 - 1.*t358*t813;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.2707*(t1104*t131 - 1.*t1303*t1471) - 0.0016*t3218 + t3956*t484 + t1051*t5729 + t4072*t625 + t4364*t630 + t204*t3869*t663 + t1104*t7083 + t1471*t8159 + t4165*t916 - 0.1305*(-1.*t204*t663*t813 + t652*t916) + t4897*t941 + t5609*t972 + var1[0];
  p_output1[13]=0. - 0.2707*(t131*t2131 - 1.*t1303*t2329) - 0.0016*t3446 + t1557*t3956 + t1593*t4072 + t1770*t4165 + t1615*t4364 + t1851*t4897 + t1859*t5609 + t1970*t5729 + t3869*t395*t663 + t2131*t7083 - 0.1305*(t1770*t652 - 1.*t395*t663*t813) + t2329*t8159 + var1[1];
  p_output1[14]=0. - 0.2707*(t131*t2792 - 1.*t1303*t3057) - 0.0016*t3545 - 1.*t358*t3869 + t2583*t4165 + t2527*t4364 + t2597*t4897 + t2696*t5609 + t2761*t5729 + t348*t3956*t663 + t4072*t430*t663 + t2792*t7083 - 0.1305*(t2583*t652 + t358*t813) + t3057*t8159 + var1[2];
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

#include "H_knee_to_shin_right_mex.hh"

namespace SymExpression
{

void H_knee_to_shin_right_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
