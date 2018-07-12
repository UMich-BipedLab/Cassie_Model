/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:33:48 GMT-04:00
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
  double t574;
  double t6506;
  double t6593;
  double t6560;
  double t6772;
  double t1003;
  double t2599;
  double t2702;
  double t3744;
  double t6119;
  double t6579;
  double t6809;
  double t6810;
  double t6819;
  double t6845;
  double t6852;
  double t6854;
  double t609;
  double t6907;
  double t6912;
  double t6925;
  double t6944;
  double t6961;
  double t6980;
  double t6983;
  double t7021;
  double t7043;
  double t7055;
  double t7114;
  double t7120;
  double t7124;
  double t7135;
  double t7138;
  double t7143;
  double t7176;
  double t7199;
  double t7210;
  double t7212;
  double t7237;
  double t7245;
  double t7259;
  double t7283;
  double t7288;
  double t7291;
  double t7303;
  double t7313;
  double t7318;
  double t7319;
  double t7373;
  double t7395;
  double t7404;
  double t7446;
  double t7448;
  double t7449;
  double t7464;
  double t7503;
  double t7516;
  double t7549;
  double t7596;
  double t7616;
  double t7625;
  double t3503;
  double t4656;
  double t5483;
  double t6201;
  double t6207;
  double t6822;
  double t6823;
  double t6842;
  double t6844;
  double t6879;
  double t6881;
  double t6886;
  double t7762;
  double t7780;
  double t7789;
  double t7811;
  double t7826;
  double t7848;
  double t6982;
  double t6990;
  double t6993;
  double t7910;
  double t7926;
  double t7932;
  double t7083;
  double t7089;
  double t7108;
  double t7158;
  double t7185;
  double t7188;
  double t7960;
  double t7963;
  double t7964;
  double t8080;
  double t8087;
  double t8091;
  double t7227;
  double t7234;
  double t7236;
  double t7299;
  double t7304;
  double t7312;
  double t8101;
  double t8115;
  double t8118;
  double t8127;
  double t8154;
  double t8157;
  double t7327;
  double t7335;
  double t7344;
  double t7453;
  double t7483;
  double t7502;
  double t8185;
  double t8197;
  double t8200;
  double t8234;
  double t8237;
  double t8242;
  double t7576;
  double t7581;
  double t7591;
  double t8330;
  double t8338;
  double t8339;
  double t8390;
  double t8393;
  double t8417;
  double t8545;
  double t8550;
  double t8555;
  double t8561;
  double t8569;
  double t8571;
  double t8611;
  double t8615;
  double t8641;
  double t8649;
  double t8654;
  double t8676;
  double t8687;
  double t8701;
  double t8709;
  double t8728;
  double t8730;
  double t8771;
  double t8808;
  double t8825;
  double t8835;
  double t8847;
  double t8851;
  double t8853;
  double t8885;
  double t8888;
  double t8892;
  t574 = Cos(var1[3]);
  t6506 = Cos(var1[5]);
  t6593 = Sin(var1[3]);
  t6560 = Sin(var1[4]);
  t6772 = Sin(var1[5]);
  t1003 = Cos(var1[14]);
  t2599 = -1.*t1003;
  t2702 = 1. + t2599;
  t3744 = Sin(var1[14]);
  t6119 = Sin(var1[13]);
  t6579 = t574*t6506*t6560;
  t6809 = t6593*t6772;
  t6810 = t6579 + t6809;
  t6819 = Cos(var1[13]);
  t6845 = -1.*t6506*t6593;
  t6852 = t574*t6560*t6772;
  t6854 = t6845 + t6852;
  t609 = Cos(var1[4]);
  t6907 = t6119*t6810;
  t6912 = t6819*t6854;
  t6925 = t6907 + t6912;
  t6944 = Cos(var1[15]);
  t6961 = -1.*t6944;
  t6980 = 1. + t6961;
  t6983 = Sin(var1[15]);
  t7021 = t6819*t6810;
  t7043 = -1.*t6119*t6854;
  t7055 = t7021 + t7043;
  t7114 = t1003*t574*t609;
  t7120 = t3744*t6925;
  t7124 = t7114 + t7120;
  t7135 = Cos(var1[16]);
  t7138 = -1.*t7135;
  t7143 = 1. + t7138;
  t7176 = Sin(var1[16]);
  t7199 = t6983*t7055;
  t7210 = t6944*t7124;
  t7212 = t7199 + t7210;
  t7237 = t6944*t7055;
  t7245 = -1.*t6983*t7124;
  t7259 = t7237 + t7245;
  t7283 = Cos(var1[17]);
  t7288 = -1.*t7283;
  t7291 = 1. + t7288;
  t7303 = Sin(var1[17]);
  t7313 = -1.*t7176*t7212;
  t7318 = t7135*t7259;
  t7319 = t7313 + t7318;
  t7373 = t7135*t7212;
  t7395 = t7176*t7259;
  t7404 = t7373 + t7395;
  t7446 = Cos(var1[18]);
  t7448 = -1.*t7446;
  t7449 = 1. + t7448;
  t7464 = Sin(var1[18]);
  t7503 = t7303*t7319;
  t7516 = t7283*t7404;
  t7549 = t7503 + t7516;
  t7596 = t7283*t7319;
  t7616 = -1.*t7303*t7404;
  t7625 = t7596 + t7616;
  t3503 = -0.049*t2702;
  t4656 = -0.135*t3744;
  t5483 = 0. + t3503 + t4656;
  t6201 = 0.135*t6119;
  t6207 = 0. + t6201;
  t6822 = -1.*t6819;
  t6823 = 1. + t6822;
  t6842 = -0.135*t6823;
  t6844 = 0. + t6842;
  t6879 = -0.135*t2702;
  t6881 = 0.049*t3744;
  t6886 = 0. + t6879 + t6881;
  t7762 = t6506*t6593*t6560;
  t7780 = -1.*t574*t6772;
  t7789 = t7762 + t7780;
  t7811 = t574*t6506;
  t7826 = t6593*t6560*t6772;
  t7848 = t7811 + t7826;
  t6982 = -0.09*t6980;
  t6990 = 0.049*t6983;
  t6993 = 0. + t6982 + t6990;
  t7910 = t6119*t7789;
  t7926 = t6819*t7848;
  t7932 = t7910 + t7926;
  t7083 = -0.049*t6980;
  t7089 = -0.09*t6983;
  t7108 = 0. + t7083 + t7089;
  t7158 = -0.049*t7143;
  t7185 = -0.21*t7176;
  t7188 = 0. + t7158 + t7185;
  t7960 = t6819*t7789;
  t7963 = -1.*t6119*t7848;
  t7964 = t7960 + t7963;
  t8080 = t1003*t609*t6593;
  t8087 = t3744*t7932;
  t8091 = t8080 + t8087;
  t7227 = -0.21*t7143;
  t7234 = 0.049*t7176;
  t7236 = 0. + t7227 + t7234;
  t7299 = -0.2707*t7291;
  t7304 = 0.0016*t7303;
  t7312 = 0. + t7299 + t7304;
  t8101 = t6983*t7964;
  t8115 = t6944*t8091;
  t8118 = t8101 + t8115;
  t8127 = t6944*t7964;
  t8154 = -1.*t6983*t8091;
  t8157 = t8127 + t8154;
  t7327 = -0.0016*t7291;
  t7335 = -0.2707*t7303;
  t7344 = 0. + t7327 + t7335;
  t7453 = 0.0184*t7449;
  t7483 = -0.7055*t7464;
  t7502 = 0. + t7453 + t7483;
  t8185 = -1.*t7176*t8118;
  t8197 = t7135*t8157;
  t8200 = t8185 + t8197;
  t8234 = t7135*t8118;
  t8237 = t7176*t8157;
  t8242 = t8234 + t8237;
  t7576 = -0.7055*t7449;
  t7581 = -0.0184*t7464;
  t7591 = 0. + t7576 + t7581;
  t8330 = t7303*t8200;
  t8338 = t7283*t8242;
  t8339 = t8330 + t8338;
  t8390 = t7283*t8200;
  t8393 = -1.*t7303*t8242;
  t8417 = t8390 + t8393;
  t8545 = t609*t6506*t6119;
  t8550 = t6819*t609*t6772;
  t8555 = t8545 + t8550;
  t8561 = t6819*t609*t6506;
  t8569 = -1.*t609*t6119*t6772;
  t8571 = t8561 + t8569;
  t8611 = -1.*t1003*t6560;
  t8615 = t3744*t8555;
  t8641 = t8611 + t8615;
  t8649 = t6983*t8571;
  t8654 = t6944*t8641;
  t8676 = t8649 + t8654;
  t8687 = t6944*t8571;
  t8701 = -1.*t6983*t8641;
  t8709 = t8687 + t8701;
  t8728 = -1.*t7176*t8676;
  t8730 = t7135*t8709;
  t8771 = t8728 + t8730;
  t8808 = t7135*t8676;
  t8825 = t7176*t8709;
  t8835 = t8808 + t8825;
  t8847 = t7303*t8771;
  t8851 = t7283*t8835;
  t8853 = t8847 + t8851;
  t8885 = t7283*t8771;
  t8888 = -1.*t7303*t8835;
  t8892 = t8885 + t8888;
  p_output1[0]=0. + t5483*t574*t609 + t6207*t6810 + t6844*t6854 + t6886*t6925 - 0.1305*(-1.*t3744*t574*t609 + t1003*t6925) + t6993*t7055 + t7108*t7124 + t7188*t7212 + t7236*t7259 + t7312*t7319 + t7344*t7404 + t7502*t7549 + t7591*t7625 - 0.7055*(-1.*t7464*t7549 + t7446*t7625) + 0.0184*(t7446*t7549 + t7464*t7625) + var1[0];
  p_output1[1]=0. + t5483*t609*t6593 + t6207*t7789 + t6844*t7848 + t6886*t7932 - 0.1305*(-1.*t3744*t609*t6593 + t1003*t7932) + t6993*t7964 + t7108*t8091 + t7188*t8118 + t7236*t8157 + t7312*t8200 + t7344*t8242 + t7502*t8339 + t7591*t8417 - 0.7055*(-1.*t7464*t8339 + t7446*t8417) + 0.0184*(t7446*t8339 + t7464*t8417) + var1[1];
  p_output1[2]=0. + t609*t6207*t6506 - 1.*t5483*t6560 + t609*t6772*t6844 + t6886*t8555 - 0.1305*(t3744*t6560 + t1003*t8555) + t6993*t8571 + t7108*t8641 + t7188*t8676 + t7236*t8709 + t7312*t8771 + t7344*t8835 + t7502*t8853 + t7591*t8892 - 0.7055*(-1.*t7464*t8853 + t7446*t8892) + 0.0184*(t7446*t8853 + t7464*t8892) + var1[2];
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
