/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:37:02 GMT-04:00
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
  double t132;
  double t229;
  double t1111;
  double t845;
  double t1782;
  double t1915;
  double t2115;
  double t1901;
  double t1977;
  double t2078;
  double t1465;
  double t2127;
  double t2287;
  double t2427;
  double t3042;
  double t2089;
  double t2786;
  double t2837;
  double t1322;
  double t3146;
  double t3177;
  double t3255;
  double t3553;
  double t3012;
  double t3277;
  double t3279;
  double t1282;
  double t3662;
  double t3809;
  double t3812;
  double t4096;
  double t3436;
  double t3970;
  double t4055;
  double t1147;
  double t4101;
  double t4164;
  double t4196;
  double t4611;
  double t4635;
  double t4673;
  double t4762;
  double t4939;
  double t4998;
  double t4726;
  double t5000;
  double t5062;
  double t5077;
  double t5199;
  double t5229;
  double t5072;
  double t5275;
  double t5324;
  double t5351;
  double t5392;
  double t5399;
  double t5329;
  double t5404;
  double t5479;
  double t5543;
  double t5557;
  double t5608;
  double t5705;
  double t5723;
  double t5739;
  double t5747;
  double t5748;
  double t5769;
  double t5745;
  double t5774;
  double t5787;
  double t5822;
  double t5831;
  double t5864;
  double t5813;
  double t5865;
  double t5868;
  double t5891;
  double t5913;
  double t5938;
  double t4076;
  double t4325;
  double t4327;
  double t4540;
  double t4587;
  double t4593;
  double t5520;
  double t5610;
  double t5632;
  double t5655;
  double t5673;
  double t5678;
  double t5869;
  double t5954;
  double t5978;
  double t5999;
  double t6006;
  double t6052;
  double t6281;
  double t6306;
  double t6489;
  double t6504;
  double t6571;
  double t6572;
  double t6656;
  double t6659;
  double t6756;
  double t6764;
  double t6198;
  double t6206;
  double t6213;
  double t6235;
  double t6237;
  double t6314;
  double t6324;
  double t6345;
  double t6396;
  double t6401;
  double t6460;
  double t6516;
  double t6521;
  double t6522;
  double t6543;
  double t6564;
  double t6566;
  double t6574;
  double t6577;
  double t6586;
  double t6592;
  double t6597;
  double t6604;
  double t6680;
  double t6681;
  double t6699;
  double t6712;
  double t6723;
  double t6727;
  double t6770;
  double t6787;
  double t6788;
  double t6809;
  double t6816;
  double t6818;
  t132 = Cos(var1[1]);
  t229 = Sin(var1[0]);
  t1111 = Sin(var1[1]);
  t845 = Cos(var1[0]);
  t1782 = Cos(var1[2]);
  t1915 = Sin(var1[2]);
  t2115 = Cos(var1[3]);
  t1901 = t1782*t229*t1111;
  t1977 = t845*t1915;
  t2078 = t1901 + t1977;
  t1465 = Sin(var1[3]);
  t2127 = t845*t1782;
  t2287 = -1.*t229*t1111*t1915;
  t2427 = t2127 + t2287;
  t3042 = Cos(var1[4]);
  t2089 = -1.*t1465*t2078;
  t2786 = t2115*t2427;
  t2837 = t2089 + t2786;
  t1322 = Sin(var1[4]);
  t3146 = t2115*t2078;
  t3177 = t1465*t2427;
  t3255 = t3146 + t3177;
  t3553 = Cos(var1[5]);
  t3012 = t1322*t2837;
  t3277 = t3042*t3255;
  t3279 = t3012 + t3277;
  t1282 = Sin(var1[5]);
  t3662 = t3042*t2837;
  t3809 = -1.*t1322*t3255;
  t3812 = t3662 + t3809;
  t4096 = Cos(var1[6]);
  t3436 = -1.*t1282*t3279;
  t3970 = t3553*t3812;
  t4055 = t3436 + t3970;
  t1147 = Sin(var1[6]);
  t4101 = t3553*t3279;
  t4164 = t1282*t3812;
  t4196 = t4101 + t4164;
  t4611 = t845*t1782*t1111;
  t4635 = -1.*t229*t1915;
  t4673 = t4611 + t4635;
  t4762 = -1.*t1782*t229;
  t4939 = -1.*t845*t1111*t1915;
  t4998 = t4762 + t4939;
  t4726 = -1.*t1465*t4673;
  t5000 = t2115*t4998;
  t5062 = t4726 + t5000;
  t5077 = t2115*t4673;
  t5199 = t1465*t4998;
  t5229 = t5077 + t5199;
  t5072 = t1322*t5062;
  t5275 = t3042*t5229;
  t5324 = t5072 + t5275;
  t5351 = t3042*t5062;
  t5392 = -1.*t1322*t5229;
  t5399 = t5351 + t5392;
  t5329 = -1.*t1282*t5324;
  t5404 = t3553*t5399;
  t5479 = t5329 + t5404;
  t5543 = t3553*t5324;
  t5557 = t1282*t5399;
  t5608 = t5543 + t5557;
  t5705 = -1.*t132*t1782*t1465;
  t5723 = -1.*t2115*t132*t1915;
  t5739 = t5705 + t5723;
  t5747 = t2115*t132*t1782;
  t5748 = -1.*t132*t1465*t1915;
  t5769 = t5747 + t5748;
  t5745 = t1322*t5739;
  t5774 = t3042*t5769;
  t5787 = t5745 + t5774;
  t5822 = t3042*t5739;
  t5831 = -1.*t1322*t5769;
  t5864 = t5822 + t5831;
  t5813 = -1.*t1282*t5787;
  t5865 = t3553*t5864;
  t5868 = t5813 + t5865;
  t5891 = t3553*t5787;
  t5913 = t1282*t5864;
  t5938 = t5891 + t5913;
  t4076 = t1147*t4055;
  t4325 = t4096*t4196;
  t4327 = t4076 + t4325;
  t4540 = t4096*t4055;
  t4587 = -1.*t1147*t4196;
  t4593 = t4540 + t4587;
  t5520 = t1147*t5479;
  t5610 = t4096*t5608;
  t5632 = t5520 + t5610;
  t5655 = t4096*t5479;
  t5673 = -1.*t1147*t5608;
  t5678 = t5655 + t5673;
  t5869 = t1147*t5868;
  t5954 = t4096*t5938;
  t5978 = t5869 + t5954;
  t5999 = t4096*t5868;
  t6006 = -1.*t1147*t5938;
  t6052 = t5999 + t6006;
  t6281 = -1.*t1782;
  t6306 = 1. + t6281;
  t6489 = -1.*t2115;
  t6504 = 1. + t6489;
  t6571 = -1.*t3042;
  t6572 = 1. + t6571;
  t6656 = -1.*t3553;
  t6659 = 1. + t6656;
  t6756 = -1.*t4096;
  t6764 = 1. + t6756;
  t6198 = -1.*t132;
  t6206 = 1. + t6198;
  t6213 = 0.135*t6206;
  t6235 = 0.049*t1111;
  t6237 = 0. + t6213 + t6235;
  t6314 = -0.049*t6306;
  t6324 = -0.09*t1915;
  t6345 = 0. + t6314 + t6324;
  t6396 = -0.09*t6306;
  t6401 = 0.049*t1915;
  t6460 = 0. + t6396 + t6401;
  t6516 = -0.049*t6504;
  t6521 = -0.21*t1465;
  t6522 = 0. + t6516 + t6521;
  t6543 = -0.21*t6504;
  t6564 = 0.049*t1465;
  t6566 = 0. + t6543 + t6564;
  t6574 = -0.2707*t6572;
  t6577 = 0.0016*t1322;
  t6586 = 0. + t6574 + t6577;
  t6592 = -0.0016*t6572;
  t6597 = -0.2707*t1322;
  t6604 = 0. + t6592 + t6597;
  t6680 = 0.0184*t6659;
  t6681 = -0.7055*t1282;
  t6699 = 0. + t6680 + t6681;
  t6712 = -0.7055*t6659;
  t6723 = -0.0184*t1282;
  t6727 = 0. + t6712 + t6723;
  t6770 = -1.1135*t6764;
  t6787 = 0.0216*t1147;
  t6788 = 0. + t6770 + t6787;
  t6809 = -0.0216*t6764;
  t6816 = -1.1135*t1147;
  t6818 = 0. + t6809 + t6816;
  p_output1[0]=0. + t132*t229;
  p_output1[1]=0. - 1.*t132*t845;
  p_output1[2]=0. + t1111;
  p_output1[3]=0.;
  p_output1[4]=0. - 0.642788*t4327 - 0.766044*t4593;
  p_output1[5]=0. + 0.642788*t5632 + 0.766044*t5678;
  p_output1[6]=0. + 0.642788*t5978 + 0.766044*t6052;
  p_output1[7]=0.;
  p_output1[8]=0. + 0.766044*t4327 - 0.642788*t4593;
  p_output1[9]=0. - 0.766044*t5632 + 0.642788*t5678;
  p_output1[10]=0. - 0.766044*t5978 + 0.642788*t6052;
  p_output1[11]=0.;
  p_output1[12]=0.24925 + 0.135*t229 - 0.1305*t132*t229 - 0.0306*t4327 + 1.1312*t4593 - 1.*t229*t6237 - 1.*t1111*t229*t6345 - 1.*t2078*t6522 - 1.*t2427*t6566 - 1.*t2837*t6586 - 1.*t3255*t6604 - 1.*t3279*t6699 - 1.*t3812*t6727 - 1.*t4055*t6788 - 1.*t4196*t6818 - 1.*t6460*t845;
  p_output1[13]=-0.0302 + 0.0306*t5632 - 1.1312*t5678 - 1.*t229*t6460 + t4673*t6522 + t4998*t6566 + t5062*t6586 + t5229*t6604 + t5324*t6699 + t5399*t6727 + t5479*t6788 + t5608*t6818 + 0.135*(1. - 1.*t845) + 0.1305*t132*t845 + t6237*t845 + t1111*t6345*t845;
  p_output1[14]=-0.047 + 0.004500000000000004*t1111 + 0.0306*t5978 - 1.1312*t6052 - 0.049*t6206 + t132*t6345 + t132*t1782*t6522 - 1.*t132*t1915*t6566 + t5739*t6586 + t5769*t6604 + t5787*t6699 + t5864*t6727 + t5868*t6788 + t5938*t6818;
  p_output1[15]=1.;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 4, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "H_MultisenseIMU_to_LeftToeBottom_mex.hh"

namespace SymExpression
{

void H_MultisenseIMU_to_LeftToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
