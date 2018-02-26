/*
 * Automatically Generated from Mathematica.
 * Mon 26 Feb 2018 15:42:37 GMT-05:00
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
  double t39;
  double t332;
  double t1580;
  double t1032;
  double t5152;
  double t5173;
  double t5147;
  double t5210;
  double t5217;
  double t5218;
  double t5164;
  double t5177;
  double t5194;
  double t5221;
  double t5110;
  double t5255;
  double t5259;
  double t5261;
  double t5204;
  double t5224;
  double t5235;
  double t5262;
  double t5065;
  double t5269;
  double t5271;
  double t5272;
  double t5245;
  double t5264;
  double t5265;
  double t5278;
  double t3385;
  double t5306;
  double t5307;
  double t5310;
  double t5266;
  double t5285;
  double t5293;
  double t5311;
  double t5332;
  double t5333;
  double t5334;
  double t5327;
  double t5328;
  double t5330;
  double t5340;
  double t5341;
  double t5344;
  double t5331;
  double t5335;
  double t5337;
  double t5360;
  double t5364;
  double t5366;
  double t5338;
  double t5345;
  double t5352;
  double t5373;
  double t5375;
  double t5376;
  double t5357;
  double t5368;
  double t5370;
  double t5394;
  double t5395;
  double t5396;
  double t5390;
  double t5391;
  double t5392;
  double t5400;
  double t5401;
  double t5402;
  double t5393;
  double t5397;
  double t5398;
  double t5409;
  double t5411;
  double t5413;
  double t5399;
  double t5403;
  double t5405;
  double t5303;
  double t5314;
  double t5315;
  double t5320;
  double t5322;
  double t5323;
  double t5372;
  double t5379;
  double t5381;
  double t5384;
  double t5385;
  double t5387;
  double t5406;
  double t5414;
  double t5415;
  double t5418;
  double t5419;
  double t5421;
  double t5446;
  double t5447;
  double t5456;
  double t5457;
  double t5466;
  double t5467;
  double t5476;
  double t5477;
  double t5486;
  double t5487;
  double t5440;
  double t5441;
  double t5442;
  double t5443;
  double t5444;
  double t5448;
  double t5449;
  double t5450;
  double t5452;
  double t5453;
  double t5454;
  double t5458;
  double t5459;
  double t5460;
  double t5462;
  double t5463;
  double t5464;
  double t5468;
  double t5469;
  double t5470;
  double t5472;
  double t5473;
  double t5474;
  double t5478;
  double t5479;
  double t5480;
  double t5482;
  double t5483;
  double t5484;
  double t5488;
  double t5489;
  double t5490;
  double t5492;
  double t5493;
  double t5494;
  t39 = Cos(var1[8]);
  t332 = Sin(var1[7]);
  t1580 = Sin(var1[8]);
  t1032 = Cos(var1[7]);
  t5152 = Cos(var1[9]);
  t5173 = Sin(var1[9]);
  t5147 = Cos(var1[10]);
  t5210 = t1032*t5152;
  t5217 = -1.*t332*t1580*t5173;
  t5218 = t5210 + t5217;
  t5164 = t5152*t332*t1580;
  t5177 = t1032*t5173;
  t5194 = t5164 + t5177;
  t5221 = Sin(var1[10]);
  t5110 = Cos(var1[11]);
  t5255 = t5147*t5218;
  t5259 = -1.*t5194*t5221;
  t5261 = t5255 + t5259;
  t5204 = t5147*t5194;
  t5224 = t5218*t5221;
  t5235 = t5204 + t5224;
  t5262 = Sin(var1[11]);
  t5065 = Cos(var1[12]);
  t5269 = t5110*t5261;
  t5271 = -1.*t5235*t5262;
  t5272 = t5269 + t5271;
  t5245 = t5110*t5235;
  t5264 = t5261*t5262;
  t5265 = t5245 + t5264;
  t5278 = Sin(var1[12]);
  t3385 = Cos(var1[13]);
  t5306 = t5065*t5272;
  t5307 = -1.*t5265*t5278;
  t5310 = t5306 + t5307;
  t5266 = t5065*t5265;
  t5285 = t5272*t5278;
  t5293 = t5266 + t5285;
  t5311 = Sin(var1[13]);
  t5332 = -1.*t5152*t332;
  t5333 = -1.*t1032*t1580*t5173;
  t5334 = t5332 + t5333;
  t5327 = t1032*t5152*t1580;
  t5328 = -1.*t332*t5173;
  t5330 = t5327 + t5328;
  t5340 = t5147*t5334;
  t5341 = -1.*t5330*t5221;
  t5344 = t5340 + t5341;
  t5331 = t5147*t5330;
  t5335 = t5334*t5221;
  t5337 = t5331 + t5335;
  t5360 = t5110*t5344;
  t5364 = -1.*t5337*t5262;
  t5366 = t5360 + t5364;
  t5338 = t5110*t5337;
  t5345 = t5344*t5262;
  t5352 = t5338 + t5345;
  t5373 = t5065*t5366;
  t5375 = -1.*t5352*t5278;
  t5376 = t5373 + t5375;
  t5357 = t5065*t5352;
  t5368 = t5366*t5278;
  t5370 = t5357 + t5368;
  t5394 = -1.*t39*t5147*t5173;
  t5395 = -1.*t39*t5152*t5221;
  t5396 = t5394 + t5395;
  t5390 = t39*t5152*t5147;
  t5391 = -1.*t39*t5173*t5221;
  t5392 = t5390 + t5391;
  t5400 = t5110*t5396;
  t5401 = -1.*t5392*t5262;
  t5402 = t5400 + t5401;
  t5393 = t5110*t5392;
  t5397 = t5396*t5262;
  t5398 = t5393 + t5397;
  t5409 = t5065*t5402;
  t5411 = -1.*t5398*t5278;
  t5413 = t5409 + t5411;
  t5399 = t5065*t5398;
  t5403 = t5402*t5278;
  t5405 = t5399 + t5403;
  t5303 = t3385*t5293;
  t5314 = t5310*t5311;
  t5315 = t5303 + t5314;
  t5320 = t3385*t5310;
  t5322 = -1.*t5293*t5311;
  t5323 = t5320 + t5322;
  t5372 = t3385*t5370;
  t5379 = t5376*t5311;
  t5381 = t5372 + t5379;
  t5384 = t3385*t5376;
  t5385 = -1.*t5370*t5311;
  t5387 = t5384 + t5385;
  t5406 = t3385*t5405;
  t5414 = t5413*t5311;
  t5415 = t5406 + t5414;
  t5418 = t3385*t5413;
  t5419 = -1.*t5405*t5311;
  t5421 = t5418 + t5419;
  t5446 = -1.*t5152;
  t5447 = 1. + t5446;
  t5456 = -1.*t5147;
  t5457 = 1. + t5456;
  t5466 = -1.*t5110;
  t5467 = 1. + t5466;
  t5476 = -1.*t5065;
  t5477 = 1. + t5476;
  t5486 = -1.*t3385;
  t5487 = 1. + t5486;
  t5440 = -1.*t39;
  t5441 = 1. + t5440;
  t5442 = -0.135*t5441;
  t5443 = 0.049*t1580;
  t5444 = 0. + t5442 + t5443;
  t5448 = -0.049*t5447;
  t5449 = -0.09*t5173;
  t5450 = 0. + t5448 + t5449;
  t5452 = -0.09*t5447;
  t5453 = 0.049*t5173;
  t5454 = 0. + t5452 + t5453;
  t5458 = -0.049*t5457;
  t5459 = -0.21*t5221;
  t5460 = 0. + t5458 + t5459;
  t5462 = -0.21*t5457;
  t5463 = 0.049*t5221;
  t5464 = 0. + t5462 + t5463;
  t5468 = -0.0016*t5467;
  t5469 = -0.2707*t5262;
  t5470 = 0. + t5468 + t5469;
  t5472 = -0.2707*t5467;
  t5473 = 0.0016*t5262;
  t5474 = 0. + t5472 + t5473;
  t5478 = 0.0184*t5477;
  t5479 = -0.7055*t5278;
  t5480 = 0. + t5478 + t5479;
  t5482 = -0.7055*t5477;
  t5483 = -0.0184*t5278;
  t5484 = 0. + t5482 + t5483;
  t5488 = -0.0216*t5487;
  t5489 = -1.1135*t5311;
  t5490 = 0. + t5488 + t5489;
  t5492 = -1.1135*t5487;
  t5493 = 0.0216*t5311;
  t5494 = 0. + t5492 + t5493;
  p_output1[0]=0. + t332*t39;
  p_output1[1]=0. - 1.*t1032*t39;
  p_output1[2]=0. + t1580;
  p_output1[3]=0.;
  p_output1[4]=0. - 0.642788*t5315 - 0.766044*t5323;
  p_output1[5]=0. + 0.642788*t5381 + 0.766044*t5387;
  p_output1[6]=0. + 0.642788*t5415 + 0.766044*t5421;
  p_output1[7]=0.;
  p_output1[8]=0. + 0.766044*t5315 - 0.642788*t5323;
  p_output1[9]=0. - 0.766044*t5381 + 0.642788*t5387;
  p_output1[10]=0. - 0.766044*t5415 + 0.642788*t5421;
  p_output1[11]=0.;
  p_output1[12]=0.24925 - 0.135*t332 + 0.1305*t332*t39 - 0.0306*t5315 + 1.1312*t5323 - 1.*t332*t5444 - 1.*t1580*t332*t5450 - 1.*t1032*t5454 - 1.*t5194*t5460 - 1.*t5218*t5464 - 1.*t5235*t5470 - 1.*t5261*t5474 - 1.*t5265*t5480 - 1.*t5272*t5484 - 1.*t5293*t5490 - 1.*t5310*t5494;
  p_output1[13]=-0.0302 - 0.135*(1. - 1.*t1032) - 0.1305*t1032*t39 + 0.0306*t5381 - 1.1312*t5387 + t1032*t5444 + t1032*t1580*t5450 - 1.*t332*t5454 + t5330*t5460 + t5334*t5464 + t5337*t5470 + t5344*t5474 + t5352*t5480 + t5366*t5484 + t5370*t5490 + t5376*t5494;
  p_output1[14]=-0.047 - 0.004500000000000004*t1580 + 0.0306*t5415 - 1.1312*t5421 - 0.049*t5441 + t39*t5450 + t39*t5152*t5460 - 1.*t39*t5173*t5464 + t5392*t5470 + t5396*t5474 + t5398*t5480 + t5402*t5484 + t5405*t5490 + t5413*t5494;
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

#include "H_MultisenseIMU_to_RightToeBottom_mex.hh"

namespace SymExpression
{

void H_MultisenseIMU_to_RightToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
