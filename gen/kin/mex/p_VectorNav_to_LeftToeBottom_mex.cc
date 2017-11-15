/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:36:06 GMT-05:00
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
  double t114;
  double t793;
  double t799;
  double t860;
  double t1013;
  double t1506;
  double t2479;
  double t2806;
  double t3021;
  double t3059;
  double t3092;
  double t3388;
  double t3396;
  double t3421;
  double t3866;
  double t3890;
  double t3905;
  double t4051;
  double t4057;
  double t4099;
  double t4150;
  double t4197;
  double t4235;
  double t4245;
  double t4322;
  double t4353;
  double t4358;
  double t4406;
  double t4412;
  double t4417;
  double t4430;
  double t4494;
  double t4501;
  double t4503;
  double t4525;
  double t4528;
  double t4530;
  double t4577;
  double t486;
  double t785;
  double t1821;
  double t1897;
  double t2232;
  double t2337;
  double t2482;
  double t2510;
  double t1027;
  double t1671;
  double t1697;
  double t4808;
  double t2564;
  double t2743;
  double t2750;
  double t3062;
  double t3124;
  double t3278;
  double t4906;
  double t4909;
  double t4910;
  double t4961;
  double t4964;
  double t4969;
  double t3698;
  double t3708;
  double t3819;
  double t4125;
  double t4158;
  double t4176;
  double t4975;
  double t4982;
  double t4983;
  double t4988;
  double t4992;
  double t5005;
  double t4289;
  double t4303;
  double t4309;
  double t4420;
  double t4441;
  double t4479;
  double t5018;
  double t5020;
  double t5023;
  double t5025;
  double t5043;
  double t5048;
  double t4513;
  double t4514;
  double t4515;
  double t5061;
  double t5076;
  double t5078;
  double t5127;
  double t5128;
  double t5136;
  double t4778;
  double t4782;
  double t4783;
  double t4836;
  double t4850;
  double t4854;
  double t5396;
  double t5402;
  double t5404;
  double t5412;
  double t5418;
  double t5430;
  double t5454;
  double t5472;
  double t5478;
  double t5526;
  double t5558;
  double t5569;
  double t5592;
  double t5604;
  double t5608;
  double t5646;
  double t5647;
  double t5664;
  double t5688;
  double t5690;
  double t5691;
  double t5696;
  double t5702;
  double t5703;
  t114 = Cos(var1[1]);
  t793 = Cos(var1[2]);
  t799 = Cos(var1[3]);
  t860 = -1.*t799;
  t1013 = 1. + t860;
  t1506 = Sin(var1[3]);
  t2479 = Sin(var1[2]);
  t2806 = Cos(var1[4]);
  t3021 = -1.*t2806;
  t3059 = 1. + t3021;
  t3092 = Sin(var1[4]);
  t3388 = -1.*t114*t793*t1506;
  t3396 = -1.*t799*t114*t2479;
  t3421 = t3388 + t3396;
  t3866 = t799*t114*t793;
  t3890 = -1.*t114*t1506*t2479;
  t3905 = t3866 + t3890;
  t4051 = Cos(var1[5]);
  t4057 = -1.*t4051;
  t4099 = 1. + t4057;
  t4150 = Sin(var1[5]);
  t4197 = t3092*t3421;
  t4235 = t2806*t3905;
  t4245 = t4197 + t4235;
  t4322 = t2806*t3421;
  t4353 = -1.*t3092*t3905;
  t4358 = t4322 + t4353;
  t4406 = Cos(var1[6]);
  t4412 = -1.*t4406;
  t4417 = 1. + t4412;
  t4430 = Sin(var1[6]);
  t4494 = -1.*t4150*t4245;
  t4501 = t4051*t4358;
  t4503 = t4494 + t4501;
  t4525 = t4051*t4245;
  t4528 = t4150*t4358;
  t4530 = t4525 + t4528;
  t4577 = Cos(var1[0]);
  t486 = -1.*t114;
  t785 = 1. + t486;
  t1821 = Sin(var1[1]);
  t1897 = -1.*t793;
  t2232 = 1. + t1897;
  t2337 = -0.049*t2232;
  t2482 = -0.09*t2479;
  t2510 = 0. + t2337 + t2482;
  t1027 = -0.049*t1013;
  t1671 = -0.21*t1506;
  t1697 = 0. + t1027 + t1671;
  t4808 = Sin(var1[0]);
  t2564 = -0.21*t1013;
  t2743 = 0.049*t1506;
  t2750 = 0. + t2564 + t2743;
  t3062 = -0.2707*t3059;
  t3124 = 0.0016*t3092;
  t3278 = 0. + t3062 + t3124;
  t4906 = t4577*t793*t1821;
  t4909 = -1.*t4808*t2479;
  t4910 = t4906 + t4909;
  t4961 = -1.*t793*t4808;
  t4964 = -1.*t4577*t1821*t2479;
  t4969 = t4961 + t4964;
  t3698 = -0.0016*t3059;
  t3708 = -0.2707*t3092;
  t3819 = 0. + t3698 + t3708;
  t4125 = 0.0184*t4099;
  t4158 = -0.7055*t4150;
  t4176 = 0. + t4125 + t4158;
  t4975 = -1.*t1506*t4910;
  t4982 = t799*t4969;
  t4983 = t4975 + t4982;
  t4988 = t799*t4910;
  t4992 = t1506*t4969;
  t5005 = t4988 + t4992;
  t4289 = -0.7055*t4099;
  t4303 = -0.0184*t4150;
  t4309 = 0. + t4289 + t4303;
  t4420 = -1.1135*t4417;
  t4441 = 0.0216*t4430;
  t4479 = 0. + t4420 + t4441;
  t5018 = t3092*t4983;
  t5020 = t2806*t5005;
  t5023 = t5018 + t5020;
  t5025 = t2806*t4983;
  t5043 = -1.*t3092*t5005;
  t5048 = t5025 + t5043;
  t4513 = -0.0216*t4417;
  t4514 = -1.1135*t4430;
  t4515 = 0. + t4513 + t4514;
  t5061 = -1.*t4150*t5023;
  t5076 = t4051*t5048;
  t5078 = t5061 + t5076;
  t5127 = t4051*t5023;
  t5128 = t4150*t5048;
  t5136 = t5127 + t5128;
  t4778 = 0.135*t785;
  t4782 = 0.049*t1821;
  t4783 = 0. + t4778 + t4782;
  t4836 = -0.09*t2232;
  t4850 = 0.049*t2479;
  t4854 = 0. + t4836 + t4850;
  t5396 = t793*t4808*t1821;
  t5402 = t4577*t2479;
  t5404 = t5396 + t5402;
  t5412 = t4577*t793;
  t5418 = -1.*t4808*t1821*t2479;
  t5430 = t5412 + t5418;
  t5454 = -1.*t1506*t5404;
  t5472 = t799*t5430;
  t5478 = t5454 + t5472;
  t5526 = t799*t5404;
  t5558 = t1506*t5430;
  t5569 = t5526 + t5558;
  t5592 = t3092*t5478;
  t5604 = t2806*t5569;
  t5608 = t5592 + t5604;
  t5646 = t2806*t5478;
  t5647 = -1.*t3092*t5569;
  t5664 = t5646 + t5647;
  t5688 = -1.*t4150*t5608;
  t5690 = t4051*t5664;
  t5691 = t5688 + t5690;
  t5696 = t4051*t5608;
  t5702 = t4150*t5664;
  t5703 = t5696 + t5702;
  p_output1[0]=-0.03155 + 0.004500000000000004*t1821 + t114*t2510 - 1.*t114*t2479*t2750 + t3278*t3421 + t3819*t3905 + t4176*t4245 + t4309*t4358 + t4479*t4503 + t4515*t4530 + 0.0306*(t4430*t4503 + t4406*t4530) - 1.1312*(t4406*t4503 - 1.*t4430*t4530) - 0.049*t785 + t114*t1697*t793;
  p_output1[1]=0. - 0.135*(1. - 1.*t4577) - 0.1305*t114*t4577 - 1.*t1821*t2510*t4577 - 1.*t4577*t4783 + t4808*t4854 - 1.*t1697*t4910 - 1.*t2750*t4969 - 1.*t3278*t4983 - 1.*t3819*t5005 - 1.*t4176*t5023 - 1.*t4309*t5048 - 1.*t4479*t5078 - 1.*t4515*t5136 - 0.0306*(t4430*t5078 + t4406*t5136) + 1.1312*(t4406*t5078 - 1.*t4430*t5136);
  p_output1[2]=-0.07996 + 0.135*t4808 - 0.1305*t114*t4808 - 1.*t1821*t2510*t4808 - 1.*t4783*t4808 - 1.*t4577*t4854 - 1.*t1697*t5404 - 1.*t2750*t5430 - 1.*t3278*t5478 - 1.*t3819*t5569 - 1.*t4176*t5608 - 1.*t4309*t5664 - 1.*t4479*t5691 - 1.*t4515*t5703 - 0.0306*(t4430*t5691 + t4406*t5703) + 1.1312*(t4406*t5691 - 1.*t4430*t5703);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "p_VectorNav_to_LeftToeBottom_mex.hh"

namespace SymExpression
{

void p_VectorNav_to_LeftToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
