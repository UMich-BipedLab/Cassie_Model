/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:17:37 GMT-05:00
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
  double t215;
  double t660;
  double t1152;
  double t1479;
  double t1495;
  double t1523;
  double t1655;
  double t1772;
  double t2183;
  double t2269;
  double t2309;
  double t2326;
  double t2044;
  double t2063;
  double t2117;
  double t2521;
  double t2539;
  double t2540;
  double t3066;
  double t3142;
  double t3150;
  double t3355;
  double t2912;
  double t2980;
  double t3020;
  double t3581;
  double t3585;
  double t3665;
  double t4076;
  double t4087;
  double t4094;
  double t4225;
  double t3879;
  double t3978;
  double t4058;
  double t4479;
  double t4483;
  double t4493;
  double t4832;
  double t4918;
  double t4926;
  double t5036;
  double t4760;
  double t4770;
  double t4799;
  double t5132;
  double t5177;
  double t5285;
  double t762;
  double t1123;
  double t1136;
  double t1353;
  double t1390;
  double t1599;
  double t1663;
  double t1675;
  double t1899;
  double t1937;
  double t1986;
  double t2316;
  double t2330;
  double t2351;
  double t2548;
  double t2615;
  double t2678;
  double t6283;
  double t6343;
  double t6354;
  double t6385;
  double t6396;
  double t6429;
  double t3228;
  double t3373;
  double t3565;
  double t3669;
  double t3702;
  double t3718;
  double t6443;
  double t6472;
  double t6602;
  double t6792;
  double t6809;
  double t6870;
  double t4190;
  double t4257;
  double t4373;
  double t4549;
  double t4594;
  double t4653;
  double t7029;
  double t7107;
  double t7117;
  double t7442;
  double t7458;
  double t7467;
  double t5034;
  double t5079;
  double t5102;
  double t5374;
  double t5386;
  double t5420;
  double t7487;
  double t7489;
  double t7496;
  double t7501;
  double t7520;
  double t7521;
  double t7569;
  double t7570;
  double t7571;
  double t7577;
  double t7580;
  double t7581;
  double t7587;
  double t7589;
  double t7591;
  double t7632;
  double t7640;
  double t7644;
  double t7657;
  double t7659;
  double t7682;
  double t7702;
  double t7715;
  double t7719;
  double t7560;
  double t7561;
  double t7562;
  double t7566;
  double t7567;
  double t7575;
  double t7584;
  double t7625;
  double t7645;
  double t7698;
  double t7742;
  double t7748;
  double t7753;
  double t7768;
  double t7769;
  double t7787;
  double t7858;
  double t7874;
  double t7880;
  double t7885;
  double t7891;
  double t7894;
  double t1746;
  double t1994;
  double t2452;
  double t2717;
  double t3566;
  double t3775;
  double t4380;
  double t4720;
  double t5112;
  double t5452;
  double t5553;
  double t5559;
  double t5564;
  double t5593;
  double t5637;
  double t5653;
  double t5655;
  double t5677;
  double t7555;
  double t7559;
  double t5987;
  double t6256;
  double t6359;
  double t6442;
  double t6620;
  double t6884;
  double t7243;
  double t7480;
  double t7497;
  double t7522;
  double t7524;
  double t7525;
  double t7527;
  double t7532;
  double t7542;
  double t7543;
  double t7544;
  double t7547;
  double t7908;
  double t7946;
  double t7948;
  double t7950;
  double t7952;
  double t7925;
  double t7976;
  double t7977;
  double t7954;
  double t7959;
  double t7964;
  double t7943;
  double t7945;
  double t7982;
  double t7984;
  double t7985;
  double t7993;
  double t8004;
  double t8005;
  double t8011;
  double t8014;
  double t8017;
  double t8026;
  double t8028;
  double t8030;
  double t8042;
  double t8043;
  double t8045;
  double t8050;
  double t8053;
  double t8056;
  double t8064;
  double t8066;
  double t8069;
  double t8079;
  double t8080;
  double t8081;
  double t8083;
  double t8084;
  double t8085;
  double t8091;
  double t8092;
  double t8095;
  double t8105;
  double t8107;
  double t8108;
  double t8112;
  double t8113;
  double t8114;
  double t8119;
  double t8120;
  double t8123;
  t215 = Cos(var1[7]);
  t660 = Cos(var1[8]);
  t1152 = Sin(var1[8]);
  t1479 = Cos(var1[9]);
  t1495 = -1.*t1479;
  t1523 = 1. + t1495;
  t1655 = Sin(var1[9]);
  t1772 = Sin(var1[7]);
  t2183 = Cos(var1[10]);
  t2269 = -1.*t2183;
  t2309 = 1. + t2269;
  t2326 = Sin(var1[10]);
  t2044 = t215*t1479*t1152;
  t2063 = -1.*t1772*t1655;
  t2117 = t2044 + t2063;
  t2521 = -1.*t1479*t1772;
  t2539 = -1.*t215*t1152*t1655;
  t2540 = t2521 + t2539;
  t3066 = Cos(var1[11]);
  t3142 = -1.*t3066;
  t3150 = 1. + t3142;
  t3355 = Sin(var1[11]);
  t2912 = t2183*t2117;
  t2980 = t2540*t2326;
  t3020 = t2912 + t2980;
  t3581 = t2183*t2540;
  t3585 = -1.*t2117*t2326;
  t3665 = t3581 + t3585;
  t4076 = Cos(var1[12]);
  t4087 = -1.*t4076;
  t4094 = 1. + t4087;
  t4225 = Sin(var1[12]);
  t3879 = t3066*t3020;
  t3978 = t3665*t3355;
  t4058 = t3879 + t3978;
  t4479 = t3066*t3665;
  t4483 = -1.*t3020*t3355;
  t4493 = t4479 + t4483;
  t4832 = Cos(var1[13]);
  t4918 = -1.*t4832;
  t4926 = 1. + t4918;
  t5036 = Sin(var1[13]);
  t4760 = t4076*t4058;
  t4770 = t4493*t4225;
  t4799 = t4760 + t4770;
  t5132 = t4076*t4493;
  t5177 = -1.*t4058*t4225;
  t5285 = t5132 + t5177;
  t762 = -1.*t660;
  t1123 = 1. + t762;
  t1136 = -0.135*t1123;
  t1353 = 0.049*t1152;
  t1390 = 0. + t1136 + t1353;
  t1599 = -0.049*t1523;
  t1663 = -0.09*t1655;
  t1675 = 0. + t1599 + t1663;
  t1899 = -0.09*t1523;
  t1937 = 0.049*t1655;
  t1986 = 0. + t1899 + t1937;
  t2316 = -0.049*t2309;
  t2330 = -0.21*t2326;
  t2351 = 0. + t2316 + t2330;
  t2548 = -0.21*t2309;
  t2615 = 0.049*t2326;
  t2678 = 0. + t2548 + t2615;
  t6283 = t1479*t1772*t1152;
  t6343 = t215*t1655;
  t6354 = t6283 + t6343;
  t6385 = t215*t1479;
  t6396 = -1.*t1772*t1152*t1655;
  t6429 = t6385 + t6396;
  t3228 = -0.0016*t3150;
  t3373 = -0.2707*t3355;
  t3565 = 0. + t3228 + t3373;
  t3669 = -0.2707*t3150;
  t3702 = 0.0016*t3355;
  t3718 = 0. + t3669 + t3702;
  t6443 = t2183*t6354;
  t6472 = t6429*t2326;
  t6602 = t6443 + t6472;
  t6792 = t2183*t6429;
  t6809 = -1.*t6354*t2326;
  t6870 = t6792 + t6809;
  t4190 = 0.0184*t4094;
  t4257 = -0.7055*t4225;
  t4373 = 0. + t4190 + t4257;
  t4549 = -0.7055*t4094;
  t4594 = -0.0184*t4225;
  t4653 = 0. + t4549 + t4594;
  t7029 = t3066*t6602;
  t7107 = t6870*t3355;
  t7117 = t7029 + t7107;
  t7442 = t3066*t6870;
  t7458 = -1.*t6602*t3355;
  t7467 = t7442 + t7458;
  t5034 = -0.0216*t4926;
  t5079 = -1.1135*t5036;
  t5102 = 0. + t5034 + t5079;
  t5374 = -1.1135*t4926;
  t5386 = 0.0216*t5036;
  t5420 = 0. + t5374 + t5386;
  t7487 = t4076*t7117;
  t7489 = t7467*t4225;
  t7496 = t7487 + t7489;
  t7501 = t4076*t7467;
  t7520 = -1.*t7117*t4225;
  t7521 = t7501 + t7520;
  t7569 = t660*t1479*t2183;
  t7570 = -1.*t660*t1655*t2326;
  t7571 = t7569 + t7570;
  t7577 = -1.*t660*t2183*t1655;
  t7580 = -1.*t660*t1479*t2326;
  t7581 = t7577 + t7580;
  t7587 = t3066*t7571;
  t7589 = t7581*t3355;
  t7591 = t7587 + t7589;
  t7632 = t3066*t7581;
  t7640 = -1.*t7571*t3355;
  t7644 = t7632 + t7640;
  t7657 = t4076*t7591;
  t7659 = t7644*t4225;
  t7682 = t7657 + t7659;
  t7702 = t4076*t7644;
  t7715 = -1.*t7591*t4225;
  t7719 = t7702 + t7715;
  t7560 = 0.049*t660;
  t7561 = -0.004500000000000004*t1152;
  t7562 = t660*t1675;
  t7566 = t660*t1479*t2351;
  t7567 = -1.*t660*t1655*t2678;
  t7575 = t7571*t3565;
  t7584 = t7581*t3718;
  t7625 = t7591*t4373;
  t7645 = t7644*t4653;
  t7698 = t7682*t5102;
  t7742 = t7719*t5420;
  t7748 = t4832*t7682;
  t7753 = t7719*t5036;
  t7768 = t7748 + t7753;
  t7769 = 0.0306*t7768;
  t7787 = t4832*t7719;
  t7858 = -1.*t7682*t5036;
  t7874 = t7787 + t7858;
  t7880 = -1.1312*t7874;
  t7885 = 0. + t7560 + t7561 + t7562 + t7566 + t7567 + t7575 + t7584 + t7625 + t7645 + t7698 + t7742 + t7769 + t7880;
  t7891 = -1.*t215;
  t7894 = 0. + t7891;
  t1746 = t215*t1152*t1675;
  t1994 = -1.*t1772*t1986;
  t2452 = t2117*t2351;
  t2717 = t2540*t2678;
  t3566 = t3020*t3565;
  t3775 = t3665*t3718;
  t4380 = t4058*t4373;
  t4720 = t4493*t4653;
  t5112 = t4799*t5102;
  t5452 = t5285*t5420;
  t5553 = t4832*t4799;
  t5559 = t5285*t5036;
  t5564 = t5553 + t5559;
  t5593 = 0.0306*t5564;
  t5637 = t4832*t5285;
  t5653 = -1.*t4799*t5036;
  t5655 = t5637 + t5653;
  t5677 = -1.1312*t5655;
  t7555 = -1.*t1772;
  t7559 = 0. + t7555;
  t5987 = -1.*t1772*t1152*t1675;
  t6256 = -1.*t215*t1986;
  t6359 = -1.*t6354*t2351;
  t6442 = -1.*t6429*t2678;
  t6620 = -1.*t6602*t3565;
  t6884 = -1.*t6870*t3718;
  t7243 = -1.*t7117*t4373;
  t7480 = -1.*t7467*t4653;
  t7497 = -1.*t7496*t5102;
  t7522 = -1.*t7521*t5420;
  t7524 = t4832*t7496;
  t7525 = t7521*t5036;
  t7527 = t7524 + t7525;
  t7532 = -0.0306*t7527;
  t7542 = t4832*t7521;
  t7543 = -1.*t7496*t5036;
  t7544 = t7542 + t7543;
  t7547 = 1.1312*t7544;
  t7908 = 0.004500000000000004*t215*t660;
  t7946 = 0.049*t660*t1479;
  t7948 = -0.09*t660*t1655;
  t7950 = 0. + t7946 + t7561 + t7948 + t7566 + t7567 + t7575 + t7584 + t7625 + t7645 + t7698 + t7742 + t7769 + t7880;
  t7952 = 0. + t1152;
  t7925 = -0.004500000000000004*t660*t1772;
  t7976 = t660*t1772;
  t7977 = 0. + t7976;
  t7954 = 0.049*t2117;
  t7959 = 0.09*t2540;
  t7964 = 0. + t7908 + t7954 + t7959 + t2452 + t2717 + t3566 + t3775 + t4380 + t4720 + t5112 + t5452 + t5593 + t5677;
  t7943 = -1.*t215*t660;
  t7945 = 0. + t7943;
  t7982 = -0.049*t6354;
  t7984 = -0.09*t6429;
  t7985 = 0. + t7925 + t7982 + t7984 + t6359 + t6442 + t6620 + t6884 + t7243 + t7480 + t7497 + t7522 + t7532 + t7547;
  t7993 = 0.21*t7581;
  t8004 = 0.049*t7571;
  t8005 = 0. + t7993 + t8004 + t7575 + t7584 + t7625 + t7645 + t7698 + t7742 + t7769 + t7880;
  t8011 = 0.21*t3665;
  t8014 = 0.049*t3020;
  t8017 = 0. + t8011 + t8014 + t3566 + t3775 + t4380 + t4720 + t5112 + t5452 + t5593 + t5677;
  t8026 = -0.21*t6870;
  t8028 = -0.049*t6602;
  t8030 = 0. + t8026 + t8028 + t6620 + t6884 + t7243 + t7480 + t7497 + t7522 + t7532 + t7547;
  t8042 = 0.0016*t7591;
  t8043 = 0.2707*t7644;
  t8045 = 0. + t8042 + t8043 + t7625 + t7645 + t7698 + t7742 + t7769 + t7880;
  t8050 = 0.0016*t4058;
  t8053 = 0.2707*t4493;
  t8056 = 0. + t8050 + t8053 + t4380 + t4720 + t5112 + t5452 + t5593 + t5677;
  t8064 = -0.0016*t7117;
  t8066 = -0.2707*t7467;
  t8069 = 0. + t8064 + t8066 + t7243 + t7480 + t7497 + t7522 + t7532 + t7547;
  t8079 = 0.7055*t7719;
  t8080 = -0.0184*t7682;
  t8081 = 0. + t8079 + t8080 + t7698 + t7742 + t7769 + t7880;
  t8083 = 0.7055*t5285;
  t8084 = -0.0184*t4799;
  t8085 = 0. + t8083 + t8084 + t5112 + t5452 + t5593 + t5677;
  t8091 = -0.7055*t7521;
  t8092 = 0.0184*t7496;
  t8095 = 0. + t8091 + t8092 + t7497 + t7522 + t7532 + t7547;
  t8105 = 0.052199999999999996*t7768;
  t8107 = -0.01770000000000005*t7874;
  t8108 = 0. + t8105 + t8107;
  t8112 = 0.052199999999999996*t5564;
  t8113 = -0.01770000000000005*t5655;
  t8114 = 0. + t8112 + t8113;
  t8119 = -0.052199999999999996*t7527;
  t8120 = 0.01770000000000005*t7544;
  t8123 = 0. + t8119 + t8120;
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
  p_output1[21]=0. - 1.*(0. + t1746 + t1994 + 0.135*t215 + t1390*t215 + t2452 + t2717 + t3566 + t3775 + t4380 + t4720 + t5112 + t5452 + t5593 + t5677 - 0.1305*t215*t660);
  p_output1[22]=0. - 0.135*t1772 - 1.*t1390*t1772 + t5987 + t6256 + t6359 + t6442 + 0.1305*t1772*t660 + t6620 + t6884 + t7243 + t7480 + t7497 + t7522 + t7532 + t7547;
  p_output1[23]=0.;
  p_output1[24]=0. + t7559*t7885;
  p_output1[25]=0. - 1.*t7885*t7894;
  p_output1[26]=t7894*(0. + t1746 - 0.09*t1772 + t1994 + 0.049*t1152*t215 + t2452 + t2717 + t3566 + t3775 + t4380 + t4720 + t5112 + t5452 + t5593 + t5677 + t7908) - 1.*t7559*(0. - 0.049*t1152*t1772 - 0.09*t215 + t5987 + t6256 + t6359 + t6442 + t6620 + t6884 + t7243 + t7480 + t7497 + t7522 + t7532 + t7547 + t7925);
  p_output1[27]=t7945*t7950 - 1.*t7952*t7964;
  p_output1[28]=-1.*t7950*t7977 + t7952*t7985;
  p_output1[29]=t7964*t7977 - 1.*t7945*t7985;
  p_output1[30]=t7945*t8005 - 1.*t7952*t8017;
  p_output1[31]=-1.*t7977*t8005 + t7952*t8030;
  p_output1[32]=t7977*t8017 - 1.*t7945*t8030;
  p_output1[33]=t7945*t8045 - 1.*t7952*t8056;
  p_output1[34]=-1.*t7977*t8045 + t7952*t8069;
  p_output1[35]=t7977*t8056 - 1.*t7945*t8069;
  p_output1[36]=t7945*t8081 - 1.*t7952*t8085;
  p_output1[37]=-1.*t7977*t8081 + t7952*t8095;
  p_output1[38]=t7977*t8085 - 1.*t7945*t8095;
  p_output1[39]=t7945*t8108 - 1.*t7952*t8114;
  p_output1[40]=-1.*t7977*t8108 + t7952*t8123;
  p_output1[41]=t7977*t8114 - 1.*t7945*t8123;
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

#include "Jv_MultisenseIMU_to_RightToeBottom_mex.hh"

namespace SymExpression
{

void Jv_MultisenseIMU_to_RightToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
