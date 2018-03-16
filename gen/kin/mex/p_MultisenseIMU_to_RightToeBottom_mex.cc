/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 12:16:10 GMT-04:00
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
  double t1619;
  double t2109;
  double t2360;
  double t2454;
  double t2470;
  double t2497;
  double t2518;
  double t2549;
  double t2619;
  double t2621;
  double t2622;
  double t2627;
  double t2607;
  double t2615;
  double t2618;
  double t2644;
  double t2645;
  double t2649;
  double t2671;
  double t2672;
  double t2674;
  double t2677;
  double t2665;
  double t2668;
  double t2669;
  double t2687;
  double t2688;
  double t2690;
  double t2709;
  double t2710;
  double t2712;
  double t2715;
  double t2703;
  double t2706;
  double t2707;
  double t2725;
  double t2726;
  double t2728;
  double t2738;
  double t2739;
  double t2741;
  double t2743;
  double t2734;
  double t2735;
  double t2736;
  double t2747;
  double t2748;
  double t2749;
  double t2215;
  double t2293;
  double t2335;
  double t2365;
  double t2413;
  double t2508;
  double t2524;
  double t2534;
  double t2564;
  double t2581;
  double t2590;
  double t2624;
  double t2629;
  double t2631;
  double t2655;
  double t2659;
  double t2660;
  double t2771;
  double t2772;
  double t2773;
  double t2775;
  double t2776;
  double t2777;
  double t2676;
  double t2679;
  double t2680;
  double t2694;
  double t2697;
  double t2698;
  double t2779;
  double t2780;
  double t2781;
  double t2783;
  double t2784;
  double t2785;
  double t2713;
  double t2716;
  double t2719;
  double t2729;
  double t2730;
  double t2731;
  double t2787;
  double t2788;
  double t2789;
  double t2791;
  double t2792;
  double t2793;
  double t2742;
  double t2744;
  double t2745;
  double t2750;
  double t2751;
  double t2752;
  double t2795;
  double t2796;
  double t2797;
  double t2799;
  double t2800;
  double t2801;
  double t2817;
  double t2818;
  double t2819;
  double t2821;
  double t2822;
  double t2823;
  double t2825;
  double t2826;
  double t2827;
  double t2829;
  double t2830;
  double t2831;
  double t2833;
  double t2834;
  double t2835;
  double t2837;
  double t2838;
  double t2839;
  t1619 = Sin(var1[7]);
  t2109 = Cos(var1[8]);
  t2360 = Sin(var1[8]);
  t2454 = Cos(var1[9]);
  t2470 = -1.*t2454;
  t2497 = 1. + t2470;
  t2518 = Sin(var1[9]);
  t2549 = Cos(var1[7]);
  t2619 = Cos(var1[10]);
  t2621 = -1.*t2619;
  t2622 = 1. + t2621;
  t2627 = Sin(var1[10]);
  t2607 = t2454*t1619*t2360;
  t2615 = t2549*t2518;
  t2618 = t2607 + t2615;
  t2644 = t2549*t2454;
  t2645 = -1.*t1619*t2360*t2518;
  t2649 = t2644 + t2645;
  t2671 = Cos(var1[11]);
  t2672 = -1.*t2671;
  t2674 = 1. + t2672;
  t2677 = Sin(var1[11]);
  t2665 = t2619*t2618;
  t2668 = t2649*t2627;
  t2669 = t2665 + t2668;
  t2687 = t2619*t2649;
  t2688 = -1.*t2618*t2627;
  t2690 = t2687 + t2688;
  t2709 = Cos(var1[12]);
  t2710 = -1.*t2709;
  t2712 = 1. + t2710;
  t2715 = Sin(var1[12]);
  t2703 = t2671*t2669;
  t2706 = t2690*t2677;
  t2707 = t2703 + t2706;
  t2725 = t2671*t2690;
  t2726 = -1.*t2669*t2677;
  t2728 = t2725 + t2726;
  t2738 = Cos(var1[13]);
  t2739 = -1.*t2738;
  t2741 = 1. + t2739;
  t2743 = Sin(var1[13]);
  t2734 = t2709*t2707;
  t2735 = t2728*t2715;
  t2736 = t2734 + t2735;
  t2747 = t2709*t2728;
  t2748 = -1.*t2707*t2715;
  t2749 = t2747 + t2748;
  t2215 = -1.*t2109;
  t2293 = 1. + t2215;
  t2335 = -0.135*t2293;
  t2365 = 0.049*t2360;
  t2413 = 0. + t2335 + t2365;
  t2508 = -0.049*t2497;
  t2524 = -0.09*t2518;
  t2534 = 0. + t2508 + t2524;
  t2564 = -0.09*t2497;
  t2581 = 0.049*t2518;
  t2590 = 0. + t2564 + t2581;
  t2624 = -0.049*t2622;
  t2629 = -0.21*t2627;
  t2631 = 0. + t2624 + t2629;
  t2655 = -0.21*t2622;
  t2659 = 0.049*t2627;
  t2660 = 0. + t2655 + t2659;
  t2771 = t2549*t2454*t2360;
  t2772 = -1.*t1619*t2518;
  t2773 = t2771 + t2772;
  t2775 = -1.*t2454*t1619;
  t2776 = -1.*t2549*t2360*t2518;
  t2777 = t2775 + t2776;
  t2676 = -0.0016*t2674;
  t2679 = -0.2707*t2677;
  t2680 = 0. + t2676 + t2679;
  t2694 = -0.2707*t2674;
  t2697 = 0.0016*t2677;
  t2698 = 0. + t2694 + t2697;
  t2779 = t2619*t2773;
  t2780 = t2777*t2627;
  t2781 = t2779 + t2780;
  t2783 = t2619*t2777;
  t2784 = -1.*t2773*t2627;
  t2785 = t2783 + t2784;
  t2713 = 0.0184*t2712;
  t2716 = -0.7055*t2715;
  t2719 = 0. + t2713 + t2716;
  t2729 = -0.7055*t2712;
  t2730 = -0.0184*t2715;
  t2731 = 0. + t2729 + t2730;
  t2787 = t2671*t2781;
  t2788 = t2785*t2677;
  t2789 = t2787 + t2788;
  t2791 = t2671*t2785;
  t2792 = -1.*t2781*t2677;
  t2793 = t2791 + t2792;
  t2742 = -0.0216*t2741;
  t2744 = -1.1135*t2743;
  t2745 = 0. + t2742 + t2744;
  t2750 = -1.1135*t2741;
  t2751 = 0.0216*t2743;
  t2752 = 0. + t2750 + t2751;
  t2795 = t2709*t2789;
  t2796 = t2793*t2715;
  t2797 = t2795 + t2796;
  t2799 = t2709*t2793;
  t2800 = -1.*t2789*t2715;
  t2801 = t2799 + t2800;
  t2817 = t2109*t2454*t2619;
  t2818 = -1.*t2109*t2518*t2627;
  t2819 = t2817 + t2818;
  t2821 = -1.*t2109*t2619*t2518;
  t2822 = -1.*t2109*t2454*t2627;
  t2823 = t2821 + t2822;
  t2825 = t2671*t2819;
  t2826 = t2823*t2677;
  t2827 = t2825 + t2826;
  t2829 = t2671*t2823;
  t2830 = -1.*t2819*t2677;
  t2831 = t2829 + t2830;
  t2833 = t2709*t2827;
  t2834 = t2831*t2715;
  t2835 = t2833 + t2834;
  t2837 = t2709*t2831;
  t2838 = -1.*t2827*t2715;
  t2839 = t2837 + t2838;
  p_output1[0]=0.24925 - 0.135*t1619 + 0.1305*t1619*t2109 - 1.*t1619*t2413 - 1.*t1619*t2360*t2534 - 1.*t2549*t2590 - 1.*t2618*t2631 - 1.*t2649*t2660 - 1.*t2669*t2680 - 1.*t2690*t2698 - 1.*t2707*t2719 - 1.*t2728*t2731 - 1.*t2736*t2745 + 1.1312*(-1.*t2736*t2743 + t2738*t2749) - 0.0306*(t2736*t2738 + t2743*t2749) - 1.*t2749*t2752;
  p_output1[1]=-0.0302 - 0.135*(1. - 1.*t2549) - 0.1305*t2109*t2549 + t2413*t2549 + t2360*t2534*t2549 - 1.*t1619*t2590 + t2631*t2773 + t2660*t2777 + t2680*t2781 + t2698*t2785 + t2719*t2789 + t2731*t2793 + t2745*t2797 + t2752*t2801 - 1.1312*(-1.*t2743*t2797 + t2738*t2801) + 0.0306*(t2738*t2797 + t2743*t2801);
  p_output1[2]=-0.047 - 0.049*t2293 - 0.004500000000000004*t2360 + t2109*t2534 + t2109*t2454*t2631 - 1.*t2109*t2518*t2660 + t2680*t2819 + t2698*t2823 + t2719*t2827 + t2731*t2831 + t2745*t2835 + t2752*t2839 - 1.1312*(-1.*t2743*t2835 + t2738*t2839) + 0.0306*(t2738*t2835 + t2743*t2839);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "p_MultisenseIMU_to_RightToeBottom_mex.hh"

namespace SymExpression
{

void p_MultisenseIMU_to_RightToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
