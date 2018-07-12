/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:33:51 GMT-04:00
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
  double t1018;
  double t1200;
  double t963;
  double t1156;
  double t1207;
  double t1390;
  double t1170;
  double t1211;
  double t1258;
  double t950;
  double t1426;
  double t1456;
  double t1619;
  double t1716;
  double t1339;
  double t1659;
  double t1701;
  double t507;
  double t1759;
  double t1774;
  double t1786;
  double t1824;
  double t1838;
  double t1850;
  double t1902;
  double t1909;
  double t1921;
  double t2019;
  double t1706;
  double t1960;
  double t1991;
  double t295;
  double t2020;
  double t2050;
  double t2134;
  double t2229;
  double t1995;
  double t2149;
  double t2197;
  double t278;
  double t2263;
  double t2358;
  double t2371;
  double t236;
  double t2569;
  double t2621;
  double t2633;
  double t2730;
  double t2745;
  double t2757;
  double t2701;
  double t2780;
  double t2785;
  double t2821;
  double t2883;
  double t2918;
  double t2949;
  double t2951;
  double t2991;
  double t2807;
  double t3006;
  double t3036;
  double t3123;
  double t3152;
  double t3161;
  double t2464;
  double t3070;
  double t3178;
  double t3203;
  double t3289;
  double t3351;
  double t3376;
  double t3626;
  double t3655;
  double t3680;
  double t3714;
  double t3756;
  double t3759;
  double t3766;
  double t3837;
  double t3839;
  double t3689;
  double t3863;
  double t3868;
  double t3891;
  double t3892;
  double t3905;
  double t3872;
  double t3907;
  double t3961;
  double t3968;
  double t3971;
  double t4005;
  double t2219;
  double t2372;
  double t2428;
  double t2476;
  double t2492;
  double t2494;
  double t3262;
  double t3380;
  double t3397;
  double t3426;
  double t3471;
  double t3499;
  double t3967;
  double t4071;
  double t4132;
  double t4262;
  double t4285;
  double t4290;
  t1018 = Cos(var1[5]);
  t1200 = Sin(var1[3]);
  t963 = Cos(var1[3]);
  t1156 = Sin(var1[4]);
  t1207 = Sin(var1[5]);
  t1390 = Sin(var1[13]);
  t1170 = t963*t1018*t1156;
  t1211 = t1200*t1207;
  t1258 = t1170 + t1211;
  t950 = Cos(var1[13]);
  t1426 = -1.*t1018*t1200;
  t1456 = t963*t1156*t1207;
  t1619 = t1426 + t1456;
  t1716 = Cos(var1[15]);
  t1339 = t950*t1258;
  t1659 = -1.*t1390*t1619;
  t1701 = t1339 + t1659;
  t507 = Sin(var1[15]);
  t1759 = Cos(var1[14]);
  t1774 = Cos(var1[4]);
  t1786 = t1759*t963*t1774;
  t1824 = Sin(var1[14]);
  t1838 = t1390*t1258;
  t1850 = t950*t1619;
  t1902 = t1838 + t1850;
  t1909 = t1824*t1902;
  t1921 = t1786 + t1909;
  t2019 = Cos(var1[16]);
  t1706 = t507*t1701;
  t1960 = t1716*t1921;
  t1991 = t1706 + t1960;
  t295 = Sin(var1[16]);
  t2020 = t1716*t1701;
  t2050 = -1.*t507*t1921;
  t2134 = t2020 + t2050;
  t2229 = Cos(var1[17]);
  t1995 = -1.*t295*t1991;
  t2149 = t2019*t2134;
  t2197 = t1995 + t2149;
  t278 = Sin(var1[17]);
  t2263 = t2019*t1991;
  t2358 = t295*t2134;
  t2371 = t2263 + t2358;
  t236 = Sin(var1[18]);
  t2569 = t1018*t1200*t1156;
  t2621 = -1.*t963*t1207;
  t2633 = t2569 + t2621;
  t2730 = t963*t1018;
  t2745 = t1200*t1156*t1207;
  t2757 = t2730 + t2745;
  t2701 = t950*t2633;
  t2780 = -1.*t1390*t2757;
  t2785 = t2701 + t2780;
  t2821 = t1759*t1774*t1200;
  t2883 = t1390*t2633;
  t2918 = t950*t2757;
  t2949 = t2883 + t2918;
  t2951 = t1824*t2949;
  t2991 = t2821 + t2951;
  t2807 = t507*t2785;
  t3006 = t1716*t2991;
  t3036 = t2807 + t3006;
  t3123 = t1716*t2785;
  t3152 = -1.*t507*t2991;
  t3161 = t3123 + t3152;
  t2464 = Cos(var1[18]);
  t3070 = -1.*t295*t3036;
  t3178 = t2019*t3161;
  t3203 = t3070 + t3178;
  t3289 = t2019*t3036;
  t3351 = t295*t3161;
  t3376 = t3289 + t3351;
  t3626 = t950*t1774*t1018;
  t3655 = -1.*t1774*t1390*t1207;
  t3680 = t3626 + t3655;
  t3714 = -1.*t1759*t1156;
  t3756 = t1774*t1018*t1390;
  t3759 = t950*t1774*t1207;
  t3766 = t3756 + t3759;
  t3837 = t1824*t3766;
  t3839 = t3714 + t3837;
  t3689 = t507*t3680;
  t3863 = t1716*t3839;
  t3868 = t3689 + t3863;
  t3891 = t1716*t3680;
  t3892 = -1.*t507*t3839;
  t3905 = t3891 + t3892;
  t3872 = -1.*t295*t3868;
  t3907 = t2019*t3905;
  t3961 = t3872 + t3907;
  t3968 = t2019*t3868;
  t3971 = t295*t3905;
  t4005 = t3968 + t3971;
  t2219 = t278*t2197;
  t2372 = t2229*t2371;
  t2428 = t2219 + t2372;
  t2476 = t2229*t2197;
  t2492 = -1.*t278*t2371;
  t2494 = t2476 + t2492;
  t3262 = t278*t3203;
  t3380 = t2229*t3376;
  t3397 = t3262 + t3380;
  t3426 = t2229*t3203;
  t3471 = -1.*t278*t3376;
  t3499 = t3426 + t3471;
  t3967 = t278*t3961;
  t4071 = t2229*t4005;
  t4132 = t3967 + t4071;
  t4262 = t2229*t3961;
  t4285 = -1.*t278*t4005;
  t4290 = t4262 + t4285;
  p_output1[0]=t236*t2428 - 1.*t2464*t2494;
  p_output1[1]=t236*t3397 - 1.*t2464*t3499;
  p_output1[2]=t236*t4132 - 1.*t2464*t4290;
  p_output1[3]=t2428*t2464 + t236*t2494;
  p_output1[4]=t2464*t3397 + t236*t3499;
  p_output1[5]=t2464*t4132 + t236*t4290;
  p_output1[6]=-1.*t1759*t1902 + t1774*t1824*t963;
  p_output1[7]=t1200*t1774*t1824 - 1.*t1759*t2949;
  p_output1[8]=-1.*t1156*t1824 - 1.*t1759*t3766;
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

#include "R_ankle_joint_right_mex.hh"

namespace SymExpression
{

void R_ankle_joint_right_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
