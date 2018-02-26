/*
 * Automatically Generated from Mathematica.
 * Mon 26 Feb 2018 15:42:32 GMT-05:00
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
  double t77;
  double t4972;
  double t4977;
  double t5041;
  double t5044;
  double t5050;
  double t5096;
  double t5118;
  double t5120;
  double t5130;
  double t5133;
  double t5136;
  double t5139;
  double t5145;
  double t5152;
  double t5153;
  double t5156;
  double t5158;
  double t5159;
  double t5161;
  double t5163;
  double t5168;
  double t5170;
  double t5171;
  double t5177;
  double t5180;
  double t5182;
  double t5184;
  double t5185;
  double t5186;
  double t5189;
  double t5192;
  double t5194;
  double t5195;
  double t5200;
  double t5201;
  double t5202;
  double t5213;
  double t2081;
  double t4560;
  double t5082;
  double t5085;
  double t5086;
  double t5087;
  double t5103;
  double t5107;
  double t5047;
  double t5054;
  double t5059;
  double t5223;
  double t5111;
  double t5112;
  double t5116;
  double t5132;
  double t5134;
  double t5135;
  double t5228;
  double t5229;
  double t5230;
  double t5232;
  double t5233;
  double t5234;
  double t5148;
  double t5149;
  double t5151;
  double t5162;
  double t5164;
  double t5165;
  double t5236;
  double t5237;
  double t5238;
  double t5240;
  double t5241;
  double t5242;
  double t5173;
  double t5174;
  double t5175;
  double t5187;
  double t5190;
  double t5191;
  double t5244;
  double t5245;
  double t5246;
  double t5248;
  double t5249;
  double t5250;
  double t5197;
  double t5198;
  double t5199;
  double t5252;
  double t5253;
  double t5254;
  double t5256;
  double t5257;
  double t5258;
  double t5218;
  double t5219;
  double t5220;
  double t5224;
  double t5225;
  double t5226;
  double t5274;
  double t5275;
  double t5276;
  double t5278;
  double t5279;
  double t5280;
  double t5282;
  double t5283;
  double t5284;
  double t5286;
  double t5287;
  double t5288;
  double t5290;
  double t5291;
  double t5292;
  double t5294;
  double t5295;
  double t5296;
  double t5298;
  double t5299;
  double t5300;
  double t5302;
  double t5303;
  double t5304;
  t77 = Cos(var1[1]);
  t4972 = Cos(var1[2]);
  t4977 = Cos(var1[3]);
  t5041 = -1.*t4977;
  t5044 = 1. + t5041;
  t5050 = Sin(var1[3]);
  t5096 = Sin(var1[2]);
  t5118 = Cos(var1[4]);
  t5120 = -1.*t5118;
  t5130 = 1. + t5120;
  t5133 = Sin(var1[4]);
  t5136 = -1.*t77*t4972*t5050;
  t5139 = -1.*t4977*t77*t5096;
  t5145 = t5136 + t5139;
  t5152 = t4977*t77*t4972;
  t5153 = -1.*t77*t5050*t5096;
  t5156 = t5152 + t5153;
  t5158 = Cos(var1[5]);
  t5159 = -1.*t5158;
  t5161 = 1. + t5159;
  t5163 = Sin(var1[5]);
  t5168 = t5133*t5145;
  t5170 = t5118*t5156;
  t5171 = t5168 + t5170;
  t5177 = t5118*t5145;
  t5180 = -1.*t5133*t5156;
  t5182 = t5177 + t5180;
  t5184 = Cos(var1[6]);
  t5185 = -1.*t5184;
  t5186 = 1. + t5185;
  t5189 = Sin(var1[6]);
  t5192 = -1.*t5163*t5171;
  t5194 = t5158*t5182;
  t5195 = t5192 + t5194;
  t5200 = t5158*t5171;
  t5201 = t5163*t5182;
  t5202 = t5200 + t5201;
  t5213 = Cos(var1[0]);
  t2081 = -1.*t77;
  t4560 = 1. + t2081;
  t5082 = Sin(var1[1]);
  t5085 = -1.*t4972;
  t5086 = 1. + t5085;
  t5087 = -0.049*t5086;
  t5103 = -0.09*t5096;
  t5107 = 0. + t5087 + t5103;
  t5047 = -0.049*t5044;
  t5054 = -0.21*t5050;
  t5059 = 0. + t5047 + t5054;
  t5223 = Sin(var1[0]);
  t5111 = -0.21*t5044;
  t5112 = 0.049*t5050;
  t5116 = 0. + t5111 + t5112;
  t5132 = -0.2707*t5130;
  t5134 = 0.0016*t5133;
  t5135 = 0. + t5132 + t5134;
  t5228 = t5213*t4972*t5082;
  t5229 = -1.*t5223*t5096;
  t5230 = t5228 + t5229;
  t5232 = -1.*t4972*t5223;
  t5233 = -1.*t5213*t5082*t5096;
  t5234 = t5232 + t5233;
  t5148 = -0.0016*t5130;
  t5149 = -0.2707*t5133;
  t5151 = 0. + t5148 + t5149;
  t5162 = 0.0184*t5161;
  t5164 = -0.7055*t5163;
  t5165 = 0. + t5162 + t5164;
  t5236 = -1.*t5050*t5230;
  t5237 = t4977*t5234;
  t5238 = t5236 + t5237;
  t5240 = t4977*t5230;
  t5241 = t5050*t5234;
  t5242 = t5240 + t5241;
  t5173 = -0.7055*t5161;
  t5174 = -0.0184*t5163;
  t5175 = 0. + t5173 + t5174;
  t5187 = -1.1135*t5186;
  t5190 = 0.0216*t5189;
  t5191 = 0. + t5187 + t5190;
  t5244 = t5133*t5238;
  t5245 = t5118*t5242;
  t5246 = t5244 + t5245;
  t5248 = t5118*t5238;
  t5249 = -1.*t5133*t5242;
  t5250 = t5248 + t5249;
  t5197 = -0.0216*t5186;
  t5198 = -1.1135*t5189;
  t5199 = 0. + t5197 + t5198;
  t5252 = -1.*t5163*t5246;
  t5253 = t5158*t5250;
  t5254 = t5252 + t5253;
  t5256 = t5158*t5246;
  t5257 = t5163*t5250;
  t5258 = t5256 + t5257;
  t5218 = 0.135*t4560;
  t5219 = 0.049*t5082;
  t5220 = 0. + t5218 + t5219;
  t5224 = -0.09*t5086;
  t5225 = 0.049*t5096;
  t5226 = 0. + t5224 + t5225;
  t5274 = t4972*t5223*t5082;
  t5275 = t5213*t5096;
  t5276 = t5274 + t5275;
  t5278 = t5213*t4972;
  t5279 = -1.*t5223*t5082*t5096;
  t5280 = t5278 + t5279;
  t5282 = -1.*t5050*t5276;
  t5283 = t4977*t5280;
  t5284 = t5282 + t5283;
  t5286 = t4977*t5276;
  t5287 = t5050*t5280;
  t5288 = t5286 + t5287;
  t5290 = t5133*t5284;
  t5291 = t5118*t5288;
  t5292 = t5290 + t5291;
  t5294 = t5118*t5284;
  t5295 = -1.*t5133*t5288;
  t5296 = t5294 + t5295;
  t5298 = -1.*t5163*t5292;
  t5299 = t5158*t5296;
  t5300 = t5298 + t5299;
  t5302 = t5158*t5292;
  t5303 = t5163*t5296;
  t5304 = t5302 + t5303;
  p_output1[0]=-0.03155 - 0.049*t4560 + 0.004500000000000004*t5082 + t5135*t5145 + t5151*t5156 + t5165*t5171 + t5175*t5182 + t5191*t5195 + t5199*t5202 + 0.0306*(t5189*t5195 + t5184*t5202) - 1.1312*(t5184*t5195 - 1.*t5189*t5202) + t4972*t5059*t77 + t5107*t77 - 1.*t5096*t5116*t77;
  p_output1[1]=0. - 0.135*(1. - 1.*t5213) - 1.*t5082*t5107*t5213 - 1.*t5213*t5220 + t5223*t5226 - 1.*t5059*t5230 - 1.*t5116*t5234 - 1.*t5135*t5238 - 1.*t5151*t5242 - 1.*t5165*t5246 - 1.*t5175*t5250 - 1.*t5191*t5254 - 1.*t5199*t5258 - 0.0306*(t5189*t5254 + t5184*t5258) + 1.1312*(t5184*t5254 - 1.*t5189*t5258) - 0.1305*t5213*t77;
  p_output1[2]=-0.07996 + 0.135*t5223 - 1.*t5082*t5107*t5223 - 1.*t5220*t5223 - 1.*t5213*t5226 - 1.*t5059*t5276 - 1.*t5116*t5280 - 1.*t5135*t5284 - 1.*t5151*t5288 - 1.*t5165*t5292 - 1.*t5175*t5296 - 1.*t5191*t5300 - 1.*t5199*t5304 - 0.0306*(t5189*t5300 + t5184*t5304) + 1.1312*(t5184*t5300 - 1.*t5189*t5304) - 0.1305*t5223*t77;
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

#include "p_VectorNav_to_LeftToeBottom_mex.hh"

namespace SymExpression
{

void p_VectorNav_to_LeftToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
