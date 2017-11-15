/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:04 GMT-05:00
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
  double t1003;
  double t1029;
  double t995;
  double t1007;
  double t1031;
  double t986;
  double t1073;
  double t1076;
  double t1080;
  double t1024;
  double t1039;
  double t1061;
  double t1081;
  double t969;
  double t1102;
  double t1103;
  double t1156;
  double t1159;
  double t1160;
  double t1151;
  double t1152;
  double t1154;
  double t1114;
  double t1127;
  double t1104;
  double t1108;
  double t1110;
  double t1112;
  double t1123;
  double t1125;
  double t1071;
  double t1083;
  double t1084;
  double t1168;
  double t1169;
  double t1174;
  double t1177;
  double t1178;
  double t1179;
  double t1155;
  double t1164;
  double t1166;
  double t1194;
  double t1195;
  double t1196;
  double t1201;
  double t1204;
  double t1205;
  double t1184;
  double t1189;
  double t1190;
  t1003 = Cos(var1[5]);
  t1029 = Sin(var1[3]);
  t995 = Cos(var1[3]);
  t1007 = Sin(var1[4]);
  t1031 = Sin(var1[5]);
  t986 = Cos(var1[6]);
  t1073 = -1.*t1003*t1029;
  t1076 = t995*t1007*t1031;
  t1080 = t1073 + t1076;
  t1024 = t995*t1003*t1007;
  t1039 = t1029*t1031;
  t1061 = t1024 + t1039;
  t1081 = Sin(var1[6]);
  t969 = Cos(var1[8]);
  t1102 = Cos(var1[4]);
  t1103 = Cos(var1[7]);
  t1156 = t995*t1003;
  t1159 = t1029*t1007*t1031;
  t1160 = t1156 + t1159;
  t1151 = t1003*t1029*t1007;
  t1152 = -1.*t995*t1031;
  t1154 = t1151 + t1152;
  t1114 = Sin(var1[7]);
  t1127 = Sin(var1[8]);
  t1104 = t995*t1102*t1103;
  t1108 = t986*t1080;
  t1110 = t1061*t1081;
  t1112 = t1108 + t1110;
  t1123 = t1112*t1114;
  t1125 = t1104 + t1123;
  t1071 = t986*t1061;
  t1083 = -1.*t1080*t1081;
  t1084 = t1071 + t1083;
  t1168 = t1102*t1103*t1029;
  t1169 = t986*t1160;
  t1174 = t1154*t1081;
  t1177 = t1169 + t1174;
  t1178 = t1177*t1114;
  t1179 = t1168 + t1178;
  t1155 = t986*t1154;
  t1164 = -1.*t1160*t1081;
  t1166 = t1155 + t1164;
  t1194 = -1.*t1103*t1007;
  t1195 = t1102*t986*t1031;
  t1196 = t1102*t1003*t1081;
  t1201 = t1195 + t1196;
  t1204 = t1201*t1114;
  t1205 = t1194 + t1204;
  t1184 = t1102*t1003*t986;
  t1189 = -1.*t1102*t1031*t1081;
  t1190 = t1184 + t1189;
  p_output1[0]=t1125*t1127 - 1.*t1084*t969;
  p_output1[1]=t1127*t1179 - 1.*t1166*t969;
  p_output1[2]=t1127*t1205 - 1.*t1190*t969;
  p_output1[3]=t1084*t1127 + t1125*t969;
  p_output1[4]=t1127*t1166 + t1179*t969;
  p_output1[5]=t1127*t1190 + t1205*t969;
  p_output1[6]=-1.*t1103*t1112 + t1102*t1114*t995;
  p_output1[7]=t1029*t1102*t1114 - 1.*t1103*t1177;
  p_output1[8]=-1.*t1007*t1114 - 1.*t1103*t1201;
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
