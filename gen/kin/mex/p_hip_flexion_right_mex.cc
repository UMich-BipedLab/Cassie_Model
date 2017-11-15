/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:36 GMT-05:00
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
  double t864;
  double t7119;
  double t7127;
  double t7125;
  double t7132;
  double t7076;
  double t7082;
  double t7092;
  double t7100;
  double t7112;
  double t7126;
  double t7134;
  double t7135;
  double t7137;
  double t7143;
  double t7144;
  double t7145;
  double t7055;
  double t7150;
  double t7151;
  double t7152;
  double t7155;
  double t7156;
  double t7157;
  double t7159;
  double t7162;
  double t7163;
  double t7164;
  double t7174;
  double t7175;
  double t7176;
  double t7097;
  double t7104;
  double t7109;
  double t7117;
  double t7118;
  double t7138;
  double t7139;
  double t7141;
  double t7142;
  double t7147;
  double t7148;
  double t7149;
  double t7188;
  double t7189;
  double t7190;
  double t7192;
  double t7193;
  double t7194;
  double t7158;
  double t7160;
  double t7161;
  double t7196;
  double t7197;
  double t7198;
  double t7171;
  double t7172;
  double t7173;
  double t7200;
  double t7201;
  double t7202;
  double t7208;
  double t7209;
  double t7210;
  double t7224;
  double t7225;
  double t7226;
  double t7228;
  double t7229;
  double t7230;
  double t7236;
  double t7237;
  double t7238;
  t864 = Cos(var1[3]);
  t7119 = Cos(var1[5]);
  t7127 = Sin(var1[3]);
  t7125 = Sin(var1[4]);
  t7132 = Sin(var1[5]);
  t7076 = Cos(var1[14]);
  t7082 = -1.*t7076;
  t7092 = 1. + t7082;
  t7100 = Sin(var1[14]);
  t7112 = Sin(var1[13]);
  t7126 = t864*t7119*t7125;
  t7134 = t7127*t7132;
  t7135 = t7126 + t7134;
  t7137 = Cos(var1[13]);
  t7143 = -1.*t7119*t7127;
  t7144 = t864*t7125*t7132;
  t7145 = t7143 + t7144;
  t7055 = Cos(var1[4]);
  t7150 = t7112*t7135;
  t7151 = t7137*t7145;
  t7152 = t7150 + t7151;
  t7155 = Cos(var1[15]);
  t7156 = -1.*t7155;
  t7157 = 1. + t7156;
  t7159 = Sin(var1[15]);
  t7162 = t7137*t7135;
  t7163 = -1.*t7112*t7145;
  t7164 = t7162 + t7163;
  t7174 = t7076*t864*t7055;
  t7175 = t7100*t7152;
  t7176 = t7174 + t7175;
  t7097 = -0.049*t7092;
  t7104 = -0.135*t7100;
  t7109 = 0. + t7097 + t7104;
  t7117 = 0.135*t7112;
  t7118 = 0. + t7117;
  t7138 = -1.*t7137;
  t7139 = 1. + t7138;
  t7141 = -0.135*t7139;
  t7142 = 0. + t7141;
  t7147 = -0.135*t7092;
  t7148 = 0.049*t7100;
  t7149 = 0. + t7147 + t7148;
  t7188 = t7119*t7127*t7125;
  t7189 = -1.*t864*t7132;
  t7190 = t7188 + t7189;
  t7192 = t864*t7119;
  t7193 = t7127*t7125*t7132;
  t7194 = t7192 + t7193;
  t7158 = -0.09*t7157;
  t7160 = 0.049*t7159;
  t7161 = 0. + t7158 + t7160;
  t7196 = t7112*t7190;
  t7197 = t7137*t7194;
  t7198 = t7196 + t7197;
  t7171 = -0.049*t7157;
  t7172 = -0.09*t7159;
  t7173 = 0. + t7171 + t7172;
  t7200 = t7137*t7190;
  t7201 = -1.*t7112*t7194;
  t7202 = t7200 + t7201;
  t7208 = t7076*t7055*t7127;
  t7209 = t7100*t7198;
  t7210 = t7208 + t7209;
  t7224 = t7055*t7119*t7112;
  t7225 = t7137*t7055*t7132;
  t7226 = t7224 + t7225;
  t7228 = t7137*t7055*t7119;
  t7229 = -1.*t7055*t7112*t7132;
  t7230 = t7228 + t7229;
  t7236 = -1.*t7076*t7125;
  t7237 = t7100*t7226;
  t7238 = t7236 + t7237;
  p_output1[0]=0. + t7118*t7135 + t7142*t7145 + t7149*t7152 + t7161*t7164 + t7173*t7176 - 0.049*(t7159*t7164 + t7155*t7176) - 0.09*(t7155*t7164 - 1.*t7159*t7176) + t7055*t7109*t864 - 0.135*(t7076*t7152 - 1.*t7055*t7100*t864) + var1[0];
  p_output1[1]=0. + t7055*t7109*t7127 + t7118*t7190 + t7142*t7194 + t7149*t7198 - 0.135*(-1.*t7055*t7100*t7127 + t7076*t7198) + t7161*t7202 + t7173*t7210 - 0.049*(t7159*t7202 + t7155*t7210) - 0.09*(t7155*t7202 - 1.*t7159*t7210) + var1[1];
  p_output1[2]=0. + t7055*t7118*t7119 - 1.*t7109*t7125 + t7055*t7132*t7142 + t7149*t7226 - 0.135*(t7100*t7125 + t7076*t7226) + t7161*t7230 + t7173*t7238 - 0.049*(t7159*t7230 + t7155*t7238) - 0.09*(t7155*t7230 - 1.*t7159*t7238) + var1[2];
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
