/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:19 GMT-05:00
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
  double t3641;
  double t3667;
  double t3689;
  double t3683;
  double t3692;
  double t3665;
  double t3714;
  double t3715;
  double t3716;
  double t3688;
  double t3706;
  double t3708;
  double t3718;
  double t3635;
  double t3758;
  double t3767;
  double t3770;
  double t3644;
  double t3650;
  double t3655;
  double t3712;
  double t3723;
  double t3740;
  double t3744;
  double t3748;
  double t3750;
  double t3771;
  double t3786;
  double t3751;
  double t3773;
  double t3781;
  double t3624;
  double t3787;
  double t3788;
  double t3790;
  double t3797;
  double t3783;
  double t3791;
  double t3792;
  double t3568;
  double t3801;
  double t3807;
  double t3812;
  double t202;
  double t3851;
  double t3857;
  double t3859;
  double t3843;
  double t3846;
  double t3847;
  double t3870;
  double t3871;
  double t3873;
  double t3835;
  double t3848;
  double t3861;
  double t3862;
  double t3864;
  double t3868;
  double t3869;
  double t3874;
  double t3875;
  double t3878;
  double t3881;
  double t3883;
  double t3821;
  double t3877;
  double t3886;
  double t3888;
  double t3892;
  double t3895;
  double t3896;
  double t3940;
  double t3941;
  double t3942;
  double t3925;
  double t3926;
  double t3927;
  double t3930;
  double t3933;
  double t3936;
  double t3938;
  double t3944;
  double t3946;
  double t3950;
  double t3952;
  double t3958;
  double t3947;
  double t3961;
  double t3963;
  double t3967;
  double t3969;
  double t3970;
  double t3794;
  double t3813;
  double t3818;
  double t3823;
  double t3825;
  double t3830;
  double t3889;
  double t3899;
  double t3901;
  double t3909;
  double t3910;
  double t3911;
  double t3966;
  double t3973;
  double t3974;
  double t3977;
  double t3980;
  double t3982;
  double t4053;
  double t4058;
  double t4084;
  double t4085;
  double t4105;
  double t4106;
  double t4125;
  double t4130;
  double t4152;
  double t4153;
  double t3986;
  double t3987;
  double t3990;
  double t4028;
  double t4029;
  double t4030;
  double t4033;
  double t4036;
  double t4039;
  double t4059;
  double t4061;
  double t4065;
  double t4074;
  double t4075;
  double t4077;
  double t4086;
  double t4088;
  double t4090;
  double t4093;
  double t4097;
  double t4100;
  double t4109;
  double t4110;
  double t4115;
  double t4119;
  double t4120;
  double t4123;
  double t4131;
  double t4136;
  double t4137;
  double t4142;
  double t4143;
  double t4147;
  double t4155;
  double t4156;
  double t4160;
  double t4162;
  double t4164;
  double t4165;
  double t3993;
  double t3994;
  double t3996;
  double t3999;
  double t4000;
  double t4003;
  t3641 = Cos(var1[3]);
  t3667 = Cos(var1[5]);
  t3689 = Sin(var1[4]);
  t3683 = Sin(var1[3]);
  t3692 = Sin(var1[5]);
  t3665 = Cos(var1[6]);
  t3714 = t3641*t3667*t3689;
  t3715 = t3683*t3692;
  t3716 = t3714 + t3715;
  t3688 = -1.*t3667*t3683;
  t3706 = t3641*t3689*t3692;
  t3708 = t3688 + t3706;
  t3718 = Sin(var1[6]);
  t3635 = Cos(var1[8]);
  t3758 = t3665*t3716;
  t3767 = -1.*t3708*t3718;
  t3770 = t3758 + t3767;
  t3644 = Cos(var1[4]);
  t3650 = Cos(var1[7]);
  t3655 = t3641*t3644*t3650;
  t3712 = t3665*t3708;
  t3723 = t3716*t3718;
  t3740 = t3712 + t3723;
  t3744 = Sin(var1[7]);
  t3748 = t3740*t3744;
  t3750 = t3655 + t3748;
  t3771 = Sin(var1[8]);
  t3786 = Cos(var1[9]);
  t3751 = t3635*t3750;
  t3773 = t3770*t3771;
  t3781 = t3751 + t3773;
  t3624 = Sin(var1[9]);
  t3787 = t3635*t3770;
  t3788 = -1.*t3750*t3771;
  t3790 = t3787 + t3788;
  t3797 = Cos(var1[10]);
  t3783 = -1.*t3624*t3781;
  t3791 = t3786*t3790;
  t3792 = t3783 + t3791;
  t3568 = Sin(var1[10]);
  t3801 = t3786*t3781;
  t3807 = t3624*t3790;
  t3812 = t3801 + t3807;
  t202 = Sin(var1[11]);
  t3851 = t3667*t3683*t3689;
  t3857 = -1.*t3641*t3692;
  t3859 = t3851 + t3857;
  t3843 = t3641*t3667;
  t3846 = t3683*t3689*t3692;
  t3847 = t3843 + t3846;
  t3870 = t3665*t3859;
  t3871 = -1.*t3847*t3718;
  t3873 = t3870 + t3871;
  t3835 = t3644*t3650*t3683;
  t3848 = t3665*t3847;
  t3861 = t3859*t3718;
  t3862 = t3848 + t3861;
  t3864 = t3862*t3744;
  t3868 = t3835 + t3864;
  t3869 = t3635*t3868;
  t3874 = t3873*t3771;
  t3875 = t3869 + t3874;
  t3878 = t3635*t3873;
  t3881 = -1.*t3868*t3771;
  t3883 = t3878 + t3881;
  t3821 = Cos(var1[11]);
  t3877 = -1.*t3624*t3875;
  t3886 = t3786*t3883;
  t3888 = t3877 + t3886;
  t3892 = t3786*t3875;
  t3895 = t3624*t3883;
  t3896 = t3892 + t3895;
  t3940 = t3644*t3667*t3665;
  t3941 = -1.*t3644*t3692*t3718;
  t3942 = t3940 + t3941;
  t3925 = -1.*t3650*t3689;
  t3926 = t3644*t3665*t3692;
  t3927 = t3644*t3667*t3718;
  t3930 = t3926 + t3927;
  t3933 = t3930*t3744;
  t3936 = t3925 + t3933;
  t3938 = t3635*t3936;
  t3944 = t3942*t3771;
  t3946 = t3938 + t3944;
  t3950 = t3635*t3942;
  t3952 = -1.*t3936*t3771;
  t3958 = t3950 + t3952;
  t3947 = -1.*t3624*t3946;
  t3961 = t3786*t3958;
  t3963 = t3947 + t3961;
  t3967 = t3786*t3946;
  t3969 = t3624*t3958;
  t3970 = t3967 + t3969;
  t3794 = t3568*t3792;
  t3813 = t3797*t3812;
  t3818 = t3794 + t3813;
  t3823 = t3797*t3792;
  t3825 = -1.*t3568*t3812;
  t3830 = t3823 + t3825;
  t3889 = t3568*t3888;
  t3899 = t3797*t3896;
  t3901 = t3889 + t3899;
  t3909 = t3797*t3888;
  t3910 = -1.*t3568*t3896;
  t3911 = t3909 + t3910;
  t3966 = t3568*t3963;
  t3973 = t3797*t3970;
  t3974 = t3966 + t3973;
  t3977 = t3797*t3963;
  t3980 = -1.*t3568*t3970;
  t3982 = t3977 + t3980;
  t4053 = -1.*t3650;
  t4058 = 1. + t4053;
  t4084 = -1.*t3635;
  t4085 = 1. + t4084;
  t4105 = -1.*t3786;
  t4106 = 1. + t4105;
  t4125 = -1.*t3797;
  t4130 = 1. + t4125;
  t4152 = -1.*t3821;
  t4153 = 1. + t4152;
  t3986 = t3821*t3818;
  t3987 = t202*t3830;
  t3990 = t3986 + t3987;
  t4028 = -1.*t3665;
  t4029 = 1. + t4028;
  t4030 = 0.135*t4029;
  t4033 = 0. + t4030;
  t4036 = -0.135*t3718;
  t4039 = 0. + t4036;
  t4059 = 0.135*t4058;
  t4061 = 0.049*t3744;
  t4065 = 0. + t4059 + t4061;
  t4074 = -0.049*t4058;
  t4075 = 0.135*t3744;
  t4077 = 0. + t4074 + t4075;
  t4086 = -0.049*t4085;
  t4088 = -0.09*t3771;
  t4090 = 0. + t4086 + t4088;
  t4093 = -0.09*t4085;
  t4097 = 0.049*t3771;
  t4100 = 0. + t4093 + t4097;
  t4109 = -0.049*t4106;
  t4110 = -0.21*t3624;
  t4115 = 0. + t4109 + t4110;
  t4119 = -0.21*t4106;
  t4120 = 0.049*t3624;
  t4123 = 0. + t4119 + t4120;
  t4131 = -0.2707*t4130;
  t4136 = 0.0016*t3568;
  t4137 = 0. + t4131 + t4136;
  t4142 = -0.0016*t4130;
  t4143 = -0.2707*t3568;
  t4147 = 0. + t4142 + t4143;
  t4155 = 0.0184*t4153;
  t4156 = -0.7055*t202;
  t4160 = 0. + t4155 + t4156;
  t4162 = -0.7055*t4153;
  t4164 = -0.0184*t202;
  t4165 = 0. + t4162 + t4164;
  t3993 = t3821*t3901;
  t3994 = t202*t3911;
  t3996 = t3993 + t3994;
  t3999 = t3821*t3974;
  t4000 = t202*t3982;
  t4003 = t3999 + t4000;
  p_output1[0]=t202*t3818 - 1.*t3821*t3830;
  p_output1[1]=t202*t3901 - 1.*t3821*t3911;
  p_output1[2]=t202*t3974 - 1.*t3821*t3982;
  p_output1[3]=0.;
  p_output1[4]=t3990;
  p_output1[5]=t3996;
  p_output1[6]=t4003;
  p_output1[7]=0.;
  p_output1[8]=-1.*t3650*t3740 + t3641*t3644*t3744;
  p_output1[9]=t3644*t3683*t3744 - 1.*t3650*t3862;
  p_output1[10]=-1.*t3689*t3744 - 1.*t3650*t3930;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.1305*(t3650*t3740 - 1.*t3641*t3644*t3744) - 0.7055*(-1.*t202*t3818 + t3821*t3830) + 0.0184*t3990 + t3708*t4033 + t3716*t4039 + t3740*t4065 + t3641*t3644*t4077 + t3750*t4090 + t3770*t4100 + t3781*t4115 + t3790*t4123 + t3792*t4137 + t3812*t4147 + t3818*t4160 + t3830*t4165 + var1[0];
  p_output1[13]=0. + 0.1305*(-1.*t3644*t3683*t3744 + t3650*t3862) - 0.7055*(-1.*t202*t3901 + t3821*t3911) + 0.0184*t3996 + t3847*t4033 + t3859*t4039 + t3862*t4065 + t3644*t3683*t4077 + t3868*t4090 + t3873*t4100 + t3875*t4115 + t3883*t4123 + t3888*t4137 + t3896*t4147 + t3901*t4160 + t3911*t4165 + var1[1];
  p_output1[14]=0. + 0.1305*(t3689*t3744 + t3650*t3930) - 0.7055*(-1.*t202*t3974 + t3821*t3982) + 0.0184*t4003 + t3644*t3692*t4033 + t3644*t3667*t4039 + t3930*t4065 - 1.*t3689*t4077 + t3936*t4090 + t3942*t4100 + t3946*t4115 + t3958*t4123 + t3963*t4137 + t3970*t4147 + t3974*t4160 + t3982*t4165 + var1[2];
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
