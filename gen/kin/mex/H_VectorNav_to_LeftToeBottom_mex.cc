/*
 * Automatically Generated from Mathematica.
 * Mon 26 Feb 2018 15:42:30 GMT-05:00
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
  double t982;
  double t4517;
  double t4497;
  double t4505;
  double t4523;
  double t4588;
  double t4506;
  double t4530;
  double t4560;
  double t4490;
  double t4605;
  double t4607;
  double t4608;
  double t4635;
  double t4578;
  double t4613;
  double t4618;
  double t4414;
  double t4638;
  double t4641;
  double t4647;
  double t4672;
  double t4619;
  double t4657;
  double t4663;
  double t4402;
  double t4679;
  double t4680;
  double t4690;
  double t964;
  double t385;
  double t4149;
  double t4714;
  double t4715;
  double t4717;
  double t4722;
  double t4723;
  double t4724;
  double t4719;
  double t4727;
  double t4728;
  double t4730;
  double t4732;
  double t4733;
  double t4729;
  double t4737;
  double t4738;
  double t4744;
  double t4746;
  double t4750;
  double t4741;
  double t4758;
  double t4765;
  double t4767;
  double t4769;
  double t4770;
  double t4786;
  double t4787;
  double t4795;
  double t4797;
  double t4798;
  double t4799;
  double t4796;
  double t4800;
  double t4801;
  double t4804;
  double t4806;
  double t4807;
  double t4802;
  double t4808;
  double t4809;
  double t4814;
  double t4815;
  double t4822;
  double t4810;
  double t4825;
  double t4827;
  double t4836;
  double t4837;
  double t4840;
  double t4665;
  double t4693;
  double t4699;
  double t4706;
  double t4709;
  double t4711;
  double t4766;
  double t4773;
  double t4774;
  double t4778;
  double t4779;
  double t4782;
  double t4835;
  double t4842;
  double t4853;
  double t4858;
  double t4860;
  double t4861;
  double t4896;
  double t4903;
  double t4923;
  double t4924;
  double t4933;
  double t4934;
  double t4947;
  double t4948;
  double t4891;
  double t4894;
  double t4911;
  double t4913;
  double t4914;
  double t4915;
  double t4917;
  double t4904;
  double t4905;
  double t4907;
  double t4919;
  double t4920;
  double t4921;
  double t4925;
  double t4926;
  double t4927;
  double t4929;
  double t4930;
  double t4931;
  double t4938;
  double t4939;
  double t4940;
  double t4942;
  double t4944;
  double t4945;
  double t4949;
  double t4950;
  double t4951;
  double t4953;
  double t4957;
  double t4958;
  double t4968;
  double t4969;
  double t4970;
  double t4976;
  double t4977;
  double t4978;
  t982 = Cos(var1[1]);
  t4517 = Cos(var1[3]);
  t4497 = Cos(var1[2]);
  t4505 = Sin(var1[3]);
  t4523 = Sin(var1[2]);
  t4588 = Cos(var1[4]);
  t4506 = -1.*t982*t4497*t4505;
  t4530 = -1.*t4517*t982*t4523;
  t4560 = t4506 + t4530;
  t4490 = Sin(var1[4]);
  t4605 = t4517*t982*t4497;
  t4607 = -1.*t982*t4505*t4523;
  t4608 = t4605 + t4607;
  t4635 = Cos(var1[5]);
  t4578 = t4490*t4560;
  t4613 = t4588*t4608;
  t4618 = t4578 + t4613;
  t4414 = Sin(var1[5]);
  t4638 = t4588*t4560;
  t4641 = -1.*t4490*t4608;
  t4647 = t4638 + t4641;
  t4672 = Cos(var1[6]);
  t4619 = -1.*t4414*t4618;
  t4657 = t4635*t4647;
  t4663 = t4619 + t4657;
  t4402 = Sin(var1[6]);
  t4679 = t4635*t4618;
  t4680 = t4414*t4647;
  t4690 = t4679 + t4680;
  t964 = Cos(var1[0]);
  t385 = Sin(var1[1]);
  t4149 = Sin(var1[0]);
  t4714 = t964*t4497*t385;
  t4715 = -1.*t4149*t4523;
  t4717 = t4714 + t4715;
  t4722 = -1.*t4497*t4149;
  t4723 = -1.*t964*t385*t4523;
  t4724 = t4722 + t4723;
  t4719 = -1.*t4505*t4717;
  t4727 = t4517*t4724;
  t4728 = t4719 + t4727;
  t4730 = t4517*t4717;
  t4732 = t4505*t4724;
  t4733 = t4730 + t4732;
  t4729 = t4490*t4728;
  t4737 = t4588*t4733;
  t4738 = t4729 + t4737;
  t4744 = t4588*t4728;
  t4746 = -1.*t4490*t4733;
  t4750 = t4744 + t4746;
  t4741 = -1.*t4414*t4738;
  t4758 = t4635*t4750;
  t4765 = t4741 + t4758;
  t4767 = t4635*t4738;
  t4769 = t4414*t4750;
  t4770 = t4767 + t4769;
  t4786 = t4497*t4149*t385;
  t4787 = t964*t4523;
  t4795 = t4786 + t4787;
  t4797 = t964*t4497;
  t4798 = -1.*t4149*t385*t4523;
  t4799 = t4797 + t4798;
  t4796 = -1.*t4505*t4795;
  t4800 = t4517*t4799;
  t4801 = t4796 + t4800;
  t4804 = t4517*t4795;
  t4806 = t4505*t4799;
  t4807 = t4804 + t4806;
  t4802 = t4490*t4801;
  t4808 = t4588*t4807;
  t4809 = t4802 + t4808;
  t4814 = t4588*t4801;
  t4815 = -1.*t4490*t4807;
  t4822 = t4814 + t4815;
  t4810 = -1.*t4414*t4809;
  t4825 = t4635*t4822;
  t4827 = t4810 + t4825;
  t4836 = t4635*t4809;
  t4837 = t4414*t4822;
  t4840 = t4836 + t4837;
  t4665 = t4402*t4663;
  t4693 = t4672*t4690;
  t4699 = t4665 + t4693;
  t4706 = t4672*t4663;
  t4709 = -1.*t4402*t4690;
  t4711 = t4706 + t4709;
  t4766 = t4402*t4765;
  t4773 = t4672*t4770;
  t4774 = t4766 + t4773;
  t4778 = t4672*t4765;
  t4779 = -1.*t4402*t4770;
  t4782 = t4778 + t4779;
  t4835 = t4402*t4827;
  t4842 = t4672*t4840;
  t4853 = t4835 + t4842;
  t4858 = t4672*t4827;
  t4860 = -1.*t4402*t4840;
  t4861 = t4858 + t4860;
  t4896 = -1.*t4517;
  t4903 = 1. + t4896;
  t4923 = -1.*t4588;
  t4924 = 1. + t4923;
  t4933 = -1.*t4635;
  t4934 = 1. + t4933;
  t4947 = -1.*t4672;
  t4948 = 1. + t4947;
  t4891 = -1.*t982;
  t4894 = 1. + t4891;
  t4911 = -1.*t4497;
  t4913 = 1. + t4911;
  t4914 = -0.049*t4913;
  t4915 = -0.09*t4523;
  t4917 = 0. + t4914 + t4915;
  t4904 = -0.049*t4903;
  t4905 = -0.21*t4505;
  t4907 = 0. + t4904 + t4905;
  t4919 = -0.21*t4903;
  t4920 = 0.049*t4505;
  t4921 = 0. + t4919 + t4920;
  t4925 = -0.2707*t4924;
  t4926 = 0.0016*t4490;
  t4927 = 0. + t4925 + t4926;
  t4929 = -0.0016*t4924;
  t4930 = -0.2707*t4490;
  t4931 = 0. + t4929 + t4930;
  t4938 = 0.0184*t4934;
  t4939 = -0.7055*t4414;
  t4940 = 0. + t4938 + t4939;
  t4942 = -0.7055*t4934;
  t4944 = -0.0184*t4414;
  t4945 = 0. + t4942 + t4944;
  t4949 = -1.1135*t4948;
  t4950 = 0.0216*t4402;
  t4951 = 0. + t4949 + t4950;
  t4953 = -0.0216*t4948;
  t4957 = -1.1135*t4402;
  t4958 = 0. + t4953 + t4957;
  t4968 = 0.135*t4894;
  t4969 = 0.049*t385;
  t4970 = 0. + t4968 + t4969;
  t4976 = -0.09*t4913;
  t4977 = 0.049*t4523;
  t4978 = 0. + t4976 + t4977;
  p_output1[0]=0. + t385;
  p_output1[1]=0. + t964*t982;
  p_output1[2]=0. + t4149*t982;
  p_output1[3]=0.;
  p_output1[4]=0. + 0.642788*t4699 + 0.766044*t4711;
  p_output1[5]=0. - 0.642788*t4774 - 0.766044*t4782;
  p_output1[6]=0. - 0.642788*t4853 - 0.766044*t4861;
  p_output1[7]=0.;
  p_output1[8]=0. - 0.766044*t4699 + 0.642788*t4711;
  p_output1[9]=0. + 0.766044*t4774 - 0.642788*t4782;
  p_output1[10]=0. + 0.766044*t4853 - 0.642788*t4861;
  p_output1[11]=0.;
  p_output1[12]=-0.03155 + 0.004500000000000004*t385 + 0.0306*t4699 - 1.1312*t4711 - 0.049*t4894 + t4560*t4927 + t4608*t4931 + t4618*t4940 + t4647*t4945 + t4663*t4951 + t4690*t4958 + t4497*t4907*t982 + t4917*t982 - 1.*t4523*t4921*t982;
  p_output1[13]=0. - 0.0306*t4774 + 1.1312*t4782 - 1.*t4717*t4907 - 1.*t4724*t4921 - 1.*t4728*t4927 - 1.*t4733*t4931 - 1.*t4738*t4940 - 1.*t4750*t4945 - 1.*t4765*t4951 - 1.*t4770*t4958 + t4149*t4978 - 0.135*(1. - 1.*t964) - 1.*t385*t4917*t964 - 1.*t4970*t964 - 0.1305*t964*t982;
  p_output1[14]=-0.07996 + 0.135*t4149 - 0.0306*t4853 + 1.1312*t4861 - 1.*t4795*t4907 - 1.*t385*t4149*t4917 - 1.*t4799*t4921 - 1.*t4801*t4927 - 1.*t4807*t4931 - 1.*t4809*t4940 - 1.*t4822*t4945 - 1.*t4827*t4951 - 1.*t4840*t4958 - 1.*t4149*t4970 - 1.*t4978*t964 - 0.1305*t4149*t982;
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

#include "H_VectorNav_to_LeftToeBottom_mex.hh"

namespace SymExpression
{

void H_VectorNav_to_LeftToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
