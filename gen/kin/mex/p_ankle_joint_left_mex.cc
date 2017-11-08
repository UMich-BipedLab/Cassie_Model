/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:11:13 GMT-05:00
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
  double t3210;
  double t3189;
  double t3211;
  double t3204;
  double t3212;
  double t3157;
  double t3209;
  double t3214;
  double t3217;
  double t3219;
  double t3222;
  double t3223;
  double t3225;
  double t3234;
  double t3236;
  double t3239;
  double t3241;
  double t3230;
  double t3231;
  double t3232;
  double t3248;
  double t3261;
  double t3262;
  double t3263;
  double t3265;
  double t3258;
  double t3259;
  double t3260;
  double t3270;
  double t3271;
  double t3272;
  double t3277;
  double t3278;
  double t3279;
  double t3282;
  double t3285;
  double t3286;
  double t3287;
  double t3292;
  double t3293;
  double t3294;
  double t3296;
  double t3297;
  double t3298;
  double t3300;
  double t3303;
  double t3304;
  double t3305;
  double t3310;
  double t3311;
  double t3312;
  double t3162;
  double t3163;
  double t3184;
  double t3188;
  double t3226;
  double t3227;
  double t3323;
  double t3324;
  double t3325;
  double t3327;
  double t3328;
  double t3329;
  double t3240;
  double t3244;
  double t3245;
  double t3249;
  double t3251;
  double t3252;
  double t3331;
  double t3332;
  double t3333;
  double t3264;
  double t3266;
  double t3267;
  double t3273;
  double t3274;
  double t3275;
  double t3281;
  double t3283;
  double t3284;
  double t3340;
  double t3341;
  double t3342;
  double t3344;
  double t3345;
  double t3346;
  double t3289;
  double t3290;
  double t3291;
  double t3299;
  double t3301;
  double t3302;
  double t3348;
  double t3349;
  double t3350;
  double t3352;
  double t3353;
  double t3354;
  double t3307;
  double t3308;
  double t3309;
  double t3356;
  double t3357;
  double t3358;
  double t3360;
  double t3361;
  double t3362;
  double t3375;
  double t3376;
  double t3377;
  double t3384;
  double t3385;
  double t3386;
  double t3388;
  double t3389;
  double t3390;
  double t3392;
  double t3393;
  double t3394;
  double t3396;
  double t3397;
  double t3398;
  double t3400;
  double t3401;
  double t3402;
  double t3404;
  double t3405;
  double t3406;
  t3210 = Cos(var1[3]);
  t3189 = Cos(var1[5]);
  t3211 = Sin(var1[4]);
  t3204 = Sin(var1[3]);
  t3212 = Sin(var1[5]);
  t3157 = Cos(var1[6]);
  t3209 = -1.*t3189*t3204;
  t3214 = t3210*t3211*t3212;
  t3217 = t3209 + t3214;
  t3219 = t3210*t3189*t3211;
  t3222 = t3204*t3212;
  t3223 = t3219 + t3222;
  t3225 = Sin(var1[6]);
  t3234 = Cos(var1[7]);
  t3236 = -1.*t3234;
  t3239 = 1. + t3236;
  t3241 = Sin(var1[7]);
  t3230 = t3157*t3217;
  t3231 = t3223*t3225;
  t3232 = t3230 + t3231;
  t3248 = Cos(var1[4]);
  t3261 = Cos(var1[8]);
  t3262 = -1.*t3261;
  t3263 = 1. + t3262;
  t3265 = Sin(var1[8]);
  t3258 = t3210*t3248*t3234;
  t3259 = t3232*t3241;
  t3260 = t3258 + t3259;
  t3270 = t3157*t3223;
  t3271 = -1.*t3217*t3225;
  t3272 = t3270 + t3271;
  t3277 = Cos(var1[9]);
  t3278 = -1.*t3277;
  t3279 = 1. + t3278;
  t3282 = Sin(var1[9]);
  t3285 = t3261*t3260;
  t3286 = t3272*t3265;
  t3287 = t3285 + t3286;
  t3292 = t3261*t3272;
  t3293 = -1.*t3260*t3265;
  t3294 = t3292 + t3293;
  t3296 = Cos(var1[10]);
  t3297 = -1.*t3296;
  t3298 = 1. + t3297;
  t3300 = Sin(var1[10]);
  t3303 = -1.*t3282*t3287;
  t3304 = t3277*t3294;
  t3305 = t3303 + t3304;
  t3310 = t3277*t3287;
  t3311 = t3282*t3294;
  t3312 = t3310 + t3311;
  t3162 = -1.*t3157;
  t3163 = 1. + t3162;
  t3184 = 0.135*t3163;
  t3188 = 0. + t3184;
  t3226 = -0.135*t3225;
  t3227 = 0. + t3226;
  t3323 = t3210*t3189;
  t3324 = t3204*t3211*t3212;
  t3325 = t3323 + t3324;
  t3327 = t3189*t3204*t3211;
  t3328 = -1.*t3210*t3212;
  t3329 = t3327 + t3328;
  t3240 = 0.135*t3239;
  t3244 = 0.049*t3241;
  t3245 = 0. + t3240 + t3244;
  t3249 = -0.049*t3239;
  t3251 = 0.135*t3241;
  t3252 = 0. + t3249 + t3251;
  t3331 = t3157*t3325;
  t3332 = t3329*t3225;
  t3333 = t3331 + t3332;
  t3264 = -0.049*t3263;
  t3266 = -0.09*t3265;
  t3267 = 0. + t3264 + t3266;
  t3273 = -0.09*t3263;
  t3274 = 0.049*t3265;
  t3275 = 0. + t3273 + t3274;
  t3281 = -0.049*t3279;
  t3283 = -0.21*t3282;
  t3284 = 0. + t3281 + t3283;
  t3340 = t3248*t3234*t3204;
  t3341 = t3333*t3241;
  t3342 = t3340 + t3341;
  t3344 = t3157*t3329;
  t3345 = -1.*t3325*t3225;
  t3346 = t3344 + t3345;
  t3289 = -0.21*t3279;
  t3290 = 0.049*t3282;
  t3291 = 0. + t3289 + t3290;
  t3299 = -0.2707*t3298;
  t3301 = 0.0016*t3300;
  t3302 = 0. + t3299 + t3301;
  t3348 = t3261*t3342;
  t3349 = t3346*t3265;
  t3350 = t3348 + t3349;
  t3352 = t3261*t3346;
  t3353 = -1.*t3342*t3265;
  t3354 = t3352 + t3353;
  t3307 = -0.0016*t3298;
  t3308 = -0.2707*t3300;
  t3309 = 0. + t3307 + t3308;
  t3356 = -1.*t3282*t3350;
  t3357 = t3277*t3354;
  t3358 = t3356 + t3357;
  t3360 = t3277*t3350;
  t3361 = t3282*t3354;
  t3362 = t3360 + t3361;
  t3375 = t3248*t3157*t3212;
  t3376 = t3248*t3189*t3225;
  t3377 = t3375 + t3376;
  t3384 = -1.*t3234*t3211;
  t3385 = t3377*t3241;
  t3386 = t3384 + t3385;
  t3388 = t3248*t3189*t3157;
  t3389 = -1.*t3248*t3212*t3225;
  t3390 = t3388 + t3389;
  t3392 = t3261*t3386;
  t3393 = t3390*t3265;
  t3394 = t3392 + t3393;
  t3396 = t3261*t3390;
  t3397 = -1.*t3386*t3265;
  t3398 = t3396 + t3397;
  t3400 = -1.*t3282*t3394;
  t3401 = t3277*t3398;
  t3402 = t3400 + t3401;
  t3404 = t3277*t3394;
  t3405 = t3282*t3398;
  t3406 = t3404 + t3405;
  p_output1[0]=0. + t3188*t3217 + t3223*t3227 + t3232*t3245 + 0.1305*(t3232*t3234 - 1.*t3210*t3241*t3248) + t3210*t3248*t3252 + t3260*t3267 + t3272*t3275 + t3284*t3287 + t3291*t3294 + t3302*t3305 + t3309*t3312 + 0.0184*(t3300*t3305 + t3296*t3312) - 0.7055*(t3296*t3305 - 1.*t3300*t3312) + var1[0];
  p_output1[1]=0. + t3204*t3248*t3252 + t3188*t3325 + t3227*t3329 + t3245*t3333 + 0.1305*(-1.*t3204*t3241*t3248 + t3234*t3333) + t3267*t3342 + t3275*t3346 + t3284*t3350 + t3291*t3354 + t3302*t3358 + t3309*t3362 + 0.0184*(t3300*t3358 + t3296*t3362) - 0.7055*(t3296*t3358 - 1.*t3300*t3362) + var1[1];
  p_output1[2]=0. + t3188*t3212*t3248 + t3189*t3227*t3248 - 1.*t3211*t3252 + t3245*t3377 + 0.1305*(t3211*t3241 + t3234*t3377) + t3267*t3386 + t3275*t3390 + t3284*t3394 + t3291*t3398 + t3302*t3402 + t3309*t3406 + 0.0184*(t3300*t3402 + t3296*t3406) - 0.7055*(t3296*t3402 - 1.*t3300*t3406) + var1[2];
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

#include "p_ankle_joint_left_mex.hh"

namespace SymExpression
{

void p_ankle_joint_left_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
