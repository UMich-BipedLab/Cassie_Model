/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 11:08:37 GMT-04:00
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
  double t112;
  double t18;
  double t217;
  double t20;
  double t347;
  double t15;
  double t16;
  double t504;
  double t540;
  double t549;
  double t98;
  double t410;
  double t431;
  double t446;
  double t460;
  double t483;
  double t494;
  double t514;
  double t519;
  double t642;
  double t655;
  double t656;
  double t699;
  double t646;
  double t648;
  double t649;
  double t725;
  double t769;
  double t654;
  double t734;
  double t750;
  double t641;
  double t799;
  double t826;
  double t904;
  double t970;
  double t752;
  double t925;
  double t963;
  double t640;
  double t982;
  double t993;
  double t1004;
  double t1062;
  double t968;
  double t1014;
  double t1022;
  double t638;
  double t1066;
  double t1067;
  double t1075;
  double t1193;
  double t1041;
  double t1081;
  double t1112;
  double t636;
  double t1196;
  double t1295;
  double t1305;
  double t567;
  double t568;
  double t570;
  double t578;
  double t582;
  double t586;
  double t590;
  double t591;
  double t592;
  double t1416;
  double t1430;
  double t1434;
  double t1394;
  double t1395;
  double t1401;
  double t1406;
  double t1454;
  double t1468;
  double t1494;
  double t1555;
  double t1627;
  double t1479;
  double t1630;
  double t1644;
  double t1667;
  double t1680;
  double t1691;
  double t1646;
  double t1717;
  double t1721;
  double t1749;
  double t1763;
  double t1766;
  double t1736;
  double t1815;
  double t1844;
  double t1881;
  double t1891;
  double t1923;
  double t615;
  double t616;
  double t618;
  double t2266;
  double t2267;
  double t2295;
  double t2233;
  double t2235;
  double t2236;
  double t2265;
  double t2371;
  double t2375;
  double t2408;
  double t2426;
  double t2430;
  double t2405;
  double t2449;
  double t2460;
  double t2483;
  double t2491;
  double t2492;
  double t2475;
  double t2515;
  double t2517;
  double t2562;
  double t2570;
  double t2590;
  double t2554;
  double t2596;
  double t2610;
  double t2628;
  double t2630;
  double t2633;
  double t1139;
  double t1310;
  double t1334;
  double t1355;
  double t1359;
  double t1370;
  double t1872;
  double t1924;
  double t1945;
  double t1992;
  double t2043;
  double t2190;
  double t2624;
  double t2638;
  double t2642;
  double t2675;
  double t2677;
  double t2690;
  double t2976;
  double t2984;
  double t3132;
  double t3140;
  double t3314;
  double t3317;
  double t3467;
  double t3486;
  double t3624;
  double t3627;
  double t3785;
  double t3790;
  double t2875;
  double t2879;
  double t2882;
  double t2907;
  double t2957;
  double t2970;
  double t2997;
  double t3018;
  double t3035;
  double t3072;
  double t3078;
  double t3101;
  double t3147;
  double t3150;
  double t3184;
  double t3277;
  double t3285;
  double t3286;
  double t3331;
  double t3336;
  double t3371;
  double t3418;
  double t3437;
  double t3439;
  double t3507;
  double t3570;
  double t3588;
  double t3597;
  double t3600;
  double t3612;
  double t3634;
  double t3692;
  double t3699;
  double t3741;
  double t3770;
  double t3780;
  double t3807;
  double t3809;
  double t3824;
  double t3847;
  double t3855;
  double t3877;
  t112 = Cos(var1[3]);
  t18 = Cos(var1[5]);
  t217 = Sin(var1[4]);
  t20 = Sin(var1[3]);
  t347 = Sin(var1[5]);
  t15 = Cos(var1[7]);
  t16 = Cos(var1[6]);
  t504 = Sin(var1[6]);
  t540 = Cos(var1[4]);
  t549 = Sin(var1[7]);
  t98 = -1.*t18*t20;
  t410 = t112*t217*t347;
  t431 = t98 + t410;
  t446 = t16*t431;
  t460 = t112*t18*t217;
  t483 = t20*t347;
  t494 = t460 + t483;
  t514 = t494*t504;
  t519 = t446 + t514;
  t642 = Cos(var1[8]);
  t655 = t16*t494;
  t656 = -1.*t431*t504;
  t699 = t655 + t656;
  t646 = t112*t540*t15;
  t648 = t519*t549;
  t649 = t646 + t648;
  t725 = Sin(var1[8]);
  t769 = Cos(var1[9]);
  t654 = t642*t649;
  t734 = t699*t725;
  t750 = t654 + t734;
  t641 = Sin(var1[9]);
  t799 = t642*t699;
  t826 = -1.*t649*t725;
  t904 = t799 + t826;
  t970 = Cos(var1[10]);
  t752 = -1.*t641*t750;
  t925 = t769*t904;
  t963 = t752 + t925;
  t640 = Sin(var1[10]);
  t982 = t769*t750;
  t993 = t641*t904;
  t1004 = t982 + t993;
  t1062 = Cos(var1[11]);
  t968 = t640*t963;
  t1014 = t970*t1004;
  t1022 = t968 + t1014;
  t638 = Sin(var1[11]);
  t1066 = t970*t963;
  t1067 = -1.*t640*t1004;
  t1075 = t1066 + t1067;
  t1193 = Cos(var1[12]);
  t1041 = -1.*t638*t1022;
  t1081 = t1062*t1075;
  t1112 = t1041 + t1081;
  t636 = Sin(var1[12]);
  t1196 = t1062*t1022;
  t1295 = t638*t1075;
  t1305 = t1196 + t1295;
  t567 = t112*t18;
  t568 = t20*t217*t347;
  t570 = t567 + t568;
  t578 = t16*t570;
  t582 = t18*t20*t217;
  t586 = -1.*t112*t347;
  t590 = t582 + t586;
  t591 = t590*t504;
  t592 = t578 + t591;
  t1416 = t16*t590;
  t1430 = -1.*t570*t504;
  t1434 = t1416 + t1430;
  t1394 = t540*t15*t20;
  t1395 = t592*t549;
  t1401 = t1394 + t1395;
  t1406 = t642*t1401;
  t1454 = t1434*t725;
  t1468 = t1406 + t1454;
  t1494 = t642*t1434;
  t1555 = -1.*t1401*t725;
  t1627 = t1494 + t1555;
  t1479 = -1.*t641*t1468;
  t1630 = t769*t1627;
  t1644 = t1479 + t1630;
  t1667 = t769*t1468;
  t1680 = t641*t1627;
  t1691 = t1667 + t1680;
  t1646 = t640*t1644;
  t1717 = t970*t1691;
  t1721 = t1646 + t1717;
  t1749 = t970*t1644;
  t1763 = -1.*t640*t1691;
  t1766 = t1749 + t1763;
  t1736 = -1.*t638*t1721;
  t1815 = t1062*t1766;
  t1844 = t1736 + t1815;
  t1881 = t1062*t1721;
  t1891 = t638*t1766;
  t1923 = t1881 + t1891;
  t615 = t540*t16*t347;
  t616 = t540*t18*t504;
  t618 = t615 + t616;
  t2266 = t540*t18*t16;
  t2267 = -1.*t540*t347*t504;
  t2295 = t2266 + t2267;
  t2233 = -1.*t15*t217;
  t2235 = t618*t549;
  t2236 = t2233 + t2235;
  t2265 = t642*t2236;
  t2371 = t2295*t725;
  t2375 = t2265 + t2371;
  t2408 = t642*t2295;
  t2426 = -1.*t2236*t725;
  t2430 = t2408 + t2426;
  t2405 = -1.*t641*t2375;
  t2449 = t769*t2430;
  t2460 = t2405 + t2449;
  t2483 = t769*t2375;
  t2491 = t641*t2430;
  t2492 = t2483 + t2491;
  t2475 = t640*t2460;
  t2515 = t970*t2492;
  t2517 = t2475 + t2515;
  t2562 = t970*t2460;
  t2570 = -1.*t640*t2492;
  t2590 = t2562 + t2570;
  t2554 = -1.*t638*t2517;
  t2596 = t1062*t2590;
  t2610 = t2554 + t2596;
  t2628 = t1062*t2517;
  t2630 = t638*t2590;
  t2633 = t2628 + t2630;
  t1139 = t636*t1112;
  t1310 = t1193*t1305;
  t1334 = t1139 + t1310;
  t1355 = t1193*t1112;
  t1359 = -1.*t636*t1305;
  t1370 = t1355 + t1359;
  t1872 = t636*t1844;
  t1924 = t1193*t1923;
  t1945 = t1872 + t1924;
  t1992 = t1193*t1844;
  t2043 = -1.*t636*t1923;
  t2190 = t1992 + t2043;
  t2624 = t636*t2610;
  t2638 = t1193*t2633;
  t2642 = t2624 + t2638;
  t2675 = t1193*t2610;
  t2677 = -1.*t636*t2633;
  t2690 = t2675 + t2677;
  t2976 = -1.*t15;
  t2984 = 1. + t2976;
  t3132 = -1.*t642;
  t3140 = 1. + t3132;
  t3314 = -1.*t769;
  t3317 = 1. + t3314;
  t3467 = -1.*t970;
  t3486 = 1. + t3467;
  t3624 = -1.*t1062;
  t3627 = 1. + t3624;
  t3785 = -1.*t1193;
  t3790 = 1. + t3785;
  t2875 = -1.*t16;
  t2879 = 1. + t2875;
  t2882 = 0.135*t2879;
  t2907 = 0. + t2882;
  t2957 = -0.135*t504;
  t2970 = 0. + t2957;
  t2997 = 0.135*t2984;
  t3018 = 0.049*t549;
  t3035 = 0. + t2997 + t3018;
  t3072 = -0.049*t2984;
  t3078 = 0.135*t549;
  t3101 = 0. + t3072 + t3078;
  t3147 = -0.049*t3140;
  t3150 = -0.09*t725;
  t3184 = 0. + t3147 + t3150;
  t3277 = -0.09*t3140;
  t3285 = 0.049*t725;
  t3286 = 0. + t3277 + t3285;
  t3331 = -0.049*t3317;
  t3336 = -0.21*t641;
  t3371 = 0. + t3331 + t3336;
  t3418 = -0.21*t3317;
  t3437 = 0.049*t641;
  t3439 = 0. + t3418 + t3437;
  t3507 = -0.2707*t3486;
  t3570 = 0.0016*t640;
  t3588 = 0. + t3507 + t3570;
  t3597 = -0.0016*t3486;
  t3600 = -0.2707*t640;
  t3612 = 0. + t3597 + t3600;
  t3634 = 0.0184*t3627;
  t3692 = -0.7055*t638;
  t3699 = 0. + t3634 + t3692;
  t3741 = -0.7055*t3627;
  t3770 = -0.0184*t638;
  t3780 = 0. + t3741 + t3770;
  t3807 = -1.1135*t3790;
  t3809 = 0.0216*t636;
  t3824 = 0. + t3807 + t3809;
  t3847 = -0.0216*t3790;
  t3855 = -1.1135*t636;
  t3877 = 0. + t3847 + t3855;
  p_output1[0]=-1.*t15*t519 + t112*t540*t549;
  p_output1[1]=t20*t540*t549 - 1.*t15*t592;
  p_output1[2]=-1.*t217*t549 - 1.*t15*t618;
  p_output1[3]=0.;
  p_output1[4]=0.642788*t1334 + 0.766044*t1370;
  p_output1[5]=0.642788*t1945 + 0.766044*t2190;
  p_output1[6]=0.642788*t2642 + 0.766044*t2690;
  p_output1[7]=0.;
  p_output1[8]=-0.766044*t1334 + 0.642788*t1370;
  p_output1[9]=-0.766044*t1945 + 0.642788*t2190;
  p_output1[10]=-0.766044*t2642 + 0.642788*t2690;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.0306*t1334 - 1.1312*t1370 + t1004*t3612 + t1022*t3699 + t1075*t3780 + t1112*t3824 + t1305*t3877 + t2907*t431 + t2970*t494 + t3035*t519 + t112*t3101*t540 + 0.1305*(t15*t519 - 1.*t112*t540*t549) + t3184*t649 + t3286*t699 + t3371*t750 + t3439*t904 + t3588*t963 + var1[0];
  p_output1[13]=0. + 0.0306*t1945 - 1.1312*t2190 + t1401*t3184 + t1434*t3286 + t1468*t3371 + t1627*t3439 + t1644*t3588 + t1691*t3612 + t1721*t3699 + t1766*t3780 + t1844*t3824 + t1923*t3877 + t20*t3101*t540 + t2907*t570 + t2970*t590 + t3035*t592 + 0.1305*(-1.*t20*t540*t549 + t15*t592) + var1[1];
  p_output1[14]=0. + 0.0306*t2642 - 1.1312*t2690 - 1.*t217*t3101 + t2236*t3184 + t2295*t3286 + t2375*t3371 + t2430*t3439 + t2460*t3588 + t2492*t3612 + t2517*t3699 + t2590*t3780 + t2610*t3824 + t2633*t3877 + t18*t2970*t540 + t2907*t347*t540 + t3035*t618 + 0.1305*(t217*t549 + t15*t618) + var1[2];
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

#include "H_LeftToeBottom_mex.hh"

namespace SymExpression
{

void H_LeftToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
