/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:24 GMT-05:00
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
  double t812;
  double t1404;
  double t1484;
  double t1440;
  double t2221;
  double t1316;
  double t4187;
  double t4191;
  double t4968;
  double t1451;
  double t2660;
  double t3331;
  double t4977;
  double t793;
  double t5086;
  double t5088;
  double t5091;
  double t836;
  double t861;
  double t1126;
  double t3334;
  double t5003;
  double t5011;
  double t5016;
  double t5043;
  double t5049;
  double t5101;
  double t5152;
  double t5072;
  double t5126;
  double t5139;
  double t173;
  double t5156;
  double t5157;
  double t5158;
  double t5186;
  double t5147;
  double t5160;
  double t5178;
  double t129;
  double t5192;
  double t5201;
  double t5216;
  double t5227;
  double t5185;
  double t5219;
  double t5221;
  double t44;
  double t5232;
  double t5234;
  double t5236;
  double t43;
  double t5305;
  double t5306;
  double t5307;
  double t5294;
  double t5299;
  double t5301;
  double t5321;
  double t5323;
  double t5324;
  double t5293;
  double t5302;
  double t5308;
  double t5309;
  double t5312;
  double t5317;
  double t5320;
  double t5329;
  double t5330;
  double t5335;
  double t5337;
  double t5341;
  double t5332;
  double t5343;
  double t5351;
  double t5361;
  double t5365;
  double t5368;
  double t5249;
  double t5357;
  double t5369;
  double t5370;
  double t5373;
  double t5376;
  double t5380;
  double t5407;
  double t5410;
  double t5411;
  double t5394;
  double t5397;
  double t5400;
  double t5401;
  double t5403;
  double t5405;
  double t5406;
  double t5414;
  double t5422;
  double t5425;
  double t5428;
  double t5429;
  double t5423;
  double t5434;
  double t5435;
  double t5440;
  double t5442;
  double t5447;
  double t5436;
  double t5452;
  double t5455;
  double t5460;
  double t5464;
  double t5465;
  double t5226;
  double t5242;
  double t5245;
  double t5255;
  double t5258;
  double t5262;
  double t5372;
  double t5381;
  double t5382;
  double t5385;
  double t5387;
  double t5389;
  double t5458;
  double t5466;
  double t5469;
  double t5474;
  double t5477;
  double t5481;
  double t5538;
  double t5542;
  double t5565;
  double t5570;
  double t5593;
  double t5595;
  double t5607;
  double t5617;
  double t5643;
  double t5646;
  double t5667;
  double t5669;
  double t5486;
  double t5487;
  double t5488;
  double t5516;
  double t5518;
  double t5521;
  double t5525;
  double t5531;
  double t5534;
  double t5543;
  double t5545;
  double t5546;
  double t5549;
  double t5550;
  double t5553;
  double t5573;
  double t5576;
  double t5579;
  double t5583;
  double t5587;
  double t5589;
  double t5596;
  double t5597;
  double t5599;
  double t5601;
  double t5603;
  double t5604;
  double t5621;
  double t5623;
  double t5626;
  double t5630;
  double t5633;
  double t5637;
  double t5649;
  double t5650;
  double t5653;
  double t5659;
  double t5661;
  double t5662;
  double t5672;
  double t5673;
  double t5677;
  double t5681;
  double t5683;
  double t5685;
  double t5489;
  double t5490;
  double t5492;
  double t5495;
  double t5498;
  double t5499;
  t812 = Cos(var1[3]);
  t1404 = Cos(var1[5]);
  t1484 = Sin(var1[4]);
  t1440 = Sin(var1[3]);
  t2221 = Sin(var1[5]);
  t1316 = Cos(var1[6]);
  t4187 = t812*t1404*t1484;
  t4191 = t1440*t2221;
  t4968 = t4187 + t4191;
  t1451 = -1.*t1404*t1440;
  t2660 = t812*t1484*t2221;
  t3331 = t1451 + t2660;
  t4977 = Sin(var1[6]);
  t793 = Cos(var1[8]);
  t5086 = t1316*t4968;
  t5088 = -1.*t3331*t4977;
  t5091 = t5086 + t5088;
  t836 = Cos(var1[4]);
  t861 = Cos(var1[7]);
  t1126 = t812*t836*t861;
  t3334 = t1316*t3331;
  t5003 = t4968*t4977;
  t5011 = t3334 + t5003;
  t5016 = Sin(var1[7]);
  t5043 = t5011*t5016;
  t5049 = t1126 + t5043;
  t5101 = Sin(var1[8]);
  t5152 = Cos(var1[9]);
  t5072 = t793*t5049;
  t5126 = t5091*t5101;
  t5139 = t5072 + t5126;
  t173 = Sin(var1[9]);
  t5156 = t793*t5091;
  t5157 = -1.*t5049*t5101;
  t5158 = t5156 + t5157;
  t5186 = Cos(var1[10]);
  t5147 = -1.*t173*t5139;
  t5160 = t5152*t5158;
  t5178 = t5147 + t5160;
  t129 = Sin(var1[10]);
  t5192 = t5152*t5139;
  t5201 = t173*t5158;
  t5216 = t5192 + t5201;
  t5227 = Cos(var1[11]);
  t5185 = t129*t5178;
  t5219 = t5186*t5216;
  t5221 = t5185 + t5219;
  t44 = Sin(var1[11]);
  t5232 = t5186*t5178;
  t5234 = -1.*t129*t5216;
  t5236 = t5232 + t5234;
  t43 = Cos(var1[12]);
  t5305 = t1404*t1440*t1484;
  t5306 = -1.*t812*t2221;
  t5307 = t5305 + t5306;
  t5294 = t812*t1404;
  t5299 = t1440*t1484*t2221;
  t5301 = t5294 + t5299;
  t5321 = t1316*t5307;
  t5323 = -1.*t5301*t4977;
  t5324 = t5321 + t5323;
  t5293 = t836*t861*t1440;
  t5302 = t1316*t5301;
  t5308 = t5307*t4977;
  t5309 = t5302 + t5308;
  t5312 = t5309*t5016;
  t5317 = t5293 + t5312;
  t5320 = t793*t5317;
  t5329 = t5324*t5101;
  t5330 = t5320 + t5329;
  t5335 = t793*t5324;
  t5337 = -1.*t5317*t5101;
  t5341 = t5335 + t5337;
  t5332 = -1.*t173*t5330;
  t5343 = t5152*t5341;
  t5351 = t5332 + t5343;
  t5361 = t5152*t5330;
  t5365 = t173*t5341;
  t5368 = t5361 + t5365;
  t5249 = Sin(var1[12]);
  t5357 = t129*t5351;
  t5369 = t5186*t5368;
  t5370 = t5357 + t5369;
  t5373 = t5186*t5351;
  t5376 = -1.*t129*t5368;
  t5380 = t5373 + t5376;
  t5407 = t836*t1404*t1316;
  t5410 = -1.*t836*t2221*t4977;
  t5411 = t5407 + t5410;
  t5394 = -1.*t861*t1484;
  t5397 = t836*t1316*t2221;
  t5400 = t836*t1404*t4977;
  t5401 = t5397 + t5400;
  t5403 = t5401*t5016;
  t5405 = t5394 + t5403;
  t5406 = t793*t5405;
  t5414 = t5411*t5101;
  t5422 = t5406 + t5414;
  t5425 = t793*t5411;
  t5428 = -1.*t5405*t5101;
  t5429 = t5425 + t5428;
  t5423 = -1.*t173*t5422;
  t5434 = t5152*t5429;
  t5435 = t5423 + t5434;
  t5440 = t5152*t5422;
  t5442 = t173*t5429;
  t5447 = t5440 + t5442;
  t5436 = t129*t5435;
  t5452 = t5186*t5447;
  t5455 = t5436 + t5452;
  t5460 = t5186*t5435;
  t5464 = -1.*t129*t5447;
  t5465 = t5460 + t5464;
  t5226 = -1.*t44*t5221;
  t5242 = t5227*t5236;
  t5245 = t5226 + t5242;
  t5255 = t5227*t5221;
  t5258 = t44*t5236;
  t5262 = t5255 + t5258;
  t5372 = -1.*t44*t5370;
  t5381 = t5227*t5380;
  t5382 = t5372 + t5381;
  t5385 = t5227*t5370;
  t5387 = t44*t5380;
  t5389 = t5385 + t5387;
  t5458 = -1.*t44*t5455;
  t5466 = t5227*t5465;
  t5469 = t5458 + t5466;
  t5474 = t5227*t5455;
  t5477 = t44*t5465;
  t5481 = t5474 + t5477;
  t5538 = -1.*t861;
  t5542 = 1. + t5538;
  t5565 = -1.*t793;
  t5570 = 1. + t5565;
  t5593 = -1.*t5152;
  t5595 = 1. + t5593;
  t5607 = -1.*t5186;
  t5617 = 1. + t5607;
  t5643 = -1.*t5227;
  t5646 = 1. + t5643;
  t5667 = -1.*t43;
  t5669 = 1. + t5667;
  t5486 = t5249*t5245;
  t5487 = t43*t5262;
  t5488 = t5486 + t5487;
  t5516 = -1.*t1316;
  t5518 = 1. + t5516;
  t5521 = 0.135*t5518;
  t5525 = 0. + t5521;
  t5531 = -0.135*t4977;
  t5534 = 0. + t5531;
  t5543 = 0.135*t5542;
  t5545 = 0.049*t5016;
  t5546 = 0. + t5543 + t5545;
  t5549 = -0.049*t5542;
  t5550 = 0.135*t5016;
  t5553 = 0. + t5549 + t5550;
  t5573 = -0.049*t5570;
  t5576 = -0.09*t5101;
  t5579 = 0. + t5573 + t5576;
  t5583 = -0.09*t5570;
  t5587 = 0.049*t5101;
  t5589 = 0. + t5583 + t5587;
  t5596 = -0.049*t5595;
  t5597 = -0.21*t173;
  t5599 = 0. + t5596 + t5597;
  t5601 = -0.21*t5595;
  t5603 = 0.049*t173;
  t5604 = 0. + t5601 + t5603;
  t5621 = -0.2707*t5617;
  t5623 = 0.0016*t129;
  t5626 = 0. + t5621 + t5623;
  t5630 = -0.0016*t5617;
  t5633 = -0.2707*t129;
  t5637 = 0. + t5630 + t5633;
  t5649 = 0.0184*t5646;
  t5650 = -0.7055*t44;
  t5653 = 0. + t5649 + t5650;
  t5659 = -0.7055*t5646;
  t5661 = -0.0184*t44;
  t5662 = 0. + t5659 + t5661;
  t5672 = -1.1135*t5669;
  t5673 = 0.0216*t5249;
  t5677 = 0. + t5672 + t5673;
  t5681 = -0.0216*t5669;
  t5683 = -1.1135*t5249;
  t5685 = 0. + t5681 + t5683;
  t5489 = t5249*t5382;
  t5490 = t43*t5389;
  t5492 = t5489 + t5490;
  t5495 = t5249*t5469;
  t5498 = t43*t5481;
  t5499 = t5495 + t5498;
  p_output1[0]=-1.*t43*t5245 + t5249*t5262;
  p_output1[1]=-1.*t43*t5382 + t5249*t5389;
  p_output1[2]=-1.*t43*t5469 + t5249*t5481;
  p_output1[3]=0.;
  p_output1[4]=t5488;
  p_output1[5]=t5492;
  p_output1[6]=t5499;
  p_output1[7]=0.;
  p_output1[8]=t5016*t812*t836 - 1.*t5011*t861;
  p_output1[9]=t1440*t5016*t836 - 1.*t5309*t861;
  p_output1[10]=-1.*t1484*t5016 - 1.*t5401*t861;
  p_output1[11]=0.;
  p_output1[12]=0. - 1.1135*(t43*t5245 - 1.*t5249*t5262) - 0.0216*t5488 + t3331*t5525 + t4968*t5534 + t5011*t5546 + t5049*t5579 + t5091*t5589 + t5139*t5599 + t5158*t5604 + t5178*t5626 + t5216*t5637 + t5221*t5653 + t5236*t5662 + t5245*t5677 + t5262*t5685 + t5553*t812*t836 + 0.1305*(-1.*t5016*t812*t836 + t5011*t861) + var1[0];
  p_output1[13]=0. - 1.1135*(t43*t5382 - 1.*t5249*t5389) - 0.0216*t5492 + t5301*t5525 + t5307*t5534 + t5309*t5546 + t5317*t5579 + t5324*t5589 + t5330*t5599 + t5341*t5604 + t5351*t5626 + t5368*t5637 + t5370*t5653 + t5380*t5662 + t5382*t5677 + t5389*t5685 + t1440*t5553*t836 + 0.1305*(-1.*t1440*t5016*t836 + t5309*t861) + var1[1];
  p_output1[14]=0. - 1.1135*(t43*t5469 - 1.*t5249*t5481) - 0.0216*t5499 + t5401*t5546 - 1.*t1484*t5553 + t5405*t5579 + t5411*t5589 + t5422*t5599 + t5429*t5604 + t5435*t5626 + t5447*t5637 + t5455*t5653 + t5465*t5662 + t5469*t5677 + t5481*t5685 + t2221*t5525*t836 + t1404*t5534*t836 + 0.1305*(t1484*t5016 + t5401*t861) + var1[2];
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

#include "H_toe_joint_left_mex.hh"

namespace SymExpression
{

void H_toe_joint_left_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
