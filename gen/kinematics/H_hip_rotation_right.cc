/*
 * Automatically Generated from Mathematica.
 * Tue 26 Sep 2017 12:22:25 GMT-04:00
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
  double t10698;
  double t10876;
  double t10597;
  double t10766;
  double t10942;
  double t10998;
  double t10838;
  double t10965;
  double t10967;
  double t1515;
  double t11009;
  double t11036;
  double t11048;
  double t1355;
  double t11099;
  double t11153;
  double t11164;
  double t11177;
  double t11195;
  double t11197;
  double t11199;
  double t11258;
  double t10990;
  double t11054;
  double t11067;
  double t11121;
  double t11123;
  double t11124;
  double t11194;
  double t11201;
  double t11202;
  double t11224;
  double t11246;
  double t11247;
  double t11267;
  double t11270;
  double t11271;
  double t11288;
  double t11296;
  double t11298;
  double t11443;
  double t11447;
  double t11467;
  double t11473;
  double t11477;
  double t11481;
  double t11504;
  double t11508;
  double t11513;
  double t11515;
  double t11526;
  double t11531;
  t10698 = Cos(var1[5]);
  t10876 = Sin(var1[3]);
  t10597 = Cos(var1[3]);
  t10766 = Sin(var1[4]);
  t10942 = Sin(var1[5]);
  t10998 = Cos(var1[14]);
  t10838 = t10597*t10698*t10766;
  t10965 = t10876*t10942;
  t10967 = t10838 + t10965;
  t1515 = Sin(var1[14]);
  t11009 = -1.*t10698*t10876;
  t11036 = t10597*t10766*t10942;
  t11048 = t11009 + t11036;
  t1355 = Sin(var1[15]);
  t11099 = Cos(var1[15]);
  t11153 = t10698*t10876*t10766;
  t11164 = -1.*t10597*t10942;
  t11177 = t11153 + t11164;
  t11195 = t10597*t10698;
  t11197 = t10876*t10766*t10942;
  t11199 = t11195 + t11197;
  t11258 = Cos(var1[4]);
  t10990 = t1515*t10967;
  t11054 = t10998*t11048;
  t11067 = t10990 + t11054;
  t11121 = t10998*t10967;
  t11123 = -1.*t1515*t11048;
  t11124 = t11121 + t11123;
  t11194 = t1515*t11177;
  t11201 = t10998*t11199;
  t11202 = t11194 + t11201;
  t11224 = t10998*t11177;
  t11246 = -1.*t1515*t11199;
  t11247 = t11224 + t11246;
  t11267 = t11258*t10698*t1515;
  t11270 = t10998*t11258*t10942;
  t11271 = t11267 + t11270;
  t11288 = t10998*t11258*t10698;
  t11296 = -1.*t11258*t1515*t10942;
  t11298 = t11288 + t11296;
  t11443 = 0.135*t1515;
  t11447 = 0. + t11443;
  t11467 = -1.*t10998;
  t11473 = 1. + t11467;
  t11477 = -0.135*t11473;
  t11481 = 0. + t11477;
  t11504 = -1.*t11099;
  t11508 = 1. + t11504;
  t11513 = -0.135*t11508;
  t11515 = 0. + t11513;
  t11526 = 0.135*t1355;
  t11531 = 0. + t11526;
  p_output1[0]=-1.*t11099*t11124 + t11067*t1355;
  p_output1[1]=-1.*t11099*t11247 + t11202*t1355;
  p_output1[2]=-1.*t11099*t11298 + t11271*t1355;
  p_output1[3]=0.;
  p_output1[4]=t10597*t11258;
  p_output1[5]=t10876*t11258;
  p_output1[6]=-1.*t10766;
  p_output1[7]=0.;
  p_output1[8]=-1.*t11067*t11099 - 1.*t11124*t1355;
  p_output1[9]=-1.*t11099*t11202 - 1.*t11247*t1355;
  p_output1[10]=-1.*t11099*t11271 - 1.*t11298*t1355;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.049*t10597*t11258 + t10967*t11447 + t11048*t11481 + t11067*t11515 + t11124*t11531 - 0.09*(t11099*t11124 - 1.*t11067*t1355) - 0.135*(t11067*t11099 + t11124*t1355) + var1[0];
  p_output1[13]=0. - 0.049*t10876*t11258 + t11177*t11447 + t11199*t11481 + t11202*t11515 + t11247*t11531 - 0.09*(t11099*t11247 - 1.*t11202*t1355) - 0.135*(t11099*t11202 + t11247*t1355) + var1[1];
  p_output1[14]=0. + 0.049*t10766 + t10698*t11258*t11447 + t10942*t11258*t11481 + t11271*t11515 + t11298*t11531 - 0.09*(t11099*t11298 - 1.*t11271*t1355) - 0.135*(t11099*t11271 + t11298*t1355) + var1[2];
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
    ( !(mrows == 22 && ncols == 1) && 
      !(mrows == 1 && ncols == 22))) 
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

#include "H_hip_rotation_right.hh"

namespace SymExpression
{

void H_hip_rotation_right_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
