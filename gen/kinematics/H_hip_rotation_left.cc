/*
 * Automatically Generated from Mathematica.
 * Tue 26 Sep 2017 12:22:17 GMT-04:00
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
  double t9540;
  double t9600;
  double t5529;
  double t9564;
  double t9609;
  double t5210;
  double t9627;
  double t9659;
  double t9683;
  double t9576;
  double t9615;
  double t9622;
  double t9686;
  double t4595;
  double t9769;
  double t9771;
  double t9774;
  double t9757;
  double t9762;
  double t9763;
  double t9747;
  double t9803;
  double t9716;
  double t9733;
  double t9734;
  double t9624;
  double t9690;
  double t9699;
  double t9787;
  double t9788;
  double t9797;
  double t9765;
  double t9776;
  double t9779;
  double t9849;
  double t9855;
  double t9859;
  double t9805;
  double t9808;
  double t9822;
  double t9933;
  double t9935;
  double t9937;
  double t9942;
  double t9952;
  double t9956;
  double t9964;
  double t9969;
  double t9970;
  double t9971;
  double t9980;
  double t9983;
  t9540 = Cos(var1[5]);
  t9600 = Sin(var1[3]);
  t5529 = Cos(var1[3]);
  t9564 = Sin(var1[4]);
  t9609 = Sin(var1[5]);
  t5210 = Cos(var1[6]);
  t9627 = -1.*t9540*t9600;
  t9659 = t5529*t9564*t9609;
  t9683 = t9627 + t9659;
  t9576 = t5529*t9540*t9564;
  t9615 = t9600*t9609;
  t9622 = t9576 + t9615;
  t9686 = Sin(var1[6]);
  t4595 = Cos(var1[7]);
  t9769 = t5529*t9540;
  t9771 = t9600*t9564*t9609;
  t9774 = t9769 + t9771;
  t9757 = t9540*t9600*t9564;
  t9762 = -1.*t5529*t9609;
  t9763 = t9757 + t9762;
  t9747 = Sin(var1[7]);
  t9803 = Cos(var1[4]);
  t9716 = t5210*t9683;
  t9733 = t9622*t9686;
  t9734 = t9716 + t9733;
  t9624 = t5210*t9622;
  t9690 = -1.*t9683*t9686;
  t9699 = t9624 + t9690;
  t9787 = t5210*t9774;
  t9788 = t9763*t9686;
  t9797 = t9787 + t9788;
  t9765 = t5210*t9763;
  t9776 = -1.*t9774*t9686;
  t9779 = t9765 + t9776;
  t9849 = t9803*t5210*t9609;
  t9855 = t9803*t9540*t9686;
  t9859 = t9849 + t9855;
  t9805 = t9803*t9540*t5210;
  t9808 = -1.*t9803*t9609*t9686;
  t9822 = t9805 + t9808;
  t9933 = -1.*t5210;
  t9935 = 1. + t9933;
  t9937 = 0.135*t9935;
  t9942 = 0. + t9937;
  t9952 = -0.135*t9686;
  t9956 = 0. + t9952;
  t9964 = -1.*t4595;
  t9969 = 1. + t9964;
  t9970 = 0.135*t9969;
  t9971 = 0. + t9970;
  t9980 = -0.135*t9747;
  t9983 = 0. + t9980;
  p_output1[0]=-1.*t4595*t9699 + t9734*t9747;
  p_output1[1]=-1.*t4595*t9779 + t9747*t9797;
  p_output1[2]=-1.*t4595*t9822 + t9747*t9859;
  p_output1[3]=0.;
  p_output1[4]=t5529*t9803;
  p_output1[5]=t9600*t9803;
  p_output1[6]=-1.*t9564;
  p_output1[7]=0.;
  p_output1[8]=-1.*t4595*t9734 - 1.*t9699*t9747;
  p_output1[9]=-1.*t9747*t9779 - 1.*t4595*t9797;
  p_output1[10]=-1.*t9747*t9822 - 1.*t4595*t9859;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.135*(t4595*t9734 + t9699*t9747) - 0.09*(t4595*t9699 - 1.*t9734*t9747) - 0.049*t5529*t9803 + t9683*t9942 + t9622*t9956 + t9734*t9971 + t9699*t9983 + var1[0];
  p_output1[13]=0. + 0.135*(t9747*t9779 + t4595*t9797) - 0.09*(t4595*t9779 - 1.*t9747*t9797) - 0.049*t9600*t9803 + t9774*t9942 + t9763*t9956 + t9797*t9971 + t9779*t9983 + var1[1];
  p_output1[14]=0. + 0.049*t9564 + 0.135*(t9747*t9822 + t4595*t9859) - 0.09*(t4595*t9822 - 1.*t9747*t9859) + t9609*t9803*t9942 + t9540*t9803*t9956 + t9859*t9971 + t9822*t9983 + var1[2];
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

#include "H_hip_rotation_left.hh"

namespace SymExpression
{

void H_hip_rotation_left_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
