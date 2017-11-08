/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:11:44 GMT-05:00
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
  double t14;
  double t345;
  double t12;
  double t15;
  double t395;
  double t1321;
  double t86;
  double t483;
  double t528;
  double t11;
  double t1419;
  double t1436;
  double t1590;
  double t4;
  double t2764;
  double t2869;
  double t3379;
  double t6530;
  double t6615;
  double t6633;
  double t6637;
  double t6639;
  double t6645;
  double t6646;
  double t682;
  double t1936;
  double t2019;
  double t3545;
  double t6606;
  double t6608;
  double t6609;
  double t6610;
  double t6611;
  double t6638;
  double t6649;
  double t6655;
  double t6659;
  double t6661;
  double t6662;
  double t6665;
  double t6667;
  double t6668;
  double t6672;
  double t6674;
  double t6676;
  double t6679;
  double t6680;
  double t6682;
  double t6685;
  double t6688;
  double t6693;
  double t6732;
  double t6733;
  double t6767;
  double t6768;
  double t6699;
  double t6700;
  double t6702;
  double t6736;
  double t6737;
  double t6739;
  double t6742;
  double t6743;
  double t6749;
  double t6750;
  double t6751;
  double t6752;
  double t6757;
  double t6759;
  double t6760;
  double t6770;
  double t6771;
  double t6772;
  double t6778;
  double t6779;
  double t6780;
  double t6703;
  double t6707;
  double t6709;
  double t6710;
  double t6713;
  double t6714;
  t14 = Cos(var1[5]);
  t345 = Sin(var1[3]);
  t12 = Cos(var1[3]);
  t15 = Sin(var1[4]);
  t395 = Sin(var1[5]);
  t1321 = Sin(var1[13]);
  t86 = t12*t14*t15;
  t483 = t345*t395;
  t528 = t86 + t483;
  t11 = Cos(var1[13]);
  t1419 = -1.*t14*t345;
  t1436 = t12*t15*t395;
  t1590 = t1419 + t1436;
  t4 = Cos(var1[15]);
  t2764 = Sin(var1[15]);
  t2869 = Cos(var1[14]);
  t3379 = Cos(var1[4]);
  t6530 = Sin(var1[14]);
  t6615 = t14*t345*t15;
  t6633 = -1.*t12*t395;
  t6637 = t6615 + t6633;
  t6639 = t12*t14;
  t6645 = t345*t15*t395;
  t6646 = t6639 + t6645;
  t682 = t11*t528;
  t1936 = -1.*t1321*t1590;
  t2019 = t682 + t1936;
  t3545 = t2869*t12*t3379;
  t6606 = t1321*t528;
  t6608 = t11*t1590;
  t6609 = t6606 + t6608;
  t6610 = t6530*t6609;
  t6611 = t3545 + t6610;
  t6638 = t11*t6637;
  t6649 = -1.*t1321*t6646;
  t6655 = t6638 + t6649;
  t6659 = t2869*t3379*t345;
  t6661 = t1321*t6637;
  t6662 = t11*t6646;
  t6665 = t6661 + t6662;
  t6667 = t6530*t6665;
  t6668 = t6659 + t6667;
  t6672 = t11*t3379*t14;
  t6674 = -1.*t3379*t1321*t395;
  t6676 = t6672 + t6674;
  t6679 = -1.*t2869*t15;
  t6680 = t3379*t14*t1321;
  t6682 = t11*t3379*t395;
  t6685 = t6680 + t6682;
  t6688 = t6530*t6685;
  t6693 = t6679 + t6688;
  t6732 = -1.*t2869;
  t6733 = 1. + t6732;
  t6767 = -1.*t4;
  t6768 = 1. + t6767;
  t6699 = t2764*t2019;
  t6700 = t4*t6611;
  t6702 = t6699 + t6700;
  t6736 = -0.049*t6733;
  t6737 = -0.135*t6530;
  t6739 = 0. + t6736 + t6737;
  t6742 = 0.135*t1321;
  t6743 = 0. + t6742;
  t6749 = -1.*t11;
  t6750 = 1. + t6749;
  t6751 = -0.135*t6750;
  t6752 = 0. + t6751;
  t6757 = -0.135*t6733;
  t6759 = 0.049*t6530;
  t6760 = 0. + t6757 + t6759;
  t6770 = -0.09*t6768;
  t6771 = 0.049*t2764;
  t6772 = 0. + t6770 + t6771;
  t6778 = -0.049*t6768;
  t6779 = -0.09*t2764;
  t6780 = 0. + t6778 + t6779;
  t6703 = t2764*t6655;
  t6707 = t4*t6668;
  t6709 = t6703 + t6707;
  t6710 = t2764*t6676;
  t6713 = t4*t6693;
  t6714 = t6710 + t6713;
  p_output1[0]=-1.*t2019*t4 + t2764*t6611;
  p_output1[1]=-1.*t4*t6655 + t2764*t6668;
  p_output1[2]=-1.*t4*t6676 + t2764*t6693;
  p_output1[3]=0.;
  p_output1[4]=t6702;
  p_output1[5]=t6709;
  p_output1[6]=t6714;
  p_output1[7]=0.;
  p_output1[8]=t12*t3379*t6530 - 1.*t2869*t6609;
  p_output1[9]=t3379*t345*t6530 - 1.*t2869*t6665;
  p_output1[10]=-1.*t15*t6530 - 1.*t2869*t6685;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.1305*(-1.*t12*t3379*t6530 + t2869*t6609) - 0.21*(t2019*t4 - 1.*t2764*t6611) - 0.049*t6702 + t12*t3379*t6739 + t528*t6743 + t1590*t6752 + t6609*t6760 + t2019*t6772 + t6611*t6780 + var1[0];
  p_output1[13]=0. - 0.1305*(-1.*t3379*t345*t6530 + t2869*t6665) - 0.21*(t4*t6655 - 1.*t2764*t6668) - 0.049*t6709 + t3379*t345*t6739 + t6637*t6743 + t6646*t6752 + t6665*t6760 + t6655*t6772 + t6668*t6780 + var1[1];
  p_output1[14]=0. - 0.1305*(t15*t6530 + t2869*t6685) - 0.21*(t4*t6676 - 1.*t2764*t6693) - 0.049*t6714 - 1.*t15*t6739 + t14*t3379*t6743 + t3379*t395*t6752 + t6685*t6760 + t6676*t6772 + t6693*t6780 + var1[2];
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
