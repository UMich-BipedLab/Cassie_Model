/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:11:16 GMT-05:00
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
  double t3313;
  double t3431;
  double t3443;
  double t3433;
  double t3465;
  double t3428;
  double t3476;
  double t3481;
  double t3485;
  double t3436;
  double t3471;
  double t3473;
  double t3487;
  double t1441;
  double t3529;
  double t3530;
  double t3531;
  double t3414;
  double t3420;
  double t3423;
  double t3474;
  double t3488;
  double t3491;
  double t3492;
  double t3500;
  double t3522;
  double t3533;
  double t3539;
  double t3528;
  double t3536;
  double t3537;
  double t371;
  double t3543;
  double t3545;
  double t3547;
  double t128;
  double t3592;
  double t3596;
  double t3597;
  double t3582;
  double t3586;
  double t3590;
  double t3608;
  double t3610;
  double t3612;
  double t3580;
  double t3591;
  double t3599;
  double t3601;
  double t3602;
  double t3605;
  double t3557;
  double t3607;
  double t3613;
  double t3614;
  double t3618;
  double t3620;
  double t3621;
  double t3663;
  double t3664;
  double t3667;
  double t3645;
  double t3648;
  double t3651;
  double t3654;
  double t3658;
  double t3660;
  double t3661;
  double t3669;
  double t3671;
  double t3674;
  double t3677;
  double t3678;
  double t3538;
  double t3550;
  double t3552;
  double t3558;
  double t3563;
  double t3569;
  double t3616;
  double t3622;
  double t3626;
  double t3631;
  double t3633;
  double t3634;
  double t3673;
  double t3680;
  double t3683;
  double t3687;
  double t3690;
  double t3691;
  double t3760;
  double t3761;
  double t3788;
  double t3789;
  double t3810;
  double t3811;
  double t3834;
  double t3837;
  double t3699;
  double t3700;
  double t3702;
  double t3734;
  double t3736;
  double t3739;
  double t3743;
  double t3746;
  double t3747;
  double t3766;
  double t3770;
  double t3772;
  double t3777;
  double t3778;
  double t3780;
  double t3791;
  double t3792;
  double t3794;
  double t3800;
  double t3804;
  double t3805;
  double t3813;
  double t3816;
  double t3817;
  double t3825;
  double t3829;
  double t3831;
  double t3838;
  double t3840;
  double t3842;
  double t3847;
  double t3848;
  double t3849;
  double t3704;
  double t3705;
  double t3706;
  double t3708;
  double t3709;
  double t3712;
  t3313 = Cos(var1[3]);
  t3431 = Cos(var1[5]);
  t3443 = Sin(var1[4]);
  t3433 = Sin(var1[3]);
  t3465 = Sin(var1[5]);
  t3428 = Cos(var1[6]);
  t3476 = t3313*t3431*t3443;
  t3481 = t3433*t3465;
  t3485 = t3476 + t3481;
  t3436 = -1.*t3431*t3433;
  t3471 = t3313*t3443*t3465;
  t3473 = t3436 + t3471;
  t3487 = Sin(var1[6]);
  t1441 = Cos(var1[8]);
  t3529 = t3428*t3485;
  t3530 = -1.*t3473*t3487;
  t3531 = t3529 + t3530;
  t3414 = Cos(var1[4]);
  t3420 = Cos(var1[7]);
  t3423 = t3313*t3414*t3420;
  t3474 = t3428*t3473;
  t3488 = t3485*t3487;
  t3491 = t3474 + t3488;
  t3492 = Sin(var1[7]);
  t3500 = t3491*t3492;
  t3522 = t3423 + t3500;
  t3533 = Sin(var1[8]);
  t3539 = Cos(var1[9]);
  t3528 = t1441*t3522;
  t3536 = t3531*t3533;
  t3537 = t3528 + t3536;
  t371 = Sin(var1[9]);
  t3543 = t1441*t3531;
  t3545 = -1.*t3522*t3533;
  t3547 = t3543 + t3545;
  t128 = Cos(var1[10]);
  t3592 = t3431*t3433*t3443;
  t3596 = -1.*t3313*t3465;
  t3597 = t3592 + t3596;
  t3582 = t3313*t3431;
  t3586 = t3433*t3443*t3465;
  t3590 = t3582 + t3586;
  t3608 = t3428*t3597;
  t3610 = -1.*t3590*t3487;
  t3612 = t3608 + t3610;
  t3580 = t3414*t3420*t3433;
  t3591 = t3428*t3590;
  t3599 = t3597*t3487;
  t3601 = t3591 + t3599;
  t3602 = t3601*t3492;
  t3605 = t3580 + t3602;
  t3557 = Sin(var1[10]);
  t3607 = t1441*t3605;
  t3613 = t3612*t3533;
  t3614 = t3607 + t3613;
  t3618 = t1441*t3612;
  t3620 = -1.*t3605*t3533;
  t3621 = t3618 + t3620;
  t3663 = t3414*t3431*t3428;
  t3664 = -1.*t3414*t3465*t3487;
  t3667 = t3663 + t3664;
  t3645 = -1.*t3420*t3443;
  t3648 = t3414*t3428*t3465;
  t3651 = t3414*t3431*t3487;
  t3654 = t3648 + t3651;
  t3658 = t3654*t3492;
  t3660 = t3645 + t3658;
  t3661 = t1441*t3660;
  t3669 = t3667*t3533;
  t3671 = t3661 + t3669;
  t3674 = t1441*t3667;
  t3677 = -1.*t3660*t3533;
  t3678 = t3674 + t3677;
  t3538 = -1.*t371*t3537;
  t3550 = t3539*t3547;
  t3552 = t3538 + t3550;
  t3558 = t3539*t3537;
  t3563 = t371*t3547;
  t3569 = t3558 + t3563;
  t3616 = -1.*t371*t3614;
  t3622 = t3539*t3621;
  t3626 = t3616 + t3622;
  t3631 = t3539*t3614;
  t3633 = t371*t3621;
  t3634 = t3631 + t3633;
  t3673 = -1.*t371*t3671;
  t3680 = t3539*t3678;
  t3683 = t3673 + t3680;
  t3687 = t3539*t3671;
  t3690 = t371*t3678;
  t3691 = t3687 + t3690;
  t3760 = -1.*t3420;
  t3761 = 1. + t3760;
  t3788 = -1.*t1441;
  t3789 = 1. + t3788;
  t3810 = -1.*t3539;
  t3811 = 1. + t3810;
  t3834 = -1.*t128;
  t3837 = 1. + t3834;
  t3699 = t3557*t3552;
  t3700 = t128*t3569;
  t3702 = t3699 + t3700;
  t3734 = -1.*t3428;
  t3736 = 1. + t3734;
  t3739 = 0.135*t3736;
  t3743 = 0. + t3739;
  t3746 = -0.135*t3487;
  t3747 = 0. + t3746;
  t3766 = 0.135*t3761;
  t3770 = 0.049*t3492;
  t3772 = 0. + t3766 + t3770;
  t3777 = -0.049*t3761;
  t3778 = 0.135*t3492;
  t3780 = 0. + t3777 + t3778;
  t3791 = -0.049*t3789;
  t3792 = -0.09*t3533;
  t3794 = 0. + t3791 + t3792;
  t3800 = -0.09*t3789;
  t3804 = 0.049*t3533;
  t3805 = 0. + t3800 + t3804;
  t3813 = -0.049*t3811;
  t3816 = -0.21*t371;
  t3817 = 0. + t3813 + t3816;
  t3825 = -0.21*t3811;
  t3829 = 0.049*t371;
  t3831 = 0. + t3825 + t3829;
  t3838 = -0.2707*t3837;
  t3840 = 0.0016*t3557;
  t3842 = 0. + t3838 + t3840;
  t3847 = -0.0016*t3837;
  t3848 = -0.2707*t3557;
  t3849 = 0. + t3847 + t3848;
  t3704 = t3557*t3626;
  t3705 = t128*t3634;
  t3706 = t3704 + t3705;
  t3708 = t3557*t3683;
  t3709 = t128*t3691;
  t3712 = t3708 + t3709;
  p_output1[0]=-1.*t128*t3552 + t3557*t3569;
  p_output1[1]=-1.*t128*t3626 + t3557*t3634;
  p_output1[2]=-1.*t128*t3683 + t3557*t3691;
  p_output1[3]=0.;
  p_output1[4]=t3702;
  p_output1[5]=t3706;
  p_output1[6]=t3712;
  p_output1[7]=0.;
  p_output1[8]=-1.*t3420*t3491 + t3313*t3414*t3492;
  p_output1[9]=t3414*t3433*t3492 - 1.*t3420*t3601;
  p_output1[10]=-1.*t3443*t3492 - 1.*t3420*t3654;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.1305*(t3420*t3491 - 1.*t3313*t3414*t3492) - 0.7055*(t128*t3552 - 1.*t3557*t3569) + 0.0184*t3702 + t3473*t3743 + t3485*t3747 + t3491*t3772 + t3313*t3414*t3780 + t3522*t3794 + t3531*t3805 + t3537*t3817 + t3547*t3831 + t3552*t3842 + t3569*t3849 + var1[0];
  p_output1[13]=0. + 0.1305*(-1.*t3414*t3433*t3492 + t3420*t3601) - 0.7055*(t128*t3626 - 1.*t3557*t3634) + 0.0184*t3706 + t3590*t3743 + t3597*t3747 + t3601*t3772 + t3414*t3433*t3780 + t3605*t3794 + t3612*t3805 + t3614*t3817 + t3621*t3831 + t3626*t3842 + t3634*t3849 + var1[1];
  p_output1[14]=0. + 0.1305*(t3443*t3492 + t3420*t3654) - 0.7055*(t128*t3683 - 1.*t3557*t3691) + 0.0184*t3712 + t3414*t3465*t3743 + t3414*t3431*t3747 + t3654*t3772 - 1.*t3443*t3780 + t3660*t3794 + t3667*t3805 + t3671*t3817 + t3678*t3831 + t3683*t3842 + t3691*t3849 + var1[2];
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
    ( !(mrows == 20 && ncols == 1) && 
      !(mrows == 1 && ncols == 20))) 
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

#include "H_ankle_joint_left_mex.hh"

namespace SymExpression
{

void H_ankle_joint_left_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
