/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:15:58 GMT-05:00
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
  double t2274;
  double t1571;
  double t2281;
  double t1597;
  double t2511;
  double t13;
  double t1681;
  double t2625;
  double t2749;
  double t3317;
  double t3867;
  double t3878;
  double t4129;
  double t4694;
  double t4805;
  double t4806;
  double t4930;
  double t4426;
  double t4427;
  double t4649;
  double t4960;
  double t5043;
  double t5048;
  double t5057;
  double t5074;
  double t5013;
  double t5019;
  double t5035;
  double t5093;
  double t5095;
  double t5100;
  double t5124;
  double t5136;
  double t5138;
  double t5179;
  double t5215;
  double t5225;
  double t5231;
  double t5283;
  double t5286;
  double t5317;
  double t5325;
  double t5328;
  double t5344;
  double t5351;
  double t5362;
  double t5364;
  double t5370;
  double t5417;
  double t5440;
  double t5461;
  double t5469;
  double t5474;
  double t5478;
  double t5481;
  double t5512;
  double t5521;
  double t5568;
  double t5654;
  double t5660;
  double t5669;
  double t5686;
  double t5697;
  double t5703;
  double t5718;
  double t5746;
  double t5749;
  double t5763;
  double t5789;
  double t5825;
  double t5833;
  double t14;
  double t255;
  double t270;
  double t1520;
  double t4176;
  double t4179;
  double t5982;
  double t5985;
  double t5990;
  double t5992;
  double t5993;
  double t5999;
  double t4808;
  double t4950;
  double t4955;
  double t4970;
  double t4977;
  double t4981;
  double t6005;
  double t6006;
  double t6011;
  double t5067;
  double t5081;
  double t5084;
  double t5107;
  double t5108;
  double t5111;
  double t5177;
  double t5196;
  double t5207;
  double t6042;
  double t6043;
  double t6047;
  double t6062;
  double t6068;
  double t6097;
  double t5270;
  double t5271;
  double t5275;
  double t5347;
  double t5353;
  double t5354;
  double t6112;
  double t6116;
  double t6121;
  double t6157;
  double t6158;
  double t6160;
  double t5379;
  double t5414;
  double t5415;
  double t5480;
  double t5484;
  double t5510;
  double t6172;
  double t6177;
  double t6195;
  double t6207;
  double t6232;
  double t6241;
  double t5589;
  double t5592;
  double t5647;
  double t5715;
  double t5734;
  double t5743;
  double t6256;
  double t6259;
  double t6265;
  double t6273;
  double t6276;
  double t6277;
  double t5777;
  double t5780;
  double t5782;
  double t6280;
  double t6283;
  double t6285;
  double t6291;
  double t6294;
  double t6298;
  double t6318;
  double t6322;
  double t6323;
  double t6345;
  double t6352;
  double t6355;
  double t6364;
  double t6365;
  double t6366;
  double t6368;
  double t6369;
  double t6370;
  double t6373;
  double t6375;
  double t6377;
  double t6381;
  double t6382;
  double t6385;
  double t6387;
  double t6388;
  double t6390;
  double t6392;
  double t6395;
  double t6398;
  double t6400;
  double t6403;
  double t6404;
  double t6407;
  double t6411;
  double t6413;
  double t6417;
  double t6422;
  double t6425;
  t2274 = Cos(var1[3]);
  t1571 = Cos(var1[5]);
  t2281 = Sin(var1[4]);
  t1597 = Sin(var1[3]);
  t2511 = Sin(var1[5]);
  t13 = Cos(var1[6]);
  t1681 = -1.*t1571*t1597;
  t2625 = t2274*t2281*t2511;
  t2749 = t1681 + t2625;
  t3317 = t2274*t1571*t2281;
  t3867 = t1597*t2511;
  t3878 = t3317 + t3867;
  t4129 = Sin(var1[6]);
  t4694 = Cos(var1[7]);
  t4805 = -1.*t4694;
  t4806 = 1. + t4805;
  t4930 = Sin(var1[7]);
  t4426 = t13*t2749;
  t4427 = t3878*t4129;
  t4649 = t4426 + t4427;
  t4960 = Cos(var1[4]);
  t5043 = Cos(var1[8]);
  t5048 = -1.*t5043;
  t5057 = 1. + t5048;
  t5074 = Sin(var1[8]);
  t5013 = t2274*t4960*t4694;
  t5019 = t4649*t4930;
  t5035 = t5013 + t5019;
  t5093 = t13*t3878;
  t5095 = -1.*t2749*t4129;
  t5100 = t5093 + t5095;
  t5124 = Cos(var1[9]);
  t5136 = -1.*t5124;
  t5138 = 1. + t5136;
  t5179 = Sin(var1[9]);
  t5215 = t5043*t5035;
  t5225 = t5100*t5074;
  t5231 = t5215 + t5225;
  t5283 = t5043*t5100;
  t5286 = -1.*t5035*t5074;
  t5317 = t5283 + t5286;
  t5325 = Cos(var1[10]);
  t5328 = -1.*t5325;
  t5344 = 1. + t5328;
  t5351 = Sin(var1[10]);
  t5362 = -1.*t5179*t5231;
  t5364 = t5124*t5317;
  t5370 = t5362 + t5364;
  t5417 = t5124*t5231;
  t5440 = t5179*t5317;
  t5461 = t5417 + t5440;
  t5469 = Cos(var1[11]);
  t5474 = -1.*t5469;
  t5478 = 1. + t5474;
  t5481 = Sin(var1[11]);
  t5512 = t5351*t5370;
  t5521 = t5325*t5461;
  t5568 = t5512 + t5521;
  t5654 = t5325*t5370;
  t5660 = -1.*t5351*t5461;
  t5669 = t5654 + t5660;
  t5686 = Cos(var1[12]);
  t5697 = -1.*t5686;
  t5703 = 1. + t5697;
  t5718 = Sin(var1[12]);
  t5746 = -1.*t5481*t5568;
  t5749 = t5469*t5669;
  t5763 = t5746 + t5749;
  t5789 = t5469*t5568;
  t5825 = t5481*t5669;
  t5833 = t5789 + t5825;
  t14 = -1.*t13;
  t255 = 1. + t14;
  t270 = 0.135*t255;
  t1520 = 0. + t270;
  t4176 = -0.135*t4129;
  t4179 = 0. + t4176;
  t5982 = t2274*t1571;
  t5985 = t1597*t2281*t2511;
  t5990 = t5982 + t5985;
  t5992 = t1571*t1597*t2281;
  t5993 = -1.*t2274*t2511;
  t5999 = t5992 + t5993;
  t4808 = 0.135*t4806;
  t4950 = 0.049*t4930;
  t4955 = 0. + t4808 + t4950;
  t4970 = -0.049*t4806;
  t4977 = 0.135*t4930;
  t4981 = 0. + t4970 + t4977;
  t6005 = t13*t5990;
  t6006 = t5999*t4129;
  t6011 = t6005 + t6006;
  t5067 = -0.049*t5057;
  t5081 = -0.09*t5074;
  t5084 = 0. + t5067 + t5081;
  t5107 = -0.09*t5057;
  t5108 = 0.049*t5074;
  t5111 = 0. + t5107 + t5108;
  t5177 = -0.049*t5138;
  t5196 = -0.21*t5179;
  t5207 = 0. + t5177 + t5196;
  t6042 = t4960*t4694*t1597;
  t6043 = t6011*t4930;
  t6047 = t6042 + t6043;
  t6062 = t13*t5999;
  t6068 = -1.*t5990*t4129;
  t6097 = t6062 + t6068;
  t5270 = -0.21*t5138;
  t5271 = 0.049*t5179;
  t5275 = 0. + t5270 + t5271;
  t5347 = -0.2707*t5344;
  t5353 = 0.0016*t5351;
  t5354 = 0. + t5347 + t5353;
  t6112 = t5043*t6047;
  t6116 = t6097*t5074;
  t6121 = t6112 + t6116;
  t6157 = t5043*t6097;
  t6158 = -1.*t6047*t5074;
  t6160 = t6157 + t6158;
  t5379 = -0.0016*t5344;
  t5414 = -0.2707*t5351;
  t5415 = 0. + t5379 + t5414;
  t5480 = 0.0184*t5478;
  t5484 = -0.7055*t5481;
  t5510 = 0. + t5480 + t5484;
  t6172 = -1.*t5179*t6121;
  t6177 = t5124*t6160;
  t6195 = t6172 + t6177;
  t6207 = t5124*t6121;
  t6232 = t5179*t6160;
  t6241 = t6207 + t6232;
  t5589 = -0.7055*t5478;
  t5592 = -0.0184*t5481;
  t5647 = 0. + t5589 + t5592;
  t5715 = -1.1135*t5703;
  t5734 = 0.0216*t5718;
  t5743 = 0. + t5715 + t5734;
  t6256 = t5351*t6195;
  t6259 = t5325*t6241;
  t6265 = t6256 + t6259;
  t6273 = t5325*t6195;
  t6276 = -1.*t5351*t6241;
  t6277 = t6273 + t6276;
  t5777 = -0.0216*t5703;
  t5780 = -1.1135*t5718;
  t5782 = 0. + t5777 + t5780;
  t6280 = -1.*t5481*t6265;
  t6283 = t5469*t6277;
  t6285 = t6280 + t6283;
  t6291 = t5469*t6265;
  t6294 = t5481*t6277;
  t6298 = t6291 + t6294;
  t6318 = t4960*t13*t2511;
  t6322 = t4960*t1571*t4129;
  t6323 = t6318 + t6322;
  t6345 = -1.*t4694*t2281;
  t6352 = t6323*t4930;
  t6355 = t6345 + t6352;
  t6364 = t4960*t1571*t13;
  t6365 = -1.*t4960*t2511*t4129;
  t6366 = t6364 + t6365;
  t6368 = t5043*t6355;
  t6369 = t6366*t5074;
  t6370 = t6368 + t6369;
  t6373 = t5043*t6366;
  t6375 = -1.*t6355*t5074;
  t6377 = t6373 + t6375;
  t6381 = -1.*t5179*t6370;
  t6382 = t5124*t6377;
  t6385 = t6381 + t6382;
  t6387 = t5124*t6370;
  t6388 = t5179*t6377;
  t6390 = t6387 + t6388;
  t6392 = t5351*t6385;
  t6395 = t5325*t6390;
  t6398 = t6392 + t6395;
  t6400 = t5325*t6385;
  t6403 = -1.*t5351*t6390;
  t6404 = t6400 + t6403;
  t6407 = -1.*t5481*t6398;
  t6411 = t5469*t6404;
  t6413 = t6407 + t6411;
  t6417 = t5469*t6398;
  t6422 = t5481*t6404;
  t6425 = t6417 + t6422;
  p_output1[0]=0. + t1520*t2749 + t3878*t4179 + t4649*t4955 + 0.1305*(t4649*t4694 - 1.*t2274*t4930*t4960) + t2274*t4960*t4981 + t5035*t5084 + t5100*t5111 + t5207*t5231 + t5275*t5317 + t5354*t5370 + t5415*t5461 + t5510*t5568 + t5647*t5669 + t5743*t5763 + t5782*t5833 + 0.0306*(t5718*t5763 + t5686*t5833) - 1.1312*(t5686*t5763 - 1.*t5718*t5833) + var1[0];
  p_output1[1]=0. + t1597*t4960*t4981 + t1520*t5990 + t4179*t5999 + t4955*t6011 + 0.1305*(-1.*t1597*t4930*t4960 + t4694*t6011) + t5084*t6047 + t5111*t6097 + t5207*t6121 + t5275*t6160 + t5354*t6195 + t5415*t6241 + t5510*t6265 + t5647*t6277 + t5743*t6285 + t5782*t6298 + 0.0306*(t5718*t6285 + t5686*t6298) - 1.1312*(t5686*t6285 - 1.*t5718*t6298) + var1[1];
  p_output1[2]=0. + t1520*t2511*t4960 + t1571*t4179*t4960 - 1.*t2281*t4981 + t4955*t6323 + 0.1305*(t2281*t4930 + t4694*t6323) + t5084*t6355 + t5111*t6366 + t5207*t6370 + t5275*t6377 + t5354*t6385 + t5415*t6390 + t5510*t6398 + t5647*t6404 + t5743*t6413 + t5782*t6425 + 0.0306*(t5718*t6413 + t5686*t6425) - 1.1312*(t5686*t6413 - 1.*t5718*t6425) + var1[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "p_LeftToeBottom_mex.hh"

namespace SymExpression
{

void p_LeftToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
