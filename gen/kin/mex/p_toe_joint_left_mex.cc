/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:21 GMT-05:00
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
  double t4840;
  double t4798;
  double t4846;
  double t4803;
  double t4847;
  double t1074;
  double t4804;
  double t4849;
  double t4851;
  double t4853;
  double t4855;
  double t4856;
  double t4857;
  double t4864;
  double t4865;
  double t4867;
  double t4872;
  double t4861;
  double t4862;
  double t4863;
  double t4878;
  double t4895;
  double t4896;
  double t4897;
  double t4899;
  double t4891;
  double t4893;
  double t4894;
  double t4903;
  double t4904;
  double t4905;
  double t4910;
  double t4912;
  double t4913;
  double t4917;
  double t4921;
  double t4922;
  double t4923;
  double t4928;
  double t4929;
  double t4930;
  double t4933;
  double t4934;
  double t4937;
  double t4940;
  double t4945;
  double t4946;
  double t4948;
  double t4953;
  double t4954;
  double t4955;
  double t4957;
  double t4958;
  double t4959;
  double t4962;
  double t4968;
  double t4970;
  double t4972;
  double t4978;
  double t4979;
  double t4980;
  double t4982;
  double t4983;
  double t4984;
  double t4986;
  double t4989;
  double t4990;
  double t4991;
  double t4997;
  double t4998;
  double t4999;
  double t1185;
  double t4736;
  double t4744;
  double t4745;
  double t4858;
  double t4859;
  double t5015;
  double t5016;
  double t5018;
  double t5020;
  double t5022;
  double t5023;
  double t4869;
  double t4873;
  double t4874;
  double t4879;
  double t4881;
  double t4882;
  double t5025;
  double t5026;
  double t5027;
  double t4898;
  double t4900;
  double t4901;
  double t4906;
  double t4907;
  double t4908;
  double t4915;
  double t4918;
  double t4920;
  double t5039;
  double t5040;
  double t5042;
  double t5044;
  double t5045;
  double t5046;
  double t4925;
  double t4926;
  double t4927;
  double t4939;
  double t4942;
  double t4944;
  double t5048;
  double t5049;
  double t5050;
  double t5052;
  double t5053;
  double t5054;
  double t4950;
  double t4951;
  double t4952;
  double t4961;
  double t4965;
  double t4967;
  double t5056;
  double t5057;
  double t5058;
  double t5061;
  double t5062;
  double t5063;
  double t4974;
  double t4976;
  double t4977;
  double t4985;
  double t4987;
  double t4988;
  double t5065;
  double t5066;
  double t5067;
  double t5069;
  double t5070;
  double t5072;
  double t4994;
  double t4995;
  double t4996;
  double t5074;
  double t5075;
  double t5076;
  double t5078;
  double t5079;
  double t5080;
  double t5093;
  double t5094;
  double t5095;
  double t5102;
  double t5103;
  double t5104;
  double t5106;
  double t5107;
  double t5108;
  double t5110;
  double t5111;
  double t5112;
  double t5114;
  double t5115;
  double t5116;
  double t5118;
  double t5119;
  double t5120;
  double t5122;
  double t5123;
  double t5124;
  double t5126;
  double t5127;
  double t5128;
  double t5130;
  double t5131;
  double t5132;
  double t5134;
  double t5135;
  double t5136;
  double t5138;
  double t5139;
  double t5140;
  t4840 = Cos(var1[3]);
  t4798 = Cos(var1[5]);
  t4846 = Sin(var1[4]);
  t4803 = Sin(var1[3]);
  t4847 = Sin(var1[5]);
  t1074 = Cos(var1[6]);
  t4804 = -1.*t4798*t4803;
  t4849 = t4840*t4846*t4847;
  t4851 = t4804 + t4849;
  t4853 = t4840*t4798*t4846;
  t4855 = t4803*t4847;
  t4856 = t4853 + t4855;
  t4857 = Sin(var1[6]);
  t4864 = Cos(var1[7]);
  t4865 = -1.*t4864;
  t4867 = 1. + t4865;
  t4872 = Sin(var1[7]);
  t4861 = t1074*t4851;
  t4862 = t4856*t4857;
  t4863 = t4861 + t4862;
  t4878 = Cos(var1[4]);
  t4895 = Cos(var1[8]);
  t4896 = -1.*t4895;
  t4897 = 1. + t4896;
  t4899 = Sin(var1[8]);
  t4891 = t4840*t4878*t4864;
  t4893 = t4863*t4872;
  t4894 = t4891 + t4893;
  t4903 = t1074*t4856;
  t4904 = -1.*t4851*t4857;
  t4905 = t4903 + t4904;
  t4910 = Cos(var1[9]);
  t4912 = -1.*t4910;
  t4913 = 1. + t4912;
  t4917 = Sin(var1[9]);
  t4921 = t4895*t4894;
  t4922 = t4905*t4899;
  t4923 = t4921 + t4922;
  t4928 = t4895*t4905;
  t4929 = -1.*t4894*t4899;
  t4930 = t4928 + t4929;
  t4933 = Cos(var1[10]);
  t4934 = -1.*t4933;
  t4937 = 1. + t4934;
  t4940 = Sin(var1[10]);
  t4945 = -1.*t4917*t4923;
  t4946 = t4910*t4930;
  t4948 = t4945 + t4946;
  t4953 = t4910*t4923;
  t4954 = t4917*t4930;
  t4955 = t4953 + t4954;
  t4957 = Cos(var1[11]);
  t4958 = -1.*t4957;
  t4959 = 1. + t4958;
  t4962 = Sin(var1[11]);
  t4968 = t4940*t4948;
  t4970 = t4933*t4955;
  t4972 = t4968 + t4970;
  t4978 = t4933*t4948;
  t4979 = -1.*t4940*t4955;
  t4980 = t4978 + t4979;
  t4982 = Cos(var1[12]);
  t4983 = -1.*t4982;
  t4984 = 1. + t4983;
  t4986 = Sin(var1[12]);
  t4989 = -1.*t4962*t4972;
  t4990 = t4957*t4980;
  t4991 = t4989 + t4990;
  t4997 = t4957*t4972;
  t4998 = t4962*t4980;
  t4999 = t4997 + t4998;
  t1185 = -1.*t1074;
  t4736 = 1. + t1185;
  t4744 = 0.135*t4736;
  t4745 = 0. + t4744;
  t4858 = -0.135*t4857;
  t4859 = 0. + t4858;
  t5015 = t4840*t4798;
  t5016 = t4803*t4846*t4847;
  t5018 = t5015 + t5016;
  t5020 = t4798*t4803*t4846;
  t5022 = -1.*t4840*t4847;
  t5023 = t5020 + t5022;
  t4869 = 0.135*t4867;
  t4873 = 0.049*t4872;
  t4874 = 0. + t4869 + t4873;
  t4879 = -0.049*t4867;
  t4881 = 0.135*t4872;
  t4882 = 0. + t4879 + t4881;
  t5025 = t1074*t5018;
  t5026 = t5023*t4857;
  t5027 = t5025 + t5026;
  t4898 = -0.049*t4897;
  t4900 = -0.09*t4899;
  t4901 = 0. + t4898 + t4900;
  t4906 = -0.09*t4897;
  t4907 = 0.049*t4899;
  t4908 = 0. + t4906 + t4907;
  t4915 = -0.049*t4913;
  t4918 = -0.21*t4917;
  t4920 = 0. + t4915 + t4918;
  t5039 = t4878*t4864*t4803;
  t5040 = t5027*t4872;
  t5042 = t5039 + t5040;
  t5044 = t1074*t5023;
  t5045 = -1.*t5018*t4857;
  t5046 = t5044 + t5045;
  t4925 = -0.21*t4913;
  t4926 = 0.049*t4917;
  t4927 = 0. + t4925 + t4926;
  t4939 = -0.2707*t4937;
  t4942 = 0.0016*t4940;
  t4944 = 0. + t4939 + t4942;
  t5048 = t4895*t5042;
  t5049 = t5046*t4899;
  t5050 = t5048 + t5049;
  t5052 = t4895*t5046;
  t5053 = -1.*t5042*t4899;
  t5054 = t5052 + t5053;
  t4950 = -0.0016*t4937;
  t4951 = -0.2707*t4940;
  t4952 = 0. + t4950 + t4951;
  t4961 = 0.0184*t4959;
  t4965 = -0.7055*t4962;
  t4967 = 0. + t4961 + t4965;
  t5056 = -1.*t4917*t5050;
  t5057 = t4910*t5054;
  t5058 = t5056 + t5057;
  t5061 = t4910*t5050;
  t5062 = t4917*t5054;
  t5063 = t5061 + t5062;
  t4974 = -0.7055*t4959;
  t4976 = -0.0184*t4962;
  t4977 = 0. + t4974 + t4976;
  t4985 = -1.1135*t4984;
  t4987 = 0.0216*t4986;
  t4988 = 0. + t4985 + t4987;
  t5065 = t4940*t5058;
  t5066 = t4933*t5063;
  t5067 = t5065 + t5066;
  t5069 = t4933*t5058;
  t5070 = -1.*t4940*t5063;
  t5072 = t5069 + t5070;
  t4994 = -0.0216*t4984;
  t4995 = -1.1135*t4986;
  t4996 = 0. + t4994 + t4995;
  t5074 = -1.*t4962*t5067;
  t5075 = t4957*t5072;
  t5076 = t5074 + t5075;
  t5078 = t4957*t5067;
  t5079 = t4962*t5072;
  t5080 = t5078 + t5079;
  t5093 = t4878*t1074*t4847;
  t5094 = t4878*t4798*t4857;
  t5095 = t5093 + t5094;
  t5102 = -1.*t4864*t4846;
  t5103 = t5095*t4872;
  t5104 = t5102 + t5103;
  t5106 = t4878*t4798*t1074;
  t5107 = -1.*t4878*t4847*t4857;
  t5108 = t5106 + t5107;
  t5110 = t4895*t5104;
  t5111 = t5108*t4899;
  t5112 = t5110 + t5111;
  t5114 = t4895*t5108;
  t5115 = -1.*t5104*t4899;
  t5116 = t5114 + t5115;
  t5118 = -1.*t4917*t5112;
  t5119 = t4910*t5116;
  t5120 = t5118 + t5119;
  t5122 = t4910*t5112;
  t5123 = t4917*t5116;
  t5124 = t5122 + t5123;
  t5126 = t4940*t5120;
  t5127 = t4933*t5124;
  t5128 = t5126 + t5127;
  t5130 = t4933*t5120;
  t5131 = -1.*t4940*t5124;
  t5132 = t5130 + t5131;
  t5134 = -1.*t4962*t5128;
  t5135 = t4957*t5132;
  t5136 = t5134 + t5135;
  t5138 = t4957*t5128;
  t5139 = t4962*t5132;
  t5140 = t5138 + t5139;
  p_output1[0]=0. + t4745*t4851 + t4856*t4859 + t4863*t4874 + 0.1305*(t4863*t4864 - 1.*t4840*t4872*t4878) + t4840*t4878*t4882 + t4894*t4901 + t4905*t4908 + t4920*t4923 + t4927*t4930 + t4944*t4948 + t4952*t4955 + t4967*t4972 + t4977*t4980 + t4988*t4991 + t4996*t4999 - 0.0216*(t4986*t4991 + t4982*t4999) - 1.1135*(t4982*t4991 - 1.*t4986*t4999) + var1[0];
  p_output1[1]=0. + t4803*t4878*t4882 + t4745*t5018 + t4859*t5023 + t4874*t5027 + 0.1305*(-1.*t4803*t4872*t4878 + t4864*t5027) + t4901*t5042 + t4908*t5046 + t4920*t5050 + t4927*t5054 + t4944*t5058 + t4952*t5063 + t4967*t5067 + t4977*t5072 + t4988*t5076 + t4996*t5080 - 0.0216*(t4986*t5076 + t4982*t5080) - 1.1135*(t4982*t5076 - 1.*t4986*t5080) + var1[1];
  p_output1[2]=0. + t4745*t4847*t4878 + t4798*t4859*t4878 - 1.*t4846*t4882 + t4874*t5095 + 0.1305*(t4846*t4872 + t4864*t5095) + t4901*t5104 + t4908*t5108 + t4920*t5112 + t4927*t5116 + t4944*t5120 + t4952*t5124 + t4967*t5128 + t4977*t5132 + t4988*t5136 + t4996*t5140 - 0.0216*(t4986*t5136 + t4982*t5140) - 1.1135*(t4982*t5136 - 1.*t4986*t5140) + var1[2];
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

#include "p_toe_joint_left_mex.hh"

namespace SymExpression
{

void p_toe_joint_left_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
