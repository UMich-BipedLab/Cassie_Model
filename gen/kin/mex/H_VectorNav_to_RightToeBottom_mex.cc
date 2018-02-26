/*
 * Automatically Generated from Mathematica.
 * Mon 26 Feb 2018 15:42:28 GMT-05:00
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
  double t365;
  double t1553;
  double t1633;
  double t1399;
  double t2236;
  double t1219;
  double t2337;
  double t2375;
  double t2423;
  double t1558;
  double t2272;
  double t2312;
  double t2429;
  double t1151;
  double t2590;
  double t2613;
  double t2654;
  double t2324;
  double t2462;
  double t2477;
  double t2770;
  double t1079;
  double t2891;
  double t2892;
  double t2904;
  double t2536;
  double t2797;
  double t2858;
  double t2919;
  double t356;
  double t191;
  double t392;
  double t3243;
  double t3256;
  double t3260;
  double t3169;
  double t3223;
  double t3225;
  double t3291;
  double t3292;
  double t3298;
  double t3238;
  double t3271;
  double t3278;
  double t3343;
  double t3344;
  double t3359;
  double t3282;
  double t3299;
  double t3310;
  double t3383;
  double t3393;
  double t3400;
  double t3337;
  double t3372;
  double t3376;
  double t3543;
  double t3544;
  double t3561;
  double t3528;
  double t3535;
  double t3537;
  double t3597;
  double t3612;
  double t3613;
  double t3542;
  double t3572;
  double t3592;
  double t3626;
  double t3630;
  double t3633;
  double t3594;
  double t3615;
  double t3617;
  double t3638;
  double t3640;
  double t3643;
  double t3625;
  double t3634;
  double t3635;
  double t2859;
  double t2934;
  double t2991;
  double t3029;
  double t3033;
  double t3059;
  double t3381;
  double t3406;
  double t3410;
  double t3439;
  double t3446;
  double t3501;
  double t3636;
  double t3644;
  double t3646;
  double t3651;
  double t3660;
  double t3662;
  double t3744;
  double t3748;
  double t3776;
  double t3777;
  double t3833;
  double t3837;
  double t3874;
  double t3875;
  double t3706;
  double t3709;
  double t3717;
  double t3728;
  double t3730;
  double t3733;
  double t3735;
  double t3749;
  double t3756;
  double t3757;
  double t3767;
  double t3768;
  double t3770;
  double t3792;
  double t3801;
  double t3805;
  double t3816;
  double t3823;
  double t3825;
  double t3842;
  double t3850;
  double t3854;
  double t3856;
  double t3859;
  double t3861;
  double t3880;
  double t3883;
  double t3884;
  double t3889;
  double t3891;
  double t3892;
  double t3931;
  double t3933;
  double t3949;
  double t3955;
  double t3956;
  double t3961;
  t365 = Cos(var1[8]);
  t1553 = Cos(var1[10]);
  t1633 = Sin(var1[9]);
  t1399 = Cos(var1[9]);
  t2236 = Sin(var1[10]);
  t1219 = Cos(var1[11]);
  t2337 = -1.*t365*t1553*t1633;
  t2375 = -1.*t365*t1399*t2236;
  t2423 = t2337 + t2375;
  t1558 = t365*t1399*t1553;
  t2272 = -1.*t365*t1633*t2236;
  t2312 = t1558 + t2272;
  t2429 = Sin(var1[11]);
  t1151 = Cos(var1[12]);
  t2590 = t1219*t2423;
  t2613 = -1.*t2312*t2429;
  t2654 = t2590 + t2613;
  t2324 = t1219*t2312;
  t2462 = t2423*t2429;
  t2477 = t2324 + t2462;
  t2770 = Sin(var1[12]);
  t1079 = Cos(var1[13]);
  t2891 = t1151*t2654;
  t2892 = -1.*t2477*t2770;
  t2904 = t2891 + t2892;
  t2536 = t1151*t2477;
  t2797 = t2654*t2770;
  t2858 = t2536 + t2797;
  t2919 = Sin(var1[13]);
  t356 = Cos(var1[7]);
  t191 = Sin(var1[8]);
  t392 = Sin(var1[7]);
  t3243 = -1.*t1399*t392;
  t3256 = -1.*t356*t191*t1633;
  t3260 = t3243 + t3256;
  t3169 = t356*t1399*t191;
  t3223 = -1.*t392*t1633;
  t3225 = t3169 + t3223;
  t3291 = t1553*t3260;
  t3292 = -1.*t3225*t2236;
  t3298 = t3291 + t3292;
  t3238 = t1553*t3225;
  t3271 = t3260*t2236;
  t3278 = t3238 + t3271;
  t3343 = t1219*t3298;
  t3344 = -1.*t3278*t2429;
  t3359 = t3343 + t3344;
  t3282 = t1219*t3278;
  t3299 = t3298*t2429;
  t3310 = t3282 + t3299;
  t3383 = t1151*t3359;
  t3393 = -1.*t3310*t2770;
  t3400 = t3383 + t3393;
  t3337 = t1151*t3310;
  t3372 = t3359*t2770;
  t3376 = t3337 + t3372;
  t3543 = t356*t1399;
  t3544 = -1.*t392*t191*t1633;
  t3561 = t3543 + t3544;
  t3528 = t1399*t392*t191;
  t3535 = t356*t1633;
  t3537 = t3528 + t3535;
  t3597 = t1553*t3561;
  t3612 = -1.*t3537*t2236;
  t3613 = t3597 + t3612;
  t3542 = t1553*t3537;
  t3572 = t3561*t2236;
  t3592 = t3542 + t3572;
  t3626 = t1219*t3613;
  t3630 = -1.*t3592*t2429;
  t3633 = t3626 + t3630;
  t3594 = t1219*t3592;
  t3615 = t3613*t2429;
  t3617 = t3594 + t3615;
  t3638 = t1151*t3633;
  t3640 = -1.*t3617*t2770;
  t3643 = t3638 + t3640;
  t3625 = t1151*t3617;
  t3634 = t3633*t2770;
  t3635 = t3625 + t3634;
  t2859 = t1079*t2858;
  t2934 = t2904*t2919;
  t2991 = t2859 + t2934;
  t3029 = t1079*t2904;
  t3033 = -1.*t2858*t2919;
  t3059 = t3029 + t3033;
  t3381 = t1079*t3376;
  t3406 = t3400*t2919;
  t3410 = t3381 + t3406;
  t3439 = t1079*t3400;
  t3446 = -1.*t3376*t2919;
  t3501 = t3439 + t3446;
  t3636 = t1079*t3635;
  t3644 = t3643*t2919;
  t3646 = t3636 + t3644;
  t3651 = t1079*t3643;
  t3660 = -1.*t3635*t2919;
  t3662 = t3651 + t3660;
  t3744 = -1.*t1553;
  t3748 = 1. + t3744;
  t3776 = -1.*t1219;
  t3777 = 1. + t3776;
  t3833 = -1.*t1151;
  t3837 = 1. + t3833;
  t3874 = -1.*t1079;
  t3875 = 1. + t3874;
  t3706 = -1.*t365;
  t3709 = 1. + t3706;
  t3717 = -1.*t1399;
  t3728 = 1. + t3717;
  t3730 = -0.049*t3728;
  t3733 = -0.09*t1633;
  t3735 = 0. + t3730 + t3733;
  t3749 = -0.049*t3748;
  t3756 = -0.21*t2236;
  t3757 = 0. + t3749 + t3756;
  t3767 = -0.21*t3748;
  t3768 = 0.049*t2236;
  t3770 = 0. + t3767 + t3768;
  t3792 = -0.0016*t3777;
  t3801 = -0.2707*t2429;
  t3805 = 0. + t3792 + t3801;
  t3816 = -0.2707*t3777;
  t3823 = 0.0016*t2429;
  t3825 = 0. + t3816 + t3823;
  t3842 = 0.0184*t3837;
  t3850 = -0.7055*t2770;
  t3854 = 0. + t3842 + t3850;
  t3856 = -0.7055*t3837;
  t3859 = -0.0184*t2770;
  t3861 = 0. + t3856 + t3859;
  t3880 = -0.0216*t3875;
  t3883 = -1.1135*t2919;
  t3884 = 0. + t3880 + t3883;
  t3889 = -1.1135*t3875;
  t3891 = 0.0216*t2919;
  t3892 = 0. + t3889 + t3891;
  t3931 = -0.135*t3709;
  t3933 = 0.049*t191;
  t3949 = 0. + t3931 + t3933;
  t3955 = -0.09*t3728;
  t3956 = 0.049*t1633;
  t3961 = 0. + t3955 + t3956;
  p_output1[0]=0. + t191;
  p_output1[1]=0. + t356*t365;
  p_output1[2]=0. + t365*t392;
  p_output1[3]=0.;
  p_output1[4]=0. + 0.642788*t2991 + 0.766044*t3059;
  p_output1[5]=0. - 0.642788*t3410 - 0.766044*t3501;
  p_output1[6]=0. - 0.642788*t3646 - 0.766044*t3662;
  p_output1[7]=0.;
  p_output1[8]=0. - 0.766044*t2991 + 0.642788*t3059;
  p_output1[9]=0. + 0.766044*t3410 - 0.642788*t3501;
  p_output1[10]=0. + 0.766044*t3646 - 0.642788*t3662;
  p_output1[11]=0.;
  p_output1[12]=-0.03155 - 0.004500000000000004*t191 + 0.0306*t2991 - 1.1312*t3059 - 0.049*t3709 + t365*t3735 + t1399*t365*t3757 - 1.*t1633*t365*t3770 + t2312*t3805 + t2423*t3825 + t2477*t3854 + t2654*t3861 + t2858*t3884 + t2904*t3892;
  p_output1[13]=0. - 0.0306*t3410 + 1.1312*t3501 + 0.135*(1. - 1.*t356) + 0.1305*t356*t365 - 1.*t191*t356*t3735 - 1.*t3225*t3757 - 1.*t3260*t3770 - 1.*t3278*t3805 - 1.*t3298*t3825 - 1.*t3310*t3854 - 1.*t3359*t3861 - 1.*t3376*t3884 - 1.*t3400*t3892 - 1.*t356*t3949 + t392*t3961;
  p_output1[14]=-0.07996 - 0.0306*t3646 + 1.1312*t3662 - 1.*t3537*t3757 - 1.*t3561*t3770 - 1.*t3592*t3805 - 1.*t3613*t3825 - 1.*t3617*t3854 - 1.*t3633*t3861 - 1.*t3635*t3884 - 1.*t3643*t3892 - 0.135*t392 + 0.1305*t365*t392 - 1.*t191*t3735*t392 - 1.*t392*t3949 - 1.*t356*t3961;
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
    ( !(mrows == 14 && ncols == 1) && 
      !(mrows == 1 && ncols == 14))) 
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

#include "H_VectorNav_to_RightToeBottom_mex.hh"

namespace SymExpression
{

void H_VectorNav_to_RightToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
