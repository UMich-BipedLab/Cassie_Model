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
  double t2725;
  double t11443;
  double t11513;
  double t11481;
  double t11515;
  double t11335;
  double t11482;
  double t11526;
  double t11534;
  double t11581;
  double t11609;
  double t11619;
  double t11628;
  double t11700;
  double t11671;
  double t11672;
  double t11679;
  double t11646;
  double t11709;
  double t11714;
  double t11715;
  double t5194;
  double t11036;
  double t11145;
  double t11201;
  double t5022;
  double t11798;
  double t11803;
  double t11804;
  double t11717;
  double t11721;
  double t11722;
  double t11733;
  double t11755;
  double t11767;
  double t11768;
  double t11833;
  double t11838;
  double t11839;
  double t11194;
  double t11270;
  double t11299;
  double t11441;
  double t11442;
  double t11584;
  double t11593;
  double t11594;
  double t11607;
  double t11647;
  double t11655;
  double t11662;
  double t11668;
  double t11877;
  double t11881;
  double t11884;
  double t11890;
  double t11893;
  double t11894;
  double t11702;
  double t11707;
  double t11728;
  double t11734;
  double t11753;
  double t11897;
  double t11899;
  double t11904;
  double t11915;
  double t11916;
  double t11918;
  double t11774;
  double t11781;
  double t11796;
  double t11946;
  double t11951;
  double t11955;
  double t11829;
  double t11831;
  double t11832;
  double t11935;
  double t11940;
  double t11941;
  double t11979;
  double t11980;
  double t11992;
  double t12057;
  double t12058;
  double t12062;
  double t12081;
  double t12090;
  double t12098;
  double t12125;
  double t12126;
  double t12130;
  double t12109;
  double t12116;
  double t12120;
  double t12146;
  double t12148;
  double t12151;
  t2725 = Cos(var1[3]);
  t11443 = Cos(var1[5]);
  t11513 = Sin(var1[3]);
  t11481 = Sin(var1[4]);
  t11515 = Sin(var1[5]);
  t11335 = Sin(var1[14]);
  t11482 = t2725*t11443*t11481;
  t11526 = t11513*t11515;
  t11534 = t11482 + t11526;
  t11581 = Cos(var1[14]);
  t11609 = -1.*t11443*t11513;
  t11619 = t2725*t11481*t11515;
  t11628 = t11609 + t11619;
  t11700 = Sin(var1[15]);
  t11671 = t11335*t11534;
  t11672 = t11581*t11628;
  t11679 = t11671 + t11672;
  t11646 = Cos(var1[15]);
  t11709 = t11581*t11534;
  t11714 = -1.*t11335*t11628;
  t11715 = t11709 + t11714;
  t5194 = Cos(var1[16]);
  t11036 = -1.*t5194;
  t11145 = 1. + t11036;
  t11201 = Sin(var1[16]);
  t5022 = Cos(var1[4]);
  t11798 = t11646*t11679;
  t11803 = t11700*t11715;
  t11804 = t11798 + t11803;
  t11717 = Cos(var1[17]);
  t11721 = -1.*t11717;
  t11722 = 1. + t11721;
  t11733 = Sin(var1[17]);
  t11755 = -1.*t11700*t11679;
  t11767 = t11646*t11715;
  t11768 = t11755 + t11767;
  t11833 = t5194*t2725*t5022;
  t11838 = t11201*t11804;
  t11839 = t11833 + t11838;
  t11194 = -0.049*t11145;
  t11270 = -0.135*t11201;
  t11299 = 0. + t11194 + t11270;
  t11441 = 0.135*t11335;
  t11442 = 0. + t11441;
  t11584 = -1.*t11581;
  t11593 = 1. + t11584;
  t11594 = -0.135*t11593;
  t11607 = 0. + t11594;
  t11647 = -1.*t11646;
  t11655 = 1. + t11647;
  t11662 = -0.135*t11655;
  t11668 = 0. + t11662;
  t11877 = t11443*t11513*t11481;
  t11881 = -1.*t2725*t11515;
  t11884 = t11877 + t11881;
  t11890 = t2725*t11443;
  t11893 = t11513*t11481*t11515;
  t11894 = t11890 + t11893;
  t11702 = 0.135*t11700;
  t11707 = 0. + t11702;
  t11728 = -0.09*t11722;
  t11734 = 0.049*t11733;
  t11753 = 0. + t11728 + t11734;
  t11897 = t11335*t11884;
  t11899 = t11581*t11894;
  t11904 = t11897 + t11899;
  t11915 = t11581*t11884;
  t11916 = -1.*t11335*t11894;
  t11918 = t11915 + t11916;
  t11774 = -0.135*t11145;
  t11781 = 0.049*t11201;
  t11796 = 0. + t11774 + t11781;
  t11946 = t11646*t11904;
  t11951 = t11700*t11918;
  t11955 = t11946 + t11951;
  t11829 = -0.049*t11722;
  t11831 = -0.09*t11733;
  t11832 = 0. + t11829 + t11831;
  t11935 = -1.*t11700*t11904;
  t11940 = t11646*t11918;
  t11941 = t11935 + t11940;
  t11979 = t5194*t5022*t11513;
  t11980 = t11201*t11955;
  t11992 = t11979 + t11980;
  t12057 = t5022*t11443*t11335;
  t12058 = t11581*t5022*t11515;
  t12062 = t12057 + t12058;
  t12081 = t11581*t5022*t11443;
  t12090 = -1.*t5022*t11335*t11515;
  t12098 = t12081 + t12090;
  t12125 = t11646*t12062;
  t12126 = t11700*t12098;
  t12130 = t12125 + t12126;
  t12109 = -1.*t11700*t12062;
  t12116 = t11646*t12098;
  t12120 = t12109 + t12116;
  t12146 = -1.*t5194*t11481;
  t12148 = t11201*t12130;
  t12151 = t12146 + t12148;
  p_output1[0]=0. + t11442*t11534 + t11607*t11628 + t11668*t11679 + t11707*t11715 + t11753*t11768 + t11796*t11804 + t11832*t11839 - 0.049*(t11733*t11768 + t11717*t11839) - 0.21*(t11717*t11768 - 1.*t11733*t11839) + t11299*t2725*t5022 - 0.1305*(-1.*t11201*t2725*t5022 + t11804*t5194) + var1[0];
  p_output1[1]=0. + t11442*t11884 + t11607*t11894 + t11668*t11904 + t11707*t11918 + t11753*t11941 + t11796*t11955 + t11832*t11992 - 0.049*(t11733*t11941 + t11717*t11992) - 0.21*(t11717*t11941 - 1.*t11733*t11992) + t11299*t11513*t5022 - 0.1305*(-1.*t11201*t11513*t5022 + t11955*t5194) + var1[1];
  p_output1[2]=0. - 1.*t11299*t11481 + t11668*t12062 + t11707*t12098 + t11753*t12120 + t11796*t12130 + t11832*t12151 - 0.049*(t11733*t12120 + t11717*t12151) - 0.21*(t11717*t12120 - 1.*t11733*t12151) + t11442*t11443*t5022 + t11515*t11607*t5022 - 0.1305*(t11201*t11481 + t12130*t5194) + var1[2];
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

#include "p_knee_joint_right.hh"

namespace SymExpression
{

void p_knee_joint_right_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
