/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 11:08:09 GMT-04:00
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
  double t1416;
  double t3387;
  double t4963;
  double t4946;
  double t4965;
  double t3383;
  double t5038;
  double t5040;
  double t5054;
  double t4958;
  double t4983;
  double t5031;
  double t5055;
  double t1368;
  double t5126;
  double t5131;
  double t5133;
  double t1928;
  double t2805;
  double t2996;
  double t5037;
  double t5064;
  double t5087;
  double t5100;
  double t5103;
  double t5106;
  double t5134;
  double t5160;
  double t5110;
  double t5138;
  double t5144;
  double t1085;
  double t5163;
  double t5171;
  double t5181;
  double t5187;
  double t5154;
  double t5184;
  double t5185;
  double t999;
  double t5192;
  double t5197;
  double t5200;
  double t5223;
  double t5186;
  double t5205;
  double t5211;
  double t824;
  double t5235;
  double t5240;
  double t5245;
  double t814;
  double t5278;
  double t5280;
  double t5281;
  double t5269;
  double t5271;
  double t5273;
  double t5304;
  double t5308;
  double t5316;
  double t5268;
  double t5275;
  double t5284;
  double t5286;
  double t5291;
  double t5297;
  double t5302;
  double t5318;
  double t5319;
  double t5322;
  double t5323;
  double t5326;
  double t5320;
  double t5327;
  double t5330;
  double t5334;
  double t5335;
  double t5336;
  double t5254;
  double t5332;
  double t5340;
  double t5341;
  double t5345;
  double t5349;
  double t5351;
  double t5390;
  double t5391;
  double t5394;
  double t5370;
  double t5373;
  double t5377;
  double t5378;
  double t5382;
  double t5383;
  double t5385;
  double t5398;
  double t5403;
  double t5406;
  double t5411;
  double t5414;
  double t5404;
  double t5415;
  double t5418;
  double t5424;
  double t5427;
  double t5430;
  double t5420;
  double t5432;
  double t5433;
  double t5437;
  double t5438;
  double t5439;
  double t5212;
  double t5250;
  double t5252;
  double t5256;
  double t5257;
  double t5259;
  double t5343;
  double t5352;
  double t5355;
  double t5357;
  double t5360;
  double t5361;
  double t5436;
  double t5440;
  double t5441;
  double t5444;
  double t5446;
  double t5449;
  double t5509;
  double t5514;
  double t5544;
  double t5547;
  double t5558;
  double t5568;
  double t5597;
  double t5600;
  double t5620;
  double t5621;
  double t5646;
  double t5649;
  double t5454;
  double t5455;
  double t5456;
  double t5496;
  double t5498;
  double t5499;
  double t5500;
  double t5504;
  double t5506;
  double t5515;
  double t5518;
  double t5519;
  double t5527;
  double t5530;
  double t5531;
  double t5548;
  double t5549;
  double t5550;
  double t5553;
  double t5554;
  double t5555;
  double t5569;
  double t5574;
  double t5578;
  double t5585;
  double t5590;
  double t5593;
  double t5601;
  double t5604;
  double t5606;
  double t5611;
  double t5615;
  double t5616;
  double t5624;
  double t5627;
  double t5628;
  double t5634;
  double t5637;
  double t5639;
  double t5650;
  double t5653;
  double t5655;
  double t5658;
  double t5659;
  double t5662;
  double t5459;
  double t5460;
  double t5463;
  double t5464;
  double t5467;
  double t5470;
  t1416 = Cos(var1[3]);
  t3387 = Cos(var1[5]);
  t4963 = Sin(var1[4]);
  t4946 = Sin(var1[3]);
  t4965 = Sin(var1[5]);
  t3383 = Cos(var1[6]);
  t5038 = t1416*t3387*t4963;
  t5040 = t4946*t4965;
  t5054 = t5038 + t5040;
  t4958 = -1.*t3387*t4946;
  t4983 = t1416*t4963*t4965;
  t5031 = t4958 + t4983;
  t5055 = Sin(var1[6]);
  t1368 = Cos(var1[8]);
  t5126 = t3383*t5054;
  t5131 = -1.*t5031*t5055;
  t5133 = t5126 + t5131;
  t1928 = Cos(var1[4]);
  t2805 = Cos(var1[7]);
  t2996 = t1416*t1928*t2805;
  t5037 = t3383*t5031;
  t5064 = t5054*t5055;
  t5087 = t5037 + t5064;
  t5100 = Sin(var1[7]);
  t5103 = t5087*t5100;
  t5106 = t2996 + t5103;
  t5134 = Sin(var1[8]);
  t5160 = Cos(var1[9]);
  t5110 = t1368*t5106;
  t5138 = t5133*t5134;
  t5144 = t5110 + t5138;
  t1085 = Sin(var1[9]);
  t5163 = t1368*t5133;
  t5171 = -1.*t5106*t5134;
  t5181 = t5163 + t5171;
  t5187 = Cos(var1[10]);
  t5154 = -1.*t1085*t5144;
  t5184 = t5160*t5181;
  t5185 = t5154 + t5184;
  t999 = Sin(var1[10]);
  t5192 = t5160*t5144;
  t5197 = t1085*t5181;
  t5200 = t5192 + t5197;
  t5223 = Cos(var1[11]);
  t5186 = t999*t5185;
  t5205 = t5187*t5200;
  t5211 = t5186 + t5205;
  t824 = Sin(var1[11]);
  t5235 = t5187*t5185;
  t5240 = -1.*t999*t5200;
  t5245 = t5235 + t5240;
  t814 = Cos(var1[12]);
  t5278 = t3387*t4946*t4963;
  t5280 = -1.*t1416*t4965;
  t5281 = t5278 + t5280;
  t5269 = t1416*t3387;
  t5271 = t4946*t4963*t4965;
  t5273 = t5269 + t5271;
  t5304 = t3383*t5281;
  t5308 = -1.*t5273*t5055;
  t5316 = t5304 + t5308;
  t5268 = t1928*t2805*t4946;
  t5275 = t3383*t5273;
  t5284 = t5281*t5055;
  t5286 = t5275 + t5284;
  t5291 = t5286*t5100;
  t5297 = t5268 + t5291;
  t5302 = t1368*t5297;
  t5318 = t5316*t5134;
  t5319 = t5302 + t5318;
  t5322 = t1368*t5316;
  t5323 = -1.*t5297*t5134;
  t5326 = t5322 + t5323;
  t5320 = -1.*t1085*t5319;
  t5327 = t5160*t5326;
  t5330 = t5320 + t5327;
  t5334 = t5160*t5319;
  t5335 = t1085*t5326;
  t5336 = t5334 + t5335;
  t5254 = Sin(var1[12]);
  t5332 = t999*t5330;
  t5340 = t5187*t5336;
  t5341 = t5332 + t5340;
  t5345 = t5187*t5330;
  t5349 = -1.*t999*t5336;
  t5351 = t5345 + t5349;
  t5390 = t1928*t3387*t3383;
  t5391 = -1.*t1928*t4965*t5055;
  t5394 = t5390 + t5391;
  t5370 = -1.*t2805*t4963;
  t5373 = t1928*t3383*t4965;
  t5377 = t1928*t3387*t5055;
  t5378 = t5373 + t5377;
  t5382 = t5378*t5100;
  t5383 = t5370 + t5382;
  t5385 = t1368*t5383;
  t5398 = t5394*t5134;
  t5403 = t5385 + t5398;
  t5406 = t1368*t5394;
  t5411 = -1.*t5383*t5134;
  t5414 = t5406 + t5411;
  t5404 = -1.*t1085*t5403;
  t5415 = t5160*t5414;
  t5418 = t5404 + t5415;
  t5424 = t5160*t5403;
  t5427 = t1085*t5414;
  t5430 = t5424 + t5427;
  t5420 = t999*t5418;
  t5432 = t5187*t5430;
  t5433 = t5420 + t5432;
  t5437 = t5187*t5418;
  t5438 = -1.*t999*t5430;
  t5439 = t5437 + t5438;
  t5212 = -1.*t824*t5211;
  t5250 = t5223*t5245;
  t5252 = t5212 + t5250;
  t5256 = t5223*t5211;
  t5257 = t824*t5245;
  t5259 = t5256 + t5257;
  t5343 = -1.*t824*t5341;
  t5352 = t5223*t5351;
  t5355 = t5343 + t5352;
  t5357 = t5223*t5341;
  t5360 = t824*t5351;
  t5361 = t5357 + t5360;
  t5436 = -1.*t824*t5433;
  t5440 = t5223*t5439;
  t5441 = t5436 + t5440;
  t5444 = t5223*t5433;
  t5446 = t824*t5439;
  t5449 = t5444 + t5446;
  t5509 = -1.*t2805;
  t5514 = 1. + t5509;
  t5544 = -1.*t1368;
  t5547 = 1. + t5544;
  t5558 = -1.*t5160;
  t5568 = 1. + t5558;
  t5597 = -1.*t5187;
  t5600 = 1. + t5597;
  t5620 = -1.*t5223;
  t5621 = 1. + t5620;
  t5646 = -1.*t814;
  t5649 = 1. + t5646;
  t5454 = t5254*t5252;
  t5455 = t814*t5259;
  t5456 = t5454 + t5455;
  t5496 = -1.*t3383;
  t5498 = 1. + t5496;
  t5499 = 0.135*t5498;
  t5500 = 0. + t5499;
  t5504 = -0.135*t5055;
  t5506 = 0. + t5504;
  t5515 = 0.135*t5514;
  t5518 = 0.049*t5100;
  t5519 = 0. + t5515 + t5518;
  t5527 = -0.049*t5514;
  t5530 = 0.135*t5100;
  t5531 = 0. + t5527 + t5530;
  t5548 = -0.049*t5547;
  t5549 = -0.09*t5134;
  t5550 = 0. + t5548 + t5549;
  t5553 = -0.09*t5547;
  t5554 = 0.049*t5134;
  t5555 = 0. + t5553 + t5554;
  t5569 = -0.049*t5568;
  t5574 = -0.21*t1085;
  t5578 = 0. + t5569 + t5574;
  t5585 = -0.21*t5568;
  t5590 = 0.049*t1085;
  t5593 = 0. + t5585 + t5590;
  t5601 = -0.2707*t5600;
  t5604 = 0.0016*t999;
  t5606 = 0. + t5601 + t5604;
  t5611 = -0.0016*t5600;
  t5615 = -0.2707*t999;
  t5616 = 0. + t5611 + t5615;
  t5624 = 0.0184*t5621;
  t5627 = -0.7055*t824;
  t5628 = 0. + t5624 + t5627;
  t5634 = -0.7055*t5621;
  t5637 = -0.0184*t824;
  t5639 = 0. + t5634 + t5637;
  t5650 = -1.1135*t5649;
  t5653 = 0.0216*t5254;
  t5655 = 0. + t5650 + t5653;
  t5658 = -0.0216*t5649;
  t5659 = -1.1135*t5254;
  t5662 = 0. + t5658 + t5659;
  t5459 = t5254*t5355;
  t5460 = t814*t5361;
  t5463 = t5459 + t5460;
  t5464 = t5254*t5441;
  t5467 = t814*t5449;
  t5470 = t5464 + t5467;
  p_output1[0]=t5254*t5259 - 1.*t5252*t814;
  p_output1[1]=t5254*t5361 - 1.*t5355*t814;
  p_output1[2]=t5254*t5449 - 1.*t5441*t814;
  p_output1[3]=0.;
  p_output1[4]=t5456;
  p_output1[5]=t5463;
  p_output1[6]=t5470;
  p_output1[7]=0.;
  p_output1[8]=-1.*t2805*t5087 + t1416*t1928*t5100;
  p_output1[9]=t1928*t4946*t5100 - 1.*t2805*t5286;
  p_output1[10]=-1.*t4963*t5100 - 1.*t2805*t5378;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.1305*(t2805*t5087 - 1.*t1416*t1928*t5100) - 0.0216*t5456 + t5031*t5500 + t5054*t5506 + t5087*t5519 + t1416*t1928*t5531 + t5106*t5550 + t5133*t5555 + t5144*t5578 + t5181*t5593 + t5185*t5606 + t5200*t5616 + t5211*t5628 + t5245*t5639 + t5252*t5655 + t5259*t5662 - 1.1135*(-1.*t5254*t5259 + t5252*t814) + var1[0];
  p_output1[13]=0. + 0.1305*(-1.*t1928*t4946*t5100 + t2805*t5286) - 0.0216*t5463 + t5273*t5500 + t5281*t5506 + t5286*t5519 + t1928*t4946*t5531 + t5297*t5550 + t5316*t5555 + t5319*t5578 + t5326*t5593 + t5330*t5606 + t5336*t5616 + t5341*t5628 + t5351*t5639 + t5355*t5655 + t5361*t5662 - 1.1135*(-1.*t5254*t5361 + t5355*t814) + var1[1];
  p_output1[14]=0. + 0.1305*(t4963*t5100 + t2805*t5378) - 0.0216*t5470 + t1928*t4965*t5500 + t1928*t3387*t5506 + t5378*t5519 - 1.*t4963*t5531 + t5383*t5550 + t5394*t5555 + t5403*t5578 + t5414*t5593 + t5418*t5606 + t5430*t5616 + t5433*t5628 + t5439*t5639 + t5441*t5655 + t5449*t5662 - 1.1135*(-1.*t5254*t5449 + t5441*t814) + var1[2];
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
