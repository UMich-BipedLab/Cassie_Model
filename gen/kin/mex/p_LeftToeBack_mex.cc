/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:34:07 GMT-04:00
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
  double t1436;
  double t1195;
  double t1437;
  double t1226;
  double t1468;
  double t196;
  double t1361;
  double t1529;
  double t1782;
  double t1832;
  double t1852;
  double t1935;
  double t1957;
  double t2416;
  double t2579;
  double t2590;
  double t2679;
  double t2280;
  double t2289;
  double t2401;
  double t3017;
  double t3490;
  double t3496;
  double t3540;
  double t3558;
  double t3280;
  double t3299;
  double t3386;
  double t3632;
  double t3641;
  double t3729;
  double t3958;
  double t3973;
  double t3979;
  double t4125;
  double t4201;
  double t4236;
  double t4250;
  double t4421;
  double t4467;
  double t4580;
  double t4599;
  double t4608;
  double t4621;
  double t4696;
  double t4743;
  double t4750;
  double t4767;
  double t4918;
  double t4929;
  double t4936;
  double t4946;
  double t4960;
  double t4974;
  double t5051;
  double t5083;
  double t5111;
  double t5122;
  double t5178;
  double t5181;
  double t5206;
  double t5254;
  double t5266;
  double t5278;
  double t5286;
  double t5347;
  double t5365;
  double t5368;
  double t5429;
  double t5434;
  double t5437;
  double t232;
  double t255;
  double t479;
  double t751;
  double t2077;
  double t2168;
  double t5509;
  double t5516;
  double t5522;
  double t5534;
  double t5542;
  double t5550;
  double t2657;
  double t2741;
  double t2868;
  double t3091;
  double t3133;
  double t3148;
  double t5569;
  double t5582;
  double t5586;
  double t3545;
  double t3570;
  double t3589;
  double t3730;
  double t3774;
  double t3855;
  double t4065;
  double t4165;
  double t4189;
  double t5626;
  double t5636;
  double t5638;
  double t5657;
  double t5664;
  double t5685;
  double t4346;
  double t4387;
  double t4419;
  double t4653;
  double t4718;
  double t4740;
  double t5705;
  double t5706;
  double t5713;
  double t5738;
  double t5742;
  double t5743;
  double t4807;
  double t4840;
  double t4890;
  double t5030;
  double t5053;
  double t5059;
  double t5752;
  double t5754;
  double t5755;
  double t5761;
  double t5764;
  double t5765;
  double t5142;
  double t5160;
  double t5174;
  double t5284;
  double t5310;
  double t5327;
  double t5786;
  double t5799;
  double t5800;
  double t5805;
  double t5806;
  double t5814;
  double t5389;
  double t5396;
  double t5419;
  double t5832;
  double t5837;
  double t5842;
  double t5853;
  double t5858;
  double t5861;
  double t5937;
  double t5940;
  double t5964;
  double t6025;
  double t6028;
  double t6048;
  double t6061;
  double t6065;
  double t6071;
  double t6088;
  double t6090;
  double t6110;
  double t6142;
  double t6143;
  double t6148;
  double t6154;
  double t6160;
  double t6164;
  double t6177;
  double t6181;
  double t6186;
  double t6191;
  double t6200;
  double t6202;
  double t6211;
  double t6212;
  double t6213;
  double t6220;
  double t6221;
  double t6222;
  double t6229;
  double t6238;
  double t6254;
  t1436 = Cos(var1[3]);
  t1195 = Cos(var1[5]);
  t1437 = Sin(var1[4]);
  t1226 = Sin(var1[3]);
  t1468 = Sin(var1[5]);
  t196 = Cos(var1[6]);
  t1361 = -1.*t1195*t1226;
  t1529 = t1436*t1437*t1468;
  t1782 = t1361 + t1529;
  t1832 = t1436*t1195*t1437;
  t1852 = t1226*t1468;
  t1935 = t1832 + t1852;
  t1957 = Sin(var1[6]);
  t2416 = Cos(var1[7]);
  t2579 = -1.*t2416;
  t2590 = 1. + t2579;
  t2679 = Sin(var1[7]);
  t2280 = t196*t1782;
  t2289 = t1935*t1957;
  t2401 = t2280 + t2289;
  t3017 = Cos(var1[4]);
  t3490 = Cos(var1[8]);
  t3496 = -1.*t3490;
  t3540 = 1. + t3496;
  t3558 = Sin(var1[8]);
  t3280 = t1436*t3017*t2416;
  t3299 = t2401*t2679;
  t3386 = t3280 + t3299;
  t3632 = t196*t1935;
  t3641 = -1.*t1782*t1957;
  t3729 = t3632 + t3641;
  t3958 = Cos(var1[9]);
  t3973 = -1.*t3958;
  t3979 = 1. + t3973;
  t4125 = Sin(var1[9]);
  t4201 = t3490*t3386;
  t4236 = t3729*t3558;
  t4250 = t4201 + t4236;
  t4421 = t3490*t3729;
  t4467 = -1.*t3386*t3558;
  t4580 = t4421 + t4467;
  t4599 = Cos(var1[10]);
  t4608 = -1.*t4599;
  t4621 = 1. + t4608;
  t4696 = Sin(var1[10]);
  t4743 = -1.*t4125*t4250;
  t4750 = t3958*t4580;
  t4767 = t4743 + t4750;
  t4918 = t3958*t4250;
  t4929 = t4125*t4580;
  t4936 = t4918 + t4929;
  t4946 = Cos(var1[11]);
  t4960 = -1.*t4946;
  t4974 = 1. + t4960;
  t5051 = Sin(var1[11]);
  t5083 = t4696*t4767;
  t5111 = t4599*t4936;
  t5122 = t5083 + t5111;
  t5178 = t4599*t4767;
  t5181 = -1.*t4696*t4936;
  t5206 = t5178 + t5181;
  t5254 = Cos(var1[12]);
  t5266 = -1.*t5254;
  t5278 = 1. + t5266;
  t5286 = Sin(var1[12]);
  t5347 = -1.*t5051*t5122;
  t5365 = t4946*t5206;
  t5368 = t5347 + t5365;
  t5429 = t4946*t5122;
  t5434 = t5051*t5206;
  t5437 = t5429 + t5434;
  t232 = -1.*t196;
  t255 = 1. + t232;
  t479 = 0.135*t255;
  t751 = 0. + t479;
  t2077 = -0.135*t1957;
  t2168 = 0. + t2077;
  t5509 = t1436*t1195;
  t5516 = t1226*t1437*t1468;
  t5522 = t5509 + t5516;
  t5534 = t1195*t1226*t1437;
  t5542 = -1.*t1436*t1468;
  t5550 = t5534 + t5542;
  t2657 = 0.135*t2590;
  t2741 = 0.049*t2679;
  t2868 = 0. + t2657 + t2741;
  t3091 = -0.049*t2590;
  t3133 = 0.135*t2679;
  t3148 = 0. + t3091 + t3133;
  t5569 = t196*t5522;
  t5582 = t5550*t1957;
  t5586 = t5569 + t5582;
  t3545 = -0.049*t3540;
  t3570 = -0.09*t3558;
  t3589 = 0. + t3545 + t3570;
  t3730 = -0.09*t3540;
  t3774 = 0.049*t3558;
  t3855 = 0. + t3730 + t3774;
  t4065 = -0.049*t3979;
  t4165 = -0.21*t4125;
  t4189 = 0. + t4065 + t4165;
  t5626 = t3017*t2416*t1226;
  t5636 = t5586*t2679;
  t5638 = t5626 + t5636;
  t5657 = t196*t5550;
  t5664 = -1.*t5522*t1957;
  t5685 = t5657 + t5664;
  t4346 = -0.21*t3979;
  t4387 = 0.049*t4125;
  t4419 = 0. + t4346 + t4387;
  t4653 = -0.2707*t4621;
  t4718 = 0.0016*t4696;
  t4740 = 0. + t4653 + t4718;
  t5705 = t3490*t5638;
  t5706 = t5685*t3558;
  t5713 = t5705 + t5706;
  t5738 = t3490*t5685;
  t5742 = -1.*t5638*t3558;
  t5743 = t5738 + t5742;
  t4807 = -0.0016*t4621;
  t4840 = -0.2707*t4696;
  t4890 = 0. + t4807 + t4840;
  t5030 = 0.0184*t4974;
  t5053 = -0.7055*t5051;
  t5059 = 0. + t5030 + t5053;
  t5752 = -1.*t4125*t5713;
  t5754 = t3958*t5743;
  t5755 = t5752 + t5754;
  t5761 = t3958*t5713;
  t5764 = t4125*t5743;
  t5765 = t5761 + t5764;
  t5142 = -0.7055*t4974;
  t5160 = -0.0184*t5051;
  t5174 = 0. + t5142 + t5160;
  t5284 = -1.1135*t5278;
  t5310 = 0.0216*t5286;
  t5327 = 0. + t5284 + t5310;
  t5786 = t4696*t5755;
  t5799 = t4599*t5765;
  t5800 = t5786 + t5799;
  t5805 = t4599*t5755;
  t5806 = -1.*t4696*t5765;
  t5814 = t5805 + t5806;
  t5389 = -0.0216*t5278;
  t5396 = -1.1135*t5286;
  t5419 = 0. + t5389 + t5396;
  t5832 = -1.*t5051*t5800;
  t5837 = t4946*t5814;
  t5842 = t5832 + t5837;
  t5853 = t4946*t5800;
  t5858 = t5051*t5814;
  t5861 = t5853 + t5858;
  t5937 = t3017*t196*t1468;
  t5940 = t3017*t1195*t1957;
  t5964 = t5937 + t5940;
  t6025 = -1.*t2416*t1437;
  t6028 = t5964*t2679;
  t6048 = t6025 + t6028;
  t6061 = t3017*t1195*t196;
  t6065 = -1.*t3017*t1468*t1957;
  t6071 = t6061 + t6065;
  t6088 = t3490*t6048;
  t6090 = t6071*t3558;
  t6110 = t6088 + t6090;
  t6142 = t3490*t6071;
  t6143 = -1.*t6048*t3558;
  t6148 = t6142 + t6143;
  t6154 = -1.*t4125*t6110;
  t6160 = t3958*t6148;
  t6164 = t6154 + t6160;
  t6177 = t3958*t6110;
  t6181 = t4125*t6148;
  t6186 = t6177 + t6181;
  t6191 = t4696*t6164;
  t6200 = t4599*t6186;
  t6202 = t6191 + t6200;
  t6211 = t4599*t6164;
  t6212 = -1.*t4696*t6186;
  t6213 = t6211 + t6212;
  t6220 = -1.*t5051*t6202;
  t6221 = t4946*t6213;
  t6222 = t6220 + t6221;
  t6229 = t4946*t6202;
  t6238 = t5051*t6213;
  t6254 = t6229 + t6238;
  p_output1[0]=0. + t1935*t2168 + t2401*t2868 + 0.1305*(t2401*t2416 - 1.*t1436*t2679*t3017) + t1436*t3017*t3148 + t3386*t3589 + t3729*t3855 + t4189*t4250 + t4419*t4580 + t4740*t4767 + t4890*t4936 + t5059*t5122 + t5174*t5206 + t5327*t5368 + t5419*t5437 - 0.027251*(t5286*t5368 + t5254*t5437) - 1.200144*(t5254*t5368 - 1.*t5286*t5437) + t1782*t751 + var1[0];
  p_output1[1]=0. + t1226*t3017*t3148 + t2168*t5550 + t2868*t5586 + 0.1305*(-1.*t1226*t2679*t3017 + t2416*t5586) + t3589*t5638 + t3855*t5685 + t4189*t5713 + t4419*t5743 + t4740*t5755 + t4890*t5765 + t5059*t5800 + t5174*t5814 + t5327*t5842 + t5419*t5861 - 0.027251*(t5286*t5842 + t5254*t5861) - 1.200144*(t5254*t5842 - 1.*t5286*t5861) + t5522*t751 + var1[1];
  p_output1[2]=0. + t1195*t2168*t3017 - 1.*t1437*t3148 + t2868*t5964 + 0.1305*(t1437*t2679 + t2416*t5964) + t3589*t6048 + t3855*t6071 + t4189*t6110 + t4419*t6148 + t4740*t6164 + t4890*t6186 + t5059*t6202 + t5174*t6213 + t5327*t6222 + t5419*t6254 - 0.027251*(t5286*t6222 + t5254*t6254) - 1.200144*(t5254*t6222 - 1.*t5286*t6254) + t1468*t3017*t751 + var1[2];
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

#include "p_LeftToeBack_mex.hh"

namespace SymExpression
{

void p_LeftToeBack_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
