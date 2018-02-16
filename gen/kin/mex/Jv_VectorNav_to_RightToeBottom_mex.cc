/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:17:17 GMT-05:00
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
  double t29;
  double t198;
  double t451;
  double t627;
  double t657;
  double t761;
  double t796;
  double t867;
  double t1056;
  double t1057;
  double t1059;
  double t1094;
  double t933;
  double t962;
  double t967;
  double t1139;
  double t1166;
  double t1251;
  double t1306;
  double t1323;
  double t1326;
  double t1343;
  double t1290;
  double t1297;
  double t1304;
  double t1391;
  double t1392;
  double t1455;
  double t1665;
  double t1676;
  double t1694;
  double t1742;
  double t1559;
  double t1603;
  double t1616;
  double t1849;
  double t1853;
  double t1861;
  double t2212;
  double t2240;
  double t2241;
  double t2252;
  double t2118;
  double t2179;
  double t2206;
  double t2299;
  double t2300;
  double t2324;
  double t233;
  double t305;
  double t312;
  double t463;
  double t534;
  double t774;
  double t803;
  double t804;
  double t868;
  double t872;
  double t890;
  double t1076;
  double t1111;
  double t1132;
  double t1260;
  double t1263;
  double t1281;
  double t2689;
  double t2694;
  double t2700;
  double t2710;
  double t2722;
  double t2723;
  double t1337;
  double t1361;
  double t1385;
  double t1457;
  double t1491;
  double t1535;
  double t2727;
  double t2728;
  double t2732;
  double t2740;
  double t2744;
  double t2748;
  double t1715;
  double t1758;
  double t1832;
  double t1880;
  double t1934;
  double t1970;
  double t2758;
  double t2772;
  double t2776;
  double t2788;
  double t2791;
  double t2799;
  double t2244;
  double t2255;
  double t2289;
  double t2331;
  double t2333;
  double t2335;
  double t2804;
  double t2807;
  double t2809;
  double t2818;
  double t2819;
  double t2823;
  double t2613;
  double t2668;
  double t2709;
  double t2724;
  double t2736;
  double t2752;
  double t2780;
  double t2803;
  double t2811;
  double t2830;
  double t2834;
  double t2837;
  double t2844;
  double t2849;
  double t2850;
  double t2860;
  double t2861;
  double t2866;
  double t848;
  double t928;
  double t1137;
  double t1287;
  double t1388;
  double t1536;
  double t1833;
  double t2071;
  double t2290;
  double t2340;
  double t2344;
  double t2354;
  double t2355;
  double t2356;
  double t2366;
  double t2389;
  double t2432;
  double t2437;
  double t2874;
  double t2877;
  double t2972;
  double t2975;
  double t2982;
  double t2999;
  double t3001;
  double t3003;
  double t3005;
  double t3006;
  double t3008;
  double t3015;
  double t3017;
  double t3019;
  double t3030;
  double t3032;
  double t3033;
  double t3041;
  double t3051;
  double t3054;
  double t2917;
  double t2947;
  double t2948;
  double t2949;
  double t2959;
  double t2971;
  double t2994;
  double t3004;
  double t3009;
  double t3029;
  double t3034;
  double t3071;
  double t3123;
  double t3130;
  double t3162;
  double t3163;
  double t3165;
  double t3170;
  double t3176;
  double t3180;
  double t3186;
  double t2889;
  double t2928;
  double t3210;
  double t3227;
  double t3319;
  double t3322;
  double t3325;
  double t3270;
  double t3294;
  double t3339;
  double t3358;
  double t3360;
  double t3366;
  double t3230;
  double t3252;
  double t3261;
  double t3450;
  double t3462;
  double t3482;
  double t3517;
  double t3523;
  double t3524;
  double t3421;
  double t3423;
  double t3429;
  double t3631;
  double t3632;
  double t3643;
  double t3679;
  double t3694;
  double t3709;
  double t3602;
  double t3621;
  double t3623;
  double t3799;
  double t3805;
  double t3821;
  double t3883;
  double t3911;
  double t3922;
  double t3763;
  double t3783;
  double t3786;
  double t4333;
  double t4351;
  double t4364;
  double t4404;
  double t4437;
  double t4485;
  double t4060;
  double t4072;
  double t4101;
  t29 = Sin(var1[7]);
  t198 = Cos(var1[8]);
  t451 = Sin(var1[8]);
  t627 = Cos(var1[9]);
  t657 = -1.*t627;
  t761 = 1. + t657;
  t796 = Sin(var1[9]);
  t867 = Cos(var1[7]);
  t1056 = Cos(var1[10]);
  t1057 = -1.*t1056;
  t1059 = 1. + t1057;
  t1094 = Sin(var1[10]);
  t933 = t627*t29*t451;
  t962 = t867*t796;
  t967 = t933 + t962;
  t1139 = t867*t627;
  t1166 = -1.*t29*t451*t796;
  t1251 = t1139 + t1166;
  t1306 = Cos(var1[11]);
  t1323 = -1.*t1306;
  t1326 = 1. + t1323;
  t1343 = Sin(var1[11]);
  t1290 = t1056*t967;
  t1297 = t1251*t1094;
  t1304 = t1290 + t1297;
  t1391 = t1056*t1251;
  t1392 = -1.*t967*t1094;
  t1455 = t1391 + t1392;
  t1665 = Cos(var1[12]);
  t1676 = -1.*t1665;
  t1694 = 1. + t1676;
  t1742 = Sin(var1[12]);
  t1559 = t1306*t1304;
  t1603 = t1455*t1343;
  t1616 = t1559 + t1603;
  t1849 = t1306*t1455;
  t1853 = -1.*t1304*t1343;
  t1861 = t1849 + t1853;
  t2212 = Cos(var1[13]);
  t2240 = -1.*t2212;
  t2241 = 1. + t2240;
  t2252 = Sin(var1[13]);
  t2118 = t1665*t1616;
  t2179 = t1861*t1742;
  t2206 = t2118 + t2179;
  t2299 = t1665*t1861;
  t2300 = -1.*t1616*t1742;
  t2324 = t2299 + t2300;
  t233 = -1.*t198;
  t305 = 1. + t233;
  t312 = -0.135*t305;
  t463 = 0.049*t451;
  t534 = 0. + t312 + t463;
  t774 = -0.049*t761;
  t803 = -0.09*t796;
  t804 = 0. + t774 + t803;
  t868 = -0.09*t761;
  t872 = 0.049*t796;
  t890 = 0. + t868 + t872;
  t1076 = -0.049*t1059;
  t1111 = -0.21*t1094;
  t1132 = 0. + t1076 + t1111;
  t1260 = -0.21*t1059;
  t1263 = 0.049*t1094;
  t1281 = 0. + t1260 + t1263;
  t2689 = t867*t627*t451;
  t2694 = -1.*t29*t796;
  t2700 = t2689 + t2694;
  t2710 = -1.*t627*t29;
  t2722 = -1.*t867*t451*t796;
  t2723 = t2710 + t2722;
  t1337 = -0.0016*t1326;
  t1361 = -0.2707*t1343;
  t1385 = 0. + t1337 + t1361;
  t1457 = -0.2707*t1326;
  t1491 = 0.0016*t1343;
  t1535 = 0. + t1457 + t1491;
  t2727 = t1056*t2700;
  t2728 = t2723*t1094;
  t2732 = t2727 + t2728;
  t2740 = t1056*t2723;
  t2744 = -1.*t2700*t1094;
  t2748 = t2740 + t2744;
  t1715 = 0.0184*t1694;
  t1758 = -0.7055*t1742;
  t1832 = 0. + t1715 + t1758;
  t1880 = -0.7055*t1694;
  t1934 = -0.0184*t1742;
  t1970 = 0. + t1880 + t1934;
  t2758 = t1306*t2732;
  t2772 = t2748*t1343;
  t2776 = t2758 + t2772;
  t2788 = t1306*t2748;
  t2791 = -1.*t2732*t1343;
  t2799 = t2788 + t2791;
  t2244 = -0.0216*t2241;
  t2255 = -1.1135*t2252;
  t2289 = 0. + t2244 + t2255;
  t2331 = -1.1135*t2241;
  t2333 = 0.0216*t2252;
  t2335 = 0. + t2331 + t2333;
  t2804 = t1665*t2776;
  t2807 = t2799*t1742;
  t2809 = t2804 + t2807;
  t2818 = t1665*t2799;
  t2819 = -1.*t2776*t1742;
  t2823 = t2818 + t2819;
  t2613 = -1.*t867*t451*t804;
  t2668 = t29*t890;
  t2709 = -1.*t2700*t1132;
  t2724 = -1.*t2723*t1281;
  t2736 = -1.*t2732*t1385;
  t2752 = -1.*t2748*t1535;
  t2780 = -1.*t2776*t1832;
  t2803 = -1.*t2799*t1970;
  t2811 = -1.*t2809*t2289;
  t2830 = -1.*t2823*t2335;
  t2834 = t2212*t2809;
  t2837 = t2823*t2252;
  t2844 = t2834 + t2837;
  t2849 = -0.0306*t2844;
  t2850 = t2212*t2823;
  t2860 = -1.*t2809*t2252;
  t2861 = t2850 + t2860;
  t2866 = 1.1312*t2861;
  t848 = -1.*t29*t451*t804;
  t928 = -1.*t867*t890;
  t1137 = -1.*t967*t1132;
  t1287 = -1.*t1251*t1281;
  t1388 = -1.*t1304*t1385;
  t1536 = -1.*t1455*t1535;
  t1833 = -1.*t1616*t1832;
  t2071 = -1.*t1861*t1970;
  t2290 = -1.*t2206*t2289;
  t2340 = -1.*t2324*t2335;
  t2344 = t2212*t2206;
  t2354 = t2324*t2252;
  t2355 = t2344 + t2354;
  t2356 = -0.0306*t2355;
  t2366 = t2212*t2324;
  t2389 = -1.*t2206*t2252;
  t2432 = t2366 + t2389;
  t2437 = 1.1312*t2432;
  t2874 = -1.*t867;
  t2877 = 0. + t2874;
  t2972 = t198*t627*t1056;
  t2975 = -1.*t198*t796*t1094;
  t2982 = t2972 + t2975;
  t2999 = -1.*t198*t1056*t796;
  t3001 = -1.*t198*t627*t1094;
  t3003 = t2999 + t3001;
  t3005 = t1306*t2982;
  t3006 = t3003*t1343;
  t3008 = t3005 + t3006;
  t3015 = t1306*t3003;
  t3017 = -1.*t2982*t1343;
  t3019 = t3015 + t3017;
  t3030 = t1665*t3008;
  t3032 = t3019*t1742;
  t3033 = t3030 + t3032;
  t3041 = t1665*t3019;
  t3051 = -1.*t3008*t1742;
  t3054 = t3041 + t3051;
  t2917 = 0. + t29;
  t2947 = 0.049*t198;
  t2948 = -0.004500000000000004*t451;
  t2949 = t198*t804;
  t2959 = t198*t627*t1132;
  t2971 = -1.*t198*t796*t1281;
  t2994 = t2982*t1385;
  t3004 = t3003*t1535;
  t3009 = t3008*t1832;
  t3029 = t3019*t1970;
  t3034 = t3033*t2289;
  t3071 = t3054*t2335;
  t3123 = t2212*t3033;
  t3130 = t3054*t2252;
  t3162 = t3123 + t3130;
  t3163 = 0.0306*t3162;
  t3165 = t2212*t3054;
  t3170 = -1.*t3033*t2252;
  t3176 = t3165 + t3170;
  t3180 = -1.1312*t3176;
  t3186 = 0. + t2947 + t2948 + t2949 + t2959 + t2971 + t2994 + t3004 + t3009 + t3029 + t3034 + t3071 + t3163 + t3180;
  t2889 = -0.004500000000000004*t867*t198;
  t2928 = -0.004500000000000004*t198*t29;
  t3210 = t198*t29;
  t3227 = 0. + t3210;
  t3319 = -0.049*t967;
  t3322 = -0.09*t1251;
  t3325 = 0. + t2928 + t3319 + t3322 + t1137 + t1287 + t1388 + t1536 + t1833 + t2071 + t2290 + t2340 + t2356 + t2437;
  t3270 = t867*t198;
  t3294 = 0. + t3270;
  t3339 = 0.049*t198*t627;
  t3358 = -0.09*t198*t796;
  t3360 = 0. + t3339 + t2948 + t3358 + t2959 + t2971 + t2994 + t3004 + t3009 + t3029 + t3034 + t3071 + t3163 + t3180;
  t3366 = 0. + t451;
  t3230 = -0.049*t2700;
  t3252 = -0.09*t2723;
  t3261 = 0. + t2889 + t3230 + t3252 + t2709 + t2724 + t2736 + t2752 + t2780 + t2803 + t2811 + t2830 + t2849 + t2866;
  t3450 = -0.21*t1455;
  t3462 = -0.049*t1304;
  t3482 = 0. + t3450 + t3462 + t1388 + t1536 + t1833 + t2071 + t2290 + t2340 + t2356 + t2437;
  t3517 = 0.21*t3003;
  t3523 = 0.049*t2982;
  t3524 = 0. + t3517 + t3523 + t2994 + t3004 + t3009 + t3029 + t3034 + t3071 + t3163 + t3180;
  t3421 = -0.21*t2748;
  t3423 = -0.049*t2732;
  t3429 = 0. + t3421 + t3423 + t2736 + t2752 + t2780 + t2803 + t2811 + t2830 + t2849 + t2866;
  t3631 = -0.0016*t1616;
  t3632 = -0.2707*t1861;
  t3643 = 0. + t3631 + t3632 + t1833 + t2071 + t2290 + t2340 + t2356 + t2437;
  t3679 = 0.0016*t3008;
  t3694 = 0.2707*t3019;
  t3709 = 0. + t3679 + t3694 + t3009 + t3029 + t3034 + t3071 + t3163 + t3180;
  t3602 = -0.0016*t2776;
  t3621 = -0.2707*t2799;
  t3623 = 0. + t3602 + t3621 + t2780 + t2803 + t2811 + t2830 + t2849 + t2866;
  t3799 = -0.7055*t2324;
  t3805 = 0.0184*t2206;
  t3821 = 0. + t3799 + t3805 + t2290 + t2340 + t2356 + t2437;
  t3883 = 0.7055*t3054;
  t3911 = -0.0184*t3033;
  t3922 = 0. + t3883 + t3911 + t3034 + t3071 + t3163 + t3180;
  t3763 = -0.7055*t2823;
  t3783 = 0.0184*t2809;
  t3786 = 0. + t3763 + t3783 + t2811 + t2830 + t2849 + t2866;
  t4333 = -0.052199999999999996*t2355;
  t4351 = 0.01770000000000005*t2432;
  t4364 = 0. + t4333 + t4351;
  t4404 = 0.052199999999999996*t3162;
  t4437 = -0.01770000000000005*t3176;
  t4485 = 0. + t4404 + t4437;
  t4060 = -0.052199999999999996*t2844;
  t4072 = 0.01770000000000005*t2861;
  t4101 = 0. + t4060 + t4072;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0.;
  p_output1[22]=0. - 1.*(0. + t1137 + t1287 + t1388 + t1536 + t1833 + t2071 + t2290 + t2340 + t2356 + t2437 - 0.135*t29 + 0.1305*t198*t29 - 1.*t29*t534 + t848 + t928);
  p_output1[23]=0. + t2613 + t2668 + t2709 + t2724 + t2736 + t2752 + t2780 + t2803 + t2811 + t2830 + t2849 + t2866 - 0.135*t867 + 0.1305*t198*t867 - 1.*t534*t867;
  p_output1[24]=-1.*t2877*(0. + t2613 + t2668 + t2709 + t2724 + t2736 + t2752 + t2780 + t2803 + t2811 + t2830 + t2849 + t2866 + t2889 + 0.09*t29 - 0.049*t451*t867) + t2917*(0. + t1137 + t1287 + t1388 + t1536 + t1833 + t2071 + t2290 + t2340 + t2356 + t2437 + t2928 - 0.049*t29*t451 + t848 - 0.09*t867 + t928);
  p_output1[25]=0. + t2877*t3186;
  p_output1[26]=0. - 1.*t2917*t3186;
  p_output1[27]=-1.*t3227*t3261 + t3294*t3325;
  p_output1[28]=t3227*t3360 - 1.*t3325*t3366;
  p_output1[29]=-1.*t3294*t3360 + t3261*t3366;
  p_output1[30]=-1.*t3227*t3429 + t3294*t3482;
  p_output1[31]=-1.*t3366*t3482 + t3227*t3524;
  p_output1[32]=t3366*t3429 - 1.*t3294*t3524;
  p_output1[33]=-1.*t3227*t3623 + t3294*t3643;
  p_output1[34]=-1.*t3366*t3643 + t3227*t3709;
  p_output1[35]=t3366*t3623 - 1.*t3294*t3709;
  p_output1[36]=-1.*t3227*t3786 + t3294*t3821;
  p_output1[37]=-1.*t3366*t3821 + t3227*t3922;
  p_output1[38]=t3366*t3786 - 1.*t3294*t3922;
  p_output1[39]=-1.*t3227*t4101 + t3294*t4364;
  p_output1[40]=-1.*t3366*t4364 + t3227*t4485;
  p_output1[41]=t3366*t4101 - 1.*t3294*t4485;
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

#include "Jv_VectorNav_to_RightToeBottom_mex.hh"

namespace SymExpression
{

void Jv_VectorNav_to_RightToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
