/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:35:59 GMT-05:00
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
  double t4411;
  double t5550;
  double t5562;
  double t5501;
  double t5564;
  double t5383;
  double t5580;
  double t5581;
  double t5590;
  double t5559;
  double t5573;
  double t5576;
  double t5591;
  double t5256;
  double t5603;
  double t5607;
  double t5610;
  double t5578;
  double t5596;
  double t5597;
  double t5611;
  double t5140;
  double t5620;
  double t5623;
  double t5624;
  double t5600;
  double t5612;
  double t5616;
  double t5625;
  double t3987;
  double t687;
  double t4830;
  double t5643;
  double t5644;
  double t5648;
  double t5638;
  double t5639;
  double t5640;
  double t5656;
  double t5660;
  double t5661;
  double t5642;
  double t5649;
  double t5652;
  double t5673;
  double t5677;
  double t5682;
  double t5653;
  double t5663;
  double t5670;
  double t5697;
  double t5699;
  double t5704;
  double t5671;
  double t5685;
  double t5686;
  double t5738;
  double t5740;
  double t5742;
  double t5727;
  double t5731;
  double t5733;
  double t5749;
  double t5750;
  double t5754;
  double t5736;
  double t5744;
  double t5746;
  double t5766;
  double t5769;
  double t5770;
  double t5747;
  double t5755;
  double t5756;
  double t5785;
  double t5790;
  double t5793;
  double t5760;
  double t5778;
  double t5780;
  double t5617;
  double t5627;
  double t5628;
  double t5632;
  double t5633;
  double t5635;
  double t5689;
  double t5705;
  double t5710;
  double t5718;
  double t5719;
  double t5720;
  double t5782;
  double t5797;
  double t5799;
  double t5802;
  double t5803;
  double t5804;
  double t5851;
  double t5854;
  double t5875;
  double t5880;
  double t5904;
  double t5905;
  double t5935;
  double t5936;
  double t5833;
  double t5838;
  double t5843;
  double t5844;
  double t5845;
  double t5846;
  double t5849;
  double t5855;
  double t5856;
  double t5857;
  double t5865;
  double t5867;
  double t5872;
  double t5882;
  double t5885;
  double t5886;
  double t5893;
  double t5898;
  double t5899;
  double t5907;
  double t5909;
  double t5911;
  double t5920;
  double t5922;
  double t5926;
  double t5937;
  double t5939;
  double t5940;
  double t5950;
  double t5951;
  double t5952;
  double t5969;
  double t5970;
  double t5972;
  double t5978;
  double t5980;
  double t5983;
  t4411 = Cos(var1[8]);
  t5550 = Cos(var1[10]);
  t5562 = Sin(var1[9]);
  t5501 = Cos(var1[9]);
  t5564 = Sin(var1[10]);
  t5383 = Cos(var1[11]);
  t5580 = -1.*t4411*t5550*t5562;
  t5581 = -1.*t4411*t5501*t5564;
  t5590 = t5580 + t5581;
  t5559 = t4411*t5501*t5550;
  t5573 = -1.*t4411*t5562*t5564;
  t5576 = t5559 + t5573;
  t5591 = Sin(var1[11]);
  t5256 = Cos(var1[12]);
  t5603 = t5383*t5590;
  t5607 = -1.*t5576*t5591;
  t5610 = t5603 + t5607;
  t5578 = t5383*t5576;
  t5596 = t5590*t5591;
  t5597 = t5578 + t5596;
  t5611 = Sin(var1[12]);
  t5140 = Cos(var1[13]);
  t5620 = t5256*t5610;
  t5623 = -1.*t5597*t5611;
  t5624 = t5620 + t5623;
  t5600 = t5256*t5597;
  t5612 = t5610*t5611;
  t5616 = t5600 + t5612;
  t5625 = Sin(var1[13]);
  t3987 = Cos(var1[7]);
  t687 = Sin(var1[8]);
  t4830 = Sin(var1[7]);
  t5643 = -1.*t5501*t4830;
  t5644 = -1.*t3987*t687*t5562;
  t5648 = t5643 + t5644;
  t5638 = t3987*t5501*t687;
  t5639 = -1.*t4830*t5562;
  t5640 = t5638 + t5639;
  t5656 = t5550*t5648;
  t5660 = -1.*t5640*t5564;
  t5661 = t5656 + t5660;
  t5642 = t5550*t5640;
  t5649 = t5648*t5564;
  t5652 = t5642 + t5649;
  t5673 = t5383*t5661;
  t5677 = -1.*t5652*t5591;
  t5682 = t5673 + t5677;
  t5653 = t5383*t5652;
  t5663 = t5661*t5591;
  t5670 = t5653 + t5663;
  t5697 = t5256*t5682;
  t5699 = -1.*t5670*t5611;
  t5704 = t5697 + t5699;
  t5671 = t5256*t5670;
  t5685 = t5682*t5611;
  t5686 = t5671 + t5685;
  t5738 = t3987*t5501;
  t5740 = -1.*t4830*t687*t5562;
  t5742 = t5738 + t5740;
  t5727 = t5501*t4830*t687;
  t5731 = t3987*t5562;
  t5733 = t5727 + t5731;
  t5749 = t5550*t5742;
  t5750 = -1.*t5733*t5564;
  t5754 = t5749 + t5750;
  t5736 = t5550*t5733;
  t5744 = t5742*t5564;
  t5746 = t5736 + t5744;
  t5766 = t5383*t5754;
  t5769 = -1.*t5746*t5591;
  t5770 = t5766 + t5769;
  t5747 = t5383*t5746;
  t5755 = t5754*t5591;
  t5756 = t5747 + t5755;
  t5785 = t5256*t5770;
  t5790 = -1.*t5756*t5611;
  t5793 = t5785 + t5790;
  t5760 = t5256*t5756;
  t5778 = t5770*t5611;
  t5780 = t5760 + t5778;
  t5617 = t5140*t5616;
  t5627 = t5624*t5625;
  t5628 = t5617 + t5627;
  t5632 = t5140*t5624;
  t5633 = -1.*t5616*t5625;
  t5635 = t5632 + t5633;
  t5689 = t5140*t5686;
  t5705 = t5704*t5625;
  t5710 = t5689 + t5705;
  t5718 = t5140*t5704;
  t5719 = -1.*t5686*t5625;
  t5720 = t5718 + t5719;
  t5782 = t5140*t5780;
  t5797 = t5793*t5625;
  t5799 = t5782 + t5797;
  t5802 = t5140*t5793;
  t5803 = -1.*t5780*t5625;
  t5804 = t5802 + t5803;
  t5851 = -1.*t5550;
  t5854 = 1. + t5851;
  t5875 = -1.*t5383;
  t5880 = 1. + t5875;
  t5904 = -1.*t5256;
  t5905 = 1. + t5904;
  t5935 = -1.*t5140;
  t5936 = 1. + t5935;
  t5833 = -1.*t4411;
  t5838 = 1. + t5833;
  t5843 = -1.*t5501;
  t5844 = 1. + t5843;
  t5845 = -0.049*t5844;
  t5846 = -0.09*t5562;
  t5849 = 0. + t5845 + t5846;
  t5855 = -0.049*t5854;
  t5856 = -0.21*t5564;
  t5857 = 0. + t5855 + t5856;
  t5865 = -0.21*t5854;
  t5867 = 0.049*t5564;
  t5872 = 0. + t5865 + t5867;
  t5882 = -0.0016*t5880;
  t5885 = -0.2707*t5591;
  t5886 = 0. + t5882 + t5885;
  t5893 = -0.2707*t5880;
  t5898 = 0.0016*t5591;
  t5899 = 0. + t5893 + t5898;
  t5907 = 0.0184*t5905;
  t5909 = -0.7055*t5611;
  t5911 = 0. + t5907 + t5909;
  t5920 = -0.7055*t5905;
  t5922 = -0.0184*t5611;
  t5926 = 0. + t5920 + t5922;
  t5937 = -0.0216*t5936;
  t5939 = -1.1135*t5625;
  t5940 = 0. + t5937 + t5939;
  t5950 = -1.1135*t5936;
  t5951 = 0.0216*t5625;
  t5952 = 0. + t5950 + t5951;
  t5969 = -0.135*t5838;
  t5970 = 0.049*t687;
  t5972 = 0. + t5969 + t5970;
  t5978 = -0.09*t5844;
  t5980 = 0.049*t5562;
  t5983 = 0. + t5978 + t5980;
  p_output1[0]=0. + t687;
  p_output1[1]=0. + t3987*t4411;
  p_output1[2]=0. + t4411*t4830;
  p_output1[3]=0.;
  p_output1[4]=0. + 0.642788*t5628 + 0.766044*t5635;
  p_output1[5]=0. - 0.642788*t5710 - 0.766044*t5720;
  p_output1[6]=0. - 0.642788*t5799 - 0.766044*t5804;
  p_output1[7]=0.;
  p_output1[8]=0. - 0.766044*t5628 + 0.642788*t5635;
  p_output1[9]=0. + 0.766044*t5710 - 0.642788*t5720;
  p_output1[10]=0. + 0.766044*t5799 - 0.642788*t5804;
  p_output1[11]=0.;
  p_output1[12]=-0.03155 + 0.0306*t5628 - 1.1312*t5635 - 0.049*t5838 + t4411*t5849 + t4411*t5501*t5857 - 1.*t4411*t5562*t5872 + t5576*t5886 + t5590*t5899 + t5597*t5911 + t5610*t5926 + t5616*t5940 + t5624*t5952 - 0.004500000000000004*t687;
  p_output1[13]=0. + 0.135*(1. - 1.*t3987) + 0.1305*t3987*t4411 - 0.0306*t5710 + 1.1312*t5720 - 1.*t5640*t5857 - 1.*t5648*t5872 - 1.*t5652*t5886 - 1.*t5661*t5899 - 1.*t5670*t5911 - 1.*t5682*t5926 - 1.*t5686*t5940 - 1.*t5704*t5952 - 1.*t3987*t5972 + t4830*t5983 - 1.*t3987*t5849*t687;
  p_output1[14]=-0.07996 - 0.135*t4830 + 0.1305*t4411*t4830 - 0.0306*t5799 + 1.1312*t5804 - 1.*t5733*t5857 - 1.*t5742*t5872 - 1.*t5746*t5886 - 1.*t5754*t5899 - 1.*t5756*t5911 - 1.*t5770*t5926 - 1.*t5780*t5940 - 1.*t5793*t5952 - 1.*t4830*t5972 - 1.*t3987*t5983 - 1.*t4830*t5849*t687;
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
    ( !(mrows == 14 && ncols == 1) && 
      !(mrows == 1 && ncols == 14))) 
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

#include "H_VectorNav_to_RightToeBottom_mex.hh"

namespace SymExpression
{

void H_VectorNav_to_RightToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
