/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:37:00 GMT-04:00
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
  double t121;
  double t161;
  double t678;
  double t274;
  double t1514;
  double t1726;
  double t1491;
  double t1888;
  double t2102;
  double t2131;
  double t1529;
  double t1788;
  double t1837;
  double t2195;
  double t1236;
  double t2349;
  double t2363;
  double t2390;
  double t1854;
  double t2222;
  double t2271;
  double t2425;
  double t1023;
  double t2624;
  double t2647;
  double t2665;
  double t2332;
  double t2427;
  double t2461;
  double t2760;
  double t956;
  double t2990;
  double t3021;
  double t3100;
  double t2574;
  double t2764;
  double t2789;
  double t3193;
  double t3527;
  double t3545;
  double t3547;
  double t3434;
  double t3506;
  double t3508;
  double t3666;
  double t3704;
  double t3726;
  double t3511;
  double t3557;
  double t3617;
  double t3809;
  double t3845;
  double t3922;
  double t3622;
  double t3744;
  double t3775;
  double t3987;
  double t3990;
  double t4000;
  double t3803;
  double t3942;
  double t3945;
  double t4338;
  double t4362;
  double t4400;
  double t4228;
  double t4236;
  double t4293;
  double t4500;
  double t4535;
  double t4540;
  double t4309;
  double t4408;
  double t4417;
  double t4688;
  double t4712;
  double t4772;
  double t4495;
  double t4545;
  double t4607;
  double t2919;
  double t3207;
  double t3246;
  double t3264;
  double t3327;
  double t3343;
  double t3981;
  double t4049;
  double t4125;
  double t4154;
  double t4167;
  double t4191;
  double t4687;
  double t4780;
  double t4781;
  double t4793;
  double t4817;
  double t4832;
  t121 = Cos(var1[8]);
  t161 = Sin(var1[7]);
  t678 = Sin(var1[8]);
  t274 = Cos(var1[7]);
  t1514 = Cos(var1[9]);
  t1726 = Sin(var1[9]);
  t1491 = Cos(var1[10]);
  t1888 = t274*t1514;
  t2102 = -1.*t161*t678*t1726;
  t2131 = t1888 + t2102;
  t1529 = t1514*t161*t678;
  t1788 = t274*t1726;
  t1837 = t1529 + t1788;
  t2195 = Sin(var1[10]);
  t1236 = Cos(var1[11]);
  t2349 = t1491*t2131;
  t2363 = -1.*t1837*t2195;
  t2390 = t2349 + t2363;
  t1854 = t1491*t1837;
  t2222 = t2131*t2195;
  t2271 = t1854 + t2222;
  t2425 = Sin(var1[11]);
  t1023 = Cos(var1[12]);
  t2624 = t1236*t2390;
  t2647 = -1.*t2271*t2425;
  t2665 = t2624 + t2647;
  t2332 = t1236*t2271;
  t2427 = t2390*t2425;
  t2461 = t2332 + t2427;
  t2760 = Sin(var1[12]);
  t956 = Cos(var1[13]);
  t2990 = t1023*t2665;
  t3021 = -1.*t2461*t2760;
  t3100 = t2990 + t3021;
  t2574 = t1023*t2461;
  t2764 = t2665*t2760;
  t2789 = t2574 + t2764;
  t3193 = Sin(var1[13]);
  t3527 = -1.*t1514*t161;
  t3545 = -1.*t274*t678*t1726;
  t3547 = t3527 + t3545;
  t3434 = t274*t1514*t678;
  t3506 = -1.*t161*t1726;
  t3508 = t3434 + t3506;
  t3666 = t1491*t3547;
  t3704 = -1.*t3508*t2195;
  t3726 = t3666 + t3704;
  t3511 = t1491*t3508;
  t3557 = t3547*t2195;
  t3617 = t3511 + t3557;
  t3809 = t1236*t3726;
  t3845 = -1.*t3617*t2425;
  t3922 = t3809 + t3845;
  t3622 = t1236*t3617;
  t3744 = t3726*t2425;
  t3775 = t3622 + t3744;
  t3987 = t1023*t3922;
  t3990 = -1.*t3775*t2760;
  t4000 = t3987 + t3990;
  t3803 = t1023*t3775;
  t3942 = t3922*t2760;
  t3945 = t3803 + t3942;
  t4338 = -1.*t121*t1491*t1726;
  t4362 = -1.*t121*t1514*t2195;
  t4400 = t4338 + t4362;
  t4228 = t121*t1514*t1491;
  t4236 = -1.*t121*t1726*t2195;
  t4293 = t4228 + t4236;
  t4500 = t1236*t4400;
  t4535 = -1.*t4293*t2425;
  t4540 = t4500 + t4535;
  t4309 = t1236*t4293;
  t4408 = t4400*t2425;
  t4417 = t4309 + t4408;
  t4688 = t1023*t4540;
  t4712 = -1.*t4417*t2760;
  t4772 = t4688 + t4712;
  t4495 = t1023*t4417;
  t4545 = t4540*t2760;
  t4607 = t4495 + t4545;
  t2919 = t956*t2789;
  t3207 = t3100*t3193;
  t3246 = t2919 + t3207;
  t3264 = t956*t3100;
  t3327 = -1.*t2789*t3193;
  t3343 = t3264 + t3327;
  t3981 = t956*t3945;
  t4049 = t4000*t3193;
  t4125 = t3981 + t4049;
  t4154 = t956*t4000;
  t4167 = -1.*t3945*t3193;
  t4191 = t4154 + t4167;
  t4687 = t956*t4607;
  t4780 = t4772*t3193;
  t4781 = t4687 + t4780;
  t4793 = t956*t4772;
  t4817 = -1.*t4607*t3193;
  t4832 = t4793 + t4817;
  p_output1[0]=0. + t121*t161;
  p_output1[1]=0. - 1.*t121*t274;
  p_output1[2]=0. + t678;
  p_output1[3]=0. - 0.642788*t3246 - 0.766044*t3343;
  p_output1[4]=0. + 0.642788*t4125 + 0.766044*t4191;
  p_output1[5]=0. + 0.642788*t4781 + 0.766044*t4832;
  p_output1[6]=0. + 0.766044*t3246 - 0.642788*t3343;
  p_output1[7]=0. - 0.766044*t4125 + 0.642788*t4191;
  p_output1[8]=0. - 0.766044*t4781 + 0.642788*t4832;
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
