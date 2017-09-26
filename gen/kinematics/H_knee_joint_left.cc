/*
 * Automatically Generated from Mathematica.
 * Tue 26 Sep 2017 12:22:19 GMT-04:00
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
  double t9937;
  double t9983;
  double t9798;
  double t9971;
  double t9987;
  double t9788;
  double t10046;
  double t10047;
  double t10054;
  double t9980;
  double t10012;
  double t10013;
  double t10065;
  double t6427;
  double t10136;
  double t10144;
  double t10154;
  double t10026;
  double t10081;
  double t10124;
  double t10189;
  double t4817;
  double t10287;
  double t10289;
  double t10293;
  double t10275;
  double t10283;
  double t10285;
  double t10222;
  double t10223;
  double t10231;
  double t10305;
  double t10306;
  double t10309;
  double t10286;
  double t10299;
  double t10302;
  double t10261;
  double t10345;
  double t10346;
  double t10350;
  double t10333;
  double t10338;
  double t10340;
  double t10132;
  double t10195;
  double t10202;
  double t10248;
  double t10251;
  double t10257;
  double t10258;
  double t10263;
  double t10267;
  double t10303;
  double t10310;
  double t10312;
  double t10314;
  double t10317;
  double t10318;
  double t10320;
  double t10322;
  double t10326;
  double t10344;
  double t10353;
  double t10354;
  double t10358;
  double t10359;
  double t10365;
  double t10368;
  double t10369;
  double t10370;
  double t10459;
  double t10462;
  double t10451;
  double t10452;
  double t10374;
  double t10375;
  double t10376;
  double t10418;
  double t10420;
  double t10421;
  double t10422;
  double t10425;
  double t10427;
  double t10429;
  double t10431;
  double t10434;
  double t10441;
  double t10447;
  double t10448;
  double t10453;
  double t10454;
  double t10455;
  double t10466;
  double t10467;
  double t10468;
  double t10471;
  double t10472;
  double t10473;
  double t10480;
  double t10481;
  double t10482;
  double t10378;
  double t10384;
  double t10387;
  double t10392;
  double t10393;
  double t10395;
  t9937 = Cos(var1[5]);
  t9983 = Sin(var1[3]);
  t9798 = Cos(var1[3]);
  t9971 = Sin(var1[4]);
  t9987 = Sin(var1[5]);
  t9788 = Cos(var1[6]);
  t10046 = -1.*t9937*t9983;
  t10047 = t9798*t9971*t9987;
  t10054 = t10046 + t10047;
  t9980 = t9798*t9937*t9971;
  t10012 = t9983*t9987;
  t10013 = t9980 + t10012;
  t10065 = Sin(var1[6]);
  t6427 = Cos(var1[7]);
  t10136 = t9788*t10054;
  t10144 = t10013*t10065;
  t10154 = t10136 + t10144;
  t10026 = t9788*t10013;
  t10081 = -1.*t10054*t10065;
  t10124 = t10026 + t10081;
  t10189 = Sin(var1[7]);
  t4817 = Cos(var1[9]);
  t10287 = t9798*t9937;
  t10289 = t9983*t9971*t9987;
  t10293 = t10287 + t10289;
  t10275 = t9937*t9983*t9971;
  t10283 = -1.*t9798*t9987;
  t10285 = t10275 + t10283;
  t10222 = Sin(var1[9]);
  t10223 = Cos(var1[4]);
  t10231 = Cos(var1[8]);
  t10305 = t9788*t10293;
  t10306 = t10285*t10065;
  t10309 = t10305 + t10306;
  t10286 = t9788*t10285;
  t10299 = -1.*t10293*t10065;
  t10302 = t10286 + t10299;
  t10261 = Sin(var1[8]);
  t10345 = t10223*t9788*t9987;
  t10346 = t10223*t9937*t10065;
  t10350 = t10345 + t10346;
  t10333 = t10223*t9937*t9788;
  t10338 = -1.*t10223*t9987*t10065;
  t10340 = t10333 + t10338;
  t10132 = t6427*t10124;
  t10195 = -1.*t10154*t10189;
  t10202 = t10132 + t10195;
  t10248 = t9798*t10223*t10231;
  t10251 = t6427*t10154;
  t10257 = t10124*t10189;
  t10258 = t10251 + t10257;
  t10263 = t10258*t10261;
  t10267 = t10248 + t10263;
  t10303 = t6427*t10302;
  t10310 = -1.*t10309*t10189;
  t10312 = t10303 + t10310;
  t10314 = t10223*t10231*t9983;
  t10317 = t6427*t10309;
  t10318 = t10302*t10189;
  t10320 = t10317 + t10318;
  t10322 = t10320*t10261;
  t10326 = t10314 + t10322;
  t10344 = t6427*t10340;
  t10353 = -1.*t10350*t10189;
  t10354 = t10344 + t10353;
  t10358 = -1.*t10231*t9971;
  t10359 = t6427*t10350;
  t10365 = t10340*t10189;
  t10368 = t10359 + t10365;
  t10369 = t10368*t10261;
  t10370 = t10358 + t10369;
  t10459 = -1.*t10231;
  t10462 = 1. + t10459;
  t10451 = -1.*t4817;
  t10452 = 1. + t10451;
  t10374 = t10222*t10202;
  t10375 = t4817*t10267;
  t10376 = t10374 + t10375;
  t10418 = -1.*t9788;
  t10420 = 1. + t10418;
  t10421 = 0.135*t10420;
  t10422 = 0. + t10421;
  t10425 = -0.135*t10065;
  t10427 = 0. + t10425;
  t10429 = -1.*t6427;
  t10431 = 1. + t10429;
  t10434 = 0.135*t10431;
  t10441 = 0. + t10434;
  t10447 = -0.135*t10189;
  t10448 = 0. + t10447;
  t10453 = -0.09*t10452;
  t10454 = 0.049*t10222;
  t10455 = 0. + t10453 + t10454;
  t10466 = 0.135*t10462;
  t10467 = 0.049*t10261;
  t10468 = 0. + t10466 + t10467;
  t10471 = -0.049*t10462;
  t10472 = 0.135*t10261;
  t10473 = 0. + t10471 + t10472;
  t10480 = -0.049*t10452;
  t10481 = -0.09*t10222;
  t10482 = 0. + t10480 + t10481;
  t10378 = t10222*t10312;
  t10384 = t4817*t10326;
  t10387 = t10378 + t10384;
  t10392 = t10222*t10354;
  t10393 = t4817*t10370;
  t10395 = t10392 + t10393;
  p_output1[0]=t10222*t10267 - 1.*t10202*t4817;
  p_output1[1]=t10222*t10326 - 1.*t10312*t4817;
  p_output1[2]=t10222*t10370 - 1.*t10354*t4817;
  p_output1[3]=0.;
  p_output1[4]=t10376;
  p_output1[5]=t10387;
  p_output1[6]=t10395;
  p_output1[7]=0.;
  p_output1[8]=-1.*t10231*t10258 + t10223*t10261*t9798;
  p_output1[9]=-1.*t10231*t10320 + t10223*t10261*t9983;
  p_output1[10]=-1.*t10231*t10368 - 1.*t10261*t9971;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.049*t10376 + t10054*t10422 + t10013*t10427 + t10154*t10441 + t10124*t10448 + t10202*t10455 + t10258*t10468 + t10267*t10482 - 0.21*(-1.*t10222*t10267 + t10202*t4817) + t10223*t10473*t9798 + 0.1305*(t10231*t10258 - 1.*t10223*t10261*t9798) + var1[0];
  p_output1[13]=0. - 0.049*t10387 + t10293*t10422 + t10285*t10427 + t10309*t10441 + t10302*t10448 + t10312*t10455 + t10320*t10468 + t10326*t10482 - 0.21*(-1.*t10222*t10326 + t10312*t4817) + t10223*t10473*t9983 + 0.1305*(t10231*t10320 - 1.*t10223*t10261*t9983) + var1[1];
  p_output1[14]=0. - 0.049*t10395 + t10350*t10441 + t10340*t10448 + t10354*t10455 + t10368*t10468 + t10370*t10482 - 0.21*(-1.*t10222*t10370 + t10354*t4817) + t10223*t10427*t9937 - 1.*t10473*t9971 + 0.1305*(t10231*t10368 + t10261*t9971) + t10223*t10422*t9987 + var1[2];
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

#include "H_knee_joint_left.hh"

namespace SymExpression
{

void H_knee_joint_left_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
