/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:34:21 GMT-04:00
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
  double t187;
  double t922;
  double t1117;
  double t936;
  double t1140;
  double t360;
  double t465;
  double t885;
  double t921;
  double t1242;
  double t999;
  double t1162;
  double t1181;
  double t1247;
  double t1250;
  double t1256;
  double t1186;
  double t1327;
  double t1342;
  double t2065;
  double t1990;
  double t2037;
  double t2044;
  double t1933;
  double t2096;
  double t2097;
  double t2121;
  double t2311;
  double t2056;
  double t2164;
  double t2237;
  double t1913;
  double t2334;
  double t2360;
  double t2383;
  double t2502;
  double t2308;
  double t2392;
  double t2413;
  double t1861;
  double t2531;
  double t2532;
  double t2563;
  double t2712;
  double t2451;
  double t2598;
  double t2702;
  double t1835;
  double t2714;
  double t2768;
  double t2851;
  double t2912;
  double t2706;
  double t2866;
  double t2891;
  double t1825;
  double t2924;
  double t2946;
  double t2959;
  double t1407;
  double t1429;
  double t1487;
  double t1518;
  double t1530;
  double t1564;
  double t1502;
  double t1583;
  double t1595;
  double t3296;
  double t3332;
  double t3353;
  double t3396;
  double t3422;
  double t3424;
  double t3381;
  double t3427;
  double t3462;
  double t3574;
  double t3606;
  double t3607;
  double t3564;
  double t3612;
  double t3638;
  double t3717;
  double t3768;
  double t3875;
  double t3701;
  double t3884;
  double t3886;
  double t3900;
  double t3908;
  double t3916;
  double t3893;
  double t3974;
  double t4041;
  double t4073;
  double t4100;
  double t4102;
  double t1688;
  double t1769;
  double t1778;
  double t4336;
  double t4349;
  double t4360;
  double t4376;
  double t4386;
  double t4391;
  double t4367;
  double t4429;
  double t4432;
  double t4464;
  double t4468;
  double t4469;
  double t4453;
  double t4503;
  double t4548;
  double t4584;
  double t4603;
  double t4612;
  double t4557;
  double t4616;
  double t4617;
  double t4702;
  double t4731;
  double t4741;
  double t4698;
  double t4744;
  double t4755;
  double t4773;
  double t4792;
  double t4802;
  double t2898;
  double t2978;
  double t3002;
  double t3033;
  double t3071;
  double t3076;
  double t4056;
  double t4143;
  double t4148;
  double t4249;
  double t4278;
  double t4294;
  double t4757;
  double t4819;
  double t4823;
  double t4850;
  double t4860;
  double t4863;
  t187 = Cos(var1[3]);
  t922 = Cos(var1[5]);
  t1117 = Sin(var1[3]);
  t936 = Sin(var1[4]);
  t1140 = Sin(var1[5]);
  t360 = Cos(var1[4]);
  t465 = Sin(var1[14]);
  t885 = Cos(var1[14]);
  t921 = Sin(var1[13]);
  t1242 = Cos(var1[13]);
  t999 = t187*t922*t936;
  t1162 = t1117*t1140;
  t1181 = t999 + t1162;
  t1247 = -1.*t922*t1117;
  t1250 = t187*t936*t1140;
  t1256 = t1247 + t1250;
  t1186 = t921*t1181;
  t1327 = t1242*t1256;
  t1342 = t1186 + t1327;
  t2065 = Cos(var1[15]);
  t1990 = t1242*t1181;
  t2037 = -1.*t921*t1256;
  t2044 = t1990 + t2037;
  t1933 = Sin(var1[15]);
  t2096 = t885*t187*t360;
  t2097 = t465*t1342;
  t2121 = t2096 + t2097;
  t2311 = Cos(var1[16]);
  t2056 = t1933*t2044;
  t2164 = t2065*t2121;
  t2237 = t2056 + t2164;
  t1913 = Sin(var1[16]);
  t2334 = t2065*t2044;
  t2360 = -1.*t1933*t2121;
  t2383 = t2334 + t2360;
  t2502 = Cos(var1[17]);
  t2308 = -1.*t1913*t2237;
  t2392 = t2311*t2383;
  t2413 = t2308 + t2392;
  t1861 = Sin(var1[17]);
  t2531 = t2311*t2237;
  t2532 = t1913*t2383;
  t2563 = t2531 + t2532;
  t2712 = Cos(var1[18]);
  t2451 = t1861*t2413;
  t2598 = t2502*t2563;
  t2702 = t2451 + t2598;
  t1835 = Sin(var1[18]);
  t2714 = t2502*t2413;
  t2768 = -1.*t1861*t2563;
  t2851 = t2714 + t2768;
  t2912 = Cos(var1[19]);
  t2706 = -1.*t1835*t2702;
  t2866 = t2712*t2851;
  t2891 = t2706 + t2866;
  t1825 = Sin(var1[19]);
  t2924 = t2712*t2702;
  t2946 = t1835*t2851;
  t2959 = t2924 + t2946;
  t1407 = t922*t1117*t936;
  t1429 = -1.*t187*t1140;
  t1487 = t1407 + t1429;
  t1518 = t187*t922;
  t1530 = t1117*t936*t1140;
  t1564 = t1518 + t1530;
  t1502 = t921*t1487;
  t1583 = t1242*t1564;
  t1595 = t1502 + t1583;
  t3296 = t1242*t1487;
  t3332 = -1.*t921*t1564;
  t3353 = t3296 + t3332;
  t3396 = t885*t360*t1117;
  t3422 = t465*t1595;
  t3424 = t3396 + t3422;
  t3381 = t1933*t3353;
  t3427 = t2065*t3424;
  t3462 = t3381 + t3427;
  t3574 = t2065*t3353;
  t3606 = -1.*t1933*t3424;
  t3607 = t3574 + t3606;
  t3564 = -1.*t1913*t3462;
  t3612 = t2311*t3607;
  t3638 = t3564 + t3612;
  t3717 = t2311*t3462;
  t3768 = t1913*t3607;
  t3875 = t3717 + t3768;
  t3701 = t1861*t3638;
  t3884 = t2502*t3875;
  t3886 = t3701 + t3884;
  t3900 = t2502*t3638;
  t3908 = -1.*t1861*t3875;
  t3916 = t3900 + t3908;
  t3893 = -1.*t1835*t3886;
  t3974 = t2712*t3916;
  t4041 = t3893 + t3974;
  t4073 = t2712*t3886;
  t4100 = t1835*t3916;
  t4102 = t4073 + t4100;
  t1688 = t360*t922*t921;
  t1769 = t1242*t360*t1140;
  t1778 = t1688 + t1769;
  t4336 = t1242*t360*t922;
  t4349 = -1.*t360*t921*t1140;
  t4360 = t4336 + t4349;
  t4376 = -1.*t885*t936;
  t4386 = t465*t1778;
  t4391 = t4376 + t4386;
  t4367 = t1933*t4360;
  t4429 = t2065*t4391;
  t4432 = t4367 + t4429;
  t4464 = t2065*t4360;
  t4468 = -1.*t1933*t4391;
  t4469 = t4464 + t4468;
  t4453 = -1.*t1913*t4432;
  t4503 = t2311*t4469;
  t4548 = t4453 + t4503;
  t4584 = t2311*t4432;
  t4603 = t1913*t4469;
  t4612 = t4584 + t4603;
  t4557 = t1861*t4548;
  t4616 = t2502*t4612;
  t4617 = t4557 + t4616;
  t4702 = t2502*t4548;
  t4731 = -1.*t1861*t4612;
  t4741 = t4702 + t4731;
  t4698 = -1.*t1835*t4617;
  t4744 = t2712*t4741;
  t4755 = t4698 + t4744;
  t4773 = t2712*t4617;
  t4792 = t1835*t4741;
  t4802 = t4773 + t4792;
  t2898 = t1825*t2891;
  t2978 = t2912*t2959;
  t3002 = t2898 + t2978;
  t3033 = t2912*t2891;
  t3071 = -1.*t1825*t2959;
  t3076 = t3033 + t3071;
  t4056 = t1825*t4041;
  t4143 = t2912*t4102;
  t4148 = t4056 + t4143;
  t4249 = t2912*t4041;
  t4278 = -1.*t1825*t4102;
  t4294 = t4249 + t4278;
  t4757 = t1825*t4755;
  t4819 = t2912*t4802;
  t4823 = t4757 + t4819;
  t4850 = t2912*t4755;
  t4860 = -1.*t1825*t4802;
  t4863 = t4850 + t4860;
  p_output1[0]=t187*t360*t465 - 1.*t1342*t885;
  p_output1[1]=t1117*t360*t465 - 1.*t1595*t885;
  p_output1[2]=-1.*t1778*t885 - 1.*t465*t936;
  p_output1[3]=0.642788*t3002 + 0.766044*t3076;
  p_output1[4]=0.642788*t4148 + 0.766044*t4294;
  p_output1[5]=0.642788*t4823 + 0.766044*t4863;
  p_output1[6]=-0.766044*t3002 + 0.642788*t3076;
  p_output1[7]=-0.766044*t4148 + 0.642788*t4294;
  p_output1[8]=-0.766044*t4823 + 0.642788*t4863;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "R_RightToeFront_mex.hh"

namespace SymExpression
{

void R_RightToeFront_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
