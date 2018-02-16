/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:15:56 GMT-05:00
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
  double t662;
  double t792;
  double t657;
  double t687;
  double t802;
  double t878;
  double t774;
  double t848;
  double t867;
  double t627;
  double t890;
  double t928;
  double t933;
  double t1076;
  double t868;
  double t962;
  double t967;
  double t476;
  double t1092;
  double t1093;
  double t1111;
  double t1124;
  double t1132;
  double t1137;
  double t1138;
  double t1251;
  double t1257;
  double t1281;
  double t1059;
  double t1260;
  double t1270;
  double t244;
  double t1287;
  double t1290;
  double t1297;
  double t1326;
  double t1278;
  double t1304;
  double t1306;
  double t215;
  double t1361;
  double t1385;
  double t1390;
  double t1559;
  double t1323;
  double t1457;
  double t1461;
  double t97;
  double t1603;
  double t1612;
  double t1616;
  double t26;
  double t2071;
  double t2212;
  double t2252;
  double t2299;
  double t2300;
  double t2303;
  double t2289;
  double t2327;
  double t2331;
  double t2335;
  double t2340;
  double t2344;
  double t2364;
  double t2389;
  double t2410;
  double t2333;
  double t2437;
  double t2441;
  double t2571;
  double t2611;
  double t2613;
  double t2542;
  double t2668;
  double t2689;
  double t2700;
  double t2709;
  double t2717;
  double t1846;
  double t2694;
  double t2727;
  double t2746;
  double t2758;
  double t2760;
  double t2780;
  double t2819;
  double t2820;
  double t2823;
  double t2835;
  double t2837;
  double t2844;
  double t2849;
  double t2850;
  double t2855;
  double t2834;
  double t2860;
  double t2861;
  double t2867;
  double t2868;
  double t2874;
  double t2866;
  double t2877;
  double t2889;
  double t2896;
  double t2899;
  double t2904;
  double t2894;
  double t2908;
  double t2913;
  double t2917;
  double t2927;
  double t2928;
  double t1513;
  double t1676;
  double t1689;
  double t1849;
  double t1861;
  double t1880;
  double t2754;
  double t2788;
  double t2791;
  double t2803;
  double t2804;
  double t2807;
  double t2916;
  double t2936;
  double t2937;
  double t2941;
  double t2942;
  double t2943;
  t662 = Cos(var1[5]);
  t792 = Sin(var1[3]);
  t657 = Cos(var1[3]);
  t687 = Sin(var1[4]);
  t802 = Sin(var1[5]);
  t878 = Sin(var1[13]);
  t774 = t657*t662*t687;
  t848 = t792*t802;
  t867 = t774 + t848;
  t627 = Cos(var1[13]);
  t890 = -1.*t662*t792;
  t928 = t657*t687*t802;
  t933 = t890 + t928;
  t1076 = Cos(var1[15]);
  t868 = t627*t867;
  t962 = -1.*t878*t933;
  t967 = t868 + t962;
  t476 = Sin(var1[15]);
  t1092 = Cos(var1[14]);
  t1093 = Cos(var1[4]);
  t1111 = t1092*t657*t1093;
  t1124 = Sin(var1[14]);
  t1132 = t878*t867;
  t1137 = t627*t933;
  t1138 = t1132 + t1137;
  t1251 = t1124*t1138;
  t1257 = t1111 + t1251;
  t1281 = Cos(var1[16]);
  t1059 = t476*t967;
  t1260 = t1076*t1257;
  t1270 = t1059 + t1260;
  t244 = Sin(var1[16]);
  t1287 = t1076*t967;
  t1290 = -1.*t476*t1257;
  t1297 = t1287 + t1290;
  t1326 = Cos(var1[17]);
  t1278 = -1.*t244*t1270;
  t1304 = t1281*t1297;
  t1306 = t1278 + t1304;
  t215 = Sin(var1[17]);
  t1361 = t1281*t1270;
  t1385 = t244*t1297;
  t1390 = t1361 + t1385;
  t1559 = Cos(var1[18]);
  t1323 = t215*t1306;
  t1457 = t1326*t1390;
  t1461 = t1323 + t1457;
  t97 = Sin(var1[18]);
  t1603 = t1326*t1306;
  t1612 = -1.*t215*t1390;
  t1616 = t1603 + t1612;
  t26 = Cos(var1[19]);
  t2071 = t662*t792*t687;
  t2212 = -1.*t657*t802;
  t2252 = t2071 + t2212;
  t2299 = t657*t662;
  t2300 = t792*t687*t802;
  t2303 = t2299 + t2300;
  t2289 = t627*t2252;
  t2327 = -1.*t878*t2303;
  t2331 = t2289 + t2327;
  t2335 = t1092*t1093*t792;
  t2340 = t878*t2252;
  t2344 = t627*t2303;
  t2364 = t2340 + t2344;
  t2389 = t1124*t2364;
  t2410 = t2335 + t2389;
  t2333 = t476*t2331;
  t2437 = t1076*t2410;
  t2441 = t2333 + t2437;
  t2571 = t1076*t2331;
  t2611 = -1.*t476*t2410;
  t2613 = t2571 + t2611;
  t2542 = -1.*t244*t2441;
  t2668 = t1281*t2613;
  t2689 = t2542 + t2668;
  t2700 = t1281*t2441;
  t2709 = t244*t2613;
  t2717 = t2700 + t2709;
  t1846 = Sin(var1[19]);
  t2694 = t215*t2689;
  t2727 = t1326*t2717;
  t2746 = t2694 + t2727;
  t2758 = t1326*t2689;
  t2760 = -1.*t215*t2717;
  t2780 = t2758 + t2760;
  t2819 = t627*t1093*t662;
  t2820 = -1.*t1093*t878*t802;
  t2823 = t2819 + t2820;
  t2835 = -1.*t1092*t687;
  t2837 = t1093*t662*t878;
  t2844 = t627*t1093*t802;
  t2849 = t2837 + t2844;
  t2850 = t1124*t2849;
  t2855 = t2835 + t2850;
  t2834 = t476*t2823;
  t2860 = t1076*t2855;
  t2861 = t2834 + t2860;
  t2867 = t1076*t2823;
  t2868 = -1.*t476*t2855;
  t2874 = t2867 + t2868;
  t2866 = -1.*t244*t2861;
  t2877 = t1281*t2874;
  t2889 = t2866 + t2877;
  t2896 = t1281*t2861;
  t2899 = t244*t2874;
  t2904 = t2896 + t2899;
  t2894 = t215*t2889;
  t2908 = t1326*t2904;
  t2913 = t2894 + t2908;
  t2917 = t1326*t2889;
  t2927 = -1.*t215*t2904;
  t2928 = t2917 + t2927;
  t1513 = -1.*t97*t1461;
  t1676 = t1559*t1616;
  t1689 = t1513 + t1676;
  t1849 = t1559*t1461;
  t1861 = t97*t1616;
  t1880 = t1849 + t1861;
  t2754 = -1.*t97*t2746;
  t2788 = t1559*t2780;
  t2791 = t2754 + t2788;
  t2803 = t1559*t2746;
  t2804 = t97*t2780;
  t2807 = t2803 + t2804;
  t2916 = -1.*t97*t2913;
  t2936 = t1559*t2928;
  t2937 = t2916 + t2936;
  t2941 = t1559*t2913;
  t2942 = t97*t2928;
  t2943 = t2941 + t2942;
  p_output1[0]=t1846*t1880 - 1.*t1689*t26;
  p_output1[1]=-1.*t26*t2791 + t1846*t2807;
  p_output1[2]=-1.*t26*t2937 + t1846*t2943;
  p_output1[3]=t1689*t1846 + t1880*t26;
  p_output1[4]=t1846*t2791 + t26*t2807;
  p_output1[5]=t1846*t2937 + t26*t2943;
  p_output1[6]=-1.*t1092*t1138 + t1093*t1124*t657;
  p_output1[7]=-1.*t1092*t2364 + t1093*t1124*t792;
  p_output1[8]=-1.*t1092*t2849 - 1.*t1124*t687;
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

#include "R_toe_joint_right_mex.hh"

namespace SymExpression
{

void R_toe_joint_right_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
