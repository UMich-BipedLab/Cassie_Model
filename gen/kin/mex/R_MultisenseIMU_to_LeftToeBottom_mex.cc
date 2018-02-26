/*
 * Automatically Generated from Mathematica.
 * Mon 26 Feb 2018 15:42:40 GMT-05:00
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
  double t369;
  double t442;
  double t1461;
  double t1247;
  double t2880;
  double t5775;
  double t5873;
  double t4871;
  double t5835;
  double t5850;
  double t2301;
  double t5878;
  double t5880;
  double t5891;
  double t5917;
  double t5870;
  double t5906;
  double t5908;
  double t2020;
  double t5925;
  double t5926;
  double t5927;
  double t5936;
  double t5913;
  double t5929;
  double t5933;
  double t1717;
  double t5937;
  double t5953;
  double t5956;
  double t5970;
  double t5935;
  double t5960;
  double t5966;
  double t1630;
  double t5973;
  double t5980;
  double t5983;
  double t5998;
  double t6000;
  double t6001;
  double t6007;
  double t6009;
  double t6012;
  double t6002;
  double t6016;
  double t6022;
  double t6026;
  double t6027;
  double t6029;
  double t6025;
  double t6032;
  double t6033;
  double t6037;
  double t6039;
  double t6042;
  double t6036;
  double t6045;
  double t6046;
  double t6049;
  double t6052;
  double t6053;
  double t6066;
  double t6067;
  double t6069;
  double t6073;
  double t6075;
  double t6076;
  double t6072;
  double t6077;
  double t6079;
  double t6083;
  double t6085;
  double t6086;
  double t6082;
  double t6087;
  double t6089;
  double t6093;
  double t6095;
  double t6096;
  double t5969;
  double t5986;
  double t5989;
  double t5991;
  double t5993;
  double t5995;
  double t6047;
  double t6055;
  double t6056;
  double t6059;
  double t6060;
  double t6061;
  double t6092;
  double t6097;
  double t6099;
  double t6103;
  double t6105;
  double t6106;
  t369 = Cos(var1[1]);
  t442 = Sin(var1[0]);
  t1461 = Sin(var1[1]);
  t1247 = Cos(var1[0]);
  t2880 = Cos(var1[2]);
  t5775 = Sin(var1[2]);
  t5873 = Cos(var1[3]);
  t4871 = t2880*t442*t1461;
  t5835 = t1247*t5775;
  t5850 = t4871 + t5835;
  t2301 = Sin(var1[3]);
  t5878 = t1247*t2880;
  t5880 = -1.*t442*t1461*t5775;
  t5891 = t5878 + t5880;
  t5917 = Cos(var1[4]);
  t5870 = -1.*t2301*t5850;
  t5906 = t5873*t5891;
  t5908 = t5870 + t5906;
  t2020 = Sin(var1[4]);
  t5925 = t5873*t5850;
  t5926 = t2301*t5891;
  t5927 = t5925 + t5926;
  t5936 = Cos(var1[5]);
  t5913 = t2020*t5908;
  t5929 = t5917*t5927;
  t5933 = t5913 + t5929;
  t1717 = Sin(var1[5]);
  t5937 = t5917*t5908;
  t5953 = -1.*t2020*t5927;
  t5956 = t5937 + t5953;
  t5970 = Cos(var1[6]);
  t5935 = -1.*t1717*t5933;
  t5960 = t5936*t5956;
  t5966 = t5935 + t5960;
  t1630 = Sin(var1[6]);
  t5973 = t5936*t5933;
  t5980 = t1717*t5956;
  t5983 = t5973 + t5980;
  t5998 = t1247*t2880*t1461;
  t6000 = -1.*t442*t5775;
  t6001 = t5998 + t6000;
  t6007 = -1.*t2880*t442;
  t6009 = -1.*t1247*t1461*t5775;
  t6012 = t6007 + t6009;
  t6002 = -1.*t2301*t6001;
  t6016 = t5873*t6012;
  t6022 = t6002 + t6016;
  t6026 = t5873*t6001;
  t6027 = t2301*t6012;
  t6029 = t6026 + t6027;
  t6025 = t2020*t6022;
  t6032 = t5917*t6029;
  t6033 = t6025 + t6032;
  t6037 = t5917*t6022;
  t6039 = -1.*t2020*t6029;
  t6042 = t6037 + t6039;
  t6036 = -1.*t1717*t6033;
  t6045 = t5936*t6042;
  t6046 = t6036 + t6045;
  t6049 = t5936*t6033;
  t6052 = t1717*t6042;
  t6053 = t6049 + t6052;
  t6066 = -1.*t369*t2880*t2301;
  t6067 = -1.*t5873*t369*t5775;
  t6069 = t6066 + t6067;
  t6073 = t5873*t369*t2880;
  t6075 = -1.*t369*t2301*t5775;
  t6076 = t6073 + t6075;
  t6072 = t2020*t6069;
  t6077 = t5917*t6076;
  t6079 = t6072 + t6077;
  t6083 = t5917*t6069;
  t6085 = -1.*t2020*t6076;
  t6086 = t6083 + t6085;
  t6082 = -1.*t1717*t6079;
  t6087 = t5936*t6086;
  t6089 = t6082 + t6087;
  t6093 = t5936*t6079;
  t6095 = t1717*t6086;
  t6096 = t6093 + t6095;
  t5969 = t1630*t5966;
  t5986 = t5970*t5983;
  t5989 = t5969 + t5986;
  t5991 = t5970*t5966;
  t5993 = -1.*t1630*t5983;
  t5995 = t5991 + t5993;
  t6047 = t1630*t6046;
  t6055 = t5970*t6053;
  t6056 = t6047 + t6055;
  t6059 = t5970*t6046;
  t6060 = -1.*t1630*t6053;
  t6061 = t6059 + t6060;
  t6092 = t1630*t6089;
  t6097 = t5970*t6096;
  t6099 = t6092 + t6097;
  t6103 = t5970*t6089;
  t6105 = -1.*t1630*t6096;
  t6106 = t6103 + t6105;
  p_output1[0]=0. + t369*t442;
  p_output1[1]=0. - 1.*t1247*t369;
  p_output1[2]=0. + t1461;
  p_output1[3]=0. - 0.642788*t5989 - 0.766044*t5995;
  p_output1[4]=0. + 0.642788*t6056 + 0.766044*t6061;
  p_output1[5]=0. + 0.642788*t6099 + 0.766044*t6106;
  p_output1[6]=0. + 0.766044*t5989 - 0.642788*t5995;
  p_output1[7]=0. - 0.766044*t6056 + 0.642788*t6061;
  p_output1[8]=0. - 0.766044*t6099 + 0.642788*t6106;
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
    ( !(mrows == 14 && ncols == 1) && 
      !(mrows == 1 && ncols == 14))) 
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

#include "R_MultisenseIMU_to_LeftToeBottom_mex.hh"

namespace SymExpression
{

void R_MultisenseIMU_to_LeftToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
