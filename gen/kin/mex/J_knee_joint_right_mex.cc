/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:11:42 GMT-05:00
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
  double t6527;
  double t6551;
  double t6543;
  double t6548;
  double t6553;
  double t1393;
  double t3731;
  double t6493;
  double t6508;
  double t6531;
  double t6550;
  double t6554;
  double t6555;
  double t6562;
  double t6574;
  double t6576;
  double t6577;
  double t1383;
  double t6583;
  double t6585;
  double t6586;
  double t6593;
  double t6595;
  double t6597;
  double t6599;
  double t6603;
  double t6604;
  double t6605;
  double t6617;
  double t6618;
  double t6623;
  double t6499;
  double t6510;
  double t6520;
  double t6532;
  double t6542;
  double t6566;
  double t6569;
  double t6570;
  double t6571;
  double t6579;
  double t6581;
  double t6582;
  double t6638;
  double t6639;
  double t6640;
  double t6642;
  double t6643;
  double t6644;
  double t6598;
  double t6601;
  double t6602;
  double t6646;
  double t6647;
  double t6648;
  double t6613;
  double t6614;
  double t6615;
  double t6650;
  double t6653;
  double t6654;
  double t6662;
  double t6663;
  double t6664;
  double t6678;
  double t6679;
  double t6680;
  double t6682;
  double t6683;
  double t6684;
  double t6690;
  double t6691;
  double t6692;
  double t6706;
  double t6707;
  double t6708;
  double t6710;
  double t6711;
  double t6712;
  double t6718;
  double t6719;
  double t6720;
  double t6734;
  double t6735;
  double t6736;
  double t6738;
  double t6739;
  double t6740;
  double t6746;
  double t6747;
  double t6748;
  double t6760;
  double t6761;
  double t6762;
  double t6768;
  double t6769;
  double t6764;
  double t6765;
  double t6766;
  double t6782;
  double t6783;
  double t6784;
  double t6790;
  double t6791;
  double t6792;
  double t6787;
  double t6788;
  double t6811;
  double t6812;
  double t6813;
  double t6807;
  double t6808;
  double t6809;
  double t6828;
  double t6829;
  double t6844;
  double t6845;
  double t6846;
  double t6851;
  double t6852;
  double t6848;
  double t6849;
  double t6810;
  double t6814;
  double t6815;
  double t6816;
  double t6817;
  double t6818;
  double t6819;
  double t6820;
  double t6821;
  double t6822;
  double t6823;
  double t6824;
  double t6656;
  double t6657;
  double t6659;
  double t6868;
  double t6869;
  double t6870;
  double t6872;
  double t6873;
  double t6884;
  double t6885;
  double t6886;
  double t6888;
  double t6889;
  double t6890;
  double t6899;
  double t6900;
  double t6901;
  double t6903;
  double t6904;
  double t6905;
  double t6670;
  double t6671;
  double t6672;
  double t6914;
  double t6915;
  double t6917;
  double t6918;
  double t6919;
  double t6928;
  double t6929;
  double t6930;
  double t6942;
  double t6943;
  double t6944;
  t6527 = Sin(var1[3]);
  t6551 = Cos(var1[3]);
  t6543 = Cos(var1[5]);
  t6548 = Sin(var1[4]);
  t6553 = Sin(var1[5]);
  t1393 = Cos(var1[14]);
  t3731 = -1.*t1393;
  t6493 = 1. + t3731;
  t6508 = Sin(var1[14]);
  t6531 = Sin(var1[13]);
  t6550 = -1.*t6543*t6527*t6548;
  t6554 = t6551*t6553;
  t6555 = t6550 + t6554;
  t6562 = Cos(var1[13]);
  t6574 = -1.*t6551*t6543;
  t6576 = -1.*t6527*t6548*t6553;
  t6577 = t6574 + t6576;
  t1383 = Cos(var1[4]);
  t6583 = t6531*t6555;
  t6585 = t6562*t6577;
  t6586 = t6583 + t6585;
  t6593 = Cos(var1[15]);
  t6595 = -1.*t6593;
  t6597 = 1. + t6595;
  t6599 = Sin(var1[15]);
  t6603 = t6562*t6555;
  t6604 = -1.*t6531*t6577;
  t6605 = t6603 + t6604;
  t6617 = -1.*t1393*t1383*t6527;
  t6618 = t6508*t6586;
  t6623 = t6617 + t6618;
  t6499 = -0.049*t6493;
  t6510 = -0.135*t6508;
  t6520 = 0. + t6499 + t6510;
  t6532 = 0.135*t6531;
  t6542 = 0. + t6532;
  t6566 = -1.*t6562;
  t6569 = 1. + t6566;
  t6570 = -0.135*t6569;
  t6571 = 0. + t6570;
  t6579 = -0.135*t6493;
  t6581 = 0.049*t6508;
  t6582 = 0. + t6579 + t6581;
  t6638 = t6551*t6543*t6548;
  t6639 = t6527*t6553;
  t6640 = t6638 + t6639;
  t6642 = -1.*t6543*t6527;
  t6643 = t6551*t6548*t6553;
  t6644 = t6642 + t6643;
  t6598 = -0.09*t6597;
  t6601 = 0.049*t6599;
  t6602 = 0. + t6598 + t6601;
  t6646 = t6531*t6640;
  t6647 = t6562*t6644;
  t6648 = t6646 + t6647;
  t6613 = -0.049*t6597;
  t6614 = -0.09*t6599;
  t6615 = 0. + t6613 + t6614;
  t6650 = t6562*t6640;
  t6653 = -1.*t6531*t6644;
  t6654 = t6650 + t6653;
  t6662 = t1393*t6551*t1383;
  t6663 = t6508*t6648;
  t6664 = t6662 + t6663;
  t6678 = t6551*t1383*t6543*t6531;
  t6679 = t6562*t6551*t1383*t6553;
  t6680 = t6678 + t6679;
  t6682 = t6562*t6551*t1383*t6543;
  t6683 = -1.*t6551*t1383*t6531*t6553;
  t6684 = t6682 + t6683;
  t6690 = -1.*t1393*t6551*t6548;
  t6691 = t6508*t6680;
  t6692 = t6690 + t6691;
  t6706 = t1383*t6543*t6531*t6527;
  t6707 = t6562*t1383*t6527*t6553;
  t6708 = t6706 + t6707;
  t6710 = t6562*t1383*t6543*t6527;
  t6711 = -1.*t1383*t6531*t6527*t6553;
  t6712 = t6710 + t6711;
  t6718 = -1.*t1393*t6527*t6548;
  t6719 = t6508*t6708;
  t6720 = t6718 + t6719;
  t6734 = -1.*t6543*t6531*t6548;
  t6735 = -1.*t6562*t6548*t6553;
  t6736 = t6734 + t6735;
  t6738 = -1.*t6562*t6543*t6548;
  t6739 = t6531*t6548*t6553;
  t6740 = t6738 + t6739;
  t6746 = -1.*t1393*t1383;
  t6747 = t6508*t6736;
  t6748 = t6746 + t6747;
  t6760 = t6543*t6527;
  t6761 = -1.*t6551*t6548*t6553;
  t6762 = t6760 + t6761;
  t6768 = t6531*t6762;
  t6769 = t6650 + t6768;
  t6764 = -1.*t6531*t6640;
  t6765 = t6562*t6762;
  t6766 = t6764 + t6765;
  t6782 = t6543*t6527*t6548;
  t6783 = -1.*t6551*t6553;
  t6784 = t6782 + t6783;
  t6790 = t6562*t6784;
  t6791 = t6531*t6577;
  t6792 = t6790 + t6791;
  t6787 = -1.*t6531*t6784;
  t6788 = t6787 + t6585;
  t6811 = t6562*t1383*t6543;
  t6812 = -1.*t1383*t6531*t6553;
  t6813 = t6811 + t6812;
  t6807 = -1.*t1383*t6543*t6531;
  t6808 = -1.*t6562*t1383*t6553;
  t6809 = t6807 + t6808;
  t6828 = -1.*t6562*t6644;
  t6829 = t6764 + t6828;
  t6844 = t6551*t6543;
  t6845 = t6527*t6548*t6553;
  t6846 = t6844 + t6845;
  t6851 = -1.*t6531*t6846;
  t6852 = t6790 + t6851;
  t6848 = -1.*t6562*t6846;
  t6849 = t6787 + t6848;
  t6810 = t6602*t6809;
  t6814 = -0.1305*t1393*t6813;
  t6815 = t6582*t6813;
  t6816 = t6508*t6615*t6813;
  t6817 = t6599*t6809;
  t6818 = t6593*t6508*t6813;
  t6819 = t6817 + t6818;
  t6820 = -0.049*t6819;
  t6821 = t6593*t6809;
  t6822 = -1.*t6508*t6599*t6813;
  t6823 = t6821 + t6822;
  t6824 = -0.21*t6823;
  t6656 = -1.*t6551*t1383*t6508;
  t6657 = t1393*t6648;
  t6659 = t6656 + t6657;
  t6868 = -0.135*t1393;
  t6869 = -0.049*t6508;
  t6870 = t6868 + t6869;
  t6872 = 0.049*t1393;
  t6873 = t6872 + t6510;
  t6884 = t6531*t6784;
  t6885 = t6562*t6846;
  t6886 = t6884 + t6885;
  t6888 = -1.*t1383*t6508*t6527;
  t6889 = t1393*t6886;
  t6890 = t6888 + t6889;
  t6899 = t1383*t6543*t6531;
  t6900 = t6562*t1383*t6553;
  t6901 = t6899 + t6900;
  t6903 = t6508*t6548;
  t6904 = t1393*t6901;
  t6905 = t6903 + t6904;
  t6670 = t6593*t6654;
  t6671 = -1.*t6599*t6664;
  t6672 = t6670 + t6671;
  t6914 = 0.049*t6593;
  t6915 = t6914 + t6614;
  t6917 = -0.09*t6593;
  t6918 = -0.049*t6599;
  t6919 = t6917 + t6918;
  t6928 = t1393*t1383*t6527;
  t6929 = t6508*t6886;
  t6930 = t6928 + t6929;
  t6942 = -1.*t1393*t6548;
  t6943 = t6508*t6901;
  t6944 = t6942 + t6943;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=-1.*t1383*t6520*t6527 + t6542*t6555 + t6571*t6577 + t6582*t6586 - 0.1305*(t1383*t6508*t6527 + t1393*t6586) + t6602*t6605 + t6615*t6623 - 0.049*(t6599*t6605 + t6593*t6623) - 0.21*(t6593*t6605 - 1.*t6599*t6623);
  p_output1[10]=t1383*t6520*t6551 + t6542*t6640 + t6571*t6644 + t6582*t6648 + t6602*t6654 - 0.1305*t6659 + t6615*t6664 - 0.049*(t6599*t6654 + t6593*t6664) - 0.21*t6672;
  p_output1[11]=0;
  p_output1[12]=t1383*t6542*t6543*t6551 - 1.*t6520*t6548*t6551 + t1383*t6551*t6553*t6571 + t6582*t6680 - 0.1305*(t6508*t6548*t6551 + t1393*t6680) + t6602*t6684 + t6615*t6692 - 0.049*(t6599*t6684 + t6593*t6692) - 0.21*(t6593*t6684 - 1.*t6599*t6692);
  p_output1[13]=t1383*t6527*t6542*t6543 - 1.*t6520*t6527*t6548 + t1383*t6527*t6553*t6571 + t6582*t6708 - 0.1305*(t6508*t6527*t6548 + t1393*t6708) + t6602*t6712 + t6615*t6720 - 0.049*(t6599*t6712 + t6593*t6720) - 0.21*(t6593*t6712 - 1.*t6599*t6720);
  p_output1[14]=-1.*t1383*t6520 - 1.*t6542*t6543*t6548 - 1.*t6548*t6553*t6571 + t6582*t6736 - 0.1305*(t1383*t6508 + t1393*t6736) + t6602*t6740 + t6615*t6748 - 0.049*(t6599*t6740 + t6593*t6748) - 0.21*(t6593*t6740 - 1.*t6599*t6748);
  p_output1[15]=t6571*t6640 + t6542*t6762 + t6602*t6766 - 0.1305*t1393*t6769 + t6582*t6769 + t6508*t6615*t6769 - 0.049*(t6599*t6766 + t6508*t6593*t6769) - 0.21*(t6593*t6766 - 1.*t6508*t6599*t6769);
  p_output1[16]=t6542*t6577 + t6571*t6784 + t6602*t6788 - 0.1305*t1393*t6792 + t6582*t6792 + t6508*t6615*t6792 - 0.049*(t6599*t6788 + t6508*t6593*t6792) - 0.21*(t6593*t6788 - 1.*t6508*t6599*t6792);
  p_output1[17]=-1.*t1383*t6542*t6553 + t1383*t6543*t6571 + t6810 + t6814 + t6815 + t6816 + t6820 + t6824;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0.135*t6562*t6640 - 0.135*t6531*t6644 - 0.1305*t1393*t6654 + t6582*t6654 + t6508*t6615*t6654 + t6602*t6829 - 0.21*(-1.*t6508*t6599*t6654 + t6593*t6829) - 0.049*(t6508*t6593*t6654 + t6599*t6829);
  p_output1[40]=0.135*t6562*t6784 - 0.135*t6531*t6846 + t6602*t6849 - 0.1305*t1393*t6852 + t6582*t6852 + t6508*t6615*t6852 - 0.049*(t6599*t6849 + t6508*t6593*t6852) - 0.21*(t6593*t6849 - 1.*t6508*t6599*t6852);
  p_output1[41]=-0.135*t1383*t6531*t6553 + 0.135*t1383*t6543*t6562 + t6810 + t6814 + t6815 + t6816 + t6820 + t6824;
  p_output1[42]=-0.1305*(-1.*t1383*t1393*t6551 - 1.*t6508*t6648) - 0.049*t6593*t6659 + 0.21*t6599*t6659 + t6615*t6659 + t1383*t6551*t6870 + t6648*t6873;
  p_output1[43]=t1383*t6527*t6870 + t6873*t6886 - 0.1305*(t6617 - 1.*t6508*t6886) - 0.049*t6593*t6890 + 0.21*t6599*t6890 + t6615*t6890;
  p_output1[44]=-1.*t6548*t6870 + t6873*t6901 - 0.1305*(t1393*t6548 - 1.*t6508*t6901) - 0.049*t6593*t6905 + 0.21*t6599*t6905 + t6615*t6905;
  p_output1[45]=-0.21*(-1.*t6599*t6654 - 1.*t6593*t6664) - 0.049*t6672 + t6654*t6915 + t6664*t6919;
  p_output1[46]=t6852*t6915 + t6919*t6930 - 0.21*(-1.*t6599*t6852 - 1.*t6593*t6930) - 0.049*(t6593*t6852 - 1.*t6599*t6930);
  p_output1[47]=t6813*t6915 + t6919*t6944 - 0.21*(-1.*t6599*t6813 - 1.*t6593*t6944) - 0.049*(t6593*t6813 - 1.*t6599*t6944);
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 20, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_knee_joint_right_mex.hh"

namespace SymExpression
{

void J_knee_joint_right_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
