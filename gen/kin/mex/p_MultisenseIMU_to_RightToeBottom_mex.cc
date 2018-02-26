/*
 * Automatically Generated from Mathematica.
 * Mon 26 Feb 2018 15:42:38 GMT-05:00
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
  double t401;
  double t1523;
  double t5338;
  double t5478;
  double t5492;
  double t5501;
  double t5515;
  double t5559;
  double t5609;
  double t5614;
  double t5619;
  double t5623;
  double t5592;
  double t5600;
  double t5602;
  double t5630;
  double t5633;
  double t5640;
  double t5657;
  double t5658;
  double t5660;
  double t5663;
  double t5651;
  double t5653;
  double t5654;
  double t5667;
  double t5669;
  double t5670;
  double t5684;
  double t5685;
  double t5687;
  double t5690;
  double t5679;
  double t5681;
  double t5682;
  double t5694;
  double t5696;
  double t5697;
  double t5705;
  double t5706;
  double t5707;
  double t5709;
  double t5702;
  double t5703;
  double t5704;
  double t5713;
  double t5714;
  double t5715;
  double t2161;
  double t2323;
  double t4333;
  double t5403;
  double t5429;
  double t5504;
  double t5537;
  double t5548;
  double t5564;
  double t5566;
  double t5567;
  double t5620;
  double t5626;
  double t5627;
  double t5642;
  double t5645;
  double t5646;
  double t5736;
  double t5737;
  double t5738;
  double t5740;
  double t5741;
  double t5742;
  double t5661;
  double t5664;
  double t5665;
  double t5671;
  double t5672;
  double t5675;
  double t5744;
  double t5745;
  double t5746;
  double t5748;
  double t5749;
  double t5750;
  double t5688;
  double t5691;
  double t5692;
  double t5698;
  double t5699;
  double t5700;
  double t5752;
  double t5753;
  double t5754;
  double t5756;
  double t5757;
  double t5758;
  double t5708;
  double t5710;
  double t5711;
  double t5716;
  double t5717;
  double t5718;
  double t5760;
  double t5761;
  double t5762;
  double t5764;
  double t5765;
  double t5766;
  double t5782;
  double t5783;
  double t5784;
  double t5786;
  double t5787;
  double t5788;
  double t5790;
  double t5791;
  double t5792;
  double t5794;
  double t5795;
  double t5796;
  double t5798;
  double t5799;
  double t5800;
  double t5802;
  double t5803;
  double t5804;
  t401 = Sin(var1[7]);
  t1523 = Cos(var1[8]);
  t5338 = Sin(var1[8]);
  t5478 = Cos(var1[9]);
  t5492 = -1.*t5478;
  t5501 = 1. + t5492;
  t5515 = Sin(var1[9]);
  t5559 = Cos(var1[7]);
  t5609 = Cos(var1[10]);
  t5614 = -1.*t5609;
  t5619 = 1. + t5614;
  t5623 = Sin(var1[10]);
  t5592 = t5478*t401*t5338;
  t5600 = t5559*t5515;
  t5602 = t5592 + t5600;
  t5630 = t5559*t5478;
  t5633 = -1.*t401*t5338*t5515;
  t5640 = t5630 + t5633;
  t5657 = Cos(var1[11]);
  t5658 = -1.*t5657;
  t5660 = 1. + t5658;
  t5663 = Sin(var1[11]);
  t5651 = t5609*t5602;
  t5653 = t5640*t5623;
  t5654 = t5651 + t5653;
  t5667 = t5609*t5640;
  t5669 = -1.*t5602*t5623;
  t5670 = t5667 + t5669;
  t5684 = Cos(var1[12]);
  t5685 = -1.*t5684;
  t5687 = 1. + t5685;
  t5690 = Sin(var1[12]);
  t5679 = t5657*t5654;
  t5681 = t5670*t5663;
  t5682 = t5679 + t5681;
  t5694 = t5657*t5670;
  t5696 = -1.*t5654*t5663;
  t5697 = t5694 + t5696;
  t5705 = Cos(var1[13]);
  t5706 = -1.*t5705;
  t5707 = 1. + t5706;
  t5709 = Sin(var1[13]);
  t5702 = t5684*t5682;
  t5703 = t5697*t5690;
  t5704 = t5702 + t5703;
  t5713 = t5684*t5697;
  t5714 = -1.*t5682*t5690;
  t5715 = t5713 + t5714;
  t2161 = -1.*t1523;
  t2323 = 1. + t2161;
  t4333 = -0.135*t2323;
  t5403 = 0.049*t5338;
  t5429 = 0. + t4333 + t5403;
  t5504 = -0.049*t5501;
  t5537 = -0.09*t5515;
  t5548 = 0. + t5504 + t5537;
  t5564 = -0.09*t5501;
  t5566 = 0.049*t5515;
  t5567 = 0. + t5564 + t5566;
  t5620 = -0.049*t5619;
  t5626 = -0.21*t5623;
  t5627 = 0. + t5620 + t5626;
  t5642 = -0.21*t5619;
  t5645 = 0.049*t5623;
  t5646 = 0. + t5642 + t5645;
  t5736 = t5559*t5478*t5338;
  t5737 = -1.*t401*t5515;
  t5738 = t5736 + t5737;
  t5740 = -1.*t5478*t401;
  t5741 = -1.*t5559*t5338*t5515;
  t5742 = t5740 + t5741;
  t5661 = -0.0016*t5660;
  t5664 = -0.2707*t5663;
  t5665 = 0. + t5661 + t5664;
  t5671 = -0.2707*t5660;
  t5672 = 0.0016*t5663;
  t5675 = 0. + t5671 + t5672;
  t5744 = t5609*t5738;
  t5745 = t5742*t5623;
  t5746 = t5744 + t5745;
  t5748 = t5609*t5742;
  t5749 = -1.*t5738*t5623;
  t5750 = t5748 + t5749;
  t5688 = 0.0184*t5687;
  t5691 = -0.7055*t5690;
  t5692 = 0. + t5688 + t5691;
  t5698 = -0.7055*t5687;
  t5699 = -0.0184*t5690;
  t5700 = 0. + t5698 + t5699;
  t5752 = t5657*t5746;
  t5753 = t5750*t5663;
  t5754 = t5752 + t5753;
  t5756 = t5657*t5750;
  t5757 = -1.*t5746*t5663;
  t5758 = t5756 + t5757;
  t5708 = -0.0216*t5707;
  t5710 = -1.1135*t5709;
  t5711 = 0. + t5708 + t5710;
  t5716 = -1.1135*t5707;
  t5717 = 0.0216*t5709;
  t5718 = 0. + t5716 + t5717;
  t5760 = t5684*t5754;
  t5761 = t5758*t5690;
  t5762 = t5760 + t5761;
  t5764 = t5684*t5758;
  t5765 = -1.*t5754*t5690;
  t5766 = t5764 + t5765;
  t5782 = t1523*t5478*t5609;
  t5783 = -1.*t1523*t5515*t5623;
  t5784 = t5782 + t5783;
  t5786 = -1.*t1523*t5609*t5515;
  t5787 = -1.*t1523*t5478*t5623;
  t5788 = t5786 + t5787;
  t5790 = t5657*t5784;
  t5791 = t5788*t5663;
  t5792 = t5790 + t5791;
  t5794 = t5657*t5788;
  t5795 = -1.*t5784*t5663;
  t5796 = t5794 + t5795;
  t5798 = t5684*t5792;
  t5799 = t5796*t5690;
  t5800 = t5798 + t5799;
  t5802 = t5684*t5796;
  t5803 = -1.*t5792*t5690;
  t5804 = t5802 + t5803;
  p_output1[0]=0.24925 - 0.135*t401 + 0.1305*t1523*t401 - 1.*t401*t5429 - 1.*t401*t5338*t5548 - 1.*t5559*t5567 - 1.*t5602*t5627 - 1.*t5640*t5646 - 1.*t5654*t5665 - 1.*t5670*t5675 - 1.*t5682*t5692 - 1.*t5697*t5700 - 1.*t5704*t5711 + 1.1312*(-1.*t5704*t5709 + t5705*t5715) - 0.0306*(t5704*t5705 + t5709*t5715) - 1.*t5715*t5718;
  p_output1[1]=-0.0302 - 0.135*(1. - 1.*t5559) - 0.1305*t1523*t5559 + t5429*t5559 + t5338*t5548*t5559 - 1.*t401*t5567 + t5627*t5738 + t5646*t5742 + t5665*t5746 + t5675*t5750 + t5692*t5754 + t5700*t5758 + t5711*t5762 + t5718*t5766 - 1.1312*(-1.*t5709*t5762 + t5705*t5766) + 0.0306*(t5705*t5762 + t5709*t5766);
  p_output1[2]=-0.047 - 0.049*t2323 - 0.004500000000000004*t5338 + t1523*t5548 + t1523*t5478*t5627 - 1.*t1523*t5515*t5646 + t5665*t5784 + t5675*t5788 + t5692*t5792 + t5700*t5796 + t5711*t5800 + t5718*t5804 - 1.1312*(-1.*t5709*t5800 + t5705*t5804) + 0.0306*(t5705*t5800 + t5709*t5804);
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
