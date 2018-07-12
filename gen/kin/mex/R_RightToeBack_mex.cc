/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:34:26 GMT-04:00
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
  double t25;
  double t425;
  double t591;
  double t437;
  double t606;
  double t135;
  double t265;
  double t419;
  double t420;
  double t830;
  double t494;
  double t655;
  double t702;
  double t853;
  double t862;
  double t964;
  double t823;
  double t983;
  double t1014;
  double t2170;
  double t2109;
  double t2123;
  double t2140;
  double t2007;
  double t2184;
  double t2199;
  double t2243;
  double t2505;
  double t2159;
  double t2377;
  double t2465;
  double t1858;
  double t2518;
  double t2529;
  double t2541;
  double t2688;
  double t2469;
  double t2614;
  double t2618;
  double t1849;
  double t2752;
  double t2755;
  double t2758;
  double t2830;
  double t2623;
  double t2784;
  double t2791;
  double t1828;
  double t2833;
  double t2853;
  double t2864;
  double t2950;
  double t2829;
  double t2878;
  double t2910;
  double t1766;
  double t2962;
  double t2974;
  double t2983;
  double t1062;
  double t1067;
  double t1121;
  double t1171;
  double t1271;
  double t1324;
  double t1146;
  double t1344;
  double t1347;
  double t3261;
  double t3311;
  double t3346;
  double t3412;
  double t3430;
  double t3433;
  double t3399;
  double t3443;
  double t3469;
  double t3542;
  double t3546;
  double t3631;
  double t3533;
  double t3637;
  double t3649;
  double t3672;
  double t3676;
  double t3683;
  double t3656;
  double t3735;
  double t3747;
  double t3763;
  double t3772;
  double t3785;
  double t3750;
  double t3790;
  double t3803;
  double t3830;
  double t3846;
  double t3849;
  double t1474;
  double t1557;
  double t1586;
  double t4224;
  double t4247;
  double t4264;
  double t4299;
  double t4308;
  double t4311;
  double t4265;
  double t4314;
  double t4317;
  double t4394;
  double t4398;
  double t4414;
  double t4389;
  double t4415;
  double t4469;
  double t4482;
  double t4621;
  double t4639;
  double t4480;
  double t4690;
  double t4706;
  double t4727;
  double t4733;
  double t4745;
  double t4711;
  double t4752;
  double t4754;
  double t4835;
  double t4851;
  double t4854;
  double t2939;
  double t2986;
  double t2994;
  double t3064;
  double t3098;
  double t3143;
  double t3811;
  double t4060;
  double t4088;
  double t4105;
  double t4110;
  double t4149;
  double t4761;
  double t4897;
  double t4899;
  double t4941;
  double t4972;
  double t5007;
  t25 = Cos(var1[3]);
  t425 = Cos(var1[5]);
  t591 = Sin(var1[3]);
  t437 = Sin(var1[4]);
  t606 = Sin(var1[5]);
  t135 = Cos(var1[4]);
  t265 = Sin(var1[14]);
  t419 = Cos(var1[14]);
  t420 = Sin(var1[13]);
  t830 = Cos(var1[13]);
  t494 = t25*t425*t437;
  t655 = t591*t606;
  t702 = t494 + t655;
  t853 = -1.*t425*t591;
  t862 = t25*t437*t606;
  t964 = t853 + t862;
  t823 = t420*t702;
  t983 = t830*t964;
  t1014 = t823 + t983;
  t2170 = Cos(var1[15]);
  t2109 = t830*t702;
  t2123 = -1.*t420*t964;
  t2140 = t2109 + t2123;
  t2007 = Sin(var1[15]);
  t2184 = t419*t25*t135;
  t2199 = t265*t1014;
  t2243 = t2184 + t2199;
  t2505 = Cos(var1[16]);
  t2159 = t2007*t2140;
  t2377 = t2170*t2243;
  t2465 = t2159 + t2377;
  t1858 = Sin(var1[16]);
  t2518 = t2170*t2140;
  t2529 = -1.*t2007*t2243;
  t2541 = t2518 + t2529;
  t2688 = Cos(var1[17]);
  t2469 = -1.*t1858*t2465;
  t2614 = t2505*t2541;
  t2618 = t2469 + t2614;
  t1849 = Sin(var1[17]);
  t2752 = t2505*t2465;
  t2755 = t1858*t2541;
  t2758 = t2752 + t2755;
  t2830 = Cos(var1[18]);
  t2623 = t1849*t2618;
  t2784 = t2688*t2758;
  t2791 = t2623 + t2784;
  t1828 = Sin(var1[18]);
  t2833 = t2688*t2618;
  t2853 = -1.*t1849*t2758;
  t2864 = t2833 + t2853;
  t2950 = Cos(var1[19]);
  t2829 = -1.*t1828*t2791;
  t2878 = t2830*t2864;
  t2910 = t2829 + t2878;
  t1766 = Sin(var1[19]);
  t2962 = t2830*t2791;
  t2974 = t1828*t2864;
  t2983 = t2962 + t2974;
  t1062 = t425*t591*t437;
  t1067 = -1.*t25*t606;
  t1121 = t1062 + t1067;
  t1171 = t25*t425;
  t1271 = t591*t437*t606;
  t1324 = t1171 + t1271;
  t1146 = t420*t1121;
  t1344 = t830*t1324;
  t1347 = t1146 + t1344;
  t3261 = t830*t1121;
  t3311 = -1.*t420*t1324;
  t3346 = t3261 + t3311;
  t3412 = t419*t135*t591;
  t3430 = t265*t1347;
  t3433 = t3412 + t3430;
  t3399 = t2007*t3346;
  t3443 = t2170*t3433;
  t3469 = t3399 + t3443;
  t3542 = t2170*t3346;
  t3546 = -1.*t2007*t3433;
  t3631 = t3542 + t3546;
  t3533 = -1.*t1858*t3469;
  t3637 = t2505*t3631;
  t3649 = t3533 + t3637;
  t3672 = t2505*t3469;
  t3676 = t1858*t3631;
  t3683 = t3672 + t3676;
  t3656 = t1849*t3649;
  t3735 = t2688*t3683;
  t3747 = t3656 + t3735;
  t3763 = t2688*t3649;
  t3772 = -1.*t1849*t3683;
  t3785 = t3763 + t3772;
  t3750 = -1.*t1828*t3747;
  t3790 = t2830*t3785;
  t3803 = t3750 + t3790;
  t3830 = t2830*t3747;
  t3846 = t1828*t3785;
  t3849 = t3830 + t3846;
  t1474 = t135*t425*t420;
  t1557 = t830*t135*t606;
  t1586 = t1474 + t1557;
  t4224 = t830*t135*t425;
  t4247 = -1.*t135*t420*t606;
  t4264 = t4224 + t4247;
  t4299 = -1.*t419*t437;
  t4308 = t265*t1586;
  t4311 = t4299 + t4308;
  t4265 = t2007*t4264;
  t4314 = t2170*t4311;
  t4317 = t4265 + t4314;
  t4394 = t2170*t4264;
  t4398 = -1.*t2007*t4311;
  t4414 = t4394 + t4398;
  t4389 = -1.*t1858*t4317;
  t4415 = t2505*t4414;
  t4469 = t4389 + t4415;
  t4482 = t2505*t4317;
  t4621 = t1858*t4414;
  t4639 = t4482 + t4621;
  t4480 = t1849*t4469;
  t4690 = t2688*t4639;
  t4706 = t4480 + t4690;
  t4727 = t2688*t4469;
  t4733 = -1.*t1849*t4639;
  t4745 = t4727 + t4733;
  t4711 = -1.*t1828*t4706;
  t4752 = t2830*t4745;
  t4754 = t4711 + t4752;
  t4835 = t2830*t4706;
  t4851 = t1828*t4745;
  t4854 = t4835 + t4851;
  t2939 = t1766*t2910;
  t2986 = t2950*t2983;
  t2994 = t2939 + t2986;
  t3064 = t2950*t2910;
  t3098 = -1.*t1766*t2983;
  t3143 = t3064 + t3098;
  t3811 = t1766*t3803;
  t4060 = t2950*t3849;
  t4088 = t3811 + t4060;
  t4105 = t2950*t3803;
  t4110 = -1.*t1766*t3849;
  t4149 = t4105 + t4110;
  t4761 = t1766*t4754;
  t4897 = t2950*t4854;
  t4899 = t4761 + t4897;
  t4941 = t2950*t4754;
  t4972 = -1.*t1766*t4854;
  t5007 = t4941 + t4972;
  p_output1[0]=t135*t25*t265 - 1.*t1014*t419;
  p_output1[1]=-1.*t1347*t419 + t135*t265*t591;
  p_output1[2]=-1.*t1586*t419 - 1.*t265*t437;
  p_output1[3]=0.642788*t2994 + 0.766044*t3143;
  p_output1[4]=0.642788*t4088 + 0.766044*t4149;
  p_output1[5]=0.642788*t4899 + 0.766044*t5007;
  p_output1[6]=-0.766044*t2994 + 0.642788*t3143;
  p_output1[7]=-0.766044*t4088 + 0.642788*t4149;
  p_output1[8]=-0.766044*t4899 + 0.642788*t5007;
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

#include "R_RightToeBack_mex.hh"

namespace SymExpression
{

void R_RightToeBack_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
