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
  double t67;
  double t1992;
  double t2746;
  double t2199;
  double t2789;
  double t1920;
  double t2268;
  double t3494;
  double t4297;
  double t5078;
  double t6723;
  double t7012;
  double t7667;
  double t11041;
  double t9396;
  double t9638;
  double t9767;
  double t8853;
  double t12079;
  double t12465;
  double t12502;
  double t125;
  double t129;
  double t1661;
  double t1673;
  double t81;
  double t13539;
  double t13569;
  double t13582;
  double t12687;
  double t12770;
  double t12918;
  double t12961;
  double t13230;
  double t13242;
  double t13273;
  double t13837;
  double t13874;
  double t13899;
  double t13942;
  double t13971;
  double t13973;
  double t13992;
  double t14018;
  double t14027;
  double t14039;
  double t14099;
  double t14113;
  double t14116;
  double t14127;
  double t14133;
  double t14142;
  double t14151;
  double t14173;
  double t14191;
  double t14196;
  double t14221;
  double t14227;
  double t14241;
  double t14250;
  double t14259;
  double t14263;
  double t14267;
  double t14270;
  double t14271;
  double t14276;
  double t14289;
  double t14303;
  double t14313;
  double t14322;
  double t14325;
  double t14333;
  double t14367;
  double t14373;
  double t14377;
  double t14380;
  double t14410;
  double t14411;
  double t14412;
  double t1667;
  double t1853;
  double t1887;
  double t1952;
  double t1959;
  double t5229;
  double t5284;
  double t5539;
  double t6666;
  double t8980;
  double t8989;
  double t8996;
  double t9001;
  double t14445;
  double t14455;
  double t14456;
  double t14458;
  double t14459;
  double t14463;
  double t11589;
  double t11833;
  double t12941;
  double t13020;
  double t13218;
  double t14466;
  double t14481;
  double t14482;
  double t14486;
  double t14489;
  double t14491;
  double t13447;
  double t13452;
  double t13476;
  double t14518;
  double t14523;
  double t14527;
  double t13796;
  double t13804;
  double t13818;
  double t13983;
  double t13996;
  double t14008;
  double t14496;
  double t14505;
  double t14515;
  double t14550;
  double t14551;
  double t14554;
  double t14073;
  double t14084;
  double t14085;
  double t14145;
  double t14156;
  double t14168;
  double t14559;
  double t14560;
  double t14562;
  double t14569;
  double t14570;
  double t14572;
  double t14207;
  double t14210;
  double t14220;
  double t14265;
  double t14268;
  double t14269;
  double t14574;
  double t14576;
  double t14577;
  double t14580;
  double t14582;
  double t14584;
  double t14280;
  double t14281;
  double t14287;
  double t14345;
  double t14369;
  double t14372;
  double t14591;
  double t14593;
  double t14596;
  double t14598;
  double t14599;
  double t14600;
  double t14396;
  double t14399;
  double t14400;
  double t14602;
  double t14607;
  double t14609;
  double t14611;
  double t14613;
  double t14614;
  double t14640;
  double t14641;
  double t14647;
  double t14651;
  double t14654;
  double t14655;
  double t14674;
  double t14677;
  double t14682;
  double t14661;
  double t14665;
  double t14668;
  double t14705;
  double t14706;
  double t14708;
  double t14713;
  double t14716;
  double t14724;
  double t14732;
  double t14735;
  double t14736;
  double t14742;
  double t14746;
  double t14760;
  double t14773;
  double t14777;
  double t14780;
  double t14783;
  double t14788;
  double t14790;
  double t14802;
  double t14803;
  double t14807;
  double t14809;
  double t14812;
  double t14815;
  double t14825;
  double t14828;
  double t14829;
  t67 = Cos(var1[3]);
  t1992 = Cos(var1[5]);
  t2746 = Sin(var1[3]);
  t2199 = Sin(var1[4]);
  t2789 = Sin(var1[5]);
  t1920 = Sin(var1[14]);
  t2268 = t67*t1992*t2199;
  t3494 = t2746*t2789;
  t4297 = t2268 + t3494;
  t5078 = Cos(var1[14]);
  t6723 = -1.*t1992*t2746;
  t7012 = t67*t2199*t2789;
  t7667 = t6723 + t7012;
  t11041 = Sin(var1[15]);
  t9396 = t1920*t4297;
  t9638 = t5078*t7667;
  t9767 = t9396 + t9638;
  t8853 = Cos(var1[15]);
  t12079 = t5078*t4297;
  t12465 = -1.*t1920*t7667;
  t12502 = t12079 + t12465;
  t125 = Cos(var1[16]);
  t129 = -1.*t125;
  t1661 = 1. + t129;
  t1673 = Sin(var1[16]);
  t81 = Cos(var1[4]);
  t13539 = t8853*t9767;
  t13569 = t11041*t12502;
  t13582 = t13539 + t13569;
  t12687 = Cos(var1[17]);
  t12770 = -1.*t12687;
  t12918 = 1. + t12770;
  t12961 = Sin(var1[17]);
  t13230 = -1.*t11041*t9767;
  t13242 = t8853*t12502;
  t13273 = t13230 + t13242;
  t13837 = t125*t67*t81;
  t13874 = t1673*t13582;
  t13899 = t13837 + t13874;
  t13942 = Cos(var1[18]);
  t13971 = -1.*t13942;
  t13973 = 1. + t13971;
  t13992 = Sin(var1[18]);
  t14018 = t12961*t13273;
  t14027 = t12687*t13899;
  t14039 = t14018 + t14027;
  t14099 = t12687*t13273;
  t14113 = -1.*t12961*t13899;
  t14116 = t14099 + t14113;
  t14127 = Cos(var1[19]);
  t14133 = -1.*t14127;
  t14142 = 1. + t14133;
  t14151 = Sin(var1[19]);
  t14173 = -1.*t13992*t14039;
  t14191 = t13942*t14116;
  t14196 = t14173 + t14191;
  t14221 = t13942*t14039;
  t14227 = t13992*t14116;
  t14241 = t14221 + t14227;
  t14250 = Cos(var1[20]);
  t14259 = -1.*t14250;
  t14263 = 1. + t14259;
  t14267 = Sin(var1[20]);
  t14270 = t14151*t14196;
  t14271 = t14127*t14241;
  t14276 = t14270 + t14271;
  t14289 = t14127*t14196;
  t14303 = -1.*t14151*t14241;
  t14313 = t14289 + t14303;
  t14322 = Cos(var1[21]);
  t14325 = -1.*t14322;
  t14333 = 1. + t14325;
  t14367 = Sin(var1[21]);
  t14373 = -1.*t14267*t14276;
  t14377 = t14250*t14313;
  t14380 = t14373 + t14377;
  t14410 = t14250*t14276;
  t14411 = t14267*t14313;
  t14412 = t14410 + t14411;
  t1667 = -0.049*t1661;
  t1853 = -0.135*t1673;
  t1887 = 0. + t1667 + t1853;
  t1952 = 0.135*t1920;
  t1959 = 0. + t1952;
  t5229 = -1.*t5078;
  t5284 = 1. + t5229;
  t5539 = -0.135*t5284;
  t6666 = 0. + t5539;
  t8980 = -1.*t8853;
  t8989 = 1. + t8980;
  t8996 = -0.135*t8989;
  t9001 = 0. + t8996;
  t14445 = t1992*t2746*t2199;
  t14455 = -1.*t67*t2789;
  t14456 = t14445 + t14455;
  t14458 = t67*t1992;
  t14459 = t2746*t2199*t2789;
  t14463 = t14458 + t14459;
  t11589 = 0.135*t11041;
  t11833 = 0. + t11589;
  t12941 = -0.09*t12918;
  t13020 = 0.049*t12961;
  t13218 = 0. + t12941 + t13020;
  t14466 = t1920*t14456;
  t14481 = t5078*t14463;
  t14482 = t14466 + t14481;
  t14486 = t5078*t14456;
  t14489 = -1.*t1920*t14463;
  t14491 = t14486 + t14489;
  t13447 = -0.135*t1661;
  t13452 = 0.049*t1673;
  t13476 = 0. + t13447 + t13452;
  t14518 = t8853*t14482;
  t14523 = t11041*t14491;
  t14527 = t14518 + t14523;
  t13796 = -0.049*t12918;
  t13804 = -0.09*t12961;
  t13818 = 0. + t13796 + t13804;
  t13983 = -0.049*t13973;
  t13996 = -0.21*t13992;
  t14008 = 0. + t13983 + t13996;
  t14496 = -1.*t11041*t14482;
  t14505 = t8853*t14491;
  t14515 = t14496 + t14505;
  t14550 = t125*t81*t2746;
  t14551 = t1673*t14527;
  t14554 = t14550 + t14551;
  t14073 = -0.21*t13973;
  t14084 = 0.049*t13992;
  t14085 = 0. + t14073 + t14084;
  t14145 = -0.2707*t14142;
  t14156 = 0.0016*t14151;
  t14168 = 0. + t14145 + t14156;
  t14559 = t12961*t14515;
  t14560 = t12687*t14554;
  t14562 = t14559 + t14560;
  t14569 = t12687*t14515;
  t14570 = -1.*t12961*t14554;
  t14572 = t14569 + t14570;
  t14207 = -0.0016*t14142;
  t14210 = -0.2707*t14151;
  t14220 = 0. + t14207 + t14210;
  t14265 = 0.0184*t14263;
  t14268 = -0.7055*t14267;
  t14269 = 0. + t14265 + t14268;
  t14574 = -1.*t13992*t14562;
  t14576 = t13942*t14572;
  t14577 = t14574 + t14576;
  t14580 = t13942*t14562;
  t14582 = t13992*t14572;
  t14584 = t14580 + t14582;
  t14280 = -0.7055*t14263;
  t14281 = -0.0184*t14267;
  t14287 = 0. + t14280 + t14281;
  t14345 = -1.1135*t14333;
  t14369 = 0.0216*t14367;
  t14372 = 0. + t14345 + t14369;
  t14591 = t14151*t14577;
  t14593 = t14127*t14584;
  t14596 = t14591 + t14593;
  t14598 = t14127*t14577;
  t14599 = -1.*t14151*t14584;
  t14600 = t14598 + t14599;
  t14396 = -0.0216*t14333;
  t14399 = -1.1135*t14367;
  t14400 = 0. + t14396 + t14399;
  t14602 = -1.*t14267*t14596;
  t14607 = t14250*t14600;
  t14609 = t14602 + t14607;
  t14611 = t14250*t14596;
  t14613 = t14267*t14600;
  t14614 = t14611 + t14613;
  t14640 = t81*t1992*t1920;
  t14641 = t5078*t81*t2789;
  t14647 = t14640 + t14641;
  t14651 = t5078*t81*t1992;
  t14654 = -1.*t81*t1920*t2789;
  t14655 = t14651 + t14654;
  t14674 = t8853*t14647;
  t14677 = t11041*t14655;
  t14682 = t14674 + t14677;
  t14661 = -1.*t11041*t14647;
  t14665 = t8853*t14655;
  t14668 = t14661 + t14665;
  t14705 = -1.*t125*t2199;
  t14706 = t1673*t14682;
  t14708 = t14705 + t14706;
  t14713 = t12961*t14668;
  t14716 = t12687*t14708;
  t14724 = t14713 + t14716;
  t14732 = t12687*t14668;
  t14735 = -1.*t12961*t14708;
  t14736 = t14732 + t14735;
  t14742 = -1.*t13992*t14724;
  t14746 = t13942*t14736;
  t14760 = t14742 + t14746;
  t14773 = t13942*t14724;
  t14777 = t13992*t14736;
  t14780 = t14773 + t14777;
  t14783 = t14151*t14760;
  t14788 = t14127*t14780;
  t14790 = t14783 + t14788;
  t14802 = t14127*t14760;
  t14803 = -1.*t14151*t14780;
  t14807 = t14802 + t14803;
  t14809 = -1.*t14267*t14790;
  t14812 = t14250*t14807;
  t14815 = t14809 + t14812;
  t14825 = t14250*t14790;
  t14828 = t14267*t14807;
  t14829 = t14825 + t14828;
  p_output1[0]=0. + t11833*t12502 + t13218*t13273 + t13476*t13582 + t13818*t13899 + t14008*t14039 + t14085*t14116 + t14168*t14196 + t14220*t14241 + t14269*t14276 + t14287*t14313 + t14372*t14380 + t14400*t14412 - 0.0216*(t14367*t14380 + t14322*t14412) - 1.193387*(t14322*t14380 - 1.*t14367*t14412) + t1959*t4297 + t6666*t7667 + t1887*t67*t81 - 0.1305*(t125*t13582 - 1.*t1673*t67*t81) + t9001*t9767 + var1[0];
  p_output1[1]=0. + t11833*t14491 + t13218*t14515 + t13476*t14527 + t13818*t14554 + t14008*t14562 + t14085*t14572 + t14168*t14577 + t14220*t14584 + t14269*t14596 + t14287*t14600 + t14372*t14609 + t14400*t14614 - 0.0216*(t14367*t14609 + t14322*t14614) - 1.193387*(t14322*t14609 - 1.*t14367*t14614) + t14456*t1959 + t14463*t6666 + t1887*t2746*t81 - 0.1305*(t125*t14527 - 1.*t1673*t2746*t81) + t14482*t9001 + var1[1];
  p_output1[2]=0. + t11833*t14655 + t13218*t14668 + t13476*t14682 + t13818*t14708 + t14008*t14724 + t14085*t14736 + t14168*t14760 + t14220*t14780 + t14269*t14790 + t14287*t14807 + t14372*t14815 + t14400*t14829 - 0.0216*(t14367*t14815 + t14322*t14829) - 1.193387*(t14322*t14815 - 1.*t14367*t14829) - 1.*t1887*t2199 - 0.1305*(t125*t14682 + t1673*t2199) + t1959*t1992*t81 + t2789*t6666*t81 + t14647*t9001 + var1[2];
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

#include "p_RightToeBottomBack.hh"

namespace SymExpression
{

void p_RightToeBottomBack_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
