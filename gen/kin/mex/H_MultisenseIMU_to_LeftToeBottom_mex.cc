/*
 * Automatically Generated from Mathematica.
 * Mon 26 Feb 2018 15:42:39 GMT-05:00
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
  double t168;
  double t439;
  double t2131;
  double t1279;
  double t5678;
  double t5694;
  double t5725;
  double t5681;
  double t5698;
  double t5701;
  double t5653;
  double t5728;
  double t5729;
  double t5739;
  double t5752;
  double t5721;
  double t5743;
  double t5748;
  double t5649;
  double t5764;
  double t5768;
  double t5772;
  double t5780;
  double t5750;
  double t5775;
  double t5776;
  double t5630;
  double t5782;
  double t5785;
  double t5788;
  double t5807;
  double t5779;
  double t5794;
  double t5797;
  double t5537;
  double t5810;
  double t5812;
  double t5815;
  double t5838;
  double t5839;
  double t5840;
  double t5842;
  double t5843;
  double t5844;
  double t5841;
  double t5845;
  double t5846;
  double t5850;
  double t5853;
  double t5854;
  double t5847;
  double t5855;
  double t5856;
  double t5859;
  double t5861;
  double t5864;
  double t5858;
  double t5870;
  double t5871;
  double t5873;
  double t5875;
  double t5876;
  double t5888;
  double t5889;
  double t5891;
  double t5895;
  double t5896;
  double t5897;
  double t5892;
  double t5898;
  double t5899;
  double t5901;
  double t5902;
  double t5903;
  double t5900;
  double t5904;
  double t5905;
  double t5907;
  double t5908;
  double t5909;
  double t5802;
  double t5816;
  double t5817;
  double t5826;
  double t5829;
  double t5832;
  double t5872;
  double t5878;
  double t5879;
  double t5881;
  double t5883;
  double t5884;
  double t5906;
  double t5910;
  double t5913;
  double t5917;
  double t5918;
  double t5919;
  double t5944;
  double t5945;
  double t5954;
  double t5955;
  double t5964;
  double t5965;
  double t5974;
  double t5975;
  double t5984;
  double t5985;
  double t5938;
  double t5939;
  double t5940;
  double t5941;
  double t5942;
  double t5946;
  double t5947;
  double t5948;
  double t5950;
  double t5951;
  double t5952;
  double t5956;
  double t5957;
  double t5958;
  double t5960;
  double t5961;
  double t5962;
  double t5966;
  double t5967;
  double t5968;
  double t5970;
  double t5971;
  double t5972;
  double t5976;
  double t5977;
  double t5978;
  double t5980;
  double t5981;
  double t5982;
  double t5986;
  double t5987;
  double t5988;
  double t5990;
  double t5991;
  double t5992;
  t168 = Cos(var1[1]);
  t439 = Sin(var1[0]);
  t2131 = Sin(var1[1]);
  t1279 = Cos(var1[0]);
  t5678 = Cos(var1[2]);
  t5694 = Sin(var1[2]);
  t5725 = Cos(var1[3]);
  t5681 = t5678*t439*t2131;
  t5698 = t1279*t5694;
  t5701 = t5681 + t5698;
  t5653 = Sin(var1[3]);
  t5728 = t1279*t5678;
  t5729 = -1.*t439*t2131*t5694;
  t5739 = t5728 + t5729;
  t5752 = Cos(var1[4]);
  t5721 = -1.*t5653*t5701;
  t5743 = t5725*t5739;
  t5748 = t5721 + t5743;
  t5649 = Sin(var1[4]);
  t5764 = t5725*t5701;
  t5768 = t5653*t5739;
  t5772 = t5764 + t5768;
  t5780 = Cos(var1[5]);
  t5750 = t5649*t5748;
  t5775 = t5752*t5772;
  t5776 = t5750 + t5775;
  t5630 = Sin(var1[5]);
  t5782 = t5752*t5748;
  t5785 = -1.*t5649*t5772;
  t5788 = t5782 + t5785;
  t5807 = Cos(var1[6]);
  t5779 = -1.*t5630*t5776;
  t5794 = t5780*t5788;
  t5797 = t5779 + t5794;
  t5537 = Sin(var1[6]);
  t5810 = t5780*t5776;
  t5812 = t5630*t5788;
  t5815 = t5810 + t5812;
  t5838 = t1279*t5678*t2131;
  t5839 = -1.*t439*t5694;
  t5840 = t5838 + t5839;
  t5842 = -1.*t5678*t439;
  t5843 = -1.*t1279*t2131*t5694;
  t5844 = t5842 + t5843;
  t5841 = -1.*t5653*t5840;
  t5845 = t5725*t5844;
  t5846 = t5841 + t5845;
  t5850 = t5725*t5840;
  t5853 = t5653*t5844;
  t5854 = t5850 + t5853;
  t5847 = t5649*t5846;
  t5855 = t5752*t5854;
  t5856 = t5847 + t5855;
  t5859 = t5752*t5846;
  t5861 = -1.*t5649*t5854;
  t5864 = t5859 + t5861;
  t5858 = -1.*t5630*t5856;
  t5870 = t5780*t5864;
  t5871 = t5858 + t5870;
  t5873 = t5780*t5856;
  t5875 = t5630*t5864;
  t5876 = t5873 + t5875;
  t5888 = -1.*t168*t5678*t5653;
  t5889 = -1.*t5725*t168*t5694;
  t5891 = t5888 + t5889;
  t5895 = t5725*t168*t5678;
  t5896 = -1.*t168*t5653*t5694;
  t5897 = t5895 + t5896;
  t5892 = t5649*t5891;
  t5898 = t5752*t5897;
  t5899 = t5892 + t5898;
  t5901 = t5752*t5891;
  t5902 = -1.*t5649*t5897;
  t5903 = t5901 + t5902;
  t5900 = -1.*t5630*t5899;
  t5904 = t5780*t5903;
  t5905 = t5900 + t5904;
  t5907 = t5780*t5899;
  t5908 = t5630*t5903;
  t5909 = t5907 + t5908;
  t5802 = t5537*t5797;
  t5816 = t5807*t5815;
  t5817 = t5802 + t5816;
  t5826 = t5807*t5797;
  t5829 = -1.*t5537*t5815;
  t5832 = t5826 + t5829;
  t5872 = t5537*t5871;
  t5878 = t5807*t5876;
  t5879 = t5872 + t5878;
  t5881 = t5807*t5871;
  t5883 = -1.*t5537*t5876;
  t5884 = t5881 + t5883;
  t5906 = t5537*t5905;
  t5910 = t5807*t5909;
  t5913 = t5906 + t5910;
  t5917 = t5807*t5905;
  t5918 = -1.*t5537*t5909;
  t5919 = t5917 + t5918;
  t5944 = -1.*t5678;
  t5945 = 1. + t5944;
  t5954 = -1.*t5725;
  t5955 = 1. + t5954;
  t5964 = -1.*t5752;
  t5965 = 1. + t5964;
  t5974 = -1.*t5780;
  t5975 = 1. + t5974;
  t5984 = -1.*t5807;
  t5985 = 1. + t5984;
  t5938 = -1.*t168;
  t5939 = 1. + t5938;
  t5940 = 0.135*t5939;
  t5941 = 0.049*t2131;
  t5942 = 0. + t5940 + t5941;
  t5946 = -0.049*t5945;
  t5947 = -0.09*t5694;
  t5948 = 0. + t5946 + t5947;
  t5950 = -0.09*t5945;
  t5951 = 0.049*t5694;
  t5952 = 0. + t5950 + t5951;
  t5956 = -0.049*t5955;
  t5957 = -0.21*t5653;
  t5958 = 0. + t5956 + t5957;
  t5960 = -0.21*t5955;
  t5961 = 0.049*t5653;
  t5962 = 0. + t5960 + t5961;
  t5966 = -0.2707*t5965;
  t5967 = 0.0016*t5649;
  t5968 = 0. + t5966 + t5967;
  t5970 = -0.0016*t5965;
  t5971 = -0.2707*t5649;
  t5972 = 0. + t5970 + t5971;
  t5976 = 0.0184*t5975;
  t5977 = -0.7055*t5630;
  t5978 = 0. + t5976 + t5977;
  t5980 = -0.7055*t5975;
  t5981 = -0.0184*t5630;
  t5982 = 0. + t5980 + t5981;
  t5986 = -1.1135*t5985;
  t5987 = 0.0216*t5537;
  t5988 = 0. + t5986 + t5987;
  t5990 = -0.0216*t5985;
  t5991 = -1.1135*t5537;
  t5992 = 0. + t5990 + t5991;
  p_output1[0]=0. + t168*t439;
  p_output1[1]=0. - 1.*t1279*t168;
  p_output1[2]=0. + t2131;
  p_output1[3]=0.;
  p_output1[4]=0. - 0.642788*t5817 - 0.766044*t5832;
  p_output1[5]=0. + 0.642788*t5879 + 0.766044*t5884;
  p_output1[6]=0. + 0.642788*t5913 + 0.766044*t5919;
  p_output1[7]=0.;
  p_output1[8]=0. + 0.766044*t5817 - 0.642788*t5832;
  p_output1[9]=0. - 0.766044*t5879 + 0.642788*t5884;
  p_output1[10]=0. - 0.766044*t5913 + 0.642788*t5919;
  p_output1[11]=0.;
  p_output1[12]=0.24925 + 0.135*t439 - 0.1305*t168*t439 - 0.0306*t5817 + 1.1312*t5832 - 1.*t439*t5942 - 1.*t2131*t439*t5948 - 1.*t1279*t5952 - 1.*t5701*t5958 - 1.*t5739*t5962 - 1.*t5748*t5968 - 1.*t5772*t5972 - 1.*t5776*t5978 - 1.*t5788*t5982 - 1.*t5797*t5988 - 1.*t5815*t5992;
  p_output1[13]=-0.0302 + 0.135*(1. - 1.*t1279) + 0.1305*t1279*t168 + 0.0306*t5879 - 1.1312*t5884 + t1279*t5942 + t1279*t2131*t5948 - 1.*t439*t5952 + t5840*t5958 + t5844*t5962 + t5846*t5968 + t5854*t5972 + t5856*t5978 + t5864*t5982 + t5871*t5988 + t5876*t5992;
  p_output1[14]=-0.047 + 0.004500000000000004*t2131 + 0.0306*t5913 - 1.1312*t5919 - 0.049*t5939 + t168*t5948 + t168*t5678*t5958 - 1.*t168*t5694*t5962 + t5891*t5968 + t5897*t5972 + t5899*t5978 + t5903*t5982 + t5905*t5988 + t5909*t5992;
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

#include "H_MultisenseIMU_to_LeftToeBottom_mex.hh"

namespace SymExpression
{

void H_MultisenseIMU_to_LeftToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
