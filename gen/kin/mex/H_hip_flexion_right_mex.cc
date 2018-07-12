/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:33:36 GMT-04:00
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
  double t501;
  double t604;
  double t402;
  double t520;
  double t640;
  double t1419;
  double t595;
  double t677;
  double t802;
  double t310;
  double t1594;
  double t1636;
  double t1661;
  double t187;
  double t1933;
  double t1942;
  double t2114;
  double t2399;
  double t3071;
  double t3198;
  double t3341;
  double t3404;
  double t3419;
  double t3615;
  double t1257;
  double t1663;
  double t1891;
  double t2356;
  double t2512;
  double t2584;
  double t2695;
  double t2723;
  double t2815;
  double t3388;
  double t3733;
  double t3746;
  double t3757;
  double t3904;
  double t3914;
  double t3923;
  double t3935;
  double t3940;
  double t4442;
  double t4452;
  double t4453;
  double t4494;
  double t4500;
  double t4529;
  double t4589;
  double t4601;
  double t4612;
  double t5578;
  double t5587;
  double t6253;
  double t6291;
  double t4660;
  double t4705;
  double t4719;
  double t5600;
  double t5626;
  double t5627;
  double t5758;
  double t5764;
  double t5825;
  double t5939;
  double t5972;
  double t5982;
  double t6086;
  double t6165;
  double t6218;
  double t6320;
  double t6331;
  double t6356;
  double t6548;
  double t6553;
  double t6574;
  double t4813;
  double t4864;
  double t4935;
  double t4966;
  double t4974;
  double t5010;
  t501 = Cos(var1[5]);
  t604 = Sin(var1[3]);
  t402 = Cos(var1[3]);
  t520 = Sin(var1[4]);
  t640 = Sin(var1[5]);
  t1419 = Sin(var1[13]);
  t595 = t402*t501*t520;
  t677 = t604*t640;
  t802 = t595 + t677;
  t310 = Cos(var1[13]);
  t1594 = -1.*t501*t604;
  t1636 = t402*t520*t640;
  t1661 = t1594 + t1636;
  t187 = Cos(var1[15]);
  t1933 = Sin(var1[15]);
  t1942 = Cos(var1[14]);
  t2114 = Cos(var1[4]);
  t2399 = Sin(var1[14]);
  t3071 = t501*t604*t520;
  t3198 = -1.*t402*t640;
  t3341 = t3071 + t3198;
  t3404 = t402*t501;
  t3419 = t604*t520*t640;
  t3615 = t3404 + t3419;
  t1257 = t310*t802;
  t1663 = -1.*t1419*t1661;
  t1891 = t1257 + t1663;
  t2356 = t1942*t402*t2114;
  t2512 = t1419*t802;
  t2584 = t310*t1661;
  t2695 = t2512 + t2584;
  t2723 = t2399*t2695;
  t2815 = t2356 + t2723;
  t3388 = t310*t3341;
  t3733 = -1.*t1419*t3615;
  t3746 = t3388 + t3733;
  t3757 = t1942*t2114*t604;
  t3904 = t1419*t3341;
  t3914 = t310*t3615;
  t3923 = t3904 + t3914;
  t3935 = t2399*t3923;
  t3940 = t3757 + t3935;
  t4442 = t310*t2114*t501;
  t4452 = -1.*t2114*t1419*t640;
  t4453 = t4442 + t4452;
  t4494 = -1.*t1942*t520;
  t4500 = t2114*t501*t1419;
  t4529 = t310*t2114*t640;
  t4589 = t4500 + t4529;
  t4601 = t2399*t4589;
  t4612 = t4494 + t4601;
  t5578 = -1.*t1942;
  t5587 = 1. + t5578;
  t6253 = -1.*t187;
  t6291 = 1. + t6253;
  t4660 = t1933*t1891;
  t4705 = t187*t2815;
  t4719 = t4660 + t4705;
  t5600 = -0.049*t5587;
  t5626 = -0.135*t2399;
  t5627 = 0. + t5600 + t5626;
  t5758 = 0.135*t1419;
  t5764 = 0. + t5758;
  t5825 = -1.*t310;
  t5939 = 1. + t5825;
  t5972 = -0.135*t5939;
  t5982 = 0. + t5972;
  t6086 = -0.135*t5587;
  t6165 = 0.049*t2399;
  t6218 = 0. + t6086 + t6165;
  t6320 = -0.09*t6291;
  t6331 = 0.049*t1933;
  t6356 = 0. + t6320 + t6331;
  t6548 = -0.049*t6291;
  t6553 = -0.09*t1933;
  t6574 = 0. + t6548 + t6553;
  t4813 = t1933*t3746;
  t4864 = t187*t3940;
  t4935 = t4813 + t4864;
  t4966 = t1933*t4453;
  t4974 = t187*t4612;
  t5010 = t4966 + t4974;
  p_output1[0]=-1.*t187*t1891 + t1933*t2815;
  p_output1[1]=-1.*t187*t3746 + t1933*t3940;
  p_output1[2]=-1.*t187*t4453 + t1933*t4612;
  p_output1[3]=0.;
  p_output1[4]=t4719;
  p_output1[5]=t4935;
  p_output1[6]=t5010;
  p_output1[7]=0.;
  p_output1[8]=-1.*t1942*t2695 + t2114*t2399*t402;
  p_output1[9]=-1.*t1942*t3923 + t2114*t2399*t604;
  p_output1[10]=-1.*t1942*t4589 - 1.*t2399*t520;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.09*(t187*t1891 - 1.*t1933*t2815) - 0.135*(t1942*t2695 - 1.*t2114*t2399*t402) - 0.049*t4719 + t2114*t402*t5627 + t1661*t5982 + t2695*t6218 + t1891*t6356 + t2815*t6574 + t5764*t802 + var1[0];
  p_output1[13]=0. - 0.09*(t187*t3746 - 1.*t1933*t3940) - 0.049*t4935 + t3341*t5764 + t3615*t5982 + t2114*t5627*t604 - 0.135*(t1942*t3923 - 1.*t2114*t2399*t604) + t3923*t6218 + t3746*t6356 + t3940*t6574 + var1[1];
  p_output1[14]=0. - 0.09*(t187*t4453 - 1.*t1933*t4612) - 0.049*t5010 - 0.135*(t1942*t4589 + t2399*t520) - 1.*t520*t5627 + t2114*t501*t5764 + t4589*t6218 + t4453*t6356 + t2114*t5982*t640 + t4612*t6574 + var1[2];
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

#include "H_hip_flexion_right_mex.hh"

namespace SymExpression
{

void H_hip_flexion_right_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
