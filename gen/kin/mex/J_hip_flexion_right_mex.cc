/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:11:37 GMT-05:00
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
  double t6184;
  double t6194;
  double t6191;
  double t6192;
  double t6198;
  double t6153;
  double t6159;
  double t6164;
  double t6170;
  double t6187;
  double t6193;
  double t6199;
  double t6202;
  double t6204;
  double t6210;
  double t6211;
  double t6212;
  double t6149;
  double t6219;
  double t6220;
  double t6221;
  double t6166;
  double t6175;
  double t6179;
  double t6189;
  double t6190;
  double t6206;
  double t6207;
  double t6208;
  double t6209;
  double t6214;
  double t6215;
  double t6216;
  double t6240;
  double t6241;
  double t6242;
  double t6244;
  double t6245;
  double t6246;
  double t6249;
  double t6250;
  double t6251;
  double t6269;
  double t6270;
  double t6271;
  double t6289;
  double t6290;
  double t6291;
  double t6309;
  double t6310;
  double t6311;
  double t6327;
  double t6328;
  double t6329;
  double t6253;
  double t6335;
  double t6336;
  double t6341;
  double t6342;
  double t6343;
  double t6349;
  double t6350;
  double t6351;
  double t6362;
  double t6363;
  double t6364;
  double t6331;
  double t6254;
  double t6255;
  double t6346;
  double t6379;
  double t6380;
  double t6381;
  double t6386;
  double t6387;
  double t6358;
  double t6359;
  double t6360;
  double t6361;
  double t6365;
  double t6366;
  double t6367;
  double t6257;
  double t6258;
  double t6259;
  double t6395;
  double t6396;
  double t6397;
  double t6399;
  double t6400;
  double t6409;
  double t6410;
  double t6411;
  double t6234;
  double t6422;
  double t6423;
  double t6424;
  t6184 = Sin(var1[3]);
  t6194 = Cos(var1[3]);
  t6191 = Cos(var1[5]);
  t6192 = Sin(var1[4]);
  t6198 = Sin(var1[5]);
  t6153 = Cos(var1[14]);
  t6159 = -1.*t6153;
  t6164 = 1. + t6159;
  t6170 = Sin(var1[14]);
  t6187 = Sin(var1[13]);
  t6193 = -1.*t6191*t6184*t6192;
  t6199 = t6194*t6198;
  t6202 = t6193 + t6199;
  t6204 = Cos(var1[13]);
  t6210 = -1.*t6194*t6191;
  t6211 = -1.*t6184*t6192*t6198;
  t6212 = t6210 + t6211;
  t6149 = Cos(var1[4]);
  t6219 = t6187*t6202;
  t6220 = t6204*t6212;
  t6221 = t6219 + t6220;
  t6166 = -0.049*t6164;
  t6175 = -0.135*t6170;
  t6179 = 0. + t6166 + t6175;
  t6189 = 0.135*t6187;
  t6190 = 0. + t6189;
  t6206 = -1.*t6204;
  t6207 = 1. + t6206;
  t6208 = -0.135*t6207;
  t6209 = 0. + t6208;
  t6214 = -0.135*t6164;
  t6215 = 0.049*t6170;
  t6216 = 0. + t6214 + t6215;
  t6240 = t6194*t6191*t6192;
  t6241 = t6184*t6198;
  t6242 = t6240 + t6241;
  t6244 = -1.*t6191*t6184;
  t6245 = t6194*t6192*t6198;
  t6246 = t6244 + t6245;
  t6249 = t6187*t6242;
  t6250 = t6204*t6246;
  t6251 = t6249 + t6250;
  t6269 = t6194*t6149*t6191*t6187;
  t6270 = t6204*t6194*t6149*t6198;
  t6271 = t6269 + t6270;
  t6289 = t6149*t6191*t6187*t6184;
  t6290 = t6204*t6149*t6184*t6198;
  t6291 = t6289 + t6290;
  t6309 = -1.*t6191*t6187*t6192;
  t6310 = -1.*t6204*t6192*t6198;
  t6311 = t6309 + t6310;
  t6327 = t6191*t6184;
  t6328 = -1.*t6194*t6192*t6198;
  t6329 = t6327 + t6328;
  t6253 = t6204*t6242;
  t6335 = t6187*t6329;
  t6336 = t6253 + t6335;
  t6341 = t6191*t6184*t6192;
  t6342 = -1.*t6194*t6198;
  t6343 = t6341 + t6342;
  t6349 = t6204*t6343;
  t6350 = t6187*t6212;
  t6351 = t6349 + t6350;
  t6362 = t6204*t6149*t6191;
  t6363 = -1.*t6149*t6187*t6198;
  t6364 = t6362 + t6363;
  t6331 = -1.*t6187*t6242;
  t6254 = -1.*t6187*t6246;
  t6255 = t6253 + t6254;
  t6346 = -1.*t6187*t6343;
  t6379 = t6194*t6191;
  t6380 = t6184*t6192*t6198;
  t6381 = t6379 + t6380;
  t6386 = -1.*t6187*t6381;
  t6387 = t6349 + t6386;
  t6358 = -1.*t6149*t6191*t6187;
  t6359 = -1.*t6204*t6149*t6198;
  t6360 = t6358 + t6359;
  t6361 = -0.09*t6360;
  t6365 = -0.135*t6153*t6364;
  t6366 = t6216*t6364;
  t6367 = -0.049*t6170*t6364;
  t6257 = -1.*t6194*t6149*t6170;
  t6258 = t6153*t6251;
  t6259 = t6257 + t6258;
  t6395 = -0.135*t6153;
  t6396 = -0.049*t6170;
  t6397 = t6395 + t6396;
  t6399 = 0.049*t6153;
  t6400 = t6399 + t6175;
  t6409 = t6187*t6343;
  t6410 = t6204*t6381;
  t6411 = t6409 + t6410;
  t6234 = -1.*t6153*t6149*t6184;
  t6422 = t6149*t6191*t6187;
  t6423 = t6204*t6149*t6198;
  t6424 = t6422 + t6423;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=-1.*t6149*t6179*t6184 + t6190*t6202 + t6209*t6212 - 0.09*(t6202*t6204 - 1.*t6187*t6212) + t6216*t6221 - 0.135*(t6149*t6170*t6184 + t6153*t6221) - 0.049*(t6170*t6221 + t6234);
  p_output1[10]=t6149*t6179*t6194 + t6190*t6242 + t6209*t6246 + t6216*t6251 - 0.049*(t6149*t6153*t6194 + t6170*t6251) - 0.09*t6255 - 0.135*t6259;
  p_output1[11]=0;
  p_output1[12]=t6149*t6190*t6191*t6194 - 1.*t6179*t6192*t6194 - 0.09*(-1.*t6149*t6187*t6194*t6198 + t6149*t6191*t6194*t6204) + t6149*t6194*t6198*t6209 + t6216*t6271 - 0.135*(t6170*t6192*t6194 + t6153*t6271) - 0.049*(-1.*t6153*t6192*t6194 + t6170*t6271);
  p_output1[13]=t6149*t6184*t6190*t6191 - 1.*t6179*t6184*t6192 - 0.09*(-1.*t6149*t6184*t6187*t6198 + t6149*t6184*t6191*t6204) + t6149*t6184*t6198*t6209 + t6216*t6291 - 0.135*(t6170*t6184*t6192 + t6153*t6291) - 0.049*(-1.*t6153*t6184*t6192 + t6170*t6291);
  p_output1[14]=-1.*t6149*t6179 - 1.*t6190*t6191*t6192 - 0.09*(t6187*t6192*t6198 - 1.*t6191*t6192*t6204) - 1.*t6192*t6198*t6209 + t6216*t6311 - 0.135*(t6149*t6170 + t6153*t6311) - 0.049*(-1.*t6149*t6153 + t6170*t6311);
  p_output1[15]=t6209*t6242 + t6190*t6329 - 0.09*(t6204*t6329 + t6331) - 0.135*t6153*t6336 - 0.049*t6170*t6336 + t6216*t6336;
  p_output1[16]=t6190*t6212 + t6209*t6343 - 0.09*(t6220 + t6346) - 0.135*t6153*t6351 - 0.049*t6170*t6351 + t6216*t6351;
  p_output1[17]=-1.*t6149*t6190*t6198 + t6149*t6191*t6209 + t6361 + t6365 + t6366 + t6367;
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
  p_output1[39]=0.135*t6204*t6242 - 0.135*t6187*t6246 - 0.135*t6153*t6255 - 0.049*t6170*t6255 + t6216*t6255 - 0.09*(-1.*t6204*t6246 + t6331);
  p_output1[40]=0.135*t6204*t6343 - 0.135*t6187*t6381 - 0.09*(t6346 - 1.*t6204*t6381) - 0.135*t6153*t6387 - 0.049*t6170*t6387 + t6216*t6387;
  p_output1[41]=-0.135*t6149*t6187*t6198 + 0.135*t6149*t6191*t6204 + t6361 + t6365 + t6366 + t6367;
  p_output1[42]=-0.135*(-1.*t6149*t6153*t6194 - 1.*t6170*t6251) - 0.049*t6259 + t6149*t6194*t6397 + t6251*t6400;
  p_output1[43]=t6149*t6184*t6397 + t6400*t6411 - 0.049*(-1.*t6149*t6170*t6184 + t6153*t6411) - 0.135*(t6234 - 1.*t6170*t6411);
  p_output1[44]=-1.*t6192*t6397 + t6400*t6424 - 0.049*(t6170*t6192 + t6153*t6424) - 0.135*(t6153*t6192 - 1.*t6170*t6424);
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

#include "J_hip_flexion_right_mex.hh"

namespace SymExpression
{

void J_hip_flexion_right_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
