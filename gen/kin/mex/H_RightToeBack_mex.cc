/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:34:24 GMT-04:00
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
  double t16;
  double t110;
  double t170;
  double t126;
  double t194;
  double t36;
  double t77;
  double t85;
  double t104;
  double t366;
  double t162;
  double t246;
  double t268;
  double t370;
  double t374;
  double t379;
  double t291;
  double t411;
  double t413;
  double t1049;
  double t982;
  double t993;
  double t1014;
  double t969;
  double t1050;
  double t1051;
  double t1059;
  double t1131;
  double t1044;
  double t1062;
  double t1065;
  double t957;
  double t1146;
  double t1213;
  double t1246;
  double t1319;
  double t1118;
  double t1274;
  double t1294;
  double t932;
  double t1331;
  double t1350;
  double t1353;
  double t1384;
  double t1317;
  double t1356;
  double t1363;
  double t886;
  double t1387;
  double t1400;
  double t1417;
  double t1509;
  double t1364;
  double t1461;
  double t1478;
  double t873;
  double t1512;
  double t1532;
  double t1553;
  double t439;
  double t443;
  double t446;
  double t503;
  double t510;
  double t555;
  double t478;
  double t591;
  double t621;
  double t1646;
  double t1654;
  double t1668;
  double t1708;
  double t1718;
  double t1733;
  double t1695;
  double t1766;
  double t1787;
  double t1828;
  double t1885;
  double t1971;
  double t1822;
  double t1980;
  double t1993;
  double t2082;
  double t2092;
  double t2098;
  double t2007;
  double t2109;
  double t2117;
  double t2140;
  double t2141;
  double t2159;
  double t2130;
  double t2173;
  double t2184;
  double t2236;
  double t2239;
  double t2255;
  double t744;
  double t823;
  double t840;
  double t2454;
  double t2463;
  double t2465;
  double t2516;
  double t2518;
  double t2537;
  double t2469;
  double t2541;
  double t2544;
  double t2578;
  double t2591;
  double t2614;
  double t2548;
  double t2615;
  double t2618;
  double t2667;
  double t2688;
  double t2708;
  double t2666;
  double t2726;
  double t2731;
  double t2737;
  double t2743;
  double t2752;
  double t2736;
  double t2755;
  double t2758;
  double t2830;
  double t2846;
  double t2874;
  double t1506;
  double t1556;
  double t1557;
  double t1581;
  double t1597;
  double t1611;
  double t2199;
  double t2311;
  double t2331;
  double t2359;
  double t2368;
  double t2377;
  double t2824;
  double t2878;
  double t2910;
  double t2916;
  double t2924;
  double t2937;
  double t3038;
  double t3058;
  double t3362;
  double t3367;
  double t3608;
  double t3614;
  double t3751;
  double t3752;
  double t3879;
  double t3958;
  double t4114;
  double t4129;
  double t3064;
  double t3065;
  double t3072;
  double t3086;
  double t3098;
  double t3126;
  double t3187;
  double t3201;
  double t3261;
  double t3311;
  double t3315;
  double t3325;
  double t3394;
  double t3399;
  double t3412;
  double t3489;
  double t3533;
  double t3546;
  double t3631;
  double t3641;
  double t3649;
  double t3683;
  double t3687;
  double t3735;
  double t3769;
  double t3783;
  double t3785;
  double t3811;
  double t3830;
  double t3836;
  double t3966;
  double t4021;
  double t4056;
  double t4083;
  double t4088;
  double t4105;
  double t4155;
  double t4170;
  double t4197;
  double t4224;
  double t4246;
  double t4247;
  t16 = Cos(var1[3]);
  t110 = Cos(var1[5]);
  t170 = Sin(var1[3]);
  t126 = Sin(var1[4]);
  t194 = Sin(var1[5]);
  t36 = Cos(var1[4]);
  t77 = Sin(var1[14]);
  t85 = Cos(var1[14]);
  t104 = Sin(var1[13]);
  t366 = Cos(var1[13]);
  t162 = t16*t110*t126;
  t246 = t170*t194;
  t268 = t162 + t246;
  t370 = -1.*t110*t170;
  t374 = t16*t126*t194;
  t379 = t370 + t374;
  t291 = t104*t268;
  t411 = t366*t379;
  t413 = t291 + t411;
  t1049 = Cos(var1[15]);
  t982 = t366*t268;
  t993 = -1.*t104*t379;
  t1014 = t982 + t993;
  t969 = Sin(var1[15]);
  t1050 = t85*t16*t36;
  t1051 = t77*t413;
  t1059 = t1050 + t1051;
  t1131 = Cos(var1[16]);
  t1044 = t969*t1014;
  t1062 = t1049*t1059;
  t1065 = t1044 + t1062;
  t957 = Sin(var1[16]);
  t1146 = t1049*t1014;
  t1213 = -1.*t969*t1059;
  t1246 = t1146 + t1213;
  t1319 = Cos(var1[17]);
  t1118 = -1.*t957*t1065;
  t1274 = t1131*t1246;
  t1294 = t1118 + t1274;
  t932 = Sin(var1[17]);
  t1331 = t1131*t1065;
  t1350 = t957*t1246;
  t1353 = t1331 + t1350;
  t1384 = Cos(var1[18]);
  t1317 = t932*t1294;
  t1356 = t1319*t1353;
  t1363 = t1317 + t1356;
  t886 = Sin(var1[18]);
  t1387 = t1319*t1294;
  t1400 = -1.*t932*t1353;
  t1417 = t1387 + t1400;
  t1509 = Cos(var1[19]);
  t1364 = -1.*t886*t1363;
  t1461 = t1384*t1417;
  t1478 = t1364 + t1461;
  t873 = Sin(var1[19]);
  t1512 = t1384*t1363;
  t1532 = t886*t1417;
  t1553 = t1512 + t1532;
  t439 = t110*t170*t126;
  t443 = -1.*t16*t194;
  t446 = t439 + t443;
  t503 = t16*t110;
  t510 = t170*t126*t194;
  t555 = t503 + t510;
  t478 = t104*t446;
  t591 = t366*t555;
  t621 = t478 + t591;
  t1646 = t366*t446;
  t1654 = -1.*t104*t555;
  t1668 = t1646 + t1654;
  t1708 = t85*t36*t170;
  t1718 = t77*t621;
  t1733 = t1708 + t1718;
  t1695 = t969*t1668;
  t1766 = t1049*t1733;
  t1787 = t1695 + t1766;
  t1828 = t1049*t1668;
  t1885 = -1.*t969*t1733;
  t1971 = t1828 + t1885;
  t1822 = -1.*t957*t1787;
  t1980 = t1131*t1971;
  t1993 = t1822 + t1980;
  t2082 = t1131*t1787;
  t2092 = t957*t1971;
  t2098 = t2082 + t2092;
  t2007 = t932*t1993;
  t2109 = t1319*t2098;
  t2117 = t2007 + t2109;
  t2140 = t1319*t1993;
  t2141 = -1.*t932*t2098;
  t2159 = t2140 + t2141;
  t2130 = -1.*t886*t2117;
  t2173 = t1384*t2159;
  t2184 = t2130 + t2173;
  t2236 = t1384*t2117;
  t2239 = t886*t2159;
  t2255 = t2236 + t2239;
  t744 = t36*t110*t104;
  t823 = t366*t36*t194;
  t840 = t744 + t823;
  t2454 = t366*t36*t110;
  t2463 = -1.*t36*t104*t194;
  t2465 = t2454 + t2463;
  t2516 = -1.*t85*t126;
  t2518 = t77*t840;
  t2537 = t2516 + t2518;
  t2469 = t969*t2465;
  t2541 = t1049*t2537;
  t2544 = t2469 + t2541;
  t2578 = t1049*t2465;
  t2591 = -1.*t969*t2537;
  t2614 = t2578 + t2591;
  t2548 = -1.*t957*t2544;
  t2615 = t1131*t2614;
  t2618 = t2548 + t2615;
  t2667 = t1131*t2544;
  t2688 = t957*t2614;
  t2708 = t2667 + t2688;
  t2666 = t932*t2618;
  t2726 = t1319*t2708;
  t2731 = t2666 + t2726;
  t2737 = t1319*t2618;
  t2743 = -1.*t932*t2708;
  t2752 = t2737 + t2743;
  t2736 = -1.*t886*t2731;
  t2755 = t1384*t2752;
  t2758 = t2736 + t2755;
  t2830 = t1384*t2731;
  t2846 = t886*t2752;
  t2874 = t2830 + t2846;
  t1506 = t873*t1478;
  t1556 = t1509*t1553;
  t1557 = t1506 + t1556;
  t1581 = t1509*t1478;
  t1597 = -1.*t873*t1553;
  t1611 = t1581 + t1597;
  t2199 = t873*t2184;
  t2311 = t1509*t2255;
  t2331 = t2199 + t2311;
  t2359 = t1509*t2184;
  t2368 = -1.*t873*t2255;
  t2377 = t2359 + t2368;
  t2824 = t873*t2758;
  t2878 = t1509*t2874;
  t2910 = t2824 + t2878;
  t2916 = t1509*t2758;
  t2924 = -1.*t873*t2874;
  t2937 = t2916 + t2924;
  t3038 = -1.*t85;
  t3058 = 1. + t3038;
  t3362 = -1.*t1049;
  t3367 = 1. + t3362;
  t3608 = -1.*t1131;
  t3614 = 1. + t3608;
  t3751 = -1.*t1319;
  t3752 = 1. + t3751;
  t3879 = -1.*t1384;
  t3958 = 1. + t3879;
  t4114 = -1.*t1509;
  t4129 = 1. + t4114;
  t3064 = -0.049*t3058;
  t3065 = -0.135*t77;
  t3072 = 0. + t3064 + t3065;
  t3086 = 0.135*t104;
  t3098 = 0. + t3086;
  t3126 = -1.*t366;
  t3187 = 1. + t3126;
  t3201 = -0.135*t3187;
  t3261 = 0. + t3201;
  t3311 = -0.135*t3058;
  t3315 = 0.049*t77;
  t3325 = 0. + t3311 + t3315;
  t3394 = -0.09*t3367;
  t3399 = 0.049*t969;
  t3412 = 0. + t3394 + t3399;
  t3489 = -0.049*t3367;
  t3533 = -0.09*t969;
  t3546 = 0. + t3489 + t3533;
  t3631 = -0.049*t3614;
  t3641 = -0.21*t957;
  t3649 = 0. + t3631 + t3641;
  t3683 = -0.21*t3614;
  t3687 = 0.049*t957;
  t3735 = 0. + t3683 + t3687;
  t3769 = -0.2707*t3752;
  t3783 = 0.0016*t932;
  t3785 = 0. + t3769 + t3783;
  t3811 = -0.0016*t3752;
  t3830 = -0.2707*t932;
  t3836 = 0. + t3811 + t3830;
  t3966 = 0.0184*t3958;
  t4021 = -0.7055*t886;
  t4056 = 0. + t3966 + t4021;
  t4083 = -0.7055*t3958;
  t4088 = -0.0184*t886;
  t4105 = 0. + t4083 + t4088;
  t4155 = -1.1135*t4129;
  t4170 = 0.0216*t873;
  t4197 = 0. + t4155 + t4170;
  t4224 = -0.0216*t4129;
  t4246 = -1.1135*t873;
  t4247 = 0. + t4224 + t4246;
  p_output1[0]=t16*t36*t77 - 1.*t413*t85;
  p_output1[1]=t170*t36*t77 - 1.*t621*t85;
  p_output1[2]=-1.*t126*t77 - 1.*t840*t85;
  p_output1[3]=0.;
  p_output1[4]=0.642788*t1557 + 0.766044*t1611;
  p_output1[5]=0.642788*t2331 + 0.766044*t2377;
  p_output1[6]=0.642788*t2910 + 0.766044*t2937;
  p_output1[7]=0.;
  p_output1[8]=-0.766044*t1557 + 0.642788*t1611;
  p_output1[9]=-0.766044*t2331 + 0.642788*t2377;
  p_output1[10]=-0.766044*t2910 + 0.642788*t2937;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.027251*t1557 - 1.200144*t1611 + t268*t3098 + t1014*t3412 + t1059*t3546 + t16*t3072*t36 + t1065*t3649 + t1246*t3735 + t1294*t3785 + t3261*t379 + t1353*t3836 + t1363*t4056 + t1417*t4105 + t3325*t413 + t1478*t4197 + t1553*t4247 - 0.1305*(-1.*t16*t36*t77 + t413*t85) + var1[0];
  p_output1[13]=0. - 0.027251*t2331 - 1.200144*t2377 + t1668*t3412 + t1733*t3546 + t170*t3072*t36 + t1787*t3649 + t1971*t3735 + t1993*t3785 + t2098*t3836 + t2117*t4056 + t2159*t4105 + t2184*t4197 + t2255*t4247 + t3098*t446 + t3261*t555 + t3325*t621 - 0.1305*(-1.*t170*t36*t77 + t621*t85) + var1[1];
  p_output1[14]=0. - 0.027251*t2910 - 1.200144*t2937 - 1.*t126*t3072 + t2465*t3412 + t2537*t3546 + t110*t3098*t36 + t194*t3261*t36 + t2544*t3649 + t2614*t3735 + t2618*t3785 + t2708*t3836 + t2731*t4056 + t2752*t4105 + t2758*t4197 + t2874*t4247 + t3325*t840 - 0.1305*(t126*t77 + t840*t85) + var1[2];
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

#include "H_RightToeBack_mex.hh"

namespace SymExpression
{

void H_RightToeBack_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
