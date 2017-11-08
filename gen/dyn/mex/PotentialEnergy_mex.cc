/*
 * Automatically Generated from Mathematica.
 * Tue 7 Nov 2017 23:05:31 GMT-05:00
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
  double t7;
  double t8;
  double t21;
  double t27;
  double t51;
  double t65;
  double t34;
  double t35;
  double t36;
  double t52;
  double t53;
  double t59;
  double t61;
  double t66;
  double t105;
  double t109;
  double t110;
  double t118;
  double t71;
  double t72;
  double t74;
  double t84;
  double t87;
  double t91;
  double t112;
  double t121;
  double t124;
  double t127;
  double t130;
  double t138;
  double t140;
  double t144;
  double t148;
  double t152;
  double t156;
  double t178;
  double t179;
  double t180;
  double t187;
  double t161;
  double t163;
  double t164;
  double t185;
  double t189;
  double t192;
  double t193;
  double t204;
  double t208;
  double t217;
  double t218;
  double t223;
  double t224;
  double t227;
  double t283;
  double t286;
  double t290;
  double t297;
  double t252;
  double t256;
  double t260;
  double t293;
  double t298;
  double t308;
  double t309;
  double t310;
  double t314;
  double t319;
  double t322;
  double t329;
  double t330;
  double t332;
  double t352;
  double t358;
  double t359;
  double t366;
  double t338;
  double t340;
  double t341;
  double t364;
  double t368;
  double t369;
  double t374;
  double t377;
  double t379;
  double t381;
  double t382;
  double t385;
  double t387;
  double t388;
  double t412;
  double t414;
  double t417;
  double t424;
  double t392;
  double t395;
  double t400;
  double t423;
  double t429;
  double t431;
  double t433;
  double t437;
  double t438;
  double t439;
  double t442;
  double t448;
  double t449;
  double t450;
  double t484;
  double t487;
  double t493;
  double t499;
  double t454;
  double t458;
  double t463;
  double t41;
  double t533;
  double t552;
  double t536;
  double t544;
  double t545;
  double t546;
  double t549;
  double t556;
  double t559;
  double t560;
  double t571;
  double t574;
  double t575;
  double t564;
  double t566;
  double t567;
  double t585;
  double t586;
  double t590;
  double t593;
  double t591;
  double t598;
  double t600;
  double t602;
  double t604;
  double t611;
  double t614;
  double t616;
  double t619;
  double t634;
  double t636;
  double t640;
  double t643;
  double t650;
  double t665;
  double t667;
  double t672;
  double t676;
  double t675;
  double t680;
  double t685;
  double t688;
  double t691;
  double t696;
  double t700;
  double t705;
  double t708;
  double t712;
  double t715;
  double t737;
  double t738;
  double t740;
  double t744;
  double t725;
  double t728;
  double t729;
  double t743;
  double t749;
  double t750;
  double t766;
  double t768;
  double t769;
  double t776;
  double t777;
  double t781;
  double t782;
  double t785;
  double t808;
  double t812;
  double t814;
  double t820;
  double t792;
  double t793;
  double t795;
  double t817;
  double t821;
  double t822;
  double t826;
  double t828;
  double t830;
  double t832;
  double t834;
  double t836;
  double t846;
  double t847;
  double t872;
  double t873;
  double t876;
  double t879;
  double t853;
  double t855;
  double t857;
  double t877;
  double t881;
  double t892;
  double t895;
  double t907;
  double t908;
  double t910;
  double t912;
  double t915;
  double t921;
  double t922;
  double t951;
  double t952;
  double t953;
  double t965;
  double t925;
  double t929;
  double t937;
  t7 = Cos(var1[4]);
  t8 = Cos(var1[5]);
  t21 = Sin(var1[4]);
  t27 = Sin(var1[13]);
  t51 = Cos(var1[13]);
  t65 = Sin(var1[5]);
  t34 = 0.135*t27;
  t35 = 0. + t34;
  t36 = t7*t8*t35;
  t52 = -1.*t51;
  t53 = 1. + t52;
  t59 = -0.135*t53;
  t61 = 0. + t59;
  t66 = t61*t7*t65;
  t105 = Cos(var1[14]);
  t109 = -1.*t105;
  t110 = 1. + t109;
  t118 = Sin(var1[14]);
  t71 = t7*t8*t27;
  t72 = t51*t7*t65;
  t74 = t71 + t72;
  t84 = t51*t7*t8;
  t87 = -1.*t7*t27*t65;
  t91 = t84 + t87;
  t112 = -0.049*t110;
  t121 = -0.135*t118;
  t124 = 0. + t112 + t121;
  t127 = -1.*t124*t21;
  t130 = -0.135*t110;
  t138 = 0.049*t118;
  t140 = 0. + t130 + t138;
  t144 = t140*t74;
  t148 = t118*t21;
  t152 = t105*t74;
  t156 = t148 + t152;
  t178 = Cos(var1[15]);
  t179 = -1.*t178;
  t180 = 1. + t179;
  t187 = Sin(var1[15]);
  t161 = -1.*t105*t21;
  t163 = t118*t74;
  t164 = t161 + t163;
  t185 = -0.09*t180;
  t189 = 0.049*t187;
  t192 = 0. + t185 + t189;
  t193 = t192*t91;
  t204 = -0.049*t180;
  t208 = -0.09*t187;
  t217 = 0. + t204 + t208;
  t218 = t217*t164;
  t223 = t187*t91;
  t224 = t178*t164;
  t227 = t223 + t224;
  t283 = Cos(var1[16]);
  t286 = -1.*t283;
  t290 = 1. + t286;
  t297 = Sin(var1[16]);
  t252 = t178*t91;
  t256 = -1.*t187*t164;
  t260 = t252 + t256;
  t293 = -0.049*t290;
  t298 = -0.21*t297;
  t308 = 0. + t293 + t298;
  t309 = t308*t227;
  t310 = -0.21*t290;
  t314 = 0.049*t297;
  t319 = 0. + t310 + t314;
  t322 = t319*t260;
  t329 = -1.*t297*t227;
  t330 = t283*t260;
  t332 = t329 + t330;
  t352 = Cos(var1[17]);
  t358 = -1.*t352;
  t359 = 1. + t358;
  t366 = Sin(var1[17]);
  t338 = t283*t227;
  t340 = t297*t260;
  t341 = t338 + t340;
  t364 = -0.2707*t359;
  t368 = 0.0016*t366;
  t369 = 0. + t364 + t368;
  t374 = t369*t332;
  t377 = -0.0016*t359;
  t379 = -0.2707*t366;
  t381 = 0. + t377 + t379;
  t382 = t381*t341;
  t385 = t366*t332;
  t387 = t352*t341;
  t388 = t385 + t387;
  t412 = Cos(var1[18]);
  t414 = -1.*t412;
  t417 = 1. + t414;
  t424 = Sin(var1[18]);
  t392 = t352*t332;
  t395 = -1.*t366*t341;
  t400 = t392 + t395;
  t423 = 0.0184*t417;
  t429 = -0.7055*t424;
  t431 = 0. + t423 + t429;
  t433 = t431*t388;
  t437 = -0.7055*t417;
  t438 = -0.0184*t424;
  t439 = 0. + t437 + t438;
  t442 = t439*t400;
  t448 = -1.*t424*t388;
  t449 = t412*t400;
  t450 = t448 + t449;
  t484 = Cos(var1[19]);
  t487 = -1.*t484;
  t493 = 1. + t487;
  t499 = Sin(var1[19]);
  t454 = t412*t388;
  t458 = t424*t400;
  t463 = t454 + t458;
  t41 = 0.0233*t21;
  t533 = Cos(var1[6]);
  t552 = Sin(var1[6]);
  t536 = -1.*t533;
  t544 = 1. + t536;
  t545 = 0.135*t544;
  t546 = 0. + t545;
  t549 = t7*t546*t65;
  t556 = -0.135*t552;
  t559 = 0. + t556;
  t560 = t7*t8*t559;
  t571 = t7*t8*t533;
  t574 = -1.*t7*t65*t552;
  t575 = t571 + t574;
  t564 = t7*t533*t65;
  t566 = t7*t8*t552;
  t567 = t564 + t566;
  t585 = Cos(var1[7]);
  t586 = -1.*t585;
  t590 = 1. + t586;
  t593 = Sin(var1[7]);
  t591 = 0.135*t590;
  t598 = 0.049*t593;
  t600 = 0. + t591 + t598;
  t602 = t567*t600;
  t604 = -0.049*t590;
  t611 = 0.135*t593;
  t614 = 0. + t604 + t611;
  t616 = -1.*t21*t614;
  t619 = t585*t567;
  t634 = t21*t593;
  t636 = t619 + t634;
  t640 = -1.*t585*t21;
  t643 = t567*t593;
  t650 = t640 + t643;
  t665 = Cos(var1[8]);
  t667 = -1.*t665;
  t672 = 1. + t667;
  t676 = Sin(var1[8]);
  t675 = -0.049*t672;
  t680 = -0.09*t676;
  t685 = 0. + t675 + t680;
  t688 = t650*t685;
  t691 = -0.09*t672;
  t696 = 0.049*t676;
  t700 = 0. + t691 + t696;
  t705 = t575*t700;
  t708 = t665*t650;
  t712 = t575*t676;
  t715 = t708 + t712;
  t737 = Cos(var1[9]);
  t738 = -1.*t737;
  t740 = 1. + t738;
  t744 = Sin(var1[9]);
  t725 = t665*t575;
  t728 = -1.*t650*t676;
  t729 = t725 + t728;
  t743 = -0.049*t740;
  t749 = -0.21*t744;
  t750 = 0. + t743 + t749;
  t766 = t750*t715;
  t768 = -0.21*t740;
  t769 = 0.049*t744;
  t776 = 0. + t768 + t769;
  t777 = t776*t729;
  t781 = -1.*t744*t715;
  t782 = t737*t729;
  t785 = t781 + t782;
  t808 = Cos(var1[10]);
  t812 = -1.*t808;
  t814 = 1. + t812;
  t820 = Sin(var1[10]);
  t792 = t737*t715;
  t793 = t744*t729;
  t795 = t792 + t793;
  t817 = -0.2707*t814;
  t821 = 0.0016*t820;
  t822 = 0. + t817 + t821;
  t826 = t822*t785;
  t828 = -0.0016*t814;
  t830 = -0.2707*t820;
  t832 = 0. + t828 + t830;
  t834 = t832*t795;
  t836 = t820*t785;
  t846 = t808*t795;
  t847 = t836 + t846;
  t872 = Cos(var1[11]);
  t873 = -1.*t872;
  t876 = 1. + t873;
  t879 = Sin(var1[11]);
  t853 = t808*t785;
  t855 = -1.*t820*t795;
  t857 = t853 + t855;
  t877 = 0.0184*t876;
  t881 = -0.7055*t879;
  t892 = 0. + t877 + t881;
  t895 = t892*t847;
  t907 = -0.7055*t876;
  t908 = -0.0184*t879;
  t910 = 0. + t907 + t908;
  t912 = t910*t857;
  t915 = -1.*t879*t847;
  t921 = t872*t857;
  t922 = t915 + t921;
  t951 = Cos(var1[12]);
  t952 = -1.*t951;
  t953 = 1. + t952;
  t965 = Sin(var1[12]);
  t925 = t872*t847;
  t929 = t879*t857;
  t937 = t925 + t929;
  p_output1[0]=17.8542*(0. + t41 + t549 + t560 + 0.1351*t567 + 0.0179*t575 + var1[2]) + 11.4777*(0. + t549 + t560 - 0.0343*t575 + t602 + t616 + 0.135*t636 - 0.049*t650 + var1[2]) + 54.1512*(0. + t127 + t144 - 0.1708*t156 + t193 + t218 - 0.0489*t227 - 0.1498*t260 + t36 + t66 + var1[2]) + 7.43598*(0. + t127 + t144 - 0.1327*t156 + t193 + t218 + t309 + t322 - 0.233*t332 - 0.0169*t341 + t36 + t66 + var1[2]) + 5.66037*(0. + t127 + t144 - 0.1303*t156 + t193 + t218 + t309 + t322 + t36 + t374 + t382 - 0.0004*t388 - 0.4541*t400 + t66 + var1[2]) + 7.67142*(0. + t127 + t144 - 0.1318*t156 + t193 + t218 + t309 + t322 + t36 + t374 + t382 + t433 + t442 - 0.816*t450 - 0.0122*t463 + t66 + var1[2]) + 1.4715*(0. + t127 + t144 - 0.1306*t156 + t193 + t218 + t309 + t322 + t36 + t374 + t382 + t433 + t442 + t463*(0. - 0.0216*t493 - 1.1135*t499) + t450*(0. - 1.1135*t493 + 0.0216*t499) + 0.0059*(t463*t484 + t450*t499) - 1.1182*(t450*t484 - 1.*t463*t499) + t66 + var1[2]) + 54.1512*(0. + t549 + t560 + t602 + t616 + 0.1708*t636 + t688 + t705 - 0.0489*t715 - 0.1498*t729 + var1[2]) + 7.43598*(0. + t549 + t560 + t602 + t616 + 0.1327*t636 + t688 + t705 + t766 + t777 - 0.233*t785 - 0.0169*t795 + var1[2]) + 101.3373*(-0.0507*t21 + 0.0284*t7*t8 + var1[2]) + 5.66037*(0. + t549 + t560 + t602 + t616 + 0.1303*t636 + t688 + t705 + t766 + t777 + t826 + t834 - 0.0004*t847 - 0.4541*t857 + var1[2]) + 11.4777*(0. + t127 + t144 - 0.135*t156 - 0.049*t164 + t36 + t66 - 0.0343*t91 + var1[2]) + 17.8542*(0. + t36 + t41 + t66 - 0.1351*t74 + 0.0179*t91 + var1[2]) + 7.67142*(0. + t549 + t560 + t602 + t616 + 0.1318*t636 + t688 + t705 + t766 + t777 + t826 + t834 + t895 + t912 - 0.816*t922 - 0.0122*t937 + var1[2]) + 1.4715*(0. + t549 + t560 + t602 + t616 + 0.1306*t636 + t688 + t705 + t766 + t777 + t826 + t834 + t895 + t912 + t937*(0. - 0.0216*t953 - 1.1135*t965) + t922*(0. - 1.1135*t953 + 0.0216*t965) + 0.0059*(t937*t951 + t922*t965) - 1.1182*(t922*t951 - 1.*t937*t965) + var1[2]);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "PotentialEnergy_mex.hh"

namespace SymExpression
{

void PotentialEnergy_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
