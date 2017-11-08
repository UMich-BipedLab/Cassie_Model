/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:13:03 GMT-05:00
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
  double t2406;
  double t1039;
  double t3093;
  double t1046;
  double t3113;
  double t274;
  double t2032;
  double t3114;
  double t3473;
  double t4900;
  double t4930;
  double t5156;
  double t5187;
  double t5219;
  double t5223;
  double t5227;
  double t5237;
  double t5200;
  double t5206;
  double t5212;
  double t6764;
  double t8726;
  double t8727;
  double t8733;
  double t8737;
  double t8719;
  double t8721;
  double t8722;
  double t8743;
  double t8745;
  double t8746;
  double t8763;
  double t8766;
  double t8768;
  double t8774;
  double t8781;
  double t8782;
  double t8786;
  double t8794;
  double t8795;
  double t8796;
  double t8801;
  double t8802;
  double t8804;
  double t8808;
  double t8812;
  double t8816;
  double t8819;
  double t8833;
  double t8834;
  double t8835;
  double t8837;
  double t8840;
  double t8841;
  double t8850;
  double t8854;
  double t8855;
  double t8856;
  double t8868;
  double t8873;
  double t8874;
  double t8878;
  double t8880;
  double t8881;
  double t8886;
  double t8890;
  double t8894;
  double t8895;
  double t8909;
  double t8911;
  double t8912;
  double t303;
  double t446;
  double t453;
  double t647;
  double t5188;
  double t5189;
  double t8935;
  double t8938;
  double t8939;
  double t8945;
  double t8947;
  double t8953;
  double t5231;
  double t5405;
  double t5774;
  double t8505;
  double t8528;
  double t8546;
  double t8955;
  double t8956;
  double t8958;
  double t8735;
  double t8740;
  double t8741;
  double t8750;
  double t8754;
  double t8756;
  double t8769;
  double t8776;
  double t8777;
  double t8972;
  double t8978;
  double t8980;
  double t8992;
  double t9016;
  double t9026;
  double t8788;
  double t8790;
  double t8791;
  double t8806;
  double t8809;
  double t8810;
  double t9036;
  double t9040;
  double t9042;
  double t9052;
  double t9057;
  double t9061;
  double t8824;
  double t8825;
  double t8828;
  double t8844;
  double t8852;
  double t8853;
  double t9067;
  double t9069;
  double t9071;
  double t9075;
  double t9078;
  double t9080;
  double t8861;
  double t8862;
  double t8867;
  double t8884;
  double t8887;
  double t8889;
  double t9085;
  double t9087;
  double t9088;
  double t9093;
  double t9094;
  double t9099;
  double t8901;
  double t8902;
  double t8905;
  double t9103;
  double t9104;
  double t9107;
  double t9111;
  double t9112;
  double t9113;
  double t9140;
  double t9141;
  double t9145;
  double t9162;
  double t9163;
  double t9164;
  double t9168;
  double t9171;
  double t9172;
  double t9178;
  double t9180;
  double t9183;
  double t9185;
  double t9187;
  double t9191;
  double t9195;
  double t9197;
  double t9200;
  double t9206;
  double t9210;
  double t9211;
  double t9213;
  double t9214;
  double t9215;
  double t9219;
  double t9220;
  double t9223;
  double t9225;
  double t9227;
  double t9233;
  double t9236;
  double t9237;
  double t9238;
  t2406 = Cos(var1[3]);
  t1039 = Cos(var1[5]);
  t3093 = Sin(var1[4]);
  t1046 = Sin(var1[3]);
  t3113 = Sin(var1[5]);
  t274 = Cos(var1[6]);
  t2032 = -1.*t1039*t1046;
  t3114 = t2406*t3093*t3113;
  t3473 = t2032 + t3114;
  t4900 = t2406*t1039*t3093;
  t4930 = t1046*t3113;
  t5156 = t4900 + t4930;
  t5187 = Sin(var1[6]);
  t5219 = Cos(var1[7]);
  t5223 = -1.*t5219;
  t5227 = 1. + t5223;
  t5237 = Sin(var1[7]);
  t5200 = t274*t3473;
  t5206 = t5156*t5187;
  t5212 = t5200 + t5206;
  t6764 = Cos(var1[4]);
  t8726 = Cos(var1[8]);
  t8727 = -1.*t8726;
  t8733 = 1. + t8727;
  t8737 = Sin(var1[8]);
  t8719 = t2406*t6764*t5219;
  t8721 = t5212*t5237;
  t8722 = t8719 + t8721;
  t8743 = t274*t5156;
  t8745 = -1.*t3473*t5187;
  t8746 = t8743 + t8745;
  t8763 = Cos(var1[9]);
  t8766 = -1.*t8763;
  t8768 = 1. + t8766;
  t8774 = Sin(var1[9]);
  t8781 = t8726*t8722;
  t8782 = t8746*t8737;
  t8786 = t8781 + t8782;
  t8794 = t8726*t8746;
  t8795 = -1.*t8722*t8737;
  t8796 = t8794 + t8795;
  t8801 = Cos(var1[10]);
  t8802 = -1.*t8801;
  t8804 = 1. + t8802;
  t8808 = Sin(var1[10]);
  t8812 = -1.*t8774*t8786;
  t8816 = t8763*t8796;
  t8819 = t8812 + t8816;
  t8833 = t8763*t8786;
  t8834 = t8774*t8796;
  t8835 = t8833 + t8834;
  t8837 = Cos(var1[11]);
  t8840 = -1.*t8837;
  t8841 = 1. + t8840;
  t8850 = Sin(var1[11]);
  t8854 = t8808*t8819;
  t8855 = t8801*t8835;
  t8856 = t8854 + t8855;
  t8868 = t8801*t8819;
  t8873 = -1.*t8808*t8835;
  t8874 = t8868 + t8873;
  t8878 = Cos(var1[12]);
  t8880 = -1.*t8878;
  t8881 = 1. + t8880;
  t8886 = Sin(var1[12]);
  t8890 = -1.*t8850*t8856;
  t8894 = t8837*t8874;
  t8895 = t8890 + t8894;
  t8909 = t8837*t8856;
  t8911 = t8850*t8874;
  t8912 = t8909 + t8911;
  t303 = -1.*t274;
  t446 = 1. + t303;
  t453 = 0.135*t446;
  t647 = 0. + t453;
  t5188 = -0.135*t5187;
  t5189 = 0. + t5188;
  t8935 = t2406*t1039;
  t8938 = t1046*t3093*t3113;
  t8939 = t8935 + t8938;
  t8945 = t1039*t1046*t3093;
  t8947 = -1.*t2406*t3113;
  t8953 = t8945 + t8947;
  t5231 = 0.135*t5227;
  t5405 = 0.049*t5237;
  t5774 = 0. + t5231 + t5405;
  t8505 = -0.049*t5227;
  t8528 = 0.135*t5237;
  t8546 = 0. + t8505 + t8528;
  t8955 = t274*t8939;
  t8956 = t8953*t5187;
  t8958 = t8955 + t8956;
  t8735 = -0.049*t8733;
  t8740 = -0.09*t8737;
  t8741 = 0. + t8735 + t8740;
  t8750 = -0.09*t8733;
  t8754 = 0.049*t8737;
  t8756 = 0. + t8750 + t8754;
  t8769 = -0.049*t8768;
  t8776 = -0.21*t8774;
  t8777 = 0. + t8769 + t8776;
  t8972 = t6764*t5219*t1046;
  t8978 = t8958*t5237;
  t8980 = t8972 + t8978;
  t8992 = t274*t8953;
  t9016 = -1.*t8939*t5187;
  t9026 = t8992 + t9016;
  t8788 = -0.21*t8768;
  t8790 = 0.049*t8774;
  t8791 = 0. + t8788 + t8790;
  t8806 = -0.2707*t8804;
  t8809 = 0.0016*t8808;
  t8810 = 0. + t8806 + t8809;
  t9036 = t8726*t8980;
  t9040 = t9026*t8737;
  t9042 = t9036 + t9040;
  t9052 = t8726*t9026;
  t9057 = -1.*t8980*t8737;
  t9061 = t9052 + t9057;
  t8824 = -0.0016*t8804;
  t8825 = -0.2707*t8808;
  t8828 = 0. + t8824 + t8825;
  t8844 = 0.0184*t8841;
  t8852 = -0.7055*t8850;
  t8853 = 0. + t8844 + t8852;
  t9067 = -1.*t8774*t9042;
  t9069 = t8763*t9061;
  t9071 = t9067 + t9069;
  t9075 = t8763*t9042;
  t9078 = t8774*t9061;
  t9080 = t9075 + t9078;
  t8861 = -0.7055*t8841;
  t8862 = -0.0184*t8850;
  t8867 = 0. + t8861 + t8862;
  t8884 = -1.1135*t8881;
  t8887 = 0.0216*t8886;
  t8889 = 0. + t8884 + t8887;
  t9085 = t8808*t9071;
  t9087 = t8801*t9080;
  t9088 = t9085 + t9087;
  t9093 = t8801*t9071;
  t9094 = -1.*t8808*t9080;
  t9099 = t9093 + t9094;
  t8901 = -0.0216*t8881;
  t8902 = -1.1135*t8886;
  t8905 = 0. + t8901 + t8902;
  t9103 = -1.*t8850*t9088;
  t9104 = t8837*t9099;
  t9107 = t9103 + t9104;
  t9111 = t8837*t9088;
  t9112 = t8850*t9099;
  t9113 = t9111 + t9112;
  t9140 = t6764*t274*t3113;
  t9141 = t6764*t1039*t5187;
  t9145 = t9140 + t9141;
  t9162 = -1.*t5219*t3093;
  t9163 = t9145*t5237;
  t9164 = t9162 + t9163;
  t9168 = t6764*t1039*t274;
  t9171 = -1.*t6764*t3113*t5187;
  t9172 = t9168 + t9171;
  t9178 = t8726*t9164;
  t9180 = t9172*t8737;
  t9183 = t9178 + t9180;
  t9185 = t8726*t9172;
  t9187 = -1.*t9164*t8737;
  t9191 = t9185 + t9187;
  t9195 = -1.*t8774*t9183;
  t9197 = t8763*t9191;
  t9200 = t9195 + t9197;
  t9206 = t8763*t9183;
  t9210 = t8774*t9191;
  t9211 = t9206 + t9210;
  t9213 = t8808*t9200;
  t9214 = t8801*t9211;
  t9215 = t9213 + t9214;
  t9219 = t8801*t9200;
  t9220 = -1.*t8808*t9211;
  t9223 = t9219 + t9220;
  t9225 = -1.*t8850*t9215;
  t9227 = t8837*t9223;
  t9233 = t9225 + t9227;
  t9236 = t8837*t9215;
  t9237 = t8850*t9223;
  t9238 = t9236 + t9237;
  p_output1[0]=0. + t5156*t5189 + t5212*t5774 + t3473*t647 + 0.1305*(t5212*t5219 - 1.*t2406*t5237*t6764) + t2406*t6764*t8546 + t8722*t8741 + t8746*t8756 + t8777*t8786 + t8791*t8796 + t8810*t8819 + t8828*t8835 + t8853*t8856 + t8867*t8874 + t8889*t8895 + t8905*t8912 + 0.0306*(t8886*t8895 + t8878*t8912) - 1.1312*(t8878*t8895 - 1.*t8886*t8912) + var1[0];
  p_output1[1]=0. + t1046*t6764*t8546 + t647*t8939 + t5189*t8953 + t5774*t8958 + 0.1305*(-1.*t1046*t5237*t6764 + t5219*t8958) + t8741*t8980 + t8756*t9026 + t8777*t9042 + t8791*t9061 + t8810*t9071 + t8828*t9080 + t8853*t9088 + t8867*t9099 + t8889*t9107 + t8905*t9113 + 0.0306*(t8886*t9107 + t8878*t9113) - 1.1312*(t8878*t9107 - 1.*t8886*t9113) + var1[1];
  p_output1[2]=0. + t1039*t5189*t6764 + t3113*t647*t6764 - 1.*t3093*t8546 + t5774*t9145 + 0.1305*(t3093*t5237 + t5219*t9145) + t8741*t9164 + t8756*t9172 + t8777*t9183 + t8791*t9191 + t8810*t9200 + t8828*t9211 + t8853*t9215 + t8867*t9223 + t8889*t9233 + t8905*t9238 + 0.0306*(t8886*t9233 + t8878*t9238) - 1.1312*(t8878*t9233 - 1.*t8886*t9238) + var1[2];
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

#include "p_LeftToeBottom_mex.hh"

namespace SymExpression
{

void p_LeftToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
