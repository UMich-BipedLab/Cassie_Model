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
  double t324;
  double t340;
  double t318;
  double t332;
  double t347;
  double t316;
  double t358;
  double t359;
  double t361;
  double t338;
  double t350;
  double t353;
  double t364;
  double t310;
  double t382;
  double t383;
  double t384;
  double t354;
  double t367;
  double t370;
  double t389;
  double t407;
  double t378;
  double t391;
  double t392;
  double t305;
  double t409;
  double t410;
  double t411;
  double t413;
  double t414;
  double t416;
  double t418;
  double t419;
  double t421;
  double t426;
  double t395;
  double t422;
  double t423;
  double t261;
  double t427;
  double t428;
  double t432;
  double t255;
  double t468;
  double t469;
  double t471;
  double t458;
  double t460;
  double t461;
  double t478;
  double t479;
  double t480;
  double t466;
  double t473;
  double t476;
  double t477;
  double t482;
  double t483;
  double t485;
  double t486;
  double t487;
  double t488;
  double t489;
  double t490;
  double t447;
  double t484;
  double t491;
  double t492;
  double t495;
  double t496;
  double t498;
  double t515;
  double t516;
  double t517;
  double t510;
  double t511;
  double t512;
  double t513;
  double t518;
  double t519;
  double t521;
  double t522;
  double t524;
  double t525;
  double t526;
  double t528;
  double t520;
  double t529;
  double t531;
  double t534;
  double t536;
  double t537;
  double t425;
  double t437;
  double t443;
  double t448;
  double t452;
  double t453;
  double t493;
  double t499;
  double t500;
  double t503;
  double t504;
  double t506;
  double t532;
  double t538;
  double t540;
  double t542;
  double t543;
  double t544;
  double t597;
  double t598;
  double t590;
  double t592;
  double t615;
  double t616;
  double t625;
  double t626;
  double t547;
  double t548;
  double t549;
  double t568;
  double t569;
  double t570;
  double t571;
  double t574;
  double t576;
  double t578;
  double t580;
  double t581;
  double t583;
  double t586;
  double t588;
  double t593;
  double t594;
  double t595;
  double t599;
  double t600;
  double t601;
  double t603;
  double t604;
  double t605;
  double t611;
  double t612;
  double t613;
  double t617;
  double t618;
  double t619;
  double t621;
  double t622;
  double t623;
  double t627;
  double t628;
  double t629;
  double t631;
  double t632;
  double t633;
  double t550;
  double t551;
  double t552;
  double t553;
  double t555;
  double t556;
  t324 = Cos(var1[5]);
  t340 = Sin(var1[3]);
  t318 = Cos(var1[3]);
  t332 = Sin(var1[4]);
  t347 = Sin(var1[5]);
  t316 = Cos(var1[6]);
  t358 = -1.*t324*t340;
  t359 = t318*t332*t347;
  t361 = t358 + t359;
  t338 = t318*t324*t332;
  t350 = t340*t347;
  t353 = t338 + t350;
  t364 = Sin(var1[6]);
  t310 = Cos(var1[7]);
  t382 = t316*t361;
  t383 = t353*t364;
  t384 = t382 + t383;
  t354 = t316*t353;
  t367 = -1.*t361*t364;
  t370 = t354 + t367;
  t389 = Sin(var1[7]);
  t407 = Cos(var1[9]);
  t378 = t310*t370;
  t391 = -1.*t384*t389;
  t392 = t378 + t391;
  t305 = Sin(var1[9]);
  t409 = Cos(var1[4]);
  t410 = Cos(var1[8]);
  t411 = t318*t409*t410;
  t413 = t310*t384;
  t414 = t370*t389;
  t416 = t413 + t414;
  t418 = Sin(var1[8]);
  t419 = t416*t418;
  t421 = t411 + t419;
  t426 = Cos(var1[10]);
  t395 = t305*t392;
  t422 = t407*t421;
  t423 = t395 + t422;
  t261 = Sin(var1[10]);
  t427 = t407*t392;
  t428 = -1.*t305*t421;
  t432 = t427 + t428;
  t255 = Cos(var1[11]);
  t468 = t318*t324;
  t469 = t340*t332*t347;
  t471 = t468 + t469;
  t458 = t324*t340*t332;
  t460 = -1.*t318*t347;
  t461 = t458 + t460;
  t478 = t316*t471;
  t479 = t461*t364;
  t480 = t478 + t479;
  t466 = t316*t461;
  t473 = -1.*t471*t364;
  t476 = t466 + t473;
  t477 = t310*t476;
  t482 = -1.*t480*t389;
  t483 = t477 + t482;
  t485 = t409*t410*t340;
  t486 = t310*t480;
  t487 = t476*t389;
  t488 = t486 + t487;
  t489 = t488*t418;
  t490 = t485 + t489;
  t447 = Sin(var1[11]);
  t484 = t305*t483;
  t491 = t407*t490;
  t492 = t484 + t491;
  t495 = t407*t483;
  t496 = -1.*t305*t490;
  t498 = t495 + t496;
  t515 = t409*t316*t347;
  t516 = t409*t324*t364;
  t517 = t515 + t516;
  t510 = t409*t324*t316;
  t511 = -1.*t409*t347*t364;
  t512 = t510 + t511;
  t513 = t310*t512;
  t518 = -1.*t517*t389;
  t519 = t513 + t518;
  t521 = -1.*t410*t332;
  t522 = t310*t517;
  t524 = t512*t389;
  t525 = t522 + t524;
  t526 = t525*t418;
  t528 = t521 + t526;
  t520 = t305*t519;
  t529 = t407*t528;
  t531 = t520 + t529;
  t534 = t407*t519;
  t536 = -1.*t305*t528;
  t537 = t534 + t536;
  t425 = -1.*t261*t423;
  t437 = t426*t432;
  t443 = t425 + t437;
  t448 = t426*t423;
  t452 = t261*t432;
  t453 = t448 + t452;
  t493 = -1.*t261*t492;
  t499 = t426*t498;
  t500 = t493 + t499;
  t503 = t426*t492;
  t504 = t261*t498;
  t506 = t503 + t504;
  t532 = -1.*t261*t531;
  t538 = t426*t537;
  t540 = t532 + t538;
  t542 = t426*t531;
  t543 = t261*t537;
  t544 = t542 + t543;
  t597 = -1.*t410;
  t598 = 1. + t597;
  t590 = -1.*t407;
  t592 = 1. + t590;
  t615 = -1.*t426;
  t616 = 1. + t615;
  t625 = -1.*t255;
  t626 = 1. + t625;
  t547 = t447*t443;
  t548 = t255*t453;
  t549 = t547 + t548;
  t568 = -1.*t316;
  t569 = 1. + t568;
  t570 = 0.135*t569;
  t571 = 0. + t570;
  t574 = -0.135*t364;
  t576 = 0. + t574;
  t578 = -1.*t310;
  t580 = 1. + t578;
  t581 = 0.135*t580;
  t583 = 0. + t581;
  t586 = -0.135*t389;
  t588 = 0. + t586;
  t593 = -0.09*t592;
  t594 = 0.049*t305;
  t595 = 0. + t593 + t594;
  t599 = 0.135*t598;
  t600 = 0.049*t418;
  t601 = 0. + t599 + t600;
  t603 = -0.049*t598;
  t604 = 0.135*t418;
  t605 = 0. + t603 + t604;
  t611 = -0.049*t592;
  t612 = -0.09*t305;
  t613 = 0. + t611 + t612;
  t617 = -0.049*t616;
  t618 = -0.21*t261;
  t619 = 0. + t617 + t618;
  t621 = -0.21*t616;
  t622 = 0.049*t261;
  t623 = 0. + t621 + t622;
  t627 = -0.2707*t626;
  t628 = 0.0016*t447;
  t629 = 0. + t627 + t628;
  t631 = -0.0016*t626;
  t632 = -0.2707*t447;
  t633 = 0. + t631 + t632;
  t550 = t447*t500;
  t551 = t255*t506;
  t552 = t550 + t551;
  t553 = t447*t540;
  t555 = t255*t544;
  t556 = t553 + t555;
  p_output1[0]=-1.*t255*t443 + t447*t453;
  p_output1[1]=-1.*t255*t500 + t447*t506;
  p_output1[2]=-1.*t255*t540 + t447*t544;
  p_output1[3]=0.;
  p_output1[4]=t549;
  p_output1[5]=t552;
  p_output1[6]=t556;
  p_output1[7]=0.;
  p_output1[8]=-1.*t410*t416 + t318*t409*t418;
  p_output1[9]=t340*t409*t418 - 1.*t410*t488;
  p_output1[10]=-1.*t332*t418 - 1.*t410*t525;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.1305*(t410*t416 - 1.*t318*t409*t418) - 0.7055*(t255*t443 - 1.*t447*t453) + 0.0184*t549 + t361*t571 + t353*t576 + t384*t583 + t370*t588 + t392*t595 + t416*t601 + t318*t409*t605 + t421*t613 + t423*t619 + t432*t623 + t443*t629 + t453*t633 + var1[0];
  p_output1[13]=0. + 0.1305*(-1.*t340*t409*t418 + t410*t488) - 0.7055*(t255*t500 - 1.*t447*t506) + 0.0184*t552 + t471*t571 + t461*t576 + t480*t583 + t476*t588 + t483*t595 + t488*t601 + t340*t409*t605 + t490*t613 + t492*t619 + t498*t623 + t500*t629 + t506*t633 + var1[1];
  p_output1[14]=0. + 0.1305*(t332*t418 + t410*t525) - 0.7055*(t255*t540 - 1.*t447*t544) + 0.0184*t556 + t347*t409*t571 + t324*t409*t576 + t517*t583 + t512*t588 + t519*t595 + t525*t601 - 1.*t332*t605 + t528*t613 + t531*t619 + t537*t623 + t540*t629 + t544*t633 + var1[2];
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

#include "H_ankle_joint_left.hh"

namespace SymExpression
{

void H_ankle_joint_left_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
