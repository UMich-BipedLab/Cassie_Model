/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:24:34 GMT-04:00
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
  double t769;
  double t1041;
  double t1500;
  double t771;
  double t1241;
  double t1266;
  double t639;
  double t1550;
  double t1556;
  double t1669;
  double t2702;
  double t1294;
  double t1790;
  double t2011;
  double t554;
  double t2843;
  double t3040;
  double t3127;
  double t3286;
  double t2287;
  double t3148;
  double t3183;
  double t362;
  double t3466;
  double t3513;
  double t3733;
  double t55;
  double t4462;
  double t4540;
  double t4632;
  double t4452;
  double t4697;
  double t4807;
  double t4869;
  double t4946;
  double t4831;
  double t4952;
  double t4957;
  double t5017;
  double t5035;
  double t5058;
  double t4090;
  double t5825;
  double t5833;
  double t5793;
  double t5800;
  double t5851;
  double t5864;
  double t5872;
  double t5908;
  double t5927;
  double t5932;
  double t5940;
  double t5990;
  double t5736;
  double t5742;
  double t5816;
  double t5818;
  double t5910;
  double t5998;
  double t6034;
  double t6070;
  double t6118;
  double t6122;
  double t6125;
  double t6149;
  double t5598;
  double t5611;
  double t5753;
  double t5778;
  double t6053;
  double t6153;
  double t6190;
  double t6238;
  double t6259;
  double t6309;
  double t6324;
  double t6349;
  double t14;
  double t5249;
  double t5301;
  double t5302;
  double t4980;
  double t5144;
  double t5162;
  double t5459;
  double t5487;
  double t6496;
  double t6501;
  double t6519;
  double t6522;
  double t6524;
  double t5621;
  double t5657;
  double t6219;
  double t6372;
  double t6405;
  double t6716;
  double t6626;
  double t6627;
  double t6654;
  double t6691;
  double t6705;
  double t6741;
  double t6756;
  double t6758;
  double t6769;
  double t6798;
  double t6656;
  double t6680;
  double t5521;
  double t6416;
  double t6494;
  double t6528;
  double t6535;
  double t3919;
  double t3984;
  double t3991;
  double t3261;
  double t3767;
  double t3805;
  double t6715;
  double t6728;
  double t6809;
  double t6816;
  double t3833;
  double t4197;
  double t4203;
  double t4302;
  double t4451;
  double t6837;
  double t6841;
  double t6848;
  double t6873;
  double t6896;
  double t6932;
  double t6942;
  double t6972;
  double t7084;
  double t5230;
  double t5327;
  double t5438;
  double t6828;
  double t6829;
  double t7094;
  double t7141;
  double t6991;
  double t7013;
  double t6614;
  double t6974;
  t769 = Cos(var1[6]);
  t1041 = Sin(var1[6]);
  t1500 = Cos(var1[5]);
  t771 = 0.642788*t769;
  t1241 = -0.766044*t1041;
  t1266 = t771 + t1241;
  t639 = Sin(var1[5]);
  t1550 = 0.766044*t769;
  t1556 = 0.642788*t1041;
  t1669 = t1550 + t1556;
  t2702 = Cos(var1[4]);
  t1294 = t639*t1266;
  t1790 = t1500*t1669;
  t2011 = 0. + t1294 + t1790;
  t554 = Sin(var1[4]);
  t2843 = t1500*t1266;
  t3040 = -1.*t639*t1669;
  t3127 = 0. + t2843 + t3040;
  t3286 = Sin(var1[3]);
  t2287 = -1.*t554*t2011;
  t3148 = t2702*t3127;
  t3183 = 0. + t2287 + t3148;
  t362 = Cos(var1[3]);
  t3466 = t2702*t2011;
  t3513 = t554*t3127;
  t3733 = 0. + t3466 + t3513;
  t55 = Cos(var1[2]);
  t4462 = -0.766044*t769;
  t4540 = -0.642788*t1041;
  t4632 = t4462 + t4540;
  t4452 = -1.*t639*t1266;
  t4697 = t1500*t4632;
  t4807 = 0. + t4452 + t4697;
  t4869 = t639*t4632;
  t4946 = 0. + t2843 + t4869;
  t4831 = t554*t4807;
  t4952 = t2702*t4946;
  t4957 = 0. + t4831 + t4952;
  t5017 = t2702*t4807;
  t5035 = -1.*t554*t4946;
  t5058 = 0. + t5017 + t5035;
  t4090 = Sin(var1[2]);
  t5825 = -1.*t769;
  t5833 = 1. + t5825;
  t5793 = -1.*t1500;
  t5800 = 1. + t5793;
  t5851 = -0.0216*t5833;
  t5864 = 0.0306*t769;
  t5872 = 0.01770000000000005*t1041;
  t5908 = 0. + t5851 + t5864 + t5872;
  t5927 = -1.1135*t5833;
  t5932 = -1.1312*t769;
  t5940 = 0.052199999999999996*t1041;
  t5990 = 0. + t5927 + t5932 + t5940;
  t5736 = -1.*t2702;
  t5742 = 1. + t5736;
  t5816 = -0.7055*t5800;
  t5818 = -0.0184*t639;
  t5910 = t639*t5908;
  t5998 = t1500*t5990;
  t6034 = 0. + t5816 + t5818 + t5910 + t5998;
  t6070 = 0.0184*t5800;
  t6118 = -0.7055*t639;
  t6122 = t1500*t5908;
  t6125 = -1.*t639*t5990;
  t6149 = 0. + t6070 + t6118 + t6122 + t6125;
  t5598 = -1.*t362;
  t5611 = 1. + t5598;
  t5753 = -0.0016*t5742;
  t5778 = -0.2707*t554;
  t6053 = -1.*t554*t6034;
  t6153 = t2702*t6149;
  t6190 = 0. + t5753 + t5778 + t6053 + t6153;
  t6238 = -0.2707*t5742;
  t6259 = 0.0016*t554;
  t6309 = t2702*t6034;
  t6324 = t554*t6149;
  t6349 = 0. + t6238 + t6259 + t6309 + t6324;
  t14 = Cos(var1[1]);
  t5249 = -1.*t3286*t4957;
  t5301 = t362*t5058;
  t5302 = 0. + t5249 + t5301;
  t4980 = t362*t4957;
  t5144 = t3286*t5058;
  t5162 = 0. + t4980 + t5144;
  t5459 = -1.*t55;
  t5487 = 1. + t5459;
  t6496 = -0.049*t5611;
  t6501 = -0.21*t3286;
  t6519 = t362*t6190;
  t6522 = -1.*t3286*t6349;
  t6524 = 0. + t6496 + t6501 + t6519 + t6522;
  t5621 = -0.21*t5611;
  t5657 = 0.049*t3286;
  t6219 = t3286*t6190;
  t6372 = t362*t6349;
  t6405 = 0. + t5621 + t5657 + t6219 + t6372;
  t6716 = Sin(var1[1]);
  t6626 = t55*t5302;
  t6627 = -1.*t5162*t4090;
  t6654 = 0. + t6626 + t6627;
  t6691 = -1.*t14;
  t6705 = 1. + t6691;
  t6741 = -0.049*t5487;
  t6756 = t55*t6524;
  t6758 = -0.09*t4090;
  t6769 = -1.*t6405*t4090;
  t6798 = 0. + t6741 + t6756 + t6758 + t6769;
  t6656 = t14*t6654;
  t6680 = 0. + t6656;
  t5521 = -0.09*t5487;
  t6416 = t55*t6405;
  t6494 = 0.049*t4090;
  t6528 = t6524*t4090;
  t6535 = 0. + t5521 + t6416 + t6494 + t6528;
  t3919 = t3286*t3183;
  t3984 = t362*t3733;
  t3991 = 0. + t3919 + t3984;
  t3261 = t362*t3183;
  t3767 = -1.*t3286*t3733;
  t3805 = 0. + t3261 + t3767;
  t6715 = -0.049*t6705;
  t6728 = 0.004500000000000004*t6716;
  t6809 = t14*t6798;
  t6816 = 0. + t6715 + t6728 + t6809;
  t3833 = t55*t3805;
  t4197 = -1.*t3991*t4090;
  t4203 = 0. + t3833 + t4197;
  t4302 = t14*t4203;
  t4451 = 0. + t4302;
  t6837 = 0.135*t6705;
  t6841 = 0.1305*t14;
  t6848 = 0.049*t6716;
  t6873 = t6716*t6798;
  t6896 = 0. + t6837 + t6841 + t6848 + t6873;
  t6932 = t55*t3991;
  t6942 = t3805*t4090;
  t6972 = 0. + t6932 + t6942;
  t7084 = 0. + t6716;
  t5230 = t55*t5162;
  t5327 = t5302*t4090;
  t5438 = 0. + t5230 + t5327;
  t6828 = t6716*t6654;
  t6829 = 0. + t6828;
  t7094 = -1.*t14;
  t7141 = 0. + t7094;
  t6991 = t6716*t4203;
  t7013 = 0. + t6991;
  t6614 = t5438*t6535;
  t6974 = -1.*t6535*t6972;
  p_output1[0]=0. + t4451*(t6614 + t6680*t6816 + t6829*t6896) + t6680*(-1.*t4451*t6816 + t6974 - 1.*t6896*t7013);
  p_output1[1]=-0.135*t6972 + (-1.*t5438*t6535 - 1.*t6680*t6816 - 1.*t6829*t6896)*t7084 + t6680*(0. + t6816*t7084 + t6896*t7141);
  p_output1[2]=-0.135*t5438 + (t4451*t6816 + t6535*t6972 + t6896*t7013)*t7084 + t4451*(0. - 1.*t6816*t7084 - 1.*t6896*t7141);
  p_output1[3]=-0.049 + (0. + t6614 + t6654*t6798)*t6972 + t5438*(0. - 1.*t4203*t6798 + t6974);
  p_output1[4]=0. + 0.135*t4203 - 0.1305*t5438;
  p_output1[5]=0. + 0.135*t6654 + 0.1305*t6972;
  p_output1[6]=0.;
  p_output1[7]=0. - 0.09*t3805 + 0.049*t3991 - 1.*t5162*t6405 - 1.*t5302*t6524;
  p_output1[8]=0. + 0.049*t5162 - 0.09*t5302 + t3991*t6405 + t3805*t6524;
  p_output1[9]=0.;
  p_output1[10]=0. - 0.21*t3183 + 0.049*t3733 - 1.*t5058*t6190 - 1.*t4957*t6349;
  p_output1[11]=0. + 0.049*t4957 - 0.21*t5058 + t3183*t6190 + t3733*t6349;
  p_output1[12]=0.;
  p_output1[13]=0. + 0.0016*t2011 - 0.2707*t3127 - 1.*t4946*t6034 - 1.*t4807*t6149;
  p_output1[14]=0. - 0.2707*t4807 + 0.0016*t4946 + t2011*t6034 + t3127*t6149;
  p_output1[15]=0.;
  p_output1[16]=0. - 0.7055*t1266 - 0.0184*t1669 - 1.*t4632*t5908 - 1.*t1266*t5990;
  p_output1[17]=0. - 0.0184*t1266 - 0.7055*t4632 + t1266*t5908 + t1669*t5990;
  p_output1[18]=0.;
  p_output1[19]=0.05136484440000011;
  p_output1[20]=0.019994554799999897;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 14, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Jv_VectorNav_to_LeftToeBottom_mex.hh"

namespace SymExpression
{

void Jv_VectorNav_to_LeftToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
