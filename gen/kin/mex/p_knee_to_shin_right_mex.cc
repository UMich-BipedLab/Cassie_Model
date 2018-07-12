/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:33:43 GMT-04:00
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
  double t1951;
  double t7069;
  double t7193;
  double t7145;
  double t7396;
  double t2028;
  double t2361;
  double t2539;
  double t6470;
  double t6778;
  double t7188;
  double t7458;
  double t7464;
  double t7482;
  double t7558;
  double t7573;
  double t7603;
  double t1990;
  double t7622;
  double t7623;
  double t7624;
  double t7650;
  double t7662;
  double t7666;
  double t7672;
  double t7718;
  double t7727;
  double t7732;
  double t7855;
  double t7858;
  double t7900;
  double t7904;
  double t7905;
  double t7952;
  double t7982;
  double t7993;
  double t7999;
  double t8000;
  double t8091;
  double t8116;
  double t8123;
  double t8177;
  double t8181;
  double t8182;
  double t8201;
  double t8247;
  double t8270;
  double t8283;
  double t8433;
  double t8444;
  double t8450;
  double t5779;
  double t6533;
  double t6596;
  double t6829;
  double t6855;
  double t7517;
  double t7534;
  double t7549;
  double t7552;
  double t7611;
  double t7612;
  double t7616;
  double t8610;
  double t8613;
  double t8626;
  double t8676;
  double t8683;
  double t8685;
  double t7671;
  double t7676;
  double t7680;
  double t8703;
  double t8708;
  double t8722;
  double t7837;
  double t7842;
  double t7844;
  double t7973;
  double t7991;
  double t7992;
  double t8730;
  double t8739;
  double t8742;
  double t8785;
  double t8790;
  double t8794;
  double t8033;
  double t8037;
  double t8078;
  double t8200;
  double t8206;
  double t8241;
  double t8814;
  double t8824;
  double t8909;
  double t8912;
  double t8913;
  double t8926;
  double t8339;
  double t8367;
  double t8417;
  double t8947;
  double t8958;
  double t8965;
  double t8982;
  double t8992;
  double t8993;
  double t9146;
  double t9148;
  double t9153;
  double t9161;
  double t9165;
  double t9168;
  double t9192;
  double t9193;
  double t9201;
  double t9219;
  double t9229;
  double t9232;
  double t9240;
  double t9241;
  double t9249;
  double t9269;
  double t9289;
  double t9296;
  double t9306;
  double t9322;
  double t9327;
  t1951 = Cos(var1[3]);
  t7069 = Cos(var1[5]);
  t7193 = Sin(var1[3]);
  t7145 = Sin(var1[4]);
  t7396 = Sin(var1[5]);
  t2028 = Cos(var1[14]);
  t2361 = -1.*t2028;
  t2539 = 1. + t2361;
  t6470 = Sin(var1[14]);
  t6778 = Sin(var1[13]);
  t7188 = t1951*t7069*t7145;
  t7458 = t7193*t7396;
  t7464 = t7188 + t7458;
  t7482 = Cos(var1[13]);
  t7558 = -1.*t7069*t7193;
  t7573 = t1951*t7145*t7396;
  t7603 = t7558 + t7573;
  t1990 = Cos(var1[4]);
  t7622 = t6778*t7464;
  t7623 = t7482*t7603;
  t7624 = t7622 + t7623;
  t7650 = Cos(var1[15]);
  t7662 = -1.*t7650;
  t7666 = 1. + t7662;
  t7672 = Sin(var1[15]);
  t7718 = t7482*t7464;
  t7727 = -1.*t6778*t7603;
  t7732 = t7718 + t7727;
  t7855 = t2028*t1951*t1990;
  t7858 = t6470*t7624;
  t7900 = t7855 + t7858;
  t7904 = Cos(var1[16]);
  t7905 = -1.*t7904;
  t7952 = 1. + t7905;
  t7982 = Sin(var1[16]);
  t7993 = t7672*t7732;
  t7999 = t7650*t7900;
  t8000 = t7993 + t7999;
  t8091 = t7650*t7732;
  t8116 = -1.*t7672*t7900;
  t8123 = t8091 + t8116;
  t8177 = Cos(var1[17]);
  t8181 = -1.*t8177;
  t8182 = 1. + t8181;
  t8201 = Sin(var1[17]);
  t8247 = -1.*t7982*t8000;
  t8270 = t7904*t8123;
  t8283 = t8247 + t8270;
  t8433 = t7904*t8000;
  t8444 = t7982*t8123;
  t8450 = t8433 + t8444;
  t5779 = -0.049*t2539;
  t6533 = -0.135*t6470;
  t6596 = 0. + t5779 + t6533;
  t6829 = 0.135*t6778;
  t6855 = 0. + t6829;
  t7517 = -1.*t7482;
  t7534 = 1. + t7517;
  t7549 = -0.135*t7534;
  t7552 = 0. + t7549;
  t7611 = -0.135*t2539;
  t7612 = 0.049*t6470;
  t7616 = 0. + t7611 + t7612;
  t8610 = t7069*t7193*t7145;
  t8613 = -1.*t1951*t7396;
  t8626 = t8610 + t8613;
  t8676 = t1951*t7069;
  t8683 = t7193*t7145*t7396;
  t8685 = t8676 + t8683;
  t7671 = -0.09*t7666;
  t7676 = 0.049*t7672;
  t7680 = 0. + t7671 + t7676;
  t8703 = t6778*t8626;
  t8708 = t7482*t8685;
  t8722 = t8703 + t8708;
  t7837 = -0.049*t7666;
  t7842 = -0.09*t7672;
  t7844 = 0. + t7837 + t7842;
  t7973 = -0.049*t7952;
  t7991 = -0.21*t7982;
  t7992 = 0. + t7973 + t7991;
  t8730 = t7482*t8626;
  t8739 = -1.*t6778*t8685;
  t8742 = t8730 + t8739;
  t8785 = t2028*t1990*t7193;
  t8790 = t6470*t8722;
  t8794 = t8785 + t8790;
  t8033 = -0.21*t7952;
  t8037 = 0.049*t7982;
  t8078 = 0. + t8033 + t8037;
  t8200 = -0.2707*t8182;
  t8206 = 0.0016*t8201;
  t8241 = 0. + t8200 + t8206;
  t8814 = t7672*t8742;
  t8824 = t7650*t8794;
  t8909 = t8814 + t8824;
  t8912 = t7650*t8742;
  t8913 = -1.*t7672*t8794;
  t8926 = t8912 + t8913;
  t8339 = -0.0016*t8182;
  t8367 = -0.2707*t8201;
  t8417 = 0. + t8339 + t8367;
  t8947 = -1.*t7982*t8909;
  t8958 = t7904*t8926;
  t8965 = t8947 + t8958;
  t8982 = t7904*t8909;
  t8992 = t7982*t8926;
  t8993 = t8982 + t8992;
  t9146 = t1990*t7069*t6778;
  t9148 = t7482*t1990*t7396;
  t9153 = t9146 + t9148;
  t9161 = t7482*t1990*t7069;
  t9165 = -1.*t1990*t6778*t7396;
  t9168 = t9161 + t9165;
  t9192 = -1.*t2028*t7145;
  t9193 = t6470*t9153;
  t9201 = t9192 + t9193;
  t9219 = t7672*t9168;
  t9229 = t7650*t9201;
  t9232 = t9219 + t9229;
  t9240 = t7650*t9168;
  t9241 = -1.*t7672*t9201;
  t9249 = t9240 + t9241;
  t9269 = -1.*t7982*t9232;
  t9289 = t7904*t9249;
  t9296 = t9269 + t9289;
  t9306 = t7904*t9232;
  t9322 = t7982*t9249;
  t9327 = t9306 + t9322;
  p_output1[0]=0. + t1951*t1990*t6596 + t6855*t7464 + t7552*t7603 + t7616*t7624 - 0.1305*(-1.*t1951*t1990*t6470 + t2028*t7624) + t7680*t7732 + t7844*t7900 + t7992*t8000 + t8078*t8123 + t8241*t8283 + t8417*t8450 - 0.0016*(t8201*t8283 + t8177*t8450) - 0.2707*(t8177*t8283 - 1.*t8201*t8450) + var1[0];
  p_output1[1]=0. + t1990*t6596*t7193 + t6855*t8626 + t7552*t8685 + t7616*t8722 - 0.1305*(-1.*t1990*t6470*t7193 + t2028*t8722) + t7680*t8742 + t7844*t8794 + t7992*t8909 + t8078*t8926 + t8241*t8965 + t8417*t8993 - 0.0016*(t8201*t8965 + t8177*t8993) - 0.2707*(t8177*t8965 - 1.*t8201*t8993) + var1[1];
  p_output1[2]=0. + t1990*t6855*t7069 - 1.*t6596*t7145 + t1990*t7396*t7552 + t7616*t9153 - 0.1305*(t6470*t7145 + t2028*t9153) + t7680*t9168 + t7844*t9201 + t7992*t9232 + t8078*t9249 + t8241*t9296 + t8417*t9327 - 0.0016*(t8201*t9296 + t8177*t9327) - 0.2707*(t8177*t9296 - 1.*t8201*t9327) + var1[2];
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

#include "p_knee_to_shin_right_mex.hh"

namespace SymExpression
{

void p_knee_to_shin_right_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
