/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:15:44 GMT-05:00
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
  double t2126;
  double t8149;
  double t8153;
  double t8151;
  double t8156;
  double t2320;
  double t3787;
  double t3791;
  double t8037;
  double t8106;
  double t8152;
  double t8157;
  double t8158;
  double t8160;
  double t8178;
  double t8179;
  double t8180;
  double t2237;
  double t8189;
  double t8192;
  double t8193;
  double t8196;
  double t8197;
  double t8200;
  double t8203;
  double t8210;
  double t8211;
  double t8212;
  double t8225;
  double t8226;
  double t8227;
  double t8230;
  double t8231;
  double t8232;
  double t8236;
  double t8240;
  double t8241;
  double t8242;
  double t8248;
  double t8249;
  double t8251;
  double t8255;
  double t8256;
  double t8259;
  double t8262;
  double t8266;
  double t8267;
  double t8268;
  double t8282;
  double t8284;
  double t8285;
  double t4431;
  double t8062;
  double t8065;
  double t8108;
  double t8142;
  double t8162;
  double t8165;
  double t8167;
  double t8170;
  double t8184;
  double t8187;
  double t8188;
  double t8298;
  double t8299;
  double t8301;
  double t8303;
  double t8306;
  double t8307;
  double t8202;
  double t8207;
  double t8209;
  double t8309;
  double t8310;
  double t8311;
  double t8222;
  double t8223;
  double t8224;
  double t8233;
  double t8238;
  double t8239;
  double t8313;
  double t8314;
  double t8315;
  double t8322;
  double t8323;
  double t8324;
  double t8245;
  double t8246;
  double t8247;
  double t8260;
  double t8263;
  double t8264;
  double t8326;
  double t8327;
  double t8328;
  double t8332;
  double t8333;
  double t8334;
  double t8276;
  double t8278;
  double t8281;
  double t8336;
  double t8337;
  double t8338;
  double t8341;
  double t8342;
  double t8343;
  double t8364;
  double t8365;
  double t8367;
  double t8372;
  double t8373;
  double t8374;
  double t8384;
  double t8385;
  double t8386;
  double t8388;
  double t8389;
  double t8390;
  double t8392;
  double t8393;
  double t8394;
  double t8396;
  double t8397;
  double t8398;
  double t8400;
  double t8402;
  double t8403;
  t2126 = Cos(var1[3]);
  t8149 = Cos(var1[5]);
  t8153 = Sin(var1[3]);
  t8151 = Sin(var1[4]);
  t8156 = Sin(var1[5]);
  t2320 = Cos(var1[14]);
  t3787 = -1.*t2320;
  t3791 = 1. + t3787;
  t8037 = Sin(var1[14]);
  t8106 = Sin(var1[13]);
  t8152 = t2126*t8149*t8151;
  t8157 = t8153*t8156;
  t8158 = t8152 + t8157;
  t8160 = Cos(var1[13]);
  t8178 = -1.*t8149*t8153;
  t8179 = t2126*t8151*t8156;
  t8180 = t8178 + t8179;
  t2237 = Cos(var1[4]);
  t8189 = t8106*t8158;
  t8192 = t8160*t8180;
  t8193 = t8189 + t8192;
  t8196 = Cos(var1[15]);
  t8197 = -1.*t8196;
  t8200 = 1. + t8197;
  t8203 = Sin(var1[15]);
  t8210 = t8160*t8158;
  t8211 = -1.*t8106*t8180;
  t8212 = t8210 + t8211;
  t8225 = t2320*t2126*t2237;
  t8226 = t8037*t8193;
  t8227 = t8225 + t8226;
  t8230 = Cos(var1[16]);
  t8231 = -1.*t8230;
  t8232 = 1. + t8231;
  t8236 = Sin(var1[16]);
  t8240 = t8203*t8212;
  t8241 = t8196*t8227;
  t8242 = t8240 + t8241;
  t8248 = t8196*t8212;
  t8249 = -1.*t8203*t8227;
  t8251 = t8248 + t8249;
  t8255 = Cos(var1[17]);
  t8256 = -1.*t8255;
  t8259 = 1. + t8256;
  t8262 = Sin(var1[17]);
  t8266 = -1.*t8236*t8242;
  t8267 = t8230*t8251;
  t8268 = t8266 + t8267;
  t8282 = t8230*t8242;
  t8284 = t8236*t8251;
  t8285 = t8282 + t8284;
  t4431 = -0.049*t3791;
  t8062 = -0.135*t8037;
  t8065 = 0. + t4431 + t8062;
  t8108 = 0.135*t8106;
  t8142 = 0. + t8108;
  t8162 = -1.*t8160;
  t8165 = 1. + t8162;
  t8167 = -0.135*t8165;
  t8170 = 0. + t8167;
  t8184 = -0.135*t3791;
  t8187 = 0.049*t8037;
  t8188 = 0. + t8184 + t8187;
  t8298 = t8149*t8153*t8151;
  t8299 = -1.*t2126*t8156;
  t8301 = t8298 + t8299;
  t8303 = t2126*t8149;
  t8306 = t8153*t8151*t8156;
  t8307 = t8303 + t8306;
  t8202 = -0.09*t8200;
  t8207 = 0.049*t8203;
  t8209 = 0. + t8202 + t8207;
  t8309 = t8106*t8301;
  t8310 = t8160*t8307;
  t8311 = t8309 + t8310;
  t8222 = -0.049*t8200;
  t8223 = -0.09*t8203;
  t8224 = 0. + t8222 + t8223;
  t8233 = -0.049*t8232;
  t8238 = -0.21*t8236;
  t8239 = 0. + t8233 + t8238;
  t8313 = t8160*t8301;
  t8314 = -1.*t8106*t8307;
  t8315 = t8313 + t8314;
  t8322 = t2320*t2237*t8153;
  t8323 = t8037*t8311;
  t8324 = t8322 + t8323;
  t8245 = -0.21*t8232;
  t8246 = 0.049*t8236;
  t8247 = 0. + t8245 + t8246;
  t8260 = -0.2707*t8259;
  t8263 = 0.0016*t8262;
  t8264 = 0. + t8260 + t8263;
  t8326 = t8203*t8315;
  t8327 = t8196*t8324;
  t8328 = t8326 + t8327;
  t8332 = t8196*t8315;
  t8333 = -1.*t8203*t8324;
  t8334 = t8332 + t8333;
  t8276 = -0.0016*t8259;
  t8278 = -0.2707*t8262;
  t8281 = 0. + t8276 + t8278;
  t8336 = -1.*t8236*t8328;
  t8337 = t8230*t8334;
  t8338 = t8336 + t8337;
  t8341 = t8230*t8328;
  t8342 = t8236*t8334;
  t8343 = t8341 + t8342;
  t8364 = t2237*t8149*t8106;
  t8365 = t8160*t2237*t8156;
  t8367 = t8364 + t8365;
  t8372 = t8160*t2237*t8149;
  t8373 = -1.*t2237*t8106*t8156;
  t8374 = t8372 + t8373;
  t8384 = -1.*t2320*t8151;
  t8385 = t8037*t8367;
  t8386 = t8384 + t8385;
  t8388 = t8203*t8374;
  t8389 = t8196*t8386;
  t8390 = t8388 + t8389;
  t8392 = t8196*t8374;
  t8393 = -1.*t8203*t8386;
  t8394 = t8392 + t8393;
  t8396 = -1.*t8236*t8390;
  t8397 = t8230*t8394;
  t8398 = t8396 + t8397;
  t8400 = t8230*t8390;
  t8402 = t8236*t8394;
  t8403 = t8400 + t8402;
  p_output1[0]=0. + t2126*t2237*t8065 + t8142*t8158 + t8170*t8180 + t8188*t8193 - 0.1305*(-1.*t2126*t2237*t8037 + t2320*t8193) + t8209*t8212 + t8224*t8227 + t8239*t8242 + t8247*t8251 + t8264*t8268 + t8281*t8285 - 0.0016*(t8262*t8268 + t8255*t8285) - 0.2707*(t8255*t8268 - 1.*t8262*t8285) + var1[0];
  p_output1[1]=0. + t2237*t8065*t8153 + t8142*t8301 + t8170*t8307 + t8188*t8311 - 0.1305*(-1.*t2237*t8037*t8153 + t2320*t8311) + t8209*t8315 + t8224*t8324 + t8239*t8328 + t8247*t8334 + t8264*t8338 + t8281*t8343 - 0.0016*(t8262*t8338 + t8255*t8343) - 0.2707*(t8255*t8338 - 1.*t8262*t8343) + var1[1];
  p_output1[2]=0. + t2237*t8142*t8149 - 1.*t8065*t8151 + t2237*t8156*t8170 + t8188*t8367 - 0.1305*(t8037*t8151 + t2320*t8367) + t8209*t8374 + t8224*t8386 + t8239*t8390 + t8247*t8394 + t8264*t8398 + t8281*t8403 - 0.0016*(t8262*t8398 + t8255*t8403) - 0.2707*(t8255*t8398 - 1.*t8262*t8403) + var1[2];
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

#include "p_knee_to_shin_right_mex.hh"

namespace SymExpression
{

void p_knee_to_shin_right_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
