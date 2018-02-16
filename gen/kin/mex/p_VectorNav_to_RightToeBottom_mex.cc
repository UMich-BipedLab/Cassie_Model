/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:17:14 GMT-05:00
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
  double t372;
  double t819;
  double t1570;
  double t2072;
  double t2098;
  double t2101;
  double t2106;
  double t2128;
  double t2129;
  double t2130;
  double t2136;
  double t2123;
  double t2124;
  double t2125;
  double t2145;
  double t2147;
  double t2148;
  double t2163;
  double t2164;
  double t2167;
  double t2170;
  double t2159;
  double t2160;
  double t2162;
  double t2176;
  double t2204;
  double t2247;
  double t3212;
  double t3399;
  double t3563;
  double t4097;
  double t2769;
  double t2890;
  double t3167;
  double t4472;
  double t4609;
  double t4645;
  double t5888;
  double t708;
  double t742;
  double t754;
  double t951;
  double t1407;
  double t1558;
  double t1623;
  double t2022;
  double t6290;
  double t2104;
  double t2107;
  double t2109;
  double t2115;
  double t2116;
  double t2120;
  double t6388;
  double t6402;
  double t6420;
  double t6476;
  double t6495;
  double t6505;
  double t2133;
  double t2140;
  double t2142;
  double t2150;
  double t2151;
  double t2154;
  double t6552;
  double t6562;
  double t6565;
  double t6591;
  double t6607;
  double t6613;
  double t2168;
  double t2171;
  double t2172;
  double t2503;
  double t2550;
  double t2629;
  double t6637;
  double t6652;
  double t6664;
  double t6698;
  double t6711;
  double t6718;
  double t3609;
  double t4149;
  double t4340;
  double t4716;
  double t4889;
  double t5063;
  double t6738;
  double t6741;
  double t6755;
  double t6771;
  double t6774;
  double t6777;
  double t6075;
  double t6127;
  double t6150;
  double t6302;
  double t6320;
  double t6331;
  double t6852;
  double t6854;
  double t6865;
  double t6875;
  double t6881;
  double t6882;
  double t6889;
  double t6897;
  double t6899;
  double t6905;
  double t6906;
  double t6912;
  double t6918;
  double t6922;
  double t6923;
  double t6929;
  double t6933;
  double t6937;
  double t6939;
  double t6940;
  double t6942;
  double t6946;
  double t6952;
  double t6956;
  t372 = Cos(var1[8]);
  t819 = Cos(var1[9]);
  t1570 = Sin(var1[9]);
  t2072 = Cos(var1[10]);
  t2098 = -1.*t2072;
  t2101 = 1. + t2098;
  t2106 = Sin(var1[10]);
  t2128 = Cos(var1[11]);
  t2129 = -1.*t2128;
  t2130 = 1. + t2129;
  t2136 = Sin(var1[11]);
  t2123 = t372*t819*t2072;
  t2124 = -1.*t372*t1570*t2106;
  t2125 = t2123 + t2124;
  t2145 = -1.*t372*t2072*t1570;
  t2147 = -1.*t372*t819*t2106;
  t2148 = t2145 + t2147;
  t2163 = Cos(var1[12]);
  t2164 = -1.*t2163;
  t2167 = 1. + t2164;
  t2170 = Sin(var1[12]);
  t2159 = t2128*t2125;
  t2160 = t2148*t2136;
  t2162 = t2159 + t2160;
  t2176 = t2128*t2148;
  t2204 = -1.*t2125*t2136;
  t2247 = t2176 + t2204;
  t3212 = Cos(var1[13]);
  t3399 = -1.*t3212;
  t3563 = 1. + t3399;
  t4097 = Sin(var1[13]);
  t2769 = t2163*t2162;
  t2890 = t2247*t2170;
  t3167 = t2769 + t2890;
  t4472 = t2163*t2247;
  t4609 = -1.*t2162*t2170;
  t4645 = t4472 + t4609;
  t5888 = Cos(var1[7]);
  t708 = -1.*t372;
  t742 = 1. + t708;
  t754 = Sin(var1[8]);
  t951 = -1.*t819;
  t1407 = 1. + t951;
  t1558 = -0.049*t1407;
  t1623 = -0.09*t1570;
  t2022 = 0. + t1558 + t1623;
  t6290 = Sin(var1[7]);
  t2104 = -0.049*t2101;
  t2107 = -0.21*t2106;
  t2109 = 0. + t2104 + t2107;
  t2115 = -0.21*t2101;
  t2116 = 0.049*t2106;
  t2120 = 0. + t2115 + t2116;
  t6388 = t5888*t819*t754;
  t6402 = -1.*t6290*t1570;
  t6420 = t6388 + t6402;
  t6476 = -1.*t819*t6290;
  t6495 = -1.*t5888*t754*t1570;
  t6505 = t6476 + t6495;
  t2133 = -0.0016*t2130;
  t2140 = -0.2707*t2136;
  t2142 = 0. + t2133 + t2140;
  t2150 = -0.2707*t2130;
  t2151 = 0.0016*t2136;
  t2154 = 0. + t2150 + t2151;
  t6552 = t2072*t6420;
  t6562 = t6505*t2106;
  t6565 = t6552 + t6562;
  t6591 = t2072*t6505;
  t6607 = -1.*t6420*t2106;
  t6613 = t6591 + t6607;
  t2168 = 0.0184*t2167;
  t2171 = -0.7055*t2170;
  t2172 = 0. + t2168 + t2171;
  t2503 = -0.7055*t2167;
  t2550 = -0.0184*t2170;
  t2629 = 0. + t2503 + t2550;
  t6637 = t2128*t6565;
  t6652 = t6613*t2136;
  t6664 = t6637 + t6652;
  t6698 = t2128*t6613;
  t6711 = -1.*t6565*t2136;
  t6718 = t6698 + t6711;
  t3609 = -0.0216*t3563;
  t4149 = -1.1135*t4097;
  t4340 = 0. + t3609 + t4149;
  t4716 = -1.1135*t3563;
  t4889 = 0.0216*t4097;
  t5063 = 0. + t4716 + t4889;
  t6738 = t2163*t6664;
  t6741 = t6718*t2170;
  t6755 = t6738 + t6741;
  t6771 = t2163*t6718;
  t6774 = -1.*t6664*t2170;
  t6777 = t6771 + t6774;
  t6075 = -0.135*t742;
  t6127 = 0.049*t754;
  t6150 = 0. + t6075 + t6127;
  t6302 = -0.09*t1407;
  t6320 = 0.049*t1570;
  t6331 = 0. + t6302 + t6320;
  t6852 = t819*t6290*t754;
  t6854 = t5888*t1570;
  t6865 = t6852 + t6854;
  t6875 = t5888*t819;
  t6881 = -1.*t6290*t754*t1570;
  t6882 = t6875 + t6881;
  t6889 = t2072*t6865;
  t6897 = t6882*t2106;
  t6899 = t6889 + t6897;
  t6905 = t2072*t6882;
  t6906 = -1.*t6865*t2106;
  t6912 = t6905 + t6906;
  t6918 = t2128*t6899;
  t6922 = t6912*t2136;
  t6923 = t6918 + t6922;
  t6929 = t2128*t6912;
  t6933 = -1.*t6899*t2136;
  t6937 = t6929 + t6933;
  t6939 = t2163*t6923;
  t6940 = t6937*t2170;
  t6942 = t6939 + t6940;
  t6946 = t2163*t6937;
  t6952 = -1.*t6923*t2170;
  t6956 = t6946 + t6952;
  p_output1[0]=-0.03155 + t2125*t2142 + t2148*t2154 + t2162*t2172 + t2247*t2629 + t2022*t372 - 1.*t1570*t2120*t372 + t3167*t4340 - 1.1312*(-1.*t3167*t4097 + t3212*t4645) + 0.0306*(t3167*t3212 + t4097*t4645) + t4645*t5063 - 0.049*t742 - 0.004500000000000004*t754 + t2109*t372*t819;
  p_output1[1]=0. + 0.135*(1. - 1.*t5888) + 0.1305*t372*t5888 - 1.*t5888*t6150 + t6290*t6331 - 1.*t2109*t6420 - 1.*t2120*t6505 - 1.*t2142*t6565 - 1.*t2154*t6613 - 1.*t2172*t6664 - 1.*t2629*t6718 - 1.*t4340*t6755 - 1.*t5063*t6777 + 1.1312*(-1.*t4097*t6755 + t3212*t6777) - 0.0306*(t3212*t6755 + t4097*t6777) - 1.*t2022*t5888*t754;
  p_output1[2]=-0.07996 - 0.135*t6290 + 0.1305*t372*t6290 - 1.*t6150*t6290 - 1.*t5888*t6331 - 1.*t2109*t6865 - 1.*t2120*t6882 - 1.*t2142*t6899 - 1.*t2154*t6912 - 1.*t2172*t6923 - 1.*t2629*t6937 - 1.*t4340*t6942 - 1.*t5063*t6956 + 1.1312*(-1.*t4097*t6942 + t3212*t6956) - 0.0306*(t3212*t6942 + t4097*t6956) - 1.*t2022*t6290*t754;
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

#include "p_VectorNav_to_RightToeBottom_mex.hh"

namespace SymExpression
{

void p_VectorNav_to_RightToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
