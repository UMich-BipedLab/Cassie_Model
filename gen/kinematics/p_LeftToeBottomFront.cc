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
  double t1357;
  double t694;
  double t1363;
  double t892;
  double t1445;
  double t83;
  double t1136;
  double t1500;
  double t1609;
  double t1616;
  double t1624;
  double t1745;
  double t1776;
  double t1959;
  double t5539;
  double t6131;
  double t6490;
  double t4297;
  double t4485;
  double t4932;
  double t6666;
  double t11589;
  double t12502;
  double t12719;
  double t13020;
  double t11216;
  double t11230;
  double t11256;
  double t13452;
  double t7898;
  double t8057;
  double t8058;
  double t8060;
  double t9001;
  double t9060;
  double t9133;
  double t14018;
  double t14027;
  double t14071;
  double t14116;
  double t14145;
  double t14156;
  double t14191;
  double t14207;
  double t14220;
  double t14227;
  double t14280;
  double t14281;
  double t14287;
  double t14369;
  double t14377;
  double t14394;
  double t14400;
  double t14415;
  double t14418;
  double t14421;
  double t14445;
  double t14457;
  double t14458;
  double t14481;
  double t14491;
  double t14505;
  double t14516;
  double t14537;
  double t14546;
  double t14550;
  double t14572;
  double t14576;
  double t14577;
  double t14580;
  double t14582;
  double t14590;
  double t14593;
  double t14600;
  double t14601;
  double t14607;
  double t14619;
  double t14623;
  double t14624;
  double t239;
  double t365;
  double t376;
  double t661;
  double t1841;
  double t1842;
  double t2268;
  double t2386;
  double t3125;
  double t3929;
  double t14671;
  double t14674;
  double t14677;
  double t14683;
  double t14691;
  double t14696;
  double t6700;
  double t7223;
  double t8059;
  double t8061;
  double t8996;
  double t14732;
  double t14736;
  double t14739;
  double t14709;
  double t14713;
  double t14716;
  double t12941;
  double t13218;
  double t13273;
  double t13627;
  double t13737;
  double t13760;
  double t14781;
  double t14801;
  double t14802;
  double t13914;
  double t13983;
  double t14008;
  double t14168;
  double t14196;
  double t14200;
  double t14760;
  double t14765;
  double t14773;
  double t14844;
  double t14845;
  double t14847;
  double t14270;
  double t14271;
  double t14279;
  double t14399;
  double t14410;
  double t14414;
  double t14851;
  double t14860;
  double t14861;
  double t14866;
  double t14869;
  double t14872;
  double t14434;
  double t14441;
  double t14443;
  double t14515;
  double t14518;
  double t14523;
  double t14874;
  double t14876;
  double t14878;
  double t14889;
  double t14895;
  double t14896;
  double t14559;
  double t14565;
  double t14569;
  double t14591;
  double t14597;
  double t14598;
  double t14904;
  double t14905;
  double t14911;
  double t14914;
  double t14915;
  double t14919;
  double t14611;
  double t14613;
  double t14617;
  double t14926;
  double t14927;
  double t14928;
  double t14941;
  double t14946;
  double t14947;
  double t14978;
  double t14982;
  double t14983;
  double t14972;
  double t14973;
  double t14975;
  double t15000;
  double t15002;
  double t15003;
  double t14989;
  double t14992;
  double t14998;
  double t15014;
  double t15016;
  double t15017;
  double t15021;
  double t15029;
  double t15033;
  double t15047;
  double t15052;
  double t15060;
  double t15064;
  double t15068;
  double t15069;
  double t15071;
  double t15072;
  double t15073;
  double t15077;
  double t15085;
  double t15087;
  double t15090;
  double t15091;
  double t15092;
  double t15097;
  double t15098;
  double t15100;
  double t15105;
  double t15109;
  double t15111;
  t1357 = Cos(var1[3]);
  t694 = Cos(var1[5]);
  t1363 = Sin(var1[4]);
  t892 = Sin(var1[3]);
  t1445 = Sin(var1[5]);
  t83 = Cos(var1[6]);
  t1136 = -1.*t694*t892;
  t1500 = t1357*t1363*t1445;
  t1609 = t1136 + t1500;
  t1616 = t1357*t694*t1363;
  t1624 = t892*t1445;
  t1745 = t1616 + t1624;
  t1776 = Sin(var1[6]);
  t1959 = Cos(var1[7]);
  t5539 = t83*t1745;
  t6131 = -1.*t1609*t1776;
  t6490 = t5539 + t6131;
  t4297 = t83*t1609;
  t4485 = t1745*t1776;
  t4932 = t4297 + t4485;
  t6666 = Sin(var1[7]);
  t11589 = Cos(var1[8]);
  t12502 = -1.*t11589;
  t12719 = 1. + t12502;
  t13020 = Sin(var1[8]);
  t11216 = t1959*t4932;
  t11230 = t6490*t6666;
  t11256 = t11216 + t11230;
  t13452 = Cos(var1[4]);
  t7898 = Cos(var1[9]);
  t8057 = -1.*t7898;
  t8058 = 1. + t8057;
  t8060 = Sin(var1[9]);
  t9001 = t1959*t6490;
  t9060 = -1.*t4932*t6666;
  t9133 = t9001 + t9060;
  t14018 = t1357*t13452*t11589;
  t14027 = t11256*t13020;
  t14071 = t14018 + t14027;
  t14116 = Cos(var1[10]);
  t14145 = -1.*t14116;
  t14156 = 1. + t14145;
  t14191 = Sin(var1[10]);
  t14207 = t8060*t9133;
  t14220 = t7898*t14071;
  t14227 = t14207 + t14220;
  t14280 = t7898*t9133;
  t14281 = -1.*t8060*t14071;
  t14287 = t14280 + t14281;
  t14369 = Cos(var1[11]);
  t14377 = -1.*t14369;
  t14394 = 1. + t14377;
  t14400 = Sin(var1[11]);
  t14415 = -1.*t14191*t14227;
  t14418 = t14116*t14287;
  t14421 = t14415 + t14418;
  t14445 = t14116*t14227;
  t14457 = t14191*t14287;
  t14458 = t14445 + t14457;
  t14481 = Cos(var1[12]);
  t14491 = -1.*t14481;
  t14505 = 1. + t14491;
  t14516 = Sin(var1[12]);
  t14537 = t14400*t14421;
  t14546 = t14369*t14458;
  t14550 = t14537 + t14546;
  t14572 = t14369*t14421;
  t14576 = -1.*t14400*t14458;
  t14577 = t14572 + t14576;
  t14580 = Cos(var1[13]);
  t14582 = -1.*t14580;
  t14590 = 1. + t14582;
  t14593 = Sin(var1[13]);
  t14600 = -1.*t14516*t14550;
  t14601 = t14481*t14577;
  t14607 = t14600 + t14601;
  t14619 = t14481*t14550;
  t14623 = t14516*t14577;
  t14624 = t14619 + t14623;
  t239 = -1.*t83;
  t365 = 1. + t239;
  t376 = 0.135*t365;
  t661 = 0. + t376;
  t1841 = -0.135*t1776;
  t1842 = 0. + t1841;
  t2268 = -1.*t1959;
  t2386 = 1. + t2268;
  t3125 = 0.135*t2386;
  t3929 = 0. + t3125;
  t14671 = t1357*t694;
  t14674 = t892*t1363*t1445;
  t14677 = t14671 + t14674;
  t14683 = t694*t892*t1363;
  t14691 = -1.*t1357*t1445;
  t14696 = t14683 + t14691;
  t6700 = -0.135*t6666;
  t7223 = 0. + t6700;
  t8059 = -0.09*t8058;
  t8061 = 0.049*t8060;
  t8996 = 0. + t8059 + t8061;
  t14732 = t83*t14696;
  t14736 = -1.*t14677*t1776;
  t14739 = t14732 + t14736;
  t14709 = t83*t14677;
  t14713 = t14696*t1776;
  t14716 = t14709 + t14713;
  t12941 = 0.135*t12719;
  t13218 = 0.049*t13020;
  t13273 = 0. + t12941 + t13218;
  t13627 = -0.049*t12719;
  t13737 = 0.135*t13020;
  t13760 = 0. + t13627 + t13737;
  t14781 = t1959*t14716;
  t14801 = t14739*t6666;
  t14802 = t14781 + t14801;
  t13914 = -0.049*t8058;
  t13983 = -0.09*t8060;
  t14008 = 0. + t13914 + t13983;
  t14168 = -0.049*t14156;
  t14196 = -0.21*t14191;
  t14200 = 0. + t14168 + t14196;
  t14760 = t1959*t14739;
  t14765 = -1.*t14716*t6666;
  t14773 = t14760 + t14765;
  t14844 = t13452*t11589*t892;
  t14845 = t14802*t13020;
  t14847 = t14844 + t14845;
  t14270 = -0.21*t14156;
  t14271 = 0.049*t14191;
  t14279 = 0. + t14270 + t14271;
  t14399 = -0.2707*t14394;
  t14410 = 0.0016*t14400;
  t14414 = 0. + t14399 + t14410;
  t14851 = t8060*t14773;
  t14860 = t7898*t14847;
  t14861 = t14851 + t14860;
  t14866 = t7898*t14773;
  t14869 = -1.*t8060*t14847;
  t14872 = t14866 + t14869;
  t14434 = -0.0016*t14394;
  t14441 = -0.2707*t14400;
  t14443 = 0. + t14434 + t14441;
  t14515 = 0.0184*t14505;
  t14518 = -0.7055*t14516;
  t14523 = 0. + t14515 + t14518;
  t14874 = -1.*t14191*t14861;
  t14876 = t14116*t14872;
  t14878 = t14874 + t14876;
  t14889 = t14116*t14861;
  t14895 = t14191*t14872;
  t14896 = t14889 + t14895;
  t14559 = -0.7055*t14505;
  t14565 = -0.0184*t14516;
  t14569 = 0. + t14559 + t14565;
  t14591 = -1.1135*t14590;
  t14597 = 0.0216*t14593;
  t14598 = 0. + t14591 + t14597;
  t14904 = t14400*t14878;
  t14905 = t14369*t14896;
  t14911 = t14904 + t14905;
  t14914 = t14369*t14878;
  t14915 = -1.*t14400*t14896;
  t14919 = t14914 + t14915;
  t14611 = -0.0216*t14590;
  t14613 = -1.1135*t14593;
  t14617 = 0. + t14611 + t14613;
  t14926 = -1.*t14516*t14911;
  t14927 = t14481*t14919;
  t14928 = t14926 + t14927;
  t14941 = t14481*t14911;
  t14946 = t14516*t14919;
  t14947 = t14941 + t14946;
  t14978 = t13452*t694*t83;
  t14982 = -1.*t13452*t1445*t1776;
  t14983 = t14978 + t14982;
  t14972 = t13452*t83*t1445;
  t14973 = t13452*t694*t1776;
  t14975 = t14972 + t14973;
  t15000 = t1959*t14975;
  t15002 = t14983*t6666;
  t15003 = t15000 + t15002;
  t14989 = t1959*t14983;
  t14992 = -1.*t14975*t6666;
  t14998 = t14989 + t14992;
  t15014 = -1.*t11589*t1363;
  t15016 = t15003*t13020;
  t15017 = t15014 + t15016;
  t15021 = t8060*t14998;
  t15029 = t7898*t15017;
  t15033 = t15021 + t15029;
  t15047 = t7898*t14998;
  t15052 = -1.*t8060*t15017;
  t15060 = t15047 + t15052;
  t15064 = -1.*t14191*t15033;
  t15068 = t14116*t15060;
  t15069 = t15064 + t15068;
  t15071 = t14116*t15033;
  t15072 = t14191*t15060;
  t15073 = t15071 + t15072;
  t15077 = t14400*t15069;
  t15085 = t14369*t15073;
  t15087 = t15077 + t15085;
  t15090 = t14369*t15069;
  t15091 = -1.*t14400*t15073;
  t15092 = t15090 + t15091;
  t15097 = -1.*t14516*t15087;
  t15098 = t14481*t15092;
  t15100 = t15097 + t15098;
  t15105 = t14481*t15087;
  t15109 = t14516*t15092;
  t15111 = t15105 + t15109;
  p_output1[0]=0. + t11256*t13273 + 0.1305*(t11256*t11589 - 1.*t13020*t13452*t1357) + t13452*t1357*t13760 + t14008*t14071 + t14200*t14227 + t14279*t14287 + t14414*t14421 + t14443*t14458 + t14523*t14550 + t14569*t14577 + t14598*t14607 + t14617*t14624 + 0.058287*(t14593*t14607 + t14580*t14624) - 1.1135*(t14580*t14607 - 1.*t14593*t14624) + t1745*t1842 + t3929*t4932 + t1609*t661 + t6490*t7223 + t8996*t9133 + var1[0];
  p_output1[1]=0. + t13273*t14802 + t14008*t14847 + t14200*t14861 + t14279*t14872 + t14414*t14878 + t14443*t14896 + t14523*t14911 + t14569*t14919 + t14598*t14928 + t14617*t14947 + 0.058287*(t14593*t14928 + t14580*t14947) - 1.1135*(t14580*t14928 - 1.*t14593*t14947) + t14696*t1842 + t14716*t3929 + t14677*t661 + t14739*t7223 + t13452*t13760*t892 + 0.1305*(t11589*t14802 - 1.*t13020*t13452*t892) + t14773*t8996 + var1[1];
  p_output1[2]=0. - 1.*t1363*t13760 + t13273*t15003 + 0.1305*(t13020*t1363 + t11589*t15003) + t14008*t15017 + t14200*t15033 + t14279*t15060 + t14414*t15069 + t14443*t15073 + t14523*t15087 + t14569*t15092 + t14598*t15100 + t14617*t15111 + 0.058287*(t14593*t15100 + t14580*t15111) - 1.1135*(t14580*t15100 - 1.*t14593*t15111) + t14975*t3929 + t13452*t1445*t661 + t13452*t1842*t694 + t14983*t7223 + t14998*t8996 + var1[2];
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

#include "p_LeftToeBottomFront.hh"

namespace SymExpression
{

void p_LeftToeBottomFront_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
