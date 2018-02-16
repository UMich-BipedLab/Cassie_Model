/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:15:22 GMT-05:00
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
  double t3840;
  double t3897;
  double t3920;
  double t3901;
  double t3926;
  double t3872;
  double t3958;
  double t3961;
  double t3963;
  double t3907;
  double t3944;
  double t3953;
  double t3970;
  double t3832;
  double t4040;
  double t4045;
  double t4047;
  double t3845;
  double t3847;
  double t3852;
  double t3957;
  double t3976;
  double t3991;
  double t3997;
  double t4021;
  double t4025;
  double t4048;
  double t4081;
  double t4034;
  double t4053;
  double t4059;
  double t3780;
  double t4082;
  double t4090;
  double t4095;
  double t4114;
  double t4070;
  double t4100;
  double t4106;
  double t1230;
  double t4115;
  double t4116;
  double t4119;
  double t1112;
  double t4210;
  double t4212;
  double t4215;
  double t4169;
  double t4170;
  double t4197;
  double t4244;
  double t4246;
  double t4249;
  double t4167;
  double t4207;
  double t4217;
  double t4222;
  double t4225;
  double t4227;
  double t4231;
  double t4250;
  double t4251;
  double t4255;
  double t4256;
  double t4267;
  double t4138;
  double t4252;
  double t4268;
  double t4270;
  double t4273;
  double t4276;
  double t4277;
  double t4323;
  double t4326;
  double t4331;
  double t4302;
  double t4305;
  double t4306;
  double t4315;
  double t4318;
  double t4319;
  double t4322;
  double t4334;
  double t4335;
  double t4340;
  double t4347;
  double t4349;
  double t4339;
  double t4352;
  double t4353;
  double t4357;
  double t4358;
  double t4359;
  double t4112;
  double t4123;
  double t4128;
  double t4140;
  double t4148;
  double t4153;
  double t4271;
  double t4279;
  double t4281;
  double t4288;
  double t4289;
  double t4296;
  double t4355;
  double t4367;
  double t4368;
  double t4372;
  double t4374;
  double t4377;
  t3840 = Cos(var1[3]);
  t3897 = Cos(var1[5]);
  t3920 = Sin(var1[4]);
  t3901 = Sin(var1[3]);
  t3926 = Sin(var1[5]);
  t3872 = Cos(var1[6]);
  t3958 = t3840*t3897*t3920;
  t3961 = t3901*t3926;
  t3963 = t3958 + t3961;
  t3907 = -1.*t3897*t3901;
  t3944 = t3840*t3920*t3926;
  t3953 = t3907 + t3944;
  t3970 = Sin(var1[6]);
  t3832 = Cos(var1[8]);
  t4040 = t3872*t3963;
  t4045 = -1.*t3953*t3970;
  t4047 = t4040 + t4045;
  t3845 = Cos(var1[4]);
  t3847 = Cos(var1[7]);
  t3852 = t3840*t3845*t3847;
  t3957 = t3872*t3953;
  t3976 = t3963*t3970;
  t3991 = t3957 + t3976;
  t3997 = Sin(var1[7]);
  t4021 = t3991*t3997;
  t4025 = t3852 + t4021;
  t4048 = Sin(var1[8]);
  t4081 = Cos(var1[9]);
  t4034 = t3832*t4025;
  t4053 = t4047*t4048;
  t4059 = t4034 + t4053;
  t3780 = Sin(var1[9]);
  t4082 = t3832*t4047;
  t4090 = -1.*t4025*t4048;
  t4095 = t4082 + t4090;
  t4114 = Cos(var1[10]);
  t4070 = -1.*t3780*t4059;
  t4100 = t4081*t4095;
  t4106 = t4070 + t4100;
  t1230 = Sin(var1[10]);
  t4115 = t4081*t4059;
  t4116 = t3780*t4095;
  t4119 = t4115 + t4116;
  t1112 = Sin(var1[11]);
  t4210 = t3897*t3901*t3920;
  t4212 = -1.*t3840*t3926;
  t4215 = t4210 + t4212;
  t4169 = t3840*t3897;
  t4170 = t3901*t3920*t3926;
  t4197 = t4169 + t4170;
  t4244 = t3872*t4215;
  t4246 = -1.*t4197*t3970;
  t4249 = t4244 + t4246;
  t4167 = t3845*t3847*t3901;
  t4207 = t3872*t4197;
  t4217 = t4215*t3970;
  t4222 = t4207 + t4217;
  t4225 = t4222*t3997;
  t4227 = t4167 + t4225;
  t4231 = t3832*t4227;
  t4250 = t4249*t4048;
  t4251 = t4231 + t4250;
  t4255 = t3832*t4249;
  t4256 = -1.*t4227*t4048;
  t4267 = t4255 + t4256;
  t4138 = Cos(var1[11]);
  t4252 = -1.*t3780*t4251;
  t4268 = t4081*t4267;
  t4270 = t4252 + t4268;
  t4273 = t4081*t4251;
  t4276 = t3780*t4267;
  t4277 = t4273 + t4276;
  t4323 = t3845*t3897*t3872;
  t4326 = -1.*t3845*t3926*t3970;
  t4331 = t4323 + t4326;
  t4302 = -1.*t3847*t3920;
  t4305 = t3845*t3872*t3926;
  t4306 = t3845*t3897*t3970;
  t4315 = t4305 + t4306;
  t4318 = t4315*t3997;
  t4319 = t4302 + t4318;
  t4322 = t3832*t4319;
  t4334 = t4331*t4048;
  t4335 = t4322 + t4334;
  t4340 = t3832*t4331;
  t4347 = -1.*t4319*t4048;
  t4349 = t4340 + t4347;
  t4339 = -1.*t3780*t4335;
  t4352 = t4081*t4349;
  t4353 = t4339 + t4352;
  t4357 = t4081*t4335;
  t4358 = t3780*t4349;
  t4359 = t4357 + t4358;
  t4112 = t1230*t4106;
  t4123 = t4114*t4119;
  t4128 = t4112 + t4123;
  t4140 = t4114*t4106;
  t4148 = -1.*t1230*t4119;
  t4153 = t4140 + t4148;
  t4271 = t1230*t4270;
  t4279 = t4114*t4277;
  t4281 = t4271 + t4279;
  t4288 = t4114*t4270;
  t4289 = -1.*t1230*t4277;
  t4296 = t4288 + t4289;
  t4355 = t1230*t4353;
  t4367 = t4114*t4359;
  t4368 = t4355 + t4367;
  t4372 = t4114*t4353;
  t4374 = -1.*t1230*t4359;
  t4377 = t4372 + t4374;
  p_output1[0]=t1112*t4128 - 1.*t4138*t4153;
  p_output1[1]=t1112*t4281 - 1.*t4138*t4296;
  p_output1[2]=t1112*t4368 - 1.*t4138*t4377;
  p_output1[3]=t4128*t4138 + t1112*t4153;
  p_output1[4]=t4138*t4281 + t1112*t4296;
  p_output1[5]=t4138*t4368 + t1112*t4377;
  p_output1[6]=-1.*t3847*t3991 + t3840*t3845*t3997;
  p_output1[7]=t3845*t3901*t3997 - 1.*t3847*t4222;
  p_output1[8]=-1.*t3920*t3997 - 1.*t3847*t4315;
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
