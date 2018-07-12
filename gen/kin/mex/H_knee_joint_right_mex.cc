/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:33:40 GMT-04:00
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
  double t446;
  double t621;
  double t349;
  double t471;
  double t672;
  double t806;
  double t620;
  double t697;
  double t728;
  double t218;
  double t838;
  double t896;
  double t955;
  double t1176;
  double t777;
  double t1083;
  double t1131;
  double t195;
  double t1254;
  double t1379;
  double t1449;
  double t1501;
  double t1612;
  double t1639;
  double t1710;
  double t1732;
  double t1756;
  double t14;
  double t2165;
  double t2172;
  double t2186;
  double t2189;
  double t2283;
  double t2291;
  double t1879;
  double t2188;
  double t2315;
  double t2345;
  double t2776;
  double t2779;
  double t2804;
  double t2824;
  double t2828;
  double t2834;
  double t3300;
  double t3346;
  double t3435;
  double t3509;
  double t3576;
  double t3595;
  double t3686;
  double t3703;
  double t3822;
  double t1132;
  double t1794;
  double t1800;
  double t1896;
  double t1932;
  double t1963;
  double t2555;
  double t2904;
  double t2917;
  double t2976;
  double t3038;
  double t3139;
  double t3487;
  double t3823;
  double t3838;
  double t4060;
  double t4201;
  double t4225;
  double t4846;
  double t4884;
  double t5501;
  double t5528;
  double t5801;
  double t5810;
  double t4306;
  double t4321;
  double t4343;
  double t4895;
  double t4932;
  double t4989;
  double t5075;
  double t5138;
  double t5154;
  double t5261;
  double t5274;
  double t5275;
  double t5366;
  double t5431;
  double t5480;
  double t5547;
  double t5573;
  double t5606;
  double t5751;
  double t5782;
  double t5785;
  double t5879;
  double t5890;
  double t5929;
  double t6151;
  double t6185;
  double t6195;
  double t4345;
  double t4384;
  double t4434;
  double t4490;
  double t4502;
  double t4508;
  t446 = Cos(var1[5]);
  t621 = Sin(var1[3]);
  t349 = Cos(var1[3]);
  t471 = Sin(var1[4]);
  t672 = Sin(var1[5]);
  t806 = Sin(var1[13]);
  t620 = t349*t446*t471;
  t697 = t621*t672;
  t728 = t620 + t697;
  t218 = Cos(var1[13]);
  t838 = -1.*t446*t621;
  t896 = t349*t471*t672;
  t955 = t838 + t896;
  t1176 = Cos(var1[15]);
  t777 = t218*t728;
  t1083 = -1.*t806*t955;
  t1131 = t777 + t1083;
  t195 = Sin(var1[15]);
  t1254 = Cos(var1[14]);
  t1379 = Cos(var1[4]);
  t1449 = t1254*t349*t1379;
  t1501 = Sin(var1[14]);
  t1612 = t806*t728;
  t1639 = t218*t955;
  t1710 = t1612 + t1639;
  t1732 = t1501*t1710;
  t1756 = t1449 + t1732;
  t14 = Sin(var1[16]);
  t2165 = t446*t621*t471;
  t2172 = -1.*t349*t672;
  t2186 = t2165 + t2172;
  t2189 = t349*t446;
  t2283 = t621*t471*t672;
  t2291 = t2189 + t2283;
  t1879 = Cos(var1[16]);
  t2188 = t218*t2186;
  t2315 = -1.*t806*t2291;
  t2345 = t2188 + t2315;
  t2776 = t1254*t1379*t621;
  t2779 = t806*t2186;
  t2804 = t218*t2291;
  t2824 = t2779 + t2804;
  t2828 = t1501*t2824;
  t2834 = t2776 + t2828;
  t3300 = t218*t1379*t446;
  t3346 = -1.*t1379*t806*t672;
  t3435 = t3300 + t3346;
  t3509 = -1.*t1254*t471;
  t3576 = t1379*t446*t806;
  t3595 = t218*t1379*t672;
  t3686 = t3576 + t3595;
  t3703 = t1501*t3686;
  t3822 = t3509 + t3703;
  t1132 = t195*t1131;
  t1794 = t1176*t1756;
  t1800 = t1132 + t1794;
  t1896 = t1176*t1131;
  t1932 = -1.*t195*t1756;
  t1963 = t1896 + t1932;
  t2555 = t195*t2345;
  t2904 = t1176*t2834;
  t2917 = t2555 + t2904;
  t2976 = t1176*t2345;
  t3038 = -1.*t195*t2834;
  t3139 = t2976 + t3038;
  t3487 = t195*t3435;
  t3823 = t1176*t3822;
  t3838 = t3487 + t3823;
  t4060 = t1176*t3435;
  t4201 = -1.*t195*t3822;
  t4225 = t4060 + t4201;
  t4846 = -1.*t1254;
  t4884 = 1. + t4846;
  t5501 = -1.*t1176;
  t5528 = 1. + t5501;
  t5801 = -1.*t1879;
  t5810 = 1. + t5801;
  t4306 = t1879*t1800;
  t4321 = t14*t1963;
  t4343 = t4306 + t4321;
  t4895 = -0.049*t4884;
  t4932 = -0.135*t1501;
  t4989 = 0. + t4895 + t4932;
  t5075 = 0.135*t806;
  t5138 = 0. + t5075;
  t5154 = -1.*t218;
  t5261 = 1. + t5154;
  t5274 = -0.135*t5261;
  t5275 = 0. + t5274;
  t5366 = -0.135*t4884;
  t5431 = 0.049*t1501;
  t5480 = 0. + t5366 + t5431;
  t5547 = -0.09*t5528;
  t5573 = 0.049*t195;
  t5606 = 0. + t5547 + t5573;
  t5751 = -0.049*t5528;
  t5782 = -0.09*t195;
  t5785 = 0. + t5751 + t5782;
  t5879 = -0.049*t5810;
  t5890 = -0.21*t14;
  t5929 = 0. + t5879 + t5890;
  t6151 = -0.21*t5810;
  t6185 = 0.049*t14;
  t6195 = 0. + t6151 + t6185;
  t4345 = t1879*t2917;
  t4384 = t14*t3139;
  t4434 = t4345 + t4384;
  t4490 = t1879*t3838;
  t4502 = t14*t4225;
  t4508 = t4490 + t4502;
  p_output1[0]=t14*t1800 - 1.*t1879*t1963;
  p_output1[1]=t14*t2917 - 1.*t1879*t3139;
  p_output1[2]=t14*t3838 - 1.*t1879*t4225;
  p_output1[3]=0.;
  p_output1[4]=t4343;
  p_output1[5]=t4434;
  p_output1[6]=t4508;
  p_output1[7]=0.;
  p_output1[8]=-1.*t1254*t1710 + t1379*t1501*t349;
  p_output1[9]=-1.*t1254*t2824 + t1379*t1501*t621;
  p_output1[10]=-1.*t1254*t3686 - 1.*t1501*t471;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.21*(-1.*t14*t1800 + t1879*t1963) - 0.1305*(t1254*t1710 - 1.*t1379*t1501*t349) - 0.049*t4343 + t1379*t349*t4989 + t1710*t5480 + t1131*t5606 + t1756*t5785 + t1800*t5929 + t1963*t6195 + t5138*t728 + t5275*t955 + var1[0];
  p_output1[13]=0. - 0.21*(-1.*t14*t2917 + t1879*t3139) - 0.049*t4434 + t2186*t5138 + t2291*t5275 + t2824*t5480 + t2345*t5606 + t2834*t5785 + t2917*t5929 + t3139*t6195 + t1379*t4989*t621 - 0.1305*(t1254*t2824 - 1.*t1379*t1501*t621) + var1[1];
  p_output1[14]=0. - 0.21*(-1.*t14*t3838 + t1879*t4225) - 0.049*t4508 - 0.1305*(t1254*t3686 + t1501*t471) - 1.*t471*t4989 + t1379*t446*t5138 + t3686*t5480 + t3435*t5606 + t3822*t5785 + t3838*t5929 + t4225*t6195 + t1379*t5275*t672 + var1[2];
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
    ( !(mrows == 20 && ncols == 1) && 
      !(mrows == 1 && ncols == 20))) 
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

#include "H_knee_joint_right_mex.hh"

namespace SymExpression
{

void H_knee_joint_right_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
