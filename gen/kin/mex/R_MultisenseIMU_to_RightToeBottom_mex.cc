/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:17:32 GMT-05:00
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
  double t3;
  double t204;
  double t751;
  double t476;
  double t1169;
  double t1330;
  double t1128;
  double t1486;
  double t1512;
  double t1551;
  double t1257;
  double t1332;
  double t1335;
  double t1584;
  double t1014;
  double t2047;
  double t2054;
  double t2205;
  double t1348;
  double t1617;
  double t1767;
  double t2220;
  double t1013;
  double t2413;
  double t2760;
  double t3100;
  double t1953;
  double t2224;
  double t2365;
  double t3124;
  double t990;
  double t3605;
  double t3614;
  double t3826;
  double t2381;
  double t3231;
  double t3444;
  double t3849;
  double t4245;
  double t4522;
  double t4587;
  double t4111;
  double t4146;
  double t4147;
  double t4774;
  double t4801;
  double t4807;
  double t4152;
  double t4695;
  double t4729;
  double t5237;
  double t5317;
  double t5339;
  double t4769;
  double t4964;
  double t5125;
  double t5476;
  double t5520;
  double t5546;
  double t5172;
  double t5395;
  double t5405;
  double t6061;
  double t6071;
  double t6078;
  double t5903;
  double t5905;
  double t5945;
  double t6119;
  double t6120;
  double t6126;
  double t6015;
  double t6082;
  double t6094;
  double t6142;
  double t6151;
  double t6166;
  double t6101;
  double t6131;
  double t6134;
  double t3507;
  double t3874;
  double t3913;
  double t4023;
  double t4027;
  double t4029;
  double t5425;
  double t5557;
  double t5693;
  double t5838;
  double t5848;
  double t5851;
  double t6141;
  double t6167;
  double t6176;
  double t6197;
  double t6202;
  double t6213;
  t3 = Cos(var1[8]);
  t204 = Sin(var1[7]);
  t751 = Sin(var1[8]);
  t476 = Cos(var1[7]);
  t1169 = Cos(var1[9]);
  t1330 = Sin(var1[9]);
  t1128 = Cos(var1[10]);
  t1486 = t476*t1169;
  t1512 = -1.*t204*t751*t1330;
  t1551 = t1486 + t1512;
  t1257 = t1169*t204*t751;
  t1332 = t476*t1330;
  t1335 = t1257 + t1332;
  t1584 = Sin(var1[10]);
  t1014 = Cos(var1[11]);
  t2047 = t1128*t1551;
  t2054 = -1.*t1335*t1584;
  t2205 = t2047 + t2054;
  t1348 = t1128*t1335;
  t1617 = t1551*t1584;
  t1767 = t1348 + t1617;
  t2220 = Sin(var1[11]);
  t1013 = Cos(var1[12]);
  t2413 = t1014*t2205;
  t2760 = -1.*t1767*t2220;
  t3100 = t2413 + t2760;
  t1953 = t1014*t1767;
  t2224 = t2205*t2220;
  t2365 = t1953 + t2224;
  t3124 = Sin(var1[12]);
  t990 = Cos(var1[13]);
  t3605 = t1013*t3100;
  t3614 = -1.*t2365*t3124;
  t3826 = t3605 + t3614;
  t2381 = t1013*t2365;
  t3231 = t3100*t3124;
  t3444 = t2381 + t3231;
  t3849 = Sin(var1[13]);
  t4245 = -1.*t1169*t204;
  t4522 = -1.*t476*t751*t1330;
  t4587 = t4245 + t4522;
  t4111 = t476*t1169*t751;
  t4146 = -1.*t204*t1330;
  t4147 = t4111 + t4146;
  t4774 = t1128*t4587;
  t4801 = -1.*t4147*t1584;
  t4807 = t4774 + t4801;
  t4152 = t1128*t4147;
  t4695 = t4587*t1584;
  t4729 = t4152 + t4695;
  t5237 = t1014*t4807;
  t5317 = -1.*t4729*t2220;
  t5339 = t5237 + t5317;
  t4769 = t1014*t4729;
  t4964 = t4807*t2220;
  t5125 = t4769 + t4964;
  t5476 = t1013*t5339;
  t5520 = -1.*t5125*t3124;
  t5546 = t5476 + t5520;
  t5172 = t1013*t5125;
  t5395 = t5339*t3124;
  t5405 = t5172 + t5395;
  t6061 = -1.*t3*t1128*t1330;
  t6071 = -1.*t3*t1169*t1584;
  t6078 = t6061 + t6071;
  t5903 = t3*t1169*t1128;
  t5905 = -1.*t3*t1330*t1584;
  t5945 = t5903 + t5905;
  t6119 = t1014*t6078;
  t6120 = -1.*t5945*t2220;
  t6126 = t6119 + t6120;
  t6015 = t1014*t5945;
  t6082 = t6078*t2220;
  t6094 = t6015 + t6082;
  t6142 = t1013*t6126;
  t6151 = -1.*t6094*t3124;
  t6166 = t6142 + t6151;
  t6101 = t1013*t6094;
  t6131 = t6126*t3124;
  t6134 = t6101 + t6131;
  t3507 = t990*t3444;
  t3874 = t3826*t3849;
  t3913 = t3507 + t3874;
  t4023 = t990*t3826;
  t4027 = -1.*t3444*t3849;
  t4029 = t4023 + t4027;
  t5425 = t990*t5405;
  t5557 = t5546*t3849;
  t5693 = t5425 + t5557;
  t5838 = t990*t5546;
  t5848 = -1.*t5405*t3849;
  t5851 = t5838 + t5848;
  t6141 = t990*t6134;
  t6167 = t6166*t3849;
  t6176 = t6141 + t6167;
  t6197 = t990*t6166;
  t6202 = -1.*t6134*t3849;
  t6213 = t6197 + t6202;
  p_output1[0]=0. + t204*t3;
  p_output1[1]=0. - 1.*t3*t476;
  p_output1[2]=0. + t751;
  p_output1[3]=0. - 0.642788*t3913 - 0.766044*t4029;
  p_output1[4]=0. + 0.642788*t5693 + 0.766044*t5851;
  p_output1[5]=0. + 0.642788*t6176 + 0.766044*t6213;
  p_output1[6]=0. + 0.766044*t3913 - 0.642788*t4029;
  p_output1[7]=0. - 0.766044*t5693 + 0.642788*t5851;
  p_output1[8]=0. - 0.766044*t6176 + 0.642788*t6213;
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

#include "R_MultisenseIMU_to_RightToeBottom_mex.hh"

namespace SymExpression
{

void R_MultisenseIMU_to_RightToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
