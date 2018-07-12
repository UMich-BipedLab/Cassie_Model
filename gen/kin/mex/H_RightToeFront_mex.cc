/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:34:19 GMT-04:00
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
  double t32;
  double t230;
  double t372;
  double t365;
  double t378;
  double t57;
  double t58;
  double t128;
  double t166;
  double t505;
  double t367;
  double t415;
  double t436;
  double t519;
  double t528;
  double t533;
  double t465;
  double t560;
  double t595;
  double t1241;
  double t1196;
  double t1199;
  double t1230;
  double t1191;
  double t1242;
  double t1247;
  double t1264;
  double t1357;
  double t1240;
  double t1327;
  double t1335;
  double t1180;
  double t1403;
  double t1412;
  double t1429;
  double t1470;
  double t1355;
  double t1446;
  double t1462;
  double t1174;
  double t1480;
  double t1487;
  double t1498;
  double t1563;
  double t1464;
  double t1503;
  double t1504;
  double t1166;
  double t1564;
  double t1566;
  double t1583;
  double t1666;
  double t1516;
  double t1585;
  double t1638;
  double t1144;
  double t1684;
  double t1687;
  double t1690;
  double t728;
  double t738;
  double t791;
  double t885;
  double t899;
  double t900;
  double t801;
  double t905;
  double t909;
  double t1812;
  double t1847;
  double t1887;
  double t1924;
  double t1927;
  double t1950;
  double t1911;
  double t1970;
  double t1975;
  double t1990;
  double t2012;
  double t2037;
  double t1983;
  double t2044;
  double t2045;
  double t2065;
  double t2075;
  double t2089;
  double t2056;
  double t2096;
  double t2136;
  double t2164;
  double t2165;
  double t2174;
  double t2157;
  double t2204;
  double t2237;
  double t2311;
  double t2334;
  double t2390;
  double t985;
  double t999;
  double t1080;
  double t2540;
  double t2547;
  double t2563;
  double t2571;
  double t2576;
  double t2589;
  double t2564;
  double t2598;
  double t2599;
  double t2702;
  double t2705;
  double t2712;
  double t2693;
  double t2713;
  double t2714;
  double t2768;
  double t2815;
  double t2845;
  double t2748;
  double t2866;
  double t2888;
  double t2897;
  double t2900;
  double t2912;
  double t2890;
  double t2923;
  double t2931;
  double t2946;
  double t2954;
  double t2956;
  double t1648;
  double t1720;
  double t1722;
  double t1771;
  double t1777;
  double t1778;
  double t2273;
  double t2394;
  double t2407;
  double t2451;
  double t2453;
  double t2477;
  double t2941;
  double t2957;
  double t2959;
  double t3002;
  double t3004;
  double t3011;
  double t3198;
  double t3208;
  double t3505;
  double t3524;
  double t3817;
  double t3828;
  double t3925;
  double t4006;
  double t4107;
  double t4141;
  double t4302;
  double t4329;
  double t3212;
  double t3236;
  double t3330;
  double t3348;
  double t3353;
  double t3404;
  double t3409;
  double t3422;
  double t3424;
  double t3455;
  double t3462;
  double t3473;
  double t3560;
  double t3561;
  double t3574;
  double t3717;
  double t3724;
  double t3767;
  double t3875;
  double t3884;
  double t3886;
  double t3908;
  double t3910;
  double t3916;
  double t4023;
  double t4025;
  double t4030;
  double t4073;
  double t4082;
  double t4100;
  double t4143;
  double t4148;
  double t4160;
  double t4214;
  double t4249;
  double t4294;
  double t4333;
  double t4336;
  double t4339;
  double t4349;
  double t4360;
  double t4376;
  t32 = Cos(var1[3]);
  t230 = Cos(var1[5]);
  t372 = Sin(var1[3]);
  t365 = Sin(var1[4]);
  t378 = Sin(var1[5]);
  t57 = Cos(var1[4]);
  t58 = Sin(var1[14]);
  t128 = Cos(var1[14]);
  t166 = Sin(var1[13]);
  t505 = Cos(var1[13]);
  t367 = t32*t230*t365;
  t415 = t372*t378;
  t436 = t367 + t415;
  t519 = -1.*t230*t372;
  t528 = t32*t365*t378;
  t533 = t519 + t528;
  t465 = t166*t436;
  t560 = t505*t533;
  t595 = t465 + t560;
  t1241 = Cos(var1[15]);
  t1196 = t505*t436;
  t1199 = -1.*t166*t533;
  t1230 = t1196 + t1199;
  t1191 = Sin(var1[15]);
  t1242 = t128*t32*t57;
  t1247 = t58*t595;
  t1264 = t1242 + t1247;
  t1357 = Cos(var1[16]);
  t1240 = t1191*t1230;
  t1327 = t1241*t1264;
  t1335 = t1240 + t1327;
  t1180 = Sin(var1[16]);
  t1403 = t1241*t1230;
  t1412 = -1.*t1191*t1264;
  t1429 = t1403 + t1412;
  t1470 = Cos(var1[17]);
  t1355 = -1.*t1180*t1335;
  t1446 = t1357*t1429;
  t1462 = t1355 + t1446;
  t1174 = Sin(var1[17]);
  t1480 = t1357*t1335;
  t1487 = t1180*t1429;
  t1498 = t1480 + t1487;
  t1563 = Cos(var1[18]);
  t1464 = t1174*t1462;
  t1503 = t1470*t1498;
  t1504 = t1464 + t1503;
  t1166 = Sin(var1[18]);
  t1564 = t1470*t1462;
  t1566 = -1.*t1174*t1498;
  t1583 = t1564 + t1566;
  t1666 = Cos(var1[19]);
  t1516 = -1.*t1166*t1504;
  t1585 = t1563*t1583;
  t1638 = t1516 + t1585;
  t1144 = Sin(var1[19]);
  t1684 = t1563*t1504;
  t1687 = t1166*t1583;
  t1690 = t1684 + t1687;
  t728 = t230*t372*t365;
  t738 = -1.*t32*t378;
  t791 = t728 + t738;
  t885 = t32*t230;
  t899 = t372*t365*t378;
  t900 = t885 + t899;
  t801 = t166*t791;
  t905 = t505*t900;
  t909 = t801 + t905;
  t1812 = t505*t791;
  t1847 = -1.*t166*t900;
  t1887 = t1812 + t1847;
  t1924 = t128*t57*t372;
  t1927 = t58*t909;
  t1950 = t1924 + t1927;
  t1911 = t1191*t1887;
  t1970 = t1241*t1950;
  t1975 = t1911 + t1970;
  t1990 = t1241*t1887;
  t2012 = -1.*t1191*t1950;
  t2037 = t1990 + t2012;
  t1983 = -1.*t1180*t1975;
  t2044 = t1357*t2037;
  t2045 = t1983 + t2044;
  t2065 = t1357*t1975;
  t2075 = t1180*t2037;
  t2089 = t2065 + t2075;
  t2056 = t1174*t2045;
  t2096 = t1470*t2089;
  t2136 = t2056 + t2096;
  t2164 = t1470*t2045;
  t2165 = -1.*t1174*t2089;
  t2174 = t2164 + t2165;
  t2157 = -1.*t1166*t2136;
  t2204 = t1563*t2174;
  t2237 = t2157 + t2204;
  t2311 = t1563*t2136;
  t2334 = t1166*t2174;
  t2390 = t2311 + t2334;
  t985 = t57*t230*t166;
  t999 = t505*t57*t378;
  t1080 = t985 + t999;
  t2540 = t505*t57*t230;
  t2547 = -1.*t57*t166*t378;
  t2563 = t2540 + t2547;
  t2571 = -1.*t128*t365;
  t2576 = t58*t1080;
  t2589 = t2571 + t2576;
  t2564 = t1191*t2563;
  t2598 = t1241*t2589;
  t2599 = t2564 + t2598;
  t2702 = t1241*t2563;
  t2705 = -1.*t1191*t2589;
  t2712 = t2702 + t2705;
  t2693 = -1.*t1180*t2599;
  t2713 = t1357*t2712;
  t2714 = t2693 + t2713;
  t2768 = t1357*t2599;
  t2815 = t1180*t2712;
  t2845 = t2768 + t2815;
  t2748 = t1174*t2714;
  t2866 = t1470*t2845;
  t2888 = t2748 + t2866;
  t2897 = t1470*t2714;
  t2900 = -1.*t1174*t2845;
  t2912 = t2897 + t2900;
  t2890 = -1.*t1166*t2888;
  t2923 = t1563*t2912;
  t2931 = t2890 + t2923;
  t2946 = t1563*t2888;
  t2954 = t1166*t2912;
  t2956 = t2946 + t2954;
  t1648 = t1144*t1638;
  t1720 = t1666*t1690;
  t1722 = t1648 + t1720;
  t1771 = t1666*t1638;
  t1777 = -1.*t1144*t1690;
  t1778 = t1771 + t1777;
  t2273 = t1144*t2237;
  t2394 = t1666*t2390;
  t2407 = t2273 + t2394;
  t2451 = t1666*t2237;
  t2453 = -1.*t1144*t2390;
  t2477 = t2451 + t2453;
  t2941 = t1144*t2931;
  t2957 = t1666*t2956;
  t2959 = t2941 + t2957;
  t3002 = t1666*t2931;
  t3004 = -1.*t1144*t2956;
  t3011 = t3002 + t3004;
  t3198 = -1.*t128;
  t3208 = 1. + t3198;
  t3505 = -1.*t1241;
  t3524 = 1. + t3505;
  t3817 = -1.*t1357;
  t3828 = 1. + t3817;
  t3925 = -1.*t1470;
  t4006 = 1. + t3925;
  t4107 = -1.*t1563;
  t4141 = 1. + t4107;
  t4302 = -1.*t1666;
  t4329 = 1. + t4302;
  t3212 = -0.049*t3208;
  t3236 = -0.135*t58;
  t3330 = 0. + t3212 + t3236;
  t3348 = 0.135*t166;
  t3353 = 0. + t3348;
  t3404 = -1.*t505;
  t3409 = 1. + t3404;
  t3422 = -0.135*t3409;
  t3424 = 0. + t3422;
  t3455 = -0.135*t3208;
  t3462 = 0.049*t58;
  t3473 = 0. + t3455 + t3462;
  t3560 = -0.09*t3524;
  t3561 = 0.049*t1191;
  t3574 = 0. + t3560 + t3561;
  t3717 = -0.049*t3524;
  t3724 = -0.09*t1191;
  t3767 = 0. + t3717 + t3724;
  t3875 = -0.049*t3828;
  t3884 = -0.21*t1180;
  t3886 = 0. + t3875 + t3884;
  t3908 = -0.21*t3828;
  t3910 = 0.049*t1180;
  t3916 = 0. + t3908 + t3910;
  t4023 = -0.2707*t4006;
  t4025 = 0.0016*t1174;
  t4030 = 0. + t4023 + t4025;
  t4073 = -0.0016*t4006;
  t4082 = -0.2707*t1174;
  t4100 = 0. + t4073 + t4082;
  t4143 = 0.0184*t4141;
  t4148 = -0.7055*t1166;
  t4160 = 0. + t4143 + t4148;
  t4214 = -0.7055*t4141;
  t4249 = -0.0184*t1166;
  t4294 = 0. + t4214 + t4249;
  t4333 = -1.1135*t4329;
  t4336 = 0.0216*t1144;
  t4339 = 0. + t4333 + t4336;
  t4349 = -0.0216*t4329;
  t4360 = -1.1135*t1144;
  t4376 = 0. + t4349 + t4360;
  p_output1[0]=t32*t57*t58 - 1.*t128*t595;
  p_output1[1]=t372*t57*t58 - 1.*t128*t909;
  p_output1[2]=-1.*t1080*t128 - 1.*t365*t58;
  p_output1[3]=0.;
  p_output1[4]=0.642788*t1722 + 0.766044*t1778;
  p_output1[5]=0.642788*t2407 + 0.766044*t2477;
  p_output1[6]=0.642788*t2959 + 0.766044*t3011;
  p_output1[7]=0.;
  p_output1[8]=-0.766044*t1722 + 0.642788*t1778;
  p_output1[9]=-0.766044*t2407 + 0.642788*t2477;
  p_output1[10]=-0.766044*t2959 + 0.642788*t3011;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.088451*t1722 - 1.062256*t1778 + t1230*t3574 + t1264*t3767 + t1335*t3886 + t1429*t3916 + t1462*t4030 + t1498*t4100 + t1504*t4160 + t1583*t4294 + t1638*t4339 + t3353*t436 + t1690*t4376 + t3424*t533 + t32*t3330*t57 + t3473*t595 - 0.1305*(-1.*t32*t57*t58 + t128*t595) + var1[0];
  p_output1[13]=0. + 0.088451*t2407 - 1.062256*t2477 + t1887*t3574 + t1950*t3767 + t1975*t3886 + t2037*t3916 + t2045*t4030 + t2089*t4100 + t2136*t4160 + t2174*t4294 + t2237*t4339 + t2390*t4376 + t3330*t372*t57 + t3353*t791 + t3424*t900 + t3473*t909 - 0.1305*(-1.*t372*t57*t58 + t128*t909) + var1[1];
  p_output1[14]=0. + 0.088451*t2959 - 1.062256*t3011 + t1080*t3473 + t2563*t3574 - 1.*t3330*t365 + t2589*t3767 + t2599*t3886 + t2712*t3916 + t2714*t4030 + t2845*t4100 + t2888*t4160 + t2912*t4294 + t2931*t4339 + t2956*t4376 + t230*t3353*t57 + t3424*t378*t57 - 0.1305*(t1080*t128 + t365*t58) + var1[2];
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

#include "H_RightToeFront_mex.hh"

namespace SymExpression
{

void H_RightToeFront_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
