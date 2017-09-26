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
  double t76;
  double t929;
  double t1282;
  double t990;
  double t1305;
  double t1434;
  double t1259;
  double t1313;
  double t1397;
  double t863;
  double t1436;
  double t2233;
  double t2267;
  double t80;
  double t499;
  double t622;
  double t735;
  double t2954;
  double t8162;
  double t8519;
  double t9335;
  double t11833;
  double t11848;
  double t12461;
  double t1401;
  double t2308;
  double t2570;
  double t3494;
  double t4537;
  double t4542;
  double t2645;
  double t4662;
  double t4838;
  double t13260;
  double t13150;
  double t13216;
  double t13230;
  double t13138;
  double t13273;
  double t13293;
  double t13308;
  double t13352;
  double t13242;
  double t13315;
  double t13317;
  double t13127;
  double t13380;
  double t13388;
  double t13408;
  double t13441;
  double t13341;
  double t13419;
  double t13420;
  double t13089;
  double t13447;
  double t13452;
  double t13458;
  double t13532;
  double t13430;
  double t13476;
  double t13492;
  double t13056;
  double t13539;
  double t13544;
  double t13552;
  double t13589;
  double t13518;
  double t13564;
  double t13573;
  double t13050;
  double t13591;
  double t13599;
  double t13611;
  double t10506;
  double t12465;
  double t12480;
  double t12560;
  double t12569;
  double t12687;
  double t12554;
  double t12748;
  double t12751;
  double t13757;
  double t13760;
  double t13765;
  double t13780;
  double t13787;
  double t13792;
  double t13778;
  double t13804;
  double t13810;
  double t13818;
  double t13830;
  double t13836;
  double t13815;
  double t13837;
  double t13849;
  double t13867;
  double t13874;
  double t13875;
  double t13859;
  double t13891;
  double t13892;
  double t13899;
  double t13900;
  double t13914;
  double t13896;
  double t13923;
  double t13942;
  double t13973;
  double t13977;
  double t13984;
  double t12858;
  double t12899;
  double t12902;
  double t12941;
  double t12956;
  double t12961;
  double t12933;
  double t12989;
  double t13013;
  double t14026;
  double t14027;
  double t14039;
  double t14048;
  double t14049;
  double t14059;
  double t14041;
  double t14061;
  double t14062;
  double t14064;
  double t14068;
  double t14071;
  double t14063;
  double t14073;
  double t14075;
  double t14084;
  double t14085;
  double t14090;
  double t14078;
  double t14093;
  double t14094;
  double t14099;
  double t14106;
  double t14107;
  double t14095;
  double t14110;
  double t14113;
  double t14115;
  double t14116;
  double t14117;
  double t13582;
  double t13627;
  double t13639;
  double t13705;
  double t13714;
  double t13718;
  double t13971;
  double t13992;
  double t13995;
  double t13999;
  double t14001;
  double t14005;
  double t14114;
  double t14124;
  double t14126;
  double t14129;
  double t14132;
  double t14133;
  double t14170;
  double t14171;
  double t14233;
  double t14234;
  double t14282;
  double t14285;
  double t14337;
  double t14338;
  double t14382;
  double t14383;
  double t14401;
  double t14404;
  double t14172;
  double t14173;
  double t14182;
  double t14195;
  double t14197;
  double t14201;
  double t14205;
  double t14207;
  double t14209;
  double t14213;
  double t14216;
  double t14217;
  double t14219;
  double t14221;
  double t14224;
  double t14241;
  double t14245;
  double t14250;
  double t14259;
  double t14263;
  double t14265;
  double t14276;
  double t14279;
  double t14280;
  double t14287;
  double t14289;
  double t14290;
  double t14302;
  double t14303;
  double t14313;
  double t14364;
  double t14367;
  double t14369;
  double t14373;
  double t14377;
  double t14380;
  double t14388;
  double t14391;
  double t14393;
  double t14396;
  double t14397;
  double t14399;
  double t14405;
  double t14407;
  double t14408;
  double t14410;
  double t14411;
  double t14412;
  t76 = Cos(var1[3]);
  t929 = Cos(var1[5]);
  t1282 = Sin(var1[3]);
  t990 = Sin(var1[4]);
  t1305 = Sin(var1[5]);
  t1434 = Cos(var1[14]);
  t1259 = t76*t929*t990;
  t1313 = t1282*t1305;
  t1397 = t1259 + t1313;
  t863 = Sin(var1[14]);
  t1436 = -1.*t929*t1282;
  t2233 = t76*t990*t1305;
  t2267 = t1436 + t2233;
  t80 = Cos(var1[4]);
  t499 = Sin(var1[16]);
  t622 = Cos(var1[16]);
  t735 = Cos(var1[15]);
  t2954 = Sin(var1[15]);
  t8162 = t929*t1282*t990;
  t8519 = -1.*t76*t1305;
  t9335 = t8162 + t8519;
  t11833 = t76*t929;
  t11848 = t1282*t990*t1305;
  t12461 = t11833 + t11848;
  t1401 = t863*t1397;
  t2308 = t1434*t2267;
  t2570 = t1401 + t2308;
  t3494 = t1434*t1397;
  t4537 = -1.*t863*t2267;
  t4542 = t3494 + t4537;
  t2645 = t735*t2570;
  t4662 = t2954*t4542;
  t4838 = t2645 + t4662;
  t13260 = Cos(var1[17]);
  t13150 = -1.*t2954*t2570;
  t13216 = t735*t4542;
  t13230 = t13150 + t13216;
  t13138 = Sin(var1[17]);
  t13273 = t622*t76*t80;
  t13293 = t499*t4838;
  t13308 = t13273 + t13293;
  t13352 = Cos(var1[18]);
  t13242 = t13138*t13230;
  t13315 = t13260*t13308;
  t13317 = t13242 + t13315;
  t13127 = Sin(var1[18]);
  t13380 = t13260*t13230;
  t13388 = -1.*t13138*t13308;
  t13408 = t13380 + t13388;
  t13441 = Cos(var1[19]);
  t13341 = -1.*t13127*t13317;
  t13419 = t13352*t13408;
  t13420 = t13341 + t13419;
  t13089 = Sin(var1[19]);
  t13447 = t13352*t13317;
  t13452 = t13127*t13408;
  t13458 = t13447 + t13452;
  t13532 = Cos(var1[20]);
  t13430 = t13089*t13420;
  t13476 = t13441*t13458;
  t13492 = t13430 + t13476;
  t13056 = Sin(var1[20]);
  t13539 = t13441*t13420;
  t13544 = -1.*t13089*t13458;
  t13552 = t13539 + t13544;
  t13589 = Cos(var1[21]);
  t13518 = -1.*t13056*t13492;
  t13564 = t13532*t13552;
  t13573 = t13518 + t13564;
  t13050 = Sin(var1[21]);
  t13591 = t13532*t13492;
  t13599 = t13056*t13552;
  t13611 = t13591 + t13599;
  t10506 = t863*t9335;
  t12465 = t1434*t12461;
  t12480 = t10506 + t12465;
  t12560 = t1434*t9335;
  t12569 = -1.*t863*t12461;
  t12687 = t12560 + t12569;
  t12554 = t735*t12480;
  t12748 = t2954*t12687;
  t12751 = t12554 + t12748;
  t13757 = -1.*t2954*t12480;
  t13760 = t735*t12687;
  t13765 = t13757 + t13760;
  t13780 = t622*t80*t1282;
  t13787 = t499*t12751;
  t13792 = t13780 + t13787;
  t13778 = t13138*t13765;
  t13804 = t13260*t13792;
  t13810 = t13778 + t13804;
  t13818 = t13260*t13765;
  t13830 = -1.*t13138*t13792;
  t13836 = t13818 + t13830;
  t13815 = -1.*t13127*t13810;
  t13837 = t13352*t13836;
  t13849 = t13815 + t13837;
  t13867 = t13352*t13810;
  t13874 = t13127*t13836;
  t13875 = t13867 + t13874;
  t13859 = t13089*t13849;
  t13891 = t13441*t13875;
  t13892 = t13859 + t13891;
  t13899 = t13441*t13849;
  t13900 = -1.*t13089*t13875;
  t13914 = t13899 + t13900;
  t13896 = -1.*t13056*t13892;
  t13923 = t13532*t13914;
  t13942 = t13896 + t13923;
  t13973 = t13532*t13892;
  t13977 = t13056*t13914;
  t13984 = t13973 + t13977;
  t12858 = t80*t929*t863;
  t12899 = t1434*t80*t1305;
  t12902 = t12858 + t12899;
  t12941 = t1434*t80*t929;
  t12956 = -1.*t80*t863*t1305;
  t12961 = t12941 + t12956;
  t12933 = t735*t12902;
  t12989 = t2954*t12961;
  t13013 = t12933 + t12989;
  t14026 = -1.*t2954*t12902;
  t14027 = t735*t12961;
  t14039 = t14026 + t14027;
  t14048 = -1.*t622*t990;
  t14049 = t499*t13013;
  t14059 = t14048 + t14049;
  t14041 = t13138*t14039;
  t14061 = t13260*t14059;
  t14062 = t14041 + t14061;
  t14064 = t13260*t14039;
  t14068 = -1.*t13138*t14059;
  t14071 = t14064 + t14068;
  t14063 = -1.*t13127*t14062;
  t14073 = t13352*t14071;
  t14075 = t14063 + t14073;
  t14084 = t13352*t14062;
  t14085 = t13127*t14071;
  t14090 = t14084 + t14085;
  t14078 = t13089*t14075;
  t14093 = t13441*t14090;
  t14094 = t14078 + t14093;
  t14099 = t13441*t14075;
  t14106 = -1.*t13089*t14090;
  t14107 = t14099 + t14106;
  t14095 = -1.*t13056*t14094;
  t14110 = t13532*t14107;
  t14113 = t14095 + t14110;
  t14115 = t13532*t14094;
  t14116 = t13056*t14107;
  t14117 = t14115 + t14116;
  t13582 = t13050*t13573;
  t13627 = t13589*t13611;
  t13639 = t13582 + t13627;
  t13705 = t13589*t13573;
  t13714 = -1.*t13050*t13611;
  t13718 = t13705 + t13714;
  t13971 = t13050*t13942;
  t13992 = t13589*t13984;
  t13995 = t13971 + t13992;
  t13999 = t13589*t13942;
  t14001 = -1.*t13050*t13984;
  t14005 = t13999 + t14001;
  t14114 = t13050*t14113;
  t14124 = t13589*t14117;
  t14126 = t14114 + t14124;
  t14129 = t13589*t14113;
  t14132 = -1.*t13050*t14117;
  t14133 = t14129 + t14132;
  t14170 = -1.*t622;
  t14171 = 1. + t14170;
  t14233 = -1.*t13260;
  t14234 = 1. + t14233;
  t14282 = -1.*t13352;
  t14285 = 1. + t14282;
  t14337 = -1.*t13441;
  t14338 = 1. + t14337;
  t14382 = -1.*t13532;
  t14383 = 1. + t14382;
  t14401 = -1.*t13589;
  t14404 = 1. + t14401;
  t14172 = -0.049*t14171;
  t14173 = -0.135*t499;
  t14182 = 0. + t14172 + t14173;
  t14195 = 0.135*t863;
  t14197 = 0. + t14195;
  t14201 = -1.*t1434;
  t14205 = 1. + t14201;
  t14207 = -0.135*t14205;
  t14209 = 0. + t14207;
  t14213 = -1.*t735;
  t14216 = 1. + t14213;
  t14217 = -0.135*t14216;
  t14219 = 0. + t14217;
  t14221 = 0.135*t2954;
  t14224 = 0. + t14221;
  t14241 = -0.09*t14234;
  t14245 = 0.049*t13138;
  t14250 = 0. + t14241 + t14245;
  t14259 = -0.135*t14171;
  t14263 = 0.049*t499;
  t14265 = 0. + t14259 + t14263;
  t14276 = -0.049*t14234;
  t14279 = -0.09*t13138;
  t14280 = 0. + t14276 + t14279;
  t14287 = -0.049*t14285;
  t14289 = -0.21*t13127;
  t14290 = 0. + t14287 + t14289;
  t14302 = -0.21*t14285;
  t14303 = 0.049*t13127;
  t14313 = 0. + t14302 + t14303;
  t14364 = -0.2707*t14338;
  t14367 = 0.0016*t13089;
  t14369 = 0. + t14364 + t14367;
  t14373 = -0.0016*t14338;
  t14377 = -0.2707*t13089;
  t14380 = 0. + t14373 + t14377;
  t14388 = 0.0184*t14383;
  t14391 = -0.7055*t13056;
  t14393 = 0. + t14388 + t14391;
  t14396 = -0.7055*t14383;
  t14397 = -0.0184*t13056;
  t14399 = 0. + t14396 + t14397;
  t14405 = -1.1135*t14404;
  t14407 = 0.0216*t13050;
  t14408 = 0. + t14405 + t14407;
  t14410 = -0.0216*t14404;
  t14411 = -1.1135*t13050;
  t14412 = 0. + t14410 + t14411;
  p_output1[0]=-1.*t4838*t622 + t499*t76*t80;
  p_output1[1]=-1.*t12751*t622 + t1282*t499*t80;
  p_output1[2]=-1.*t13013*t622 - 1.*t499*t990;
  p_output1[3]=0.;
  p_output1[4]=0.642788*t13639 + 0.766044*t13718;
  p_output1[5]=0.642788*t13995 + 0.766044*t14005;
  p_output1[6]=0.642788*t14126 + 0.766044*t14133;
  p_output1[7]=0.;
  p_output1[8]=-0.766044*t13639 + 0.642788*t13718;
  p_output1[9]=-0.766044*t13995 + 0.642788*t14005;
  p_output1[10]=-0.766044*t14126 + 0.642788*t14133;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.0306*t13639 - 1.1312*t13718 + t1397*t14197 + t13230*t14250 + t13308*t14280 + t13317*t14290 + t13408*t14313 + t13420*t14369 + t13458*t14380 + t13492*t14393 + t13552*t14399 + t13573*t14408 + t13611*t14412 + t14209*t2267 + t14219*t2570 + t14224*t4542 + t14265*t4838 + t14182*t76*t80 - 0.1305*(t4838*t622 - 1.*t499*t76*t80) + var1[0];
  p_output1[13]=0. + 0.0306*t13995 - 1.1312*t14005 + t12461*t14209 + t12480*t14219 + t12687*t14224 + t13765*t14250 + t12751*t14265 + t13792*t14280 + t13810*t14290 + t13836*t14313 + t13849*t14369 + t13875*t14380 + t13892*t14393 + t13914*t14399 + t13942*t14408 + t13984*t14412 + t1282*t14182*t80 - 0.1305*(t12751*t622 - 1.*t1282*t499*t80) + t14197*t9335 + var1[1];
  p_output1[14]=0. + 0.0306*t14126 - 1.1312*t14133 + t12902*t14219 + t12961*t14224 + t14039*t14250 + t13013*t14265 + t14059*t14280 + t14062*t14290 + t14071*t14313 + t14075*t14369 + t14090*t14380 + t14094*t14393 + t14107*t14399 + t14113*t14408 + t14117*t14412 + t1305*t14209*t80 + t14197*t80*t929 - 1.*t14182*t990 - 0.1305*(t13013*t622 + t499*t990) + var1[2];
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

#include "H_RightToeBottom.hh"

namespace SymExpression
{

void H_RightToeBottom_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
