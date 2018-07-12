/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:24:33 GMT-04:00
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
  double t897;
  double t936;
  double t1266;
  double t899;
  double t1041;
  double t1237;
  double t886;
  double t1288;
  double t1294;
  double t1342;
  double t1500;
  double t1241;
  double t1345;
  double t1430;
  double t812;
  double t1556;
  double t1615;
  double t1666;
  double t2133;
  double t1493;
  double t1790;
  double t1910;
  double t700;
  double t2225;
  double t2287;
  double t2366;
  double t554;
  double t639;
  double t3207;
  double t3219;
  double t3286;
  double t3186;
  double t3466;
  double t3513;
  double t3543;
  double t3580;
  double t3518;
  double t3642;
  double t3654;
  double t3728;
  double t3731;
  double t3733;
  double t2876;
  double t2562;
  double t2702;
  double t2812;
  double t2085;
  double t2392;
  double t2444;
  double t3879;
  double t3919;
  double t3946;
  double t3695;
  double t3767;
  double t3805;
  t897 = Cos(var1[6]);
  t936 = Sin(var1[6]);
  t1266 = Cos(var1[5]);
  t899 = 0.642788*t897;
  t1041 = -0.766044*t936;
  t1237 = t899 + t1041;
  t886 = Sin(var1[5]);
  t1288 = 0.766044*t897;
  t1294 = 0.642788*t936;
  t1342 = t1288 + t1294;
  t1500 = Cos(var1[4]);
  t1241 = t886*t1237;
  t1345 = t1266*t1342;
  t1430 = 0. + t1241 + t1345;
  t812 = Sin(var1[4]);
  t1556 = t1266*t1237;
  t1615 = -1.*t886*t1342;
  t1666 = 0. + t1556 + t1615;
  t2133 = Sin(var1[3]);
  t1493 = -1.*t812*t1430;
  t1790 = t1500*t1666;
  t1910 = 0. + t1493 + t1790;
  t700 = Cos(var1[3]);
  t2225 = t1500*t1430;
  t2287 = t812*t1666;
  t2366 = 0. + t2225 + t2287;
  t554 = Cos(var1[1]);
  t639 = Cos(var1[2]);
  t3207 = -0.766044*t897;
  t3219 = -0.642788*t936;
  t3286 = t3207 + t3219;
  t3186 = -1.*t886*t1237;
  t3466 = t1266*t3286;
  t3513 = 0. + t3186 + t3466;
  t3543 = t886*t3286;
  t3580 = 0. + t1556 + t3543;
  t3518 = t812*t3513;
  t3642 = t1500*t3580;
  t3654 = 0. + t3518 + t3642;
  t3728 = t1500*t3513;
  t3731 = -1.*t812*t3580;
  t3733 = 0. + t3728 + t3731;
  t2876 = Sin(var1[2]);
  t2562 = t2133*t1910;
  t2702 = t700*t2366;
  t2812 = 0. + t2562 + t2702;
  t2085 = t700*t1910;
  t2392 = -1.*t2133*t2366;
  t2444 = 0. + t2085 + t2392;
  t3879 = t700*t3654;
  t3919 = t2133*t3733;
  t3946 = 0. + t3879 + t3919;
  t3695 = -1.*t2133*t3654;
  t3767 = t700*t3733;
  t3805 = 0. + t3695 + t3767;
  p_output1[0]=0. + Sin(var1[1]);
  p_output1[1]=0. + t554*(0. - 1.*t2812*t2876 + t2444*t639);
  p_output1[2]=0. + t554*(0. - 1.*t2876*t3946 + t3805*t639);
  p_output1[3]=0.;
  p_output1[4]=0. + t2444*t2876 + t2812*t639;
  p_output1[5]=0. + t2876*t3805 + t3946*t639;
  p_output1[6]=1.;
  p_output1[7]=0.;
  p_output1[8]=0.;
  p_output1[9]=1.;
  p_output1[10]=0.;
  p_output1[11]=0.;
  p_output1[12]=1.;
  p_output1[13]=0.;
  p_output1[14]=0.;
  p_output1[15]=1.;
  p_output1[16]=0.;
  p_output1[17]=0.;
  p_output1[18]=1.;
  p_output1[19]=0.;
  p_output1[20]=0.;
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
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
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

#include "Jw_VectorNav_to_LeftToeBottom_mex.hh"

namespace SymExpression
{

void Jw_VectorNav_to_LeftToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
