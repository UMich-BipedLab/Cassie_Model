/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:13 GMT-05:00
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
  double t2434;
  double t2469;
  double t2481;
  double t2478;
  double t2486;
  double t2467;
  double t2497;
  double t2498;
  double t2505;
  double t2480;
  double t2490;
  double t2492;
  double t2508;
  double t2433;
  double t2543;
  double t2544;
  double t2545;
  double t2438;
  double t2448;
  double t2463;
  double t2496;
  double t2520;
  double t2534;
  double t2536;
  double t2537;
  double t2538;
  double t2546;
  double t2558;
  double t2541;
  double t2547;
  double t2552;
  double t2428;
  double t2561;
  double t2562;
  double t2566;
  double t2373;
  double t2607;
  double t2612;
  double t2613;
  double t2602;
  double t2604;
  double t2605;
  double t2622;
  double t2623;
  double t2624;
  double t2601;
  double t2606;
  double t2615;
  double t2617;
  double t2618;
  double t2619;
  double t2579;
  double t2621;
  double t2626;
  double t2629;
  double t2632;
  double t2637;
  double t2638;
  double t2678;
  double t2680;
  double t2682;
  double t2663;
  double t2667;
  double t2668;
  double t2669;
  double t2671;
  double t2672;
  double t2675;
  double t2683;
  double t2688;
  double t2692;
  double t2693;
  double t2695;
  double t2557;
  double t2568;
  double t2569;
  double t2580;
  double t2587;
  double t2591;
  double t2631;
  double t2639;
  double t2643;
  double t2648;
  double t2654;
  double t2656;
  double t2689;
  double t2696;
  double t2701;
  double t2705;
  double t2707;
  double t2709;
  double t2782;
  double t2783;
  double t2802;
  double t2805;
  double t2827;
  double t2830;
  double t2852;
  double t2853;
  double t2713;
  double t2714;
  double t2717;
  double t2751;
  double t2754;
  double t2755;
  double t2765;
  double t2775;
  double t2777;
  double t2785;
  double t2787;
  double t2789;
  double t2791;
  double t2792;
  double t2793;
  double t2807;
  double t2810;
  double t2814;
  double t2818;
  double t2819;
  double t2821;
  double t2834;
  double t2835;
  double t2837;
  double t2842;
  double t2843;
  double t2847;
  double t2854;
  double t2855;
  double t2857;
  double t2859;
  double t2861;
  double t2862;
  double t2718;
  double t2719;
  double t2720;
  double t2722;
  double t2724;
  double t2727;
  t2434 = Cos(var1[3]);
  t2469 = Cos(var1[5]);
  t2481 = Sin(var1[4]);
  t2478 = Sin(var1[3]);
  t2486 = Sin(var1[5]);
  t2467 = Cos(var1[6]);
  t2497 = t2434*t2469*t2481;
  t2498 = t2478*t2486;
  t2505 = t2497 + t2498;
  t2480 = -1.*t2469*t2478;
  t2490 = t2434*t2481*t2486;
  t2492 = t2480 + t2490;
  t2508 = Sin(var1[6]);
  t2433 = Cos(var1[8]);
  t2543 = t2467*t2505;
  t2544 = -1.*t2492*t2508;
  t2545 = t2543 + t2544;
  t2438 = Cos(var1[4]);
  t2448 = Cos(var1[7]);
  t2463 = t2434*t2438*t2448;
  t2496 = t2467*t2492;
  t2520 = t2505*t2508;
  t2534 = t2496 + t2520;
  t2536 = Sin(var1[7]);
  t2537 = t2534*t2536;
  t2538 = t2463 + t2537;
  t2546 = Sin(var1[8]);
  t2558 = Cos(var1[9]);
  t2541 = t2433*t2538;
  t2547 = t2545*t2546;
  t2552 = t2541 + t2547;
  t2428 = Sin(var1[9]);
  t2561 = t2433*t2545;
  t2562 = -1.*t2538*t2546;
  t2566 = t2561 + t2562;
  t2373 = Cos(var1[10]);
  t2607 = t2469*t2478*t2481;
  t2612 = -1.*t2434*t2486;
  t2613 = t2607 + t2612;
  t2602 = t2434*t2469;
  t2604 = t2478*t2481*t2486;
  t2605 = t2602 + t2604;
  t2622 = t2467*t2613;
  t2623 = -1.*t2605*t2508;
  t2624 = t2622 + t2623;
  t2601 = t2438*t2448*t2478;
  t2606 = t2467*t2605;
  t2615 = t2613*t2508;
  t2617 = t2606 + t2615;
  t2618 = t2617*t2536;
  t2619 = t2601 + t2618;
  t2579 = Sin(var1[10]);
  t2621 = t2433*t2619;
  t2626 = t2624*t2546;
  t2629 = t2621 + t2626;
  t2632 = t2433*t2624;
  t2637 = -1.*t2619*t2546;
  t2638 = t2632 + t2637;
  t2678 = t2438*t2469*t2467;
  t2680 = -1.*t2438*t2486*t2508;
  t2682 = t2678 + t2680;
  t2663 = -1.*t2448*t2481;
  t2667 = t2438*t2467*t2486;
  t2668 = t2438*t2469*t2508;
  t2669 = t2667 + t2668;
  t2671 = t2669*t2536;
  t2672 = t2663 + t2671;
  t2675 = t2433*t2672;
  t2683 = t2682*t2546;
  t2688 = t2675 + t2683;
  t2692 = t2433*t2682;
  t2693 = -1.*t2672*t2546;
  t2695 = t2692 + t2693;
  t2557 = -1.*t2428*t2552;
  t2568 = t2558*t2566;
  t2569 = t2557 + t2568;
  t2580 = t2558*t2552;
  t2587 = t2428*t2566;
  t2591 = t2580 + t2587;
  t2631 = -1.*t2428*t2629;
  t2639 = t2558*t2638;
  t2643 = t2631 + t2639;
  t2648 = t2558*t2629;
  t2654 = t2428*t2638;
  t2656 = t2648 + t2654;
  t2689 = -1.*t2428*t2688;
  t2696 = t2558*t2695;
  t2701 = t2689 + t2696;
  t2705 = t2558*t2688;
  t2707 = t2428*t2695;
  t2709 = t2705 + t2707;
  t2782 = -1.*t2448;
  t2783 = 1. + t2782;
  t2802 = -1.*t2433;
  t2805 = 1. + t2802;
  t2827 = -1.*t2558;
  t2830 = 1. + t2827;
  t2852 = -1.*t2373;
  t2853 = 1. + t2852;
  t2713 = t2579*t2569;
  t2714 = t2373*t2591;
  t2717 = t2713 + t2714;
  t2751 = -1.*t2467;
  t2754 = 1. + t2751;
  t2755 = 0.135*t2754;
  t2765 = 0. + t2755;
  t2775 = -0.135*t2508;
  t2777 = 0. + t2775;
  t2785 = 0.135*t2783;
  t2787 = 0.049*t2536;
  t2789 = 0. + t2785 + t2787;
  t2791 = -0.049*t2783;
  t2792 = 0.135*t2536;
  t2793 = 0. + t2791 + t2792;
  t2807 = -0.049*t2805;
  t2810 = -0.09*t2546;
  t2814 = 0. + t2807 + t2810;
  t2818 = -0.09*t2805;
  t2819 = 0.049*t2546;
  t2821 = 0. + t2818 + t2819;
  t2834 = -0.049*t2830;
  t2835 = -0.21*t2428;
  t2837 = 0. + t2834 + t2835;
  t2842 = -0.21*t2830;
  t2843 = 0.049*t2428;
  t2847 = 0. + t2842 + t2843;
  t2854 = -0.2707*t2853;
  t2855 = 0.0016*t2579;
  t2857 = 0. + t2854 + t2855;
  t2859 = -0.0016*t2853;
  t2861 = -0.2707*t2579;
  t2862 = 0. + t2859 + t2861;
  t2718 = t2579*t2643;
  t2719 = t2373*t2656;
  t2720 = t2718 + t2719;
  t2722 = t2579*t2701;
  t2724 = t2373*t2709;
  t2727 = t2722 + t2724;
  p_output1[0]=-1.*t2373*t2569 + t2579*t2591;
  p_output1[1]=-1.*t2373*t2643 + t2579*t2656;
  p_output1[2]=-1.*t2373*t2701 + t2579*t2709;
  p_output1[3]=0.;
  p_output1[4]=t2717;
  p_output1[5]=t2720;
  p_output1[6]=t2727;
  p_output1[7]=0.;
  p_output1[8]=-1.*t2448*t2534 + t2434*t2438*t2536;
  p_output1[9]=t2438*t2478*t2536 - 1.*t2448*t2617;
  p_output1[10]=-1.*t2481*t2536 - 1.*t2448*t2669;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.1305*(t2448*t2534 - 1.*t2434*t2438*t2536) - 0.2707*(t2373*t2569 - 1.*t2579*t2591) - 0.0016*t2717 + t2492*t2765 + t2505*t2777 + t2534*t2789 + t2434*t2438*t2793 + t2538*t2814 + t2545*t2821 + t2552*t2837 + t2566*t2847 + t2569*t2857 + t2591*t2862 + var1[0];
  p_output1[13]=0. + 0.1305*(-1.*t2438*t2478*t2536 + t2448*t2617) - 0.2707*(t2373*t2643 - 1.*t2579*t2656) - 0.0016*t2720 + t2605*t2765 + t2613*t2777 + t2617*t2789 + t2438*t2478*t2793 + t2619*t2814 + t2624*t2821 + t2629*t2837 + t2638*t2847 + t2643*t2857 + t2656*t2862 + var1[1];
  p_output1[14]=0. + 0.1305*(t2481*t2536 + t2448*t2669) - 0.2707*(t2373*t2701 - 1.*t2579*t2709) - 0.0016*t2727 + t2438*t2486*t2765 + t2438*t2469*t2777 + t2669*t2789 - 1.*t2481*t2793 + t2672*t2814 + t2682*t2821 + t2688*t2837 + t2695*t2847 + t2701*t2857 + t2709*t2862 + var1[2];
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
