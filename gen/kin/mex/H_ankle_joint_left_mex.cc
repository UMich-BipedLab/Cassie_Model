/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 11:08:06 GMT-04:00
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
  double t3587;
  double t3613;
  double t3638;
  double t3630;
  double t3646;
  double t3607;
  double t3669;
  double t3671;
  double t3675;
  double t3635;
  double t3651;
  double t3662;
  double t3676;
  double t3570;
  double t3711;
  double t3713;
  double t3716;
  double t3598;
  double t3604;
  double t3606;
  double t3665;
  double t3679;
  double t3693;
  double t3700;
  double t3702;
  double t3703;
  double t3728;
  double t3743;
  double t3705;
  double t3730;
  double t3737;
  double t3566;
  double t3744;
  double t3747;
  double t3749;
  double t3755;
  double t3742;
  double t3750;
  double t3751;
  double t3460;
  double t3756;
  double t3764;
  double t3768;
  double t1605;
  double t3808;
  double t3811;
  double t3812;
  double t3801;
  double t3804;
  double t3805;
  double t3828;
  double t3830;
  double t3831;
  double t3793;
  double t3807;
  double t3817;
  double t3820;
  double t3821;
  double t3825;
  double t3827;
  double t3832;
  double t3833;
  double t3836;
  double t3837;
  double t3840;
  double t3779;
  double t3834;
  double t3844;
  double t3845;
  double t3850;
  double t3852;
  double t3853;
  double t3899;
  double t3900;
  double t3901;
  double t3880;
  double t3882;
  double t3885;
  double t3888;
  double t3889;
  double t3893;
  double t3897;
  double t3903;
  double t3904;
  double t3907;
  double t3909;
  double t3915;
  double t3905;
  double t3919;
  double t3920;
  double t3923;
  double t3926;
  double t3927;
  double t3753;
  double t3769;
  double t3773;
  double t3780;
  double t3781;
  double t3784;
  double t3847;
  double t3855;
  double t3859;
  double t3866;
  double t3868;
  double t3870;
  double t3921;
  double t3930;
  double t3931;
  double t3935;
  double t3936;
  double t3937;
  double t4002;
  double t4010;
  double t4042;
  double t4044;
  double t4063;
  double t4064;
  double t4084;
  double t4085;
  double t4108;
  double t4109;
  double t3944;
  double t3945;
  double t3947;
  double t3983;
  double t3986;
  double t3987;
  double t3991;
  double t3994;
  double t3997;
  double t4012;
  double t4016;
  double t4018;
  double t4024;
  double t4025;
  double t4032;
  double t4045;
  double t4046;
  double t4047;
  double t4051;
  double t4053;
  double t4057;
  double t4065;
  double t4066;
  double t4070;
  double t4078;
  double t4079;
  double t4081;
  double t4086;
  double t4090;
  double t4095;
  double t4099;
  double t4100;
  double t4105;
  double t4112;
  double t4114;
  double t4115;
  double t4119;
  double t4122;
  double t4123;
  double t3948;
  double t3951;
  double t3953;
  double t3957;
  double t3958;
  double t3961;
  t3587 = Cos(var1[3]);
  t3613 = Cos(var1[5]);
  t3638 = Sin(var1[4]);
  t3630 = Sin(var1[3]);
  t3646 = Sin(var1[5]);
  t3607 = Cos(var1[6]);
  t3669 = t3587*t3613*t3638;
  t3671 = t3630*t3646;
  t3675 = t3669 + t3671;
  t3635 = -1.*t3613*t3630;
  t3651 = t3587*t3638*t3646;
  t3662 = t3635 + t3651;
  t3676 = Sin(var1[6]);
  t3570 = Cos(var1[8]);
  t3711 = t3607*t3675;
  t3713 = -1.*t3662*t3676;
  t3716 = t3711 + t3713;
  t3598 = Cos(var1[4]);
  t3604 = Cos(var1[7]);
  t3606 = t3587*t3598*t3604;
  t3665 = t3607*t3662;
  t3679 = t3675*t3676;
  t3693 = t3665 + t3679;
  t3700 = Sin(var1[7]);
  t3702 = t3693*t3700;
  t3703 = t3606 + t3702;
  t3728 = Sin(var1[8]);
  t3743 = Cos(var1[9]);
  t3705 = t3570*t3703;
  t3730 = t3716*t3728;
  t3737 = t3705 + t3730;
  t3566 = Sin(var1[9]);
  t3744 = t3570*t3716;
  t3747 = -1.*t3703*t3728;
  t3749 = t3744 + t3747;
  t3755 = Cos(var1[10]);
  t3742 = -1.*t3566*t3737;
  t3750 = t3743*t3749;
  t3751 = t3742 + t3750;
  t3460 = Sin(var1[10]);
  t3756 = t3743*t3737;
  t3764 = t3566*t3749;
  t3768 = t3756 + t3764;
  t1605 = Sin(var1[11]);
  t3808 = t3613*t3630*t3638;
  t3811 = -1.*t3587*t3646;
  t3812 = t3808 + t3811;
  t3801 = t3587*t3613;
  t3804 = t3630*t3638*t3646;
  t3805 = t3801 + t3804;
  t3828 = t3607*t3812;
  t3830 = -1.*t3805*t3676;
  t3831 = t3828 + t3830;
  t3793 = t3598*t3604*t3630;
  t3807 = t3607*t3805;
  t3817 = t3812*t3676;
  t3820 = t3807 + t3817;
  t3821 = t3820*t3700;
  t3825 = t3793 + t3821;
  t3827 = t3570*t3825;
  t3832 = t3831*t3728;
  t3833 = t3827 + t3832;
  t3836 = t3570*t3831;
  t3837 = -1.*t3825*t3728;
  t3840 = t3836 + t3837;
  t3779 = Cos(var1[11]);
  t3834 = -1.*t3566*t3833;
  t3844 = t3743*t3840;
  t3845 = t3834 + t3844;
  t3850 = t3743*t3833;
  t3852 = t3566*t3840;
  t3853 = t3850 + t3852;
  t3899 = t3598*t3613*t3607;
  t3900 = -1.*t3598*t3646*t3676;
  t3901 = t3899 + t3900;
  t3880 = -1.*t3604*t3638;
  t3882 = t3598*t3607*t3646;
  t3885 = t3598*t3613*t3676;
  t3888 = t3882 + t3885;
  t3889 = t3888*t3700;
  t3893 = t3880 + t3889;
  t3897 = t3570*t3893;
  t3903 = t3901*t3728;
  t3904 = t3897 + t3903;
  t3907 = t3570*t3901;
  t3909 = -1.*t3893*t3728;
  t3915 = t3907 + t3909;
  t3905 = -1.*t3566*t3904;
  t3919 = t3743*t3915;
  t3920 = t3905 + t3919;
  t3923 = t3743*t3904;
  t3926 = t3566*t3915;
  t3927 = t3923 + t3926;
  t3753 = t3460*t3751;
  t3769 = t3755*t3768;
  t3773 = t3753 + t3769;
  t3780 = t3755*t3751;
  t3781 = -1.*t3460*t3768;
  t3784 = t3780 + t3781;
  t3847 = t3460*t3845;
  t3855 = t3755*t3853;
  t3859 = t3847 + t3855;
  t3866 = t3755*t3845;
  t3868 = -1.*t3460*t3853;
  t3870 = t3866 + t3868;
  t3921 = t3460*t3920;
  t3930 = t3755*t3927;
  t3931 = t3921 + t3930;
  t3935 = t3755*t3920;
  t3936 = -1.*t3460*t3927;
  t3937 = t3935 + t3936;
  t4002 = -1.*t3604;
  t4010 = 1. + t4002;
  t4042 = -1.*t3570;
  t4044 = 1. + t4042;
  t4063 = -1.*t3743;
  t4064 = 1. + t4063;
  t4084 = -1.*t3755;
  t4085 = 1. + t4084;
  t4108 = -1.*t3779;
  t4109 = 1. + t4108;
  t3944 = t3779*t3773;
  t3945 = t1605*t3784;
  t3947 = t3944 + t3945;
  t3983 = -1.*t3607;
  t3986 = 1. + t3983;
  t3987 = 0.135*t3986;
  t3991 = 0. + t3987;
  t3994 = -0.135*t3676;
  t3997 = 0. + t3994;
  t4012 = 0.135*t4010;
  t4016 = 0.049*t3700;
  t4018 = 0. + t4012 + t4016;
  t4024 = -0.049*t4010;
  t4025 = 0.135*t3700;
  t4032 = 0. + t4024 + t4025;
  t4045 = -0.049*t4044;
  t4046 = -0.09*t3728;
  t4047 = 0. + t4045 + t4046;
  t4051 = -0.09*t4044;
  t4053 = 0.049*t3728;
  t4057 = 0. + t4051 + t4053;
  t4065 = -0.049*t4064;
  t4066 = -0.21*t3566;
  t4070 = 0. + t4065 + t4066;
  t4078 = -0.21*t4064;
  t4079 = 0.049*t3566;
  t4081 = 0. + t4078 + t4079;
  t4086 = -0.2707*t4085;
  t4090 = 0.0016*t3460;
  t4095 = 0. + t4086 + t4090;
  t4099 = -0.0016*t4085;
  t4100 = -0.2707*t3460;
  t4105 = 0. + t4099 + t4100;
  t4112 = 0.0184*t4109;
  t4114 = -0.7055*t1605;
  t4115 = 0. + t4112 + t4114;
  t4119 = -0.7055*t4109;
  t4122 = -0.0184*t1605;
  t4123 = 0. + t4119 + t4122;
  t3948 = t3779*t3859;
  t3951 = t1605*t3870;
  t3953 = t3948 + t3951;
  t3957 = t3779*t3931;
  t3958 = t1605*t3937;
  t3961 = t3957 + t3958;
  p_output1[0]=t1605*t3773 - 1.*t3779*t3784;
  p_output1[1]=t1605*t3859 - 1.*t3779*t3870;
  p_output1[2]=t1605*t3931 - 1.*t3779*t3937;
  p_output1[3]=0.;
  p_output1[4]=t3947;
  p_output1[5]=t3953;
  p_output1[6]=t3961;
  p_output1[7]=0.;
  p_output1[8]=-1.*t3604*t3693 + t3587*t3598*t3700;
  p_output1[9]=t3598*t3630*t3700 - 1.*t3604*t3820;
  p_output1[10]=-1.*t3638*t3700 - 1.*t3604*t3888;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.1305*(t3604*t3693 - 1.*t3587*t3598*t3700) - 0.7055*(-1.*t1605*t3773 + t3779*t3784) + 0.0184*t3947 + t3662*t3991 + t3675*t3997 + t3693*t4018 + t3587*t3598*t4032 + t3703*t4047 + t3716*t4057 + t3737*t4070 + t3749*t4081 + t3751*t4095 + t3768*t4105 + t3773*t4115 + t3784*t4123 + var1[0];
  p_output1[13]=0. + 0.1305*(-1.*t3598*t3630*t3700 + t3604*t3820) - 0.7055*(-1.*t1605*t3859 + t3779*t3870) + 0.0184*t3953 + t3805*t3991 + t3812*t3997 + t3820*t4018 + t3598*t3630*t4032 + t3825*t4047 + t3831*t4057 + t3833*t4070 + t3840*t4081 + t3845*t4095 + t3853*t4105 + t3859*t4115 + t3870*t4123 + var1[1];
  p_output1[14]=0. + 0.1305*(t3638*t3700 + t3604*t3888) - 0.7055*(-1.*t1605*t3931 + t3779*t3937) + 0.0184*t3961 + t3598*t3646*t3991 + t3598*t3613*t3997 + t3888*t4018 - 1.*t3638*t4032 + t3893*t4047 + t3901*t4057 + t3904*t4070 + t3915*t4081 + t3920*t4095 + t3927*t4105 + t3931*t4115 + t3937*t4123 + var1[2];
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
