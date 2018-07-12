/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:32:52 GMT-04:00
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
  double t1152;
  double t1364;
  double t1392;
  double t1360;
  double t1409;
  double t1275;
  double t1366;
  double t1431;
  double t1433;
  double t1456;
  double t1457;
  double t1482;
  double t1490;
  double t996;
  double t1319;
  double t1330;
  double t1349;
  double t1354;
  double t1499;
  double t1532;
  double t1624;
  double t1635;
  double t1655;
  double t1664;
  double t1674;
  double t1705;
  double t2013;
  double t2023;
  double t2039;
  double t2158;
  double t2162;
  double t2167;
  double t2058;
  double t2178;
  double t2359;
  double t2365;
  double t2394;
  double t2228;
  double t2235;
  double t2247;
  double t2251;
  t1152 = Sin(var1[3]);
  t1364 = Cos(var1[5]);
  t1392 = Sin(var1[4]);
  t1360 = Cos(var1[3]);
  t1409 = Sin(var1[5]);
  t1275 = Cos(var1[6]);
  t1366 = -1.*t1360*t1364;
  t1431 = -1.*t1152*t1392*t1409;
  t1433 = t1366 + t1431;
  t1456 = -1.*t1364*t1152*t1392;
  t1457 = t1360*t1409;
  t1482 = t1456 + t1457;
  t1490 = Sin(var1[6]);
  t996 = Cos(var1[4]);
  t1319 = -1.*t1275;
  t1330 = 1. + t1319;
  t1349 = 0.135*t1330;
  t1354 = 0. + t1349;
  t1499 = -0.135*t1490;
  t1532 = 0. + t1499;
  t1624 = -1.*t1364*t1152;
  t1635 = t1360*t1392*t1409;
  t1655 = t1624 + t1635;
  t1664 = t1360*t1364*t1392;
  t1674 = t1152*t1409;
  t1705 = t1664 + t1674;
  t2013 = t1364*t1152;
  t2023 = -1.*t1360*t1392*t1409;
  t2039 = t2013 + t2023;
  t2158 = t1364*t1152*t1392;
  t2162 = -1.*t1360*t1409;
  t2167 = t2158 + t2162;
  t2058 = t1275*t1705;
  t2178 = t1275*t2167;
  t2359 = t1360*t1364;
  t2365 = t1152*t1392*t1409;
  t2394 = t2359 + t2365;
  t2228 = t996*t1364*t1275;
  t2235 = -1.*t996*t1409*t1490;
  t2247 = t2228 + t2235;
  t2251 = 0.135*t2247;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1354*t1433 + 0.135*(t1275*t1433 + t1482*t1490) + t1482*t1532 + 0.049*t1152*t996;
  p_output1[10]=t1354*t1655 + t1532*t1705 + 0.135*(t1275*t1655 + t1490*t1705) - 0.049*t1360*t996;
  p_output1[11]=0;
  p_output1[12]=0.049*t1360*t1392 + t1354*t1360*t1409*t996 + t1360*t1364*t1532*t996 + 0.135*(t1275*t1360*t1409*t996 + t1360*t1364*t1490*t996);
  p_output1[13]=0.049*t1152*t1392 + t1152*t1354*t1409*t996 + t1152*t1364*t1532*t996 + 0.135*(t1152*t1275*t1409*t996 + t1152*t1364*t1490*t996);
  p_output1[14]=-1.*t1354*t1392*t1409 + 0.135*(-1.*t1275*t1392*t1409 - 1.*t1364*t1392*t1490) - 1.*t1364*t1392*t1532 + 0.049*t996;
  p_output1[15]=t1354*t1705 + t1532*t2039 + 0.135*(t1490*t2039 + t2058);
  p_output1[16]=t1433*t1532 + t1354*t2167 + 0.135*(t1433*t1490 + t2178);
  p_output1[17]=t2251 + t1354*t1364*t996 - 1.*t1409*t1532*t996;
  p_output1[18]=0.135*t1490*t1655 - 0.135*t1275*t1705 + 0.135*(-1.*t1490*t1655 + t2058);
  p_output1[19]=-0.135*t1275*t2167 + 0.135*t1490*t2394 + 0.135*(t2178 - 1.*t1490*t2394);
  p_output1[20]=t2251 - 0.135*t1275*t1364*t996 + 0.135*t1409*t1490*t996;
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
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
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

#include "J_hip_abduction_left_mex.hh"

namespace SymExpression
{

void J_hip_abduction_left_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
