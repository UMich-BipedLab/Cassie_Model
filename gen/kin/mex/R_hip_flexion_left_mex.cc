/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 11:07:57 GMT-04:00
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
  double t967;
  double t993;
  double t959;
  double t971;
  double t995;
  double t950;
  double t1037;
  double t1040;
  double t1044;
  double t988;
  double t1003;
  double t1025;
  double t1045;
  double t933;
  double t1066;
  double t1067;
  double t1120;
  double t1123;
  double t1124;
  double t1115;
  double t1116;
  double t1118;
  double t1078;
  double t1091;
  double t1068;
  double t1072;
  double t1074;
  double t1076;
  double t1087;
  double t1089;
  double t1035;
  double t1047;
  double t1048;
  double t1132;
  double t1133;
  double t1138;
  double t1141;
  double t1142;
  double t1143;
  double t1119;
  double t1128;
  double t1130;
  double t1158;
  double t1159;
  double t1160;
  double t1165;
  double t1168;
  double t1169;
  double t1148;
  double t1153;
  double t1154;
  t967 = Cos(var1[5]);
  t993 = Sin(var1[3]);
  t959 = Cos(var1[3]);
  t971 = Sin(var1[4]);
  t995 = Sin(var1[5]);
  t950 = Cos(var1[6]);
  t1037 = -1.*t967*t993;
  t1040 = t959*t971*t995;
  t1044 = t1037 + t1040;
  t988 = t959*t967*t971;
  t1003 = t993*t995;
  t1025 = t988 + t1003;
  t1045 = Sin(var1[6]);
  t933 = Cos(var1[8]);
  t1066 = Cos(var1[4]);
  t1067 = Cos(var1[7]);
  t1120 = t959*t967;
  t1123 = t993*t971*t995;
  t1124 = t1120 + t1123;
  t1115 = t967*t993*t971;
  t1116 = -1.*t959*t995;
  t1118 = t1115 + t1116;
  t1078 = Sin(var1[7]);
  t1091 = Sin(var1[8]);
  t1068 = t959*t1066*t1067;
  t1072 = t950*t1044;
  t1074 = t1025*t1045;
  t1076 = t1072 + t1074;
  t1087 = t1076*t1078;
  t1089 = t1068 + t1087;
  t1035 = t950*t1025;
  t1047 = -1.*t1044*t1045;
  t1048 = t1035 + t1047;
  t1132 = t1066*t1067*t993;
  t1133 = t950*t1124;
  t1138 = t1118*t1045;
  t1141 = t1133 + t1138;
  t1142 = t1141*t1078;
  t1143 = t1132 + t1142;
  t1119 = t950*t1118;
  t1128 = -1.*t1124*t1045;
  t1130 = t1119 + t1128;
  t1158 = -1.*t1067*t971;
  t1159 = t1066*t950*t995;
  t1160 = t1066*t967*t1045;
  t1165 = t1159 + t1160;
  t1168 = t1165*t1078;
  t1169 = t1158 + t1168;
  t1148 = t1066*t967*t950;
  t1153 = -1.*t1066*t995*t1045;
  t1154 = t1148 + t1153;
  p_output1[0]=t1089*t1091 - 1.*t1048*t933;
  p_output1[1]=t1091*t1143 - 1.*t1130*t933;
  p_output1[2]=t1091*t1169 - 1.*t1154*t933;
  p_output1[3]=t1048*t1091 + t1089*t933;
  p_output1[4]=t1091*t1130 + t1143*t933;
  p_output1[5]=t1091*t1154 + t1169*t933;
  p_output1[6]=-1.*t1067*t1076 + t1066*t1078*t959;
  p_output1[7]=-1.*t1067*t1141 + t1066*t1078*t993;
  p_output1[8]=-1.*t1067*t1165 - 1.*t1078*t971;
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
