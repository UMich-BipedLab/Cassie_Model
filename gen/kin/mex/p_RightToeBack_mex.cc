/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:34:22 GMT-04:00
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
  double t750;
  double t2056;
  double t2241;
  double t2096;
  double t2283;
  double t1259;
  double t1405;
  double t1523;
  double t1540;
  double t1792;
  double t2164;
  double t2311;
  double t2450;
  double t2574;
  double t2790;
  double t2851;
  double t2857;
  double t1242;
  double t3089;
  double t3126;
  double t3159;
  double t3285;
  double t3353;
  double t3422;
  double t3445;
  double t3612;
  double t3717;
  double t3765;
  double t4249;
  double t4294;
  double t4367;
  double t4429;
  double t4451;
  double t4464;
  double t4503;
  double t4647;
  double t4741;
  double t4744;
  double t4792;
  double t4819;
  double t4834;
  double t4882;
  double t4902;
  double t4915;
  double t4959;
  double t5106;
  double t5129;
  double t5183;
  double t5279;
  double t5300;
  double t5306;
  double t5340;
  double t5353;
  double t5362;
  double t5382;
  double t5410;
  double t5415;
  double t5421;
  double t5453;
  double t5469;
  double t5478;
  double t5496;
  double t5507;
  double t5510;
  double t5515;
  double t5526;
  double t5529;
  double t5530;
  double t5555;
  double t5559;
  double t5562;
  double t1530;
  double t1583;
  double t1677;
  double t1990;
  double t2044;
  double t2605;
  double t2712;
  double t2714;
  double t2766;
  double t2924;
  double t2936;
  double t2946;
  double t5635;
  double t5638;
  double t5645;
  double t5649;
  double t5651;
  double t5656;
  double t3427;
  double t3513;
  double t3529;
  double t5660;
  double t5661;
  double t5662;
  double t4056;
  double t4073;
  double t4100;
  double t4469;
  double t4560;
  double t4616;
  double t5677;
  double t5681;
  double t5688;
  double t5737;
  double t5739;
  double t5741;
  double t4757;
  double t4759;
  double t4775;
  double t4945;
  double t5015;
  double t5055;
  double t5753;
  double t5762;
  double t5763;
  double t5773;
  double t5779;
  double t5788;
  double t5239;
  double t5249;
  double t5264;
  double t5372;
  double t5392;
  double t5397;
  double t5794;
  double t5807;
  double t5808;
  double t5818;
  double t5825;
  double t5828;
  double t5442;
  double t5443;
  double t5447;
  double t5512;
  double t5518;
  double t5525;
  double t5843;
  double t5844;
  double t5849;
  double t5860;
  double t5871;
  double t5875;
  double t5547;
  double t5548;
  double t5553;
  double t5885;
  double t5887;
  double t5894;
  double t5916;
  double t5918;
  double t5930;
  double t5971;
  double t5981;
  double t5982;
  double t5990;
  double t5997;
  double t5998;
  double t6030;
  double t6031;
  double t6033;
  double t6038;
  double t6045;
  double t6049;
  double t6058;
  double t6059;
  double t6064;
  double t6071;
  double t6084;
  double t6089;
  double t6094;
  double t6095;
  double t6098;
  double t6101;
  double t6109;
  double t6110;
  double t6117;
  double t6118;
  double t6121;
  double t6125;
  double t6127;
  double t6129;
  double t6144;
  double t6145;
  double t6146;
  t750 = Cos(var1[3]);
  t2056 = Cos(var1[5]);
  t2241 = Sin(var1[3]);
  t2096 = Sin(var1[4]);
  t2283 = Sin(var1[5]);
  t1259 = Cos(var1[14]);
  t1405 = -1.*t1259;
  t1523 = 1. + t1405;
  t1540 = Sin(var1[14]);
  t1792 = Sin(var1[13]);
  t2164 = t750*t2056*t2096;
  t2311 = t2241*t2283;
  t2450 = t2164 + t2311;
  t2574 = Cos(var1[13]);
  t2790 = -1.*t2056*t2241;
  t2851 = t750*t2096*t2283;
  t2857 = t2790 + t2851;
  t1242 = Cos(var1[4]);
  t3089 = t1792*t2450;
  t3126 = t2574*t2857;
  t3159 = t3089 + t3126;
  t3285 = Cos(var1[15]);
  t3353 = -1.*t3285;
  t3422 = 1. + t3353;
  t3445 = Sin(var1[15]);
  t3612 = t2574*t2450;
  t3717 = -1.*t1792*t2857;
  t3765 = t3612 + t3717;
  t4249 = t1259*t750*t1242;
  t4294 = t1540*t3159;
  t4367 = t4249 + t4294;
  t4429 = Cos(var1[16]);
  t4451 = -1.*t4429;
  t4464 = 1. + t4451;
  t4503 = Sin(var1[16]);
  t4647 = t3445*t3765;
  t4741 = t3285*t4367;
  t4744 = t4647 + t4741;
  t4792 = t3285*t3765;
  t4819 = -1.*t3445*t4367;
  t4834 = t4792 + t4819;
  t4882 = Cos(var1[17]);
  t4902 = -1.*t4882;
  t4915 = 1. + t4902;
  t4959 = Sin(var1[17]);
  t5106 = -1.*t4503*t4744;
  t5129 = t4429*t4834;
  t5183 = t5106 + t5129;
  t5279 = t4429*t4744;
  t5300 = t4503*t4834;
  t5306 = t5279 + t5300;
  t5340 = Cos(var1[18]);
  t5353 = -1.*t5340;
  t5362 = 1. + t5353;
  t5382 = Sin(var1[18]);
  t5410 = t4959*t5183;
  t5415 = t4882*t5306;
  t5421 = t5410 + t5415;
  t5453 = t4882*t5183;
  t5469 = -1.*t4959*t5306;
  t5478 = t5453 + t5469;
  t5496 = Cos(var1[19]);
  t5507 = -1.*t5496;
  t5510 = 1. + t5507;
  t5515 = Sin(var1[19]);
  t5526 = -1.*t5382*t5421;
  t5529 = t5340*t5478;
  t5530 = t5526 + t5529;
  t5555 = t5340*t5421;
  t5559 = t5382*t5478;
  t5562 = t5555 + t5559;
  t1530 = -0.049*t1523;
  t1583 = -0.135*t1540;
  t1677 = 0. + t1530 + t1583;
  t1990 = 0.135*t1792;
  t2044 = 0. + t1990;
  t2605 = -1.*t2574;
  t2712 = 1. + t2605;
  t2714 = -0.135*t2712;
  t2766 = 0. + t2714;
  t2924 = -0.135*t1523;
  t2936 = 0.049*t1540;
  t2946 = 0. + t2924 + t2936;
  t5635 = t2056*t2241*t2096;
  t5638 = -1.*t750*t2283;
  t5645 = t5635 + t5638;
  t5649 = t750*t2056;
  t5651 = t2241*t2096*t2283;
  t5656 = t5649 + t5651;
  t3427 = -0.09*t3422;
  t3513 = 0.049*t3445;
  t3529 = 0. + t3427 + t3513;
  t5660 = t1792*t5645;
  t5661 = t2574*t5656;
  t5662 = t5660 + t5661;
  t4056 = -0.049*t3422;
  t4073 = -0.09*t3445;
  t4100 = 0. + t4056 + t4073;
  t4469 = -0.049*t4464;
  t4560 = -0.21*t4503;
  t4616 = 0. + t4469 + t4560;
  t5677 = t2574*t5645;
  t5681 = -1.*t1792*t5656;
  t5688 = t5677 + t5681;
  t5737 = t1259*t1242*t2241;
  t5739 = t1540*t5662;
  t5741 = t5737 + t5739;
  t4757 = -0.21*t4464;
  t4759 = 0.049*t4503;
  t4775 = 0. + t4757 + t4759;
  t4945 = -0.2707*t4915;
  t5015 = 0.0016*t4959;
  t5055 = 0. + t4945 + t5015;
  t5753 = t3445*t5688;
  t5762 = t3285*t5741;
  t5763 = t5753 + t5762;
  t5773 = t3285*t5688;
  t5779 = -1.*t3445*t5741;
  t5788 = t5773 + t5779;
  t5239 = -0.0016*t4915;
  t5249 = -0.2707*t4959;
  t5264 = 0. + t5239 + t5249;
  t5372 = 0.0184*t5362;
  t5392 = -0.7055*t5382;
  t5397 = 0. + t5372 + t5392;
  t5794 = -1.*t4503*t5763;
  t5807 = t4429*t5788;
  t5808 = t5794 + t5807;
  t5818 = t4429*t5763;
  t5825 = t4503*t5788;
  t5828 = t5818 + t5825;
  t5442 = -0.7055*t5362;
  t5443 = -0.0184*t5382;
  t5447 = 0. + t5442 + t5443;
  t5512 = -1.1135*t5510;
  t5518 = 0.0216*t5515;
  t5525 = 0. + t5512 + t5518;
  t5843 = t4959*t5808;
  t5844 = t4882*t5828;
  t5849 = t5843 + t5844;
  t5860 = t4882*t5808;
  t5871 = -1.*t4959*t5828;
  t5875 = t5860 + t5871;
  t5547 = -0.0216*t5510;
  t5548 = -1.1135*t5515;
  t5553 = 0. + t5547 + t5548;
  t5885 = -1.*t5382*t5849;
  t5887 = t5340*t5875;
  t5894 = t5885 + t5887;
  t5916 = t5340*t5849;
  t5918 = t5382*t5875;
  t5930 = t5916 + t5918;
  t5971 = t1242*t2056*t1792;
  t5981 = t2574*t1242*t2283;
  t5982 = t5971 + t5981;
  t5990 = t2574*t1242*t2056;
  t5997 = -1.*t1242*t1792*t2283;
  t5998 = t5990 + t5997;
  t6030 = -1.*t1259*t2096;
  t6031 = t1540*t5982;
  t6033 = t6030 + t6031;
  t6038 = t3445*t5998;
  t6045 = t3285*t6033;
  t6049 = t6038 + t6045;
  t6058 = t3285*t5998;
  t6059 = -1.*t3445*t6033;
  t6064 = t6058 + t6059;
  t6071 = -1.*t4503*t6049;
  t6084 = t4429*t6064;
  t6089 = t6071 + t6084;
  t6094 = t4429*t6049;
  t6095 = t4503*t6064;
  t6098 = t6094 + t6095;
  t6101 = t4959*t6089;
  t6109 = t4882*t6098;
  t6110 = t6101 + t6109;
  t6117 = t4882*t6089;
  t6118 = -1.*t4959*t6098;
  t6121 = t6117 + t6118;
  t6125 = -1.*t5382*t6110;
  t6127 = t5340*t6121;
  t6129 = t6125 + t6127;
  t6144 = t5340*t6110;
  t6145 = t5382*t6121;
  t6146 = t6144 + t6145;
  p_output1[0]=0. + t2044*t2450 + t2766*t2857 + t2946*t3159 + t3529*t3765 + t4100*t4367 + t4616*t4744 + t4775*t4834 + t5055*t5183 + t5264*t5306 + t5397*t5421 + t5447*t5478 + t5525*t5530 + t5553*t5562 - 0.027251*(t5515*t5530 + t5496*t5562) - 1.200144*(t5496*t5530 - 1.*t5515*t5562) + t1242*t1677*t750 - 0.1305*(t1259*t3159 - 1.*t1242*t1540*t750) + var1[0];
  p_output1[1]=0. + t1242*t1677*t2241 + t2044*t5645 + t2766*t5656 + t2946*t5662 - 0.1305*(-1.*t1242*t1540*t2241 + t1259*t5662) + t3529*t5688 + t4100*t5741 + t4616*t5763 + t4775*t5788 + t5055*t5808 + t5264*t5828 + t5397*t5849 + t5447*t5875 + t5525*t5894 + t5553*t5930 - 0.027251*(t5515*t5894 + t5496*t5930) - 1.200144*(t5496*t5894 - 1.*t5515*t5930) + var1[1];
  p_output1[2]=0. + t1242*t2044*t2056 - 1.*t1677*t2096 + t1242*t2283*t2766 + t2946*t5982 - 0.1305*(t1540*t2096 + t1259*t5982) + t3529*t5998 + t4100*t6033 + t4616*t6049 + t4775*t6064 + t5055*t6089 + t5264*t6098 + t5397*t6110 + t5447*t6121 + t5525*t6129 + t5553*t6146 - 0.027251*(t5515*t6129 + t5496*t6146) - 1.200144*(t5496*t6129 - 1.*t5515*t6146) + var1[2];
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

#include "p_RightToeBack_mex.hh"

namespace SymExpression
{

void p_RightToeBack_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
