/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:33:01 GMT-04:00
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
  double t491;
  double t718;
  double t438;
  double t544;
  double t723;
  double t258;
  double t1245;
  double t1339;
  double t1344;
  double t660;
  double t983;
  double t1087;
  double t1391;
  double t65;
  double t1479;
  double t1555;
  double t2236;
  double t2272;
  double t2280;
  double t2040;
  double t2063;
  double t2124;
  double t1712;
  double t1809;
  double t1600;
  double t1606;
  double t1644;
  double t1689;
  double t1719;
  double t1769;
  double t1121;
  double t1432;
  double t1447;
  double t2490;
  double t2497;
  double t2504;
  double t2508;
  double t2552;
  double t2561;
  double t2148;
  double t2352;
  double t2425;
  double t2749;
  double t2923;
  double t2966;
  double t2987;
  double t2996;
  double t3042;
  double t2640;
  double t2654;
  double t2698;
  double t4117;
  double t4122;
  double t4405;
  double t4408;
  double t3210;
  double t3227;
  double t3236;
  double t3935;
  double t3940;
  double t3950;
  double t4013;
  double t4043;
  double t4085;
  double t4149;
  double t4215;
  double t4224;
  double t4303;
  double t4311;
  double t4313;
  double t4414;
  double t4417;
  double t4418;
  double t4549;
  double t4556;
  double t4566;
  double t3440;
  double t3468;
  double t3490;
  double t3506;
  double t3525;
  double t3533;
  t491 = Cos(var1[5]);
  t718 = Sin(var1[3]);
  t438 = Cos(var1[3]);
  t544 = Sin(var1[4]);
  t723 = Sin(var1[5]);
  t258 = Cos(var1[6]);
  t1245 = -1.*t491*t718;
  t1339 = t438*t544*t723;
  t1344 = t1245 + t1339;
  t660 = t438*t491*t544;
  t983 = t718*t723;
  t1087 = t660 + t983;
  t1391 = Sin(var1[6]);
  t65 = Cos(var1[8]);
  t1479 = Cos(var1[4]);
  t1555 = Cos(var1[7]);
  t2236 = t438*t491;
  t2272 = t718*t544*t723;
  t2280 = t2236 + t2272;
  t2040 = t491*t718*t544;
  t2063 = -1.*t438*t723;
  t2124 = t2040 + t2063;
  t1712 = Sin(var1[7]);
  t1809 = Sin(var1[8]);
  t1600 = t438*t1479*t1555;
  t1606 = t258*t1344;
  t1644 = t1087*t1391;
  t1689 = t1606 + t1644;
  t1719 = t1689*t1712;
  t1769 = t1600 + t1719;
  t1121 = t258*t1087;
  t1432 = -1.*t1344*t1391;
  t1447 = t1121 + t1432;
  t2490 = t1479*t1555*t718;
  t2497 = t258*t2280;
  t2504 = t2124*t1391;
  t2508 = t2497 + t2504;
  t2552 = t2508*t1712;
  t2561 = t2490 + t2552;
  t2148 = t258*t2124;
  t2352 = -1.*t2280*t1391;
  t2425 = t2148 + t2352;
  t2749 = -1.*t1555*t544;
  t2923 = t1479*t258*t723;
  t2966 = t1479*t491*t1391;
  t2987 = t2923 + t2966;
  t2996 = t2987*t1712;
  t3042 = t2749 + t2996;
  t2640 = t1479*t491*t258;
  t2654 = -1.*t1479*t723*t1391;
  t2698 = t2640 + t2654;
  t4117 = -1.*t1555;
  t4122 = 1. + t4117;
  t4405 = -1.*t65;
  t4408 = 1. + t4405;
  t3210 = t65*t1769;
  t3227 = t1447*t1809;
  t3236 = t3210 + t3227;
  t3935 = -1.*t258;
  t3940 = 1. + t3935;
  t3950 = 0.135*t3940;
  t4013 = 0. + t3950;
  t4043 = -0.135*t1391;
  t4085 = 0. + t4043;
  t4149 = 0.135*t4122;
  t4215 = 0.049*t1712;
  t4224 = 0. + t4149 + t4215;
  t4303 = -0.049*t4122;
  t4311 = 0.135*t1712;
  t4313 = 0. + t4303 + t4311;
  t4414 = -0.049*t4408;
  t4417 = -0.09*t1809;
  t4418 = 0. + t4414 + t4417;
  t4549 = -0.09*t4408;
  t4556 = 0.049*t1809;
  t4566 = 0. + t4549 + t4556;
  t3440 = t65*t2561;
  t3468 = t2425*t1809;
  t3490 = t3440 + t3468;
  t3506 = t65*t3042;
  t3525 = t2698*t1809;
  t3533 = t3506 + t3525;
  p_output1[0]=t1769*t1809 - 1.*t1447*t65;
  p_output1[1]=t1809*t2561 - 1.*t2425*t65;
  p_output1[2]=t1809*t3042 - 1.*t2698*t65;
  p_output1[3]=0.;
  p_output1[4]=t3236;
  p_output1[5]=t3490;
  p_output1[6]=t3533;
  p_output1[7]=0.;
  p_output1[8]=-1.*t1555*t1689 + t1479*t1712*t438;
  p_output1[9]=-1.*t1555*t2508 + t1479*t1712*t718;
  p_output1[10]=-1.*t1555*t2987 - 1.*t1712*t544;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.049*t3236 + t1344*t4013 + t1087*t4085 + t1689*t4224 + t1479*t4313*t438 + 0.135*(t1555*t1689 - 1.*t1479*t1712*t438) + t1769*t4418 + t1447*t4566 - 0.09*(-1.*t1769*t1809 + t1447*t65) + var1[0];
  p_output1[13]=0. - 0.049*t3490 + t2280*t4013 + t2124*t4085 + t2508*t4224 + t2561*t4418 + t2425*t4566 - 0.09*(-1.*t1809*t2561 + t2425*t65) + t1479*t4313*t718 + 0.135*(t1555*t2508 - 1.*t1479*t1712*t718) + var1[1];
  p_output1[14]=0. - 0.049*t3533 + t2987*t4224 + t3042*t4418 + t2698*t4566 + t1479*t4085*t491 - 1.*t4313*t544 + 0.135*(t1555*t2987 + t1712*t544) - 0.09*(-1.*t1809*t3042 + t2698*t65) + t1479*t4013*t723 + var1[2];
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

#include "H_hip_flexion_left_mex.hh"

namespace SymExpression
{

void H_hip_flexion_left_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
