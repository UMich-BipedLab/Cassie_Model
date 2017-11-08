/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:11:23 GMT-05:00
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
  double t2373;
  double t4833;
  double t4866;
  double t4836;
  double t4874;
  double t4825;
  double t4926;
  double t4932;
  double t4936;
  double t4841;
  double t4879;
  double t4895;
  double t4940;
  double t706;
  double t4989;
  double t4992;
  double t4996;
  double t4721;
  double t4810;
  double t4822;
  double t4906;
  double t4943;
  double t4947;
  double t4948;
  double t4952;
  double t4961;
  double t5003;
  double t5032;
  double t4973;
  double t5006;
  double t5018;
  double t653;
  double t5037;
  double t5050;
  double t5056;
  double t5079;
  double t5028;
  double t5061;
  double t5070;
  double t372;
  double t5084;
  double t5088;
  double t5094;
  double t362;
  double t5154;
  double t5158;
  double t5169;
  double t5140;
  double t5142;
  double t5144;
  double t5192;
  double t5201;
  double t5211;
  double t5128;
  double t5151;
  double t5172;
  double t5174;
  double t5176;
  double t5177;
  double t5180;
  double t5220;
  double t5221;
  double t5230;
  double t5233;
  double t5234;
  double t5103;
  double t5229;
  double t5235;
  double t5239;
  double t5241;
  double t5248;
  double t5251;
  double t5296;
  double t5298;
  double t5301;
  double t5274;
  double t5279;
  double t5280;
  double t5283;
  double t5284;
  double t5286;
  double t5295;
  double t5302;
  double t5303;
  double t5307;
  double t5309;
  double t5313;
  double t5306;
  double t5319;
  double t5325;
  double t5331;
  double t5333;
  double t5336;
  double t5072;
  double t5095;
  double t5098;
  double t5113;
  double t5114;
  double t5121;
  double t5240;
  double t5255;
  double t5256;
  double t5261;
  double t5264;
  double t5265;
  double t5329;
  double t5337;
  double t5340;
  double t5350;
  double t5351;
  double t5355;
  t2373 = Cos(var1[3]);
  t4833 = Cos(var1[5]);
  t4866 = Sin(var1[4]);
  t4836 = Sin(var1[3]);
  t4874 = Sin(var1[5]);
  t4825 = Cos(var1[6]);
  t4926 = t2373*t4833*t4866;
  t4932 = t4836*t4874;
  t4936 = t4926 + t4932;
  t4841 = -1.*t4833*t4836;
  t4879 = t2373*t4866*t4874;
  t4895 = t4841 + t4879;
  t4940 = Sin(var1[6]);
  t706 = Cos(var1[8]);
  t4989 = t4825*t4936;
  t4992 = -1.*t4895*t4940;
  t4996 = t4989 + t4992;
  t4721 = Cos(var1[4]);
  t4810 = Cos(var1[7]);
  t4822 = t2373*t4721*t4810;
  t4906 = t4825*t4895;
  t4943 = t4936*t4940;
  t4947 = t4906 + t4943;
  t4948 = Sin(var1[7]);
  t4952 = t4947*t4948;
  t4961 = t4822 + t4952;
  t5003 = Sin(var1[8]);
  t5032 = Cos(var1[9]);
  t4973 = t706*t4961;
  t5006 = t4996*t5003;
  t5018 = t4973 + t5006;
  t653 = Sin(var1[9]);
  t5037 = t706*t4996;
  t5050 = -1.*t4961*t5003;
  t5056 = t5037 + t5050;
  t5079 = Cos(var1[10]);
  t5028 = -1.*t653*t5018;
  t5061 = t5032*t5056;
  t5070 = t5028 + t5061;
  t372 = Sin(var1[10]);
  t5084 = t5032*t5018;
  t5088 = t653*t5056;
  t5094 = t5084 + t5088;
  t362 = Sin(var1[11]);
  t5154 = t4833*t4836*t4866;
  t5158 = -1.*t2373*t4874;
  t5169 = t5154 + t5158;
  t5140 = t2373*t4833;
  t5142 = t4836*t4866*t4874;
  t5144 = t5140 + t5142;
  t5192 = t4825*t5169;
  t5201 = -1.*t5144*t4940;
  t5211 = t5192 + t5201;
  t5128 = t4721*t4810*t4836;
  t5151 = t4825*t5144;
  t5172 = t5169*t4940;
  t5174 = t5151 + t5172;
  t5176 = t5174*t4948;
  t5177 = t5128 + t5176;
  t5180 = t706*t5177;
  t5220 = t5211*t5003;
  t5221 = t5180 + t5220;
  t5230 = t706*t5211;
  t5233 = -1.*t5177*t5003;
  t5234 = t5230 + t5233;
  t5103 = Cos(var1[11]);
  t5229 = -1.*t653*t5221;
  t5235 = t5032*t5234;
  t5239 = t5229 + t5235;
  t5241 = t5032*t5221;
  t5248 = t653*t5234;
  t5251 = t5241 + t5248;
  t5296 = t4721*t4833*t4825;
  t5298 = -1.*t4721*t4874*t4940;
  t5301 = t5296 + t5298;
  t5274 = -1.*t4810*t4866;
  t5279 = t4721*t4825*t4874;
  t5280 = t4721*t4833*t4940;
  t5283 = t5279 + t5280;
  t5284 = t5283*t4948;
  t5286 = t5274 + t5284;
  t5295 = t706*t5286;
  t5302 = t5301*t5003;
  t5303 = t5295 + t5302;
  t5307 = t706*t5301;
  t5309 = -1.*t5286*t5003;
  t5313 = t5307 + t5309;
  t5306 = -1.*t653*t5303;
  t5319 = t5032*t5313;
  t5325 = t5306 + t5319;
  t5331 = t5032*t5303;
  t5333 = t653*t5313;
  t5336 = t5331 + t5333;
  t5072 = t372*t5070;
  t5095 = t5079*t5094;
  t5098 = t5072 + t5095;
  t5113 = t5079*t5070;
  t5114 = -1.*t372*t5094;
  t5121 = t5113 + t5114;
  t5240 = t372*t5239;
  t5255 = t5079*t5251;
  t5256 = t5240 + t5255;
  t5261 = t5079*t5239;
  t5264 = -1.*t372*t5251;
  t5265 = t5261 + t5264;
  t5329 = t372*t5325;
  t5337 = t5079*t5336;
  t5340 = t5329 + t5337;
  t5350 = t5079*t5325;
  t5351 = -1.*t372*t5336;
  t5355 = t5350 + t5351;
  p_output1[0]=t362*t5098 - 1.*t5103*t5121;
  p_output1[1]=t362*t5256 - 1.*t5103*t5265;
  p_output1[2]=t362*t5340 - 1.*t5103*t5355;
  p_output1[3]=t5098*t5103 + t362*t5121;
  p_output1[4]=t5103*t5256 + t362*t5265;
  p_output1[5]=t5103*t5340 + t362*t5355;
  p_output1[6]=-1.*t4810*t4947 + t2373*t4721*t4948;
  p_output1[7]=t4721*t4836*t4948 - 1.*t4810*t5174;
  p_output1[8]=-1.*t4866*t4948 - 1.*t4810*t5283;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "R_toe_joint_left_mex.hh"

namespace SymExpression
{

void R_toe_joint_left_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
