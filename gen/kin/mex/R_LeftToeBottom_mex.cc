/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:13:08 GMT-05:00
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
  double t645;
  double t557;
  double t715;
  double t571;
  double t752;
  double t533;
  double t545;
  double t1042;
  double t1082;
  double t1103;
  double t606;
  double t756;
  double t859;
  double t864;
  double t873;
  double t874;
  double t880;
  double t1055;
  double t1073;
  double t2333;
  double t2440;
  double t2490;
  double t2494;
  double t2376;
  double t2377;
  double t2408;
  double t2511;
  double t2698;
  double t2409;
  double t2609;
  double t2616;
  double t2293;
  double t2716;
  double t2751;
  double t2767;
  double t2790;
  double t2636;
  double t2776;
  double t2784;
  double t2206;
  double t2811;
  double t2822;
  double t2832;
  double t2881;
  double t2788;
  double t2836;
  double t2839;
  double t2182;
  double t2937;
  double t2965;
  double t3010;
  double t3222;
  double t2876;
  double t3099;
  double t3209;
  double t2172;
  double t3223;
  double t3226;
  double t3238;
  double t1309;
  double t1351;
  double t1363;
  double t1434;
  double t1568;
  double t1600;
  double t1701;
  double t1764;
  double t1852;
  double t3577;
  double t3581;
  double t3594;
  double t3466;
  double t3478;
  double t3567;
  double t3570;
  double t3611;
  double t3615;
  double t3648;
  double t3680;
  double t3681;
  double t3637;
  double t3715;
  double t3732;
  double t3782;
  double t3797;
  double t3799;
  double t3776;
  double t3815;
  double t3817;
  double t3840;
  double t3853;
  double t3870;
  double t3823;
  double t3879;
  double t3883;
  double t3890;
  double t3896;
  double t3913;
  double t2053;
  double t2057;
  double t2083;
  double t3977;
  double t3981;
  double t3988;
  double t3967;
  double t3971;
  double t3972;
  double t3975;
  double t3996;
  double t4004;
  double t4015;
  double t4017;
  double t4020;
  double t4013;
  double t4033;
  double t4043;
  double t4050;
  double t4051;
  double t4069;
  double t4045;
  double t4115;
  double t4122;
  double t4133;
  double t4144;
  double t4152;
  double t4127;
  double t4155;
  double t4180;
  double t4198;
  double t4204;
  double t4217;
  double t3220;
  double t3247;
  double t3253;
  double t3326;
  double t3404;
  double t3423;
  double t3885;
  double t3929;
  double t3931;
  double t3939;
  double t3947;
  double t3952;
  double t4191;
  double t4240;
  double t4243;
  double t4255;
  double t4277;
  double t4284;
  t645 = Cos(var1[3]);
  t557 = Cos(var1[5]);
  t715 = Sin(var1[4]);
  t571 = Sin(var1[3]);
  t752 = Sin(var1[5]);
  t533 = Cos(var1[7]);
  t545 = Cos(var1[6]);
  t1042 = Sin(var1[6]);
  t1082 = Cos(var1[4]);
  t1103 = Sin(var1[7]);
  t606 = -1.*t557*t571;
  t756 = t645*t715*t752;
  t859 = t606 + t756;
  t864 = t545*t859;
  t873 = t645*t557*t715;
  t874 = t571*t752;
  t880 = t873 + t874;
  t1055 = t880*t1042;
  t1073 = t864 + t1055;
  t2333 = Cos(var1[8]);
  t2440 = t545*t880;
  t2490 = -1.*t859*t1042;
  t2494 = t2440 + t2490;
  t2376 = t645*t1082*t533;
  t2377 = t1073*t1103;
  t2408 = t2376 + t2377;
  t2511 = Sin(var1[8]);
  t2698 = Cos(var1[9]);
  t2409 = t2333*t2408;
  t2609 = t2494*t2511;
  t2616 = t2409 + t2609;
  t2293 = Sin(var1[9]);
  t2716 = t2333*t2494;
  t2751 = -1.*t2408*t2511;
  t2767 = t2716 + t2751;
  t2790 = Cos(var1[10]);
  t2636 = -1.*t2293*t2616;
  t2776 = t2698*t2767;
  t2784 = t2636 + t2776;
  t2206 = Sin(var1[10]);
  t2811 = t2698*t2616;
  t2822 = t2293*t2767;
  t2832 = t2811 + t2822;
  t2881 = Cos(var1[11]);
  t2788 = t2206*t2784;
  t2836 = t2790*t2832;
  t2839 = t2788 + t2836;
  t2182 = Sin(var1[11]);
  t2937 = t2790*t2784;
  t2965 = -1.*t2206*t2832;
  t3010 = t2937 + t2965;
  t3222 = Cos(var1[12]);
  t2876 = -1.*t2182*t2839;
  t3099 = t2881*t3010;
  t3209 = t2876 + t3099;
  t2172 = Sin(var1[12]);
  t3223 = t2881*t2839;
  t3226 = t2182*t3010;
  t3238 = t3223 + t3226;
  t1309 = t645*t557;
  t1351 = t571*t715*t752;
  t1363 = t1309 + t1351;
  t1434 = t545*t1363;
  t1568 = t557*t571*t715;
  t1600 = -1.*t645*t752;
  t1701 = t1568 + t1600;
  t1764 = t1701*t1042;
  t1852 = t1434 + t1764;
  t3577 = t545*t1701;
  t3581 = -1.*t1363*t1042;
  t3594 = t3577 + t3581;
  t3466 = t1082*t533*t571;
  t3478 = t1852*t1103;
  t3567 = t3466 + t3478;
  t3570 = t2333*t3567;
  t3611 = t3594*t2511;
  t3615 = t3570 + t3611;
  t3648 = t2333*t3594;
  t3680 = -1.*t3567*t2511;
  t3681 = t3648 + t3680;
  t3637 = -1.*t2293*t3615;
  t3715 = t2698*t3681;
  t3732 = t3637 + t3715;
  t3782 = t2698*t3615;
  t3797 = t2293*t3681;
  t3799 = t3782 + t3797;
  t3776 = t2206*t3732;
  t3815 = t2790*t3799;
  t3817 = t3776 + t3815;
  t3840 = t2790*t3732;
  t3853 = -1.*t2206*t3799;
  t3870 = t3840 + t3853;
  t3823 = -1.*t2182*t3817;
  t3879 = t2881*t3870;
  t3883 = t3823 + t3879;
  t3890 = t2881*t3817;
  t3896 = t2182*t3870;
  t3913 = t3890 + t3896;
  t2053 = t1082*t545*t752;
  t2057 = t1082*t557*t1042;
  t2083 = t2053 + t2057;
  t3977 = t1082*t557*t545;
  t3981 = -1.*t1082*t752*t1042;
  t3988 = t3977 + t3981;
  t3967 = -1.*t533*t715;
  t3971 = t2083*t1103;
  t3972 = t3967 + t3971;
  t3975 = t2333*t3972;
  t3996 = t3988*t2511;
  t4004 = t3975 + t3996;
  t4015 = t2333*t3988;
  t4017 = -1.*t3972*t2511;
  t4020 = t4015 + t4017;
  t4013 = -1.*t2293*t4004;
  t4033 = t2698*t4020;
  t4043 = t4013 + t4033;
  t4050 = t2698*t4004;
  t4051 = t2293*t4020;
  t4069 = t4050 + t4051;
  t4045 = t2206*t4043;
  t4115 = t2790*t4069;
  t4122 = t4045 + t4115;
  t4133 = t2790*t4043;
  t4144 = -1.*t2206*t4069;
  t4152 = t4133 + t4144;
  t4127 = -1.*t2182*t4122;
  t4155 = t2881*t4152;
  t4180 = t4127 + t4155;
  t4198 = t2881*t4122;
  t4204 = t2182*t4152;
  t4217 = t4198 + t4204;
  t3220 = t2172*t3209;
  t3247 = t3222*t3238;
  t3253 = t3220 + t3247;
  t3326 = t3222*t3209;
  t3404 = -1.*t2172*t3238;
  t3423 = t3326 + t3404;
  t3885 = t2172*t3883;
  t3929 = t3222*t3913;
  t3931 = t3885 + t3929;
  t3939 = t3222*t3883;
  t3947 = -1.*t2172*t3913;
  t3952 = t3939 + t3947;
  t4191 = t2172*t4180;
  t4240 = t3222*t4217;
  t4243 = t4191 + t4240;
  t4255 = t3222*t4180;
  t4277 = -1.*t2172*t4217;
  t4284 = t4255 + t4277;
  p_output1[0]=-1.*t1073*t533 + t1082*t1103*t645;
  p_output1[1]=-1.*t1852*t533 + t1082*t1103*t571;
  p_output1[2]=-1.*t2083*t533 - 1.*t1103*t715;
  p_output1[3]=0.642788*t3253 + 0.766044*t3423;
  p_output1[4]=0.642788*t3931 + 0.766044*t3952;
  p_output1[5]=0.642788*t4243 + 0.766044*t4284;
  p_output1[6]=-0.766044*t3253 + 0.642788*t3423;
  p_output1[7]=-0.766044*t3931 + 0.642788*t3952;
  p_output1[8]=-0.766044*t4243 + 0.642788*t4284;
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

#include "R_LeftToeBottom_mex.hh"

namespace SymExpression
{

void R_LeftToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
