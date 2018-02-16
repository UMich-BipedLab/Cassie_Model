/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:17:38 GMT-05:00
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
  double t159;
  double t254;
  double t649;
  double t503;
  double t886;
  double t1080;
  double t1146;
  double t1065;
  double t1093;
  double t1113;
  double t831;
  double t1147;
  double t1170;
  double t1177;
  double t1202;
  double t1124;
  double t1190;
  double t1195;
  double t793;
  double t1203;
  double t1205;
  double t1206;
  double t1220;
  double t1201;
  double t1209;
  double t1216;
  double t792;
  double t1224;
  double t1228;
  double t1229;
  double t1240;
  double t1218;
  double t1232;
  double t1238;
  double t693;
  double t1246;
  double t1258;
  double t1280;
  double t1644;
  double t1646;
  double t1663;
  double t1677;
  double t1723;
  double t1754;
  double t1667;
  double t1755;
  double t1759;
  double t1923;
  double t1932;
  double t2005;
  double t1786;
  double t2043;
  double t2237;
  double t2316;
  double t2364;
  double t2367;
  double t2266;
  double t2404;
  double t2452;
  double t2476;
  double t2548;
  double t2615;
  double t2812;
  double t2827;
  double t2926;
  double t2931;
  double t2985;
  double t3001;
  double t2930;
  double t3012;
  double t3013;
  double t3118;
  double t3169;
  double t3188;
  double t3099;
  double t3195;
  double t3273;
  double t3364;
  double t3376;
  double t3402;
  double t1239;
  double t1295;
  double t1350;
  double t1394;
  double t1406;
  double t1427;
  double t2474;
  double t2616;
  double t2682;
  double t2709;
  double t2731;
  double t2737;
  double t3342;
  double t3485;
  double t3501;
  double t3627;
  double t3637;
  double t3639;
  double t4402;
  double t4408;
  double t4856;
  double t4867;
  double t5155;
  double t5264;
  double t5469;
  double t5474;
  double t5579;
  double t5583;
  double t4048;
  double t4068;
  double t4075;
  double t4188;
  double t4253;
  double t4493;
  double t4570;
  double t4573;
  double t4770;
  double t4812;
  double t4824;
  double t4907;
  double t4984;
  double t5034;
  double t5087;
  double t5109;
  double t5132;
  double t5266;
  double t5275;
  double t5285;
  double t5318;
  double t5374;
  double t5386;
  double t5484;
  double t5561;
  double t5562;
  double t5564;
  double t5567;
  double t5571;
  double t5587;
  double t5591;
  double t5593;
  double t5599;
  double t5603;
  double t5607;
  t159 = Cos(var1[1]);
  t254 = Sin(var1[0]);
  t649 = Sin(var1[1]);
  t503 = Cos(var1[0]);
  t886 = Cos(var1[2]);
  t1080 = Sin(var1[2]);
  t1146 = Cos(var1[3]);
  t1065 = t886*t254*t649;
  t1093 = t503*t1080;
  t1113 = t1065 + t1093;
  t831 = Sin(var1[3]);
  t1147 = t503*t886;
  t1170 = -1.*t254*t649*t1080;
  t1177 = t1147 + t1170;
  t1202 = Cos(var1[4]);
  t1124 = -1.*t831*t1113;
  t1190 = t1146*t1177;
  t1195 = t1124 + t1190;
  t793 = Sin(var1[4]);
  t1203 = t1146*t1113;
  t1205 = t831*t1177;
  t1206 = t1203 + t1205;
  t1220 = Cos(var1[5]);
  t1201 = t793*t1195;
  t1209 = t1202*t1206;
  t1216 = t1201 + t1209;
  t792 = Sin(var1[5]);
  t1224 = t1202*t1195;
  t1228 = -1.*t793*t1206;
  t1229 = t1224 + t1228;
  t1240 = Cos(var1[6]);
  t1218 = -1.*t792*t1216;
  t1232 = t1220*t1229;
  t1238 = t1218 + t1232;
  t693 = Sin(var1[6]);
  t1246 = t1220*t1216;
  t1258 = t792*t1229;
  t1280 = t1246 + t1258;
  t1644 = t503*t886*t649;
  t1646 = -1.*t254*t1080;
  t1663 = t1644 + t1646;
  t1677 = -1.*t886*t254;
  t1723 = -1.*t503*t649*t1080;
  t1754 = t1677 + t1723;
  t1667 = -1.*t831*t1663;
  t1755 = t1146*t1754;
  t1759 = t1667 + t1755;
  t1923 = t1146*t1663;
  t1932 = t831*t1754;
  t2005 = t1923 + t1932;
  t1786 = t793*t1759;
  t2043 = t1202*t2005;
  t2237 = t1786 + t2043;
  t2316 = t1202*t1759;
  t2364 = -1.*t793*t2005;
  t2367 = t2316 + t2364;
  t2266 = -1.*t792*t2237;
  t2404 = t1220*t2367;
  t2452 = t2266 + t2404;
  t2476 = t1220*t2237;
  t2548 = t792*t2367;
  t2615 = t2476 + t2548;
  t2812 = -1.*t159*t886*t831;
  t2827 = -1.*t1146*t159*t1080;
  t2926 = t2812 + t2827;
  t2931 = t1146*t159*t886;
  t2985 = -1.*t159*t831*t1080;
  t3001 = t2931 + t2985;
  t2930 = t793*t2926;
  t3012 = t1202*t3001;
  t3013 = t2930 + t3012;
  t3118 = t1202*t2926;
  t3169 = -1.*t793*t3001;
  t3188 = t3118 + t3169;
  t3099 = -1.*t792*t3013;
  t3195 = t1220*t3188;
  t3273 = t3099 + t3195;
  t3364 = t1220*t3013;
  t3376 = t792*t3188;
  t3402 = t3364 + t3376;
  t1239 = t693*t1238;
  t1295 = t1240*t1280;
  t1350 = t1239 + t1295;
  t1394 = t1240*t1238;
  t1406 = -1.*t693*t1280;
  t1427 = t1394 + t1406;
  t2474 = t693*t2452;
  t2616 = t1240*t2615;
  t2682 = t2474 + t2616;
  t2709 = t1240*t2452;
  t2731 = -1.*t693*t2615;
  t2737 = t2709 + t2731;
  t3342 = t693*t3273;
  t3485 = t1240*t3402;
  t3501 = t3342 + t3485;
  t3627 = t1240*t3273;
  t3637 = -1.*t693*t3402;
  t3639 = t3627 + t3637;
  t4402 = -1.*t886;
  t4408 = 1. + t4402;
  t4856 = -1.*t1146;
  t4867 = 1. + t4856;
  t5155 = -1.*t1202;
  t5264 = 1. + t5155;
  t5469 = -1.*t1220;
  t5474 = 1. + t5469;
  t5579 = -1.*t1240;
  t5583 = 1. + t5579;
  t4048 = -1.*t159;
  t4068 = 1. + t4048;
  t4075 = 0.135*t4068;
  t4188 = 0.049*t649;
  t4253 = 0. + t4075 + t4188;
  t4493 = -0.049*t4408;
  t4570 = -0.09*t1080;
  t4573 = 0. + t4493 + t4570;
  t4770 = -0.09*t4408;
  t4812 = 0.049*t1080;
  t4824 = 0. + t4770 + t4812;
  t4907 = -0.049*t4867;
  t4984 = -0.21*t831;
  t5034 = 0. + t4907 + t4984;
  t5087 = -0.21*t4867;
  t5109 = 0.049*t831;
  t5132 = 0. + t5087 + t5109;
  t5266 = -0.2707*t5264;
  t5275 = 0.0016*t793;
  t5285 = 0. + t5266 + t5275;
  t5318 = -0.0016*t5264;
  t5374 = -0.2707*t793;
  t5386 = 0. + t5318 + t5374;
  t5484 = 0.0184*t5474;
  t5561 = -0.7055*t792;
  t5562 = 0. + t5484 + t5561;
  t5564 = -0.7055*t5474;
  t5567 = -0.0184*t792;
  t5571 = 0. + t5564 + t5567;
  t5587 = -1.1135*t5583;
  t5591 = 0.0216*t693;
  t5593 = 0. + t5587 + t5591;
  t5599 = -0.0216*t5583;
  t5603 = -1.1135*t693;
  t5607 = 0. + t5599 + t5603;
  p_output1[0]=0. + t159*t254;
  p_output1[1]=0. - 1.*t159*t503;
  p_output1[2]=0. + t649;
  p_output1[3]=0.;
  p_output1[4]=0. - 0.642788*t1350 - 0.766044*t1427;
  p_output1[5]=0. + 0.642788*t2682 + 0.766044*t2737;
  p_output1[6]=0. + 0.642788*t3501 + 0.766044*t3639;
  p_output1[7]=0.;
  p_output1[8]=0. + 0.766044*t1350 - 0.642788*t1427;
  p_output1[9]=0. - 0.766044*t2682 + 0.642788*t2737;
  p_output1[10]=0. - 0.766044*t3501 + 0.642788*t3639;
  p_output1[11]=0.;
  p_output1[12]=0.24925 - 0.0306*t1350 + 1.1312*t1427 + 0.135*t254 - 0.1305*t159*t254 - 1.*t254*t4253 - 1.*t4824*t503 - 1.*t1113*t5034 - 1.*t1177*t5132 - 1.*t1195*t5285 - 1.*t1206*t5386 - 1.*t1216*t5562 - 1.*t1229*t5571 - 1.*t1238*t5593 - 1.*t1280*t5607 - 1.*t254*t4573*t649;
  p_output1[13]=-0.0302 + 0.0306*t2682 - 1.1312*t2737 - 1.*t254*t4824 + 0.135*(1. - 1.*t503) + 0.1305*t159*t503 + t4253*t503 + t1663*t5034 + t1754*t5132 + t1759*t5285 + t2005*t5386 + t2237*t5562 + t2367*t5571 + t2452*t5593 + t2615*t5607 + t4573*t503*t649;
  p_output1[14]=-0.047 + 0.0306*t3501 - 1.1312*t3639 - 0.049*t4068 + t159*t4573 - 1.*t1080*t159*t5132 + t2926*t5285 + t3001*t5386 + t3013*t5562 + t3188*t5571 + t3273*t5593 + t3402*t5607 + 0.004500000000000004*t649 + t159*t5034*t886;
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

#include "H_MultisenseIMU_to_LeftToeBottom_mex.hh"

namespace SymExpression
{

void H_MultisenseIMU_to_LeftToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
