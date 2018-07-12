/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:37:09 GMT-04:00
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
  double t662;
  double t862;
  double t907;
  double t760;
  double t930;
  double t657;
  double t1008;
  double t1072;
  double t1089;
  double t878;
  double t970;
  double t984;
  double t1135;
  double t643;
  double t1281;
  double t1283;
  double t1357;
  double t988;
  double t1215;
  double t1263;
  double t1400;
  double t593;
  double t1462;
  double t1488;
  double t1496;
  double t1271;
  double t1403;
  double t1428;
  double t1511;
  double t1969;
  double t1853;
  double t1875;
  double t2121;
  double t2137;
  double t2150;
  double t1963;
  double t2028;
  double t2032;
  double t2292;
  double t2323;
  double t2360;
  double t2107;
  double t2189;
  double t2209;
  double t2547;
  double t2577;
  double t2583;
  double t2253;
  double t2361;
  double t2429;
  double t2659;
  double t2680;
  double t2700;
  double t2513;
  double t2587;
  double t2591;
  double t1441;
  double t1535;
  double t1561;
  double t1644;
  double t1681;
  double t1760;
  double t2634;
  double t2703;
  double t2719;
  double t2736;
  double t2737;
  double t2748;
  double t2862;
  double t2897;
  double t2995;
  double t2828;
  double t2834;
  double t2847;
  double t3129;
  double t3153;
  double t3179;
  double t3061;
  double t3068;
  double t3086;
  double t3271;
  double t3331;
  double t3372;
  double t3087;
  double t3208;
  double t3244;
  double t3435;
  double t3468;
  double t3488;
  double t3253;
  double t3398;
  double t3407;
  double t3661;
  double t3732;
  double t3742;
  double t3431;
  double t3524;
  double t3549;
  double t2724;
  double t2783;
  double t2797;
  double t1566;
  double t1776;
  double t1793;
  double t3652;
  double t3802;
  double t3876;
  double t3888;
  double t3927;
  double t3976;
  double t3884;
  double t3978;
  double t4103;
  double t4257;
  double t4267;
  double t4274;
  double t400;
  double t4380;
  double t4430;
  double t3029;
  double t4110;
  double t4116;
  double t4161;
  double t4220;
  double t4301;
  double t4310;
  double t4365;
  double t4439;
  double t4456;
  double t4496;
  double t4515;
  double t210;
  double t4562;
  double t4806;
  double t4699;
  double t4714;
  double t4738;
  double t6057;
  double t5823;
  double t5876;
  double t6080;
  double t6307;
  double t5902;
  double t6191;
  double t6261;
  double t5805;
  double t6320;
  double t6378;
  double t6473;
  double t6675;
  double t6287;
  double t6514;
  double t6534;
  double t5785;
  double t6688;
  double t6704;
  double t6836;
  double t7126;
  double t6583;
  double t6842;
  double t6969;
  double t5758;
  double t7257;
  double t7259;
  double t7267;
  double t2806;
  double t3004;
  double t3005;
  double t7389;
  double t7403;
  double t7412;
  double t7435;
  double t7447;
  double t7469;
  double t7431;
  double t7492;
  double t7524;
  double t7528;
  double t7533;
  double t7567;
  double t7526;
  double t7588;
  double t7599;
  double t7686;
  double t7709;
  double t7713;
  double t7672;
  double t7717;
  double t7726;
  double t7759;
  double t7765;
  double t7767;
  double t4534;
  double t7818;
  double t7826;
  double t7828;
  double t7835;
  double t7847;
  double t7854;
  double t7832;
  double t7857;
  double t7860;
  double t7867;
  double t7869;
  double t7872;
  double t7862;
  double t7886;
  double t7893;
  double t7909;
  double t7911;
  double t7914;
  double t7899;
  double t7921;
  double t7922;
  double t7924;
  double t7932;
  double t7934;
  double t5238;
  double t5280;
  double t5288;
  double t7102;
  double t7276;
  double t7279;
  double t7300;
  double t7338;
  double t7343;
  double t7349;
  double t7352;
  double t7356;
  double t4936;
  double t4966;
  double t4977;
  double t7746;
  double t7769;
  double t7770;
  double t7776;
  double t7777;
  double t7781;
  double t7799;
  double t7804;
  double t7809;
  double t5119;
  double t5192;
  double t5196;
  double t7923;
  double t7939;
  double t7941;
  double t7948;
  double t7949;
  double t7951;
  double t7952;
  double t7954;
  double t7955;
  double t5578;
  double t5593;
  double t5599;
  double t5317;
  double t5428;
  double t5436;
  double t5476;
  double t7989;
  double t7991;
  double t7998;
  double t8005;
  double t8006;
  double t8009;
  double t8014;
  double t8023;
  double t8024;
  t662 = Cos(var1[8]);
  t862 = Cos(var1[10]);
  t907 = Sin(var1[9]);
  t760 = Cos(var1[9]);
  t930 = Sin(var1[10]);
  t657 = Cos(var1[11]);
  t1008 = -1.*t662*t862*t907;
  t1072 = -1.*t662*t760*t930;
  t1089 = t1008 + t1072;
  t878 = t662*t760*t862;
  t970 = -1.*t662*t907*t930;
  t984 = t878 + t970;
  t1135 = Sin(var1[11]);
  t643 = Cos(var1[12]);
  t1281 = t657*t1089;
  t1283 = -1.*t984*t1135;
  t1357 = t1281 + t1283;
  t988 = t657*t984;
  t1215 = t1089*t1135;
  t1263 = t988 + t1215;
  t1400 = Sin(var1[12]);
  t593 = Cos(var1[13]);
  t1462 = t643*t1357;
  t1488 = -1.*t1263*t1400;
  t1496 = t1462 + t1488;
  t1271 = t643*t1263;
  t1403 = t1357*t1400;
  t1428 = t1271 + t1403;
  t1511 = Sin(var1[13]);
  t1969 = Cos(var1[7]);
  t1853 = Sin(var1[7]);
  t1875 = Sin(var1[8]);
  t2121 = t1969*t760;
  t2137 = -1.*t1853*t1875*t907;
  t2150 = t2121 + t2137;
  t1963 = t760*t1853*t1875;
  t2028 = t1969*t907;
  t2032 = t1963 + t2028;
  t2292 = t862*t2150;
  t2323 = -1.*t2032*t930;
  t2360 = t2292 + t2323;
  t2107 = t862*t2032;
  t2189 = t2150*t930;
  t2209 = t2107 + t2189;
  t2547 = t657*t2360;
  t2577 = -1.*t2209*t1135;
  t2583 = t2547 + t2577;
  t2253 = t657*t2209;
  t2361 = t2360*t1135;
  t2429 = t2253 + t2361;
  t2659 = t643*t2583;
  t2680 = -1.*t2429*t1400;
  t2700 = t2659 + t2680;
  t2513 = t643*t2429;
  t2587 = t2583*t1400;
  t2591 = t2513 + t2587;
  t1441 = t593*t1428;
  t1535 = t1496*t1511;
  t1561 = t1441 + t1535;
  t1644 = t593*t1496;
  t1681 = -1.*t1428*t1511;
  t1760 = t1644 + t1681;
  t2634 = t593*t2591;
  t2703 = t2700*t1511;
  t2719 = t2634 + t2703;
  t2736 = t593*t2700;
  t2737 = -1.*t2591*t1511;
  t2748 = t2736 + t2737;
  t2862 = 0.642788*t2719;
  t2897 = 0.766044*t2748;
  t2995 = t2862 + t2897;
  t2828 = -0.766044*t1561;
  t2834 = 0.642788*t1760;
  t2847 = t2828 + t2834;
  t3129 = -1.*t760*t1853;
  t3153 = -1.*t1969*t1875*t907;
  t3179 = t3129 + t3153;
  t3061 = t1969*t760*t1875;
  t3068 = -1.*t1853*t907;
  t3086 = t3061 + t3068;
  t3271 = t862*t3179;
  t3331 = -1.*t3086*t930;
  t3372 = t3271 + t3331;
  t3087 = t862*t3086;
  t3208 = t3179*t930;
  t3244 = t3087 + t3208;
  t3435 = t657*t3372;
  t3468 = -1.*t3244*t1135;
  t3488 = t3435 + t3468;
  t3253 = t657*t3244;
  t3398 = t3372*t1135;
  t3407 = t3253 + t3398;
  t3661 = t643*t3488;
  t3732 = -1.*t3407*t1400;
  t3742 = t3661 + t3732;
  t3431 = t643*t3407;
  t3524 = t3488*t1400;
  t3549 = t3431 + t3524;
  t2724 = -0.766044*t2719;
  t2783 = 0.642788*t2748;
  t2797 = t2724 + t2783;
  t1566 = 0.642788*t1561;
  t1776 = 0.766044*t1760;
  t1793 = t1566 + t1776;
  t3652 = t593*t3549;
  t3802 = t3742*t1511;
  t3876 = t3652 + t3802;
  t3888 = t593*t3742;
  t3927 = -1.*t3549*t1511;
  t3976 = t3888 + t3927;
  t3884 = -0.766044*t3876;
  t3978 = 0.642788*t3976;
  t4103 = t3884 + t3978;
  t4257 = 0.642788*t3876;
  t4267 = 0.766044*t3976;
  t4274 = t4257 + t4267;
  t400 = Cos(var1[1]);
  t4380 = t1793*t4103;
  t4430 = -1.*t2847*t4274;
  t3029 = t1969*t662*t2847;
  t4110 = t1875*t4103;
  t4116 = t3029 + t4110;
  t4161 = -1.*t2995*t4116;
  t4220 = t1969*t662*t1793;
  t4301 = t1875*t4274;
  t4310 = t4220 + t4301;
  t4365 = t2797*t4310;
  t4439 = t4380 + t4430;
  t4456 = -1.*t662*t1853*t4439;
  t4496 = 0. + t4161 + t4365 + t4456;
  t4515 = 1/t4496;
  t210 = Cos(var1[0]);
  t4562 = Sin(var1[0]);
  t4806 = Sin(var1[1]);
  t4699 = t4274*t2797;
  t4714 = -1.*t4103*t2995;
  t4738 = 0. + t4699 + t4714;
  t6057 = Cos(var1[3]);
  t5823 = Cos(var1[2]);
  t5876 = Sin(var1[3]);
  t6080 = Sin(var1[2]);
  t6307 = Cos(var1[4]);
  t5902 = -1.*t400*t5823*t5876;
  t6191 = -1.*t6057*t400*t6080;
  t6261 = t5902 + t6191;
  t5805 = Sin(var1[4]);
  t6320 = t6057*t400*t5823;
  t6378 = -1.*t400*t5876*t6080;
  t6473 = t6320 + t6378;
  t6675 = Cos(var1[5]);
  t6287 = t5805*t6261;
  t6514 = t6307*t6473;
  t6534 = t6287 + t6514;
  t5785 = Sin(var1[5]);
  t6688 = t6307*t6261;
  t6704 = -1.*t5805*t6473;
  t6836 = t6688 + t6704;
  t7126 = Cos(var1[6]);
  t6583 = -1.*t5785*t6534;
  t6842 = t6675*t6836;
  t6969 = t6583 + t6842;
  t5758 = Sin(var1[6]);
  t7257 = t6675*t6534;
  t7259 = t5785*t6836;
  t7267 = t7257 + t7259;
  t2806 = -1.*t1793*t2797;
  t3004 = t2847*t2995;
  t3005 = 0. + t2806 + t3004;
  t7389 = t210*t5823*t4806;
  t7403 = -1.*t4562*t6080;
  t7412 = t7389 + t7403;
  t7435 = -1.*t5823*t4562;
  t7447 = -1.*t210*t4806*t6080;
  t7469 = t7435 + t7447;
  t7431 = -1.*t5876*t7412;
  t7492 = t6057*t7469;
  t7524 = t7431 + t7492;
  t7528 = t6057*t7412;
  t7533 = t5876*t7469;
  t7567 = t7528 + t7533;
  t7526 = t5805*t7524;
  t7588 = t6307*t7567;
  t7599 = t7526 + t7588;
  t7686 = t6307*t7524;
  t7709 = -1.*t5805*t7567;
  t7713 = t7686 + t7709;
  t7672 = -1.*t5785*t7599;
  t7717 = t6675*t7713;
  t7726 = t7672 + t7717;
  t7759 = t6675*t7599;
  t7765 = t5785*t7713;
  t7767 = t7759 + t7765;
  t4534 = 0. + t4380 + t4430;
  t7818 = t5823*t4562*t4806;
  t7826 = t210*t6080;
  t7828 = t7818 + t7826;
  t7835 = t210*t5823;
  t7847 = -1.*t4562*t4806*t6080;
  t7854 = t7835 + t7847;
  t7832 = -1.*t5876*t7828;
  t7857 = t6057*t7854;
  t7860 = t7832 + t7857;
  t7867 = t6057*t7828;
  t7869 = t5876*t7854;
  t7872 = t7867 + t7869;
  t7862 = t5805*t7860;
  t7886 = t6307*t7872;
  t7893 = t7862 + t7886;
  t7909 = t6307*t7860;
  t7911 = -1.*t5805*t7872;
  t7914 = t7909 + t7911;
  t7899 = -1.*t5785*t7893;
  t7921 = t6675*t7914;
  t7922 = t7899 + t7921;
  t7924 = t6675*t7893;
  t7932 = t5785*t7914;
  t7934 = t7924 + t7932;
  t5238 = -1.*t662*t1853*t4103;
  t5280 = t1969*t662*t2797;
  t5288 = 0. + t5238 + t5280;
  t7102 = t5758*t6969;
  t7276 = t7126*t7267;
  t7279 = t7102 + t7276;
  t7300 = 0.642788*t7279;
  t7338 = t7126*t6969;
  t7343 = -1.*t5758*t7267;
  t7349 = t7338 + t7343;
  t7352 = 0.766044*t7349;
  t7356 = t7300 + t7352;
  t4936 = t662*t1853*t2847;
  t4966 = t1875*t2797;
  t4977 = 0. + t4936 + t4966;
  t7746 = t5758*t7726;
  t7769 = t7126*t7767;
  t7770 = t7746 + t7769;
  t7776 = 0.642788*t7770;
  t7777 = t7126*t7726;
  t7781 = -1.*t5758*t7767;
  t7799 = t7777 + t7781;
  t7804 = 0.766044*t7799;
  t7809 = t7776 + t7804;
  t5119 = -1.*t1969*t662*t2847;
  t5192 = -1.*t1875*t4103;
  t5196 = 0. + t5119 + t5192;
  t7923 = t5758*t7922;
  t7939 = t7126*t7934;
  t7941 = t7923 + t7939;
  t7948 = 0.642788*t7941;
  t7949 = t7126*t7922;
  t7951 = -1.*t5758*t7934;
  t7952 = t7949 + t7951;
  t7954 = 0.766044*t7952;
  t7955 = t7948 + t7954;
  t5578 = t662*t1853*t4274;
  t5593 = -1.*t1969*t662*t2995;
  t5599 = 0. + t5578 + t5593;
  t5317 = -1.*t662*t1853*t1793;
  t5428 = -1.*t1875*t2995;
  t5436 = 0. + t5317 + t5428;
  t5476 = 0. + t4220 + t4301;
  t7989 = -0.766044*t7279;
  t7991 = 0.642788*t7349;
  t7998 = t7989 + t7991;
  t8005 = -0.766044*t7770;
  t8006 = 0.642788*t7799;
  t8009 = t8005 + t8006;
  t8014 = -0.766044*t7941;
  t8023 = 0.642788*t7952;
  t8024 = t8014 + t8023;
  p_output1[0]=0. - 1.*t210*t3005*t400*t4515 - 1.*t400*t4515*t4534*t4562 + t4515*t4738*t4806;
  p_output1[1]=0. - 1.*t210*t400*t4515*t4977 - 1.*t400*t4515*t4562*t5196 + t4515*t4806*t5288;
  p_output1[2]=0. - 1.*t210*t400*t4515*t5436 - 1.*t400*t4515*t4562*t5476 + t4515*t4806*t5599;
  p_output1[3]=0. + t4515*t4738*t7356 + t3005*t4515*t7809 + t4515*t4534*t7955;
  p_output1[4]=0. + t4515*t5288*t7356 + t4515*t4977*t7809 + t4515*t5196*t7955;
  p_output1[5]=0. + t4515*t5599*t7356 + t4515*t5436*t7809 + t4515*t5476*t7955;
  p_output1[6]=0. + t4515*t4738*t7998 + t3005*t4515*t8009 + t4515*t4534*t8024;
  p_output1[7]=0. + t4515*t5288*t7998 + t4515*t4977*t8009 + t4515*t5196*t8024;
  p_output1[8]=0. + t4515*t5599*t7998 + t4515*t5436*t8009 + t4515*t5476*t8024;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "R_RightToeBottom_to_LeftToeBottom_mex.hh"

namespace SymExpression
{

void R_RightToeBottom_to_LeftToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
