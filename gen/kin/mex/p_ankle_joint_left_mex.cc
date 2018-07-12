/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:33:11 GMT-04:00
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
  double t2610;
  double t2361;
  double t2830;
  double t2423;
  double t2893;
  double t981;
  double t2539;
  double t3331;
  double t3392;
  double t3606;
  double t3956;
  double t4230;
  double t4769;
  double t6087;
  double t6110;
  double t6115;
  double t6280;
  double t5715;
  double t5793;
  double t6056;
  double t6295;
  double t6407;
  double t6411;
  double t6417;
  double t6423;
  double t6397;
  double t6401;
  double t6402;
  double t6437;
  double t6439;
  double t6450;
  double t6509;
  double t6520;
  double t6527;
  double t6559;
  double t6606;
  double t6625;
  double t6632;
  double t6667;
  double t6673;
  double t6675;
  double t6685;
  double t6688;
  double t6690;
  double t6756;
  double t6778;
  double t6787;
  double t6788;
  double t6826;
  double t6830;
  double t6837;
  double t6841;
  double t6850;
  double t6856;
  double t6860;
  double t6876;
  double t6888;
  double t6912;
  double t6951;
  double t6989;
  double t7000;
  double t1466;
  double t1500;
  double t1582;
  double t2246;
  double t4950;
  double t5592;
  double t7136;
  double t7138;
  double t7147;
  double t7159;
  double t7161;
  double t7166;
  double t6268;
  double t6287;
  double t6288;
  double t6304;
  double t6310;
  double t6315;
  double t7179;
  double t7180;
  double t7196;
  double t6418;
  double t6424;
  double t6428;
  double t6480;
  double t6496;
  double t6506;
  double t6547;
  double t6568;
  double t6595;
  double t7224;
  double t7237;
  double t7238;
  double t7243;
  double t7249;
  double t7257;
  double t6643;
  double t6647;
  double t6665;
  double t6724;
  double t6773;
  double t6777;
  double t7262;
  double t7276;
  double t7281;
  double t7294;
  double t7296;
  double t7297;
  double t6817;
  double t6822;
  double t6824;
  double t6859;
  double t6861;
  double t6866;
  double t7321;
  double t7323;
  double t7329;
  double t7347;
  double t7348;
  double t7350;
  double t6927;
  double t6940;
  double t6949;
  double t7353;
  double t7359;
  double t7363;
  double t7377;
  double t7378;
  double t7383;
  double t7461;
  double t7462;
  double t7466;
  double t7512;
  double t7515;
  double t7516;
  double t7528;
  double t7532;
  double t7533;
  double t7536;
  double t7539;
  double t7556;
  double t7574;
  double t7576;
  double t7595;
  double t7602;
  double t7613;
  double t7621;
  double t7634;
  double t7645;
  double t7647;
  double t7652;
  double t7656;
  double t7663;
  double t7670;
  double t7673;
  double t7675;
  t2610 = Cos(var1[3]);
  t2361 = Cos(var1[5]);
  t2830 = Sin(var1[4]);
  t2423 = Sin(var1[3]);
  t2893 = Sin(var1[5]);
  t981 = Cos(var1[6]);
  t2539 = -1.*t2361*t2423;
  t3331 = t2610*t2830*t2893;
  t3392 = t2539 + t3331;
  t3606 = t2610*t2361*t2830;
  t3956 = t2423*t2893;
  t4230 = t3606 + t3956;
  t4769 = Sin(var1[6]);
  t6087 = Cos(var1[7]);
  t6110 = -1.*t6087;
  t6115 = 1. + t6110;
  t6280 = Sin(var1[7]);
  t5715 = t981*t3392;
  t5793 = t4230*t4769;
  t6056 = t5715 + t5793;
  t6295 = Cos(var1[4]);
  t6407 = Cos(var1[8]);
  t6411 = -1.*t6407;
  t6417 = 1. + t6411;
  t6423 = Sin(var1[8]);
  t6397 = t2610*t6295*t6087;
  t6401 = t6056*t6280;
  t6402 = t6397 + t6401;
  t6437 = t981*t4230;
  t6439 = -1.*t3392*t4769;
  t6450 = t6437 + t6439;
  t6509 = Cos(var1[9]);
  t6520 = -1.*t6509;
  t6527 = 1. + t6520;
  t6559 = Sin(var1[9]);
  t6606 = t6407*t6402;
  t6625 = t6450*t6423;
  t6632 = t6606 + t6625;
  t6667 = t6407*t6450;
  t6673 = -1.*t6402*t6423;
  t6675 = t6667 + t6673;
  t6685 = Cos(var1[10]);
  t6688 = -1.*t6685;
  t6690 = 1. + t6688;
  t6756 = Sin(var1[10]);
  t6778 = -1.*t6559*t6632;
  t6787 = t6509*t6675;
  t6788 = t6778 + t6787;
  t6826 = t6509*t6632;
  t6830 = t6559*t6675;
  t6837 = t6826 + t6830;
  t6841 = Cos(var1[11]);
  t6850 = -1.*t6841;
  t6856 = 1. + t6850;
  t6860 = Sin(var1[11]);
  t6876 = t6756*t6788;
  t6888 = t6685*t6837;
  t6912 = t6876 + t6888;
  t6951 = t6685*t6788;
  t6989 = -1.*t6756*t6837;
  t7000 = t6951 + t6989;
  t1466 = -1.*t981;
  t1500 = 1. + t1466;
  t1582 = 0.135*t1500;
  t2246 = 0. + t1582;
  t4950 = -0.135*t4769;
  t5592 = 0. + t4950;
  t7136 = t2610*t2361;
  t7138 = t2423*t2830*t2893;
  t7147 = t7136 + t7138;
  t7159 = t2361*t2423*t2830;
  t7161 = -1.*t2610*t2893;
  t7166 = t7159 + t7161;
  t6268 = 0.135*t6115;
  t6287 = 0.049*t6280;
  t6288 = 0. + t6268 + t6287;
  t6304 = -0.049*t6115;
  t6310 = 0.135*t6280;
  t6315 = 0. + t6304 + t6310;
  t7179 = t981*t7147;
  t7180 = t7166*t4769;
  t7196 = t7179 + t7180;
  t6418 = -0.049*t6417;
  t6424 = -0.09*t6423;
  t6428 = 0. + t6418 + t6424;
  t6480 = -0.09*t6417;
  t6496 = 0.049*t6423;
  t6506 = 0. + t6480 + t6496;
  t6547 = -0.049*t6527;
  t6568 = -0.21*t6559;
  t6595 = 0. + t6547 + t6568;
  t7224 = t6295*t6087*t2423;
  t7237 = t7196*t6280;
  t7238 = t7224 + t7237;
  t7243 = t981*t7166;
  t7249 = -1.*t7147*t4769;
  t7257 = t7243 + t7249;
  t6643 = -0.21*t6527;
  t6647 = 0.049*t6559;
  t6665 = 0. + t6643 + t6647;
  t6724 = -0.2707*t6690;
  t6773 = 0.0016*t6756;
  t6777 = 0. + t6724 + t6773;
  t7262 = t6407*t7238;
  t7276 = t7257*t6423;
  t7281 = t7262 + t7276;
  t7294 = t6407*t7257;
  t7296 = -1.*t7238*t6423;
  t7297 = t7294 + t7296;
  t6817 = -0.0016*t6690;
  t6822 = -0.2707*t6756;
  t6824 = 0. + t6817 + t6822;
  t6859 = 0.0184*t6856;
  t6861 = -0.7055*t6860;
  t6866 = 0. + t6859 + t6861;
  t7321 = -1.*t6559*t7281;
  t7323 = t6509*t7297;
  t7329 = t7321 + t7323;
  t7347 = t6509*t7281;
  t7348 = t6559*t7297;
  t7350 = t7347 + t7348;
  t6927 = -0.7055*t6856;
  t6940 = -0.0184*t6860;
  t6949 = 0. + t6927 + t6940;
  t7353 = t6756*t7329;
  t7359 = t6685*t7350;
  t7363 = t7353 + t7359;
  t7377 = t6685*t7329;
  t7378 = -1.*t6756*t7350;
  t7383 = t7377 + t7378;
  t7461 = t6295*t981*t2893;
  t7462 = t6295*t2361*t4769;
  t7466 = t7461 + t7462;
  t7512 = -1.*t6087*t2830;
  t7515 = t7466*t6280;
  t7516 = t7512 + t7515;
  t7528 = t6295*t2361*t981;
  t7532 = -1.*t6295*t2893*t4769;
  t7533 = t7528 + t7532;
  t7536 = t6407*t7516;
  t7539 = t7533*t6423;
  t7556 = t7536 + t7539;
  t7574 = t6407*t7533;
  t7576 = -1.*t7516*t6423;
  t7595 = t7574 + t7576;
  t7602 = -1.*t6559*t7556;
  t7613 = t6509*t7595;
  t7621 = t7602 + t7613;
  t7634 = t6509*t7556;
  t7645 = t6559*t7595;
  t7647 = t7634 + t7645;
  t7652 = t6756*t7621;
  t7656 = t6685*t7647;
  t7663 = t7652 + t7656;
  t7670 = t6685*t7621;
  t7673 = -1.*t6756*t7647;
  t7675 = t7670 + t7673;
  p_output1[0]=0. + t2246*t3392 + t4230*t5592 + t6056*t6288 + 0.1305*(t6056*t6087 - 1.*t2610*t6280*t6295) + t2610*t6295*t6315 + t6402*t6428 + t6450*t6506 + t6595*t6632 + t6665*t6675 + t6777*t6788 + t6824*t6837 + t6866*t6912 + t6949*t7000 - 0.7055*(-1.*t6860*t6912 + t6841*t7000) + 0.0184*(t6841*t6912 + t6860*t7000) + var1[0];
  p_output1[1]=0. + t2423*t6295*t6315 + t2246*t7147 + t5592*t7166 + t6288*t7196 + 0.1305*(-1.*t2423*t6280*t6295 + t6087*t7196) + t6428*t7238 + t6506*t7257 + t6595*t7281 + t6665*t7297 + t6777*t7329 + t6824*t7350 + t6866*t7363 + t6949*t7383 - 0.7055*(-1.*t6860*t7363 + t6841*t7383) + 0.0184*(t6841*t7363 + t6860*t7383) + var1[1];
  p_output1[2]=0. + t2246*t2893*t6295 + t2361*t5592*t6295 - 1.*t2830*t6315 + t6288*t7466 + 0.1305*(t2830*t6280 + t6087*t7466) + t6428*t7516 + t6506*t7533 + t6595*t7556 + t6665*t7595 + t6777*t7621 + t6824*t7647 + t6866*t7663 + t6949*t7675 - 0.7055*(-1.*t6860*t7663 + t6841*t7675) + 0.0184*(t6841*t7663 + t6860*t7675) + var1[2];
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
    ( !(mrows == 20 && ncols == 1) && 
      !(mrows == 1 && ncols == 20))) 
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

#include "p_ankle_joint_left_mex.hh"

namespace SymExpression
{

void p_ankle_joint_left_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
