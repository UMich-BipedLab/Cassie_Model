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
  double t644;
  double t3743;
  double t4033;
  double t4185;
  double t4198;
  double t4212;
  double t4248;
  double t4330;
  double t4340;
  double t4342;
  double t4350;
  double t4313;
  double t4316;
  double t4321;
  double t4368;
  double t4371;
  double t4372;
  double t4399;
  double t4400;
  double t4401;
  double t4403;
  double t4386;
  double t4390;
  double t4396;
  double t4414;
  double t4416;
  double t4417;
  double t4444;
  double t4446;
  double t4450;
  double t4460;
  double t4433;
  double t4436;
  double t4443;
  double t4475;
  double t4476;
  double t4478;
  double t4515;
  double t714;
  double t2888;
  double t3439;
  double t3911;
  double t3975;
  double t3982;
  double t4149;
  double t4162;
  double t4532;
  double t4229;
  double t4259;
  double t4283;
  double t4303;
  double t4305;
  double t4306;
  double t4549;
  double t4550;
  double t4553;
  double t4555;
  double t4556;
  double t4557;
  double t4347;
  double t4355;
  double t4358;
  double t4374;
  double t4375;
  double t4382;
  double t4560;
  double t4561;
  double t4562;
  double t4564;
  double t4565;
  double t4566;
  double t4402;
  double t4408;
  double t4410;
  double t4419;
  double t4420;
  double t4423;
  double t4569;
  double t4570;
  double t4574;
  double t4580;
  double t4581;
  double t4582;
  double t4451;
  double t4465;
  double t4472;
  double t4479;
  double t4486;
  double t4489;
  double t4588;
  double t4589;
  double t4593;
  double t4599;
  double t4600;
  double t4601;
  double t4522;
  double t4523;
  double t4526;
  double t4539;
  double t4541;
  double t4543;
  double t4637;
  double t4638;
  double t4639;
  double t4641;
  double t4642;
  double t4644;
  double t4647;
  double t4654;
  double t4655;
  double t4657;
  double t4658;
  double t4660;
  double t4664;
  double t4665;
  double t4666;
  double t4668;
  double t4669;
  double t4670;
  double t4672;
  double t4673;
  double t4674;
  double t4676;
  double t4677;
  double t4678;
  t644 = Cos(var1[8]);
  t3743 = Cos(var1[9]);
  t4033 = Sin(var1[9]);
  t4185 = Cos(var1[10]);
  t4198 = -1.*t4185;
  t4212 = 1. + t4198;
  t4248 = Sin(var1[10]);
  t4330 = Cos(var1[11]);
  t4340 = -1.*t4330;
  t4342 = 1. + t4340;
  t4350 = Sin(var1[11]);
  t4313 = t644*t3743*t4185;
  t4316 = -1.*t644*t4033*t4248;
  t4321 = t4313 + t4316;
  t4368 = -1.*t644*t4185*t4033;
  t4371 = -1.*t644*t3743*t4248;
  t4372 = t4368 + t4371;
  t4399 = Cos(var1[12]);
  t4400 = -1.*t4399;
  t4401 = 1. + t4400;
  t4403 = Sin(var1[12]);
  t4386 = t4330*t4321;
  t4390 = t4372*t4350;
  t4396 = t4386 + t4390;
  t4414 = t4330*t4372;
  t4416 = -1.*t4321*t4350;
  t4417 = t4414 + t4416;
  t4444 = Cos(var1[13]);
  t4446 = -1.*t4444;
  t4450 = 1. + t4446;
  t4460 = Sin(var1[13]);
  t4433 = t4399*t4396;
  t4436 = t4417*t4403;
  t4443 = t4433 + t4436;
  t4475 = t4399*t4417;
  t4476 = -1.*t4396*t4403;
  t4478 = t4475 + t4476;
  t4515 = Cos(var1[7]);
  t714 = -1.*t644;
  t2888 = 1. + t714;
  t3439 = Sin(var1[8]);
  t3911 = -1.*t3743;
  t3975 = 1. + t3911;
  t3982 = -0.049*t3975;
  t4149 = -0.09*t4033;
  t4162 = 0. + t3982 + t4149;
  t4532 = Sin(var1[7]);
  t4229 = -0.049*t4212;
  t4259 = -0.21*t4248;
  t4283 = 0. + t4229 + t4259;
  t4303 = -0.21*t4212;
  t4305 = 0.049*t4248;
  t4306 = 0. + t4303 + t4305;
  t4549 = t4515*t3743*t3439;
  t4550 = -1.*t4532*t4033;
  t4553 = t4549 + t4550;
  t4555 = -1.*t3743*t4532;
  t4556 = -1.*t4515*t3439*t4033;
  t4557 = t4555 + t4556;
  t4347 = -0.0016*t4342;
  t4355 = -0.2707*t4350;
  t4358 = 0. + t4347 + t4355;
  t4374 = -0.2707*t4342;
  t4375 = 0.0016*t4350;
  t4382 = 0. + t4374 + t4375;
  t4560 = t4185*t4553;
  t4561 = t4557*t4248;
  t4562 = t4560 + t4561;
  t4564 = t4185*t4557;
  t4565 = -1.*t4553*t4248;
  t4566 = t4564 + t4565;
  t4402 = 0.0184*t4401;
  t4408 = -0.7055*t4403;
  t4410 = 0. + t4402 + t4408;
  t4419 = -0.7055*t4401;
  t4420 = -0.0184*t4403;
  t4423 = 0. + t4419 + t4420;
  t4569 = t4330*t4562;
  t4570 = t4566*t4350;
  t4574 = t4569 + t4570;
  t4580 = t4330*t4566;
  t4581 = -1.*t4562*t4350;
  t4582 = t4580 + t4581;
  t4451 = -0.0216*t4450;
  t4465 = -1.1135*t4460;
  t4472 = 0. + t4451 + t4465;
  t4479 = -1.1135*t4450;
  t4486 = 0.0216*t4460;
  t4489 = 0. + t4479 + t4486;
  t4588 = t4399*t4574;
  t4589 = t4582*t4403;
  t4593 = t4588 + t4589;
  t4599 = t4399*t4582;
  t4600 = -1.*t4574*t4403;
  t4601 = t4599 + t4600;
  t4522 = -0.135*t2888;
  t4523 = 0.049*t3439;
  t4526 = 0. + t4522 + t4523;
  t4539 = -0.09*t3975;
  t4541 = 0.049*t4033;
  t4543 = 0. + t4539 + t4541;
  t4637 = t3743*t4532*t3439;
  t4638 = t4515*t4033;
  t4639 = t4637 + t4638;
  t4641 = t4515*t3743;
  t4642 = -1.*t4532*t3439*t4033;
  t4644 = t4641 + t4642;
  t4647 = t4185*t4639;
  t4654 = t4644*t4248;
  t4655 = t4647 + t4654;
  t4657 = t4185*t4644;
  t4658 = -1.*t4639*t4248;
  t4660 = t4657 + t4658;
  t4664 = t4330*t4655;
  t4665 = t4660*t4350;
  t4666 = t4664 + t4665;
  t4668 = t4330*t4660;
  t4669 = -1.*t4655*t4350;
  t4670 = t4668 + t4669;
  t4672 = t4399*t4666;
  t4673 = t4670*t4403;
  t4674 = t4672 + t4673;
  t4676 = t4399*t4670;
  t4677 = -1.*t4666*t4403;
  t4678 = t4676 + t4677;
  p_output1[0]=-0.03155 - 0.049*t2888 - 0.004500000000000004*t3439 + t4321*t4358 + t4372*t4382 + t4396*t4410 + t4417*t4423 + t4443*t4472 - 1.1312*(-1.*t4443*t4460 + t4444*t4478) + 0.0306*(t4443*t4444 + t4460*t4478) + t4478*t4489 + t4162*t644 + t3743*t4283*t644 - 1.*t4033*t4306*t644;
  p_output1[1]=0. + 0.135*(1. - 1.*t4515) - 1.*t3439*t4162*t4515 - 1.*t4515*t4526 + t4532*t4543 - 1.*t4283*t4553 - 1.*t4306*t4557 - 1.*t4358*t4562 - 1.*t4382*t4566 - 1.*t4410*t4574 - 1.*t4423*t4582 - 1.*t4472*t4593 - 1.*t4489*t4601 + 1.1312*(-1.*t4460*t4593 + t4444*t4601) - 0.0306*(t4444*t4593 + t4460*t4601) + 0.1305*t4515*t644;
  p_output1[2]=-0.07996 - 0.135*t4532 - 1.*t3439*t4162*t4532 - 1.*t4526*t4532 - 1.*t4515*t4543 - 1.*t4283*t4639 - 1.*t4306*t4644 - 1.*t4358*t4655 - 1.*t4382*t4660 - 1.*t4410*t4666 - 1.*t4423*t4670 - 1.*t4472*t4674 - 1.*t4489*t4678 + 1.1312*(-1.*t4460*t4674 + t4444*t4678) - 0.0306*(t4444*t4674 + t4460*t4678) + 0.1305*t4532*t644;
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

#include "p_VectorNav_to_RightToeBottom_mex.hh"

namespace SymExpression
{

void p_VectorNav_to_RightToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
