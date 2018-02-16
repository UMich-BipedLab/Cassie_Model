/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:17:40 GMT-05:00
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
  double t575;
  double t783;
  double t1325;
  double t2388;
  double t2551;
  double t2666;
  double t3035;
  double t3528;
  double t3672;
  double t3866;
  double t4032;
  double t4343;
  double t4519;
  double t4534;
  double t4570;
  double t5058;
  double t5126;
  double t5210;
  double t5392;
  double t5443;
  double t5561;
  double t5591;
  double t5947;
  double t5966;
  double t6118;
  double t6510;
  double t6621;
  double t6632;
  double t6751;
  double t6757;
  double t6760;
  double t6893;
  double t7044;
  double t7045;
  double t7109;
  double t7501;
  double t7551;
  double t7572;
  double t7612;
  double t7625;
  double t7637;
  double t7645;
  double t7703;
  double t7707;
  double t7720;
  double t7783;
  double t7786;
  double t7787;
  double t835;
  double t1022;
  double t1150;
  double t1383;
  double t1407;
  double t2925;
  double t3323;
  double t3431;
  double t3619;
  double t3627;
  double t3639;
  double t4110;
  double t4344;
  double t4491;
  double t4907;
  double t4981;
  double t4984;
  double t5563;
  double t5883;
  double t5921;
  double t7925;
  double t7933;
  double t7946;
  double t7954;
  double t7965;
  double t7974;
  double t6215;
  double t6344;
  double t6417;
  double t6842;
  double t6953;
  double t6984;
  double t7979;
  double t7984;
  double t7988;
  double t7990;
  double t7992;
  double t7993;
  double t7432;
  double t7492;
  double t7499;
  double t7642;
  double t7681;
  double t7698;
  double t8011;
  double t8019;
  double t8023;
  double t8031;
  double t8034;
  double t8035;
  double t7748;
  double t7754;
  double t7768;
  double t8037;
  double t8043;
  double t8049;
  double t8057;
  double t8060;
  double t8064;
  double t8105;
  double t8109;
  double t8112;
  double t8116;
  double t8117;
  double t8118;
  double t8124;
  double t8125;
  double t8126;
  double t8130;
  double t8131;
  double t8132;
  double t8134;
  double t8136;
  double t8137;
  double t8139;
  double t8140;
  double t8141;
  t575 = Sin(var1[0]);
  t783 = Cos(var1[1]);
  t1325 = Sin(var1[1]);
  t2388 = Cos(var1[2]);
  t2551 = -1.*t2388;
  t2666 = 1. + t2551;
  t3035 = Sin(var1[2]);
  t3528 = Cos(var1[0]);
  t3672 = Cos(var1[3]);
  t3866 = -1.*t3672;
  t4032 = 1. + t3866;
  t4343 = Sin(var1[3]);
  t4519 = t2388*t575*t1325;
  t4534 = t3528*t3035;
  t4570 = t4519 + t4534;
  t5058 = t3528*t2388;
  t5126 = -1.*t575*t1325*t3035;
  t5210 = t5058 + t5126;
  t5392 = Cos(var1[4]);
  t5443 = -1.*t5392;
  t5561 = 1. + t5443;
  t5591 = Sin(var1[4]);
  t5947 = -1.*t4343*t4570;
  t5966 = t3672*t5210;
  t6118 = t5947 + t5966;
  t6510 = t3672*t4570;
  t6621 = t4343*t5210;
  t6632 = t6510 + t6621;
  t6751 = Cos(var1[5]);
  t6757 = -1.*t6751;
  t6760 = 1. + t6757;
  t6893 = Sin(var1[5]);
  t7044 = t5591*t6118;
  t7045 = t5392*t6632;
  t7109 = t7044 + t7045;
  t7501 = t5392*t6118;
  t7551 = -1.*t5591*t6632;
  t7572 = t7501 + t7551;
  t7612 = Cos(var1[6]);
  t7625 = -1.*t7612;
  t7637 = 1. + t7625;
  t7645 = Sin(var1[6]);
  t7703 = -1.*t6893*t7109;
  t7707 = t6751*t7572;
  t7720 = t7703 + t7707;
  t7783 = t6751*t7109;
  t7786 = t6893*t7572;
  t7787 = t7783 + t7786;
  t835 = -1.*t783;
  t1022 = 1. + t835;
  t1150 = 0.135*t1022;
  t1383 = 0.049*t1325;
  t1407 = 0. + t1150 + t1383;
  t2925 = -0.049*t2666;
  t3323 = -0.09*t3035;
  t3431 = 0. + t2925 + t3323;
  t3619 = -0.09*t2666;
  t3627 = 0.049*t3035;
  t3639 = 0. + t3619 + t3627;
  t4110 = -0.049*t4032;
  t4344 = -0.21*t4343;
  t4491 = 0. + t4110 + t4344;
  t4907 = -0.21*t4032;
  t4981 = 0.049*t4343;
  t4984 = 0. + t4907 + t4981;
  t5563 = -0.2707*t5561;
  t5883 = 0.0016*t5591;
  t5921 = 0. + t5563 + t5883;
  t7925 = t3528*t2388*t1325;
  t7933 = -1.*t575*t3035;
  t7946 = t7925 + t7933;
  t7954 = -1.*t2388*t575;
  t7965 = -1.*t3528*t1325*t3035;
  t7974 = t7954 + t7965;
  t6215 = -0.0016*t5561;
  t6344 = -0.2707*t5591;
  t6417 = 0. + t6215 + t6344;
  t6842 = 0.0184*t6760;
  t6953 = -0.7055*t6893;
  t6984 = 0. + t6842 + t6953;
  t7979 = -1.*t4343*t7946;
  t7984 = t3672*t7974;
  t7988 = t7979 + t7984;
  t7990 = t3672*t7946;
  t7992 = t4343*t7974;
  t7993 = t7990 + t7992;
  t7432 = -0.7055*t6760;
  t7492 = -0.0184*t6893;
  t7499 = 0. + t7432 + t7492;
  t7642 = -1.1135*t7637;
  t7681 = 0.0216*t7645;
  t7698 = 0. + t7642 + t7681;
  t8011 = t5591*t7988;
  t8019 = t5392*t7993;
  t8023 = t8011 + t8019;
  t8031 = t5392*t7988;
  t8034 = -1.*t5591*t7993;
  t8035 = t8031 + t8034;
  t7748 = -0.0216*t7637;
  t7754 = -1.1135*t7645;
  t7768 = 0. + t7748 + t7754;
  t8037 = -1.*t6893*t8023;
  t8043 = t6751*t8035;
  t8049 = t8037 + t8043;
  t8057 = t6751*t8023;
  t8060 = t6893*t8035;
  t8064 = t8057 + t8060;
  t8105 = -1.*t783*t2388*t4343;
  t8109 = -1.*t3672*t783*t3035;
  t8112 = t8105 + t8109;
  t8116 = t3672*t783*t2388;
  t8117 = -1.*t783*t4343*t3035;
  t8118 = t8116 + t8117;
  t8124 = t5591*t8112;
  t8125 = t5392*t8118;
  t8126 = t8124 + t8125;
  t8130 = t5392*t8112;
  t8131 = -1.*t5591*t8118;
  t8132 = t8130 + t8131;
  t8134 = -1.*t6893*t8126;
  t8136 = t6751*t8132;
  t8137 = t8134 + t8136;
  t8139 = t6751*t8126;
  t8140 = t6893*t8132;
  t8141 = t8139 + t8140;
  p_output1[0]=0.24925 - 1.*t3528*t3639 - 1.*t4491*t4570 - 1.*t4984*t5210 + 0.135*t575 - 1.*t1407*t575 - 1.*t1325*t3431*t575 - 1.*t5921*t6118 - 1.*t6417*t6632 - 1.*t6984*t7109 - 1.*t7499*t7572 - 1.*t7698*t7720 - 1.*t7768*t7787 - 0.0306*(t7645*t7720 + t7612*t7787) + 1.1312*(t7612*t7720 - 1.*t7645*t7787) - 0.1305*t575*t783;
  p_output1[1]=-0.0302 + 0.135*(1. - 1.*t3528) + t1407*t3528 + t1325*t3431*t3528 - 1.*t3639*t575 + 0.1305*t3528*t783 + t4491*t7946 + t4984*t7974 + t5921*t7988 + t6417*t7993 + t6984*t8023 + t7499*t8035 + t7698*t8049 + t7768*t8064 + 0.0306*(t7645*t8049 + t7612*t8064) - 1.1312*(t7612*t8049 - 1.*t7645*t8064);
  p_output1[2]=-0.047 - 0.049*t1022 + 0.004500000000000004*t1325 + t3431*t783 + t2388*t4491*t783 - 1.*t3035*t4984*t783 + t5921*t8112 + t6417*t8118 + t6984*t8126 + t7499*t8132 + t7698*t8137 + t7768*t8141 + 0.0306*(t7645*t8137 + t7612*t8141) - 1.1312*(t7612*t8137 - 1.*t7645*t8141);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "p_MultisenseIMU_to_LeftToeBottom_mex.hh"

namespace SymExpression
{

void p_MultisenseIMU_to_LeftToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
