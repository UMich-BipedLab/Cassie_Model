/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:18:03 GMT-05:00
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
  double t98;
  double t155;
  double t109;
  double t141;
  double t241;
  double t475;
  double t143;
  double t295;
  double t415;
  double t94;
  double t523;
  double t526;
  double t566;
  double t649;
  double t455;
  double t584;
  double t598;
  double t54;
  double t697;
  double t740;
  double t756;
  double t837;
  double t641;
  double t763;
  double t780;
  double t50;
  double t866;
  double t873;
  double t874;
  double t829;
  double t896;
  double t908;
  double t944;
  double t951;
  double t963;
  double t1119;
  double t1157;
  double t1177;
  double t1179;
  double t16;
  double t1245;
  double t1257;
  double t1265;
  double t1307;
  double t1312;
  double t1337;
  double t1295;
  double t1378;
  double t1402;
  double t1446;
  double t1460;
  double t1472;
  double t1437;
  double t1480;
  double t1488;
  double t1506;
  double t1511;
  double t1515;
  double t1494;
  double t1543;
  double t1556;
  double t1634;
  double t1645;
  double t1650;
  double t1194;
  double t1755;
  double t1763;
  double t1799;
  double t1840;
  double t1841;
  double t1849;
  double t1805;
  double t1870;
  double t1871;
  double t1935;
  double t1945;
  double t1953;
  double t1928;
  double t2026;
  double t2054;
  double t2070;
  double t2073;
  double t2084;
  double t2063;
  double t2116;
  double t2157;
  double t2252;
  double t2295;
  double t2298;
  double t1575;
  double t1683;
  double t1699;
  double t1704;
  double t1737;
  double t1742;
  double t2245;
  double t2315;
  double t2318;
  double t2330;
  double t2335;
  double t2343;
  double t1125;
  double t1146;
  double t1196;
  double t1205;
  double t41;
  double t2683;
  double t2701;
  double t912;
  double t965;
  double t968;
  double t2572;
  double t2574;
  double t1702;
  double t1744;
  double t1746;
  double t2626;
  double t2647;
  double t2324;
  double t2350;
  double t2354;
  double t1026;
  double t1045;
  double t1050;
  double t2366;
  double t2393;
  double t2410;
  double t2474;
  double t2475;
  double t2504;
  double t2575;
  double t2650;
  double t2705;
  double t2712;
  double t2717;
  double t2734;
  double t2737;
  double t2786;
  double t2793;
  double t2797;
  double t2802;
  double t2806;
  double t2808;
  double t2820;
  double t2839;
  double t2854;
  double t2857;
  double t2970;
  double t3033;
  double t3040;
  double t2975;
  double t2987;
  double t3002;
  double t3013;
  double t2988;
  double t3021;
  double t3049;
  double t3056;
  double t3087;
  double t3099;
  double t3136;
  double t3162;
  double t3163;
  double t3164;
  double t3170;
  double t3183;
  t98 = Cos(var1[1]);
  t155 = Cos(var1[3]);
  t109 = Cos(var1[2]);
  t141 = Sin(var1[3]);
  t241 = Sin(var1[2]);
  t475 = Cos(var1[4]);
  t143 = -1.*t98*t109*t141;
  t295 = -1.*t155*t98*t241;
  t415 = t143 + t295;
  t94 = Sin(var1[4]);
  t523 = t155*t98*t109;
  t526 = -1.*t98*t141*t241;
  t566 = t523 + t526;
  t649 = Cos(var1[5]);
  t455 = t94*t415;
  t584 = t475*t566;
  t598 = t455 + t584;
  t54 = Sin(var1[5]);
  t697 = t475*t415;
  t740 = -1.*t94*t566;
  t756 = t697 + t740;
  t837 = Cos(var1[6]);
  t641 = -1.*t54*t598;
  t763 = t649*t756;
  t780 = t641 + t763;
  t50 = Sin(var1[6]);
  t866 = t649*t598;
  t873 = t54*t756;
  t874 = t866 + t873;
  t829 = t50*t780;
  t896 = t837*t874;
  t908 = t829 + t896;
  t944 = t837*t780;
  t951 = -1.*t50*t874;
  t963 = t944 + t951;
  t1119 = Cos(var1[0]);
  t1157 = Sin(var1[0]);
  t1177 = -1.*t1157;
  t1179 = 0. + t1177;
  t16 = Sin(var1[1]);
  t1245 = t1119*t109*t16;
  t1257 = -1.*t1157*t241;
  t1265 = t1245 + t1257;
  t1307 = -1.*t109*t1157;
  t1312 = -1.*t1119*t16*t241;
  t1337 = t1307 + t1312;
  t1295 = -1.*t141*t1265;
  t1378 = t155*t1337;
  t1402 = t1295 + t1378;
  t1446 = t155*t1265;
  t1460 = t141*t1337;
  t1472 = t1446 + t1460;
  t1437 = t94*t1402;
  t1480 = t475*t1472;
  t1488 = t1437 + t1480;
  t1506 = t475*t1402;
  t1511 = -1.*t94*t1472;
  t1515 = t1506 + t1511;
  t1494 = -1.*t54*t1488;
  t1543 = t649*t1515;
  t1556 = t1494 + t1543;
  t1634 = t649*t1488;
  t1645 = t54*t1515;
  t1650 = t1634 + t1645;
  t1194 = 0. + t1119;
  t1755 = t109*t1157*t16;
  t1763 = t1119*t241;
  t1799 = t1755 + t1763;
  t1840 = t1119*t109;
  t1841 = -1.*t1157*t16*t241;
  t1849 = t1840 + t1841;
  t1805 = -1.*t141*t1799;
  t1870 = t155*t1849;
  t1871 = t1805 + t1870;
  t1935 = t155*t1799;
  t1945 = t141*t1849;
  t1953 = t1935 + t1945;
  t1928 = t94*t1871;
  t2026 = t475*t1953;
  t2054 = t1928 + t2026;
  t2070 = t475*t1871;
  t2073 = -1.*t94*t1953;
  t2084 = t2070 + t2073;
  t2063 = -1.*t54*t2054;
  t2116 = t649*t2084;
  t2157 = t2063 + t2116;
  t2252 = t649*t2054;
  t2295 = t54*t2084;
  t2298 = t2252 + t2295;
  t1575 = t50*t1556;
  t1683 = t837*t1650;
  t1699 = t1575 + t1683;
  t1704 = t837*t1556;
  t1737 = -1.*t50*t1650;
  t1742 = t1704 + t1737;
  t2245 = t50*t2157;
  t2315 = t837*t2298;
  t2318 = t2245 + t2315;
  t2330 = t837*t2157;
  t2335 = -1.*t50*t2298;
  t2343 = t2330 + t2335;
  t1125 = t1119*t98;
  t1146 = 0. + t1125;
  t1196 = t98*t1157;
  t1205 = 0. + t1196;
  t41 = 0. + t16;
  t2683 = -1.*t16;
  t2701 = 0. + t2683;
  t912 = 0.642788*t908;
  t965 = 0.766044*t963;
  t968 = 0. + t912 + t965;
  t2572 = -1.*t1119*t98;
  t2574 = 0. + t2572;
  t1702 = -0.642788*t1699;
  t1744 = -0.766044*t1742;
  t1746 = 0. + t1702 + t1744;
  t2626 = -1.*t98*t1157;
  t2647 = 0. + t2626;
  t2324 = -0.642788*t2318;
  t2350 = -0.766044*t2343;
  t2354 = 0. + t2324 + t2350;
  t1026 = -0.766044*t908;
  t1045 = 0.642788*t963;
  t1050 = 0. + t1026 + t1045;
  t2366 = 0.766044*t1699;
  t2393 = -0.642788*t1742;
  t2410 = 0. + t2366 + t2393;
  t2474 = 0.766044*t2318;
  t2475 = -0.642788*t2343;
  t2504 = 0. + t2474 + t2475;
  t2575 = t2574*t1146;
  t2650 = t2647*t1205;
  t2705 = t2701*t41;
  t2712 = t2575 + t2650 + t2705;
  t2717 = t2701*t968;
  t2734 = t2574*t1746;
  t2737 = t2647*t2354;
  t2786 = t2717 + t2734 + t2737;
  t2793 = t2701*t1050;
  t2797 = t2574*t2410;
  t2802 = t2647*t2504;
  t2806 = t2793 + t2797 + t2802;
  t2808 = Sin(var1[7]);
  t2820 = 0. + t2808;
  t2839 = Cos(var1[7]);
  t2854 = -1.*t2839;
  t2857 = 0. + t2854;
  t2970 = Cos(var1[8]);
  t3033 = Sin(var1[8]);
  t3040 = 0. + t3033;
  t2975 = t2839*t2970;
  t2987 = 0. + t2975;
  t3002 = t2970*t2808;
  t3013 = 0. + t3002;
  t2988 = t2987*t1146;
  t3021 = t3013*t1205;
  t3049 = t3040*t41;
  t3056 = t2988 + t3021 + t3049;
  t3087 = t3040*t968;
  t3099 = t2987*t1746;
  t3136 = t3013*t2354;
  t3162 = t3087 + t3099 + t3136;
  t3163 = t3040*t1050;
  t3164 = t2987*t2410;
  t3170 = t3013*t2504;
  t3183 = t3163 + t3164 + t3170;
  p_output1[0]=0. - 1.*t41;
  p_output1[1]=0. - 1.*t968;
  p_output1[2]=0. - 1.*t1050;
  p_output1[3]=0. + t1146*t1179 + t1194*t1205;
  p_output1[4]=0. + t1179*t1746 + t1194*t2354;
  p_output1[5]=0. + t1179*t2410 + t1194*t2504;
  p_output1[6]=t2712;
  p_output1[7]=t2786;
  p_output1[8]=t2806;
  p_output1[9]=t2712;
  p_output1[10]=t2786;
  p_output1[11]=t2806;
  p_output1[12]=t2712;
  p_output1[13]=t2786;
  p_output1[14]=t2806;
  p_output1[15]=t2712;
  p_output1[16]=t2786;
  p_output1[17]=t2806;
  p_output1[18]=t2712;
  p_output1[19]=t2786;
  p_output1[20]=t2806;
  p_output1[21]=t41;
  p_output1[22]=t968;
  p_output1[23]=t1050;
  p_output1[24]=0. + t1146*t2820 + t1205*t2857;
  p_output1[25]=0. + t1746*t2820 + t2354*t2857;
  p_output1[26]=0. + t2410*t2820 + t2504*t2857;
  p_output1[27]=t3056;
  p_output1[28]=t3162;
  p_output1[29]=t3183;
  p_output1[30]=t3056;
  p_output1[31]=t3162;
  p_output1[32]=t3183;
  p_output1[33]=t3056;
  p_output1[34]=t3162;
  p_output1[35]=t3183;
  p_output1[36]=t3056;
  p_output1[37]=t3162;
  p_output1[38]=t3183;
  p_output1[39]=t3056;
  p_output1[40]=t3162;
  p_output1[41]=t3183;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 14, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Jw_LeftToeBottom_to_RightToeBottom_mex.hh"

namespace SymExpression
{

void Jw_LeftToeBottom_to_RightToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
