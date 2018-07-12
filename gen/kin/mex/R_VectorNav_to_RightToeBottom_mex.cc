/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:36:45 GMT-04:00
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
  double t664;
  double t1688;
  double t1751;
  double t1686;
  double t1955;
  double t1631;
  double t2275;
  double t2382;
  double t2772;
  double t1713;
  double t2156;
  double t2207;
  double t2873;
  double t1606;
  double t3113;
  double t3158;
  double t3242;
  double t2233;
  double t2992;
  double t3039;
  double t3265;
  double t1528;
  double t3328;
  double t3484;
  double t3496;
  double t3060;
  double t3301;
  double t3307;
  double t3540;
  double t571;
  double t361;
  double t951;
  double t4665;
  double t4666;
  double t4670;
  double t4577;
  double t4580;
  double t4583;
  double t4741;
  double t4778;
  double t4802;
  double t4641;
  double t4710;
  double t4730;
  double t4958;
  double t4967;
  double t4984;
  double t4735;
  double t4860;
  double t4880;
  double t5050;
  double t5054;
  double t5065;
  double t4912;
  double t5000;
  double t5038;
  double t5345;
  double t5369;
  double t5370;
  double t5220;
  double t5272;
  double t5320;
  double t5476;
  double t5477;
  double t5492;
  double t5339;
  double t5419;
  double t5447;
  double t5533;
  double t5541;
  double t5560;
  double t5457;
  double t5494;
  double t5500;
  double t5628;
  double t5629;
  double t5630;
  double t5508;
  double t5568;
  double t5582;
  double t3320;
  double t3697;
  double t3823;
  double t3979;
  double t4122;
  double t4406;
  double t5044;
  double t5088;
  double t5111;
  double t5139;
  double t5152;
  double t5188;
  double t5617;
  double t5639;
  double t5640;
  double t5652;
  double t5664;
  double t5667;
  t664 = Cos(var1[8]);
  t1688 = Cos(var1[10]);
  t1751 = Sin(var1[9]);
  t1686 = Cos(var1[9]);
  t1955 = Sin(var1[10]);
  t1631 = Cos(var1[11]);
  t2275 = -1.*t664*t1688*t1751;
  t2382 = -1.*t664*t1686*t1955;
  t2772 = t2275 + t2382;
  t1713 = t664*t1686*t1688;
  t2156 = -1.*t664*t1751*t1955;
  t2207 = t1713 + t2156;
  t2873 = Sin(var1[11]);
  t1606 = Cos(var1[12]);
  t3113 = t1631*t2772;
  t3158 = -1.*t2207*t2873;
  t3242 = t3113 + t3158;
  t2233 = t1631*t2207;
  t2992 = t2772*t2873;
  t3039 = t2233 + t2992;
  t3265 = Sin(var1[12]);
  t1528 = Cos(var1[13]);
  t3328 = t1606*t3242;
  t3484 = -1.*t3039*t3265;
  t3496 = t3328 + t3484;
  t3060 = t1606*t3039;
  t3301 = t3242*t3265;
  t3307 = t3060 + t3301;
  t3540 = Sin(var1[13]);
  t571 = Cos(var1[7]);
  t361 = Sin(var1[8]);
  t951 = Sin(var1[7]);
  t4665 = -1.*t1686*t951;
  t4666 = -1.*t571*t361*t1751;
  t4670 = t4665 + t4666;
  t4577 = t571*t1686*t361;
  t4580 = -1.*t951*t1751;
  t4583 = t4577 + t4580;
  t4741 = t1688*t4670;
  t4778 = -1.*t4583*t1955;
  t4802 = t4741 + t4778;
  t4641 = t1688*t4583;
  t4710 = t4670*t1955;
  t4730 = t4641 + t4710;
  t4958 = t1631*t4802;
  t4967 = -1.*t4730*t2873;
  t4984 = t4958 + t4967;
  t4735 = t1631*t4730;
  t4860 = t4802*t2873;
  t4880 = t4735 + t4860;
  t5050 = t1606*t4984;
  t5054 = -1.*t4880*t3265;
  t5065 = t5050 + t5054;
  t4912 = t1606*t4880;
  t5000 = t4984*t3265;
  t5038 = t4912 + t5000;
  t5345 = t571*t1686;
  t5369 = -1.*t951*t361*t1751;
  t5370 = t5345 + t5369;
  t5220 = t1686*t951*t361;
  t5272 = t571*t1751;
  t5320 = t5220 + t5272;
  t5476 = t1688*t5370;
  t5477 = -1.*t5320*t1955;
  t5492 = t5476 + t5477;
  t5339 = t1688*t5320;
  t5419 = t5370*t1955;
  t5447 = t5339 + t5419;
  t5533 = t1631*t5492;
  t5541 = -1.*t5447*t2873;
  t5560 = t5533 + t5541;
  t5457 = t1631*t5447;
  t5494 = t5492*t2873;
  t5500 = t5457 + t5494;
  t5628 = t1606*t5560;
  t5629 = -1.*t5500*t3265;
  t5630 = t5628 + t5629;
  t5508 = t1606*t5500;
  t5568 = t5560*t3265;
  t5582 = t5508 + t5568;
  t3320 = t1528*t3307;
  t3697 = t3496*t3540;
  t3823 = t3320 + t3697;
  t3979 = t1528*t3496;
  t4122 = -1.*t3307*t3540;
  t4406 = t3979 + t4122;
  t5044 = t1528*t5038;
  t5088 = t5065*t3540;
  t5111 = t5044 + t5088;
  t5139 = t1528*t5065;
  t5152 = -1.*t5038*t3540;
  t5188 = t5139 + t5152;
  t5617 = t1528*t5582;
  t5639 = t5630*t3540;
  t5640 = t5617 + t5639;
  t5652 = t1528*t5630;
  t5664 = -1.*t5582*t3540;
  t5667 = t5652 + t5664;
  p_output1[0]=0. + t361;
  p_output1[1]=0. - 1.*t571*t664;
  p_output1[2]=0. - 1.*t664*t951;
  p_output1[3]=0. + 0.642788*t3823 + 0.766044*t4406;
  p_output1[4]=0. + 0.642788*t5111 + 0.766044*t5188;
  p_output1[5]=0. + 0.642788*t5640 + 0.766044*t5667;
  p_output1[6]=0. - 0.766044*t3823 + 0.642788*t4406;
  p_output1[7]=0. - 0.766044*t5111 + 0.642788*t5188;
  p_output1[8]=0. - 0.766044*t5640 + 0.642788*t5667;
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
