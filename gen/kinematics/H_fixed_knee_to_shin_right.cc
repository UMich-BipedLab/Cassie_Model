/*
 * Automatically Generated from Mathematica.
 * Tue 26 Sep 2017 12:22:29 GMT-04:00
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
  double t2252;
  double t5837;
  double t388;
  double t2504;
  double t6788;
  double t11607;
  double t5780;
  double t6942;
  double t11194;
  double t355;
  double t11671;
  double t11707;
  double t11715;
  double t11808;
  double t11270;
  double t11769;
  double t11774;
  double t328;
  double t11833;
  double t11841;
  double t11843;
  double t11873;
  double t11798;
  double t11844;
  double t11848;
  double t323;
  double t11874;
  double t11893;
  double t11896;
  double t11940;
  double t11951;
  double t11956;
  double t11965;
  double t11973;
  double t11978;
  double t73;
  double t12037;
  double t12042;
  double t12047;
  double t12058;
  double t12081;
  double t12103;
  double t12057;
  double t12132;
  double t12143;
  double t12153;
  double t12154;
  double t12168;
  double t11997;
  double t12148;
  double t12176;
  double t12179;
  double t12182;
  double t12203;
  double t12211;
  double t12213;
  double t12215;
  double t12216;
  double t12258;
  double t12270;
  double t12274;
  double t12286;
  double t12290;
  double t12291;
  double t12276;
  double t12305;
  double t12312;
  double t12325;
  double t12331;
  double t12335;
  double t12338;
  double t12340;
  double t12341;
  double t11867;
  double t11979;
  double t11980;
  double t12003;
  double t12011;
  double t12017;
  double t12181;
  double t12219;
  double t12221;
  double t12225;
  double t12233;
  double t12234;
  double t12324;
  double t12365;
  double t12366;
  double t12381;
  double t12386;
  double t12396;
  double t12458;
  double t12471;
  double t12567;
  double t12569;
  double t12598;
  double t12601;
  double t12419;
  double t12422;
  double t12425;
  double t12476;
  double t12480;
  double t12496;
  double t12510;
  double t12513;
  double t12520;
  double t12533;
  double t12534;
  double t12536;
  double t12540;
  double t12541;
  double t12545;
  double t12552;
  double t12554;
  double t12560;
  double t12570;
  double t12572;
  double t12573;
  double t12576;
  double t12579;
  double t12580;
  double t12592;
  double t12594;
  double t12595;
  double t12603;
  double t12604;
  double t12609;
  double t12612;
  double t12614;
  double t12616;
  double t12427;
  double t12433;
  double t12434;
  double t12437;
  double t12440;
  double t12441;
  t2252 = Cos(var1[5]);
  t5837 = Sin(var1[3]);
  t388 = Cos(var1[3]);
  t2504 = Sin(var1[4]);
  t6788 = Sin(var1[5]);
  t11607 = Cos(var1[14]);
  t5780 = t388*t2252*t2504;
  t6942 = t5837*t6788;
  t11194 = t5780 + t6942;
  t355 = Sin(var1[14]);
  t11671 = -1.*t2252*t5837;
  t11707 = t388*t2504*t6788;
  t11715 = t11671 + t11707;
  t11808 = Cos(var1[15]);
  t11270 = t355*t11194;
  t11769 = t11607*t11715;
  t11774 = t11270 + t11769;
  t328 = Sin(var1[15]);
  t11833 = t11607*t11194;
  t11841 = -1.*t355*t11715;
  t11843 = t11833 + t11841;
  t11873 = Cos(var1[17]);
  t11798 = -1.*t328*t11774;
  t11844 = t11808*t11843;
  t11848 = t11798 + t11844;
  t323 = Sin(var1[17]);
  t11874 = Cos(var1[16]);
  t11893 = Cos(var1[4]);
  t11896 = t11874*t388*t11893;
  t11940 = Sin(var1[16]);
  t11951 = t11808*t11774;
  t11956 = t328*t11843;
  t11965 = t11951 + t11956;
  t11973 = t11940*t11965;
  t11978 = t11896 + t11973;
  t73 = Sin(var1[18]);
  t12037 = t2252*t5837*t2504;
  t12042 = -1.*t388*t6788;
  t12047 = t12037 + t12042;
  t12058 = t388*t2252;
  t12081 = t5837*t2504*t6788;
  t12103 = t12058 + t12081;
  t12057 = t355*t12047;
  t12132 = t11607*t12103;
  t12143 = t12057 + t12132;
  t12153 = t11607*t12047;
  t12154 = -1.*t355*t12103;
  t12168 = t12153 + t12154;
  t11997 = Cos(var1[18]);
  t12148 = -1.*t328*t12143;
  t12176 = t11808*t12168;
  t12179 = t12148 + t12176;
  t12182 = t11874*t11893*t5837;
  t12203 = t11808*t12143;
  t12211 = t328*t12168;
  t12213 = t12203 + t12211;
  t12215 = t11940*t12213;
  t12216 = t12182 + t12215;
  t12258 = t11893*t2252*t355;
  t12270 = t11607*t11893*t6788;
  t12274 = t12258 + t12270;
  t12286 = t11607*t11893*t2252;
  t12290 = -1.*t11893*t355*t6788;
  t12291 = t12286 + t12290;
  t12276 = -1.*t328*t12274;
  t12305 = t11808*t12291;
  t12312 = t12276 + t12305;
  t12325 = -1.*t11874*t2504;
  t12331 = t11808*t12274;
  t12335 = t328*t12291;
  t12338 = t12331 + t12335;
  t12340 = t11940*t12338;
  t12341 = t12325 + t12340;
  t11867 = t323*t11848;
  t11979 = t11873*t11978;
  t11980 = t11867 + t11979;
  t12003 = t11873*t11848;
  t12011 = -1.*t323*t11978;
  t12017 = t12003 + t12011;
  t12181 = t323*t12179;
  t12219 = t11873*t12216;
  t12221 = t12181 + t12219;
  t12225 = t11873*t12179;
  t12233 = -1.*t323*t12216;
  t12234 = t12225 + t12233;
  t12324 = t323*t12312;
  t12365 = t11873*t12341;
  t12366 = t12324 + t12365;
  t12381 = t11873*t12312;
  t12386 = -1.*t323*t12341;
  t12396 = t12381 + t12386;
  t12458 = -1.*t11874;
  t12471 = 1. + t12458;
  t12567 = -1.*t11873;
  t12569 = 1. + t12567;
  t12598 = -1.*t11997;
  t12601 = 1. + t12598;
  t12419 = t11997*t11980;
  t12422 = t73*t12017;
  t12425 = t12419 + t12422;
  t12476 = -0.049*t12471;
  t12480 = -0.135*t11940;
  t12496 = 0. + t12476 + t12480;
  t12510 = 0.135*t355;
  t12513 = 0. + t12510;
  t12520 = -1.*t11607;
  t12533 = 1. + t12520;
  t12534 = -0.135*t12533;
  t12536 = 0. + t12534;
  t12540 = -1.*t11808;
  t12541 = 1. + t12540;
  t12545 = -0.135*t12541;
  t12552 = 0. + t12545;
  t12554 = 0.135*t328;
  t12560 = 0. + t12554;
  t12570 = -0.09*t12569;
  t12572 = 0.049*t323;
  t12573 = 0. + t12570 + t12572;
  t12576 = -0.135*t12471;
  t12579 = 0.049*t11940;
  t12580 = 0. + t12576 + t12579;
  t12592 = -0.049*t12569;
  t12594 = -0.09*t323;
  t12595 = 0. + t12592 + t12594;
  t12603 = -0.049*t12601;
  t12604 = -0.21*t73;
  t12609 = 0. + t12603 + t12604;
  t12612 = -0.21*t12601;
  t12614 = 0.049*t73;
  t12616 = 0. + t12612 + t12614;
  t12427 = t11997*t12221;
  t12433 = t73*t12234;
  t12434 = t12427 + t12433;
  t12437 = t11997*t12366;
  t12440 = t73*t12396;
  t12441 = t12437 + t12440;
  p_output1[0]=-1.*t11997*t12017 + t11980*t73;
  p_output1[1]=-1.*t11997*t12234 + t12221*t73;
  p_output1[2]=-1.*t11997*t12396 + t12366*t73;
  p_output1[3]=0.;
  p_output1[4]=t12425;
  p_output1[5]=t12434;
  p_output1[6]=t12441;
  p_output1[7]=0.;
  p_output1[8]=-1.*t11874*t11965 + t11893*t11940*t388;
  p_output1[9]=-1.*t11874*t12213 + t11893*t11940*t5837;
  p_output1[10]=-1.*t11874*t12338 - 1.*t11940*t2504;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.0016*t12425 + t11194*t12513 + t11715*t12536 + t11774*t12552 + t11843*t12560 + t11848*t12573 + t11965*t12580 + t11978*t12595 + t11980*t12609 + t12017*t12616 + t11893*t12496*t388 - 0.1305*(t11874*t11965 - 1.*t11893*t11940*t388) - 0.2707*(t11997*t12017 - 1.*t11980*t73) + var1[0];
  p_output1[13]=0. - 0.0016*t12434 + t12047*t12513 + t12103*t12536 + t12143*t12552 + t12168*t12560 + t12179*t12573 + t12213*t12580 + t12216*t12595 + t12221*t12609 + t12234*t12616 + t11893*t12496*t5837 - 0.1305*(t11874*t12213 - 1.*t11893*t11940*t5837) - 0.2707*(t11997*t12234 - 1.*t12221*t73) + var1[1];
  p_output1[14]=0. - 0.0016*t12441 + t12274*t12552 + t12291*t12560 + t12312*t12573 + t12338*t12580 + t12341*t12595 + t12366*t12609 + t12396*t12616 + t11893*t12513*t2252 - 1.*t12496*t2504 - 0.1305*(t11874*t12338 + t11940*t2504) + t11893*t12536*t6788 - 0.2707*(t11997*t12396 - 1.*t12366*t73) + var1[2];
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

#include "H_fixed_knee_to_shin_right.hh"

namespace SymExpression
{

void H_fixed_knee_to_shin_right_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
