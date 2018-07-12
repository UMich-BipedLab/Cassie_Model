/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:33:07 GMT-04:00
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
  double t3760;
  double t3024;
  double t4206;
  double t3309;
  double t4259;
  double t371;
  double t3377;
  double t4262;
  double t4420;
  double t4936;
  double t4973;
  double t5048;
  double t5063;
  double t5423;
  double t5435;
  double t5490;
  double t5496;
  double t5317;
  double t5393;
  double t5419;
  double t5565;
  double t5660;
  double t5673;
  double t5688;
  double t5706;
  double t5618;
  double t5620;
  double t5649;
  double t5739;
  double t5748;
  double t5754;
  double t5800;
  double t5804;
  double t5823;
  double t5873;
  double t5910;
  double t5911;
  double t5915;
  double t5944;
  double t5950;
  double t5997;
  double t6005;
  double t6010;
  double t6019;
  double t6023;
  double t6060;
  double t6101;
  double t6123;
  double t6161;
  double t6166;
  double t6169;
  double t545;
  double t2089;
  double t2606;
  double t2774;
  double t5064;
  double t5276;
  double t6268;
  double t6272;
  double t6279;
  double t6292;
  double t6296;
  double t6302;
  double t5491;
  double t5500;
  double t5519;
  double t5572;
  double t5581;
  double t5584;
  double t6308;
  double t6311;
  double t6318;
  double t5701;
  double t5715;
  double t5718;
  double t5756;
  double t5763;
  double t5775;
  double t5838;
  double t5881;
  double t5905;
  double t6411;
  double t6418;
  double t6422;
  double t6438;
  double t6443;
  double t6444;
  double t5924;
  double t5937;
  double t5938;
  double t6020;
  double t6039;
  double t6044;
  double t6457;
  double t6458;
  double t6489;
  double t6496;
  double t6505;
  double t6514;
  double t6143;
  double t6151;
  double t6152;
  double t6529;
  double t6547;
  double t6569;
  double t6576;
  double t6577;
  double t6581;
  double t6645;
  double t6650;
  double t6651;
  double t6718;
  double t6724;
  double t6726;
  double t6750;
  double t6755;
  double t6772;
  double t6776;
  double t6777;
  double t6784;
  double t6788;
  double t6790;
  double t6791;
  double t6821;
  double t6824;
  double t6825;
  double t6837;
  double t6839;
  double t6844;
  t3760 = Cos(var1[3]);
  t3024 = Cos(var1[5]);
  t4206 = Sin(var1[4]);
  t3309 = Sin(var1[3]);
  t4259 = Sin(var1[5]);
  t371 = Cos(var1[6]);
  t3377 = -1.*t3024*t3309;
  t4262 = t3760*t4206*t4259;
  t4420 = t3377 + t4262;
  t4936 = t3760*t3024*t4206;
  t4973 = t3309*t4259;
  t5048 = t4936 + t4973;
  t5063 = Sin(var1[6]);
  t5423 = Cos(var1[7]);
  t5435 = -1.*t5423;
  t5490 = 1. + t5435;
  t5496 = Sin(var1[7]);
  t5317 = t371*t4420;
  t5393 = t5048*t5063;
  t5419 = t5317 + t5393;
  t5565 = Cos(var1[4]);
  t5660 = Cos(var1[8]);
  t5673 = -1.*t5660;
  t5688 = 1. + t5673;
  t5706 = Sin(var1[8]);
  t5618 = t3760*t5565*t5423;
  t5620 = t5419*t5496;
  t5649 = t5618 + t5620;
  t5739 = t371*t5048;
  t5748 = -1.*t4420*t5063;
  t5754 = t5739 + t5748;
  t5800 = Cos(var1[9]);
  t5804 = -1.*t5800;
  t5823 = 1. + t5804;
  t5873 = Sin(var1[9]);
  t5910 = t5660*t5649;
  t5911 = t5754*t5706;
  t5915 = t5910 + t5911;
  t5944 = t5660*t5754;
  t5950 = -1.*t5649*t5706;
  t5997 = t5944 + t5950;
  t6005 = Cos(var1[10]);
  t6010 = -1.*t6005;
  t6019 = 1. + t6010;
  t6023 = Sin(var1[10]);
  t6060 = -1.*t5873*t5915;
  t6101 = t5800*t5997;
  t6123 = t6060 + t6101;
  t6161 = t5800*t5915;
  t6166 = t5873*t5997;
  t6169 = t6161 + t6166;
  t545 = -1.*t371;
  t2089 = 1. + t545;
  t2606 = 0.135*t2089;
  t2774 = 0. + t2606;
  t5064 = -0.135*t5063;
  t5276 = 0. + t5064;
  t6268 = t3760*t3024;
  t6272 = t3309*t4206*t4259;
  t6279 = t6268 + t6272;
  t6292 = t3024*t3309*t4206;
  t6296 = -1.*t3760*t4259;
  t6302 = t6292 + t6296;
  t5491 = 0.135*t5490;
  t5500 = 0.049*t5496;
  t5519 = 0. + t5491 + t5500;
  t5572 = -0.049*t5490;
  t5581 = 0.135*t5496;
  t5584 = 0. + t5572 + t5581;
  t6308 = t371*t6279;
  t6311 = t6302*t5063;
  t6318 = t6308 + t6311;
  t5701 = -0.049*t5688;
  t5715 = -0.09*t5706;
  t5718 = 0. + t5701 + t5715;
  t5756 = -0.09*t5688;
  t5763 = 0.049*t5706;
  t5775 = 0. + t5756 + t5763;
  t5838 = -0.049*t5823;
  t5881 = -0.21*t5873;
  t5905 = 0. + t5838 + t5881;
  t6411 = t5565*t5423*t3309;
  t6418 = t6318*t5496;
  t6422 = t6411 + t6418;
  t6438 = t371*t6302;
  t6443 = -1.*t6279*t5063;
  t6444 = t6438 + t6443;
  t5924 = -0.21*t5823;
  t5937 = 0.049*t5873;
  t5938 = 0. + t5924 + t5937;
  t6020 = -0.2707*t6019;
  t6039 = 0.0016*t6023;
  t6044 = 0. + t6020 + t6039;
  t6457 = t5660*t6422;
  t6458 = t6444*t5706;
  t6489 = t6457 + t6458;
  t6496 = t5660*t6444;
  t6505 = -1.*t6422*t5706;
  t6514 = t6496 + t6505;
  t6143 = -0.0016*t6019;
  t6151 = -0.2707*t6023;
  t6152 = 0. + t6143 + t6151;
  t6529 = -1.*t5873*t6489;
  t6547 = t5800*t6514;
  t6569 = t6529 + t6547;
  t6576 = t5800*t6489;
  t6577 = t5873*t6514;
  t6581 = t6576 + t6577;
  t6645 = t5565*t371*t4259;
  t6650 = t5565*t3024*t5063;
  t6651 = t6645 + t6650;
  t6718 = -1.*t5423*t4206;
  t6724 = t6651*t5496;
  t6726 = t6718 + t6724;
  t6750 = t5565*t3024*t371;
  t6755 = -1.*t5565*t4259*t5063;
  t6772 = t6750 + t6755;
  t6776 = t5660*t6726;
  t6777 = t6772*t5706;
  t6784 = t6776 + t6777;
  t6788 = t5660*t6772;
  t6790 = -1.*t6726*t5706;
  t6791 = t6788 + t6790;
  t6821 = -1.*t5873*t6784;
  t6824 = t5800*t6791;
  t6825 = t6821 + t6824;
  t6837 = t5800*t6784;
  t6839 = t5873*t6791;
  t6844 = t6837 + t6839;
  p_output1[0]=0. + t2774*t4420 + t5048*t5276 + t5419*t5519 + 0.1305*(t5419*t5423 - 1.*t3760*t5496*t5565) + t3760*t5565*t5584 + t5649*t5718 + t5754*t5775 + t5905*t5915 + t5938*t5997 + t6044*t6123 + t6152*t6169 - 0.0016*(t6023*t6123 + t6005*t6169) - 0.2707*(t6005*t6123 - 1.*t6023*t6169) + var1[0];
  p_output1[1]=0. + t3309*t5565*t5584 + t2774*t6279 + t5276*t6302 + t5519*t6318 + 0.1305*(-1.*t3309*t5496*t5565 + t5423*t6318) + t5718*t6422 + t5775*t6444 + t5905*t6489 + t5938*t6514 + t6044*t6569 + t6152*t6581 - 0.0016*(t6023*t6569 + t6005*t6581) - 0.2707*(t6005*t6569 - 1.*t6023*t6581) + var1[1];
  p_output1[2]=0. + t2774*t4259*t5565 + t3024*t5276*t5565 - 1.*t4206*t5584 + t5519*t6651 + 0.1305*(t4206*t5496 + t5423*t6651) + t5718*t6726 + t5775*t6772 + t5905*t6784 + t5938*t6791 + t6044*t6825 + t6152*t6844 - 0.0016*(t6023*t6825 + t6005*t6844) - 0.2707*(t6005*t6825 - 1.*t6023*t6844) + var1[2];
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

#include "p_knee_to_shin_left_mex.hh"

namespace SymExpression
{

void p_knee_to_shin_left_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
