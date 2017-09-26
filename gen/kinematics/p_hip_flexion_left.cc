/*
 * Automatically Generated from Mathematica.
 * Tue 26 Sep 2017 12:22:18 GMT-04:00
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
  double t9733;
  double t9659;
  double t9749;
  double t9706;
  double t9754;
  double t8884;
  double t9716;
  double t9757;
  double t9763;
  double t9769;
  double t9771;
  double t9786;
  double t9787;
  double t9805;
  double t9885;
  double t9889;
  double t9903;
  double t9863;
  double t9869;
  double t9871;
  double t9914;
  double t9956;
  double t9957;
  double t9970;
  double t9973;
  double t9942;
  double t9943;
  double t9952;
  double t9988;
  double t9576;
  double t9615;
  double t9622;
  double t9624;
  double t9788;
  double t9798;
  double t9832;
  double t9849;
  double t9855;
  double t9861;
  double t10041;
  double t10044;
  double t10045;
  double t10047;
  double t10050;
  double t10053;
  double t9918;
  double t9920;
  double t10081;
  double t10082;
  double t10104;
  double t10065;
  double t10073;
  double t10074;
  double t9971;
  double t9980;
  double t9983;
  double t9991;
  double t9996;
  double t9998;
  double t10133;
  double t10136;
  double t10142;
  double t10223;
  double t10224;
  double t10225;
  double t10211;
  double t10212;
  double t10220;
  double t10244;
  double t10245;
  double t10246;
  t9733 = Cos(var1[3]);
  t9659 = Cos(var1[5]);
  t9749 = Sin(var1[4]);
  t9706 = Sin(var1[3]);
  t9754 = Sin(var1[5]);
  t8884 = Cos(var1[6]);
  t9716 = -1.*t9659*t9706;
  t9757 = t9733*t9749*t9754;
  t9763 = t9716 + t9757;
  t9769 = t9733*t9659*t9749;
  t9771 = t9706*t9754;
  t9786 = t9769 + t9771;
  t9787 = Sin(var1[6]);
  t9805 = Cos(var1[7]);
  t9885 = t8884*t9786;
  t9889 = -1.*t9763*t9787;
  t9903 = t9885 + t9889;
  t9863 = t8884*t9763;
  t9869 = t9786*t9787;
  t9871 = t9863 + t9869;
  t9914 = Sin(var1[7]);
  t9956 = Cos(var1[8]);
  t9957 = -1.*t9956;
  t9970 = 1. + t9957;
  t9973 = Sin(var1[8]);
  t9942 = t9805*t9871;
  t9943 = t9903*t9914;
  t9952 = t9942 + t9943;
  t9988 = Cos(var1[4]);
  t9576 = -1.*t8884;
  t9615 = 1. + t9576;
  t9622 = 0.135*t9615;
  t9624 = 0. + t9622;
  t9788 = -0.135*t9787;
  t9798 = 0. + t9788;
  t9832 = -1.*t9805;
  t9849 = 1. + t9832;
  t9855 = 0.135*t9849;
  t9861 = 0. + t9855;
  t10041 = t9733*t9659;
  t10044 = t9706*t9749*t9754;
  t10045 = t10041 + t10044;
  t10047 = t9659*t9706*t9749;
  t10050 = -1.*t9733*t9754;
  t10053 = t10047 + t10050;
  t9918 = -0.135*t9914;
  t9920 = 0. + t9918;
  t10081 = t8884*t10053;
  t10082 = -1.*t10045*t9787;
  t10104 = t10081 + t10082;
  t10065 = t8884*t10045;
  t10073 = t10053*t9787;
  t10074 = t10065 + t10073;
  t9971 = 0.135*t9970;
  t9980 = 0.049*t9973;
  t9983 = 0. + t9971 + t9980;
  t9991 = -0.049*t9970;
  t9996 = 0.135*t9973;
  t9998 = 0. + t9991 + t9996;
  t10133 = t9805*t10074;
  t10136 = t10104*t9914;
  t10142 = t10133 + t10136;
  t10223 = t9988*t9659*t8884;
  t10224 = -1.*t9988*t9754*t9787;
  t10225 = t10223 + t10224;
  t10211 = t9988*t8884*t9754;
  t10212 = t9988*t9659*t9787;
  t10220 = t10211 + t10212;
  t10244 = t9805*t10220;
  t10245 = t10225*t9914;
  t10246 = t10244 + t10245;
  p_output1[0]=0. + t9624*t9763 + t9786*t9798 + t9861*t9871 - 0.09*(t9805*t9903 - 1.*t9871*t9914) + t9903*t9920 + t9952*t9983 - 0.049*(t9952*t9973 + t9733*t9956*t9988) + 0.135*(t9952*t9956 - 1.*t9733*t9973*t9988) + t9733*t9988*t9998 + var1[0];
  p_output1[1]=0. + t10045*t9624 + t10053*t9798 + t10074*t9861 - 0.09*(t10104*t9805 - 1.*t10074*t9914) + t10104*t9920 + t10142*t9983 - 0.049*(t10142*t9973 + t9706*t9956*t9988) + 0.135*(t10142*t9956 - 1.*t9706*t9973*t9988) + t9706*t9988*t9998 + var1[1];
  p_output1[2]=0. + t10220*t9861 - 0.09*(t10225*t9805 - 1.*t10220*t9914) + t10225*t9920 - 0.049*(-1.*t9749*t9956 + t10246*t9973) + 0.135*(t10246*t9956 + t9749*t9973) + t10246*t9983 + t9624*t9754*t9988 + t9659*t9798*t9988 - 1.*t9749*t9998 + var1[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "p_hip_flexion_left.hh"

namespace SymExpression
{

void p_hip_flexion_left_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
