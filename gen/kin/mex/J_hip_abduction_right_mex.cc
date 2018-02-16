/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:15:29 GMT-05:00
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
  double t160;
  double t6509;
  double t6428;
  double t6493;
  double t6513;
  double t6349;
  double t6495;
  double t6514;
  double t6524;
  double t6529;
  double t6543;
  double t6544;
  double t6546;
  double t88;
  double t6358;
  double t6362;
  double t6531;
  double t6539;
  double t6540;
  double t6542;
  double t6559;
  double t6560;
  double t6563;
  double t6566;
  double t6568;
  double t6569;
  double t6609;
  double t6611;
  double t6612;
  double t6621;
  double t6624;
  double t6625;
  double t6614;
  double t6628;
  double t6653;
  double t6654;
  double t6656;
  double t6635;
  double t6637;
  double t6638;
  double t6641;
  t160 = Sin(var1[3]);
  t6509 = Cos(var1[3]);
  t6428 = Cos(var1[5]);
  t6493 = Sin(var1[4]);
  t6513 = Sin(var1[5]);
  t6349 = Sin(var1[13]);
  t6495 = -1.*t6428*t160*t6493;
  t6514 = t6509*t6513;
  t6524 = t6495 + t6514;
  t6529 = Cos(var1[13]);
  t6543 = -1.*t6509*t6428;
  t6544 = -1.*t160*t6493*t6513;
  t6546 = t6543 + t6544;
  t88 = Cos(var1[4]);
  t6358 = 0.135*t6349;
  t6362 = 0. + t6358;
  t6531 = -1.*t6529;
  t6539 = 1. + t6531;
  t6540 = -0.135*t6539;
  t6542 = 0. + t6540;
  t6559 = t6509*t6428*t6493;
  t6560 = t160*t6513;
  t6563 = t6559 + t6560;
  t6566 = -1.*t6428*t160;
  t6568 = t6509*t6493*t6513;
  t6569 = t6566 + t6568;
  t6609 = t6428*t160;
  t6611 = -1.*t6509*t6493*t6513;
  t6612 = t6609 + t6611;
  t6621 = t6428*t160*t6493;
  t6624 = -1.*t6509*t6513;
  t6625 = t6621 + t6624;
  t6614 = t6529*t6563;
  t6628 = t6529*t6625;
  t6653 = t6509*t6428;
  t6654 = t160*t6493*t6513;
  t6656 = t6653 + t6654;
  t6635 = t6529*t88*t6428;
  t6637 = -1.*t88*t6349*t6513;
  t6638 = t6635 + t6637;
  t6641 = -0.135*t6638;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t6362*t6524 + t6542*t6546 - 0.135*(t6349*t6524 + t6529*t6546) + 0.049*t160*t88;
  p_output1[10]=t6362*t6563 + t6542*t6569 - 0.135*(t6349*t6563 + t6529*t6569) - 0.049*t6509*t88;
  p_output1[11]=0;
  p_output1[12]=0.049*t6493*t6509 + t6362*t6428*t6509*t88 + t6509*t6513*t6542*t88 - 0.135*(t6349*t6428*t6509*t88 + t6509*t6513*t6529*t88);
  p_output1[13]=0.049*t160*t6493 + t160*t6362*t6428*t88 + t160*t6513*t6542*t88 - 0.135*(t160*t6349*t6428*t88 + t160*t6513*t6529*t88);
  p_output1[14]=-1.*t6362*t6428*t6493 - 0.135*(-1.*t6349*t6428*t6493 - 1.*t6493*t6513*t6529) - 1.*t6493*t6513*t6542 + 0.049*t88;
  p_output1[15]=t6542*t6563 + t6362*t6612 - 0.135*(t6349*t6612 + t6614);
  p_output1[16]=t6362*t6546 + t6542*t6625 - 0.135*(t6349*t6546 + t6628);
  p_output1[17]=t6641 - 1.*t6362*t6513*t88 + t6428*t6542*t88;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0.135*t6529*t6563 - 0.135*t6349*t6569 - 0.135*(-1.*t6349*t6569 + t6614);
  p_output1[40]=0.135*t6529*t6625 - 0.135*t6349*t6656 - 0.135*(t6628 - 1.*t6349*t6656);
  p_output1[41]=t6641 - 0.135*t6349*t6513*t88 + 0.135*t6428*t6529*t88;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 20, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_hip_abduction_right_mex.hh"

namespace SymExpression
{

void J_hip_abduction_right_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
