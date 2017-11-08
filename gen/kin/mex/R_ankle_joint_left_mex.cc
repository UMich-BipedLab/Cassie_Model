/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:11:18 GMT-05:00
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
  double t3633;
  double t3680;
  double t3702;
  double t3687;
  double t3715;
  double t3669;
  double t3745;
  double t3746;
  double t3770;
  double t3696;
  double t3722;
  double t3723;
  double t3772;
  double t3627;
  double t3805;
  double t3813;
  double t3817;
  double t3643;
  double t3648;
  double t3661;
  double t3732;
  double t3777;
  double t3778;
  double t3785;
  double t3791;
  double t3794;
  double t3822;
  double t3843;
  double t3800;
  double t3829;
  double t3831;
  double t3618;
  double t3847;
  double t3849;
  double t3850;
  double t3558;
  double t3931;
  double t3933;
  double t3939;
  double t3913;
  double t3922;
  double t3926;
  double t3953;
  double t3955;
  double t3956;
  double t3890;
  double t3929;
  double t3944;
  double t3947;
  double t3948;
  double t3949;
  double t3865;
  double t3952;
  double t3964;
  double t3967;
  double t3972;
  double t3974;
  double t3975;
  double t4024;
  double t4025;
  double t4031;
  double t4001;
  double t4003;
  double t4004;
  double t4013;
  double t4015;
  double t4019;
  double t4020;
  double t4032;
  double t4033;
  double t4036;
  double t4041;
  double t4043;
  double t3840;
  double t3852;
  double t3859;
  double t3866;
  double t3881;
  double t3883;
  double t3971;
  double t3977;
  double t3979;
  double t3981;
  double t3989;
  double t3995;
  double t4034;
  double t4045;
  double t4046;
  double t4050;
  double t4051;
  double t4056;
  t3633 = Cos(var1[3]);
  t3680 = Cos(var1[5]);
  t3702 = Sin(var1[4]);
  t3687 = Sin(var1[3]);
  t3715 = Sin(var1[5]);
  t3669 = Cos(var1[6]);
  t3745 = t3633*t3680*t3702;
  t3746 = t3687*t3715;
  t3770 = t3745 + t3746;
  t3696 = -1.*t3680*t3687;
  t3722 = t3633*t3702*t3715;
  t3723 = t3696 + t3722;
  t3772 = Sin(var1[6]);
  t3627 = Cos(var1[8]);
  t3805 = t3669*t3770;
  t3813 = -1.*t3723*t3772;
  t3817 = t3805 + t3813;
  t3643 = Cos(var1[4]);
  t3648 = Cos(var1[7]);
  t3661 = t3633*t3643*t3648;
  t3732 = t3669*t3723;
  t3777 = t3770*t3772;
  t3778 = t3732 + t3777;
  t3785 = Sin(var1[7]);
  t3791 = t3778*t3785;
  t3794 = t3661 + t3791;
  t3822 = Sin(var1[8]);
  t3843 = Cos(var1[9]);
  t3800 = t3627*t3794;
  t3829 = t3817*t3822;
  t3831 = t3800 + t3829;
  t3618 = Sin(var1[9]);
  t3847 = t3627*t3817;
  t3849 = -1.*t3794*t3822;
  t3850 = t3847 + t3849;
  t3558 = Cos(var1[10]);
  t3931 = t3680*t3687*t3702;
  t3933 = -1.*t3633*t3715;
  t3939 = t3931 + t3933;
  t3913 = t3633*t3680;
  t3922 = t3687*t3702*t3715;
  t3926 = t3913 + t3922;
  t3953 = t3669*t3939;
  t3955 = -1.*t3926*t3772;
  t3956 = t3953 + t3955;
  t3890 = t3643*t3648*t3687;
  t3929 = t3669*t3926;
  t3944 = t3939*t3772;
  t3947 = t3929 + t3944;
  t3948 = t3947*t3785;
  t3949 = t3890 + t3948;
  t3865 = Sin(var1[10]);
  t3952 = t3627*t3949;
  t3964 = t3956*t3822;
  t3967 = t3952 + t3964;
  t3972 = t3627*t3956;
  t3974 = -1.*t3949*t3822;
  t3975 = t3972 + t3974;
  t4024 = t3643*t3680*t3669;
  t4025 = -1.*t3643*t3715*t3772;
  t4031 = t4024 + t4025;
  t4001 = -1.*t3648*t3702;
  t4003 = t3643*t3669*t3715;
  t4004 = t3643*t3680*t3772;
  t4013 = t4003 + t4004;
  t4015 = t4013*t3785;
  t4019 = t4001 + t4015;
  t4020 = t3627*t4019;
  t4032 = t4031*t3822;
  t4033 = t4020 + t4032;
  t4036 = t3627*t4031;
  t4041 = -1.*t4019*t3822;
  t4043 = t4036 + t4041;
  t3840 = -1.*t3618*t3831;
  t3852 = t3843*t3850;
  t3859 = t3840 + t3852;
  t3866 = t3843*t3831;
  t3881 = t3618*t3850;
  t3883 = t3866 + t3881;
  t3971 = -1.*t3618*t3967;
  t3977 = t3843*t3975;
  t3979 = t3971 + t3977;
  t3981 = t3843*t3967;
  t3989 = t3618*t3975;
  t3995 = t3981 + t3989;
  t4034 = -1.*t3618*t4033;
  t4045 = t3843*t4043;
  t4046 = t4034 + t4045;
  t4050 = t3843*t4033;
  t4051 = t3618*t4043;
  t4056 = t4050 + t4051;
  p_output1[0]=-1.*t3558*t3859 + t3865*t3883;
  p_output1[1]=-1.*t3558*t3979 + t3865*t3995;
  p_output1[2]=-1.*t3558*t4046 + t3865*t4056;
  p_output1[3]=t3859*t3865 + t3558*t3883;
  p_output1[4]=t3865*t3979 + t3558*t3995;
  p_output1[5]=t3865*t4046 + t3558*t4056;
  p_output1[6]=-1.*t3648*t3778 + t3633*t3643*t3785;
  p_output1[7]=t3643*t3687*t3785 - 1.*t3648*t3947;
  p_output1[8]=-1.*t3702*t3785 - 1.*t3648*t4013;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "R_ankle_joint_left_mex.hh"

namespace SymExpression
{

void R_ankle_joint_left_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
