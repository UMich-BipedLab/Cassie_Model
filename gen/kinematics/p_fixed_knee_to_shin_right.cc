/*
 * Automatically Generated from Mathematica.
 * Tue 26 Sep 2017 12:22:28 GMT-04:00
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
  double t296;
  double t11442;
  double t11635;
  double t11526;
  double t11662;
  double t7976;
  double t11607;
  double t11671;
  double t11707;
  double t11716;
  double t11796;
  double t11798;
  double t11803;
  double t11859;
  double t11843;
  double t11844;
  double t11846;
  double t11818;
  double t11874;
  double t11888;
  double t11893;
  double t309;
  double t1091;
  double t1924;
  double t5240;
  double t302;
  double t11997;
  double t12003;
  double t12007;
  double t11899;
  double t11915;
  double t11918;
  double t11946;
  double t11964;
  double t11965;
  double t11973;
  double t12058;
  double t12081;
  double t12098;
  double t12116;
  double t12126;
  double t12130;
  double t12138;
  double t12153;
  double t12154;
  double t12159;
  double t12182;
  double t12191;
  double t12195;
  double t2504;
  double t5780;
  double t6855;
  double t11194;
  double t11270;
  double t11734;
  double t11767;
  double t11769;
  double t11774;
  double t11829;
  double t11832;
  double t11833;
  double t11841;
  double t12242;
  double t12256;
  double t12258;
  double t12274;
  double t12276;
  double t12279;
  double t11867;
  double t11873;
  double t11940;
  double t11951;
  double t11956;
  double t12290;
  double t12291;
  double t12303;
  double t12312;
  double t12320;
  double t12324;
  double t11979;
  double t11980;
  double t11996;
  double t12340;
  double t12341;
  double t12360;
  double t12042;
  double t12047;
  double t12057;
  double t12132;
  double t12143;
  double t12148;
  double t12330;
  double t12331;
  double t12335;
  double t12396;
  double t12405;
  double t12412;
  double t12176;
  double t12179;
  double t12181;
  double t12419;
  double t12422;
  double t12424;
  double t12427;
  double t12431;
  double t12432;
  double t12454;
  double t12458;
  double t12460;
  double t12476;
  double t12478;
  double t12480;
  double t12519;
  double t12520;
  double t12533;
  double t12505;
  double t12507;
  double t12510;
  double t12544;
  double t12545;
  double t12548;
  double t12553;
  double t12554;
  double t12556;
  double t12561;
  double t12565;
  double t12566;
  t296 = Cos(var1[3]);
  t11442 = Cos(var1[5]);
  t11635 = Sin(var1[3]);
  t11526 = Sin(var1[4]);
  t11662 = Sin(var1[5]);
  t7976 = Sin(var1[14]);
  t11607 = t296*t11442*t11526;
  t11671 = t11635*t11662;
  t11707 = t11607 + t11671;
  t11716 = Cos(var1[14]);
  t11796 = -1.*t11442*t11635;
  t11798 = t296*t11526*t11662;
  t11803 = t11796 + t11798;
  t11859 = Sin(var1[15]);
  t11843 = t7976*t11707;
  t11844 = t11716*t11803;
  t11846 = t11843 + t11844;
  t11818 = Cos(var1[15]);
  t11874 = t11716*t11707;
  t11888 = -1.*t7976*t11803;
  t11893 = t11874 + t11888;
  t309 = Cos(var1[16]);
  t1091 = -1.*t309;
  t1924 = 1. + t1091;
  t5240 = Sin(var1[16]);
  t302 = Cos(var1[4]);
  t11997 = t11818*t11846;
  t12003 = t11859*t11893;
  t12007 = t11997 + t12003;
  t11899 = Cos(var1[17]);
  t11915 = -1.*t11899;
  t11918 = 1. + t11915;
  t11946 = Sin(var1[17]);
  t11964 = -1.*t11859*t11846;
  t11965 = t11818*t11893;
  t11973 = t11964 + t11965;
  t12058 = t309*t296*t302;
  t12081 = t5240*t12007;
  t12098 = t12058 + t12081;
  t12116 = Cos(var1[18]);
  t12126 = -1.*t12116;
  t12130 = 1. + t12126;
  t12138 = Sin(var1[18]);
  t12153 = t11946*t11973;
  t12154 = t11899*t12098;
  t12159 = t12153 + t12154;
  t12182 = t11899*t11973;
  t12191 = -1.*t11946*t12098;
  t12195 = t12182 + t12191;
  t2504 = -0.049*t1924;
  t5780 = -0.135*t5240;
  t6855 = 0. + t2504 + t5780;
  t11194 = 0.135*t7976;
  t11270 = 0. + t11194;
  t11734 = -1.*t11716;
  t11767 = 1. + t11734;
  t11769 = -0.135*t11767;
  t11774 = 0. + t11769;
  t11829 = -1.*t11818;
  t11832 = 1. + t11829;
  t11833 = -0.135*t11832;
  t11841 = 0. + t11833;
  t12242 = t11442*t11635*t11526;
  t12256 = -1.*t296*t11662;
  t12258 = t12242 + t12256;
  t12274 = t296*t11442;
  t12276 = t11635*t11526*t11662;
  t12279 = t12274 + t12276;
  t11867 = 0.135*t11859;
  t11873 = 0. + t11867;
  t11940 = -0.09*t11918;
  t11951 = 0.049*t11946;
  t11956 = 0. + t11940 + t11951;
  t12290 = t7976*t12258;
  t12291 = t11716*t12279;
  t12303 = t12290 + t12291;
  t12312 = t11716*t12258;
  t12320 = -1.*t7976*t12279;
  t12324 = t12312 + t12320;
  t11979 = -0.135*t1924;
  t11980 = 0.049*t5240;
  t11996 = 0. + t11979 + t11980;
  t12340 = t11818*t12303;
  t12341 = t11859*t12324;
  t12360 = t12340 + t12341;
  t12042 = -0.049*t11918;
  t12047 = -0.09*t11946;
  t12057 = 0. + t12042 + t12047;
  t12132 = -0.049*t12130;
  t12143 = -0.21*t12138;
  t12148 = 0. + t12132 + t12143;
  t12330 = -1.*t11859*t12303;
  t12331 = t11818*t12324;
  t12335 = t12330 + t12331;
  t12396 = t309*t302*t11635;
  t12405 = t5240*t12360;
  t12412 = t12396 + t12405;
  t12176 = -0.21*t12130;
  t12179 = 0.049*t12138;
  t12181 = 0. + t12176 + t12179;
  t12419 = t11946*t12335;
  t12422 = t11899*t12412;
  t12424 = t12419 + t12422;
  t12427 = t11899*t12335;
  t12431 = -1.*t11946*t12412;
  t12432 = t12427 + t12431;
  t12454 = t302*t11442*t7976;
  t12458 = t11716*t302*t11662;
  t12460 = t12454 + t12458;
  t12476 = t11716*t302*t11442;
  t12478 = -1.*t302*t7976*t11662;
  t12480 = t12476 + t12478;
  t12519 = t11818*t12460;
  t12520 = t11859*t12480;
  t12533 = t12519 + t12520;
  t12505 = -1.*t11859*t12460;
  t12507 = t11818*t12480;
  t12510 = t12505 + t12507;
  t12544 = -1.*t309*t11526;
  t12545 = t5240*t12533;
  t12548 = t12544 + t12545;
  t12553 = t11946*t12510;
  t12554 = t11899*t12548;
  t12556 = t12553 + t12554;
  t12561 = t11899*t12510;
  t12565 = -1.*t11946*t12548;
  t12566 = t12561 + t12565;
  p_output1[0]=0. + t11270*t11707 + t11774*t11803 + t11841*t11846 + t11873*t11893 + t11956*t11973 + t11996*t12007 + t12057*t12098 + t12148*t12159 + t12181*t12195 - 0.2707*(-1.*t12138*t12159 + t12116*t12195) - 0.0016*(t12116*t12159 + t12138*t12195) - 0.1305*(t12007*t309 - 1.*t296*t302*t5240) + t296*t302*t6855 + var1[0];
  p_output1[1]=0. + t11270*t12258 + t11774*t12279 + t11841*t12303 + t11873*t12324 + t11956*t12335 + t11996*t12360 + t12057*t12412 + t12148*t12424 + t12181*t12432 - 0.2707*(-1.*t12138*t12424 + t12116*t12432) - 0.0016*(t12116*t12424 + t12138*t12432) - 0.1305*(t12360*t309 - 1.*t11635*t302*t5240) + t11635*t302*t6855 + var1[1];
  p_output1[2]=0. + t11841*t12460 + t11873*t12480 + t11956*t12510 + t11996*t12533 + t12057*t12548 + t12148*t12556 + t12181*t12566 - 0.2707*(-1.*t12138*t12556 + t12116*t12566) - 0.0016*(t12116*t12556 + t12138*t12566) + t11270*t11442*t302 + t11662*t11774*t302 - 0.1305*(t12533*t309 + t11526*t5240) - 1.*t11526*t6855 + var1[2];
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

#include "p_fixed_knee_to_shin_right.hh"

namespace SymExpression
{

void p_fixed_knee_to_shin_right_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
