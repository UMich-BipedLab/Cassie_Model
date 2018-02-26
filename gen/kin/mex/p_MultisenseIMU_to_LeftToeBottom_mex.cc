/*
 * Automatically Generated from Mathematica.
 * Mon 26 Feb 2018 15:42:40 GMT-05:00
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
  double t556;
  double t1199;
  double t3119;
  double t5980;
  double t5997;
  double t6016;
  double t6025;
  double t6042;
  double t6073;
  double t6077;
  double t6083;
  double t6087;
  double t6103;
  double t6106;
  double t6107;
  double t6127;
  double t6128;
  double t6131;
  double t6136;
  double t6137;
  double t6139;
  double t6145;
  double t6149;
  double t6150;
  double t6151;
  double t6158;
  double t6159;
  double t6160;
  double t6164;
  double t6165;
  double t6168;
  double t6173;
  double t6176;
  double t6177;
  double t6178;
  double t6185;
  double t6186;
  double t6187;
  double t6189;
  double t6190;
  double t6191;
  double t6193;
  double t6196;
  double t6197;
  double t6198;
  double t6203;
  double t6204;
  double t6205;
  double t1624;
  double t1719;
  double t2067;
  double t3807;
  double t5913;
  double t6022;
  double t6026;
  double t6027;
  double t6046;
  double t6055;
  double t6056;
  double t6086;
  double t6092;
  double t6102;
  double t6115;
  double t6116;
  double t6117;
  double t6143;
  double t6146;
  double t6148;
  double t6223;
  double t6224;
  double t6225;
  double t6227;
  double t6228;
  double t6229;
  double t6154;
  double t6155;
  double t6156;
  double t6171;
  double t6174;
  double t6175;
  double t6231;
  double t6232;
  double t6233;
  double t6235;
  double t6236;
  double t6237;
  double t6181;
  double t6182;
  double t6183;
  double t6192;
  double t6194;
  double t6195;
  double t6239;
  double t6240;
  double t6241;
  double t6243;
  double t6244;
  double t6245;
  double t6200;
  double t6201;
  double t6202;
  double t6247;
  double t6248;
  double t6249;
  double t6251;
  double t6252;
  double t6253;
  double t6269;
  double t6270;
  double t6271;
  double t6273;
  double t6274;
  double t6275;
  double t6277;
  double t6278;
  double t6279;
  double t6281;
  double t6282;
  double t6283;
  double t6285;
  double t6286;
  double t6287;
  double t6289;
  double t6290;
  double t6291;
  t556 = Sin(var1[0]);
  t1199 = Cos(var1[1]);
  t3119 = Sin(var1[1]);
  t5980 = Cos(var1[2]);
  t5997 = -1.*t5980;
  t6016 = 1. + t5997;
  t6025 = Sin(var1[2]);
  t6042 = Cos(var1[0]);
  t6073 = Cos(var1[3]);
  t6077 = -1.*t6073;
  t6083 = 1. + t6077;
  t6087 = Sin(var1[3]);
  t6103 = t5980*t556*t3119;
  t6106 = t6042*t6025;
  t6107 = t6103 + t6106;
  t6127 = t6042*t5980;
  t6128 = -1.*t556*t3119*t6025;
  t6131 = t6127 + t6128;
  t6136 = Cos(var1[4]);
  t6137 = -1.*t6136;
  t6139 = 1. + t6137;
  t6145 = Sin(var1[4]);
  t6149 = -1.*t6087*t6107;
  t6150 = t6073*t6131;
  t6151 = t6149 + t6150;
  t6158 = t6073*t6107;
  t6159 = t6087*t6131;
  t6160 = t6158 + t6159;
  t6164 = Cos(var1[5]);
  t6165 = -1.*t6164;
  t6168 = 1. + t6165;
  t6173 = Sin(var1[5]);
  t6176 = t6145*t6151;
  t6177 = t6136*t6160;
  t6178 = t6176 + t6177;
  t6185 = t6136*t6151;
  t6186 = -1.*t6145*t6160;
  t6187 = t6185 + t6186;
  t6189 = Cos(var1[6]);
  t6190 = -1.*t6189;
  t6191 = 1. + t6190;
  t6193 = Sin(var1[6]);
  t6196 = -1.*t6173*t6178;
  t6197 = t6164*t6187;
  t6198 = t6196 + t6197;
  t6203 = t6164*t6178;
  t6204 = t6173*t6187;
  t6205 = t6203 + t6204;
  t1624 = -1.*t1199;
  t1719 = 1. + t1624;
  t2067 = 0.135*t1719;
  t3807 = 0.049*t3119;
  t5913 = 0. + t2067 + t3807;
  t6022 = -0.049*t6016;
  t6026 = -0.09*t6025;
  t6027 = 0. + t6022 + t6026;
  t6046 = -0.09*t6016;
  t6055 = 0.049*t6025;
  t6056 = 0. + t6046 + t6055;
  t6086 = -0.049*t6083;
  t6092 = -0.21*t6087;
  t6102 = 0. + t6086 + t6092;
  t6115 = -0.21*t6083;
  t6116 = 0.049*t6087;
  t6117 = 0. + t6115 + t6116;
  t6143 = -0.2707*t6139;
  t6146 = 0.0016*t6145;
  t6148 = 0. + t6143 + t6146;
  t6223 = t6042*t5980*t3119;
  t6224 = -1.*t556*t6025;
  t6225 = t6223 + t6224;
  t6227 = -1.*t5980*t556;
  t6228 = -1.*t6042*t3119*t6025;
  t6229 = t6227 + t6228;
  t6154 = -0.0016*t6139;
  t6155 = -0.2707*t6145;
  t6156 = 0. + t6154 + t6155;
  t6171 = 0.0184*t6168;
  t6174 = -0.7055*t6173;
  t6175 = 0. + t6171 + t6174;
  t6231 = -1.*t6087*t6225;
  t6232 = t6073*t6229;
  t6233 = t6231 + t6232;
  t6235 = t6073*t6225;
  t6236 = t6087*t6229;
  t6237 = t6235 + t6236;
  t6181 = -0.7055*t6168;
  t6182 = -0.0184*t6173;
  t6183 = 0. + t6181 + t6182;
  t6192 = -1.1135*t6191;
  t6194 = 0.0216*t6193;
  t6195 = 0. + t6192 + t6194;
  t6239 = t6145*t6233;
  t6240 = t6136*t6237;
  t6241 = t6239 + t6240;
  t6243 = t6136*t6233;
  t6244 = -1.*t6145*t6237;
  t6245 = t6243 + t6244;
  t6200 = -0.0216*t6191;
  t6201 = -1.1135*t6193;
  t6202 = 0. + t6200 + t6201;
  t6247 = -1.*t6173*t6241;
  t6248 = t6164*t6245;
  t6249 = t6247 + t6248;
  t6251 = t6164*t6241;
  t6252 = t6173*t6245;
  t6253 = t6251 + t6252;
  t6269 = -1.*t1199*t5980*t6087;
  t6270 = -1.*t6073*t1199*t6025;
  t6271 = t6269 + t6270;
  t6273 = t6073*t1199*t5980;
  t6274 = -1.*t1199*t6087*t6025;
  t6275 = t6273 + t6274;
  t6277 = t6145*t6271;
  t6278 = t6136*t6275;
  t6279 = t6277 + t6278;
  t6281 = t6136*t6271;
  t6282 = -1.*t6145*t6275;
  t6283 = t6281 + t6282;
  t6285 = -1.*t6173*t6279;
  t6286 = t6164*t6283;
  t6287 = t6285 + t6286;
  t6289 = t6164*t6279;
  t6290 = t6173*t6283;
  t6291 = t6289 + t6290;
  p_output1[0]=0.24925 + 0.135*t556 - 0.1305*t1199*t556 - 1.*t556*t5913 - 1.*t3119*t556*t6027 - 1.*t6042*t6056 - 1.*t6102*t6107 - 1.*t6117*t6131 - 1.*t6148*t6151 - 1.*t6156*t6160 - 1.*t6175*t6178 - 1.*t6183*t6187 - 1.*t6195*t6198 - 1.*t6202*t6205 - 0.0306*(t6193*t6198 + t6189*t6205) + 1.1312*(t6189*t6198 - 1.*t6193*t6205);
  p_output1[1]=-0.0302 + 0.135*(1. - 1.*t6042) + 0.1305*t1199*t6042 + t5913*t6042 + t3119*t6027*t6042 - 1.*t556*t6056 + t6102*t6225 + t6117*t6229 + t6148*t6233 + t6156*t6237 + t6175*t6241 + t6183*t6245 + t6195*t6249 + t6202*t6253 + 0.0306*(t6193*t6249 + t6189*t6253) - 1.1312*(t6189*t6249 - 1.*t6193*t6253);
  p_output1[2]=-0.047 - 0.049*t1719 + 0.004500000000000004*t3119 + t1199*t6027 + t1199*t5980*t6102 - 1.*t1199*t6025*t6117 + t6148*t6271 + t6156*t6275 + t6175*t6279 + t6183*t6283 + t6195*t6287 + t6202*t6291 + 0.0306*(t6193*t6287 + t6189*t6291) - 1.1312*(t6189*t6287 - 1.*t6193*t6291);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "p_MultisenseIMU_to_LeftToeBottom_mex.hh"

namespace SymExpression
{

void p_MultisenseIMU_to_LeftToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
