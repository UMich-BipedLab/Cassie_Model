/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:11:22 GMT-05:00
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
  double t1230;
  double t1482;
  double t2481;
  double t1758;
  double t4549;
  double t1442;
  double t4586;
  double t4587;
  double t4607;
  double t2221;
  double t4551;
  double t4575;
  double t4611;
  double t938;
  double t4654;
  double t4662;
  double t4669;
  double t1237;
  double t1361;
  double t1379;
  double t4581;
  double t4623;
  double t4641;
  double t4642;
  double t4643;
  double t4647;
  double t4676;
  double t4702;
  double t4649;
  double t4679;
  double t4681;
  double t673;
  double t4705;
  double t4706;
  double t4709;
  double t4719;
  double t4695;
  double t4711;
  double t4716;
  double t531;
  double t4721;
  double t4744;
  double t4746;
  double t102;
  double t4783;
  double t4785;
  double t4786;
  double t4774;
  double t4775;
  double t4780;
  double t4810;
  double t4813;
  double t4815;
  double t4770;
  double t4781;
  double t4788;
  double t4792;
  double t4794;
  double t4797;
  double t4805;
  double t4817;
  double t4819;
  double t4822;
  double t4823;
  double t4825;
  double t4756;
  double t4821;
  double t4833;
  double t4835;
  double t4837;
  double t4838;
  double t4840;
  double t4874;
  double t4876;
  double t4879;
  double t4856;
  double t4857;
  double t4861;
  double t4864;
  double t4866;
  double t4867;
  double t4871;
  double t4880;
  double t4886;
  double t4889;
  double t4893;
  double t4895;
  double t4888;
  double t4901;
  double t4904;
  double t4908;
  double t4909;
  double t4913;
  double t4717;
  double t4748;
  double t4750;
  double t4758;
  double t4761;
  double t4763;
  double t4836;
  double t4841;
  double t4843;
  double t4846;
  double t4848;
  double t4850;
  double t4906;
  double t4914;
  double t4915;
  double t4918;
  double t4921;
  double t4923;
  double t4983;
  double t4986;
  double t5015;
  double t5016;
  double t5045;
  double t5048;
  double t5065;
  double t5069;
  double t5092;
  double t5093;
  double t4930;
  double t4932;
  double t4934;
  double t4966;
  double t4968;
  double t4969;
  double t4972;
  double t4975;
  double t4977;
  double t4987;
  double t4989;
  double t4990;
  double t4996;
  double t4999;
  double t5000;
  double t5017;
  double t5018;
  double t5028;
  double t5032;
  double t5037;
  double t5038;
  double t5050;
  double t5053;
  double t5054;
  double t5057;
  double t5058;
  double t5061;
  double t5070;
  double t5072;
  double t5073;
  double t5079;
  double t5082;
  double t5084;
  double t5094;
  double t5095;
  double t5098;
  double t5100;
  double t5103;
  double t5109;
  double t4935;
  double t4936;
  double t4939;
  double t4940;
  double t4943;
  double t4945;
  t1230 = Cos(var1[3]);
  t1482 = Cos(var1[5]);
  t2481 = Sin(var1[4]);
  t1758 = Sin(var1[3]);
  t4549 = Sin(var1[5]);
  t1442 = Cos(var1[6]);
  t4586 = t1230*t1482*t2481;
  t4587 = t1758*t4549;
  t4607 = t4586 + t4587;
  t2221 = -1.*t1482*t1758;
  t4551 = t1230*t2481*t4549;
  t4575 = t2221 + t4551;
  t4611 = Sin(var1[6]);
  t938 = Cos(var1[8]);
  t4654 = t1442*t4607;
  t4662 = -1.*t4575*t4611;
  t4669 = t4654 + t4662;
  t1237 = Cos(var1[4]);
  t1361 = Cos(var1[7]);
  t1379 = t1230*t1237*t1361;
  t4581 = t1442*t4575;
  t4623 = t4607*t4611;
  t4641 = t4581 + t4623;
  t4642 = Sin(var1[7]);
  t4643 = t4641*t4642;
  t4647 = t1379 + t4643;
  t4676 = Sin(var1[8]);
  t4702 = Cos(var1[9]);
  t4649 = t938*t4647;
  t4679 = t4669*t4676;
  t4681 = t4649 + t4679;
  t673 = Sin(var1[9]);
  t4705 = t938*t4669;
  t4706 = -1.*t4647*t4676;
  t4709 = t4705 + t4706;
  t4719 = Cos(var1[10]);
  t4695 = -1.*t673*t4681;
  t4711 = t4702*t4709;
  t4716 = t4695 + t4711;
  t531 = Sin(var1[10]);
  t4721 = t4702*t4681;
  t4744 = t673*t4709;
  t4746 = t4721 + t4744;
  t102 = Sin(var1[11]);
  t4783 = t1482*t1758*t2481;
  t4785 = -1.*t1230*t4549;
  t4786 = t4783 + t4785;
  t4774 = t1230*t1482;
  t4775 = t1758*t2481*t4549;
  t4780 = t4774 + t4775;
  t4810 = t1442*t4786;
  t4813 = -1.*t4780*t4611;
  t4815 = t4810 + t4813;
  t4770 = t1237*t1361*t1758;
  t4781 = t1442*t4780;
  t4788 = t4786*t4611;
  t4792 = t4781 + t4788;
  t4794 = t4792*t4642;
  t4797 = t4770 + t4794;
  t4805 = t938*t4797;
  t4817 = t4815*t4676;
  t4819 = t4805 + t4817;
  t4822 = t938*t4815;
  t4823 = -1.*t4797*t4676;
  t4825 = t4822 + t4823;
  t4756 = Cos(var1[11]);
  t4821 = -1.*t673*t4819;
  t4833 = t4702*t4825;
  t4835 = t4821 + t4833;
  t4837 = t4702*t4819;
  t4838 = t673*t4825;
  t4840 = t4837 + t4838;
  t4874 = t1237*t1482*t1442;
  t4876 = -1.*t1237*t4549*t4611;
  t4879 = t4874 + t4876;
  t4856 = -1.*t1361*t2481;
  t4857 = t1237*t1442*t4549;
  t4861 = t1237*t1482*t4611;
  t4864 = t4857 + t4861;
  t4866 = t4864*t4642;
  t4867 = t4856 + t4866;
  t4871 = t938*t4867;
  t4880 = t4879*t4676;
  t4886 = t4871 + t4880;
  t4889 = t938*t4879;
  t4893 = -1.*t4867*t4676;
  t4895 = t4889 + t4893;
  t4888 = -1.*t673*t4886;
  t4901 = t4702*t4895;
  t4904 = t4888 + t4901;
  t4908 = t4702*t4886;
  t4909 = t673*t4895;
  t4913 = t4908 + t4909;
  t4717 = t531*t4716;
  t4748 = t4719*t4746;
  t4750 = t4717 + t4748;
  t4758 = t4719*t4716;
  t4761 = -1.*t531*t4746;
  t4763 = t4758 + t4761;
  t4836 = t531*t4835;
  t4841 = t4719*t4840;
  t4843 = t4836 + t4841;
  t4846 = t4719*t4835;
  t4848 = -1.*t531*t4840;
  t4850 = t4846 + t4848;
  t4906 = t531*t4904;
  t4914 = t4719*t4913;
  t4915 = t4906 + t4914;
  t4918 = t4719*t4904;
  t4921 = -1.*t531*t4913;
  t4923 = t4918 + t4921;
  t4983 = -1.*t1361;
  t4986 = 1. + t4983;
  t5015 = -1.*t938;
  t5016 = 1. + t5015;
  t5045 = -1.*t4702;
  t5048 = 1. + t5045;
  t5065 = -1.*t4719;
  t5069 = 1. + t5065;
  t5092 = -1.*t4756;
  t5093 = 1. + t5092;
  t4930 = t4756*t4750;
  t4932 = t102*t4763;
  t4934 = t4930 + t4932;
  t4966 = -1.*t1442;
  t4968 = 1. + t4966;
  t4969 = 0.135*t4968;
  t4972 = 0. + t4969;
  t4975 = -0.135*t4611;
  t4977 = 0. + t4975;
  t4987 = 0.135*t4986;
  t4989 = 0.049*t4642;
  t4990 = 0. + t4987 + t4989;
  t4996 = -0.049*t4986;
  t4999 = 0.135*t4642;
  t5000 = 0. + t4996 + t4999;
  t5017 = -0.049*t5016;
  t5018 = -0.09*t4676;
  t5028 = 0. + t5017 + t5018;
  t5032 = -0.09*t5016;
  t5037 = 0.049*t4676;
  t5038 = 0. + t5032 + t5037;
  t5050 = -0.049*t5048;
  t5053 = -0.21*t673;
  t5054 = 0. + t5050 + t5053;
  t5057 = -0.21*t5048;
  t5058 = 0.049*t673;
  t5061 = 0. + t5057 + t5058;
  t5070 = -0.2707*t5069;
  t5072 = 0.0016*t531;
  t5073 = 0. + t5070 + t5072;
  t5079 = -0.0016*t5069;
  t5082 = -0.2707*t531;
  t5084 = 0. + t5079 + t5082;
  t5094 = 0.0184*t5093;
  t5095 = -0.7055*t102;
  t5098 = 0. + t5094 + t5095;
  t5100 = -0.7055*t5093;
  t5103 = -0.0184*t102;
  t5109 = 0. + t5100 + t5103;
  t4935 = t4756*t4843;
  t4936 = t102*t4850;
  t4939 = t4935 + t4936;
  t4940 = t4756*t4915;
  t4943 = t102*t4923;
  t4945 = t4940 + t4943;
  p_output1[0]=t102*t4750 - 1.*t4756*t4763;
  p_output1[1]=t102*t4843 - 1.*t4756*t4850;
  p_output1[2]=t102*t4915 - 1.*t4756*t4923;
  p_output1[3]=0.;
  p_output1[4]=t4934;
  p_output1[5]=t4939;
  p_output1[6]=t4945;
  p_output1[7]=0.;
  p_output1[8]=-1.*t1361*t4641 + t1230*t1237*t4642;
  p_output1[9]=t1237*t1758*t4642 - 1.*t1361*t4792;
  p_output1[10]=-1.*t2481*t4642 - 1.*t1361*t4864;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.1305*(t1361*t4641 - 1.*t1230*t1237*t4642) - 1.1135*(-1.*t102*t4750 + t4756*t4763) - 0.0216*t4934 + t4575*t4972 + t4607*t4977 + t4641*t4990 + t1230*t1237*t5000 + t4647*t5028 + t4669*t5038 + t4681*t5054 + t4709*t5061 + t4716*t5073 + t4746*t5084 + t4750*t5098 + t4763*t5109 + var1[0];
  p_output1[13]=0. + 0.1305*(-1.*t1237*t1758*t4642 + t1361*t4792) - 1.1135*(-1.*t102*t4843 + t4756*t4850) - 0.0216*t4939 + t4780*t4972 + t4786*t4977 + t4792*t4990 + t1237*t1758*t5000 + t4797*t5028 + t4815*t5038 + t4819*t5054 + t4825*t5061 + t4835*t5073 + t4840*t5084 + t4843*t5098 + t4850*t5109 + var1[1];
  p_output1[14]=0. + 0.1305*(t2481*t4642 + t1361*t4864) - 1.1135*(-1.*t102*t4915 + t4756*t4923) - 0.0216*t4945 + t1237*t4549*t4972 + t1237*t1482*t4977 + t4864*t4990 - 1.*t2481*t5000 + t4867*t5028 + t4879*t5038 + t4886*t5054 + t4895*t5061 + t4904*t5073 + t4913*t5084 + t4915*t5098 + t4923*t5109 + var1[2];
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

#include "H_toe_joint_left_mex.hh"

namespace SymExpression
{

void H_toe_joint_left_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
