/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:34:05 GMT-04:00
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
  double t108;
  double t65;
  double t114;
  double t99;
  double t169;
  double t7;
  double t49;
  double t275;
  double t422;
  double t447;
  double t107;
  double t186;
  double t188;
  double t220;
  double t231;
  double t263;
  double t264;
  double t354;
  double t418;
  double t869;
  double t966;
  double t971;
  double t972;
  double t881;
  double t915;
  double t918;
  double t975;
  double t1104;
  double t945;
  double t978;
  double t982;
  double t851;
  double t1139;
  double t1142;
  double t1147;
  double t1189;
  double t1014;
  double t1154;
  double t1159;
  double t831;
  double t1208;
  double t1218;
  double t1223;
  double t1317;
  double t1169;
  double t1238;
  double t1243;
  double t807;
  double t1323;
  double t1325;
  double t1331;
  double t1404;
  double t1257;
  double t1340;
  double t1361;
  double t799;
  double t1418;
  double t1437;
  double t1451;
  double t466;
  double t474;
  double t478;
  double t482;
  double t492;
  double t494;
  double t521;
  double t543;
  double t592;
  double t1667;
  double t1708;
  double t1724;
  double t1579;
  double t1609;
  double t1636;
  double t1641;
  double t1748;
  double t1773;
  double t1782;
  double t1803;
  double t1809;
  double t1775;
  double t1821;
  double t1832;
  double t1847;
  double t1870;
  double t1907;
  double t1833;
  double t1929;
  double t1930;
  double t1959;
  double t1966;
  double t2034;
  double t1958;
  double t2037;
  double t2091;
  double t2107;
  double t2124;
  double t2143;
  double t659;
  double t691;
  double t725;
  double t2296;
  double t2299;
  double t2310;
  double t2257;
  double t2265;
  double t2272;
  double t2280;
  double t2334;
  double t2344;
  double t2352;
  double t2367;
  double t2389;
  double t2348;
  double t2425;
  double t2431;
  double t2450;
  double t2458;
  double t2462;
  double t2446;
  double t2485;
  double t2500;
  double t2512;
  double t2557;
  double t2561;
  double t2509;
  double t2564;
  double t2579;
  double t2630;
  double t2649;
  double t2676;
  double t1403;
  double t1453;
  double t1464;
  double t1491;
  double t1508;
  double t1514;
  double t2093;
  double t2148;
  double t2151;
  double t2181;
  double t2202;
  double t2218;
  double t2590;
  double t2690;
  double t2698;
  double t2718;
  double t2733;
  double t2741;
  double t3107;
  double t3126;
  double t3345;
  double t3349;
  double t3521;
  double t3523;
  double t3610;
  double t3617;
  double t3738;
  double t3748;
  double t3864;
  double t3913;
  double t2988;
  double t3003;
  double t3014;
  double t3023;
  double t3091;
  double t3096;
  double t3133;
  double t3158;
  double t3187;
  double t3195;
  double t3248;
  double t3265;
  double t3355;
  double t3369;
  double t3386;
  double t3421;
  double t3431;
  double t3445;
  double t3528;
  double t3532;
  double t3545;
  double t3562;
  double t3570;
  double t3580;
  double t3637;
  double t3654;
  double t3659;
  double t3668;
  double t3675;
  double t3729;
  double t3768;
  double t3774;
  double t3788;
  double t3850;
  double t3855;
  double t3856;
  double t3917;
  double t3921;
  double t3927;
  double t3958;
  double t3979;
  double t3982;
  t108 = Cos(var1[3]);
  t65 = Cos(var1[5]);
  t114 = Sin(var1[4]);
  t99 = Sin(var1[3]);
  t169 = Sin(var1[5]);
  t7 = Cos(var1[7]);
  t49 = Cos(var1[6]);
  t275 = Sin(var1[6]);
  t422 = Cos(var1[4]);
  t447 = Sin(var1[7]);
  t107 = -1.*t65*t99;
  t186 = t108*t114*t169;
  t188 = t107 + t186;
  t220 = t49*t188;
  t231 = t108*t65*t114;
  t263 = t99*t169;
  t264 = t231 + t263;
  t354 = t264*t275;
  t418 = t220 + t354;
  t869 = Cos(var1[8]);
  t966 = t49*t264;
  t971 = -1.*t188*t275;
  t972 = t966 + t971;
  t881 = t108*t422*t7;
  t915 = t418*t447;
  t918 = t881 + t915;
  t975 = Sin(var1[8]);
  t1104 = Cos(var1[9]);
  t945 = t869*t918;
  t978 = t972*t975;
  t982 = t945 + t978;
  t851 = Sin(var1[9]);
  t1139 = t869*t972;
  t1142 = -1.*t918*t975;
  t1147 = t1139 + t1142;
  t1189 = Cos(var1[10]);
  t1014 = -1.*t851*t982;
  t1154 = t1104*t1147;
  t1159 = t1014 + t1154;
  t831 = Sin(var1[10]);
  t1208 = t1104*t982;
  t1218 = t851*t1147;
  t1223 = t1208 + t1218;
  t1317 = Cos(var1[11]);
  t1169 = t831*t1159;
  t1238 = t1189*t1223;
  t1243 = t1169 + t1238;
  t807 = Sin(var1[11]);
  t1323 = t1189*t1159;
  t1325 = -1.*t831*t1223;
  t1331 = t1323 + t1325;
  t1404 = Cos(var1[12]);
  t1257 = -1.*t807*t1243;
  t1340 = t1317*t1331;
  t1361 = t1257 + t1340;
  t799 = Sin(var1[12]);
  t1418 = t1317*t1243;
  t1437 = t807*t1331;
  t1451 = t1418 + t1437;
  t466 = t108*t65;
  t474 = t99*t114*t169;
  t478 = t466 + t474;
  t482 = t49*t478;
  t492 = t65*t99*t114;
  t494 = -1.*t108*t169;
  t521 = t492 + t494;
  t543 = t521*t275;
  t592 = t482 + t543;
  t1667 = t49*t521;
  t1708 = -1.*t478*t275;
  t1724 = t1667 + t1708;
  t1579 = t422*t7*t99;
  t1609 = t592*t447;
  t1636 = t1579 + t1609;
  t1641 = t869*t1636;
  t1748 = t1724*t975;
  t1773 = t1641 + t1748;
  t1782 = t869*t1724;
  t1803 = -1.*t1636*t975;
  t1809 = t1782 + t1803;
  t1775 = -1.*t851*t1773;
  t1821 = t1104*t1809;
  t1832 = t1775 + t1821;
  t1847 = t1104*t1773;
  t1870 = t851*t1809;
  t1907 = t1847 + t1870;
  t1833 = t831*t1832;
  t1929 = t1189*t1907;
  t1930 = t1833 + t1929;
  t1959 = t1189*t1832;
  t1966 = -1.*t831*t1907;
  t2034 = t1959 + t1966;
  t1958 = -1.*t807*t1930;
  t2037 = t1317*t2034;
  t2091 = t1958 + t2037;
  t2107 = t1317*t1930;
  t2124 = t807*t2034;
  t2143 = t2107 + t2124;
  t659 = t422*t49*t169;
  t691 = t422*t65*t275;
  t725 = t659 + t691;
  t2296 = t422*t65*t49;
  t2299 = -1.*t422*t169*t275;
  t2310 = t2296 + t2299;
  t2257 = -1.*t7*t114;
  t2265 = t725*t447;
  t2272 = t2257 + t2265;
  t2280 = t869*t2272;
  t2334 = t2310*t975;
  t2344 = t2280 + t2334;
  t2352 = t869*t2310;
  t2367 = -1.*t2272*t975;
  t2389 = t2352 + t2367;
  t2348 = -1.*t851*t2344;
  t2425 = t1104*t2389;
  t2431 = t2348 + t2425;
  t2450 = t1104*t2344;
  t2458 = t851*t2389;
  t2462 = t2450 + t2458;
  t2446 = t831*t2431;
  t2485 = t1189*t2462;
  t2500 = t2446 + t2485;
  t2512 = t1189*t2431;
  t2557 = -1.*t831*t2462;
  t2561 = t2512 + t2557;
  t2509 = -1.*t807*t2500;
  t2564 = t1317*t2561;
  t2579 = t2509 + t2564;
  t2630 = t1317*t2500;
  t2649 = t807*t2561;
  t2676 = t2630 + t2649;
  t1403 = t799*t1361;
  t1453 = t1404*t1451;
  t1464 = t1403 + t1453;
  t1491 = t1404*t1361;
  t1508 = -1.*t799*t1451;
  t1514 = t1491 + t1508;
  t2093 = t799*t2091;
  t2148 = t1404*t2143;
  t2151 = t2093 + t2148;
  t2181 = t1404*t2091;
  t2202 = -1.*t799*t2143;
  t2218 = t2181 + t2202;
  t2590 = t799*t2579;
  t2690 = t1404*t2676;
  t2698 = t2590 + t2690;
  t2718 = t1404*t2579;
  t2733 = -1.*t799*t2676;
  t2741 = t2718 + t2733;
  t3107 = -1.*t7;
  t3126 = 1. + t3107;
  t3345 = -1.*t869;
  t3349 = 1. + t3345;
  t3521 = -1.*t1104;
  t3523 = 1. + t3521;
  t3610 = -1.*t1189;
  t3617 = 1. + t3610;
  t3738 = -1.*t1317;
  t3748 = 1. + t3738;
  t3864 = -1.*t1404;
  t3913 = 1. + t3864;
  t2988 = -1.*t49;
  t3003 = 1. + t2988;
  t3014 = 0.135*t3003;
  t3023 = 0. + t3014;
  t3091 = -0.135*t275;
  t3096 = 0. + t3091;
  t3133 = 0.135*t3126;
  t3158 = 0.049*t447;
  t3187 = 0. + t3133 + t3158;
  t3195 = -0.049*t3126;
  t3248 = 0.135*t447;
  t3265 = 0. + t3195 + t3248;
  t3355 = -0.049*t3349;
  t3369 = -0.09*t975;
  t3386 = 0. + t3355 + t3369;
  t3421 = -0.09*t3349;
  t3431 = 0.049*t975;
  t3445 = 0. + t3421 + t3431;
  t3528 = -0.049*t3523;
  t3532 = -0.21*t851;
  t3545 = 0. + t3528 + t3532;
  t3562 = -0.21*t3523;
  t3570 = 0.049*t851;
  t3580 = 0. + t3562 + t3570;
  t3637 = -0.2707*t3617;
  t3654 = 0.0016*t831;
  t3659 = 0. + t3637 + t3654;
  t3668 = -0.0016*t3617;
  t3675 = -0.2707*t831;
  t3729 = 0. + t3668 + t3675;
  t3768 = 0.0184*t3748;
  t3774 = -0.7055*t807;
  t3788 = 0. + t3768 + t3774;
  t3850 = -0.7055*t3748;
  t3855 = -0.0184*t807;
  t3856 = 0. + t3850 + t3855;
  t3917 = -1.1135*t3913;
  t3921 = 0.0216*t799;
  t3927 = 0. + t3917 + t3921;
  t3958 = -0.0216*t3913;
  t3979 = -1.1135*t799;
  t3982 = 0. + t3958 + t3979;
  p_output1[0]=t108*t422*t447 - 1.*t418*t7;
  p_output1[1]=-1.*t592*t7 + t422*t447*t99;
  p_output1[2]=-1.*t114*t447 - 1.*t7*t725;
  p_output1[3]=0.;
  p_output1[4]=0.642788*t1464 + 0.766044*t1514;
  p_output1[5]=0.642788*t2151 + 0.766044*t2218;
  p_output1[6]=0.642788*t2698 + 0.766044*t2741;
  p_output1[7]=0.;
  p_output1[8]=-0.766044*t1464 + 0.642788*t1514;
  p_output1[9]=-0.766044*t2151 + 0.642788*t2218;
  p_output1[10]=-0.766044*t2698 + 0.642788*t2741;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.088451*t1464 - 1.062256*t1514 + t188*t3023 + t264*t3096 + t1147*t3580 + t1159*t3659 + t1223*t3729 + t1243*t3788 + t1331*t3856 + t1361*t3927 + t1451*t3982 + t3187*t418 + t108*t3265*t422 + 0.1305*(-1.*t108*t422*t447 + t418*t7) + t3386*t918 + t3445*t972 + t3545*t982 + var1[0];
  p_output1[13]=0. + 0.088451*t2151 - 1.062256*t2218 + t1636*t3386 + t1724*t3445 + t1773*t3545 + t1809*t3580 + t1832*t3659 + t1907*t3729 + t1930*t3788 + t2034*t3856 + t2091*t3927 + t2143*t3982 + t3023*t478 + t3096*t521 + t3187*t592 + t3265*t422*t99 + 0.1305*(t592*t7 - 1.*t422*t447*t99) + var1[1];
  p_output1[14]=0. + 0.088451*t2698 - 1.062256*t2741 - 1.*t114*t3265 + t2272*t3386 + t2310*t3445 + t2344*t3545 + t2389*t3580 + t2431*t3659 + t2462*t3729 + t2500*t3788 + t2561*t3856 + t2579*t3927 + t2676*t3982 + t169*t3023*t422 + t3096*t422*t65 + t3187*t725 + 0.1305*(t114*t447 + t7*t725) + var1[2];
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

#include "H_LeftToeFront_mex.hh"

namespace SymExpression
{

void H_LeftToeFront_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
