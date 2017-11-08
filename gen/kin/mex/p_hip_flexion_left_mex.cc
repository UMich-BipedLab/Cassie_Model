/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:10:57 GMT-05:00
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
  double t995;
  double t976;
  double t999;
  double t981;
  double t1004;
  double t942;
  double t1017;
  double t1022;
  double t1025;
  double t993;
  double t1012;
  double t1013;
  double t1032;
  double t1059;
  double t1060;
  double t1061;
  double t1067;
  double t1052;
  double t1055;
  double t1057;
  double t1077;
  double t957;
  double t958;
  double t966;
  double t973;
  double t1035;
  double t1038;
  double t1115;
  double t1119;
  double t1120;
  double t1107;
  double t1108;
  double t1110;
  double t1066;
  double t1071;
  double t1072;
  double t1078;
  double t1081;
  double t1083;
  double t1135;
  double t1136;
  double t1137;
  double t1178;
  double t1181;
  double t1183;
  t995 = Cos(var1[3]);
  t976 = Cos(var1[5]);
  t999 = Sin(var1[4]);
  t981 = Sin(var1[3]);
  t1004 = Sin(var1[5]);
  t942 = Cos(var1[6]);
  t1017 = t995*t976*t999;
  t1022 = t981*t1004;
  t1025 = t1017 + t1022;
  t993 = -1.*t976*t981;
  t1012 = t995*t999*t1004;
  t1013 = t993 + t1012;
  t1032 = Sin(var1[6]);
  t1059 = Cos(var1[7]);
  t1060 = -1.*t1059;
  t1061 = 1. + t1060;
  t1067 = Sin(var1[7]);
  t1052 = t942*t1013;
  t1055 = t1025*t1032;
  t1057 = t1052 + t1055;
  t1077 = Cos(var1[4]);
  t957 = -1.*t942;
  t958 = 1. + t957;
  t966 = 0.135*t958;
  t973 = 0. + t966;
  t1035 = -0.135*t1032;
  t1038 = 0. + t1035;
  t1115 = t976*t981*t999;
  t1119 = -1.*t995*t1004;
  t1120 = t1115 + t1119;
  t1107 = t995*t976;
  t1108 = t981*t999*t1004;
  t1110 = t1107 + t1108;
  t1066 = 0.135*t1061;
  t1071 = 0.049*t1067;
  t1072 = 0. + t1066 + t1071;
  t1078 = -0.049*t1061;
  t1081 = 0.135*t1067;
  t1083 = 0. + t1078 + t1081;
  t1135 = t942*t1110;
  t1136 = t1120*t1032;
  t1137 = t1135 + t1136;
  t1178 = t1077*t942*t1004;
  t1181 = t1077*t976*t1032;
  t1183 = t1178 + t1181;
  p_output1[0]=0. + t1025*t1038 + t1057*t1072 - 0.09*(-1.*t1013*t1032 + t1025*t942) + t1013*t973 + t1077*t1083*t995 - 0.049*(t1057*t1067 + t1059*t1077*t995) + 0.135*(t1057*t1059 - 1.*t1067*t1077*t995) + var1[0];
  p_output1[1]=0. + t1038*t1120 + t1072*t1137 - 0.09*(-1.*t1032*t1110 + t1120*t942) + t1110*t973 + t1077*t1083*t981 - 0.049*(t1067*t1137 + t1059*t1077*t981) + 0.135*(t1059*t1137 - 1.*t1067*t1077*t981) + var1[1];
  p_output1[2]=0. + t1072*t1183 + t1004*t1077*t973 + t1038*t1077*t976 - 0.09*(-1.*t1004*t1032*t1077 + t1077*t942*t976) - 1.*t1083*t999 - 0.049*(t1067*t1183 - 1.*t1059*t999) + 0.135*(t1059*t1183 + t1067*t999) + var1[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "p_hip_flexion_left_mex.hh"

namespace SymExpression
{

void p_hip_flexion_left_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
