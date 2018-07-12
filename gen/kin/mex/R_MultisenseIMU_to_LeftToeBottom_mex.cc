/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:37:03 GMT-04:00
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
  double t100;
  double t117;
  double t779;
  double t397;
  double t1427;
  double t1555;
  double t1744;
  double t1445;
  double t1569;
  double t1689;
  double t965;
  double t1791;
  double t1907;
  double t1919;
  double t1978;
  double t1712;
  double t1920;
  double t1922;
  double t946;
  double t2301;
  double t2384;
  double t2386;
  double t2756;
  double t1966;
  double t2387;
  double t2418;
  double t831;
  double t2781;
  double t2921;
  double t2971;
  double t3277;
  double t2725;
  double t3146;
  double t3208;
  double t815;
  double t3306;
  double t3318;
  double t3338;
  double t3838;
  double t3841;
  double t4102;
  double t4171;
  double t4225;
  double t4241;
  double t4164;
  double t4278;
  double t4297;
  double t4472;
  double t4718;
  double t4789;
  double t4325;
  double t4814;
  double t4888;
  double t4998;
  double t5000;
  double t5019;
  double t4890;
  double t5037;
  double t5055;
  double t5072;
  double t5077;
  double t5199;
  double t5654;
  double t5681;
  double t5683;
  double t5745;
  double t5747;
  double t5810;
  double t5744;
  double t5834;
  double t5864;
  double t5868;
  double t5913;
  double t5944;
  double t5865;
  double t6039;
  double t6052;
  double t6061;
  double t6077;
  double t6082;
  double t3249;
  double t3359;
  double t3367;
  double t3495;
  double t3500;
  double t3580;
  double t5057;
  double t5281;
  double t5284;
  double t5404;
  double t5479;
  double t5537;
  double t6059;
  double t6103;
  double t6104;
  double t6153;
  double t6156;
  double t6161;
  t100 = Cos(var1[1]);
  t117 = Sin(var1[0]);
  t779 = Sin(var1[1]);
  t397 = Cos(var1[0]);
  t1427 = Cos(var1[2]);
  t1555 = Sin(var1[2]);
  t1744 = Cos(var1[3]);
  t1445 = t1427*t117*t779;
  t1569 = t397*t1555;
  t1689 = t1445 + t1569;
  t965 = Sin(var1[3]);
  t1791 = t397*t1427;
  t1907 = -1.*t117*t779*t1555;
  t1919 = t1791 + t1907;
  t1978 = Cos(var1[4]);
  t1712 = -1.*t965*t1689;
  t1920 = t1744*t1919;
  t1922 = t1712 + t1920;
  t946 = Sin(var1[4]);
  t2301 = t1744*t1689;
  t2384 = t965*t1919;
  t2386 = t2301 + t2384;
  t2756 = Cos(var1[5]);
  t1966 = t946*t1922;
  t2387 = t1978*t2386;
  t2418 = t1966 + t2387;
  t831 = Sin(var1[5]);
  t2781 = t1978*t1922;
  t2921 = -1.*t946*t2386;
  t2971 = t2781 + t2921;
  t3277 = Cos(var1[6]);
  t2725 = -1.*t831*t2418;
  t3146 = t2756*t2971;
  t3208 = t2725 + t3146;
  t815 = Sin(var1[6]);
  t3306 = t2756*t2418;
  t3318 = t831*t2971;
  t3338 = t3306 + t3318;
  t3838 = t397*t1427*t779;
  t3841 = -1.*t117*t1555;
  t4102 = t3838 + t3841;
  t4171 = -1.*t1427*t117;
  t4225 = -1.*t397*t779*t1555;
  t4241 = t4171 + t4225;
  t4164 = -1.*t965*t4102;
  t4278 = t1744*t4241;
  t4297 = t4164 + t4278;
  t4472 = t1744*t4102;
  t4718 = t965*t4241;
  t4789 = t4472 + t4718;
  t4325 = t946*t4297;
  t4814 = t1978*t4789;
  t4888 = t4325 + t4814;
  t4998 = t1978*t4297;
  t5000 = -1.*t946*t4789;
  t5019 = t4998 + t5000;
  t4890 = -1.*t831*t4888;
  t5037 = t2756*t5019;
  t5055 = t4890 + t5037;
  t5072 = t2756*t4888;
  t5077 = t831*t5019;
  t5199 = t5072 + t5077;
  t5654 = -1.*t100*t1427*t965;
  t5681 = -1.*t1744*t100*t1555;
  t5683 = t5654 + t5681;
  t5745 = t1744*t100*t1427;
  t5747 = -1.*t100*t965*t1555;
  t5810 = t5745 + t5747;
  t5744 = t946*t5683;
  t5834 = t1978*t5810;
  t5864 = t5744 + t5834;
  t5868 = t1978*t5683;
  t5913 = -1.*t946*t5810;
  t5944 = t5868 + t5913;
  t5865 = -1.*t831*t5864;
  t6039 = t2756*t5944;
  t6052 = t5865 + t6039;
  t6061 = t2756*t5864;
  t6077 = t831*t5944;
  t6082 = t6061 + t6077;
  t3249 = t815*t3208;
  t3359 = t3277*t3338;
  t3367 = t3249 + t3359;
  t3495 = t3277*t3208;
  t3500 = -1.*t815*t3338;
  t3580 = t3495 + t3500;
  t5057 = t815*t5055;
  t5281 = t3277*t5199;
  t5284 = t5057 + t5281;
  t5404 = t3277*t5055;
  t5479 = -1.*t815*t5199;
  t5537 = t5404 + t5479;
  t6059 = t815*t6052;
  t6103 = t3277*t6082;
  t6104 = t6059 + t6103;
  t6153 = t3277*t6052;
  t6156 = -1.*t815*t6082;
  t6161 = t6153 + t6156;
  p_output1[0]=0. + t100*t117;
  p_output1[1]=0. - 1.*t100*t397;
  p_output1[2]=0. + t779;
  p_output1[3]=0. - 0.642788*t3367 - 0.766044*t3580;
  p_output1[4]=0. + 0.642788*t5284 + 0.766044*t5537;
  p_output1[5]=0. + 0.642788*t6104 + 0.766044*t6161;
  p_output1[6]=0. + 0.766044*t3367 - 0.642788*t3580;
  p_output1[7]=0. - 0.766044*t5284 + 0.642788*t5537;
  p_output1[8]=0. - 0.766044*t6104 + 0.642788*t6161;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "R_MultisenseIMU_to_LeftToeBottom_mex.hh"

namespace SymExpression
{

void R_MultisenseIMU_to_LeftToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
