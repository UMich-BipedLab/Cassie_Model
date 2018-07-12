/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:33:22 GMT-04:00
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
  double t2709;
  double t6091;
  double t4993;
  double t5917;
  double t6319;
  double t3853;
  double t5968;
  double t6661;
  double t6705;
  double t6734;
  double t6766;
  double t6769;
  double t6775;
  double t2214;
  double t4000;
  double t4721;
  double t6749;
  double t6760;
  double t6762;
  double t6764;
  double t6834;
  double t6843;
  double t6848;
  double t6863;
  double t6867;
  double t6868;
  double t7129;
  double t7141;
  double t7164;
  double t7260;
  double t7262;
  double t7271;
  double t7216;
  double t7315;
  double t7456;
  double t7459;
  double t7460;
  double t7364;
  double t7370;
  double t7376;
  double t7380;
  t2709 = Sin(var1[3]);
  t6091 = Cos(var1[3]);
  t4993 = Cos(var1[5]);
  t5917 = Sin(var1[4]);
  t6319 = Sin(var1[5]);
  t3853 = Sin(var1[13]);
  t5968 = -1.*t4993*t2709*t5917;
  t6661 = t6091*t6319;
  t6705 = t5968 + t6661;
  t6734 = Cos(var1[13]);
  t6766 = -1.*t6091*t4993;
  t6769 = -1.*t2709*t5917*t6319;
  t6775 = t6766 + t6769;
  t2214 = Cos(var1[4]);
  t4000 = 0.135*t3853;
  t4721 = 0. + t4000;
  t6749 = -1.*t6734;
  t6760 = 1. + t6749;
  t6762 = -0.135*t6760;
  t6764 = 0. + t6762;
  t6834 = t6091*t4993*t5917;
  t6843 = t2709*t6319;
  t6848 = t6834 + t6843;
  t6863 = -1.*t4993*t2709;
  t6867 = t6091*t5917*t6319;
  t6868 = t6863 + t6867;
  t7129 = t4993*t2709;
  t7141 = -1.*t6091*t5917*t6319;
  t7164 = t7129 + t7141;
  t7260 = t4993*t2709*t5917;
  t7262 = -1.*t6091*t6319;
  t7271 = t7260 + t7262;
  t7216 = t6734*t6848;
  t7315 = t6734*t7271;
  t7456 = t6091*t4993;
  t7459 = t2709*t5917*t6319;
  t7460 = t7456 + t7459;
  t7364 = t6734*t2214*t4993;
  t7370 = -1.*t2214*t3853*t6319;
  t7376 = t7364 + t7370;
  t7380 = -0.135*t7376;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=0.049*t2214*t2709 + t4721*t6705 + t6764*t6775 - 0.135*(t3853*t6705 + t6734*t6775);
  p_output1[10]=-0.049*t2214*t6091 + t4721*t6848 + t6764*t6868 - 0.135*(t3853*t6848 + t6734*t6868);
  p_output1[11]=0;
  p_output1[12]=t2214*t4721*t4993*t6091 + 0.049*t5917*t6091 - 0.135*(t2214*t3853*t4993*t6091 + t2214*t6091*t6319*t6734) + t2214*t6091*t6319*t6764;
  p_output1[13]=t2214*t2709*t4721*t4993 + 0.049*t2709*t5917 - 0.135*(t2214*t2709*t3853*t4993 + t2214*t2709*t6319*t6734) + t2214*t2709*t6319*t6764;
  p_output1[14]=0.049*t2214 - 1.*t4721*t4993*t5917 - 0.135*(-1.*t3853*t4993*t5917 - 1.*t5917*t6319*t6734) - 1.*t5917*t6319*t6764;
  p_output1[15]=t6764*t6848 + t4721*t7164 - 0.135*(t3853*t7164 + t7216);
  p_output1[16]=t4721*t6775 + t6764*t7271 - 0.135*(t3853*t6775 + t7315);
  p_output1[17]=-1.*t2214*t4721*t6319 + t2214*t4993*t6764 + t7380;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0.135*t6734*t6848 - 0.135*t3853*t6868 - 0.135*(-1.*t3853*t6868 + t7216);
  p_output1[40]=0.135*t6734*t7271 - 0.135*t3853*t7460 - 0.135*(t7315 - 1.*t3853*t7460);
  p_output1[41]=-0.135*t2214*t3853*t6319 + 0.135*t2214*t4993*t6734 + t7380;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 20, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_hip_abduction_right_mex.hh"

namespace SymExpression
{

void J_hip_abduction_right_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
