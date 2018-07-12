/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:37:13 GMT-04:00
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
  double t263;
  double t460;
  double t264;
  double t279;
  double t464;
  double t791;
  double t363;
  double t491;
  double t562;
  double t231;
  double t805;
  double t875;
  double t1010;
  double t1412;
  double t604;
  double t1177;
  double t1296;
  double t78;
  double t1437;
  double t1457;
  double t1470;
  double t1600;
  double t1299;
  double t1490;
  double t1492;
  double t68;
  double t1610;
  double t1621;
  double t1634;
  double t1895;
  double t1781;
  double t1845;
  double t1883;
  double t1973;
  double t1985;
  double t2065;
  double t2072;
  double t2090;
  double t2001;
  double t2142;
  double t2144;
  double t2161;
  double t2191;
  double t2213;
  double t2148;
  double t2217;
  double t2272;
  double t2327;
  double t2350;
  double t2357;
  double t2317;
  double t2367;
  double t2373;
  double t2378;
  double t2385;
  double t2396;
  double t1502;
  double t1636;
  double t1691;
  double t1708;
  double t1711;
  double t1725;
  double t2374;
  double t2409;
  double t2415;
  double t2440;
  double t2443;
  double t2565;
  double t2770;
  double t2779;
  double t2800;
  double t2834;
  double t2876;
  double t2892;
  double t2822;
  double t2903;
  double t3003;
  double t3059;
  double t3125;
  double t3154;
  double t3013;
  double t3205;
  double t3206;
  double t3280;
  double t3285;
  double t3314;
  double t3226;
  double t3328;
  double t3406;
  double t3479;
  double t3529;
  double t3579;
  double t2644;
  double t2646;
  double t2670;
  double t2419;
  double t2592;
  double t2602;
  double t3416;
  double t3592;
  double t3594;
  double t3602;
  double t3616;
  double t3630;
  double t1692;
  double t1730;
  double t1731;
  double t2689;
  double t2691;
  double t2720;
  double t2620;
  double t2743;
  double t60;
  double t3798;
  double t3827;
  double t3864;
  double t3601;
  double t3652;
  double t3671;
  double t3776;
  double t3791;
  double t3792;
  double t3796;
  double t3872;
  double t3918;
  double t3952;
  double t3953;
  double t3966;
  double t3978;
  double t3988;
  double t3993;
  double t67;
  double t4188;
  double t4088;
  double t5309;
  double t5353;
  double t5270;
  double t5447;
  double t5473;
  double t5530;
  double t5341;
  double t5367;
  double t5398;
  double t5541;
  double t5222;
  double t5709;
  double t5806;
  double t5865;
  double t5406;
  double t5555;
  double t5589;
  double t5943;
  double t5122;
  double t6088;
  double t6110;
  double t6125;
  double t5648;
  double t5996;
  double t6025;
  double t6144;
  double t5111;
  double t6260;
  double t6300;
  double t6342;
  double t6031;
  double t6175;
  double t6180;
  double t6362;
  double t2765;
  double t6702;
  double t6750;
  double t6758;
  double t6677;
  double t6679;
  double t6695;
  double t6804;
  double t6813;
  double t6814;
  double t6696;
  double t6765;
  double t6769;
  double t6931;
  double t6958;
  double t6971;
  double t6795;
  double t6820;
  double t6907;
  double t7005;
  double t7018;
  double t7027;
  double t6914;
  double t6990;
  double t6997;
  double t4130;
  double t4148;
  double t4151;
  double t7303;
  double t7323;
  double t7350;
  double t7207;
  double t7237;
  double t7261;
  double t7406;
  double t7411;
  double t7424;
  double t7295;
  double t7374;
  double t7391;
  double t7464;
  double t7529;
  double t7629;
  double t7393;
  double t7446;
  double t7452;
  double t4231;
  double t4244;
  double t4279;
  double t6252;
  double t6365;
  double t6410;
  double t6456;
  double t6508;
  double t6537;
  double t6579;
  double t6612;
  double t6635;
  double t4304;
  double t4311;
  double t4326;
  double t7461;
  double t7669;
  double t7671;
  double t7678;
  double t7679;
  double t7682;
  double t7719;
  double t7724;
  double t7725;
  double t4356;
  double t4378;
  double t4398;
  double t7001;
  double t7057;
  double t7066;
  double t7071;
  double t7079;
  double t7087;
  double t7115;
  double t7187;
  double t7190;
  double t4479;
  double t4494;
  double t4549;
  double t4685;
  double t4794;
  double t4868;
  double t4876;
  double t4918;
  double t4948;
  double t5014;
  double t7906;
  double t7917;
  double t7922;
  double t8007;
  double t8046;
  double t8070;
  double t7959;
  double t7964;
  double t7979;
  t263 = Cos(var1[1]);
  t460 = Cos(var1[3]);
  t264 = Cos(var1[2]);
  t279 = Sin(var1[3]);
  t464 = Sin(var1[2]);
  t791 = Cos(var1[4]);
  t363 = -1.*t263*t264*t279;
  t491 = -1.*t460*t263*t464;
  t562 = t363 + t491;
  t231 = Sin(var1[4]);
  t805 = t460*t263*t264;
  t875 = -1.*t263*t279*t464;
  t1010 = t805 + t875;
  t1412 = Cos(var1[5]);
  t604 = t231*t562;
  t1177 = t791*t1010;
  t1296 = t604 + t1177;
  t78 = Sin(var1[5]);
  t1437 = t791*t562;
  t1457 = -1.*t231*t1010;
  t1470 = t1437 + t1457;
  t1600 = Cos(var1[6]);
  t1299 = -1.*t78*t1296;
  t1490 = t1412*t1470;
  t1492 = t1299 + t1490;
  t68 = Sin(var1[6]);
  t1610 = t1412*t1296;
  t1621 = t78*t1470;
  t1634 = t1610 + t1621;
  t1895 = Sin(var1[0]);
  t1781 = Cos(var1[0]);
  t1845 = Sin(var1[1]);
  t1883 = t1781*t264*t1845;
  t1973 = -1.*t1895*t464;
  t1985 = t1883 + t1973;
  t2065 = -1.*t264*t1895;
  t2072 = -1.*t1781*t1845*t464;
  t2090 = t2065 + t2072;
  t2001 = -1.*t279*t1985;
  t2142 = t460*t2090;
  t2144 = t2001 + t2142;
  t2161 = t460*t1985;
  t2191 = t279*t2090;
  t2213 = t2161 + t2191;
  t2148 = t231*t2144;
  t2217 = t791*t2213;
  t2272 = t2148 + t2217;
  t2327 = t791*t2144;
  t2350 = -1.*t231*t2213;
  t2357 = t2327 + t2350;
  t2317 = -1.*t78*t2272;
  t2367 = t1412*t2357;
  t2373 = t2317 + t2367;
  t2378 = t1412*t2272;
  t2385 = t78*t2357;
  t2396 = t2378 + t2385;
  t1502 = t68*t1492;
  t1636 = t1600*t1634;
  t1691 = t1502 + t1636;
  t1708 = t1600*t1492;
  t1711 = -1.*t68*t1634;
  t1725 = t1708 + t1711;
  t2374 = t68*t2373;
  t2409 = t1600*t2396;
  t2415 = t2374 + t2409;
  t2440 = t1600*t2373;
  t2443 = -1.*t68*t2396;
  t2565 = t2440 + t2443;
  t2770 = t264*t1895*t1845;
  t2779 = t1781*t464;
  t2800 = t2770 + t2779;
  t2834 = t1781*t264;
  t2876 = -1.*t1895*t1845*t464;
  t2892 = t2834 + t2876;
  t2822 = -1.*t279*t2800;
  t2903 = t460*t2892;
  t3003 = t2822 + t2903;
  t3059 = t460*t2800;
  t3125 = t279*t2892;
  t3154 = t3059 + t3125;
  t3013 = t231*t3003;
  t3205 = t791*t3154;
  t3206 = t3013 + t3205;
  t3280 = t791*t3003;
  t3285 = -1.*t231*t3154;
  t3314 = t3280 + t3285;
  t3226 = -1.*t78*t3206;
  t3328 = t1412*t3314;
  t3406 = t3226 + t3328;
  t3479 = t1412*t3206;
  t3529 = t78*t3314;
  t3579 = t3479 + t3529;
  t2644 = -0.766044*t1691;
  t2646 = 0.642788*t1725;
  t2670 = t2644 + t2646;
  t2419 = -0.766044*t2415;
  t2592 = 0.642788*t2565;
  t2602 = t2419 + t2592;
  t3416 = t68*t3406;
  t3592 = t1600*t3579;
  t3594 = t3416 + t3592;
  t3602 = t1600*t3406;
  t3616 = -1.*t68*t3579;
  t3630 = t3602 + t3616;
  t1692 = 0.642788*t1691;
  t1730 = 0.766044*t1725;
  t1731 = t1692 + t1730;
  t2689 = 0.642788*t2415;
  t2691 = 0.766044*t2565;
  t2720 = t2689 + t2691;
  t2620 = t1731*t2602;
  t2743 = -1.*t2670*t2720;
  t60 = Cos(var1[8]);
  t3798 = -0.766044*t3594;
  t3827 = 0.642788*t3630;
  t3864 = t3798 + t3827;
  t3601 = 0.642788*t3594;
  t3652 = 0.766044*t3630;
  t3671 = t3601 + t3652;
  t3776 = t1781*t263*t2670;
  t3791 = t1845*t2602;
  t3792 = t3776 + t3791;
  t3796 = -1.*t3671*t3792;
  t3872 = t1781*t263*t1731;
  t3918 = t1845*t2720;
  t3952 = t3872 + t3918;
  t3953 = t3864*t3952;
  t3966 = t2620 + t2743;
  t3978 = -1.*t263*t1895*t3966;
  t3988 = 0. + t3796 + t3953 + t3978;
  t3993 = 1/t3988;
  t67 = Sin(var1[7]);
  t4188 = Sin(var1[8]);
  t4088 = Cos(var1[7]);
  t5309 = Cos(var1[9]);
  t5353 = Sin(var1[9]);
  t5270 = Cos(var1[10]);
  t5447 = t4088*t5309;
  t5473 = -1.*t67*t4188*t5353;
  t5530 = t5447 + t5473;
  t5341 = t5309*t67*t4188;
  t5367 = t4088*t5353;
  t5398 = t5341 + t5367;
  t5541 = Sin(var1[10]);
  t5222 = Cos(var1[11]);
  t5709 = t5270*t5530;
  t5806 = -1.*t5398*t5541;
  t5865 = t5709 + t5806;
  t5406 = t5270*t5398;
  t5555 = t5530*t5541;
  t5589 = t5406 + t5555;
  t5943 = Sin(var1[11]);
  t5122 = Cos(var1[12]);
  t6088 = t5222*t5865;
  t6110 = -1.*t5589*t5943;
  t6125 = t6088 + t6110;
  t5648 = t5222*t5589;
  t5996 = t5865*t5943;
  t6025 = t5648 + t5996;
  t6144 = Sin(var1[12]);
  t5111 = Cos(var1[13]);
  t6260 = t5122*t6125;
  t6300 = -1.*t6025*t6144;
  t6342 = t6260 + t6300;
  t6031 = t5122*t6025;
  t6175 = t6125*t6144;
  t6180 = t6031 + t6175;
  t6362 = Sin(var1[13]);
  t2765 = 0. + t2620 + t2743;
  t6702 = -1.*t5309*t67;
  t6750 = -1.*t4088*t4188*t5353;
  t6758 = t6702 + t6750;
  t6677 = t4088*t5309*t4188;
  t6679 = -1.*t67*t5353;
  t6695 = t6677 + t6679;
  t6804 = t5270*t6758;
  t6813 = -1.*t6695*t5541;
  t6814 = t6804 + t6813;
  t6696 = t5270*t6695;
  t6765 = t6758*t5541;
  t6769 = t6696 + t6765;
  t6931 = t5222*t6814;
  t6958 = -1.*t6769*t5943;
  t6971 = t6931 + t6958;
  t6795 = t5222*t6769;
  t6820 = t6814*t5943;
  t6907 = t6795 + t6820;
  t7005 = t5122*t6971;
  t7018 = -1.*t6907*t6144;
  t7027 = t7005 + t7018;
  t6914 = t5122*t6907;
  t6990 = t6971*t6144;
  t6997 = t6914 + t6990;
  t4130 = -1.*t1731*t3864;
  t4148 = t2670*t3671;
  t4151 = 0. + t4130 + t4148;
  t7303 = -1.*t60*t5270*t5353;
  t7323 = -1.*t60*t5309*t5541;
  t7350 = t7303 + t7323;
  t7207 = t60*t5309*t5270;
  t7237 = -1.*t60*t5353*t5541;
  t7261 = t7207 + t7237;
  t7406 = t5222*t7350;
  t7411 = -1.*t7261*t5943;
  t7424 = t7406 + t7411;
  t7295 = t5222*t7261;
  t7374 = t7350*t5943;
  t7391 = t7295 + t7374;
  t7464 = t5122*t7424;
  t7529 = -1.*t7391*t6144;
  t7629 = t7464 + t7529;
  t7393 = t5122*t7391;
  t7446 = t7424*t6144;
  t7452 = t7393 + t7446;
  t4231 = t2720*t3864;
  t4244 = -1.*t2602*t3671;
  t4279 = 0. + t4231 + t4244;
  t6252 = t5111*t6180;
  t6365 = t6342*t6362;
  t6410 = t6252 + t6365;
  t6456 = 0.642788*t6410;
  t6508 = t5111*t6342;
  t6537 = -1.*t6180*t6362;
  t6579 = t6508 + t6537;
  t6612 = 0.766044*t6579;
  t6635 = t6456 + t6612;
  t4304 = -1.*t1781*t263*t2670;
  t4311 = -1.*t1845*t2602;
  t4326 = 0. + t4304 + t4311;
  t7461 = t5111*t7452;
  t7669 = t7629*t6362;
  t7671 = t7461 + t7669;
  t7678 = 0.642788*t7671;
  t7679 = t5111*t7629;
  t7682 = -1.*t7452*t6362;
  t7719 = t7679 + t7682;
  t7724 = 0.766044*t7719;
  t7725 = t7678 + t7724;
  t4356 = -1.*t263*t1895*t2602;
  t4378 = t1781*t263*t3864;
  t4398 = 0. + t4356 + t4378;
  t7001 = t5111*t6997;
  t7057 = t7027*t6362;
  t7066 = t7001 + t7057;
  t7071 = 0.642788*t7066;
  t7079 = t5111*t7027;
  t7087 = -1.*t6997*t6362;
  t7115 = t7079 + t7087;
  t7187 = 0.766044*t7115;
  t7190 = t7071 + t7187;
  t4479 = t263*t1895*t2670;
  t4494 = t1845*t3864;
  t4549 = 0. + t4479 + t4494;
  t4685 = 0. + t3872 + t3918;
  t4794 = t263*t1895*t2720;
  t4868 = -1.*t1781*t263*t3671;
  t4876 = 0. + t4794 + t4868;
  t4918 = -1.*t263*t1895*t1731;
  t4948 = -1.*t1845*t3671;
  t5014 = 0. + t4918 + t4948;
  t7906 = -0.766044*t6410;
  t7917 = 0.642788*t6579;
  t7922 = t7906 + t7917;
  t8007 = -0.766044*t7671;
  t8046 = 0.642788*t7719;
  t8070 = t8007 + t8046;
  t7959 = -0.766044*t7066;
  t7964 = 0.642788*t7115;
  t7979 = t7959 + t7964;
  p_output1[0]=0. + t3993*t4188*t4279 - 1.*t3993*t4088*t4151*t60 - 1.*t2765*t3993*t60*t67;
  p_output1[1]=0. + t3993*t4188*t4398 - 1.*t3993*t4088*t4549*t60 - 1.*t3993*t4326*t60*t67;
  p_output1[2]=0. + t3993*t4188*t4876 - 1.*t3993*t4088*t5014*t60 - 1.*t3993*t4685*t60*t67;
  p_output1[3]=0. + t2765*t3993*t6635 + t3993*t4151*t7190 + t3993*t4279*t7725;
  p_output1[4]=0. + t3993*t4326*t6635 + t3993*t4549*t7190 + t3993*t4398*t7725;
  p_output1[5]=0. + t3993*t4685*t6635 + t3993*t5014*t7190 + t3993*t4876*t7725;
  p_output1[6]=0. + t2765*t3993*t7922 + t3993*t4151*t7979 + t3993*t4279*t8070;
  p_output1[7]=0. + t3993*t4326*t7922 + t3993*t4549*t7979 + t3993*t4398*t8070;
  p_output1[8]=0. + t3993*t4685*t7922 + t3993*t5014*t7979 + t3993*t4876*t8070;
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

#include "R_LeftToeBottom_to_RightToeBottom_mex.hh"

namespace SymExpression
{

void R_LeftToeBottom_to_RightToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
