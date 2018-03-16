/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 11:08:18 GMT-04:00
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
  double t7069;
  double t7130;
  double t7137;
  double t7131;
  double t7138;
  double t7089;
  double t7101;
  double t7109;
  double t7112;
  double t7123;
  double t7132;
  double t7139;
  double t7140;
  double t7142;
  double t7147;
  double t7148;
  double t7149;
  double t7088;
  double t7155;
  double t7156;
  double t7157;
  double t7159;
  double t7160;
  double t7161;
  double t7164;
  double t7167;
  double t7168;
  double t7169;
  double t7178;
  double t7179;
  double t7180;
  double t7110;
  double t7113;
  double t7114;
  double t7124;
  double t7126;
  double t7143;
  double t7144;
  double t7145;
  double t7146;
  double t7152;
  double t7153;
  double t7154;
  double t7192;
  double t7193;
  double t7194;
  double t7196;
  double t7197;
  double t7198;
  double t7162;
  double t7165;
  double t7166;
  double t7200;
  double t7201;
  double t7202;
  double t7175;
  double t7176;
  double t7177;
  double t7204;
  double t7205;
  double t7206;
  double t7212;
  double t7213;
  double t7214;
  double t7228;
  double t7229;
  double t7230;
  double t7232;
  double t7233;
  double t7234;
  double t7240;
  double t7241;
  double t7242;
  t7069 = Cos(var1[3]);
  t7130 = Cos(var1[5]);
  t7137 = Sin(var1[3]);
  t7131 = Sin(var1[4]);
  t7138 = Sin(var1[5]);
  t7089 = Cos(var1[14]);
  t7101 = -1.*t7089;
  t7109 = 1. + t7101;
  t7112 = Sin(var1[14]);
  t7123 = Sin(var1[13]);
  t7132 = t7069*t7130*t7131;
  t7139 = t7137*t7138;
  t7140 = t7132 + t7139;
  t7142 = Cos(var1[13]);
  t7147 = -1.*t7130*t7137;
  t7148 = t7069*t7131*t7138;
  t7149 = t7147 + t7148;
  t7088 = Cos(var1[4]);
  t7155 = t7123*t7140;
  t7156 = t7142*t7149;
  t7157 = t7155 + t7156;
  t7159 = Cos(var1[15]);
  t7160 = -1.*t7159;
  t7161 = 1. + t7160;
  t7164 = Sin(var1[15]);
  t7167 = t7142*t7140;
  t7168 = -1.*t7123*t7149;
  t7169 = t7167 + t7168;
  t7178 = t7089*t7069*t7088;
  t7179 = t7112*t7157;
  t7180 = t7178 + t7179;
  t7110 = -0.049*t7109;
  t7113 = -0.135*t7112;
  t7114 = 0. + t7110 + t7113;
  t7124 = 0.135*t7123;
  t7126 = 0. + t7124;
  t7143 = -1.*t7142;
  t7144 = 1. + t7143;
  t7145 = -0.135*t7144;
  t7146 = 0. + t7145;
  t7152 = -0.135*t7109;
  t7153 = 0.049*t7112;
  t7154 = 0. + t7152 + t7153;
  t7192 = t7130*t7137*t7131;
  t7193 = -1.*t7069*t7138;
  t7194 = t7192 + t7193;
  t7196 = t7069*t7130;
  t7197 = t7137*t7131*t7138;
  t7198 = t7196 + t7197;
  t7162 = -0.09*t7161;
  t7165 = 0.049*t7164;
  t7166 = 0. + t7162 + t7165;
  t7200 = t7123*t7194;
  t7201 = t7142*t7198;
  t7202 = t7200 + t7201;
  t7175 = -0.049*t7161;
  t7176 = -0.09*t7164;
  t7177 = 0. + t7175 + t7176;
  t7204 = t7142*t7194;
  t7205 = -1.*t7123*t7198;
  t7206 = t7204 + t7205;
  t7212 = t7089*t7088*t7137;
  t7213 = t7112*t7202;
  t7214 = t7212 + t7213;
  t7228 = t7088*t7130*t7123;
  t7229 = t7142*t7088*t7138;
  t7230 = t7228 + t7229;
  t7232 = t7142*t7088*t7130;
  t7233 = -1.*t7088*t7123*t7138;
  t7234 = t7232 + t7233;
  t7240 = -1.*t7089*t7131;
  t7241 = t7112*t7230;
  t7242 = t7240 + t7241;
  p_output1[0]=0. + t7069*t7088*t7114 + t7126*t7140 + t7146*t7149 + t7154*t7157 - 0.135*(-1.*t7069*t7088*t7112 + t7089*t7157) + t7166*t7169 + t7177*t7180 - 0.049*(t7164*t7169 + t7159*t7180) - 0.09*(t7159*t7169 - 1.*t7164*t7180) + var1[0];
  p_output1[1]=0. + t7088*t7114*t7137 + t7126*t7194 + t7146*t7198 + t7154*t7202 - 0.135*(-1.*t7088*t7112*t7137 + t7089*t7202) + t7166*t7206 + t7177*t7214 - 0.049*(t7164*t7206 + t7159*t7214) - 0.09*(t7159*t7206 - 1.*t7164*t7214) + var1[1];
  p_output1[2]=0. + t7088*t7126*t7130 - 1.*t7114*t7131 + t7088*t7138*t7146 + t7154*t7230 - 0.135*(t7112*t7131 + t7089*t7230) + t7166*t7234 + t7177*t7242 - 0.049*(t7164*t7234 + t7159*t7242) - 0.09*(t7159*t7234 - 1.*t7164*t7242) + var1[2];
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

#include "p_hip_flexion_right_mex.hh"

namespace SymExpression
{

void p_hip_flexion_right_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
