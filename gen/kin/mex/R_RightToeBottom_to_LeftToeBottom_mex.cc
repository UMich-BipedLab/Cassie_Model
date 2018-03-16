/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 12:16:17 GMT-04:00
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
  double t3413;
  double t3432;
  double t3441;
  double t3425;
  double t3452;
  double t3372;
  double t3477;
  double t3483;
  double t3486;
  double t3437;
  double t3461;
  double t3468;
  double t3489;
  double t1430;
  double t3511;
  double t3516;
  double t3523;
  double t3470;
  double t3494;
  double t3501;
  double t3525;
  double t1136;
  double t3549;
  double t3558;
  double t3561;
  double t3502;
  double t3532;
  double t3536;
  double t3575;
  double t3614;
  double t3601;
  double t3603;
  double t3632;
  double t3637;
  double t3645;
  double t3611;
  double t3622;
  double t3624;
  double t3668;
  double t3671;
  double t3674;
  double t3630;
  double t3646;
  double t3657;
  double t3695;
  double t3698;
  double t3699;
  double t3663;
  double t3685;
  double t3686;
  double t3711;
  double t3714;
  double t3716;
  double t3691;
  double t3704;
  double t3705;
  double t3542;
  double t3576;
  double t3585;
  double t3592;
  double t3593;
  double t3597;
  double t3710;
  double t3717;
  double t3719;
  double t3734;
  double t3737;
  double t3738;
  double t3763;
  double t3764;
  double t3772;
  double t3750;
  double t3757;
  double t3759;
  double t3796;
  double t3801;
  double t3804;
  double t3777;
  double t3790;
  double t3792;
  double t3829;
  double t3830;
  double t3832;
  double t3794;
  double t3805;
  double t3812;
  double t3844;
  double t3845;
  double t3848;
  double t3813;
  double t3835;
  double t3841;
  double t3859;
  double t3862;
  double t3865;
  double t3843;
  double t3852;
  double t3853;
  double t3724;
  double t3740;
  double t3747;
  double t3588;
  double t3598;
  double t3600;
  double t3857;
  double t3867;
  double t3868;
  double t3870;
  double t3877;
  double t3885;
  double t3869;
  double t3888;
  double t3889;
  double t3899;
  double t3902;
  double t3903;
  double t1118;
  double t3910;
  double t3912;
  double t3775;
  double t3890;
  double t3891;
  double t3892;
  double t3894;
  double t3904;
  double t3906;
  double t3907;
  double t3913;
  double t3914;
  double t3915;
  double t3917;
  double t126;
  double t3920;
  double t3929;
  double t3922;
  double t3925;
  double t3928;
  double t3984;
  double t3977;
  double t3978;
  double t3985;
  double t3989;
  double t3979;
  double t3986;
  double t3987;
  double t3976;
  double t3990;
  double t3991;
  double t3994;
  double t3998;
  double t3988;
  double t3995;
  double t3996;
  double t3975;
  double t3999;
  double t4000;
  double t4001;
  double t4009;
  double t3997;
  double t4004;
  double t4005;
  double t3974;
  double t4012;
  double t4013;
  double t4015;
  double t3749;
  double t3773;
  double t3774;
  double t4035;
  double t4036;
  double t4037;
  double t4041;
  double t4044;
  double t4045;
  double t4038;
  double t4046;
  double t4047;
  double t4049;
  double t4050;
  double t4051;
  double t4048;
  double t4054;
  double t4055;
  double t4058;
  double t4059;
  double t4060;
  double t4057;
  double t4062;
  double t4063;
  double t4067;
  double t4068;
  double t4069;
  double t3919;
  double t4079;
  double t4080;
  double t4081;
  double t4084;
  double t4085;
  double t4086;
  double t4083;
  double t4087;
  double t4088;
  double t4090;
  double t4094;
  double t4095;
  double t4089;
  double t4098;
  double t4099;
  double t4101;
  double t4102;
  double t4103;
  double t4100;
  double t4104;
  double t4105;
  double t4107;
  double t4108;
  double t4109;
  double t3949;
  double t3950;
  double t3952;
  double t4008;
  double t4018;
  double t4021;
  double t4022;
  double t4023;
  double t4024;
  double t4025;
  double t4026;
  double t4033;
  double t3932;
  double t3933;
  double t3938;
  double t4066;
  double t4070;
  double t4071;
  double t4072;
  double t4073;
  double t4074;
  double t4075;
  double t4076;
  double t4077;
  double t3945;
  double t3946;
  double t3947;
  double t4106;
  double t4110;
  double t4111;
  double t4112;
  double t4113;
  double t4115;
  double t4116;
  double t4117;
  double t4120;
  double t3967;
  double t3968;
  double t3969;
  double t3955;
  double t3957;
  double t3959;
  double t3961;
  double t4135;
  double t4140;
  double t4141;
  double t4143;
  double t4144;
  double t4145;
  double t4147;
  double t4150;
  double t4151;
  t3413 = Cos(var1[8]);
  t3432 = Cos(var1[10]);
  t3441 = Sin(var1[9]);
  t3425 = Cos(var1[9]);
  t3452 = Sin(var1[10]);
  t3372 = Cos(var1[11]);
  t3477 = -1.*t3413*t3432*t3441;
  t3483 = -1.*t3413*t3425*t3452;
  t3486 = t3477 + t3483;
  t3437 = t3413*t3425*t3432;
  t3461 = -1.*t3413*t3441*t3452;
  t3468 = t3437 + t3461;
  t3489 = Sin(var1[11]);
  t1430 = Cos(var1[12]);
  t3511 = t3372*t3486;
  t3516 = -1.*t3468*t3489;
  t3523 = t3511 + t3516;
  t3470 = t3372*t3468;
  t3494 = t3486*t3489;
  t3501 = t3470 + t3494;
  t3525 = Sin(var1[12]);
  t1136 = Cos(var1[13]);
  t3549 = t1430*t3523;
  t3558 = -1.*t3501*t3525;
  t3561 = t3549 + t3558;
  t3502 = t1430*t3501;
  t3532 = t3523*t3525;
  t3536 = t3502 + t3532;
  t3575 = Sin(var1[13]);
  t3614 = Cos(var1[7]);
  t3601 = Sin(var1[7]);
  t3603 = Sin(var1[8]);
  t3632 = t3614*t3425;
  t3637 = -1.*t3601*t3603*t3441;
  t3645 = t3632 + t3637;
  t3611 = t3425*t3601*t3603;
  t3622 = t3614*t3441;
  t3624 = t3611 + t3622;
  t3668 = t3432*t3645;
  t3671 = -1.*t3624*t3452;
  t3674 = t3668 + t3671;
  t3630 = t3432*t3624;
  t3646 = t3645*t3452;
  t3657 = t3630 + t3646;
  t3695 = t3372*t3674;
  t3698 = -1.*t3657*t3489;
  t3699 = t3695 + t3698;
  t3663 = t3372*t3657;
  t3685 = t3674*t3489;
  t3686 = t3663 + t3685;
  t3711 = t1430*t3699;
  t3714 = -1.*t3686*t3525;
  t3716 = t3711 + t3714;
  t3691 = t1430*t3686;
  t3704 = t3699*t3525;
  t3705 = t3691 + t3704;
  t3542 = t1136*t3536;
  t3576 = t3561*t3575;
  t3585 = t3542 + t3576;
  t3592 = t1136*t3561;
  t3593 = -1.*t3536*t3575;
  t3597 = t3592 + t3593;
  t3710 = t1136*t3705;
  t3717 = t3716*t3575;
  t3719 = t3710 + t3717;
  t3734 = t1136*t3716;
  t3737 = -1.*t3705*t3575;
  t3738 = t3734 + t3737;
  t3763 = 0.642788*t3719;
  t3764 = 0.766044*t3738;
  t3772 = t3763 + t3764;
  t3750 = -0.766044*t3585;
  t3757 = 0.642788*t3597;
  t3759 = t3750 + t3757;
  t3796 = -1.*t3425*t3601;
  t3801 = -1.*t3614*t3603*t3441;
  t3804 = t3796 + t3801;
  t3777 = t3614*t3425*t3603;
  t3790 = -1.*t3601*t3441;
  t3792 = t3777 + t3790;
  t3829 = t3432*t3804;
  t3830 = -1.*t3792*t3452;
  t3832 = t3829 + t3830;
  t3794 = t3432*t3792;
  t3805 = t3804*t3452;
  t3812 = t3794 + t3805;
  t3844 = t3372*t3832;
  t3845 = -1.*t3812*t3489;
  t3848 = t3844 + t3845;
  t3813 = t3372*t3812;
  t3835 = t3832*t3489;
  t3841 = t3813 + t3835;
  t3859 = t1430*t3848;
  t3862 = -1.*t3841*t3525;
  t3865 = t3859 + t3862;
  t3843 = t1430*t3841;
  t3852 = t3848*t3525;
  t3853 = t3843 + t3852;
  t3724 = -0.766044*t3719;
  t3740 = 0.642788*t3738;
  t3747 = t3724 + t3740;
  t3588 = 0.642788*t3585;
  t3598 = 0.766044*t3597;
  t3600 = t3588 + t3598;
  t3857 = t1136*t3853;
  t3867 = t3865*t3575;
  t3868 = t3857 + t3867;
  t3870 = t1136*t3865;
  t3877 = -1.*t3853*t3575;
  t3885 = t3870 + t3877;
  t3869 = -0.766044*t3868;
  t3888 = 0.642788*t3885;
  t3889 = t3869 + t3888;
  t3899 = 0.642788*t3868;
  t3902 = 0.766044*t3885;
  t3903 = t3899 + t3902;
  t1118 = Cos(var1[1]);
  t3910 = t3600*t3889;
  t3912 = -1.*t3759*t3903;
  t3775 = t3614*t3413*t3759;
  t3890 = t3603*t3889;
  t3891 = t3775 + t3890;
  t3892 = -1.*t3772*t3891;
  t3894 = t3614*t3413*t3600;
  t3904 = t3603*t3903;
  t3906 = t3894 + t3904;
  t3907 = t3747*t3906;
  t3913 = t3910 + t3912;
  t3914 = -1.*t3413*t3601*t3913;
  t3915 = 0. + t3892 + t3907 + t3914;
  t3917 = 1/t3915;
  t126 = Cos(var1[0]);
  t3920 = Sin(var1[0]);
  t3929 = Sin(var1[1]);
  t3922 = t3903*t3747;
  t3925 = -1.*t3889*t3772;
  t3928 = 0. + t3922 + t3925;
  t3984 = Cos(var1[3]);
  t3977 = Cos(var1[2]);
  t3978 = Sin(var1[3]);
  t3985 = Sin(var1[2]);
  t3989 = Cos(var1[4]);
  t3979 = -1.*t1118*t3977*t3978;
  t3986 = -1.*t3984*t1118*t3985;
  t3987 = t3979 + t3986;
  t3976 = Sin(var1[4]);
  t3990 = t3984*t1118*t3977;
  t3991 = -1.*t1118*t3978*t3985;
  t3994 = t3990 + t3991;
  t3998 = Cos(var1[5]);
  t3988 = t3976*t3987;
  t3995 = t3989*t3994;
  t3996 = t3988 + t3995;
  t3975 = Sin(var1[5]);
  t3999 = t3989*t3987;
  t4000 = -1.*t3976*t3994;
  t4001 = t3999 + t4000;
  t4009 = Cos(var1[6]);
  t3997 = -1.*t3975*t3996;
  t4004 = t3998*t4001;
  t4005 = t3997 + t4004;
  t3974 = Sin(var1[6]);
  t4012 = t3998*t3996;
  t4013 = t3975*t4001;
  t4015 = t4012 + t4013;
  t3749 = -1.*t3600*t3747;
  t3773 = t3759*t3772;
  t3774 = 0. + t3749 + t3773;
  t4035 = t126*t3977*t3929;
  t4036 = -1.*t3920*t3985;
  t4037 = t4035 + t4036;
  t4041 = -1.*t3977*t3920;
  t4044 = -1.*t126*t3929*t3985;
  t4045 = t4041 + t4044;
  t4038 = -1.*t3978*t4037;
  t4046 = t3984*t4045;
  t4047 = t4038 + t4046;
  t4049 = t3984*t4037;
  t4050 = t3978*t4045;
  t4051 = t4049 + t4050;
  t4048 = t3976*t4047;
  t4054 = t3989*t4051;
  t4055 = t4048 + t4054;
  t4058 = t3989*t4047;
  t4059 = -1.*t3976*t4051;
  t4060 = t4058 + t4059;
  t4057 = -1.*t3975*t4055;
  t4062 = t3998*t4060;
  t4063 = t4057 + t4062;
  t4067 = t3998*t4055;
  t4068 = t3975*t4060;
  t4069 = t4067 + t4068;
  t3919 = 0. + t3910 + t3912;
  t4079 = t3977*t3920*t3929;
  t4080 = t126*t3985;
  t4081 = t4079 + t4080;
  t4084 = t126*t3977;
  t4085 = -1.*t3920*t3929*t3985;
  t4086 = t4084 + t4085;
  t4083 = -1.*t3978*t4081;
  t4087 = t3984*t4086;
  t4088 = t4083 + t4087;
  t4090 = t3984*t4081;
  t4094 = t3978*t4086;
  t4095 = t4090 + t4094;
  t4089 = t3976*t4088;
  t4098 = t3989*t4095;
  t4099 = t4089 + t4098;
  t4101 = t3989*t4088;
  t4102 = -1.*t3976*t4095;
  t4103 = t4101 + t4102;
  t4100 = -1.*t3975*t4099;
  t4104 = t3998*t4103;
  t4105 = t4100 + t4104;
  t4107 = t3998*t4099;
  t4108 = t3975*t4103;
  t4109 = t4107 + t4108;
  t3949 = -1.*t3413*t3601*t3889;
  t3950 = t3614*t3413*t3747;
  t3952 = 0. + t3949 + t3950;
  t4008 = t3974*t4005;
  t4018 = t4009*t4015;
  t4021 = t4008 + t4018;
  t4022 = 0.642788*t4021;
  t4023 = t4009*t4005;
  t4024 = -1.*t3974*t4015;
  t4025 = t4023 + t4024;
  t4026 = 0.766044*t4025;
  t4033 = t4022 + t4026;
  t3932 = t3413*t3601*t3759;
  t3933 = t3603*t3747;
  t3938 = 0. + t3932 + t3933;
  t4066 = t3974*t4063;
  t4070 = t4009*t4069;
  t4071 = t4066 + t4070;
  t4072 = 0.642788*t4071;
  t4073 = t4009*t4063;
  t4074 = -1.*t3974*t4069;
  t4075 = t4073 + t4074;
  t4076 = 0.766044*t4075;
  t4077 = t4072 + t4076;
  t3945 = -1.*t3614*t3413*t3759;
  t3946 = -1.*t3603*t3889;
  t3947 = 0. + t3945 + t3946;
  t4106 = t3974*t4105;
  t4110 = t4009*t4109;
  t4111 = t4106 + t4110;
  t4112 = 0.642788*t4111;
  t4113 = t4009*t4105;
  t4115 = -1.*t3974*t4109;
  t4116 = t4113 + t4115;
  t4117 = 0.766044*t4116;
  t4120 = t4112 + t4117;
  t3967 = t3413*t3601*t3903;
  t3968 = -1.*t3614*t3413*t3772;
  t3969 = 0. + t3967 + t3968;
  t3955 = -1.*t3413*t3601*t3600;
  t3957 = -1.*t3603*t3772;
  t3959 = 0. + t3955 + t3957;
  t3961 = 0. + t3894 + t3904;
  t4135 = -0.766044*t4021;
  t4140 = 0.642788*t4025;
  t4141 = t4135 + t4140;
  t4143 = -0.766044*t4071;
  t4144 = 0.642788*t4075;
  t4145 = t4143 + t4144;
  t4147 = -0.766044*t4111;
  t4150 = 0.642788*t4116;
  t4151 = t4147 + t4150;
  p_output1[0]=0. - 1.*t1118*t126*t3774*t3917 - 1.*t1118*t3917*t3919*t3920 + t3917*t3928*t3929;
  p_output1[1]=0. - 1.*t1118*t126*t3917*t3938 - 1.*t1118*t3917*t3920*t3947 + t3917*t3929*t3952;
  p_output1[2]=0. - 1.*t1118*t126*t3917*t3959 - 1.*t1118*t3917*t3920*t3961 + t3917*t3929*t3969;
  p_output1[3]=0. + t3917*t3928*t4033 + t3774*t3917*t4077 + t3917*t3919*t4120;
  p_output1[4]=0. + t3917*t3952*t4033 + t3917*t3938*t4077 + t3917*t3947*t4120;
  p_output1[5]=0. + t3917*t3969*t4033 + t3917*t3959*t4077 + t3917*t3961*t4120;
  p_output1[6]=0. + t3917*t3928*t4141 + t3774*t3917*t4145 + t3917*t3919*t4151;
  p_output1[7]=0. + t3917*t3952*t4141 + t3917*t3938*t4145 + t3917*t3947*t4151;
  p_output1[8]=0. + t3917*t3969*t4141 + t3917*t3959*t4145 + t3917*t3961*t4151;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "R_RightToeBottom_to_LeftToeBottom_mex.hh"

namespace SymExpression
{

void R_RightToeBottom_to_LeftToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
