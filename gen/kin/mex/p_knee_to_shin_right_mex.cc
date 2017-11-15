/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:46 GMT-05:00
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
  double t582;
  double t8196;
  double t8201;
  double t8197;
  double t8203;
  double t2825;
  double t3480;
  double t4784;
  double t8108;
  double t8157;
  double t8200;
  double t8205;
  double t8206;
  double t8208;
  double t8217;
  double t8220;
  double t8221;
  double t1618;
  double t8228;
  double t8229;
  double t8230;
  double t8232;
  double t8233;
  double t8234;
  double t8241;
  double t8251;
  double t8252;
  double t8254;
  double t8273;
  double t8274;
  double t8276;
  double t8281;
  double t8282;
  double t8283;
  double t8285;
  double t8290;
  double t8291;
  double t8292;
  double t8301;
  double t8302;
  double t8305;
  double t8308;
  double t8310;
  double t8311;
  double t8314;
  double t8318;
  double t8320;
  double t8323;
  double t8335;
  double t8336;
  double t8337;
  double t8080;
  double t8109;
  double t8145;
  double t8187;
  double t8195;
  double t8209;
  double t8211;
  double t8213;
  double t8216;
  double t8223;
  double t8224;
  double t8225;
  double t8349;
  double t8350;
  double t8351;
  double t8355;
  double t8356;
  double t8358;
  double t8238;
  double t8243;
  double t8248;
  double t8360;
  double t8361;
  double t8362;
  double t8268;
  double t8269;
  double t8270;
  double t8284;
  double t8286;
  double t8289;
  double t8365;
  double t8366;
  double t8367;
  double t8373;
  double t8374;
  double t8375;
  double t8294;
  double t8296;
  double t8300;
  double t8313;
  double t8315;
  double t8316;
  double t8377;
  double t8378;
  double t8379;
  double t8381;
  double t8384;
  double t8385;
  double t8328;
  double t8331;
  double t8333;
  double t8387;
  double t8388;
  double t8389;
  double t8392;
  double t8393;
  double t8394;
  double t8415;
  double t8416;
  double t8417;
  double t8421;
  double t8424;
  double t8425;
  double t8434;
  double t8436;
  double t8437;
  double t8439;
  double t8440;
  double t8441;
  double t8443;
  double t8444;
  double t8445;
  double t8447;
  double t8448;
  double t8449;
  double t8451;
  double t8452;
  double t8454;
  t582 = Cos(var1[3]);
  t8196 = Cos(var1[5]);
  t8201 = Sin(var1[3]);
  t8197 = Sin(var1[4]);
  t8203 = Sin(var1[5]);
  t2825 = Cos(var1[14]);
  t3480 = -1.*t2825;
  t4784 = 1. + t3480;
  t8108 = Sin(var1[14]);
  t8157 = Sin(var1[13]);
  t8200 = t582*t8196*t8197;
  t8205 = t8201*t8203;
  t8206 = t8200 + t8205;
  t8208 = Cos(var1[13]);
  t8217 = -1.*t8196*t8201;
  t8220 = t582*t8197*t8203;
  t8221 = t8217 + t8220;
  t1618 = Cos(var1[4]);
  t8228 = t8157*t8206;
  t8229 = t8208*t8221;
  t8230 = t8228 + t8229;
  t8232 = Cos(var1[15]);
  t8233 = -1.*t8232;
  t8234 = 1. + t8233;
  t8241 = Sin(var1[15]);
  t8251 = t8208*t8206;
  t8252 = -1.*t8157*t8221;
  t8254 = t8251 + t8252;
  t8273 = t2825*t582*t1618;
  t8274 = t8108*t8230;
  t8276 = t8273 + t8274;
  t8281 = Cos(var1[16]);
  t8282 = -1.*t8281;
  t8283 = 1. + t8282;
  t8285 = Sin(var1[16]);
  t8290 = t8241*t8254;
  t8291 = t8232*t8276;
  t8292 = t8290 + t8291;
  t8301 = t8232*t8254;
  t8302 = -1.*t8241*t8276;
  t8305 = t8301 + t8302;
  t8308 = Cos(var1[17]);
  t8310 = -1.*t8308;
  t8311 = 1. + t8310;
  t8314 = Sin(var1[17]);
  t8318 = -1.*t8285*t8292;
  t8320 = t8281*t8305;
  t8323 = t8318 + t8320;
  t8335 = t8281*t8292;
  t8336 = t8285*t8305;
  t8337 = t8335 + t8336;
  t8080 = -0.049*t4784;
  t8109 = -0.135*t8108;
  t8145 = 0. + t8080 + t8109;
  t8187 = 0.135*t8157;
  t8195 = 0. + t8187;
  t8209 = -1.*t8208;
  t8211 = 1. + t8209;
  t8213 = -0.135*t8211;
  t8216 = 0. + t8213;
  t8223 = -0.135*t4784;
  t8224 = 0.049*t8108;
  t8225 = 0. + t8223 + t8224;
  t8349 = t8196*t8201*t8197;
  t8350 = -1.*t582*t8203;
  t8351 = t8349 + t8350;
  t8355 = t582*t8196;
  t8356 = t8201*t8197*t8203;
  t8358 = t8355 + t8356;
  t8238 = -0.09*t8234;
  t8243 = 0.049*t8241;
  t8248 = 0. + t8238 + t8243;
  t8360 = t8157*t8351;
  t8361 = t8208*t8358;
  t8362 = t8360 + t8361;
  t8268 = -0.049*t8234;
  t8269 = -0.09*t8241;
  t8270 = 0. + t8268 + t8269;
  t8284 = -0.049*t8283;
  t8286 = -0.21*t8285;
  t8289 = 0. + t8284 + t8286;
  t8365 = t8208*t8351;
  t8366 = -1.*t8157*t8358;
  t8367 = t8365 + t8366;
  t8373 = t2825*t1618*t8201;
  t8374 = t8108*t8362;
  t8375 = t8373 + t8374;
  t8294 = -0.21*t8283;
  t8296 = 0.049*t8285;
  t8300 = 0. + t8294 + t8296;
  t8313 = -0.2707*t8311;
  t8315 = 0.0016*t8314;
  t8316 = 0. + t8313 + t8315;
  t8377 = t8241*t8367;
  t8378 = t8232*t8375;
  t8379 = t8377 + t8378;
  t8381 = t8232*t8367;
  t8384 = -1.*t8241*t8375;
  t8385 = t8381 + t8384;
  t8328 = -0.0016*t8311;
  t8331 = -0.2707*t8314;
  t8333 = 0. + t8328 + t8331;
  t8387 = -1.*t8285*t8379;
  t8388 = t8281*t8385;
  t8389 = t8387 + t8388;
  t8392 = t8281*t8379;
  t8393 = t8285*t8385;
  t8394 = t8392 + t8393;
  t8415 = t1618*t8196*t8157;
  t8416 = t8208*t1618*t8203;
  t8417 = t8415 + t8416;
  t8421 = t8208*t1618*t8196;
  t8424 = -1.*t1618*t8157*t8203;
  t8425 = t8421 + t8424;
  t8434 = -1.*t2825*t8197;
  t8436 = t8108*t8417;
  t8437 = t8434 + t8436;
  t8439 = t8241*t8425;
  t8440 = t8232*t8437;
  t8441 = t8439 + t8440;
  t8443 = t8232*t8425;
  t8444 = -1.*t8241*t8437;
  t8445 = t8443 + t8444;
  t8447 = -1.*t8285*t8441;
  t8448 = t8281*t8445;
  t8449 = t8447 + t8448;
  t8451 = t8281*t8441;
  t8452 = t8285*t8445;
  t8454 = t8451 + t8452;
  p_output1[0]=0. + t1618*t582*t8145 + t8195*t8206 + t8216*t8221 + t8225*t8230 - 0.1305*(-1.*t1618*t582*t8108 + t2825*t8230) + t8248*t8254 + t8270*t8276 + t8289*t8292 + t8300*t8305 + t8316*t8323 + t8333*t8337 - 0.0016*(t8314*t8323 + t8308*t8337) - 0.2707*(t8308*t8323 - 1.*t8314*t8337) + var1[0];
  p_output1[1]=0. + t1618*t8145*t8201 + t8195*t8351 + t8216*t8358 + t8225*t8362 - 0.1305*(-1.*t1618*t8108*t8201 + t2825*t8362) + t8248*t8367 + t8270*t8375 + t8289*t8379 + t8300*t8385 + t8316*t8389 + t8333*t8394 - 0.0016*(t8314*t8389 + t8308*t8394) - 0.2707*(t8308*t8389 - 1.*t8314*t8394) + var1[1];
  p_output1[2]=0. + t1618*t8195*t8196 - 1.*t8145*t8197 + t1618*t8203*t8216 + t8225*t8417 - 0.1305*(t8108*t8197 + t2825*t8417) + t8248*t8425 + t8270*t8437 + t8289*t8441 + t8300*t8445 + t8316*t8449 + t8333*t8454 - 0.0016*(t8314*t8449 + t8308*t8454) - 0.2707*(t8308*t8449 - 1.*t8314*t8454) + var1[2];
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

#include "p_knee_to_shin_right_mex.hh"

namespace SymExpression
{

void p_knee_to_shin_right_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
