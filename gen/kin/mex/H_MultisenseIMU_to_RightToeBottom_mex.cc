/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:17:31 GMT-05:00
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
  double t26;
  double t262;
  double t703;
  double t548;
  double t917;
  double t959;
  double t891;
  double t1424;
  double t1439;
  double t1447;
  double t950;
  double t965;
  double t1002;
  double t1469;
  double t875;
  double t1551;
  double t1594;
  double t1654;
  double t1046;
  double t1504;
  double t1516;
  double t1678;
  double t782;
  double t1793;
  double t1914;
  double t1941;
  double t1519;
  double t1679;
  double t1689;
  double t2203;
  double t780;
  double t2543;
  double t2602;
  double t2641;
  double t1714;
  double t2205;
  double t2341;
  double t2673;
  double t3237;
  double t3308;
  double t3590;
  double t3100;
  double t3111;
  double t3116;
  double t3874;
  double t4013;
  double t4022;
  double t3117;
  double t3733;
  double t3734;
  double t4220;
  double t4234;
  double t4241;
  double t3849;
  double t4029;
  double t4084;
  double t4684;
  double t4691;
  double t4772;
  double t4216;
  double t4522;
  double t4526;
  double t5558;
  double t5639;
  double t5644;
  double t5478;
  double t5507;
  double t5513;
  double t5848;
  double t5855;
  double t5856;
  double t5557;
  double t5662;
  double t5681;
  double t5905;
  double t5933;
  double t5945;
  double t5693;
  double t5891;
  double t5898;
  double t2365;
  double t2706;
  double t2729;
  double t2865;
  double t2883;
  double t2891;
  double t4679;
  double t4826;
  double t4964;
  double t5237;
  double t5253;
  double t5339;
  double t5903;
  double t5956;
  double t5959;
  double t5967;
  double t5970;
  double t5971;
  double t6102;
  double t6105;
  double t6128;
  double t6129;
  double t6153;
  double t6156;
  double t6190;
  double t6192;
  double t6229;
  double t6231;
  double t6084;
  double t6091;
  double t6092;
  double t6094;
  double t6100;
  double t6107;
  double t6111;
  double t6117;
  double t6120;
  double t6122;
  double t6123;
  double t6131;
  double t6134;
  double t6139;
  double t6142;
  double t6147;
  double t6148;
  double t6166;
  double t6167;
  double t6175;
  double t6179;
  double t6184;
  double t6185;
  double t6197;
  double t6202;
  double t6203;
  double t6216;
  double t6221;
  double t6223;
  double t6235;
  double t6236;
  double t6240;
  double t6245;
  double t6246;
  double t6248;
  t26 = Cos(var1[8]);
  t262 = Sin(var1[7]);
  t703 = Sin(var1[8]);
  t548 = Cos(var1[7]);
  t917 = Cos(var1[9]);
  t959 = Sin(var1[9]);
  t891 = Cos(var1[10]);
  t1424 = t548*t917;
  t1439 = -1.*t262*t703*t959;
  t1447 = t1424 + t1439;
  t950 = t917*t262*t703;
  t965 = t548*t959;
  t1002 = t950 + t965;
  t1469 = Sin(var1[10]);
  t875 = Cos(var1[11]);
  t1551 = t891*t1447;
  t1594 = -1.*t1002*t1469;
  t1654 = t1551 + t1594;
  t1046 = t891*t1002;
  t1504 = t1447*t1469;
  t1516 = t1046 + t1504;
  t1678 = Sin(var1[11]);
  t782 = Cos(var1[12]);
  t1793 = t875*t1654;
  t1914 = -1.*t1516*t1678;
  t1941 = t1793 + t1914;
  t1519 = t875*t1516;
  t1679 = t1654*t1678;
  t1689 = t1519 + t1679;
  t2203 = Sin(var1[12]);
  t780 = Cos(var1[13]);
  t2543 = t782*t1941;
  t2602 = -1.*t1689*t2203;
  t2641 = t2543 + t2602;
  t1714 = t782*t1689;
  t2205 = t1941*t2203;
  t2341 = t1714 + t2205;
  t2673 = Sin(var1[13]);
  t3237 = -1.*t917*t262;
  t3308 = -1.*t548*t703*t959;
  t3590 = t3237 + t3308;
  t3100 = t548*t917*t703;
  t3111 = -1.*t262*t959;
  t3116 = t3100 + t3111;
  t3874 = t891*t3590;
  t4013 = -1.*t3116*t1469;
  t4022 = t3874 + t4013;
  t3117 = t891*t3116;
  t3733 = t3590*t1469;
  t3734 = t3117 + t3733;
  t4220 = t875*t4022;
  t4234 = -1.*t3734*t1678;
  t4241 = t4220 + t4234;
  t3849 = t875*t3734;
  t4029 = t4022*t1678;
  t4084 = t3849 + t4029;
  t4684 = t782*t4241;
  t4691 = -1.*t4084*t2203;
  t4772 = t4684 + t4691;
  t4216 = t782*t4084;
  t4522 = t4241*t2203;
  t4526 = t4216 + t4522;
  t5558 = -1.*t26*t891*t959;
  t5639 = -1.*t26*t917*t1469;
  t5644 = t5558 + t5639;
  t5478 = t26*t917*t891;
  t5507 = -1.*t26*t959*t1469;
  t5513 = t5478 + t5507;
  t5848 = t875*t5644;
  t5855 = -1.*t5513*t1678;
  t5856 = t5848 + t5855;
  t5557 = t875*t5513;
  t5662 = t5644*t1678;
  t5681 = t5557 + t5662;
  t5905 = t782*t5856;
  t5933 = -1.*t5681*t2203;
  t5945 = t5905 + t5933;
  t5693 = t782*t5681;
  t5891 = t5856*t2203;
  t5898 = t5693 + t5891;
  t2365 = t780*t2341;
  t2706 = t2641*t2673;
  t2729 = t2365 + t2706;
  t2865 = t780*t2641;
  t2883 = -1.*t2341*t2673;
  t2891 = t2865 + t2883;
  t4679 = t780*t4526;
  t4826 = t4772*t2673;
  t4964 = t4679 + t4826;
  t5237 = t780*t4772;
  t5253 = -1.*t4526*t2673;
  t5339 = t5237 + t5253;
  t5903 = t780*t5898;
  t5956 = t5945*t2673;
  t5959 = t5903 + t5956;
  t5967 = t780*t5945;
  t5970 = -1.*t5898*t2673;
  t5971 = t5967 + t5970;
  t6102 = -1.*t917;
  t6105 = 1. + t6102;
  t6128 = -1.*t891;
  t6129 = 1. + t6128;
  t6153 = -1.*t875;
  t6156 = 1. + t6153;
  t6190 = -1.*t782;
  t6192 = 1. + t6190;
  t6229 = -1.*t780;
  t6231 = 1. + t6229;
  t6084 = -1.*t26;
  t6091 = 1. + t6084;
  t6092 = -0.135*t6091;
  t6094 = 0.049*t703;
  t6100 = 0. + t6092 + t6094;
  t6107 = -0.049*t6105;
  t6111 = -0.09*t959;
  t6117 = 0. + t6107 + t6111;
  t6120 = -0.09*t6105;
  t6122 = 0.049*t959;
  t6123 = 0. + t6120 + t6122;
  t6131 = -0.049*t6129;
  t6134 = -0.21*t1469;
  t6139 = 0. + t6131 + t6134;
  t6142 = -0.21*t6129;
  t6147 = 0.049*t1469;
  t6148 = 0. + t6142 + t6147;
  t6166 = -0.0016*t6156;
  t6167 = -0.2707*t1678;
  t6175 = 0. + t6166 + t6167;
  t6179 = -0.2707*t6156;
  t6184 = 0.0016*t1678;
  t6185 = 0. + t6179 + t6184;
  t6197 = 0.0184*t6192;
  t6202 = -0.7055*t2203;
  t6203 = 0. + t6197 + t6202;
  t6216 = -0.7055*t6192;
  t6221 = -0.0184*t2203;
  t6223 = 0. + t6216 + t6221;
  t6235 = -0.0216*t6231;
  t6236 = -1.1135*t2673;
  t6240 = 0. + t6235 + t6236;
  t6245 = -1.1135*t6231;
  t6246 = 0.0216*t2673;
  t6248 = 0. + t6245 + t6246;
  p_output1[0]=0. + t26*t262;
  p_output1[1]=0. - 1.*t26*t548;
  p_output1[2]=0. + t703;
  p_output1[3]=0.;
  p_output1[4]=0. - 0.642788*t2729 - 0.766044*t2891;
  p_output1[5]=0. + 0.642788*t4964 + 0.766044*t5339;
  p_output1[6]=0. + 0.642788*t5959 + 0.766044*t5971;
  p_output1[7]=0.;
  p_output1[8]=0. + 0.766044*t2729 - 0.642788*t2891;
  p_output1[9]=0. - 0.766044*t4964 + 0.642788*t5339;
  p_output1[10]=0. - 0.766044*t5959 + 0.642788*t5971;
  p_output1[11]=0.;
  p_output1[12]=0.24925 - 0.135*t262 + 0.1305*t26*t262 - 0.0306*t2729 + 1.1312*t2891 - 1.*t262*t6100 - 1.*t548*t6123 - 1.*t1002*t6139 - 1.*t1447*t6148 - 1.*t1516*t6175 - 1.*t1654*t6185 - 1.*t1689*t6203 - 1.*t1941*t6223 - 1.*t2341*t6240 - 1.*t2641*t6248 - 1.*t262*t6117*t703;
  p_output1[13]=-0.0302 + 0.0306*t4964 - 1.1312*t5339 - 0.135*(1. - 1.*t548) - 0.1305*t26*t548 + t548*t6100 - 1.*t262*t6123 + t3116*t6139 + t3590*t6148 + t3734*t6175 + t4022*t6185 + t4084*t6203 + t4241*t6223 + t4526*t6240 + t4772*t6248 + t548*t6117*t703;
  p_output1[14]=-0.047 + 0.0306*t5959 - 1.1312*t5971 - 0.049*t6091 + t26*t6117 + t5513*t6175 + t5644*t6185 + t5681*t6203 + t5856*t6223 + t5898*t6240 + t5945*t6248 - 0.004500000000000004*t703 + t26*t6139*t917 - 1.*t26*t6148*t959;
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

#include "H_MultisenseIMU_to_RightToeBottom_mex.hh"

namespace SymExpression
{

void H_MultisenseIMU_to_RightToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
