/*
 * Automatically Generated from Mathematica.
 * Mon 26 Feb 2018 15:42:44 GMT-05:00
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
  double t489;
  double t519;
  double t707;
  double t514;
  double t736;
  double t429;
  double t1033;
  double t1051;
  double t1152;
  double t705;
  double t836;
  double t1018;
  double t1168;
  double t367;
  double t1468;
  double t1527;
  double t1528;
  double t1023;
  double t1237;
  double t1244;
  double t1589;
  double t345;
  double t1693;
  double t1708;
  double t1714;
  double t1266;
  double t1594;
  double t1666;
  double t1745;
  double t2327;
  double t2002;
  double t2186;
  double t2671;
  double t2672;
  double t2759;
  double t2188;
  double t2375;
  double t2528;
  double t3259;
  double t3302;
  double t3356;
  double t2558;
  double t2896;
  double t2962;
  double t3736;
  double t4474;
  double t5866;
  double t3104;
  double t3564;
  double t3576;
  double t6216;
  double t6238;
  double t6248;
  double t3680;
  double t6116;
  double t6154;
  double t1667;
  double t1747;
  double t1850;
  double t1858;
  double t1871;
  double t1889;
  double t6201;
  double t6264;
  double t6271;
  double t6301;
  double t6310;
  double t6311;
  double t6343;
  double t6355;
  double t6365;
  double t6320;
  double t6323;
  double t6341;
  double t6409;
  double t6414;
  double t6419;
  double t6387;
  double t6388;
  double t6399;
  double t6438;
  double t6445;
  double t6460;
  double t6407;
  double t6425;
  double t6429;
  double t6481;
  double t6482;
  double t6485;
  double t6435;
  double t6472;
  double t6473;
  double t6509;
  double t6515;
  double t6529;
  double t6480;
  double t6494;
  double t6498;
  double t6295;
  double t6314;
  double t6316;
  double t1854;
  double t1890;
  double t1970;
  double t6499;
  double t6530;
  double t6538;
  double t6547;
  double t6553;
  double t6556;
  double t6545;
  double t6560;
  double t6561;
  double t6575;
  double t6583;
  double t6585;
  double t108;
  double t6602;
  double t6603;
  double t6381;
  double t6570;
  double t6571;
  double t6572;
  double t6573;
  double t6589;
  double t6593;
  double t6600;
  double t6612;
  double t6615;
  double t6633;
  double t6634;
  double t50;
  double t6647;
  double t6655;
  double t6650;
  double t6651;
  double t6652;
  double t6734;
  double t6727;
  double t6732;
  double t6735;
  double t6747;
  double t6733;
  double t6738;
  double t6743;
  double t6725;
  double t6748;
  double t6749;
  double t6750;
  double t6762;
  double t6746;
  double t6752;
  double t6759;
  double t6723;
  double t6763;
  double t6764;
  double t6765;
  double t6771;
  double t6761;
  double t6766;
  double t6769;
  double t6722;
  double t6772;
  double t6775;
  double t6776;
  double t6319;
  double t6371;
  double t6374;
  double t6793;
  double t6794;
  double t6795;
  double t6797;
  double t6798;
  double t6799;
  double t6796;
  double t6800;
  double t6801;
  double t6803;
  double t6804;
  double t6805;
  double t6802;
  double t6806;
  double t6807;
  double t6810;
  double t6811;
  double t6814;
  double t6809;
  double t6817;
  double t6818;
  double t6820;
  double t6825;
  double t6826;
  double t6642;
  double t6846;
  double t6851;
  double t6854;
  double t6856;
  double t6857;
  double t6858;
  double t6855;
  double t6860;
  double t6863;
  double t6868;
  double t6869;
  double t6870;
  double t6865;
  double t6871;
  double t6872;
  double t6876;
  double t6879;
  double t6880;
  double t6873;
  double t6881;
  double t6882;
  double t6884;
  double t6885;
  double t6888;
  double t6678;
  double t6679;
  double t6680;
  double t6770;
  double t6777;
  double t6778;
  double t6779;
  double t6780;
  double t6781;
  double t6782;
  double t6787;
  double t6788;
  double t6659;
  double t6660;
  double t6661;
  double t6819;
  double t6829;
  double t6834;
  double t6835;
  double t6836;
  double t6839;
  double t6840;
  double t6841;
  double t6844;
  double t6667;
  double t6670;
  double t6671;
  double t6883;
  double t6890;
  double t6891;
  double t6892;
  double t6893;
  double t6894;
  double t6895;
  double t6896;
  double t6897;
  double t6706;
  double t6707;
  double t6712;
  double t6683;
  double t6688;
  double t6697;
  double t6704;
  double t6910;
  double t6912;
  double t6913;
  double t6915;
  double t6919;
  double t6920;
  double t6924;
  double t6925;
  double t6926;
  t489 = Cos(var1[8]);
  t519 = Cos(var1[10]);
  t707 = Sin(var1[9]);
  t514 = Cos(var1[9]);
  t736 = Sin(var1[10]);
  t429 = Cos(var1[11]);
  t1033 = -1.*t489*t519*t707;
  t1051 = -1.*t489*t514*t736;
  t1152 = t1033 + t1051;
  t705 = t489*t514*t519;
  t836 = -1.*t489*t707*t736;
  t1018 = t705 + t836;
  t1168 = Sin(var1[11]);
  t367 = Cos(var1[12]);
  t1468 = t429*t1152;
  t1527 = -1.*t1018*t1168;
  t1528 = t1468 + t1527;
  t1023 = t429*t1018;
  t1237 = t1152*t1168;
  t1244 = t1023 + t1237;
  t1589 = Sin(var1[12]);
  t345 = Cos(var1[13]);
  t1693 = t367*t1528;
  t1708 = -1.*t1244*t1589;
  t1714 = t1693 + t1708;
  t1266 = t367*t1244;
  t1594 = t1528*t1589;
  t1666 = t1266 + t1594;
  t1745 = Sin(var1[13]);
  t2327 = Cos(var1[7]);
  t2002 = Sin(var1[7]);
  t2186 = Sin(var1[8]);
  t2671 = t2327*t514;
  t2672 = -1.*t2002*t2186*t707;
  t2759 = t2671 + t2672;
  t2188 = t514*t2002*t2186;
  t2375 = t2327*t707;
  t2528 = t2188 + t2375;
  t3259 = t519*t2759;
  t3302 = -1.*t2528*t736;
  t3356 = t3259 + t3302;
  t2558 = t519*t2528;
  t2896 = t2759*t736;
  t2962 = t2558 + t2896;
  t3736 = t429*t3356;
  t4474 = -1.*t2962*t1168;
  t5866 = t3736 + t4474;
  t3104 = t429*t2962;
  t3564 = t3356*t1168;
  t3576 = t3104 + t3564;
  t6216 = t367*t5866;
  t6238 = -1.*t3576*t1589;
  t6248 = t6216 + t6238;
  t3680 = t367*t3576;
  t6116 = t5866*t1589;
  t6154 = t3680 + t6116;
  t1667 = t345*t1666;
  t1747 = t1714*t1745;
  t1850 = t1667 + t1747;
  t1858 = t345*t1714;
  t1871 = -1.*t1666*t1745;
  t1889 = t1858 + t1871;
  t6201 = t345*t6154;
  t6264 = t6248*t1745;
  t6271 = t6201 + t6264;
  t6301 = t345*t6248;
  t6310 = -1.*t6154*t1745;
  t6311 = t6301 + t6310;
  t6343 = 0.642788*t6271;
  t6355 = 0.766044*t6311;
  t6365 = t6343 + t6355;
  t6320 = -0.766044*t1850;
  t6323 = 0.642788*t1889;
  t6341 = t6320 + t6323;
  t6409 = -1.*t514*t2002;
  t6414 = -1.*t2327*t2186*t707;
  t6419 = t6409 + t6414;
  t6387 = t2327*t514*t2186;
  t6388 = -1.*t2002*t707;
  t6399 = t6387 + t6388;
  t6438 = t519*t6419;
  t6445 = -1.*t6399*t736;
  t6460 = t6438 + t6445;
  t6407 = t519*t6399;
  t6425 = t6419*t736;
  t6429 = t6407 + t6425;
  t6481 = t429*t6460;
  t6482 = -1.*t6429*t1168;
  t6485 = t6481 + t6482;
  t6435 = t429*t6429;
  t6472 = t6460*t1168;
  t6473 = t6435 + t6472;
  t6509 = t367*t6485;
  t6515 = -1.*t6473*t1589;
  t6529 = t6509 + t6515;
  t6480 = t367*t6473;
  t6494 = t6485*t1589;
  t6498 = t6480 + t6494;
  t6295 = -0.766044*t6271;
  t6314 = 0.642788*t6311;
  t6316 = t6295 + t6314;
  t1854 = 0.642788*t1850;
  t1890 = 0.766044*t1889;
  t1970 = t1854 + t1890;
  t6499 = t345*t6498;
  t6530 = t6529*t1745;
  t6538 = t6499 + t6530;
  t6547 = t345*t6529;
  t6553 = -1.*t6498*t1745;
  t6556 = t6547 + t6553;
  t6545 = -0.766044*t6538;
  t6560 = 0.642788*t6556;
  t6561 = t6545 + t6560;
  t6575 = 0.642788*t6538;
  t6583 = 0.766044*t6556;
  t6585 = t6575 + t6583;
  t108 = Cos(var1[1]);
  t6602 = t1970*t6561;
  t6603 = -1.*t6341*t6585;
  t6381 = t2327*t489*t6341;
  t6570 = t2186*t6561;
  t6571 = t6381 + t6570;
  t6572 = -1.*t6365*t6571;
  t6573 = t2327*t489*t1970;
  t6589 = t2186*t6585;
  t6593 = t6573 + t6589;
  t6600 = t6316*t6593;
  t6612 = t6602 + t6603;
  t6615 = -1.*t489*t2002*t6612;
  t6633 = 0. + t6572 + t6600 + t6615;
  t6634 = 1/t6633;
  t50 = Cos(var1[0]);
  t6647 = Sin(var1[0]);
  t6655 = Sin(var1[1]);
  t6650 = t6585*t6316;
  t6651 = -1.*t6561*t6365;
  t6652 = 0. + t6650 + t6651;
  t6734 = Cos(var1[3]);
  t6727 = Cos(var1[2]);
  t6732 = Sin(var1[3]);
  t6735 = Sin(var1[2]);
  t6747 = Cos(var1[4]);
  t6733 = -1.*t108*t6727*t6732;
  t6738 = -1.*t6734*t108*t6735;
  t6743 = t6733 + t6738;
  t6725 = Sin(var1[4]);
  t6748 = t6734*t108*t6727;
  t6749 = -1.*t108*t6732*t6735;
  t6750 = t6748 + t6749;
  t6762 = Cos(var1[5]);
  t6746 = t6725*t6743;
  t6752 = t6747*t6750;
  t6759 = t6746 + t6752;
  t6723 = Sin(var1[5]);
  t6763 = t6747*t6743;
  t6764 = -1.*t6725*t6750;
  t6765 = t6763 + t6764;
  t6771 = Cos(var1[6]);
  t6761 = -1.*t6723*t6759;
  t6766 = t6762*t6765;
  t6769 = t6761 + t6766;
  t6722 = Sin(var1[6]);
  t6772 = t6762*t6759;
  t6775 = t6723*t6765;
  t6776 = t6772 + t6775;
  t6319 = -1.*t1970*t6316;
  t6371 = t6341*t6365;
  t6374 = 0. + t6319 + t6371;
  t6793 = t50*t6727*t6655;
  t6794 = -1.*t6647*t6735;
  t6795 = t6793 + t6794;
  t6797 = -1.*t6727*t6647;
  t6798 = -1.*t50*t6655*t6735;
  t6799 = t6797 + t6798;
  t6796 = -1.*t6732*t6795;
  t6800 = t6734*t6799;
  t6801 = t6796 + t6800;
  t6803 = t6734*t6795;
  t6804 = t6732*t6799;
  t6805 = t6803 + t6804;
  t6802 = t6725*t6801;
  t6806 = t6747*t6805;
  t6807 = t6802 + t6806;
  t6810 = t6747*t6801;
  t6811 = -1.*t6725*t6805;
  t6814 = t6810 + t6811;
  t6809 = -1.*t6723*t6807;
  t6817 = t6762*t6814;
  t6818 = t6809 + t6817;
  t6820 = t6762*t6807;
  t6825 = t6723*t6814;
  t6826 = t6820 + t6825;
  t6642 = 0. + t6602 + t6603;
  t6846 = t6727*t6647*t6655;
  t6851 = t50*t6735;
  t6854 = t6846 + t6851;
  t6856 = t50*t6727;
  t6857 = -1.*t6647*t6655*t6735;
  t6858 = t6856 + t6857;
  t6855 = -1.*t6732*t6854;
  t6860 = t6734*t6858;
  t6863 = t6855 + t6860;
  t6868 = t6734*t6854;
  t6869 = t6732*t6858;
  t6870 = t6868 + t6869;
  t6865 = t6725*t6863;
  t6871 = t6747*t6870;
  t6872 = t6865 + t6871;
  t6876 = t6747*t6863;
  t6879 = -1.*t6725*t6870;
  t6880 = t6876 + t6879;
  t6873 = -1.*t6723*t6872;
  t6881 = t6762*t6880;
  t6882 = t6873 + t6881;
  t6884 = t6762*t6872;
  t6885 = t6723*t6880;
  t6888 = t6884 + t6885;
  t6678 = -1.*t489*t2002*t6561;
  t6679 = t2327*t489*t6316;
  t6680 = 0. + t6678 + t6679;
  t6770 = t6722*t6769;
  t6777 = t6771*t6776;
  t6778 = t6770 + t6777;
  t6779 = 0.642788*t6778;
  t6780 = t6771*t6769;
  t6781 = -1.*t6722*t6776;
  t6782 = t6780 + t6781;
  t6787 = 0.766044*t6782;
  t6788 = t6779 + t6787;
  t6659 = t489*t2002*t6341;
  t6660 = t2186*t6316;
  t6661 = 0. + t6659 + t6660;
  t6819 = t6722*t6818;
  t6829 = t6771*t6826;
  t6834 = t6819 + t6829;
  t6835 = 0.642788*t6834;
  t6836 = t6771*t6818;
  t6839 = -1.*t6722*t6826;
  t6840 = t6836 + t6839;
  t6841 = 0.766044*t6840;
  t6844 = t6835 + t6841;
  t6667 = -1.*t2327*t489*t6341;
  t6670 = -1.*t2186*t6561;
  t6671 = 0. + t6667 + t6670;
  t6883 = t6722*t6882;
  t6890 = t6771*t6888;
  t6891 = t6883 + t6890;
  t6892 = 0.642788*t6891;
  t6893 = t6771*t6882;
  t6894 = -1.*t6722*t6888;
  t6895 = t6893 + t6894;
  t6896 = 0.766044*t6895;
  t6897 = t6892 + t6896;
  t6706 = t489*t2002*t6585;
  t6707 = -1.*t2327*t489*t6365;
  t6712 = 0. + t6706 + t6707;
  t6683 = -1.*t489*t2002*t1970;
  t6688 = -1.*t2186*t6365;
  t6697 = 0. + t6683 + t6688;
  t6704 = 0. + t6573 + t6589;
  t6910 = -0.766044*t6778;
  t6912 = 0.642788*t6782;
  t6913 = t6910 + t6912;
  t6915 = -0.766044*t6834;
  t6919 = 0.642788*t6840;
  t6920 = t6915 + t6919;
  t6924 = -0.766044*t6891;
  t6925 = 0.642788*t6895;
  t6926 = t6924 + t6925;
  p_output1[0]=0. - 1.*t108*t50*t6374*t6634 - 1.*t108*t6634*t6642*t6647 + t6634*t6652*t6655;
  p_output1[1]=0. - 1.*t108*t50*t6634*t6661 - 1.*t108*t6634*t6647*t6671 + t6634*t6655*t6680;
  p_output1[2]=0. - 1.*t108*t50*t6634*t6697 - 1.*t108*t6634*t6647*t6704 + t6634*t6655*t6712;
  p_output1[3]=0. + t6634*t6652*t6788 + t6374*t6634*t6844 + t6634*t6642*t6897;
  p_output1[4]=0. + t6634*t6680*t6788 + t6634*t6661*t6844 + t6634*t6671*t6897;
  p_output1[5]=0. + t6634*t6712*t6788 + t6634*t6697*t6844 + t6634*t6704*t6897;
  p_output1[6]=0. + t6634*t6652*t6913 + t6374*t6634*t6920 + t6634*t6642*t6926;
  p_output1[7]=0. + t6634*t6680*t6913 + t6634*t6661*t6920 + t6634*t6671*t6926;
  p_output1[8]=0. + t6634*t6712*t6913 + t6634*t6697*t6920 + t6634*t6704*t6926;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "R_RightToeBottom_to_LeftToeBottom_mex.hh"

namespace SymExpression
{

void R_RightToeBottom_to_LeftToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
