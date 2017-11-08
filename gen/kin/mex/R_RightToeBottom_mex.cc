/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:13:14 GMT-05:00
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
  double t175;
  double t828;
  double t982;
  double t834;
  double t1024;
  double t264;
  double t359;
  double t757;
  double t765;
  double t1104;
  double t876;
  double t1027;
  double t1069;
  double t1105;
  double t1107;
  double t1125;
  double t1081;
  double t1133;
  double t1161;
  double t2474;
  double t2337;
  double t2339;
  double t2441;
  double t2336;
  double t2569;
  double t2644;
  double t2656;
  double t2750;
  double t2463;
  double t2663;
  double t2674;
  double t2129;
  double t2762;
  double t2821;
  double t2830;
  double t2980;
  double t2749;
  double t2908;
  double t2929;
  double t2097;
  double t2994;
  double t3012;
  double t3014;
  double t3027;
  double t2976;
  double t3015;
  double t3022;
  double t1990;
  double t3039;
  double t3052;
  double t3061;
  double t3144;
  double t3023;
  double t3125;
  double t3130;
  double t1896;
  double t3145;
  double t3147;
  double t3152;
  double t1250;
  double t1259;
  double t1274;
  double t1340;
  double t1343;
  double t1355;
  double t1285;
  double t1457;
  double t1487;
  double t3337;
  double t3354;
  double t3359;
  double t3363;
  double t3403;
  double t3405;
  double t3361;
  double t3410;
  double t3412;
  double t3427;
  double t3429;
  double t3435;
  double t3413;
  double t3437;
  double t3489;
  double t3548;
  double t3566;
  double t3573;
  double t3502;
  double t3576;
  double t3582;
  double t3588;
  double t3600;
  double t3651;
  double t3584;
  double t3663;
  double t3681;
  double t3723;
  double t3743;
  double t3774;
  double t1785;
  double t1804;
  double t1817;
  double t3839;
  double t3844;
  double t3849;
  double t3911;
  double t3917;
  double t3949;
  double t3909;
  double t3950;
  double t3960;
  double t3996;
  double t4010;
  double t4042;
  double t3988;
  double t4053;
  double t4074;
  double t4078;
  double t4082;
  double t4099;
  double t4077;
  double t4105;
  double t4109;
  double t4119;
  double t4124;
  double t4133;
  double t4113;
  double t4187;
  double t4188;
  double t4219;
  double t4225;
  double t4229;
  double t3139;
  double t3175;
  double t3195;
  double t3200;
  double t3203;
  double t3205;
  double t3710;
  double t3781;
  double t3795;
  double t3803;
  double t3814;
  double t3822;
  double t4190;
  double t4232;
  double t4239;
  double t4262;
  double t4270;
  double t4294;
  t175 = Cos(var1[3]);
  t828 = Cos(var1[5]);
  t982 = Sin(var1[3]);
  t834 = Sin(var1[4]);
  t1024 = Sin(var1[5]);
  t264 = Cos(var1[4]);
  t359 = Sin(var1[14]);
  t757 = Cos(var1[14]);
  t765 = Sin(var1[13]);
  t1104 = Cos(var1[13]);
  t876 = t175*t828*t834;
  t1027 = t982*t1024;
  t1069 = t876 + t1027;
  t1105 = -1.*t828*t982;
  t1107 = t175*t834*t1024;
  t1125 = t1105 + t1107;
  t1081 = t765*t1069;
  t1133 = t1104*t1125;
  t1161 = t1081 + t1133;
  t2474 = Cos(var1[15]);
  t2337 = t1104*t1069;
  t2339 = -1.*t765*t1125;
  t2441 = t2337 + t2339;
  t2336 = Sin(var1[15]);
  t2569 = t757*t175*t264;
  t2644 = t359*t1161;
  t2656 = t2569 + t2644;
  t2750 = Cos(var1[16]);
  t2463 = t2336*t2441;
  t2663 = t2474*t2656;
  t2674 = t2463 + t2663;
  t2129 = Sin(var1[16]);
  t2762 = t2474*t2441;
  t2821 = -1.*t2336*t2656;
  t2830 = t2762 + t2821;
  t2980 = Cos(var1[17]);
  t2749 = -1.*t2129*t2674;
  t2908 = t2750*t2830;
  t2929 = t2749 + t2908;
  t2097 = Sin(var1[17]);
  t2994 = t2750*t2674;
  t3012 = t2129*t2830;
  t3014 = t2994 + t3012;
  t3027 = Cos(var1[18]);
  t2976 = t2097*t2929;
  t3015 = t2980*t3014;
  t3022 = t2976 + t3015;
  t1990 = Sin(var1[18]);
  t3039 = t2980*t2929;
  t3052 = -1.*t2097*t3014;
  t3061 = t3039 + t3052;
  t3144 = Cos(var1[19]);
  t3023 = -1.*t1990*t3022;
  t3125 = t3027*t3061;
  t3130 = t3023 + t3125;
  t1896 = Sin(var1[19]);
  t3145 = t3027*t3022;
  t3147 = t1990*t3061;
  t3152 = t3145 + t3147;
  t1250 = t828*t982*t834;
  t1259 = -1.*t175*t1024;
  t1274 = t1250 + t1259;
  t1340 = t175*t828;
  t1343 = t982*t834*t1024;
  t1355 = t1340 + t1343;
  t1285 = t765*t1274;
  t1457 = t1104*t1355;
  t1487 = t1285 + t1457;
  t3337 = t1104*t1274;
  t3354 = -1.*t765*t1355;
  t3359 = t3337 + t3354;
  t3363 = t757*t264*t982;
  t3403 = t359*t1487;
  t3405 = t3363 + t3403;
  t3361 = t2336*t3359;
  t3410 = t2474*t3405;
  t3412 = t3361 + t3410;
  t3427 = t2474*t3359;
  t3429 = -1.*t2336*t3405;
  t3435 = t3427 + t3429;
  t3413 = -1.*t2129*t3412;
  t3437 = t2750*t3435;
  t3489 = t3413 + t3437;
  t3548 = t2750*t3412;
  t3566 = t2129*t3435;
  t3573 = t3548 + t3566;
  t3502 = t2097*t3489;
  t3576 = t2980*t3573;
  t3582 = t3502 + t3576;
  t3588 = t2980*t3489;
  t3600 = -1.*t2097*t3573;
  t3651 = t3588 + t3600;
  t3584 = -1.*t1990*t3582;
  t3663 = t3027*t3651;
  t3681 = t3584 + t3663;
  t3723 = t3027*t3582;
  t3743 = t1990*t3651;
  t3774 = t3723 + t3743;
  t1785 = t264*t828*t765;
  t1804 = t1104*t264*t1024;
  t1817 = t1785 + t1804;
  t3839 = t1104*t264*t828;
  t3844 = -1.*t264*t765*t1024;
  t3849 = t3839 + t3844;
  t3911 = -1.*t757*t834;
  t3917 = t359*t1817;
  t3949 = t3911 + t3917;
  t3909 = t2336*t3849;
  t3950 = t2474*t3949;
  t3960 = t3909 + t3950;
  t3996 = t2474*t3849;
  t4010 = -1.*t2336*t3949;
  t4042 = t3996 + t4010;
  t3988 = -1.*t2129*t3960;
  t4053 = t2750*t4042;
  t4074 = t3988 + t4053;
  t4078 = t2750*t3960;
  t4082 = t2129*t4042;
  t4099 = t4078 + t4082;
  t4077 = t2097*t4074;
  t4105 = t2980*t4099;
  t4109 = t4077 + t4105;
  t4119 = t2980*t4074;
  t4124 = -1.*t2097*t4099;
  t4133 = t4119 + t4124;
  t4113 = -1.*t1990*t4109;
  t4187 = t3027*t4133;
  t4188 = t4113 + t4187;
  t4219 = t3027*t4109;
  t4225 = t1990*t4133;
  t4229 = t4219 + t4225;
  t3139 = t1896*t3130;
  t3175 = t3144*t3152;
  t3195 = t3139 + t3175;
  t3200 = t3144*t3130;
  t3203 = -1.*t1896*t3152;
  t3205 = t3200 + t3203;
  t3710 = t1896*t3681;
  t3781 = t3144*t3774;
  t3795 = t3710 + t3781;
  t3803 = t3144*t3681;
  t3814 = -1.*t1896*t3774;
  t3822 = t3803 + t3814;
  t4190 = t1896*t4188;
  t4232 = t3144*t4229;
  t4239 = t4190 + t4232;
  t4262 = t3144*t4188;
  t4270 = -1.*t1896*t4229;
  t4294 = t4262 + t4270;
  p_output1[0]=t175*t264*t359 - 1.*t1161*t757;
  p_output1[1]=-1.*t1487*t757 + t264*t359*t982;
  p_output1[2]=-1.*t1817*t757 - 1.*t359*t834;
  p_output1[3]=0.642788*t3195 + 0.766044*t3205;
  p_output1[4]=0.642788*t3795 + 0.766044*t3822;
  p_output1[5]=0.642788*t4239 + 0.766044*t4294;
  p_output1[6]=-0.766044*t3195 + 0.642788*t3205;
  p_output1[7]=-0.766044*t3795 + 0.642788*t3822;
  p_output1[8]=-0.766044*t4239 + 0.642788*t4294;
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

#include "R_RightToeBottom_mex.hh"

namespace SymExpression
{

void R_RightToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
