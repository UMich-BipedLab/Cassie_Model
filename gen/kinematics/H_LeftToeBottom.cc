/*
 * Automatically Generated from Mathematica.
 * Tue 26 Sep 2017 12:22:32 GMT-04:00
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
  double t224;
  double t189;
  double t368;
  double t199;
  double t472;
  double t181;
  double t596;
  double t1261;
  double t1282;
  double t205;
  double t481;
  double t562;
  double t1283;
  double t134;
  double t135;
  double t12580;
  double t12612;
  double t12637;
  double t12215;
  double t12480;
  double t12519;
  double t8857;
  double t10524;
  double t10526;
  double t3562;
  double t4314;
  double t8224;
  double t567;
  double t1392;
  double t1643;
  double t2267;
  double t9392;
  double t10087;
  double t13026;
  double t12989;
  double t13007;
  double t13013;
  double t12979;
  double t13038;
  double t13050;
  double t13051;
  double t13088;
  double t13020;
  double t13056;
  double t13064;
  double t12977;
  double t13089;
  double t13112;
  double t13127;
  double t13145;
  double t13075;
  double t13135;
  double t13138;
  double t12975;
  double t13147;
  double t13148;
  double t13149;
  double t13199;
  double t13140;
  double t13150;
  double t13156;
  double t12966;
  double t13205;
  double t13211;
  double t13216;
  double t13261;
  double t13158;
  double t13230;
  double t13242;
  double t12965;
  double t13272;
  double t13273;
  double t13281;
  double t12692;
  double t12735;
  double t12748;
  double t12560;
  double t12667;
  double t12677;
  double t12687;
  double t12751;
  double t12756;
  double t13355;
  double t13356;
  double t13368;
  double t13380;
  double t13381;
  double t13383;
  double t13377;
  double t13388;
  double t13393;
  double t13408;
  double t13412;
  double t13418;
  double t13407;
  double t13419;
  double t13420;
  double t13441;
  double t13447;
  double t13450;
  double t13430;
  double t13452;
  double t13454;
  double t13476;
  double t13488;
  double t13491;
  double t13463;
  double t13492;
  double t13506;
  double t13517;
  double t13518;
  double t13524;
  double t12902;
  double t12919;
  double t12933;
  double t12795;
  double t12858;
  double t12877;
  double t12899;
  double t12941;
  double t12942;
  double t13573;
  double t13583;
  double t13589;
  double t13598;
  double t13599;
  double t13603;
  double t13591;
  double t13604;
  double t13606;
  double t13611;
  double t13621;
  double t13627;
  double t13608;
  double t13628;
  double t13630;
  double t13639;
  double t13645;
  double t13647;
  double t13636;
  double t13671;
  double t13692;
  double t13705;
  double t13706;
  double t13707;
  double t13699;
  double t13714;
  double t13716;
  double t13719;
  double t13737;
  double t13755;
  double t13260;
  double t13293;
  double t13308;
  double t13317;
  double t13331;
  double t13339;
  double t13507;
  double t13525;
  double t13532;
  double t13544;
  double t13547;
  double t13552;
  double t13718;
  double t13757;
  double t13760;
  double t13766;
  double t13770;
  double t13778;
  double t13935;
  double t13937;
  double t13903;
  double t13909;
  double t14021;
  double t14024;
  double t14051;
  double t14057;
  double t14069;
  double t14070;
  double t14087;
  double t14088;
  double t13851;
  double t13854;
  double t13856;
  double t13859;
  double t13874;
  double t13875;
  double t13886;
  double t13889;
  double t13891;
  double t13892;
  double t13898;
  double t13899;
  double t13913;
  double t13914;
  double t13923;
  double t13942;
  double t13971;
  double t13973;
  double t13984;
  double t13986;
  double t13990;
  double t14005;
  double t14008;
  double t14016;
  double t14026;
  double t14027;
  double t14032;
  double t14041;
  double t14043;
  double t14048;
  double t14058;
  double t14059;
  double t14061;
  double t14063;
  double t14064;
  double t14067;
  double t14071;
  double t14073;
  double t14074;
  double t14078;
  double t14082;
  double t14084;
  double t14089;
  double t14090;
  double t14091;
  double t14094;
  double t14095;
  double t14098;
  t224 = Cos(var1[3]);
  t189 = Cos(var1[5]);
  t368 = Sin(var1[4]);
  t199 = Sin(var1[3]);
  t472 = Sin(var1[5]);
  t181 = Cos(var1[6]);
  t596 = t224*t189*t368;
  t1261 = t199*t472;
  t1282 = t596 + t1261;
  t205 = -1.*t189*t199;
  t481 = t224*t368*t472;
  t562 = t205 + t481;
  t1283 = Sin(var1[6]);
  t134 = Cos(var1[8]);
  t135 = Cos(var1[7]);
  t12580 = t189*t199*t368;
  t12612 = -1.*t224*t472;
  t12637 = t12580 + t12612;
  t12215 = t224*t189;
  t12480 = t199*t368*t472;
  t12519 = t12215 + t12480;
  t8857 = Sin(var1[7]);
  t10524 = Cos(var1[4]);
  t10526 = Sin(var1[8]);
  t3562 = t181*t1282;
  t4314 = -1.*t562*t1283;
  t8224 = t3562 + t4314;
  t567 = t181*t562;
  t1392 = t1282*t1283;
  t1643 = t567 + t1392;
  t2267 = t135*t1643;
  t9392 = t8224*t8857;
  t10087 = t2267 + t9392;
  t13026 = Cos(var1[9]);
  t12989 = t135*t8224;
  t13007 = -1.*t1643*t8857;
  t13013 = t12989 + t13007;
  t12979 = Sin(var1[9]);
  t13038 = t224*t10524*t134;
  t13050 = t10087*t10526;
  t13051 = t13038 + t13050;
  t13088 = Cos(var1[10]);
  t13020 = t12979*t13013;
  t13056 = t13026*t13051;
  t13064 = t13020 + t13056;
  t12977 = Sin(var1[10]);
  t13089 = t13026*t13013;
  t13112 = -1.*t12979*t13051;
  t13127 = t13089 + t13112;
  t13145 = Cos(var1[11]);
  t13075 = -1.*t12977*t13064;
  t13135 = t13088*t13127;
  t13138 = t13075 + t13135;
  t12975 = Sin(var1[11]);
  t13147 = t13088*t13064;
  t13148 = t12977*t13127;
  t13149 = t13147 + t13148;
  t13199 = Cos(var1[12]);
  t13140 = t12975*t13138;
  t13150 = t13145*t13149;
  t13156 = t13140 + t13150;
  t12966 = Sin(var1[12]);
  t13205 = t13145*t13138;
  t13211 = -1.*t12975*t13149;
  t13216 = t13205 + t13211;
  t13261 = Cos(var1[13]);
  t13158 = -1.*t12966*t13156;
  t13230 = t13199*t13216;
  t13242 = t13158 + t13230;
  t12965 = Sin(var1[13]);
  t13272 = t13199*t13156;
  t13273 = t12966*t13216;
  t13281 = t13272 + t13273;
  t12692 = t181*t12637;
  t12735 = -1.*t12519*t1283;
  t12748 = t12692 + t12735;
  t12560 = t181*t12519;
  t12667 = t12637*t1283;
  t12677 = t12560 + t12667;
  t12687 = t135*t12677;
  t12751 = t12748*t8857;
  t12756 = t12687 + t12751;
  t13355 = t135*t12748;
  t13356 = -1.*t12677*t8857;
  t13368 = t13355 + t13356;
  t13380 = t10524*t134*t199;
  t13381 = t12756*t10526;
  t13383 = t13380 + t13381;
  t13377 = t12979*t13368;
  t13388 = t13026*t13383;
  t13393 = t13377 + t13388;
  t13408 = t13026*t13368;
  t13412 = -1.*t12979*t13383;
  t13418 = t13408 + t13412;
  t13407 = -1.*t12977*t13393;
  t13419 = t13088*t13418;
  t13420 = t13407 + t13419;
  t13441 = t13088*t13393;
  t13447 = t12977*t13418;
  t13450 = t13441 + t13447;
  t13430 = t12975*t13420;
  t13452 = t13145*t13450;
  t13454 = t13430 + t13452;
  t13476 = t13145*t13420;
  t13488 = -1.*t12975*t13450;
  t13491 = t13476 + t13488;
  t13463 = -1.*t12966*t13454;
  t13492 = t13199*t13491;
  t13506 = t13463 + t13492;
  t13517 = t13199*t13454;
  t13518 = t12966*t13491;
  t13524 = t13517 + t13518;
  t12902 = t10524*t189*t181;
  t12919 = -1.*t10524*t472*t1283;
  t12933 = t12902 + t12919;
  t12795 = t10524*t181*t472;
  t12858 = t10524*t189*t1283;
  t12877 = t12795 + t12858;
  t12899 = t135*t12877;
  t12941 = t12933*t8857;
  t12942 = t12899 + t12941;
  t13573 = t135*t12933;
  t13583 = -1.*t12877*t8857;
  t13589 = t13573 + t13583;
  t13598 = -1.*t134*t368;
  t13599 = t12942*t10526;
  t13603 = t13598 + t13599;
  t13591 = t12979*t13589;
  t13604 = t13026*t13603;
  t13606 = t13591 + t13604;
  t13611 = t13026*t13589;
  t13621 = -1.*t12979*t13603;
  t13627 = t13611 + t13621;
  t13608 = -1.*t12977*t13606;
  t13628 = t13088*t13627;
  t13630 = t13608 + t13628;
  t13639 = t13088*t13606;
  t13645 = t12977*t13627;
  t13647 = t13639 + t13645;
  t13636 = t12975*t13630;
  t13671 = t13145*t13647;
  t13692 = t13636 + t13671;
  t13705 = t13145*t13630;
  t13706 = -1.*t12975*t13647;
  t13707 = t13705 + t13706;
  t13699 = -1.*t12966*t13692;
  t13714 = t13199*t13707;
  t13716 = t13699 + t13714;
  t13719 = t13199*t13692;
  t13737 = t12966*t13707;
  t13755 = t13719 + t13737;
  t13260 = t12965*t13242;
  t13293 = t13261*t13281;
  t13308 = t13260 + t13293;
  t13317 = t13261*t13242;
  t13331 = -1.*t12965*t13281;
  t13339 = t13317 + t13331;
  t13507 = t12965*t13506;
  t13525 = t13261*t13524;
  t13532 = t13507 + t13525;
  t13544 = t13261*t13506;
  t13547 = -1.*t12965*t13524;
  t13552 = t13544 + t13547;
  t13718 = t12965*t13716;
  t13757 = t13261*t13755;
  t13760 = t13718 + t13757;
  t13766 = t13261*t13716;
  t13770 = -1.*t12965*t13755;
  t13778 = t13766 + t13770;
  t13935 = -1.*t134;
  t13937 = 1. + t13935;
  t13903 = -1.*t13026;
  t13909 = 1. + t13903;
  t14021 = -1.*t13088;
  t14024 = 1. + t14021;
  t14051 = -1.*t13145;
  t14057 = 1. + t14051;
  t14069 = -1.*t13199;
  t14070 = 1. + t14069;
  t14087 = -1.*t13261;
  t14088 = 1. + t14087;
  t13851 = -1.*t181;
  t13854 = 1. + t13851;
  t13856 = 0.135*t13854;
  t13859 = 0. + t13856;
  t13874 = -0.135*t1283;
  t13875 = 0. + t13874;
  t13886 = -1.*t135;
  t13889 = 1. + t13886;
  t13891 = 0.135*t13889;
  t13892 = 0. + t13891;
  t13898 = -0.135*t8857;
  t13899 = 0. + t13898;
  t13913 = -0.09*t13909;
  t13914 = 0.049*t12979;
  t13923 = 0. + t13913 + t13914;
  t13942 = 0.135*t13937;
  t13971 = 0.049*t10526;
  t13973 = 0. + t13942 + t13971;
  t13984 = -0.049*t13937;
  t13986 = 0.135*t10526;
  t13990 = 0. + t13984 + t13986;
  t14005 = -0.049*t13909;
  t14008 = -0.09*t12979;
  t14016 = 0. + t14005 + t14008;
  t14026 = -0.049*t14024;
  t14027 = -0.21*t12977;
  t14032 = 0. + t14026 + t14027;
  t14041 = -0.21*t14024;
  t14043 = 0.049*t12977;
  t14048 = 0. + t14041 + t14043;
  t14058 = -0.2707*t14057;
  t14059 = 0.0016*t12975;
  t14061 = 0. + t14058 + t14059;
  t14063 = -0.0016*t14057;
  t14064 = -0.2707*t12975;
  t14067 = 0. + t14063 + t14064;
  t14071 = 0.0184*t14070;
  t14073 = -0.7055*t12966;
  t14074 = 0. + t14071 + t14073;
  t14078 = -0.7055*t14070;
  t14082 = -0.0184*t12966;
  t14084 = 0. + t14078 + t14082;
  t14089 = -1.1135*t14088;
  t14090 = 0.0216*t12965;
  t14091 = 0. + t14089 + t14090;
  t14094 = -0.0216*t14088;
  t14095 = -1.1135*t12965;
  t14098 = 0. + t14094 + t14095;
  p_output1[0]=-1.*t10087*t134 + t10524*t10526*t224;
  p_output1[1]=-1.*t12756*t134 + t10524*t10526*t199;
  p_output1[2]=-1.*t12942*t134 - 1.*t10526*t368;
  p_output1[3]=0.;
  p_output1[4]=0.642788*t13308 + 0.766044*t13339;
  p_output1[5]=0.642788*t13532 + 0.766044*t13552;
  p_output1[6]=0.642788*t13760 + 0.766044*t13778;
  p_output1[7]=0.;
  p_output1[8]=-0.766044*t13308 + 0.642788*t13339;
  p_output1[9]=-0.766044*t13532 + 0.642788*t13552;
  p_output1[10]=-0.766044*t13760 + 0.642788*t13778;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.0306*t13308 - 1.1312*t13339 + t1282*t13875 + t13013*t13923 + t10087*t13973 + t13051*t14016 + t13064*t14032 + t13127*t14048 + t13138*t14061 + t13149*t14067 + t13156*t14074 + t13216*t14084 + t13242*t14091 + t13281*t14098 + t13892*t1643 + t10524*t13990*t224 + 0.1305*(t10087*t134 - 1.*t10524*t10526*t224) + t13859*t562 + t13899*t8224 + var1[0];
  p_output1[13]=0. + 0.0306*t13532 - 1.1312*t13552 + t12519*t13859 + t12637*t13875 + t12677*t13892 + t12748*t13899 + t13368*t13923 + t12756*t13973 + t13383*t14016 + t13393*t14032 + t13418*t14048 + t13420*t14061 + t13450*t14067 + t13454*t14074 + t13491*t14084 + t13506*t14091 + t13524*t14098 + t10524*t13990*t199 + 0.1305*(t12756*t134 - 1.*t10524*t10526*t199) + var1[1];
  p_output1[14]=0. + 0.0306*t13760 - 1.1312*t13778 + t12877*t13892 + t12933*t13899 + t13589*t13923 + t12942*t13973 + t13603*t14016 + t13606*t14032 + t13627*t14048 + t13630*t14061 + t13647*t14067 + t13692*t14074 + t13707*t14084 + t13716*t14091 + t13755*t14098 + t10524*t13875*t189 - 1.*t13990*t368 + 0.1305*(t12942*t134 + t10526*t368) + t10524*t13859*t472 + var1[2];
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

#include "H_LeftToeBottom.hh"

namespace SymExpression
{

void H_LeftToeBottom_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
