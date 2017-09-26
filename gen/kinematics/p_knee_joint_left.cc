/*
 * Automatically Generated from Mathematica.
 * Tue 26 Sep 2017 12:22:19 GMT-04:00
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
  double t9920;
  double t9801;
  double t9921;
  double t9861;
  double t9931;
  double t3157;
  double t9918;
  double t9937;
  double t9942;
  double t9980;
  double t9983;
  double t9987;
  double t10009;
  double t10030;
  double t10124;
  double t10130;
  double t10132;
  double t10054;
  double t10065;
  double t10076;
  double t10133;
  double t10241;
  double t10244;
  double t10245;
  double t10250;
  double t10223;
  double t10231;
  double t10232;
  double t10259;
  double t10165;
  double t10170;
  double t10181;
  double t10191;
  double t10209;
  double t10211;
  double t10212;
  double t10289;
  double t10293;
  double t10298;
  double t4560;
  double t9769;
  double t9788;
  double t9798;
  double t10012;
  double t10013;
  double t10035;
  double t10044;
  double t10046;
  double t10047;
  double t10317;
  double t10318;
  double t10319;
  double t10322;
  double t10323;
  double t10326;
  double t10136;
  double t10144;
  double t10189;
  double t10195;
  double t10202;
  double t10340;
  double t10343;
  double t10344;
  double t10330;
  double t10333;
  double t10337;
  double t10248;
  double t10251;
  double t10257;
  double t10261;
  double t10263;
  double t10265;
  double t10353;
  double t10354;
  double t10355;
  double t10285;
  double t10286;
  double t10287;
  double t10346;
  double t10348;
  double t10349;
  double t10370;
  double t10371;
  double t10372;
  double t10408;
  double t10409;
  double t10411;
  double t10400;
  double t10402;
  double t10405;
  double t10420;
  double t10421;
  double t10422;
  double t10414;
  double t10415;
  double t10416;
  double t10432;
  double t10434;
  double t10437;
  t9920 = Cos(var1[3]);
  t9801 = Cos(var1[5]);
  t9921 = Sin(var1[4]);
  t9861 = Sin(var1[3]);
  t9931 = Sin(var1[5]);
  t3157 = Cos(var1[6]);
  t9918 = -1.*t9801*t9861;
  t9937 = t9920*t9921*t9931;
  t9942 = t9918 + t9937;
  t9980 = t9920*t9801*t9921;
  t9983 = t9861*t9931;
  t9987 = t9980 + t9983;
  t10009 = Sin(var1[6]);
  t10030 = Cos(var1[7]);
  t10124 = t3157*t9987;
  t10130 = -1.*t9942*t10009;
  t10132 = t10124 + t10130;
  t10054 = t3157*t9942;
  t10065 = t9987*t10009;
  t10076 = t10054 + t10065;
  t10133 = Sin(var1[7]);
  t10241 = Cos(var1[8]);
  t10244 = -1.*t10241;
  t10245 = 1. + t10244;
  t10250 = Sin(var1[8]);
  t10223 = t10030*t10076;
  t10231 = t10132*t10133;
  t10232 = t10223 + t10231;
  t10259 = Cos(var1[4]);
  t10165 = Cos(var1[9]);
  t10170 = -1.*t10165;
  t10181 = 1. + t10170;
  t10191 = Sin(var1[9]);
  t10209 = t10030*t10132;
  t10211 = -1.*t10076*t10133;
  t10212 = t10209 + t10211;
  t10289 = t9920*t10259*t10241;
  t10293 = t10232*t10250;
  t10298 = t10289 + t10293;
  t4560 = -1.*t3157;
  t9769 = 1. + t4560;
  t9788 = 0.135*t9769;
  t9798 = 0. + t9788;
  t10012 = -0.135*t10009;
  t10013 = 0. + t10012;
  t10035 = -1.*t10030;
  t10044 = 1. + t10035;
  t10046 = 0.135*t10044;
  t10047 = 0. + t10046;
  t10317 = t9920*t9801;
  t10318 = t9861*t9921*t9931;
  t10319 = t10317 + t10318;
  t10322 = t9801*t9861*t9921;
  t10323 = -1.*t9920*t9931;
  t10326 = t10322 + t10323;
  t10136 = -0.135*t10133;
  t10144 = 0. + t10136;
  t10189 = -0.09*t10181;
  t10195 = 0.049*t10191;
  t10202 = 0. + t10189 + t10195;
  t10340 = t3157*t10326;
  t10343 = -1.*t10319*t10009;
  t10344 = t10340 + t10343;
  t10330 = t3157*t10319;
  t10333 = t10326*t10009;
  t10337 = t10330 + t10333;
  t10248 = 0.135*t10245;
  t10251 = 0.049*t10250;
  t10257 = 0. + t10248 + t10251;
  t10261 = -0.049*t10245;
  t10263 = 0.135*t10250;
  t10265 = 0. + t10261 + t10263;
  t10353 = t10030*t10337;
  t10354 = t10344*t10133;
  t10355 = t10353 + t10354;
  t10285 = -0.049*t10181;
  t10286 = -0.09*t10191;
  t10287 = 0. + t10285 + t10286;
  t10346 = t10030*t10344;
  t10348 = -1.*t10337*t10133;
  t10349 = t10346 + t10348;
  t10370 = t10259*t10241*t9861;
  t10371 = t10355*t10250;
  t10372 = t10370 + t10371;
  t10408 = t10259*t9801*t3157;
  t10409 = -1.*t10259*t9931*t10009;
  t10411 = t10408 + t10409;
  t10400 = t10259*t3157*t9931;
  t10402 = t10259*t9801*t10009;
  t10405 = t10400 + t10402;
  t10420 = t10030*t10405;
  t10421 = t10411*t10133;
  t10422 = t10420 + t10421;
  t10414 = t10030*t10411;
  t10415 = -1.*t10405*t10133;
  t10416 = t10414 + t10415;
  t10432 = -1.*t10241*t9921;
  t10434 = t10422*t10250;
  t10437 = t10432 + t10434;
  p_output1[0]=0. + t10047*t10076 + t10132*t10144 + t10202*t10212 + t10232*t10257 + t10287*t10298 - 0.049*(t10191*t10212 + t10165*t10298) - 0.21*(t10165*t10212 - 1.*t10191*t10298) + t10259*t10265*t9920 + 0.1305*(t10232*t10241 - 1.*t10250*t10259*t9920) + t9798*t9942 + t10013*t9987 + var1[0];
  p_output1[1]=0. + t10013*t10326 + t10047*t10337 + t10144*t10344 + t10202*t10349 + t10257*t10355 + t10287*t10372 - 0.049*(t10191*t10349 + t10165*t10372) - 0.21*(t10165*t10349 - 1.*t10191*t10372) + t10319*t9798 + t10259*t10265*t9861 + 0.1305*(t10241*t10355 - 1.*t10250*t10259*t9861) + var1[1];
  p_output1[2]=0. + t10047*t10405 + t10144*t10411 + t10202*t10416 + t10257*t10422 + t10287*t10437 - 0.049*(t10191*t10416 + t10165*t10437) - 0.21*(t10165*t10416 - 1.*t10191*t10437) + t10013*t10259*t9801 - 1.*t10265*t9921 + 0.1305*(t10241*t10422 + t10250*t9921) + t10259*t9798*t9931 + var1[2];
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
    ( !(mrows == 22 && ncols == 1) && 
      !(mrows == 1 && ncols == 22))) 
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

#include "p_knee_joint_left.hh"

namespace SymExpression
{

void p_knee_joint_left_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
