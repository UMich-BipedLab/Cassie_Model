/*
 * Automatically Generated from Mathematica.
 * Tue 26 Sep 2017 12:22:35 GMT-04:00
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
  double t1610;
  double t1751;
  double t1607;
  double t1667;
  double t1805;
  double t1892;
  double t1745;
  double t1841;
  double t1842;
  double t1600;
  double t1952;
  double t1959;
  double t2097;
  double t4296;
  double t1853;
  double t2268;
  double t2967;
  double t1598;
  double t4297;
  double t4337;
  double t4485;
  double t7012;
  double t3494;
  double t5539;
  double t6666;
  double t1560;
  double t7742;
  double t7817;
  double t7898;
  double t7989;
  double t8996;
  double t9001;
  double t9396;
  double t9638;
  double t10554;
  double t12079;
  double t6700;
  double t11589;
  double t11833;
  double t1458;
  double t12502;
  double t12560;
  double t12719;
  double t13242;
  double t11928;
  double t12941;
  double t13020;
  double t1299;
  double t13273;
  double t13420;
  double t13447;
  double t13569;
  double t13218;
  double t13452;
  double t13476;
  double t1298;
  double t13627;
  double t13667;
  double t13737;
  double t214;
  double t13983;
  double t13996;
  double t14008;
  double t14027;
  double t14071;
  double t14073;
  double t14018;
  double t14084;
  double t14085;
  double t14116;
  double t14126;
  double t14145;
  double t14099;
  double t14156;
  double t14168;
  double t14196;
  double t14200;
  double t14207;
  double t14210;
  double t14220;
  double t14221;
  double t14191;
  double t14227;
  double t14245;
  double t14268;
  double t14269;
  double t14270;
  double t14265;
  double t14271;
  double t14279;
  double t14281;
  double t14287;
  double t14289;
  double t13796;
  double t14280;
  double t14313;
  double t14315;
  double t14369;
  double t14372;
  double t14377;
  double t14418;
  double t14421;
  double t14424;
  double t14430;
  double t14432;
  double t14434;
  double t14426;
  double t14441;
  double t14443;
  double t14456;
  double t14457;
  double t14458;
  double t14459;
  double t14464;
  double t14466;
  double t14445;
  double t14481;
  double t14485;
  double t14491;
  double t14492;
  double t14505;
  double t14486;
  double t14515;
  double t14516;
  double t14523;
  double t14537;
  double t14538;
  double t14518;
  double t14546;
  double t14547;
  double t14550;
  double t14551;
  double t14555;
  double t13539;
  double t13760;
  double t13778;
  double t13804;
  double t13818;
  double t13837;
  double t14345;
  double t14394;
  double t14396;
  double t14400;
  double t14410;
  double t14411;
  double t14548;
  double t14559;
  double t14560;
  double t14569;
  double t14572;
  double t14573;
  double t14625;
  double t14626;
  double t14686;
  double t14690;
  double t14783;
  double t14788;
  double t14836;
  double t14842;
  double t14864;
  double t14865;
  double t14885;
  double t14887;
  double t13787;
  double t13874;
  double t13914;
  double t14629;
  double t14630;
  double t14632;
  double t14635;
  double t14636;
  double t14640;
  double t14641;
  double t14648;
  double t14651;
  double t14658;
  double t14665;
  double t14668;
  double t14671;
  double t14677;
  double t14682;
  double t14691;
  double t14696;
  double t14706;
  double t14713;
  double t14716;
  double t14728;
  double t14765;
  double t14773;
  double t14777;
  double t14801;
  double t14802;
  double t14807;
  double t14812;
  double t14819;
  double t14825;
  double t14844;
  double t14845;
  double t14847;
  double t14851;
  double t14860;
  double t14861;
  double t14866;
  double t14869;
  double t14872;
  double t14874;
  double t14876;
  double t14878;
  double t14889;
  double t14895;
  double t14896;
  double t14904;
  double t14905;
  double t14911;
  double t14399;
  double t14414;
  double t14415;
  double t14565;
  double t14576;
  double t14577;
  t1610 = Cos(var1[5]);
  t1751 = Sin(var1[3]);
  t1607 = Cos(var1[3]);
  t1667 = Sin(var1[4]);
  t1805 = Sin(var1[5]);
  t1892 = Cos(var1[14]);
  t1745 = t1607*t1610*t1667;
  t1841 = t1751*t1805;
  t1842 = t1745 + t1841;
  t1600 = Sin(var1[14]);
  t1952 = -1.*t1610*t1751;
  t1959 = t1607*t1667*t1805;
  t2097 = t1952 + t1959;
  t4296 = Cos(var1[15]);
  t1853 = t1600*t1842;
  t2268 = t1892*t2097;
  t2967 = t1853 + t2268;
  t1598 = Sin(var1[15]);
  t4297 = t1892*t1842;
  t4337 = -1.*t1600*t2097;
  t4485 = t4297 + t4337;
  t7012 = Cos(var1[17]);
  t3494 = -1.*t1598*t2967;
  t5539 = t4296*t4485;
  t6666 = t3494 + t5539;
  t1560 = Sin(var1[17]);
  t7742 = Cos(var1[16]);
  t7817 = Cos(var1[4]);
  t7898 = t7742*t1607*t7817;
  t7989 = Sin(var1[16]);
  t8996 = t4296*t2967;
  t9001 = t1598*t4485;
  t9396 = t8996 + t9001;
  t9638 = t7989*t9396;
  t10554 = t7898 + t9638;
  t12079 = Cos(var1[18]);
  t6700 = t1560*t6666;
  t11589 = t7012*t10554;
  t11833 = t6700 + t11589;
  t1458 = Sin(var1[18]);
  t12502 = t7012*t6666;
  t12560 = -1.*t1560*t10554;
  t12719 = t12502 + t12560;
  t13242 = Cos(var1[19]);
  t11928 = -1.*t1458*t11833;
  t12941 = t12079*t12719;
  t13020 = t11928 + t12941;
  t1299 = Sin(var1[19]);
  t13273 = t12079*t11833;
  t13420 = t1458*t12719;
  t13447 = t13273 + t13420;
  t13569 = Cos(var1[20]);
  t13218 = t1299*t13020;
  t13452 = t13242*t13447;
  t13476 = t13218 + t13452;
  t1298 = Sin(var1[20]);
  t13627 = t13242*t13020;
  t13667 = -1.*t1299*t13447;
  t13737 = t13627 + t13667;
  t214 = Sin(var1[21]);
  t13983 = t1610*t1751*t1667;
  t13996 = -1.*t1607*t1805;
  t14008 = t13983 + t13996;
  t14027 = t1607*t1610;
  t14071 = t1751*t1667*t1805;
  t14073 = t14027 + t14071;
  t14018 = t1600*t14008;
  t14084 = t1892*t14073;
  t14085 = t14018 + t14084;
  t14116 = t1892*t14008;
  t14126 = -1.*t1600*t14073;
  t14145 = t14116 + t14126;
  t14099 = -1.*t1598*t14085;
  t14156 = t4296*t14145;
  t14168 = t14099 + t14156;
  t14196 = t7742*t7817*t1751;
  t14200 = t4296*t14085;
  t14207 = t1598*t14145;
  t14210 = t14200 + t14207;
  t14220 = t7989*t14210;
  t14221 = t14196 + t14220;
  t14191 = t1560*t14168;
  t14227 = t7012*t14221;
  t14245 = t14191 + t14227;
  t14268 = t7012*t14168;
  t14269 = -1.*t1560*t14221;
  t14270 = t14268 + t14269;
  t14265 = -1.*t1458*t14245;
  t14271 = t12079*t14270;
  t14279 = t14265 + t14271;
  t14281 = t12079*t14245;
  t14287 = t1458*t14270;
  t14289 = t14281 + t14287;
  t13796 = Cos(var1[21]);
  t14280 = t1299*t14279;
  t14313 = t13242*t14289;
  t14315 = t14280 + t14313;
  t14369 = t13242*t14279;
  t14372 = -1.*t1299*t14289;
  t14377 = t14369 + t14372;
  t14418 = t7817*t1610*t1600;
  t14421 = t1892*t7817*t1805;
  t14424 = t14418 + t14421;
  t14430 = t1892*t7817*t1610;
  t14432 = -1.*t7817*t1600*t1805;
  t14434 = t14430 + t14432;
  t14426 = -1.*t1598*t14424;
  t14441 = t4296*t14434;
  t14443 = t14426 + t14441;
  t14456 = -1.*t7742*t1667;
  t14457 = t4296*t14424;
  t14458 = t1598*t14434;
  t14459 = t14457 + t14458;
  t14464 = t7989*t14459;
  t14466 = t14456 + t14464;
  t14445 = t1560*t14443;
  t14481 = t7012*t14466;
  t14485 = t14445 + t14481;
  t14491 = t7012*t14443;
  t14492 = -1.*t1560*t14466;
  t14505 = t14491 + t14492;
  t14486 = -1.*t1458*t14485;
  t14515 = t12079*t14505;
  t14516 = t14486 + t14515;
  t14523 = t12079*t14485;
  t14537 = t1458*t14505;
  t14538 = t14523 + t14537;
  t14518 = t1299*t14516;
  t14546 = t13242*t14538;
  t14547 = t14518 + t14546;
  t14550 = t13242*t14516;
  t14551 = -1.*t1299*t14538;
  t14555 = t14550 + t14551;
  t13539 = -1.*t1298*t13476;
  t13760 = t13569*t13737;
  t13778 = t13539 + t13760;
  t13804 = t13569*t13476;
  t13818 = t1298*t13737;
  t13837 = t13804 + t13818;
  t14345 = -1.*t1298*t14315;
  t14394 = t13569*t14377;
  t14396 = t14345 + t14394;
  t14400 = t13569*t14315;
  t14410 = t1298*t14377;
  t14411 = t14400 + t14410;
  t14548 = -1.*t1298*t14547;
  t14559 = t13569*t14555;
  t14560 = t14548 + t14559;
  t14569 = t13569*t14547;
  t14572 = t1298*t14555;
  t14573 = t14569 + t14572;
  t14625 = -1.*t7742;
  t14626 = 1. + t14625;
  t14686 = -1.*t7012;
  t14690 = 1. + t14686;
  t14783 = -1.*t12079;
  t14788 = 1. + t14783;
  t14836 = -1.*t13242;
  t14842 = 1. + t14836;
  t14864 = -1.*t13569;
  t14865 = 1. + t14864;
  t14885 = -1.*t13796;
  t14887 = 1. + t14885;
  t13787 = t214*t13778;
  t13874 = t13796*t13837;
  t13914 = t13787 + t13874;
  t14629 = -0.049*t14626;
  t14630 = -0.135*t7989;
  t14632 = 0. + t14629 + t14630;
  t14635 = 0.135*t1600;
  t14636 = 0. + t14635;
  t14640 = -1.*t1892;
  t14641 = 1. + t14640;
  t14648 = -0.135*t14641;
  t14651 = 0. + t14648;
  t14658 = -1.*t4296;
  t14665 = 1. + t14658;
  t14668 = -0.135*t14665;
  t14671 = 0. + t14668;
  t14677 = 0.135*t1598;
  t14682 = 0. + t14677;
  t14691 = -0.09*t14690;
  t14696 = 0.049*t1560;
  t14706 = 0. + t14691 + t14696;
  t14713 = -0.135*t14626;
  t14716 = 0.049*t7989;
  t14728 = 0. + t14713 + t14716;
  t14765 = -0.049*t14690;
  t14773 = -0.09*t1560;
  t14777 = 0. + t14765 + t14773;
  t14801 = -0.049*t14788;
  t14802 = -0.21*t1458;
  t14807 = 0. + t14801 + t14802;
  t14812 = -0.21*t14788;
  t14819 = 0.049*t1458;
  t14825 = 0. + t14812 + t14819;
  t14844 = -0.2707*t14842;
  t14845 = 0.0016*t1299;
  t14847 = 0. + t14844 + t14845;
  t14851 = -0.0016*t14842;
  t14860 = -0.2707*t1299;
  t14861 = 0. + t14851 + t14860;
  t14866 = 0.0184*t14865;
  t14869 = -0.7055*t1298;
  t14872 = 0. + t14866 + t14869;
  t14874 = -0.7055*t14865;
  t14876 = -0.0184*t1298;
  t14878 = 0. + t14874 + t14876;
  t14889 = -1.1135*t14887;
  t14895 = 0.0216*t214;
  t14896 = 0. + t14889 + t14895;
  t14904 = -0.0216*t14887;
  t14905 = -1.1135*t214;
  t14911 = 0. + t14904 + t14905;
  t14399 = t214*t14396;
  t14414 = t13796*t14411;
  t14415 = t14399 + t14414;
  t14565 = t214*t14560;
  t14576 = t13796*t14573;
  t14577 = t14565 + t14576;
  p_output1[0]=t13914;
  p_output1[1]=t14415;
  p_output1[2]=t14577;
  p_output1[3]=0.;
  p_output1[4]=t1607*t7817*t7989 - 1.*t7742*t9396;
  p_output1[5]=-1.*t14210*t7742 + t1751*t7817*t7989;
  p_output1[6]=-1.*t14459*t7742 - 1.*t1667*t7989;
  p_output1[7]=0.;
  p_output1[8]=-1.*t13778*t13796 + t13837*t214;
  p_output1[9]=-1.*t13796*t14396 + t14411*t214;
  p_output1[10]=-1.*t13796*t14560 + t14573*t214;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.0216*t13914 + t10554*t14777 + t11833*t14807 + t12719*t14825 + t13020*t14847 + t13447*t14861 + t13476*t14872 + t13737*t14878 + t13778*t14896 + t13837*t14911 + t14636*t1842 + t14651*t2097 - 1.193387*(t13778*t13796 - 1.*t13837*t214) + t14671*t2967 + t14682*t4485 + t14706*t6666 + t14632*t1607*t7817 + t14728*t9396 - 0.1305*(-1.*t1607*t7817*t7989 + t7742*t9396) + var1[0];
  p_output1[13]=0. - 0.0216*t14415 + t14008*t14636 + t14073*t14651 + t14085*t14671 + t14145*t14682 + t14168*t14706 + t14210*t14728 + t14221*t14777 + t14245*t14807 + t14270*t14825 + t14279*t14847 + t14289*t14861 + t14315*t14872 + t14377*t14878 + t14396*t14896 + t14411*t14911 - 1.193387*(t13796*t14396 - 1.*t14411*t214) + t14632*t1751*t7817 - 0.1305*(t14210*t7742 - 1.*t1751*t7817*t7989) + var1[1];
  p_output1[14]=0. - 0.0216*t14577 + t14424*t14671 + t14434*t14682 + t14443*t14706 + t14459*t14728 + t14466*t14777 + t14485*t14807 + t14505*t14825 + t14516*t14847 + t14538*t14861 + t14547*t14872 + t14555*t14878 + t14560*t14896 + t14573*t14911 - 1.*t14632*t1667 - 1.193387*(t13796*t14560 - 1.*t14573*t214) + t14636*t1610*t7817 + t14651*t1805*t7817 - 0.1305*(t14459*t7742 + t1667*t7989) + var1[2];
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

#include "H_RightToeBottomBack.hh"

namespace SymExpression
{

void H_RightToeBottomBack_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
