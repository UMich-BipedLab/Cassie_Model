/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:11:47 GMT-05:00
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
  double t6974;
  double t7033;
  double t7036;
  double t7034;
  double t7037;
  double t6992;
  double t7002;
  double t7011;
  double t7016;
  double t7029;
  double t7035;
  double t7038;
  double t7039;
  double t7041;
  double t7047;
  double t7048;
  double t7049;
  double t6989;
  double t7054;
  double t7055;
  double t7056;
  double t7058;
  double t7059;
  double t7060;
  double t7062;
  double t7065;
  double t7066;
  double t7067;
  double t7077;
  double t7078;
  double t7079;
  double t7081;
  double t7082;
  double t7083;
  double t7087;
  double t7090;
  double t7091;
  double t7092;
  double t7097;
  double t7098;
  double t7099;
  double t7012;
  double t7025;
  double t7026;
  double t7031;
  double t7032;
  double t7042;
  double t7044;
  double t7045;
  double t7046;
  double t7051;
  double t7052;
  double t7053;
  double t7111;
  double t7112;
  double t7113;
  double t7115;
  double t7116;
  double t7117;
  double t7061;
  double t7063;
  double t7064;
  double t7119;
  double t7120;
  double t7121;
  double t7074;
  double t7075;
  double t7076;
  double t7085;
  double t7088;
  double t7089;
  double t7123;
  double t7124;
  double t7125;
  double t7131;
  double t7132;
  double t7133;
  double t7094;
  double t7095;
  double t7096;
  double t7135;
  double t7136;
  double t7137;
  double t7139;
  double t7140;
  double t7141;
  double t7155;
  double t7156;
  double t7157;
  double t7159;
  double t7160;
  double t7161;
  double t7167;
  double t7168;
  double t7169;
  double t7171;
  double t7172;
  double t7173;
  double t7175;
  double t7176;
  double t7177;
  t6974 = Cos(var1[3]);
  t7033 = Cos(var1[5]);
  t7036 = Sin(var1[3]);
  t7034 = Sin(var1[4]);
  t7037 = Sin(var1[5]);
  t6992 = Cos(var1[14]);
  t7002 = -1.*t6992;
  t7011 = 1. + t7002;
  t7016 = Sin(var1[14]);
  t7029 = Sin(var1[13]);
  t7035 = t6974*t7033*t7034;
  t7038 = t7036*t7037;
  t7039 = t7035 + t7038;
  t7041 = Cos(var1[13]);
  t7047 = -1.*t7033*t7036;
  t7048 = t6974*t7034*t7037;
  t7049 = t7047 + t7048;
  t6989 = Cos(var1[4]);
  t7054 = t7029*t7039;
  t7055 = t7041*t7049;
  t7056 = t7054 + t7055;
  t7058 = Cos(var1[15]);
  t7059 = -1.*t7058;
  t7060 = 1. + t7059;
  t7062 = Sin(var1[15]);
  t7065 = t7041*t7039;
  t7066 = -1.*t7029*t7049;
  t7067 = t7065 + t7066;
  t7077 = t6992*t6974*t6989;
  t7078 = t7016*t7056;
  t7079 = t7077 + t7078;
  t7081 = Cos(var1[16]);
  t7082 = -1.*t7081;
  t7083 = 1. + t7082;
  t7087 = Sin(var1[16]);
  t7090 = t7062*t7067;
  t7091 = t7058*t7079;
  t7092 = t7090 + t7091;
  t7097 = t7058*t7067;
  t7098 = -1.*t7062*t7079;
  t7099 = t7097 + t7098;
  t7012 = -0.049*t7011;
  t7025 = -0.135*t7016;
  t7026 = 0. + t7012 + t7025;
  t7031 = 0.135*t7029;
  t7032 = 0. + t7031;
  t7042 = -1.*t7041;
  t7044 = 1. + t7042;
  t7045 = -0.135*t7044;
  t7046 = 0. + t7045;
  t7051 = -0.135*t7011;
  t7052 = 0.049*t7016;
  t7053 = 0. + t7051 + t7052;
  t7111 = t7033*t7036*t7034;
  t7112 = -1.*t6974*t7037;
  t7113 = t7111 + t7112;
  t7115 = t6974*t7033;
  t7116 = t7036*t7034*t7037;
  t7117 = t7115 + t7116;
  t7061 = -0.09*t7060;
  t7063 = 0.049*t7062;
  t7064 = 0. + t7061 + t7063;
  t7119 = t7029*t7113;
  t7120 = t7041*t7117;
  t7121 = t7119 + t7120;
  t7074 = -0.049*t7060;
  t7075 = -0.09*t7062;
  t7076 = 0. + t7074 + t7075;
  t7085 = -0.049*t7083;
  t7088 = -0.21*t7087;
  t7089 = 0. + t7085 + t7088;
  t7123 = t7041*t7113;
  t7124 = -1.*t7029*t7117;
  t7125 = t7123 + t7124;
  t7131 = t6992*t6989*t7036;
  t7132 = t7016*t7121;
  t7133 = t7131 + t7132;
  t7094 = -0.21*t7083;
  t7095 = 0.049*t7087;
  t7096 = 0. + t7094 + t7095;
  t7135 = t7062*t7125;
  t7136 = t7058*t7133;
  t7137 = t7135 + t7136;
  t7139 = t7058*t7125;
  t7140 = -1.*t7062*t7133;
  t7141 = t7139 + t7140;
  t7155 = t6989*t7033*t7029;
  t7156 = t7041*t6989*t7037;
  t7157 = t7155 + t7156;
  t7159 = t7041*t6989*t7033;
  t7160 = -1.*t6989*t7029*t7037;
  t7161 = t7159 + t7160;
  t7167 = -1.*t6992*t7034;
  t7168 = t7016*t7157;
  t7169 = t7167 + t7168;
  t7171 = t7062*t7161;
  t7172 = t7058*t7169;
  t7173 = t7171 + t7172;
  t7175 = t7058*t7161;
  t7176 = -1.*t7062*t7169;
  t7177 = t7175 + t7176;
  p_output1[0]=0. + t6974*t6989*t7026 + t7032*t7039 + t7046*t7049 + t7053*t7056 - 0.1305*(-1.*t6974*t6989*t7016 + t6992*t7056) + t7064*t7067 + t7076*t7079 + t7089*t7092 + t7096*t7099 - 0.2707*(-1.*t7087*t7092 + t7081*t7099) - 0.0016*(t7081*t7092 + t7087*t7099) + var1[0];
  p_output1[1]=0. + t6989*t7026*t7036 + t7032*t7113 + t7046*t7117 + t7053*t7121 - 0.1305*(-1.*t6989*t7016*t7036 + t6992*t7121) + t7064*t7125 + t7076*t7133 + t7089*t7137 + t7096*t7141 - 0.2707*(-1.*t7087*t7137 + t7081*t7141) - 0.0016*(t7081*t7137 + t7087*t7141) + var1[1];
  p_output1[2]=0. + t6989*t7032*t7033 - 1.*t7026*t7034 + t6989*t7037*t7046 + t7053*t7157 - 0.1305*(t7016*t7034 + t6992*t7157) + t7064*t7161 + t7076*t7169 + t7089*t7173 + t7096*t7177 - 0.2707*(-1.*t7087*t7173 + t7081*t7177) - 0.0016*(t7081*t7173 + t7087*t7177) + var1[2];
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

#include "p_knee_to_shin_right_mex.hh"

namespace SymExpression
{

void p_knee_to_shin_right_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
