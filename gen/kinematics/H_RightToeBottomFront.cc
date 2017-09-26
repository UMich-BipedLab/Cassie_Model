/*
 * Automatically Generated from Mathematica.
 * Tue 26 Sep 2017 12:22:38 GMT-04:00
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
  double t763;
  double t1245;
  double t723;
  double t768;
  double t1334;
  double t1693;
  double t852;
  double t1374;
  double t1502;
  double t717;
  double t1745;
  double t1807;
  double t1814;
  double t3110;
  double t1509;
  double t2073;
  double t2407;
  double t706;
  double t3454;
  double t3505;
  double t4512;
  double t5619;
  double t3079;
  double t4871;
  double t4986;
  double t689;
  double t6736;
  double t7413;
  double t8406;
  double t8459;
  double t8717;
  double t9001;
  double t9094;
  double t9227;
  double t9340;
  double t10094;
  double t5226;
  double t10090;
  double t10092;
  double t665;
  double t10513;
  double t11328;
  double t11912;
  double t13240;
  double t10093;
  double t12301;
  double t13107;
  double t606;
  double t13248;
  double t13737;
  double t13804;
  double t14084;
  double t13224;
  double t13874;
  double t13958;
  double t560;
  double t14161;
  double t14168;
  double t14200;
  double t137;
  double t14434;
  double t14441;
  double t14443;
  double t14471;
  double t14515;
  double t14518;
  double t14464;
  double t14537;
  double t14591;
  double t14601;
  double t14610;
  double t14611;
  double t14598;
  double t14629;
  double t14634;
  double t14638;
  double t14648;
  double t14668;
  double t14671;
  double t14706;
  double t14732;
  double t14635;
  double t14739;
  double t14773;
  double t14807;
  double t14819;
  double t14828;
  double t14781;
  double t14844;
  double t14845;
  double t14860;
  double t14889;
  double t14904;
  double t14279;
  double t14850;
  double t14905;
  double t14914;
  double t14927;
  double t14937;
  double t14941;
  double t14983;
  double t14985;
  double t14989;
  double t14999;
  double t15003;
  double t15005;
  double t14998;
  double t15008;
  double t15010;
  double t15018;
  double t15021;
  double t15029;
  double t15045;
  double t15061;
  double t15068;
  double t15011;
  double t15069;
  double t15070;
  double t15077;
  double t15085;
  double t15088;
  double t15072;
  double t15092;
  double t15096;
  double t15105;
  double t15116;
  double t15119;
  double t15098;
  double t15121;
  double t15126;
  double t15129;
  double t15136;
  double t15138;
  double t13987;
  double t14220;
  double t14268;
  double t14280;
  double t14399;
  double t14410;
  double t14919;
  double t14946;
  double t14948;
  double t14951;
  double t14956;
  double t14963;
  double t15128;
  double t15149;
  double t15150;
  double t15169;
  double t15181;
  double t15198;
  double t15287;
  double t15290;
  double t15359;
  double t15365;
  double t15459;
  double t15460;
  double t15490;
  double t15492;
  double t15526;
  double t15541;
  double t15586;
  double t15588;
  double t14271;
  double t14414;
  double t14430;
  double t15293;
  double t15296;
  double t15303;
  double t15309;
  double t15313;
  double t15326;
  double t15327;
  double t15331;
  double t15332;
  double t15335;
  double t15336;
  double t15337;
  double t15338;
  double t15347;
  double t15349;
  double t15380;
  double t15381;
  double t15385;
  double t15389;
  double t15392;
  double t15403;
  double t15441;
  double t15442;
  double t15449;
  double t15462;
  double t15464;
  double t15465;
  double t15475;
  double t15484;
  double t15485;
  double t15495;
  double t15497;
  double t15505;
  double t15516;
  double t15517;
  double t15521;
  double t15543;
  double t15545;
  double t15555;
  double t15565;
  double t15573;
  double t15575;
  double t15593;
  double t15603;
  double t15604;
  double t15625;
  double t15626;
  double t15637;
  double t14950;
  double t14965;
  double t14972;
  double t15154;
  double t15200;
  double t15202;
  t763 = Cos(var1[5]);
  t1245 = Sin(var1[3]);
  t723 = Cos(var1[3]);
  t768 = Sin(var1[4]);
  t1334 = Sin(var1[5]);
  t1693 = Cos(var1[14]);
  t852 = t723*t763*t768;
  t1374 = t1245*t1334;
  t1502 = t852 + t1374;
  t717 = Sin(var1[14]);
  t1745 = -1.*t763*t1245;
  t1807 = t723*t768*t1334;
  t1814 = t1745 + t1807;
  t3110 = Cos(var1[15]);
  t1509 = t717*t1502;
  t2073 = t1693*t1814;
  t2407 = t1509 + t2073;
  t706 = Sin(var1[15]);
  t3454 = t1693*t1502;
  t3505 = -1.*t717*t1814;
  t4512 = t3454 + t3505;
  t5619 = Cos(var1[17]);
  t3079 = -1.*t706*t2407;
  t4871 = t3110*t4512;
  t4986 = t3079 + t4871;
  t689 = Sin(var1[17]);
  t6736 = Cos(var1[16]);
  t7413 = Cos(var1[4]);
  t8406 = t6736*t723*t7413;
  t8459 = Sin(var1[16]);
  t8717 = t3110*t2407;
  t9001 = t706*t4512;
  t9094 = t8717 + t9001;
  t9227 = t8459*t9094;
  t9340 = t8406 + t9227;
  t10094 = Cos(var1[18]);
  t5226 = t689*t4986;
  t10090 = t5619*t9340;
  t10092 = t5226 + t10090;
  t665 = Sin(var1[18]);
  t10513 = t5619*t4986;
  t11328 = -1.*t689*t9340;
  t11912 = t10513 + t11328;
  t13240 = Cos(var1[19]);
  t10093 = -1.*t665*t10092;
  t12301 = t10094*t11912;
  t13107 = t10093 + t12301;
  t606 = Sin(var1[19]);
  t13248 = t10094*t10092;
  t13737 = t665*t11912;
  t13804 = t13248 + t13737;
  t14084 = Cos(var1[20]);
  t13224 = t606*t13107;
  t13874 = t13240*t13804;
  t13958 = t13224 + t13874;
  t560 = Sin(var1[20]);
  t14161 = t13240*t13107;
  t14168 = -1.*t606*t13804;
  t14200 = t14161 + t14168;
  t137 = Sin(var1[21]);
  t14434 = t763*t1245*t768;
  t14441 = -1.*t723*t1334;
  t14443 = t14434 + t14441;
  t14471 = t723*t763;
  t14515 = t1245*t768*t1334;
  t14518 = t14471 + t14515;
  t14464 = t717*t14443;
  t14537 = t1693*t14518;
  t14591 = t14464 + t14537;
  t14601 = t1693*t14443;
  t14610 = -1.*t717*t14518;
  t14611 = t14601 + t14610;
  t14598 = -1.*t706*t14591;
  t14629 = t3110*t14611;
  t14634 = t14598 + t14629;
  t14638 = t6736*t7413*t1245;
  t14648 = t3110*t14591;
  t14668 = t706*t14611;
  t14671 = t14648 + t14668;
  t14706 = t8459*t14671;
  t14732 = t14638 + t14706;
  t14635 = t689*t14634;
  t14739 = t5619*t14732;
  t14773 = t14635 + t14739;
  t14807 = t5619*t14634;
  t14819 = -1.*t689*t14732;
  t14828 = t14807 + t14819;
  t14781 = -1.*t665*t14773;
  t14844 = t10094*t14828;
  t14845 = t14781 + t14844;
  t14860 = t10094*t14773;
  t14889 = t665*t14828;
  t14904 = t14860 + t14889;
  t14279 = Cos(var1[21]);
  t14850 = t606*t14845;
  t14905 = t13240*t14904;
  t14914 = t14850 + t14905;
  t14927 = t13240*t14845;
  t14937 = -1.*t606*t14904;
  t14941 = t14927 + t14937;
  t14983 = t7413*t763*t717;
  t14985 = t1693*t7413*t1334;
  t14989 = t14983 + t14985;
  t14999 = t1693*t7413*t763;
  t15003 = -1.*t7413*t717*t1334;
  t15005 = t14999 + t15003;
  t14998 = -1.*t706*t14989;
  t15008 = t3110*t15005;
  t15010 = t14998 + t15008;
  t15018 = -1.*t6736*t768;
  t15021 = t3110*t14989;
  t15029 = t706*t15005;
  t15045 = t15021 + t15029;
  t15061 = t8459*t15045;
  t15068 = t15018 + t15061;
  t15011 = t689*t15010;
  t15069 = t5619*t15068;
  t15070 = t15011 + t15069;
  t15077 = t5619*t15010;
  t15085 = -1.*t689*t15068;
  t15088 = t15077 + t15085;
  t15072 = -1.*t665*t15070;
  t15092 = t10094*t15088;
  t15096 = t15072 + t15092;
  t15105 = t10094*t15070;
  t15116 = t665*t15088;
  t15119 = t15105 + t15116;
  t15098 = t606*t15096;
  t15121 = t13240*t15119;
  t15126 = t15098 + t15121;
  t15129 = t13240*t15096;
  t15136 = -1.*t606*t15119;
  t15138 = t15129 + t15136;
  t13987 = -1.*t560*t13958;
  t14220 = t14084*t14200;
  t14268 = t13987 + t14220;
  t14280 = t14084*t13958;
  t14399 = t560*t14200;
  t14410 = t14280 + t14399;
  t14919 = -1.*t560*t14914;
  t14946 = t14084*t14941;
  t14948 = t14919 + t14946;
  t14951 = t14084*t14914;
  t14956 = t560*t14941;
  t14963 = t14951 + t14956;
  t15128 = -1.*t560*t15126;
  t15149 = t14084*t15138;
  t15150 = t15128 + t15149;
  t15169 = t14084*t15126;
  t15181 = t560*t15138;
  t15198 = t15169 + t15181;
  t15287 = -1.*t6736;
  t15290 = 1. + t15287;
  t15359 = -1.*t5619;
  t15365 = 1. + t15359;
  t15459 = -1.*t10094;
  t15460 = 1. + t15459;
  t15490 = -1.*t13240;
  t15492 = 1. + t15490;
  t15526 = -1.*t14084;
  t15541 = 1. + t15526;
  t15586 = -1.*t14279;
  t15588 = 1. + t15586;
  t14271 = t137*t14268;
  t14414 = t14279*t14410;
  t14430 = t14271 + t14414;
  t15293 = -0.049*t15290;
  t15296 = -0.135*t8459;
  t15303 = 0. + t15293 + t15296;
  t15309 = 0.135*t717;
  t15313 = 0. + t15309;
  t15326 = -1.*t1693;
  t15327 = 1. + t15326;
  t15331 = -0.135*t15327;
  t15332 = 0. + t15331;
  t15335 = -1.*t3110;
  t15336 = 1. + t15335;
  t15337 = -0.135*t15336;
  t15338 = 0. + t15337;
  t15347 = 0.135*t706;
  t15349 = 0. + t15347;
  t15380 = -0.09*t15365;
  t15381 = 0.049*t689;
  t15385 = 0. + t15380 + t15381;
  t15389 = -0.135*t15290;
  t15392 = 0.049*t8459;
  t15403 = 0. + t15389 + t15392;
  t15441 = -0.049*t15365;
  t15442 = -0.09*t689;
  t15449 = 0. + t15441 + t15442;
  t15462 = -0.049*t15460;
  t15464 = -0.21*t665;
  t15465 = 0. + t15462 + t15464;
  t15475 = -0.21*t15460;
  t15484 = 0.049*t665;
  t15485 = 0. + t15475 + t15484;
  t15495 = -0.2707*t15492;
  t15497 = 0.0016*t606;
  t15505 = 0. + t15495 + t15497;
  t15516 = -0.0016*t15492;
  t15517 = -0.2707*t606;
  t15521 = 0. + t15516 + t15517;
  t15543 = 0.0184*t15541;
  t15545 = -0.7055*t560;
  t15555 = 0. + t15543 + t15545;
  t15565 = -0.7055*t15541;
  t15573 = -0.0184*t560;
  t15575 = 0. + t15565 + t15573;
  t15593 = -1.1135*t15588;
  t15603 = 0.0216*t137;
  t15604 = 0. + t15593 + t15603;
  t15625 = -0.0216*t15588;
  t15626 = -1.1135*t137;
  t15637 = 0. + t15625 + t15626;
  t14950 = t137*t14948;
  t14965 = t14279*t14963;
  t14972 = t14950 + t14965;
  t15154 = t137*t15150;
  t15200 = t14279*t15198;
  t15202 = t15154 + t15200;
  p_output1[0]=t14430;
  p_output1[1]=t14972;
  p_output1[2]=t15202;
  p_output1[3]=0.;
  p_output1[4]=t723*t7413*t8459 - 1.*t6736*t9094;
  p_output1[5]=-1.*t14671*t6736 + t1245*t7413*t8459;
  p_output1[6]=-1.*t15045*t6736 - 1.*t768*t8459;
  p_output1[7]=0.;
  p_output1[8]=-1.*t14268*t14279 + t137*t14410;
  p_output1[9]=-1.*t14279*t14948 + t137*t14963;
  p_output1[10]=-1.*t14279*t15150 + t137*t15198;
  p_output1[11]=0.;
  p_output1[12]=0. - 1.1135*(t14268*t14279 - 1.*t137*t14410) + 0.058287*t14430 + t1502*t15313 + t10092*t15465 + t11912*t15485 + t13107*t15505 + t13804*t15521 + t13958*t15555 + t14200*t15575 + t14268*t15604 + t14410*t15637 + t15332*t1814 + t15338*t2407 + t15349*t4512 + t15385*t4986 + t15303*t723*t7413 + t15403*t9094 - 0.1305*(-1.*t723*t7413*t8459 + t6736*t9094) + t15449*t9340 + var1[0];
  p_output1[13]=0. - 1.1135*(t14279*t14948 - 1.*t137*t14963) + 0.058287*t14972 + t14443*t15313 + t14518*t15332 + t14591*t15338 + t14611*t15349 + t14634*t15385 + t14671*t15403 + t14732*t15449 + t14773*t15465 + t14828*t15485 + t14845*t15505 + t14904*t15521 + t14914*t15555 + t14941*t15575 + t14948*t15604 + t14963*t15637 + t1245*t15303*t7413 - 0.1305*(t14671*t6736 - 1.*t1245*t7413*t8459) + var1[1];
  p_output1[14]=0. - 1.1135*(t14279*t15150 - 1.*t137*t15198) + 0.058287*t15202 + t14989*t15338 + t15005*t15349 + t15010*t15385 + t15045*t15403 + t15068*t15449 + t15070*t15465 + t15088*t15485 + t15096*t15505 + t15119*t15521 + t15126*t15555 + t15138*t15575 + t15150*t15604 + t15198*t15637 + t1334*t15332*t7413 + t15313*t7413*t763 - 1.*t15303*t768 - 0.1305*(t15045*t6736 + t768*t8459) + var1[2];
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
    ( !(mrows == 22 && ncols == 1) && 
      !(mrows == 1 && ncols == 22))) 
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

#include "H_RightToeBottomFront.hh"

namespace SymExpression
{

void H_RightToeBottomFront_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
