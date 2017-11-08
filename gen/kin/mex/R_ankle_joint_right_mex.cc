/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:11:57 GMT-05:00
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
  double t618;
  double t1102;
  double t612;
  double t916;
  double t1142;
  double t1700;
  double t1098;
  double t1396;
  double t1534;
  double t497;
  double t1713;
  double t1767;
  double t1803;
  double t2001;
  double t1603;
  double t1827;
  double t1942;
  double t451;
  double t2068;
  double t2077;
  double t2079;
  double t2080;
  double t2085;
  double t2105;
  double t2120;
  double t2125;
  double t2148;
  double t2156;
  double t1971;
  double t2149;
  double t2151;
  double t365;
  double t2157;
  double t2161;
  double t2166;
  double t339;
  double t2521;
  double t2526;
  double t2586;
  double t2631;
  double t2669;
  double t2766;
  double t2610;
  double t2774;
  double t2864;
  double t2951;
  double t3083;
  double t3094;
  double t3242;
  double t3325;
  double t3353;
  double t2175;
  double t2921;
  double t3397;
  double t3446;
  double t3560;
  double t3575;
  double t3629;
  double t4100;
  double t4103;
  double t4107;
  double t4125;
  double t4126;
  double t4138;
  double t4139;
  double t4151;
  double t4156;
  double t4110;
  double t4158;
  double t4159;
  double t4169;
  double t4174;
  double t4189;
  double t2153;
  double t2167;
  double t2171;
  double t2181;
  double t2192;
  double t2201;
  double t3490;
  double t3659;
  double t3677;
  double t3943;
  double t3994;
  double t4011;
  double t4166;
  double t4192;
  double t4226;
  double t4259;
  double t4269;
  double t4279;
  t618 = Cos(var1[5]);
  t1102 = Sin(var1[3]);
  t612 = Cos(var1[3]);
  t916 = Sin(var1[4]);
  t1142 = Sin(var1[5]);
  t1700 = Sin(var1[13]);
  t1098 = t612*t618*t916;
  t1396 = t1102*t1142;
  t1534 = t1098 + t1396;
  t497 = Cos(var1[13]);
  t1713 = -1.*t618*t1102;
  t1767 = t612*t916*t1142;
  t1803 = t1713 + t1767;
  t2001 = Cos(var1[15]);
  t1603 = t497*t1534;
  t1827 = -1.*t1700*t1803;
  t1942 = t1603 + t1827;
  t451 = Sin(var1[15]);
  t2068 = Cos(var1[14]);
  t2077 = Cos(var1[4]);
  t2079 = t2068*t612*t2077;
  t2080 = Sin(var1[14]);
  t2085 = t1700*t1534;
  t2105 = t497*t1803;
  t2120 = t2085 + t2105;
  t2125 = t2080*t2120;
  t2148 = t2079 + t2125;
  t2156 = Cos(var1[16]);
  t1971 = t451*t1942;
  t2149 = t2001*t2148;
  t2151 = t1971 + t2149;
  t365 = Sin(var1[16]);
  t2157 = t2001*t1942;
  t2161 = -1.*t451*t2148;
  t2166 = t2157 + t2161;
  t339 = Cos(var1[17]);
  t2521 = t618*t1102*t916;
  t2526 = -1.*t612*t1142;
  t2586 = t2521 + t2526;
  t2631 = t612*t618;
  t2669 = t1102*t916*t1142;
  t2766 = t2631 + t2669;
  t2610 = t497*t2586;
  t2774 = -1.*t1700*t2766;
  t2864 = t2610 + t2774;
  t2951 = t2068*t2077*t1102;
  t3083 = t1700*t2586;
  t3094 = t497*t2766;
  t3242 = t3083 + t3094;
  t3325 = t2080*t3242;
  t3353 = t2951 + t3325;
  t2175 = Sin(var1[17]);
  t2921 = t451*t2864;
  t3397 = t2001*t3353;
  t3446 = t2921 + t3397;
  t3560 = t2001*t2864;
  t3575 = -1.*t451*t3353;
  t3629 = t3560 + t3575;
  t4100 = t497*t2077*t618;
  t4103 = -1.*t2077*t1700*t1142;
  t4107 = t4100 + t4103;
  t4125 = -1.*t2068*t916;
  t4126 = t2077*t618*t1700;
  t4138 = t497*t2077*t1142;
  t4139 = t4126 + t4138;
  t4151 = t2080*t4139;
  t4156 = t4125 + t4151;
  t4110 = t451*t4107;
  t4158 = t2001*t4156;
  t4159 = t4110 + t4158;
  t4169 = t2001*t4107;
  t4174 = -1.*t451*t4156;
  t4189 = t4169 + t4174;
  t2153 = -1.*t365*t2151;
  t2167 = t2156*t2166;
  t2171 = t2153 + t2167;
  t2181 = t2156*t2151;
  t2192 = t365*t2166;
  t2201 = t2181 + t2192;
  t3490 = -1.*t365*t3446;
  t3659 = t2156*t3629;
  t3677 = t3490 + t3659;
  t3943 = t2156*t3446;
  t3994 = t365*t3629;
  t4011 = t3943 + t3994;
  t4166 = -1.*t365*t4159;
  t4192 = t2156*t4189;
  t4226 = t4166 + t4192;
  t4259 = t2156*t4159;
  t4269 = t365*t4189;
  t4279 = t4259 + t4269;
  p_output1[0]=t2175*t2201 - 1.*t2171*t339;
  p_output1[1]=-1.*t339*t3677 + t2175*t4011;
  p_output1[2]=-1.*t339*t4226 + t2175*t4279;
  p_output1[3]=t2171*t2175 + t2201*t339;
  p_output1[4]=t2175*t3677 + t339*t4011;
  p_output1[5]=t2175*t4226 + t339*t4279;
  p_output1[6]=-1.*t2068*t2120 + t2077*t2080*t612;
  p_output1[7]=t1102*t2077*t2080 - 1.*t2068*t3242;
  p_output1[8]=-1.*t2068*t4139 - 1.*t2080*t916;
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

#include "R_ankle_joint_right_mex.hh"

namespace SymExpression
{

void R_ankle_joint_right_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
