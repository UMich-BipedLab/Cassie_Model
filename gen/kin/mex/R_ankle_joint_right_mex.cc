/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:53 GMT-05:00
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
  double t1046;
  double t1153;
  double t905;
  double t1064;
  double t1200;
  double t1448;
  double t1120;
  double t1216;
  double t1381;
  double t887;
  double t1452;
  double t1566;
  double t1625;
  double t1695;
  double t1431;
  double t1662;
  double t1670;
  double t814;
  double t1712;
  double t1725;
  double t1730;
  double t1739;
  double t1743;
  double t1748;
  double t1762;
  double t1843;
  double t1874;
  double t1907;
  double t1691;
  double t1881;
  double t1888;
  double t597;
  double t1928;
  double t1940;
  double t1952;
  double t2044;
  double t1889;
  double t1961;
  double t2015;
  double t417;
  double t2094;
  double t2121;
  double t2127;
  double t382;
  double t2484;
  double t2499;
  double t2524;
  double t2590;
  double t2600;
  double t2616;
  double t2565;
  double t2617;
  double t2640;
  double t2829;
  double t2841;
  double t2864;
  double t2865;
  double t2868;
  double t2882;
  double t2661;
  double t2886;
  double t2981;
  double t3063;
  double t3103;
  double t3185;
  double t2205;
  double t2982;
  double t3209;
  double t3211;
  double t3252;
  double t3282;
  double t3360;
  double t3925;
  double t3943;
  double t3966;
  double t4075;
  double t4081;
  double t4098;
  double t4113;
  double t4119;
  double t4160;
  double t4070;
  double t4162;
  double t4163;
  double t4259;
  double t4260;
  double t4277;
  double t4232;
  double t4280;
  double t4294;
  double t4313;
  double t4315;
  double t4346;
  double t2026;
  double t2137;
  double t2162;
  double t2206;
  double t2217;
  double t2311;
  double t3217;
  double t3443;
  double t3585;
  double t3710;
  double t3856;
  double t3872;
  double t4311;
  double t4354;
  double t4361;
  double t4399;
  double t4400;
  double t4424;
  t1046 = Cos(var1[5]);
  t1153 = Sin(var1[3]);
  t905 = Cos(var1[3]);
  t1064 = Sin(var1[4]);
  t1200 = Sin(var1[5]);
  t1448 = Sin(var1[13]);
  t1120 = t905*t1046*t1064;
  t1216 = t1153*t1200;
  t1381 = t1120 + t1216;
  t887 = Cos(var1[13]);
  t1452 = -1.*t1046*t1153;
  t1566 = t905*t1064*t1200;
  t1625 = t1452 + t1566;
  t1695 = Cos(var1[15]);
  t1431 = t887*t1381;
  t1662 = -1.*t1448*t1625;
  t1670 = t1431 + t1662;
  t814 = Sin(var1[15]);
  t1712 = Cos(var1[14]);
  t1725 = Cos(var1[4]);
  t1730 = t1712*t905*t1725;
  t1739 = Sin(var1[14]);
  t1743 = t1448*t1381;
  t1748 = t887*t1625;
  t1762 = t1743 + t1748;
  t1843 = t1739*t1762;
  t1874 = t1730 + t1843;
  t1907 = Cos(var1[16]);
  t1691 = t814*t1670;
  t1881 = t1695*t1874;
  t1888 = t1691 + t1881;
  t597 = Sin(var1[16]);
  t1928 = t1695*t1670;
  t1940 = -1.*t814*t1874;
  t1952 = t1928 + t1940;
  t2044 = Cos(var1[17]);
  t1889 = -1.*t597*t1888;
  t1961 = t1907*t1952;
  t2015 = t1889 + t1961;
  t417 = Sin(var1[17]);
  t2094 = t1907*t1888;
  t2121 = t597*t1952;
  t2127 = t2094 + t2121;
  t382 = Sin(var1[18]);
  t2484 = t1046*t1153*t1064;
  t2499 = -1.*t905*t1200;
  t2524 = t2484 + t2499;
  t2590 = t905*t1046;
  t2600 = t1153*t1064*t1200;
  t2616 = t2590 + t2600;
  t2565 = t887*t2524;
  t2617 = -1.*t1448*t2616;
  t2640 = t2565 + t2617;
  t2829 = t1712*t1725*t1153;
  t2841 = t1448*t2524;
  t2864 = t887*t2616;
  t2865 = t2841 + t2864;
  t2868 = t1739*t2865;
  t2882 = t2829 + t2868;
  t2661 = t814*t2640;
  t2886 = t1695*t2882;
  t2981 = t2661 + t2886;
  t3063 = t1695*t2640;
  t3103 = -1.*t814*t2882;
  t3185 = t3063 + t3103;
  t2205 = Cos(var1[18]);
  t2982 = -1.*t597*t2981;
  t3209 = t1907*t3185;
  t3211 = t2982 + t3209;
  t3252 = t1907*t2981;
  t3282 = t597*t3185;
  t3360 = t3252 + t3282;
  t3925 = t887*t1725*t1046;
  t3943 = -1.*t1725*t1448*t1200;
  t3966 = t3925 + t3943;
  t4075 = -1.*t1712*t1064;
  t4081 = t1725*t1046*t1448;
  t4098 = t887*t1725*t1200;
  t4113 = t4081 + t4098;
  t4119 = t1739*t4113;
  t4160 = t4075 + t4119;
  t4070 = t814*t3966;
  t4162 = t1695*t4160;
  t4163 = t4070 + t4162;
  t4259 = t1695*t3966;
  t4260 = -1.*t814*t4160;
  t4277 = t4259 + t4260;
  t4232 = -1.*t597*t4163;
  t4280 = t1907*t4277;
  t4294 = t4232 + t4280;
  t4313 = t1907*t4163;
  t4315 = t597*t4277;
  t4346 = t4313 + t4315;
  t2026 = t417*t2015;
  t2137 = t2044*t2127;
  t2162 = t2026 + t2137;
  t2206 = t2044*t2015;
  t2217 = -1.*t417*t2127;
  t2311 = t2206 + t2217;
  t3217 = t417*t3211;
  t3443 = t2044*t3360;
  t3585 = t3217 + t3443;
  t3710 = t2044*t3211;
  t3856 = -1.*t417*t3360;
  t3872 = t3710 + t3856;
  t4311 = t417*t4294;
  t4354 = t2044*t4346;
  t4361 = t4311 + t4354;
  t4399 = t2044*t4294;
  t4400 = -1.*t417*t4346;
  t4424 = t4399 + t4400;
  p_output1[0]=-1.*t2205*t2311 + t2162*t382;
  p_output1[1]=t3585*t382 - 1.*t2205*t3872;
  p_output1[2]=t382*t4361 - 1.*t2205*t4424;
  p_output1[3]=t2162*t2205 + t2311*t382;
  p_output1[4]=t2205*t3585 + t382*t3872;
  p_output1[5]=t2205*t4361 + t382*t4424;
  p_output1[6]=-1.*t1712*t1762 + t1725*t1739*t905;
  p_output1[7]=t1153*t1725*t1739 - 1.*t1712*t2865;
  p_output1[8]=-1.*t1064*t1739 - 1.*t1712*t4113;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "R_ankle_joint_right_mex.hh"

namespace SymExpression
{

void R_ankle_joint_right_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
