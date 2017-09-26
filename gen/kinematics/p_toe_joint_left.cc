/*
 * Automatically Generated from Mathematica.
 * Tue 26 Sep 2017 12:22:22 GMT-04:00
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
  double t10449;
  double t10371;
  double t10467;
  double t10384;
  double t10468;
  double t295;
  double t10406;
  double t10475;
  double t10490;
  double t10531;
  double t10535;
  double t10537;
  double t10577;
  double t10601;
  double t10642;
  double t10644;
  double t10655;
  double t10627;
  double t10628;
  double t10636;
  double t10664;
  double t10719;
  double t10722;
  double t10726;
  double t10728;
  double t10707;
  double t10711;
  double t10713;
  double t10754;
  double t10679;
  double t10681;
  double t10682;
  double t10692;
  double t10700;
  double t10701;
  double t10703;
  double t10818;
  double t10819;
  double t10824;
  double t10830;
  double t10831;
  double t10832;
  double t10836;
  double t10839;
  double t10847;
  double t10851;
  double t10876;
  double t10877;
  double t10889;
  double t10893;
  double t10918;
  double t10920;
  double t10930;
  double t10948;
  double t10954;
  double t10957;
  double t10967;
  double t10968;
  double t10969;
  double t10972;
  double t10975;
  double t10980;
  double t10983;
  double t10987;
  double t10990;
  double t10996;
  double t11009;
  double t11010;
  double t11021;
  double t450;
  double t6846;
  double t10317;
  double t10369;
  double t10589;
  double t10597;
  double t10604;
  double t10606;
  double t10613;
  double t10626;
  double t11055;
  double t11067;
  double t11070;
  double t11078;
  double t11080;
  double t11089;
  double t10666;
  double t10668;
  double t10683;
  double t10695;
  double t10698;
  double t11104;
  double t11105;
  double t11116;
  double t11098;
  double t11099;
  double t11100;
  double t10727;
  double t10743;
  double t10748;
  double t10759;
  double t10766;
  double t10773;
  double t11125;
  double t11130;
  double t11131;
  double t10810;
  double t10816;
  double t10817;
  double t10833;
  double t10837;
  double t10838;
  double t11121;
  double t11122;
  double t11123;
  double t11153;
  double t11155;
  double t11156;
  double t10859;
  double t10864;
  double t10868;
  double t10929;
  double t10937;
  double t10942;
  double t11165;
  double t11168;
  double t11169;
  double t11179;
  double t11180;
  double t11194;
  double t10962;
  double t10963;
  double t10965;
  double t10981;
  double t10984;
  double t10986;
  double t11196;
  double t11197;
  double t11199;
  double t11202;
  double t11205;
  double t11206;
  double t10999;
  double t11000;
  double t11007;
  double t11210;
  double t11213;
  double t11218;
  double t11227;
  double t11229;
  double t11234;
  double t11296;
  double t11297;
  double t11298;
  double t11279;
  double t11280;
  double t11284;
  double t11321;
  double t11322;
  double t11326;
  double t11306;
  double t11307;
  double t11313;
  double t11360;
  double t11361;
  double t11362;
  double t11365;
  double t11366;
  double t11367;
  double t11373;
  double t11376;
  double t11377;
  double t11438;
  double t11439;
  double t11441;
  double t11443;
  double t11447;
  double t11452;
  double t11456;
  double t11462;
  double t11463;
  double t11473;
  double t11475;
  double t11476;
  t10449 = Cos(var1[3]);
  t10371 = Cos(var1[5]);
  t10467 = Sin(var1[4]);
  t10384 = Sin(var1[3]);
  t10468 = Sin(var1[5]);
  t295 = Cos(var1[6]);
  t10406 = -1.*t10371*t10384;
  t10475 = t10449*t10467*t10468;
  t10490 = t10406 + t10475;
  t10531 = t10449*t10371*t10467;
  t10535 = t10384*t10468;
  t10537 = t10531 + t10535;
  t10577 = Sin(var1[6]);
  t10601 = Cos(var1[7]);
  t10642 = t295*t10537;
  t10644 = -1.*t10490*t10577;
  t10655 = t10642 + t10644;
  t10627 = t295*t10490;
  t10628 = t10537*t10577;
  t10636 = t10627 + t10628;
  t10664 = Sin(var1[7]);
  t10719 = Cos(var1[8]);
  t10722 = -1.*t10719;
  t10726 = 1. + t10722;
  t10728 = Sin(var1[8]);
  t10707 = t10601*t10636;
  t10711 = t10655*t10664;
  t10713 = t10707 + t10711;
  t10754 = Cos(var1[4]);
  t10679 = Cos(var1[9]);
  t10681 = -1.*t10679;
  t10682 = 1. + t10681;
  t10692 = Sin(var1[9]);
  t10700 = t10601*t10655;
  t10701 = -1.*t10636*t10664;
  t10703 = t10700 + t10701;
  t10818 = t10449*t10754*t10719;
  t10819 = t10713*t10728;
  t10824 = t10818 + t10819;
  t10830 = Cos(var1[10]);
  t10831 = -1.*t10830;
  t10832 = 1. + t10831;
  t10836 = Sin(var1[10]);
  t10839 = t10692*t10703;
  t10847 = t10679*t10824;
  t10851 = t10839 + t10847;
  t10876 = t10679*t10703;
  t10877 = -1.*t10692*t10824;
  t10889 = t10876 + t10877;
  t10893 = Cos(var1[11]);
  t10918 = -1.*t10893;
  t10920 = 1. + t10918;
  t10930 = Sin(var1[11]);
  t10948 = -1.*t10836*t10851;
  t10954 = t10830*t10889;
  t10957 = t10948 + t10954;
  t10967 = t10830*t10851;
  t10968 = t10836*t10889;
  t10969 = t10967 + t10968;
  t10972 = Cos(var1[12]);
  t10975 = -1.*t10972;
  t10980 = 1. + t10975;
  t10983 = Sin(var1[12]);
  t10987 = t10930*t10957;
  t10990 = t10893*t10969;
  t10996 = t10987 + t10990;
  t11009 = t10893*t10957;
  t11010 = -1.*t10930*t10969;
  t11021 = t11009 + t11010;
  t450 = -1.*t295;
  t6846 = 1. + t450;
  t10317 = 0.135*t6846;
  t10369 = 0. + t10317;
  t10589 = -0.135*t10577;
  t10597 = 0. + t10589;
  t10604 = -1.*t10601;
  t10606 = 1. + t10604;
  t10613 = 0.135*t10606;
  t10626 = 0. + t10613;
  t11055 = t10449*t10371;
  t11067 = t10384*t10467*t10468;
  t11070 = t11055 + t11067;
  t11078 = t10371*t10384*t10467;
  t11080 = -1.*t10449*t10468;
  t11089 = t11078 + t11080;
  t10666 = -0.135*t10664;
  t10668 = 0. + t10666;
  t10683 = -0.09*t10682;
  t10695 = 0.049*t10692;
  t10698 = 0. + t10683 + t10695;
  t11104 = t295*t11089;
  t11105 = -1.*t11070*t10577;
  t11116 = t11104 + t11105;
  t11098 = t295*t11070;
  t11099 = t11089*t10577;
  t11100 = t11098 + t11099;
  t10727 = 0.135*t10726;
  t10743 = 0.049*t10728;
  t10748 = 0. + t10727 + t10743;
  t10759 = -0.049*t10726;
  t10766 = 0.135*t10728;
  t10773 = 0. + t10759 + t10766;
  t11125 = t10601*t11100;
  t11130 = t11116*t10664;
  t11131 = t11125 + t11130;
  t10810 = -0.049*t10682;
  t10816 = -0.09*t10692;
  t10817 = 0. + t10810 + t10816;
  t10833 = -0.049*t10832;
  t10837 = -0.21*t10836;
  t10838 = 0. + t10833 + t10837;
  t11121 = t10601*t11116;
  t11122 = -1.*t11100*t10664;
  t11123 = t11121 + t11122;
  t11153 = t10754*t10719*t10384;
  t11155 = t11131*t10728;
  t11156 = t11153 + t11155;
  t10859 = -0.21*t10832;
  t10864 = 0.049*t10836;
  t10868 = 0. + t10859 + t10864;
  t10929 = -0.2707*t10920;
  t10937 = 0.0016*t10930;
  t10942 = 0. + t10929 + t10937;
  t11165 = t10692*t11123;
  t11168 = t10679*t11156;
  t11169 = t11165 + t11168;
  t11179 = t10679*t11123;
  t11180 = -1.*t10692*t11156;
  t11194 = t11179 + t11180;
  t10962 = -0.0016*t10920;
  t10963 = -0.2707*t10930;
  t10965 = 0. + t10962 + t10963;
  t10981 = 0.0184*t10980;
  t10984 = -0.7055*t10983;
  t10986 = 0. + t10981 + t10984;
  t11196 = -1.*t10836*t11169;
  t11197 = t10830*t11194;
  t11199 = t11196 + t11197;
  t11202 = t10830*t11169;
  t11205 = t10836*t11194;
  t11206 = t11202 + t11205;
  t10999 = -0.7055*t10980;
  t11000 = -0.0184*t10983;
  t11007 = 0. + t10999 + t11000;
  t11210 = t10930*t11199;
  t11213 = t10893*t11206;
  t11218 = t11210 + t11213;
  t11227 = t10893*t11199;
  t11229 = -1.*t10930*t11206;
  t11234 = t11227 + t11229;
  t11296 = t10754*t10371*t295;
  t11297 = -1.*t10754*t10468*t10577;
  t11298 = t11296 + t11297;
  t11279 = t10754*t295*t10468;
  t11280 = t10754*t10371*t10577;
  t11284 = t11279 + t11280;
  t11321 = t10601*t11284;
  t11322 = t11298*t10664;
  t11326 = t11321 + t11322;
  t11306 = t10601*t11298;
  t11307 = -1.*t11284*t10664;
  t11313 = t11306 + t11307;
  t11360 = -1.*t10719*t10467;
  t11361 = t11326*t10728;
  t11362 = t11360 + t11361;
  t11365 = t10692*t11313;
  t11366 = t10679*t11362;
  t11367 = t11365 + t11366;
  t11373 = t10679*t11313;
  t11376 = -1.*t10692*t11362;
  t11377 = t11373 + t11376;
  t11438 = -1.*t10836*t11367;
  t11439 = t10830*t11377;
  t11441 = t11438 + t11439;
  t11443 = t10830*t11367;
  t11447 = t10836*t11377;
  t11452 = t11443 + t11447;
  t11456 = t10930*t11441;
  t11462 = t10893*t11452;
  t11463 = t11456 + t11462;
  t11473 = t10893*t11441;
  t11475 = -1.*t10930*t11452;
  t11476 = t11473 + t11475;
  p_output1[0]=0. + t10369*t10490 + t10537*t10597 + t10626*t10636 + t10655*t10668 + t10698*t10703 + t10713*t10748 + 0.1305*(t10713*t10719 - 1.*t10449*t10728*t10754) + t10449*t10754*t10773 + t10817*t10824 + t10838*t10851 + t10868*t10889 + t10942*t10957 + t10965*t10969 + t10986*t10996 + t11007*t11021 - 1.1135*(-1.*t10983*t10996 + t10972*t11021) - 0.0216*(t10972*t10996 + t10983*t11021) + var1[0];
  p_output1[1]=0. + t10384*t10754*t10773 + t10369*t11070 + t10597*t11089 + t10626*t11100 + t10668*t11116 + t10698*t11123 + t10748*t11131 + 0.1305*(-1.*t10384*t10728*t10754 + t10719*t11131) + t10817*t11156 + t10838*t11169 + t10868*t11194 + t10942*t11199 + t10965*t11206 + t10986*t11218 + t11007*t11234 - 1.1135*(-1.*t10983*t11218 + t10972*t11234) - 0.0216*(t10972*t11218 + t10983*t11234) + var1[1];
  p_output1[2]=0. + t10369*t10468*t10754 + t10371*t10597*t10754 - 1.*t10467*t10773 + t10626*t11284 + t10668*t11298 + t10698*t11313 + t10748*t11326 + 0.1305*(t10467*t10728 + t10719*t11326) + t10817*t11362 + t10838*t11367 + t10868*t11377 + t10942*t11441 + t10965*t11452 + t10986*t11463 + t11007*t11476 - 1.1135*(-1.*t10983*t11463 + t10972*t11476) - 0.0216*(t10972*t11463 + t10983*t11476) + var1[2];
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

#include "p_toe_joint_left.hh"

namespace SymExpression
{

void p_toe_joint_left_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
