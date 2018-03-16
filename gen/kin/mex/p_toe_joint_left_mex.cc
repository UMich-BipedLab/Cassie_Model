/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 11:08:08 GMT-04:00
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
  double t4795;
  double t4753;
  double t4798;
  double t4754;
  double t4799;
  double t1687;
  double t4788;
  double t4800;
  double t4802;
  double t4805;
  double t4806;
  double t4808;
  double t4810;
  double t4818;
  double t4819;
  double t4820;
  double t4822;
  double t4815;
  double t4816;
  double t4817;
  double t4828;
  double t4848;
  double t4849;
  double t4850;
  double t4853;
  double t4843;
  double t4844;
  double t4846;
  double t4857;
  double t4858;
  double t4859;
  double t4864;
  double t4865;
  double t4866;
  double t4868;
  double t4872;
  double t4874;
  double t4876;
  double t4882;
  double t4883;
  double t4884;
  double t4886;
  double t4887;
  double t4888;
  double t4890;
  double t4896;
  double t4898;
  double t4899;
  double t4907;
  double t4908;
  double t4909;
  double t4911;
  double t4912;
  double t4913;
  double t4915;
  double t4918;
  double t4920;
  double t4921;
  double t4931;
  double t4932;
  double t4933;
  double t4936;
  double t4937;
  double t4938;
  double t4940;
  double t4943;
  double t4944;
  double t4945;
  double t4950;
  double t4951;
  double t4953;
  double t4689;
  double t4694;
  double t4695;
  double t4747;
  double t4811;
  double t4812;
  double t4965;
  double t4966;
  double t4968;
  double t4971;
  double t4974;
  double t4975;
  double t4821;
  double t4823;
  double t4824;
  double t4831;
  double t4832;
  double t4833;
  double t4978;
  double t4979;
  double t4981;
  double t4852;
  double t4854;
  double t4855;
  double t4860;
  double t4861;
  double t4862;
  double t4867;
  double t4869;
  double t4871;
  double t4990;
  double t4991;
  double t4994;
  double t4997;
  double t4998;
  double t4999;
  double t4879;
  double t4880;
  double t4881;
  double t4889;
  double t4892;
  double t4893;
  double t5002;
  double t5003;
  double t5004;
  double t5006;
  double t5007;
  double t5008;
  double t4903;
  double t4904;
  double t4905;
  double t4914;
  double t4916;
  double t4917;
  double t5010;
  double t5011;
  double t5012;
  double t5014;
  double t5015;
  double t5016;
  double t4926;
  double t4927;
  double t4929;
  double t4939;
  double t4941;
  double t4942;
  double t5019;
  double t5020;
  double t5021;
  double t5023;
  double t5024;
  double t5025;
  double t4947;
  double t4948;
  double t4949;
  double t5027;
  double t5028;
  double t5029;
  double t5032;
  double t5033;
  double t5034;
  double t5047;
  double t5048;
  double t5049;
  double t5056;
  double t5057;
  double t5058;
  double t5060;
  double t5061;
  double t5062;
  double t5064;
  double t5065;
  double t5066;
  double t5068;
  double t5069;
  double t5070;
  double t5072;
  double t5073;
  double t5074;
  double t5076;
  double t5077;
  double t5078;
  double t5080;
  double t5081;
  double t5082;
  double t5084;
  double t5085;
  double t5086;
  double t5088;
  double t5089;
  double t5090;
  double t5092;
  double t5093;
  double t5094;
  t4795 = Cos(var1[3]);
  t4753 = Cos(var1[5]);
  t4798 = Sin(var1[4]);
  t4754 = Sin(var1[3]);
  t4799 = Sin(var1[5]);
  t1687 = Cos(var1[6]);
  t4788 = -1.*t4753*t4754;
  t4800 = t4795*t4798*t4799;
  t4802 = t4788 + t4800;
  t4805 = t4795*t4753*t4798;
  t4806 = t4754*t4799;
  t4808 = t4805 + t4806;
  t4810 = Sin(var1[6]);
  t4818 = Cos(var1[7]);
  t4819 = -1.*t4818;
  t4820 = 1. + t4819;
  t4822 = Sin(var1[7]);
  t4815 = t1687*t4802;
  t4816 = t4808*t4810;
  t4817 = t4815 + t4816;
  t4828 = Cos(var1[4]);
  t4848 = Cos(var1[8]);
  t4849 = -1.*t4848;
  t4850 = 1. + t4849;
  t4853 = Sin(var1[8]);
  t4843 = t4795*t4828*t4818;
  t4844 = t4817*t4822;
  t4846 = t4843 + t4844;
  t4857 = t1687*t4808;
  t4858 = -1.*t4802*t4810;
  t4859 = t4857 + t4858;
  t4864 = Cos(var1[9]);
  t4865 = -1.*t4864;
  t4866 = 1. + t4865;
  t4868 = Sin(var1[9]);
  t4872 = t4848*t4846;
  t4874 = t4859*t4853;
  t4876 = t4872 + t4874;
  t4882 = t4848*t4859;
  t4883 = -1.*t4846*t4853;
  t4884 = t4882 + t4883;
  t4886 = Cos(var1[10]);
  t4887 = -1.*t4886;
  t4888 = 1. + t4887;
  t4890 = Sin(var1[10]);
  t4896 = -1.*t4868*t4876;
  t4898 = t4864*t4884;
  t4899 = t4896 + t4898;
  t4907 = t4864*t4876;
  t4908 = t4868*t4884;
  t4909 = t4907 + t4908;
  t4911 = Cos(var1[11]);
  t4912 = -1.*t4911;
  t4913 = 1. + t4912;
  t4915 = Sin(var1[11]);
  t4918 = t4890*t4899;
  t4920 = t4886*t4909;
  t4921 = t4918 + t4920;
  t4931 = t4886*t4899;
  t4932 = -1.*t4890*t4909;
  t4933 = t4931 + t4932;
  t4936 = Cos(var1[12]);
  t4937 = -1.*t4936;
  t4938 = 1. + t4937;
  t4940 = Sin(var1[12]);
  t4943 = -1.*t4915*t4921;
  t4944 = t4911*t4933;
  t4945 = t4943 + t4944;
  t4950 = t4911*t4921;
  t4951 = t4915*t4933;
  t4953 = t4950 + t4951;
  t4689 = -1.*t1687;
  t4694 = 1. + t4689;
  t4695 = 0.135*t4694;
  t4747 = 0. + t4695;
  t4811 = -0.135*t4810;
  t4812 = 0. + t4811;
  t4965 = t4795*t4753;
  t4966 = t4754*t4798*t4799;
  t4968 = t4965 + t4966;
  t4971 = t4753*t4754*t4798;
  t4974 = -1.*t4795*t4799;
  t4975 = t4971 + t4974;
  t4821 = 0.135*t4820;
  t4823 = 0.049*t4822;
  t4824 = 0. + t4821 + t4823;
  t4831 = -0.049*t4820;
  t4832 = 0.135*t4822;
  t4833 = 0. + t4831 + t4832;
  t4978 = t1687*t4968;
  t4979 = t4975*t4810;
  t4981 = t4978 + t4979;
  t4852 = -0.049*t4850;
  t4854 = -0.09*t4853;
  t4855 = 0. + t4852 + t4854;
  t4860 = -0.09*t4850;
  t4861 = 0.049*t4853;
  t4862 = 0. + t4860 + t4861;
  t4867 = -0.049*t4866;
  t4869 = -0.21*t4868;
  t4871 = 0. + t4867 + t4869;
  t4990 = t4828*t4818*t4754;
  t4991 = t4981*t4822;
  t4994 = t4990 + t4991;
  t4997 = t1687*t4975;
  t4998 = -1.*t4968*t4810;
  t4999 = t4997 + t4998;
  t4879 = -0.21*t4866;
  t4880 = 0.049*t4868;
  t4881 = 0. + t4879 + t4880;
  t4889 = -0.2707*t4888;
  t4892 = 0.0016*t4890;
  t4893 = 0. + t4889 + t4892;
  t5002 = t4848*t4994;
  t5003 = t4999*t4853;
  t5004 = t5002 + t5003;
  t5006 = t4848*t4999;
  t5007 = -1.*t4994*t4853;
  t5008 = t5006 + t5007;
  t4903 = -0.0016*t4888;
  t4904 = -0.2707*t4890;
  t4905 = 0. + t4903 + t4904;
  t4914 = 0.0184*t4913;
  t4916 = -0.7055*t4915;
  t4917 = 0. + t4914 + t4916;
  t5010 = -1.*t4868*t5004;
  t5011 = t4864*t5008;
  t5012 = t5010 + t5011;
  t5014 = t4864*t5004;
  t5015 = t4868*t5008;
  t5016 = t5014 + t5015;
  t4926 = -0.7055*t4913;
  t4927 = -0.0184*t4915;
  t4929 = 0. + t4926 + t4927;
  t4939 = -1.1135*t4938;
  t4941 = 0.0216*t4940;
  t4942 = 0. + t4939 + t4941;
  t5019 = t4890*t5012;
  t5020 = t4886*t5016;
  t5021 = t5019 + t5020;
  t5023 = t4886*t5012;
  t5024 = -1.*t4890*t5016;
  t5025 = t5023 + t5024;
  t4947 = -0.0216*t4938;
  t4948 = -1.1135*t4940;
  t4949 = 0. + t4947 + t4948;
  t5027 = -1.*t4915*t5021;
  t5028 = t4911*t5025;
  t5029 = t5027 + t5028;
  t5032 = t4911*t5021;
  t5033 = t4915*t5025;
  t5034 = t5032 + t5033;
  t5047 = t4828*t1687*t4799;
  t5048 = t4828*t4753*t4810;
  t5049 = t5047 + t5048;
  t5056 = -1.*t4818*t4798;
  t5057 = t5049*t4822;
  t5058 = t5056 + t5057;
  t5060 = t4828*t4753*t1687;
  t5061 = -1.*t4828*t4799*t4810;
  t5062 = t5060 + t5061;
  t5064 = t4848*t5058;
  t5065 = t5062*t4853;
  t5066 = t5064 + t5065;
  t5068 = t4848*t5062;
  t5069 = -1.*t5058*t4853;
  t5070 = t5068 + t5069;
  t5072 = -1.*t4868*t5066;
  t5073 = t4864*t5070;
  t5074 = t5072 + t5073;
  t5076 = t4864*t5066;
  t5077 = t4868*t5070;
  t5078 = t5076 + t5077;
  t5080 = t4890*t5074;
  t5081 = t4886*t5078;
  t5082 = t5080 + t5081;
  t5084 = t4886*t5074;
  t5085 = -1.*t4890*t5078;
  t5086 = t5084 + t5085;
  t5088 = -1.*t4915*t5082;
  t5089 = t4911*t5086;
  t5090 = t5088 + t5089;
  t5092 = t4911*t5082;
  t5093 = t4915*t5086;
  t5094 = t5092 + t5093;
  p_output1[0]=0. + t4747*t4802 + t4808*t4812 + t4817*t4824 + 0.1305*(t4817*t4818 - 1.*t4795*t4822*t4828) + t4795*t4828*t4833 + t4846*t4855 + t4859*t4862 + t4871*t4876 + t4881*t4884 + t4893*t4899 + t4905*t4909 + t4917*t4921 + t4929*t4933 + t4942*t4945 + t4949*t4953 - 0.0216*(t4940*t4945 + t4936*t4953) - 1.1135*(t4936*t4945 - 1.*t4940*t4953) + var1[0];
  p_output1[1]=0. + t4754*t4828*t4833 + t4747*t4968 + t4812*t4975 + t4824*t4981 + 0.1305*(-1.*t4754*t4822*t4828 + t4818*t4981) + t4855*t4994 + t4862*t4999 + t4871*t5004 + t4881*t5008 + t4893*t5012 + t4905*t5016 + t4917*t5021 + t4929*t5025 + t4942*t5029 + t4949*t5034 - 0.0216*(t4940*t5029 + t4936*t5034) - 1.1135*(t4936*t5029 - 1.*t4940*t5034) + var1[1];
  p_output1[2]=0. + t4747*t4799*t4828 + t4753*t4812*t4828 - 1.*t4798*t4833 + t4824*t5049 + 0.1305*(t4798*t4822 + t4818*t5049) + t4855*t5058 + t4862*t5062 + t4871*t5066 + t4881*t5070 + t4893*t5074 + t4905*t5078 + t4917*t5082 + t4929*t5086 + t4942*t5090 + t4949*t5094 - 0.0216*(t4940*t5090 + t4936*t5094) - 1.1135*(t4936*t5090 - 1.*t4940*t5094) + var1[2];
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
