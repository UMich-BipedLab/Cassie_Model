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
  double t10275;
  double t8013;
  double t10285;
  double t10251;
  double t10303;
  double t556;
  double t10270;
  double t10317;
  double t10318;
  double t10333;
  double t10369;
  double t10371;
  double t10378;
  double t10412;
  double t10468;
  double t10474;
  double t10475;
  double t10445;
  double t10449;
  double t10457;
  double t10476;
  double t10548;
  double t10549;
  double t10556;
  double t10562;
  double t10535;
  double t10537;
  double t10541;
  double t10582;
  double t10485;
  double t10486;
  double t10488;
  double t10492;
  double t10512;
  double t10514;
  double t10515;
  double t10605;
  double t10606;
  double t10607;
  double t10615;
  double t10617;
  double t10618;
  double t10625;
  double t10628;
  double t10629;
  double t10631;
  double t10645;
  double t10649;
  double t10654;
  double t10658;
  double t10659;
  double t10663;
  double t10665;
  double t10671;
  double t10674;
  double t10675;
  double t10682;
  double t10683;
  double t10685;
  double t558;
  double t1523;
  double t1525;
  double t3736;
  double t10384;
  double t10397;
  double t10422;
  double t10425;
  double t10434;
  double t10441;
  double t10702;
  double t10703;
  double t10704;
  double t10707;
  double t10708;
  double t10710;
  double t10477;
  double t10483;
  double t10490;
  double t10495;
  double t10499;
  double t10722;
  double t10725;
  double t10726;
  double t10713;
  double t10719;
  double t10720;
  double t10557;
  double t10571;
  double t10577;
  double t10589;
  double t10590;
  double t10591;
  double t10743;
  double t10748;
  double t10750;
  double t10601;
  double t10602;
  double t10604;
  double t10619;
  double t10626;
  double t10627;
  double t10728;
  double t10733;
  double t10735;
  double t10766;
  double t10768;
  double t10770;
  double t10640;
  double t10642;
  double t10644;
  double t10664;
  double t10666;
  double t10668;
  double t10773;
  double t10776;
  double t10781;
  double t10786;
  double t10793;
  double t10795;
  double t10678;
  double t10679;
  double t10681;
  double t10797;
  double t10799;
  double t10807;
  double t10809;
  double t10810;
  double t10811;
  double t10851;
  double t10853;
  double t10857;
  double t10838;
  double t10839;
  double t10844;
  double t10868;
  double t10876;
  double t10877;
  double t10864;
  double t10865;
  double t10866;
  double t10919;
  double t10920;
  double t10924;
  double t10930;
  double t10937;
  double t10941;
  double t10943;
  double t10944;
  double t10945;
  double t10952;
  double t10954;
  double t10955;
  double t10958;
  double t10959;
  double t10960;
  t10275 = Cos(var1[3]);
  t8013 = Cos(var1[5]);
  t10285 = Sin(var1[4]);
  t10251 = Sin(var1[3]);
  t10303 = Sin(var1[5]);
  t556 = Cos(var1[6]);
  t10270 = -1.*t8013*t10251;
  t10317 = t10275*t10285*t10303;
  t10318 = t10270 + t10317;
  t10333 = t10275*t8013*t10285;
  t10369 = t10251*t10303;
  t10371 = t10333 + t10369;
  t10378 = Sin(var1[6]);
  t10412 = Cos(var1[7]);
  t10468 = t556*t10371;
  t10474 = -1.*t10318*t10378;
  t10475 = t10468 + t10474;
  t10445 = t556*t10318;
  t10449 = t10371*t10378;
  t10457 = t10445 + t10449;
  t10476 = Sin(var1[7]);
  t10548 = Cos(var1[8]);
  t10549 = -1.*t10548;
  t10556 = 1. + t10549;
  t10562 = Sin(var1[8]);
  t10535 = t10412*t10457;
  t10537 = t10475*t10476;
  t10541 = t10535 + t10537;
  t10582 = Cos(var1[4]);
  t10485 = Cos(var1[9]);
  t10486 = -1.*t10485;
  t10488 = 1. + t10486;
  t10492 = Sin(var1[9]);
  t10512 = t10412*t10475;
  t10514 = -1.*t10457*t10476;
  t10515 = t10512 + t10514;
  t10605 = t10275*t10582*t10548;
  t10606 = t10541*t10562;
  t10607 = t10605 + t10606;
  t10615 = Cos(var1[10]);
  t10617 = -1.*t10615;
  t10618 = 1. + t10617;
  t10625 = Sin(var1[10]);
  t10628 = t10492*t10515;
  t10629 = t10485*t10607;
  t10631 = t10628 + t10629;
  t10645 = t10485*t10515;
  t10649 = -1.*t10492*t10607;
  t10654 = t10645 + t10649;
  t10658 = Cos(var1[11]);
  t10659 = -1.*t10658;
  t10663 = 1. + t10659;
  t10665 = Sin(var1[11]);
  t10671 = -1.*t10625*t10631;
  t10674 = t10615*t10654;
  t10675 = t10671 + t10674;
  t10682 = t10615*t10631;
  t10683 = t10625*t10654;
  t10685 = t10682 + t10683;
  t558 = -1.*t556;
  t1523 = 1. + t558;
  t1525 = 0.135*t1523;
  t3736 = 0. + t1525;
  t10384 = -0.135*t10378;
  t10397 = 0. + t10384;
  t10422 = -1.*t10412;
  t10425 = 1. + t10422;
  t10434 = 0.135*t10425;
  t10441 = 0. + t10434;
  t10702 = t10275*t8013;
  t10703 = t10251*t10285*t10303;
  t10704 = t10702 + t10703;
  t10707 = t8013*t10251*t10285;
  t10708 = -1.*t10275*t10303;
  t10710 = t10707 + t10708;
  t10477 = -0.135*t10476;
  t10483 = 0. + t10477;
  t10490 = -0.09*t10488;
  t10495 = 0.049*t10492;
  t10499 = 0. + t10490 + t10495;
  t10722 = t556*t10710;
  t10725 = -1.*t10704*t10378;
  t10726 = t10722 + t10725;
  t10713 = t556*t10704;
  t10719 = t10710*t10378;
  t10720 = t10713 + t10719;
  t10557 = 0.135*t10556;
  t10571 = 0.049*t10562;
  t10577 = 0. + t10557 + t10571;
  t10589 = -0.049*t10556;
  t10590 = 0.135*t10562;
  t10591 = 0. + t10589 + t10590;
  t10743 = t10412*t10720;
  t10748 = t10726*t10476;
  t10750 = t10743 + t10748;
  t10601 = -0.049*t10488;
  t10602 = -0.09*t10492;
  t10604 = 0. + t10601 + t10602;
  t10619 = -0.049*t10618;
  t10626 = -0.21*t10625;
  t10627 = 0. + t10619 + t10626;
  t10728 = t10412*t10726;
  t10733 = -1.*t10720*t10476;
  t10735 = t10728 + t10733;
  t10766 = t10582*t10548*t10251;
  t10768 = t10750*t10562;
  t10770 = t10766 + t10768;
  t10640 = -0.21*t10618;
  t10642 = 0.049*t10625;
  t10644 = 0. + t10640 + t10642;
  t10664 = -0.2707*t10663;
  t10666 = 0.0016*t10665;
  t10668 = 0. + t10664 + t10666;
  t10773 = t10492*t10735;
  t10776 = t10485*t10770;
  t10781 = t10773 + t10776;
  t10786 = t10485*t10735;
  t10793 = -1.*t10492*t10770;
  t10795 = t10786 + t10793;
  t10678 = -0.0016*t10663;
  t10679 = -0.2707*t10665;
  t10681 = 0. + t10678 + t10679;
  t10797 = -1.*t10625*t10781;
  t10799 = t10615*t10795;
  t10807 = t10797 + t10799;
  t10809 = t10615*t10781;
  t10810 = t10625*t10795;
  t10811 = t10809 + t10810;
  t10851 = t10582*t8013*t556;
  t10853 = -1.*t10582*t10303*t10378;
  t10857 = t10851 + t10853;
  t10838 = t10582*t556*t10303;
  t10839 = t10582*t8013*t10378;
  t10844 = t10838 + t10839;
  t10868 = t10412*t10844;
  t10876 = t10857*t10476;
  t10877 = t10868 + t10876;
  t10864 = t10412*t10857;
  t10865 = -1.*t10844*t10476;
  t10866 = t10864 + t10865;
  t10919 = -1.*t10548*t10285;
  t10920 = t10877*t10562;
  t10924 = t10919 + t10920;
  t10930 = t10492*t10866;
  t10937 = t10485*t10924;
  t10941 = t10930 + t10937;
  t10943 = t10485*t10866;
  t10944 = -1.*t10492*t10924;
  t10945 = t10943 + t10944;
  t10952 = -1.*t10625*t10941;
  t10954 = t10615*t10945;
  t10955 = t10952 + t10954;
  t10958 = t10615*t10941;
  t10959 = t10625*t10945;
  t10960 = t10958 + t10959;
  p_output1[0]=0. + t10371*t10397 + t10441*t10457 + t10475*t10483 + t10499*t10515 + t10541*t10577 + 0.1305*(t10541*t10548 - 1.*t10275*t10562*t10582) + t10275*t10582*t10591 + t10604*t10607 + t10627*t10631 + t10644*t10654 + t10668*t10675 + t10681*t10685 + 0.0184*(t10665*t10675 + t10658*t10685) - 0.7055*(t10658*t10675 - 1.*t10665*t10685) + t10318*t3736 + var1[0];
  p_output1[1]=0. + t10251*t10582*t10591 + t10397*t10710 + t10441*t10720 + t10483*t10726 + t10499*t10735 + t10577*t10750 + 0.1305*(-1.*t10251*t10562*t10582 + t10548*t10750) + t10604*t10770 + t10627*t10781 + t10644*t10795 + t10668*t10807 + t10681*t10811 + 0.0184*(t10665*t10807 + t10658*t10811) - 0.7055*(t10658*t10807 - 1.*t10665*t10811) + t10704*t3736 + var1[1];
  p_output1[2]=0. - 1.*t10285*t10591 + t10441*t10844 + t10483*t10857 + t10499*t10866 + t10577*t10877 + 0.1305*(t10285*t10562 + t10548*t10877) + t10604*t10924 + t10627*t10941 + t10644*t10945 + t10668*t10955 + t10681*t10960 + 0.0184*(t10665*t10955 + t10658*t10960) - 0.7055*(t10658*t10955 - 1.*t10665*t10960) + t10303*t10582*t3736 + t10397*t10582*t8013 + var1[2];
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

#include "p_ankle_joint_left.hh"

namespace SymExpression
{

void p_ankle_joint_left_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
