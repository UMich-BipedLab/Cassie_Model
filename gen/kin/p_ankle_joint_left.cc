/*
 * Automatically Generated from Mathematica.
 * Tue 17 Oct 2017 12:27:36 GMT-04:00
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
  double t288;
  double t273;
  double t293;
  double t274;
  double t294;
  double t241;
  double t284;
  double t305;
  double t306;
  double t316;
  double t318;
  double t324;
  double t326;
  double t342;
  double t359;
  double t360;
  double t361;
  double t353;
  double t354;
  double t355;
  double t362;
  double t400;
  double t403;
  double t406;
  double t408;
  double t392;
  double t395;
  double t397;
  double t412;
  double t371;
  double t375;
  double t377;
  double t381;
  double t384;
  double t388;
  double t389;
  double t427;
  double t428;
  double t431;
  double t433;
  double t434;
  double t435;
  double t441;
  double t447;
  double t448;
  double t449;
  double t458;
  double t459;
  double t460;
  double t462;
  double t463;
  double t465;
  double t467;
  double t470;
  double t471;
  double t472;
  double t479;
  double t480;
  double t481;
  double t250;
  double t254;
  double t255;
  double t261;
  double t332;
  double t338;
  double t344;
  double t346;
  double t347;
  double t350;
  double t492;
  double t493;
  double t494;
  double t496;
  double t497;
  double t498;
  double t364;
  double t367;
  double t378;
  double t382;
  double t383;
  double t504;
  double t505;
  double t506;
  double t500;
  double t501;
  double t502;
  double t407;
  double t409;
  double t410;
  double t413;
  double t414;
  double t415;
  double t512;
  double t513;
  double t514;
  double t423;
  double t425;
  double t426;
  double t437;
  double t443;
  double t444;
  double t508;
  double t509;
  double t510;
  double t521;
  double t522;
  double t523;
  double t453;
  double t454;
  double t455;
  double t466;
  double t468;
  double t469;
  double t525;
  double t526;
  double t527;
  double t529;
  double t530;
  double t531;
  double t476;
  double t477;
  double t478;
  double t533;
  double t534;
  double t535;
  double t537;
  double t538;
  double t539;
  double t556;
  double t557;
  double t558;
  double t552;
  double t553;
  double t554;
  double t564;
  double t565;
  double t566;
  double t560;
  double t561;
  double t562;
  double t573;
  double t574;
  double t575;
  double t577;
  double t578;
  double t579;
  double t581;
  double t582;
  double t583;
  double t585;
  double t586;
  double t587;
  double t589;
  double t590;
  double t591;
  t288 = Cos(var1[3]);
  t273 = Cos(var1[5]);
  t293 = Sin(var1[4]);
  t274 = Sin(var1[3]);
  t294 = Sin(var1[5]);
  t241 = Cos(var1[6]);
  t284 = -1.*t273*t274;
  t305 = t288*t293*t294;
  t306 = t284 + t305;
  t316 = t288*t273*t293;
  t318 = t274*t294;
  t324 = t316 + t318;
  t326 = Sin(var1[6]);
  t342 = Cos(var1[7]);
  t359 = t241*t324;
  t360 = -1.*t306*t326;
  t361 = t359 + t360;
  t353 = t241*t306;
  t354 = t324*t326;
  t355 = t353 + t354;
  t362 = Sin(var1[7]);
  t400 = Cos(var1[8]);
  t403 = -1.*t400;
  t406 = 1. + t403;
  t408 = Sin(var1[8]);
  t392 = t342*t355;
  t395 = t361*t362;
  t397 = t392 + t395;
  t412 = Cos(var1[4]);
  t371 = Cos(var1[9]);
  t375 = -1.*t371;
  t377 = 1. + t375;
  t381 = Sin(var1[9]);
  t384 = t342*t361;
  t388 = -1.*t355*t362;
  t389 = t384 + t388;
  t427 = t288*t412*t400;
  t428 = t397*t408;
  t431 = t427 + t428;
  t433 = Cos(var1[10]);
  t434 = -1.*t433;
  t435 = 1. + t434;
  t441 = Sin(var1[10]);
  t447 = t381*t389;
  t448 = t371*t431;
  t449 = t447 + t448;
  t458 = t371*t389;
  t459 = -1.*t381*t431;
  t460 = t458 + t459;
  t462 = Cos(var1[11]);
  t463 = -1.*t462;
  t465 = 1. + t463;
  t467 = Sin(var1[11]);
  t470 = -1.*t441*t449;
  t471 = t433*t460;
  t472 = t470 + t471;
  t479 = t433*t449;
  t480 = t441*t460;
  t481 = t479 + t480;
  t250 = -1.*t241;
  t254 = 1. + t250;
  t255 = 0.135*t254;
  t261 = 0. + t255;
  t332 = -0.135*t326;
  t338 = 0. + t332;
  t344 = -1.*t342;
  t346 = 1. + t344;
  t347 = 0.135*t346;
  t350 = 0. + t347;
  t492 = t288*t273;
  t493 = t274*t293*t294;
  t494 = t492 + t493;
  t496 = t273*t274*t293;
  t497 = -1.*t288*t294;
  t498 = t496 + t497;
  t364 = -0.135*t362;
  t367 = 0. + t364;
  t378 = -0.09*t377;
  t382 = 0.049*t381;
  t383 = 0. + t378 + t382;
  t504 = t241*t498;
  t505 = -1.*t494*t326;
  t506 = t504 + t505;
  t500 = t241*t494;
  t501 = t498*t326;
  t502 = t500 + t501;
  t407 = 0.135*t406;
  t409 = 0.049*t408;
  t410 = 0. + t407 + t409;
  t413 = -0.049*t406;
  t414 = 0.135*t408;
  t415 = 0. + t413 + t414;
  t512 = t342*t502;
  t513 = t506*t362;
  t514 = t512 + t513;
  t423 = -0.049*t377;
  t425 = -0.09*t381;
  t426 = 0. + t423 + t425;
  t437 = -0.049*t435;
  t443 = -0.21*t441;
  t444 = 0. + t437 + t443;
  t508 = t342*t506;
  t509 = -1.*t502*t362;
  t510 = t508 + t509;
  t521 = t412*t400*t274;
  t522 = t514*t408;
  t523 = t521 + t522;
  t453 = -0.21*t435;
  t454 = 0.049*t441;
  t455 = 0. + t453 + t454;
  t466 = -0.2707*t465;
  t468 = 0.0016*t467;
  t469 = 0. + t466 + t468;
  t525 = t381*t510;
  t526 = t371*t523;
  t527 = t525 + t526;
  t529 = t371*t510;
  t530 = -1.*t381*t523;
  t531 = t529 + t530;
  t476 = -0.0016*t465;
  t477 = -0.2707*t467;
  t478 = 0. + t476 + t477;
  t533 = -1.*t441*t527;
  t534 = t433*t531;
  t535 = t533 + t534;
  t537 = t433*t527;
  t538 = t441*t531;
  t539 = t537 + t538;
  t556 = t412*t273*t241;
  t557 = -1.*t412*t294*t326;
  t558 = t556 + t557;
  t552 = t412*t241*t294;
  t553 = t412*t273*t326;
  t554 = t552 + t553;
  t564 = t342*t554;
  t565 = t558*t362;
  t566 = t564 + t565;
  t560 = t342*t558;
  t561 = -1.*t554*t362;
  t562 = t560 + t561;
  t573 = -1.*t400*t293;
  t574 = t566*t408;
  t575 = t573 + t574;
  t577 = t381*t562;
  t578 = t371*t575;
  t579 = t577 + t578;
  t581 = t371*t562;
  t582 = -1.*t381*t575;
  t583 = t581 + t582;
  t585 = -1.*t441*t579;
  t586 = t433*t583;
  t587 = t585 + t586;
  t589 = t433*t579;
  t590 = t441*t583;
  t591 = t589 + t590;
  p_output1[0]=0. + t261*t306 + t324*t338 + t350*t355 + t361*t367 + t383*t389 + t397*t410 + 0.1305*(t397*t400 - 1.*t288*t408*t412) + t288*t412*t415 + t426*t431 + t444*t449 + t455*t460 + t469*t472 + t478*t481 + 0.0184*(t467*t472 + t462*t481) - 0.7055*(t462*t472 - 1.*t467*t481) + var1[0];
  p_output1[1]=0. + t274*t412*t415 + t261*t494 + t338*t498 + t350*t502 + t367*t506 + t383*t510 + t410*t514 + 0.1305*(-1.*t274*t408*t412 + t400*t514) + t426*t523 + t444*t527 + t455*t531 + t469*t535 + t478*t539 + 0.0184*(t467*t535 + t462*t539) - 0.7055*(t462*t535 - 1.*t467*t539) + var1[1];
  p_output1[2]=0. + t261*t294*t412 + t273*t338*t412 - 1.*t293*t415 + t350*t554 + t367*t558 + t383*t562 + t410*t566 + 0.1305*(t293*t408 + t400*t566) + t426*t575 + t444*t579 + t455*t583 + t469*t587 + t478*t591 + 0.0184*(t467*t587 + t462*t591) - 0.7055*(t462*t587 - 1.*t467*t591) + var1[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "p_ankle_joint_left.hh"

namespace SymExpression
{

void p_ankle_joint_left_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
