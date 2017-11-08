/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:10:53 GMT-05:00
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
  double t443;
  double t485;
  double t490;
  double t482;
  double t492;
  double t458;
  double t486;
  double t501;
  double t502;
  double t508;
  double t509;
  double t512;
  double t513;
  double t419;
  double t466;
  double t470;
  double t472;
  double t473;
  double t515;
  double t526;
  double t566;
  double t567;
  double t568;
  double t571;
  double t572;
  double t575;
  double t679;
  double t680;
  double t682;
  double t587;
  double t538;
  double t710;
  double t711;
  double t712;
  double t694;
  double t590;
  double t592;
  double t802;
  double t803;
  double t807;
  double t719;
  double t736;
  double t763;
  double t766;
  double t769;
  double t771;
  double t772;
  double t775;
  double t777;
  double t779;
  t443 = Sin(var1[3]);
  t485 = Cos(var1[5]);
  t490 = Sin(var1[4]);
  t482 = Cos(var1[3]);
  t492 = Sin(var1[5]);
  t458 = Cos(var1[6]);
  t486 = -1.*t482*t485;
  t501 = -1.*t443*t490*t492;
  t502 = t486 + t501;
  t508 = -1.*t485*t443*t490;
  t509 = t482*t492;
  t512 = t508 + t509;
  t513 = Sin(var1[6]);
  t419 = Cos(var1[4]);
  t466 = -1.*t458;
  t470 = 1. + t466;
  t472 = 0.135*t470;
  t473 = 0. + t472;
  t515 = -0.135*t513;
  t526 = 0. + t515;
  t566 = -1.*t485*t443;
  t567 = t482*t490*t492;
  t568 = t566 + t567;
  t571 = t482*t485*t490;
  t572 = t443*t492;
  t575 = t571 + t572;
  t679 = t485*t443;
  t680 = -1.*t482*t490*t492;
  t682 = t679 + t680;
  t587 = t458*t575;
  t538 = t458*t502;
  t710 = t485*t443*t490;
  t711 = -1.*t482*t492;
  t712 = t710 + t711;
  t694 = -1.*t575*t513;
  t590 = -1.*t568*t513;
  t592 = t587 + t590;
  t802 = t482*t485;
  t803 = t443*t490*t492;
  t807 = t802 + t803;
  t719 = -1.*t712*t513;
  t736 = t458*t712;
  t763 = -1.*t419*t458*t492;
  t766 = -1.*t419*t485*t513;
  t769 = t763 + t766;
  t771 = -0.09*t769;
  t772 = t419*t485*t458;
  t775 = -1.*t419*t492*t513;
  t777 = t772 + t775;
  t779 = 0.135*t777;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=0.049*t419*t443 + t473*t502 - 0.09*(t458*t512 - 1.*t502*t513) + t512*t526 + 0.135*(t512*t513 + t538);
  p_output1[10]=-0.049*t419*t482 + t473*t568 + t526*t575 + 0.135*(t458*t568 + t513*t575) - 0.09*t592;
  p_output1[11]=0;
  p_output1[12]=0.049*t482*t490 + t419*t473*t482*t492 + 0.135*(t419*t458*t482*t492 + t419*t482*t485*t513) - 0.09*(t419*t458*t482*t485 - 1.*t419*t482*t492*t513) + t419*t482*t485*t526;
  p_output1[13]=0.049*t443*t490 + t419*t443*t473*t492 + 0.135*(t419*t443*t458*t492 + t419*t443*t485*t513) - 0.09*(t419*t443*t458*t485 - 1.*t419*t443*t492*t513) + t419*t443*t485*t526;
  p_output1[14]=0.049*t419 - 1.*t473*t490*t492 + 0.135*(-1.*t458*t490*t492 - 1.*t485*t490*t513) - 0.09*(-1.*t458*t485*t490 + t490*t492*t513) - 1.*t485*t490*t526;
  p_output1[15]=t473*t575 + t526*t682 + 0.135*(t587 + t513*t682) - 0.09*(t458*t682 + t694);
  p_output1[16]=t502*t526 + t473*t712 - 0.09*(t538 + t719) + 0.135*(t502*t513 + t736);
  p_output1[17]=t419*t473*t485 - 1.*t419*t492*t526 + t771 + t779;
  p_output1[18]=0.135*t513*t568 - 0.135*t458*t575 + 0.135*t592 - 0.09*(-1.*t458*t568 + t694);
  p_output1[19]=-0.135*t458*t712 + 0.135*t513*t807 - 0.09*(t719 - 1.*t458*t807) + 0.135*(t736 - 1.*t513*t807);
  p_output1[20]=-0.135*t419*t458*t485 + 0.135*t419*t492*t513 + t771 + t779;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 20, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_hip_rotation_left_mex.hh"

namespace SymExpression
{

void J_hip_rotation_left_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
