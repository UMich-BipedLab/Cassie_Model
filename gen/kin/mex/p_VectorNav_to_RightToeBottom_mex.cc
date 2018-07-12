/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:36:46 GMT-04:00
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
  double t586;
  double t1136;
  double t1604;
  double t2346;
  double t2412;
  double t2992;
  double t3120;
  double t4577;
  double t4659;
  double t4713;
  double t4741;
  double t4150;
  double t4172;
  double t4387;
  double t5065;
  double t5111;
  double t5127;
  double t5533;
  double t5560;
  double t5628;
  double t5640;
  double t5370;
  double t5494;
  double t5502;
  double t5693;
  double t5699;
  double t5710;
  double t5776;
  double t5783;
  double t5795;
  double t5804;
  double t5754;
  double t5760;
  double t5767;
  double t5830;
  double t5847;
  double t5850;
  double t5909;
  double t597;
  double t690;
  double t771;
  double t1452;
  double t1528;
  double t1577;
  double t1606;
  double t1631;
  double t5949;
  double t3109;
  double t3137;
  double t3286;
  double t3697;
  double t3738;
  double t3973;
  double t5959;
  double t5964;
  double t5973;
  double t5976;
  double t5977;
  double t5980;
  double t4735;
  double t4771;
  double t4860;
  double t5188;
  double t5213;
  double t5220;
  double t5984;
  double t5985;
  double t5987;
  double t5992;
  double t5994;
  double t5995;
  double t5630;
  double t5645;
  double t5671;
  double t5715;
  double t5730;
  double t5736;
  double t6002;
  double t6007;
  double t6010;
  double t6019;
  double t6022;
  double t6031;
  double t5798;
  double t5808;
  double t5817;
  double t5857;
  double t5870;
  double t5874;
  double t6036;
  double t6041;
  double t6042;
  double t6047;
  double t6051;
  double t6055;
  double t5936;
  double t5937;
  double t5940;
  double t5950;
  double t5952;
  double t5953;
  double t6108;
  double t6115;
  double t6116;
  double t6120;
  double t6122;
  double t6124;
  double t6128;
  double t6131;
  double t6135;
  double t6138;
  double t6145;
  double t6151;
  double t6165;
  double t6172;
  double t6173;
  double t6178;
  double t6179;
  double t6181;
  double t6195;
  double t6196;
  double t6197;
  double t6207;
  double t6208;
  double t6209;
  t586 = Cos(var1[8]);
  t1136 = Cos(var1[9]);
  t1604 = Sin(var1[9]);
  t2346 = Cos(var1[10]);
  t2412 = -1.*t2346;
  t2992 = 1. + t2412;
  t3120 = Sin(var1[10]);
  t4577 = Cos(var1[11]);
  t4659 = -1.*t4577;
  t4713 = 1. + t4659;
  t4741 = Sin(var1[11]);
  t4150 = t586*t1136*t2346;
  t4172 = -1.*t586*t1604*t3120;
  t4387 = t4150 + t4172;
  t5065 = -1.*t586*t2346*t1604;
  t5111 = -1.*t586*t1136*t3120;
  t5127 = t5065 + t5111;
  t5533 = Cos(var1[12]);
  t5560 = -1.*t5533;
  t5628 = 1. + t5560;
  t5640 = Sin(var1[12]);
  t5370 = t4577*t4387;
  t5494 = t5127*t4741;
  t5502 = t5370 + t5494;
  t5693 = t4577*t5127;
  t5699 = -1.*t4387*t4741;
  t5710 = t5693 + t5699;
  t5776 = Cos(var1[13]);
  t5783 = -1.*t5776;
  t5795 = 1. + t5783;
  t5804 = Sin(var1[13]);
  t5754 = t5533*t5502;
  t5760 = t5710*t5640;
  t5767 = t5754 + t5760;
  t5830 = t5533*t5710;
  t5847 = -1.*t5502*t5640;
  t5850 = t5830 + t5847;
  t5909 = Cos(var1[7]);
  t597 = -1.*t586;
  t690 = 1. + t597;
  t771 = Sin(var1[8]);
  t1452 = -1.*t1136;
  t1528 = 1. + t1452;
  t1577 = -0.049*t1528;
  t1606 = -0.09*t1604;
  t1631 = 0. + t1577 + t1606;
  t5949 = Sin(var1[7]);
  t3109 = -0.049*t2992;
  t3137 = -0.21*t3120;
  t3286 = 0. + t3109 + t3137;
  t3697 = -0.21*t2992;
  t3738 = 0.049*t3120;
  t3973 = 0. + t3697 + t3738;
  t5959 = t5909*t1136*t771;
  t5964 = -1.*t5949*t1604;
  t5973 = t5959 + t5964;
  t5976 = -1.*t1136*t5949;
  t5977 = -1.*t5909*t771*t1604;
  t5980 = t5976 + t5977;
  t4735 = -0.0016*t4713;
  t4771 = -0.2707*t4741;
  t4860 = 0. + t4735 + t4771;
  t5188 = -0.2707*t4713;
  t5213 = 0.0016*t4741;
  t5220 = 0. + t5188 + t5213;
  t5984 = t2346*t5973;
  t5985 = t5980*t3120;
  t5987 = t5984 + t5985;
  t5992 = t2346*t5980;
  t5994 = -1.*t5973*t3120;
  t5995 = t5992 + t5994;
  t5630 = 0.0184*t5628;
  t5645 = -0.7055*t5640;
  t5671 = 0. + t5630 + t5645;
  t5715 = -0.7055*t5628;
  t5730 = -0.0184*t5640;
  t5736 = 0. + t5715 + t5730;
  t6002 = t4577*t5987;
  t6007 = t5995*t4741;
  t6010 = t6002 + t6007;
  t6019 = t4577*t5995;
  t6022 = -1.*t5987*t4741;
  t6031 = t6019 + t6022;
  t5798 = -0.0216*t5795;
  t5808 = -1.1135*t5804;
  t5817 = 0. + t5798 + t5808;
  t5857 = -1.1135*t5795;
  t5870 = 0.0216*t5804;
  t5874 = 0. + t5857 + t5870;
  t6036 = t5533*t6010;
  t6041 = t6031*t5640;
  t6042 = t6036 + t6041;
  t6047 = t5533*t6031;
  t6051 = -1.*t6010*t5640;
  t6055 = t6047 + t6051;
  t5936 = -0.135*t690;
  t5937 = 0.049*t771;
  t5940 = 0. + t5936 + t5937;
  t5950 = -0.09*t1528;
  t5952 = 0.049*t1604;
  t5953 = 0. + t5950 + t5952;
  t6108 = t1136*t5949*t771;
  t6115 = t5909*t1604;
  t6116 = t6108 + t6115;
  t6120 = t5909*t1136;
  t6122 = -1.*t5949*t771*t1604;
  t6124 = t6120 + t6122;
  t6128 = t2346*t6116;
  t6131 = t6124*t3120;
  t6135 = t6128 + t6131;
  t6138 = t2346*t6124;
  t6145 = -1.*t6116*t3120;
  t6151 = t6138 + t6145;
  t6165 = t4577*t6135;
  t6172 = t6151*t4741;
  t6173 = t6165 + t6172;
  t6178 = t4577*t6151;
  t6179 = -1.*t6135*t4741;
  t6181 = t6178 + t6179;
  t6195 = t5533*t6173;
  t6196 = t6181*t5640;
  t6197 = t6195 + t6196;
  t6207 = t5533*t6181;
  t6208 = -1.*t6173*t5640;
  t6209 = t6207 + t6208;
  p_output1[0]=-0.03155 + t4387*t4860 + t5127*t5220 + t5502*t5671 + t5710*t5736 + t5767*t5817 - 1.1312*(-1.*t5767*t5804 + t5776*t5850) + 0.0306*(t5767*t5776 + t5804*t5850) + t1631*t586 + t1136*t3286*t586 - 1.*t1604*t3973*t586 + t5850*t5874 - 0.049*t690 - 0.004500000000000004*t771;
  p_output1[1]=0. - 0.135*(1. - 1.*t5909) - 0.1305*t586*t5909 + t5909*t5940 - 1.*t5949*t5953 + t3286*t5973 + t3973*t5980 + t4860*t5987 + t5220*t5995 + t5671*t6010 + t5736*t6031 + t5817*t6042 + t5874*t6055 - 1.1312*(-1.*t5804*t6042 + t5776*t6055) + 0.0306*(t5776*t6042 + t5804*t6055) + t1631*t5909*t771;
  p_output1[2]=0.07996 + 0.135*t5949 - 0.1305*t586*t5949 + t5940*t5949 + t5909*t5953 + t3286*t6116 + t3973*t6124 + t4860*t6135 + t5220*t6151 + t5671*t6173 + t5736*t6181 + t5817*t6197 + t5874*t6209 - 1.1312*(-1.*t5804*t6197 + t5776*t6209) + 0.0306*(t5776*t6197 + t5804*t6209) + t1631*t5949*t771;
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

#include "p_VectorNav_to_RightToeBottom_mex.hh"

namespace SymExpression
{

void p_VectorNav_to_RightToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
