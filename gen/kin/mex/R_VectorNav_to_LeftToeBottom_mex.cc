/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:36:05 GMT-05:00
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
  double t425;
  double t988;
  double t952;
  double t971;
  double t990;
  double t1049;
  double t972;
  double t1011;
  double t1013;
  double t913;
  double t1118;
  double t1162;
  double t1165;
  double t1272;
  double t1047;
  double t1196;
  double t1235;
  double t909;
  double t1287;
  double t1293;
  double t1299;
  double t1315;
  double t1247;
  double t1302;
  double t1310;
  double t886;
  double t1349;
  double t1369;
  double t1418;
  double t355;
  double t254;
  double t581;
  double t1821;
  double t1873;
  double t1937;
  double t2049;
  double t2067;
  double t2091;
  double t2003;
  double t2107;
  double t2232;
  double t2354;
  double t2482;
  double t2483;
  double t2260;
  double t2552;
  double t2571;
  double t2611;
  double t2623;
  double t2743;
  double t2577;
  double t2764;
  double t2808;
  double t2961;
  double t2989;
  double t2996;
  double t3421;
  double t3423;
  double t3430;
  double t3479;
  double t3484;
  double t3488;
  double t3462;
  double t3498;
  double t3539;
  double t3620;
  double t3698;
  double t3707;
  double t3603;
  double t3708;
  double t3711;
  double t3819;
  double t3860;
  double t3866;
  double t3767;
  double t3890;
  double t3891;
  double t3905;
  double t3907;
  double t3940;
  double t1313;
  double t1421;
  double t1478;
  double t1544;
  double t1545;
  double t1697;
  double t2958;
  double t3021;
  double t3059;
  double t3210;
  double t3253;
  double t3388;
  double t3893;
  double t3965;
  double t3989;
  double t4021;
  double t4032;
  double t4079;
  t425 = Cos(var1[1]);
  t988 = Cos(var1[3]);
  t952 = Cos(var1[2]);
  t971 = Sin(var1[3]);
  t990 = Sin(var1[2]);
  t1049 = Cos(var1[4]);
  t972 = -1.*t425*t952*t971;
  t1011 = -1.*t988*t425*t990;
  t1013 = t972 + t1011;
  t913 = Sin(var1[4]);
  t1118 = t988*t425*t952;
  t1162 = -1.*t425*t971*t990;
  t1165 = t1118 + t1162;
  t1272 = Cos(var1[5]);
  t1047 = t913*t1013;
  t1196 = t1049*t1165;
  t1235 = t1047 + t1196;
  t909 = Sin(var1[5]);
  t1287 = t1049*t1013;
  t1293 = -1.*t913*t1165;
  t1299 = t1287 + t1293;
  t1315 = Cos(var1[6]);
  t1247 = -1.*t909*t1235;
  t1302 = t1272*t1299;
  t1310 = t1247 + t1302;
  t886 = Sin(var1[6]);
  t1349 = t1272*t1235;
  t1369 = t909*t1299;
  t1418 = t1349 + t1369;
  t355 = Cos(var1[0]);
  t254 = Sin(var1[1]);
  t581 = Sin(var1[0]);
  t1821 = t355*t952*t254;
  t1873 = -1.*t581*t990;
  t1937 = t1821 + t1873;
  t2049 = -1.*t952*t581;
  t2067 = -1.*t355*t254*t990;
  t2091 = t2049 + t2067;
  t2003 = -1.*t971*t1937;
  t2107 = t988*t2091;
  t2232 = t2003 + t2107;
  t2354 = t988*t1937;
  t2482 = t971*t2091;
  t2483 = t2354 + t2482;
  t2260 = t913*t2232;
  t2552 = t1049*t2483;
  t2571 = t2260 + t2552;
  t2611 = t1049*t2232;
  t2623 = -1.*t913*t2483;
  t2743 = t2611 + t2623;
  t2577 = -1.*t909*t2571;
  t2764 = t1272*t2743;
  t2808 = t2577 + t2764;
  t2961 = t1272*t2571;
  t2989 = t909*t2743;
  t2996 = t2961 + t2989;
  t3421 = t952*t581*t254;
  t3423 = t355*t990;
  t3430 = t3421 + t3423;
  t3479 = t355*t952;
  t3484 = -1.*t581*t254*t990;
  t3488 = t3479 + t3484;
  t3462 = -1.*t971*t3430;
  t3498 = t988*t3488;
  t3539 = t3462 + t3498;
  t3620 = t988*t3430;
  t3698 = t971*t3488;
  t3707 = t3620 + t3698;
  t3603 = t913*t3539;
  t3708 = t1049*t3707;
  t3711 = t3603 + t3708;
  t3819 = t1049*t3539;
  t3860 = -1.*t913*t3707;
  t3866 = t3819 + t3860;
  t3767 = -1.*t909*t3711;
  t3890 = t1272*t3866;
  t3891 = t3767 + t3890;
  t3905 = t1272*t3711;
  t3907 = t909*t3866;
  t3940 = t3905 + t3907;
  t1313 = t886*t1310;
  t1421 = t1315*t1418;
  t1478 = t1313 + t1421;
  t1544 = t1315*t1310;
  t1545 = -1.*t886*t1418;
  t1697 = t1544 + t1545;
  t2958 = t886*t2808;
  t3021 = t1315*t2996;
  t3059 = t2958 + t3021;
  t3210 = t1315*t2808;
  t3253 = -1.*t886*t2996;
  t3388 = t3210 + t3253;
  t3893 = t886*t3891;
  t3965 = t1315*t3940;
  t3989 = t3893 + t3965;
  t4021 = t1315*t3891;
  t4032 = -1.*t886*t3940;
  t4079 = t4021 + t4032;
  p_output1[0]=0. + t254;
  p_output1[1]=0. + t355*t425;
  p_output1[2]=0. + t425*t581;
  p_output1[3]=0. + 0.642788*t1478 + 0.766044*t1697;
  p_output1[4]=0. - 0.642788*t3059 - 0.766044*t3388;
  p_output1[5]=0. - 0.642788*t3989 - 0.766044*t4079;
  p_output1[6]=0. - 0.766044*t1478 + 0.642788*t1697;
  p_output1[7]=0. + 0.766044*t3059 - 0.642788*t3388;
  p_output1[8]=0. + 0.766044*t3989 - 0.642788*t4079;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "R_VectorNav_to_LeftToeBottom_mex.hh"

namespace SymExpression
{

void R_VectorNav_to_LeftToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
