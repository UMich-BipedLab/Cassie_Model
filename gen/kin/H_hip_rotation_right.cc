/*
 * Automatically Generated from Mathematica.
 * Tue 17 Oct 2017 12:27:41 GMT-04:00
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
  double t627;
  double t642;
  double t617;
  double t628;
  double t645;
  double t664;
  double t641;
  double t653;
  double t655;
  double t604;
  double t670;
  double t671;
  double t674;
  double t565;
  double t691;
  double t706;
  double t707;
  double t708;
  double t710;
  double t712;
  double t713;
  double t729;
  double t660;
  double t675;
  double t687;
  double t693;
  double t700;
  double t701;
  double t709;
  double t715;
  double t717;
  double t720;
  double t721;
  double t723;
  double t731;
  double t735;
  double t737;
  double t743;
  double t744;
  double t745;
  double t773;
  double t774;
  double t778;
  double t779;
  double t780;
  double t781;
  double t783;
  double t784;
  double t785;
  double t788;
  double t790;
  double t791;
  t627 = Cos(var1[5]);
  t642 = Sin(var1[3]);
  t617 = Cos(var1[3]);
  t628 = Sin(var1[4]);
  t645 = Sin(var1[5]);
  t664 = Cos(var1[14]);
  t641 = t617*t627*t628;
  t653 = t642*t645;
  t655 = t641 + t653;
  t604 = Sin(var1[14]);
  t670 = -1.*t627*t642;
  t671 = t617*t628*t645;
  t674 = t670 + t671;
  t565 = Sin(var1[15]);
  t691 = Cos(var1[15]);
  t706 = t627*t642*t628;
  t707 = -1.*t617*t645;
  t708 = t706 + t707;
  t710 = t617*t627;
  t712 = t642*t628*t645;
  t713 = t710 + t712;
  t729 = Cos(var1[4]);
  t660 = t604*t655;
  t675 = t664*t674;
  t687 = t660 + t675;
  t693 = t664*t655;
  t700 = -1.*t604*t674;
  t701 = t693 + t700;
  t709 = t604*t708;
  t715 = t664*t713;
  t717 = t709 + t715;
  t720 = t664*t708;
  t721 = -1.*t604*t713;
  t723 = t720 + t721;
  t731 = t729*t627*t604;
  t735 = t664*t729*t645;
  t737 = t731 + t735;
  t743 = t664*t729*t627;
  t744 = -1.*t729*t604*t645;
  t745 = t743 + t744;
  t773 = 0.135*t604;
  t774 = 0. + t773;
  t778 = -1.*t664;
  t779 = 1. + t778;
  t780 = -0.135*t779;
  t781 = 0. + t780;
  t783 = -1.*t691;
  t784 = 1. + t783;
  t785 = -0.135*t784;
  t788 = 0. + t785;
  t790 = 0.135*t565;
  t791 = 0. + t790;
  p_output1[0]=t565*t687 - 1.*t691*t701;
  p_output1[1]=t565*t717 - 1.*t691*t723;
  p_output1[2]=t565*t737 - 1.*t691*t745;
  p_output1[3]=0.;
  p_output1[4]=t617*t729;
  p_output1[5]=t642*t729;
  p_output1[6]=-1.*t628;
  p_output1[7]=0.;
  p_output1[8]=-1.*t687*t691 - 1.*t565*t701;
  p_output1[9]=-1.*t691*t717 - 1.*t565*t723;
  p_output1[10]=-1.*t691*t737 - 1.*t565*t745;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.135*(t687*t691 + t565*t701) - 0.09*(-1.*t565*t687 + t691*t701) - 0.049*t617*t729 + t655*t774 + t674*t781 + t687*t788 + t701*t791 + var1[0];
  p_output1[13]=0. - 0.135*(t691*t717 + t565*t723) - 0.09*(-1.*t565*t717 + t691*t723) - 0.049*t642*t729 + t708*t774 + t713*t781 + t717*t788 + t723*t791 + var1[1];
  p_output1[14]=0. + 0.049*t628 - 0.135*(t691*t737 + t565*t745) - 0.09*(-1.*t565*t737 + t691*t745) + t627*t729*t774 + t645*t729*t781 + t737*t788 + t745*t791 + var1[2];
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

#include "H_hip_rotation_right.hh"

namespace SymExpression
{

void H_hip_rotation_right_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
