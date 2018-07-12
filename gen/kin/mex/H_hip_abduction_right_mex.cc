/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:33:25 GMT-04:00
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
  double t768;
  double t489;
  double t1530;
  double t1451;
  double t3003;
  double t3056;
  double t2212;
  double t3490;
  double t3052;
  double t3119;
  double t3301;
  double t4755;
  double t5363;
  double t5550;
  double t6406;
  double t6485;
  double t6609;
  double t6661;
  double t6671;
  double t6696;
  double t3308;
  double t6013;
  double t6058;
  double t6869;
  double t6872;
  double t6891;
  double t6901;
  double t6902;
  double t6910;
  double t6636;
  double t6705;
  double t6722;
  double t6740;
  double t6746;
  double t6752;
  t768 = Cos(var1[4]);
  t489 = Cos(var1[3]);
  t1530 = Sin(var1[4]);
  t1451 = Sin(var1[3]);
  t3003 = Cos(var1[5]);
  t3056 = Sin(var1[5]);
  t2212 = Sin(var1[13]);
  t3490 = Cos(var1[13]);
  t3052 = t489*t3003*t1530;
  t3119 = t1451*t3056;
  t3301 = t3052 + t3119;
  t4755 = -1.*t3003*t1451;
  t5363 = t489*t1530*t3056;
  t5550 = t4755 + t5363;
  t6406 = t3003*t1451*t1530;
  t6485 = -1.*t489*t3056;
  t6609 = t6406 + t6485;
  t6661 = t489*t3003;
  t6671 = t1451*t1530*t3056;
  t6696 = t6661 + t6671;
  t3308 = t2212*t3301;
  t6013 = t3490*t5550;
  t6058 = t3308 + t6013;
  t6869 = 0.135*t2212;
  t6872 = 0. + t6869;
  t6891 = -1.*t3490;
  t6901 = 1. + t6891;
  t6902 = -0.135*t6901;
  t6910 = 0. + t6902;
  t6636 = t2212*t6609;
  t6705 = t3490*t6696;
  t6722 = t6636 + t6705;
  t6740 = t768*t3003*t2212;
  t6746 = t3490*t768*t3056;
  t6752 = t6740 + t6746;
  p_output1[0]=t489*t768;
  p_output1[1]=t1451*t768;
  p_output1[2]=-1.*t1530;
  p_output1[3]=0.;
  p_output1[4]=t6058;
  p_output1[5]=t6722;
  p_output1[6]=t6752;
  p_output1[7]=0.;
  p_output1[8]=t3301*t3490 - 1.*t2212*t5550;
  p_output1[9]=t3490*t6609 - 1.*t2212*t6696;
  p_output1[10]=-1.*t2212*t3056*t768 + t3003*t3490*t768;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.135*t6058 + t3301*t6872 + t5550*t6910 - 0.049*t489*t768 + var1[0];
  p_output1[13]=0. - 0.135*t6722 + t6609*t6872 + t6696*t6910 - 0.049*t1451*t768 + var1[1];
  p_output1[14]=0. + 0.049*t1530 - 0.135*t6752 + t3003*t6872*t768 + t3056*t6910*t768 + var1[2];
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

#include "H_hip_abduction_right_mex.hh"

namespace SymExpression
{

void H_hip_abduction_right_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
