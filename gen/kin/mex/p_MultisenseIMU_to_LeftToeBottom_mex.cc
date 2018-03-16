/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 12:16:12 GMT-04:00
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
  double t2927;
  double t3008;
  double t3111;
  double t3120;
  double t3122;
  double t3123;
  double t3133;
  double t3166;
  double t3182;
  double t3184;
  double t3185;
  double t3187;
  double t3192;
  double t3194;
  double t3204;
  double t3212;
  double t3214;
  double t3218;
  double t3222;
  double t3223;
  double t3224;
  double t3226;
  double t3230;
  double t3231;
  double t3233;
  double t3240;
  double t3243;
  double t3246;
  double t3249;
  double t3250;
  double t3251;
  double t3253;
  double t3257;
  double t3258;
  double t3260;
  double t3265;
  double t3266;
  double t3267;
  double t3269;
  double t3270;
  double t3271;
  double t3273;
  double t3276;
  double t3277;
  double t3278;
  double t3283;
  double t3284;
  double t3285;
  double t3053;
  double t3070;
  double t3084;
  double t3114;
  double t3117;
  double t3124;
  double t3138;
  double t3158;
  double t3167;
  double t3168;
  double t3174;
  double t3186;
  double t3190;
  double t3191;
  double t3209;
  double t3210;
  double t3211;
  double t3225;
  double t3228;
  double t3229;
  double t3303;
  double t3304;
  double t3305;
  double t3307;
  double t3308;
  double t3309;
  double t3235;
  double t3238;
  double t3239;
  double t3252;
  double t3255;
  double t3256;
  double t3311;
  double t3312;
  double t3313;
  double t3315;
  double t3316;
  double t3317;
  double t3262;
  double t3263;
  double t3264;
  double t3272;
  double t3274;
  double t3275;
  double t3319;
  double t3320;
  double t3321;
  double t3323;
  double t3324;
  double t3325;
  double t3280;
  double t3281;
  double t3282;
  double t3327;
  double t3328;
  double t3329;
  double t3331;
  double t3332;
  double t3333;
  double t3349;
  double t3350;
  double t3351;
  double t3353;
  double t3354;
  double t3355;
  double t3357;
  double t3358;
  double t3359;
  double t3361;
  double t3362;
  double t3363;
  double t3365;
  double t3366;
  double t3367;
  double t3369;
  double t3370;
  double t3371;
  t2927 = Sin(var1[0]);
  t3008 = Cos(var1[1]);
  t3111 = Sin(var1[1]);
  t3120 = Cos(var1[2]);
  t3122 = -1.*t3120;
  t3123 = 1. + t3122;
  t3133 = Sin(var1[2]);
  t3166 = Cos(var1[0]);
  t3182 = Cos(var1[3]);
  t3184 = -1.*t3182;
  t3185 = 1. + t3184;
  t3187 = Sin(var1[3]);
  t3192 = t3120*t2927*t3111;
  t3194 = t3166*t3133;
  t3204 = t3192 + t3194;
  t3212 = t3166*t3120;
  t3214 = -1.*t2927*t3111*t3133;
  t3218 = t3212 + t3214;
  t3222 = Cos(var1[4]);
  t3223 = -1.*t3222;
  t3224 = 1. + t3223;
  t3226 = Sin(var1[4]);
  t3230 = -1.*t3187*t3204;
  t3231 = t3182*t3218;
  t3233 = t3230 + t3231;
  t3240 = t3182*t3204;
  t3243 = t3187*t3218;
  t3246 = t3240 + t3243;
  t3249 = Cos(var1[5]);
  t3250 = -1.*t3249;
  t3251 = 1. + t3250;
  t3253 = Sin(var1[5]);
  t3257 = t3226*t3233;
  t3258 = t3222*t3246;
  t3260 = t3257 + t3258;
  t3265 = t3222*t3233;
  t3266 = -1.*t3226*t3246;
  t3267 = t3265 + t3266;
  t3269 = Cos(var1[6]);
  t3270 = -1.*t3269;
  t3271 = 1. + t3270;
  t3273 = Sin(var1[6]);
  t3276 = -1.*t3253*t3260;
  t3277 = t3249*t3267;
  t3278 = t3276 + t3277;
  t3283 = t3249*t3260;
  t3284 = t3253*t3267;
  t3285 = t3283 + t3284;
  t3053 = -1.*t3008;
  t3070 = 1. + t3053;
  t3084 = 0.135*t3070;
  t3114 = 0.049*t3111;
  t3117 = 0. + t3084 + t3114;
  t3124 = -0.049*t3123;
  t3138 = -0.09*t3133;
  t3158 = 0. + t3124 + t3138;
  t3167 = -0.09*t3123;
  t3168 = 0.049*t3133;
  t3174 = 0. + t3167 + t3168;
  t3186 = -0.049*t3185;
  t3190 = -0.21*t3187;
  t3191 = 0. + t3186 + t3190;
  t3209 = -0.21*t3185;
  t3210 = 0.049*t3187;
  t3211 = 0. + t3209 + t3210;
  t3225 = -0.2707*t3224;
  t3228 = 0.0016*t3226;
  t3229 = 0. + t3225 + t3228;
  t3303 = t3166*t3120*t3111;
  t3304 = -1.*t2927*t3133;
  t3305 = t3303 + t3304;
  t3307 = -1.*t3120*t2927;
  t3308 = -1.*t3166*t3111*t3133;
  t3309 = t3307 + t3308;
  t3235 = -0.0016*t3224;
  t3238 = -0.2707*t3226;
  t3239 = 0. + t3235 + t3238;
  t3252 = 0.0184*t3251;
  t3255 = -0.7055*t3253;
  t3256 = 0. + t3252 + t3255;
  t3311 = -1.*t3187*t3305;
  t3312 = t3182*t3309;
  t3313 = t3311 + t3312;
  t3315 = t3182*t3305;
  t3316 = t3187*t3309;
  t3317 = t3315 + t3316;
  t3262 = -0.7055*t3251;
  t3263 = -0.0184*t3253;
  t3264 = 0. + t3262 + t3263;
  t3272 = -1.1135*t3271;
  t3274 = 0.0216*t3273;
  t3275 = 0. + t3272 + t3274;
  t3319 = t3226*t3313;
  t3320 = t3222*t3317;
  t3321 = t3319 + t3320;
  t3323 = t3222*t3313;
  t3324 = -1.*t3226*t3317;
  t3325 = t3323 + t3324;
  t3280 = -0.0216*t3271;
  t3281 = -1.1135*t3273;
  t3282 = 0. + t3280 + t3281;
  t3327 = -1.*t3253*t3321;
  t3328 = t3249*t3325;
  t3329 = t3327 + t3328;
  t3331 = t3249*t3321;
  t3332 = t3253*t3325;
  t3333 = t3331 + t3332;
  t3349 = -1.*t3008*t3120*t3187;
  t3350 = -1.*t3182*t3008*t3133;
  t3351 = t3349 + t3350;
  t3353 = t3182*t3008*t3120;
  t3354 = -1.*t3008*t3187*t3133;
  t3355 = t3353 + t3354;
  t3357 = t3226*t3351;
  t3358 = t3222*t3355;
  t3359 = t3357 + t3358;
  t3361 = t3222*t3351;
  t3362 = -1.*t3226*t3355;
  t3363 = t3361 + t3362;
  t3365 = -1.*t3253*t3359;
  t3366 = t3249*t3363;
  t3367 = t3365 + t3366;
  t3369 = t3249*t3359;
  t3370 = t3253*t3363;
  t3371 = t3369 + t3370;
  p_output1[0]=0.24925 + 0.135*t2927 - 0.1305*t2927*t3008 - 1.*t2927*t3117 - 1.*t2927*t3111*t3158 - 1.*t3166*t3174 - 1.*t3191*t3204 - 1.*t3211*t3218 - 1.*t3229*t3233 - 1.*t3239*t3246 - 1.*t3256*t3260 - 1.*t3264*t3267 - 1.*t3275*t3278 - 1.*t3282*t3285 - 0.0306*(t3273*t3278 + t3269*t3285) + 1.1312*(t3269*t3278 - 1.*t3273*t3285);
  p_output1[1]=-0.0302 + 0.135*(1. - 1.*t3166) + 0.1305*t3008*t3166 + t3117*t3166 + t3111*t3158*t3166 - 1.*t2927*t3174 + t3191*t3305 + t3211*t3309 + t3229*t3313 + t3239*t3317 + t3256*t3321 + t3264*t3325 + t3275*t3329 + t3282*t3333 + 0.0306*(t3273*t3329 + t3269*t3333) - 1.1312*(t3269*t3329 - 1.*t3273*t3333);
  p_output1[2]=-0.047 - 0.049*t3070 + 0.004500000000000004*t3111 + t3008*t3158 + t3008*t3120*t3191 - 1.*t3008*t3133*t3211 + t3229*t3351 + t3239*t3355 + t3256*t3359 + t3264*t3363 + t3275*t3367 + t3282*t3371 + 0.0306*(t3273*t3367 + t3269*t3371) - 1.1312*(t3269*t3367 - 1.*t3273*t3371);
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
