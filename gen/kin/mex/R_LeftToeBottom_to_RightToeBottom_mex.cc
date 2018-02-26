/*
 * Automatically Generated from Mathematica.
 * Mon 26 Feb 2018 15:42:47 GMT-05:00
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
  double t418;
  double t585;
  double t458;
  double t461;
  double t641;
  double t951;
  double t481;
  double t715;
  double t717;
  double t276;
  double t994;
  double t1246;
  double t1280;
  double t1425;
  double t765;
  double t1312;
  double t1341;
  double t275;
  double t1426;
  double t1429;
  double t1444;
  double t1506;
  double t1412;
  double t1467;
  double t1476;
  double t165;
  double t1541;
  double t1590;
  double t1621;
  double t2088;
  double t1928;
  double t1932;
  double t1974;
  double t2098;
  double t2179;
  double t2398;
  double t2432;
  double t2575;
  double t2379;
  double t2576;
  double t2658;
  double t2778;
  double t2785;
  double t2833;
  double t2719;
  double t2841;
  double t2884;
  double t2935;
  double t2974;
  double t3077;
  double t2908;
  double t3093;
  double t3113;
  double t3126;
  double t3161;
  double t3164;
  double t1482;
  double t1637;
  double t1638;
  double t1772;
  double t1819;
  double t1821;
  double t3115;
  double t3179;
  double t3184;
  double t3187;
  double t3192;
  double t3222;
  double t3453;
  double t3477;
  double t3490;
  double t3667;
  double t3682;
  double t3850;
  double t3522;
  double t3924;
  double t3975;
  double t4321;
  double t4346;
  double t4370;
  double t4258;
  double t4401;
  double t4416;
  double t4479;
  double t4619;
  double t4662;
  double t4448;
  double t4821;
  double t4849;
  double t4900;
  double t5053;
  double t5531;
  double t3321;
  double t3364;
  double t3393;
  double t3186;
  double t3262;
  double t3287;
  double t4857;
  double t5572;
  double t5634;
  double t6314;
  double t6602;
  double t6659;
  double t1664;
  double t1853;
  double t1881;
  double t3408;
  double t3409;
  double t3417;
  double t3320;
  double t3418;
  double t10;
  double t6972;
  double t7027;
  double t7036;
  double t5740;
  double t6719;
  double t6814;
  double t6844;
  double t6929;
  double t6933;
  double t6950;
  double t7097;
  double t7104;
  double t7131;
  double t7136;
  double t7166;
  double t7195;
  double t7232;
  double t7268;
  double t164;
  double t7397;
  double t7288;
  double t7551;
  double t7555;
  double t7550;
  double t7564;
  double t7566;
  double t7567;
  double t7552;
  double t7560;
  double t7561;
  double t7572;
  double t7549;
  double t7579;
  double t7580;
  double t7582;
  double t7563;
  double t7573;
  double t7575;
  double t7583;
  double t7548;
  double t7591;
  double t7592;
  double t7594;
  double t7577;
  double t7584;
  double t7585;
  double t7595;
  double t7543;
  double t7613;
  double t7617;
  double t7618;
  double t7586;
  double t7598;
  double t7601;
  double t7620;
  double t3435;
  double t7651;
  double t7656;
  double t7657;
  double t7647;
  double t7648;
  double t7649;
  double t7661;
  double t7662;
  double t7663;
  double t7650;
  double t7658;
  double t7659;
  double t7670;
  double t7671;
  double t7673;
  double t7660;
  double t7664;
  double t7665;
  double t7678;
  double t7679;
  double t7680;
  double t7667;
  double t7674;
  double t7676;
  double t7325;
  double t7344;
  double t7383;
  double t7703;
  double t7708;
  double t7711;
  double t7696;
  double t7700;
  double t7701;
  double t7718;
  double t7722;
  double t7725;
  double t7702;
  double t7712;
  double t7716;
  double t7733;
  double t7734;
  double t7736;
  double t7717;
  double t7726;
  double t7727;
  double t7403;
  double t7409;
  double t7413;
  double t7610;
  double t7626;
  double t7630;
  double t7631;
  double t7636;
  double t7637;
  double t7638;
  double t7639;
  double t7642;
  double t7432;
  double t7443;
  double t7451;
  double t7732;
  double t7742;
  double t7743;
  double t7744;
  double t7745;
  double t7746;
  double t7747;
  double t7748;
  double t7749;
  double t7471;
  double t7476;
  double t7480;
  double t7677;
  double t7684;
  double t7685;
  double t7688;
  double t7689;
  double t7690;
  double t7692;
  double t7693;
  double t7694;
  double t7486;
  double t7489;
  double t7492;
  double t7498;
  double t7506;
  double t7514;
  double t7519;
  double t7529;
  double t7536;
  double t7538;
  double t7768;
  double t7769;
  double t7770;
  double t7777;
  double t7781;
  double t7782;
  double t7772;
  double t7773;
  double t7774;
  t418 = Cos(var1[1]);
  t585 = Cos(var1[3]);
  t458 = Cos(var1[2]);
  t461 = Sin(var1[3]);
  t641 = Sin(var1[2]);
  t951 = Cos(var1[4]);
  t481 = -1.*t418*t458*t461;
  t715 = -1.*t585*t418*t641;
  t717 = t481 + t715;
  t276 = Sin(var1[4]);
  t994 = t585*t418*t458;
  t1246 = -1.*t418*t461*t641;
  t1280 = t994 + t1246;
  t1425 = Cos(var1[5]);
  t765 = t276*t717;
  t1312 = t951*t1280;
  t1341 = t765 + t1312;
  t275 = Sin(var1[5]);
  t1426 = t951*t717;
  t1429 = -1.*t276*t1280;
  t1444 = t1426 + t1429;
  t1506 = Cos(var1[6]);
  t1412 = -1.*t275*t1341;
  t1467 = t1425*t1444;
  t1476 = t1412 + t1467;
  t165 = Sin(var1[6]);
  t1541 = t1425*t1341;
  t1590 = t275*t1444;
  t1621 = t1541 + t1590;
  t2088 = Sin(var1[0]);
  t1928 = Cos(var1[0]);
  t1932 = Sin(var1[1]);
  t1974 = t1928*t458*t1932;
  t2098 = -1.*t2088*t641;
  t2179 = t1974 + t2098;
  t2398 = -1.*t458*t2088;
  t2432 = -1.*t1928*t1932*t641;
  t2575 = t2398 + t2432;
  t2379 = -1.*t461*t2179;
  t2576 = t585*t2575;
  t2658 = t2379 + t2576;
  t2778 = t585*t2179;
  t2785 = t461*t2575;
  t2833 = t2778 + t2785;
  t2719 = t276*t2658;
  t2841 = t951*t2833;
  t2884 = t2719 + t2841;
  t2935 = t951*t2658;
  t2974 = -1.*t276*t2833;
  t3077 = t2935 + t2974;
  t2908 = -1.*t275*t2884;
  t3093 = t1425*t3077;
  t3113 = t2908 + t3093;
  t3126 = t1425*t2884;
  t3161 = t275*t3077;
  t3164 = t3126 + t3161;
  t1482 = t165*t1476;
  t1637 = t1506*t1621;
  t1638 = t1482 + t1637;
  t1772 = t1506*t1476;
  t1819 = -1.*t165*t1621;
  t1821 = t1772 + t1819;
  t3115 = t165*t3113;
  t3179 = t1506*t3164;
  t3184 = t3115 + t3179;
  t3187 = t1506*t3113;
  t3192 = -1.*t165*t3164;
  t3222 = t3187 + t3192;
  t3453 = t458*t2088*t1932;
  t3477 = t1928*t641;
  t3490 = t3453 + t3477;
  t3667 = t1928*t458;
  t3682 = -1.*t2088*t1932*t641;
  t3850 = t3667 + t3682;
  t3522 = -1.*t461*t3490;
  t3924 = t585*t3850;
  t3975 = t3522 + t3924;
  t4321 = t585*t3490;
  t4346 = t461*t3850;
  t4370 = t4321 + t4346;
  t4258 = t276*t3975;
  t4401 = t951*t4370;
  t4416 = t4258 + t4401;
  t4479 = t951*t3975;
  t4619 = -1.*t276*t4370;
  t4662 = t4479 + t4619;
  t4448 = -1.*t275*t4416;
  t4821 = t1425*t4662;
  t4849 = t4448 + t4821;
  t4900 = t1425*t4416;
  t5053 = t275*t4662;
  t5531 = t4900 + t5053;
  t3321 = -0.766044*t1638;
  t3364 = 0.642788*t1821;
  t3393 = t3321 + t3364;
  t3186 = -0.766044*t3184;
  t3262 = 0.642788*t3222;
  t3287 = t3186 + t3262;
  t4857 = t165*t4849;
  t5572 = t1506*t5531;
  t5634 = t4857 + t5572;
  t6314 = t1506*t4849;
  t6602 = -1.*t165*t5531;
  t6659 = t6314 + t6602;
  t1664 = 0.642788*t1638;
  t1853 = 0.766044*t1821;
  t1881 = t1664 + t1853;
  t3408 = 0.642788*t3184;
  t3409 = 0.766044*t3222;
  t3417 = t3408 + t3409;
  t3320 = t1881*t3287;
  t3418 = -1.*t3393*t3417;
  t10 = Cos(var1[8]);
  t6972 = -0.766044*t5634;
  t7027 = 0.642788*t6659;
  t7036 = t6972 + t7027;
  t5740 = 0.642788*t5634;
  t6719 = 0.766044*t6659;
  t6814 = t5740 + t6719;
  t6844 = t1928*t418*t3393;
  t6929 = t1932*t3287;
  t6933 = t6844 + t6929;
  t6950 = -1.*t6814*t6933;
  t7097 = t1928*t418*t1881;
  t7104 = t1932*t3417;
  t7131 = t7097 + t7104;
  t7136 = t7036*t7131;
  t7166 = t3320 + t3418;
  t7195 = -1.*t418*t2088*t7166;
  t7232 = 0. + t6950 + t7136 + t7195;
  t7268 = 1/t7232;
  t164 = Sin(var1[7]);
  t7397 = Sin(var1[8]);
  t7288 = Cos(var1[7]);
  t7551 = Cos(var1[9]);
  t7555 = Sin(var1[9]);
  t7550 = Cos(var1[10]);
  t7564 = t7288*t7551;
  t7566 = -1.*t164*t7397*t7555;
  t7567 = t7564 + t7566;
  t7552 = t7551*t164*t7397;
  t7560 = t7288*t7555;
  t7561 = t7552 + t7560;
  t7572 = Sin(var1[10]);
  t7549 = Cos(var1[11]);
  t7579 = t7550*t7567;
  t7580 = -1.*t7561*t7572;
  t7582 = t7579 + t7580;
  t7563 = t7550*t7561;
  t7573 = t7567*t7572;
  t7575 = t7563 + t7573;
  t7583 = Sin(var1[11]);
  t7548 = Cos(var1[12]);
  t7591 = t7549*t7582;
  t7592 = -1.*t7575*t7583;
  t7594 = t7591 + t7592;
  t7577 = t7549*t7575;
  t7584 = t7582*t7583;
  t7585 = t7577 + t7584;
  t7595 = Sin(var1[12]);
  t7543 = Cos(var1[13]);
  t7613 = t7548*t7594;
  t7617 = -1.*t7585*t7595;
  t7618 = t7613 + t7617;
  t7586 = t7548*t7585;
  t7598 = t7594*t7595;
  t7601 = t7586 + t7598;
  t7620 = Sin(var1[13]);
  t3435 = 0. + t3320 + t3418;
  t7651 = -1.*t7551*t164;
  t7656 = -1.*t7288*t7397*t7555;
  t7657 = t7651 + t7656;
  t7647 = t7288*t7551*t7397;
  t7648 = -1.*t164*t7555;
  t7649 = t7647 + t7648;
  t7661 = t7550*t7657;
  t7662 = -1.*t7649*t7572;
  t7663 = t7661 + t7662;
  t7650 = t7550*t7649;
  t7658 = t7657*t7572;
  t7659 = t7650 + t7658;
  t7670 = t7549*t7663;
  t7671 = -1.*t7659*t7583;
  t7673 = t7670 + t7671;
  t7660 = t7549*t7659;
  t7664 = t7663*t7583;
  t7665 = t7660 + t7664;
  t7678 = t7548*t7673;
  t7679 = -1.*t7665*t7595;
  t7680 = t7678 + t7679;
  t7667 = t7548*t7665;
  t7674 = t7673*t7595;
  t7676 = t7667 + t7674;
  t7325 = -1.*t1881*t7036;
  t7344 = t3393*t6814;
  t7383 = 0. + t7325 + t7344;
  t7703 = -1.*t10*t7550*t7555;
  t7708 = -1.*t10*t7551*t7572;
  t7711 = t7703 + t7708;
  t7696 = t10*t7551*t7550;
  t7700 = -1.*t10*t7555*t7572;
  t7701 = t7696 + t7700;
  t7718 = t7549*t7711;
  t7722 = -1.*t7701*t7583;
  t7725 = t7718 + t7722;
  t7702 = t7549*t7701;
  t7712 = t7711*t7583;
  t7716 = t7702 + t7712;
  t7733 = t7548*t7725;
  t7734 = -1.*t7716*t7595;
  t7736 = t7733 + t7734;
  t7717 = t7548*t7716;
  t7726 = t7725*t7595;
  t7727 = t7717 + t7726;
  t7403 = t3417*t7036;
  t7409 = -1.*t3287*t6814;
  t7413 = 0. + t7403 + t7409;
  t7610 = t7543*t7601;
  t7626 = t7618*t7620;
  t7630 = t7610 + t7626;
  t7631 = 0.642788*t7630;
  t7636 = t7543*t7618;
  t7637 = -1.*t7601*t7620;
  t7638 = t7636 + t7637;
  t7639 = 0.766044*t7638;
  t7642 = t7631 + t7639;
  t7432 = -1.*t1928*t418*t3393;
  t7443 = -1.*t1932*t3287;
  t7451 = 0. + t7432 + t7443;
  t7732 = t7543*t7727;
  t7742 = t7736*t7620;
  t7743 = t7732 + t7742;
  t7744 = 0.642788*t7743;
  t7745 = t7543*t7736;
  t7746 = -1.*t7727*t7620;
  t7747 = t7745 + t7746;
  t7748 = 0.766044*t7747;
  t7749 = t7744 + t7748;
  t7471 = -1.*t418*t2088*t3287;
  t7476 = t1928*t418*t7036;
  t7480 = 0. + t7471 + t7476;
  t7677 = t7543*t7676;
  t7684 = t7680*t7620;
  t7685 = t7677 + t7684;
  t7688 = 0.642788*t7685;
  t7689 = t7543*t7680;
  t7690 = -1.*t7676*t7620;
  t7692 = t7689 + t7690;
  t7693 = 0.766044*t7692;
  t7694 = t7688 + t7693;
  t7486 = t418*t2088*t3393;
  t7489 = t1932*t7036;
  t7492 = 0. + t7486 + t7489;
  t7498 = 0. + t7097 + t7104;
  t7506 = t418*t2088*t3417;
  t7514 = -1.*t1928*t418*t6814;
  t7519 = 0. + t7506 + t7514;
  t7529 = -1.*t418*t2088*t1881;
  t7536 = -1.*t1932*t6814;
  t7538 = 0. + t7529 + t7536;
  t7768 = -0.766044*t7630;
  t7769 = 0.642788*t7638;
  t7770 = t7768 + t7769;
  t7777 = -0.766044*t7743;
  t7781 = 0.642788*t7747;
  t7782 = t7777 + t7781;
  t7772 = -0.766044*t7685;
  t7773 = 0.642788*t7692;
  t7774 = t7772 + t7773;
  p_output1[0]=0. - 1.*t10*t164*t3435*t7268 - 1.*t10*t7268*t7288*t7383 + t7268*t7397*t7413;
  p_output1[1]=0. - 1.*t10*t164*t7268*t7451 + t7268*t7397*t7480 - 1.*t10*t7268*t7288*t7492;
  p_output1[2]=0. - 1.*t10*t164*t7268*t7498 + t7268*t7397*t7519 - 1.*t10*t7268*t7288*t7538;
  p_output1[3]=0. + t3435*t7268*t7642 + t7268*t7383*t7694 + t7268*t7413*t7749;
  p_output1[4]=0. + t7268*t7451*t7642 + t7268*t7492*t7694 + t7268*t7480*t7749;
  p_output1[5]=0. + t7268*t7498*t7642 + t7268*t7538*t7694 + t7268*t7519*t7749;
  p_output1[6]=0. + t3435*t7268*t7770 + t7268*t7383*t7774 + t7268*t7413*t7782;
  p_output1[7]=0. + t7268*t7451*t7770 + t7268*t7492*t7774 + t7268*t7480*t7782;
  p_output1[8]=0. + t7268*t7498*t7770 + t7268*t7538*t7774 + t7268*t7519*t7782;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "R_LeftToeBottom_to_RightToeBottom_mex.hh"

namespace SymExpression
{

void R_LeftToeBottom_to_RightToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
