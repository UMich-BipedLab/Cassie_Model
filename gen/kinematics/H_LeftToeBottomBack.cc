/*
 * Automatically Generated from Mathematica.
 * Tue 26 Sep 2017 12:22:34 GMT-04:00
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
  double t1401;
  double t1680;
  double t1397;
  double t1634;
  double t1681;
  double t1313;
  double t2095;
  double t2268;
  double t2308;
  double t1673;
  double t1920;
  double t1952;
  double t2489;
  double t1259;
  double t4297;
  double t4337;
  double t4542;
  double t1959;
  double t2645;
  double t2746;
  double t4702;
  double t5881;
  double t3494;
  double t4875;
  double t5229;
  double t1114;
  double t6019;
  double t6243;
  double t6666;
  double t6723;
  double t7012;
  double t7029;
  double t7074;
  double t7667;
  double t7715;
  double t8818;
  double t5284;
  double t7989;
  double t8210;
  double t1109;
  double t8853;
  double t8867;
  double t8980;
  double t9335;
  double t8318;
  double t8989;
  double t8996;
  double t516;
  double t9396;
  double t9638;
  double t9641;
  double t10506;
  double t9001;
  double t9767;
  double t10038;
  double t429;
  double t10554;
  double t10603;
  double t11589;
  double t231;
  double t12961;
  double t13020;
  double t13038;
  double t12770;
  double t12772;
  double t12918;
  double t13242;
  double t13273;
  double t13293;
  double t12941;
  double t13216;
  double t13218;
  double t13230;
  double t13350;
  double t13420;
  double t13452;
  double t13476;
  double t13539;
  double t13564;
  double t13569;
  double t13573;
  double t13447;
  double t13582;
  double t13591;
  double t13627;
  double t13718;
  double t13737;
  double t13625;
  double t13760;
  double t13778;
  double t13804;
  double t13818;
  double t13836;
  double t12269;
  double t13787;
  double t13837;
  double t13849;
  double t13874;
  double t13891;
  double t13899;
  double t14027;
  double t14039;
  double t14049;
  double t13996;
  double t13999;
  double t14008;
  double t14018;
  double t14061;
  double t14071;
  double t14075;
  double t14084;
  double t14085;
  double t14093;
  double t14099;
  double t14110;
  double t14073;
  double t14113;
  double t14114;
  double t14116;
  double t14124;
  double t14126;
  double t14115;
  double t14127;
  double t14133;
  double t14145;
  double t14151;
  double t14153;
  double t14142;
  double t14156;
  double t14158;
  double t14168;
  double t14172;
  double t14173;
  double t10324;
  double t11833;
  double t11848;
  double t12465;
  double t12502;
  double t12554;
  double t13867;
  double t13914;
  double t13923;
  double t13971;
  double t13973;
  double t13977;
  double t14164;
  double t14191;
  double t14197;
  double t14207;
  double t14210;
  double t14217;
  double t14407;
  double t14408;
  double t14388;
  double t14393;
  double t14448;
  double t14452;
  double t14474;
  double t14478;
  double t14501;
  double t14502;
  double t14543;
  double t14544;
  double t12079;
  double t12560;
  double t12687;
  double t14293;
  double t14298;
  double t14303;
  double t14313;
  double t14325;
  double t14333;
  double t14351;
  double t14364;
  double t14367;
  double t14369;
  double t14373;
  double t14377;
  double t14394;
  double t14396;
  double t14399;
  double t14410;
  double t14411;
  double t14412;
  double t14415;
  double t14418;
  double t14420;
  double t14434;
  double t14441;
  double t14443;
  double t14455;
  double t14456;
  double t14457;
  double t14459;
  double t14463;
  double t14464;
  double t14481;
  double t14482;
  double t14485;
  double t14489;
  double t14491;
  double t14492;
  double t14505;
  double t14515;
  double t14516;
  double t14523;
  double t14527;
  double t14537;
  double t14546;
  double t14547;
  double t14548;
  double t14551;
  double t14554;
  double t14555;
  double t13942;
  double t13983;
  double t13992;
  double t14200;
  double t14220;
  double t14221;
  t1401 = Cos(var1[5]);
  t1680 = Sin(var1[3]);
  t1397 = Cos(var1[3]);
  t1634 = Sin(var1[4]);
  t1681 = Sin(var1[5]);
  t1313 = Cos(var1[6]);
  t2095 = -1.*t1401*t1680;
  t2268 = t1397*t1634*t1681;
  t2308 = t2095 + t2268;
  t1673 = t1397*t1401*t1634;
  t1920 = t1680*t1681;
  t1952 = t1673 + t1920;
  t2489 = Sin(var1[6]);
  t1259 = Cos(var1[7]);
  t4297 = t1313*t2308;
  t4337 = t1952*t2489;
  t4542 = t4297 + t4337;
  t1959 = t1313*t1952;
  t2645 = -1.*t2308*t2489;
  t2746 = t1959 + t2645;
  t4702 = Sin(var1[7]);
  t5881 = Cos(var1[9]);
  t3494 = t1259*t2746;
  t4875 = -1.*t4542*t4702;
  t5229 = t3494 + t4875;
  t1114 = Sin(var1[9]);
  t6019 = Cos(var1[4]);
  t6243 = Cos(var1[8]);
  t6666 = t1397*t6019*t6243;
  t6723 = t1259*t4542;
  t7012 = t2746*t4702;
  t7029 = t6723 + t7012;
  t7074 = Sin(var1[8]);
  t7667 = t7029*t7074;
  t7715 = t6666 + t7667;
  t8818 = Cos(var1[10]);
  t5284 = t1114*t5229;
  t7989 = t5881*t7715;
  t8210 = t5284 + t7989;
  t1109 = Sin(var1[10]);
  t8853 = t5881*t5229;
  t8867 = -1.*t1114*t7715;
  t8980 = t8853 + t8867;
  t9335 = Cos(var1[11]);
  t8318 = -1.*t1109*t8210;
  t8989 = t8818*t8980;
  t8996 = t8318 + t8989;
  t516 = Sin(var1[11]);
  t9396 = t8818*t8210;
  t9638 = t1109*t8980;
  t9641 = t9396 + t9638;
  t10506 = Cos(var1[12]);
  t9001 = t516*t8996;
  t9767 = t9335*t9641;
  t10038 = t9001 + t9767;
  t429 = Sin(var1[12]);
  t10554 = t9335*t8996;
  t10603 = -1.*t516*t9641;
  t11589 = t10554 + t10603;
  t231 = Sin(var1[13]);
  t12961 = t1397*t1401;
  t13020 = t1680*t1634*t1681;
  t13038 = t12961 + t13020;
  t12770 = t1401*t1680*t1634;
  t12772 = -1.*t1397*t1681;
  t12918 = t12770 + t12772;
  t13242 = t1313*t13038;
  t13273 = t12918*t2489;
  t13293 = t13242 + t13273;
  t12941 = t1313*t12918;
  t13216 = -1.*t13038*t2489;
  t13218 = t12941 + t13216;
  t13230 = t1259*t13218;
  t13350 = -1.*t13293*t4702;
  t13420 = t13230 + t13350;
  t13452 = t6019*t6243*t1680;
  t13476 = t1259*t13293;
  t13539 = t13218*t4702;
  t13564 = t13476 + t13539;
  t13569 = t13564*t7074;
  t13573 = t13452 + t13569;
  t13447 = t1114*t13420;
  t13582 = t5881*t13573;
  t13591 = t13447 + t13582;
  t13627 = t5881*t13420;
  t13718 = -1.*t1114*t13573;
  t13737 = t13627 + t13718;
  t13625 = -1.*t1109*t13591;
  t13760 = t8818*t13737;
  t13778 = t13625 + t13760;
  t13804 = t8818*t13591;
  t13818 = t1109*t13737;
  t13836 = t13804 + t13818;
  t12269 = Cos(var1[13]);
  t13787 = t516*t13778;
  t13837 = t9335*t13836;
  t13849 = t13787 + t13837;
  t13874 = t9335*t13778;
  t13891 = -1.*t516*t13836;
  t13899 = t13874 + t13891;
  t14027 = t6019*t1313*t1681;
  t14039 = t6019*t1401*t2489;
  t14049 = t14027 + t14039;
  t13996 = t6019*t1401*t1313;
  t13999 = -1.*t6019*t1681*t2489;
  t14008 = t13996 + t13999;
  t14018 = t1259*t14008;
  t14061 = -1.*t14049*t4702;
  t14071 = t14018 + t14061;
  t14075 = -1.*t6243*t1634;
  t14084 = t1259*t14049;
  t14085 = t14008*t4702;
  t14093 = t14084 + t14085;
  t14099 = t14093*t7074;
  t14110 = t14075 + t14099;
  t14073 = t1114*t14071;
  t14113 = t5881*t14110;
  t14114 = t14073 + t14113;
  t14116 = t5881*t14071;
  t14124 = -1.*t1114*t14110;
  t14126 = t14116 + t14124;
  t14115 = -1.*t1109*t14114;
  t14127 = t8818*t14126;
  t14133 = t14115 + t14127;
  t14145 = t8818*t14114;
  t14151 = t1109*t14126;
  t14153 = t14145 + t14151;
  t14142 = t516*t14133;
  t14156 = t9335*t14153;
  t14158 = t14142 + t14156;
  t14168 = t9335*t14133;
  t14172 = -1.*t516*t14153;
  t14173 = t14168 + t14172;
  t10324 = -1.*t429*t10038;
  t11833 = t10506*t11589;
  t11848 = t10324 + t11833;
  t12465 = t10506*t10038;
  t12502 = t429*t11589;
  t12554 = t12465 + t12502;
  t13867 = -1.*t429*t13849;
  t13914 = t10506*t13899;
  t13923 = t13867 + t13914;
  t13971 = t10506*t13849;
  t13973 = t429*t13899;
  t13977 = t13971 + t13973;
  t14164 = -1.*t429*t14158;
  t14191 = t10506*t14173;
  t14197 = t14164 + t14191;
  t14207 = t10506*t14158;
  t14210 = t429*t14173;
  t14217 = t14207 + t14210;
  t14407 = -1.*t6243;
  t14408 = 1. + t14407;
  t14388 = -1.*t5881;
  t14393 = 1. + t14388;
  t14448 = -1.*t8818;
  t14452 = 1. + t14448;
  t14474 = -1.*t9335;
  t14478 = 1. + t14474;
  t14501 = -1.*t10506;
  t14502 = 1. + t14501;
  t14543 = -1.*t12269;
  t14544 = 1. + t14543;
  t12079 = t231*t11848;
  t12560 = t12269*t12554;
  t12687 = t12079 + t12560;
  t14293 = -1.*t1313;
  t14298 = 1. + t14293;
  t14303 = 0.135*t14298;
  t14313 = 0. + t14303;
  t14325 = -0.135*t2489;
  t14333 = 0. + t14325;
  t14351 = -1.*t1259;
  t14364 = 1. + t14351;
  t14367 = 0.135*t14364;
  t14369 = 0. + t14367;
  t14373 = -0.135*t4702;
  t14377 = 0. + t14373;
  t14394 = -0.09*t14393;
  t14396 = 0.049*t1114;
  t14399 = 0. + t14394 + t14396;
  t14410 = 0.135*t14408;
  t14411 = 0.049*t7074;
  t14412 = 0. + t14410 + t14411;
  t14415 = -0.049*t14408;
  t14418 = 0.135*t7074;
  t14420 = 0. + t14415 + t14418;
  t14434 = -0.049*t14393;
  t14441 = -0.09*t1114;
  t14443 = 0. + t14434 + t14441;
  t14455 = -0.049*t14452;
  t14456 = -0.21*t1109;
  t14457 = 0. + t14455 + t14456;
  t14459 = -0.21*t14452;
  t14463 = 0.049*t1109;
  t14464 = 0. + t14459 + t14463;
  t14481 = -0.2707*t14478;
  t14482 = 0.0016*t516;
  t14485 = 0. + t14481 + t14482;
  t14489 = -0.0016*t14478;
  t14491 = -0.2707*t516;
  t14492 = 0. + t14489 + t14491;
  t14505 = 0.0184*t14502;
  t14515 = -0.7055*t429;
  t14516 = 0. + t14505 + t14515;
  t14523 = -0.7055*t14502;
  t14527 = -0.0184*t429;
  t14537 = 0. + t14523 + t14527;
  t14546 = -1.1135*t14544;
  t14547 = 0.0216*t231;
  t14548 = 0. + t14546 + t14547;
  t14551 = -0.0216*t14544;
  t14554 = -1.1135*t231;
  t14555 = 0. + t14551 + t14554;
  t13942 = t231*t13923;
  t13983 = t12269*t13977;
  t13992 = t13942 + t13983;
  t14200 = t231*t14197;
  t14220 = t12269*t14217;
  t14221 = t14200 + t14220;
  p_output1[0]=t12687;
  p_output1[1]=t13992;
  p_output1[2]=t14221;
  p_output1[3]=0.;
  p_output1[4]=-1.*t6243*t7029 + t1397*t6019*t7074;
  p_output1[5]=-1.*t13564*t6243 + t1680*t6019*t7074;
  p_output1[6]=-1.*t14093*t6243 - 1.*t1634*t7074;
  p_output1[7]=0.;
  p_output1[8]=-1.*t11848*t12269 + t12554*t231;
  p_output1[9]=-1.*t12269*t13923 + t13977*t231;
  p_output1[10]=-1.*t12269*t14197 + t14217*t231;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.0216*t12687 + t10038*t14516 + t11589*t14537 + t11848*t14548 + t12554*t14555 + t14333*t1952 + t14313*t2308 - 1.193387*(t11848*t12269 - 1.*t12554*t231) + t14377*t2746 + t14369*t4542 + t14399*t5229 + t1397*t14420*t6019 + t14412*t7029 + 0.1305*(t6243*t7029 - 1.*t1397*t6019*t7074) + t14443*t7715 + t14457*t8210 + t14464*t8980 + t14485*t8996 + t14492*t9641 + var1[0];
  p_output1[13]=0. - 0.0216*t13992 + t13038*t14313 + t12918*t14333 + t13293*t14369 + t13218*t14377 + t13420*t14399 + t13564*t14412 + t13573*t14443 + t13591*t14457 + t13737*t14464 + t13778*t14485 + t13836*t14492 + t13849*t14516 + t13899*t14537 + t13923*t14548 + t13977*t14555 - 1.193387*(t12269*t13923 - 1.*t13977*t231) + t14420*t1680*t6019 + 0.1305*(t13564*t6243 - 1.*t1680*t6019*t7074) + var1[1];
  p_output1[14]=0. - 0.0216*t14221 + t14049*t14369 + t14008*t14377 + t14071*t14399 + t14093*t14412 + t14110*t14443 + t14114*t14457 + t14126*t14464 + t14133*t14485 + t14153*t14492 + t14158*t14516 + t14173*t14537 + t14197*t14548 + t14217*t14555 - 1.*t14420*t1634 - 1.193387*(t12269*t14197 - 1.*t14217*t231) + t1401*t14333*t6019 + t14313*t1681*t6019 + 0.1305*(t14093*t6243 + t1634*t7074) + var1[2];
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

#include "H_LeftToeBottomBack.hh"

namespace SymExpression
{

void H_LeftToeBottomBack_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
