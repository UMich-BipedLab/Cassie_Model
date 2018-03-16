/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 11:08:31 GMT-04:00
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
  double t1042;
  double t1496;
  double t1029;
  double t1058;
  double t1540;
  double t1656;
  double t1408;
  double t1542;
  double t1578;
  double t647;
  double t1826;
  double t1834;
  double t1958;
  double t2028;
  double t1636;
  double t1977;
  double t2009;
  double t605;
  double t2065;
  double t2082;
  double t2092;
  double t2096;
  double t2246;
  double t2264;
  double t2272;
  double t2311;
  double t2395;
  double t2636;
  double t2021;
  double t2419;
  double t2524;
  double t320;
  double t2687;
  double t2739;
  double t2764;
  double t2989;
  double t2567;
  double t2817;
  double t2880;
  double t252;
  double t3069;
  double t3073;
  double t3092;
  double t162;
  double t3287;
  double t3289;
  double t3300;
  double t3328;
  double t3338;
  double t3345;
  double t3318;
  double t3350;
  double t3449;
  double t3453;
  double t3456;
  double t3529;
  double t3532;
  double t3562;
  double t3603;
  double t3451;
  double t3668;
  double t3776;
  double t3823;
  double t3832;
  double t3843;
  double t3232;
  double t3793;
  double t3872;
  double t3887;
  double t3916;
  double t3961;
  double t3963;
  double t4034;
  double t4041;
  double t4047;
  double t4070;
  double t4082;
  double t4095;
  double t4106;
  double t4112;
  double t4113;
  double t4053;
  double t4115;
  double t4116;
  double t4145;
  double t4163;
  double t4167;
  double t4136;
  double t4169;
  double t4170;
  double t4210;
  double t4211;
  double t4212;
  double t2961;
  double t3160;
  double t3189;
  double t3262;
  double t3268;
  double t3271;
  double t3894;
  double t3992;
  double t3998;
  double t4017;
  double t4021;
  double t4026;
  double t4207;
  double t4238;
  double t4242;
  double t4250;
  double t4255;
  double t4267;
  t1042 = Cos(var1[5]);
  t1496 = Sin(var1[3]);
  t1029 = Cos(var1[3]);
  t1058 = Sin(var1[4]);
  t1540 = Sin(var1[5]);
  t1656 = Sin(var1[13]);
  t1408 = t1029*t1042*t1058;
  t1542 = t1496*t1540;
  t1578 = t1408 + t1542;
  t647 = Cos(var1[13]);
  t1826 = -1.*t1042*t1496;
  t1834 = t1029*t1058*t1540;
  t1958 = t1826 + t1834;
  t2028 = Cos(var1[15]);
  t1636 = t647*t1578;
  t1977 = -1.*t1656*t1958;
  t2009 = t1636 + t1977;
  t605 = Sin(var1[15]);
  t2065 = Cos(var1[14]);
  t2082 = Cos(var1[4]);
  t2092 = t2065*t1029*t2082;
  t2096 = Sin(var1[14]);
  t2246 = t1656*t1578;
  t2264 = t647*t1958;
  t2272 = t2246 + t2264;
  t2311 = t2096*t2272;
  t2395 = t2092 + t2311;
  t2636 = Cos(var1[16]);
  t2021 = t605*t2009;
  t2419 = t2028*t2395;
  t2524 = t2021 + t2419;
  t320 = Sin(var1[16]);
  t2687 = t2028*t2009;
  t2739 = -1.*t605*t2395;
  t2764 = t2687 + t2739;
  t2989 = Cos(var1[17]);
  t2567 = -1.*t320*t2524;
  t2817 = t2636*t2764;
  t2880 = t2567 + t2817;
  t252 = Sin(var1[17]);
  t3069 = t2636*t2524;
  t3073 = t320*t2764;
  t3092 = t3069 + t3073;
  t162 = Sin(var1[18]);
  t3287 = t1042*t1496*t1058;
  t3289 = -1.*t1029*t1540;
  t3300 = t3287 + t3289;
  t3328 = t1029*t1042;
  t3338 = t1496*t1058*t1540;
  t3345 = t3328 + t3338;
  t3318 = t647*t3300;
  t3350 = -1.*t1656*t3345;
  t3449 = t3318 + t3350;
  t3453 = t2065*t2082*t1496;
  t3456 = t1656*t3300;
  t3529 = t647*t3345;
  t3532 = t3456 + t3529;
  t3562 = t2096*t3532;
  t3603 = t3453 + t3562;
  t3451 = t605*t3449;
  t3668 = t2028*t3603;
  t3776 = t3451 + t3668;
  t3823 = t2028*t3449;
  t3832 = -1.*t605*t3603;
  t3843 = t3823 + t3832;
  t3232 = Cos(var1[18]);
  t3793 = -1.*t320*t3776;
  t3872 = t2636*t3843;
  t3887 = t3793 + t3872;
  t3916 = t2636*t3776;
  t3961 = t320*t3843;
  t3963 = t3916 + t3961;
  t4034 = t647*t2082*t1042;
  t4041 = -1.*t2082*t1656*t1540;
  t4047 = t4034 + t4041;
  t4070 = -1.*t2065*t1058;
  t4082 = t2082*t1042*t1656;
  t4095 = t647*t2082*t1540;
  t4106 = t4082 + t4095;
  t4112 = t2096*t4106;
  t4113 = t4070 + t4112;
  t4053 = t605*t4047;
  t4115 = t2028*t4113;
  t4116 = t4053 + t4115;
  t4145 = t2028*t4047;
  t4163 = -1.*t605*t4113;
  t4167 = t4145 + t4163;
  t4136 = -1.*t320*t4116;
  t4169 = t2636*t4167;
  t4170 = t4136 + t4169;
  t4210 = t2636*t4116;
  t4211 = t320*t4167;
  t4212 = t4210 + t4211;
  t2961 = t252*t2880;
  t3160 = t2989*t3092;
  t3189 = t2961 + t3160;
  t3262 = t2989*t2880;
  t3268 = -1.*t252*t3092;
  t3271 = t3262 + t3268;
  t3894 = t252*t3887;
  t3992 = t2989*t3963;
  t3998 = t3894 + t3992;
  t4017 = t2989*t3887;
  t4021 = -1.*t252*t3963;
  t4026 = t4017 + t4021;
  t4207 = t252*t4170;
  t4238 = t2989*t4212;
  t4242 = t4207 + t4238;
  t4250 = t2989*t4170;
  t4255 = -1.*t252*t4212;
  t4267 = t4250 + t4255;
  p_output1[0]=t162*t3189 - 1.*t3232*t3271;
  p_output1[1]=t162*t3998 - 1.*t3232*t4026;
  p_output1[2]=t162*t4242 - 1.*t3232*t4267;
  p_output1[3]=t3189*t3232 + t162*t3271;
  p_output1[4]=t3232*t3998 + t162*t4026;
  p_output1[5]=t3232*t4242 + t162*t4267;
  p_output1[6]=t1029*t2082*t2096 - 1.*t2065*t2272;
  p_output1[7]=t1496*t2082*t2096 - 1.*t2065*t3532;
  p_output1[8]=-1.*t1058*t2096 - 1.*t2065*t4106;
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

#include "R_ankle_joint_right_mex.hh"

namespace SymExpression
{

void R_ankle_joint_right_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
