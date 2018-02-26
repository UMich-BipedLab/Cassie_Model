/*
 * Automatically Generated from Mathematica.
 * Mon 26 Feb 2018 15:42:37 GMT-05:00
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
  double t628;
  double t742;
  double t1166;
  double t981;
  double t5315;
  double t5335;
  double t2208;
  double t5384;
  double t5393;
  double t5403;
  double t5323;
  double t5338;
  double t5379;
  double t5406;
  double t1567;
  double t5436;
  double t5437;
  double t5438;
  double t5383;
  double t5418;
  double t5425;
  double t5439;
  double t1542;
  double t5451;
  double t5462;
  double t5471;
  double t5429;
  double t5445;
  double t5448;
  double t5472;
  double t1523;
  double t5485;
  double t5491;
  double t5492;
  double t5449;
  double t5478;
  double t5481;
  double t5495;
  double t5519;
  double t5525;
  double t5527;
  double t5509;
  double t5511;
  double t5514;
  double t5537;
  double t5539;
  double t5541;
  double t5515;
  double t5529;
  double t5531;
  double t5549;
  double t5551;
  double t5555;
  double t5535;
  double t5545;
  double t5547;
  double t5561;
  double t5562;
  double t5563;
  double t5548;
  double t5557;
  double t5558;
  double t5582;
  double t5583;
  double t5584;
  double t5574;
  double t5576;
  double t5579;
  double t5592;
  double t5593;
  double t5594;
  double t5580;
  double t5586;
  double t5589;
  double t5602;
  double t5603;
  double t5604;
  double t5590;
  double t5596;
  double t5599;
  double t5483;
  double t5496;
  double t5498;
  double t5501;
  double t5502;
  double t5503;
  double t5559;
  double t5564;
  double t5565;
  double t5567;
  double t5568;
  double t5569;
  double t5600;
  double t5606;
  double t5609;
  double t5612;
  double t5613;
  double t5614;
  t628 = Cos(var1[8]);
  t742 = Sin(var1[7]);
  t1166 = Sin(var1[8]);
  t981 = Cos(var1[7]);
  t5315 = Cos(var1[9]);
  t5335 = Sin(var1[9]);
  t2208 = Cos(var1[10]);
  t5384 = t981*t5315;
  t5393 = -1.*t742*t1166*t5335;
  t5403 = t5384 + t5393;
  t5323 = t5315*t742*t1166;
  t5338 = t981*t5335;
  t5379 = t5323 + t5338;
  t5406 = Sin(var1[10]);
  t1567 = Cos(var1[11]);
  t5436 = t2208*t5403;
  t5437 = -1.*t5379*t5406;
  t5438 = t5436 + t5437;
  t5383 = t2208*t5379;
  t5418 = t5403*t5406;
  t5425 = t5383 + t5418;
  t5439 = Sin(var1[11]);
  t1542 = Cos(var1[12]);
  t5451 = t1567*t5438;
  t5462 = -1.*t5425*t5439;
  t5471 = t5451 + t5462;
  t5429 = t1567*t5425;
  t5445 = t5438*t5439;
  t5448 = t5429 + t5445;
  t5472 = Sin(var1[12]);
  t1523 = Cos(var1[13]);
  t5485 = t1542*t5471;
  t5491 = -1.*t5448*t5472;
  t5492 = t5485 + t5491;
  t5449 = t1542*t5448;
  t5478 = t5471*t5472;
  t5481 = t5449 + t5478;
  t5495 = Sin(var1[13]);
  t5519 = -1.*t5315*t742;
  t5525 = -1.*t981*t1166*t5335;
  t5527 = t5519 + t5525;
  t5509 = t981*t5315*t1166;
  t5511 = -1.*t742*t5335;
  t5514 = t5509 + t5511;
  t5537 = t2208*t5527;
  t5539 = -1.*t5514*t5406;
  t5541 = t5537 + t5539;
  t5515 = t2208*t5514;
  t5529 = t5527*t5406;
  t5531 = t5515 + t5529;
  t5549 = t1567*t5541;
  t5551 = -1.*t5531*t5439;
  t5555 = t5549 + t5551;
  t5535 = t1567*t5531;
  t5545 = t5541*t5439;
  t5547 = t5535 + t5545;
  t5561 = t1542*t5555;
  t5562 = -1.*t5547*t5472;
  t5563 = t5561 + t5562;
  t5548 = t1542*t5547;
  t5557 = t5555*t5472;
  t5558 = t5548 + t5557;
  t5582 = -1.*t628*t2208*t5335;
  t5583 = -1.*t628*t5315*t5406;
  t5584 = t5582 + t5583;
  t5574 = t628*t5315*t2208;
  t5576 = -1.*t628*t5335*t5406;
  t5579 = t5574 + t5576;
  t5592 = t1567*t5584;
  t5593 = -1.*t5579*t5439;
  t5594 = t5592 + t5593;
  t5580 = t1567*t5579;
  t5586 = t5584*t5439;
  t5589 = t5580 + t5586;
  t5602 = t1542*t5594;
  t5603 = -1.*t5589*t5472;
  t5604 = t5602 + t5603;
  t5590 = t1542*t5589;
  t5596 = t5594*t5472;
  t5599 = t5590 + t5596;
  t5483 = t1523*t5481;
  t5496 = t5492*t5495;
  t5498 = t5483 + t5496;
  t5501 = t1523*t5492;
  t5502 = -1.*t5481*t5495;
  t5503 = t5501 + t5502;
  t5559 = t1523*t5558;
  t5564 = t5563*t5495;
  t5565 = t5559 + t5564;
  t5567 = t1523*t5563;
  t5568 = -1.*t5558*t5495;
  t5569 = t5567 + t5568;
  t5600 = t1523*t5599;
  t5606 = t5604*t5495;
  t5609 = t5600 + t5606;
  t5612 = t1523*t5604;
  t5613 = -1.*t5599*t5495;
  t5614 = t5612 + t5613;
  p_output1[0]=0. + t628*t742;
  p_output1[1]=0. - 1.*t628*t981;
  p_output1[2]=0. + t1166;
  p_output1[3]=0. - 0.642788*t5498 - 0.766044*t5503;
  p_output1[4]=0. + 0.642788*t5565 + 0.766044*t5569;
  p_output1[5]=0. + 0.642788*t5609 + 0.766044*t5614;
  p_output1[6]=0. + 0.766044*t5498 - 0.642788*t5503;
  p_output1[7]=0. - 0.766044*t5565 + 0.642788*t5569;
  p_output1[8]=0. - 0.766044*t5609 + 0.642788*t5614;
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

#include "R_MultisenseIMU_to_RightToeBottom_mex.hh"

namespace SymExpression
{

void R_MultisenseIMU_to_RightToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
