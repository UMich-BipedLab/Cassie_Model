/*
 * Automatically Generated from Mathematica.
 * Tue 26 Sep 2017 12:22:37 GMT-04:00
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
  double t118;
  double t1246;
  double t1841;
  double t1624;
  double t1842;
  double t720;
  double t1745;
  double t2407;
  double t3079;
  double t4297;
  double t5175;
  double t5226;
  double t5446;
  double t9612;
  double t9001;
  double t9094;
  double t9133;
  double t7223;
  double t12301;
  double t12941;
  double t13107;
  double t326;
  double t494;
  double t505;
  double t570;
  double t320;
  double t14279;
  double t14280;
  double t14313;
  double t13273;
  double t13420;
  double t13627;
  double t13790;
  double t14018;
  double t14084;
  double t14168;
  double t14515;
  double t14518;
  double t14523;
  double t14555;
  double t14565;
  double t14577;
  double t14597;
  double t14610;
  double t14611;
  double t14617;
  double t14648;
  double t14651;
  double t14668;
  double t14674;
  double t14683;
  double t14696;
  double t14709;
  double t14760;
  double t14773;
  double t14781;
  double t14845;
  double t14850;
  double t14851;
  double t14866;
  double t14876;
  double t14883;
  double t14898;
  double t14914;
  double t14919;
  double t14921;
  double t14948;
  double t14949;
  double t14950;
  double t14952;
  double t14954;
  double t14955;
  double t14961;
  double t14966;
  double t14972;
  double t14978;
  double t14999;
  double t15003;
  double t15004;
  double t560;
  double t606;
  double t653;
  double t852;
  double t1245;
  double t4485;
  double t4552;
  double t4871;
  double t4986;
  double t7260;
  double t7261;
  double t7413;
  double t8406;
  double t15070;
  double t15071;
  double t15072;
  double t15085;
  double t15088;
  double t15090;
  double t10513;
  double t11912;
  double t13737;
  double t13804;
  double t13874;
  double t15096;
  double t15098;
  double t15104;
  double t15116;
  double t15118;
  double t15119;
  double t14220;
  double t14268;
  double t14271;
  double t15136;
  double t15138;
  double t15140;
  double t14441;
  double t14443;
  double t14464;
  double t14591;
  double t14598;
  double t14601;
  double t15125;
  double t15126;
  double t15128;
  double t15198;
  double t15200;
  double t15201;
  double t14634;
  double t14635;
  double t14638;
  double t14706;
  double t14732;
  double t14739;
  double t15212;
  double t15215;
  double t15219;
  double t15228;
  double t15229;
  double t15232;
  double t14819;
  double t14828;
  double t14844;
  double t14889;
  double t14904;
  double t14905;
  double t15242;
  double t15243;
  double t15255;
  double t15262;
  double t15263;
  double t15265;
  double t14937;
  double t14941;
  double t14946;
  double t14956;
  double t14963;
  double t14965;
  double t15271;
  double t15274;
  double t15276;
  double t15279;
  double t15280;
  double t15282;
  double t14985;
  double t14989;
  double t14998;
  double t15285;
  double t15287;
  double t15288;
  double t15293;
  double t15296;
  double t15300;
  double t15338;
  double t15340;
  double t15341;
  double t15349;
  double t15350;
  double t15353;
  double t15385;
  double t15386;
  double t15389;
  double t15361;
  double t15365;
  double t15380;
  double t15415;
  double t15418;
  double t15437;
  double t15441;
  double t15442;
  double t15443;
  double t15453;
  double t15455;
  double t15459;
  double t15461;
  double t15462;
  double t15464;
  double t15466;
  double t15475;
  double t15480;
  double t15485;
  double t15487;
  double t15489;
  double t15492;
  double t15493;
  double t15495;
  double t15502;
  double t15505;
  double t15506;
  double t15516;
  double t15517;
  double t15520;
  t118 = Cos(var1[3]);
  t1246 = Cos(var1[5]);
  t1841 = Sin(var1[3]);
  t1624 = Sin(var1[4]);
  t1842 = Sin(var1[5]);
  t720 = Sin(var1[14]);
  t1745 = t118*t1246*t1624;
  t2407 = t1841*t1842;
  t3079 = t1745 + t2407;
  t4297 = Cos(var1[14]);
  t5175 = -1.*t1246*t1841;
  t5226 = t118*t1624*t1842;
  t5446 = t5175 + t5226;
  t9612 = Sin(var1[15]);
  t9001 = t720*t3079;
  t9094 = t4297*t5446;
  t9133 = t9001 + t9094;
  t7223 = Cos(var1[15]);
  t12301 = t4297*t3079;
  t12941 = -1.*t720*t5446;
  t13107 = t12301 + t12941;
  t326 = Cos(var1[16]);
  t494 = -1.*t326;
  t505 = 1. + t494;
  t570 = Sin(var1[16]);
  t320 = Cos(var1[4]);
  t14279 = t7223*t9133;
  t14280 = t9612*t13107;
  t14313 = t14279 + t14280;
  t13273 = Cos(var1[17]);
  t13420 = -1.*t13273;
  t13627 = 1. + t13420;
  t13790 = Sin(var1[17]);
  t14018 = -1.*t9612*t9133;
  t14084 = t7223*t13107;
  t14168 = t14018 + t14084;
  t14515 = t326*t118*t320;
  t14518 = t570*t14313;
  t14523 = t14515 + t14518;
  t14555 = Cos(var1[18]);
  t14565 = -1.*t14555;
  t14577 = 1. + t14565;
  t14597 = Sin(var1[18]);
  t14610 = t13790*t14168;
  t14611 = t13273*t14523;
  t14617 = t14610 + t14611;
  t14648 = t13273*t14168;
  t14651 = -1.*t13790*t14523;
  t14668 = t14648 + t14651;
  t14674 = Cos(var1[19]);
  t14683 = -1.*t14674;
  t14696 = 1. + t14683;
  t14709 = Sin(var1[19]);
  t14760 = -1.*t14597*t14617;
  t14773 = t14555*t14668;
  t14781 = t14760 + t14773;
  t14845 = t14555*t14617;
  t14850 = t14597*t14668;
  t14851 = t14845 + t14850;
  t14866 = Cos(var1[20]);
  t14876 = -1.*t14866;
  t14883 = 1. + t14876;
  t14898 = Sin(var1[20]);
  t14914 = t14709*t14781;
  t14919 = t14674*t14851;
  t14921 = t14914 + t14919;
  t14948 = t14674*t14781;
  t14949 = -1.*t14709*t14851;
  t14950 = t14948 + t14949;
  t14952 = Cos(var1[21]);
  t14954 = -1.*t14952;
  t14955 = 1. + t14954;
  t14961 = Sin(var1[21]);
  t14966 = -1.*t14898*t14921;
  t14972 = t14866*t14950;
  t14978 = t14966 + t14972;
  t14999 = t14866*t14921;
  t15003 = t14898*t14950;
  t15004 = t14999 + t15003;
  t560 = -0.049*t505;
  t606 = -0.135*t570;
  t653 = 0. + t560 + t606;
  t852 = 0.135*t720;
  t1245 = 0. + t852;
  t4485 = -1.*t4297;
  t4552 = 1. + t4485;
  t4871 = -0.135*t4552;
  t4986 = 0. + t4871;
  t7260 = -1.*t7223;
  t7261 = 1. + t7260;
  t7413 = -0.135*t7261;
  t8406 = 0. + t7413;
  t15070 = t1246*t1841*t1624;
  t15071 = -1.*t118*t1842;
  t15072 = t15070 + t15071;
  t15085 = t118*t1246;
  t15088 = t1841*t1624*t1842;
  t15090 = t15085 + t15088;
  t10513 = 0.135*t9612;
  t11912 = 0. + t10513;
  t13737 = -0.09*t13627;
  t13804 = 0.049*t13790;
  t13874 = 0. + t13737 + t13804;
  t15096 = t720*t15072;
  t15098 = t4297*t15090;
  t15104 = t15096 + t15098;
  t15116 = t4297*t15072;
  t15118 = -1.*t720*t15090;
  t15119 = t15116 + t15118;
  t14220 = -0.135*t505;
  t14268 = 0.049*t570;
  t14271 = 0. + t14220 + t14268;
  t15136 = t7223*t15104;
  t15138 = t9612*t15119;
  t15140 = t15136 + t15138;
  t14441 = -0.049*t13627;
  t14443 = -0.09*t13790;
  t14464 = 0. + t14441 + t14443;
  t14591 = -0.049*t14577;
  t14598 = -0.21*t14597;
  t14601 = 0. + t14591 + t14598;
  t15125 = -1.*t9612*t15104;
  t15126 = t7223*t15119;
  t15128 = t15125 + t15126;
  t15198 = t326*t320*t1841;
  t15200 = t570*t15140;
  t15201 = t15198 + t15200;
  t14634 = -0.21*t14577;
  t14635 = 0.049*t14597;
  t14638 = 0. + t14634 + t14635;
  t14706 = -0.2707*t14696;
  t14732 = 0.0016*t14709;
  t14739 = 0. + t14706 + t14732;
  t15212 = t13790*t15128;
  t15215 = t13273*t15201;
  t15219 = t15212 + t15215;
  t15228 = t13273*t15128;
  t15229 = -1.*t13790*t15201;
  t15232 = t15228 + t15229;
  t14819 = -0.0016*t14696;
  t14828 = -0.2707*t14709;
  t14844 = 0. + t14819 + t14828;
  t14889 = 0.0184*t14883;
  t14904 = -0.7055*t14898;
  t14905 = 0. + t14889 + t14904;
  t15242 = -1.*t14597*t15219;
  t15243 = t14555*t15232;
  t15255 = t15242 + t15243;
  t15262 = t14555*t15219;
  t15263 = t14597*t15232;
  t15265 = t15262 + t15263;
  t14937 = -0.7055*t14883;
  t14941 = -0.0184*t14898;
  t14946 = 0. + t14937 + t14941;
  t14956 = -1.1135*t14955;
  t14963 = 0.0216*t14961;
  t14965 = 0. + t14956 + t14963;
  t15271 = t14709*t15255;
  t15274 = t14674*t15265;
  t15276 = t15271 + t15274;
  t15279 = t14674*t15255;
  t15280 = -1.*t14709*t15265;
  t15282 = t15279 + t15280;
  t14985 = -0.0216*t14955;
  t14989 = -1.1135*t14961;
  t14998 = 0. + t14985 + t14989;
  t15285 = -1.*t14898*t15276;
  t15287 = t14866*t15282;
  t15288 = t15285 + t15287;
  t15293 = t14866*t15276;
  t15296 = t14898*t15282;
  t15300 = t15293 + t15296;
  t15338 = t320*t1246*t720;
  t15340 = t4297*t320*t1842;
  t15341 = t15338 + t15340;
  t15349 = t4297*t320*t1246;
  t15350 = -1.*t320*t720*t1842;
  t15353 = t15349 + t15350;
  t15385 = t7223*t15341;
  t15386 = t9612*t15353;
  t15389 = t15385 + t15386;
  t15361 = -1.*t9612*t15341;
  t15365 = t7223*t15353;
  t15380 = t15361 + t15365;
  t15415 = -1.*t326*t1624;
  t15418 = t570*t15389;
  t15437 = t15415 + t15418;
  t15441 = t13790*t15380;
  t15442 = t13273*t15437;
  t15443 = t15441 + t15442;
  t15453 = t13273*t15380;
  t15455 = -1.*t13790*t15437;
  t15459 = t15453 + t15455;
  t15461 = -1.*t14597*t15443;
  t15462 = t14555*t15459;
  t15464 = t15461 + t15462;
  t15466 = t14555*t15443;
  t15475 = t14597*t15459;
  t15480 = t15466 + t15475;
  t15485 = t14709*t15464;
  t15487 = t14674*t15480;
  t15489 = t15485 + t15487;
  t15492 = t14674*t15464;
  t15493 = -1.*t14709*t15480;
  t15495 = t15492 + t15493;
  t15502 = -1.*t14898*t15489;
  t15505 = t14866*t15495;
  t15506 = t15502 + t15505;
  t15516 = t14866*t15489;
  t15517 = t14898*t15495;
  t15520 = t15516 + t15517;
  p_output1[0]=0. + t11912*t13107 + t13874*t14168 + t14271*t14313 + t14464*t14523 + t14601*t14617 + t14638*t14668 + t14739*t14781 + t14844*t14851 + t14905*t14921 + t14946*t14950 + t14965*t14978 + t14998*t15004 + 0.058287*(t14961*t14978 + t14952*t15004) - 1.1135*(t14952*t14978 - 1.*t14961*t15004) + t1245*t3079 + t4986*t5446 - 0.1305*(t14313*t326 - 1.*t118*t320*t570) + t118*t320*t653 + t8406*t9133 + var1[0];
  p_output1[1]=0. + t1245*t15072 + t11912*t15119 + t13874*t15128 + t14271*t15140 + t14464*t15201 + t14601*t15219 + t14638*t15232 + t14739*t15255 + t14844*t15265 + t14905*t15276 + t14946*t15282 + t14965*t15288 + t14998*t15300 + 0.058287*(t14961*t15288 + t14952*t15300) - 1.1135*(t14952*t15288 - 1.*t14961*t15300) + t15090*t4986 - 0.1305*(t15140*t326 - 1.*t1841*t320*t570) + t1841*t320*t653 + t15104*t8406 + var1[1];
  p_output1[2]=0. + t11912*t15353 + t13874*t15380 + t14271*t15389 + t14464*t15437 + t14601*t15443 + t14638*t15459 + t14739*t15464 + t14844*t15480 + t14905*t15489 + t14946*t15495 + t14965*t15506 + t14998*t15520 + 0.058287*(t14961*t15506 + t14952*t15520) - 1.1135*(t14952*t15506 - 1.*t14961*t15520) + t1245*t1246*t320 + t1842*t320*t4986 - 0.1305*(t15389*t326 + t1624*t570) - 1.*t1624*t653 + t15341*t8406 + var1[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "p_RightToeBottomFront.hh"

namespace SymExpression
{

void p_RightToeBottomFront_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
