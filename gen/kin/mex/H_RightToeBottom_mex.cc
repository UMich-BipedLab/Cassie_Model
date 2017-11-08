/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:13:13 GMT-05:00
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
  double t25;
  double t281;
  double t319;
  double t290;
  double t518;
  double t172;
  double t173;
  double t221;
  double t247;
  double t693;
  double t307;
  double t536;
  double t555;
  double t695;
  double t700;
  double t733;
  double t580;
  double t789;
  double t806;
  double t1276;
  double t1245;
  double t1252;
  double t1259;
  double t1220;
  double t1285;
  double t1289;
  double t1291;
  double t1423;
  double t1274;
  double t1297;
  double t1303;
  double t1218;
  double t1437;
  double t1458;
  double t1506;
  double t1627;
  double t1336;
  double t1530;
  double t1533;
  double t1203;
  double t1649;
  double t1651;
  double t1666;
  double t1759;
  double t1565;
  double t1716;
  double t1718;
  double t1193;
  double t1762;
  double t1763;
  double t1773;
  double t1806;
  double t1750;
  double t1777;
  double t1804;
  double t1167;
  double t1815;
  double t1839;
  double t1853;
  double t955;
  double t966;
  double t973;
  double t1024;
  double t1027;
  double t1051;
  double t982;
  double t1069;
  double t1071;
  double t2024;
  double t2033;
  double t2048;
  double t2097;
  double t2106;
  double t2118;
  double t2059;
  double t2128;
  double t2233;
  double t2336;
  double t2344;
  double t2441;
  double t2325;
  double t2463;
  double t2464;
  double t2496;
  double t2531;
  double t2534;
  double t2474;
  double t2561;
  double t2564;
  double t2599;
  double t2632;
  double t2644;
  double t2576;
  double t2647;
  double t2652;
  double t2672;
  double t2674;
  double t2683;
  double t1084;
  double t1107;
  double t1147;
  double t2858;
  double t2872;
  double t2886;
  double t2912;
  double t2927;
  double t2931;
  double t2908;
  double t2944;
  double t2956;
  double t2976;
  double t3002;
  double t3014;
  double t2974;
  double t3015;
  double t3017;
  double t3022;
  double t3023;
  double t3026;
  double t3018;
  double t3027;
  double t3029;
  double t3034;
  double t3035;
  double t3040;
  double t3030;
  double t3052;
  double t3054;
  double t3057;
  double t3061;
  double t3062;
  double t1805;
  double t1856;
  double t1892;
  double t1909;
  double t1955;
  double t1959;
  double t2656;
  double t2717;
  double t2749;
  double t2811;
  double t2820;
  double t2821;
  double t3056;
  double t3098;
  double t3106;
  double t3128;
  double t3129;
  double t3130;
  double t3167;
  double t3168;
  double t3257;
  double t3291;
  double t3431;
  double t3432;
  double t3541;
  double t3547;
  double t3608;
  double t3612;
  double t3693;
  double t3701;
  double t3170;
  double t3172;
  double t3173;
  double t3175;
  double t3180;
  double t3187;
  double t3191;
  double t3195;
  double t3199;
  double t3203;
  double t3205;
  double t3207;
  double t3298;
  double t3306;
  double t3337;
  double t3405;
  double t3412;
  double t3413;
  double t3435;
  double t3436;
  double t3437;
  double t3478;
  double t3493;
  double t3514;
  double t3548;
  double t3551;
  double t3555;
  double t3576;
  double t3582;
  double t3588;
  double t3620;
  double t3628;
  double t3631;
  double t3658;
  double t3663;
  double t3671;
  double t3710;
  double t3723;
  double t3774;
  double t3796;
  double t3803;
  double t3806;
  t25 = Cos(var1[3]);
  t281 = Cos(var1[5]);
  t319 = Sin(var1[3]);
  t290 = Sin(var1[4]);
  t518 = Sin(var1[5]);
  t172 = Cos(var1[4]);
  t173 = Sin(var1[14]);
  t221 = Cos(var1[14]);
  t247 = Sin(var1[13]);
  t693 = Cos(var1[13]);
  t307 = t25*t281*t290;
  t536 = t319*t518;
  t555 = t307 + t536;
  t695 = -1.*t281*t319;
  t700 = t25*t290*t518;
  t733 = t695 + t700;
  t580 = t247*t555;
  t789 = t693*t733;
  t806 = t580 + t789;
  t1276 = Cos(var1[15]);
  t1245 = t693*t555;
  t1252 = -1.*t247*t733;
  t1259 = t1245 + t1252;
  t1220 = Sin(var1[15]);
  t1285 = t221*t25*t172;
  t1289 = t173*t806;
  t1291 = t1285 + t1289;
  t1423 = Cos(var1[16]);
  t1274 = t1220*t1259;
  t1297 = t1276*t1291;
  t1303 = t1274 + t1297;
  t1218 = Sin(var1[16]);
  t1437 = t1276*t1259;
  t1458 = -1.*t1220*t1291;
  t1506 = t1437 + t1458;
  t1627 = Cos(var1[17]);
  t1336 = -1.*t1218*t1303;
  t1530 = t1423*t1506;
  t1533 = t1336 + t1530;
  t1203 = Sin(var1[17]);
  t1649 = t1423*t1303;
  t1651 = t1218*t1506;
  t1666 = t1649 + t1651;
  t1759 = Cos(var1[18]);
  t1565 = t1203*t1533;
  t1716 = t1627*t1666;
  t1718 = t1565 + t1716;
  t1193 = Sin(var1[18]);
  t1762 = t1627*t1533;
  t1763 = -1.*t1203*t1666;
  t1773 = t1762 + t1763;
  t1806 = Cos(var1[19]);
  t1750 = -1.*t1193*t1718;
  t1777 = t1759*t1773;
  t1804 = t1750 + t1777;
  t1167 = Sin(var1[19]);
  t1815 = t1759*t1718;
  t1839 = t1193*t1773;
  t1853 = t1815 + t1839;
  t955 = t281*t319*t290;
  t966 = -1.*t25*t518;
  t973 = t955 + t966;
  t1024 = t25*t281;
  t1027 = t319*t290*t518;
  t1051 = t1024 + t1027;
  t982 = t247*t973;
  t1069 = t693*t1051;
  t1071 = t982 + t1069;
  t2024 = t693*t973;
  t2033 = -1.*t247*t1051;
  t2048 = t2024 + t2033;
  t2097 = t221*t172*t319;
  t2106 = t173*t1071;
  t2118 = t2097 + t2106;
  t2059 = t1220*t2048;
  t2128 = t1276*t2118;
  t2233 = t2059 + t2128;
  t2336 = t1276*t2048;
  t2344 = -1.*t1220*t2118;
  t2441 = t2336 + t2344;
  t2325 = -1.*t1218*t2233;
  t2463 = t1423*t2441;
  t2464 = t2325 + t2463;
  t2496 = t1423*t2233;
  t2531 = t1218*t2441;
  t2534 = t2496 + t2531;
  t2474 = t1203*t2464;
  t2561 = t1627*t2534;
  t2564 = t2474 + t2561;
  t2599 = t1627*t2464;
  t2632 = -1.*t1203*t2534;
  t2644 = t2599 + t2632;
  t2576 = -1.*t1193*t2564;
  t2647 = t1759*t2644;
  t2652 = t2576 + t2647;
  t2672 = t1759*t2564;
  t2674 = t1193*t2644;
  t2683 = t2672 + t2674;
  t1084 = t172*t281*t247;
  t1107 = t693*t172*t518;
  t1147 = t1084 + t1107;
  t2858 = t693*t172*t281;
  t2872 = -1.*t172*t247*t518;
  t2886 = t2858 + t2872;
  t2912 = -1.*t221*t290;
  t2927 = t173*t1147;
  t2931 = t2912 + t2927;
  t2908 = t1220*t2886;
  t2944 = t1276*t2931;
  t2956 = t2908 + t2944;
  t2976 = t1276*t2886;
  t3002 = -1.*t1220*t2931;
  t3014 = t2976 + t3002;
  t2974 = -1.*t1218*t2956;
  t3015 = t1423*t3014;
  t3017 = t2974 + t3015;
  t3022 = t1423*t2956;
  t3023 = t1218*t3014;
  t3026 = t3022 + t3023;
  t3018 = t1203*t3017;
  t3027 = t1627*t3026;
  t3029 = t3018 + t3027;
  t3034 = t1627*t3017;
  t3035 = -1.*t1203*t3026;
  t3040 = t3034 + t3035;
  t3030 = -1.*t1193*t3029;
  t3052 = t1759*t3040;
  t3054 = t3030 + t3052;
  t3057 = t1759*t3029;
  t3061 = t1193*t3040;
  t3062 = t3057 + t3061;
  t1805 = t1167*t1804;
  t1856 = t1806*t1853;
  t1892 = t1805 + t1856;
  t1909 = t1806*t1804;
  t1955 = -1.*t1167*t1853;
  t1959 = t1909 + t1955;
  t2656 = t1167*t2652;
  t2717 = t1806*t2683;
  t2749 = t2656 + t2717;
  t2811 = t1806*t2652;
  t2820 = -1.*t1167*t2683;
  t2821 = t2811 + t2820;
  t3056 = t1167*t3054;
  t3098 = t1806*t3062;
  t3106 = t3056 + t3098;
  t3128 = t1806*t3054;
  t3129 = -1.*t1167*t3062;
  t3130 = t3128 + t3129;
  t3167 = -1.*t221;
  t3168 = 1. + t3167;
  t3257 = -1.*t1276;
  t3291 = 1. + t3257;
  t3431 = -1.*t1423;
  t3432 = 1. + t3431;
  t3541 = -1.*t1627;
  t3547 = 1. + t3541;
  t3608 = -1.*t1759;
  t3612 = 1. + t3608;
  t3693 = -1.*t1806;
  t3701 = 1. + t3693;
  t3170 = -0.049*t3168;
  t3172 = -0.135*t173;
  t3173 = 0. + t3170 + t3172;
  t3175 = 0.135*t247;
  t3180 = 0. + t3175;
  t3187 = -1.*t693;
  t3191 = 1. + t3187;
  t3195 = -0.135*t3191;
  t3199 = 0. + t3195;
  t3203 = -0.135*t3168;
  t3205 = 0.049*t173;
  t3207 = 0. + t3203 + t3205;
  t3298 = -0.09*t3291;
  t3306 = 0.049*t1220;
  t3337 = 0. + t3298 + t3306;
  t3405 = -0.049*t3291;
  t3412 = -0.09*t1220;
  t3413 = 0. + t3405 + t3412;
  t3435 = -0.049*t3432;
  t3436 = -0.21*t1218;
  t3437 = 0. + t3435 + t3436;
  t3478 = -0.21*t3432;
  t3493 = 0.049*t1218;
  t3514 = 0. + t3478 + t3493;
  t3548 = -0.2707*t3547;
  t3551 = 0.0016*t1203;
  t3555 = 0. + t3548 + t3551;
  t3576 = -0.0016*t3547;
  t3582 = -0.2707*t1203;
  t3588 = 0. + t3576 + t3582;
  t3620 = 0.0184*t3612;
  t3628 = -0.7055*t1193;
  t3631 = 0. + t3620 + t3628;
  t3658 = -0.7055*t3612;
  t3663 = -0.0184*t1193;
  t3671 = 0. + t3658 + t3663;
  t3710 = -1.1135*t3701;
  t3723 = 0.0216*t1167;
  t3774 = 0. + t3710 + t3723;
  t3796 = -0.0216*t3701;
  t3803 = -1.1135*t1167;
  t3806 = 0. + t3796 + t3803;
  p_output1[0]=t172*t173*t25 - 1.*t221*t806;
  p_output1[1]=-1.*t1071*t221 + t172*t173*t319;
  p_output1[2]=-1.*t1147*t221 - 1.*t173*t290;
  p_output1[3]=0.;
  p_output1[4]=0.642788*t1892 + 0.766044*t1959;
  p_output1[5]=0.642788*t2749 + 0.766044*t2821;
  p_output1[6]=0.642788*t3106 + 0.766044*t3130;
  p_output1[7]=0.;
  p_output1[8]=-0.766044*t1892 + 0.642788*t1959;
  p_output1[9]=-0.766044*t2749 + 0.642788*t2821;
  p_output1[10]=-0.766044*t3106 + 0.642788*t3130;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.0306*t1892 - 1.1312*t1959 + t172*t25*t3173 + t1259*t3337 + t1291*t3413 + t1303*t3437 + t1506*t3514 + t1533*t3555 + t1666*t3588 + t1718*t3631 + t1773*t3671 + t1804*t3774 + t1853*t3806 + t3180*t555 + t3199*t733 + t3207*t806 - 0.1305*(-1.*t172*t173*t25 + t221*t806) + var1[0];
  p_output1[13]=0. + 0.0306*t2749 - 1.1312*t2821 + t172*t3173*t319 - 0.1305*(t1071*t221 - 1.*t172*t173*t319) + t1051*t3199 + t1071*t3207 + t2048*t3337 + t2118*t3413 + t2233*t3437 + t2441*t3514 + t2464*t3555 + t2534*t3588 + t2564*t3631 + t2644*t3671 + t2652*t3774 + t2683*t3806 + t3180*t973 + var1[1];
  p_output1[14]=0. - 0.1305*(t1147*t221 + t173*t290) + 0.0306*t3106 - 1.1312*t3130 - 1.*t290*t3173 + t172*t281*t3180 + t1147*t3207 + t2886*t3337 + t2931*t3413 + t2956*t3437 + t3014*t3514 + t3017*t3555 + t3026*t3588 + t3029*t3631 + t3040*t3671 + t3054*t3774 + t3062*t3806 + t172*t3199*t518 + var1[2];
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

#include "H_RightToeBottom_mex.hh"

namespace SymExpression
{

void H_RightToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
