/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:59 GMT-05:00
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
  double t1122;
  double t921;
  double t1147;
  double t968;
  double t2391;
  double t625;
  double t1066;
  double t2402;
  double t2490;
  double t2539;
  double t2618;
  double t2626;
  double t2632;
  double t3820;
  double t3827;
  double t4082;
  double t4154;
  double t2755;
  double t3439;
  double t3482;
  double t4635;
  double t5433;
  double t5438;
  double t5470;
  double t5476;
  double t5372;
  double t5395;
  double t5413;
  double t5490;
  double t5495;
  double t5513;
  double t5545;
  double t5554;
  double t5566;
  double t5583;
  double t5599;
  double t5614;
  double t5615;
  double t5647;
  double t5654;
  double t5664;
  double t5683;
  double t5694;
  double t5714;
  double t5716;
  double t5752;
  double t5776;
  double t5783;
  double t5843;
  double t5847;
  double t5855;
  double t5874;
  double t5876;
  double t5879;
  double t5888;
  double t5938;
  double t5949;
  double t5956;
  double t6003;
  double t6006;
  double t6050;
  double t6063;
  double t6140;
  double t6144;
  double t6189;
  double t6204;
  double t6282;
  double t6284;
  double t6363;
  double t6383;
  double t6387;
  double t754;
  double t755;
  double t759;
  double t765;
  double t2652;
  double t2690;
  double t6482;
  double t6486;
  double t6490;
  double t6509;
  double t6542;
  double t6547;
  double t4083;
  double t4158;
  double t4340;
  double t4646;
  double t4647;
  double t4895;
  double t6565;
  double t6592;
  double t6599;
  double t5471;
  double t5487;
  double t5488;
  double t5522;
  double t5529;
  double t5531;
  double t5572;
  double t5587;
  double t5592;
  double t6678;
  double t6687;
  double t6689;
  double t6713;
  double t6716;
  double t6717;
  double t5625;
  double t5643;
  double t5646;
  double t5715;
  double t5730;
  double t5743;
  double t6727;
  double t6734;
  double t6736;
  double t6741;
  double t6796;
  double t6800;
  double t5804;
  double t5832;
  double t5840;
  double t5886;
  double t5891;
  double t5931;
  double t6808;
  double t6824;
  double t6832;
  double t6862;
  double t6876;
  double t6886;
  double t5981;
  double t5985;
  double t5993;
  double t6148;
  double t6192;
  double t6193;
  double t6934;
  double t6958;
  double t6990;
  double t7090;
  double t7095;
  double t7099;
  double t6324;
  double t6327;
  double t6358;
  double t7137;
  double t7140;
  double t7161;
  double t7182;
  double t7184;
  double t7207;
  double t7380;
  double t7383;
  double t7389;
  double t7565;
  double t7596;
  double t7601;
  double t7668;
  double t7675;
  double t7676;
  double t7693;
  double t7698;
  double t7736;
  double t7788;
  double t7801;
  double t7843;
  double t7947;
  double t8002;
  double t8012;
  double t8104;
  double t8184;
  double t8230;
  double t8256;
  double t8271;
  double t8278;
  double t8311;
  double t8353;
  double t8354;
  double t8458;
  double t8466;
  double t8522;
  double t8831;
  double t8906;
  double t8980;
  t1122 = Cos(var1[3]);
  t921 = Cos(var1[5]);
  t1147 = Sin(var1[4]);
  t968 = Sin(var1[3]);
  t2391 = Sin(var1[5]);
  t625 = Cos(var1[6]);
  t1066 = -1.*t921*t968;
  t2402 = t1122*t1147*t2391;
  t2490 = t1066 + t2402;
  t2539 = t1122*t921*t1147;
  t2618 = t968*t2391;
  t2626 = t2539 + t2618;
  t2632 = Sin(var1[6]);
  t3820 = Cos(var1[7]);
  t3827 = -1.*t3820;
  t4082 = 1. + t3827;
  t4154 = Sin(var1[7]);
  t2755 = t625*t2490;
  t3439 = t2626*t2632;
  t3482 = t2755 + t3439;
  t4635 = Cos(var1[4]);
  t5433 = Cos(var1[8]);
  t5438 = -1.*t5433;
  t5470 = 1. + t5438;
  t5476 = Sin(var1[8]);
  t5372 = t1122*t4635*t3820;
  t5395 = t3482*t4154;
  t5413 = t5372 + t5395;
  t5490 = t625*t2626;
  t5495 = -1.*t2490*t2632;
  t5513 = t5490 + t5495;
  t5545 = Cos(var1[9]);
  t5554 = -1.*t5545;
  t5566 = 1. + t5554;
  t5583 = Sin(var1[9]);
  t5599 = t5433*t5413;
  t5614 = t5513*t5476;
  t5615 = t5599 + t5614;
  t5647 = t5433*t5513;
  t5654 = -1.*t5413*t5476;
  t5664 = t5647 + t5654;
  t5683 = Cos(var1[10]);
  t5694 = -1.*t5683;
  t5714 = 1. + t5694;
  t5716 = Sin(var1[10]);
  t5752 = -1.*t5583*t5615;
  t5776 = t5545*t5664;
  t5783 = t5752 + t5776;
  t5843 = t5545*t5615;
  t5847 = t5583*t5664;
  t5855 = t5843 + t5847;
  t5874 = Cos(var1[11]);
  t5876 = -1.*t5874;
  t5879 = 1. + t5876;
  t5888 = Sin(var1[11]);
  t5938 = t5716*t5783;
  t5949 = t5683*t5855;
  t5956 = t5938 + t5949;
  t6003 = t5683*t5783;
  t6006 = -1.*t5716*t5855;
  t6050 = t6003 + t6006;
  t6063 = Cos(var1[12]);
  t6140 = -1.*t6063;
  t6144 = 1. + t6140;
  t6189 = Sin(var1[12]);
  t6204 = -1.*t5888*t5956;
  t6282 = t5874*t6050;
  t6284 = t6204 + t6282;
  t6363 = t5874*t5956;
  t6383 = t5888*t6050;
  t6387 = t6363 + t6383;
  t754 = -1.*t625;
  t755 = 1. + t754;
  t759 = 0.135*t755;
  t765 = 0. + t759;
  t2652 = -0.135*t2632;
  t2690 = 0. + t2652;
  t6482 = t1122*t921;
  t6486 = t968*t1147*t2391;
  t6490 = t6482 + t6486;
  t6509 = t921*t968*t1147;
  t6542 = -1.*t1122*t2391;
  t6547 = t6509 + t6542;
  t4083 = 0.135*t4082;
  t4158 = 0.049*t4154;
  t4340 = 0. + t4083 + t4158;
  t4646 = -0.049*t4082;
  t4647 = 0.135*t4154;
  t4895 = 0. + t4646 + t4647;
  t6565 = t625*t6490;
  t6592 = t6547*t2632;
  t6599 = t6565 + t6592;
  t5471 = -0.049*t5470;
  t5487 = -0.09*t5476;
  t5488 = 0. + t5471 + t5487;
  t5522 = -0.09*t5470;
  t5529 = 0.049*t5476;
  t5531 = 0. + t5522 + t5529;
  t5572 = -0.049*t5566;
  t5587 = -0.21*t5583;
  t5592 = 0. + t5572 + t5587;
  t6678 = t4635*t3820*t968;
  t6687 = t6599*t4154;
  t6689 = t6678 + t6687;
  t6713 = t625*t6547;
  t6716 = -1.*t6490*t2632;
  t6717 = t6713 + t6716;
  t5625 = -0.21*t5566;
  t5643 = 0.049*t5583;
  t5646 = 0. + t5625 + t5643;
  t5715 = -0.2707*t5714;
  t5730 = 0.0016*t5716;
  t5743 = 0. + t5715 + t5730;
  t6727 = t5433*t6689;
  t6734 = t6717*t5476;
  t6736 = t6727 + t6734;
  t6741 = t5433*t6717;
  t6796 = -1.*t6689*t5476;
  t6800 = t6741 + t6796;
  t5804 = -0.0016*t5714;
  t5832 = -0.2707*t5716;
  t5840 = 0. + t5804 + t5832;
  t5886 = 0.0184*t5879;
  t5891 = -0.7055*t5888;
  t5931 = 0. + t5886 + t5891;
  t6808 = -1.*t5583*t6736;
  t6824 = t5545*t6800;
  t6832 = t6808 + t6824;
  t6862 = t5545*t6736;
  t6876 = t5583*t6800;
  t6886 = t6862 + t6876;
  t5981 = -0.7055*t5879;
  t5985 = -0.0184*t5888;
  t5993 = 0. + t5981 + t5985;
  t6148 = -1.1135*t6144;
  t6192 = 0.0216*t6189;
  t6193 = 0. + t6148 + t6192;
  t6934 = t5716*t6832;
  t6958 = t5683*t6886;
  t6990 = t6934 + t6958;
  t7090 = t5683*t6832;
  t7095 = -1.*t5716*t6886;
  t7099 = t7090 + t7095;
  t6324 = -0.0216*t6144;
  t6327 = -1.1135*t6189;
  t6358 = 0. + t6324 + t6327;
  t7137 = -1.*t5888*t6990;
  t7140 = t5874*t7099;
  t7161 = t7137 + t7140;
  t7182 = t5874*t6990;
  t7184 = t5888*t7099;
  t7207 = t7182 + t7184;
  t7380 = t4635*t625*t2391;
  t7383 = t4635*t921*t2632;
  t7389 = t7380 + t7383;
  t7565 = -1.*t3820*t1147;
  t7596 = t7389*t4154;
  t7601 = t7565 + t7596;
  t7668 = t4635*t921*t625;
  t7675 = -1.*t4635*t2391*t2632;
  t7676 = t7668 + t7675;
  t7693 = t5433*t7601;
  t7698 = t7676*t5476;
  t7736 = t7693 + t7698;
  t7788 = t5433*t7676;
  t7801 = -1.*t7601*t5476;
  t7843 = t7788 + t7801;
  t7947 = -1.*t5583*t7736;
  t8002 = t5545*t7843;
  t8012 = t7947 + t8002;
  t8104 = t5545*t7736;
  t8184 = t5583*t7843;
  t8230 = t8104 + t8184;
  t8256 = t5716*t8012;
  t8271 = t5683*t8230;
  t8278 = t8256 + t8271;
  t8311 = t5683*t8012;
  t8353 = -1.*t5716*t8230;
  t8354 = t8311 + t8353;
  t8458 = -1.*t5888*t8278;
  t8466 = t5874*t8354;
  t8522 = t8458 + t8466;
  t8831 = t5874*t8278;
  t8906 = t5888*t8354;
  t8980 = t8831 + t8906;
  p_output1[0]=0. + t2626*t2690 + t3482*t4340 + 0.1305*(t3482*t3820 - 1.*t1122*t4154*t4635) + t1122*t4635*t4895 + t5413*t5488 + t5513*t5531 + t5592*t5615 + t5646*t5664 + t5743*t5783 + t5840*t5855 + t5931*t5956 + t5993*t6050 + t6193*t6284 + t6358*t6387 + 0.0306*(t6189*t6284 + t6063*t6387) - 1.1312*(t6063*t6284 - 1.*t6189*t6387) + t2490*t765 + var1[0];
  p_output1[1]=0. + t2690*t6547 + t4340*t6599 + t5488*t6689 + t5531*t6717 + t5592*t6736 + t5646*t6800 + t5743*t6832 + t5840*t6886 + t5931*t6990 + t5993*t7099 + t6193*t7161 + t6358*t7207 + 0.0306*(t6189*t7161 + t6063*t7207) - 1.1312*(t6063*t7161 - 1.*t6189*t7207) + t6490*t765 + t4635*t4895*t968 + 0.1305*(t3820*t6599 - 1.*t4154*t4635*t968) + var1[1];
  p_output1[2]=0. - 1.*t1147*t4895 + t4340*t7389 + 0.1305*(t1147*t4154 + t3820*t7389) + t5488*t7601 + t2391*t4635*t765 + t5531*t7676 + t5592*t7736 + t5646*t7843 + t5743*t8012 + t5840*t8230 + t5931*t8278 + t5993*t8354 + t6193*t8522 + t6358*t8980 + 0.0306*(t6189*t8522 + t6063*t8980) - 1.1312*(t6063*t8522 - 1.*t6189*t8980) + t2690*t4635*t921 + var1[2];
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

#include "p_LeftToeBottom_mex.hh"

namespace SymExpression
{

void p_LeftToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
