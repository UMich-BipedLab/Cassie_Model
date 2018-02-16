/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:17:58 GMT-05:00
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
  double t518;
  double t675;
  double t625;
  double t628;
  double t715;
  double t801;
  double t636;
  double t719;
  double t760;
  double t477;
  double t807;
  double t825;
  double t864;
  double t942;
  double t769;
  double t871;
  double t876;
  double t471;
  double t952;
  double t980;
  double t989;
  double t1124;
  double t892;
  double t1036;
  double t1079;
  double t444;
  double t1139;
  double t1142;
  double t1188;
  double t1546;
  double t1525;
  double t1534;
  double t1539;
  double t1549;
  double t1559;
  double t1659;
  double t1690;
  double t1708;
  double t1587;
  double t1717;
  double t1723;
  double t1743;
  double t1754;
  double t1770;
  double t1731;
  double t1792;
  double t1811;
  double t1832;
  double t1903;
  double t1907;
  double t1828;
  double t1913;
  double t1914;
  double t1999;
  double t2006;
  double t2061;
  double t1101;
  double t1208;
  double t1263;
  double t1292;
  double t1308;
  double t1341;
  double t1992;
  double t2068;
  double t2071;
  double t2164;
  double t2169;
  double t2228;
  double t2415;
  double t2416;
  double t2425;
  double t2497;
  double t2499;
  double t2505;
  double t2445;
  double t2509;
  double t2510;
  double t2565;
  double t2573;
  double t2591;
  double t2522;
  double t2613;
  double t2633;
  double t2656;
  double t2659;
  double t2681;
  double t2654;
  double t2705;
  double t2727;
  double t2772;
  double t2835;
  double t2881;
  double t2284;
  double t2290;
  double t2302;
  double t2147;
  double t2273;
  double t2274;
  double t2768;
  double t2882;
  double t2887;
  double t2941;
  double t2957;
  double t2974;
  double t1272;
  double t1403;
  double t1517;
  double t2317;
  double t2325;
  double t2348;
  double t2283;
  double t2374;
  double t313;
  double t3218;
  double t3237;
  double t3246;
  double t2903;
  double t3027;
  double t3060;
  double t3096;
  double t3136;
  double t3168;
  double t3214;
  double t3249;
  double t3257;
  double t3317;
  double t3386;
  double t3411;
  double t3457;
  double t3533;
  double t3543;
  double t393;
  double t3792;
  double t3675;
  double t4670;
  double t4691;
  double t4643;
  double t4844;
  double t4845;
  double t4847;
  double t4680;
  double t4747;
  double t4755;
  double t4870;
  double t4605;
  double t4917;
  double t4930;
  double t4956;
  double t4803;
  double t4881;
  double t4896;
  double t4960;
  double t4597;
  double t5030;
  double t5068;
  double t5075;
  double t4903;
  double t4983;
  double t5006;
  double t5086;
  double t4594;
  double t5136;
  double t5141;
  double t5152;
  double t5013;
  double t5091;
  double t5123;
  double t5180;
  double t2407;
  double t5279;
  double t5280;
  double t5295;
  double t5229;
  double t5243;
  double t5246;
  double t5316;
  double t5331;
  double t5346;
  double t5272;
  double t5303;
  double t5305;
  double t5377;
  double t5386;
  double t5393;
  double t5312;
  double t5359;
  double t5366;
  double t5430;
  double t5435;
  double t5436;
  double t5372;
  double t5408;
  double t5417;
  double t3677;
  double t3686;
  double t3748;
  double t5587;
  double t5592;
  double t5598;
  double t5539;
  double t5559;
  double t5567;
  double t5621;
  double t5622;
  double t5625;
  double t5568;
  double t5604;
  double t5610;
  double t5642;
  double t5647;
  double t5652;
  double t5612;
  double t5626;
  double t5634;
  double t3799;
  double t3845;
  double t3860;
  double t5124;
  double t5183;
  double t5184;
  double t5194;
  double t5195;
  double t5205;
  double t5210;
  double t5213;
  double t5214;
  double t3952;
  double t3964;
  double t4014;
  double t5636;
  double t5658;
  double t5662;
  double t5664;
  double t5670;
  double t5687;
  double t5698;
  double t5699;
  double t5716;
  double t4060;
  double t4083;
  double t4171;
  double t5421;
  double t5447;
  double t5456;
  double t5465;
  double t5481;
  double t5485;
  double t5487;
  double t5501;
  double t5517;
  double t4264;
  double t4323;
  double t4328;
  double t4421;
  double t4440;
  double t4453;
  double t4471;
  double t4496;
  double t4498;
  double t4547;
  double t5872;
  double t5878;
  double t5880;
  double t5942;
  double t5952;
  double t5957;
  double t5887;
  double t5909;
  double t5910;
  t518 = Cos(var1[1]);
  t675 = Cos(var1[3]);
  t625 = Cos(var1[2]);
  t628 = Sin(var1[3]);
  t715 = Sin(var1[2]);
  t801 = Cos(var1[4]);
  t636 = -1.*t518*t625*t628;
  t719 = -1.*t675*t518*t715;
  t760 = t636 + t719;
  t477 = Sin(var1[4]);
  t807 = t675*t518*t625;
  t825 = -1.*t518*t628*t715;
  t864 = t807 + t825;
  t942 = Cos(var1[5]);
  t769 = t477*t760;
  t871 = t801*t864;
  t876 = t769 + t871;
  t471 = Sin(var1[5]);
  t952 = t801*t760;
  t980 = -1.*t477*t864;
  t989 = t952 + t980;
  t1124 = Cos(var1[6]);
  t892 = -1.*t471*t876;
  t1036 = t942*t989;
  t1079 = t892 + t1036;
  t444 = Sin(var1[6]);
  t1139 = t942*t876;
  t1142 = t471*t989;
  t1188 = t1139 + t1142;
  t1546 = Sin(var1[0]);
  t1525 = Cos(var1[0]);
  t1534 = Sin(var1[1]);
  t1539 = t1525*t625*t1534;
  t1549 = -1.*t1546*t715;
  t1559 = t1539 + t1549;
  t1659 = -1.*t625*t1546;
  t1690 = -1.*t1525*t1534*t715;
  t1708 = t1659 + t1690;
  t1587 = -1.*t628*t1559;
  t1717 = t675*t1708;
  t1723 = t1587 + t1717;
  t1743 = t675*t1559;
  t1754 = t628*t1708;
  t1770 = t1743 + t1754;
  t1731 = t477*t1723;
  t1792 = t801*t1770;
  t1811 = t1731 + t1792;
  t1832 = t801*t1723;
  t1903 = -1.*t477*t1770;
  t1907 = t1832 + t1903;
  t1828 = -1.*t471*t1811;
  t1913 = t942*t1907;
  t1914 = t1828 + t1913;
  t1999 = t942*t1811;
  t2006 = t471*t1907;
  t2061 = t1999 + t2006;
  t1101 = t444*t1079;
  t1208 = t1124*t1188;
  t1263 = t1101 + t1208;
  t1292 = t1124*t1079;
  t1308 = -1.*t444*t1188;
  t1341 = t1292 + t1308;
  t1992 = t444*t1914;
  t2068 = t1124*t2061;
  t2071 = t1992 + t2068;
  t2164 = t1124*t1914;
  t2169 = -1.*t444*t2061;
  t2228 = t2164 + t2169;
  t2415 = t625*t1546*t1534;
  t2416 = t1525*t715;
  t2425 = t2415 + t2416;
  t2497 = t1525*t625;
  t2499 = -1.*t1546*t1534*t715;
  t2505 = t2497 + t2499;
  t2445 = -1.*t628*t2425;
  t2509 = t675*t2505;
  t2510 = t2445 + t2509;
  t2565 = t675*t2425;
  t2573 = t628*t2505;
  t2591 = t2565 + t2573;
  t2522 = t477*t2510;
  t2613 = t801*t2591;
  t2633 = t2522 + t2613;
  t2656 = t801*t2510;
  t2659 = -1.*t477*t2591;
  t2681 = t2656 + t2659;
  t2654 = -1.*t471*t2633;
  t2705 = t942*t2681;
  t2727 = t2654 + t2705;
  t2772 = t942*t2633;
  t2835 = t471*t2681;
  t2881 = t2772 + t2835;
  t2284 = -0.766044*t1263;
  t2290 = 0.642788*t1341;
  t2302 = t2284 + t2290;
  t2147 = -0.766044*t2071;
  t2273 = 0.642788*t2228;
  t2274 = t2147 + t2273;
  t2768 = t444*t2727;
  t2882 = t1124*t2881;
  t2887 = t2768 + t2882;
  t2941 = t1124*t2727;
  t2957 = -1.*t444*t2881;
  t2974 = t2941 + t2957;
  t1272 = 0.642788*t1263;
  t1403 = 0.766044*t1341;
  t1517 = t1272 + t1403;
  t2317 = 0.642788*t2071;
  t2325 = 0.766044*t2228;
  t2348 = t2317 + t2325;
  t2283 = t1517*t2274;
  t2374 = -1.*t2302*t2348;
  t313 = Cos(var1[8]);
  t3218 = -0.766044*t2887;
  t3237 = 0.642788*t2974;
  t3246 = t3218 + t3237;
  t2903 = 0.642788*t2887;
  t3027 = 0.766044*t2974;
  t3060 = t2903 + t3027;
  t3096 = t1525*t518*t2302;
  t3136 = t1534*t2274;
  t3168 = t3096 + t3136;
  t3214 = -1.*t3060*t3168;
  t3249 = t1525*t518*t1517;
  t3257 = t1534*t2348;
  t3317 = t3249 + t3257;
  t3386 = t3246*t3317;
  t3411 = t2283 + t2374;
  t3457 = -1.*t518*t1546*t3411;
  t3533 = 0. + t3214 + t3386 + t3457;
  t3543 = 1/t3533;
  t393 = Sin(var1[7]);
  t3792 = Sin(var1[8]);
  t3675 = Cos(var1[7]);
  t4670 = Cos(var1[9]);
  t4691 = Sin(var1[9]);
  t4643 = Cos(var1[10]);
  t4844 = t3675*t4670;
  t4845 = -1.*t393*t3792*t4691;
  t4847 = t4844 + t4845;
  t4680 = t4670*t393*t3792;
  t4747 = t3675*t4691;
  t4755 = t4680 + t4747;
  t4870 = Sin(var1[10]);
  t4605 = Cos(var1[11]);
  t4917 = t4643*t4847;
  t4930 = -1.*t4755*t4870;
  t4956 = t4917 + t4930;
  t4803 = t4643*t4755;
  t4881 = t4847*t4870;
  t4896 = t4803 + t4881;
  t4960 = Sin(var1[11]);
  t4597 = Cos(var1[12]);
  t5030 = t4605*t4956;
  t5068 = -1.*t4896*t4960;
  t5075 = t5030 + t5068;
  t4903 = t4605*t4896;
  t4983 = t4956*t4960;
  t5006 = t4903 + t4983;
  t5086 = Sin(var1[12]);
  t4594 = Cos(var1[13]);
  t5136 = t4597*t5075;
  t5141 = -1.*t5006*t5086;
  t5152 = t5136 + t5141;
  t5013 = t4597*t5006;
  t5091 = t5075*t5086;
  t5123 = t5013 + t5091;
  t5180 = Sin(var1[13]);
  t2407 = 0. + t2283 + t2374;
  t5279 = -1.*t4670*t393;
  t5280 = -1.*t3675*t3792*t4691;
  t5295 = t5279 + t5280;
  t5229 = t3675*t4670*t3792;
  t5243 = -1.*t393*t4691;
  t5246 = t5229 + t5243;
  t5316 = t4643*t5295;
  t5331 = -1.*t5246*t4870;
  t5346 = t5316 + t5331;
  t5272 = t4643*t5246;
  t5303 = t5295*t4870;
  t5305 = t5272 + t5303;
  t5377 = t4605*t5346;
  t5386 = -1.*t5305*t4960;
  t5393 = t5377 + t5386;
  t5312 = t4605*t5305;
  t5359 = t5346*t4960;
  t5366 = t5312 + t5359;
  t5430 = t4597*t5393;
  t5435 = -1.*t5366*t5086;
  t5436 = t5430 + t5435;
  t5372 = t4597*t5366;
  t5408 = t5393*t5086;
  t5417 = t5372 + t5408;
  t3677 = -1.*t1517*t3246;
  t3686 = t2302*t3060;
  t3748 = 0. + t3677 + t3686;
  t5587 = -1.*t313*t4643*t4691;
  t5592 = -1.*t313*t4670*t4870;
  t5598 = t5587 + t5592;
  t5539 = t313*t4670*t4643;
  t5559 = -1.*t313*t4691*t4870;
  t5567 = t5539 + t5559;
  t5621 = t4605*t5598;
  t5622 = -1.*t5567*t4960;
  t5625 = t5621 + t5622;
  t5568 = t4605*t5567;
  t5604 = t5598*t4960;
  t5610 = t5568 + t5604;
  t5642 = t4597*t5625;
  t5647 = -1.*t5610*t5086;
  t5652 = t5642 + t5647;
  t5612 = t4597*t5610;
  t5626 = t5625*t5086;
  t5634 = t5612 + t5626;
  t3799 = t2348*t3246;
  t3845 = -1.*t2274*t3060;
  t3860 = 0. + t3799 + t3845;
  t5124 = t4594*t5123;
  t5183 = t5152*t5180;
  t5184 = t5124 + t5183;
  t5194 = 0.642788*t5184;
  t5195 = t4594*t5152;
  t5205 = -1.*t5123*t5180;
  t5210 = t5195 + t5205;
  t5213 = 0.766044*t5210;
  t5214 = t5194 + t5213;
  t3952 = -1.*t1525*t518*t2302;
  t3964 = -1.*t1534*t2274;
  t4014 = 0. + t3952 + t3964;
  t5636 = t4594*t5634;
  t5658 = t5652*t5180;
  t5662 = t5636 + t5658;
  t5664 = 0.642788*t5662;
  t5670 = t4594*t5652;
  t5687 = -1.*t5634*t5180;
  t5698 = t5670 + t5687;
  t5699 = 0.766044*t5698;
  t5716 = t5664 + t5699;
  t4060 = -1.*t518*t1546*t2274;
  t4083 = t1525*t518*t3246;
  t4171 = 0. + t4060 + t4083;
  t5421 = t4594*t5417;
  t5447 = t5436*t5180;
  t5456 = t5421 + t5447;
  t5465 = 0.642788*t5456;
  t5481 = t4594*t5436;
  t5485 = -1.*t5417*t5180;
  t5487 = t5481 + t5485;
  t5501 = 0.766044*t5487;
  t5517 = t5465 + t5501;
  t4264 = t518*t1546*t2302;
  t4323 = t1534*t3246;
  t4328 = 0. + t4264 + t4323;
  t4421 = 0. + t3249 + t3257;
  t4440 = t518*t1546*t2348;
  t4453 = -1.*t1525*t518*t3060;
  t4471 = 0. + t4440 + t4453;
  t4496 = -1.*t518*t1546*t1517;
  t4498 = -1.*t1534*t3060;
  t4547 = 0. + t4496 + t4498;
  t5872 = -0.766044*t5184;
  t5878 = 0.642788*t5210;
  t5880 = t5872 + t5878;
  t5942 = -0.766044*t5662;
  t5952 = 0.642788*t5698;
  t5957 = t5942 + t5952;
  t5887 = -0.766044*t5456;
  t5909 = 0.642788*t5487;
  t5910 = t5887 + t5909;
  p_output1[0]=0. - 1.*t313*t3543*t3675*t3748 + t3543*t3792*t3860 - 1.*t2407*t313*t3543*t393;
  p_output1[1]=0. - 1.*t313*t3543*t393*t4014 + t3543*t3792*t4171 - 1.*t313*t3543*t3675*t4328;
  p_output1[2]=0. - 1.*t313*t3543*t393*t4421 + t3543*t3792*t4471 - 1.*t313*t3543*t3675*t4547;
  p_output1[3]=0. + t2407*t3543*t5214 + t3543*t3748*t5517 + t3543*t3860*t5716;
  p_output1[4]=0. + t3543*t4014*t5214 + t3543*t4328*t5517 + t3543*t4171*t5716;
  p_output1[5]=0. + t3543*t4421*t5214 + t3543*t4547*t5517 + t3543*t4471*t5716;
  p_output1[6]=0. + t2407*t3543*t5880 + t3543*t3748*t5910 + t3543*t3860*t5957;
  p_output1[7]=0. + t3543*t4014*t5880 + t3543*t4328*t5910 + t3543*t4171*t5957;
  p_output1[8]=0. + t3543*t4421*t5880 + t3543*t4547*t5910 + t3543*t4471*t5957;
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
