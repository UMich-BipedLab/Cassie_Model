/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:37:04 GMT-04:00
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
  double t224;
  double t456;
  double t1073;
  double t1580;
  double t1735;
  double t1855;
  double t2238;
  double t2756;
  double t3249;
  double t3277;
  double t3306;
  double t3374;
  double t3675;
  double t3797;
  double t3838;
  double t4325;
  double t4472;
  double t4998;
  double t5037;
  double t5055;
  double t5071;
  double t5307;
  double t5404;
  double t5485;
  double t5574;
  double t6052;
  double t6059;
  double t6077;
  double t6153;
  double t6169;
  double t6190;
  double t6235;
  double t6314;
  double t6315;
  double t6349;
  double t6680;
  double t6684;
  double t6713;
  double t6857;
  double t6859;
  double t6901;
  double t6991;
  double t7037;
  double t7041;
  double t7046;
  double t7077;
  double t7081;
  double t7090;
  double t781;
  double t894;
  double t940;
  double t1194;
  double t1389;
  double t1932;
  double t2301;
  double t2479;
  double t2971;
  double t2981;
  double t3146;
  double t3318;
  double t3393;
  double t3487;
  double t4138;
  double t4241;
  double t4297;
  double t5104;
  double t5313;
  double t5386;
  double t7183;
  double t7184;
  double t7188;
  double t7194;
  double t7198;
  double t7210;
  double t5924;
  double t5944;
  double t6039;
  double t6191;
  double t6261;
  double t6273;
  double t7213;
  double t7217;
  double t7223;
  double t7227;
  double t7228;
  double t7229;
  double t6564;
  double t6576;
  double t6597;
  double t6936;
  double t7012;
  double t7032;
  double t7242;
  double t7245;
  double t7246;
  double t7263;
  double t7264;
  double t7265;
  double t7063;
  double t7069;
  double t7070;
  double t7269;
  double t7273;
  double t7278;
  double t7285;
  double t7291;
  double t7306;
  double t7373;
  double t7378;
  double t7387;
  double t7409;
  double t7413;
  double t7414;
  double t7426;
  double t7432;
  double t7433;
  double t7435;
  double t7436;
  double t7440;
  double t7455;
  double t7456;
  double t7457;
  double t7470;
  double t7472;
  double t7475;
  t224 = Sin(var1[0]);
  t456 = Cos(var1[1]);
  t1073 = Sin(var1[1]);
  t1580 = Cos(var1[2]);
  t1735 = -1.*t1580;
  t1855 = 1. + t1735;
  t2238 = Sin(var1[2]);
  t2756 = Cos(var1[0]);
  t3249 = Cos(var1[3]);
  t3277 = -1.*t3249;
  t3306 = 1. + t3277;
  t3374 = Sin(var1[3]);
  t3675 = t1580*t224*t1073;
  t3797 = t2756*t2238;
  t3838 = t3675 + t3797;
  t4325 = t2756*t1580;
  t4472 = -1.*t224*t1073*t2238;
  t4998 = t4325 + t4472;
  t5037 = Cos(var1[4]);
  t5055 = -1.*t5037;
  t5071 = 1. + t5055;
  t5307 = Sin(var1[4]);
  t5404 = -1.*t3374*t3838;
  t5485 = t3249*t4998;
  t5574 = t5404 + t5485;
  t6052 = t3249*t3838;
  t6059 = t3374*t4998;
  t6077 = t6052 + t6059;
  t6153 = Cos(var1[5]);
  t6169 = -1.*t6153;
  t6190 = 1. + t6169;
  t6235 = Sin(var1[5]);
  t6314 = t5307*t5574;
  t6315 = t5037*t6077;
  t6349 = t6314 + t6315;
  t6680 = t5037*t5574;
  t6684 = -1.*t5307*t6077;
  t6713 = t6680 + t6684;
  t6857 = Cos(var1[6]);
  t6859 = -1.*t6857;
  t6901 = 1. + t6859;
  t6991 = Sin(var1[6]);
  t7037 = -1.*t6235*t6349;
  t7041 = t6153*t6713;
  t7046 = t7037 + t7041;
  t7077 = t6153*t6349;
  t7081 = t6235*t6713;
  t7090 = t7077 + t7081;
  t781 = -1.*t456;
  t894 = 1. + t781;
  t940 = 0.135*t894;
  t1194 = 0.049*t1073;
  t1389 = 0. + t940 + t1194;
  t1932 = -0.049*t1855;
  t2301 = -0.09*t2238;
  t2479 = 0. + t1932 + t2301;
  t2971 = -0.09*t1855;
  t2981 = 0.049*t2238;
  t3146 = 0. + t2971 + t2981;
  t3318 = -0.049*t3306;
  t3393 = -0.21*t3374;
  t3487 = 0. + t3318 + t3393;
  t4138 = -0.21*t3306;
  t4241 = 0.049*t3374;
  t4297 = 0. + t4138 + t4241;
  t5104 = -0.2707*t5071;
  t5313 = 0.0016*t5307;
  t5386 = 0. + t5104 + t5313;
  t7183 = t2756*t1580*t1073;
  t7184 = -1.*t224*t2238;
  t7188 = t7183 + t7184;
  t7194 = -1.*t1580*t224;
  t7198 = -1.*t2756*t1073*t2238;
  t7210 = t7194 + t7198;
  t5924 = -0.0016*t5071;
  t5944 = -0.2707*t5307;
  t6039 = 0. + t5924 + t5944;
  t6191 = 0.0184*t6190;
  t6261 = -0.7055*t6235;
  t6273 = 0. + t6191 + t6261;
  t7213 = -1.*t3374*t7188;
  t7217 = t3249*t7210;
  t7223 = t7213 + t7217;
  t7227 = t3249*t7188;
  t7228 = t3374*t7210;
  t7229 = t7227 + t7228;
  t6564 = -0.7055*t6190;
  t6576 = -0.0184*t6235;
  t6597 = 0. + t6564 + t6576;
  t6936 = -1.1135*t6901;
  t7012 = 0.0216*t6991;
  t7032 = 0. + t6936 + t7012;
  t7242 = t5307*t7223;
  t7245 = t5037*t7229;
  t7246 = t7242 + t7245;
  t7263 = t5037*t7223;
  t7264 = -1.*t5307*t7229;
  t7265 = t7263 + t7264;
  t7063 = -0.0216*t6901;
  t7069 = -1.1135*t6991;
  t7070 = 0. + t7063 + t7069;
  t7269 = -1.*t6235*t7246;
  t7273 = t6153*t7265;
  t7278 = t7269 + t7273;
  t7285 = t6153*t7246;
  t7291 = t6235*t7265;
  t7306 = t7285 + t7291;
  t7373 = -1.*t456*t1580*t3374;
  t7378 = -1.*t3249*t456*t2238;
  t7387 = t7373 + t7378;
  t7409 = t3249*t456*t1580;
  t7413 = -1.*t456*t3374*t2238;
  t7414 = t7409 + t7413;
  t7426 = t5307*t7387;
  t7432 = t5037*t7414;
  t7433 = t7426 + t7432;
  t7435 = t5037*t7387;
  t7436 = -1.*t5307*t7414;
  t7440 = t7435 + t7436;
  t7455 = -1.*t6235*t7433;
  t7456 = t6153*t7440;
  t7457 = t7455 + t7456;
  t7470 = t6153*t7433;
  t7472 = t6235*t7440;
  t7475 = t7470 + t7472;
  p_output1[0]=0.24925 + 0.135*t224 - 1.*t1389*t224 - 1.*t1073*t224*t2479 - 1.*t2756*t3146 - 1.*t3487*t3838 - 0.1305*t224*t456 - 1.*t4297*t4998 - 1.*t5386*t5574 - 1.*t6039*t6077 - 1.*t6273*t6349 - 1.*t6597*t6713 - 1.*t7032*t7046 - 1.*t7070*t7090 - 0.0306*(t6991*t7046 + t6857*t7090) + 1.1312*(t6857*t7046 - 1.*t6991*t7090);
  p_output1[1]=-0.0302 + 0.135*(1. - 1.*t2756) + t1389*t2756 + t1073*t2479*t2756 - 1.*t224*t3146 + 0.1305*t2756*t456 + t3487*t7188 + t4297*t7210 + t5386*t7223 + t6039*t7229 + t6273*t7246 + t6597*t7265 + t7032*t7278 + t7070*t7306 + 0.0306*(t6991*t7278 + t6857*t7306) - 1.1312*(t6857*t7278 - 1.*t6991*t7306);
  p_output1[2]=-0.047 + 0.004500000000000004*t1073 + t2479*t456 + t1580*t3487*t456 - 1.*t2238*t4297*t456 + t5386*t7387 + t6039*t7414 + t6273*t7433 + t6597*t7440 + t7032*t7457 + t7070*t7475 + 0.0306*(t6991*t7457 + t6857*t7475) - 1.1312*(t6857*t7457 - 1.*t6991*t7475) - 0.049*t894;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "p_MultisenseIMU_to_LeftToeBottom_mex.hh"

namespace SymExpression
{

void p_MultisenseIMU_to_LeftToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
