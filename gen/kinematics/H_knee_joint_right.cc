/*
 * Automatically Generated from Mathematica.
 * Tue 26 Sep 2017 12:22:27 GMT-04:00
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
  double t536;
  double t3149;
  double t533;
  double t1087;
  double t5696;
  double t11331;
  double t1091;
  double t7976;
  double t11194;
  double t528;
  double t11441;
  double t11442;
  double t11482;
  double t11594;
  double t11270;
  double t11526;
  double t11534;
  double t527;
  double t11607;
  double t11619;
  double t11635;
  double t305;
  double t11774;
  double t11781;
  double t11796;
  double t11803;
  double t11808;
  double t11814;
  double t11672;
  double t11686;
  double t11702;
  double t11709;
  double t11798;
  double t11818;
  double t11820;
  double t11829;
  double t11831;
  double t11832;
  double t11873;
  double t11874;
  double t11877;
  double t11888;
  double t11890;
  double t11893;
  double t11544;
  double t11662;
  double t11668;
  double t11707;
  double t11715;
  double t11716;
  double t11728;
  double t11734;
  double t11753;
  double t11828;
  double t11833;
  double t11838;
  double t11843;
  double t11844;
  double t11846;
  double t11847;
  double t11848;
  double t11856;
  double t11884;
  double t11896;
  double t11897;
  double t11905;
  double t11915;
  double t11918;
  double t11933;
  double t11940;
  double t11942;
  double t12052;
  double t12054;
  double t12163;
  double t12165;
  double t11956;
  double t11964;
  double t11965;
  double t12057;
  double t12058;
  double t12071;
  double t12098;
  double t12103;
  double t12123;
  double t12125;
  double t12126;
  double t12130;
  double t12133;
  double t12137;
  double t12138;
  double t12143;
  double t12153;
  double t12154;
  double t12168;
  double t12176;
  double t12179;
  double t12182;
  double t12191;
  double t12195;
  double t12219;
  double t12221;
  double t12224;
  double t11973;
  double t11978;
  double t11979;
  double t11980;
  double t11996;
  double t11997;
  t536 = Cos(var1[5]);
  t3149 = Sin(var1[3]);
  t533 = Cos(var1[3]);
  t1087 = Sin(var1[4]);
  t5696 = Sin(var1[5]);
  t11331 = Cos(var1[14]);
  t1091 = t533*t536*t1087;
  t7976 = t3149*t5696;
  t11194 = t1091 + t7976;
  t528 = Sin(var1[14]);
  t11441 = -1.*t536*t3149;
  t11442 = t533*t1087*t5696;
  t11482 = t11441 + t11442;
  t11594 = Cos(var1[15]);
  t11270 = t528*t11194;
  t11526 = t11331*t11482;
  t11534 = t11270 + t11526;
  t527 = Sin(var1[15]);
  t11607 = t11331*t11194;
  t11619 = -1.*t528*t11482;
  t11635 = t11607 + t11619;
  t305 = Cos(var1[17]);
  t11774 = t536*t3149*t1087;
  t11781 = -1.*t533*t5696;
  t11796 = t11774 + t11781;
  t11803 = t533*t536;
  t11808 = t3149*t1087*t5696;
  t11814 = t11803 + t11808;
  t11672 = Sin(var1[17]);
  t11686 = Cos(var1[16]);
  t11702 = Cos(var1[4]);
  t11709 = Sin(var1[16]);
  t11798 = t528*t11796;
  t11818 = t11331*t11814;
  t11820 = t11798 + t11818;
  t11829 = t11331*t11796;
  t11831 = -1.*t528*t11814;
  t11832 = t11829 + t11831;
  t11873 = t11702*t536*t528;
  t11874 = t11331*t11702*t5696;
  t11877 = t11873 + t11874;
  t11888 = t11331*t11702*t536;
  t11890 = -1.*t11702*t528*t5696;
  t11893 = t11888 + t11890;
  t11544 = -1.*t527*t11534;
  t11662 = t11594*t11635;
  t11668 = t11544 + t11662;
  t11707 = t11686*t533*t11702;
  t11715 = t11594*t11534;
  t11716 = t527*t11635;
  t11728 = t11715 + t11716;
  t11734 = t11709*t11728;
  t11753 = t11707 + t11734;
  t11828 = -1.*t527*t11820;
  t11833 = t11594*t11832;
  t11838 = t11828 + t11833;
  t11843 = t11686*t11702*t3149;
  t11844 = t11594*t11820;
  t11846 = t527*t11832;
  t11847 = t11844 + t11846;
  t11848 = t11709*t11847;
  t11856 = t11843 + t11848;
  t11884 = -1.*t527*t11877;
  t11896 = t11594*t11893;
  t11897 = t11884 + t11896;
  t11905 = -1.*t11686*t1087;
  t11915 = t11594*t11877;
  t11918 = t527*t11893;
  t11933 = t11915 + t11918;
  t11940 = t11709*t11933;
  t11942 = t11905 + t11940;
  t12052 = -1.*t11686;
  t12054 = 1. + t12052;
  t12163 = -1.*t305;
  t12165 = 1. + t12163;
  t11956 = t11672*t11668;
  t11964 = t305*t11753;
  t11965 = t11956 + t11964;
  t12057 = -0.049*t12054;
  t12058 = -0.135*t11709;
  t12071 = 0. + t12057 + t12058;
  t12098 = 0.135*t528;
  t12103 = 0. + t12098;
  t12123 = -1.*t11331;
  t12125 = 1. + t12123;
  t12126 = -0.135*t12125;
  t12130 = 0. + t12126;
  t12133 = -1.*t11594;
  t12137 = 1. + t12133;
  t12138 = -0.135*t12137;
  t12143 = 0. + t12138;
  t12153 = 0.135*t527;
  t12154 = 0. + t12153;
  t12168 = -0.09*t12165;
  t12176 = 0.049*t11672;
  t12179 = 0. + t12168 + t12176;
  t12182 = -0.135*t12054;
  t12191 = 0.049*t11709;
  t12195 = 0. + t12182 + t12191;
  t12219 = -0.049*t12165;
  t12221 = -0.09*t11672;
  t12224 = 0. + t12219 + t12221;
  t11973 = t11672*t11838;
  t11978 = t305*t11856;
  t11979 = t11973 + t11978;
  t11980 = t11672*t11897;
  t11996 = t305*t11942;
  t11997 = t11980 + t11996;
  p_output1[0]=t11672*t11753 - 1.*t11668*t305;
  p_output1[1]=t11672*t11856 - 1.*t11838*t305;
  p_output1[2]=t11672*t11942 - 1.*t11897*t305;
  p_output1[3]=0.;
  p_output1[4]=t11965;
  p_output1[5]=t11979;
  p_output1[6]=t11997;
  p_output1[7]=0.;
  p_output1[8]=-1.*t11686*t11728 + t11702*t11709*t533;
  p_output1[9]=-1.*t11686*t11847 + t11702*t11709*t3149;
  p_output1[10]=-1.*t1087*t11709 - 1.*t11686*t11933;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.049*t11965 + t11194*t12103 + t11482*t12130 + t11534*t12143 + t11635*t12154 + t11668*t12179 + t11728*t12195 + t11753*t12224 - 0.21*(-1.*t11672*t11753 + t11668*t305) + t11702*t12071*t533 - 0.1305*(t11686*t11728 - 1.*t11702*t11709*t533) + var1[0];
  p_output1[13]=0. - 0.049*t11979 + t11796*t12103 + t11814*t12130 + t11820*t12143 + t11832*t12154 + t11838*t12179 + t11847*t12195 + t11856*t12224 - 0.21*(-1.*t11672*t11856 + t11838*t305) + t11702*t12071*t3149 - 0.1305*(t11686*t11847 - 1.*t11702*t11709*t3149) + var1[1];
  p_output1[14]=0. - 0.1305*(t1087*t11709 + t11686*t11933) - 0.049*t11997 - 1.*t1087*t12071 + t11877*t12143 + t11893*t12154 + t11897*t12179 + t11933*t12195 + t11942*t12224 - 0.21*(-1.*t11672*t11942 + t11897*t305) + t11702*t12103*t536 + t11702*t12130*t5696 + var1[2];
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

#include "H_knee_joint_right.hh"

namespace SymExpression
{

void H_knee_joint_right_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
