/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 11:08:16 GMT-04:00
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
  double t385;
  double t3181;
  double t239;
  double t588;
  double t4594;
  double t55;
  double t6890;
  double t6925;
  double t3100;
  double t6804;
  double t6867;
  double t6894;
  double t6900;
  double t6908;
  double t6932;
  double t6934;
  double t6911;
  double t6912;
  double t6913;
  double t6917;
  double t6920;
  double t6921;
  double t6935;
  double t6936;
  double t6937;
  double t6946;
  double t6947;
  double t6948;
  double t6954;
  double t6959;
  double t6960;
  double t6974;
  double t6976;
  double t6933;
  double t6939;
  double t6941;
  double t6977;
  double t6979;
  double t6980;
  double t6982;
  double t6983;
  double t6985;
  double t6986;
  double t6992;
  double t6994;
  double t6996;
  double t6997;
  double t6998;
  double t6943;
  double t6950;
  double t6951;
  double t6953;
  double t6961;
  double t6962;
  t385 = Cos(var1[5]);
  t3181 = Sin(var1[3]);
  t239 = Cos(var1[3]);
  t588 = Sin(var1[4]);
  t4594 = Sin(var1[5]);
  t55 = Cos(var1[13]);
  t6890 = Sin(var1[13]);
  t6925 = Cos(var1[4]);
  t3100 = t239*t385*t588;
  t6804 = t3181*t4594;
  t6867 = t3100 + t6804;
  t6894 = -1.*t385*t3181;
  t6900 = t239*t588*t4594;
  t6908 = t6894 + t6900;
  t6932 = Cos(var1[14]);
  t6934 = Sin(var1[14]);
  t6911 = t385*t3181*t588;
  t6912 = -1.*t239*t4594;
  t6913 = t6911 + t6912;
  t6917 = t239*t385;
  t6920 = t3181*t588*t4594;
  t6921 = t6917 + t6920;
  t6935 = t6890*t6867;
  t6936 = t55*t6908;
  t6937 = t6935 + t6936;
  t6946 = t6890*t6913;
  t6947 = t55*t6921;
  t6948 = t6946 + t6947;
  t6954 = t6925*t385*t6890;
  t6959 = t55*t6925*t4594;
  t6960 = t6954 + t6959;
  t6974 = -1.*t6932;
  t6976 = 1. + t6974;
  t6933 = t6932*t239*t6925;
  t6939 = t6934*t6937;
  t6941 = t6933 + t6939;
  t6977 = -0.049*t6976;
  t6979 = -0.135*t6934;
  t6980 = 0. + t6977 + t6979;
  t6982 = 0.135*t6890;
  t6983 = 0. + t6982;
  t6985 = -1.*t55;
  t6986 = 1. + t6985;
  t6992 = -0.135*t6986;
  t6994 = 0. + t6992;
  t6996 = -0.135*t6976;
  t6997 = 0.049*t6934;
  t6998 = 0. + t6996 + t6997;
  t6943 = t6932*t6925*t3181;
  t6950 = t6934*t6948;
  t6951 = t6943 + t6950;
  t6953 = -1.*t6932*t588;
  t6961 = t6934*t6960;
  t6962 = t6953 + t6961;
  p_output1[0]=-1.*t55*t6867 + t6890*t6908;
  p_output1[1]=-1.*t55*t6913 + t6890*t6921;
  p_output1[2]=-1.*t385*t55*t6925 + t4594*t6890*t6925;
  p_output1[3]=0.;
  p_output1[4]=t6941;
  p_output1[5]=t6951;
  p_output1[6]=t6962;
  p_output1[7]=0.;
  p_output1[8]=t239*t6925*t6934 - 1.*t6932*t6937;
  p_output1[9]=t3181*t6925*t6934 - 1.*t6932*t6948;
  p_output1[10]=-1.*t588*t6934 - 1.*t6932*t6960;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.09*(t55*t6867 - 1.*t6890*t6908) - 0.135*(-1.*t239*t6925*t6934 + t6932*t6937) - 0.049*t6941 + t239*t6925*t6980 + t6867*t6983 + t6908*t6994 + t6937*t6998 + var1[0];
  p_output1[13]=0. - 0.09*(t55*t6913 - 1.*t6890*t6921) - 0.135*(-1.*t3181*t6925*t6934 + t6932*t6948) - 0.049*t6951 + t3181*t6925*t6980 + t6913*t6983 + t6921*t6994 + t6948*t6998 + var1[1];
  p_output1[14]=0. - 0.09*(t385*t55*t6925 - 1.*t4594*t6890*t6925) - 0.135*(t588*t6934 + t6932*t6960) - 0.049*t6962 - 1.*t588*t6980 + t385*t6925*t6983 + t4594*t6925*t6994 + t6960*t6998 + var1[2];
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
    ( !(mrows == 20 && ncols == 1) && 
      !(mrows == 1 && ncols == 20))) 
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

#include "H_hip_rotation_right_mex.hh"

namespace SymExpression
{

void H_hip_rotation_right_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
