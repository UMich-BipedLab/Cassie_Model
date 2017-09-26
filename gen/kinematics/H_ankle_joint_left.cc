/*
 * Automatically Generated from Mathematica.
 * Tue 26 Sep 2017 12:22:21 GMT-04:00
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
  double t1586;
  double t10328;
  double t1582;
  double t3736;
  double t10333;
  double t1525;
  double t10397;
  double t10406;
  double t10434;
  double t10317;
  double t10369;
  double t10371;
  double t10441;
  double t1428;
  double t10468;
  double t10475;
  double t10477;
  double t10384;
  double t10445;
  double t10449;
  double t10483;
  double t10499;
  double t10467;
  double t10484;
  double t10490;
  double t257;
  double t10512;
  double t10515;
  double t10531;
  double t10535;
  double t10537;
  double t10557;
  double t10571;
  double t10577;
  double t10578;
  double t10595;
  double t10495;
  double t10589;
  double t10590;
  double t242;
  double t10597;
  double t10598;
  double t10599;
  double t236;
  double t10642;
  double t10644;
  double t10645;
  double t10628;
  double t10629;
  double t10636;
  double t10666;
  double t10668;
  double t10674;
  double t10640;
  double t10654;
  double t10655;
  double t10664;
  double t10676;
  double t10678;
  double t10681;
  double t10682;
  double t10683;
  double t10688;
  double t10692;
  double t10694;
  double t10605;
  double t10679;
  double t10695;
  double t10696;
  double t10698;
  double t10699;
  double t10700;
  double t10727;
  double t10728;
  double t10735;
  double t10719;
  double t10721;
  double t10722;
  double t10726;
  double t10736;
  double t10743;
  double t10751;
  double t10753;
  double t10754;
  double t10758;
  double t10759;
  double t10763;
  double t10748;
  double t10766;
  double t10768;
  double t10773;
  double t10776;
  double t10782;
  double t10594;
  double t10601;
  double t10602;
  double t10606;
  double t10613;
  double t10619;
  double t10697;
  double t10701;
  double t10702;
  double t10705;
  double t10707;
  double t10710;
  double t10772;
  double t10786;
  double t10795;
  double t10799;
  double t10808;
  double t10809;
  double t10959;
  double t10961;
  double t10943;
  double t10945;
  double t10988;
  double t10989;
  double t11011;
  double t11014;
  double t10817;
  double t10818;
  double t10819;
  double t10866;
  double t10867;
  double t10868;
  double t10876;
  double t10889;
  double t10892;
  double t10900;
  double t10901;
  double t10918;
  double t10920;
  double t10930;
  double t10937;
  double t10948;
  double t10954;
  double t10957;
  double t10962;
  double t10963;
  double t10965;
  double t10968;
  double t10969;
  double t10970;
  double t10983;
  double t10984;
  double t10986;
  double t10990;
  double t10996;
  double t10998;
  double t11000;
  double t11007;
  double t11009;
  double t11021;
  double t11026;
  double t11029;
  double t11034;
  double t11036;
  double t11045;
  double t10824;
  double t10827;
  double t10830;
  double t10831;
  double t10832;
  double t10833;
  t1586 = Cos(var1[5]);
  t10328 = Sin(var1[3]);
  t1582 = Cos(var1[3]);
  t3736 = Sin(var1[4]);
  t10333 = Sin(var1[5]);
  t1525 = Cos(var1[6]);
  t10397 = -1.*t1586*t10328;
  t10406 = t1582*t3736*t10333;
  t10434 = t10397 + t10406;
  t10317 = t1582*t1586*t3736;
  t10369 = t10328*t10333;
  t10371 = t10317 + t10369;
  t10441 = Sin(var1[6]);
  t1428 = Cos(var1[7]);
  t10468 = t1525*t10434;
  t10475 = t10371*t10441;
  t10477 = t10468 + t10475;
  t10384 = t1525*t10371;
  t10445 = -1.*t10434*t10441;
  t10449 = t10384 + t10445;
  t10483 = Sin(var1[7]);
  t10499 = Cos(var1[9]);
  t10467 = t1428*t10449;
  t10484 = -1.*t10477*t10483;
  t10490 = t10467 + t10484;
  t257 = Sin(var1[9]);
  t10512 = Cos(var1[4]);
  t10515 = Cos(var1[8]);
  t10531 = t1582*t10512*t10515;
  t10535 = t1428*t10477;
  t10537 = t10449*t10483;
  t10557 = t10535 + t10537;
  t10571 = Sin(var1[8]);
  t10577 = t10557*t10571;
  t10578 = t10531 + t10577;
  t10595 = Cos(var1[10]);
  t10495 = t257*t10490;
  t10589 = t10499*t10578;
  t10590 = t10495 + t10589;
  t242 = Sin(var1[10]);
  t10597 = t10499*t10490;
  t10598 = -1.*t257*t10578;
  t10599 = t10597 + t10598;
  t236 = Cos(var1[11]);
  t10642 = t1582*t1586;
  t10644 = t10328*t3736*t10333;
  t10645 = t10642 + t10644;
  t10628 = t1586*t10328*t3736;
  t10629 = -1.*t1582*t10333;
  t10636 = t10628 + t10629;
  t10666 = t1525*t10645;
  t10668 = t10636*t10441;
  t10674 = t10666 + t10668;
  t10640 = t1525*t10636;
  t10654 = -1.*t10645*t10441;
  t10655 = t10640 + t10654;
  t10664 = t1428*t10655;
  t10676 = -1.*t10674*t10483;
  t10678 = t10664 + t10676;
  t10681 = t10512*t10515*t10328;
  t10682 = t1428*t10674;
  t10683 = t10655*t10483;
  t10688 = t10682 + t10683;
  t10692 = t10688*t10571;
  t10694 = t10681 + t10692;
  t10605 = Sin(var1[11]);
  t10679 = t257*t10678;
  t10695 = t10499*t10694;
  t10696 = t10679 + t10695;
  t10698 = t10499*t10678;
  t10699 = -1.*t257*t10694;
  t10700 = t10698 + t10699;
  t10727 = t10512*t1525*t10333;
  t10728 = t10512*t1586*t10441;
  t10735 = t10727 + t10728;
  t10719 = t10512*t1586*t1525;
  t10721 = -1.*t10512*t10333*t10441;
  t10722 = t10719 + t10721;
  t10726 = t1428*t10722;
  t10736 = -1.*t10735*t10483;
  t10743 = t10726 + t10736;
  t10751 = -1.*t10515*t3736;
  t10753 = t1428*t10735;
  t10754 = t10722*t10483;
  t10758 = t10753 + t10754;
  t10759 = t10758*t10571;
  t10763 = t10751 + t10759;
  t10748 = t257*t10743;
  t10766 = t10499*t10763;
  t10768 = t10748 + t10766;
  t10773 = t10499*t10743;
  t10776 = -1.*t257*t10763;
  t10782 = t10773 + t10776;
  t10594 = -1.*t242*t10590;
  t10601 = t10595*t10599;
  t10602 = t10594 + t10601;
  t10606 = t10595*t10590;
  t10613 = t242*t10599;
  t10619 = t10606 + t10613;
  t10697 = -1.*t242*t10696;
  t10701 = t10595*t10700;
  t10702 = t10697 + t10701;
  t10705 = t10595*t10696;
  t10707 = t242*t10700;
  t10710 = t10705 + t10707;
  t10772 = -1.*t242*t10768;
  t10786 = t10595*t10782;
  t10795 = t10772 + t10786;
  t10799 = t10595*t10768;
  t10808 = t242*t10782;
  t10809 = t10799 + t10808;
  t10959 = -1.*t10515;
  t10961 = 1. + t10959;
  t10943 = -1.*t10499;
  t10945 = 1. + t10943;
  t10988 = -1.*t10595;
  t10989 = 1. + t10988;
  t11011 = -1.*t236;
  t11014 = 1. + t11011;
  t10817 = t10605*t10602;
  t10818 = t236*t10619;
  t10819 = t10817 + t10818;
  t10866 = -1.*t1525;
  t10867 = 1. + t10866;
  t10868 = 0.135*t10867;
  t10876 = 0. + t10868;
  t10889 = -0.135*t10441;
  t10892 = 0. + t10889;
  t10900 = -1.*t1428;
  t10901 = 1. + t10900;
  t10918 = 0.135*t10901;
  t10920 = 0. + t10918;
  t10930 = -0.135*t10483;
  t10937 = 0. + t10930;
  t10948 = -0.09*t10945;
  t10954 = 0.049*t257;
  t10957 = 0. + t10948 + t10954;
  t10962 = 0.135*t10961;
  t10963 = 0.049*t10571;
  t10965 = 0. + t10962 + t10963;
  t10968 = -0.049*t10961;
  t10969 = 0.135*t10571;
  t10970 = 0. + t10968 + t10969;
  t10983 = -0.049*t10945;
  t10984 = -0.09*t257;
  t10986 = 0. + t10983 + t10984;
  t10990 = -0.049*t10989;
  t10996 = -0.21*t242;
  t10998 = 0. + t10990 + t10996;
  t11000 = -0.21*t10989;
  t11007 = 0.049*t242;
  t11009 = 0. + t11000 + t11007;
  t11021 = -0.2707*t11014;
  t11026 = 0.0016*t10605;
  t11029 = 0. + t11021 + t11026;
  t11034 = -0.0016*t11014;
  t11036 = -0.2707*t10605;
  t11045 = 0. + t11034 + t11036;
  t10824 = t10605*t10702;
  t10827 = t236*t10710;
  t10830 = t10824 + t10827;
  t10831 = t10605*t10795;
  t10832 = t236*t10809;
  t10833 = t10831 + t10832;
  p_output1[0]=t10605*t10619 - 1.*t10602*t236;
  p_output1[1]=t10605*t10710 - 1.*t10702*t236;
  p_output1[2]=t10605*t10809 - 1.*t10795*t236;
  p_output1[3]=0.;
  p_output1[4]=t10819;
  p_output1[5]=t10830;
  p_output1[6]=t10833;
  p_output1[7]=0.;
  p_output1[8]=-1.*t10515*t10557 + t10512*t10571*t1582;
  p_output1[9]=t10328*t10512*t10571 - 1.*t10515*t10688;
  p_output1[10]=-1.*t10515*t10758 - 1.*t10571*t3736;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.0184*t10819 + t10434*t10876 + t10371*t10892 + t10477*t10920 + t10449*t10937 + t10490*t10957 + t10557*t10965 + t10578*t10986 + t10590*t10998 + t10599*t11009 + t10602*t11029 + t10619*t11045 + t10512*t10970*t1582 + 0.1305*(t10515*t10557 - 1.*t10512*t10571*t1582) - 0.7055*(-1.*t10605*t10619 + t10602*t236) + var1[0];
  p_output1[13]=0. + 0.1305*(-1.*t10328*t10512*t10571 + t10515*t10688) + 0.0184*t10830 + t10645*t10876 + t10636*t10892 + t10674*t10920 + t10655*t10937 + t10678*t10957 + t10688*t10965 + t10328*t10512*t10970 + t10694*t10986 + t10696*t10998 + t10700*t11009 + t10702*t11029 + t10710*t11045 - 0.7055*(-1.*t10605*t10710 + t10702*t236) + var1[1];
  p_output1[14]=0. + 0.0184*t10833 + t10333*t10512*t10876 + t10735*t10920 + t10722*t10937 + t10743*t10957 + t10758*t10965 + t10763*t10986 + t10768*t10998 + t10782*t11009 + t10795*t11029 + t10809*t11045 + t10512*t10892*t1586 - 0.7055*(-1.*t10605*t10809 + t10795*t236) - 1.*t10970*t3736 + 0.1305*(t10515*t10758 + t10571*t3736) + var1[2];
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

#include "H_ankle_joint_left.hh"

namespace SymExpression
{

void H_ankle_joint_left_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
