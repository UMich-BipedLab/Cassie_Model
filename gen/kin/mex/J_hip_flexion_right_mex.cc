/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:37 GMT-05:00
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
  double t7162;
  double t7187;
  double t7181;
  double t7183;
  double t7188;
  double t1525;
  double t2459;
  double t7097;
  double t7135;
  double t7168;
  double t7186;
  double t7190;
  double t7191;
  double t7200;
  double t7211;
  double t7212;
  double t7213;
  double t1499;
  double t7219;
  double t7221;
  double t7223;
  double t7226;
  double t7231;
  double t7232;
  double t7234;
  double t7239;
  double t7241;
  double t7242;
  double t7254;
  double t7257;
  double t7258;
  double t7118;
  double t7142;
  double t7149;
  double t7172;
  double t7174;
  double t7204;
  double t7205;
  double t7206;
  double t7209;
  double t7216;
  double t7217;
  double t7218;
  double t7275;
  double t7276;
  double t7277;
  double t7279;
  double t7280;
  double t7281;
  double t7233;
  double t7235;
  double t7237;
  double t7283;
  double t7284;
  double t7285;
  double t7250;
  double t7251;
  double t7253;
  double t7289;
  double t7290;
  double t7291;
  double t7299;
  double t7300;
  double t7301;
  double t7315;
  double t7316;
  double t7317;
  double t7319;
  double t7320;
  double t7321;
  double t7327;
  double t7328;
  double t7329;
  double t7343;
  double t7344;
  double t7345;
  double t7347;
  double t7348;
  double t7349;
  double t7355;
  double t7356;
  double t7357;
  double t7371;
  double t7372;
  double t7373;
  double t7375;
  double t7376;
  double t7377;
  double t7383;
  double t7384;
  double t7385;
  double t7397;
  double t7398;
  double t7399;
  double t7405;
  double t7406;
  double t7401;
  double t7402;
  double t7403;
  double t7419;
  double t7420;
  double t7421;
  double t7427;
  double t7428;
  double t7429;
  double t7424;
  double t7425;
  double t7448;
  double t7449;
  double t7450;
  double t7444;
  double t7445;
  double t7446;
  double t7465;
  double t7466;
  double t7481;
  double t7482;
  double t7483;
  double t7488;
  double t7489;
  double t7485;
  double t7486;
  double t7447;
  double t7451;
  double t7452;
  double t7453;
  double t7454;
  double t7455;
  double t7456;
  double t7457;
  double t7458;
  double t7459;
  double t7460;
  double t7461;
  double t7293;
  double t7295;
  double t7297;
  double t7505;
  double t7506;
  double t7507;
  double t7509;
  double t7510;
  double t7521;
  double t7522;
  double t7523;
  double t7525;
  double t7526;
  double t7527;
  double t7536;
  double t7537;
  double t7538;
  double t7540;
  double t7541;
  double t7542;
  double t7307;
  double t7308;
  double t7309;
  double t7551;
  double t7552;
  double t7554;
  double t7555;
  double t7556;
  double t7565;
  double t7566;
  double t7567;
  double t7579;
  double t7580;
  double t7581;
  t7162 = Sin(var1[3]);
  t7187 = Cos(var1[3]);
  t7181 = Cos(var1[5]);
  t7183 = Sin(var1[4]);
  t7188 = Sin(var1[5]);
  t1525 = Cos(var1[14]);
  t2459 = -1.*t1525;
  t7097 = 1. + t2459;
  t7135 = Sin(var1[14]);
  t7168 = Sin(var1[13]);
  t7186 = -1.*t7181*t7162*t7183;
  t7190 = t7187*t7188;
  t7191 = t7186 + t7190;
  t7200 = Cos(var1[13]);
  t7211 = -1.*t7187*t7181;
  t7212 = -1.*t7162*t7183*t7188;
  t7213 = t7211 + t7212;
  t1499 = Cos(var1[4]);
  t7219 = t7168*t7191;
  t7221 = t7200*t7213;
  t7223 = t7219 + t7221;
  t7226 = Cos(var1[15]);
  t7231 = -1.*t7226;
  t7232 = 1. + t7231;
  t7234 = Sin(var1[15]);
  t7239 = t7200*t7191;
  t7241 = -1.*t7168*t7213;
  t7242 = t7239 + t7241;
  t7254 = -1.*t1525*t1499*t7162;
  t7257 = t7135*t7223;
  t7258 = t7254 + t7257;
  t7118 = -0.049*t7097;
  t7142 = -0.135*t7135;
  t7149 = 0. + t7118 + t7142;
  t7172 = 0.135*t7168;
  t7174 = 0. + t7172;
  t7204 = -1.*t7200;
  t7205 = 1. + t7204;
  t7206 = -0.135*t7205;
  t7209 = 0. + t7206;
  t7216 = -0.135*t7097;
  t7217 = 0.049*t7135;
  t7218 = 0. + t7216 + t7217;
  t7275 = t7187*t7181*t7183;
  t7276 = t7162*t7188;
  t7277 = t7275 + t7276;
  t7279 = -1.*t7181*t7162;
  t7280 = t7187*t7183*t7188;
  t7281 = t7279 + t7280;
  t7233 = -0.09*t7232;
  t7235 = 0.049*t7234;
  t7237 = 0. + t7233 + t7235;
  t7283 = t7168*t7277;
  t7284 = t7200*t7281;
  t7285 = t7283 + t7284;
  t7250 = -0.049*t7232;
  t7251 = -0.09*t7234;
  t7253 = 0. + t7250 + t7251;
  t7289 = t7200*t7277;
  t7290 = -1.*t7168*t7281;
  t7291 = t7289 + t7290;
  t7299 = t1525*t7187*t1499;
  t7300 = t7135*t7285;
  t7301 = t7299 + t7300;
  t7315 = t7187*t1499*t7181*t7168;
  t7316 = t7200*t7187*t1499*t7188;
  t7317 = t7315 + t7316;
  t7319 = t7200*t7187*t1499*t7181;
  t7320 = -1.*t7187*t1499*t7168*t7188;
  t7321 = t7319 + t7320;
  t7327 = -1.*t1525*t7187*t7183;
  t7328 = t7135*t7317;
  t7329 = t7327 + t7328;
  t7343 = t1499*t7181*t7168*t7162;
  t7344 = t7200*t1499*t7162*t7188;
  t7345 = t7343 + t7344;
  t7347 = t7200*t1499*t7181*t7162;
  t7348 = -1.*t1499*t7168*t7162*t7188;
  t7349 = t7347 + t7348;
  t7355 = -1.*t1525*t7162*t7183;
  t7356 = t7135*t7345;
  t7357 = t7355 + t7356;
  t7371 = -1.*t7181*t7168*t7183;
  t7372 = -1.*t7200*t7183*t7188;
  t7373 = t7371 + t7372;
  t7375 = -1.*t7200*t7181*t7183;
  t7376 = t7168*t7183*t7188;
  t7377 = t7375 + t7376;
  t7383 = -1.*t1525*t1499;
  t7384 = t7135*t7373;
  t7385 = t7383 + t7384;
  t7397 = t7181*t7162;
  t7398 = -1.*t7187*t7183*t7188;
  t7399 = t7397 + t7398;
  t7405 = t7168*t7399;
  t7406 = t7289 + t7405;
  t7401 = -1.*t7168*t7277;
  t7402 = t7200*t7399;
  t7403 = t7401 + t7402;
  t7419 = t7181*t7162*t7183;
  t7420 = -1.*t7187*t7188;
  t7421 = t7419 + t7420;
  t7427 = t7200*t7421;
  t7428 = t7168*t7213;
  t7429 = t7427 + t7428;
  t7424 = -1.*t7168*t7421;
  t7425 = t7424 + t7221;
  t7448 = t7200*t1499*t7181;
  t7449 = -1.*t1499*t7168*t7188;
  t7450 = t7448 + t7449;
  t7444 = -1.*t1499*t7181*t7168;
  t7445 = -1.*t7200*t1499*t7188;
  t7446 = t7444 + t7445;
  t7465 = -1.*t7200*t7281;
  t7466 = t7401 + t7465;
  t7481 = t7187*t7181;
  t7482 = t7162*t7183*t7188;
  t7483 = t7481 + t7482;
  t7488 = -1.*t7168*t7483;
  t7489 = t7427 + t7488;
  t7485 = -1.*t7200*t7483;
  t7486 = t7424 + t7485;
  t7447 = t7237*t7446;
  t7451 = -0.135*t1525*t7450;
  t7452 = t7218*t7450;
  t7453 = t7135*t7253*t7450;
  t7454 = t7234*t7446;
  t7455 = t7226*t7135*t7450;
  t7456 = t7454 + t7455;
  t7457 = -0.049*t7456;
  t7458 = t7226*t7446;
  t7459 = -1.*t7135*t7234*t7450;
  t7460 = t7458 + t7459;
  t7461 = -0.09*t7460;
  t7293 = -1.*t7187*t1499*t7135;
  t7295 = t1525*t7285;
  t7297 = t7293 + t7295;
  t7505 = -0.135*t1525;
  t7506 = -0.049*t7135;
  t7507 = t7505 + t7506;
  t7509 = 0.049*t1525;
  t7510 = t7509 + t7142;
  t7521 = t7168*t7421;
  t7522 = t7200*t7483;
  t7523 = t7521 + t7522;
  t7525 = -1.*t1499*t7135*t7162;
  t7526 = t1525*t7523;
  t7527 = t7525 + t7526;
  t7536 = t1499*t7181*t7168;
  t7537 = t7200*t1499*t7188;
  t7538 = t7536 + t7537;
  t7540 = t7135*t7183;
  t7541 = t1525*t7538;
  t7542 = t7540 + t7541;
  t7307 = t7226*t7291;
  t7308 = -1.*t7234*t7301;
  t7309 = t7307 + t7308;
  t7551 = 0.049*t7226;
  t7552 = t7551 + t7251;
  t7554 = -0.09*t7226;
  t7555 = -0.049*t7234;
  t7556 = t7554 + t7555;
  t7565 = t1525*t1499*t7162;
  t7566 = t7135*t7523;
  t7567 = t7565 + t7566;
  t7579 = -1.*t1525*t7183;
  t7580 = t7135*t7538;
  t7581 = t7579 + t7580;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=-1.*t1499*t7149*t7162 + t7174*t7191 + t7209*t7213 + t7218*t7223 - 0.135*(t1499*t7135*t7162 + t1525*t7223) + t7237*t7242 + t7253*t7258 - 0.049*(t7234*t7242 + t7226*t7258) - 0.09*(t7226*t7242 - 1.*t7234*t7258);
  p_output1[10]=t1499*t7149*t7187 + t7174*t7277 + t7209*t7281 + t7218*t7285 + t7237*t7291 - 0.135*t7297 + t7253*t7301 - 0.049*(t7234*t7291 + t7226*t7301) - 0.09*t7309;
  p_output1[11]=0;
  p_output1[12]=t1499*t7174*t7181*t7187 - 1.*t7149*t7183*t7187 + t1499*t7187*t7188*t7209 + t7218*t7317 - 0.135*(t7135*t7183*t7187 + t1525*t7317) + t7237*t7321 + t7253*t7329 - 0.049*(t7234*t7321 + t7226*t7329) - 0.09*(t7226*t7321 - 1.*t7234*t7329);
  p_output1[13]=t1499*t7162*t7174*t7181 - 1.*t7149*t7162*t7183 + t1499*t7162*t7188*t7209 + t7218*t7345 - 0.135*(t7135*t7162*t7183 + t1525*t7345) + t7237*t7349 + t7253*t7357 - 0.049*(t7234*t7349 + t7226*t7357) - 0.09*(t7226*t7349 - 1.*t7234*t7357);
  p_output1[14]=-1.*t1499*t7149 - 1.*t7174*t7181*t7183 - 1.*t7183*t7188*t7209 + t7218*t7373 - 0.135*(t1499*t7135 + t1525*t7373) + t7237*t7377 + t7253*t7385 - 0.049*(t7234*t7377 + t7226*t7385) - 0.09*(t7226*t7377 - 1.*t7234*t7385);
  p_output1[15]=t7209*t7277 + t7174*t7399 + t7237*t7403 - 0.135*t1525*t7406 + t7218*t7406 + t7135*t7253*t7406 - 0.049*(t7234*t7403 + t7135*t7226*t7406) - 0.09*(t7226*t7403 - 1.*t7135*t7234*t7406);
  p_output1[16]=t7174*t7213 + t7209*t7421 + t7237*t7425 - 0.135*t1525*t7429 + t7218*t7429 + t7135*t7253*t7429 - 0.049*(t7234*t7425 + t7135*t7226*t7429) - 0.09*(t7226*t7425 - 1.*t7135*t7234*t7429);
  p_output1[17]=-1.*t1499*t7174*t7188 + t1499*t7181*t7209 + t7447 + t7451 + t7452 + t7453 + t7457 + t7461;
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
  p_output1[39]=0.135*t7200*t7277 - 0.135*t7168*t7281 - 0.135*t1525*t7291 + t7218*t7291 + t7135*t7253*t7291 + t7237*t7466 - 0.09*(-1.*t7135*t7234*t7291 + t7226*t7466) - 0.049*(t7135*t7226*t7291 + t7234*t7466);
  p_output1[40]=0.135*t7200*t7421 - 0.135*t7168*t7483 + t7237*t7486 - 0.135*t1525*t7489 + t7218*t7489 + t7135*t7253*t7489 - 0.049*(t7234*t7486 + t7135*t7226*t7489) - 0.09*(t7226*t7486 - 1.*t7135*t7234*t7489);
  p_output1[41]=-0.135*t1499*t7168*t7188 + 0.135*t1499*t7181*t7200 + t7447 + t7451 + t7452 + t7453 + t7457 + t7461;
  p_output1[42]=-0.135*(-1.*t1499*t1525*t7187 - 1.*t7135*t7285) - 0.049*t7226*t7297 + 0.09*t7234*t7297 + t7253*t7297 + t1499*t7187*t7507 + t7285*t7510;
  p_output1[43]=t1499*t7162*t7507 + t7510*t7523 - 0.135*(t7254 - 1.*t7135*t7523) - 0.049*t7226*t7527 + 0.09*t7234*t7527 + t7253*t7527;
  p_output1[44]=-1.*t7183*t7507 + t7510*t7538 - 0.135*(t1525*t7183 - 1.*t7135*t7538) - 0.049*t7226*t7542 + 0.09*t7234*t7542 + t7253*t7542;
  p_output1[45]=-0.09*(-1.*t7234*t7291 - 1.*t7226*t7301) - 0.049*t7309 + t7291*t7552 + t7301*t7556;
  p_output1[46]=t7489*t7552 + t7556*t7567 - 0.09*(-1.*t7234*t7489 - 1.*t7226*t7567) - 0.049*(t7226*t7489 - 1.*t7234*t7567);
  p_output1[47]=t7450*t7552 + t7556*t7581 - 0.09*(-1.*t7234*t7450 - 1.*t7226*t7581) - 0.049*(t7226*t7450 - 1.*t7234*t7581);
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
