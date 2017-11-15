/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:50 GMT-05:00
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
  double t203;
  double t2057;
  double t2101;
  double t2064;
  double t2109;
  double t1132;
  double t1509;
  double t1538;
  double t1683;
  double t2012;
  double t2082;
  double t2602;
  double t2770;
  double t3803;
  double t8477;
  double t8503;
  double t8507;
  double t568;
  double t8629;
  double t8630;
  double t8632;
  double t8634;
  double t8635;
  double t8636;
  double t8638;
  double t8649;
  double t8650;
  double t8653;
  double t8678;
  double t8679;
  double t8681;
  double t8684;
  double t8685;
  double t8687;
  double t8689;
  double t8694;
  double t8695;
  double t8699;
  double t8711;
  double t8712;
  double t8713;
  double t8717;
  double t8719;
  double t8724;
  double t8729;
  double t8735;
  double t8738;
  double t8740;
  double t8750;
  double t8751;
  double t8753;
  double t8755;
  double t8759;
  double t8760;
  double t8772;
  double t8784;
  double t8788;
  double t8789;
  double t8801;
  double t8802;
  double t8804;
  double t1542;
  double t1694;
  double t1906;
  double t2045;
  double t2046;
  double t3902;
  double t4141;
  double t4943;
  double t6553;
  double t8581;
  double t8583;
  double t8618;
  double t8843;
  double t8845;
  double t8846;
  double t8857;
  double t8860;
  double t8866;
  double t8637;
  double t8645;
  double t8648;
  double t8873;
  double t8877;
  double t8881;
  double t8672;
  double t8673;
  double t8677;
  double t8688;
  double t8690;
  double t8692;
  double t8887;
  double t8888;
  double t8893;
  double t8909;
  double t8910;
  double t8912;
  double t8704;
  double t8706;
  double t8710;
  double t8727;
  double t8733;
  double t8734;
  double t8918;
  double t8919;
  double t8923;
  double t8926;
  double t8929;
  double t8930;
  double t8743;
  double t8745;
  double t8746;
  double t8765;
  double t8775;
  double t8780;
  double t8934;
  double t8937;
  double t8940;
  double t8942;
  double t8944;
  double t8945;
  double t8795;
  double t8797;
  double t8799;
  double t8950;
  double t8951;
  double t8955;
  double t8957;
  double t8958;
  double t8959;
  double t8989;
  double t8990;
  double t8994;
  double t9001;
  double t9004;
  double t9006;
  double t9020;
  double t9021;
  double t9022;
  double t9026;
  double t9029;
  double t9030;
  double t9034;
  double t9038;
  double t9039;
  double t9044;
  double t9045;
  double t9046;
  double t9048;
  double t9049;
  double t9050;
  double t9061;
  double t9062;
  double t9066;
  double t9068;
  double t9069;
  double t9070;
  t203 = Cos(var1[3]);
  t2057 = Cos(var1[5]);
  t2101 = Sin(var1[3]);
  t2064 = Sin(var1[4]);
  t2109 = Sin(var1[5]);
  t1132 = Cos(var1[14]);
  t1509 = -1.*t1132;
  t1538 = 1. + t1509;
  t1683 = Sin(var1[14]);
  t2012 = Sin(var1[13]);
  t2082 = t203*t2057*t2064;
  t2602 = t2101*t2109;
  t2770 = t2082 + t2602;
  t3803 = Cos(var1[13]);
  t8477 = -1.*t2057*t2101;
  t8503 = t203*t2064*t2109;
  t8507 = t8477 + t8503;
  t568 = Cos(var1[4]);
  t8629 = t2012*t2770;
  t8630 = t3803*t8507;
  t8632 = t8629 + t8630;
  t8634 = Cos(var1[15]);
  t8635 = -1.*t8634;
  t8636 = 1. + t8635;
  t8638 = Sin(var1[15]);
  t8649 = t3803*t2770;
  t8650 = -1.*t2012*t8507;
  t8653 = t8649 + t8650;
  t8678 = t1132*t203*t568;
  t8679 = t1683*t8632;
  t8681 = t8678 + t8679;
  t8684 = Cos(var1[16]);
  t8685 = -1.*t8684;
  t8687 = 1. + t8685;
  t8689 = Sin(var1[16]);
  t8694 = t8638*t8653;
  t8695 = t8634*t8681;
  t8699 = t8694 + t8695;
  t8711 = t8634*t8653;
  t8712 = -1.*t8638*t8681;
  t8713 = t8711 + t8712;
  t8717 = Cos(var1[17]);
  t8719 = -1.*t8717;
  t8724 = 1. + t8719;
  t8729 = Sin(var1[17]);
  t8735 = -1.*t8689*t8699;
  t8738 = t8684*t8713;
  t8740 = t8735 + t8738;
  t8750 = t8684*t8699;
  t8751 = t8689*t8713;
  t8753 = t8750 + t8751;
  t8755 = Cos(var1[18]);
  t8759 = -1.*t8755;
  t8760 = 1. + t8759;
  t8772 = Sin(var1[18]);
  t8784 = t8729*t8740;
  t8788 = t8717*t8753;
  t8789 = t8784 + t8788;
  t8801 = t8717*t8740;
  t8802 = -1.*t8729*t8753;
  t8804 = t8801 + t8802;
  t1542 = -0.049*t1538;
  t1694 = -0.135*t1683;
  t1906 = 0. + t1542 + t1694;
  t2045 = 0.135*t2012;
  t2046 = 0. + t2045;
  t3902 = -1.*t3803;
  t4141 = 1. + t3902;
  t4943 = -0.135*t4141;
  t6553 = 0. + t4943;
  t8581 = -0.135*t1538;
  t8583 = 0.049*t1683;
  t8618 = 0. + t8581 + t8583;
  t8843 = t2057*t2101*t2064;
  t8845 = -1.*t203*t2109;
  t8846 = t8843 + t8845;
  t8857 = t203*t2057;
  t8860 = t2101*t2064*t2109;
  t8866 = t8857 + t8860;
  t8637 = -0.09*t8636;
  t8645 = 0.049*t8638;
  t8648 = 0. + t8637 + t8645;
  t8873 = t2012*t8846;
  t8877 = t3803*t8866;
  t8881 = t8873 + t8877;
  t8672 = -0.049*t8636;
  t8673 = -0.09*t8638;
  t8677 = 0. + t8672 + t8673;
  t8688 = -0.049*t8687;
  t8690 = -0.21*t8689;
  t8692 = 0. + t8688 + t8690;
  t8887 = t3803*t8846;
  t8888 = -1.*t2012*t8866;
  t8893 = t8887 + t8888;
  t8909 = t1132*t568*t2101;
  t8910 = t1683*t8881;
  t8912 = t8909 + t8910;
  t8704 = -0.21*t8687;
  t8706 = 0.049*t8689;
  t8710 = 0. + t8704 + t8706;
  t8727 = -0.2707*t8724;
  t8733 = 0.0016*t8729;
  t8734 = 0. + t8727 + t8733;
  t8918 = t8638*t8893;
  t8919 = t8634*t8912;
  t8923 = t8918 + t8919;
  t8926 = t8634*t8893;
  t8929 = -1.*t8638*t8912;
  t8930 = t8926 + t8929;
  t8743 = -0.0016*t8724;
  t8745 = -0.2707*t8729;
  t8746 = 0. + t8743 + t8745;
  t8765 = 0.0184*t8760;
  t8775 = -0.7055*t8772;
  t8780 = 0. + t8765 + t8775;
  t8934 = -1.*t8689*t8923;
  t8937 = t8684*t8930;
  t8940 = t8934 + t8937;
  t8942 = t8684*t8923;
  t8944 = t8689*t8930;
  t8945 = t8942 + t8944;
  t8795 = -0.7055*t8760;
  t8797 = -0.0184*t8772;
  t8799 = 0. + t8795 + t8797;
  t8950 = t8729*t8940;
  t8951 = t8717*t8945;
  t8955 = t8950 + t8951;
  t8957 = t8717*t8940;
  t8958 = -1.*t8729*t8945;
  t8959 = t8957 + t8958;
  t8989 = t568*t2057*t2012;
  t8990 = t3803*t568*t2109;
  t8994 = t8989 + t8990;
  t9001 = t3803*t568*t2057;
  t9004 = -1.*t568*t2012*t2109;
  t9006 = t9001 + t9004;
  t9020 = -1.*t1132*t2064;
  t9021 = t1683*t8994;
  t9022 = t9020 + t9021;
  t9026 = t8638*t9006;
  t9029 = t8634*t9022;
  t9030 = t9026 + t9029;
  t9034 = t8634*t9006;
  t9038 = -1.*t8638*t9022;
  t9039 = t9034 + t9038;
  t9044 = -1.*t8689*t9030;
  t9045 = t8684*t9039;
  t9046 = t9044 + t9045;
  t9048 = t8684*t9030;
  t9049 = t8689*t9039;
  t9050 = t9048 + t9049;
  t9061 = t8729*t9046;
  t9062 = t8717*t9050;
  t9066 = t9061 + t9062;
  t9068 = t8717*t9046;
  t9069 = -1.*t8729*t9050;
  t9070 = t9068 + t9069;
  p_output1[0]=0. + t2046*t2770 + t1906*t203*t568 + t6553*t8507 + t8618*t8632 - 0.1305*(-1.*t1683*t203*t568 + t1132*t8632) + t8648*t8653 + t8677*t8681 + t8692*t8699 + t8710*t8713 + t8734*t8740 + t8746*t8753 + t8780*t8789 + t8799*t8804 - 0.7055*(-1.*t8772*t8789 + t8755*t8804) + 0.0184*(t8755*t8789 + t8772*t8804) + var1[0];
  p_output1[1]=0. + t1906*t2101*t568 + t2046*t8846 + t6553*t8866 + t8618*t8881 - 0.1305*(-1.*t1683*t2101*t568 + t1132*t8881) + t8648*t8893 + t8677*t8912 + t8692*t8923 + t8710*t8930 + t8734*t8940 + t8746*t8945 + t8780*t8955 + t8799*t8959 - 0.7055*(-1.*t8772*t8955 + t8755*t8959) + 0.0184*(t8755*t8955 + t8772*t8959) + var1[1];
  p_output1[2]=0. - 1.*t1906*t2064 + t2046*t2057*t568 + t2109*t568*t6553 + t8618*t8994 - 0.1305*(t1683*t2064 + t1132*t8994) + t8648*t9006 + t8677*t9022 + t8692*t9030 + t8710*t9039 + t8734*t9046 + t8746*t9050 + t8780*t9066 + t8799*t9070 - 0.7055*(-1.*t8772*t9066 + t8755*t9070) + 0.0184*(t8755*t9066 + t8772*t9070) + var1[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "p_ankle_joint_right_mex.hh"

namespace SymExpression
{

void p_ankle_joint_right_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
