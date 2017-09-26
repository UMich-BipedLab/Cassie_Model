/*
 * Automatically Generated from Mathematica.
 * Tue 26 Sep 2017 12:22:31 GMT-04:00
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
  double t9046;
  double t10084;
  double t8132;
  double t10040;
  double t10085;
  double t11996;
  double t10083;
  double t10087;
  double t11833;
  double t7696;
  double t12168;
  double t12215;
  double t12248;
  double t12434;
  double t11848;
  double t12270;
  double t12373;
  double t7694;
  double t12444;
  double t12453;
  double t12476;
  double t12572;
  double t12405;
  double t12480;
  double t12519;
  double t6942;
  double t12573;
  double t12576;
  double t12580;
  double t12582;
  double t12604;
  double t12612;
  double t12616;
  double t12637;
  double t12641;
  double t12663;
  double t12560;
  double t12647;
  double t12648;
  double t5681;
  double t12667;
  double t12671;
  double t12676;
  double t12702;
  double t12658;
  double t12677;
  double t12687;
  double t5112;
  double t12709;
  double t12716;
  double t12724;
  double t3509;
  double t12756;
  double t12759;
  double t12760;
  double t12770;
  double t12772;
  double t12783;
  double t12768;
  double t12795;
  double t12809;
  double t12836;
  double t12841;
  double t12842;
  double t12819;
  double t12851;
  double t12853;
  double t12867;
  double t12877;
  double t12899;
  double t12901;
  double t12902;
  double t12903;
  double t12858;
  double t12906;
  double t12913;
  double t12919;
  double t12929;
  double t12933;
  double t12741;
  double t12916;
  double t12940;
  double t12941;
  double t12946;
  double t12956;
  double t12959;
  double t12979;
  double t12984;
  double t12986;
  double t12989;
  double t12993;
  double t12996;
  double t12987;
  double t12998;
  double t13003;
  double t13008;
  double t13009;
  double t13013;
  double t13016;
  double t13020;
  double t13022;
  double t13007;
  double t13026;
  double t13030;
  double t13038;
  double t13039;
  double t13043;
  double t13036;
  double t13050;
  double t13051;
  double t13064;
  double t13075;
  double t13076;
  double t12692;
  double t12728;
  double t12729;
  double t12743;
  double t12746;
  double t12747;
  double t12942;
  double t12961;
  double t12964;
  double t12966;
  double t12969;
  double t12970;
  double t13056;
  double t13083;
  double t13086;
  double t13089;
  double t13090;
  double t13093;
  double t13182;
  double t13184;
  double t13286;
  double t13287;
  double t13358;
  double t13364;
  double t13399;
  double t13401;
  double t13435;
  double t13439;
  double t13109;
  double t13112;
  double t13126;
  double t13190;
  double t13199;
  double t13200;
  double t13205;
  double t13211;
  double t13219;
  double t13229;
  double t13230;
  double t13233;
  double t13250;
  double t13257;
  double t13260;
  double t13261;
  double t13273;
  double t13280;
  double t13293;
  double t13294;
  double t13296;
  double t13308;
  double t13310;
  double t13315;
  double t13341;
  double t13352;
  double t13355;
  double t13368;
  double t13374;
  double t13377;
  double t13381;
  double t13383;
  double t13388;
  double t13407;
  double t13408;
  double t13412;
  double t13419;
  double t13420;
  double t13423;
  double t13441;
  double t13444;
  double t13447;
  double t13452;
  double t13454;
  double t13456;
  double t13127;
  double t13135;
  double t13136;
  double t13138;
  double t13140;
  double t13145;
  t9046 = Cos(var1[5]);
  t10084 = Sin(var1[3]);
  t8132 = Cos(var1[3]);
  t10040 = Sin(var1[4]);
  t10085 = Sin(var1[5]);
  t11996 = Cos(var1[14]);
  t10083 = t8132*t9046*t10040;
  t10087 = t10084*t10085;
  t11833 = t10083 + t10087;
  t7696 = Sin(var1[14]);
  t12168 = -1.*t9046*t10084;
  t12215 = t8132*t10040*t10085;
  t12248 = t12168 + t12215;
  t12434 = Cos(var1[15]);
  t11848 = t7696*t11833;
  t12270 = t11996*t12248;
  t12373 = t11848 + t12270;
  t7694 = Sin(var1[15]);
  t12444 = t11996*t11833;
  t12453 = -1.*t7696*t12248;
  t12476 = t12444 + t12453;
  t12572 = Cos(var1[17]);
  t12405 = -1.*t7694*t12373;
  t12480 = t12434*t12476;
  t12519 = t12405 + t12480;
  t6942 = Sin(var1[17]);
  t12573 = Cos(var1[16]);
  t12576 = Cos(var1[4]);
  t12580 = t12573*t8132*t12576;
  t12582 = Sin(var1[16]);
  t12604 = t12434*t12373;
  t12612 = t7694*t12476;
  t12616 = t12604 + t12612;
  t12637 = t12582*t12616;
  t12641 = t12580 + t12637;
  t12663 = Cos(var1[18]);
  t12560 = t6942*t12519;
  t12647 = t12572*t12641;
  t12648 = t12560 + t12647;
  t5681 = Sin(var1[18]);
  t12667 = t12572*t12519;
  t12671 = -1.*t6942*t12641;
  t12676 = t12667 + t12671;
  t12702 = Cos(var1[19]);
  t12658 = -1.*t5681*t12648;
  t12677 = t12663*t12676;
  t12687 = t12658 + t12677;
  t5112 = Sin(var1[19]);
  t12709 = t12663*t12648;
  t12716 = t5681*t12676;
  t12724 = t12709 + t12716;
  t3509 = Sin(var1[20]);
  t12756 = t9046*t10084*t10040;
  t12759 = -1.*t8132*t10085;
  t12760 = t12756 + t12759;
  t12770 = t8132*t9046;
  t12772 = t10084*t10040*t10085;
  t12783 = t12770 + t12772;
  t12768 = t7696*t12760;
  t12795 = t11996*t12783;
  t12809 = t12768 + t12795;
  t12836 = t11996*t12760;
  t12841 = -1.*t7696*t12783;
  t12842 = t12836 + t12841;
  t12819 = -1.*t7694*t12809;
  t12851 = t12434*t12842;
  t12853 = t12819 + t12851;
  t12867 = t12573*t12576*t10084;
  t12877 = t12434*t12809;
  t12899 = t7694*t12842;
  t12901 = t12877 + t12899;
  t12902 = t12582*t12901;
  t12903 = t12867 + t12902;
  t12858 = t6942*t12853;
  t12906 = t12572*t12903;
  t12913 = t12858 + t12906;
  t12919 = t12572*t12853;
  t12929 = -1.*t6942*t12903;
  t12933 = t12919 + t12929;
  t12741 = Cos(var1[20]);
  t12916 = -1.*t5681*t12913;
  t12940 = t12663*t12933;
  t12941 = t12916 + t12940;
  t12946 = t12663*t12913;
  t12956 = t5681*t12933;
  t12959 = t12946 + t12956;
  t12979 = t12576*t9046*t7696;
  t12984 = t11996*t12576*t10085;
  t12986 = t12979 + t12984;
  t12989 = t11996*t12576*t9046;
  t12993 = -1.*t12576*t7696*t10085;
  t12996 = t12989 + t12993;
  t12987 = -1.*t7694*t12986;
  t12998 = t12434*t12996;
  t13003 = t12987 + t12998;
  t13008 = -1.*t12573*t10040;
  t13009 = t12434*t12986;
  t13013 = t7694*t12996;
  t13016 = t13009 + t13013;
  t13020 = t12582*t13016;
  t13022 = t13008 + t13020;
  t13007 = t6942*t13003;
  t13026 = t12572*t13022;
  t13030 = t13007 + t13026;
  t13038 = t12572*t13003;
  t13039 = -1.*t6942*t13022;
  t13043 = t13038 + t13039;
  t13036 = -1.*t5681*t13030;
  t13050 = t12663*t13043;
  t13051 = t13036 + t13050;
  t13064 = t12663*t13030;
  t13075 = t5681*t13043;
  t13076 = t13064 + t13075;
  t12692 = t5112*t12687;
  t12728 = t12702*t12724;
  t12729 = t12692 + t12728;
  t12743 = t12702*t12687;
  t12746 = -1.*t5112*t12724;
  t12747 = t12743 + t12746;
  t12942 = t5112*t12941;
  t12961 = t12702*t12959;
  t12964 = t12942 + t12961;
  t12966 = t12702*t12941;
  t12969 = -1.*t5112*t12959;
  t12970 = t12966 + t12969;
  t13056 = t5112*t13051;
  t13083 = t12702*t13076;
  t13086 = t13056 + t13083;
  t13089 = t12702*t13051;
  t13090 = -1.*t5112*t13076;
  t13093 = t13089 + t13090;
  t13182 = -1.*t12573;
  t13184 = 1. + t13182;
  t13286 = -1.*t12572;
  t13287 = 1. + t13286;
  t13358 = -1.*t12663;
  t13364 = 1. + t13358;
  t13399 = -1.*t12702;
  t13401 = 1. + t13399;
  t13435 = -1.*t12741;
  t13439 = 1. + t13435;
  t13109 = t12741*t12729;
  t13112 = t3509*t12747;
  t13126 = t13109 + t13112;
  t13190 = -0.049*t13184;
  t13199 = -0.135*t12582;
  t13200 = 0. + t13190 + t13199;
  t13205 = 0.135*t7696;
  t13211 = 0. + t13205;
  t13219 = -1.*t11996;
  t13229 = 1. + t13219;
  t13230 = -0.135*t13229;
  t13233 = 0. + t13230;
  t13250 = -1.*t12434;
  t13257 = 1. + t13250;
  t13260 = -0.135*t13257;
  t13261 = 0. + t13260;
  t13273 = 0.135*t7694;
  t13280 = 0. + t13273;
  t13293 = -0.09*t13287;
  t13294 = 0.049*t6942;
  t13296 = 0. + t13293 + t13294;
  t13308 = -0.135*t13184;
  t13310 = 0.049*t12582;
  t13315 = 0. + t13308 + t13310;
  t13341 = -0.049*t13287;
  t13352 = -0.09*t6942;
  t13355 = 0. + t13341 + t13352;
  t13368 = -0.049*t13364;
  t13374 = -0.21*t5681;
  t13377 = 0. + t13368 + t13374;
  t13381 = -0.21*t13364;
  t13383 = 0.049*t5681;
  t13388 = 0. + t13381 + t13383;
  t13407 = -0.2707*t13401;
  t13408 = 0.0016*t5112;
  t13412 = 0. + t13407 + t13408;
  t13419 = -0.0016*t13401;
  t13420 = -0.2707*t5112;
  t13423 = 0. + t13419 + t13420;
  t13441 = 0.0184*t13439;
  t13444 = -0.7055*t3509;
  t13447 = 0. + t13441 + t13444;
  t13452 = -0.7055*t13439;
  t13454 = -0.0184*t3509;
  t13456 = 0. + t13452 + t13454;
  t13127 = t12741*t12964;
  t13135 = t3509*t12970;
  t13136 = t13127 + t13135;
  t13138 = t12741*t13086;
  t13140 = t3509*t13093;
  t13145 = t13138 + t13140;
  p_output1[0]=-1.*t12741*t12747 + t12729*t3509;
  p_output1[1]=-1.*t12741*t12970 + t12964*t3509;
  p_output1[2]=-1.*t12741*t13093 + t13086*t3509;
  p_output1[3]=0.;
  p_output1[4]=t13126;
  p_output1[5]=t13136;
  p_output1[6]=t13145;
  p_output1[7]=0.;
  p_output1[8]=-1.*t12573*t12616 + t12576*t12582*t8132;
  p_output1[9]=t10084*t12576*t12582 - 1.*t12573*t12901;
  p_output1[10]=-1.*t10040*t12582 - 1.*t12573*t13016;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.0216*t13126 + t11833*t13211 + t12248*t13233 + t12373*t13261 + t12476*t13280 + t12519*t13296 + t12616*t13315 + t12641*t13355 + t12648*t13377 + t12676*t13388 + t12687*t13412 + t12724*t13423 + t12729*t13447 + t12747*t13456 - 1.1135*(t12741*t12747 - 1.*t12729*t3509) + t12576*t13200*t8132 - 0.1305*(t12573*t12616 - 1.*t12576*t12582*t8132) + var1[0];
  p_output1[13]=0. - 0.1305*(-1.*t10084*t12576*t12582 + t12573*t12901) - 0.0216*t13136 + t10084*t12576*t13200 + t12760*t13211 + t12783*t13233 + t12809*t13261 + t12842*t13280 + t12853*t13296 + t12901*t13315 + t12903*t13355 + t12913*t13377 + t12933*t13388 + t12941*t13412 + t12959*t13423 + t12964*t13447 + t12970*t13456 - 1.1135*(t12741*t12970 - 1.*t12964*t3509) + var1[1];
  p_output1[14]=0. - 0.1305*(t10040*t12582 + t12573*t13016) - 0.0216*t13145 - 1.*t10040*t13200 + t10085*t12576*t13233 + t12986*t13261 + t12996*t13280 + t13003*t13296 + t13016*t13315 + t13022*t13355 + t13030*t13377 + t13043*t13388 + t13051*t13412 + t13076*t13423 + t13086*t13447 + t13093*t13456 - 1.1135*(t12741*t13093 - 1.*t13086*t3509) + t12576*t13211*t9046 + var1[2];
  p_output1[15]=1.;
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
    ( !(mrows == 22 && ncols == 1) && 
      !(mrows == 1 && ncols == 22))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 4, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "H_toe_joint_right.hh"

namespace SymExpression
{

void H_toe_joint_right_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
