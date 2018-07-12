/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:32:56 GMT-04:00
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
  double t2092;
  double t2378;
  double t2424;
  double t2087;
  double t2468;
  double t468;
  double t2839;
  double t2852;
  double t2902;
  double t2300;
  double t2482;
  double t2822;
  double t2919;
  double t3124;
  double t3137;
  double t3145;
  double t3185;
  double t3050;
  double t3110;
  double t3114;
  double t3214;
  double t469;
  double t510;
  double t1168;
  double t1290;
  double t2930;
  double t2935;
  double t3475;
  double t3476;
  double t3481;
  double t3435;
  double t3436;
  double t3438;
  double t3158;
  double t3187;
  double t3193;
  double t3215;
  double t3222;
  double t3241;
  double t3545;
  double t3546;
  double t3548;
  double t3731;
  double t3736;
  double t3737;
  double t3925;
  double t3939;
  double t3947;
  double t4135;
  double t4140;
  double t4156;
  double t4250;
  double t4266;
  double t4267;
  double t3492;
  double t4338;
  double t4340;
  double t4372;
  double t4378;
  double t4383;
  double t4447;
  double t4459;
  double t4466;
  double t4557;
  double t4568;
  double t4571;
  double t4289;
  double t3511;
  double t3512;
  double t4751;
  double t4757;
  double t4768;
  double t4404;
  double t4837;
  double t4838;
  double t4522;
  double t4548;
  double t4549;
  double t4551;
  double t4584;
  double t4590;
  double t4597;
  double t3554;
  double t3555;
  double t3556;
  double t4885;
  double t4911;
  double t4927;
  double t4935;
  double t4940;
  double t5013;
  double t5026;
  double t5032;
  double t3346;
  double t5123;
  double t5136;
  double t5138;
  t2092 = Cos(var1[5]);
  t2378 = Sin(var1[3]);
  t2424 = Sin(var1[4]);
  t2087 = Cos(var1[3]);
  t2468 = Sin(var1[5]);
  t468 = Cos(var1[6]);
  t2839 = -1.*t2092*t2378*t2424;
  t2852 = t2087*t2468;
  t2902 = t2839 + t2852;
  t2300 = -1.*t2087*t2092;
  t2482 = -1.*t2378*t2424*t2468;
  t2822 = t2300 + t2482;
  t2919 = Sin(var1[6]);
  t3124 = Cos(var1[7]);
  t3137 = -1.*t3124;
  t3145 = 1. + t3137;
  t3185 = Sin(var1[7]);
  t3050 = t468*t2822;
  t3110 = t2902*t2919;
  t3114 = t3050 + t3110;
  t3214 = Cos(var1[4]);
  t469 = -1.*t468;
  t510 = 1. + t469;
  t1168 = 0.135*t510;
  t1290 = 0. + t1168;
  t2930 = -0.135*t2919;
  t2935 = 0. + t2930;
  t3475 = t2087*t2092*t2424;
  t3476 = t2378*t2468;
  t3481 = t3475 + t3476;
  t3435 = -1.*t2092*t2378;
  t3436 = t2087*t2424*t2468;
  t3438 = t3435 + t3436;
  t3158 = 0.135*t3145;
  t3187 = 0.049*t3185;
  t3193 = 0. + t3158 + t3187;
  t3215 = -0.049*t3145;
  t3222 = 0.135*t3185;
  t3241 = 0. + t3215 + t3222;
  t3545 = t468*t3438;
  t3546 = t3481*t2919;
  t3548 = t3545 + t3546;
  t3731 = t2087*t3214*t468*t2468;
  t3736 = t2087*t3214*t2092*t2919;
  t3737 = t3731 + t3736;
  t3925 = t3214*t468*t2378*t2468;
  t3939 = t3214*t2092*t2378*t2919;
  t3947 = t3925 + t3939;
  t4135 = -1.*t468*t2424*t2468;
  t4140 = -1.*t2092*t2424*t2919;
  t4156 = t4135 + t4140;
  t4250 = t2092*t2378;
  t4266 = -1.*t2087*t2424*t2468;
  t4267 = t4250 + t4266;
  t3492 = t468*t3481;
  t4338 = t4267*t2919;
  t4340 = t3492 + t4338;
  t4372 = t2092*t2378*t2424;
  t4378 = -1.*t2087*t2468;
  t4383 = t4372 + t4378;
  t4447 = t468*t4383;
  t4459 = t2822*t2919;
  t4466 = t4447 + t4459;
  t4557 = t3214*t2092*t468;
  t4568 = -1.*t3214*t2468*t2919;
  t4571 = t4557 + t4568;
  t4289 = -1.*t3481*t2919;
  t3511 = -1.*t3438*t2919;
  t3512 = t3492 + t3511;
  t4751 = t2087*t2092;
  t4757 = t2378*t2424*t2468;
  t4768 = t4751 + t4757;
  t4404 = -1.*t4383*t2919;
  t4837 = -1.*t4768*t2919;
  t4838 = t4447 + t4837;
  t4522 = -1.*t3214*t468*t2468;
  t4548 = -1.*t3214*t2092*t2919;
  t4549 = t4522 + t4548;
  t4551 = -0.09*t4549;
  t4584 = 0.135*t3124*t4571;
  t4590 = t4571*t3193;
  t4597 = -0.049*t4571*t3185;
  t3554 = t3124*t3548;
  t3555 = -1.*t2087*t3214*t3185;
  t3556 = t3554 + t3555;
  t4885 = 0.135*t3124;
  t4911 = -0.049*t3185;
  t4927 = t4885 + t4911;
  t4935 = 0.049*t3124;
  t4940 = t4935 + t3222;
  t5013 = t468*t4768;
  t5026 = t4383*t2919;
  t5032 = t5013 + t5026;
  t3346 = -1.*t3214*t3124*t2378;
  t5123 = t3214*t468*t2468;
  t5136 = t3214*t2092*t2919;
  t5138 = t5123 + t5136;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1290*t2822 + t2902*t2935 + t3114*t3193 + 0.135*(t3114*t3124 + t2378*t3185*t3214) - 1.*t2378*t3214*t3241 - 0.049*(t3114*t3185 + t3346) - 0.09*(-1.*t2822*t2919 + t2902*t468);
  p_output1[10]=t2087*t3214*t3241 + t1290*t3438 + t2935*t3481 - 0.09*t3512 + t3193*t3548 - 0.049*(t2087*t3124*t3214 + t3185*t3548) + 0.135*t3556;
  p_output1[11]=0;
  p_output1[12]=t1290*t2087*t2468*t3214 + t2087*t2092*t2935*t3214 - 1.*t2087*t2424*t3241 + t3193*t3737 + 0.135*(t2087*t2424*t3185 + t3124*t3737) - 0.049*(-1.*t2087*t2424*t3124 + t3185*t3737) - 0.09*(-1.*t2087*t2468*t2919*t3214 + t2087*t2092*t3214*t468);
  p_output1[13]=t1290*t2378*t2468*t3214 + t2092*t2378*t2935*t3214 - 1.*t2378*t2424*t3241 + t3193*t3947 + 0.135*(t2378*t2424*t3185 + t3124*t3947) - 0.049*(-1.*t2378*t2424*t3124 + t3185*t3947) - 0.09*(-1.*t2378*t2468*t2919*t3214 + t2092*t2378*t3214*t468);
  p_output1[14]=-1.*t1290*t2424*t2468 - 1.*t2092*t2424*t2935 - 1.*t3214*t3241 + t3193*t4156 + 0.135*(t3185*t3214 + t3124*t4156) - 0.049*(-1.*t3124*t3214 + t3185*t4156) - 0.09*(t2424*t2468*t2919 - 1.*t2092*t2424*t468);
  p_output1[15]=t1290*t3481 + t2935*t4267 + 0.135*t3124*t4340 - 0.049*t3185*t4340 + t3193*t4340 - 0.09*(t4289 + t4267*t468);
  p_output1[16]=t2822*t2935 + t1290*t4383 - 0.09*(t3050 + t4404) + 0.135*t3124*t4466 - 0.049*t3185*t4466 + t3193*t4466;
  p_output1[17]=t1290*t2092*t3214 - 1.*t2468*t2935*t3214 + t4551 + t4584 + t4590 + t4597;
  p_output1[18]=0.135*t2919*t3438 + 0.135*t3124*t3512 - 0.049*t3185*t3512 + t3193*t3512 - 0.135*t3481*t468 - 0.09*(t4289 - 1.*t3438*t468);
  p_output1[19]=-0.135*t4383*t468 + 0.135*t2919*t4768 - 0.09*(t4404 - 1.*t468*t4768) + 0.135*t3124*t4838 - 0.049*t3185*t4838 + t3193*t4838;
  p_output1[20]=0.135*t2468*t2919*t3214 + t4551 + t4584 + t4590 + t4597 - 0.135*t2092*t3214*t468;
  p_output1[21]=0.135*(-1.*t2087*t3124*t3214 - 1.*t3185*t3548) - 0.049*t3556 + t2087*t3214*t4927 + t3548*t4940;
  p_output1[22]=t2378*t3214*t4927 + t4940*t5032 - 0.049*(-1.*t2378*t3185*t3214 + t3124*t5032) + 0.135*(t3346 - 1.*t3185*t5032);
  p_output1[23]=-1.*t2424*t4927 + t4940*t5138 - 0.049*(t2424*t3185 + t3124*t5138) + 0.135*(t2424*t3124 - 1.*t3185*t5138);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 20, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_hip_rotation_left_mex.hh"

namespace SymExpression
{

void J_hip_rotation_left_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
