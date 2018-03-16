/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 11:08:21 GMT-04:00
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
  double t126;
  double t7592;
  double t7595;
  double t7593;
  double t7597;
  double t2738;
  double t2745;
  double t3024;
  double t7523;
  double t7572;
  double t7594;
  double t7598;
  double t7599;
  double t7601;
  double t7607;
  double t7609;
  double t7611;
  double t913;
  double t7616;
  double t7617;
  double t7618;
  double t7620;
  double t7622;
  double t7624;
  double t7626;
  double t7629;
  double t7630;
  double t7631;
  double t7641;
  double t7642;
  double t7643;
  double t7645;
  double t7646;
  double t7647;
  double t7649;
  double t7652;
  double t7653;
  double t7654;
  double t7659;
  double t7660;
  double t7661;
  double t6816;
  double t7547;
  double t7550;
  double t7573;
  double t7583;
  double t7602;
  double t7604;
  double t7605;
  double t7606;
  double t7613;
  double t7614;
  double t7615;
  double t7674;
  double t7675;
  double t7676;
  double t7680;
  double t7681;
  double t7682;
  double t7625;
  double t7627;
  double t7628;
  double t7684;
  double t7685;
  double t7686;
  double t7638;
  double t7639;
  double t7640;
  double t7648;
  double t7650;
  double t7651;
  double t7688;
  double t7689;
  double t7690;
  double t7696;
  double t7697;
  double t7698;
  double t7656;
  double t7657;
  double t7658;
  double t7700;
  double t7701;
  double t7702;
  double t7704;
  double t7705;
  double t7706;
  double t7720;
  double t7721;
  double t7722;
  double t7724;
  double t7725;
  double t7726;
  double t7732;
  double t7733;
  double t7734;
  double t7736;
  double t7737;
  double t7738;
  double t7740;
  double t7741;
  double t7742;
  t126 = Cos(var1[3]);
  t7592 = Cos(var1[5]);
  t7595 = Sin(var1[3]);
  t7593 = Sin(var1[4]);
  t7597 = Sin(var1[5]);
  t2738 = Cos(var1[14]);
  t2745 = -1.*t2738;
  t3024 = 1. + t2745;
  t7523 = Sin(var1[14]);
  t7572 = Sin(var1[13]);
  t7594 = t126*t7592*t7593;
  t7598 = t7595*t7597;
  t7599 = t7594 + t7598;
  t7601 = Cos(var1[13]);
  t7607 = -1.*t7592*t7595;
  t7609 = t126*t7593*t7597;
  t7611 = t7607 + t7609;
  t913 = Cos(var1[4]);
  t7616 = t7572*t7599;
  t7617 = t7601*t7611;
  t7618 = t7616 + t7617;
  t7620 = Cos(var1[15]);
  t7622 = -1.*t7620;
  t7624 = 1. + t7622;
  t7626 = Sin(var1[15]);
  t7629 = t7601*t7599;
  t7630 = -1.*t7572*t7611;
  t7631 = t7629 + t7630;
  t7641 = t2738*t126*t913;
  t7642 = t7523*t7618;
  t7643 = t7641 + t7642;
  t7645 = Cos(var1[16]);
  t7646 = -1.*t7645;
  t7647 = 1. + t7646;
  t7649 = Sin(var1[16]);
  t7652 = t7626*t7631;
  t7653 = t7620*t7643;
  t7654 = t7652 + t7653;
  t7659 = t7620*t7631;
  t7660 = -1.*t7626*t7643;
  t7661 = t7659 + t7660;
  t6816 = -0.049*t3024;
  t7547 = -0.135*t7523;
  t7550 = 0. + t6816 + t7547;
  t7573 = 0.135*t7572;
  t7583 = 0. + t7573;
  t7602 = -1.*t7601;
  t7604 = 1. + t7602;
  t7605 = -0.135*t7604;
  t7606 = 0. + t7605;
  t7613 = -0.135*t3024;
  t7614 = 0.049*t7523;
  t7615 = 0. + t7613 + t7614;
  t7674 = t7592*t7595*t7593;
  t7675 = -1.*t126*t7597;
  t7676 = t7674 + t7675;
  t7680 = t126*t7592;
  t7681 = t7595*t7593*t7597;
  t7682 = t7680 + t7681;
  t7625 = -0.09*t7624;
  t7627 = 0.049*t7626;
  t7628 = 0. + t7625 + t7627;
  t7684 = t7572*t7676;
  t7685 = t7601*t7682;
  t7686 = t7684 + t7685;
  t7638 = -0.049*t7624;
  t7639 = -0.09*t7626;
  t7640 = 0. + t7638 + t7639;
  t7648 = -0.049*t7647;
  t7650 = -0.21*t7649;
  t7651 = 0. + t7648 + t7650;
  t7688 = t7601*t7676;
  t7689 = -1.*t7572*t7682;
  t7690 = t7688 + t7689;
  t7696 = t2738*t913*t7595;
  t7697 = t7523*t7686;
  t7698 = t7696 + t7697;
  t7656 = -0.21*t7647;
  t7657 = 0.049*t7649;
  t7658 = 0. + t7656 + t7657;
  t7700 = t7626*t7690;
  t7701 = t7620*t7698;
  t7702 = t7700 + t7701;
  t7704 = t7620*t7690;
  t7705 = -1.*t7626*t7698;
  t7706 = t7704 + t7705;
  t7720 = t913*t7592*t7572;
  t7721 = t7601*t913*t7597;
  t7722 = t7720 + t7721;
  t7724 = t7601*t913*t7592;
  t7725 = -1.*t913*t7572*t7597;
  t7726 = t7724 + t7725;
  t7732 = -1.*t2738*t7593;
  t7733 = t7523*t7722;
  t7734 = t7732 + t7733;
  t7736 = t7626*t7726;
  t7737 = t7620*t7734;
  t7738 = t7736 + t7737;
  t7740 = t7620*t7726;
  t7741 = -1.*t7626*t7734;
  t7742 = t7740 + t7741;
  p_output1[0]=0. + t7583*t7599 + t7606*t7611 + t7615*t7618 + t7628*t7631 + t7640*t7643 + t7651*t7654 + t7658*t7661 - 0.21*(-1.*t7649*t7654 + t7645*t7661) - 0.049*(t7645*t7654 + t7649*t7661) + t126*t7550*t913 - 0.1305*(t2738*t7618 - 1.*t126*t7523*t913) + var1[0];
  p_output1[1]=0. + t7583*t7676 + t7606*t7682 + t7615*t7686 + t7628*t7690 + t7640*t7698 + t7651*t7702 + t7658*t7706 - 0.21*(-1.*t7649*t7702 + t7645*t7706) - 0.049*(t7645*t7702 + t7649*t7706) + t7550*t7595*t913 - 0.1305*(t2738*t7686 - 1.*t7523*t7595*t913) + var1[1];
  p_output1[2]=0. - 1.*t7550*t7593 + t7615*t7722 - 0.1305*(t7523*t7593 + t2738*t7722) + t7628*t7726 + t7640*t7734 + t7651*t7738 + t7658*t7742 - 0.21*(-1.*t7649*t7738 + t7645*t7742) - 0.049*(t7645*t7738 + t7649*t7742) + t7583*t7592*t913 + t7597*t7606*t913 + var1[2];
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

#include "p_knee_joint_right_mex.hh"

namespace SymExpression
{

void p_knee_joint_right_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
