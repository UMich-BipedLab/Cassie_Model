/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:33:47 GMT-04:00
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
  double t990;
  double t1178;
  double t985;
  double t994;
  double t1240;
  double t1401;
  double t1168;
  double t1298;
  double t1299;
  double t839;
  double t1414;
  double t1450;
  double t1517;
  double t1816;
  double t1336;
  double t1627;
  double t1672;
  double t766;
  double t1819;
  double t1845;
  double t1923;
  double t2009;
  double t2059;
  double t2140;
  double t2150;
  double t2153;
  double t2196;
  double t2351;
  double t1805;
  double t2206;
  double t2231;
  double t102;
  double t2370;
  double t2380;
  double t2385;
  double t96;
  double t2756;
  double t2775;
  double t2838;
  double t2848;
  double t2850;
  double t2851;
  double t2840;
  double t2898;
  double t2932;
  double t2963;
  double t3029;
  double t3030;
  double t3043;
  double t3061;
  double t3074;
  double t2515;
  double t2952;
  double t3092;
  double t3103;
  double t3145;
  double t3147;
  double t3163;
  double t3365;
  double t3378;
  double t3401;
  double t3422;
  double t3448;
  double t3461;
  double t3525;
  double t3535;
  double t3537;
  double t3403;
  double t3544;
  double t3619;
  double t3650;
  double t3663;
  double t3666;
  double t2338;
  double t2454;
  double t2479;
  double t2617;
  double t2647;
  double t2694;
  double t3142;
  double t3175;
  double t3194;
  double t3219;
  double t3267;
  double t3304;
  double t3636;
  double t3669;
  double t3684;
  double t3700;
  double t3718;
  double t3723;
  t990 = Cos(var1[5]);
  t1178 = Sin(var1[3]);
  t985 = Cos(var1[3]);
  t994 = Sin(var1[4]);
  t1240 = Sin(var1[5]);
  t1401 = Sin(var1[13]);
  t1168 = t985*t990*t994;
  t1298 = t1178*t1240;
  t1299 = t1168 + t1298;
  t839 = Cos(var1[13]);
  t1414 = -1.*t990*t1178;
  t1450 = t985*t994*t1240;
  t1517 = t1414 + t1450;
  t1816 = Cos(var1[15]);
  t1336 = t839*t1299;
  t1627 = -1.*t1401*t1517;
  t1672 = t1336 + t1627;
  t766 = Sin(var1[15]);
  t1819 = Cos(var1[14]);
  t1845 = Cos(var1[4]);
  t1923 = t1819*t985*t1845;
  t2009 = Sin(var1[14]);
  t2059 = t1401*t1299;
  t2140 = t839*t1517;
  t2150 = t2059 + t2140;
  t2153 = t2009*t2150;
  t2196 = t1923 + t2153;
  t2351 = Cos(var1[16]);
  t1805 = t766*t1672;
  t2206 = t1816*t2196;
  t2231 = t1805 + t2206;
  t102 = Sin(var1[16]);
  t2370 = t1816*t1672;
  t2380 = -1.*t766*t2196;
  t2385 = t2370 + t2380;
  t96 = Cos(var1[17]);
  t2756 = t990*t1178*t994;
  t2775 = -1.*t985*t1240;
  t2838 = t2756 + t2775;
  t2848 = t985*t990;
  t2850 = t1178*t994*t1240;
  t2851 = t2848 + t2850;
  t2840 = t839*t2838;
  t2898 = -1.*t1401*t2851;
  t2932 = t2840 + t2898;
  t2963 = t1819*t1845*t1178;
  t3029 = t1401*t2838;
  t3030 = t839*t2851;
  t3043 = t3029 + t3030;
  t3061 = t2009*t3043;
  t3074 = t2963 + t3061;
  t2515 = Sin(var1[17]);
  t2952 = t766*t2932;
  t3092 = t1816*t3074;
  t3103 = t2952 + t3092;
  t3145 = t1816*t2932;
  t3147 = -1.*t766*t3074;
  t3163 = t3145 + t3147;
  t3365 = t839*t1845*t990;
  t3378 = -1.*t1845*t1401*t1240;
  t3401 = t3365 + t3378;
  t3422 = -1.*t1819*t994;
  t3448 = t1845*t990*t1401;
  t3461 = t839*t1845*t1240;
  t3525 = t3448 + t3461;
  t3535 = t2009*t3525;
  t3537 = t3422 + t3535;
  t3403 = t766*t3401;
  t3544 = t1816*t3537;
  t3619 = t3403 + t3544;
  t3650 = t1816*t3401;
  t3663 = -1.*t766*t3537;
  t3666 = t3650 + t3663;
  t2338 = -1.*t102*t2231;
  t2454 = t2351*t2385;
  t2479 = t2338 + t2454;
  t2617 = t2351*t2231;
  t2647 = t102*t2385;
  t2694 = t2617 + t2647;
  t3142 = -1.*t102*t3103;
  t3175 = t2351*t3163;
  t3194 = t3142 + t3175;
  t3219 = t2351*t3103;
  t3267 = t102*t3163;
  t3304 = t3219 + t3267;
  t3636 = -1.*t102*t3619;
  t3669 = t2351*t3666;
  t3684 = t3636 + t3669;
  t3700 = t2351*t3619;
  t3718 = t102*t3666;
  t3723 = t3700 + t3718;
  p_output1[0]=t2515*t2694 - 1.*t2479*t96;
  p_output1[1]=t2515*t3304 - 1.*t3194*t96;
  p_output1[2]=t2515*t3723 - 1.*t3684*t96;
  p_output1[3]=t2479*t2515 + t2694*t96;
  p_output1[4]=t2515*t3194 + t3304*t96;
  p_output1[5]=t2515*t3684 + t3723*t96;
  p_output1[6]=-1.*t1819*t2150 + t1845*t2009*t985;
  p_output1[7]=t1178*t1845*t2009 - 1.*t1819*t3043;
  p_output1[8]=-1.*t1819*t3525 - 1.*t2009*t994;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "R_knee_to_shin_right_mex.hh"

namespace SymExpression
{

void R_knee_to_shin_right_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
