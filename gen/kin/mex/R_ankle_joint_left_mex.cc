/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:20 GMT-05:00
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
  double t3895;
  double t3961;
  double t3990;
  double t3967;
  double t4000;
  double t3950;
  double t4013;
  double t4016;
  double t4027;
  double t3976;
  double t4003;
  double t4004;
  double t4036;
  double t3892;
  double t4093;
  double t4097;
  double t4102;
  double t3903;
  double t3926;
  double t3942;
  double t4005;
  double t4059;
  double t4075;
  double t4079;
  double t4081;
  double t4086;
  double t4110;
  double t4139;
  double t4090;
  double t4119;
  double t4131;
  double t3888;
  double t4142;
  double t4148;
  double t4156;
  double t4164;
  double t4136;
  double t4160;
  double t4161;
  double t3883;
  double t4165;
  double t4170;
  double t4173;
  double t3832;
  double t4261;
  double t4263;
  double t4268;
  double t4251;
  double t4256;
  double t4259;
  double t4292;
  double t4294;
  double t4296;
  double t4232;
  double t4260;
  double t4272;
  double t4277;
  double t4280;
  double t4290;
  double t4291;
  double t4300;
  double t4305;
  double t4313;
  double t4314;
  double t4316;
  double t4198;
  double t4307;
  double t4318;
  double t4319;
  double t4323;
  double t4326;
  double t4333;
  double t4378;
  double t4381;
  double t4383;
  double t4357;
  double t4361;
  double t4366;
  double t4368;
  double t4371;
  double t4373;
  double t4376;
  double t4386;
  double t4388;
  double t4395;
  double t4396;
  double t4398;
  double t4394;
  double t4399;
  double t4400;
  double t4405;
  double t4414;
  double t4417;
  double t4162;
  double t4178;
  double t4184;
  double t4202;
  double t4205;
  double t4208;
  double t4320;
  double t4334;
  double t4335;
  double t4345;
  double t4346;
  double t4350;
  double t4402;
  double t4419;
  double t4422;
  double t4424;
  double t4425;
  double t4426;
  t3895 = Cos(var1[3]);
  t3961 = Cos(var1[5]);
  t3990 = Sin(var1[4]);
  t3967 = Sin(var1[3]);
  t4000 = Sin(var1[5]);
  t3950 = Cos(var1[6]);
  t4013 = t3895*t3961*t3990;
  t4016 = t3967*t4000;
  t4027 = t4013 + t4016;
  t3976 = -1.*t3961*t3967;
  t4003 = t3895*t3990*t4000;
  t4004 = t3976 + t4003;
  t4036 = Sin(var1[6]);
  t3892 = Cos(var1[8]);
  t4093 = t3950*t4027;
  t4097 = -1.*t4004*t4036;
  t4102 = t4093 + t4097;
  t3903 = Cos(var1[4]);
  t3926 = Cos(var1[7]);
  t3942 = t3895*t3903*t3926;
  t4005 = t3950*t4004;
  t4059 = t4027*t4036;
  t4075 = t4005 + t4059;
  t4079 = Sin(var1[7]);
  t4081 = t4075*t4079;
  t4086 = t3942 + t4081;
  t4110 = Sin(var1[8]);
  t4139 = Cos(var1[9]);
  t4090 = t3892*t4086;
  t4119 = t4102*t4110;
  t4131 = t4090 + t4119;
  t3888 = Sin(var1[9]);
  t4142 = t3892*t4102;
  t4148 = -1.*t4086*t4110;
  t4156 = t4142 + t4148;
  t4164 = Cos(var1[10]);
  t4136 = -1.*t3888*t4131;
  t4160 = t4139*t4156;
  t4161 = t4136 + t4160;
  t3883 = Sin(var1[10]);
  t4165 = t4139*t4131;
  t4170 = t3888*t4156;
  t4173 = t4165 + t4170;
  t3832 = Sin(var1[11]);
  t4261 = t3961*t3967*t3990;
  t4263 = -1.*t3895*t4000;
  t4268 = t4261 + t4263;
  t4251 = t3895*t3961;
  t4256 = t3967*t3990*t4000;
  t4259 = t4251 + t4256;
  t4292 = t3950*t4268;
  t4294 = -1.*t4259*t4036;
  t4296 = t4292 + t4294;
  t4232 = t3903*t3926*t3967;
  t4260 = t3950*t4259;
  t4272 = t4268*t4036;
  t4277 = t4260 + t4272;
  t4280 = t4277*t4079;
  t4290 = t4232 + t4280;
  t4291 = t3892*t4290;
  t4300 = t4296*t4110;
  t4305 = t4291 + t4300;
  t4313 = t3892*t4296;
  t4314 = -1.*t4290*t4110;
  t4316 = t4313 + t4314;
  t4198 = Cos(var1[11]);
  t4307 = -1.*t3888*t4305;
  t4318 = t4139*t4316;
  t4319 = t4307 + t4318;
  t4323 = t4139*t4305;
  t4326 = t3888*t4316;
  t4333 = t4323 + t4326;
  t4378 = t3903*t3961*t3950;
  t4381 = -1.*t3903*t4000*t4036;
  t4383 = t4378 + t4381;
  t4357 = -1.*t3926*t3990;
  t4361 = t3903*t3950*t4000;
  t4366 = t3903*t3961*t4036;
  t4368 = t4361 + t4366;
  t4371 = t4368*t4079;
  t4373 = t4357 + t4371;
  t4376 = t3892*t4373;
  t4386 = t4383*t4110;
  t4388 = t4376 + t4386;
  t4395 = t3892*t4383;
  t4396 = -1.*t4373*t4110;
  t4398 = t4395 + t4396;
  t4394 = -1.*t3888*t4388;
  t4399 = t4139*t4398;
  t4400 = t4394 + t4399;
  t4405 = t4139*t4388;
  t4414 = t3888*t4398;
  t4417 = t4405 + t4414;
  t4162 = t3883*t4161;
  t4178 = t4164*t4173;
  t4184 = t4162 + t4178;
  t4202 = t4164*t4161;
  t4205 = -1.*t3883*t4173;
  t4208 = t4202 + t4205;
  t4320 = t3883*t4319;
  t4334 = t4164*t4333;
  t4335 = t4320 + t4334;
  t4345 = t4164*t4319;
  t4346 = -1.*t3883*t4333;
  t4350 = t4345 + t4346;
  t4402 = t3883*t4400;
  t4419 = t4164*t4417;
  t4422 = t4402 + t4419;
  t4424 = t4164*t4400;
  t4425 = -1.*t3883*t4417;
  t4426 = t4424 + t4425;
  p_output1[0]=t3832*t4184 - 1.*t4198*t4208;
  p_output1[1]=t3832*t4335 - 1.*t4198*t4350;
  p_output1[2]=t3832*t4422 - 1.*t4198*t4426;
  p_output1[3]=t4184*t4198 + t3832*t4208;
  p_output1[4]=t4198*t4335 + t3832*t4350;
  p_output1[5]=t4198*t4422 + t3832*t4426;
  p_output1[6]=-1.*t3926*t4075 + t3895*t3903*t4079;
  p_output1[7]=t3903*t3967*t4079 - 1.*t3926*t4277;
  p_output1[8]=-1.*t3990*t4079 - 1.*t3926*t4368;
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
