/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:33:06 GMT-04:00
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
  double t420;
  double t1299;
  double t1420;
  double t1336;
  double t1426;
  double t1298;
  double t1845;
  double t1923;
  double t2059;
  double t1401;
  double t1517;
  double t1742;
  double t2133;
  double t96;
  double t2351;
  double t2375;
  double t2380;
  double t766;
  double t913;
  double t1178;
  double t1805;
  double t2140;
  double t2150;
  double t2163;
  double t2196;
  double t2231;
  double t2385;
  double t30;
  double t2898;
  double t2937;
  double t2963;
  double t2756;
  double t2775;
  double t2850;
  double t2577;
  double t3147;
  double t3207;
  double t3219;
  double t2729;
  double t2851;
  double t3029;
  double t3061;
  double t3074;
  double t3103;
  double t3699;
  double t3718;
  double t3723;
  double t3544;
  double t3619;
  double t3650;
  double t3660;
  double t3663;
  double t3666;
  double t2338;
  double t2503;
  double t2527;
  double t2617;
  double t2647;
  double t2650;
  double t3142;
  double t3267;
  double t3304;
  double t3401;
  double t3448;
  double t3503;
  double t3684;
  double t3755;
  double t3758;
  double t3764;
  double t3771;
  double t3809;
  t420 = Cos(var1[3]);
  t1299 = Cos(var1[5]);
  t1420 = Sin(var1[4]);
  t1336 = Sin(var1[3]);
  t1426 = Sin(var1[5]);
  t1298 = Cos(var1[6]);
  t1845 = t420*t1299*t1420;
  t1923 = t1336*t1426;
  t2059 = t1845 + t1923;
  t1401 = -1.*t1299*t1336;
  t1517 = t420*t1420*t1426;
  t1742 = t1401 + t1517;
  t2133 = Sin(var1[6]);
  t96 = Cos(var1[8]);
  t2351 = t1298*t2059;
  t2375 = -1.*t1742*t2133;
  t2380 = t2351 + t2375;
  t766 = Cos(var1[4]);
  t913 = Cos(var1[7]);
  t1178 = t420*t766*t913;
  t1805 = t1298*t1742;
  t2140 = t2059*t2133;
  t2150 = t1805 + t2140;
  t2163 = Sin(var1[7]);
  t2196 = t2150*t2163;
  t2231 = t1178 + t2196;
  t2385 = Sin(var1[8]);
  t30 = Sin(var1[9]);
  t2898 = t1299*t1336*t1420;
  t2937 = -1.*t420*t1426;
  t2963 = t2898 + t2937;
  t2756 = t420*t1299;
  t2775 = t1336*t1420*t1426;
  t2850 = t2756 + t2775;
  t2577 = Cos(var1[9]);
  t3147 = t1298*t2963;
  t3207 = -1.*t2850*t2133;
  t3219 = t3147 + t3207;
  t2729 = t766*t913*t1336;
  t2851 = t1298*t2850;
  t3029 = t2963*t2133;
  t3061 = t2851 + t3029;
  t3074 = t3061*t2163;
  t3103 = t2729 + t3074;
  t3699 = t766*t1299*t1298;
  t3718 = -1.*t766*t1426*t2133;
  t3723 = t3699 + t3718;
  t3544 = -1.*t913*t1420;
  t3619 = t766*t1298*t1426;
  t3650 = t766*t1299*t2133;
  t3660 = t3619 + t3650;
  t3663 = t3660*t2163;
  t3666 = t3544 + t3663;
  t2338 = t96*t2231;
  t2503 = t2380*t2385;
  t2527 = t2338 + t2503;
  t2617 = t96*t2380;
  t2647 = -1.*t2231*t2385;
  t2650 = t2617 + t2647;
  t3142 = t96*t3103;
  t3267 = t3219*t2385;
  t3304 = t3142 + t3267;
  t3401 = t96*t3219;
  t3448 = -1.*t3103*t2385;
  t3503 = t3401 + t3448;
  t3684 = t96*t3666;
  t3755 = t3723*t2385;
  t3758 = t3684 + t3755;
  t3764 = t96*t3723;
  t3771 = -1.*t3666*t2385;
  t3809 = t3764 + t3771;
  p_output1[0]=-1.*t2577*t2650 + t2527*t30;
  p_output1[1]=t30*t3304 - 1.*t2577*t3503;
  p_output1[2]=t30*t3758 - 1.*t2577*t3809;
  p_output1[3]=t2527*t2577 + t2650*t30;
  p_output1[4]=t2577*t3304 + t30*t3503;
  p_output1[5]=t2577*t3758 + t30*t3809;
  p_output1[6]=t2163*t420*t766 - 1.*t2150*t913;
  p_output1[7]=t1336*t2163*t766 - 1.*t3061*t913;
  p_output1[8]=-1.*t1420*t2163 - 1.*t3660*t913;
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

#include "R_knee_joint_left_mex.hh"

namespace SymExpression
{

void R_knee_joint_left_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
