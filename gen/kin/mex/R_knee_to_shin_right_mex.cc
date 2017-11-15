/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:49 GMT-05:00
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
  double t907;
  double t1055;
  double t783;
  double t969;
  double t1061;
  double t1184;
  double t1029;
  double t1104;
  double t1127;
  double t782;
  double t1190;
  double t1270;
  double t1319;
  double t1571;
  double t1151;
  double t1399;
  double t1426;
  double t594;
  double t1587;
  double t1828;
  double t1855;
  double t2087;
  double t2225;
  double t2309;
  double t2367;
  double t2582;
  double t2651;
  double t2822;
  double t1504;
  double t2746;
  double t2797;
  double t571;
  double t2872;
  double t2959;
  double t2991;
  double t486;
  double t3509;
  double t3613;
  double t3619;
  double t3841;
  double t3887;
  double t3953;
  double t3746;
  double t4026;
  double t4103;
  double t4134;
  double t4153;
  double t4166;
  double t4193;
  double t4250;
  double t4293;
  double t3092;
  double t4133;
  double t4337;
  double t4442;
  double t4704;
  double t4714;
  double t4719;
  double t5766;
  double t5872;
  double t5873;
  double t5904;
  double t5960;
  double t5997;
  double t6011;
  double t6029;
  double t6038;
  double t5882;
  double t6087;
  double t6102;
  double t6138;
  double t6156;
  double t6164;
  double t2799;
  double t2992;
  double t3083;
  double t3109;
  double t3117;
  double t3335;
  double t4492;
  double t4845;
  double t5256;
  double t5511;
  double t5576;
  double t5642;
  double t6106;
  double t6195;
  double t6209;
  double t6269;
  double t6280;
  double t6285;
  t907 = Cos(var1[5]);
  t1055 = Sin(var1[3]);
  t783 = Cos(var1[3]);
  t969 = Sin(var1[4]);
  t1061 = Sin(var1[5]);
  t1184 = Sin(var1[13]);
  t1029 = t783*t907*t969;
  t1104 = t1055*t1061;
  t1127 = t1029 + t1104;
  t782 = Cos(var1[13]);
  t1190 = -1.*t907*t1055;
  t1270 = t783*t969*t1061;
  t1319 = t1190 + t1270;
  t1571 = Cos(var1[15]);
  t1151 = t782*t1127;
  t1399 = -1.*t1184*t1319;
  t1426 = t1151 + t1399;
  t594 = Sin(var1[15]);
  t1587 = Cos(var1[14]);
  t1828 = Cos(var1[4]);
  t1855 = t1587*t783*t1828;
  t2087 = Sin(var1[14]);
  t2225 = t1184*t1127;
  t2309 = t782*t1319;
  t2367 = t2225 + t2309;
  t2582 = t2087*t2367;
  t2651 = t1855 + t2582;
  t2822 = Cos(var1[16]);
  t1504 = t594*t1426;
  t2746 = t1571*t2651;
  t2797 = t1504 + t2746;
  t571 = Sin(var1[16]);
  t2872 = t1571*t1426;
  t2959 = -1.*t594*t2651;
  t2991 = t2872 + t2959;
  t486 = Cos(var1[17]);
  t3509 = t907*t1055*t969;
  t3613 = -1.*t783*t1061;
  t3619 = t3509 + t3613;
  t3841 = t783*t907;
  t3887 = t1055*t969*t1061;
  t3953 = t3841 + t3887;
  t3746 = t782*t3619;
  t4026 = -1.*t1184*t3953;
  t4103 = t3746 + t4026;
  t4134 = t1587*t1828*t1055;
  t4153 = t1184*t3619;
  t4166 = t782*t3953;
  t4193 = t4153 + t4166;
  t4250 = t2087*t4193;
  t4293 = t4134 + t4250;
  t3092 = Sin(var1[17]);
  t4133 = t594*t4103;
  t4337 = t1571*t4293;
  t4442 = t4133 + t4337;
  t4704 = t1571*t4103;
  t4714 = -1.*t594*t4293;
  t4719 = t4704 + t4714;
  t5766 = t782*t1828*t907;
  t5872 = -1.*t1828*t1184*t1061;
  t5873 = t5766 + t5872;
  t5904 = -1.*t1587*t969;
  t5960 = t1828*t907*t1184;
  t5997 = t782*t1828*t1061;
  t6011 = t5960 + t5997;
  t6029 = t2087*t6011;
  t6038 = t5904 + t6029;
  t5882 = t594*t5873;
  t6087 = t1571*t6038;
  t6102 = t5882 + t6087;
  t6138 = t1571*t5873;
  t6156 = -1.*t594*t6038;
  t6164 = t6138 + t6156;
  t2799 = -1.*t571*t2797;
  t2992 = t2822*t2991;
  t3083 = t2799 + t2992;
  t3109 = t2822*t2797;
  t3117 = t571*t2991;
  t3335 = t3109 + t3117;
  t4492 = -1.*t571*t4442;
  t4845 = t2822*t4719;
  t5256 = t4492 + t4845;
  t5511 = t2822*t4442;
  t5576 = t571*t4719;
  t5642 = t5511 + t5576;
  t6106 = -1.*t571*t6102;
  t6195 = t2822*t6164;
  t6209 = t6106 + t6195;
  t6269 = t2822*t6102;
  t6280 = t571*t6164;
  t6285 = t6269 + t6280;
  p_output1[0]=t3092*t3335 - 1.*t3083*t486;
  p_output1[1]=-1.*t486*t5256 + t3092*t5642;
  p_output1[2]=-1.*t486*t6209 + t3092*t6285;
  p_output1[3]=t3083*t3092 + t3335*t486;
  p_output1[4]=t3092*t5256 + t486*t5642;
  p_output1[5]=t3092*t6209 + t486*t6285;
  p_output1[6]=-1.*t1587*t2367 + t1828*t2087*t783;
  p_output1[7]=t1055*t1828*t2087 - 1.*t1587*t4193;
  p_output1[8]=-1.*t1587*t6011 - 1.*t2087*t969;
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

#include "R_knee_to_shin_right_mex.hh"

namespace SymExpression
{

void R_knee_to_shin_right_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
