/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:24:36 GMT-04:00
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
  double t609;
  double t716;
  double t1135;
  double t693;
  double t734;
  double t887;
  double t593;
  double t1185;
  double t1329;
  double t1413;
  double t1713;
  double t1038;
  double t1566;
  double t1665;
  double t580;
  double t1770;
  double t1793;
  double t1801;
  double t2106;
  double t1676;
  double t1819;
  double t1877;
  double t568;
  double t2143;
  double t2175;
  double t2184;
  double t468;
  double t2256;
  double t2949;
  double t3000;
  double t3089;
  double t2908;
  double t3126;
  double t3141;
  double t3229;
  double t3266;
  double t560;
  double t3183;
  double t3306;
  double t3364;
  double t3441;
  double t3452;
  double t3490;
  double t1984;
  double t2202;
  double t2212;
  double t2275;
  double t2388;
  double t2553;
  double t3389;
  double t3493;
  double t3749;
  double t4025;
  double t4242;
  double t4360;
  t609 = Cos(var1[13]);
  t716 = Sin(var1[13]);
  t1135 = Cos(var1[12]);
  t693 = 0.642788*t609;
  t734 = -0.766044*t716;
  t887 = t693 + t734;
  t593 = Sin(var1[12]);
  t1185 = 0.766044*t609;
  t1329 = 0.642788*t716;
  t1413 = t1185 + t1329;
  t1713 = Cos(var1[11]);
  t1038 = t593*t887;
  t1566 = t1135*t1413;
  t1665 = 0. + t1038 + t1566;
  t580 = Sin(var1[11]);
  t1770 = t1135*t887;
  t1793 = -1.*t593*t1413;
  t1801 = 0. + t1770 + t1793;
  t2106 = Cos(var1[10]);
  t1676 = -1.*t580*t1665;
  t1819 = t1713*t1801;
  t1877 = 0. + t1676 + t1819;
  t568 = Sin(var1[10]);
  t2143 = t1713*t1665;
  t2175 = t580*t1801;
  t2184 = 0. + t2143 + t2175;
  t468 = Cos(var1[8]);
  t2256 = Cos(var1[9]);
  t2949 = -0.766044*t609;
  t3000 = -0.642788*t716;
  t3089 = t2949 + t3000;
  t2908 = -1.*t593*t887;
  t3126 = t1135*t3089;
  t3141 = 0. + t2908 + t3126;
  t3229 = t593*t3089;
  t3266 = 0. + t1770 + t3229;
  t560 = Sin(var1[9]);
  t3183 = t580*t3141;
  t3306 = t1713*t3266;
  t3364 = 0. + t3183 + t3306;
  t3441 = t1713*t3141;
  t3452 = -1.*t580*t3266;
  t3490 = 0. + t3441 + t3452;
  t1984 = t568*t1877;
  t2202 = t2106*t2184;
  t2212 = 0. + t1984 + t2202;
  t2275 = t2106*t1877;
  t2388 = -1.*t568*t2184;
  t2553 = 0. + t2275 + t2388;
  t3389 = -1.*t568*t3364;
  t3493 = t2106*t3490;
  t3749 = 0. + t3389 + t3493;
  t4025 = t2106*t3364;
  t4242 = t568*t3490;
  t4360 = 0. + t4025 + t4242;
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
  p_output1[21]=0. + Sin(var1[8]);
  p_output1[22]=0. + t468*(0. + t2256*t2553 - 1.*t2212*t560);
  p_output1[23]=0. + t468*(0. + t2256*t3749 - 1.*t4360*t560);
  p_output1[24]=0.;
  p_output1[25]=0. + t2212*t2256 + t2553*t560;
  p_output1[26]=0. + t2256*t4360 + t3749*t560;
  p_output1[27]=1.;
  p_output1[28]=0.;
  p_output1[29]=0.;
  p_output1[30]=1.;
  p_output1[31]=0.;
  p_output1[32]=0.;
  p_output1[33]=1.;
  p_output1[34]=0.;
  p_output1[35]=0.;
  p_output1[36]=1.;
  p_output1[37]=0.;
  p_output1[38]=0.;
  p_output1[39]=1.;
  p_output1[40]=0.;
  p_output1[41]=0.;
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

#include "Jw_VectorNav_to_RightToeBottom_mex.hh"

namespace SymExpression
{

void Jw_VectorNav_to_RightToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
