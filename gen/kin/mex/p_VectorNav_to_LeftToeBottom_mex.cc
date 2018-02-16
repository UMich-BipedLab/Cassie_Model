/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:17:21 GMT-05:00
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
  double t325;
  double t935;
  double t1097;
  double t1173;
  double t2303;
  double t2417;
  double t3053;
  double t3282;
  double t3424;
  double t3499;
  double t3553;
  double t3645;
  double t3839;
  double t3852;
  double t4038;
  double t4042;
  double t4200;
  double t4297;
  double t4305;
  double t4321;
  double t4325;
  double t4339;
  double t4352;
  double t4355;
  double t4416;
  double t4430;
  double t4442;
  double t4444;
  double t4447;
  double t4448;
  double t4457;
  double t4471;
  double t4474;
  double t4480;
  double t4497;
  double t4500;
  double t4506;
  double t4535;
  double t388;
  double t873;
  double t2533;
  double t2973;
  double t2978;
  double t2988;
  double t3061;
  double t3065;
  double t2327;
  double t2432;
  double t2490;
  double t4554;
  double t3107;
  double t3137;
  double t3222;
  double t3534;
  double t3608;
  double t3642;
  double t4574;
  double t4575;
  double t4576;
  double t4602;
  double t4764;
  double t4839;
  double t3892;
  double t4016;
  double t4028;
  double t4323;
  double t4326;
  double t4328;
  double t4922;
  double t4950;
  double t4972;
  double t4982;
  double t4990;
  double t5018;
  double t4382;
  double t4388;
  double t4399;
  double t4451;
  double t4467;
  double t4469;
  double t5095;
  double t5187;
  double t5197;
  double t5280;
  double t5296;
  double t5331;
  double t4484;
  double t4486;
  double t4487;
  double t5393;
  double t5397;
  double t5414;
  double t5448;
  double t5534;
  double t5539;
  double t4545;
  double t4547;
  double t4550;
  double t4557;
  double t4559;
  double t4560;
  double t6154;
  double t6169;
  double t6182;
  double t6271;
  double t6274;
  double t6291;
  double t6317;
  double t6324;
  double t6349;
  double t6390;
  double t6424;
  double t6438;
  double t6451;
  double t6508;
  double t6514;
  double t6523;
  double t6532;
  double t6559;
  double t6563;
  double t6604;
  double t6612;
  double t6654;
  double t6668;
  double t6672;
  t325 = Cos(var1[1]);
  t935 = Cos(var1[2]);
  t1097 = Cos(var1[3]);
  t1173 = -1.*t1097;
  t2303 = 1. + t1173;
  t2417 = Sin(var1[3]);
  t3053 = Sin(var1[2]);
  t3282 = Cos(var1[4]);
  t3424 = -1.*t3282;
  t3499 = 1. + t3424;
  t3553 = Sin(var1[4]);
  t3645 = -1.*t325*t935*t2417;
  t3839 = -1.*t1097*t325*t3053;
  t3852 = t3645 + t3839;
  t4038 = t1097*t325*t935;
  t4042 = -1.*t325*t2417*t3053;
  t4200 = t4038 + t4042;
  t4297 = Cos(var1[5]);
  t4305 = -1.*t4297;
  t4321 = 1. + t4305;
  t4325 = Sin(var1[5]);
  t4339 = t3553*t3852;
  t4352 = t3282*t4200;
  t4355 = t4339 + t4352;
  t4416 = t3282*t3852;
  t4430 = -1.*t3553*t4200;
  t4442 = t4416 + t4430;
  t4444 = Cos(var1[6]);
  t4447 = -1.*t4444;
  t4448 = 1. + t4447;
  t4457 = Sin(var1[6]);
  t4471 = -1.*t4325*t4355;
  t4474 = t4297*t4442;
  t4480 = t4471 + t4474;
  t4497 = t4297*t4355;
  t4500 = t4325*t4442;
  t4506 = t4497 + t4500;
  t4535 = Cos(var1[0]);
  t388 = -1.*t325;
  t873 = 1. + t388;
  t2533 = Sin(var1[1]);
  t2973 = -1.*t935;
  t2978 = 1. + t2973;
  t2988 = -0.049*t2978;
  t3061 = -0.09*t3053;
  t3065 = 0. + t2988 + t3061;
  t2327 = -0.049*t2303;
  t2432 = -0.21*t2417;
  t2490 = 0. + t2327 + t2432;
  t4554 = Sin(var1[0]);
  t3107 = -0.21*t2303;
  t3137 = 0.049*t2417;
  t3222 = 0. + t3107 + t3137;
  t3534 = -0.2707*t3499;
  t3608 = 0.0016*t3553;
  t3642 = 0. + t3534 + t3608;
  t4574 = t4535*t935*t2533;
  t4575 = -1.*t4554*t3053;
  t4576 = t4574 + t4575;
  t4602 = -1.*t935*t4554;
  t4764 = -1.*t4535*t2533*t3053;
  t4839 = t4602 + t4764;
  t3892 = -0.0016*t3499;
  t4016 = -0.2707*t3553;
  t4028 = 0. + t3892 + t4016;
  t4323 = 0.0184*t4321;
  t4326 = -0.7055*t4325;
  t4328 = 0. + t4323 + t4326;
  t4922 = -1.*t2417*t4576;
  t4950 = t1097*t4839;
  t4972 = t4922 + t4950;
  t4982 = t1097*t4576;
  t4990 = t2417*t4839;
  t5018 = t4982 + t4990;
  t4382 = -0.7055*t4321;
  t4388 = -0.0184*t4325;
  t4399 = 0. + t4382 + t4388;
  t4451 = -1.1135*t4448;
  t4467 = 0.0216*t4457;
  t4469 = 0. + t4451 + t4467;
  t5095 = t3553*t4972;
  t5187 = t3282*t5018;
  t5197 = t5095 + t5187;
  t5280 = t3282*t4972;
  t5296 = -1.*t3553*t5018;
  t5331 = t5280 + t5296;
  t4484 = -0.0216*t4448;
  t4486 = -1.1135*t4457;
  t4487 = 0. + t4484 + t4486;
  t5393 = -1.*t4325*t5197;
  t5397 = t4297*t5331;
  t5414 = t5393 + t5397;
  t5448 = t4297*t5197;
  t5534 = t4325*t5331;
  t5539 = t5448 + t5534;
  t4545 = 0.135*t873;
  t4547 = 0.049*t2533;
  t4550 = 0. + t4545 + t4547;
  t4557 = -0.09*t2978;
  t4559 = 0.049*t3053;
  t4560 = 0. + t4557 + t4559;
  t6154 = t935*t4554*t2533;
  t6169 = t4535*t3053;
  t6182 = t6154 + t6169;
  t6271 = t4535*t935;
  t6274 = -1.*t4554*t2533*t3053;
  t6291 = t6271 + t6274;
  t6317 = -1.*t2417*t6182;
  t6324 = t1097*t6291;
  t6349 = t6317 + t6324;
  t6390 = t1097*t6182;
  t6424 = t2417*t6291;
  t6438 = t6390 + t6424;
  t6451 = t3553*t6349;
  t6508 = t3282*t6438;
  t6514 = t6451 + t6508;
  t6523 = t3282*t6349;
  t6532 = -1.*t3553*t6438;
  t6559 = t6523 + t6532;
  t6563 = -1.*t4325*t6514;
  t6604 = t4297*t6559;
  t6612 = t6563 + t6604;
  t6654 = t4297*t6514;
  t6668 = t4325*t6559;
  t6672 = t6654 + t6668;
  p_output1[0]=-0.03155 + 0.004500000000000004*t2533 + t3065*t325 - 1.*t3053*t3222*t325 + t3642*t3852 + t4028*t4200 + t4328*t4355 + t4399*t4442 + t4469*t4480 + t4487*t4506 + 0.0306*(t4457*t4480 + t4444*t4506) - 1.1312*(t4444*t4480 - 1.*t4457*t4506) - 0.049*t873 + t2490*t325*t935;
  p_output1[1]=0. - 0.135*(1. - 1.*t4535) - 1.*t2533*t3065*t4535 - 0.1305*t325*t4535 - 1.*t4535*t4550 + t4554*t4560 - 1.*t2490*t4576 - 1.*t3222*t4839 - 1.*t3642*t4972 - 1.*t4028*t5018 - 1.*t4328*t5197 - 1.*t4399*t5331 - 1.*t4469*t5414 - 1.*t4487*t5539 - 0.0306*(t4457*t5414 + t4444*t5539) + 1.1312*(t4444*t5414 - 1.*t4457*t5539);
  p_output1[2]=-0.07996 + 0.135*t4554 - 1.*t2533*t3065*t4554 - 0.1305*t325*t4554 - 1.*t4550*t4554 - 1.*t4535*t4560 - 1.*t2490*t6182 - 1.*t3222*t6291 - 1.*t3642*t6349 - 1.*t4028*t6438 - 1.*t4328*t6514 - 1.*t4399*t6559 - 1.*t4469*t6612 - 1.*t4487*t6672 - 0.0306*(t4457*t6612 + t4444*t6672) + 1.1312*(t4444*t6612 - 1.*t4457*t6672);
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
