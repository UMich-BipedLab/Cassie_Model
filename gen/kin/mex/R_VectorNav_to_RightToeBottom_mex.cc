/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:36:00 GMT-05:00
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
  double t1229;
  double t2548;
  double t2793;
  double t1915;
  double t2813;
  double t1865;
  double t3320;
  double t3330;
  double t3406;
  double t2672;
  double t2831;
  double t3017;
  double t3515;
  double t1852;
  double t3961;
  double t4047;
  double t4074;
  double t3102;
  double t3546;
  double t3584;
  double t4191;
  double t1582;
  double t4343;
  double t4364;
  double t4383;
  double t3734;
  double t4196;
  double t4246;
  double t4506;
  double t664;
  double t432;
  double t1415;
  double t5484;
  double t5532;
  double t5535;
  double t5205;
  double t5333;
  double t5347;
  double t5627;
  double t5632;
  double t5649;
  double t5480;
  double t5539;
  double t5543;
  double t5705;
  double t5711;
  double t5731;
  double t5617;
  double t5656;
  double t5663;
  double t5755;
  double t5760;
  double t5782;
  double t5689;
  double t5734;
  double t5736;
  double t5865;
  double t5885;
  double t5893;
  double t5828;
  double t5839;
  double t5845;
  double t5939;
  double t5954;
  double t5959;
  double t5846;
  double t5920;
  double t5922;
  double t5970;
  double t5975;
  double t5978;
  double t5933;
  double t5960;
  double t5962;
  double t5990;
  double t5997;
  double t5998;
  double t5964;
  double t5980;
  double t5984;
  double t4316;
  double t4557;
  double t4578;
  double t4770;
  double t4968;
  double t5022;
  double t5741;
  double t5797;
  double t5799;
  double t5810;
  double t5818;
  double t5821;
  double t5987;
  double t6005;
  double t6006;
  double t6009;
  double t6013;
  double t6015;
  t1229 = Cos(var1[8]);
  t2548 = Cos(var1[10]);
  t2793 = Sin(var1[9]);
  t1915 = Cos(var1[9]);
  t2813 = Sin(var1[10]);
  t1865 = Cos(var1[11]);
  t3320 = -1.*t1229*t2548*t2793;
  t3330 = -1.*t1229*t1915*t2813;
  t3406 = t3320 + t3330;
  t2672 = t1229*t1915*t2548;
  t2831 = -1.*t1229*t2793*t2813;
  t3017 = t2672 + t2831;
  t3515 = Sin(var1[11]);
  t1852 = Cos(var1[12]);
  t3961 = t1865*t3406;
  t4047 = -1.*t3017*t3515;
  t4074 = t3961 + t4047;
  t3102 = t1865*t3017;
  t3546 = t3406*t3515;
  t3584 = t3102 + t3546;
  t4191 = Sin(var1[12]);
  t1582 = Cos(var1[13]);
  t4343 = t1852*t4074;
  t4364 = -1.*t3584*t4191;
  t4383 = t4343 + t4364;
  t3734 = t1852*t3584;
  t4196 = t4074*t4191;
  t4246 = t3734 + t4196;
  t4506 = Sin(var1[13]);
  t664 = Cos(var1[7]);
  t432 = Sin(var1[8]);
  t1415 = Sin(var1[7]);
  t5484 = -1.*t1915*t1415;
  t5532 = -1.*t664*t432*t2793;
  t5535 = t5484 + t5532;
  t5205 = t664*t1915*t432;
  t5333 = -1.*t1415*t2793;
  t5347 = t5205 + t5333;
  t5627 = t2548*t5535;
  t5632 = -1.*t5347*t2813;
  t5649 = t5627 + t5632;
  t5480 = t2548*t5347;
  t5539 = t5535*t2813;
  t5543 = t5480 + t5539;
  t5705 = t1865*t5649;
  t5711 = -1.*t5543*t3515;
  t5731 = t5705 + t5711;
  t5617 = t1865*t5543;
  t5656 = t5649*t3515;
  t5663 = t5617 + t5656;
  t5755 = t1852*t5731;
  t5760 = -1.*t5663*t4191;
  t5782 = t5755 + t5760;
  t5689 = t1852*t5663;
  t5734 = t5731*t4191;
  t5736 = t5689 + t5734;
  t5865 = t664*t1915;
  t5885 = -1.*t1415*t432*t2793;
  t5893 = t5865 + t5885;
  t5828 = t1915*t1415*t432;
  t5839 = t664*t2793;
  t5845 = t5828 + t5839;
  t5939 = t2548*t5893;
  t5954 = -1.*t5845*t2813;
  t5959 = t5939 + t5954;
  t5846 = t2548*t5845;
  t5920 = t5893*t2813;
  t5922 = t5846 + t5920;
  t5970 = t1865*t5959;
  t5975 = -1.*t5922*t3515;
  t5978 = t5970 + t5975;
  t5933 = t1865*t5922;
  t5960 = t5959*t3515;
  t5962 = t5933 + t5960;
  t5990 = t1852*t5978;
  t5997 = -1.*t5962*t4191;
  t5998 = t5990 + t5997;
  t5964 = t1852*t5962;
  t5980 = t5978*t4191;
  t5984 = t5964 + t5980;
  t4316 = t1582*t4246;
  t4557 = t4383*t4506;
  t4578 = t4316 + t4557;
  t4770 = t1582*t4383;
  t4968 = -1.*t4246*t4506;
  t5022 = t4770 + t4968;
  t5741 = t1582*t5736;
  t5797 = t5782*t4506;
  t5799 = t5741 + t5797;
  t5810 = t1582*t5782;
  t5818 = -1.*t5736*t4506;
  t5821 = t5810 + t5818;
  t5987 = t1582*t5984;
  t6005 = t5998*t4506;
  t6006 = t5987 + t6005;
  t6009 = t1582*t5998;
  t6013 = -1.*t5984*t4506;
  t6015 = t6009 + t6013;
  p_output1[0]=0. + t432;
  p_output1[1]=0. + t1229*t664;
  p_output1[2]=0. + t1229*t1415;
  p_output1[3]=0. + 0.642788*t4578 + 0.766044*t5022;
  p_output1[4]=0. - 0.642788*t5799 - 0.766044*t5821;
  p_output1[5]=0. - 0.642788*t6006 - 0.766044*t6015;
  p_output1[6]=0. - 0.766044*t4578 + 0.642788*t5022;
  p_output1[7]=0. + 0.766044*t5799 - 0.642788*t5821;
  p_output1[8]=0. + 0.766044*t6006 - 0.642788*t6015;
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
