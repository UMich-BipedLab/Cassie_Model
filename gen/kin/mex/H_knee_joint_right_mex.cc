/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 11:08:23 GMT-04:00
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
  double t235;
  double t272;
  double t209;
  double t263;
  double t274;
  double t286;
  double t269;
  double t278;
  double t279;
  double t206;
  double t288;
  double t410;
  double t419;
  double t735;
  double t284;
  double t512;
  double t523;
  double t201;
  double t743;
  double t757;
  double t764;
  double t850;
  double t862;
  double t870;
  double t977;
  double t982;
  double t1060;
  double t197;
  double t1797;
  double t1799;
  double t1806;
  double t2189;
  double t2214;
  double t2336;
  double t1516;
  double t1937;
  double t2464;
  double t2465;
  double t2476;
  double t2518;
  double t2615;
  double t2671;
  double t2679;
  double t2702;
  double t3504;
  double t3537;
  double t3540;
  double t3605;
  double t3609;
  double t3761;
  double t3814;
  double t3858;
  double t3864;
  double t713;
  double t1164;
  double t1343;
  double t1540;
  double t1634;
  double t1694;
  double t2468;
  double t2847;
  double t2915;
  double t3044;
  double t3142;
  double t3171;
  double t3544;
  double t3927;
  double t3928;
  double t4031;
  double t4039;
  double t4923;
  double t7727;
  double t7730;
  double t7809;
  double t7810;
  double t7837;
  double t7839;
  double t6791;
  double t7583;
  double t7609;
  double t7733;
  double t7736;
  double t7747;
  double t7752;
  double t7756;
  double t7768;
  double t7784;
  double t7788;
  double t7792;
  double t7800;
  double t7803;
  double t7804;
  double t7814;
  double t7818;
  double t7820;
  double t7829;
  double t7830;
  double t7831;
  double t7840;
  double t7841;
  double t7843;
  double t7848;
  double t7849;
  double t7850;
  double t7619;
  double t7656;
  double t7664;
  double t7669;
  double t7678;
  double t7685;
  t235 = Cos(var1[5]);
  t272 = Sin(var1[3]);
  t209 = Cos(var1[3]);
  t263 = Sin(var1[4]);
  t274 = Sin(var1[5]);
  t286 = Sin(var1[13]);
  t269 = t209*t235*t263;
  t278 = t272*t274;
  t279 = t269 + t278;
  t206 = Cos(var1[13]);
  t288 = -1.*t235*t272;
  t410 = t209*t263*t274;
  t419 = t288 + t410;
  t735 = Cos(var1[15]);
  t284 = t206*t279;
  t512 = -1.*t286*t419;
  t523 = t284 + t512;
  t201 = Sin(var1[15]);
  t743 = Cos(var1[14]);
  t757 = Cos(var1[4]);
  t764 = t743*t209*t757;
  t850 = Sin(var1[14]);
  t862 = t286*t279;
  t870 = t206*t419;
  t977 = t862 + t870;
  t982 = t850*t977;
  t1060 = t764 + t982;
  t197 = Sin(var1[16]);
  t1797 = t235*t272*t263;
  t1799 = -1.*t209*t274;
  t1806 = t1797 + t1799;
  t2189 = t209*t235;
  t2214 = t272*t263*t274;
  t2336 = t2189 + t2214;
  t1516 = Cos(var1[16]);
  t1937 = t206*t1806;
  t2464 = -1.*t286*t2336;
  t2465 = t1937 + t2464;
  t2476 = t743*t757*t272;
  t2518 = t286*t1806;
  t2615 = t206*t2336;
  t2671 = t2518 + t2615;
  t2679 = t850*t2671;
  t2702 = t2476 + t2679;
  t3504 = t206*t757*t235;
  t3537 = -1.*t757*t286*t274;
  t3540 = t3504 + t3537;
  t3605 = -1.*t743*t263;
  t3609 = t757*t235*t286;
  t3761 = t206*t757*t274;
  t3814 = t3609 + t3761;
  t3858 = t850*t3814;
  t3864 = t3605 + t3858;
  t713 = t201*t523;
  t1164 = t735*t1060;
  t1343 = t713 + t1164;
  t1540 = t735*t523;
  t1634 = -1.*t201*t1060;
  t1694 = t1540 + t1634;
  t2468 = t201*t2465;
  t2847 = t735*t2702;
  t2915 = t2468 + t2847;
  t3044 = t735*t2465;
  t3142 = -1.*t201*t2702;
  t3171 = t3044 + t3142;
  t3544 = t201*t3540;
  t3927 = t735*t3864;
  t3928 = t3544 + t3927;
  t4031 = t735*t3540;
  t4039 = -1.*t201*t3864;
  t4923 = t4031 + t4039;
  t7727 = -1.*t743;
  t7730 = 1. + t7727;
  t7809 = -1.*t735;
  t7810 = 1. + t7809;
  t7837 = -1.*t1516;
  t7839 = 1. + t7837;
  t6791 = t1516*t1343;
  t7583 = t197*t1694;
  t7609 = t6791 + t7583;
  t7733 = -0.049*t7730;
  t7736 = -0.135*t850;
  t7747 = 0. + t7733 + t7736;
  t7752 = 0.135*t286;
  t7756 = 0. + t7752;
  t7768 = -1.*t206;
  t7784 = 1. + t7768;
  t7788 = -0.135*t7784;
  t7792 = 0. + t7788;
  t7800 = -0.135*t7730;
  t7803 = 0.049*t850;
  t7804 = 0. + t7800 + t7803;
  t7814 = -0.09*t7810;
  t7818 = 0.049*t201;
  t7820 = 0. + t7814 + t7818;
  t7829 = -0.049*t7810;
  t7830 = -0.09*t201;
  t7831 = 0. + t7829 + t7830;
  t7840 = -0.049*t7839;
  t7841 = -0.21*t197;
  t7843 = 0. + t7840 + t7841;
  t7848 = -0.21*t7839;
  t7849 = 0.049*t197;
  t7850 = 0. + t7848 + t7849;
  t7619 = t1516*t2915;
  t7656 = t197*t3171;
  t7664 = t7619 + t7656;
  t7669 = t1516*t3928;
  t7678 = t197*t4923;
  t7685 = t7669 + t7678;
  p_output1[0]=-1.*t1516*t1694 + t1343*t197;
  p_output1[1]=t197*t2915 - 1.*t1516*t3171;
  p_output1[2]=t197*t3928 - 1.*t1516*t4923;
  p_output1[3]=0.;
  p_output1[4]=t7609;
  p_output1[5]=t7664;
  p_output1[6]=t7685;
  p_output1[7]=0.;
  p_output1[8]=t209*t757*t850 - 1.*t743*t977;
  p_output1[9]=-1.*t2671*t743 + t272*t757*t850;
  p_output1[10]=-1.*t3814*t743 - 1.*t263*t850;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.21*(t1516*t1694 - 1.*t1343*t197) - 0.049*t7609 + t209*t757*t7747 + t279*t7756 + t419*t7792 + t523*t7820 + t1060*t7831 + t1343*t7843 + t1694*t7850 + t7804*t977 - 0.1305*(-1.*t209*t757*t850 + t743*t977) + var1[0];
  p_output1[13]=0. - 0.21*(-1.*t197*t2915 + t1516*t3171) - 0.049*t7664 + t272*t757*t7747 + t1806*t7756 + t2336*t7792 + t2671*t7804 + t2465*t7820 + t2702*t7831 + t2915*t7843 + t3171*t7850 - 0.1305*(t2671*t743 - 1.*t272*t757*t850) + var1[1];
  p_output1[14]=0. - 0.21*(-1.*t197*t3928 + t1516*t4923) - 0.049*t7685 - 1.*t263*t7747 + t235*t757*t7756 + t274*t757*t7792 + t3814*t7804 + t3540*t7820 + t3864*t7831 + t3928*t7843 + t4923*t7850 - 0.1305*(t3814*t743 + t263*t850) + var1[2];
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

#include "H_knee_joint_right_mex.hh"

namespace SymExpression
{

void H_knee_joint_right_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
