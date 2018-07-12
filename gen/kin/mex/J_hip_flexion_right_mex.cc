/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:33:35 GMT-04:00
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
  double t3295;
  double t4422;
  double t4299;
  double t4378;
  double t5017;
  double t336;
  double t1630;
  double t2521;
  double t2666;
  double t3465;
  double t4419;
  double t5122;
  double t5124;
  double t5302;
  double t5875;
  double t5969;
  double t5987;
  double t273;
  double t6218;
  double t6279;
  double t6439;
  double t6616;
  double t6651;
  double t6733;
  double t6784;
  double t6839;
  double t6898;
  double t6906;
  double t7119;
  double t7123;
  double t7132;
  double t2602;
  double t3039;
  double t3220;
  double t4058;
  double t4176;
  double t5389;
  double t5522;
  double t5578;
  double t5704;
  double t6082;
  double t6086;
  double t6165;
  double t7469;
  double t7494;
  double t7523;
  double t7537;
  double t7540;
  double t7570;
  double t6774;
  double t6795;
  double t6821;
  double t7593;
  double t7614;
  double t7629;
  double t7010;
  double t7049;
  double t7078;
  double t7698;
  double t7713;
  double t7716;
  double t7820;
  double t7832;
  double t7847;
  double t8026;
  double t8043;
  double t8046;
  double t8054;
  double t8071;
  double t8072;
  double t8105;
  double t8123;
  double t8128;
  double t8200;
  double t8206;
  double t8214;
  double t8227;
  double t8228;
  double t8229;
  double t8250;
  double t8256;
  double t8258;
  double t8419;
  double t8420;
  double t8421;
  double t8437;
  double t8440;
  double t8455;
  double t8496;
  double t8497;
  double t8505;
  double t8564;
  double t8570;
  double t8572;
  double t8608;
  double t8623;
  double t8576;
  double t8586;
  double t8594;
  double t8691;
  double t8712;
  double t8714;
  double t8759;
  double t8762;
  double t8772;
  double t8740;
  double t8745;
  double t8814;
  double t8816;
  double t8858;
  double t8804;
  double t8807;
  double t8810;
  double t8961;
  double t8975;
  double t9056;
  double t9058;
  double t9061;
  double t9082;
  double t9090;
  double t9067;
  double t9072;
  double t8811;
  double t8866;
  double t8876;
  double t8879;
  double t8904;
  double t8905;
  double t8923;
  double t8927;
  double t8936;
  double t8937;
  double t8946;
  double t8948;
  double t7751;
  double t7754;
  double t7793;
  double t9153;
  double t9155;
  double t9157;
  double t9163;
  double t9164;
  double t9207;
  double t9210;
  double t9214;
  double t9216;
  double t9218;
  double t9219;
  double t9260;
  double t9267;
  double t9268;
  double t9274;
  double t9278;
  double t9281;
  double t7939;
  double t7945;
  double t7958;
  double t9327;
  double t9336;
  double t9343;
  double t9347;
  double t9358;
  double t9380;
  double t9385;
  double t9386;
  double t9421;
  double t9426;
  double t9433;
  t3295 = Sin(var1[3]);
  t4422 = Cos(var1[3]);
  t4299 = Cos(var1[5]);
  t4378 = Sin(var1[4]);
  t5017 = Sin(var1[5]);
  t336 = Cos(var1[14]);
  t1630 = -1.*t336;
  t2521 = 1. + t1630;
  t2666 = Sin(var1[14]);
  t3465 = Sin(var1[13]);
  t4419 = -1.*t4299*t3295*t4378;
  t5122 = t4422*t5017;
  t5124 = t4419 + t5122;
  t5302 = Cos(var1[13]);
  t5875 = -1.*t4422*t4299;
  t5969 = -1.*t3295*t4378*t5017;
  t5987 = t5875 + t5969;
  t273 = Cos(var1[4]);
  t6218 = t3465*t5124;
  t6279 = t5302*t5987;
  t6439 = t6218 + t6279;
  t6616 = Cos(var1[15]);
  t6651 = -1.*t6616;
  t6733 = 1. + t6651;
  t6784 = Sin(var1[15]);
  t6839 = t5302*t5124;
  t6898 = -1.*t3465*t5987;
  t6906 = t6839 + t6898;
  t7119 = -1.*t336*t273*t3295;
  t7123 = t2666*t6439;
  t7132 = t7119 + t7123;
  t2602 = -0.049*t2521;
  t3039 = -0.135*t2666;
  t3220 = 0. + t2602 + t3039;
  t4058 = 0.135*t3465;
  t4176 = 0. + t4058;
  t5389 = -1.*t5302;
  t5522 = 1. + t5389;
  t5578 = -0.135*t5522;
  t5704 = 0. + t5578;
  t6082 = -0.135*t2521;
  t6086 = 0.049*t2666;
  t6165 = 0. + t6082 + t6086;
  t7469 = t4422*t4299*t4378;
  t7494 = t3295*t5017;
  t7523 = t7469 + t7494;
  t7537 = -1.*t4299*t3295;
  t7540 = t4422*t4378*t5017;
  t7570 = t7537 + t7540;
  t6774 = -0.09*t6733;
  t6795 = 0.049*t6784;
  t6821 = 0. + t6774 + t6795;
  t7593 = t3465*t7523;
  t7614 = t5302*t7570;
  t7629 = t7593 + t7614;
  t7010 = -0.049*t6733;
  t7049 = -0.09*t6784;
  t7078 = 0. + t7010 + t7049;
  t7698 = t5302*t7523;
  t7713 = -1.*t3465*t7570;
  t7716 = t7698 + t7713;
  t7820 = t336*t4422*t273;
  t7832 = t2666*t7629;
  t7847 = t7820 + t7832;
  t8026 = t4422*t273*t4299*t3465;
  t8043 = t5302*t4422*t273*t5017;
  t8046 = t8026 + t8043;
  t8054 = t5302*t4422*t273*t4299;
  t8071 = -1.*t4422*t273*t3465*t5017;
  t8072 = t8054 + t8071;
  t8105 = -1.*t336*t4422*t4378;
  t8123 = t2666*t8046;
  t8128 = t8105 + t8123;
  t8200 = t273*t4299*t3465*t3295;
  t8206 = t5302*t273*t3295*t5017;
  t8214 = t8200 + t8206;
  t8227 = t5302*t273*t4299*t3295;
  t8228 = -1.*t273*t3465*t3295*t5017;
  t8229 = t8227 + t8228;
  t8250 = -1.*t336*t3295*t4378;
  t8256 = t2666*t8214;
  t8258 = t8250 + t8256;
  t8419 = -1.*t4299*t3465*t4378;
  t8420 = -1.*t5302*t4378*t5017;
  t8421 = t8419 + t8420;
  t8437 = -1.*t5302*t4299*t4378;
  t8440 = t3465*t4378*t5017;
  t8455 = t8437 + t8440;
  t8496 = -1.*t336*t273;
  t8497 = t2666*t8421;
  t8505 = t8496 + t8497;
  t8564 = t4299*t3295;
  t8570 = -1.*t4422*t4378*t5017;
  t8572 = t8564 + t8570;
  t8608 = t3465*t8572;
  t8623 = t7698 + t8608;
  t8576 = -1.*t3465*t7523;
  t8586 = t5302*t8572;
  t8594 = t8576 + t8586;
  t8691 = t4299*t3295*t4378;
  t8712 = -1.*t4422*t5017;
  t8714 = t8691 + t8712;
  t8759 = t5302*t8714;
  t8762 = t3465*t5987;
  t8772 = t8759 + t8762;
  t8740 = -1.*t3465*t8714;
  t8745 = t8740 + t6279;
  t8814 = t5302*t273*t4299;
  t8816 = -1.*t273*t3465*t5017;
  t8858 = t8814 + t8816;
  t8804 = -1.*t273*t4299*t3465;
  t8807 = -1.*t5302*t273*t5017;
  t8810 = t8804 + t8807;
  t8961 = -1.*t5302*t7570;
  t8975 = t8576 + t8961;
  t9056 = t4422*t4299;
  t9058 = t3295*t4378*t5017;
  t9061 = t9056 + t9058;
  t9082 = -1.*t3465*t9061;
  t9090 = t8759 + t9082;
  t9067 = -1.*t5302*t9061;
  t9072 = t8740 + t9067;
  t8811 = t6821*t8810;
  t8866 = -0.135*t336*t8858;
  t8876 = t6165*t8858;
  t8879 = t2666*t7078*t8858;
  t8904 = t6784*t8810;
  t8905 = t6616*t2666*t8858;
  t8923 = t8904 + t8905;
  t8927 = -0.049*t8923;
  t8936 = t6616*t8810;
  t8937 = -1.*t2666*t6784*t8858;
  t8946 = t8936 + t8937;
  t8948 = -0.09*t8946;
  t7751 = -1.*t4422*t273*t2666;
  t7754 = t336*t7629;
  t7793 = t7751 + t7754;
  t9153 = -0.135*t336;
  t9155 = -0.049*t2666;
  t9157 = t9153 + t9155;
  t9163 = 0.049*t336;
  t9164 = t9163 + t3039;
  t9207 = t3465*t8714;
  t9210 = t5302*t9061;
  t9214 = t9207 + t9210;
  t9216 = -1.*t273*t2666*t3295;
  t9218 = t336*t9214;
  t9219 = t9216 + t9218;
  t9260 = t273*t4299*t3465;
  t9267 = t5302*t273*t5017;
  t9268 = t9260 + t9267;
  t9274 = t2666*t4378;
  t9278 = t336*t9268;
  t9281 = t9274 + t9278;
  t7939 = t6616*t7716;
  t7945 = -1.*t6784*t7847;
  t7958 = t7939 + t7945;
  t9327 = 0.049*t6616;
  t9336 = t9327 + t7049;
  t9343 = -0.09*t6616;
  t9347 = -0.049*t6784;
  t9358 = t9343 + t9347;
  t9380 = t336*t273*t3295;
  t9385 = t2666*t9214;
  t9386 = t9380 + t9385;
  t9421 = -1.*t336*t4378;
  t9426 = t2666*t9268;
  t9433 = t9421 + t9426;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=-1.*t273*t3220*t3295 + t4176*t5124 + t5704*t5987 + t6165*t6439 - 0.135*(t2666*t273*t3295 + t336*t6439) + t6821*t6906 + t7078*t7132 - 0.049*(t6784*t6906 + t6616*t7132) - 0.09*(t6616*t6906 - 1.*t6784*t7132);
  p_output1[10]=t273*t3220*t4422 + t4176*t7523 + t5704*t7570 + t6165*t7629 + t6821*t7716 - 0.135*t7793 + t7078*t7847 - 0.049*(t6784*t7716 + t6616*t7847) - 0.09*t7958;
  p_output1[11]=0;
  p_output1[12]=t273*t4176*t4299*t4422 - 1.*t3220*t4378*t4422 + t273*t4422*t5017*t5704 + t6165*t8046 - 0.135*(t2666*t4378*t4422 + t336*t8046) + t6821*t8072 + t7078*t8128 - 0.049*(t6784*t8072 + t6616*t8128) - 0.09*(t6616*t8072 - 1.*t6784*t8128);
  p_output1[13]=t273*t3295*t4176*t4299 - 1.*t3220*t3295*t4378 + t273*t3295*t5017*t5704 + t6165*t8214 - 0.135*(t2666*t3295*t4378 + t336*t8214) + t6821*t8229 + t7078*t8258 - 0.049*(t6784*t8229 + t6616*t8258) - 0.09*(t6616*t8229 - 1.*t6784*t8258);
  p_output1[14]=-1.*t273*t3220 - 1.*t4176*t4299*t4378 - 1.*t4378*t5017*t5704 + t6165*t8421 - 0.135*(t2666*t273 + t336*t8421) + t6821*t8455 + t7078*t8505 - 0.049*(t6784*t8455 + t6616*t8505) - 0.09*(t6616*t8455 - 1.*t6784*t8505);
  p_output1[15]=t5704*t7523 + t4176*t8572 + t6821*t8594 - 0.135*t336*t8623 + t6165*t8623 + t2666*t7078*t8623 - 0.049*(t6784*t8594 + t2666*t6616*t8623) - 0.09*(t6616*t8594 - 1.*t2666*t6784*t8623);
  p_output1[16]=t4176*t5987 + t5704*t8714 + t6821*t8745 - 0.135*t336*t8772 + t6165*t8772 + t2666*t7078*t8772 - 0.049*(t6784*t8745 + t2666*t6616*t8772) - 0.09*(t6616*t8745 - 1.*t2666*t6784*t8772);
  p_output1[17]=-1.*t273*t4176*t5017 + t273*t4299*t5704 + t8811 + t8866 + t8876 + t8879 + t8927 + t8948;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
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
  p_output1[39]=0.135*t5302*t7523 - 0.135*t3465*t7570 - 0.135*t336*t7716 + t6165*t7716 + t2666*t7078*t7716 + t6821*t8975 - 0.09*(-1.*t2666*t6784*t7716 + t6616*t8975) - 0.049*(t2666*t6616*t7716 + t6784*t8975);
  p_output1[40]=0.135*t5302*t8714 - 0.135*t3465*t9061 + t6821*t9072 - 0.135*t336*t9090 + t6165*t9090 + t2666*t7078*t9090 - 0.049*(t6784*t9072 + t2666*t6616*t9090) - 0.09*(t6616*t9072 - 1.*t2666*t6784*t9090);
  p_output1[41]=-0.135*t273*t3465*t5017 + 0.135*t273*t4299*t5302 + t8811 + t8866 + t8876 + t8879 + t8927 + t8948;
  p_output1[42]=-0.135*(-1.*t273*t336*t4422 - 1.*t2666*t7629) - 0.049*t6616*t7793 + 0.09*t6784*t7793 + t7078*t7793 + t273*t4422*t9157 + t7629*t9164;
  p_output1[43]=t273*t3295*t9157 + t9164*t9214 - 0.135*(t7119 - 1.*t2666*t9214) - 0.049*t6616*t9219 + 0.09*t6784*t9219 + t7078*t9219;
  p_output1[44]=-1.*t4378*t9157 + t9164*t9268 - 0.135*(t336*t4378 - 1.*t2666*t9268) - 0.049*t6616*t9281 + 0.09*t6784*t9281 + t7078*t9281;
  p_output1[45]=-0.09*(-1.*t6784*t7716 - 1.*t6616*t7847) - 0.049*t7958 + t7716*t9336 + t7847*t9358;
  p_output1[46]=t9090*t9336 + t9358*t9386 - 0.09*(-1.*t6784*t9090 - 1.*t6616*t9386) - 0.049*(t6616*t9090 - 1.*t6784*t9386);
  p_output1[47]=t8858*t9336 + t9358*t9433 - 0.09*(-1.*t6784*t8858 - 1.*t6616*t9433) - 0.049*(t6616*t8858 - 1.*t6784*t9433);
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

#include "J_hip_flexion_right_mex.hh"

namespace SymExpression
{

void J_hip_flexion_right_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
