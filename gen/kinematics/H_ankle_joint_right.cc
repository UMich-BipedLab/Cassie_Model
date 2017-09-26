/*
 * Automatically Generated from Mathematica.
 * Tue 26 Sep 2017 12:22:30 GMT-04:00
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
  double t3613;
  double t9204;
  double t1970;
  double t6878;
  double t11194;
  double t11896;
  double t6942;
  double t11833;
  double t11843;
  double t1962;
  double t11979;
  double t11996;
  double t12003;
  double t12058;
  double t11848;
  double t12027;
  double t12037;
  double t1795;
  double t12081;
  double t12153;
  double t12168;
  double t12224;
  double t12057;
  double t12182;
  double t12211;
  double t1451;
  double t12225;
  double t12242;
  double t12248;
  double t12258;
  double t12270;
  double t12286;
  double t12291;
  double t12312;
  double t12324;
  double t12365;
  double t12215;
  double t12331;
  double t12335;
  double t1137;
  double t12373;
  double t12381;
  double t12405;
  double t712;
  double t12449;
  double t12452;
  double t12453;
  double t12480;
  double t12519;
  double t12536;
  double t12476;
  double t12537;
  double t12552;
  double t12560;
  double t12561;
  double t12570;
  double t12554;
  double t12572;
  double t12573;
  double t12579;
  double t12580;
  double t12582;
  double t12584;
  double t12586;
  double t12587;
  double t12440;
  double t12576;
  double t12591;
  double t12592;
  double t12595;
  double t12597;
  double t12604;
  double t12647;
  double t12648;
  double t12652;
  double t12658;
  double t12659;
  double t12663;
  double t12653;
  double t12667;
  double t12671;
  double t12674;
  double t12676;
  double t12677;
  double t12682;
  double t12687;
  double t12690;
  double t12672;
  double t12692;
  double t12694;
  double t12702;
  double t12703;
  double t12709;
  double t12340;
  double t12413;
  double t12422;
  double t12441;
  double t12444;
  double t12445;
  double t12594;
  double t12609;
  double t12610;
  double t12616;
  double t12621;
  double t12623;
  double t12696;
  double t12716;
  double t12722;
  double t12728;
  double t12729;
  double t12732;
  double t12773;
  double t12774;
  double t12860;
  double t12861;
  double t12923;
  double t12927;
  double t12950;
  double t12951;
  double t12736;
  double t12737;
  double t12740;
  double t12776;
  double t12780;
  double t12781;
  double t12783;
  double t12790;
  double t12798;
  double t12804;
  double t12809;
  double t12812;
  double t12823;
  double t12831;
  double t12836;
  double t12841;
  double t12851;
  double t12853;
  double t12867;
  double t12874;
  double t12877;
  double t12892;
  double t12896;
  double t12899;
  double t12911;
  double t12913;
  double t12916;
  double t12929;
  double t12933;
  double t12936;
  double t12940;
  double t12941;
  double t12942;
  double t12956;
  double t12959;
  double t12961;
  double t12965;
  double t12966;
  double t12969;
  double t12741;
  double t12742;
  double t12743;
  double t12746;
  double t12747;
  double t12748;
  t3613 = Cos(var1[5]);
  t9204 = Sin(var1[3]);
  t1970 = Cos(var1[3]);
  t6878 = Sin(var1[4]);
  t11194 = Sin(var1[5]);
  t11896 = Cos(var1[14]);
  t6942 = t1970*t3613*t6878;
  t11833 = t9204*t11194;
  t11843 = t6942 + t11833;
  t1962 = Sin(var1[14]);
  t11979 = -1.*t3613*t9204;
  t11996 = t1970*t6878*t11194;
  t12003 = t11979 + t11996;
  t12058 = Cos(var1[15]);
  t11848 = t1962*t11843;
  t12027 = t11896*t12003;
  t12037 = t11848 + t12027;
  t1795 = Sin(var1[15]);
  t12081 = t11896*t11843;
  t12153 = -1.*t1962*t12003;
  t12168 = t12081 + t12153;
  t12224 = Cos(var1[17]);
  t12057 = -1.*t1795*t12037;
  t12182 = t12058*t12168;
  t12211 = t12057 + t12182;
  t1451 = Sin(var1[17]);
  t12225 = Cos(var1[16]);
  t12242 = Cos(var1[4]);
  t12248 = t12225*t1970*t12242;
  t12258 = Sin(var1[16]);
  t12270 = t12058*t12037;
  t12286 = t1795*t12168;
  t12291 = t12270 + t12286;
  t12312 = t12258*t12291;
  t12324 = t12248 + t12312;
  t12365 = Cos(var1[18]);
  t12215 = t1451*t12211;
  t12331 = t12224*t12324;
  t12335 = t12215 + t12331;
  t1137 = Sin(var1[18]);
  t12373 = t12224*t12211;
  t12381 = -1.*t1451*t12324;
  t12405 = t12373 + t12381;
  t712 = Cos(var1[19]);
  t12449 = t3613*t9204*t6878;
  t12452 = -1.*t1970*t11194;
  t12453 = t12449 + t12452;
  t12480 = t1970*t3613;
  t12519 = t9204*t6878*t11194;
  t12536 = t12480 + t12519;
  t12476 = t1962*t12453;
  t12537 = t11896*t12536;
  t12552 = t12476 + t12537;
  t12560 = t11896*t12453;
  t12561 = -1.*t1962*t12536;
  t12570 = t12560 + t12561;
  t12554 = -1.*t1795*t12552;
  t12572 = t12058*t12570;
  t12573 = t12554 + t12572;
  t12579 = t12225*t12242*t9204;
  t12580 = t12058*t12552;
  t12582 = t1795*t12570;
  t12584 = t12580 + t12582;
  t12586 = t12258*t12584;
  t12587 = t12579 + t12586;
  t12440 = Sin(var1[19]);
  t12576 = t1451*t12573;
  t12591 = t12224*t12587;
  t12592 = t12576 + t12591;
  t12595 = t12224*t12573;
  t12597 = -1.*t1451*t12587;
  t12604 = t12595 + t12597;
  t12647 = t12242*t3613*t1962;
  t12648 = t11896*t12242*t11194;
  t12652 = t12647 + t12648;
  t12658 = t11896*t12242*t3613;
  t12659 = -1.*t12242*t1962*t11194;
  t12663 = t12658 + t12659;
  t12653 = -1.*t1795*t12652;
  t12667 = t12058*t12663;
  t12671 = t12653 + t12667;
  t12674 = -1.*t12225*t6878;
  t12676 = t12058*t12652;
  t12677 = t1795*t12663;
  t12682 = t12676 + t12677;
  t12687 = t12258*t12682;
  t12690 = t12674 + t12687;
  t12672 = t1451*t12671;
  t12692 = t12224*t12690;
  t12694 = t12672 + t12692;
  t12702 = t12224*t12671;
  t12703 = -1.*t1451*t12690;
  t12709 = t12702 + t12703;
  t12340 = -1.*t1137*t12335;
  t12413 = t12365*t12405;
  t12422 = t12340 + t12413;
  t12441 = t12365*t12335;
  t12444 = t1137*t12405;
  t12445 = t12441 + t12444;
  t12594 = -1.*t1137*t12592;
  t12609 = t12365*t12604;
  t12610 = t12594 + t12609;
  t12616 = t12365*t12592;
  t12621 = t1137*t12604;
  t12623 = t12616 + t12621;
  t12696 = -1.*t1137*t12694;
  t12716 = t12365*t12709;
  t12722 = t12696 + t12716;
  t12728 = t12365*t12694;
  t12729 = t1137*t12709;
  t12732 = t12728 + t12729;
  t12773 = -1.*t12225;
  t12774 = 1. + t12773;
  t12860 = -1.*t12224;
  t12861 = 1. + t12860;
  t12923 = -1.*t12365;
  t12927 = 1. + t12923;
  t12950 = -1.*t712;
  t12951 = 1. + t12950;
  t12736 = t12440*t12422;
  t12737 = t712*t12445;
  t12740 = t12736 + t12737;
  t12776 = -0.049*t12774;
  t12780 = -0.135*t12258;
  t12781 = 0. + t12776 + t12780;
  t12783 = 0.135*t1962;
  t12790 = 0. + t12783;
  t12798 = -1.*t11896;
  t12804 = 1. + t12798;
  t12809 = -0.135*t12804;
  t12812 = 0. + t12809;
  t12823 = -1.*t12058;
  t12831 = 1. + t12823;
  t12836 = -0.135*t12831;
  t12841 = 0. + t12836;
  t12851 = 0.135*t1795;
  t12853 = 0. + t12851;
  t12867 = -0.09*t12861;
  t12874 = 0.049*t1451;
  t12877 = 0. + t12867 + t12874;
  t12892 = -0.135*t12774;
  t12896 = 0.049*t12258;
  t12899 = 0. + t12892 + t12896;
  t12911 = -0.049*t12861;
  t12913 = -0.09*t1451;
  t12916 = 0. + t12911 + t12913;
  t12929 = -0.049*t12927;
  t12933 = -0.21*t1137;
  t12936 = 0. + t12929 + t12933;
  t12940 = -0.21*t12927;
  t12941 = 0.049*t1137;
  t12942 = 0. + t12940 + t12941;
  t12956 = -0.2707*t12951;
  t12959 = 0.0016*t12440;
  t12961 = 0. + t12956 + t12959;
  t12965 = -0.0016*t12951;
  t12966 = -0.2707*t12440;
  t12969 = 0. + t12965 + t12966;
  t12741 = t12440*t12610;
  t12742 = t712*t12623;
  t12743 = t12741 + t12742;
  t12746 = t12440*t12722;
  t12747 = t712*t12732;
  t12748 = t12746 + t12747;
  p_output1[0]=t12440*t12445 - 1.*t12422*t712;
  p_output1[1]=t12440*t12623 - 1.*t12610*t712;
  p_output1[2]=t12440*t12732 - 1.*t12722*t712;
  p_output1[3]=0.;
  p_output1[4]=t12740;
  p_output1[5]=t12743;
  p_output1[6]=t12748;
  p_output1[7]=0.;
  p_output1[8]=-1.*t12225*t12291 + t12242*t12258*t1970;
  p_output1[9]=-1.*t12225*t12584 + t12242*t12258*t9204;
  p_output1[10]=-1.*t12225*t12682 - 1.*t12258*t6878;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.0184*t12740 + t11843*t12790 + t12003*t12812 + t12037*t12841 + t12168*t12853 + t12211*t12877 + t12291*t12899 + t12324*t12916 + t12335*t12936 + t12405*t12942 + t12422*t12961 + t12445*t12969 + t12242*t12781*t1970 - 0.1305*(t12225*t12291 - 1.*t12242*t12258*t1970) - 0.7055*(-1.*t12440*t12445 + t12422*t712) + var1[0];
  p_output1[13]=0. + 0.0184*t12743 + t12453*t12790 + t12536*t12812 + t12552*t12841 + t12570*t12853 + t12573*t12877 + t12584*t12899 + t12587*t12916 + t12592*t12936 + t12604*t12942 + t12610*t12961 + t12623*t12969 - 0.7055*(-1.*t12440*t12623 + t12610*t712) + t12242*t12781*t9204 - 0.1305*(t12225*t12584 - 1.*t12242*t12258*t9204) + var1[1];
  p_output1[14]=0. + 0.0184*t12748 + t11194*t12242*t12812 + t12652*t12841 + t12663*t12853 + t12671*t12877 + t12682*t12899 + t12690*t12916 + t12694*t12936 + t12709*t12942 + t12722*t12961 + t12732*t12969 + t12242*t12790*t3613 - 1.*t12781*t6878 - 0.1305*(t12225*t12682 + t12258*t6878) - 0.7055*(-1.*t12440*t12732 + t12722*t712) + var1[2];
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

#include "H_ankle_joint_right.hh"

namespace SymExpression
{

void H_ankle_joint_right_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
