/*
 * Automatically Generated from Mathematica.
 * Tue 26 Sep 2017 12:22:16 GMT-04:00
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
  double t9493;
  double t9521;
  double t9491;
  double t9539;
  double t9544;
  double t9551;
  double t9542;
  double t9572;
  double t9561;
  double t9564;
  double t9570;
  double t9549;
  double t9553;
  double t9555;
  double t9601;
  double t9602;
  double t9607;
  double t9586;
  double t9587;
  double t9588;
  double t9558;
  double t9576;
  double t9581;
  double t9701;
  double t9704;
  double t9706;
  double t9716;
  double t9733;
  double t9734;
  double t9600;
  double t9609;
  double t9610;
  double t9615;
  double t9622;
  double t9624;
  t9493 = Cos(var1[4]);
  t9521 = Sin(var1[3]);
  t9491 = Cos(var1[3]);
  t9539 = Sin(var1[4]);
  t9544 = Cos(var1[5]);
  t9551 = Sin(var1[5]);
  t9542 = Cos(var1[6]);
  t9572 = Sin(var1[6]);
  t9561 = t9491*t9544*t9539;
  t9564 = t9521*t9551;
  t9570 = t9561 + t9564;
  t9549 = -1.*t9544*t9521;
  t9553 = t9491*t9539*t9551;
  t9555 = t9549 + t9553;
  t9601 = t9544*t9521*t9539;
  t9602 = -1.*t9491*t9551;
  t9607 = t9601 + t9602;
  t9586 = t9491*t9544;
  t9587 = t9521*t9539*t9551;
  t9588 = t9586 + t9587;
  t9558 = t9542*t9555;
  t9576 = t9570*t9572;
  t9581 = t9558 + t9576;
  t9701 = -1.*t9542;
  t9704 = 1. + t9701;
  t9706 = 0.135*t9704;
  t9716 = 0. + t9706;
  t9733 = -0.135*t9572;
  t9734 = 0. + t9733;
  t9600 = t9542*t9588;
  t9609 = t9607*t9572;
  t9610 = t9600 + t9609;
  t9615 = t9493*t9542*t9551;
  t9622 = t9493*t9544*t9572;
  t9624 = t9615 + t9622;
  p_output1[0]=t9491*t9493;
  p_output1[1]=t9493*t9521;
  p_output1[2]=-1.*t9539;
  p_output1[3]=0.;
  p_output1[4]=t9581;
  p_output1[5]=t9610;
  p_output1[6]=t9624;
  p_output1[7]=0.;
  p_output1[8]=t9542*t9570 - 1.*t9555*t9572;
  p_output1[9]=-1.*t9572*t9588 + t9542*t9607;
  p_output1[10]=t9493*t9542*t9544 - 1.*t9493*t9551*t9572;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.049*t9491*t9493 + 0.135*t9581 + t9555*t9716 + t9570*t9734 + var1[0];
  p_output1[13]=0. - 0.049*t9493*t9521 + 0.135*t9610 + t9588*t9716 + t9607*t9734 + var1[1];
  p_output1[14]=0. + 0.049*t9539 + 0.135*t9624 + t9493*t9551*t9716 + t9493*t9544*t9734 + var1[2];
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

#include "H_hip_abduction_left.hh"

namespace SymExpression
{

void H_hip_abduction_left_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
