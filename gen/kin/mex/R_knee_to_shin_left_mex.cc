/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:33:10 GMT-04:00
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
  double t391;
  double t771;
  double t1004;
  double t958;
  double t1005;
  double t529;
  double t1347;
  double t1368;
  double t1489;
  double t986;
  double t1229;
  double t1308;
  double t1505;
  double t380;
  double t1856;
  double t1875;
  double t1912;
  double t417;
  double t437;
  double t524;
  double t1345;
  double t1563;
  double t1598;
  double t1649;
  double t1680;
  double t1692;
  double t1970;
  double t2276;
  double t1695;
  double t2016;
  double t2144;
  double t358;
  double t2302;
  double t2395;
  double t2401;
  double t76;
  double t3031;
  double t3035;
  double t3097;
  double t2860;
  double t2870;
  double t2931;
  double t3279;
  double t3340;
  double t3354;
  double t2817;
  double t2950;
  double t3180;
  double t3186;
  double t3197;
  double t3259;
  double t2505;
  double t3277;
  double t3370;
  double t3384;
  double t3455;
  double t3534;
  double t3557;
  double t3936;
  double t3946;
  double t3998;
  double t3775;
  double t3833;
  double t3835;
  double t3873;
  double t3897;
  double t3915;
  double t3919;
  double t4002;
  double t4009;
  double t4049;
  double t4077;
  double t4089;
  double t2217;
  double t2403;
  double t2438;
  double t2529;
  double t2554;
  double t2595;
  double t3430;
  double t3559;
  double t3622;
  double t3673;
  double t3713;
  double t3745;
  double t4018;
  double t4092;
  double t4130;
  double t4159;
  double t4163;
  double t4223;
  t391 = Cos(var1[3]);
  t771 = Cos(var1[5]);
  t1004 = Sin(var1[4]);
  t958 = Sin(var1[3]);
  t1005 = Sin(var1[5]);
  t529 = Cos(var1[6]);
  t1347 = t391*t771*t1004;
  t1368 = t958*t1005;
  t1489 = t1347 + t1368;
  t986 = -1.*t771*t958;
  t1229 = t391*t1004*t1005;
  t1308 = t986 + t1229;
  t1505 = Sin(var1[6]);
  t380 = Cos(var1[8]);
  t1856 = t529*t1489;
  t1875 = -1.*t1308*t1505;
  t1912 = t1856 + t1875;
  t417 = Cos(var1[4]);
  t437 = Cos(var1[7]);
  t524 = t391*t417*t437;
  t1345 = t529*t1308;
  t1563 = t1489*t1505;
  t1598 = t1345 + t1563;
  t1649 = Sin(var1[7]);
  t1680 = t1598*t1649;
  t1692 = t524 + t1680;
  t1970 = Sin(var1[8]);
  t2276 = Cos(var1[9]);
  t1695 = t380*t1692;
  t2016 = t1912*t1970;
  t2144 = t1695 + t2016;
  t358 = Sin(var1[9]);
  t2302 = t380*t1912;
  t2395 = -1.*t1692*t1970;
  t2401 = t2302 + t2395;
  t76 = Cos(var1[10]);
  t3031 = t771*t958*t1004;
  t3035 = -1.*t391*t1005;
  t3097 = t3031 + t3035;
  t2860 = t391*t771;
  t2870 = t958*t1004*t1005;
  t2931 = t2860 + t2870;
  t3279 = t529*t3097;
  t3340 = -1.*t2931*t1505;
  t3354 = t3279 + t3340;
  t2817 = t417*t437*t958;
  t2950 = t529*t2931;
  t3180 = t3097*t1505;
  t3186 = t2950 + t3180;
  t3197 = t3186*t1649;
  t3259 = t2817 + t3197;
  t2505 = Sin(var1[10]);
  t3277 = t380*t3259;
  t3370 = t3354*t1970;
  t3384 = t3277 + t3370;
  t3455 = t380*t3354;
  t3534 = -1.*t3259*t1970;
  t3557 = t3455 + t3534;
  t3936 = t417*t771*t529;
  t3946 = -1.*t417*t1005*t1505;
  t3998 = t3936 + t3946;
  t3775 = -1.*t437*t1004;
  t3833 = t417*t529*t1005;
  t3835 = t417*t771*t1505;
  t3873 = t3833 + t3835;
  t3897 = t3873*t1649;
  t3915 = t3775 + t3897;
  t3919 = t380*t3915;
  t4002 = t3998*t1970;
  t4009 = t3919 + t4002;
  t4049 = t380*t3998;
  t4077 = -1.*t3915*t1970;
  t4089 = t4049 + t4077;
  t2217 = -1.*t358*t2144;
  t2403 = t2276*t2401;
  t2438 = t2217 + t2403;
  t2529 = t2276*t2144;
  t2554 = t358*t2401;
  t2595 = t2529 + t2554;
  t3430 = -1.*t358*t3384;
  t3559 = t2276*t3557;
  t3622 = t3430 + t3559;
  t3673 = t2276*t3384;
  t3713 = t358*t3557;
  t3745 = t3673 + t3713;
  t4018 = -1.*t358*t4009;
  t4092 = t2276*t4089;
  t4130 = t4018 + t4092;
  t4159 = t2276*t4009;
  t4163 = t358*t4089;
  t4223 = t4159 + t4163;
  p_output1[0]=t2505*t2595 - 1.*t2438*t76;
  p_output1[1]=t2505*t3745 - 1.*t3622*t76;
  p_output1[2]=t2505*t4223 - 1.*t4130*t76;
  p_output1[3]=t2438*t2505 + t2595*t76;
  p_output1[4]=t2505*t3622 + t3745*t76;
  p_output1[5]=t2505*t4130 + t4223*t76;
  p_output1[6]=t1649*t391*t417 - 1.*t1598*t437;
  p_output1[7]=-1.*t3186*t437 + t1649*t417*t958;
  p_output1[8]=-1.*t1004*t1649 - 1.*t3873*t437;
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

#include "R_knee_to_shin_left_mex.hh"

namespace SymExpression
{

void R_knee_to_shin_left_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
