/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 12:16:09 GMT-04:00
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
  double t299;
  double t1858;
  double t2074;
  double t1963;
  double t2158;
  double t2171;
  double t2131;
  double t2240;
  double t2242;
  double t2244;
  double t2166;
  double t2187;
  double t2207;
  double t2252;
  double t2119;
  double t2295;
  double t2319;
  double t2335;
  double t2215;
  double t2279;
  double t2282;
  double t2339;
  double t2109;
  double t2365;
  double t2371;
  double t2372;
  double t2293;
  double t2344;
  double t2352;
  double t2380;
  double t2089;
  double t2395;
  double t2398;
  double t2405;
  double t2360;
  double t2383;
  double t2386;
  double t2412;
  double t2475;
  double t2478;
  double t2491;
  double t2454;
  double t2455;
  double t2468;
  double t2497;
  double t2502;
  double t2504;
  double t2470;
  double t2493;
  double t2495;
  double t2509;
  double t2511;
  double t2512;
  double t2496;
  double t2505;
  double t2506;
  double t2524;
  double t2527;
  double t2529;
  double t2508;
  double t2514;
  double t2515;
  double t2566;
  double t2568;
  double t2570;
  double t2552;
  double t2556;
  double t2557;
  double t2581;
  double t2582;
  double t2584;
  double t2564;
  double t2574;
  double t2576;
  double t2592;
  double t2593;
  double t2596;
  double t2580;
  double t2587;
  double t2588;
  double t2387;
  double t2413;
  double t2420;
  double t2426;
  double t2431;
  double t2439;
  double t2518;
  double t2534;
  double t2535;
  double t2545;
  double t2546;
  double t2548;
  double t2590;
  double t2602;
  double t2605;
  double t2609;
  double t2610;
  double t2614;
  t299 = Cos(var1[8]);
  t1858 = Sin(var1[7]);
  t2074 = Sin(var1[8]);
  t1963 = Cos(var1[7]);
  t2158 = Cos(var1[9]);
  t2171 = Sin(var1[9]);
  t2131 = Cos(var1[10]);
  t2240 = t1963*t2158;
  t2242 = -1.*t1858*t2074*t2171;
  t2244 = t2240 + t2242;
  t2166 = t2158*t1858*t2074;
  t2187 = t1963*t2171;
  t2207 = t2166 + t2187;
  t2252 = Sin(var1[10]);
  t2119 = Cos(var1[11]);
  t2295 = t2131*t2244;
  t2319 = -1.*t2207*t2252;
  t2335 = t2295 + t2319;
  t2215 = t2131*t2207;
  t2279 = t2244*t2252;
  t2282 = t2215 + t2279;
  t2339 = Sin(var1[11]);
  t2109 = Cos(var1[12]);
  t2365 = t2119*t2335;
  t2371 = -1.*t2282*t2339;
  t2372 = t2365 + t2371;
  t2293 = t2119*t2282;
  t2344 = t2335*t2339;
  t2352 = t2293 + t2344;
  t2380 = Sin(var1[12]);
  t2089 = Cos(var1[13]);
  t2395 = t2109*t2372;
  t2398 = -1.*t2352*t2380;
  t2405 = t2395 + t2398;
  t2360 = t2109*t2352;
  t2383 = t2372*t2380;
  t2386 = t2360 + t2383;
  t2412 = Sin(var1[13]);
  t2475 = -1.*t2158*t1858;
  t2478 = -1.*t1963*t2074*t2171;
  t2491 = t2475 + t2478;
  t2454 = t1963*t2158*t2074;
  t2455 = -1.*t1858*t2171;
  t2468 = t2454 + t2455;
  t2497 = t2131*t2491;
  t2502 = -1.*t2468*t2252;
  t2504 = t2497 + t2502;
  t2470 = t2131*t2468;
  t2493 = t2491*t2252;
  t2495 = t2470 + t2493;
  t2509 = t2119*t2504;
  t2511 = -1.*t2495*t2339;
  t2512 = t2509 + t2511;
  t2496 = t2119*t2495;
  t2505 = t2504*t2339;
  t2506 = t2496 + t2505;
  t2524 = t2109*t2512;
  t2527 = -1.*t2506*t2380;
  t2529 = t2524 + t2527;
  t2508 = t2109*t2506;
  t2514 = t2512*t2380;
  t2515 = t2508 + t2514;
  t2566 = -1.*t299*t2131*t2171;
  t2568 = -1.*t299*t2158*t2252;
  t2570 = t2566 + t2568;
  t2552 = t299*t2158*t2131;
  t2556 = -1.*t299*t2171*t2252;
  t2557 = t2552 + t2556;
  t2581 = t2119*t2570;
  t2582 = -1.*t2557*t2339;
  t2584 = t2581 + t2582;
  t2564 = t2119*t2557;
  t2574 = t2570*t2339;
  t2576 = t2564 + t2574;
  t2592 = t2109*t2584;
  t2593 = -1.*t2576*t2380;
  t2596 = t2592 + t2593;
  t2580 = t2109*t2576;
  t2587 = t2584*t2380;
  t2588 = t2580 + t2587;
  t2387 = t2089*t2386;
  t2413 = t2405*t2412;
  t2420 = t2387 + t2413;
  t2426 = t2089*t2405;
  t2431 = -1.*t2386*t2412;
  t2439 = t2426 + t2431;
  t2518 = t2089*t2515;
  t2534 = t2529*t2412;
  t2535 = t2518 + t2534;
  t2545 = t2089*t2529;
  t2546 = -1.*t2515*t2412;
  t2548 = t2545 + t2546;
  t2590 = t2089*t2588;
  t2602 = t2596*t2412;
  t2605 = t2590 + t2602;
  t2609 = t2089*t2596;
  t2610 = -1.*t2588*t2412;
  t2614 = t2609 + t2610;
  p_output1[0]=0. + t1858*t299;
  p_output1[1]=0. - 1.*t1963*t299;
  p_output1[2]=0. + t2074;
  p_output1[3]=0. - 0.642788*t2420 - 0.766044*t2439;
  p_output1[4]=0. + 0.642788*t2535 + 0.766044*t2548;
  p_output1[5]=0. + 0.642788*t2605 + 0.766044*t2614;
  p_output1[6]=0. + 0.766044*t2420 - 0.642788*t2439;
  p_output1[7]=0. - 0.766044*t2535 + 0.642788*t2548;
  p_output1[8]=0. - 0.766044*t2605 + 0.642788*t2614;
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

#include "R_MultisenseIMU_to_RightToeBottom_mex.hh"

namespace SymExpression
{

void R_MultisenseIMU_to_RightToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
