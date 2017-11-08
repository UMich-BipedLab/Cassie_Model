/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:11:55 GMT-05:00
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
  double t384;
  double t429;
  double t377;
  double t424;
  double t430;
  double t668;
  double t427;
  double t431;
  double t457;
  double t348;
  double t813;
  double t820;
  double t824;
  double t866;
  double t508;
  double t845;
  double t847;
  double t242;
  double t867;
  double t875;
  double t892;
  double t899;
  double t904;
  double t905;
  double t907;
  double t916;
  double t921;
  double t967;
  double t857;
  double t923;
  double t924;
  double t204;
  double t974;
  double t1013;
  double t1025;
  double t149;
  double t1451;
  double t1516;
  double t1520;
  double t1535;
  double t1603;
  double t1615;
  double t1534;
  double t1659;
  double t1663;
  double t1698;
  double t1702;
  double t1703;
  double t1708;
  double t1713;
  double t1721;
  double t1144;
  double t1674;
  double t1724;
  double t1738;
  double t1814;
  double t1866;
  double t1930;
  double t2426;
  double t2471;
  double t2512;
  double t2530;
  double t2586;
  double t2602;
  double t2603;
  double t2610;
  double t2633;
  double t2526;
  double t2669;
  double t2707;
  double t2741;
  double t2753;
  double t2815;
  double t933;
  double t1090;
  double t1099;
  double t1195;
  double t1241;
  double t1365;
  double t1754;
  double t1942;
  double t1964;
  double t2125;
  double t2128;
  double t2145;
  double t2736;
  double t2864;
  double t2893;
  double t2915;
  double t2951;
  double t2979;
  double t3887;
  double t3923;
  double t4143;
  double t4150;
  double t4213;
  double t4215;
  double t4569;
  double t4834;
  double t3083;
  double t3087;
  double t3094;
  double t3932;
  double t3943;
  double t3958;
  double t3994;
  double t4011;
  double t4061;
  double t4083;
  double t4100;
  double t4103;
  double t4110;
  double t4126;
  double t4138;
  double t4151;
  double t4156;
  double t4158;
  double t4182;
  double t4189;
  double t4192;
  double t4222;
  double t4225;
  double t4226;
  double t4238;
  double t4269;
  double t4389;
  double t4878;
  double t4945;
  double t4993;
  double t5100;
  double t5115;
  double t5204;
  double t3095;
  double t3242;
  double t3325;
  double t3342;
  double t3343;
  double t3353;
  t384 = Cos(var1[5]);
  t429 = Sin(var1[3]);
  t377 = Cos(var1[3]);
  t424 = Sin(var1[4]);
  t430 = Sin(var1[5]);
  t668 = Sin(var1[13]);
  t427 = t377*t384*t424;
  t431 = t429*t430;
  t457 = t427 + t431;
  t348 = Cos(var1[13]);
  t813 = -1.*t384*t429;
  t820 = t377*t424*t430;
  t824 = t813 + t820;
  t866 = Cos(var1[15]);
  t508 = t348*t457;
  t845 = -1.*t668*t824;
  t847 = t508 + t845;
  t242 = Sin(var1[15]);
  t867 = Cos(var1[14]);
  t875 = Cos(var1[4]);
  t892 = t867*t377*t875;
  t899 = Sin(var1[14]);
  t904 = t668*t457;
  t905 = t348*t824;
  t907 = t904 + t905;
  t916 = t899*t907;
  t921 = t892 + t916;
  t967 = Cos(var1[16]);
  t857 = t242*t847;
  t923 = t866*t921;
  t924 = t857 + t923;
  t204 = Sin(var1[16]);
  t974 = t866*t847;
  t1013 = -1.*t242*t921;
  t1025 = t974 + t1013;
  t149 = Cos(var1[17]);
  t1451 = t384*t429*t424;
  t1516 = -1.*t377*t430;
  t1520 = t1451 + t1516;
  t1535 = t377*t384;
  t1603 = t429*t424*t430;
  t1615 = t1535 + t1603;
  t1534 = t348*t1520;
  t1659 = -1.*t668*t1615;
  t1663 = t1534 + t1659;
  t1698 = t867*t875*t429;
  t1702 = t668*t1520;
  t1703 = t348*t1615;
  t1708 = t1702 + t1703;
  t1713 = t899*t1708;
  t1721 = t1698 + t1713;
  t1144 = Sin(var1[17]);
  t1674 = t242*t1663;
  t1724 = t866*t1721;
  t1738 = t1674 + t1724;
  t1814 = t866*t1663;
  t1866 = -1.*t242*t1721;
  t1930 = t1814 + t1866;
  t2426 = t348*t875*t384;
  t2471 = -1.*t875*t668*t430;
  t2512 = t2426 + t2471;
  t2530 = -1.*t867*t424;
  t2586 = t875*t384*t668;
  t2602 = t348*t875*t430;
  t2603 = t2586 + t2602;
  t2610 = t899*t2603;
  t2633 = t2530 + t2610;
  t2526 = t242*t2512;
  t2669 = t866*t2633;
  t2707 = t2526 + t2669;
  t2741 = t866*t2512;
  t2753 = -1.*t242*t2633;
  t2815 = t2741 + t2753;
  t933 = -1.*t204*t924;
  t1090 = t967*t1025;
  t1099 = t933 + t1090;
  t1195 = t967*t924;
  t1241 = t204*t1025;
  t1365 = t1195 + t1241;
  t1754 = -1.*t204*t1738;
  t1942 = t967*t1930;
  t1964 = t1754 + t1942;
  t2125 = t967*t1738;
  t2128 = t204*t1930;
  t2145 = t2125 + t2128;
  t2736 = -1.*t204*t2707;
  t2864 = t967*t2815;
  t2893 = t2736 + t2864;
  t2915 = t967*t2707;
  t2951 = t204*t2815;
  t2979 = t2915 + t2951;
  t3887 = -1.*t867;
  t3923 = 1. + t3887;
  t4143 = -1.*t866;
  t4150 = 1. + t4143;
  t4213 = -1.*t967;
  t4215 = 1. + t4213;
  t4569 = -1.*t149;
  t4834 = 1. + t4569;
  t3083 = t1144*t1099;
  t3087 = t149*t1365;
  t3094 = t3083 + t3087;
  t3932 = -0.049*t3923;
  t3943 = -0.135*t899;
  t3958 = 0. + t3932 + t3943;
  t3994 = 0.135*t668;
  t4011 = 0. + t3994;
  t4061 = -1.*t348;
  t4083 = 1. + t4061;
  t4100 = -0.135*t4083;
  t4103 = 0. + t4100;
  t4110 = -0.135*t3923;
  t4126 = 0.049*t899;
  t4138 = 0. + t4110 + t4126;
  t4151 = -0.09*t4150;
  t4156 = 0.049*t242;
  t4158 = 0. + t4151 + t4156;
  t4182 = -0.049*t4150;
  t4189 = -0.09*t242;
  t4192 = 0. + t4182 + t4189;
  t4222 = -0.049*t4215;
  t4225 = -0.21*t204;
  t4226 = 0. + t4222 + t4225;
  t4238 = -0.21*t4215;
  t4269 = 0.049*t204;
  t4389 = 0. + t4238 + t4269;
  t4878 = -0.2707*t4834;
  t4945 = 0.0016*t1144;
  t4993 = 0. + t4878 + t4945;
  t5100 = -0.0016*t4834;
  t5115 = -0.2707*t1144;
  t5204 = 0. + t5100 + t5115;
  t3095 = t1144*t1964;
  t3242 = t149*t2145;
  t3325 = t3095 + t3242;
  t3342 = t1144*t2893;
  t3343 = t149*t2979;
  t3353 = t3342 + t3343;
  p_output1[0]=t1144*t1365 - 1.*t1099*t149;
  p_output1[1]=-1.*t149*t1964 + t1144*t2145;
  p_output1[2]=-1.*t149*t2893 + t1144*t2979;
  p_output1[3]=0.;
  p_output1[4]=t3094;
  p_output1[5]=t3325;
  p_output1[6]=t3353;
  p_output1[7]=0.;
  p_output1[8]=t377*t875*t899 - 1.*t867*t907;
  p_output1[9]=-1.*t1708*t867 + t429*t875*t899;
  p_output1[10]=-1.*t2603*t867 - 1.*t424*t899;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.7055*(-1.*t1144*t1365 + t1099*t149) + 0.0184*t3094 + t1025*t4389 + t4011*t457 + t1099*t4993 + t1365*t5204 + t4103*t824 + t4158*t847 + t377*t3958*t875 + t4138*t907 - 0.1305*(-1.*t377*t875*t899 + t867*t907) + t4192*t921 + t4226*t924 + var1[0];
  p_output1[13]=0. - 0.7055*(t149*t1964 - 1.*t1144*t2145) + 0.0184*t3325 + t1520*t4011 + t1615*t4103 + t1708*t4138 + t1663*t4158 + t1721*t4192 + t1738*t4226 + t1930*t4389 + t1964*t4993 + t2145*t5204 + t3958*t429*t875 - 0.1305*(t1708*t867 - 1.*t429*t875*t899) + var1[1];
  p_output1[14]=0. - 0.7055*(t149*t2893 - 1.*t1144*t2979) + 0.0184*t3353 + t2603*t4138 + t2512*t4158 + t2633*t4192 + t2707*t4226 - 1.*t3958*t424 + t2815*t4389 + t2893*t4993 + t2979*t5204 + t384*t4011*t875 + t4103*t430*t875 - 0.1305*(t2603*t867 + t424*t899) + var1[2];
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

#include "H_ankle_joint_right_mex.hh"

namespace SymExpression
{

void H_ankle_joint_right_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
