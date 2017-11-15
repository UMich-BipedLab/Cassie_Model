/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:48 GMT-05:00
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
  double t183;
  double t327;
  double t167;
  double t212;
  double t329;
  double t406;
  double t236;
  double t344;
  double t360;
  double t163;
  double t513;
  double t542;
  double t555;
  double t654;
  double t402;
  double t575;
  double t605;
  double t162;
  double t655;
  double t674;
  double t690;
  double t733;
  double t779;
  double t786;
  double t859;
  double t895;
  double t919;
  double t1024;
  double t642;
  double t986;
  double t1002;
  double t125;
  double t1029;
  double t1039;
  double t1043;
  double t48;
  double t1076;
  double t1080;
  double t1083;
  double t1108;
  double t1110;
  double t1123;
  double t1104;
  double t1143;
  double t1151;
  double t1154;
  double t1155;
  double t1156;
  double t1159;
  double t1164;
  double t1166;
  double t1059;
  double t1152;
  double t1168;
  double t1169;
  double t1177;
  double t1178;
  double t1179;
  double t1444;
  double t1533;
  double t1570;
  double t1688;
  double t1704;
  double t1828;
  double t1872;
  double t1876;
  double t1916;
  double t1607;
  double t2027;
  double t2067;
  double t2225;
  double t2294;
  double t2300;
  double t1003;
  double t1053;
  double t1054;
  double t1061;
  double t1063;
  double t1067;
  double t1174;
  double t1184;
  double t1195;
  double t1201;
  double t1204;
  double t1205;
  double t2107;
  double t2314;
  double t2343;
  double t2367;
  double t2608;
  double t2650;
  double t3281;
  double t3329;
  double t3971;
  double t3978;
  double t4582;
  double t4592;
  double t4941;
  double t5022;
  double t2679;
  double t2680;
  double t2685;
  double t3335;
  double t3359;
  double t3361;
  double t3437;
  double t3445;
  double t3451;
  double t3507;
  double t3515;
  double t3546;
  double t3841;
  double t3863;
  double t3887;
  double t4103;
  double t4127;
  double t4134;
  double t4344;
  double t4442;
  double t4456;
  double t4664;
  double t4708;
  double t4714;
  double t4757;
  double t4796;
  double t4838;
  double t5188;
  double t5256;
  double t5289;
  double t5511;
  double t5517;
  double t5526;
  double t2797;
  double t2799;
  double t2803;
  double t2815;
  double t2822;
  double t3026;
  t183 = Cos(var1[5]);
  t327 = Sin(var1[3]);
  t167 = Cos(var1[3]);
  t212 = Sin(var1[4]);
  t329 = Sin(var1[5]);
  t406 = Sin(var1[13]);
  t236 = t167*t183*t212;
  t344 = t327*t329;
  t360 = t236 + t344;
  t163 = Cos(var1[13]);
  t513 = -1.*t183*t327;
  t542 = t167*t212*t329;
  t555 = t513 + t542;
  t654 = Cos(var1[15]);
  t402 = t163*t360;
  t575 = -1.*t406*t555;
  t605 = t402 + t575;
  t162 = Sin(var1[15]);
  t655 = Cos(var1[14]);
  t674 = Cos(var1[4]);
  t690 = t655*t167*t674;
  t733 = Sin(var1[14]);
  t779 = t406*t360;
  t786 = t163*t555;
  t859 = t779 + t786;
  t895 = t733*t859;
  t919 = t690 + t895;
  t1024 = Cos(var1[16]);
  t642 = t162*t605;
  t986 = t654*t919;
  t1002 = t642 + t986;
  t125 = Sin(var1[16]);
  t1029 = t654*t605;
  t1039 = -1.*t162*t919;
  t1043 = t1029 + t1039;
  t48 = Cos(var1[17]);
  t1076 = t183*t327*t212;
  t1080 = -1.*t167*t329;
  t1083 = t1076 + t1080;
  t1108 = t167*t183;
  t1110 = t327*t212*t329;
  t1123 = t1108 + t1110;
  t1104 = t163*t1083;
  t1143 = -1.*t406*t1123;
  t1151 = t1104 + t1143;
  t1154 = t655*t674*t327;
  t1155 = t406*t1083;
  t1156 = t163*t1123;
  t1159 = t1155 + t1156;
  t1164 = t733*t1159;
  t1166 = t1154 + t1164;
  t1059 = Sin(var1[17]);
  t1152 = t162*t1151;
  t1168 = t654*t1166;
  t1169 = t1152 + t1168;
  t1177 = t654*t1151;
  t1178 = -1.*t162*t1166;
  t1179 = t1177 + t1178;
  t1444 = t163*t674*t183;
  t1533 = -1.*t674*t406*t329;
  t1570 = t1444 + t1533;
  t1688 = -1.*t655*t212;
  t1704 = t674*t183*t406;
  t1828 = t163*t674*t329;
  t1872 = t1704 + t1828;
  t1876 = t733*t1872;
  t1916 = t1688 + t1876;
  t1607 = t162*t1570;
  t2027 = t654*t1916;
  t2067 = t1607 + t2027;
  t2225 = t654*t1570;
  t2294 = -1.*t162*t1916;
  t2300 = t2225 + t2294;
  t1003 = -1.*t125*t1002;
  t1053 = t1024*t1043;
  t1054 = t1003 + t1053;
  t1061 = t1024*t1002;
  t1063 = t125*t1043;
  t1067 = t1061 + t1063;
  t1174 = -1.*t125*t1169;
  t1184 = t1024*t1179;
  t1195 = t1174 + t1184;
  t1201 = t1024*t1169;
  t1204 = t125*t1179;
  t1205 = t1201 + t1204;
  t2107 = -1.*t125*t2067;
  t2314 = t1024*t2300;
  t2343 = t2107 + t2314;
  t2367 = t1024*t2067;
  t2608 = t125*t2300;
  t2650 = t2367 + t2608;
  t3281 = -1.*t655;
  t3329 = 1. + t3281;
  t3971 = -1.*t654;
  t3978 = 1. + t3971;
  t4582 = -1.*t1024;
  t4592 = 1. + t4582;
  t4941 = -1.*t48;
  t5022 = 1. + t4941;
  t2679 = t1059*t1054;
  t2680 = t48*t1067;
  t2685 = t2679 + t2680;
  t3335 = -0.049*t3329;
  t3359 = -0.135*t733;
  t3361 = 0. + t3335 + t3359;
  t3437 = 0.135*t406;
  t3445 = 0. + t3437;
  t3451 = -1.*t163;
  t3507 = 1. + t3451;
  t3515 = -0.135*t3507;
  t3546 = 0. + t3515;
  t3841 = -0.135*t3329;
  t3863 = 0.049*t733;
  t3887 = 0. + t3841 + t3863;
  t4103 = -0.09*t3978;
  t4127 = 0.049*t162;
  t4134 = 0. + t4103 + t4127;
  t4344 = -0.049*t3978;
  t4442 = -0.09*t162;
  t4456 = 0. + t4344 + t4442;
  t4664 = -0.049*t4592;
  t4708 = -0.21*t125;
  t4714 = 0. + t4664 + t4708;
  t4757 = -0.21*t4592;
  t4796 = 0.049*t125;
  t4838 = 0. + t4757 + t4796;
  t5188 = -0.2707*t5022;
  t5256 = 0.0016*t1059;
  t5289 = 0. + t5188 + t5256;
  t5511 = -0.0016*t5022;
  t5517 = -0.2707*t1059;
  t5526 = 0. + t5511 + t5517;
  t2797 = t1059*t1195;
  t2799 = t48*t1205;
  t2803 = t2797 + t2799;
  t2815 = t1059*t2343;
  t2822 = t48*t2650;
  t3026 = t2815 + t2822;
  p_output1[0]=t1059*t1067 - 1.*t1054*t48;
  p_output1[1]=t1059*t1205 - 1.*t1195*t48;
  p_output1[2]=t1059*t2650 - 1.*t2343*t48;
  p_output1[3]=0.;
  p_output1[4]=t2685;
  p_output1[5]=t2803;
  p_output1[6]=t3026;
  p_output1[7]=0.;
  p_output1[8]=t167*t674*t733 - 1.*t655*t859;
  p_output1[9]=-1.*t1159*t655 + t327*t674*t733;
  p_output1[10]=-1.*t1872*t655 - 1.*t212*t733;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.0016*t2685 + t3445*t360 + t1002*t4714 - 0.2707*(-1.*t1059*t1067 + t1054*t48) + t1043*t4838 + t1054*t5289 + t1067*t5526 + t3546*t555 + t4134*t605 + t167*t3361*t674 + t3887*t859 - 0.1305*(-1.*t167*t674*t733 + t655*t859) + t4456*t919 + var1[0];
  p_output1[13]=0. - 0.0016*t2803 + t1083*t3445 + t1123*t3546 + t1159*t3887 + t1151*t4134 + t1166*t4456 + t1169*t4714 - 0.2707*(-1.*t1059*t1205 + t1195*t48) + t1179*t4838 + t1195*t5289 + t1205*t5526 + t327*t3361*t674 - 0.1305*(t1159*t655 - 1.*t327*t674*t733) + var1[1];
  p_output1[14]=0. - 0.0016*t3026 - 1.*t212*t3361 + t1872*t3887 + t1570*t4134 + t1916*t4456 + t2067*t4714 - 0.2707*(-1.*t1059*t2650 + t2343*t48) + t2300*t4838 + t2343*t5289 + t2650*t5526 + t183*t3445*t674 + t329*t3546*t674 - 0.1305*(t1872*t655 + t212*t733) + var1[2];
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

#include "H_knee_to_shin_right_mex.hh"

namespace SymExpression
{

void H_knee_to_shin_right_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
