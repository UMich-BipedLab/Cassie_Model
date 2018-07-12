/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:33:38 GMT-04:00
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
  double t26;
  double t6266;
  double t7175;
  double t6637;
  double t7416;
  double t993;
  double t2872;
  double t2925;
  double t3589;
  double t5359;
  double t7160;
  double t7529;
  double t7531;
  double t7681;
  double t7748;
  double t7754;
  double t7805;
  double t261;
  double t7861;
  double t7862;
  double t7882;
  double t7884;
  double t7886;
  double t7893;
  double t7899;
  double t7909;
  double t7915;
  double t7928;
  double t8033;
  double t8043;
  double t8049;
  double t8082;
  double t8085;
  double t8090;
  double t8092;
  double t8123;
  double t8133;
  double t8167;
  double t8187;
  double t8191;
  double t8196;
  double t3487;
  double t4096;
  double t4165;
  double t5564;
  double t5977;
  double t7695;
  double t7698;
  double t7728;
  double t7739;
  double t7820;
  double t7853;
  double t7854;
  double t8270;
  double t8272;
  double t8308;
  double t8336;
  double t8339;
  double t8365;
  double t7897;
  double t7904;
  double t7906;
  double t8376;
  double t8380;
  double t8388;
  double t7989;
  double t7991;
  double t8026;
  double t8091;
  double t8100;
  double t8102;
  double t8422;
  double t8429;
  double t8433;
  double t8463;
  double t8474;
  double t8485;
  double t8170;
  double t8181;
  double t8182;
  double t8515;
  double t8522;
  double t8530;
  double t8551;
  double t8563;
  double t8566;
  double t8676;
  double t8679;
  double t8692;
  double t8759;
  double t8762;
  double t8763;
  double t8791;
  double t8794;
  double t8800;
  double t8809;
  double t8814;
  double t8819;
  double t8884;
  double t8890;
  double t8920;
  t26 = Cos(var1[3]);
  t6266 = Cos(var1[5]);
  t7175 = Sin(var1[3]);
  t6637 = Sin(var1[4]);
  t7416 = Sin(var1[5]);
  t993 = Cos(var1[14]);
  t2872 = -1.*t993;
  t2925 = 1. + t2872;
  t3589 = Sin(var1[14]);
  t5359 = Sin(var1[13]);
  t7160 = t26*t6266*t6637;
  t7529 = t7175*t7416;
  t7531 = t7160 + t7529;
  t7681 = Cos(var1[13]);
  t7748 = -1.*t6266*t7175;
  t7754 = t26*t6637*t7416;
  t7805 = t7748 + t7754;
  t261 = Cos(var1[4]);
  t7861 = t5359*t7531;
  t7862 = t7681*t7805;
  t7882 = t7861 + t7862;
  t7884 = Cos(var1[15]);
  t7886 = -1.*t7884;
  t7893 = 1. + t7886;
  t7899 = Sin(var1[15]);
  t7909 = t7681*t7531;
  t7915 = -1.*t5359*t7805;
  t7928 = t7909 + t7915;
  t8033 = t993*t26*t261;
  t8043 = t3589*t7882;
  t8049 = t8033 + t8043;
  t8082 = Cos(var1[16]);
  t8085 = -1.*t8082;
  t8090 = 1. + t8085;
  t8092 = Sin(var1[16]);
  t8123 = t7899*t7928;
  t8133 = t7884*t8049;
  t8167 = t8123 + t8133;
  t8187 = t7884*t7928;
  t8191 = -1.*t7899*t8049;
  t8196 = t8187 + t8191;
  t3487 = -0.049*t2925;
  t4096 = -0.135*t3589;
  t4165 = 0. + t3487 + t4096;
  t5564 = 0.135*t5359;
  t5977 = 0. + t5564;
  t7695 = -1.*t7681;
  t7698 = 1. + t7695;
  t7728 = -0.135*t7698;
  t7739 = 0. + t7728;
  t7820 = -0.135*t2925;
  t7853 = 0.049*t3589;
  t7854 = 0. + t7820 + t7853;
  t8270 = t6266*t7175*t6637;
  t8272 = -1.*t26*t7416;
  t8308 = t8270 + t8272;
  t8336 = t26*t6266;
  t8339 = t7175*t6637*t7416;
  t8365 = t8336 + t8339;
  t7897 = -0.09*t7893;
  t7904 = 0.049*t7899;
  t7906 = 0. + t7897 + t7904;
  t8376 = t5359*t8308;
  t8380 = t7681*t8365;
  t8388 = t8376 + t8380;
  t7989 = -0.049*t7893;
  t7991 = -0.09*t7899;
  t8026 = 0. + t7989 + t7991;
  t8091 = -0.049*t8090;
  t8100 = -0.21*t8092;
  t8102 = 0. + t8091 + t8100;
  t8422 = t7681*t8308;
  t8429 = -1.*t5359*t8365;
  t8433 = t8422 + t8429;
  t8463 = t993*t261*t7175;
  t8474 = t3589*t8388;
  t8485 = t8463 + t8474;
  t8170 = -0.21*t8090;
  t8181 = 0.049*t8092;
  t8182 = 0. + t8170 + t8181;
  t8515 = t7899*t8433;
  t8522 = t7884*t8485;
  t8530 = t8515 + t8522;
  t8551 = t7884*t8433;
  t8563 = -1.*t7899*t8485;
  t8566 = t8551 + t8563;
  t8676 = t261*t6266*t5359;
  t8679 = t7681*t261*t7416;
  t8692 = t8676 + t8679;
  t8759 = t7681*t261*t6266;
  t8762 = -1.*t261*t5359*t7416;
  t8763 = t8759 + t8762;
  t8791 = -1.*t993*t6637;
  t8794 = t3589*t8692;
  t8800 = t8791 + t8794;
  t8809 = t7899*t8763;
  t8814 = t7884*t8800;
  t8819 = t8809 + t8814;
  t8884 = t7884*t8763;
  t8890 = -1.*t7899*t8800;
  t8920 = t8884 + t8890;
  p_output1[0]=0. + t26*t261*t4165 + t5977*t7531 + t7739*t7805 + t7854*t7882 + t7906*t7928 + t8026*t8049 + t8102*t8167 + t8182*t8196 - 0.21*(-1.*t8092*t8167 + t8082*t8196) - 0.049*(t8082*t8167 + t8092*t8196) - 0.1305*(-1.*t26*t261*t3589 + t7882*t993) + var1[0];
  p_output1[1]=0. + t261*t4165*t7175 + t5977*t8308 + t7739*t8365 + t7854*t8388 + t7906*t8433 + t8026*t8485 + t8102*t8530 + t8182*t8566 - 0.21*(-1.*t8092*t8530 + t8082*t8566) - 0.049*(t8082*t8530 + t8092*t8566) - 0.1305*(-1.*t261*t3589*t7175 + t8388*t993) + var1[1];
  p_output1[2]=0. + t261*t5977*t6266 - 1.*t4165*t6637 + t261*t7416*t7739 + t7854*t8692 + t7906*t8763 + t8026*t8800 + t8102*t8819 + t8182*t8920 - 0.21*(-1.*t8092*t8819 + t8082*t8920) - 0.049*(t8082*t8819 + t8092*t8920) - 0.1305*(t3589*t6637 + t8692*t993) + var1[2];
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

#include "p_knee_joint_right_mex.hh"

namespace SymExpression
{

void p_knee_joint_right_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
