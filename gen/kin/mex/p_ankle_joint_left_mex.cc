/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:16 GMT-05:00
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
  double t3395;
  double t3361;
  double t3396;
  double t3387;
  double t3397;
  double t3313;
  double t3394;
  double t3398;
  double t3399;
  double t3401;
  double t3402;
  double t3403;
  double t3404;
  double t3417;
  double t3418;
  double t3420;
  double t3424;
  double t3412;
  double t3413;
  double t3416;
  double t3428;
  double t3440;
  double t3441;
  double t3443;
  double t3446;
  double t3437;
  double t3438;
  double t3439;
  double t3450;
  double t3451;
  double t3452;
  double t3460;
  double t3462;
  double t3463;
  double t3466;
  double t3470;
  double t3471;
  double t3472;
  double t3480;
  double t3482;
  double t3483;
  double t3486;
  double t3487;
  double t3489;
  double t3491;
  double t3494;
  double t3495;
  double t3496;
  double t3501;
  double t3502;
  double t3503;
  double t3505;
  double t3506;
  double t3507;
  double t3510;
  double t3513;
  double t3514;
  double t3515;
  double t3521;
  double t3522;
  double t3523;
  double t3321;
  double t3322;
  double t3355;
  double t3360;
  double t3406;
  double t3408;
  double t3534;
  double t3535;
  double t3536;
  double t3538;
  double t3539;
  double t3540;
  double t3421;
  double t3425;
  double t3426;
  double t3429;
  double t3430;
  double t3431;
  double t3542;
  double t3543;
  double t3544;
  double t3444;
  double t3447;
  double t3448;
  double t3453;
  double t3454;
  double t3456;
  double t3465;
  double t3467;
  double t3469;
  double t3551;
  double t3552;
  double t3553;
  double t3555;
  double t3556;
  double t3557;
  double t3474;
  double t3476;
  double t3477;
  double t3490;
  double t3492;
  double t3493;
  double t3559;
  double t3560;
  double t3561;
  double t3563;
  double t3564;
  double t3565;
  double t3498;
  double t3499;
  double t3500;
  double t3509;
  double t3511;
  double t3512;
  double t3567;
  double t3568;
  double t3569;
  double t3571;
  double t3572;
  double t3573;
  double t3517;
  double t3518;
  double t3519;
  double t3575;
  double t3576;
  double t3577;
  double t3579;
  double t3580;
  double t3581;
  double t3594;
  double t3595;
  double t3596;
  double t3603;
  double t3604;
  double t3605;
  double t3607;
  double t3608;
  double t3609;
  double t3611;
  double t3612;
  double t3613;
  double t3615;
  double t3616;
  double t3617;
  double t3619;
  double t3620;
  double t3621;
  double t3623;
  double t3624;
  double t3625;
  double t3627;
  double t3628;
  double t3629;
  double t3631;
  double t3632;
  double t3633;
  t3395 = Cos(var1[3]);
  t3361 = Cos(var1[5]);
  t3396 = Sin(var1[4]);
  t3387 = Sin(var1[3]);
  t3397 = Sin(var1[5]);
  t3313 = Cos(var1[6]);
  t3394 = -1.*t3361*t3387;
  t3398 = t3395*t3396*t3397;
  t3399 = t3394 + t3398;
  t3401 = t3395*t3361*t3396;
  t3402 = t3387*t3397;
  t3403 = t3401 + t3402;
  t3404 = Sin(var1[6]);
  t3417 = Cos(var1[7]);
  t3418 = -1.*t3417;
  t3420 = 1. + t3418;
  t3424 = Sin(var1[7]);
  t3412 = t3313*t3399;
  t3413 = t3403*t3404;
  t3416 = t3412 + t3413;
  t3428 = Cos(var1[4]);
  t3440 = Cos(var1[8]);
  t3441 = -1.*t3440;
  t3443 = 1. + t3441;
  t3446 = Sin(var1[8]);
  t3437 = t3395*t3428*t3417;
  t3438 = t3416*t3424;
  t3439 = t3437 + t3438;
  t3450 = t3313*t3403;
  t3451 = -1.*t3399*t3404;
  t3452 = t3450 + t3451;
  t3460 = Cos(var1[9]);
  t3462 = -1.*t3460;
  t3463 = 1. + t3462;
  t3466 = Sin(var1[9]);
  t3470 = t3440*t3439;
  t3471 = t3452*t3446;
  t3472 = t3470 + t3471;
  t3480 = t3440*t3452;
  t3482 = -1.*t3439*t3446;
  t3483 = t3480 + t3482;
  t3486 = Cos(var1[10]);
  t3487 = -1.*t3486;
  t3489 = 1. + t3487;
  t3491 = Sin(var1[10]);
  t3494 = -1.*t3466*t3472;
  t3495 = t3460*t3483;
  t3496 = t3494 + t3495;
  t3501 = t3460*t3472;
  t3502 = t3466*t3483;
  t3503 = t3501 + t3502;
  t3505 = Cos(var1[11]);
  t3506 = -1.*t3505;
  t3507 = 1. + t3506;
  t3510 = Sin(var1[11]);
  t3513 = t3491*t3496;
  t3514 = t3486*t3503;
  t3515 = t3513 + t3514;
  t3521 = t3486*t3496;
  t3522 = -1.*t3491*t3503;
  t3523 = t3521 + t3522;
  t3321 = -1.*t3313;
  t3322 = 1. + t3321;
  t3355 = 0.135*t3322;
  t3360 = 0. + t3355;
  t3406 = -0.135*t3404;
  t3408 = 0. + t3406;
  t3534 = t3395*t3361;
  t3535 = t3387*t3396*t3397;
  t3536 = t3534 + t3535;
  t3538 = t3361*t3387*t3396;
  t3539 = -1.*t3395*t3397;
  t3540 = t3538 + t3539;
  t3421 = 0.135*t3420;
  t3425 = 0.049*t3424;
  t3426 = 0. + t3421 + t3425;
  t3429 = -0.049*t3420;
  t3430 = 0.135*t3424;
  t3431 = 0. + t3429 + t3430;
  t3542 = t3313*t3536;
  t3543 = t3540*t3404;
  t3544 = t3542 + t3543;
  t3444 = -0.049*t3443;
  t3447 = -0.09*t3446;
  t3448 = 0. + t3444 + t3447;
  t3453 = -0.09*t3443;
  t3454 = 0.049*t3446;
  t3456 = 0. + t3453 + t3454;
  t3465 = -0.049*t3463;
  t3467 = -0.21*t3466;
  t3469 = 0. + t3465 + t3467;
  t3551 = t3428*t3417*t3387;
  t3552 = t3544*t3424;
  t3553 = t3551 + t3552;
  t3555 = t3313*t3540;
  t3556 = -1.*t3536*t3404;
  t3557 = t3555 + t3556;
  t3474 = -0.21*t3463;
  t3476 = 0.049*t3466;
  t3477 = 0. + t3474 + t3476;
  t3490 = -0.2707*t3489;
  t3492 = 0.0016*t3491;
  t3493 = 0. + t3490 + t3492;
  t3559 = t3440*t3553;
  t3560 = t3557*t3446;
  t3561 = t3559 + t3560;
  t3563 = t3440*t3557;
  t3564 = -1.*t3553*t3446;
  t3565 = t3563 + t3564;
  t3498 = -0.0016*t3489;
  t3499 = -0.2707*t3491;
  t3500 = 0. + t3498 + t3499;
  t3509 = 0.0184*t3507;
  t3511 = -0.7055*t3510;
  t3512 = 0. + t3509 + t3511;
  t3567 = -1.*t3466*t3561;
  t3568 = t3460*t3565;
  t3569 = t3567 + t3568;
  t3571 = t3460*t3561;
  t3572 = t3466*t3565;
  t3573 = t3571 + t3572;
  t3517 = -0.7055*t3507;
  t3518 = -0.0184*t3510;
  t3519 = 0. + t3517 + t3518;
  t3575 = t3491*t3569;
  t3576 = t3486*t3573;
  t3577 = t3575 + t3576;
  t3579 = t3486*t3569;
  t3580 = -1.*t3491*t3573;
  t3581 = t3579 + t3580;
  t3594 = t3428*t3313*t3397;
  t3595 = t3428*t3361*t3404;
  t3596 = t3594 + t3595;
  t3603 = -1.*t3417*t3396;
  t3604 = t3596*t3424;
  t3605 = t3603 + t3604;
  t3607 = t3428*t3361*t3313;
  t3608 = -1.*t3428*t3397*t3404;
  t3609 = t3607 + t3608;
  t3611 = t3440*t3605;
  t3612 = t3609*t3446;
  t3613 = t3611 + t3612;
  t3615 = t3440*t3609;
  t3616 = -1.*t3605*t3446;
  t3617 = t3615 + t3616;
  t3619 = -1.*t3466*t3613;
  t3620 = t3460*t3617;
  t3621 = t3619 + t3620;
  t3623 = t3460*t3613;
  t3624 = t3466*t3617;
  t3625 = t3623 + t3624;
  t3627 = t3491*t3621;
  t3628 = t3486*t3625;
  t3629 = t3627 + t3628;
  t3631 = t3486*t3621;
  t3632 = -1.*t3491*t3625;
  t3633 = t3631 + t3632;
  p_output1[0]=0. + t3360*t3399 + t3403*t3408 + t3416*t3426 + 0.1305*(t3416*t3417 - 1.*t3395*t3424*t3428) + t3395*t3428*t3431 + t3439*t3448 + t3452*t3456 + t3469*t3472 + t3477*t3483 + t3493*t3496 + t3500*t3503 + t3512*t3515 + t3519*t3523 - 0.7055*(-1.*t3510*t3515 + t3505*t3523) + 0.0184*(t3505*t3515 + t3510*t3523) + var1[0];
  p_output1[1]=0. + t3387*t3428*t3431 + t3360*t3536 + t3408*t3540 + t3426*t3544 + 0.1305*(-1.*t3387*t3424*t3428 + t3417*t3544) + t3448*t3553 + t3456*t3557 + t3469*t3561 + t3477*t3565 + t3493*t3569 + t3500*t3573 + t3512*t3577 + t3519*t3581 - 0.7055*(-1.*t3510*t3577 + t3505*t3581) + 0.0184*(t3505*t3577 + t3510*t3581) + var1[1];
  p_output1[2]=0. + t3360*t3397*t3428 + t3361*t3408*t3428 - 1.*t3396*t3431 + t3426*t3596 + 0.1305*(t3396*t3424 + t3417*t3596) + t3448*t3605 + t3456*t3609 + t3469*t3613 + t3477*t3617 + t3493*t3621 + t3500*t3625 + t3512*t3629 + t3519*t3633 - 0.7055*(-1.*t3510*t3629 + t3505*t3633) + 0.0184*(t3505*t3629 + t3510*t3633) + var1[2];
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
