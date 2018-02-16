/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:17:33 GMT-05:00
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
  double t556;
  double t599;
  double t1013;
  double t1073;
  double t1485;
  double t1551;
  double t2196;
  double t2429;
  double t3100;
  double t3204;
  double t3302;
  double t3537;
  double t2838;
  double t2923;
  double t3031;
  double t4064;
  double t4152;
  double t4237;
  double t4934;
  double t5003;
  double t5009;
  double t5168;
  double t4770;
  double t4774;
  double t4807;
  double t5345;
  double t5475;
  double t5541;
  double t6119;
  double t6126;
  double t6141;
  double t6170;
  double t5851;
  double t5903;
  double t6078;
  double t6245;
  double t6249;
  double t6266;
  double t7013;
  double t7059;
  double t7061;
  double t7144;
  double t6746;
  double t6853;
  double t6998;
  double t7303;
  double t7316;
  double t7317;
  double t813;
  double t824;
  double t997;
  double t1014;
  double t1027;
  double t1953;
  double t2224;
  double t2393;
  double t2478;
  double t2546;
  double t2657;
  double t3380;
  double t3721;
  double t3874;
  double t4564;
  double t4635;
  double t4637;
  double t7548;
  double t7574;
  double t7586;
  double t7599;
  double t7600;
  double t7604;
  double t5164;
  double t5221;
  double t5327;
  double t5545;
  double t5687;
  double t5693;
  double t7616;
  double t7619;
  double t7624;
  double t7632;
  double t7633;
  double t7640;
  double t6142;
  double t6176;
  double t6213;
  double t6493;
  double t6585;
  double t6595;
  double t7644;
  double t7645;
  double t7647;
  double t7651;
  double t7652;
  double t7661;
  double t7125;
  double t7210;
  double t7215;
  double t7344;
  double t7372;
  double t7375;
  double t7669;
  double t7672;
  double t7675;
  double t7685;
  double t7688;
  double t7691;
  double t7723;
  double t7724;
  double t7727;
  double t7735;
  double t7739;
  double t7740;
  double t7751;
  double t7752;
  double t7755;
  double t7761;
  double t7764;
  double t7766;
  double t7769;
  double t7773;
  double t7775;
  double t7778;
  double t7780;
  double t7784;
  t556 = Sin(var1[7]);
  t599 = Cos(var1[8]);
  t1013 = Sin(var1[8]);
  t1073 = Cos(var1[9]);
  t1485 = -1.*t1073;
  t1551 = 1. + t1485;
  t2196 = Sin(var1[9]);
  t2429 = Cos(var1[7]);
  t3100 = Cos(var1[10]);
  t3204 = -1.*t3100;
  t3302 = 1. + t3204;
  t3537 = Sin(var1[10]);
  t2838 = t1073*t556*t1013;
  t2923 = t2429*t2196;
  t3031 = t2838 + t2923;
  t4064 = t2429*t1073;
  t4152 = -1.*t556*t1013*t2196;
  t4237 = t4064 + t4152;
  t4934 = Cos(var1[11]);
  t5003 = -1.*t4934;
  t5009 = 1. + t5003;
  t5168 = Sin(var1[11]);
  t4770 = t3100*t3031;
  t4774 = t4237*t3537;
  t4807 = t4770 + t4774;
  t5345 = t3100*t4237;
  t5475 = -1.*t3031*t3537;
  t5541 = t5345 + t5475;
  t6119 = Cos(var1[12]);
  t6126 = -1.*t6119;
  t6141 = 1. + t6126;
  t6170 = Sin(var1[12]);
  t5851 = t4934*t4807;
  t5903 = t5541*t5168;
  t6078 = t5851 + t5903;
  t6245 = t4934*t5541;
  t6249 = -1.*t4807*t5168;
  t6266 = t6245 + t6249;
  t7013 = Cos(var1[13]);
  t7059 = -1.*t7013;
  t7061 = 1. + t7059;
  t7144 = Sin(var1[13]);
  t6746 = t6119*t6078;
  t6853 = t6266*t6170;
  t6998 = t6746 + t6853;
  t7303 = t6119*t6266;
  t7316 = -1.*t6078*t6170;
  t7317 = t7303 + t7316;
  t813 = -1.*t599;
  t824 = 1. + t813;
  t997 = -0.135*t824;
  t1014 = 0.049*t1013;
  t1027 = 0. + t997 + t1014;
  t1953 = -0.049*t1551;
  t2224 = -0.09*t2196;
  t2393 = 0. + t1953 + t2224;
  t2478 = -0.09*t1551;
  t2546 = 0.049*t2196;
  t2657 = 0. + t2478 + t2546;
  t3380 = -0.049*t3302;
  t3721 = -0.21*t3537;
  t3874 = 0. + t3380 + t3721;
  t4564 = -0.21*t3302;
  t4635 = 0.049*t3537;
  t4637 = 0. + t4564 + t4635;
  t7548 = t2429*t1073*t1013;
  t7574 = -1.*t556*t2196;
  t7586 = t7548 + t7574;
  t7599 = -1.*t1073*t556;
  t7600 = -1.*t2429*t1013*t2196;
  t7604 = t7599 + t7600;
  t5164 = -0.0016*t5009;
  t5221 = -0.2707*t5168;
  t5327 = 0. + t5164 + t5221;
  t5545 = -0.2707*t5009;
  t5687 = 0.0016*t5168;
  t5693 = 0. + t5545 + t5687;
  t7616 = t3100*t7586;
  t7619 = t7604*t3537;
  t7624 = t7616 + t7619;
  t7632 = t3100*t7604;
  t7633 = -1.*t7586*t3537;
  t7640 = t7632 + t7633;
  t6142 = 0.0184*t6141;
  t6176 = -0.7055*t6170;
  t6213 = 0. + t6142 + t6176;
  t6493 = -0.7055*t6141;
  t6585 = -0.0184*t6170;
  t6595 = 0. + t6493 + t6585;
  t7644 = t4934*t7624;
  t7645 = t7640*t5168;
  t7647 = t7644 + t7645;
  t7651 = t4934*t7640;
  t7652 = -1.*t7624*t5168;
  t7661 = t7651 + t7652;
  t7125 = -0.0216*t7061;
  t7210 = -1.1135*t7144;
  t7215 = 0. + t7125 + t7210;
  t7344 = -1.1135*t7061;
  t7372 = 0.0216*t7144;
  t7375 = 0. + t7344 + t7372;
  t7669 = t6119*t7647;
  t7672 = t7661*t6170;
  t7675 = t7669 + t7672;
  t7685 = t6119*t7661;
  t7688 = -1.*t7647*t6170;
  t7691 = t7685 + t7688;
  t7723 = t599*t1073*t3100;
  t7724 = -1.*t599*t2196*t3537;
  t7727 = t7723 + t7724;
  t7735 = -1.*t599*t3100*t2196;
  t7739 = -1.*t599*t1073*t3537;
  t7740 = t7735 + t7739;
  t7751 = t4934*t7727;
  t7752 = t7740*t5168;
  t7755 = t7751 + t7752;
  t7761 = t4934*t7740;
  t7764 = -1.*t7727*t5168;
  t7766 = t7761 + t7764;
  t7769 = t6119*t7755;
  t7773 = t7766*t6170;
  t7775 = t7769 + t7773;
  t7778 = t6119*t7766;
  t7780 = -1.*t7755*t6170;
  t7784 = t7778 + t7780;
  p_output1[0]=0.24925 - 1.*t2429*t2657 - 1.*t3031*t3874 - 1.*t4237*t4637 - 1.*t4807*t5327 - 0.135*t556 - 1.*t1027*t556 - 1.*t1013*t2393*t556 - 1.*t5541*t5693 + 0.1305*t556*t599 - 1.*t6078*t6213 - 1.*t6266*t6595 - 1.*t6998*t7215 + 1.1312*(-1.*t6998*t7144 + t7013*t7317) - 0.0306*(t6998*t7013 + t7144*t7317) - 1.*t7317*t7375;
  p_output1[1]=-0.0302 - 0.135*(1. - 1.*t2429) + t1027*t2429 + t1013*t2393*t2429 - 1.*t2657*t556 - 0.1305*t2429*t599 + t3874*t7586 + t4637*t7604 + t5327*t7624 + t5693*t7640 + t6213*t7647 + t6595*t7661 + t7215*t7675 + t7375*t7691 - 1.1312*(-1.*t7144*t7675 + t7013*t7691) + 0.0306*(t7013*t7675 + t7144*t7691);
  p_output1[2]=-0.047 - 0.004500000000000004*t1013 + t2393*t599 + t1073*t3874*t599 - 1.*t2196*t4637*t599 + t5327*t7727 + t5693*t7740 + t6213*t7755 + t6595*t7766 + t7215*t7775 + t7375*t7784 - 1.1312*(-1.*t7144*t7775 + t7013*t7784) + 0.0306*(t7013*t7775 + t7144*t7784) - 0.049*t824;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "p_MultisenseIMU_to_RightToeBottom_mex.hh"

namespace SymExpression
{

void p_MultisenseIMU_to_RightToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
