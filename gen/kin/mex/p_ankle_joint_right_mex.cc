/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:11:53 GMT-05:00
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
  double t254;
  double t7644;
  double t7673;
  double t7664;
  double t7674;
  double t454;
  double t913;
  double t1435;
  double t1918;
  double t7593;
  double t7671;
  double t7675;
  double t7677;
  double t7680;
  double t7689;
  double t7690;
  double t7693;
  double t452;
  double t7702;
  double t7704;
  double t7705;
  double t7707;
  double t7708;
  double t7709;
  double t7711;
  double t7714;
  double t7715;
  double t7716;
  double t7728;
  double t7730;
  double t7731;
  double t7733;
  double t7734;
  double t7735;
  double t7737;
  double t7740;
  double t7741;
  double t7742;
  double t7747;
  double t7748;
  double t7749;
  double t7751;
  double t7754;
  double t7755;
  double t7757;
  double t7760;
  double t7762;
  double t7763;
  double t7769;
  double t7772;
  double t7773;
  double t1790;
  double t5491;
  double t7584;
  double t7629;
  double t7639;
  double t7681;
  double t7683;
  double t7685;
  double t7688;
  double t7696;
  double t7697;
  double t7700;
  double t7791;
  double t7794;
  double t7795;
  double t7799;
  double t7800;
  double t7802;
  double t7710;
  double t7712;
  double t7713;
  double t7804;
  double t7806;
  double t7807;
  double t7724;
  double t7725;
  double t7726;
  double t7736;
  double t7738;
  double t7739;
  double t7809;
  double t7810;
  double t7811;
  double t7817;
  double t7818;
  double t7819;
  double t7744;
  double t7745;
  double t7746;
  double t7756;
  double t7758;
  double t7759;
  double t7821;
  double t7822;
  double t7824;
  double t7826;
  double t7827;
  double t7828;
  double t7765;
  double t7766;
  double t7767;
  double t7830;
  double t7831;
  double t7832;
  double t7834;
  double t7836;
  double t7837;
  double t7851;
  double t7852;
  double t7853;
  double t7855;
  double t7856;
  double t7857;
  double t7863;
  double t7864;
  double t7865;
  double t7867;
  double t7868;
  double t7869;
  double t7871;
  double t7872;
  double t7873;
  double t7875;
  double t7876;
  double t7877;
  double t7879;
  double t7880;
  double t7881;
  t254 = Cos(var1[3]);
  t7644 = Cos(var1[5]);
  t7673 = Sin(var1[3]);
  t7664 = Sin(var1[4]);
  t7674 = Sin(var1[5]);
  t454 = Cos(var1[14]);
  t913 = -1.*t454;
  t1435 = 1. + t913;
  t1918 = Sin(var1[14]);
  t7593 = Sin(var1[13]);
  t7671 = t254*t7644*t7664;
  t7675 = t7673*t7674;
  t7677 = t7671 + t7675;
  t7680 = Cos(var1[13]);
  t7689 = -1.*t7644*t7673;
  t7690 = t254*t7664*t7674;
  t7693 = t7689 + t7690;
  t452 = Cos(var1[4]);
  t7702 = t7593*t7677;
  t7704 = t7680*t7693;
  t7705 = t7702 + t7704;
  t7707 = Cos(var1[15]);
  t7708 = -1.*t7707;
  t7709 = 1. + t7708;
  t7711 = Sin(var1[15]);
  t7714 = t7680*t7677;
  t7715 = -1.*t7593*t7693;
  t7716 = t7714 + t7715;
  t7728 = t454*t254*t452;
  t7730 = t1918*t7705;
  t7731 = t7728 + t7730;
  t7733 = Cos(var1[16]);
  t7734 = -1.*t7733;
  t7735 = 1. + t7734;
  t7737 = Sin(var1[16]);
  t7740 = t7711*t7716;
  t7741 = t7707*t7731;
  t7742 = t7740 + t7741;
  t7747 = t7707*t7716;
  t7748 = -1.*t7711*t7731;
  t7749 = t7747 + t7748;
  t7751 = Cos(var1[17]);
  t7754 = -1.*t7751;
  t7755 = 1. + t7754;
  t7757 = Sin(var1[17]);
  t7760 = -1.*t7737*t7742;
  t7762 = t7733*t7749;
  t7763 = t7760 + t7762;
  t7769 = t7733*t7742;
  t7772 = t7737*t7749;
  t7773 = t7769 + t7772;
  t1790 = -0.049*t1435;
  t5491 = -0.135*t1918;
  t7584 = 0. + t1790 + t5491;
  t7629 = 0.135*t7593;
  t7639 = 0. + t7629;
  t7681 = -1.*t7680;
  t7683 = 1. + t7681;
  t7685 = -0.135*t7683;
  t7688 = 0. + t7685;
  t7696 = -0.135*t1435;
  t7697 = 0.049*t1918;
  t7700 = 0. + t7696 + t7697;
  t7791 = t7644*t7673*t7664;
  t7794 = -1.*t254*t7674;
  t7795 = t7791 + t7794;
  t7799 = t254*t7644;
  t7800 = t7673*t7664*t7674;
  t7802 = t7799 + t7800;
  t7710 = -0.09*t7709;
  t7712 = 0.049*t7711;
  t7713 = 0. + t7710 + t7712;
  t7804 = t7593*t7795;
  t7806 = t7680*t7802;
  t7807 = t7804 + t7806;
  t7724 = -0.049*t7709;
  t7725 = -0.09*t7711;
  t7726 = 0. + t7724 + t7725;
  t7736 = -0.049*t7735;
  t7738 = -0.21*t7737;
  t7739 = 0. + t7736 + t7738;
  t7809 = t7680*t7795;
  t7810 = -1.*t7593*t7802;
  t7811 = t7809 + t7810;
  t7817 = t454*t452*t7673;
  t7818 = t1918*t7807;
  t7819 = t7817 + t7818;
  t7744 = -0.21*t7735;
  t7745 = 0.049*t7737;
  t7746 = 0. + t7744 + t7745;
  t7756 = -0.2707*t7755;
  t7758 = 0.0016*t7757;
  t7759 = 0. + t7756 + t7758;
  t7821 = t7711*t7811;
  t7822 = t7707*t7819;
  t7824 = t7821 + t7822;
  t7826 = t7707*t7811;
  t7827 = -1.*t7711*t7819;
  t7828 = t7826 + t7827;
  t7765 = -0.0016*t7755;
  t7766 = -0.2707*t7757;
  t7767 = 0. + t7765 + t7766;
  t7830 = -1.*t7737*t7824;
  t7831 = t7733*t7828;
  t7832 = t7830 + t7831;
  t7834 = t7733*t7824;
  t7836 = t7737*t7828;
  t7837 = t7834 + t7836;
  t7851 = t452*t7644*t7593;
  t7852 = t7680*t452*t7674;
  t7853 = t7851 + t7852;
  t7855 = t7680*t452*t7644;
  t7856 = -1.*t452*t7593*t7674;
  t7857 = t7855 + t7856;
  t7863 = -1.*t454*t7664;
  t7864 = t1918*t7853;
  t7865 = t7863 + t7864;
  t7867 = t7711*t7857;
  t7868 = t7707*t7865;
  t7869 = t7867 + t7868;
  t7871 = t7707*t7857;
  t7872 = -1.*t7711*t7865;
  t7873 = t7871 + t7872;
  t7875 = -1.*t7737*t7869;
  t7876 = t7733*t7873;
  t7877 = t7875 + t7876;
  t7879 = t7733*t7869;
  t7880 = t7737*t7873;
  t7881 = t7879 + t7880;
  p_output1[0]=0. + t254*t452*t7584 + t7639*t7677 + t7688*t7693 + t7700*t7705 - 0.1305*(-1.*t1918*t254*t452 + t454*t7705) + t7713*t7716 + t7726*t7731 + t7739*t7742 + t7746*t7749 + t7759*t7763 + t7767*t7773 + 0.0184*(t7757*t7763 + t7751*t7773) - 0.7055*(t7751*t7763 - 1.*t7757*t7773) + var1[0];
  p_output1[1]=0. + t452*t7584*t7673 + t7639*t7795 + t7688*t7802 + t7700*t7807 - 0.1305*(-1.*t1918*t452*t7673 + t454*t7807) + t7713*t7811 + t7726*t7819 + t7739*t7824 + t7746*t7828 + t7759*t7832 + t7767*t7837 + 0.0184*(t7757*t7832 + t7751*t7837) - 0.7055*(t7751*t7832 - 1.*t7757*t7837) + var1[1];
  p_output1[2]=0. + t452*t7639*t7644 - 1.*t7584*t7664 + t452*t7674*t7688 + t7700*t7853 - 0.1305*(t1918*t7664 + t454*t7853) + t7713*t7857 + t7726*t7865 + t7739*t7869 + t7746*t7873 + t7759*t7877 + t7767*t7881 + 0.0184*(t7757*t7877 + t7751*t7881) - 0.7055*(t7751*t7877 - 1.*t7757*t7881) + var1[2];
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

#include "p_ankle_joint_right_mex.hh"

namespace SymExpression
{

void p_ankle_joint_right_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
