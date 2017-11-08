/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:11:10 GMT-05:00
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
  double t2522;
  double t2546;
  double t2558;
  double t2548;
  double t2559;
  double t2544;
  double t2582;
  double t2585;
  double t2587;
  double t2555;
  double t2568;
  double t2577;
  double t2589;
  double t2515;
  double t2607;
  double t2612;
  double t2613;
  double t2523;
  double t2531;
  double t2537;
  double t2578;
  double t2592;
  double t2594;
  double t2599;
  double t2601;
  double t2603;
  double t2614;
  double t2470;
  double t2654;
  double t2657;
  double t2658;
  double t2646;
  double t2650;
  double t2651;
  double t2629;
  double t2666;
  double t2668;
  double t2672;
  double t2643;
  double t2653;
  double t2659;
  double t2660;
  double t2661;
  double t2662;
  double t2707;
  double t2711;
  double t2715;
  double t2695;
  double t2697;
  double t2698;
  double t2701;
  double t2702;
  double t2703;
  double t2605;
  double t2617;
  double t2618;
  double t2632;
  double t2633;
  double t2634;
  double t2664;
  double t2675;
  double t2676;
  double t2683;
  double t2684;
  double t2687;
  double t2706;
  double t2717;
  double t2718;
  double t2724;
  double t2725;
  double t2726;
  double t2794;
  double t2795;
  double t2816;
  double t2818;
  double t2841;
  double t2842;
  double t2732;
  double t2733;
  double t2734;
  double t2766;
  double t2777;
  double t2781;
  double t2783;
  double t2790;
  double t2791;
  double t2796;
  double t2797;
  double t2798;
  double t2801;
  double t2802;
  double t2805;
  double t2819;
  double t2823;
  double t2828;
  double t2831;
  double t2833;
  double t2835;
  double t2845;
  double t2846;
  double t2847;
  double t2850;
  double t2851;
  double t2852;
  double t2737;
  double t2738;
  double t2739;
  double t2740;
  double t2742;
  double t2743;
  t2522 = Cos(var1[3]);
  t2546 = Cos(var1[5]);
  t2558 = Sin(var1[4]);
  t2548 = Sin(var1[3]);
  t2559 = Sin(var1[5]);
  t2544 = Cos(var1[6]);
  t2582 = t2522*t2546*t2558;
  t2585 = t2548*t2559;
  t2587 = t2582 + t2585;
  t2555 = -1.*t2546*t2548;
  t2568 = t2522*t2558*t2559;
  t2577 = t2555 + t2568;
  t2589 = Sin(var1[6]);
  t2515 = Cos(var1[8]);
  t2607 = t2544*t2587;
  t2612 = -1.*t2577*t2589;
  t2613 = t2607 + t2612;
  t2523 = Cos(var1[4]);
  t2531 = Cos(var1[7]);
  t2537 = t2522*t2523*t2531;
  t2578 = t2544*t2577;
  t2592 = t2587*t2589;
  t2594 = t2578 + t2592;
  t2599 = Sin(var1[7]);
  t2601 = t2594*t2599;
  t2603 = t2537 + t2601;
  t2614 = Sin(var1[8]);
  t2470 = Sin(var1[9]);
  t2654 = t2546*t2548*t2558;
  t2657 = -1.*t2522*t2559;
  t2658 = t2654 + t2657;
  t2646 = t2522*t2546;
  t2650 = t2548*t2558*t2559;
  t2651 = t2646 + t2650;
  t2629 = Cos(var1[9]);
  t2666 = t2544*t2658;
  t2668 = -1.*t2651*t2589;
  t2672 = t2666 + t2668;
  t2643 = t2523*t2531*t2548;
  t2653 = t2544*t2651;
  t2659 = t2658*t2589;
  t2660 = t2653 + t2659;
  t2661 = t2660*t2599;
  t2662 = t2643 + t2661;
  t2707 = t2523*t2546*t2544;
  t2711 = -1.*t2523*t2559*t2589;
  t2715 = t2707 + t2711;
  t2695 = -1.*t2531*t2558;
  t2697 = t2523*t2544*t2559;
  t2698 = t2523*t2546*t2589;
  t2701 = t2697 + t2698;
  t2702 = t2701*t2599;
  t2703 = t2695 + t2702;
  t2605 = t2515*t2603;
  t2617 = t2613*t2614;
  t2618 = t2605 + t2617;
  t2632 = t2515*t2613;
  t2633 = -1.*t2603*t2614;
  t2634 = t2632 + t2633;
  t2664 = t2515*t2662;
  t2675 = t2672*t2614;
  t2676 = t2664 + t2675;
  t2683 = t2515*t2672;
  t2684 = -1.*t2662*t2614;
  t2687 = t2683 + t2684;
  t2706 = t2515*t2703;
  t2717 = t2715*t2614;
  t2718 = t2706 + t2717;
  t2724 = t2515*t2715;
  t2725 = -1.*t2703*t2614;
  t2726 = t2724 + t2725;
  t2794 = -1.*t2531;
  t2795 = 1. + t2794;
  t2816 = -1.*t2515;
  t2818 = 1. + t2816;
  t2841 = -1.*t2629;
  t2842 = 1. + t2841;
  t2732 = t2629*t2618;
  t2733 = t2470*t2634;
  t2734 = t2732 + t2733;
  t2766 = -1.*t2544;
  t2777 = 1. + t2766;
  t2781 = 0.135*t2777;
  t2783 = 0. + t2781;
  t2790 = -0.135*t2589;
  t2791 = 0. + t2790;
  t2796 = 0.135*t2795;
  t2797 = 0.049*t2599;
  t2798 = 0. + t2796 + t2797;
  t2801 = -0.049*t2795;
  t2802 = 0.135*t2599;
  t2805 = 0. + t2801 + t2802;
  t2819 = -0.049*t2818;
  t2823 = -0.09*t2614;
  t2828 = 0. + t2819 + t2823;
  t2831 = -0.09*t2818;
  t2833 = 0.049*t2614;
  t2835 = 0. + t2831 + t2833;
  t2845 = -0.049*t2842;
  t2846 = -0.21*t2470;
  t2847 = 0. + t2845 + t2846;
  t2850 = -0.21*t2842;
  t2851 = 0.049*t2470;
  t2852 = 0. + t2850 + t2851;
  t2737 = t2629*t2676;
  t2738 = t2470*t2687;
  t2739 = t2737 + t2738;
  t2740 = t2629*t2718;
  t2742 = t2470*t2726;
  t2743 = t2740 + t2742;
  p_output1[0]=t2470*t2618 - 1.*t2629*t2634;
  p_output1[1]=t2470*t2676 - 1.*t2629*t2687;
  p_output1[2]=t2470*t2718 - 1.*t2629*t2726;
  p_output1[3]=0.;
  p_output1[4]=t2734;
  p_output1[5]=t2739;
  p_output1[6]=t2743;
  p_output1[7]=0.;
  p_output1[8]=-1.*t2531*t2594 + t2522*t2523*t2599;
  p_output1[9]=t2523*t2548*t2599 - 1.*t2531*t2660;
  p_output1[10]=-1.*t2558*t2599 - 1.*t2531*t2701;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.1305*(t2531*t2594 - 1.*t2522*t2523*t2599) - 0.2707*(-1.*t2470*t2618 + t2629*t2634) - 0.0016*t2734 + t2577*t2783 + t2587*t2791 + t2594*t2798 + t2522*t2523*t2805 + t2603*t2828 + t2613*t2835 + t2618*t2847 + t2634*t2852 + var1[0];
  p_output1[13]=0. + 0.1305*(-1.*t2523*t2548*t2599 + t2531*t2660) - 0.2707*(-1.*t2470*t2676 + t2629*t2687) - 0.0016*t2739 + t2651*t2783 + t2658*t2791 + t2660*t2798 + t2523*t2548*t2805 + t2662*t2828 + t2672*t2835 + t2676*t2847 + t2687*t2852 + var1[1];
  p_output1[14]=0. + 0.1305*(t2558*t2599 + t2531*t2701) - 0.2707*(-1.*t2470*t2718 + t2629*t2726) - 0.0016*t2743 + t2523*t2559*t2783 + t2523*t2546*t2791 + t2701*t2798 - 1.*t2558*t2805 + t2703*t2828 + t2715*t2835 + t2718*t2847 + t2726*t2852 + var1[2];
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
