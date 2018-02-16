/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:15:37 GMT-05:00
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
  double t7156;
  double t7191;
  double t7178;
  double t7187;
  double t7196;
  double t1098;
  double t1455;
  double t2601;
  double t7126;
  double t7171;
  double t7189;
  double t7197;
  double t7199;
  double t7201;
  double t7216;
  double t7217;
  double t7220;
  double t901;
  double t7226;
  double t7227;
  double t7229;
  double t7231;
  double t7236;
  double t7239;
  double t7243;
  double t7246;
  double t7247;
  double t7249;
  double t7260;
  double t7261;
  double t7263;
  double t2945;
  double t7141;
  double t7148;
  double t7176;
  double t7177;
  double t7203;
  double t7207;
  double t7212;
  double t7215;
  double t7222;
  double t7224;
  double t7225;
  double t7282;
  double t7283;
  double t7284;
  double t7286;
  double t7287;
  double t7288;
  double t7241;
  double t7244;
  double t7245;
  double t7290;
  double t7291;
  double t7292;
  double t7256;
  double t7257;
  double t7259;
  double t7294;
  double t7295;
  double t7296;
  double t7305;
  double t7307;
  double t7308;
  double t7322;
  double t7323;
  double t7324;
  double t7326;
  double t7327;
  double t7328;
  double t7334;
  double t7335;
  double t7336;
  double t7350;
  double t7351;
  double t7352;
  double t7354;
  double t7355;
  double t7356;
  double t7362;
  double t7363;
  double t7364;
  double t7378;
  double t7379;
  double t7380;
  double t7382;
  double t7383;
  double t7384;
  double t7390;
  double t7391;
  double t7392;
  double t7404;
  double t7405;
  double t7406;
  double t7412;
  double t7413;
  double t7408;
  double t7409;
  double t7410;
  double t7426;
  double t7427;
  double t7428;
  double t7434;
  double t7435;
  double t7436;
  double t7431;
  double t7432;
  double t7455;
  double t7456;
  double t7457;
  double t7451;
  double t7452;
  double t7453;
  double t7472;
  double t7473;
  double t7488;
  double t7489;
  double t7490;
  double t7495;
  double t7496;
  double t7492;
  double t7493;
  double t7454;
  double t7458;
  double t7459;
  double t7460;
  double t7461;
  double t7462;
  double t7463;
  double t7464;
  double t7465;
  double t7466;
  double t7467;
  double t7468;
  double t7300;
  double t7301;
  double t7302;
  double t7512;
  double t7513;
  double t7514;
  double t7516;
  double t7517;
  double t7528;
  double t7529;
  double t7530;
  double t7532;
  double t7533;
  double t7534;
  double t7543;
  double t7544;
  double t7545;
  double t7547;
  double t7548;
  double t7549;
  double t7314;
  double t7315;
  double t7316;
  double t7558;
  double t7559;
  double t7561;
  double t7562;
  double t7563;
  double t7572;
  double t7573;
  double t7574;
  double t7586;
  double t7587;
  double t7588;
  t7156 = Sin(var1[3]);
  t7191 = Cos(var1[3]);
  t7178 = Cos(var1[5]);
  t7187 = Sin(var1[4]);
  t7196 = Sin(var1[5]);
  t1098 = Cos(var1[14]);
  t1455 = -1.*t1098;
  t2601 = 1. + t1455;
  t7126 = Sin(var1[14]);
  t7171 = Sin(var1[13]);
  t7189 = -1.*t7178*t7156*t7187;
  t7197 = t7191*t7196;
  t7199 = t7189 + t7197;
  t7201 = Cos(var1[13]);
  t7216 = -1.*t7191*t7178;
  t7217 = -1.*t7156*t7187*t7196;
  t7220 = t7216 + t7217;
  t901 = Cos(var1[4]);
  t7226 = t7171*t7199;
  t7227 = t7201*t7220;
  t7229 = t7226 + t7227;
  t7231 = Cos(var1[15]);
  t7236 = -1.*t7231;
  t7239 = 1. + t7236;
  t7243 = Sin(var1[15]);
  t7246 = t7201*t7199;
  t7247 = -1.*t7171*t7220;
  t7249 = t7246 + t7247;
  t7260 = -1.*t1098*t901*t7156;
  t7261 = t7126*t7229;
  t7263 = t7260 + t7261;
  t2945 = -0.049*t2601;
  t7141 = -0.135*t7126;
  t7148 = 0. + t2945 + t7141;
  t7176 = 0.135*t7171;
  t7177 = 0. + t7176;
  t7203 = -1.*t7201;
  t7207 = 1. + t7203;
  t7212 = -0.135*t7207;
  t7215 = 0. + t7212;
  t7222 = -0.135*t2601;
  t7224 = 0.049*t7126;
  t7225 = 0. + t7222 + t7224;
  t7282 = t7191*t7178*t7187;
  t7283 = t7156*t7196;
  t7284 = t7282 + t7283;
  t7286 = -1.*t7178*t7156;
  t7287 = t7191*t7187*t7196;
  t7288 = t7286 + t7287;
  t7241 = -0.09*t7239;
  t7244 = 0.049*t7243;
  t7245 = 0. + t7241 + t7244;
  t7290 = t7171*t7284;
  t7291 = t7201*t7288;
  t7292 = t7290 + t7291;
  t7256 = -0.049*t7239;
  t7257 = -0.09*t7243;
  t7259 = 0. + t7256 + t7257;
  t7294 = t7201*t7284;
  t7295 = -1.*t7171*t7288;
  t7296 = t7294 + t7295;
  t7305 = t1098*t7191*t901;
  t7307 = t7126*t7292;
  t7308 = t7305 + t7307;
  t7322 = t7191*t901*t7178*t7171;
  t7323 = t7201*t7191*t901*t7196;
  t7324 = t7322 + t7323;
  t7326 = t7201*t7191*t901*t7178;
  t7327 = -1.*t7191*t901*t7171*t7196;
  t7328 = t7326 + t7327;
  t7334 = -1.*t1098*t7191*t7187;
  t7335 = t7126*t7324;
  t7336 = t7334 + t7335;
  t7350 = t901*t7178*t7171*t7156;
  t7351 = t7201*t901*t7156*t7196;
  t7352 = t7350 + t7351;
  t7354 = t7201*t901*t7178*t7156;
  t7355 = -1.*t901*t7171*t7156*t7196;
  t7356 = t7354 + t7355;
  t7362 = -1.*t1098*t7156*t7187;
  t7363 = t7126*t7352;
  t7364 = t7362 + t7363;
  t7378 = -1.*t7178*t7171*t7187;
  t7379 = -1.*t7201*t7187*t7196;
  t7380 = t7378 + t7379;
  t7382 = -1.*t7201*t7178*t7187;
  t7383 = t7171*t7187*t7196;
  t7384 = t7382 + t7383;
  t7390 = -1.*t1098*t901;
  t7391 = t7126*t7380;
  t7392 = t7390 + t7391;
  t7404 = t7178*t7156;
  t7405 = -1.*t7191*t7187*t7196;
  t7406 = t7404 + t7405;
  t7412 = t7171*t7406;
  t7413 = t7294 + t7412;
  t7408 = -1.*t7171*t7284;
  t7409 = t7201*t7406;
  t7410 = t7408 + t7409;
  t7426 = t7178*t7156*t7187;
  t7427 = -1.*t7191*t7196;
  t7428 = t7426 + t7427;
  t7434 = t7201*t7428;
  t7435 = t7171*t7220;
  t7436 = t7434 + t7435;
  t7431 = -1.*t7171*t7428;
  t7432 = t7431 + t7227;
  t7455 = t7201*t901*t7178;
  t7456 = -1.*t901*t7171*t7196;
  t7457 = t7455 + t7456;
  t7451 = -1.*t901*t7178*t7171;
  t7452 = -1.*t7201*t901*t7196;
  t7453 = t7451 + t7452;
  t7472 = -1.*t7201*t7288;
  t7473 = t7408 + t7472;
  t7488 = t7191*t7178;
  t7489 = t7156*t7187*t7196;
  t7490 = t7488 + t7489;
  t7495 = -1.*t7171*t7490;
  t7496 = t7434 + t7495;
  t7492 = -1.*t7201*t7490;
  t7493 = t7431 + t7492;
  t7454 = t7245*t7453;
  t7458 = -0.135*t1098*t7457;
  t7459 = t7225*t7457;
  t7460 = t7126*t7259*t7457;
  t7461 = t7243*t7453;
  t7462 = t7231*t7126*t7457;
  t7463 = t7461 + t7462;
  t7464 = -0.049*t7463;
  t7465 = t7231*t7453;
  t7466 = -1.*t7126*t7243*t7457;
  t7467 = t7465 + t7466;
  t7468 = -0.09*t7467;
  t7300 = -1.*t7191*t901*t7126;
  t7301 = t1098*t7292;
  t7302 = t7300 + t7301;
  t7512 = -0.135*t1098;
  t7513 = -0.049*t7126;
  t7514 = t7512 + t7513;
  t7516 = 0.049*t1098;
  t7517 = t7516 + t7141;
  t7528 = t7171*t7428;
  t7529 = t7201*t7490;
  t7530 = t7528 + t7529;
  t7532 = -1.*t901*t7126*t7156;
  t7533 = t1098*t7530;
  t7534 = t7532 + t7533;
  t7543 = t901*t7178*t7171;
  t7544 = t7201*t901*t7196;
  t7545 = t7543 + t7544;
  t7547 = t7126*t7187;
  t7548 = t1098*t7545;
  t7549 = t7547 + t7548;
  t7314 = t7231*t7296;
  t7315 = -1.*t7243*t7308;
  t7316 = t7314 + t7315;
  t7558 = 0.049*t7231;
  t7559 = t7558 + t7257;
  t7561 = -0.09*t7231;
  t7562 = -0.049*t7243;
  t7563 = t7561 + t7562;
  t7572 = t1098*t901*t7156;
  t7573 = t7126*t7530;
  t7574 = t7572 + t7573;
  t7586 = -1.*t1098*t7187;
  t7587 = t7126*t7545;
  t7588 = t7586 + t7587;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t7177*t7199 + t7215*t7220 + t7225*t7229 + t7245*t7249 + t7259*t7263 - 0.049*(t7243*t7249 + t7231*t7263) - 0.09*(t7231*t7249 - 1.*t7243*t7263) - 1.*t7148*t7156*t901 - 0.135*(t1098*t7229 + t7126*t7156*t901);
  p_output1[10]=t7177*t7284 + t7215*t7288 + t7225*t7292 + t7245*t7296 - 0.135*t7302 + t7259*t7308 - 0.049*(t7243*t7296 + t7231*t7308) - 0.09*t7316 + t7148*t7191*t901;
  p_output1[11]=0;
  p_output1[12]=-1.*t7148*t7187*t7191 + t7225*t7324 - 0.135*(t7126*t7187*t7191 + t1098*t7324) + t7245*t7328 + t7259*t7336 - 0.049*(t7243*t7328 + t7231*t7336) - 0.09*(t7231*t7328 - 1.*t7243*t7336) + t7177*t7178*t7191*t901 + t7191*t7196*t7215*t901;
  p_output1[13]=-1.*t7148*t7156*t7187 + t7225*t7352 - 0.135*(t7126*t7156*t7187 + t1098*t7352) + t7245*t7356 + t7259*t7364 - 0.049*(t7243*t7356 + t7231*t7364) - 0.09*(t7231*t7356 - 1.*t7243*t7364) + t7156*t7177*t7178*t901 + t7156*t7196*t7215*t901;
  p_output1[14]=-1.*t7177*t7178*t7187 - 1.*t7187*t7196*t7215 + t7225*t7380 + t7245*t7384 + t7259*t7392 - 0.049*(t7243*t7384 + t7231*t7392) - 0.09*(t7231*t7384 - 1.*t7243*t7392) - 1.*t7148*t901 - 0.135*(t1098*t7380 + t7126*t901);
  p_output1[15]=t7215*t7284 + t7177*t7406 + t7245*t7410 - 0.135*t1098*t7413 + t7225*t7413 + t7126*t7259*t7413 - 0.049*(t7243*t7410 + t7126*t7231*t7413) - 0.09*(t7231*t7410 - 1.*t7126*t7243*t7413);
  p_output1[16]=t7177*t7220 + t7215*t7428 + t7245*t7432 - 0.135*t1098*t7436 + t7225*t7436 + t7126*t7259*t7436 - 0.049*(t7243*t7432 + t7126*t7231*t7436) - 0.09*(t7231*t7432 - 1.*t7126*t7243*t7436);
  p_output1[17]=t7454 + t7458 + t7459 + t7460 + t7464 + t7468 - 1.*t7177*t7196*t901 + t7178*t7215*t901;
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
  p_output1[39]=0.135*t7201*t7284 - 0.135*t7171*t7288 - 0.135*t1098*t7296 + t7225*t7296 + t7126*t7259*t7296 + t7245*t7473 - 0.09*(-1.*t7126*t7243*t7296 + t7231*t7473) - 0.049*(t7126*t7231*t7296 + t7243*t7473);
  p_output1[40]=0.135*t7201*t7428 - 0.135*t7171*t7490 + t7245*t7493 - 0.135*t1098*t7496 + t7225*t7496 + t7126*t7259*t7496 - 0.049*(t7243*t7493 + t7126*t7231*t7496) - 0.09*(t7231*t7493 - 1.*t7126*t7243*t7496);
  p_output1[41]=t7454 + t7458 + t7459 + t7460 + t7464 + t7468 - 0.135*t7171*t7196*t901 + 0.135*t7178*t7201*t901;
  p_output1[42]=-0.049*t7231*t7302 + 0.09*t7243*t7302 + t7259*t7302 + t7292*t7517 + t7191*t7514*t901 - 0.135*(-1.*t7126*t7292 - 1.*t1098*t7191*t901);
  p_output1[43]=t7517*t7530 - 0.135*(t7260 - 1.*t7126*t7530) - 0.049*t7231*t7534 + 0.09*t7243*t7534 + t7259*t7534 + t7156*t7514*t901;
  p_output1[44]=-1.*t7187*t7514 + t7517*t7545 - 0.135*(t1098*t7187 - 1.*t7126*t7545) - 0.049*t7231*t7549 + 0.09*t7243*t7549 + t7259*t7549;
  p_output1[45]=-0.09*(-1.*t7243*t7296 - 1.*t7231*t7308) - 0.049*t7316 + t7296*t7559 + t7308*t7563;
  p_output1[46]=t7496*t7559 + t7563*t7574 - 0.09*(-1.*t7243*t7496 - 1.*t7231*t7574) - 0.049*(t7231*t7496 - 1.*t7243*t7574);
  p_output1[47]=t7457*t7559 + t7563*t7588 - 0.09*(-1.*t7243*t7457 - 1.*t7231*t7588) - 0.049*(t7231*t7457 - 1.*t7243*t7588);
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
