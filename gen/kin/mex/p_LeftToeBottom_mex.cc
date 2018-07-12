/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:33:57 GMT-04:00
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
  double t3816;
  double t3631;
  double t4046;
  double t3649;
  double t4130;
  double t413;
  double t3752;
  double t4156;
  double t4166;
  double t4587;
  double t4825;
  double t4882;
  double t4883;
  double t5234;
  double t5236;
  double t5238;
  double t5253;
  double t5222;
  double t5226;
  double t5232;
  double t5270;
  double t5358;
  double t5362;
  double t5374;
  double t5377;
  double t5349;
  double t5352;
  double t5354;
  double t5394;
  double t5395;
  double t5398;
  double t5445;
  double t5449;
  double t5453;
  double t5465;
  double t5474;
  double t5478;
  double t5480;
  double t5523;
  double t5532;
  double t5538;
  double t5568;
  double t5574;
  double t5577;
  double t5613;
  double t5625;
  double t5627;
  double t5644;
  double t5676;
  double t5688;
  double t5707;
  double t5722;
  double t5731;
  double t5733;
  double t5774;
  double t5789;
  double t5794;
  double t5795;
  double t5814;
  double t5821;
  double t5826;
  double t5840;
  double t5844;
  double t5854;
  double t5862;
  double t5886;
  double t5887;
  double t5900;
  double t5960;
  double t5962;
  double t5980;
  double t655;
  double t2318;
  double t2966;
  double t3280;
  double t5183;
  double t5213;
  double t6034;
  double t6039;
  double t6053;
  double t6058;
  double t6072;
  double t6081;
  double t5240;
  double t5254;
  double t5255;
  double t5278;
  double t5287;
  double t5293;
  double t6094;
  double t6103;
  double t6108;
  double t5376;
  double t5382;
  double t5391;
  double t5401;
  double t5406;
  double t5429;
  double t5458;
  double t5467;
  double t5472;
  double t6169;
  double t6171;
  double t6175;
  double t6197;
  double t6199;
  double t6208;
  double t5489;
  double t5498;
  double t5508;
  double t5603;
  double t5616;
  double t5618;
  double t6214;
  double t6223;
  double t6236;
  double t6258;
  double t6264;
  double t6273;
  double t5657;
  double t5658;
  double t5661;
  double t5747;
  double t5778;
  double t5788;
  double t6285;
  double t6287;
  double t6288;
  double t6302;
  double t6307;
  double t6311;
  double t5807;
  double t5808;
  double t5812;
  double t5856;
  double t5879;
  double t5882;
  double t6323;
  double t6336;
  double t6339;
  double t6352;
  double t6359;
  double t6361;
  double t5922;
  double t5935;
  double t5943;
  double t6372;
  double t6373;
  double t6383;
  double t6386;
  double t6396;
  double t6431;
  double t6520;
  double t6530;
  double t6531;
  double t6582;
  double t6586;
  double t6613;
  double t6677;
  double t6702;
  double t6748;
  double t6771;
  double t6788;
  double t6806;
  double t6809;
  double t6824;
  double t6836;
  double t6849;
  double t6858;
  double t6865;
  double t6898;
  double t6905;
  double t6910;
  double t6917;
  double t6934;
  double t6936;
  double t6966;
  double t6968;
  double t6972;
  double t6989;
  double t6996;
  double t7011;
  double t7016;
  double t7020;
  double t7022;
  t3816 = Cos(var1[3]);
  t3631 = Cos(var1[5]);
  t4046 = Sin(var1[4]);
  t3649 = Sin(var1[3]);
  t4130 = Sin(var1[5]);
  t413 = Cos(var1[6]);
  t3752 = -1.*t3631*t3649;
  t4156 = t3816*t4046*t4130;
  t4166 = t3752 + t4156;
  t4587 = t3816*t3631*t4046;
  t4825 = t3649*t4130;
  t4882 = t4587 + t4825;
  t4883 = Sin(var1[6]);
  t5234 = Cos(var1[7]);
  t5236 = -1.*t5234;
  t5238 = 1. + t5236;
  t5253 = Sin(var1[7]);
  t5222 = t413*t4166;
  t5226 = t4882*t4883;
  t5232 = t5222 + t5226;
  t5270 = Cos(var1[4]);
  t5358 = Cos(var1[8]);
  t5362 = -1.*t5358;
  t5374 = 1. + t5362;
  t5377 = Sin(var1[8]);
  t5349 = t3816*t5270*t5234;
  t5352 = t5232*t5253;
  t5354 = t5349 + t5352;
  t5394 = t413*t4882;
  t5395 = -1.*t4166*t4883;
  t5398 = t5394 + t5395;
  t5445 = Cos(var1[9]);
  t5449 = -1.*t5445;
  t5453 = 1. + t5449;
  t5465 = Sin(var1[9]);
  t5474 = t5358*t5354;
  t5478 = t5398*t5377;
  t5480 = t5474 + t5478;
  t5523 = t5358*t5398;
  t5532 = -1.*t5354*t5377;
  t5538 = t5523 + t5532;
  t5568 = Cos(var1[10]);
  t5574 = -1.*t5568;
  t5577 = 1. + t5574;
  t5613 = Sin(var1[10]);
  t5625 = -1.*t5465*t5480;
  t5627 = t5445*t5538;
  t5644 = t5625 + t5627;
  t5676 = t5445*t5480;
  t5688 = t5465*t5538;
  t5707 = t5676 + t5688;
  t5722 = Cos(var1[11]);
  t5731 = -1.*t5722;
  t5733 = 1. + t5731;
  t5774 = Sin(var1[11]);
  t5789 = t5613*t5644;
  t5794 = t5568*t5707;
  t5795 = t5789 + t5794;
  t5814 = t5568*t5644;
  t5821 = -1.*t5613*t5707;
  t5826 = t5814 + t5821;
  t5840 = Cos(var1[12]);
  t5844 = -1.*t5840;
  t5854 = 1. + t5844;
  t5862 = Sin(var1[12]);
  t5886 = -1.*t5774*t5795;
  t5887 = t5722*t5826;
  t5900 = t5886 + t5887;
  t5960 = t5722*t5795;
  t5962 = t5774*t5826;
  t5980 = t5960 + t5962;
  t655 = -1.*t413;
  t2318 = 1. + t655;
  t2966 = 0.135*t2318;
  t3280 = 0. + t2966;
  t5183 = -0.135*t4883;
  t5213 = 0. + t5183;
  t6034 = t3816*t3631;
  t6039 = t3649*t4046*t4130;
  t6053 = t6034 + t6039;
  t6058 = t3631*t3649*t4046;
  t6072 = -1.*t3816*t4130;
  t6081 = t6058 + t6072;
  t5240 = 0.135*t5238;
  t5254 = 0.049*t5253;
  t5255 = 0. + t5240 + t5254;
  t5278 = -0.049*t5238;
  t5287 = 0.135*t5253;
  t5293 = 0. + t5278 + t5287;
  t6094 = t413*t6053;
  t6103 = t6081*t4883;
  t6108 = t6094 + t6103;
  t5376 = -0.049*t5374;
  t5382 = -0.09*t5377;
  t5391 = 0. + t5376 + t5382;
  t5401 = -0.09*t5374;
  t5406 = 0.049*t5377;
  t5429 = 0. + t5401 + t5406;
  t5458 = -0.049*t5453;
  t5467 = -0.21*t5465;
  t5472 = 0. + t5458 + t5467;
  t6169 = t5270*t5234*t3649;
  t6171 = t6108*t5253;
  t6175 = t6169 + t6171;
  t6197 = t413*t6081;
  t6199 = -1.*t6053*t4883;
  t6208 = t6197 + t6199;
  t5489 = -0.21*t5453;
  t5498 = 0.049*t5465;
  t5508 = 0. + t5489 + t5498;
  t5603 = -0.2707*t5577;
  t5616 = 0.0016*t5613;
  t5618 = 0. + t5603 + t5616;
  t6214 = t5358*t6175;
  t6223 = t6208*t5377;
  t6236 = t6214 + t6223;
  t6258 = t5358*t6208;
  t6264 = -1.*t6175*t5377;
  t6273 = t6258 + t6264;
  t5657 = -0.0016*t5577;
  t5658 = -0.2707*t5613;
  t5661 = 0. + t5657 + t5658;
  t5747 = 0.0184*t5733;
  t5778 = -0.7055*t5774;
  t5788 = 0. + t5747 + t5778;
  t6285 = -1.*t5465*t6236;
  t6287 = t5445*t6273;
  t6288 = t6285 + t6287;
  t6302 = t5445*t6236;
  t6307 = t5465*t6273;
  t6311 = t6302 + t6307;
  t5807 = -0.7055*t5733;
  t5808 = -0.0184*t5774;
  t5812 = 0. + t5807 + t5808;
  t5856 = -1.1135*t5854;
  t5879 = 0.0216*t5862;
  t5882 = 0. + t5856 + t5879;
  t6323 = t5613*t6288;
  t6336 = t5568*t6311;
  t6339 = t6323 + t6336;
  t6352 = t5568*t6288;
  t6359 = -1.*t5613*t6311;
  t6361 = t6352 + t6359;
  t5922 = -0.0216*t5854;
  t5935 = -1.1135*t5862;
  t5943 = 0. + t5922 + t5935;
  t6372 = -1.*t5774*t6339;
  t6373 = t5722*t6361;
  t6383 = t6372 + t6373;
  t6386 = t5722*t6339;
  t6396 = t5774*t6361;
  t6431 = t6386 + t6396;
  t6520 = t5270*t413*t4130;
  t6530 = t5270*t3631*t4883;
  t6531 = t6520 + t6530;
  t6582 = -1.*t5234*t4046;
  t6586 = t6531*t5253;
  t6613 = t6582 + t6586;
  t6677 = t5270*t3631*t413;
  t6702 = -1.*t5270*t4130*t4883;
  t6748 = t6677 + t6702;
  t6771 = t5358*t6613;
  t6788 = t6748*t5377;
  t6806 = t6771 + t6788;
  t6809 = t5358*t6748;
  t6824 = -1.*t6613*t5377;
  t6836 = t6809 + t6824;
  t6849 = -1.*t5465*t6806;
  t6858 = t5445*t6836;
  t6865 = t6849 + t6858;
  t6898 = t5445*t6806;
  t6905 = t5465*t6836;
  t6910 = t6898 + t6905;
  t6917 = t5613*t6865;
  t6934 = t5568*t6910;
  t6936 = t6917 + t6934;
  t6966 = t5568*t6865;
  t6968 = -1.*t5613*t6910;
  t6972 = t6966 + t6968;
  t6989 = -1.*t5774*t6936;
  t6996 = t5722*t6972;
  t7011 = t6989 + t6996;
  t7016 = t5722*t6936;
  t7020 = t5774*t6972;
  t7022 = t7016 + t7020;
  p_output1[0]=0. + t3280*t4166 + t4882*t5213 + t5232*t5255 + 0.1305*(t5232*t5234 - 1.*t3816*t5253*t5270) + t3816*t5270*t5293 + t5354*t5391 + t5398*t5429 + t5472*t5480 + t5508*t5538 + t5618*t5644 + t5661*t5707 + t5788*t5795 + t5812*t5826 + t5882*t5900 + t5943*t5980 + 0.0306*(t5862*t5900 + t5840*t5980) - 1.1312*(t5840*t5900 - 1.*t5862*t5980) + var1[0];
  p_output1[1]=0. + t3649*t5270*t5293 + t3280*t6053 + t5213*t6081 + t5255*t6108 + 0.1305*(-1.*t3649*t5253*t5270 + t5234*t6108) + t5391*t6175 + t5429*t6208 + t5472*t6236 + t5508*t6273 + t5618*t6288 + t5661*t6311 + t5788*t6339 + t5812*t6361 + t5882*t6383 + t5943*t6431 + 0.0306*(t5862*t6383 + t5840*t6431) - 1.1312*(t5840*t6383 - 1.*t5862*t6431) + var1[1];
  p_output1[2]=0. + t3280*t4130*t5270 + t3631*t5213*t5270 - 1.*t4046*t5293 + t5255*t6531 + 0.1305*(t4046*t5253 + t5234*t6531) + t5391*t6613 + t5429*t6748 + t5472*t6806 + t5508*t6836 + t5618*t6865 + t5661*t6910 + t5788*t6936 + t5812*t6972 + t5882*t7011 + t5943*t7022 + 0.0306*(t5862*t7011 + t5840*t7022) - 1.1312*(t5840*t7011 - 1.*t5862*t7022) + var1[2];
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
