/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:28 GMT-05:00
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
  double t2103;
  double t6515;
  double t6364;
  double t6502;
  double t6520;
  double t2271;
  double t6504;
  double t6521;
  double t6532;
  double t6535;
  double t6541;
  double t6542;
  double t6543;
  double t219;
  double t3617;
  double t4186;
  double t6536;
  double t6538;
  double t6539;
  double t6540;
  double t6563;
  double t6566;
  double t6568;
  double t6572;
  double t6573;
  double t6574;
  double t6627;
  double t6628;
  double t6629;
  double t6640;
  double t6641;
  double t6642;
  double t6632;
  double t6645;
  double t6667;
  double t6668;
  double t6670;
  double t6652;
  double t6653;
  double t6654;
  double t6655;
  t2103 = Sin(var1[3]);
  t6515 = Cos(var1[3]);
  t6364 = Cos(var1[5]);
  t6502 = Sin(var1[4]);
  t6520 = Sin(var1[5]);
  t2271 = Sin(var1[13]);
  t6504 = -1.*t6364*t2103*t6502;
  t6521 = t6515*t6520;
  t6532 = t6504 + t6521;
  t6535 = Cos(var1[13]);
  t6541 = -1.*t6515*t6364;
  t6542 = -1.*t2103*t6502*t6520;
  t6543 = t6541 + t6542;
  t219 = Cos(var1[4]);
  t3617 = 0.135*t2271;
  t4186 = 0. + t3617;
  t6536 = -1.*t6535;
  t6538 = 1. + t6536;
  t6539 = -0.135*t6538;
  t6540 = 0. + t6539;
  t6563 = t6515*t6364*t6502;
  t6566 = t2103*t6520;
  t6568 = t6563 + t6566;
  t6572 = -1.*t6364*t2103;
  t6573 = t6515*t6502*t6520;
  t6574 = t6572 + t6573;
  t6627 = t6364*t2103;
  t6628 = -1.*t6515*t6502*t6520;
  t6629 = t6627 + t6628;
  t6640 = t6364*t2103*t6502;
  t6641 = -1.*t6515*t6520;
  t6642 = t6640 + t6641;
  t6632 = t6535*t6568;
  t6645 = t6535*t6642;
  t6667 = t6515*t6364;
  t6668 = t2103*t6502*t6520;
  t6670 = t6667 + t6668;
  t6652 = t6535*t219*t6364;
  t6653 = -1.*t219*t2271*t6520;
  t6654 = t6652 + t6653;
  t6655 = -0.135*t6654;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=0.049*t2103*t219 + t4186*t6532 + t6540*t6543 - 0.135*(t2271*t6532 + t6535*t6543);
  p_output1[10]=-0.049*t219*t6515 + t4186*t6568 + t6540*t6574 - 0.135*(t2271*t6568 + t6535*t6574);
  p_output1[11]=0;
  p_output1[12]=t219*t4186*t6364*t6515 + 0.049*t6502*t6515 - 0.135*(t219*t2271*t6364*t6515 + t219*t6515*t6520*t6535) + t219*t6515*t6520*t6540;
  p_output1[13]=t2103*t219*t4186*t6364 + 0.049*t2103*t6502 - 0.135*(t2103*t219*t2271*t6364 + t2103*t219*t6520*t6535) + t2103*t219*t6520*t6540;
  p_output1[14]=0.049*t219 - 1.*t4186*t6364*t6502 - 0.135*(-1.*t2271*t6364*t6502 - 1.*t6502*t6520*t6535) - 1.*t6502*t6520*t6540;
  p_output1[15]=t6540*t6568 + t4186*t6629 - 0.135*(t2271*t6629 + t6632);
  p_output1[16]=t4186*t6543 + t6540*t6642 - 0.135*(t2271*t6543 + t6645);
  p_output1[17]=-1.*t219*t4186*t6520 + t219*t6364*t6540 + t6655;
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
  p_output1[39]=0.135*t6535*t6568 - 0.135*t2271*t6574 - 0.135*(-1.*t2271*t6574 + t6632);
  p_output1[40]=0.135*t6535*t6642 - 0.135*t2271*t6670 - 0.135*(t6645 - 1.*t2271*t6670);
  p_output1[41]=-0.135*t219*t2271*t6520 + 0.135*t219*t6364*t6535 + t6655;
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
