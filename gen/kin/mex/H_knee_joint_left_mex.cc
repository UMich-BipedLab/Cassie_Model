/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:33:05 GMT-04:00
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
  double t188;
  double t291;
  double t357;
  double t295;
  double t422;
  double t247;
  double t615;
  double t653;
  double t714;
  double t347;
  double t472;
  double t511;
  double t798;
  double t142;
  double t1170;
  double t1174;
  double t1225;
  double t194;
  double t233;
  double t236;
  double t553;
  double t913;
  double t961;
  double t1104;
  double t1118;
  double t1128;
  double t1226;
  double t17;
  double t1536;
  double t1550;
  double t1552;
  double t1495;
  double t1517;
  double t1521;
  double t1327;
  double t1773;
  double t1897;
  double t1918;
  double t1467;
  double t1522;
  double t1613;
  double t1629;
  double t1693;
  double t1738;
  double t2268;
  double t2314;
  double t2351;
  double t2107;
  double t2130;
  double t2133;
  double t2176;
  double t2190;
  double t2241;
  double t1137;
  double t1261;
  double t1285;
  double t1329;
  double t1373;
  double t1423;
  double t1742;
  double t1923;
  double t1937;
  double t1974;
  double t2029;
  double t2052;
  double t2265;
  double t2366;
  double t2372;
  double t2380;
  double t2381;
  double t2392;
  double t3016;
  double t3023;
  double t3348;
  double t3362;
  double t3566;
  double t3574;
  double t2527;
  double t2541;
  double t2555;
  double t2868;
  double t2886;
  double t2898;
  double t2899;
  double t2963;
  double t2982;
  double t3061;
  double t3065;
  double t3074;
  double t3142;
  double t3189;
  double t3205;
  double t3367;
  double t3375;
  double t3417;
  double t3477;
  double t3503;
  double t3513;
  double t3619;
  double t3631;
  double t3649;
  double t3666;
  double t3684;
  double t3699;
  double t2565;
  double t2577;
  double t2590;
  double t2617;
  double t2627;
  double t2648;
  t188 = Cos(var1[3]);
  t291 = Cos(var1[5]);
  t357 = Sin(var1[4]);
  t295 = Sin(var1[3]);
  t422 = Sin(var1[5]);
  t247 = Cos(var1[6]);
  t615 = t188*t291*t357;
  t653 = t295*t422;
  t714 = t615 + t653;
  t347 = -1.*t291*t295;
  t472 = t188*t357*t422;
  t511 = t347 + t472;
  t798 = Sin(var1[6]);
  t142 = Cos(var1[8]);
  t1170 = t247*t714;
  t1174 = -1.*t511*t798;
  t1225 = t1170 + t1174;
  t194 = Cos(var1[4]);
  t233 = Cos(var1[7]);
  t236 = t188*t194*t233;
  t553 = t247*t511;
  t913 = t714*t798;
  t961 = t553 + t913;
  t1104 = Sin(var1[7]);
  t1118 = t961*t1104;
  t1128 = t236 + t1118;
  t1226 = Sin(var1[8]);
  t17 = Sin(var1[9]);
  t1536 = t291*t295*t357;
  t1550 = -1.*t188*t422;
  t1552 = t1536 + t1550;
  t1495 = t188*t291;
  t1517 = t295*t357*t422;
  t1521 = t1495 + t1517;
  t1327 = Cos(var1[9]);
  t1773 = t247*t1552;
  t1897 = -1.*t1521*t798;
  t1918 = t1773 + t1897;
  t1467 = t194*t233*t295;
  t1522 = t247*t1521;
  t1613 = t1552*t798;
  t1629 = t1522 + t1613;
  t1693 = t1629*t1104;
  t1738 = t1467 + t1693;
  t2268 = t194*t291*t247;
  t2314 = -1.*t194*t422*t798;
  t2351 = t2268 + t2314;
  t2107 = -1.*t233*t357;
  t2130 = t194*t247*t422;
  t2133 = t194*t291*t798;
  t2176 = t2130 + t2133;
  t2190 = t2176*t1104;
  t2241 = t2107 + t2190;
  t1137 = t142*t1128;
  t1261 = t1225*t1226;
  t1285 = t1137 + t1261;
  t1329 = t142*t1225;
  t1373 = -1.*t1128*t1226;
  t1423 = t1329 + t1373;
  t1742 = t142*t1738;
  t1923 = t1918*t1226;
  t1937 = t1742 + t1923;
  t1974 = t142*t1918;
  t2029 = -1.*t1738*t1226;
  t2052 = t1974 + t2029;
  t2265 = t142*t2241;
  t2366 = t2351*t1226;
  t2372 = t2265 + t2366;
  t2380 = t142*t2351;
  t2381 = -1.*t2241*t1226;
  t2392 = t2380 + t2381;
  t3016 = -1.*t233;
  t3023 = 1. + t3016;
  t3348 = -1.*t142;
  t3362 = 1. + t3348;
  t3566 = -1.*t1327;
  t3574 = 1. + t3566;
  t2527 = t1327*t1285;
  t2541 = t17*t1423;
  t2555 = t2527 + t2541;
  t2868 = -1.*t247;
  t2886 = 1. + t2868;
  t2898 = 0.135*t2886;
  t2899 = 0. + t2898;
  t2963 = -0.135*t798;
  t2982 = 0. + t2963;
  t3061 = 0.135*t3023;
  t3065 = 0.049*t1104;
  t3074 = 0. + t3061 + t3065;
  t3142 = -0.049*t3023;
  t3189 = 0.135*t1104;
  t3205 = 0. + t3142 + t3189;
  t3367 = -0.049*t3362;
  t3375 = -0.09*t1226;
  t3417 = 0. + t3367 + t3375;
  t3477 = -0.09*t3362;
  t3503 = 0.049*t1226;
  t3513 = 0. + t3477 + t3503;
  t3619 = -0.049*t3574;
  t3631 = -0.21*t17;
  t3649 = 0. + t3619 + t3631;
  t3666 = -0.21*t3574;
  t3684 = 0.049*t17;
  t3699 = 0. + t3666 + t3684;
  t2565 = t1327*t1937;
  t2577 = t17*t2052;
  t2590 = t2565 + t2577;
  t2617 = t1327*t2372;
  t2627 = t17*t2392;
  t2648 = t2617 + t2627;
  p_output1[0]=-1.*t1327*t1423 + t1285*t17;
  p_output1[1]=t17*t1937 - 1.*t1327*t2052;
  p_output1[2]=t17*t2372 - 1.*t1327*t2392;
  p_output1[3]=0.;
  p_output1[4]=t2555;
  p_output1[5]=t2590;
  p_output1[6]=t2648;
  p_output1[7]=0.;
  p_output1[8]=t1104*t188*t194 - 1.*t233*t961;
  p_output1[9]=-1.*t1629*t233 + t1104*t194*t295;
  p_output1[10]=-1.*t2176*t233 - 1.*t1104*t357;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.21*(t1327*t1423 - 1.*t1285*t17) - 0.049*t2555 + t188*t194*t3205 + t1128*t3417 + t1225*t3513 + t1285*t3649 + t1423*t3699 + t2899*t511 + t2982*t714 + t3074*t961 + 0.1305*(-1.*t1104*t188*t194 + t233*t961) + var1[0];
  p_output1[13]=0. - 0.21*(-1.*t17*t1937 + t1327*t2052) - 0.049*t2590 + t1521*t2899 + 0.1305*(t1629*t233 - 1.*t1104*t194*t295) + t1552*t2982 + t1629*t3074 + t194*t295*t3205 + t1738*t3417 + t1918*t3513 + t1937*t3649 + t2052*t3699 + var1[1];
  p_output1[14]=0. - 0.21*(-1.*t17*t2372 + t1327*t2392) - 0.049*t2648 + t194*t291*t2982 + t2176*t3074 + t2241*t3417 + t2351*t3513 - 1.*t3205*t357 + 0.1305*(t2176*t233 + t1104*t357) + t2372*t3649 + t2392*t3699 + t194*t2899*t422 + var1[2];
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
    ( !(mrows == 20 && ncols == 1) && 
      !(mrows == 1 && ncols == 20))) 
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

#include "H_knee_joint_left_mex.hh"

namespace SymExpression
{

void H_knee_joint_left_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
