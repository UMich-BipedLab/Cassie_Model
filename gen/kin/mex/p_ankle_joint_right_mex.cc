/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 11:08:28 GMT-04:00
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
  double t378;
  double t8685;
  double t8767;
  double t8686;
  double t8768;
  double t905;
  double t1194;
  double t1812;
  double t2415;
  double t8621;
  double t8756;
  double t8771;
  double t8772;
  double t8777;
  double t8787;
  double t8788;
  double t8791;
  double t744;
  double t8813;
  double t8819;
  double t8820;
  double t8825;
  double t8829;
  double t8833;
  double t8837;
  double t8845;
  double t8848;
  double t8850;
  double t8863;
  double t8864;
  double t8867;
  double t8880;
  double t8881;
  double t8883;
  double t8885;
  double t8888;
  double t8889;
  double t8890;
  double t8900;
  double t8902;
  double t8905;
  double t8916;
  double t8917;
  double t8918;
  double t8920;
  double t8930;
  double t8931;
  double t8934;
  double t8945;
  double t8946;
  double t8947;
  double t8956;
  double t8957;
  double t8962;
  double t8965;
  double t8970;
  double t8971;
  double t8972;
  double t8978;
  double t8979;
  double t8980;
  double t1827;
  double t2470;
  double t3913;
  double t8622;
  double t8680;
  double t8780;
  double t8783;
  double t8784;
  double t8785;
  double t8800;
  double t8802;
  double t8808;
  double t9009;
  double t9010;
  double t9011;
  double t9015;
  double t9018;
  double t9020;
  double t8835;
  double t8839;
  double t8844;
  double t9029;
  double t9033;
  double t9037;
  double t8857;
  double t8859;
  double t8860;
  double t8884;
  double t8886;
  double t8887;
  double t9039;
  double t9040;
  double t9041;
  double t9057;
  double t9060;
  double t9061;
  double t8892;
  double t8894;
  double t8896;
  double t8919;
  double t8925;
  double t8926;
  double t9065;
  double t9066;
  double t9069;
  double t9071;
  double t9072;
  double t9073;
  double t8940;
  double t8942;
  double t8944;
  double t8964;
  double t8968;
  double t8969;
  double t9076;
  double t9077;
  double t9079;
  double t9081;
  double t9082;
  double t9083;
  double t8975;
  double t8976;
  double t8977;
  double t9085;
  double t9091;
  double t9092;
  double t9096;
  double t9097;
  double t9098;
  double t9121;
  double t9122;
  double t9125;
  double t9130;
  double t9131;
  double t9135;
  double t9141;
  double t9142;
  double t9143;
  double t9145;
  double t9146;
  double t9147;
  double t9152;
  double t9154;
  double t9155;
  double t9159;
  double t9160;
  double t9162;
  double t9167;
  double t9168;
  double t9169;
  double t9171;
  double t9172;
  double t9173;
  double t9175;
  double t9176;
  double t9177;
  t378 = Cos(var1[3]);
  t8685 = Cos(var1[5]);
  t8767 = Sin(var1[3]);
  t8686 = Sin(var1[4]);
  t8768 = Sin(var1[5]);
  t905 = Cos(var1[14]);
  t1194 = -1.*t905;
  t1812 = 1. + t1194;
  t2415 = Sin(var1[14]);
  t8621 = Sin(var1[13]);
  t8756 = t378*t8685*t8686;
  t8771 = t8767*t8768;
  t8772 = t8756 + t8771;
  t8777 = Cos(var1[13]);
  t8787 = -1.*t8685*t8767;
  t8788 = t378*t8686*t8768;
  t8791 = t8787 + t8788;
  t744 = Cos(var1[4]);
  t8813 = t8621*t8772;
  t8819 = t8777*t8791;
  t8820 = t8813 + t8819;
  t8825 = Cos(var1[15]);
  t8829 = -1.*t8825;
  t8833 = 1. + t8829;
  t8837 = Sin(var1[15]);
  t8845 = t8777*t8772;
  t8848 = -1.*t8621*t8791;
  t8850 = t8845 + t8848;
  t8863 = t905*t378*t744;
  t8864 = t2415*t8820;
  t8867 = t8863 + t8864;
  t8880 = Cos(var1[16]);
  t8881 = -1.*t8880;
  t8883 = 1. + t8881;
  t8885 = Sin(var1[16]);
  t8888 = t8837*t8850;
  t8889 = t8825*t8867;
  t8890 = t8888 + t8889;
  t8900 = t8825*t8850;
  t8902 = -1.*t8837*t8867;
  t8905 = t8900 + t8902;
  t8916 = Cos(var1[17]);
  t8917 = -1.*t8916;
  t8918 = 1. + t8917;
  t8920 = Sin(var1[17]);
  t8930 = -1.*t8885*t8890;
  t8931 = t8880*t8905;
  t8934 = t8930 + t8931;
  t8945 = t8880*t8890;
  t8946 = t8885*t8905;
  t8947 = t8945 + t8946;
  t8956 = Cos(var1[18]);
  t8957 = -1.*t8956;
  t8962 = 1. + t8957;
  t8965 = Sin(var1[18]);
  t8970 = t8920*t8934;
  t8971 = t8916*t8947;
  t8972 = t8970 + t8971;
  t8978 = t8916*t8934;
  t8979 = -1.*t8920*t8947;
  t8980 = t8978 + t8979;
  t1827 = -0.049*t1812;
  t2470 = -0.135*t2415;
  t3913 = 0. + t1827 + t2470;
  t8622 = 0.135*t8621;
  t8680 = 0. + t8622;
  t8780 = -1.*t8777;
  t8783 = 1. + t8780;
  t8784 = -0.135*t8783;
  t8785 = 0. + t8784;
  t8800 = -0.135*t1812;
  t8802 = 0.049*t2415;
  t8808 = 0. + t8800 + t8802;
  t9009 = t8685*t8767*t8686;
  t9010 = -1.*t378*t8768;
  t9011 = t9009 + t9010;
  t9015 = t378*t8685;
  t9018 = t8767*t8686*t8768;
  t9020 = t9015 + t9018;
  t8835 = -0.09*t8833;
  t8839 = 0.049*t8837;
  t8844 = 0. + t8835 + t8839;
  t9029 = t8621*t9011;
  t9033 = t8777*t9020;
  t9037 = t9029 + t9033;
  t8857 = -0.049*t8833;
  t8859 = -0.09*t8837;
  t8860 = 0. + t8857 + t8859;
  t8884 = -0.049*t8883;
  t8886 = -0.21*t8885;
  t8887 = 0. + t8884 + t8886;
  t9039 = t8777*t9011;
  t9040 = -1.*t8621*t9020;
  t9041 = t9039 + t9040;
  t9057 = t905*t744*t8767;
  t9060 = t2415*t9037;
  t9061 = t9057 + t9060;
  t8892 = -0.21*t8883;
  t8894 = 0.049*t8885;
  t8896 = 0. + t8892 + t8894;
  t8919 = -0.2707*t8918;
  t8925 = 0.0016*t8920;
  t8926 = 0. + t8919 + t8925;
  t9065 = t8837*t9041;
  t9066 = t8825*t9061;
  t9069 = t9065 + t9066;
  t9071 = t8825*t9041;
  t9072 = -1.*t8837*t9061;
  t9073 = t9071 + t9072;
  t8940 = -0.0016*t8918;
  t8942 = -0.2707*t8920;
  t8944 = 0. + t8940 + t8942;
  t8964 = 0.0184*t8962;
  t8968 = -0.7055*t8965;
  t8969 = 0. + t8964 + t8968;
  t9076 = -1.*t8885*t9069;
  t9077 = t8880*t9073;
  t9079 = t9076 + t9077;
  t9081 = t8880*t9069;
  t9082 = t8885*t9073;
  t9083 = t9081 + t9082;
  t8975 = -0.7055*t8962;
  t8976 = -0.0184*t8965;
  t8977 = 0. + t8975 + t8976;
  t9085 = t8920*t9079;
  t9091 = t8916*t9083;
  t9092 = t9085 + t9091;
  t9096 = t8916*t9079;
  t9097 = -1.*t8920*t9083;
  t9098 = t9096 + t9097;
  t9121 = t744*t8685*t8621;
  t9122 = t8777*t744*t8768;
  t9125 = t9121 + t9122;
  t9130 = t8777*t744*t8685;
  t9131 = -1.*t744*t8621*t8768;
  t9135 = t9130 + t9131;
  t9141 = -1.*t905*t8686;
  t9142 = t2415*t9125;
  t9143 = t9141 + t9142;
  t9145 = t8837*t9135;
  t9146 = t8825*t9143;
  t9147 = t9145 + t9146;
  t9152 = t8825*t9135;
  t9154 = -1.*t8837*t9143;
  t9155 = t9152 + t9154;
  t9159 = -1.*t8885*t9147;
  t9160 = t8880*t9155;
  t9162 = t9159 + t9160;
  t9167 = t8880*t9147;
  t9168 = t8885*t9155;
  t9169 = t9167 + t9168;
  t9171 = t8920*t9162;
  t9172 = t8916*t9169;
  t9173 = t9171 + t9172;
  t9175 = t8916*t9162;
  t9176 = -1.*t8920*t9169;
  t9177 = t9175 + t9176;
  p_output1[0]=0. + t378*t3913*t744 + t8680*t8772 + t8785*t8791 + t8808*t8820 + t8844*t8850 + t8860*t8867 + t8887*t8890 + t8896*t8905 + t8926*t8934 + t8944*t8947 + t8969*t8972 + t8977*t8980 - 0.7055*(-1.*t8965*t8972 + t8956*t8980) + 0.0184*(t8956*t8972 + t8965*t8980) - 0.1305*(-1.*t2415*t378*t744 + t8820*t905) + var1[0];
  p_output1[1]=0. + t3913*t744*t8767 + t8680*t9011 + t8785*t9020 + t8808*t9037 + t8844*t9041 - 0.1305*(-1.*t2415*t744*t8767 + t9037*t905) + t8860*t9061 + t8887*t9069 + t8896*t9073 + t8926*t9079 + t8944*t9083 + t8969*t9092 + t8977*t9098 - 0.7055*(-1.*t8965*t9092 + t8956*t9098) + 0.0184*(t8956*t9092 + t8965*t9098) + var1[1];
  p_output1[2]=0. + t744*t8680*t8685 - 1.*t3913*t8686 + t744*t8768*t8785 + t8808*t9125 - 0.1305*(t2415*t8686 + t905*t9125) + t8844*t9135 + t8860*t9143 + t8887*t9147 + t8896*t9155 + t8926*t9162 + t8944*t9169 + t8969*t9173 + t8977*t9177 - 0.7055*(-1.*t8965*t9173 + t8956*t9177) + 0.0184*(t8956*t9173 + t8965*t9177) + var1[2];
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
