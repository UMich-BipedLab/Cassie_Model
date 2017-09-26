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
  double t6145;
  double t2880;
  double t6563;
  double t2881;
  double t9202;
  double t803;
  double t5384;
  double t9392;
  double t10083;
  double t10506;
  double t10524;
  double t10526;
  double t11186;
  double t12270;
  double t12637;
  double t12647;
  double t12667;
  double t12560;
  double t12580;
  double t12604;
  double t12676;
  double t12842;
  double t12851;
  double t12853;
  double t12867;
  double t12772;
  double t12795;
  double t12836;
  double t12906;
  double t12709;
  double t12716;
  double t12728;
  double t12743;
  double t12756;
  double t12760;
  double t12768;
  double t12977;
  double t12979;
  double t12984;
  double t12996;
  double t12998;
  double t13003;
  double t13009;
  double t13026;
  double t13038;
  double t13043;
  double t13075;
  double t13083;
  double t13088;
  double t13098;
  double t13100;
  double t13109;
  double t13126;
  double t13136;
  double t13138;
  double t13140;
  double t13150;
  double t13156;
  double t13157;
  double t13167;
  double t13180;
  double t13190;
  double t13204;
  double t13216;
  double t13230;
  double t13233;
  double t13273;
  double t13280;
  double t13281;
  double t13294;
  double t13296;
  double t13306;
  double t13310;
  double t13327;
  double t13331;
  double t13338;
  double t13356;
  double t13368;
  double t13374;
  double t901;
  double t1260;
  double t1261;
  double t1643;
  double t11833;
  double t11848;
  double t12444;
  double t12476;
  double t12480;
  double t12519;
  double t13419;
  double t13420;
  double t13423;
  double t13441;
  double t13444;
  double t13447;
  double t12677;
  double t12687;
  double t12735;
  double t12748;
  double t12751;
  double t13476;
  double t13477;
  double t13488;
  double t13452;
  double t13454;
  double t13456;
  double t12858;
  double t12877;
  double t12899;
  double t12919;
  double t12933;
  double t12940;
  double t13517;
  double t13518;
  double t13523;
  double t12965;
  double t12966;
  double t12975;
  double t13007;
  double t13013;
  double t13020;
  double t13492;
  double t13495;
  double t13506;
  double t13552;
  double t13555;
  double t13559;
  double t13051;
  double t13056;
  double t13064;
  double t13112;
  double t13127;
  double t13135;
  double t13573;
  double t13583;
  double t13588;
  double t13591;
  double t13597;
  double t13598;
  double t13147;
  double t13148;
  double t13149;
  double t13199;
  double t13205;
  double t13211;
  double t13600;
  double t13603;
  double t13604;
  double t13608;
  double t13611;
  double t13616;
  double t13260;
  double t13261;
  double t13272;
  double t13308;
  double t13315;
  double t13317;
  double t13627;
  double t13628;
  double t13629;
  double t13636;
  double t13638;
  double t13639;
  double t13341;
  double t13352;
  double t13355;
  double t13646;
  double t13647;
  double t13657;
  double t13692;
  double t13699;
  double t13704;
  double t13780;
  double t13784;
  double t13787;
  double t13766;
  double t13770;
  double t13774;
  double t13818;
  double t13830;
  double t13836;
  double t13804;
  double t13806;
  double t13810;
  double t13861;
  double t13867;
  double t13869;
  double t13875;
  double t13877;
  double t13882;
  double t13889;
  double t13890;
  double t13891;
  double t13895;
  double t13896;
  double t13898;
  double t13900;
  double t13903;
  double t13905;
  double t13913;
  double t13914;
  double t13921;
  double t13928;
  double t13930;
  double t13935;
  double t13940;
  double t13942;
  double t13957;
  double t13973;
  double t13977;
  double t13980;
  t6145 = Cos(var1[3]);
  t2880 = Cos(var1[5]);
  t6563 = Sin(var1[4]);
  t2881 = Sin(var1[3]);
  t9202 = Sin(var1[5]);
  t803 = Cos(var1[6]);
  t5384 = -1.*t2880*t2881;
  t9392 = t6145*t6563*t9202;
  t10083 = t5384 + t9392;
  t10506 = t6145*t2880*t6563;
  t10524 = t2881*t9202;
  t10526 = t10506 + t10524;
  t11186 = Sin(var1[6]);
  t12270 = Cos(var1[7]);
  t12637 = t803*t10526;
  t12647 = -1.*t10083*t11186;
  t12667 = t12637 + t12647;
  t12560 = t803*t10083;
  t12580 = t10526*t11186;
  t12604 = t12560 + t12580;
  t12676 = Sin(var1[7]);
  t12842 = Cos(var1[8]);
  t12851 = -1.*t12842;
  t12853 = 1. + t12851;
  t12867 = Sin(var1[8]);
  t12772 = t12270*t12604;
  t12795 = t12667*t12676;
  t12836 = t12772 + t12795;
  t12906 = Cos(var1[4]);
  t12709 = Cos(var1[9]);
  t12716 = -1.*t12709;
  t12728 = 1. + t12716;
  t12743 = Sin(var1[9]);
  t12756 = t12270*t12667;
  t12760 = -1.*t12604*t12676;
  t12768 = t12756 + t12760;
  t12977 = t6145*t12906*t12842;
  t12979 = t12836*t12867;
  t12984 = t12977 + t12979;
  t12996 = Cos(var1[10]);
  t12998 = -1.*t12996;
  t13003 = 1. + t12998;
  t13009 = Sin(var1[10]);
  t13026 = t12743*t12768;
  t13038 = t12709*t12984;
  t13043 = t13026 + t13038;
  t13075 = t12709*t12768;
  t13083 = -1.*t12743*t12984;
  t13088 = t13075 + t13083;
  t13098 = Cos(var1[11]);
  t13100 = -1.*t13098;
  t13109 = 1. + t13100;
  t13126 = Sin(var1[11]);
  t13136 = -1.*t13009*t13043;
  t13138 = t12996*t13088;
  t13140 = t13136 + t13138;
  t13150 = t12996*t13043;
  t13156 = t13009*t13088;
  t13157 = t13150 + t13156;
  t13167 = Cos(var1[12]);
  t13180 = -1.*t13167;
  t13190 = 1. + t13180;
  t13204 = Sin(var1[12]);
  t13216 = t13126*t13140;
  t13230 = t13098*t13157;
  t13233 = t13216 + t13230;
  t13273 = t13098*t13140;
  t13280 = -1.*t13126*t13157;
  t13281 = t13273 + t13280;
  t13294 = Cos(var1[13]);
  t13296 = -1.*t13294;
  t13306 = 1. + t13296;
  t13310 = Sin(var1[13]);
  t13327 = -1.*t13204*t13233;
  t13331 = t13167*t13281;
  t13338 = t13327 + t13331;
  t13356 = t13167*t13233;
  t13368 = t13204*t13281;
  t13374 = t13356 + t13368;
  t901 = -1.*t803;
  t1260 = 1. + t901;
  t1261 = 0.135*t1260;
  t1643 = 0. + t1261;
  t11833 = -0.135*t11186;
  t11848 = 0. + t11833;
  t12444 = -1.*t12270;
  t12476 = 1. + t12444;
  t12480 = 0.135*t12476;
  t12519 = 0. + t12480;
  t13419 = t6145*t2880;
  t13420 = t2881*t6563*t9202;
  t13423 = t13419 + t13420;
  t13441 = t2880*t2881*t6563;
  t13444 = -1.*t6145*t9202;
  t13447 = t13441 + t13444;
  t12677 = -0.135*t12676;
  t12687 = 0. + t12677;
  t12735 = -0.09*t12728;
  t12748 = 0.049*t12743;
  t12751 = 0. + t12735 + t12748;
  t13476 = t803*t13447;
  t13477 = -1.*t13423*t11186;
  t13488 = t13476 + t13477;
  t13452 = t803*t13423;
  t13454 = t13447*t11186;
  t13456 = t13452 + t13454;
  t12858 = 0.135*t12853;
  t12877 = 0.049*t12867;
  t12899 = 0. + t12858 + t12877;
  t12919 = -0.049*t12853;
  t12933 = 0.135*t12867;
  t12940 = 0. + t12919 + t12933;
  t13517 = t12270*t13456;
  t13518 = t13488*t12676;
  t13523 = t13517 + t13518;
  t12965 = -0.049*t12728;
  t12966 = -0.09*t12743;
  t12975 = 0. + t12965 + t12966;
  t13007 = -0.049*t13003;
  t13013 = -0.21*t13009;
  t13020 = 0. + t13007 + t13013;
  t13492 = t12270*t13488;
  t13495 = -1.*t13456*t12676;
  t13506 = t13492 + t13495;
  t13552 = t12906*t12842*t2881;
  t13555 = t13523*t12867;
  t13559 = t13552 + t13555;
  t13051 = -0.21*t13003;
  t13056 = 0.049*t13009;
  t13064 = 0. + t13051 + t13056;
  t13112 = -0.2707*t13109;
  t13127 = 0.0016*t13126;
  t13135 = 0. + t13112 + t13127;
  t13573 = t12743*t13506;
  t13583 = t12709*t13559;
  t13588 = t13573 + t13583;
  t13591 = t12709*t13506;
  t13597 = -1.*t12743*t13559;
  t13598 = t13591 + t13597;
  t13147 = -0.0016*t13109;
  t13148 = -0.2707*t13126;
  t13149 = 0. + t13147 + t13148;
  t13199 = 0.0184*t13190;
  t13205 = -0.7055*t13204;
  t13211 = 0. + t13199 + t13205;
  t13600 = -1.*t13009*t13588;
  t13603 = t12996*t13598;
  t13604 = t13600 + t13603;
  t13608 = t12996*t13588;
  t13611 = t13009*t13598;
  t13616 = t13608 + t13611;
  t13260 = -0.7055*t13190;
  t13261 = -0.0184*t13204;
  t13272 = 0. + t13260 + t13261;
  t13308 = -1.1135*t13306;
  t13315 = 0.0216*t13310;
  t13317 = 0. + t13308 + t13315;
  t13627 = t13126*t13604;
  t13628 = t13098*t13616;
  t13629 = t13627 + t13628;
  t13636 = t13098*t13604;
  t13638 = -1.*t13126*t13616;
  t13639 = t13636 + t13638;
  t13341 = -0.0216*t13306;
  t13352 = -1.1135*t13310;
  t13355 = 0. + t13341 + t13352;
  t13646 = -1.*t13204*t13629;
  t13647 = t13167*t13639;
  t13657 = t13646 + t13647;
  t13692 = t13167*t13629;
  t13699 = t13204*t13639;
  t13704 = t13692 + t13699;
  t13780 = t12906*t2880*t803;
  t13784 = -1.*t12906*t9202*t11186;
  t13787 = t13780 + t13784;
  t13766 = t12906*t803*t9202;
  t13770 = t12906*t2880*t11186;
  t13774 = t13766 + t13770;
  t13818 = t12270*t13774;
  t13830 = t13787*t12676;
  t13836 = t13818 + t13830;
  t13804 = t12270*t13787;
  t13806 = -1.*t13774*t12676;
  t13810 = t13804 + t13806;
  t13861 = -1.*t12842*t6563;
  t13867 = t13836*t12867;
  t13869 = t13861 + t13867;
  t13875 = t12743*t13810;
  t13877 = t12709*t13869;
  t13882 = t13875 + t13877;
  t13889 = t12709*t13810;
  t13890 = -1.*t12743*t13869;
  t13891 = t13889 + t13890;
  t13895 = -1.*t13009*t13882;
  t13896 = t12996*t13891;
  t13898 = t13895 + t13896;
  t13900 = t12996*t13882;
  t13903 = t13009*t13891;
  t13905 = t13900 + t13903;
  t13913 = t13126*t13898;
  t13914 = t13098*t13905;
  t13921 = t13913 + t13914;
  t13928 = t13098*t13898;
  t13930 = -1.*t13126*t13905;
  t13935 = t13928 + t13930;
  t13940 = -1.*t13204*t13921;
  t13942 = t13167*t13935;
  t13957 = t13940 + t13942;
  t13973 = t13167*t13921;
  t13977 = t13204*t13935;
  t13980 = t13973 + t13977;
  p_output1[0]=0. + t10526*t11848 + t12519*t12604 + t12667*t12687 + t12751*t12768 + t12836*t12899 + t12975*t12984 + t13020*t13043 + t13064*t13088 + t13135*t13140 + t13149*t13157 + t13211*t13233 + t13272*t13281 + t13317*t13338 + t13355*t13374 + 0.0306*(t13310*t13338 + t13294*t13374) - 1.1312*(t13294*t13338 - 1.*t13310*t13374) + t10083*t1643 + t12906*t12940*t6145 + 0.1305*(t12836*t12842 - 1.*t12867*t12906*t6145) + var1[0];
  p_output1[1]=0. + t11848*t13447 + t12519*t13456 + t12687*t13488 + t12751*t13506 + t12899*t13523 + t12975*t13559 + t13020*t13588 + t13064*t13598 + t13135*t13604 + t13149*t13616 + t13211*t13629 + t13272*t13639 + t13317*t13657 + t13355*t13704 + 0.0306*(t13310*t13657 + t13294*t13704) - 1.1312*(t13294*t13657 - 1.*t13310*t13704) + t13423*t1643 + t12906*t12940*t2881 + 0.1305*(t12842*t13523 - 1.*t12867*t12906*t2881) + var1[1];
  p_output1[2]=0. + t12519*t13774 + t12687*t13787 + t12751*t13810 + t12899*t13836 + t12975*t13869 + t13020*t13882 + t13064*t13891 + t13135*t13898 + t13149*t13905 + t13211*t13921 + t13272*t13935 + t13317*t13957 + t13355*t13980 + 0.0306*(t13310*t13957 + t13294*t13980) - 1.1312*(t13294*t13957 - 1.*t13310*t13980) + t11848*t12906*t2880 - 1.*t12940*t6563 + 0.1305*(t12842*t13836 + t12867*t6563) + t12906*t1643*t9202 + var1[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "p_LeftToeBottom.hh"

namespace SymExpression
{

void p_LeftToeBottom_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
