/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:17:13 GMT-05:00
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
  double t426;
  double t1071;
  double t1470;
  double t986;
  double t1585;
  double t955;
  double t1641;
  double t1804;
  double t1816;
  double t1407;
  double t1601;
  double t1619;
  double t1829;
  double t951;
  double t2462;
  double t2469;
  double t2503;
  double t1623;
  double t2204;
  double t2353;
  double t2566;
  double t870;
  double t3059;
  double t3151;
  double t3167;
  double t2461;
  double t2568;
  double t2653;
  double t3172;
  double t308;
  double t72;
  double t479;
  double t5442;
  double t5531;
  double t5540;
  double t5142;
  double t5185;
  double t5297;
  double t5649;
  double t5725;
  double t5731;
  double t5323;
  double t5543;
  double t5594;
  double t5796;
  double t5816;
  double t5884;
  double t5617;
  double t5736;
  double t5772;
  double t5976;
  double t5995;
  double t6024;
  double t5787;
  double t5888;
  double t5940;
  double t6279;
  double t6288;
  double t6290;
  double t6208;
  double t6238;
  double t6242;
  double t6347;
  double t6357;
  double t6388;
  double t6278;
  double t6302;
  double t6309;
  double t6424;
  double t6454;
  double t6469;
  double t6336;
  double t6402;
  double t6409;
  double t6505;
  double t6529;
  double t6551;
  double t6420;
  double t6476;
  double t6491;
  double t2753;
  double t3344;
  double t3609;
  double t4097;
  double t4157;
  double t4340;
  double t5957;
  double t6032;
  double t6066;
  double t6075;
  double t6104;
  double t6113;
  double t6495;
  double t6552;
  double t6553;
  double t6565;
  double t6566;
  double t6579;
  t426 = Cos(var1[8]);
  t1071 = Cos(var1[10]);
  t1470 = Sin(var1[9]);
  t986 = Cos(var1[9]);
  t1585 = Sin(var1[10]);
  t955 = Cos(var1[11]);
  t1641 = -1.*t426*t1071*t1470;
  t1804 = -1.*t426*t986*t1585;
  t1816 = t1641 + t1804;
  t1407 = t426*t986*t1071;
  t1601 = -1.*t426*t1470*t1585;
  t1619 = t1407 + t1601;
  t1829 = Sin(var1[11]);
  t951 = Cos(var1[12]);
  t2462 = t955*t1816;
  t2469 = -1.*t1619*t1829;
  t2503 = t2462 + t2469;
  t1623 = t955*t1619;
  t2204 = t1816*t1829;
  t2353 = t1623 + t2204;
  t2566 = Sin(var1[12]);
  t870 = Cos(var1[13]);
  t3059 = t951*t2503;
  t3151 = -1.*t2353*t2566;
  t3167 = t3059 + t3151;
  t2461 = t951*t2353;
  t2568 = t2503*t2566;
  t2653 = t2461 + t2568;
  t3172 = Sin(var1[13]);
  t308 = Cos(var1[7]);
  t72 = Sin(var1[8]);
  t479 = Sin(var1[7]);
  t5442 = -1.*t986*t479;
  t5531 = -1.*t308*t72*t1470;
  t5540 = t5442 + t5531;
  t5142 = t308*t986*t72;
  t5185 = -1.*t479*t1470;
  t5297 = t5142 + t5185;
  t5649 = t1071*t5540;
  t5725 = -1.*t5297*t1585;
  t5731 = t5649 + t5725;
  t5323 = t1071*t5297;
  t5543 = t5540*t1585;
  t5594 = t5323 + t5543;
  t5796 = t955*t5731;
  t5816 = -1.*t5594*t1829;
  t5884 = t5796 + t5816;
  t5617 = t955*t5594;
  t5736 = t5731*t1829;
  t5772 = t5617 + t5736;
  t5976 = t951*t5884;
  t5995 = -1.*t5772*t2566;
  t6024 = t5976 + t5995;
  t5787 = t951*t5772;
  t5888 = t5884*t2566;
  t5940 = t5787 + t5888;
  t6279 = t308*t986;
  t6288 = -1.*t479*t72*t1470;
  t6290 = t6279 + t6288;
  t6208 = t986*t479*t72;
  t6238 = t308*t1470;
  t6242 = t6208 + t6238;
  t6347 = t1071*t6290;
  t6357 = -1.*t6242*t1585;
  t6388 = t6347 + t6357;
  t6278 = t1071*t6242;
  t6302 = t6290*t1585;
  t6309 = t6278 + t6302;
  t6424 = t955*t6388;
  t6454 = -1.*t6309*t1829;
  t6469 = t6424 + t6454;
  t6336 = t955*t6309;
  t6402 = t6388*t1829;
  t6409 = t6336 + t6402;
  t6505 = t951*t6469;
  t6529 = -1.*t6409*t2566;
  t6551 = t6505 + t6529;
  t6420 = t951*t6409;
  t6476 = t6469*t2566;
  t6491 = t6420 + t6476;
  t2753 = t870*t2653;
  t3344 = t3167*t3172;
  t3609 = t2753 + t3344;
  t4097 = t870*t3167;
  t4157 = -1.*t2653*t3172;
  t4340 = t4097 + t4157;
  t5957 = t870*t5940;
  t6032 = t6024*t3172;
  t6066 = t5957 + t6032;
  t6075 = t870*t6024;
  t6104 = -1.*t5940*t3172;
  t6113 = t6075 + t6104;
  t6495 = t870*t6491;
  t6552 = t6551*t3172;
  t6553 = t6495 + t6552;
  t6565 = t870*t6551;
  t6566 = -1.*t6491*t3172;
  t6579 = t6565 + t6566;
  p_output1[0]=0. + t72;
  p_output1[1]=0. + t308*t426;
  p_output1[2]=0. + t426*t479;
  p_output1[3]=0. + 0.642788*t3609 + 0.766044*t4340;
  p_output1[4]=0. - 0.642788*t6066 - 0.766044*t6113;
  p_output1[5]=0. - 0.642788*t6553 - 0.766044*t6579;
  p_output1[6]=0. - 0.766044*t3609 + 0.642788*t4340;
  p_output1[7]=0. + 0.766044*t6066 - 0.642788*t6113;
  p_output1[8]=0. + 0.766044*t6553 - 0.642788*t6579;
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

#include "R_VectorNav_to_RightToeBottom_mex.hh"

namespace SymExpression
{

void R_VectorNav_to_RightToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
