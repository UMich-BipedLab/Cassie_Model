/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:11:19 GMT-05:00
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
  double t4367;
  double t4338;
  double t4368;
  double t4339;
  double t4370;
  double t543;
  double t4363;
  double t4373;
  double t4374;
  double t4378;
  double t4379;
  double t4380;
  double t4382;
  double t4391;
  double t4392;
  double t4393;
  double t4395;
  double t4388;
  double t4389;
  double t4390;
  double t4403;
  double t4420;
  double t4421;
  double t4422;
  double t4424;
  double t4417;
  double t4418;
  double t4419;
  double t4428;
  double t4429;
  double t4430;
  double t4436;
  double t4438;
  double t4439;
  double t4441;
  double t4444;
  double t4445;
  double t4446;
  double t4455;
  double t4457;
  double t4458;
  double t4461;
  double t4462;
  double t4463;
  double t4465;
  double t4469;
  double t4472;
  double t4474;
  double t4481;
  double t4482;
  double t4483;
  double t4485;
  double t4486;
  double t4487;
  double t4489;
  double t4492;
  double t4493;
  double t4494;
  double t4499;
  double t4501;
  double t4502;
  double t4294;
  double t4299;
  double t4300;
  double t4334;
  double t4383;
  double t4386;
  double t4514;
  double t4515;
  double t4516;
  double t4518;
  double t4519;
  double t4520;
  double t4394;
  double t4396;
  double t4398;
  double t4404;
  double t4405;
  double t4408;
  double t4522;
  double t4523;
  double t4524;
  double t4423;
  double t4425;
  double t4426;
  double t4431;
  double t4432;
  double t4433;
  double t4440;
  double t4442;
  double t4443;
  double t4531;
  double t4532;
  double t4533;
  double t4535;
  double t4536;
  double t4537;
  double t4449;
  double t4452;
  double t4454;
  double t4464;
  double t4466;
  double t4468;
  double t4539;
  double t4540;
  double t4541;
  double t4543;
  double t4544;
  double t4545;
  double t4477;
  double t4478;
  double t4479;
  double t4488;
  double t4490;
  double t4491;
  double t4547;
  double t4548;
  double t4549;
  double t4551;
  double t4552;
  double t4553;
  double t4496;
  double t4497;
  double t4498;
  double t4555;
  double t4556;
  double t4557;
  double t4559;
  double t4560;
  double t4561;
  double t4574;
  double t4575;
  double t4576;
  double t4583;
  double t4584;
  double t4585;
  double t4587;
  double t4588;
  double t4589;
  double t4591;
  double t4592;
  double t4593;
  double t4595;
  double t4596;
  double t4597;
  double t4599;
  double t4600;
  double t4601;
  double t4603;
  double t4604;
  double t4605;
  double t4607;
  double t4608;
  double t4609;
  double t4611;
  double t4612;
  double t4613;
  t4367 = Cos(var1[3]);
  t4338 = Cos(var1[5]);
  t4368 = Sin(var1[4]);
  t4339 = Sin(var1[3]);
  t4370 = Sin(var1[5]);
  t543 = Cos(var1[6]);
  t4363 = -1.*t4338*t4339;
  t4373 = t4367*t4368*t4370;
  t4374 = t4363 + t4373;
  t4378 = t4367*t4338*t4368;
  t4379 = t4339*t4370;
  t4380 = t4378 + t4379;
  t4382 = Sin(var1[6]);
  t4391 = Cos(var1[7]);
  t4392 = -1.*t4391;
  t4393 = 1. + t4392;
  t4395 = Sin(var1[7]);
  t4388 = t543*t4374;
  t4389 = t4380*t4382;
  t4390 = t4388 + t4389;
  t4403 = Cos(var1[4]);
  t4420 = Cos(var1[8]);
  t4421 = -1.*t4420;
  t4422 = 1. + t4421;
  t4424 = Sin(var1[8]);
  t4417 = t4367*t4403*t4391;
  t4418 = t4390*t4395;
  t4419 = t4417 + t4418;
  t4428 = t543*t4380;
  t4429 = -1.*t4374*t4382;
  t4430 = t4428 + t4429;
  t4436 = Cos(var1[9]);
  t4438 = -1.*t4436;
  t4439 = 1. + t4438;
  t4441 = Sin(var1[9]);
  t4444 = t4420*t4419;
  t4445 = t4430*t4424;
  t4446 = t4444 + t4445;
  t4455 = t4420*t4430;
  t4457 = -1.*t4419*t4424;
  t4458 = t4455 + t4457;
  t4461 = Cos(var1[10]);
  t4462 = -1.*t4461;
  t4463 = 1. + t4462;
  t4465 = Sin(var1[10]);
  t4469 = -1.*t4441*t4446;
  t4472 = t4436*t4458;
  t4474 = t4469 + t4472;
  t4481 = t4436*t4446;
  t4482 = t4441*t4458;
  t4483 = t4481 + t4482;
  t4485 = Cos(var1[11]);
  t4486 = -1.*t4485;
  t4487 = 1. + t4486;
  t4489 = Sin(var1[11]);
  t4492 = t4465*t4474;
  t4493 = t4461*t4483;
  t4494 = t4492 + t4493;
  t4499 = t4461*t4474;
  t4501 = -1.*t4465*t4483;
  t4502 = t4499 + t4501;
  t4294 = -1.*t543;
  t4299 = 1. + t4294;
  t4300 = 0.135*t4299;
  t4334 = 0. + t4300;
  t4383 = -0.135*t4382;
  t4386 = 0. + t4383;
  t4514 = t4367*t4338;
  t4515 = t4339*t4368*t4370;
  t4516 = t4514 + t4515;
  t4518 = t4338*t4339*t4368;
  t4519 = -1.*t4367*t4370;
  t4520 = t4518 + t4519;
  t4394 = 0.135*t4393;
  t4396 = 0.049*t4395;
  t4398 = 0. + t4394 + t4396;
  t4404 = -0.049*t4393;
  t4405 = 0.135*t4395;
  t4408 = 0. + t4404 + t4405;
  t4522 = t543*t4516;
  t4523 = t4520*t4382;
  t4524 = t4522 + t4523;
  t4423 = -0.049*t4422;
  t4425 = -0.09*t4424;
  t4426 = 0. + t4423 + t4425;
  t4431 = -0.09*t4422;
  t4432 = 0.049*t4424;
  t4433 = 0. + t4431 + t4432;
  t4440 = -0.049*t4439;
  t4442 = -0.21*t4441;
  t4443 = 0. + t4440 + t4442;
  t4531 = t4403*t4391*t4339;
  t4532 = t4524*t4395;
  t4533 = t4531 + t4532;
  t4535 = t543*t4520;
  t4536 = -1.*t4516*t4382;
  t4537 = t4535 + t4536;
  t4449 = -0.21*t4439;
  t4452 = 0.049*t4441;
  t4454 = 0. + t4449 + t4452;
  t4464 = -0.2707*t4463;
  t4466 = 0.0016*t4465;
  t4468 = 0. + t4464 + t4466;
  t4539 = t4420*t4533;
  t4540 = t4537*t4424;
  t4541 = t4539 + t4540;
  t4543 = t4420*t4537;
  t4544 = -1.*t4533*t4424;
  t4545 = t4543 + t4544;
  t4477 = -0.0016*t4463;
  t4478 = -0.2707*t4465;
  t4479 = 0. + t4477 + t4478;
  t4488 = 0.0184*t4487;
  t4490 = -0.7055*t4489;
  t4491 = 0. + t4488 + t4490;
  t4547 = -1.*t4441*t4541;
  t4548 = t4436*t4545;
  t4549 = t4547 + t4548;
  t4551 = t4436*t4541;
  t4552 = t4441*t4545;
  t4553 = t4551 + t4552;
  t4496 = -0.7055*t4487;
  t4497 = -0.0184*t4489;
  t4498 = 0. + t4496 + t4497;
  t4555 = t4465*t4549;
  t4556 = t4461*t4553;
  t4557 = t4555 + t4556;
  t4559 = t4461*t4549;
  t4560 = -1.*t4465*t4553;
  t4561 = t4559 + t4560;
  t4574 = t4403*t543*t4370;
  t4575 = t4403*t4338*t4382;
  t4576 = t4574 + t4575;
  t4583 = -1.*t4391*t4368;
  t4584 = t4576*t4395;
  t4585 = t4583 + t4584;
  t4587 = t4403*t4338*t543;
  t4588 = -1.*t4403*t4370*t4382;
  t4589 = t4587 + t4588;
  t4591 = t4420*t4585;
  t4592 = t4589*t4424;
  t4593 = t4591 + t4592;
  t4595 = t4420*t4589;
  t4596 = -1.*t4585*t4424;
  t4597 = t4595 + t4596;
  t4599 = -1.*t4441*t4593;
  t4600 = t4436*t4597;
  t4601 = t4599 + t4600;
  t4603 = t4436*t4593;
  t4604 = t4441*t4597;
  t4605 = t4603 + t4604;
  t4607 = t4465*t4601;
  t4608 = t4461*t4605;
  t4609 = t4607 + t4608;
  t4611 = t4461*t4601;
  t4612 = -1.*t4465*t4605;
  t4613 = t4611 + t4612;
  p_output1[0]=0. + t4334*t4374 + t4380*t4386 + t4390*t4398 + 0.1305*(t4390*t4391 - 1.*t4367*t4395*t4403) + t4367*t4403*t4408 + t4419*t4426 + t4430*t4433 + t4443*t4446 + t4454*t4458 + t4468*t4474 + t4479*t4483 + t4491*t4494 + t4498*t4502 - 1.1135*(-1.*t4489*t4494 + t4485*t4502) - 0.0216*(t4485*t4494 + t4489*t4502) + var1[0];
  p_output1[1]=0. + t4339*t4403*t4408 + t4334*t4516 + t4386*t4520 + t4398*t4524 + 0.1305*(-1.*t4339*t4395*t4403 + t4391*t4524) + t4426*t4533 + t4433*t4537 + t4443*t4541 + t4454*t4545 + t4468*t4549 + t4479*t4553 + t4491*t4557 + t4498*t4561 - 1.1135*(-1.*t4489*t4557 + t4485*t4561) - 0.0216*(t4485*t4557 + t4489*t4561) + var1[1];
  p_output1[2]=0. + t4334*t4370*t4403 + t4338*t4386*t4403 - 1.*t4368*t4408 + t4398*t4576 + 0.1305*(t4368*t4395 + t4391*t4576) + t4426*t4585 + t4433*t4589 + t4443*t4593 + t4454*t4597 + t4468*t4601 + t4479*t4605 + t4491*t4609 + t4498*t4613 - 1.1135*(-1.*t4489*t4609 + t4485*t4613) - 0.0216*(t4485*t4609 + t4489*t4613) + var1[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "p_toe_joint_left_mex.hh"

namespace SymExpression
{

void p_toe_joint_left_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
