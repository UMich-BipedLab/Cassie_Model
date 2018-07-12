/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:33:30 GMT-04:00
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
  double t3363;
  double t5052;
  double t4328;
  double t4342;
  double t5106;
  double t1029;
  double t2686;
  double t2711;
  double t2794;
  double t3911;
  double t4754;
  double t5298;
  double t5508;
  double t5632;
  double t6885;
  double t6979;
  double t7004;
  double t713;
  double t7217;
  double t7240;
  double t7247;
  double t2774;
  double t2947;
  double t3160;
  double t4072;
  double t4126;
  double t6026;
  double t6227;
  double t6616;
  double t6730;
  double t7119;
  double t7123;
  double t7133;
  double t7452;
  double t7455;
  double t7459;
  double t7475;
  double t7501;
  double t7508;
  double t7533;
  double t7536;
  double t7554;
  double t7728;
  double t7736;
  double t7738;
  double t7847;
  double t7849;
  double t7871;
  double t8010;
  double t8011;
  double t8012;
  double t8135;
  double t8147;
  double t8151;
  double t7561;
  double t8181;
  double t8182;
  double t8206;
  double t8208;
  double t8209;
  double t8227;
  double t8229;
  double t8244;
  double t8325;
  double t8337;
  double t8339;
  double t8165;
  double t7566;
  double t7582;
  double t8215;
  double t8463;
  double t8467;
  double t8470;
  double t8504;
  double t8505;
  double t8304;
  double t8316;
  double t8320;
  double t8322;
  double t8347;
  double t8356;
  double t8361;
  double t7590;
  double t7593;
  double t7597;
  double t8550;
  double t8551;
  double t8559;
  double t8564;
  double t8570;
  double t8631;
  double t8639;
  double t8640;
  double t7401;
  double t8691;
  double t8712;
  double t8723;
  t3363 = Sin(var1[3]);
  t5052 = Cos(var1[3]);
  t4328 = Cos(var1[5]);
  t4342 = Sin(var1[4]);
  t5106 = Sin(var1[5]);
  t1029 = Cos(var1[14]);
  t2686 = -1.*t1029;
  t2711 = 1. + t2686;
  t2794 = Sin(var1[14]);
  t3911 = Sin(var1[13]);
  t4754 = -1.*t4328*t3363*t4342;
  t5298 = t5052*t5106;
  t5508 = t4754 + t5298;
  t5632 = Cos(var1[13]);
  t6885 = -1.*t5052*t4328;
  t6979 = -1.*t3363*t4342*t5106;
  t7004 = t6885 + t6979;
  t713 = Cos(var1[4]);
  t7217 = t3911*t5508;
  t7240 = t5632*t7004;
  t7247 = t7217 + t7240;
  t2774 = -0.049*t2711;
  t2947 = -0.135*t2794;
  t3160 = 0. + t2774 + t2947;
  t4072 = 0.135*t3911;
  t4126 = 0. + t4072;
  t6026 = -1.*t5632;
  t6227 = 1. + t6026;
  t6616 = -0.135*t6227;
  t6730 = 0. + t6616;
  t7119 = -0.135*t2711;
  t7123 = 0.049*t2794;
  t7133 = 0. + t7119 + t7123;
  t7452 = t5052*t4328*t4342;
  t7455 = t3363*t5106;
  t7459 = t7452 + t7455;
  t7475 = -1.*t4328*t3363;
  t7501 = t5052*t4342*t5106;
  t7508 = t7475 + t7501;
  t7533 = t3911*t7459;
  t7536 = t5632*t7508;
  t7554 = t7533 + t7536;
  t7728 = t5052*t713*t4328*t3911;
  t7736 = t5632*t5052*t713*t5106;
  t7738 = t7728 + t7736;
  t7847 = t713*t4328*t3911*t3363;
  t7849 = t5632*t713*t3363*t5106;
  t7871 = t7847 + t7849;
  t8010 = -1.*t4328*t3911*t4342;
  t8011 = -1.*t5632*t4342*t5106;
  t8012 = t8010 + t8011;
  t8135 = t4328*t3363;
  t8147 = -1.*t5052*t4342*t5106;
  t8151 = t8135 + t8147;
  t7561 = t5632*t7459;
  t8181 = t3911*t8151;
  t8182 = t7561 + t8181;
  t8206 = t4328*t3363*t4342;
  t8208 = -1.*t5052*t5106;
  t8209 = t8206 + t8208;
  t8227 = t5632*t8209;
  t8229 = t3911*t7004;
  t8244 = t8227 + t8229;
  t8325 = t5632*t713*t4328;
  t8337 = -1.*t713*t3911*t5106;
  t8339 = t8325 + t8337;
  t8165 = -1.*t3911*t7459;
  t7566 = -1.*t3911*t7508;
  t7582 = t7561 + t7566;
  t8215 = -1.*t3911*t8209;
  t8463 = t5052*t4328;
  t8467 = t3363*t4342*t5106;
  t8470 = t8463 + t8467;
  t8504 = -1.*t3911*t8470;
  t8505 = t8227 + t8504;
  t8304 = -1.*t713*t4328*t3911;
  t8316 = -1.*t5632*t713*t5106;
  t8320 = t8304 + t8316;
  t8322 = -0.09*t8320;
  t8347 = -0.135*t1029*t8339;
  t8356 = t7133*t8339;
  t8361 = -0.049*t2794*t8339;
  t7590 = -1.*t5052*t713*t2794;
  t7593 = t1029*t7554;
  t7597 = t7590 + t7593;
  t8550 = -0.135*t1029;
  t8551 = -0.049*t2794;
  t8559 = t8550 + t8551;
  t8564 = 0.049*t1029;
  t8570 = t8564 + t2947;
  t8631 = t3911*t8209;
  t8639 = t5632*t8470;
  t8640 = t8631 + t8639;
  t7401 = -1.*t1029*t713*t3363;
  t8691 = t713*t4328*t3911;
  t8712 = t5632*t713*t5106;
  t8723 = t8691 + t8712;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t4126*t5508 + t6730*t7004 - 0.09*(t5508*t5632 - 1.*t3911*t7004) - 1.*t3160*t3363*t713 + t7133*t7247 - 0.135*(t2794*t3363*t713 + t1029*t7247) - 0.049*(t2794*t7247 + t7401);
  p_output1[10]=t3160*t5052*t713 + t4126*t7459 + t6730*t7508 + t7133*t7554 - 0.049*(t1029*t5052*t713 + t2794*t7554) - 0.09*t7582 - 0.135*t7597;
  p_output1[11]=0;
  p_output1[12]=-1.*t3160*t4342*t5052 + t4126*t4328*t5052*t713 + t5052*t5106*t6730*t713 - 0.09*(-1.*t3911*t5052*t5106*t713 + t4328*t5052*t5632*t713) + t7133*t7738 - 0.135*(t2794*t4342*t5052 + t1029*t7738) - 0.049*(-1.*t1029*t4342*t5052 + t2794*t7738);
  p_output1[13]=-1.*t3160*t3363*t4342 + t3363*t4126*t4328*t713 + t3363*t5106*t6730*t713 - 0.09*(-1.*t3363*t3911*t5106*t713 + t3363*t4328*t5632*t713) + t7133*t7871 - 0.135*(t2794*t3363*t4342 + t1029*t7871) - 0.049*(-1.*t1029*t3363*t4342 + t2794*t7871);
  p_output1[14]=-1.*t4126*t4328*t4342 - 0.09*(t3911*t4342*t5106 - 1.*t4328*t4342*t5632) - 1.*t4342*t5106*t6730 - 1.*t3160*t713 + t7133*t8012 - 0.135*(t2794*t713 + t1029*t8012) - 0.049*(-1.*t1029*t713 + t2794*t8012);
  p_output1[15]=t6730*t7459 + t4126*t8151 - 0.09*(t5632*t8151 + t8165) - 0.135*t1029*t8182 - 0.049*t2794*t8182 + t7133*t8182;
  p_output1[16]=t4126*t7004 + t6730*t8209 - 0.09*(t7240 + t8215) - 0.135*t1029*t8244 - 0.049*t2794*t8244 + t7133*t8244;
  p_output1[17]=-1.*t4126*t5106*t713 + t4328*t6730*t713 + t8322 + t8347 + t8356 + t8361;
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
  p_output1[39]=0.135*t5632*t7459 - 0.135*t3911*t7508 - 0.135*t1029*t7582 - 0.049*t2794*t7582 + t7133*t7582 - 0.09*(-1.*t5632*t7508 + t8165);
  p_output1[40]=0.135*t5632*t8209 - 0.135*t3911*t8470 - 0.09*(t8215 - 1.*t5632*t8470) - 0.135*t1029*t8505 - 0.049*t2794*t8505 + t7133*t8505;
  p_output1[41]=-0.135*t3911*t5106*t713 + 0.135*t4328*t5632*t713 + t8322 + t8347 + t8356 + t8361;
  p_output1[42]=-0.135*(-1.*t1029*t5052*t713 - 1.*t2794*t7554) - 0.049*t7597 + t5052*t713*t8559 + t7554*t8570;
  p_output1[43]=t3363*t713*t8559 + t8570*t8640 - 0.049*(-1.*t2794*t3363*t713 + t1029*t8640) - 0.135*(t7401 - 1.*t2794*t8640);
  p_output1[44]=-1.*t4342*t8559 + t8570*t8723 - 0.049*(t2794*t4342 + t1029*t8723) - 0.135*(t1029*t4342 - 1.*t2794*t8723);
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

#include "J_hip_rotation_right_mex.hh"

namespace SymExpression
{

void J_hip_rotation_right_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
