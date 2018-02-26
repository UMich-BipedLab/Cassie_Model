/*
 * Automatically Generated from Mathematica.
 * Mon 26 Feb 2018 15:42:29 GMT-05:00
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
  double t1016;
  double t3597;
  double t3651;
  double t3542;
  double t3671;
  double t3535;
  double t3710;
  double t3712;
  double t3743;
  double t3638;
  double t3678;
  double t3693;
  double t3749;
  double t3503;
  double t3856;
  double t3880;
  double t3889;
  double t3702;
  double t3756;
  double t3766;
  double t3905;
  double t3439;
  double t3956;
  double t3964;
  double t3975;
  double t3792;
  double t3911;
  double t3915;
  double t3976;
  double t547;
  double t299;
  double t1685;
  double t4074;
  double t4080;
  double t4085;
  double t4035;
  double t4049;
  double t4060;
  double t4129;
  double t4132;
  double t4136;
  double t4061;
  double t4107;
  double t4117;
  double t4151;
  double t4153;
  double t4161;
  double t4119;
  double t4140;
  double t4144;
  double t4175;
  double t4176;
  double t4177;
  double t4149;
  double t4162;
  double t4165;
  double t4223;
  double t4227;
  double t4229;
  double t4210;
  double t4212;
  double t4214;
  double t4248;
  double t4249;
  double t4252;
  double t4217;
  double t4236;
  double t4237;
  double t4276;
  double t4280;
  double t4283;
  double t4240;
  double t4259;
  double t4260;
  double t4299;
  double t4302;
  double t4303;
  double t4273;
  double t4290;
  double t4293;
  double t3952;
  double t3980;
  double t3982;
  double t4003;
  double t4009;
  double t4017;
  double t4166;
  double t4182;
  double t4185;
  double t4192;
  double t4195;
  double t4198;
  double t4296;
  double t4304;
  double t4305;
  double t4307;
  double t4309;
  double t4311;
  t1016 = Cos(var1[8]);
  t3597 = Cos(var1[10]);
  t3651 = Sin(var1[9]);
  t3542 = Cos(var1[9]);
  t3671 = Sin(var1[10]);
  t3535 = Cos(var1[11]);
  t3710 = -1.*t1016*t3597*t3651;
  t3712 = -1.*t1016*t3542*t3671;
  t3743 = t3710 + t3712;
  t3638 = t1016*t3542*t3597;
  t3678 = -1.*t1016*t3651*t3671;
  t3693 = t3638 + t3678;
  t3749 = Sin(var1[11]);
  t3503 = Cos(var1[12]);
  t3856 = t3535*t3743;
  t3880 = -1.*t3693*t3749;
  t3889 = t3856 + t3880;
  t3702 = t3535*t3693;
  t3756 = t3743*t3749;
  t3766 = t3702 + t3756;
  t3905 = Sin(var1[12]);
  t3439 = Cos(var1[13]);
  t3956 = t3503*t3889;
  t3964 = -1.*t3766*t3905;
  t3975 = t3956 + t3964;
  t3792 = t3503*t3766;
  t3911 = t3889*t3905;
  t3915 = t3792 + t3911;
  t3976 = Sin(var1[13]);
  t547 = Cos(var1[7]);
  t299 = Sin(var1[8]);
  t1685 = Sin(var1[7]);
  t4074 = -1.*t3542*t1685;
  t4080 = -1.*t547*t299*t3651;
  t4085 = t4074 + t4080;
  t4035 = t547*t3542*t299;
  t4049 = -1.*t1685*t3651;
  t4060 = t4035 + t4049;
  t4129 = t3597*t4085;
  t4132 = -1.*t4060*t3671;
  t4136 = t4129 + t4132;
  t4061 = t3597*t4060;
  t4107 = t4085*t3671;
  t4117 = t4061 + t4107;
  t4151 = t3535*t4136;
  t4153 = -1.*t4117*t3749;
  t4161 = t4151 + t4153;
  t4119 = t3535*t4117;
  t4140 = t4136*t3749;
  t4144 = t4119 + t4140;
  t4175 = t3503*t4161;
  t4176 = -1.*t4144*t3905;
  t4177 = t4175 + t4176;
  t4149 = t3503*t4144;
  t4162 = t4161*t3905;
  t4165 = t4149 + t4162;
  t4223 = t547*t3542;
  t4227 = -1.*t1685*t299*t3651;
  t4229 = t4223 + t4227;
  t4210 = t3542*t1685*t299;
  t4212 = t547*t3651;
  t4214 = t4210 + t4212;
  t4248 = t3597*t4229;
  t4249 = -1.*t4214*t3671;
  t4252 = t4248 + t4249;
  t4217 = t3597*t4214;
  t4236 = t4229*t3671;
  t4237 = t4217 + t4236;
  t4276 = t3535*t4252;
  t4280 = -1.*t4237*t3749;
  t4283 = t4276 + t4280;
  t4240 = t3535*t4237;
  t4259 = t4252*t3749;
  t4260 = t4240 + t4259;
  t4299 = t3503*t4283;
  t4302 = -1.*t4260*t3905;
  t4303 = t4299 + t4302;
  t4273 = t3503*t4260;
  t4290 = t4283*t3905;
  t4293 = t4273 + t4290;
  t3952 = t3439*t3915;
  t3980 = t3975*t3976;
  t3982 = t3952 + t3980;
  t4003 = t3439*t3975;
  t4009 = -1.*t3915*t3976;
  t4017 = t4003 + t4009;
  t4166 = t3439*t4165;
  t4182 = t4177*t3976;
  t4185 = t4166 + t4182;
  t4192 = t3439*t4177;
  t4195 = -1.*t4165*t3976;
  t4198 = t4192 + t4195;
  t4296 = t3439*t4293;
  t4304 = t4303*t3976;
  t4305 = t4296 + t4304;
  t4307 = t3439*t4303;
  t4309 = -1.*t4293*t3976;
  t4311 = t4307 + t4309;
  p_output1[0]=0. + t299;
  p_output1[1]=0. + t1016*t547;
  p_output1[2]=0. + t1016*t1685;
  p_output1[3]=0. + 0.642788*t3982 + 0.766044*t4017;
  p_output1[4]=0. - 0.642788*t4185 - 0.766044*t4198;
  p_output1[5]=0. - 0.642788*t4305 - 0.766044*t4311;
  p_output1[6]=0. - 0.766044*t3982 + 0.642788*t4017;
  p_output1[7]=0. + 0.766044*t4185 - 0.642788*t4198;
  p_output1[8]=0. + 0.766044*t4305 - 0.642788*t4311;
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

#include "R_VectorNav_to_RightToeBottom_mex.hh"

namespace SymExpression
{

void R_VectorNav_to_RightToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
