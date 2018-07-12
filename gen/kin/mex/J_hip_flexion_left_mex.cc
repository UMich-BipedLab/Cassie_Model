/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:33:00 GMT-04:00
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
  double t1371;
  double t1577;
  double t1718;
  double t1294;
  double t1752;
  double t379;
  double t1481;
  double t1942;
  double t2036;
  double t2440;
  double t2721;
  double t3108;
  double t3121;
  double t4021;
  double t4069;
  double t4100;
  double t4236;
  double t3816;
  double t3818;
  double t3866;
  double t4348;
  double t4711;
  double t4745;
  double t4757;
  double t4776;
  double t4599;
  double t4604;
  double t4707;
  double t4805;
  double t4815;
  double t4838;
  double t724;
  double t910;
  double t1009;
  double t1066;
  double t3651;
  double t3670;
  double t5009;
  double t5013;
  double t5014;
  double t5035;
  double t5073;
  double t5078;
  double t4215;
  double t4242;
  double t4287;
  double t4351;
  double t4365;
  double t4372;
  double t5111;
  double t5121;
  double t5123;
  double t4770;
  double t4785;
  double t4795;
  double t4854;
  double t4874;
  double t4884;
  double t5184;
  double t5185;
  double t5208;
  double t5226;
  double t5227;
  double t5228;
  double t5333;
  double t5337;
  double t5338;
  double t5379;
  double t5394;
  double t5395;
  double t5400;
  double t5402;
  double t5406;
  double t5468;
  double t5481;
  double t5486;
  double t5520;
  double t5533;
  double t5542;
  double t5557;
  double t5563;
  double t5564;
  double t5657;
  double t5668;
  double t5669;
  double t5690;
  double t5693;
  double t5711;
  double t5727;
  double t5728;
  double t5731;
  double t5782;
  double t5798;
  double t5800;
  double t5807;
  double t5809;
  double t5835;
  double t5839;
  double t5850;
  double t5916;
  double t5919;
  double t5923;
  double t5936;
  double t5948;
  double t5949;
  double t5975;
  double t5979;
  double t6045;
  double t6048;
  double t6049;
  double t6072;
  double t6074;
  double t6078;
  double t6141;
  double t6148;
  double t6217;
  double t6227;
  double t6231;
  double t6242;
  double t6245;
  double t6262;
  double t6271;
  double t6052;
  double t6062;
  double t6063;
  double t6079;
  double t6080;
  double t6081;
  double t6083;
  double t6095;
  double t6098;
  double t6099;
  double t6107;
  double t6111;
  double t5136;
  double t5145;
  double t5147;
  double t6365;
  double t6380;
  double t6390;
  double t6392;
  double t6403;
  double t6446;
  double t6451;
  double t6453;
  double t6457;
  double t6460;
  double t6463;
  double t6505;
  double t6508;
  double t6515;
  double t6521;
  double t6523;
  double t6539;
  double t5261;
  double t5264;
  double t5267;
  double t6579;
  double t6582;
  double t6586;
  double t6590;
  double t6597;
  double t6645;
  double t6646;
  double t6659;
  double t6737;
  double t6742;
  double t6743;
  t1371 = Cos(var1[5]);
  t1577 = Sin(var1[3]);
  t1718 = Sin(var1[4]);
  t1294 = Cos(var1[3]);
  t1752 = Sin(var1[5]);
  t379 = Cos(var1[6]);
  t1481 = -1.*t1294*t1371;
  t1942 = -1.*t1577*t1718*t1752;
  t2036 = t1481 + t1942;
  t2440 = -1.*t1371*t1577*t1718;
  t2721 = t1294*t1752;
  t3108 = t2440 + t2721;
  t3121 = Sin(var1[6]);
  t4021 = Cos(var1[7]);
  t4069 = -1.*t4021;
  t4100 = 1. + t4069;
  t4236 = Sin(var1[7]);
  t3816 = t379*t2036;
  t3818 = t3108*t3121;
  t3866 = t3816 + t3818;
  t4348 = Cos(var1[4]);
  t4711 = Cos(var1[8]);
  t4745 = -1.*t4711;
  t4757 = 1. + t4745;
  t4776 = Sin(var1[8]);
  t4599 = -1.*t4348*t4021*t1577;
  t4604 = t3866*t4236;
  t4707 = t4599 + t4604;
  t4805 = t379*t3108;
  t4815 = -1.*t2036*t3121;
  t4838 = t4805 + t4815;
  t724 = -1.*t379;
  t910 = 1. + t724;
  t1009 = 0.135*t910;
  t1066 = 0. + t1009;
  t3651 = -0.135*t3121;
  t3670 = 0. + t3651;
  t5009 = -1.*t1371*t1577;
  t5013 = t1294*t1718*t1752;
  t5014 = t5009 + t5013;
  t5035 = t1294*t1371*t1718;
  t5073 = t1577*t1752;
  t5078 = t5035 + t5073;
  t4215 = 0.135*t4100;
  t4242 = 0.049*t4236;
  t4287 = 0. + t4215 + t4242;
  t4351 = -0.049*t4100;
  t4365 = 0.135*t4236;
  t4372 = 0. + t4351 + t4365;
  t5111 = t379*t5014;
  t5121 = t5078*t3121;
  t5123 = t5111 + t5121;
  t4770 = -0.049*t4757;
  t4785 = -0.09*t4776;
  t4795 = 0. + t4770 + t4785;
  t4854 = -0.09*t4757;
  t4874 = 0.049*t4776;
  t4884 = 0. + t4854 + t4874;
  t5184 = t1294*t4348*t4021;
  t5185 = t5123*t4236;
  t5208 = t5184 + t5185;
  t5226 = t379*t5078;
  t5227 = -1.*t5014*t3121;
  t5228 = t5226 + t5227;
  t5333 = t1294*t4348*t379*t1752;
  t5337 = t1294*t4348*t1371*t3121;
  t5338 = t5333 + t5337;
  t5379 = -1.*t1294*t4021*t1718;
  t5394 = t5338*t4236;
  t5395 = t5379 + t5394;
  t5400 = t1294*t4348*t1371*t379;
  t5402 = -1.*t1294*t4348*t1752*t3121;
  t5406 = t5400 + t5402;
  t5468 = t4348*t379*t1577*t1752;
  t5481 = t4348*t1371*t1577*t3121;
  t5486 = t5468 + t5481;
  t5520 = -1.*t4021*t1577*t1718;
  t5533 = t5486*t4236;
  t5542 = t5520 + t5533;
  t5557 = t4348*t1371*t379*t1577;
  t5563 = -1.*t4348*t1577*t1752*t3121;
  t5564 = t5557 + t5563;
  t5657 = -1.*t379*t1718*t1752;
  t5668 = -1.*t1371*t1718*t3121;
  t5669 = t5657 + t5668;
  t5690 = -1.*t4348*t4021;
  t5693 = t5669*t4236;
  t5711 = t5690 + t5693;
  t5727 = -1.*t1371*t379*t1718;
  t5728 = t1718*t1752*t3121;
  t5731 = t5727 + t5728;
  t5782 = t1371*t1577;
  t5798 = -1.*t1294*t1718*t1752;
  t5800 = t5782 + t5798;
  t5807 = t5800*t3121;
  t5809 = t5226 + t5807;
  t5835 = t379*t5800;
  t5839 = -1.*t5078*t3121;
  t5850 = t5835 + t5839;
  t5916 = t1371*t1577*t1718;
  t5919 = -1.*t1294*t1752;
  t5923 = t5916 + t5919;
  t5936 = t379*t5923;
  t5948 = t2036*t3121;
  t5949 = t5936 + t5948;
  t5975 = -1.*t5923*t3121;
  t5979 = t3816 + t5975;
  t6045 = t4348*t1371*t379;
  t6048 = -1.*t4348*t1752*t3121;
  t6049 = t6045 + t6048;
  t6072 = -1.*t4348*t379*t1752;
  t6074 = -1.*t4348*t1371*t3121;
  t6078 = t6072 + t6074;
  t6141 = -1.*t379*t5014;
  t6148 = t6141 + t5839;
  t6217 = t1294*t1371;
  t6227 = t1577*t1718*t1752;
  t6231 = t6217 + t6227;
  t6242 = -1.*t6231*t3121;
  t6245 = t5936 + t6242;
  t6262 = -1.*t379*t6231;
  t6271 = t6262 + t5975;
  t6052 = 0.135*t4021*t6049;
  t6062 = t6049*t4287;
  t6063 = t6049*t4236*t4795;
  t6079 = t6078*t4884;
  t6080 = t4711*t6049*t4236;
  t6081 = t6078*t4776;
  t6083 = t6080 + t6081;
  t6095 = -0.049*t6083;
  t6098 = t4711*t6078;
  t6099 = -1.*t6049*t4236*t4776;
  t6107 = t6098 + t6099;
  t6111 = -0.09*t6107;
  t5136 = t4021*t5123;
  t5145 = -1.*t1294*t4348*t4236;
  t5147 = t5136 + t5145;
  t6365 = 0.135*t4021;
  t6380 = -0.049*t4236;
  t6390 = t6365 + t6380;
  t6392 = 0.049*t4021;
  t6403 = t6392 + t4365;
  t6446 = t379*t6231;
  t6451 = t5923*t3121;
  t6453 = t6446 + t6451;
  t6457 = t4021*t6453;
  t6460 = -1.*t4348*t1577*t4236;
  t6463 = t6457 + t6460;
  t6505 = t4348*t379*t1752;
  t6508 = t4348*t1371*t3121;
  t6515 = t6505 + t6508;
  t6521 = t4021*t6515;
  t6523 = t1718*t4236;
  t6539 = t6521 + t6523;
  t5261 = t4711*t5228;
  t5264 = -1.*t5208*t4776;
  t5267 = t5261 + t5264;
  t6579 = 0.049*t4711;
  t6582 = t6579 + t4785;
  t6586 = -0.09*t4711;
  t6590 = -0.049*t4776;
  t6597 = t6586 + t6590;
  t6645 = t4348*t4021*t1577;
  t6646 = t6453*t4236;
  t6659 = t6645 + t6646;
  t6737 = -1.*t4021*t1718;
  t6742 = t6515*t4236;
  t6743 = t6737 + t6742;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1066*t2036 + t3108*t3670 + t3866*t4287 + 0.135*(t3866*t4021 + t1577*t4236*t4348) - 1.*t1577*t4348*t4372 + t4707*t4795 - 0.09*(-1.*t4707*t4776 + t4711*t4838) - 0.049*(t4707*t4711 + t4776*t4838) + t4838*t4884;
  p_output1[10]=t1294*t4348*t4372 + t1066*t5014 + t3670*t5078 + t4287*t5123 + 0.135*t5147 + t4795*t5208 + t4884*t5228 - 0.049*(t4711*t5208 + t4776*t5228) - 0.09*t5267;
  p_output1[11]=0;
  p_output1[12]=t1066*t1294*t1752*t4348 + t1294*t1371*t3670*t4348 - 1.*t1294*t1718*t4372 + t4287*t5338 + 0.135*(t1294*t1718*t4236 + t4021*t5338) + t4795*t5395 + t4884*t5406 - 0.09*(-1.*t4776*t5395 + t4711*t5406) - 0.049*(t4711*t5395 + t4776*t5406);
  p_output1[13]=t1066*t1577*t1752*t4348 + t1371*t1577*t3670*t4348 - 1.*t1577*t1718*t4372 + t4287*t5486 + 0.135*(t1577*t1718*t4236 + t4021*t5486) + t4795*t5542 + t4884*t5564 - 0.09*(-1.*t4776*t5542 + t4711*t5564) - 0.049*(t4711*t5542 + t4776*t5564);
  p_output1[14]=-1.*t1066*t1718*t1752 - 1.*t1371*t1718*t3670 - 1.*t4348*t4372 + t4287*t5669 + 0.135*(t4236*t4348 + t4021*t5669) + t4795*t5711 + t4884*t5731 - 0.09*(-1.*t4776*t5711 + t4711*t5731) - 0.049*(t4711*t5711 + t4776*t5731);
  p_output1[15]=t1066*t5078 + t3670*t5800 + 0.135*t4021*t5809 + t4287*t5809 + t4236*t4795*t5809 + t4884*t5850 - 0.09*(-1.*t4236*t4776*t5809 + t4711*t5850) - 0.049*(t4236*t4711*t5809 + t4776*t5850);
  p_output1[16]=t2036*t3670 + t1066*t5923 + 0.135*t4021*t5949 + t4287*t5949 + t4236*t4795*t5949 + t4884*t5979 - 0.09*(-1.*t4236*t4776*t5949 + t4711*t5979) - 0.049*(t4236*t4711*t5949 + t4776*t5979);
  p_output1[17]=t1066*t1371*t4348 - 1.*t1752*t3670*t4348 + t6052 + t6062 + t6063 + t6079 + t6095 + t6111;
  p_output1[18]=0.135*t3121*t5014 - 0.135*t379*t5078 + 0.135*t4021*t5228 + t4287*t5228 + t4236*t4795*t5228 + t4884*t6148 - 0.09*(-1.*t4236*t4776*t5228 + t4711*t6148) - 0.049*(t4236*t4711*t5228 + t4776*t6148);
  p_output1[19]=-0.135*t379*t5923 + 0.135*t3121*t6231 + 0.135*t4021*t6245 + t4287*t6245 + t4236*t4795*t6245 + t4884*t6271 - 0.09*(-1.*t4236*t4776*t6245 + t4711*t6271) - 0.049*(t4236*t4711*t6245 + t4776*t6271);
  p_output1[20]=0.135*t1752*t3121*t4348 - 0.135*t1371*t379*t4348 + t6052 + t6062 + t6063 + t6079 + t6095 + t6111;
  p_output1[21]=0.135*(-1.*t1294*t4021*t4348 - 1.*t4236*t5123) - 0.049*t4711*t5147 + 0.09*t4776*t5147 + t4795*t5147 + t1294*t4348*t6390 + t5123*t6403;
  p_output1[22]=t1577*t4348*t6390 + t6403*t6453 + 0.135*(t4599 - 1.*t4236*t6453) - 0.049*t4711*t6463 + 0.09*t4776*t6463 + t4795*t6463;
  p_output1[23]=-1.*t1718*t6390 + t6403*t6515 + 0.135*(t1718*t4021 - 1.*t4236*t6515) - 0.049*t4711*t6539 + 0.09*t4776*t6539 + t4795*t6539;
  p_output1[24]=-0.09*(-1.*t4711*t5208 - 1.*t4776*t5228) - 0.049*t5267 + t5228*t6582 + t5208*t6597;
  p_output1[25]=t6245*t6582 + t6597*t6659 - 0.09*(-1.*t4776*t6245 - 1.*t4711*t6659) - 0.049*(t4711*t6245 - 1.*t4776*t6659);
  p_output1[26]=t6049*t6582 + t6597*t6743 - 0.09*(-1.*t4776*t6049 - 1.*t4711*t6743) - 0.049*(t4711*t6049 - 1.*t4776*t6743);
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 20, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_hip_flexion_left_mex.hh"

namespace SymExpression
{

void J_hip_flexion_left_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
