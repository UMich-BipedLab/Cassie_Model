/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:41 GMT-05:00
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
  double t189;
  double t7644;
  double t7656;
  double t7652;
  double t7657;
  double t1036;
  double t1140;
  double t1378;
  double t3531;
  double t7627;
  double t7654;
  double t7658;
  double t7659;
  double t7661;
  double t7666;
  double t7667;
  double t7668;
  double t1027;
  double t7675;
  double t7676;
  double t7677;
  double t7679;
  double t7680;
  double t7681;
  double t7683;
  double t7687;
  double t7688;
  double t7689;
  double t7698;
  double t7699;
  double t7700;
  double t7702;
  double t7703;
  double t7704;
  double t7706;
  double t7709;
  double t7710;
  double t7711;
  double t7717;
  double t7718;
  double t7719;
  double t2849;
  double t7596;
  double t7615;
  double t7638;
  double t7639;
  double t7662;
  double t7663;
  double t7664;
  double t7665;
  double t7672;
  double t7673;
  double t7674;
  double t7733;
  double t7734;
  double t7735;
  double t7737;
  double t7738;
  double t7739;
  double t7682;
  double t7685;
  double t7686;
  double t7741;
  double t7742;
  double t7743;
  double t7695;
  double t7696;
  double t7697;
  double t7705;
  double t7707;
  double t7708;
  double t7745;
  double t7746;
  double t7747;
  double t7753;
  double t7754;
  double t7755;
  double t7714;
  double t7715;
  double t7716;
  double t7757;
  double t7758;
  double t7759;
  double t7761;
  double t7762;
  double t7763;
  double t7777;
  double t7778;
  double t7779;
  double t7781;
  double t7782;
  double t7783;
  double t7789;
  double t7790;
  double t7791;
  double t7793;
  double t7794;
  double t7795;
  double t7797;
  double t7798;
  double t7799;
  t189 = Cos(var1[3]);
  t7644 = Cos(var1[5]);
  t7656 = Sin(var1[3]);
  t7652 = Sin(var1[4]);
  t7657 = Sin(var1[5]);
  t1036 = Cos(var1[14]);
  t1140 = -1.*t1036;
  t1378 = 1. + t1140;
  t3531 = Sin(var1[14]);
  t7627 = Sin(var1[13]);
  t7654 = t189*t7644*t7652;
  t7658 = t7656*t7657;
  t7659 = t7654 + t7658;
  t7661 = Cos(var1[13]);
  t7666 = -1.*t7644*t7656;
  t7667 = t189*t7652*t7657;
  t7668 = t7666 + t7667;
  t1027 = Cos(var1[4]);
  t7675 = t7627*t7659;
  t7676 = t7661*t7668;
  t7677 = t7675 + t7676;
  t7679 = Cos(var1[15]);
  t7680 = -1.*t7679;
  t7681 = 1. + t7680;
  t7683 = Sin(var1[15]);
  t7687 = t7661*t7659;
  t7688 = -1.*t7627*t7668;
  t7689 = t7687 + t7688;
  t7698 = t1036*t189*t1027;
  t7699 = t3531*t7677;
  t7700 = t7698 + t7699;
  t7702 = Cos(var1[16]);
  t7703 = -1.*t7702;
  t7704 = 1. + t7703;
  t7706 = Sin(var1[16]);
  t7709 = t7683*t7689;
  t7710 = t7679*t7700;
  t7711 = t7709 + t7710;
  t7717 = t7679*t7689;
  t7718 = -1.*t7683*t7700;
  t7719 = t7717 + t7718;
  t2849 = -0.049*t1378;
  t7596 = -0.135*t3531;
  t7615 = 0. + t2849 + t7596;
  t7638 = 0.135*t7627;
  t7639 = 0. + t7638;
  t7662 = -1.*t7661;
  t7663 = 1. + t7662;
  t7664 = -0.135*t7663;
  t7665 = 0. + t7664;
  t7672 = -0.135*t1378;
  t7673 = 0.049*t3531;
  t7674 = 0. + t7672 + t7673;
  t7733 = t7644*t7656*t7652;
  t7734 = -1.*t189*t7657;
  t7735 = t7733 + t7734;
  t7737 = t189*t7644;
  t7738 = t7656*t7652*t7657;
  t7739 = t7737 + t7738;
  t7682 = -0.09*t7681;
  t7685 = 0.049*t7683;
  t7686 = 0. + t7682 + t7685;
  t7741 = t7627*t7735;
  t7742 = t7661*t7739;
  t7743 = t7741 + t7742;
  t7695 = -0.049*t7681;
  t7696 = -0.09*t7683;
  t7697 = 0. + t7695 + t7696;
  t7705 = -0.049*t7704;
  t7707 = -0.21*t7706;
  t7708 = 0. + t7705 + t7707;
  t7745 = t7661*t7735;
  t7746 = -1.*t7627*t7739;
  t7747 = t7745 + t7746;
  t7753 = t1036*t1027*t7656;
  t7754 = t3531*t7743;
  t7755 = t7753 + t7754;
  t7714 = -0.21*t7704;
  t7715 = 0.049*t7706;
  t7716 = 0. + t7714 + t7715;
  t7757 = t7683*t7747;
  t7758 = t7679*t7755;
  t7759 = t7757 + t7758;
  t7761 = t7679*t7747;
  t7762 = -1.*t7683*t7755;
  t7763 = t7761 + t7762;
  t7777 = t1027*t7644*t7627;
  t7778 = t7661*t1027*t7657;
  t7779 = t7777 + t7778;
  t7781 = t7661*t1027*t7644;
  t7782 = -1.*t1027*t7627*t7657;
  t7783 = t7781 + t7782;
  t7789 = -1.*t1036*t7652;
  t7790 = t3531*t7779;
  t7791 = t7789 + t7790;
  t7793 = t7683*t7783;
  t7794 = t7679*t7791;
  t7795 = t7793 + t7794;
  t7797 = t7679*t7783;
  t7798 = -1.*t7683*t7791;
  t7799 = t7797 + t7798;
  p_output1[0]=0. + t1027*t189*t7615 + t7639*t7659 + t7665*t7668 + t7674*t7677 - 0.1305*(-1.*t1027*t189*t3531 + t1036*t7677) + t7686*t7689 + t7697*t7700 + t7708*t7711 + t7716*t7719 - 0.21*(-1.*t7706*t7711 + t7702*t7719) - 0.049*(t7702*t7711 + t7706*t7719) + var1[0];
  p_output1[1]=0. + t1027*t7615*t7656 + t7639*t7735 + t7665*t7739 + t7674*t7743 - 0.1305*(-1.*t1027*t3531*t7656 + t1036*t7743) + t7686*t7747 + t7697*t7755 + t7708*t7759 + t7716*t7763 - 0.21*(-1.*t7706*t7759 + t7702*t7763) - 0.049*(t7702*t7759 + t7706*t7763) + var1[1];
  p_output1[2]=0. + t1027*t7639*t7644 - 1.*t7615*t7652 + t1027*t7657*t7665 + t7674*t7779 - 0.1305*(t3531*t7652 + t1036*t7779) + t7686*t7783 + t7697*t7791 + t7708*t7795 + t7716*t7799 - 0.21*(-1.*t7706*t7795 + t7702*t7799) - 0.049*(t7702*t7795 + t7706*t7799) + var1[2];
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
