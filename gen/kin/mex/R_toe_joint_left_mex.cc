/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:15:27 GMT-05:00
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
  double t5281;
  double t5340;
  double t5367;
  double t5352;
  double t5382;
  double t5322;
  double t5427;
  double t5437;
  double t5443;
  double t5357;
  double t5406;
  double t5418;
  double t5444;
  double t5266;
  double t5499;
  double t5504;
  double t5507;
  double t5291;
  double t5302;
  double t5304;
  double t5420;
  double t5455;
  double t5463;
  double t5470;
  double t5477;
  double t5485;
  double t5515;
  double t5538;
  double t5494;
  double t5519;
  double t5527;
  double t5185;
  double t5550;
  double t5551;
  double t5554;
  double t5596;
  double t5535;
  double t5557;
  double t5574;
  double t2859;
  double t5610;
  double t5616;
  double t5617;
  double t5632;
  double t5593;
  double t5624;
  double t5627;
  double t1412;
  double t5637;
  double t5650;
  double t5655;
  double t185;
  double t5719;
  double t5721;
  double t5722;
  double t5698;
  double t5702;
  double t5705;
  double t5759;
  double t5761;
  double t5766;
  double t5694;
  double t5711;
  double t5726;
  double t5727;
  double t5728;
  double t5736;
  double t5748;
  double t5774;
  double t5778;
  double t5785;
  double t5790;
  double t5797;
  double t5784;
  double t5799;
  double t5806;
  double t5809;
  double t5814;
  double t5815;
  double t5665;
  double t5807;
  double t5817;
  double t5818;
  double t5827;
  double t5832;
  double t5835;
  double t5877;
  double t5879;
  double t5880;
  double t5860;
  double t5862;
  double t5869;
  double t5871;
  double t5872;
  double t5874;
  double t5875;
  double t5881;
  double t5884;
  double t5896;
  double t5899;
  double t5900;
  double t5892;
  double t5902;
  double t5908;
  double t5910;
  double t5913;
  double t5923;
  double t5909;
  double t5924;
  double t5927;
  double t5933;
  double t5934;
  double t5937;
  double t5628;
  double t5657;
  double t5659;
  double t5670;
  double t5671;
  double t5677;
  double t5820;
  double t5836;
  double t5839;
  double t5844;
  double t5850;
  double t5852;
  double t5930;
  double t5940;
  double t5944;
  double t5947;
  double t5949;
  double t5954;
  t5281 = Cos(var1[3]);
  t5340 = Cos(var1[5]);
  t5367 = Sin(var1[4]);
  t5352 = Sin(var1[3]);
  t5382 = Sin(var1[5]);
  t5322 = Cos(var1[6]);
  t5427 = t5281*t5340*t5367;
  t5437 = t5352*t5382;
  t5443 = t5427 + t5437;
  t5357 = -1.*t5340*t5352;
  t5406 = t5281*t5367*t5382;
  t5418 = t5357 + t5406;
  t5444 = Sin(var1[6]);
  t5266 = Cos(var1[8]);
  t5499 = t5322*t5443;
  t5504 = -1.*t5418*t5444;
  t5507 = t5499 + t5504;
  t5291 = Cos(var1[4]);
  t5302 = Cos(var1[7]);
  t5304 = t5281*t5291*t5302;
  t5420 = t5322*t5418;
  t5455 = t5443*t5444;
  t5463 = t5420 + t5455;
  t5470 = Sin(var1[7]);
  t5477 = t5463*t5470;
  t5485 = t5304 + t5477;
  t5515 = Sin(var1[8]);
  t5538 = Cos(var1[9]);
  t5494 = t5266*t5485;
  t5519 = t5507*t5515;
  t5527 = t5494 + t5519;
  t5185 = Sin(var1[9]);
  t5550 = t5266*t5507;
  t5551 = -1.*t5485*t5515;
  t5554 = t5550 + t5551;
  t5596 = Cos(var1[10]);
  t5535 = -1.*t5185*t5527;
  t5557 = t5538*t5554;
  t5574 = t5535 + t5557;
  t2859 = Sin(var1[10]);
  t5610 = t5538*t5527;
  t5616 = t5185*t5554;
  t5617 = t5610 + t5616;
  t5632 = Cos(var1[11]);
  t5593 = t2859*t5574;
  t5624 = t5596*t5617;
  t5627 = t5593 + t5624;
  t1412 = Sin(var1[11]);
  t5637 = t5596*t5574;
  t5650 = -1.*t2859*t5617;
  t5655 = t5637 + t5650;
  t185 = Cos(var1[12]);
  t5719 = t5340*t5352*t5367;
  t5721 = -1.*t5281*t5382;
  t5722 = t5719 + t5721;
  t5698 = t5281*t5340;
  t5702 = t5352*t5367*t5382;
  t5705 = t5698 + t5702;
  t5759 = t5322*t5722;
  t5761 = -1.*t5705*t5444;
  t5766 = t5759 + t5761;
  t5694 = t5291*t5302*t5352;
  t5711 = t5322*t5705;
  t5726 = t5722*t5444;
  t5727 = t5711 + t5726;
  t5728 = t5727*t5470;
  t5736 = t5694 + t5728;
  t5748 = t5266*t5736;
  t5774 = t5766*t5515;
  t5778 = t5748 + t5774;
  t5785 = t5266*t5766;
  t5790 = -1.*t5736*t5515;
  t5797 = t5785 + t5790;
  t5784 = -1.*t5185*t5778;
  t5799 = t5538*t5797;
  t5806 = t5784 + t5799;
  t5809 = t5538*t5778;
  t5814 = t5185*t5797;
  t5815 = t5809 + t5814;
  t5665 = Sin(var1[12]);
  t5807 = t2859*t5806;
  t5817 = t5596*t5815;
  t5818 = t5807 + t5817;
  t5827 = t5596*t5806;
  t5832 = -1.*t2859*t5815;
  t5835 = t5827 + t5832;
  t5877 = t5291*t5340*t5322;
  t5879 = -1.*t5291*t5382*t5444;
  t5880 = t5877 + t5879;
  t5860 = -1.*t5302*t5367;
  t5862 = t5291*t5322*t5382;
  t5869 = t5291*t5340*t5444;
  t5871 = t5862 + t5869;
  t5872 = t5871*t5470;
  t5874 = t5860 + t5872;
  t5875 = t5266*t5874;
  t5881 = t5880*t5515;
  t5884 = t5875 + t5881;
  t5896 = t5266*t5880;
  t5899 = -1.*t5874*t5515;
  t5900 = t5896 + t5899;
  t5892 = -1.*t5185*t5884;
  t5902 = t5538*t5900;
  t5908 = t5892 + t5902;
  t5910 = t5538*t5884;
  t5913 = t5185*t5900;
  t5923 = t5910 + t5913;
  t5909 = t2859*t5908;
  t5924 = t5596*t5923;
  t5927 = t5909 + t5924;
  t5933 = t5596*t5908;
  t5934 = -1.*t2859*t5923;
  t5937 = t5933 + t5934;
  t5628 = -1.*t1412*t5627;
  t5657 = t5632*t5655;
  t5659 = t5628 + t5657;
  t5670 = t5632*t5627;
  t5671 = t1412*t5655;
  t5677 = t5670 + t5671;
  t5820 = -1.*t1412*t5818;
  t5836 = t5632*t5835;
  t5839 = t5820 + t5836;
  t5844 = t5632*t5818;
  t5850 = t1412*t5835;
  t5852 = t5844 + t5850;
  t5930 = -1.*t1412*t5927;
  t5940 = t5632*t5937;
  t5944 = t5930 + t5940;
  t5947 = t5632*t5927;
  t5949 = t1412*t5937;
  t5954 = t5947 + t5949;
  p_output1[0]=-1.*t185*t5659 + t5665*t5677;
  p_output1[1]=-1.*t185*t5839 + t5665*t5852;
  p_output1[2]=-1.*t185*t5944 + t5665*t5954;
  p_output1[3]=t5659*t5665 + t185*t5677;
  p_output1[4]=t5665*t5839 + t185*t5852;
  p_output1[5]=t5665*t5944 + t185*t5954;
  p_output1[6]=-1.*t5302*t5463 + t5281*t5291*t5470;
  p_output1[7]=t5291*t5352*t5470 - 1.*t5302*t5727;
  p_output1[8]=-1.*t5367*t5470 - 1.*t5302*t5871;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "R_toe_joint_left_mex.hh"

namespace SymExpression
{

void R_toe_joint_left_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
