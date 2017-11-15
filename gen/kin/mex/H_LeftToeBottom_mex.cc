/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:33:01 GMT-05:00
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
  double t263;
  double t177;
  double t336;
  double t208;
  double t411;
  double t103;
  double t159;
  double t517;
  double t533;
  double t534;
  double t237;
  double t434;
  double t473;
  double t475;
  double t490;
  double t503;
  double t508;
  double t519;
  double t520;
  double t626;
  double t644;
  double t646;
  double t737;
  double t634;
  double t635;
  double t636;
  double t750;
  double t892;
  double t643;
  double t843;
  double t865;
  double t622;
  double t902;
  double t962;
  double t997;
  double t1070;
  double t883;
  double t1030;
  double t1033;
  double t621;
  double t1086;
  double t1099;
  double t1101;
  double t1157;
  double t1050;
  double t1115;
  double t1145;
  double t620;
  double t1167;
  double t1182;
  double t1183;
  double t1208;
  double t1149;
  double t1193;
  double t1206;
  double t618;
  double t1210;
  double t1211;
  double t1212;
  double t538;
  double t544;
  double t545;
  double t547;
  double t555;
  double t556;
  double t557;
  double t564;
  double t569;
  double t1242;
  double t1245;
  double t1248;
  double t1238;
  double t1239;
  double t1240;
  double t1241;
  double t1249;
  double t1250;
  double t1252;
  double t1253;
  double t1254;
  double t1251;
  double t1255;
  double t1256;
  double t1263;
  double t1264;
  double t1265;
  double t1260;
  double t1268;
  double t1269;
  double t1274;
  double t1275;
  double t1276;
  double t1273;
  double t1278;
  double t1279;
  double t1281;
  double t1282;
  double t1283;
  double t587;
  double t592;
  double t593;
  double t1488;
  double t1515;
  double t1536;
  double t1422;
  double t1433;
  double t1467;
  double t1480;
  double t1543;
  double t1593;
  double t1655;
  double t1665;
  double t1679;
  double t1609;
  double t1687;
  double t1688;
  double t1733;
  double t1753;
  double t1818;
  double t1690;
  double t1847;
  double t1856;
  double t1877;
  double t1879;
  double t1883;
  double t1864;
  double t1886;
  double t1890;
  double t1904;
  double t1906;
  double t1909;
  double t1207;
  double t1213;
  double t1214;
  double t1228;
  double t1231;
  double t1233;
  double t1280;
  double t1285;
  double t1368;
  double t1374;
  double t1400;
  double t1411;
  double t1899;
  double t1939;
  double t1948;
  double t1978;
  double t1989;
  double t2009;
  double t2340;
  double t2357;
  double t2422;
  double t2452;
  double t2662;
  double t2666;
  double t2704;
  double t2710;
  double t2749;
  double t2753;
  double t2801;
  double t2806;
  double t2240;
  double t2246;
  double t2251;
  double t2262;
  double t2296;
  double t2336;
  double t2358;
  double t2375;
  double t2381;
  double t2384;
  double t2388;
  double t2399;
  double t2495;
  double t2502;
  double t2541;
  double t2562;
  double t2601;
  double t2610;
  double t2668;
  double t2671;
  double t2678;
  double t2683;
  double t2687;
  double t2688;
  double t2711;
  double t2717;
  double t2718;
  double t2722;
  double t2735;
  double t2739;
  double t2757;
  double t2769;
  double t2771;
  double t2787;
  double t2791;
  double t2794;
  double t2810;
  double t2814;
  double t2818;
  double t2834;
  double t2835;
  double t2840;
  t263 = Cos(var1[3]);
  t177 = Cos(var1[5]);
  t336 = Sin(var1[4]);
  t208 = Sin(var1[3]);
  t411 = Sin(var1[5]);
  t103 = Cos(var1[7]);
  t159 = Cos(var1[6]);
  t517 = Sin(var1[6]);
  t533 = Cos(var1[4]);
  t534 = Sin(var1[7]);
  t237 = -1.*t177*t208;
  t434 = t263*t336*t411;
  t473 = t237 + t434;
  t475 = t159*t473;
  t490 = t263*t177*t336;
  t503 = t208*t411;
  t508 = t490 + t503;
  t519 = t508*t517;
  t520 = t475 + t519;
  t626 = Cos(var1[8]);
  t644 = t159*t508;
  t646 = -1.*t473*t517;
  t737 = t644 + t646;
  t634 = t263*t533*t103;
  t635 = t520*t534;
  t636 = t634 + t635;
  t750 = Sin(var1[8]);
  t892 = Cos(var1[9]);
  t643 = t626*t636;
  t843 = t737*t750;
  t865 = t643 + t843;
  t622 = Sin(var1[9]);
  t902 = t626*t737;
  t962 = -1.*t636*t750;
  t997 = t902 + t962;
  t1070 = Cos(var1[10]);
  t883 = -1.*t622*t865;
  t1030 = t892*t997;
  t1033 = t883 + t1030;
  t621 = Sin(var1[10]);
  t1086 = t892*t865;
  t1099 = t622*t997;
  t1101 = t1086 + t1099;
  t1157 = Cos(var1[11]);
  t1050 = t621*t1033;
  t1115 = t1070*t1101;
  t1145 = t1050 + t1115;
  t620 = Sin(var1[11]);
  t1167 = t1070*t1033;
  t1182 = -1.*t621*t1101;
  t1183 = t1167 + t1182;
  t1208 = Cos(var1[12]);
  t1149 = -1.*t620*t1145;
  t1193 = t1157*t1183;
  t1206 = t1149 + t1193;
  t618 = Sin(var1[12]);
  t1210 = t1157*t1145;
  t1211 = t620*t1183;
  t1212 = t1210 + t1211;
  t538 = t263*t177;
  t544 = t208*t336*t411;
  t545 = t538 + t544;
  t547 = t159*t545;
  t555 = t177*t208*t336;
  t556 = -1.*t263*t411;
  t557 = t555 + t556;
  t564 = t557*t517;
  t569 = t547 + t564;
  t1242 = t159*t557;
  t1245 = -1.*t545*t517;
  t1248 = t1242 + t1245;
  t1238 = t533*t103*t208;
  t1239 = t569*t534;
  t1240 = t1238 + t1239;
  t1241 = t626*t1240;
  t1249 = t1248*t750;
  t1250 = t1241 + t1249;
  t1252 = t626*t1248;
  t1253 = -1.*t1240*t750;
  t1254 = t1252 + t1253;
  t1251 = -1.*t622*t1250;
  t1255 = t892*t1254;
  t1256 = t1251 + t1255;
  t1263 = t892*t1250;
  t1264 = t622*t1254;
  t1265 = t1263 + t1264;
  t1260 = t621*t1256;
  t1268 = t1070*t1265;
  t1269 = t1260 + t1268;
  t1274 = t1070*t1256;
  t1275 = -1.*t621*t1265;
  t1276 = t1274 + t1275;
  t1273 = -1.*t620*t1269;
  t1278 = t1157*t1276;
  t1279 = t1273 + t1278;
  t1281 = t1157*t1269;
  t1282 = t620*t1276;
  t1283 = t1281 + t1282;
  t587 = t533*t159*t411;
  t592 = t533*t177*t517;
  t593 = t587 + t592;
  t1488 = t533*t177*t159;
  t1515 = -1.*t533*t411*t517;
  t1536 = t1488 + t1515;
  t1422 = -1.*t103*t336;
  t1433 = t593*t534;
  t1467 = t1422 + t1433;
  t1480 = t626*t1467;
  t1543 = t1536*t750;
  t1593 = t1480 + t1543;
  t1655 = t626*t1536;
  t1665 = -1.*t1467*t750;
  t1679 = t1655 + t1665;
  t1609 = -1.*t622*t1593;
  t1687 = t892*t1679;
  t1688 = t1609 + t1687;
  t1733 = t892*t1593;
  t1753 = t622*t1679;
  t1818 = t1733 + t1753;
  t1690 = t621*t1688;
  t1847 = t1070*t1818;
  t1856 = t1690 + t1847;
  t1877 = t1070*t1688;
  t1879 = -1.*t621*t1818;
  t1883 = t1877 + t1879;
  t1864 = -1.*t620*t1856;
  t1886 = t1157*t1883;
  t1890 = t1864 + t1886;
  t1904 = t1157*t1856;
  t1906 = t620*t1883;
  t1909 = t1904 + t1906;
  t1207 = t618*t1206;
  t1213 = t1208*t1212;
  t1214 = t1207 + t1213;
  t1228 = t1208*t1206;
  t1231 = -1.*t618*t1212;
  t1233 = t1228 + t1231;
  t1280 = t618*t1279;
  t1285 = t1208*t1283;
  t1368 = t1280 + t1285;
  t1374 = t1208*t1279;
  t1400 = -1.*t618*t1283;
  t1411 = t1374 + t1400;
  t1899 = t618*t1890;
  t1939 = t1208*t1909;
  t1948 = t1899 + t1939;
  t1978 = t1208*t1890;
  t1989 = -1.*t618*t1909;
  t2009 = t1978 + t1989;
  t2340 = -1.*t103;
  t2357 = 1. + t2340;
  t2422 = -1.*t626;
  t2452 = 1. + t2422;
  t2662 = -1.*t892;
  t2666 = 1. + t2662;
  t2704 = -1.*t1070;
  t2710 = 1. + t2704;
  t2749 = -1.*t1157;
  t2753 = 1. + t2749;
  t2801 = -1.*t1208;
  t2806 = 1. + t2801;
  t2240 = -1.*t159;
  t2246 = 1. + t2240;
  t2251 = 0.135*t2246;
  t2262 = 0. + t2251;
  t2296 = -0.135*t517;
  t2336 = 0. + t2296;
  t2358 = 0.135*t2357;
  t2375 = 0.049*t534;
  t2381 = 0. + t2358 + t2375;
  t2384 = -0.049*t2357;
  t2388 = 0.135*t534;
  t2399 = 0. + t2384 + t2388;
  t2495 = -0.049*t2452;
  t2502 = -0.09*t750;
  t2541 = 0. + t2495 + t2502;
  t2562 = -0.09*t2452;
  t2601 = 0.049*t750;
  t2610 = 0. + t2562 + t2601;
  t2668 = -0.049*t2666;
  t2671 = -0.21*t622;
  t2678 = 0. + t2668 + t2671;
  t2683 = -0.21*t2666;
  t2687 = 0.049*t622;
  t2688 = 0. + t2683 + t2687;
  t2711 = -0.2707*t2710;
  t2717 = 0.0016*t621;
  t2718 = 0. + t2711 + t2717;
  t2722 = -0.0016*t2710;
  t2735 = -0.2707*t621;
  t2739 = 0. + t2722 + t2735;
  t2757 = 0.0184*t2753;
  t2769 = -0.7055*t620;
  t2771 = 0. + t2757 + t2769;
  t2787 = -0.7055*t2753;
  t2791 = -0.0184*t620;
  t2794 = 0. + t2787 + t2791;
  t2810 = -1.1135*t2806;
  t2814 = 0.0216*t618;
  t2818 = 0. + t2810 + t2814;
  t2834 = -0.0216*t2806;
  t2835 = -1.1135*t618;
  t2840 = 0. + t2834 + t2835;
  p_output1[0]=-1.*t103*t520 + t263*t533*t534;
  p_output1[1]=t208*t533*t534 - 1.*t103*t569;
  p_output1[2]=-1.*t336*t534 - 1.*t103*t593;
  p_output1[3]=0.;
  p_output1[4]=0.642788*t1214 + 0.766044*t1233;
  p_output1[5]=0.642788*t1368 + 0.766044*t1411;
  p_output1[6]=0.642788*t1948 + 0.766044*t2009;
  p_output1[7]=0.;
  p_output1[8]=-0.766044*t1214 + 0.642788*t1233;
  p_output1[9]=-0.766044*t1368 + 0.642788*t1411;
  p_output1[10]=-0.766044*t1948 + 0.642788*t2009;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.0306*t1214 - 1.1312*t1233 + t1033*t2718 + t1101*t2739 + t1145*t2771 + t1183*t2794 + t1206*t2818 + t1212*t2840 + t2262*t473 + t2336*t508 + t2381*t520 + t2399*t263*t533 + 0.1305*(t103*t520 - 1.*t263*t533*t534) + t2541*t636 + t2610*t737 + t2678*t865 + t2688*t997 + var1[0];
  p_output1[13]=0. + 0.0306*t1368 - 1.1312*t1411 + t1240*t2541 + t1248*t2610 + t1250*t2678 + t1254*t2688 + t1256*t2718 + t1265*t2739 + t1269*t2771 + t1276*t2794 + t1279*t2818 + t1283*t2840 + t208*t2399*t533 + t2262*t545 + t2336*t557 + t2381*t569 + 0.1305*(-1.*t208*t533*t534 + t103*t569) + var1[1];
  p_output1[14]=0. + 0.0306*t1948 - 1.1312*t2009 + t1467*t2541 + t1536*t2610 + t1593*t2678 + t1679*t2688 + t1688*t2718 + t1818*t2739 + t1856*t2771 + t1883*t2794 + t1890*t2818 + t1909*t2840 - 1.*t2399*t336 + t177*t2336*t533 + t2262*t411*t533 + t2381*t593 + 0.1305*(t336*t534 + t103*t593) + var1[2];
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

#include "H_LeftToeBottom_mex.hh"

namespace SymExpression
{

void H_LeftToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
