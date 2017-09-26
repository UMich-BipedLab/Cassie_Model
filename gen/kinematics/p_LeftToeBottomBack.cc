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
  double t886;
  double t567;
  double t1053;
  double t618;
  double t1078;
  double t74;
  double t681;
  double t1114;
  double t1146;
  double t1313;
  double t1397;
  double t1401;
  double t1679;
  double t2099;
  double t4337;
  double t4436;
  double t4542;
  double t2746;
  double t3494;
  double t3846;
  double t4662;
  double t7799;
  double t7804;
  double t7806;
  double t8162;
  double t7074;
  double t7715;
  double t7735;
  double t8824;
  double t5348;
  double t5549;
  double t5805;
  double t6009;
  double t6666;
  double t6667;
  double t6723;
  double t10038;
  double t10324;
  double t10379;
  double t10583;
  double t10592;
  double t10593;
  double t11787;
  double t12079;
  double t12269;
  double t12420;
  double t12687;
  double t12748;
  double t12770;
  double t12795;
  double t12858;
  double t12899;
  double t12933;
  double t12989;
  double t13020;
  double t13038;
  double t13273;
  double t13293;
  double t13315;
  double t13380;
  double t13408;
  double t13419;
  double t13430;
  double t13476;
  double t13539;
  double t13552;
  double t13591;
  double t13599;
  double t13625;
  double t13639;
  double t13671;
  double t13705;
  double t13719;
  double t13765;
  double t13778;
  double t13780;
  double t13837;
  double t13849;
  double t13859;
  double t106;
  double t110;
  double t231;
  double t429;
  double t1681;
  double t1920;
  double t2233;
  double t2293;
  double t2308;
  double t2645;
  double t13983;
  double t13992;
  double t13995;
  double t13999;
  double t14005;
  double t14008;
  double t4875;
  double t5229;
  double t5881;
  double t6019;
  double t6243;
  double t14061;
  double t14064;
  double t14071;
  double t14027;
  double t14039;
  double t14041;
  double t7989;
  double t8210;
  double t8318;
  double t8853;
  double t8867;
  double t8956;
  double t14093;
  double t14099;
  double t14107;
  double t9638;
  double t9641;
  double t9767;
  double t10603;
  double t11833;
  double t11848;
  double t14075;
  double t14078;
  double t14084;
  double t14126;
  double t14127;
  double t14129;
  double t12502;
  double t12554;
  double t12560;
  double t12918;
  double t12941;
  double t12961;
  double t14142;
  double t14145;
  double t14149;
  double t14153;
  double t14155;
  double t14156;
  double t13218;
  double t13230;
  double t13242;
  double t13420;
  double t13447;
  double t13452;
  double t14162;
  double t14164;
  double t14168;
  double t14173;
  double t14191;
  double t14195;
  double t13569;
  double t13573;
  double t13582;
  double t13718;
  double t13737;
  double t13760;
  double t14200;
  double t14207;
  double t14209;
  double t14217;
  double t14219;
  double t14220;
  double t13804;
  double t13818;
  double t13836;
  double t14224;
  double t14227;
  double t14235;
  double t14245;
  double t14250;
  double t14254;
  double t14298;
  double t14302;
  double t14303;
  double t14287;
  double t14289;
  double t14290;
  double t14345;
  double t14351;
  double t14364;
  double t14315;
  double t14323;
  double t14325;
  double t14381;
  double t14388;
  double t14391;
  double t14394;
  double t14396;
  double t14397;
  double t14400;
  double t14405;
  double t14407;
  double t14409;
  double t14410;
  double t14411;
  double t14414;
  double t14415;
  double t14417;
  double t14420;
  double t14421;
  double t14423;
  double t14426;
  double t14429;
  double t14430;
  double t14433;
  double t14434;
  double t14440;
  double t14443;
  double t14445;
  double t14446;
  t886 = Cos(var1[3]);
  t567 = Cos(var1[5]);
  t1053 = Sin(var1[4]);
  t618 = Sin(var1[3]);
  t1078 = Sin(var1[5]);
  t74 = Cos(var1[6]);
  t681 = -1.*t567*t618;
  t1114 = t886*t1053*t1078;
  t1146 = t681 + t1114;
  t1313 = t886*t567*t1053;
  t1397 = t618*t1078;
  t1401 = t1313 + t1397;
  t1679 = Sin(var1[6]);
  t2099 = Cos(var1[7]);
  t4337 = t74*t1401;
  t4436 = -1.*t1146*t1679;
  t4542 = t4337 + t4436;
  t2746 = t74*t1146;
  t3494 = t1401*t1679;
  t3846 = t2746 + t3494;
  t4662 = Sin(var1[7]);
  t7799 = Cos(var1[8]);
  t7804 = -1.*t7799;
  t7806 = 1. + t7804;
  t8162 = Sin(var1[8]);
  t7074 = t2099*t3846;
  t7715 = t4542*t4662;
  t7735 = t7074 + t7715;
  t8824 = Cos(var1[4]);
  t5348 = Cos(var1[9]);
  t5549 = -1.*t5348;
  t5805 = 1. + t5549;
  t6009 = Sin(var1[9]);
  t6666 = t2099*t4542;
  t6667 = -1.*t3846*t4662;
  t6723 = t6666 + t6667;
  t10038 = t886*t8824*t7799;
  t10324 = t7735*t8162;
  t10379 = t10038 + t10324;
  t10583 = Cos(var1[10]);
  t10592 = -1.*t10583;
  t10593 = 1. + t10592;
  t11787 = Sin(var1[10]);
  t12079 = t6009*t6723;
  t12269 = t5348*t10379;
  t12420 = t12079 + t12269;
  t12687 = t5348*t6723;
  t12748 = -1.*t6009*t10379;
  t12770 = t12687 + t12748;
  t12795 = Cos(var1[11]);
  t12858 = -1.*t12795;
  t12899 = 1. + t12858;
  t12933 = Sin(var1[11]);
  t12989 = -1.*t11787*t12420;
  t13020 = t10583*t12770;
  t13038 = t12989 + t13020;
  t13273 = t10583*t12420;
  t13293 = t11787*t12770;
  t13315 = t13273 + t13293;
  t13380 = Cos(var1[12]);
  t13408 = -1.*t13380;
  t13419 = 1. + t13408;
  t13430 = Sin(var1[12]);
  t13476 = t12933*t13038;
  t13539 = t12795*t13315;
  t13552 = t13476 + t13539;
  t13591 = t12795*t13038;
  t13599 = -1.*t12933*t13315;
  t13625 = t13591 + t13599;
  t13639 = Cos(var1[13]);
  t13671 = -1.*t13639;
  t13705 = 1. + t13671;
  t13719 = Sin(var1[13]);
  t13765 = -1.*t13430*t13552;
  t13778 = t13380*t13625;
  t13780 = t13765 + t13778;
  t13837 = t13380*t13552;
  t13849 = t13430*t13625;
  t13859 = t13837 + t13849;
  t106 = -1.*t74;
  t110 = 1. + t106;
  t231 = 0.135*t110;
  t429 = 0. + t231;
  t1681 = -0.135*t1679;
  t1920 = 0. + t1681;
  t2233 = -1.*t2099;
  t2293 = 1. + t2233;
  t2308 = 0.135*t2293;
  t2645 = 0. + t2308;
  t13983 = t886*t567;
  t13992 = t618*t1053*t1078;
  t13995 = t13983 + t13992;
  t13999 = t567*t618*t1053;
  t14005 = -1.*t886*t1078;
  t14008 = t13999 + t14005;
  t4875 = -0.135*t4662;
  t5229 = 0. + t4875;
  t5881 = -0.09*t5805;
  t6019 = 0.049*t6009;
  t6243 = 0. + t5881 + t6019;
  t14061 = t74*t14008;
  t14064 = -1.*t13995*t1679;
  t14071 = t14061 + t14064;
  t14027 = t74*t13995;
  t14039 = t14008*t1679;
  t14041 = t14027 + t14039;
  t7989 = 0.135*t7806;
  t8210 = 0.049*t8162;
  t8318 = 0. + t7989 + t8210;
  t8853 = -0.049*t7806;
  t8867 = 0.135*t8162;
  t8956 = 0. + t8853 + t8867;
  t14093 = t2099*t14041;
  t14099 = t14071*t4662;
  t14107 = t14093 + t14099;
  t9638 = -0.049*t5805;
  t9641 = -0.09*t6009;
  t9767 = 0. + t9638 + t9641;
  t10603 = -0.049*t10593;
  t11833 = -0.21*t11787;
  t11848 = 0. + t10603 + t11833;
  t14075 = t2099*t14071;
  t14078 = -1.*t14041*t4662;
  t14084 = t14075 + t14078;
  t14126 = t8824*t7799*t618;
  t14127 = t14107*t8162;
  t14129 = t14126 + t14127;
  t12502 = -0.21*t10593;
  t12554 = 0.049*t11787;
  t12560 = 0. + t12502 + t12554;
  t12918 = -0.2707*t12899;
  t12941 = 0.0016*t12933;
  t12961 = 0. + t12918 + t12941;
  t14142 = t6009*t14084;
  t14145 = t5348*t14129;
  t14149 = t14142 + t14145;
  t14153 = t5348*t14084;
  t14155 = -1.*t6009*t14129;
  t14156 = t14153 + t14155;
  t13218 = -0.0016*t12899;
  t13230 = -0.2707*t12933;
  t13242 = 0. + t13218 + t13230;
  t13420 = 0.0184*t13419;
  t13447 = -0.7055*t13430;
  t13452 = 0. + t13420 + t13447;
  t14162 = -1.*t11787*t14149;
  t14164 = t10583*t14156;
  t14168 = t14162 + t14164;
  t14173 = t10583*t14149;
  t14191 = t11787*t14156;
  t14195 = t14173 + t14191;
  t13569 = -0.7055*t13419;
  t13573 = -0.0184*t13430;
  t13582 = 0. + t13569 + t13573;
  t13718 = -1.1135*t13705;
  t13737 = 0.0216*t13719;
  t13760 = 0. + t13718 + t13737;
  t14200 = t12933*t14168;
  t14207 = t12795*t14195;
  t14209 = t14200 + t14207;
  t14217 = t12795*t14168;
  t14219 = -1.*t12933*t14195;
  t14220 = t14217 + t14219;
  t13804 = -0.0216*t13705;
  t13818 = -1.1135*t13719;
  t13836 = 0. + t13804 + t13818;
  t14224 = -1.*t13430*t14209;
  t14227 = t13380*t14220;
  t14235 = t14224 + t14227;
  t14245 = t13380*t14209;
  t14250 = t13430*t14220;
  t14254 = t14245 + t14250;
  t14298 = t8824*t567*t74;
  t14302 = -1.*t8824*t1078*t1679;
  t14303 = t14298 + t14302;
  t14287 = t8824*t74*t1078;
  t14289 = t8824*t567*t1679;
  t14290 = t14287 + t14289;
  t14345 = t2099*t14290;
  t14351 = t14303*t4662;
  t14364 = t14345 + t14351;
  t14315 = t2099*t14303;
  t14323 = -1.*t14290*t4662;
  t14325 = t14315 + t14323;
  t14381 = -1.*t7799*t1053;
  t14388 = t14364*t8162;
  t14391 = t14381 + t14388;
  t14394 = t6009*t14325;
  t14396 = t5348*t14391;
  t14397 = t14394 + t14396;
  t14400 = t5348*t14325;
  t14405 = -1.*t6009*t14391;
  t14407 = t14400 + t14405;
  t14409 = -1.*t11787*t14397;
  t14410 = t10583*t14407;
  t14411 = t14409 + t14410;
  t14414 = t10583*t14397;
  t14415 = t11787*t14407;
  t14417 = t14414 + t14415;
  t14420 = t12933*t14411;
  t14421 = t12795*t14417;
  t14423 = t14420 + t14421;
  t14426 = t12795*t14411;
  t14429 = -1.*t12933*t14417;
  t14430 = t14426 + t14429;
  t14433 = -1.*t13430*t14423;
  t14434 = t13380*t14430;
  t14440 = t14433 + t14434;
  t14443 = t13380*t14423;
  t14445 = t13430*t14430;
  t14446 = t14443 + t14445;
  p_output1[0]=0. + t11848*t12420 + t12560*t12770 + t12961*t13038 + t13242*t13315 + t13452*t13552 + t13582*t13625 + t13760*t13780 + t13836*t13859 - 0.0216*(t13719*t13780 + t13639*t13859) - 1.193387*(t13639*t13780 - 1.*t13719*t13859) + t1401*t1920 + t2645*t3846 + t1146*t429 + t4542*t5229 + t6243*t6723 + t7735*t8318 + 0.1305*(t7735*t7799 - 1.*t8162*t8824*t886) + t8824*t886*t8956 + t10379*t9767 + var1[0];
  p_output1[1]=0. + t11848*t14149 + t12560*t14156 + t12961*t14168 + t13242*t14195 + t13452*t14209 + t13582*t14220 + t13760*t14235 + t13836*t14254 - 0.0216*(t13719*t14235 + t13639*t14254) - 1.193387*(t13639*t14235 - 1.*t13719*t14254) + t14008*t1920 + t14041*t2645 + t13995*t429 + t14071*t5229 + t14084*t6243 + t14107*t8318 + 0.1305*(t14107*t7799 - 1.*t618*t8162*t8824) + t618*t8824*t8956 + t14129*t9767 + var1[1];
  p_output1[2]=0. + t11848*t14397 + t12560*t14407 + t12961*t14411 + t13242*t14417 + t13452*t14423 + t13582*t14430 + t13760*t14440 + t13836*t14446 - 0.0216*(t13719*t14440 + t13639*t14446) - 1.193387*(t13639*t14440 - 1.*t13719*t14446) + t14290*t2645 + t14303*t5229 + t14325*t6243 + 0.1305*(t14364*t7799 + t1053*t8162) + t14364*t8318 + t1078*t429*t8824 + t1920*t567*t8824 - 1.*t1053*t8956 + t14391*t9767 + var1[2];
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

#include "p_LeftToeBottomBack.hh"

namespace SymExpression
{

void p_LeftToeBottomBack_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
