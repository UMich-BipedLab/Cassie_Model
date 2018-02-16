/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:15:17 GMT-05:00
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
  double t2398;
  double t2433;
  double t2445;
  double t2442;
  double t2450;
  double t2431;
  double t2461;
  double t2462;
  double t2469;
  double t2444;
  double t2454;
  double t2456;
  double t2472;
  double t2397;
  double t2507;
  double t2508;
  double t2509;
  double t2402;
  double t2412;
  double t2427;
  double t2460;
  double t2484;
  double t2498;
  double t2500;
  double t2501;
  double t2502;
  double t2510;
  double t2522;
  double t2505;
  double t2511;
  double t2516;
  double t2392;
  double t2525;
  double t2526;
  double t2530;
  double t2337;
  double t2571;
  double t2576;
  double t2577;
  double t2566;
  double t2568;
  double t2569;
  double t2586;
  double t2587;
  double t2588;
  double t2565;
  double t2570;
  double t2579;
  double t2581;
  double t2582;
  double t2583;
  double t2543;
  double t2585;
  double t2590;
  double t2593;
  double t2596;
  double t2601;
  double t2602;
  double t2642;
  double t2644;
  double t2646;
  double t2627;
  double t2631;
  double t2632;
  double t2633;
  double t2635;
  double t2636;
  double t2639;
  double t2647;
  double t2652;
  double t2656;
  double t2657;
  double t2659;
  double t2521;
  double t2532;
  double t2533;
  double t2544;
  double t2551;
  double t2555;
  double t2595;
  double t2603;
  double t2607;
  double t2612;
  double t2618;
  double t2620;
  double t2653;
  double t2660;
  double t2665;
  double t2669;
  double t2671;
  double t2673;
  double t2746;
  double t2747;
  double t2766;
  double t2769;
  double t2791;
  double t2794;
  double t2816;
  double t2817;
  double t2677;
  double t2678;
  double t2681;
  double t2715;
  double t2718;
  double t2719;
  double t2729;
  double t2739;
  double t2741;
  double t2749;
  double t2751;
  double t2753;
  double t2755;
  double t2756;
  double t2757;
  double t2771;
  double t2774;
  double t2778;
  double t2782;
  double t2783;
  double t2785;
  double t2798;
  double t2799;
  double t2801;
  double t2806;
  double t2807;
  double t2811;
  double t2818;
  double t2819;
  double t2821;
  double t2823;
  double t2825;
  double t2826;
  double t2682;
  double t2683;
  double t2684;
  double t2686;
  double t2688;
  double t2691;
  t2398 = Cos(var1[3]);
  t2433 = Cos(var1[5]);
  t2445 = Sin(var1[4]);
  t2442 = Sin(var1[3]);
  t2450 = Sin(var1[5]);
  t2431 = Cos(var1[6]);
  t2461 = t2398*t2433*t2445;
  t2462 = t2442*t2450;
  t2469 = t2461 + t2462;
  t2444 = -1.*t2433*t2442;
  t2454 = t2398*t2445*t2450;
  t2456 = t2444 + t2454;
  t2472 = Sin(var1[6]);
  t2397 = Cos(var1[8]);
  t2507 = t2431*t2469;
  t2508 = -1.*t2456*t2472;
  t2509 = t2507 + t2508;
  t2402 = Cos(var1[4]);
  t2412 = Cos(var1[7]);
  t2427 = t2398*t2402*t2412;
  t2460 = t2431*t2456;
  t2484 = t2469*t2472;
  t2498 = t2460 + t2484;
  t2500 = Sin(var1[7]);
  t2501 = t2498*t2500;
  t2502 = t2427 + t2501;
  t2510 = Sin(var1[8]);
  t2522 = Cos(var1[9]);
  t2505 = t2397*t2502;
  t2511 = t2509*t2510;
  t2516 = t2505 + t2511;
  t2392 = Sin(var1[9]);
  t2525 = t2397*t2509;
  t2526 = -1.*t2502*t2510;
  t2530 = t2525 + t2526;
  t2337 = Cos(var1[10]);
  t2571 = t2433*t2442*t2445;
  t2576 = -1.*t2398*t2450;
  t2577 = t2571 + t2576;
  t2566 = t2398*t2433;
  t2568 = t2442*t2445*t2450;
  t2569 = t2566 + t2568;
  t2586 = t2431*t2577;
  t2587 = -1.*t2569*t2472;
  t2588 = t2586 + t2587;
  t2565 = t2402*t2412*t2442;
  t2570 = t2431*t2569;
  t2579 = t2577*t2472;
  t2581 = t2570 + t2579;
  t2582 = t2581*t2500;
  t2583 = t2565 + t2582;
  t2543 = Sin(var1[10]);
  t2585 = t2397*t2583;
  t2590 = t2588*t2510;
  t2593 = t2585 + t2590;
  t2596 = t2397*t2588;
  t2601 = -1.*t2583*t2510;
  t2602 = t2596 + t2601;
  t2642 = t2402*t2433*t2431;
  t2644 = -1.*t2402*t2450*t2472;
  t2646 = t2642 + t2644;
  t2627 = -1.*t2412*t2445;
  t2631 = t2402*t2431*t2450;
  t2632 = t2402*t2433*t2472;
  t2633 = t2631 + t2632;
  t2635 = t2633*t2500;
  t2636 = t2627 + t2635;
  t2639 = t2397*t2636;
  t2647 = t2646*t2510;
  t2652 = t2639 + t2647;
  t2656 = t2397*t2646;
  t2657 = -1.*t2636*t2510;
  t2659 = t2656 + t2657;
  t2521 = -1.*t2392*t2516;
  t2532 = t2522*t2530;
  t2533 = t2521 + t2532;
  t2544 = t2522*t2516;
  t2551 = t2392*t2530;
  t2555 = t2544 + t2551;
  t2595 = -1.*t2392*t2593;
  t2603 = t2522*t2602;
  t2607 = t2595 + t2603;
  t2612 = t2522*t2593;
  t2618 = t2392*t2602;
  t2620 = t2612 + t2618;
  t2653 = -1.*t2392*t2652;
  t2660 = t2522*t2659;
  t2665 = t2653 + t2660;
  t2669 = t2522*t2652;
  t2671 = t2392*t2659;
  t2673 = t2669 + t2671;
  t2746 = -1.*t2412;
  t2747 = 1. + t2746;
  t2766 = -1.*t2397;
  t2769 = 1. + t2766;
  t2791 = -1.*t2522;
  t2794 = 1. + t2791;
  t2816 = -1.*t2337;
  t2817 = 1. + t2816;
  t2677 = t2543*t2533;
  t2678 = t2337*t2555;
  t2681 = t2677 + t2678;
  t2715 = -1.*t2431;
  t2718 = 1. + t2715;
  t2719 = 0.135*t2718;
  t2729 = 0. + t2719;
  t2739 = -0.135*t2472;
  t2741 = 0. + t2739;
  t2749 = 0.135*t2747;
  t2751 = 0.049*t2500;
  t2753 = 0. + t2749 + t2751;
  t2755 = -0.049*t2747;
  t2756 = 0.135*t2500;
  t2757 = 0. + t2755 + t2756;
  t2771 = -0.049*t2769;
  t2774 = -0.09*t2510;
  t2778 = 0. + t2771 + t2774;
  t2782 = -0.09*t2769;
  t2783 = 0.049*t2510;
  t2785 = 0. + t2782 + t2783;
  t2798 = -0.049*t2794;
  t2799 = -0.21*t2392;
  t2801 = 0. + t2798 + t2799;
  t2806 = -0.21*t2794;
  t2807 = 0.049*t2392;
  t2811 = 0. + t2806 + t2807;
  t2818 = -0.2707*t2817;
  t2819 = 0.0016*t2543;
  t2821 = 0. + t2818 + t2819;
  t2823 = -0.0016*t2817;
  t2825 = -0.2707*t2543;
  t2826 = 0. + t2823 + t2825;
  t2682 = t2543*t2607;
  t2683 = t2337*t2620;
  t2684 = t2682 + t2683;
  t2686 = t2543*t2665;
  t2688 = t2337*t2673;
  t2691 = t2686 + t2688;
  p_output1[0]=-1.*t2337*t2533 + t2543*t2555;
  p_output1[1]=-1.*t2337*t2607 + t2543*t2620;
  p_output1[2]=-1.*t2337*t2665 + t2543*t2673;
  p_output1[3]=0.;
  p_output1[4]=t2681;
  p_output1[5]=t2684;
  p_output1[6]=t2691;
  p_output1[7]=0.;
  p_output1[8]=-1.*t2412*t2498 + t2398*t2402*t2500;
  p_output1[9]=t2402*t2442*t2500 - 1.*t2412*t2581;
  p_output1[10]=-1.*t2445*t2500 - 1.*t2412*t2633;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.1305*(t2412*t2498 - 1.*t2398*t2402*t2500) - 0.2707*(t2337*t2533 - 1.*t2543*t2555) - 0.0016*t2681 + t2456*t2729 + t2469*t2741 + t2498*t2753 + t2398*t2402*t2757 + t2502*t2778 + t2509*t2785 + t2516*t2801 + t2530*t2811 + t2533*t2821 + t2555*t2826 + var1[0];
  p_output1[13]=0. + 0.1305*(-1.*t2402*t2442*t2500 + t2412*t2581) - 0.2707*(t2337*t2607 - 1.*t2543*t2620) - 0.0016*t2684 + t2569*t2729 + t2577*t2741 + t2581*t2753 + t2402*t2442*t2757 + t2583*t2778 + t2588*t2785 + t2593*t2801 + t2602*t2811 + t2607*t2821 + t2620*t2826 + var1[1];
  p_output1[14]=0. + 0.1305*(t2445*t2500 + t2412*t2633) - 0.2707*(t2337*t2665 - 1.*t2543*t2673) - 0.0016*t2691 + t2402*t2450*t2729 + t2402*t2433*t2741 + t2633*t2753 - 1.*t2445*t2757 + t2636*t2778 + t2646*t2785 + t2652*t2801 + t2659*t2811 + t2665*t2821 + t2673*t2826 + var1[2];
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

#include "H_knee_to_shin_left_mex.hh"

namespace SymExpression
{

void H_knee_to_shin_left_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
