/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 11:08:04 GMT-04:00
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
  double t3359;
  double t3325;
  double t3360;
  double t3351;
  double t3361;
  double t3277;
  double t3358;
  double t3362;
  double t3363;
  double t3365;
  double t3366;
  double t3367;
  double t3368;
  double t3381;
  double t3382;
  double t3384;
  double t3388;
  double t3376;
  double t3377;
  double t3380;
  double t3392;
  double t3404;
  double t3405;
  double t3407;
  double t3410;
  double t3401;
  double t3402;
  double t3403;
  double t3414;
  double t3415;
  double t3416;
  double t3424;
  double t3426;
  double t3427;
  double t3430;
  double t3434;
  double t3435;
  double t3436;
  double t3444;
  double t3446;
  double t3447;
  double t3450;
  double t3451;
  double t3453;
  double t3455;
  double t3458;
  double t3459;
  double t3460;
  double t3465;
  double t3466;
  double t3467;
  double t3469;
  double t3470;
  double t3471;
  double t3474;
  double t3477;
  double t3478;
  double t3479;
  double t3485;
  double t3486;
  double t3487;
  double t3285;
  double t3286;
  double t3319;
  double t3324;
  double t3370;
  double t3372;
  double t3498;
  double t3499;
  double t3500;
  double t3502;
  double t3503;
  double t3504;
  double t3385;
  double t3389;
  double t3390;
  double t3393;
  double t3394;
  double t3395;
  double t3506;
  double t3507;
  double t3508;
  double t3408;
  double t3411;
  double t3412;
  double t3417;
  double t3418;
  double t3420;
  double t3429;
  double t3431;
  double t3433;
  double t3515;
  double t3516;
  double t3517;
  double t3519;
  double t3520;
  double t3521;
  double t3438;
  double t3440;
  double t3441;
  double t3454;
  double t3456;
  double t3457;
  double t3523;
  double t3524;
  double t3525;
  double t3527;
  double t3528;
  double t3529;
  double t3462;
  double t3463;
  double t3464;
  double t3473;
  double t3475;
  double t3476;
  double t3531;
  double t3532;
  double t3533;
  double t3535;
  double t3536;
  double t3537;
  double t3481;
  double t3482;
  double t3483;
  double t3539;
  double t3540;
  double t3541;
  double t3543;
  double t3544;
  double t3545;
  double t3558;
  double t3559;
  double t3560;
  double t3567;
  double t3568;
  double t3569;
  double t3571;
  double t3572;
  double t3573;
  double t3575;
  double t3576;
  double t3577;
  double t3579;
  double t3580;
  double t3581;
  double t3583;
  double t3584;
  double t3585;
  double t3587;
  double t3588;
  double t3589;
  double t3591;
  double t3592;
  double t3593;
  double t3595;
  double t3596;
  double t3597;
  t3359 = Cos(var1[3]);
  t3325 = Cos(var1[5]);
  t3360 = Sin(var1[4]);
  t3351 = Sin(var1[3]);
  t3361 = Sin(var1[5]);
  t3277 = Cos(var1[6]);
  t3358 = -1.*t3325*t3351;
  t3362 = t3359*t3360*t3361;
  t3363 = t3358 + t3362;
  t3365 = t3359*t3325*t3360;
  t3366 = t3351*t3361;
  t3367 = t3365 + t3366;
  t3368 = Sin(var1[6]);
  t3381 = Cos(var1[7]);
  t3382 = -1.*t3381;
  t3384 = 1. + t3382;
  t3388 = Sin(var1[7]);
  t3376 = t3277*t3363;
  t3377 = t3367*t3368;
  t3380 = t3376 + t3377;
  t3392 = Cos(var1[4]);
  t3404 = Cos(var1[8]);
  t3405 = -1.*t3404;
  t3407 = 1. + t3405;
  t3410 = Sin(var1[8]);
  t3401 = t3359*t3392*t3381;
  t3402 = t3380*t3388;
  t3403 = t3401 + t3402;
  t3414 = t3277*t3367;
  t3415 = -1.*t3363*t3368;
  t3416 = t3414 + t3415;
  t3424 = Cos(var1[9]);
  t3426 = -1.*t3424;
  t3427 = 1. + t3426;
  t3430 = Sin(var1[9]);
  t3434 = t3404*t3403;
  t3435 = t3416*t3410;
  t3436 = t3434 + t3435;
  t3444 = t3404*t3416;
  t3446 = -1.*t3403*t3410;
  t3447 = t3444 + t3446;
  t3450 = Cos(var1[10]);
  t3451 = -1.*t3450;
  t3453 = 1. + t3451;
  t3455 = Sin(var1[10]);
  t3458 = -1.*t3430*t3436;
  t3459 = t3424*t3447;
  t3460 = t3458 + t3459;
  t3465 = t3424*t3436;
  t3466 = t3430*t3447;
  t3467 = t3465 + t3466;
  t3469 = Cos(var1[11]);
  t3470 = -1.*t3469;
  t3471 = 1. + t3470;
  t3474 = Sin(var1[11]);
  t3477 = t3455*t3460;
  t3478 = t3450*t3467;
  t3479 = t3477 + t3478;
  t3485 = t3450*t3460;
  t3486 = -1.*t3455*t3467;
  t3487 = t3485 + t3486;
  t3285 = -1.*t3277;
  t3286 = 1. + t3285;
  t3319 = 0.135*t3286;
  t3324 = 0. + t3319;
  t3370 = -0.135*t3368;
  t3372 = 0. + t3370;
  t3498 = t3359*t3325;
  t3499 = t3351*t3360*t3361;
  t3500 = t3498 + t3499;
  t3502 = t3325*t3351*t3360;
  t3503 = -1.*t3359*t3361;
  t3504 = t3502 + t3503;
  t3385 = 0.135*t3384;
  t3389 = 0.049*t3388;
  t3390 = 0. + t3385 + t3389;
  t3393 = -0.049*t3384;
  t3394 = 0.135*t3388;
  t3395 = 0. + t3393 + t3394;
  t3506 = t3277*t3500;
  t3507 = t3504*t3368;
  t3508 = t3506 + t3507;
  t3408 = -0.049*t3407;
  t3411 = -0.09*t3410;
  t3412 = 0. + t3408 + t3411;
  t3417 = -0.09*t3407;
  t3418 = 0.049*t3410;
  t3420 = 0. + t3417 + t3418;
  t3429 = -0.049*t3427;
  t3431 = -0.21*t3430;
  t3433 = 0. + t3429 + t3431;
  t3515 = t3392*t3381*t3351;
  t3516 = t3508*t3388;
  t3517 = t3515 + t3516;
  t3519 = t3277*t3504;
  t3520 = -1.*t3500*t3368;
  t3521 = t3519 + t3520;
  t3438 = -0.21*t3427;
  t3440 = 0.049*t3430;
  t3441 = 0. + t3438 + t3440;
  t3454 = -0.2707*t3453;
  t3456 = 0.0016*t3455;
  t3457 = 0. + t3454 + t3456;
  t3523 = t3404*t3517;
  t3524 = t3521*t3410;
  t3525 = t3523 + t3524;
  t3527 = t3404*t3521;
  t3528 = -1.*t3517*t3410;
  t3529 = t3527 + t3528;
  t3462 = -0.0016*t3453;
  t3463 = -0.2707*t3455;
  t3464 = 0. + t3462 + t3463;
  t3473 = 0.0184*t3471;
  t3475 = -0.7055*t3474;
  t3476 = 0. + t3473 + t3475;
  t3531 = -1.*t3430*t3525;
  t3532 = t3424*t3529;
  t3533 = t3531 + t3532;
  t3535 = t3424*t3525;
  t3536 = t3430*t3529;
  t3537 = t3535 + t3536;
  t3481 = -0.7055*t3471;
  t3482 = -0.0184*t3474;
  t3483 = 0. + t3481 + t3482;
  t3539 = t3455*t3533;
  t3540 = t3450*t3537;
  t3541 = t3539 + t3540;
  t3543 = t3450*t3533;
  t3544 = -1.*t3455*t3537;
  t3545 = t3543 + t3544;
  t3558 = t3392*t3277*t3361;
  t3559 = t3392*t3325*t3368;
  t3560 = t3558 + t3559;
  t3567 = -1.*t3381*t3360;
  t3568 = t3560*t3388;
  t3569 = t3567 + t3568;
  t3571 = t3392*t3325*t3277;
  t3572 = -1.*t3392*t3361*t3368;
  t3573 = t3571 + t3572;
  t3575 = t3404*t3569;
  t3576 = t3573*t3410;
  t3577 = t3575 + t3576;
  t3579 = t3404*t3573;
  t3580 = -1.*t3569*t3410;
  t3581 = t3579 + t3580;
  t3583 = -1.*t3430*t3577;
  t3584 = t3424*t3581;
  t3585 = t3583 + t3584;
  t3587 = t3424*t3577;
  t3588 = t3430*t3581;
  t3589 = t3587 + t3588;
  t3591 = t3455*t3585;
  t3592 = t3450*t3589;
  t3593 = t3591 + t3592;
  t3595 = t3450*t3585;
  t3596 = -1.*t3455*t3589;
  t3597 = t3595 + t3596;
  p_output1[0]=0. + t3324*t3363 + t3367*t3372 + t3380*t3390 + 0.1305*(t3380*t3381 - 1.*t3359*t3388*t3392) + t3359*t3392*t3395 + t3403*t3412 + t3416*t3420 + t3433*t3436 + t3441*t3447 + t3457*t3460 + t3464*t3467 + t3476*t3479 + t3483*t3487 - 0.7055*(-1.*t3474*t3479 + t3469*t3487) + 0.0184*(t3469*t3479 + t3474*t3487) + var1[0];
  p_output1[1]=0. + t3351*t3392*t3395 + t3324*t3500 + t3372*t3504 + t3390*t3508 + 0.1305*(-1.*t3351*t3388*t3392 + t3381*t3508) + t3412*t3517 + t3420*t3521 + t3433*t3525 + t3441*t3529 + t3457*t3533 + t3464*t3537 + t3476*t3541 + t3483*t3545 - 0.7055*(-1.*t3474*t3541 + t3469*t3545) + 0.0184*(t3469*t3541 + t3474*t3545) + var1[1];
  p_output1[2]=0. + t3324*t3361*t3392 + t3325*t3372*t3392 - 1.*t3360*t3395 + t3390*t3560 + 0.1305*(t3360*t3388 + t3381*t3560) + t3412*t3569 + t3420*t3573 + t3433*t3577 + t3441*t3581 + t3457*t3585 + t3464*t3589 + t3476*t3593 + t3483*t3597 - 0.7055*(-1.*t3474*t3593 + t3469*t3597) + 0.0184*(t3469*t3593 + t3474*t3597) + var1[2];
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

#include "p_ankle_joint_left_mex.hh"

namespace SymExpression
{

void p_ankle_joint_left_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
