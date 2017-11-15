/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:31:58 GMT-05:00
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
  double t375;
  double t378;
  double t380;
  double t368;
  double t381;
  double t343;
  double t386;
  double t391;
  double t394;
  double t377;
  double t383;
  double t384;
  double t395;
  double t412;
  double t413;
  double t414;
  double t416;
  double t409;
  double t410;
  double t411;
  double t423;
  double t344;
  double t360;
  double t362;
  double t363;
  double t398;
  double t400;
  double t443;
  double t444;
  double t445;
  double t439;
  double t440;
  double t441;
  double t415;
  double t418;
  double t419;
  double t424;
  double t425;
  double t427;
  double t452;
  double t453;
  double t454;
  double t472;
  double t473;
  double t474;
  double t492;
  double t493;
  double t494;
  double t512;
  double t513;
  double t514;
  double t527;
  double t528;
  double t529;
  double t447;
  double t535;
  double t536;
  double t541;
  double t542;
  double t543;
  double t549;
  double t550;
  double t551;
  double t562;
  double t563;
  double t564;
  double t532;
  double t448;
  double t449;
  double t579;
  double t580;
  double t581;
  double t546;
  double t586;
  double t587;
  double t558;
  double t559;
  double t560;
  double t561;
  double t565;
  double t566;
  double t567;
  double t457;
  double t458;
  double t459;
  double t595;
  double t596;
  double t597;
  double t599;
  double t600;
  double t609;
  double t610;
  double t611;
  double t434;
  double t622;
  double t623;
  double t624;
  t375 = Cos(var1[5]);
  t378 = Sin(var1[3]);
  t380 = Sin(var1[4]);
  t368 = Cos(var1[3]);
  t381 = Sin(var1[5]);
  t343 = Cos(var1[6]);
  t386 = -1.*t375*t378*t380;
  t391 = t368*t381;
  t394 = t386 + t391;
  t377 = -1.*t368*t375;
  t383 = -1.*t378*t380*t381;
  t384 = t377 + t383;
  t395 = Sin(var1[6]);
  t412 = Cos(var1[7]);
  t413 = -1.*t412;
  t414 = 1. + t413;
  t416 = Sin(var1[7]);
  t409 = t343*t384;
  t410 = t394*t395;
  t411 = t409 + t410;
  t423 = Cos(var1[4]);
  t344 = -1.*t343;
  t360 = 1. + t344;
  t362 = 0.135*t360;
  t363 = 0. + t362;
  t398 = -0.135*t395;
  t400 = 0. + t398;
  t443 = t368*t375*t380;
  t444 = t378*t381;
  t445 = t443 + t444;
  t439 = -1.*t375*t378;
  t440 = t368*t380*t381;
  t441 = t439 + t440;
  t415 = 0.135*t414;
  t418 = 0.049*t416;
  t419 = 0. + t415 + t418;
  t424 = -0.049*t414;
  t425 = 0.135*t416;
  t427 = 0. + t424 + t425;
  t452 = t343*t441;
  t453 = t445*t395;
  t454 = t452 + t453;
  t472 = t368*t423*t343*t381;
  t473 = t368*t423*t375*t395;
  t474 = t472 + t473;
  t492 = t423*t343*t378*t381;
  t493 = t423*t375*t378*t395;
  t494 = t492 + t493;
  t512 = -1.*t343*t380*t381;
  t513 = -1.*t375*t380*t395;
  t514 = t512 + t513;
  t527 = t375*t378;
  t528 = -1.*t368*t380*t381;
  t529 = t527 + t528;
  t447 = t343*t445;
  t535 = t529*t395;
  t536 = t447 + t535;
  t541 = t375*t378*t380;
  t542 = -1.*t368*t381;
  t543 = t541 + t542;
  t549 = t343*t543;
  t550 = t384*t395;
  t551 = t549 + t550;
  t562 = t423*t375*t343;
  t563 = -1.*t423*t381*t395;
  t564 = t562 + t563;
  t532 = -1.*t445*t395;
  t448 = -1.*t441*t395;
  t449 = t447 + t448;
  t579 = t368*t375;
  t580 = t378*t380*t381;
  t581 = t579 + t580;
  t546 = -1.*t543*t395;
  t586 = -1.*t581*t395;
  t587 = t549 + t586;
  t558 = -1.*t423*t343*t381;
  t559 = -1.*t423*t375*t395;
  t560 = t558 + t559;
  t561 = -0.09*t560;
  t565 = 0.135*t412*t564;
  t566 = t564*t419;
  t567 = -0.049*t564*t416;
  t457 = t412*t454;
  t458 = -1.*t368*t423*t416;
  t459 = t457 + t458;
  t595 = 0.135*t412;
  t596 = -0.049*t416;
  t597 = t595 + t596;
  t599 = 0.049*t412;
  t600 = t599 + t425;
  t609 = t343*t581;
  t610 = t543*t395;
  t611 = t609 + t610;
  t434 = -1.*t423*t412*t378;
  t622 = t423*t343*t381;
  t623 = t423*t375*t395;
  t624 = t622 + t623;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t363*t384 - 0.09*(t343*t394 - 1.*t384*t395) + t394*t400 + t411*t419 + 0.135*(t411*t412 + t378*t416*t423) - 1.*t378*t423*t427 - 0.049*(t411*t416 + t434);
  p_output1[10]=t368*t423*t427 + t363*t441 + t400*t445 - 0.09*t449 + t419*t454 - 0.049*(t368*t412*t423 + t416*t454) + 0.135*t459;
  p_output1[11]=0;
  p_output1[12]=t363*t368*t381*t423 + t368*t375*t400*t423 - 0.09*(t343*t368*t375*t423 - 1.*t368*t381*t395*t423) - 1.*t368*t380*t427 + t419*t474 + 0.135*(t368*t380*t416 + t412*t474) - 0.049*(-1.*t368*t380*t412 + t416*t474);
  p_output1[13]=t363*t378*t381*t423 + t375*t378*t400*t423 - 0.09*(t343*t375*t378*t423 - 1.*t378*t381*t395*t423) - 1.*t378*t380*t427 + t419*t494 + 0.135*(t378*t380*t416 + t412*t494) - 0.049*(-1.*t378*t380*t412 + t416*t494);
  p_output1[14]=-1.*t363*t380*t381 - 0.09*(-1.*t343*t375*t380 + t380*t381*t395) - 1.*t375*t380*t400 - 1.*t423*t427 + t419*t514 + 0.135*(t416*t423 + t412*t514) - 0.049*(-1.*t412*t423 + t416*t514);
  p_output1[15]=t363*t445 + t400*t529 - 0.09*(t343*t529 + t532) + 0.135*t412*t536 - 0.049*t416*t536 + t419*t536;
  p_output1[16]=t384*t400 + t363*t543 - 0.09*(t409 + t546) + 0.135*t412*t551 - 0.049*t416*t551 + t419*t551;
  p_output1[17]=t363*t375*t423 - 1.*t381*t400*t423 + t561 + t565 + t566 + t567;
  p_output1[18]=0.135*t395*t441 - 0.135*t343*t445 + 0.135*t412*t449 - 0.049*t416*t449 + t419*t449 - 0.09*(-1.*t343*t441 + t532);
  p_output1[19]=-0.135*t343*t543 + 0.135*t395*t581 - 0.09*(t546 - 1.*t343*t581) + 0.135*t412*t587 - 0.049*t416*t587 + t419*t587;
  p_output1[20]=-0.135*t343*t375*t423 + 0.135*t381*t395*t423 + t561 + t565 + t566 + t567;
  p_output1[21]=0.135*(-1.*t368*t412*t423 - 1.*t416*t454) - 0.049*t459 + t368*t423*t597 + t454*t600;
  p_output1[22]=t378*t423*t597 + t600*t611 - 0.049*(-1.*t378*t416*t423 + t412*t611) + 0.135*(t434 - 1.*t416*t611);
  p_output1[23]=-1.*t380*t597 + t600*t624 - 0.049*(t380*t416 + t412*t624) + 0.135*(t380*t412 - 1.*t416*t624);
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

#include "J_hip_rotation_left_mex.hh"

namespace SymExpression
{

void J_hip_rotation_left_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
