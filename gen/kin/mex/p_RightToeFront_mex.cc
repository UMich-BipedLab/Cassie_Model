/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:34:17 GMT-04:00
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
  double t540;
  double t1823;
  double t2113;
  double t2060;
  double t2227;
  double t916;
  double t1052;
  double t1299;
  double t1343;
  double t1635;
  double t2111;
  double t2235;
  double t2319;
  double t2353;
  double t2647;
  double t2652;
  double t2655;
  double t800;
  double t2914;
  double t2952;
  double t2953;
  double t3022;
  double t3077;
  double t3094;
  double t3247;
  double t3342;
  double t3374;
  double t3398;
  double t3582;
  double t3586;
  double t3588;
  double t3678;
  double t3718;
  double t3737;
  double t3746;
  double t3875;
  double t3884;
  double t3904;
  double t4022;
  double t4024;
  double t4093;
  double t4140;
  double t4174;
  double t4176;
  double t4221;
  double t4270;
  double t4282;
  double t4305;
  double t4345;
  double t4360;
  double t4375;
  double t4395;
  double t4422;
  double t4425;
  double t4434;
  double t4494;
  double t4503;
  double t4511;
  double t4556;
  double t4570;
  double t4576;
  double t4625;
  double t4626;
  double t4627;
  double t4629;
  double t4636;
  double t4638;
  double t4643;
  double t4683;
  double t4688;
  double t4693;
  double t1307;
  double t1450;
  double t1574;
  double t1728;
  double t1755;
  double t2513;
  double t2553;
  double t2577;
  double t2581;
  double t2735;
  double t2746;
  double t2797;
  double t4783;
  double t4790;
  double t4792;
  double t4827;
  double t4835;
  double t4841;
  double t3234;
  double t3267;
  double t3282;
  double t4863;
  double t4864;
  double t4879;
  double t3560;
  double t3563;
  double t3568;
  double t3739;
  double t3767;
  double t3789;
  double t4884;
  double t4893;
  double t4895;
  double t4968;
  double t4981;
  double t4992;
  double t3946;
  double t3950;
  double t4010;
  double t4200;
  double t4230;
  double t4244;
  double t4999;
  double t5009;
  double t5012;
  double t5016;
  double t5035;
  double t5089;
  double t4329;
  double t4333;
  double t4342;
  double t4426;
  double t4469;
  double t4472;
  double t5108;
  double t5109;
  double t5119;
  double t5135;
  double t5138;
  double t5145;
  double t4535;
  double t4544;
  double t4551;
  double t4628;
  double t4630;
  double t4632;
  double t5162;
  double t5164;
  double t5165;
  double t5190;
  double t5199;
  double t5203;
  double t4664;
  double t4669;
  double t4674;
  double t5207;
  double t5218;
  double t5233;
  double t5248;
  double t5252;
  double t5257;
  double t5380;
  double t5392;
  double t5404;
  double t5411;
  double t5412;
  double t5416;
  double t5456;
  double t5459;
  double t5461;
  double t5481;
  double t5483;
  double t5491;
  double t5507;
  double t5538;
  double t5547;
  double t5561;
  double t5567;
  double t5573;
  double t5592;
  double t5596;
  double t5605;
  double t5615;
  double t5616;
  double t5632;
  double t5656;
  double t5668;
  double t5677;
  double t5683;
  double t5686;
  double t5705;
  double t5724;
  double t5727;
  double t5734;
  t540 = Cos(var1[3]);
  t1823 = Cos(var1[5]);
  t2113 = Sin(var1[3]);
  t2060 = Sin(var1[4]);
  t2227 = Sin(var1[5]);
  t916 = Cos(var1[14]);
  t1052 = -1.*t916;
  t1299 = 1. + t1052;
  t1343 = Sin(var1[14]);
  t1635 = Sin(var1[13]);
  t2111 = t540*t1823*t2060;
  t2235 = t2113*t2227;
  t2319 = t2111 + t2235;
  t2353 = Cos(var1[13]);
  t2647 = -1.*t1823*t2113;
  t2652 = t540*t2060*t2227;
  t2655 = t2647 + t2652;
  t800 = Cos(var1[4]);
  t2914 = t1635*t2319;
  t2952 = t2353*t2655;
  t2953 = t2914 + t2952;
  t3022 = Cos(var1[15]);
  t3077 = -1.*t3022;
  t3094 = 1. + t3077;
  t3247 = Sin(var1[15]);
  t3342 = t2353*t2319;
  t3374 = -1.*t1635*t2655;
  t3398 = t3342 + t3374;
  t3582 = t916*t540*t800;
  t3586 = t1343*t2953;
  t3588 = t3582 + t3586;
  t3678 = Cos(var1[16]);
  t3718 = -1.*t3678;
  t3737 = 1. + t3718;
  t3746 = Sin(var1[16]);
  t3875 = t3247*t3398;
  t3884 = t3022*t3588;
  t3904 = t3875 + t3884;
  t4022 = t3022*t3398;
  t4024 = -1.*t3247*t3588;
  t4093 = t4022 + t4024;
  t4140 = Cos(var1[17]);
  t4174 = -1.*t4140;
  t4176 = 1. + t4174;
  t4221 = Sin(var1[17]);
  t4270 = -1.*t3746*t3904;
  t4282 = t3678*t4093;
  t4305 = t4270 + t4282;
  t4345 = t3678*t3904;
  t4360 = t3746*t4093;
  t4375 = t4345 + t4360;
  t4395 = Cos(var1[18]);
  t4422 = -1.*t4395;
  t4425 = 1. + t4422;
  t4434 = Sin(var1[18]);
  t4494 = t4221*t4305;
  t4503 = t4140*t4375;
  t4511 = t4494 + t4503;
  t4556 = t4140*t4305;
  t4570 = -1.*t4221*t4375;
  t4576 = t4556 + t4570;
  t4625 = Cos(var1[19]);
  t4626 = -1.*t4625;
  t4627 = 1. + t4626;
  t4629 = Sin(var1[19]);
  t4636 = -1.*t4434*t4511;
  t4638 = t4395*t4576;
  t4643 = t4636 + t4638;
  t4683 = t4395*t4511;
  t4688 = t4434*t4576;
  t4693 = t4683 + t4688;
  t1307 = -0.049*t1299;
  t1450 = -0.135*t1343;
  t1574 = 0. + t1307 + t1450;
  t1728 = 0.135*t1635;
  t1755 = 0. + t1728;
  t2513 = -1.*t2353;
  t2553 = 1. + t2513;
  t2577 = -0.135*t2553;
  t2581 = 0. + t2577;
  t2735 = -0.135*t1299;
  t2746 = 0.049*t1343;
  t2797 = 0. + t2735 + t2746;
  t4783 = t1823*t2113*t2060;
  t4790 = -1.*t540*t2227;
  t4792 = t4783 + t4790;
  t4827 = t540*t1823;
  t4835 = t2113*t2060*t2227;
  t4841 = t4827 + t4835;
  t3234 = -0.09*t3094;
  t3267 = 0.049*t3247;
  t3282 = 0. + t3234 + t3267;
  t4863 = t1635*t4792;
  t4864 = t2353*t4841;
  t4879 = t4863 + t4864;
  t3560 = -0.049*t3094;
  t3563 = -0.09*t3247;
  t3568 = 0. + t3560 + t3563;
  t3739 = -0.049*t3737;
  t3767 = -0.21*t3746;
  t3789 = 0. + t3739 + t3767;
  t4884 = t2353*t4792;
  t4893 = -1.*t1635*t4841;
  t4895 = t4884 + t4893;
  t4968 = t916*t800*t2113;
  t4981 = t1343*t4879;
  t4992 = t4968 + t4981;
  t3946 = -0.21*t3737;
  t3950 = 0.049*t3746;
  t4010 = 0. + t3946 + t3950;
  t4200 = -0.2707*t4176;
  t4230 = 0.0016*t4221;
  t4244 = 0. + t4200 + t4230;
  t4999 = t3247*t4895;
  t5009 = t3022*t4992;
  t5012 = t4999 + t5009;
  t5016 = t3022*t4895;
  t5035 = -1.*t3247*t4992;
  t5089 = t5016 + t5035;
  t4329 = -0.0016*t4176;
  t4333 = -0.2707*t4221;
  t4342 = 0. + t4329 + t4333;
  t4426 = 0.0184*t4425;
  t4469 = -0.7055*t4434;
  t4472 = 0. + t4426 + t4469;
  t5108 = -1.*t3746*t5012;
  t5109 = t3678*t5089;
  t5119 = t5108 + t5109;
  t5135 = t3678*t5012;
  t5138 = t3746*t5089;
  t5145 = t5135 + t5138;
  t4535 = -0.7055*t4425;
  t4544 = -0.0184*t4434;
  t4551 = 0. + t4535 + t4544;
  t4628 = -1.1135*t4627;
  t4630 = 0.0216*t4629;
  t4632 = 0. + t4628 + t4630;
  t5162 = t4221*t5119;
  t5164 = t4140*t5145;
  t5165 = t5162 + t5164;
  t5190 = t4140*t5119;
  t5199 = -1.*t4221*t5145;
  t5203 = t5190 + t5199;
  t4664 = -0.0216*t4627;
  t4669 = -1.1135*t4629;
  t4674 = 0. + t4664 + t4669;
  t5207 = -1.*t4434*t5165;
  t5218 = t4395*t5203;
  t5233 = t5207 + t5218;
  t5248 = t4395*t5165;
  t5252 = t4434*t5203;
  t5257 = t5248 + t5252;
  t5380 = t800*t1823*t1635;
  t5392 = t2353*t800*t2227;
  t5404 = t5380 + t5392;
  t5411 = t2353*t800*t1823;
  t5412 = -1.*t800*t1635*t2227;
  t5416 = t5411 + t5412;
  t5456 = -1.*t916*t2060;
  t5459 = t1343*t5404;
  t5461 = t5456 + t5459;
  t5481 = t3247*t5416;
  t5483 = t3022*t5461;
  t5491 = t5481 + t5483;
  t5507 = t3022*t5416;
  t5538 = -1.*t3247*t5461;
  t5547 = t5507 + t5538;
  t5561 = -1.*t3746*t5491;
  t5567 = t3678*t5547;
  t5573 = t5561 + t5567;
  t5592 = t3678*t5491;
  t5596 = t3746*t5547;
  t5605 = t5592 + t5596;
  t5615 = t4221*t5573;
  t5616 = t4140*t5605;
  t5632 = t5615 + t5616;
  t5656 = t4140*t5573;
  t5668 = -1.*t4221*t5605;
  t5677 = t5656 + t5668;
  t5683 = -1.*t4434*t5632;
  t5686 = t4395*t5677;
  t5705 = t5683 + t5686;
  t5724 = t4395*t5632;
  t5727 = t4434*t5677;
  t5734 = t5724 + t5727;
  p_output1[0]=0. + t1755*t2319 + t2581*t2655 + t2797*t2953 + t3282*t3398 + t3568*t3588 + t3789*t3904 + t4010*t4093 + t4244*t4305 + t4342*t4375 + t4472*t4511 + t4551*t4576 + t4632*t4643 + t4674*t4693 + 0.088451*(t4629*t4643 + t4625*t4693) - 1.062256*(t4625*t4643 - 1.*t4629*t4693) + t1574*t540*t800 - 0.1305*(-1.*t1343*t540*t800 + t2953*t916) + var1[0];
  p_output1[1]=0. + t1755*t4792 + t2581*t4841 + t2797*t4879 + t3282*t4895 + t3568*t4992 + t3789*t5012 + t4010*t5089 + t4244*t5119 + t4342*t5145 + t4472*t5165 + t4551*t5203 + t4632*t5233 + t4674*t5257 + 0.088451*(t4629*t5233 + t4625*t5257) - 1.062256*(t4625*t5233 - 1.*t4629*t5257) + t1574*t2113*t800 - 0.1305*(-1.*t1343*t2113*t800 + t4879*t916) + var1[1];
  p_output1[2]=0. - 1.*t1574*t2060 + t2797*t5404 + t3282*t5416 + t3568*t5461 + t3789*t5491 + t4010*t5547 + t4244*t5573 + t4342*t5605 + t4472*t5632 + t4551*t5677 + t4632*t5705 + t4674*t5734 + 0.088451*(t4629*t5705 + t4625*t5734) - 1.062256*(t4625*t5705 - 1.*t4629*t5734) + t1755*t1823*t800 + t2227*t2581*t800 - 0.1305*(t1343*t2060 + t5404*t916) + var1[2];
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

#include "p_RightToeFront_mex.hh"

namespace SymExpression
{

void p_RightToeFront_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
