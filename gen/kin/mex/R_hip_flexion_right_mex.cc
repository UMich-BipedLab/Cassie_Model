/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:33:37 GMT-04:00
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
  double t1154;
  double t1313;
  double t720;
  double t1161;
  double t1320;
  double t1929;
  double t1257;
  double t1340;
  double t1384;
  double t691;
  double t2168;
  double t2512;
  double t2649;
  double t599;
  double t3757;
  double t3904;
  double t3914;
  double t4442;
  double t4699;
  double t4813;
  double t5010;
  double t5051;
  double t5091;
  double t5124;
  double t1490;
  double t3107;
  double t3419;
  double t4337;
  double t4467;
  double t4529;
  double t4547;
  double t4563;
  double t4617;
  double t5027;
  double t5334;
  double t5368;
  double t5434;
  double t5531;
  double t5626;
  double t5758;
  double t5764;
  double t5852;
  double t6048;
  double t6051;
  double t6082;
  double t6218;
  double t6244;
  double t6284;
  double t6313;
  double t6318;
  double t6320;
  t1154 = Cos(var1[5]);
  t1313 = Sin(var1[3]);
  t720 = Cos(var1[3]);
  t1161 = Sin(var1[4]);
  t1320 = Sin(var1[5]);
  t1929 = Sin(var1[13]);
  t1257 = t720*t1154*t1161;
  t1340 = t1313*t1320;
  t1384 = t1257 + t1340;
  t691 = Cos(var1[13]);
  t2168 = -1.*t1154*t1313;
  t2512 = t720*t1161*t1320;
  t2649 = t2168 + t2512;
  t599 = Cos(var1[15]);
  t3757 = Sin(var1[15]);
  t3904 = Cos(var1[14]);
  t3914 = Cos(var1[4]);
  t4442 = Sin(var1[14]);
  t4699 = t1154*t1313*t1161;
  t4813 = -1.*t720*t1320;
  t5010 = t4699 + t4813;
  t5051 = t720*t1154;
  t5091 = t1313*t1161*t1320;
  t5124 = t5051 + t5091;
  t1490 = t691*t1384;
  t3107 = -1.*t1929*t2649;
  t3419 = t1490 + t3107;
  t4337 = t3904*t720*t3914;
  t4467 = t1929*t1384;
  t4529 = t691*t2649;
  t4547 = t4467 + t4529;
  t4563 = t4442*t4547;
  t4617 = t4337 + t4563;
  t5027 = t691*t5010;
  t5334 = -1.*t1929*t5124;
  t5368 = t5027 + t5334;
  t5434 = t3904*t3914*t1313;
  t5531 = t1929*t5010;
  t5626 = t691*t5124;
  t5758 = t5531 + t5626;
  t5764 = t4442*t5758;
  t5852 = t5434 + t5764;
  t6048 = t691*t3914*t1154;
  t6051 = -1.*t3914*t1929*t1320;
  t6082 = t6048 + t6051;
  t6218 = -1.*t3904*t1161;
  t6244 = t3914*t1154*t1929;
  t6284 = t691*t3914*t1320;
  t6313 = t6244 + t6284;
  t6318 = t4442*t6313;
  t6320 = t6218 + t6318;
  p_output1[0]=t3757*t4617 - 1.*t3419*t599;
  p_output1[1]=t3757*t5852 - 1.*t5368*t599;
  p_output1[2]=-1.*t599*t6082 + t3757*t6320;
  p_output1[3]=t3419*t3757 + t4617*t599;
  p_output1[4]=t3757*t5368 + t5852*t599;
  p_output1[5]=t3757*t6082 + t599*t6320;
  p_output1[6]=-1.*t3904*t4547 + t3914*t4442*t720;
  p_output1[7]=t1313*t3914*t4442 - 1.*t3904*t5758;
  p_output1[8]=-1.*t1161*t4442 - 1.*t3904*t6313;
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

#include "R_hip_flexion_right_mex.hh"

namespace SymExpression
{

void R_hip_flexion_right_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
