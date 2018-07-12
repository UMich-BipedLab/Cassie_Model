/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:24:36 GMT-04:00
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
  double t1566;
  double t1877;
  double t2202;
  double t1713;
  double t1984;
  double t2140;
  double t1329;
  double t2275;
  double t2566;
  double t2821;
  double t3126;
  double t2143;
  double t2949;
  double t2964;
  double t1185;
  double t3141;
  double t3183;
  double t3441;
  double t4122;
  double t3089;
  double t3493;
  double t3749;
  double t467;
  double t4421;
  double t4486;
  double t4490;
  double t16;
  double t147;
  double t4779;
  double t6173;
  double t6187;
  double t6065;
  double t6080;
  double t6268;
  double t6309;
  double t6330;
  double t6346;
  double t6352;
  double t6415;
  double t6474;
  double t6547;
  double t5894;
  double t5924;
  double t6092;
  double t6105;
  double t6347;
  double t6580;
  double t6674;
  double t6776;
  double t6909;
  double t6910;
  double t6941;
  double t6955;
  double t5576;
  double t5621;
  double t5955;
  double t5958;
  double t6715;
  double t6965;
  double t6978;
  double t7032;
  double t7073;
  double t7075;
  double t7156;
  double t7157;
  double t5327;
  double t3798;
  double t4525;
  double t4623;
  double t4748;
  double t4789;
  double t4801;
  double t4810;
  double t4888;
  double t4963;
  double t5120;
  double t5255;
  double t5420;
  double t5431;
  double t5439;
  double t5562;
  double t5660;
  double t5778;
  double t7021;
  double t7186;
  double t7234;
  double t7243;
  double t7303;
  double t7330;
  double t7334;
  double t7374;
  double t7397;
  double t7402;
  double t7418;
  double t7685;
  double t7687;
  double t7708;
  double t7684;
  double t7709;
  double t7710;
  double t7722;
  double t7723;
  double t7715;
  double t7724;
  double t7734;
  double t7762;
  double t7777;
  double t7779;
  double t4971;
  double t5068;
  double t5310;
  double t5352;
  double t7431;
  double t7441;
  double t7755;
  double t7784;
  double t7793;
  double t7797;
  double t7806;
  double t7813;
  double t7815;
  double t7836;
  double t7838;
  double t7851;
  double t7853;
  double t7493;
  double t7521;
  double t7522;
  double t7533;
  double t7538;
  double t7629;
  double t7638;
  double t7642;
  double t7656;
  double t7663;
  double t7928;
  double t7485;
  double t7492;
  double t7577;
  double t7590;
  double t7599;
  double t7893;
  double t7894;
  double t7895;
  double t7931;
  double t7943;
  double t7881;
  double t7882;
  double t7899;
  double t7665;
  t1566 = Cos(var1[13]);
  t1877 = Sin(var1[13]);
  t2202 = Cos(var1[12]);
  t1713 = 0.642788*t1566;
  t1984 = -0.766044*t1877;
  t2140 = t1713 + t1984;
  t1329 = Sin(var1[12]);
  t2275 = -0.766044*t1566;
  t2566 = -0.642788*t1877;
  t2821 = t2275 + t2566;
  t3126 = Cos(var1[11]);
  t2143 = -1.*t1329*t2140;
  t2949 = t2202*t2821;
  t2964 = 0. + t2143 + t2949;
  t1185 = Sin(var1[11]);
  t3141 = t2202*t2140;
  t3183 = t1329*t2821;
  t3441 = 0. + t3141 + t3183;
  t4122 = Cos(var1[10]);
  t3089 = t1185*t2964;
  t3493 = t3126*t3441;
  t3749 = 0. + t3089 + t3493;
  t467 = Sin(var1[10]);
  t4421 = t3126*t2964;
  t4486 = -1.*t1185*t3441;
  t4490 = 0. + t4421 + t4486;
  t16 = Cos(var1[8]);
  t147 = Cos(var1[9]);
  t4779 = Sin(var1[9]);
  t6173 = -1.*t1566;
  t6187 = 1. + t6173;
  t6065 = -1.*t2202;
  t6080 = 1. + t6065;
  t6268 = -0.0216*t6187;
  t6309 = 0.0306*t1566;
  t6330 = 0.01770000000000005*t1877;
  t6346 = 0. + t6268 + t6309 + t6330;
  t6352 = -1.1135*t6187;
  t6415 = -1.1312*t1566;
  t6474 = 0.052199999999999996*t1877;
  t6547 = 0. + t6352 + t6415 + t6474;
  t5894 = -1.*t3126;
  t5924 = 1. + t5894;
  t6092 = -0.7055*t6080;
  t6105 = -0.0184*t1329;
  t6347 = t1329*t6346;
  t6580 = t2202*t6547;
  t6674 = 0. + t6092 + t6105 + t6347 + t6580;
  t6776 = 0.0184*t6080;
  t6909 = -0.7055*t1329;
  t6910 = t2202*t6346;
  t6941 = -1.*t1329*t6547;
  t6955 = 0. + t6776 + t6909 + t6910 + t6941;
  t5576 = -1.*t4122;
  t5621 = 1. + t5576;
  t5955 = -0.0016*t5924;
  t5958 = -0.2707*t1185;
  t6715 = -1.*t1185*t6674;
  t6965 = t3126*t6955;
  t6978 = 0. + t5955 + t5958 + t6715 + t6965;
  t7032 = -0.2707*t5924;
  t7073 = 0.0016*t1185;
  t7075 = t3126*t6674;
  t7156 = t1185*t6955;
  t7157 = 0. + t7032 + t7073 + t7075 + t7156;
  t5327 = Sin(var1[8]);
  t3798 = -1.*t467*t3749;
  t4525 = t4122*t4490;
  t4623 = 0. + t3798 + t4525;
  t4748 = t147*t4623;
  t4789 = t4122*t3749;
  t4801 = t467*t4490;
  t4810 = 0. + t4789 + t4801;
  t4888 = -1.*t4779*t4810;
  t4963 = 0. + t4748 + t4888;
  t5120 = -1.*t16;
  t5255 = 1. + t5120;
  t5420 = -1.*t147;
  t5431 = 1. + t5420;
  t5439 = -0.049*t5431;
  t5562 = -0.09*t4779;
  t5660 = -0.21*t5621;
  t5778 = 0.049*t467;
  t7021 = t467*t6978;
  t7186 = t4122*t7157;
  t7234 = 0. + t5660 + t5778 + t7021 + t7186;
  t7243 = -1.*t4779*t7234;
  t7303 = -0.049*t5621;
  t7330 = -0.21*t467;
  t7334 = t4122*t6978;
  t7374 = -1.*t467*t7157;
  t7397 = 0. + t7303 + t7330 + t7334 + t7374;
  t7402 = t147*t7397;
  t7418 = 0. + t5439 + t5562 + t7243 + t7402;
  t7685 = 0.766044*t1566;
  t7687 = 0.642788*t1877;
  t7708 = t7685 + t7687;
  t7684 = t1329*t2140;
  t7709 = t2202*t7708;
  t7710 = 0. + t7684 + t7709;
  t7722 = -1.*t1329*t7708;
  t7723 = 0. + t3141 + t7722;
  t7715 = -1.*t1185*t7710;
  t7724 = t3126*t7723;
  t7734 = 0. + t7715 + t7724;
  t7762 = t3126*t7710;
  t7777 = t1185*t7723;
  t7779 = 0. + t7762 + t7777;
  t4971 = t16*t4963;
  t5068 = 0. + t4971;
  t5310 = -0.049*t5255;
  t5352 = -0.004500000000000004*t5327;
  t7431 = t16*t7418;
  t7441 = 0. + t5310 + t5352 + t7431;
  t7755 = t467*t7734;
  t7784 = t4122*t7779;
  t7793 = 0. + t7755 + t7784;
  t7797 = -1.*t4779*t7793;
  t7806 = t4122*t7734;
  t7813 = -1.*t467*t7779;
  t7815 = 0. + t7806 + t7813;
  t7836 = t147*t7815;
  t7838 = 0. + t7797 + t7836;
  t7851 = t16*t7838;
  t7853 = 0. + t7851;
  t7493 = -0.135*t5255;
  t7521 = -0.1305*t16;
  t7522 = 0.049*t5327;
  t7533 = t5327*t7418;
  t7538 = 0. + t7493 + t7521 + t7522 + t7533;
  t7629 = -0.09*t5431;
  t7638 = 0.049*t4779;
  t7642 = t147*t7234;
  t7656 = t4779*t7397;
  t7663 = 0. + t7629 + t7638 + t7642 + t7656;
  t7928 = 0. + t5327;
  t7485 = t5327*t4963;
  t7492 = 0. + t7485;
  t7577 = t4779*t4623;
  t7590 = t147*t4810;
  t7599 = 0. + t7577 + t7590;
  t7893 = t147*t7793;
  t7894 = t4779*t7815;
  t7895 = 0. + t7893 + t7894;
  t7931 = -1.*t16;
  t7943 = 0. + t7931;
  t7881 = t5327*t7838;
  t7882 = 0. + t7881;
  t7899 = -1.*t7663*t7895;
  t7665 = t7599*t7663;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0. + (t5068*t7441 + t7492*t7538 + t7665)*t7853 + t5068*(-1.*t7441*t7853 - 1.*t7538*t7882 + t7899);
  p_output1[22]=0.135*t7895 + (-1.*t5068*t7441 - 1.*t7492*t7538 - 1.*t7599*t7663)*t7928 + t5068*(0. + t7441*t7928 + t7538*t7943);
  p_output1[23]=0.135*t7599 + (t7441*t7853 + t7538*t7882 + t7663*t7895)*t7928 + t7853*(0. - 1.*t7441*t7928 - 1.*t7538*t7943);
  p_output1[24]=-0.049 + (0. + t4963*t7418 + t7665)*t7895 + t7599*(0. - 1.*t7418*t7838 + t7899);
  p_output1[25]=0. + 0.1305*t7599 - 0.135*t7838;
  p_output1[26]=0. - 0.135*t4963 - 0.1305*t7895;
  p_output1[27]=0.;
  p_output1[28]=0. - 1.*t4810*t7234 - 1.*t4623*t7397 + 0.049*t7793 - 0.09*t7815;
  p_output1[29]=0. - 0.09*t4623 + 0.049*t4810 + t7234*t7793 + t7397*t7815;
  p_output1[30]=0.;
  p_output1[31]=0. - 1.*t4490*t6978 - 1.*t3749*t7157 - 0.21*t7734 + 0.049*t7779;
  p_output1[32]=0. + 0.049*t3749 - 0.21*t4490 + t6978*t7734 + t7157*t7779;
  p_output1[33]=0.;
  p_output1[34]=0. - 1.*t3441*t6674 - 1.*t2964*t6955 + 0.0016*t7710 - 0.2707*t7723;
  p_output1[35]=0. - 0.2707*t2964 + 0.0016*t3441 + t6674*t7710 + t6955*t7723;
  p_output1[36]=0.;
  p_output1[37]=0. - 0.7055*t2140 - 1.*t2821*t6346 - 1.*t2140*t6547 - 0.0184*t7708;
  p_output1[38]=0. - 0.0184*t2140 - 0.7055*t2821 + t2140*t6346 + t6547*t7708;
  p_output1[39]=0.;
  p_output1[40]=0.05136484440000011;
  p_output1[41]=0.019994554799999897;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 14, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Jv_VectorNav_to_RightToeBottom_mex.hh"

namespace SymExpression
{

void Jv_VectorNav_to_RightToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
