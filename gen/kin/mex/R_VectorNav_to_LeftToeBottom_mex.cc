/*
 * Automatically Generated from Mathematica.
 * Mon 26 Feb 2018 15:42:31 GMT-05:00
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
  double t1294;
  double t4842;
  double t4778;
  double t4786;
  double t4853;
  double t4882;
  double t4836;
  double t4861;
  double t4872;
  double t4774;
  double t4887;
  double t4890;
  double t4895;
  double t4915;
  double t4881;
  double t4905;
  double t4909;
  double t4769;
  double t4920;
  double t4950;
  double t4957;
  double t4968;
  double t4914;
  double t4959;
  double t4961;
  double t4680;
  double t4972;
  double t4977;
  double t4979;
  double t549;
  double t22;
  double t1699;
  double t5002;
  double t5004;
  double t5008;
  double t5016;
  double t5018;
  double t5021;
  double t5014;
  double t5024;
  double t5028;
  double t5036;
  double t5038;
  double t5039;
  double t5034;
  double t5041;
  double t5042;
  double t5044;
  double t5046;
  double t5047;
  double t5043;
  double t5049;
  double t5050;
  double t5052;
  double t5054;
  double t5055;
  double t5069;
  double t5072;
  double t5073;
  double t5076;
  double t5077;
  double t5079;
  double t5075;
  double t5082;
  double t5083;
  double t5086;
  double t5087;
  double t5089;
  double t5085;
  double t5092;
  double t5093;
  double t5096;
  double t5097;
  double t5099;
  double t5095;
  double t5102;
  double t5103;
  double t5106;
  double t5107;
  double t5109;
  double t4964;
  double t4980;
  double t4983;
  double t4987;
  double t4990;
  double t4996;
  double t5051;
  double t5056;
  double t5057;
  double t5059;
  double t5062;
  double t5065;
  double t5105;
  double t5110;
  double t5111;
  double t5113;
  double t5114;
  double t5115;
  t1294 = Cos(var1[1]);
  t4842 = Cos(var1[3]);
  t4778 = Cos(var1[2]);
  t4786 = Sin(var1[3]);
  t4853 = Sin(var1[2]);
  t4882 = Cos(var1[4]);
  t4836 = -1.*t1294*t4778*t4786;
  t4861 = -1.*t4842*t1294*t4853;
  t4872 = t4836 + t4861;
  t4774 = Sin(var1[4]);
  t4887 = t4842*t1294*t4778;
  t4890 = -1.*t1294*t4786*t4853;
  t4895 = t4887 + t4890;
  t4915 = Cos(var1[5]);
  t4881 = t4774*t4872;
  t4905 = t4882*t4895;
  t4909 = t4881 + t4905;
  t4769 = Sin(var1[5]);
  t4920 = t4882*t4872;
  t4950 = -1.*t4774*t4895;
  t4957 = t4920 + t4950;
  t4968 = Cos(var1[6]);
  t4914 = -1.*t4769*t4909;
  t4959 = t4915*t4957;
  t4961 = t4914 + t4959;
  t4680 = Sin(var1[6]);
  t4972 = t4915*t4909;
  t4977 = t4769*t4957;
  t4979 = t4972 + t4977;
  t549 = Cos(var1[0]);
  t22 = Sin(var1[1]);
  t1699 = Sin(var1[0]);
  t5002 = t549*t4778*t22;
  t5004 = -1.*t1699*t4853;
  t5008 = t5002 + t5004;
  t5016 = -1.*t4778*t1699;
  t5018 = -1.*t549*t22*t4853;
  t5021 = t5016 + t5018;
  t5014 = -1.*t4786*t5008;
  t5024 = t4842*t5021;
  t5028 = t5014 + t5024;
  t5036 = t4842*t5008;
  t5038 = t4786*t5021;
  t5039 = t5036 + t5038;
  t5034 = t4774*t5028;
  t5041 = t4882*t5039;
  t5042 = t5034 + t5041;
  t5044 = t4882*t5028;
  t5046 = -1.*t4774*t5039;
  t5047 = t5044 + t5046;
  t5043 = -1.*t4769*t5042;
  t5049 = t4915*t5047;
  t5050 = t5043 + t5049;
  t5052 = t4915*t5042;
  t5054 = t4769*t5047;
  t5055 = t5052 + t5054;
  t5069 = t4778*t1699*t22;
  t5072 = t549*t4853;
  t5073 = t5069 + t5072;
  t5076 = t549*t4778;
  t5077 = -1.*t1699*t22*t4853;
  t5079 = t5076 + t5077;
  t5075 = -1.*t4786*t5073;
  t5082 = t4842*t5079;
  t5083 = t5075 + t5082;
  t5086 = t4842*t5073;
  t5087 = t4786*t5079;
  t5089 = t5086 + t5087;
  t5085 = t4774*t5083;
  t5092 = t4882*t5089;
  t5093 = t5085 + t5092;
  t5096 = t4882*t5083;
  t5097 = -1.*t4774*t5089;
  t5099 = t5096 + t5097;
  t5095 = -1.*t4769*t5093;
  t5102 = t4915*t5099;
  t5103 = t5095 + t5102;
  t5106 = t4915*t5093;
  t5107 = t4769*t5099;
  t5109 = t5106 + t5107;
  t4964 = t4680*t4961;
  t4980 = t4968*t4979;
  t4983 = t4964 + t4980;
  t4987 = t4968*t4961;
  t4990 = -1.*t4680*t4979;
  t4996 = t4987 + t4990;
  t5051 = t4680*t5050;
  t5056 = t4968*t5055;
  t5057 = t5051 + t5056;
  t5059 = t4968*t5050;
  t5062 = -1.*t4680*t5055;
  t5065 = t5059 + t5062;
  t5105 = t4680*t5103;
  t5110 = t4968*t5109;
  t5111 = t5105 + t5110;
  t5113 = t4968*t5103;
  t5114 = -1.*t4680*t5109;
  t5115 = t5113 + t5114;
  p_output1[0]=0. + t22;
  p_output1[1]=0. + t1294*t549;
  p_output1[2]=0. + t1294*t1699;
  p_output1[3]=0. + 0.642788*t4983 + 0.766044*t4996;
  p_output1[4]=0. - 0.642788*t5057 - 0.766044*t5065;
  p_output1[5]=0. - 0.642788*t5111 - 0.766044*t5115;
  p_output1[6]=0. - 0.766044*t4983 + 0.642788*t4996;
  p_output1[7]=0. + 0.766044*t5057 - 0.642788*t5065;
  p_output1[8]=0. + 0.766044*t5111 - 0.642788*t5115;
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

#include "R_VectorNav_to_LeftToeBottom_mex.hh"

namespace SymExpression
{

void R_VectorNav_to_LeftToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
