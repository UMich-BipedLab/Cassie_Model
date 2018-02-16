/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:17:18 GMT-05:00
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
  double t452;
  double t1193;
  double t1018;
  double t1019;
  double t1231;
  double t1344;
  double t1023;
  double t1236;
  double t1260;
  double t956;
  double t1345;
  double t1377;
  double t1388;
  double t1621;
  double t1268;
  double t1545;
  double t1553;
  double t879;
  double t1715;
  double t1722;
  double t1728;
  double t2088;
  double t1560;
  double t1737;
  double t1781;
  double t872;
  double t2244;
  double t2279;
  double t2308;
  double t343;
  double t84;
  double t718;
  double t2689;
  double t2728;
  double t2788;
  double t2849;
  double t2855;
  double t2868;
  double t2837;
  double t2894;
  double t2903;
  double t2936;
  double t2942;
  double t2949;
  double t2908;
  double t2986;
  double t2994;
  double t3034;
  double t3123;
  double t3148;
  double t3025;
  double t3152;
  double t3168;
  double t3242;
  double t3252;
  double t3265;
  double t3378;
  double t3407;
  double t3423;
  double t3447;
  double t3460;
  double t3462;
  double t3445;
  double t3497;
  double t3602;
  double t3632;
  double t3706;
  double t3720;
  double t3604;
  double t3722;
  double t3750;
  double t3774;
  double t3797;
  double t3805;
  double t3763;
  double t3829;
  double t3859;
  double t3899;
  double t3936;
  double t3939;
  double t2026;
  double t2312;
  double t2322;
  double t2432;
  double t2437;
  double t2528;
  double t3194;
  double t3319;
  double t3326;
  double t3339;
  double t3365;
  double t3370;
  double t3860;
  double t4002;
  double t4004;
  double t4051;
  double t4060;
  double t4086;
  double t4538;
  double t4647;
  double t5047;
  double t5120;
  double t5346;
  double t5359;
  double t5638;
  double t5641;
  double t4404;
  double t4495;
  double t4909;
  double t4921;
  double t4922;
  double t4929;
  double t4939;
  double t4839;
  double t4845;
  double t4848;
  double t4982;
  double t4990;
  double t5011;
  double t5147;
  double t5194;
  double t5206;
  double t5273;
  double t5306;
  double t5316;
  double t5397;
  double t5407;
  double t5436;
  double t5533;
  double t5539;
  double t5613;
  double t5647;
  double t5648;
  double t5673;
  double t5689;
  double t5691;
  double t5734;
  double t5863;
  double t5886;
  double t5916;
  double t5942;
  double t6037;
  double t6079;
  t452 = Cos(var1[1]);
  t1193 = Cos(var1[3]);
  t1018 = Cos(var1[2]);
  t1019 = Sin(var1[3]);
  t1231 = Sin(var1[2]);
  t1344 = Cos(var1[4]);
  t1023 = -1.*t452*t1018*t1019;
  t1236 = -1.*t1193*t452*t1231;
  t1260 = t1023 + t1236;
  t956 = Sin(var1[4]);
  t1345 = t1193*t452*t1018;
  t1377 = -1.*t452*t1019*t1231;
  t1388 = t1345 + t1377;
  t1621 = Cos(var1[5]);
  t1268 = t956*t1260;
  t1545 = t1344*t1388;
  t1553 = t1268 + t1545;
  t879 = Sin(var1[5]);
  t1715 = t1344*t1260;
  t1722 = -1.*t956*t1388;
  t1728 = t1715 + t1722;
  t2088 = Cos(var1[6]);
  t1560 = -1.*t879*t1553;
  t1737 = t1621*t1728;
  t1781 = t1560 + t1737;
  t872 = Sin(var1[6]);
  t2244 = t1621*t1553;
  t2279 = t879*t1728;
  t2308 = t2244 + t2279;
  t343 = Cos(var1[0]);
  t84 = Sin(var1[1]);
  t718 = Sin(var1[0]);
  t2689 = t343*t1018*t84;
  t2728 = -1.*t718*t1231;
  t2788 = t2689 + t2728;
  t2849 = -1.*t1018*t718;
  t2855 = -1.*t343*t84*t1231;
  t2868 = t2849 + t2855;
  t2837 = -1.*t1019*t2788;
  t2894 = t1193*t2868;
  t2903 = t2837 + t2894;
  t2936 = t1193*t2788;
  t2942 = t1019*t2868;
  t2949 = t2936 + t2942;
  t2908 = t956*t2903;
  t2986 = t1344*t2949;
  t2994 = t2908 + t2986;
  t3034 = t1344*t2903;
  t3123 = -1.*t956*t2949;
  t3148 = t3034 + t3123;
  t3025 = -1.*t879*t2994;
  t3152 = t1621*t3148;
  t3168 = t3025 + t3152;
  t3242 = t1621*t2994;
  t3252 = t879*t3148;
  t3265 = t3242 + t3252;
  t3378 = t1018*t718*t84;
  t3407 = t343*t1231;
  t3423 = t3378 + t3407;
  t3447 = t343*t1018;
  t3460 = -1.*t718*t84*t1231;
  t3462 = t3447 + t3460;
  t3445 = -1.*t1019*t3423;
  t3497 = t1193*t3462;
  t3602 = t3445 + t3497;
  t3632 = t1193*t3423;
  t3706 = t1019*t3462;
  t3720 = t3632 + t3706;
  t3604 = t956*t3602;
  t3722 = t1344*t3720;
  t3750 = t3604 + t3722;
  t3774 = t1344*t3602;
  t3797 = -1.*t956*t3720;
  t3805 = t3774 + t3797;
  t3763 = -1.*t879*t3750;
  t3829 = t1621*t3805;
  t3859 = t3763 + t3829;
  t3899 = t1621*t3750;
  t3936 = t879*t3805;
  t3939 = t3899 + t3936;
  t2026 = t872*t1781;
  t2312 = t2088*t2308;
  t2322 = t2026 + t2312;
  t2432 = t2088*t1781;
  t2437 = -1.*t872*t2308;
  t2528 = t2432 + t2437;
  t3194 = t872*t3168;
  t3319 = t2088*t3265;
  t3326 = t3194 + t3319;
  t3339 = t2088*t3168;
  t3365 = -1.*t872*t3265;
  t3370 = t3339 + t3365;
  t3860 = t872*t3859;
  t4002 = t2088*t3939;
  t4004 = t3860 + t4002;
  t4051 = t2088*t3859;
  t4060 = -1.*t872*t3939;
  t4086 = t4051 + t4060;
  t4538 = -1.*t1193;
  t4647 = 1. + t4538;
  t5047 = -1.*t1344;
  t5120 = 1. + t5047;
  t5346 = -1.*t1621;
  t5359 = 1. + t5346;
  t5638 = -1.*t2088;
  t5641 = 1. + t5638;
  t4404 = -1.*t452;
  t4495 = 1. + t4404;
  t4909 = -1.*t1018;
  t4921 = 1. + t4909;
  t4922 = -0.049*t4921;
  t4929 = -0.09*t1231;
  t4939 = 0. + t4922 + t4929;
  t4839 = -0.049*t4647;
  t4845 = -0.21*t1019;
  t4848 = 0. + t4839 + t4845;
  t4982 = -0.21*t4647;
  t4990 = 0.049*t1019;
  t5011 = 0. + t4982 + t4990;
  t5147 = -0.2707*t5120;
  t5194 = 0.0016*t956;
  t5206 = 0. + t5147 + t5194;
  t5273 = -0.0016*t5120;
  t5306 = -0.2707*t956;
  t5316 = 0. + t5273 + t5306;
  t5397 = 0.0184*t5359;
  t5407 = -0.7055*t879;
  t5436 = 0. + t5397 + t5407;
  t5533 = -0.7055*t5359;
  t5539 = -0.0184*t879;
  t5613 = 0. + t5533 + t5539;
  t5647 = -1.1135*t5641;
  t5648 = 0.0216*t872;
  t5673 = 0. + t5647 + t5648;
  t5689 = -0.0216*t5641;
  t5691 = -1.1135*t872;
  t5734 = 0. + t5689 + t5691;
  t5863 = 0.135*t4495;
  t5886 = 0.049*t84;
  t5916 = 0. + t5863 + t5886;
  t5942 = -0.09*t4921;
  t6037 = 0.049*t1231;
  t6079 = 0. + t5942 + t6037;
  p_output1[0]=0. + t84;
  p_output1[1]=0. + t343*t452;
  p_output1[2]=0. + t452*t718;
  p_output1[3]=0.;
  p_output1[4]=0. + 0.642788*t2322 + 0.766044*t2528;
  p_output1[5]=0. - 0.642788*t3326 - 0.766044*t3370;
  p_output1[6]=0. - 0.642788*t4004 - 0.766044*t4086;
  p_output1[7]=0.;
  p_output1[8]=0. - 0.766044*t2322 + 0.642788*t2528;
  p_output1[9]=0. + 0.766044*t3326 - 0.642788*t3370;
  p_output1[10]=0. + 0.766044*t4004 - 0.642788*t4086;
  p_output1[11]=0.;
  p_output1[12]=-0.03155 + 0.0306*t2322 - 1.1312*t2528 - 0.049*t4495 + t1018*t452*t4848 + t452*t4939 - 1.*t1231*t452*t5011 + t1260*t5206 + t1388*t5316 + t1553*t5436 + t1728*t5613 + t1781*t5673 + t2308*t5734 + 0.004500000000000004*t84;
  p_output1[13]=0. - 0.0306*t3326 + 1.1312*t3370 - 0.135*(1. - 1.*t343) - 0.1305*t343*t452 - 1.*t2788*t4848 - 1.*t2868*t5011 - 1.*t2903*t5206 - 1.*t2949*t5316 - 1.*t2994*t5436 - 1.*t3148*t5613 - 1.*t3168*t5673 - 1.*t3265*t5734 - 1.*t343*t5916 + t6079*t718 - 1.*t343*t4939*t84;
  p_output1[14]=-0.07996 - 0.0306*t4004 + 1.1312*t4086 - 1.*t3423*t4848 - 1.*t3462*t5011 - 1.*t3602*t5206 - 1.*t3720*t5316 - 1.*t3750*t5436 - 1.*t3805*t5613 - 1.*t3859*t5673 - 1.*t3939*t5734 - 1.*t343*t6079 + 0.135*t718 - 0.1305*t452*t718 - 1.*t5916*t718 - 1.*t4939*t718*t84;
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
