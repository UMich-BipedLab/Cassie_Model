/*
 * Automatically Generated from Mathematica.
 * Tue 26 Sep 2017 12:22:36 GMT-04:00
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
  double t1611;
  double t1710;
  double t1500;
  double t1616;
  double t1719;
  double t1127;
  double t1853;
  double t2407;
  double t3125;
  double t1624;
  double t1745;
  double t1841;
  double t3291;
  double t1125;
  double t4552;
  double t5446;
  double t5539;
  double t1842;
  double t3929;
  double t4297;
  double t6490;
  double t8059;
  double t4485;
  double t6700;
  double t7223;
  double t661;
  double t8061;
  double t8996;
  double t9001;
  double t9094;
  double t9133;
  double t9137;
  double t9138;
  double t9227;
  double t9638;
  double t11354;
  double t7413;
  double t10513;
  double t11216;
  double t439;
  double t12941;
  double t13218;
  double t13273;
  double t13787;
  double t11230;
  double t13420;
  double t13627;
  double t376;
  double t13790;
  double t13804;
  double t13818;
  double t14008;
  double t13737;
  double t13874;
  double t13914;
  double t225;
  double t14018;
  double t14027;
  double t14084;
  double t72;
  double t14410;
  double t14414;
  double t14418;
  double t14280;
  double t14287;
  double t14313;
  double t14441;
  double t14443;
  double t14445;
  double t14399;
  double t14421;
  double t14430;
  double t14434;
  double t14457;
  double t14464;
  double t14518;
  double t14523;
  double t14537;
  double t14546;
  double t14555;
  double t14559;
  double t14515;
  double t14565;
  double t14569;
  double t14577;
  double t14579;
  double t14591;
  double t14572;
  double t14597;
  double t14598;
  double t14610;
  double t14611;
  double t14613;
  double t14207;
  double t14601;
  double t14617;
  double t14619;
  double t14629;
  double t14630;
  double t14634;
  double t14706;
  double t14709;
  double t14713;
  double t14674;
  double t14682;
  double t14683;
  double t14696;
  double t14728;
  double t14732;
  double t14746;
  double t14760;
  double t14773;
  double t14777;
  double t14781;
  double t14801;
  double t14739;
  double t14807;
  double t14808;
  double t14819;
  double t14825;
  double t14828;
  double t14812;
  double t14844;
  double t14845;
  double t14851;
  double t14860;
  double t14862;
  double t14850;
  double t14866;
  double t14872;
  double t14876;
  double t14878;
  double t14883;
  double t13983;
  double t14168;
  double t14196;
  double t14220;
  double t14268;
  double t14270;
  double t14623;
  double t14635;
  double t14636;
  double t14648;
  double t14651;
  double t14655;
  double t14873;
  double t14889;
  double t14895;
  double t14904;
  double t14905;
  double t14912;
  double t15047;
  double t15060;
  double t15012;
  double t15016;
  double t15109;
  double t15113;
  double t15131;
  double t15134;
  double t15183;
  double t15197;
  double t15223;
  double t15227;
  double t14200;
  double t14271;
  double t14279;
  double t14973;
  double t14977;
  double t14978;
  double t14983;
  double t14989;
  double t14998;
  double t15000;
  double t15002;
  double t15003;
  double t15004;
  double t15008;
  double t15010;
  double t15018;
  double t15021;
  double t15029;
  double t15061;
  double t15068;
  double t15069;
  double t15071;
  double t15072;
  double t15076;
  double t15096;
  double t15098;
  double t15104;
  double t15116;
  double t15118;
  double t15119;
  double t15125;
  double t15126;
  double t15128;
  double t15136;
  double t15138;
  double t15140;
  double t15150;
  double t15154;
  double t15169;
  double t15198;
  double t15200;
  double t15201;
  double t15212;
  double t15215;
  double t15219;
  double t15228;
  double t15229;
  double t15232;
  double t15242;
  double t15243;
  double t15255;
  double t14638;
  double t14668;
  double t14671;
  double t14898;
  double t14914;
  double t14919;
  t1611 = Cos(var1[5]);
  t1710 = Sin(var1[3]);
  t1500 = Cos(var1[3]);
  t1616 = Sin(var1[4]);
  t1719 = Sin(var1[5]);
  t1127 = Cos(var1[6]);
  t1853 = -1.*t1611*t1710;
  t2407 = t1500*t1616*t1719;
  t3125 = t1853 + t2407;
  t1624 = t1500*t1611*t1616;
  t1745 = t1710*t1719;
  t1841 = t1624 + t1745;
  t3291 = Sin(var1[6]);
  t1125 = Cos(var1[7]);
  t4552 = t1127*t3125;
  t5446 = t1841*t3291;
  t5539 = t4552 + t5446;
  t1842 = t1127*t1841;
  t3929 = -1.*t3125*t3291;
  t4297 = t1842 + t3929;
  t6490 = Sin(var1[7]);
  t8059 = Cos(var1[9]);
  t4485 = t1125*t4297;
  t6700 = -1.*t5539*t6490;
  t7223 = t4485 + t6700;
  t661 = Sin(var1[9]);
  t8061 = Cos(var1[4]);
  t8996 = Cos(var1[8]);
  t9001 = t1500*t8061*t8996;
  t9094 = t1125*t5539;
  t9133 = t4297*t6490;
  t9137 = t9094 + t9133;
  t9138 = Sin(var1[8]);
  t9227 = t9137*t9138;
  t9638 = t9001 + t9227;
  t11354 = Cos(var1[10]);
  t7413 = t661*t7223;
  t10513 = t8059*t9638;
  t11216 = t7413 + t10513;
  t439 = Sin(var1[10]);
  t12941 = t8059*t7223;
  t13218 = -1.*t661*t9638;
  t13273 = t12941 + t13218;
  t13787 = Cos(var1[11]);
  t11230 = -1.*t439*t11216;
  t13420 = t11354*t13273;
  t13627 = t11230 + t13420;
  t376 = Sin(var1[11]);
  t13790 = t11354*t11216;
  t13804 = t439*t13273;
  t13818 = t13790 + t13804;
  t14008 = Cos(var1[12]);
  t13737 = t376*t13627;
  t13874 = t13787*t13818;
  t13914 = t13737 + t13874;
  t225 = Sin(var1[12]);
  t14018 = t13787*t13627;
  t14027 = -1.*t376*t13818;
  t14084 = t14018 + t14027;
  t72 = Sin(var1[13]);
  t14410 = t1500*t1611;
  t14414 = t1710*t1616*t1719;
  t14418 = t14410 + t14414;
  t14280 = t1611*t1710*t1616;
  t14287 = -1.*t1500*t1719;
  t14313 = t14280 + t14287;
  t14441 = t1127*t14418;
  t14443 = t14313*t3291;
  t14445 = t14441 + t14443;
  t14399 = t1127*t14313;
  t14421 = -1.*t14418*t3291;
  t14430 = t14399 + t14421;
  t14434 = t1125*t14430;
  t14457 = -1.*t14445*t6490;
  t14464 = t14434 + t14457;
  t14518 = t8061*t8996*t1710;
  t14523 = t1125*t14445;
  t14537 = t14430*t6490;
  t14546 = t14523 + t14537;
  t14555 = t14546*t9138;
  t14559 = t14518 + t14555;
  t14515 = t661*t14464;
  t14565 = t8059*t14559;
  t14569 = t14515 + t14565;
  t14577 = t8059*t14464;
  t14579 = -1.*t661*t14559;
  t14591 = t14577 + t14579;
  t14572 = -1.*t439*t14569;
  t14597 = t11354*t14591;
  t14598 = t14572 + t14597;
  t14610 = t11354*t14569;
  t14611 = t439*t14591;
  t14613 = t14610 + t14611;
  t14207 = Cos(var1[13]);
  t14601 = t376*t14598;
  t14617 = t13787*t14613;
  t14619 = t14601 + t14617;
  t14629 = t13787*t14598;
  t14630 = -1.*t376*t14613;
  t14634 = t14629 + t14630;
  t14706 = t8061*t1127*t1719;
  t14709 = t8061*t1611*t3291;
  t14713 = t14706 + t14709;
  t14674 = t8061*t1611*t1127;
  t14682 = -1.*t8061*t1719*t3291;
  t14683 = t14674 + t14682;
  t14696 = t1125*t14683;
  t14728 = -1.*t14713*t6490;
  t14732 = t14696 + t14728;
  t14746 = -1.*t8996*t1616;
  t14760 = t1125*t14713;
  t14773 = t14683*t6490;
  t14777 = t14760 + t14773;
  t14781 = t14777*t9138;
  t14801 = t14746 + t14781;
  t14739 = t661*t14732;
  t14807 = t8059*t14801;
  t14808 = t14739 + t14807;
  t14819 = t8059*t14732;
  t14825 = -1.*t661*t14801;
  t14828 = t14819 + t14825;
  t14812 = -1.*t439*t14808;
  t14844 = t11354*t14828;
  t14845 = t14812 + t14844;
  t14851 = t11354*t14808;
  t14860 = t439*t14828;
  t14862 = t14851 + t14860;
  t14850 = t376*t14845;
  t14866 = t13787*t14862;
  t14872 = t14850 + t14866;
  t14876 = t13787*t14845;
  t14878 = -1.*t376*t14862;
  t14883 = t14876 + t14878;
  t13983 = -1.*t225*t13914;
  t14168 = t14008*t14084;
  t14196 = t13983 + t14168;
  t14220 = t14008*t13914;
  t14268 = t225*t14084;
  t14270 = t14220 + t14268;
  t14623 = -1.*t225*t14619;
  t14635 = t14008*t14634;
  t14636 = t14623 + t14635;
  t14648 = t14008*t14619;
  t14651 = t225*t14634;
  t14655 = t14648 + t14651;
  t14873 = -1.*t225*t14872;
  t14889 = t14008*t14883;
  t14895 = t14873 + t14889;
  t14904 = t14008*t14872;
  t14905 = t225*t14883;
  t14912 = t14904 + t14905;
  t15047 = -1.*t8996;
  t15060 = 1. + t15047;
  t15012 = -1.*t8059;
  t15016 = 1. + t15012;
  t15109 = -1.*t11354;
  t15113 = 1. + t15109;
  t15131 = -1.*t13787;
  t15134 = 1. + t15131;
  t15183 = -1.*t14008;
  t15197 = 1. + t15183;
  t15223 = -1.*t14207;
  t15227 = 1. + t15223;
  t14200 = t72*t14196;
  t14271 = t14207*t14270;
  t14279 = t14200 + t14271;
  t14973 = -1.*t1127;
  t14977 = 1. + t14973;
  t14978 = 0.135*t14977;
  t14983 = 0. + t14978;
  t14989 = -0.135*t3291;
  t14998 = 0. + t14989;
  t15000 = -1.*t1125;
  t15002 = 1. + t15000;
  t15003 = 0.135*t15002;
  t15004 = 0. + t15003;
  t15008 = -0.135*t6490;
  t15010 = 0. + t15008;
  t15018 = -0.09*t15016;
  t15021 = 0.049*t661;
  t15029 = 0. + t15018 + t15021;
  t15061 = 0.135*t15060;
  t15068 = 0.049*t9138;
  t15069 = 0. + t15061 + t15068;
  t15071 = -0.049*t15060;
  t15072 = 0.135*t9138;
  t15076 = 0. + t15071 + t15072;
  t15096 = -0.049*t15016;
  t15098 = -0.09*t661;
  t15104 = 0. + t15096 + t15098;
  t15116 = -0.049*t15113;
  t15118 = -0.21*t439;
  t15119 = 0. + t15116 + t15118;
  t15125 = -0.21*t15113;
  t15126 = 0.049*t439;
  t15128 = 0. + t15125 + t15126;
  t15136 = -0.2707*t15134;
  t15138 = 0.0016*t376;
  t15140 = 0. + t15136 + t15138;
  t15150 = -0.0016*t15134;
  t15154 = -0.2707*t376;
  t15169 = 0. + t15150 + t15154;
  t15198 = 0.0184*t15197;
  t15200 = -0.7055*t225;
  t15201 = 0. + t15198 + t15200;
  t15212 = -0.7055*t15197;
  t15215 = -0.0184*t225;
  t15219 = 0. + t15212 + t15215;
  t15228 = -1.1135*t15227;
  t15229 = 0.0216*t72;
  t15232 = 0. + t15228 + t15229;
  t15242 = -0.0216*t15227;
  t15243 = -1.1135*t72;
  t15255 = 0. + t15242 + t15243;
  t14638 = t72*t14636;
  t14668 = t14207*t14655;
  t14671 = t14638 + t14668;
  t14898 = t72*t14895;
  t14914 = t14207*t14912;
  t14919 = t14898 + t14914;
  p_output1[0]=t14279;
  p_output1[1]=t14671;
  p_output1[2]=t14919;
  p_output1[3]=0.;
  p_output1[4]=-1.*t8996*t9137 + t1500*t8061*t9138;
  p_output1[5]=-1.*t14546*t8996 + t1710*t8061*t9138;
  p_output1[6]=-1.*t14777*t8996 - 1.*t1616*t9138;
  p_output1[7]=0.;
  p_output1[8]=-1.*t14196*t14207 + t14270*t72;
  p_output1[9]=-1.*t14207*t14636 + t14655*t72;
  p_output1[10]=-1.*t14207*t14895 + t14912*t72;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.058287*t14279 + t11216*t15119 + t13273*t15128 + t13627*t15140 + t13818*t15169 + t13914*t15201 + t14084*t15219 + t14196*t15232 + t14270*t15255 + t14998*t1841 + t14983*t3125 + t15010*t4297 + t15004*t5539 - 1.1135*(t14196*t14207 - 1.*t14270*t72) + t15029*t7223 + t1500*t15076*t8061 + t15069*t9137 + 0.1305*(t8996*t9137 - 1.*t1500*t8061*t9138) + t15104*t9638 + var1[0];
  p_output1[13]=0. + 0.058287*t14671 + t14418*t14983 + t14313*t14998 + t14445*t15004 + t14430*t15010 + t14464*t15029 + t14546*t15069 + t14559*t15104 + t14569*t15119 + t14591*t15128 + t14598*t15140 + t14613*t15169 + t14619*t15201 + t14634*t15219 + t14636*t15232 + t14655*t15255 - 1.1135*(t14207*t14636 - 1.*t14655*t72) + t15076*t1710*t8061 + 0.1305*(t14546*t8996 - 1.*t1710*t8061*t9138) + var1[1];
  p_output1[14]=0. + 0.058287*t14919 + t14713*t15004 + t14683*t15010 + t14732*t15029 + t14777*t15069 + t14801*t15104 + t14808*t15119 + t14828*t15128 + t14845*t15140 + t14862*t15169 + t14872*t15201 + t14883*t15219 + t14895*t15232 + t14912*t15255 - 1.*t15076*t1616 - 1.1135*(t14207*t14895 - 1.*t14912*t72) + t14998*t1611*t8061 + t14983*t1719*t8061 + 0.1305*(t14777*t8996 + t1616*t9138) + var1[2];
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

#include "H_LeftToeBottomFront.hh"

namespace SymExpression
{

void H_LeftToeBottomFront_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
