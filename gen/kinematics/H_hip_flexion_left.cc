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
  double t9757;
  double t9771;
  double t9624;
  double t9765;
  double t9786;
  double t9622;
  double t9855;
  double t9861;
  double t9863;
  double t9769;
  double t9788;
  double t9798;
  double t9869;
  double t7635;
  double t9983;
  double t9987;
  double t9991;
  double t9942;
  double t9943;
  double t9971;
  double t9928;
  double t10033;
  double t9920;
  double t9921;
  double t9923;
  double t9801;
  double t9873;
  double t9885;
  double t10073;
  double t10012;
  double t10013;
  double t10025;
  double t9980;
  double t9996;
  double t10002;
  double t10129;
  double t10046;
  double t10047;
  double t10053;
  double t10035;
  double t10036;
  double t10041;
  double t10081;
  double t10124;
  double t10128;
  double t10136;
  double t10144;
  double t10150;
  double t10170;
  double t10181;
  double t10186;
  double t10277;
  double t10281;
  double t10076;
  double t10130;
  double t10132;
  double t10238;
  double t10240;
  double t10241;
  double t10244;
  double t10248;
  double t10250;
  double t10252;
  double t10256;
  double t10257;
  double t10258;
  double t10261;
  double t10263;
  double t10283;
  double t10285;
  double t10286;
  double t10289;
  double t10293;
  double t10295;
  double t10133;
  double t10154;
  double t10165;
  double t10167;
  double t10189;
  double t10191;
  t9757 = Cos(var1[5]);
  t9771 = Sin(var1[3]);
  t9624 = Cos(var1[3]);
  t9765 = Sin(var1[4]);
  t9786 = Sin(var1[5]);
  t9622 = Cos(var1[6]);
  t9855 = -1.*t9757*t9771;
  t9861 = t9624*t9765*t9786;
  t9863 = t9855 + t9861;
  t9769 = t9624*t9757*t9765;
  t9788 = t9771*t9786;
  t9798 = t9769 + t9788;
  t9869 = Sin(var1[6]);
  t7635 = Cos(var1[7]);
  t9983 = t9624*t9757;
  t9987 = t9771*t9765*t9786;
  t9991 = t9983 + t9987;
  t9942 = t9757*t9771*t9765;
  t9943 = -1.*t9624*t9786;
  t9971 = t9942 + t9943;
  t9928 = Sin(var1[7]);
  t10033 = Cos(var1[4]);
  t9920 = t9622*t9863;
  t9921 = t9798*t9869;
  t9923 = t9920 + t9921;
  t9801 = t9622*t9798;
  t9873 = -1.*t9863*t9869;
  t9885 = t9801 + t9873;
  t10073 = Cos(var1[8]);
  t10012 = t9622*t9991;
  t10013 = t9971*t9869;
  t10025 = t10012 + t10013;
  t9980 = t9622*t9971;
  t9996 = -1.*t9991*t9869;
  t10002 = t9980 + t9996;
  t10129 = Sin(var1[8]);
  t10046 = t10033*t9622*t9786;
  t10047 = t10033*t9757*t9869;
  t10053 = t10046 + t10047;
  t10035 = t10033*t9757*t9622;
  t10036 = -1.*t10033*t9786*t9869;
  t10041 = t10035 + t10036;
  t10081 = t7635*t9923;
  t10124 = t9885*t9928;
  t10128 = t10081 + t10124;
  t10136 = t7635*t10025;
  t10144 = t10002*t9928;
  t10150 = t10136 + t10144;
  t10170 = t7635*t10053;
  t10181 = t10041*t9928;
  t10186 = t10170 + t10181;
  t10277 = -1.*t10073;
  t10281 = 1. + t10277;
  t10076 = t9624*t10033*t10073;
  t10130 = t10128*t10129;
  t10132 = t10076 + t10130;
  t10238 = -1.*t9622;
  t10240 = 1. + t10238;
  t10241 = 0.135*t10240;
  t10244 = 0. + t10241;
  t10248 = -0.135*t9869;
  t10250 = 0. + t10248;
  t10252 = -1.*t7635;
  t10256 = 1. + t10252;
  t10257 = 0.135*t10256;
  t10258 = 0. + t10257;
  t10261 = -0.135*t9928;
  t10263 = 0. + t10261;
  t10283 = 0.135*t10281;
  t10285 = 0.049*t10129;
  t10286 = 0. + t10283 + t10285;
  t10289 = -0.049*t10281;
  t10293 = 0.135*t10129;
  t10295 = 0. + t10289 + t10293;
  t10133 = t10033*t10073*t9771;
  t10154 = t10150*t10129;
  t10165 = t10133 + t10154;
  t10167 = -1.*t10073*t9765;
  t10189 = t10186*t10129;
  t10191 = t10167 + t10189;
  p_output1[0]=-1.*t7635*t9885 + t9923*t9928;
  p_output1[1]=-1.*t10002*t7635 + t10025*t9928;
  p_output1[2]=-1.*t10041*t7635 + t10053*t9928;
  p_output1[3]=0.;
  p_output1[4]=t10132;
  p_output1[5]=t10165;
  p_output1[6]=t10191;
  p_output1[7]=0.;
  p_output1[8]=-1.*t10073*t10128 + t10033*t10129*t9624;
  p_output1[9]=-1.*t10073*t10150 + t10033*t10129*t9771;
  p_output1[10]=-1.*t10073*t10186 - 1.*t10129*t9765;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.049*t10132 + t10128*t10286 + t10033*t10295*t9624 + 0.135*(t10073*t10128 - 1.*t10033*t10129*t9624) + t10250*t9798 + t10244*t9863 + t10263*t9885 + t10258*t9923 - 0.09*(t7635*t9885 - 1.*t9923*t9928) + var1[0];
  p_output1[13]=0. - 0.049*t10165 + t10025*t10258 + t10002*t10263 + t10150*t10286 + t10033*t10295*t9771 + 0.135*(t10073*t10150 - 1.*t10033*t10129*t9771) - 0.09*(t10002*t7635 - 1.*t10025*t9928) + t10250*t9971 + t10244*t9991 + var1[1];
  p_output1[14]=0. - 0.049*t10191 + t10053*t10258 + t10041*t10263 + t10186*t10286 + t10033*t10250*t9757 - 1.*t10295*t9765 + 0.135*(t10073*t10186 + t10129*t9765) + t10033*t10244*t9786 - 0.09*(t10041*t7635 - 1.*t10053*t9928) + var1[2];
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

#include "H_hip_flexion_left.hh"

namespace SymExpression
{

void H_hip_flexion_left_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
