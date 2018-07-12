/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:34:12 GMT-04:00
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
  double t381;
  double t1987;
  double t2175;
  double t2036;
  double t2246;
  double t1075;
  double t1093;
  double t1192;
  double t1348;
  double t1844;
  double t2048;
  double t2378;
  double t2570;
  double t2707;
  double t2849;
  double t2925;
  double t2945;
  double t1029;
  double t3241;
  double t3279;
  double t3291;
  double t3357;
  double t3477;
  double t3502;
  double t3555;
  double t3690;
  double t3780;
  double t3784;
  double t4198;
  double t4205;
  double t4229;
  double t4316;
  double t4325;
  double t4327;
  double t4356;
  double t4552;
  double t4564;
  double t4582;
  double t4749;
  double t4763;
  double t4776;
  double t4888;
  double t4890;
  double t4919;
  double t4970;
  double t5092;
  double t5143;
  double t5166;
  double t5327;
  double t5341;
  double t5348;
  double t5434;
  double t5436;
  double t5448;
  double t5495;
  double t5534;
  double t5565;
  double t5581;
  double t5636;
  double t5654;
  double t5695;
  double t5711;
  double t5712;
  double t5717;
  double t5749;
  double t5799;
  double t5801;
  double t5823;
  double t5863;
  double t5871;
  double t5880;
  double t1210;
  double t1380;
  double t1394;
  double t1972;
  double t1978;
  double t2716;
  double t2787;
  double t2800;
  double t2809;
  double t3068;
  double t3199;
  double t3229;
  double t5969;
  double t5970;
  double t5978;
  double t5996;
  double t6046;
  double t6052;
  double t3551;
  double t3602;
  double t3648;
  double t6062;
  double t6063;
  double t6066;
  double t4114;
  double t4164;
  double t4168;
  double t4340;
  double t4446;
  double t4512;
  double t6071;
  double t6079;
  double t6080;
  double t6111;
  double t6112;
  double t6134;
  double t4664;
  double t4682;
  double t4690;
  double t4944;
  double t5001;
  double t5032;
  double t6152;
  double t6181;
  double t6199;
  double t6211;
  double t6224;
  double t6228;
  double t5217;
  double t5222;
  double t5283;
  double t5466;
  double t5497;
  double t5523;
  double t6253;
  double t6256;
  double t6258;
  double t6272;
  double t6276;
  double t6291;
  double t5603;
  double t5615;
  double t5623;
  double t5743;
  double t5759;
  double t5762;
  double t6305;
  double t6320;
  double t6334;
  double t6362;
  double t6371;
  double t6382;
  double t5846;
  double t5853;
  double t5858;
  double t6394;
  double t6397;
  double t6401;
  double t6417;
  double t6418;
  double t6428;
  double t6624;
  double t6627;
  double t6634;
  double t6651;
  double t6657;
  double t6660;
  double t6703;
  double t6713;
  double t6726;
  double t6746;
  double t6747;
  double t6750;
  double t6766;
  double t6767;
  double t6784;
  double t6804;
  double t6824;
  double t6825;
  double t6842;
  double t6849;
  double t6852;
  double t6874;
  double t6884;
  double t6891;
  double t6904;
  double t6908;
  double t6915;
  double t6931;
  double t6937;
  double t6938;
  double t6951;
  double t6958;
  double t6960;
  t381 = Cos(var1[3]);
  t1987 = Cos(var1[5]);
  t2175 = Sin(var1[3]);
  t2036 = Sin(var1[4]);
  t2246 = Sin(var1[5]);
  t1075 = Cos(var1[14]);
  t1093 = -1.*t1075;
  t1192 = 1. + t1093;
  t1348 = Sin(var1[14]);
  t1844 = Sin(var1[13]);
  t2048 = t381*t1987*t2036;
  t2378 = t2175*t2246;
  t2570 = t2048 + t2378;
  t2707 = Cos(var1[13]);
  t2849 = -1.*t1987*t2175;
  t2925 = t381*t2036*t2246;
  t2945 = t2849 + t2925;
  t1029 = Cos(var1[4]);
  t3241 = t1844*t2570;
  t3279 = t2707*t2945;
  t3291 = t3241 + t3279;
  t3357 = Cos(var1[15]);
  t3477 = -1.*t3357;
  t3502 = 1. + t3477;
  t3555 = Sin(var1[15]);
  t3690 = t2707*t2570;
  t3780 = -1.*t1844*t2945;
  t3784 = t3690 + t3780;
  t4198 = t1075*t381*t1029;
  t4205 = t1348*t3291;
  t4229 = t4198 + t4205;
  t4316 = Cos(var1[16]);
  t4325 = -1.*t4316;
  t4327 = 1. + t4325;
  t4356 = Sin(var1[16]);
  t4552 = t3555*t3784;
  t4564 = t3357*t4229;
  t4582 = t4552 + t4564;
  t4749 = t3357*t3784;
  t4763 = -1.*t3555*t4229;
  t4776 = t4749 + t4763;
  t4888 = Cos(var1[17]);
  t4890 = -1.*t4888;
  t4919 = 1. + t4890;
  t4970 = Sin(var1[17]);
  t5092 = -1.*t4356*t4582;
  t5143 = t4316*t4776;
  t5166 = t5092 + t5143;
  t5327 = t4316*t4582;
  t5341 = t4356*t4776;
  t5348 = t5327 + t5341;
  t5434 = Cos(var1[18]);
  t5436 = -1.*t5434;
  t5448 = 1. + t5436;
  t5495 = Sin(var1[18]);
  t5534 = t4970*t5166;
  t5565 = t4888*t5348;
  t5581 = t5534 + t5565;
  t5636 = t4888*t5166;
  t5654 = -1.*t4970*t5348;
  t5695 = t5636 + t5654;
  t5711 = Cos(var1[19]);
  t5712 = -1.*t5711;
  t5717 = 1. + t5712;
  t5749 = Sin(var1[19]);
  t5799 = -1.*t5495*t5581;
  t5801 = t5434*t5695;
  t5823 = t5799 + t5801;
  t5863 = t5434*t5581;
  t5871 = t5495*t5695;
  t5880 = t5863 + t5871;
  t1210 = -0.049*t1192;
  t1380 = -0.135*t1348;
  t1394 = 0. + t1210 + t1380;
  t1972 = 0.135*t1844;
  t1978 = 0. + t1972;
  t2716 = -1.*t2707;
  t2787 = 1. + t2716;
  t2800 = -0.135*t2787;
  t2809 = 0. + t2800;
  t3068 = -0.135*t1192;
  t3199 = 0.049*t1348;
  t3229 = 0. + t3068 + t3199;
  t5969 = t1987*t2175*t2036;
  t5970 = -1.*t381*t2246;
  t5978 = t5969 + t5970;
  t5996 = t381*t1987;
  t6046 = t2175*t2036*t2246;
  t6052 = t5996 + t6046;
  t3551 = -0.09*t3502;
  t3602 = 0.049*t3555;
  t3648 = 0. + t3551 + t3602;
  t6062 = t1844*t5978;
  t6063 = t2707*t6052;
  t6066 = t6062 + t6063;
  t4114 = -0.049*t3502;
  t4164 = -0.09*t3555;
  t4168 = 0. + t4114 + t4164;
  t4340 = -0.049*t4327;
  t4446 = -0.21*t4356;
  t4512 = 0. + t4340 + t4446;
  t6071 = t2707*t5978;
  t6079 = -1.*t1844*t6052;
  t6080 = t6071 + t6079;
  t6111 = t1075*t1029*t2175;
  t6112 = t1348*t6066;
  t6134 = t6111 + t6112;
  t4664 = -0.21*t4327;
  t4682 = 0.049*t4356;
  t4690 = 0. + t4664 + t4682;
  t4944 = -0.2707*t4919;
  t5001 = 0.0016*t4970;
  t5032 = 0. + t4944 + t5001;
  t6152 = t3555*t6080;
  t6181 = t3357*t6134;
  t6199 = t6152 + t6181;
  t6211 = t3357*t6080;
  t6224 = -1.*t3555*t6134;
  t6228 = t6211 + t6224;
  t5217 = -0.0016*t4919;
  t5222 = -0.2707*t4970;
  t5283 = 0. + t5217 + t5222;
  t5466 = 0.0184*t5448;
  t5497 = -0.7055*t5495;
  t5523 = 0. + t5466 + t5497;
  t6253 = -1.*t4356*t6199;
  t6256 = t4316*t6228;
  t6258 = t6253 + t6256;
  t6272 = t4316*t6199;
  t6276 = t4356*t6228;
  t6291 = t6272 + t6276;
  t5603 = -0.7055*t5448;
  t5615 = -0.0184*t5495;
  t5623 = 0. + t5603 + t5615;
  t5743 = -1.1135*t5717;
  t5759 = 0.0216*t5749;
  t5762 = 0. + t5743 + t5759;
  t6305 = t4970*t6258;
  t6320 = t4888*t6291;
  t6334 = t6305 + t6320;
  t6362 = t4888*t6258;
  t6371 = -1.*t4970*t6291;
  t6382 = t6362 + t6371;
  t5846 = -0.0216*t5717;
  t5853 = -1.1135*t5749;
  t5858 = 0. + t5846 + t5853;
  t6394 = -1.*t5495*t6334;
  t6397 = t5434*t6382;
  t6401 = t6394 + t6397;
  t6417 = t5434*t6334;
  t6418 = t5495*t6382;
  t6428 = t6417 + t6418;
  t6624 = t1029*t1987*t1844;
  t6627 = t2707*t1029*t2246;
  t6634 = t6624 + t6627;
  t6651 = t2707*t1029*t1987;
  t6657 = -1.*t1029*t1844*t2246;
  t6660 = t6651 + t6657;
  t6703 = -1.*t1075*t2036;
  t6713 = t1348*t6634;
  t6726 = t6703 + t6713;
  t6746 = t3555*t6660;
  t6747 = t3357*t6726;
  t6750 = t6746 + t6747;
  t6766 = t3357*t6660;
  t6767 = -1.*t3555*t6726;
  t6784 = t6766 + t6767;
  t6804 = -1.*t4356*t6750;
  t6824 = t4316*t6784;
  t6825 = t6804 + t6824;
  t6842 = t4316*t6750;
  t6849 = t4356*t6784;
  t6852 = t6842 + t6849;
  t6874 = t4970*t6825;
  t6884 = t4888*t6852;
  t6891 = t6874 + t6884;
  t6904 = t4888*t6825;
  t6908 = -1.*t4970*t6852;
  t6915 = t6904 + t6908;
  t6931 = -1.*t5495*t6891;
  t6937 = t5434*t6915;
  t6938 = t6931 + t6937;
  t6951 = t5434*t6891;
  t6958 = t5495*t6915;
  t6960 = t6951 + t6958;
  p_output1[0]=0. + t1978*t2570 + t2809*t2945 + t3229*t3291 + t3648*t3784 + t1029*t1394*t381 - 0.1305*(t1075*t3291 - 1.*t1029*t1348*t381) + t4168*t4229 + t4512*t4582 + t4690*t4776 + t5032*t5166 + t5283*t5348 + t5523*t5581 + t5623*t5695 + t5762*t5823 + t5858*t5880 + 0.0306*(t5749*t5823 + t5711*t5880) - 1.1312*(t5711*t5823 - 1.*t5749*t5880) + var1[0];
  p_output1[1]=0. + t1029*t1394*t2175 + t1978*t5978 + t2809*t6052 + t3229*t6066 - 0.1305*(-1.*t1029*t1348*t2175 + t1075*t6066) + t3648*t6080 + t4168*t6134 + t4512*t6199 + t4690*t6228 + t5032*t6258 + t5283*t6291 + t5523*t6334 + t5623*t6382 + t5762*t6401 + t5858*t6428 + 0.0306*(t5749*t6401 + t5711*t6428) - 1.1312*(t5711*t6401 - 1.*t5749*t6428) + var1[1];
  p_output1[2]=0. + t1029*t1978*t1987 - 1.*t1394*t2036 + t1029*t2246*t2809 + t3229*t6634 - 0.1305*(t1348*t2036 + t1075*t6634) + t3648*t6660 + t4168*t6726 + t4512*t6750 + t4690*t6784 + t5032*t6825 + t5283*t6852 + t5523*t6891 + t5623*t6915 + t5762*t6938 + t5858*t6960 + 0.0306*(t5749*t6938 + t5711*t6960) - 1.1312*(t5711*t6938 - 1.*t5749*t6960) + var1[2];
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

#include "p_RightToeBottom_mex.hh"

namespace SymExpression
{

void p_RightToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
