/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:17:49 GMT-05:00
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
  double t498;
  double t541;
  double t579;
  double t528;
  double t618;
  double t490;
  double t736;
  double t770;
  double t836;
  double t543;
  double t677;
  double t722;
  double t848;
  double t405;
  double t996;
  double t1092;
  double t1134;
  double t724;
  double t885;
  double t902;
  double t1269;
  double t399;
  double t1374;
  double t1411;
  double t1453;
  double t964;
  double t1306;
  double t1320;
  double t1461;
  double t1748;
  double t1682;
  double t1688;
  double t1817;
  double t1823;
  double t1839;
  double t1724;
  double t1769;
  double t1806;
  double t1892;
  double t1904;
  double t1918;
  double t1807;
  double t1853;
  double t1876;
  double t1956;
  double t1960;
  double t1968;
  double t1887;
  double t1943;
  double t1944;
  double t2166;
  double t2218;
  double t2297;
  double t1955;
  double t1969;
  double t2069;
  double t1328;
  double t1462;
  double t1466;
  double t1480;
  double t1526;
  double t1531;
  double t2137;
  double t2334;
  double t2383;
  double t2453;
  double t2484;
  double t2492;
  double t2658;
  double t2741;
  double t2744;
  double t2608;
  double t2637;
  double t2645;
  double t2955;
  double t2964;
  double t2966;
  double t2835;
  double t2860;
  double t2914;
  double t3115;
  double t3138;
  double t3199;
  double t2921;
  double t3047;
  double t3105;
  double t3252;
  double t3298;
  double t3372;
  double t3108;
  double t3215;
  double t3229;
  double t3432;
  double t3436;
  double t3463;
  double t3237;
  double t3398;
  double t3417;
  double t2400;
  double t2557;
  double t2579;
  double t1475;
  double t1577;
  double t1613;
  double t3426;
  double t3473;
  double t3493;
  double t3551;
  double t3584;
  double t3587;
  double t3505;
  double t3596;
  double t3600;
  double t3851;
  double t3888;
  double t3912;
  double t217;
  double t4044;
  double t4103;
  double t2834;
  double t3633;
  double t3667;
  double t3797;
  double t3834;
  double t3958;
  double t4002;
  double t4040;
  double t4239;
  double t4268;
  double t4270;
  double t4271;
  double t105;
  double t4398;
  double t4610;
  double t4476;
  double t4530;
  double t4587;
  double t5827;
  double t5643;
  double t5718;
  double t5833;
  double t5899;
  double t5763;
  double t5839;
  double t5870;
  double t5586;
  double t5980;
  double t5983;
  double t5997;
  double t6057;
  double t5876;
  double t5999;
  double t6002;
  double t5525;
  double t6165;
  double t6195;
  double t6300;
  double t6479;
  double t6048;
  double t6325;
  double t6367;
  double t5499;
  double t6539;
  double t6579;
  double t6591;
  double t2584;
  double t2775;
  double t2831;
  double t6902;
  double t6918;
  double t6950;
  double t6981;
  double t6982;
  double t6990;
  double t6965;
  double t7005;
  double t7025;
  double t7291;
  double t7326;
  double t7333;
  double t7263;
  double t7335;
  double t7353;
  double t7510;
  double t7550;
  double t7576;
  double t7413;
  double t7578;
  double t7664;
  double t7694;
  double t7712;
  double t7726;
  double t4329;
  double t8063;
  double t8106;
  double t8158;
  double t8192;
  double t8220;
  double t8231;
  double t8175;
  double t8232;
  double t8264;
  double t8278;
  double t8284;
  double t8285;
  double t8270;
  double t8306;
  double t8312;
  double t8320;
  double t8337;
  double t8343;
  double t8314;
  double t8347;
  double t8365;
  double t8384;
  double t8407;
  double t8408;
  double t5048;
  double t5052;
  double t5057;
  double t6441;
  double t6650;
  double t6667;
  double t6737;
  double t6767;
  double t6785;
  double t6797;
  double t6825;
  double t6831;
  double t4736;
  double t4750;
  double t4894;
  double t7666;
  double t7774;
  double t7846;
  double t7848;
  double t7849;
  double t7901;
  double t7902;
  double t7932;
  double t7960;
  double t4955;
  double t4985;
  double t5023;
  double t8367;
  double t8409;
  double t8410;
  double t8415;
  double t8416;
  double t8423;
  double t8427;
  double t8431;
  double t8441;
  double t5390;
  double t5416;
  double t5418;
  double t5169;
  double t5192;
  double t5199;
  double t5284;
  double t8477;
  double t8480;
  double t8483;
  double t8489;
  double t8492;
  double t8493;
  double t8500;
  double t8501;
  double t8502;
  t498 = Cos(var1[8]);
  t541 = Cos(var1[10]);
  t579 = Sin(var1[9]);
  t528 = Cos(var1[9]);
  t618 = Sin(var1[10]);
  t490 = Cos(var1[11]);
  t736 = -1.*t498*t541*t579;
  t770 = -1.*t498*t528*t618;
  t836 = t736 + t770;
  t543 = t498*t528*t541;
  t677 = -1.*t498*t579*t618;
  t722 = t543 + t677;
  t848 = Sin(var1[11]);
  t405 = Cos(var1[12]);
  t996 = t490*t836;
  t1092 = -1.*t722*t848;
  t1134 = t996 + t1092;
  t724 = t490*t722;
  t885 = t836*t848;
  t902 = t724 + t885;
  t1269 = Sin(var1[12]);
  t399 = Cos(var1[13]);
  t1374 = t405*t1134;
  t1411 = -1.*t902*t1269;
  t1453 = t1374 + t1411;
  t964 = t405*t902;
  t1306 = t1134*t1269;
  t1320 = t964 + t1306;
  t1461 = Sin(var1[13]);
  t1748 = Cos(var1[7]);
  t1682 = Sin(var1[7]);
  t1688 = Sin(var1[8]);
  t1817 = t1748*t528;
  t1823 = -1.*t1682*t1688*t579;
  t1839 = t1817 + t1823;
  t1724 = t528*t1682*t1688;
  t1769 = t1748*t579;
  t1806 = t1724 + t1769;
  t1892 = t541*t1839;
  t1904 = -1.*t1806*t618;
  t1918 = t1892 + t1904;
  t1807 = t541*t1806;
  t1853 = t1839*t618;
  t1876 = t1807 + t1853;
  t1956 = t490*t1918;
  t1960 = -1.*t1876*t848;
  t1968 = t1956 + t1960;
  t1887 = t490*t1876;
  t1943 = t1918*t848;
  t1944 = t1887 + t1943;
  t2166 = t405*t1968;
  t2218 = -1.*t1944*t1269;
  t2297 = t2166 + t2218;
  t1955 = t405*t1944;
  t1969 = t1968*t1269;
  t2069 = t1955 + t1969;
  t1328 = t399*t1320;
  t1462 = t1453*t1461;
  t1466 = t1328 + t1462;
  t1480 = t399*t1453;
  t1526 = -1.*t1320*t1461;
  t1531 = t1480 + t1526;
  t2137 = t399*t2069;
  t2334 = t2297*t1461;
  t2383 = t2137 + t2334;
  t2453 = t399*t2297;
  t2484 = -1.*t2069*t1461;
  t2492 = t2453 + t2484;
  t2658 = 0.642788*t2383;
  t2741 = 0.766044*t2492;
  t2744 = t2658 + t2741;
  t2608 = -0.766044*t1466;
  t2637 = 0.642788*t1531;
  t2645 = t2608 + t2637;
  t2955 = -1.*t528*t1682;
  t2964 = -1.*t1748*t1688*t579;
  t2966 = t2955 + t2964;
  t2835 = t1748*t528*t1688;
  t2860 = -1.*t1682*t579;
  t2914 = t2835 + t2860;
  t3115 = t541*t2966;
  t3138 = -1.*t2914*t618;
  t3199 = t3115 + t3138;
  t2921 = t541*t2914;
  t3047 = t2966*t618;
  t3105 = t2921 + t3047;
  t3252 = t490*t3199;
  t3298 = -1.*t3105*t848;
  t3372 = t3252 + t3298;
  t3108 = t490*t3105;
  t3215 = t3199*t848;
  t3229 = t3108 + t3215;
  t3432 = t405*t3372;
  t3436 = -1.*t3229*t1269;
  t3463 = t3432 + t3436;
  t3237 = t405*t3229;
  t3398 = t3372*t1269;
  t3417 = t3237 + t3398;
  t2400 = -0.766044*t2383;
  t2557 = 0.642788*t2492;
  t2579 = t2400 + t2557;
  t1475 = 0.642788*t1466;
  t1577 = 0.766044*t1531;
  t1613 = t1475 + t1577;
  t3426 = t399*t3417;
  t3473 = t3463*t1461;
  t3493 = t3426 + t3473;
  t3551 = t399*t3463;
  t3584 = -1.*t3417*t1461;
  t3587 = t3551 + t3584;
  t3505 = -0.766044*t3493;
  t3596 = 0.642788*t3587;
  t3600 = t3505 + t3596;
  t3851 = 0.642788*t3493;
  t3888 = 0.766044*t3587;
  t3912 = t3851 + t3888;
  t217 = Cos(var1[1]);
  t4044 = t1613*t3600;
  t4103 = -1.*t2645*t3912;
  t2834 = t1748*t498*t2645;
  t3633 = t1688*t3600;
  t3667 = t2834 + t3633;
  t3797 = -1.*t2744*t3667;
  t3834 = t1748*t498*t1613;
  t3958 = t1688*t3912;
  t4002 = t3834 + t3958;
  t4040 = t2579*t4002;
  t4239 = t4044 + t4103;
  t4268 = -1.*t498*t1682*t4239;
  t4270 = 0. + t3797 + t4040 + t4268;
  t4271 = 1/t4270;
  t105 = Cos(var1[0]);
  t4398 = Sin(var1[0]);
  t4610 = Sin(var1[1]);
  t4476 = t3912*t2579;
  t4530 = -1.*t3600*t2744;
  t4587 = 0. + t4476 + t4530;
  t5827 = Cos(var1[3]);
  t5643 = Cos(var1[2]);
  t5718 = Sin(var1[3]);
  t5833 = Sin(var1[2]);
  t5899 = Cos(var1[4]);
  t5763 = -1.*t217*t5643*t5718;
  t5839 = -1.*t5827*t217*t5833;
  t5870 = t5763 + t5839;
  t5586 = Sin(var1[4]);
  t5980 = t5827*t217*t5643;
  t5983 = -1.*t217*t5718*t5833;
  t5997 = t5980 + t5983;
  t6057 = Cos(var1[5]);
  t5876 = t5586*t5870;
  t5999 = t5899*t5997;
  t6002 = t5876 + t5999;
  t5525 = Sin(var1[5]);
  t6165 = t5899*t5870;
  t6195 = -1.*t5586*t5997;
  t6300 = t6165 + t6195;
  t6479 = Cos(var1[6]);
  t6048 = -1.*t5525*t6002;
  t6325 = t6057*t6300;
  t6367 = t6048 + t6325;
  t5499 = Sin(var1[6]);
  t6539 = t6057*t6002;
  t6579 = t5525*t6300;
  t6591 = t6539 + t6579;
  t2584 = -1.*t1613*t2579;
  t2775 = t2645*t2744;
  t2831 = 0. + t2584 + t2775;
  t6902 = t105*t5643*t4610;
  t6918 = -1.*t4398*t5833;
  t6950 = t6902 + t6918;
  t6981 = -1.*t5643*t4398;
  t6982 = -1.*t105*t4610*t5833;
  t6990 = t6981 + t6982;
  t6965 = -1.*t5718*t6950;
  t7005 = t5827*t6990;
  t7025 = t6965 + t7005;
  t7291 = t5827*t6950;
  t7326 = t5718*t6990;
  t7333 = t7291 + t7326;
  t7263 = t5586*t7025;
  t7335 = t5899*t7333;
  t7353 = t7263 + t7335;
  t7510 = t5899*t7025;
  t7550 = -1.*t5586*t7333;
  t7576 = t7510 + t7550;
  t7413 = -1.*t5525*t7353;
  t7578 = t6057*t7576;
  t7664 = t7413 + t7578;
  t7694 = t6057*t7353;
  t7712 = t5525*t7576;
  t7726 = t7694 + t7712;
  t4329 = 0. + t4044 + t4103;
  t8063 = t5643*t4398*t4610;
  t8106 = t105*t5833;
  t8158 = t8063 + t8106;
  t8192 = t105*t5643;
  t8220 = -1.*t4398*t4610*t5833;
  t8231 = t8192 + t8220;
  t8175 = -1.*t5718*t8158;
  t8232 = t5827*t8231;
  t8264 = t8175 + t8232;
  t8278 = t5827*t8158;
  t8284 = t5718*t8231;
  t8285 = t8278 + t8284;
  t8270 = t5586*t8264;
  t8306 = t5899*t8285;
  t8312 = t8270 + t8306;
  t8320 = t5899*t8264;
  t8337 = -1.*t5586*t8285;
  t8343 = t8320 + t8337;
  t8314 = -1.*t5525*t8312;
  t8347 = t6057*t8343;
  t8365 = t8314 + t8347;
  t8384 = t6057*t8312;
  t8407 = t5525*t8343;
  t8408 = t8384 + t8407;
  t5048 = -1.*t498*t1682*t3600;
  t5052 = t1748*t498*t2579;
  t5057 = 0. + t5048 + t5052;
  t6441 = t5499*t6367;
  t6650 = t6479*t6591;
  t6667 = t6441 + t6650;
  t6737 = 0.642788*t6667;
  t6767 = t6479*t6367;
  t6785 = -1.*t5499*t6591;
  t6797 = t6767 + t6785;
  t6825 = 0.766044*t6797;
  t6831 = t6737 + t6825;
  t4736 = t498*t1682*t2645;
  t4750 = t1688*t2579;
  t4894 = 0. + t4736 + t4750;
  t7666 = t5499*t7664;
  t7774 = t6479*t7726;
  t7846 = t7666 + t7774;
  t7848 = 0.642788*t7846;
  t7849 = t6479*t7664;
  t7901 = -1.*t5499*t7726;
  t7902 = t7849 + t7901;
  t7932 = 0.766044*t7902;
  t7960 = t7848 + t7932;
  t4955 = -1.*t1748*t498*t2645;
  t4985 = -1.*t1688*t3600;
  t5023 = 0. + t4955 + t4985;
  t8367 = t5499*t8365;
  t8409 = t6479*t8408;
  t8410 = t8367 + t8409;
  t8415 = 0.642788*t8410;
  t8416 = t6479*t8365;
  t8423 = -1.*t5499*t8408;
  t8427 = t8416 + t8423;
  t8431 = 0.766044*t8427;
  t8441 = t8415 + t8431;
  t5390 = t498*t1682*t3912;
  t5416 = -1.*t1748*t498*t2744;
  t5418 = 0. + t5390 + t5416;
  t5169 = -1.*t498*t1682*t1613;
  t5192 = -1.*t1688*t2744;
  t5199 = 0. + t5169 + t5192;
  t5284 = 0. + t3834 + t3958;
  t8477 = -0.766044*t6667;
  t8480 = 0.642788*t6797;
  t8483 = t8477 + t8480;
  t8489 = -0.766044*t7846;
  t8492 = 0.642788*t7902;
  t8493 = t8489 + t8492;
  t8500 = -0.766044*t8410;
  t8501 = 0.642788*t8427;
  t8502 = t8500 + t8501;
  p_output1[0]=0. - 1.*t105*t217*t2831*t4271 - 1.*t217*t4271*t4329*t4398 + t4271*t4587*t4610;
  p_output1[1]=0. - 1.*t105*t217*t4271*t4894 - 1.*t217*t4271*t4398*t5023 + t4271*t4610*t5057;
  p_output1[2]=0. - 1.*t105*t217*t4271*t5199 - 1.*t217*t4271*t4398*t5284 + t4271*t4610*t5418;
  p_output1[3]=0. + t4271*t4587*t6831 + t2831*t4271*t7960 + t4271*t4329*t8441;
  p_output1[4]=0. + t4271*t5057*t6831 + t4271*t4894*t7960 + t4271*t5023*t8441;
  p_output1[5]=0. + t4271*t5418*t6831 + t4271*t5199*t7960 + t4271*t5284*t8441;
  p_output1[6]=0. + t4271*t4587*t8483 + t2831*t4271*t8493 + t4271*t4329*t8502;
  p_output1[7]=0. + t4271*t5057*t8483 + t4271*t4894*t8493 + t4271*t5023*t8502;
  p_output1[8]=0. + t4271*t5418*t8483 + t4271*t5199*t8493 + t4271*t5284*t8502;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "R_RightToeBottom_to_LeftToeBottom_mex.hh"

namespace SymExpression
{

void R_RightToeBottom_to_LeftToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
