/*
 * Automatically Generated from Mathematica.
 * Tue 26 Sep 2017 12:22:33 GMT-04:00
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
  double t171;
  double t932;
  double t997;
  double t985;
  double t1261;
  double t623;
  double t990;
  double t1282;
  double t1305;
  double t1392;
  double t2307;
  double t2308;
  double t2427;
  double t9392;
  double t4662;
  double t5348;
  double t8224;
  double t3255;
  double t11848;
  double t12215;
  double t12480;
  double t476;
  double t479;
  double t481;
  double t501;
  double t448;
  double t12933;
  double t12941;
  double t12946;
  double t12580;
  double t12637;
  double t12667;
  double t12692;
  double t12768;
  double t12770;
  double t12772;
  double t13089;
  double t13127;
  double t13135;
  double t13140;
  double t13147;
  double t13148;
  double t13205;
  double t13242;
  double t13260;
  double t13272;
  double t13317;
  double t13339;
  double t13341;
  double t13355;
  double t13368;
  double t13377;
  double t13381;
  double t13418;
  double t13419;
  double t13420;
  double t13458;
  double t13476;
  double t13491;
  double t13506;
  double t13507;
  double t13517;
  double t13525;
  double t13544;
  double t13552;
  double t13555;
  double t13599;
  double t13604;
  double t13611;
  double t13628;
  double t13630;
  double t13636;
  double t13645;
  double t13707;
  double t13714;
  double t13716;
  double t13760;
  double t13765;
  double t13766;
  double t499;
  double t567;
  double t596;
  double t863;
  double t929;
  double t1477;
  double t2132;
  double t2233;
  double t2267;
  double t3562;
  double t4086;
  double t4537;
  double t4542;
  double t13849;
  double t13856;
  double t13859;
  double t13874;
  double t13875;
  double t13877;
  double t10506;
  double t11833;
  double t12687;
  double t12748;
  double t12751;
  double t13892;
  double t13896;
  double t13898;
  double t13900;
  double t13913;
  double t13914;
  double t12858;
  double t12899;
  double t12902;
  double t13977;
  double t13984;
  double t13986;
  double t13038;
  double t13050;
  double t13056;
  double t13150;
  double t13216;
  double t13230;
  double t13928;
  double t13942;
  double t13971;
  double t14005;
  double t14008;
  double t14016;
  double t13293;
  double t13308;
  double t13315;
  double t13380;
  double t13388;
  double t13408;
  double t14026;
  double t14027;
  double t14032;
  double t14041;
  double t14043;
  double t14048;
  double t13441;
  double t13447;
  double t13452;
  double t13518;
  double t13532;
  double t13539;
  double t14058;
  double t14059;
  double t14061;
  double t14063;
  double t14064;
  double t14067;
  double t13573;
  double t13589;
  double t13591;
  double t13639;
  double t13671;
  double t13705;
  double t14071;
  double t14073;
  double t14074;
  double t14078;
  double t14082;
  double t14084;
  double t13719;
  double t13737;
  double t13757;
  double t14089;
  double t14090;
  double t14091;
  double t14094;
  double t14095;
  double t14098;
  double t14132;
  double t14133;
  double t14139;
  double t14145;
  double t14148;
  double t14149;
  double t14158;
  double t14162;
  double t14164;
  double t14152;
  double t14153;
  double t14155;
  double t14174;
  double t14182;
  double t14187;
  double t14195;
  double t14197;
  double t14198;
  double t14201;
  double t14203;
  double t14205;
  double t14208;
  double t14209;
  double t14210;
  double t14216;
  double t14217;
  double t14218;
  double t14220;
  double t14221;
  double t14223;
  double t14227;
  double t14232;
  double t14233;
  double t14239;
  double t14241;
  double t14243;
  double t14250;
  double t14254;
  double t14256;
  t171 = Cos(var1[3]);
  t932 = Cos(var1[5]);
  t997 = Sin(var1[3]);
  t985 = Sin(var1[4]);
  t1261 = Sin(var1[5]);
  t623 = Sin(var1[14]);
  t990 = t171*t932*t985;
  t1282 = t997*t1261;
  t1305 = t990 + t1282;
  t1392 = Cos(var1[14]);
  t2307 = -1.*t932*t997;
  t2308 = t171*t985*t1261;
  t2427 = t2307 + t2308;
  t9392 = Sin(var1[15]);
  t4662 = t623*t1305;
  t5348 = t1392*t2427;
  t8224 = t4662 + t5348;
  t3255 = Cos(var1[15]);
  t11848 = t1392*t1305;
  t12215 = -1.*t623*t2427;
  t12480 = t11848 + t12215;
  t476 = Cos(var1[16]);
  t479 = -1.*t476;
  t481 = 1. + t479;
  t501 = Sin(var1[16]);
  t448 = Cos(var1[4]);
  t12933 = t3255*t8224;
  t12941 = t9392*t12480;
  t12946 = t12933 + t12941;
  t12580 = Cos(var1[17]);
  t12637 = -1.*t12580;
  t12667 = 1. + t12637;
  t12692 = Sin(var1[17]);
  t12768 = -1.*t9392*t8224;
  t12770 = t3255*t12480;
  t12772 = t12768 + t12770;
  t13089 = t476*t171*t448;
  t13127 = t501*t12946;
  t13135 = t13089 + t13127;
  t13140 = Cos(var1[18]);
  t13147 = -1.*t13140;
  t13148 = 1. + t13147;
  t13205 = Sin(var1[18]);
  t13242 = t12692*t12772;
  t13260 = t12580*t13135;
  t13272 = t13242 + t13260;
  t13317 = t12580*t12772;
  t13339 = -1.*t12692*t13135;
  t13341 = t13317 + t13339;
  t13355 = Cos(var1[19]);
  t13368 = -1.*t13355;
  t13377 = 1. + t13368;
  t13381 = Sin(var1[19]);
  t13418 = -1.*t13205*t13272;
  t13419 = t13140*t13341;
  t13420 = t13418 + t13419;
  t13458 = t13140*t13272;
  t13476 = t13205*t13341;
  t13491 = t13458 + t13476;
  t13506 = Cos(var1[20]);
  t13507 = -1.*t13506;
  t13517 = 1. + t13507;
  t13525 = Sin(var1[20]);
  t13544 = t13381*t13420;
  t13552 = t13355*t13491;
  t13555 = t13544 + t13552;
  t13599 = t13355*t13420;
  t13604 = -1.*t13381*t13491;
  t13611 = t13599 + t13604;
  t13628 = Cos(var1[21]);
  t13630 = -1.*t13628;
  t13636 = 1. + t13630;
  t13645 = Sin(var1[21]);
  t13707 = -1.*t13525*t13555;
  t13714 = t13506*t13611;
  t13716 = t13707 + t13714;
  t13760 = t13506*t13555;
  t13765 = t13525*t13611;
  t13766 = t13760 + t13765;
  t499 = -0.049*t481;
  t567 = -0.135*t501;
  t596 = 0. + t499 + t567;
  t863 = 0.135*t623;
  t929 = 0. + t863;
  t1477 = -1.*t1392;
  t2132 = 1. + t1477;
  t2233 = -0.135*t2132;
  t2267 = 0. + t2233;
  t3562 = -1.*t3255;
  t4086 = 1. + t3562;
  t4537 = -0.135*t4086;
  t4542 = 0. + t4537;
  t13849 = t932*t997*t985;
  t13856 = -1.*t171*t1261;
  t13859 = t13849 + t13856;
  t13874 = t171*t932;
  t13875 = t997*t985*t1261;
  t13877 = t13874 + t13875;
  t10506 = 0.135*t9392;
  t11833 = 0. + t10506;
  t12687 = -0.09*t12667;
  t12748 = 0.049*t12692;
  t12751 = 0. + t12687 + t12748;
  t13892 = t623*t13859;
  t13896 = t1392*t13877;
  t13898 = t13892 + t13896;
  t13900 = t1392*t13859;
  t13913 = -1.*t623*t13877;
  t13914 = t13900 + t13913;
  t12858 = -0.135*t481;
  t12899 = 0.049*t501;
  t12902 = 0. + t12858 + t12899;
  t13977 = t3255*t13898;
  t13984 = t9392*t13914;
  t13986 = t13977 + t13984;
  t13038 = -0.049*t12667;
  t13050 = -0.09*t12692;
  t13056 = 0. + t13038 + t13050;
  t13150 = -0.049*t13148;
  t13216 = -0.21*t13205;
  t13230 = 0. + t13150 + t13216;
  t13928 = -1.*t9392*t13898;
  t13942 = t3255*t13914;
  t13971 = t13928 + t13942;
  t14005 = t476*t448*t997;
  t14008 = t501*t13986;
  t14016 = t14005 + t14008;
  t13293 = -0.21*t13148;
  t13308 = 0.049*t13205;
  t13315 = 0. + t13293 + t13308;
  t13380 = -0.2707*t13377;
  t13388 = 0.0016*t13381;
  t13408 = 0. + t13380 + t13388;
  t14026 = t12692*t13971;
  t14027 = t12580*t14016;
  t14032 = t14026 + t14027;
  t14041 = t12580*t13971;
  t14043 = -1.*t12692*t14016;
  t14048 = t14041 + t14043;
  t13441 = -0.0016*t13377;
  t13447 = -0.2707*t13381;
  t13452 = 0. + t13441 + t13447;
  t13518 = 0.0184*t13517;
  t13532 = -0.7055*t13525;
  t13539 = 0. + t13518 + t13532;
  t14058 = -1.*t13205*t14032;
  t14059 = t13140*t14048;
  t14061 = t14058 + t14059;
  t14063 = t13140*t14032;
  t14064 = t13205*t14048;
  t14067 = t14063 + t14064;
  t13573 = -0.7055*t13517;
  t13589 = -0.0184*t13525;
  t13591 = 0. + t13573 + t13589;
  t13639 = -1.1135*t13636;
  t13671 = 0.0216*t13645;
  t13705 = 0. + t13639 + t13671;
  t14071 = t13381*t14061;
  t14073 = t13355*t14067;
  t14074 = t14071 + t14073;
  t14078 = t13355*t14061;
  t14082 = -1.*t13381*t14067;
  t14084 = t14078 + t14082;
  t13719 = -0.0216*t13636;
  t13737 = -1.1135*t13645;
  t13757 = 0. + t13719 + t13737;
  t14089 = -1.*t13525*t14074;
  t14090 = t13506*t14084;
  t14091 = t14089 + t14090;
  t14094 = t13506*t14074;
  t14095 = t13525*t14084;
  t14098 = t14094 + t14095;
  t14132 = t448*t932*t623;
  t14133 = t1392*t448*t1261;
  t14139 = t14132 + t14133;
  t14145 = t1392*t448*t932;
  t14148 = -1.*t448*t623*t1261;
  t14149 = t14145 + t14148;
  t14158 = t3255*t14139;
  t14162 = t9392*t14149;
  t14164 = t14158 + t14162;
  t14152 = -1.*t9392*t14139;
  t14153 = t3255*t14149;
  t14155 = t14152 + t14153;
  t14174 = -1.*t476*t985;
  t14182 = t501*t14164;
  t14187 = t14174 + t14182;
  t14195 = t12692*t14155;
  t14197 = t12580*t14187;
  t14198 = t14195 + t14197;
  t14201 = t12580*t14155;
  t14203 = -1.*t12692*t14187;
  t14205 = t14201 + t14203;
  t14208 = -1.*t13205*t14198;
  t14209 = t13140*t14205;
  t14210 = t14208 + t14209;
  t14216 = t13140*t14198;
  t14217 = t13205*t14205;
  t14218 = t14216 + t14217;
  t14220 = t13381*t14210;
  t14221 = t13355*t14218;
  t14223 = t14220 + t14221;
  t14227 = t13355*t14210;
  t14232 = -1.*t13381*t14218;
  t14233 = t14227 + t14232;
  t14239 = -1.*t13525*t14223;
  t14241 = t13506*t14233;
  t14243 = t14239 + t14241;
  t14250 = t13506*t14223;
  t14254 = t13525*t14233;
  t14256 = t14250 + t14254;
  p_output1[0]=0. + t11833*t12480 + t12751*t12772 + t12902*t12946 + t13056*t13135 + t13230*t13272 + t13315*t13341 + t13408*t13420 + t13452*t13491 + t13539*t13555 + t13591*t13611 + t13705*t13716 + t13757*t13766 + 0.0306*(t13645*t13716 + t13628*t13766) - 1.1312*(t13628*t13716 - 1.*t13645*t13766) + t2267*t2427 - 0.1305*(t12946*t476 - 1.*t171*t448*t501) + t171*t448*t596 + t4542*t8224 + t1305*t929 + var1[0];
  p_output1[1]=0. + t11833*t13914 + t12751*t13971 + t12902*t13986 + t13056*t14016 + t13230*t14032 + t13315*t14048 + t13408*t14061 + t13452*t14067 + t13539*t14074 + t13591*t14084 + t13705*t14091 + t13757*t14098 + 0.0306*(t13645*t14091 + t13628*t14098) - 1.1312*(t13628*t14091 - 1.*t13645*t14098) + t13877*t2267 + t13898*t4542 + t13859*t929 + t448*t596*t997 - 0.1305*(t13986*t476 - 1.*t448*t501*t997) + var1[1];
  p_output1[2]=0. + t11833*t14149 + t12751*t14155 + t12902*t14164 + t13056*t14187 + t13230*t14198 + t13315*t14205 + t13408*t14210 + t13452*t14218 + t13539*t14223 + t13591*t14233 + t13705*t14243 + t13757*t14256 + 0.0306*(t13645*t14243 + t13628*t14256) - 1.1312*(t13628*t14243 - 1.*t13645*t14256) + t1261*t2267*t448 + t14139*t4542 + t448*t929*t932 - 1.*t596*t985 - 0.1305*(t14164*t476 + t501*t985) + var1[2];
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

#include "p_RightToeBottom.hh"

namespace SymExpression
{

void p_RightToeBottom_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
