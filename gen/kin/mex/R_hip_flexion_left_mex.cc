/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:11:01 GMT-05:00
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
  double t1389;
  double t1417;
  double t1381;
  double t1397;
  double t1418;
  double t1362;
  double t1468;
  double t1526;
  double t1449;
  double t1450;
  double t1461;
  double t1413;
  double t1426;
  double t1431;
  double t1550;
  double t1503;
  double t1511;
  double t1513;
  double t1478;
  double t1486;
  double t1495;
  double t1561;
  double t1553;
  double t1555;
  double t1556;
  double t1572;
  double t1573;
  double t1574;
  double t1581;
  double t1582;
  double t1584;
  t1389 = Cos(var1[5]);
  t1417 = Sin(var1[3]);
  t1381 = Cos(var1[3]);
  t1397 = Sin(var1[4]);
  t1418 = Sin(var1[5]);
  t1362 = Cos(var1[6]);
  t1468 = Sin(var1[6]);
  t1526 = Cos(var1[4]);
  t1449 = -1.*t1389*t1417;
  t1450 = t1381*t1397*t1418;
  t1461 = t1449 + t1450;
  t1413 = t1381*t1389*t1397;
  t1426 = t1417*t1418;
  t1431 = t1413 + t1426;
  t1550 = Cos(var1[7]);
  t1503 = t1381*t1389;
  t1511 = t1417*t1397*t1418;
  t1513 = t1503 + t1511;
  t1478 = t1389*t1417*t1397;
  t1486 = -1.*t1381*t1418;
  t1495 = t1478 + t1486;
  t1561 = Sin(var1[7]);
  t1553 = t1362*t1461;
  t1555 = t1431*t1468;
  t1556 = t1553 + t1555;
  t1572 = t1362*t1513;
  t1573 = t1495*t1468;
  t1574 = t1572 + t1573;
  t1581 = t1526*t1362*t1418;
  t1582 = t1526*t1389*t1468;
  t1584 = t1581 + t1582;
  p_output1[0]=-1.*t1362*t1431 + t1461*t1468;
  p_output1[1]=-1.*t1362*t1495 + t1468*t1513;
  p_output1[2]=-1.*t1362*t1389*t1526 + t1418*t1468*t1526;
  p_output1[3]=t1381*t1526*t1550 + t1556*t1561;
  p_output1[4]=t1417*t1526*t1550 + t1561*t1574;
  p_output1[5]=-1.*t1397*t1550 + t1561*t1584;
  p_output1[6]=-1.*t1550*t1556 + t1381*t1526*t1561;
  p_output1[7]=t1417*t1526*t1561 - 1.*t1550*t1574;
  p_output1[8]=-1.*t1397*t1561 - 1.*t1550*t1584;
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

#include "R_hip_flexion_left_mex.hh"

namespace SymExpression
{

void R_hip_flexion_left_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
