/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:32:58 GMT-04:00
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
  double t818;
  double t1263;
  double t750;
  double t1013;
  double t1361;
  double t248;
  double t2255;
  double t3146;
  double t1940;
  double t2091;
  double t2250;
  double t1147;
  double t1547;
  double t1775;
  double t3316;
  double t2826;
  double t2857;
  double t2980;
  double t2587;
  double t2625;
  double t2677;
  double t3445;
  double t3389;
  double t3405;
  double t3421;
  double t3521;
  double t3545;
  double t3546;
  double t3652;
  double t3654;
  double t3661;
  t818 = Cos(var1[5]);
  t1263 = Sin(var1[3]);
  t750 = Cos(var1[3]);
  t1013 = Sin(var1[4]);
  t1361 = Sin(var1[5]);
  t248 = Cos(var1[6]);
  t2255 = Sin(var1[6]);
  t3146 = Cos(var1[4]);
  t1940 = -1.*t818*t1263;
  t2091 = t750*t1013*t1361;
  t2250 = t1940 + t2091;
  t1147 = t750*t818*t1013;
  t1547 = t1263*t1361;
  t1775 = t1147 + t1547;
  t3316 = Cos(var1[7]);
  t2826 = t750*t818;
  t2857 = t1263*t1013*t1361;
  t2980 = t2826 + t2857;
  t2587 = t818*t1263*t1013;
  t2625 = -1.*t750*t1361;
  t2677 = t2587 + t2625;
  t3445 = Sin(var1[7]);
  t3389 = t248*t2250;
  t3405 = t1775*t2255;
  t3421 = t3389 + t3405;
  t3521 = t248*t2980;
  t3545 = t2677*t2255;
  t3546 = t3521 + t3545;
  t3652 = t3146*t248*t1361;
  t3654 = t3146*t818*t2255;
  t3661 = t3652 + t3654;
  p_output1[0]=t2250*t2255 - 1.*t1775*t248;
  p_output1[1]=-1.*t248*t2677 + t2255*t2980;
  p_output1[2]=t1361*t2255*t3146 - 1.*t248*t3146*t818;
  p_output1[3]=t3421*t3445 + t3146*t3316*t750;
  p_output1[4]=t1263*t3146*t3316 + t3445*t3546;
  p_output1[5]=-1.*t1013*t3316 + t3445*t3661;
  p_output1[6]=-1.*t3316*t3421 + t3146*t3445*t750;
  p_output1[7]=t1263*t3146*t3445 - 1.*t3316*t3546;
  p_output1[8]=-1.*t1013*t3445 - 1.*t3316*t3661;
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

#include "R_hip_rotation_left_mex.hh"

namespace SymExpression
{

void R_hip_rotation_left_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
