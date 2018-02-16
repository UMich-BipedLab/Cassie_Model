/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:17:24 GMT-05:00
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
  double t88;
  double t243;
  double t643;
  double t1043;
  double t1053;
  double t1168;
  double t1286;
  double t1605;
  double t1854;
  double t1865;
  double t1882;
  double t2078;
  double t2203;
  double t2205;
  double t2251;
  double t2602;
  double t2609;
  double t2660;
  double t2857;
  double t2885;
  double t2922;
  double t2967;
  double t3085;
  double t3100;
  double t3164;
  double t3649;
  double t3653;
  double t3655;
  double t3773;
  double t3779;
  double t3784;
  double t3816;
  double t3850;
  double t3874;
  double t3919;
  double t4389;
  double t4426;
  double t4527;
  double t4593;
  double t4744;
  double t4829;
  double t4923;
  double t5092;
  double t5119;
  double t5193;
  double t5249;
  double t5276;
  double t5293;
  double t384;
  double t437;
  double t585;
  double t846;
  double t857;
  double t1223;
  double t1504;
  double t1507;
  double t1664;
  double t1773;
  double t1780;
  double t1996;
  double t2094;
  double t2188;
  double t2369;
  double t2394;
  double t2435;
  double t2925;
  double t3022;
  double t3040;
  double t6316;
  double t6364;
  double t6371;
  double t6434;
  double t6452;
  double t6512;
  double t3205;
  double t3237;
  double t3542;
  double t3808;
  double t3822;
  double t3828;
  double t6542;
  double t6567;
  double t6663;
  double t6706;
  double t6823;
  double t6863;
  double t4049;
  double t4067;
  double t4105;
  double t4877;
  double t5007;
  double t5045;
  double t7011;
  double t7027;
  double t7077;
  double t7082;
  double t7093;
  double t7096;
  double t5204;
  double t5237;
  double t5241;
  double t7120;
  double t7125;
  double t7134;
  double t7188;
  double t7192;
  double t7212;
  double t6124;
  double t6308;
  double t6413;
  double t6518;
  double t6705;
  double t6911;
  double t7080;
  double t7106;
  double t7175;
  double t7218;
  double t7227;
  double t7228;
  double t7229;
  double t7231;
  double t7234;
  double t7235;
  double t7236;
  double t7237;
  double t1518;
  double t1843;
  double t2363;
  double t2751;
  double t3183;
  double t3661;
  double t4020;
  double t4558;
  double t5203;
  double t5338;
  double t5348;
  double t5446;
  double t5468;
  double t5482;
  double t5492;
  double t5501;
  double t5660;
  double t5688;
  double t7241;
  double t7242;
  double t7354;
  double t7361;
  double t7367;
  double t7375;
  double t7383;
  double t7387;
  double t7394;
  double t7396;
  double t7398;
  double t7403;
  double t7407;
  double t7409;
  double t7417;
  double t7420;
  double t7423;
  double t7429;
  double t7430;
  double t7434;
  double t7283;
  double t7334;
  double t7339;
  double t7344;
  double t7349;
  double t7353;
  double t7372;
  double t7389;
  double t7402;
  double t7412;
  double t7425;
  double t7436;
  double t7439;
  double t7440;
  double t7445;
  double t7450;
  double t7452;
  double t7455;
  double t7457;
  double t7466;
  double t7469;
  double t7244;
  double t7293;
  double t7493;
  double t7495;
  double t7511;
  double t7515;
  double t7529;
  double t7506;
  double t7507;
  double t7547;
  double t7548;
  double t7549;
  double t7564;
  double t7497;
  double t7498;
  double t7500;
  double t7619;
  double t7624;
  double t7627;
  double t7633;
  double t7635;
  double t7638;
  double t7600;
  double t7604;
  double t7609;
  double t7661;
  double t7668;
  double t7671;
  double t7678;
  double t7682;
  double t7683;
  double t7651;
  double t7652;
  double t7654;
  double t7701;
  double t7702;
  double t7704;
  double t7709;
  double t7711;
  double t7713;
  double t7696;
  double t7698;
  double t7699;
  double t7734;
  double t7735;
  double t7736;
  double t7741;
  double t7746;
  double t7750;
  double t7723;
  double t7724;
  double t7725;
  t88 = Sin(var1[0]);
  t243 = Cos(var1[1]);
  t643 = Sin(var1[1]);
  t1043 = Cos(var1[2]);
  t1053 = -1.*t1043;
  t1168 = 1. + t1053;
  t1286 = Sin(var1[2]);
  t1605 = Cos(var1[0]);
  t1854 = Cos(var1[3]);
  t1865 = -1.*t1854;
  t1882 = 1. + t1865;
  t2078 = Sin(var1[3]);
  t2203 = t1043*t88*t643;
  t2205 = t1605*t1286;
  t2251 = t2203 + t2205;
  t2602 = t1605*t1043;
  t2609 = -1.*t88*t643*t1286;
  t2660 = t2602 + t2609;
  t2857 = Cos(var1[4]);
  t2885 = -1.*t2857;
  t2922 = 1. + t2885;
  t2967 = Sin(var1[4]);
  t3085 = -1.*t2078*t2251;
  t3100 = t1854*t2660;
  t3164 = t3085 + t3100;
  t3649 = t1854*t2251;
  t3653 = t2078*t2660;
  t3655 = t3649 + t3653;
  t3773 = Cos(var1[5]);
  t3779 = -1.*t3773;
  t3784 = 1. + t3779;
  t3816 = Sin(var1[5]);
  t3850 = t2967*t3164;
  t3874 = t2857*t3655;
  t3919 = t3850 + t3874;
  t4389 = t2857*t3164;
  t4426 = -1.*t2967*t3655;
  t4527 = t4389 + t4426;
  t4593 = Cos(var1[6]);
  t4744 = -1.*t4593;
  t4829 = 1. + t4744;
  t4923 = Sin(var1[6]);
  t5092 = -1.*t3816*t3919;
  t5119 = t3773*t4527;
  t5193 = t5092 + t5119;
  t5249 = t3773*t3919;
  t5276 = t3816*t4527;
  t5293 = t5249 + t5276;
  t384 = -1.*t243;
  t437 = 1. + t384;
  t585 = 0.135*t437;
  t846 = 0.049*t643;
  t857 = 0. + t585 + t846;
  t1223 = -0.049*t1168;
  t1504 = -0.09*t1286;
  t1507 = 0. + t1223 + t1504;
  t1664 = -0.09*t1168;
  t1773 = 0.049*t1286;
  t1780 = 0. + t1664 + t1773;
  t1996 = -0.049*t1882;
  t2094 = -0.21*t2078;
  t2188 = 0. + t1996 + t2094;
  t2369 = -0.21*t1882;
  t2394 = 0.049*t2078;
  t2435 = 0. + t2369 + t2394;
  t2925 = -0.2707*t2922;
  t3022 = 0.0016*t2967;
  t3040 = 0. + t2925 + t3022;
  t6316 = t1605*t1043*t643;
  t6364 = -1.*t88*t1286;
  t6371 = t6316 + t6364;
  t6434 = -1.*t1043*t88;
  t6452 = -1.*t1605*t643*t1286;
  t6512 = t6434 + t6452;
  t3205 = -0.0016*t2922;
  t3237 = -0.2707*t2967;
  t3542 = 0. + t3205 + t3237;
  t3808 = 0.0184*t3784;
  t3822 = -0.7055*t3816;
  t3828 = 0. + t3808 + t3822;
  t6542 = -1.*t2078*t6371;
  t6567 = t1854*t6512;
  t6663 = t6542 + t6567;
  t6706 = t1854*t6371;
  t6823 = t2078*t6512;
  t6863 = t6706 + t6823;
  t4049 = -0.7055*t3784;
  t4067 = -0.0184*t3816;
  t4105 = 0. + t4049 + t4067;
  t4877 = -1.1135*t4829;
  t5007 = 0.0216*t4923;
  t5045 = 0. + t4877 + t5007;
  t7011 = t2967*t6663;
  t7027 = t2857*t6863;
  t7077 = t7011 + t7027;
  t7082 = t2857*t6663;
  t7093 = -1.*t2967*t6863;
  t7096 = t7082 + t7093;
  t5204 = -0.0216*t4829;
  t5237 = -1.1135*t4923;
  t5241 = 0. + t5204 + t5237;
  t7120 = -1.*t3816*t7077;
  t7125 = t3773*t7096;
  t7134 = t7120 + t7125;
  t7188 = t3773*t7077;
  t7192 = t3816*t7096;
  t7212 = t7188 + t7192;
  t6124 = -1.*t1605*t643*t1507;
  t6308 = t88*t1780;
  t6413 = -1.*t2188*t6371;
  t6518 = -1.*t2435*t6512;
  t6705 = -1.*t3040*t6663;
  t6911 = -1.*t3542*t6863;
  t7080 = -1.*t3828*t7077;
  t7106 = -1.*t4105*t7096;
  t7175 = -1.*t5045*t7134;
  t7218 = -1.*t5241*t7212;
  t7227 = t4923*t7134;
  t7228 = t4593*t7212;
  t7229 = t7227 + t7228;
  t7231 = -0.0306*t7229;
  t7234 = t4593*t7134;
  t7235 = -1.*t4923*t7212;
  t7236 = t7234 + t7235;
  t7237 = 1.1312*t7236;
  t1518 = -1.*t88*t643*t1507;
  t1843 = -1.*t1605*t1780;
  t2363 = -1.*t2188*t2251;
  t2751 = -1.*t2435*t2660;
  t3183 = -1.*t3040*t3164;
  t3661 = -1.*t3542*t3655;
  t4020 = -1.*t3828*t3919;
  t4558 = -1.*t4105*t4527;
  t5203 = -1.*t5045*t5193;
  t5338 = -1.*t5241*t5293;
  t5348 = t4923*t5193;
  t5446 = t4593*t5293;
  t5468 = t5348 + t5446;
  t5482 = -0.0306*t5468;
  t5492 = t4593*t5193;
  t5501 = -1.*t4923*t5293;
  t5660 = t5492 + t5501;
  t5688 = 1.1312*t5660;
  t7241 = -1.*t1605;
  t7242 = 0. + t7241;
  t7354 = -1.*t243*t1043*t2078;
  t7361 = -1.*t1854*t243*t1286;
  t7367 = t7354 + t7361;
  t7375 = t1854*t243*t1043;
  t7383 = -1.*t243*t2078*t1286;
  t7387 = t7375 + t7383;
  t7394 = t2967*t7367;
  t7396 = t2857*t7387;
  t7398 = t7394 + t7396;
  t7403 = t2857*t7367;
  t7407 = -1.*t2967*t7387;
  t7409 = t7403 + t7407;
  t7417 = -1.*t3816*t7398;
  t7420 = t3773*t7409;
  t7423 = t7417 + t7420;
  t7429 = t3773*t7398;
  t7430 = t3816*t7409;
  t7434 = t7429 + t7430;
  t7283 = 0. + t88;
  t7334 = 0.049*t243;
  t7339 = t243*t1043*t2188;
  t7344 = 0.004500000000000004*t643;
  t7349 = t243*t1507;
  t7353 = -1.*t243*t2435*t1286;
  t7372 = t3040*t7367;
  t7389 = t3542*t7387;
  t7402 = t3828*t7398;
  t7412 = t4105*t7409;
  t7425 = t5045*t7423;
  t7436 = t5241*t7434;
  t7439 = t4923*t7423;
  t7440 = t4593*t7434;
  t7445 = t7439 + t7440;
  t7450 = 0.0306*t7445;
  t7452 = t4593*t7423;
  t7455 = -1.*t4923*t7434;
  t7457 = t7452 + t7455;
  t7466 = -1.1312*t7457;
  t7469 = 0. + t7334 + t7339 + t7344 + t7349 + t7353 + t7372 + t7389 + t7402 + t7412 + t7425 + t7436 + t7450 + t7466;
  t7244 = 0.004500000000000004*t1605*t243;
  t7293 = 0.004500000000000004*t243*t88;
  t7493 = t243*t88;
  t7495 = 0. + t7493;
  t7511 = -0.049*t2251;
  t7515 = -0.09*t2660;
  t7529 = 0. + t7293 + t7511 + t2363 + t7515 + t2751 + t3183 + t3661 + t4020 + t4558 + t5203 + t5338 + t5482 + t5688;
  t7506 = t1605*t243;
  t7507 = 0. + t7506;
  t7547 = 0.049*t243*t1043;
  t7548 = -0.09*t243*t1286;
  t7549 = 0. + t7547 + t7339 + t7344 + t7548 + t7353 + t7372 + t7389 + t7402 + t7412 + t7425 + t7436 + t7450 + t7466;
  t7564 = 0. + t643;
  t7497 = -0.049*t6371;
  t7498 = -0.09*t6512;
  t7500 = 0. + t7244 + t7497 + t6413 + t7498 + t6518 + t6705 + t6911 + t7080 + t7106 + t7175 + t7218 + t7231 + t7237;
  t7619 = -0.21*t3164;
  t7624 = -0.049*t3655;
  t7627 = 0. + t7619 + t3183 + t7624 + t3661 + t4020 + t4558 + t5203 + t5338 + t5482 + t5688;
  t7633 = 0.21*t7367;
  t7635 = 0.049*t7387;
  t7638 = 0. + t7633 + t7372 + t7635 + t7389 + t7402 + t7412 + t7425 + t7436 + t7450 + t7466;
  t7600 = -0.21*t6663;
  t7604 = -0.049*t6863;
  t7609 = 0. + t7600 + t6705 + t7604 + t6911 + t7080 + t7106 + t7175 + t7218 + t7231 + t7237;
  t7661 = -0.0016*t3919;
  t7668 = -0.2707*t4527;
  t7671 = 0. + t7661 + t4020 + t7668 + t4558 + t5203 + t5338 + t5482 + t5688;
  t7678 = 0.0016*t7398;
  t7682 = 0.2707*t7409;
  t7683 = 0. + t7678 + t7402 + t7682 + t7412 + t7425 + t7436 + t7450 + t7466;
  t7651 = -0.0016*t7077;
  t7652 = -0.2707*t7096;
  t7654 = 0. + t7651 + t7080 + t7652 + t7106 + t7175 + t7218 + t7231 + t7237;
  t7701 = -0.7055*t5193;
  t7702 = 0.0184*t5293;
  t7704 = 0. + t7701 + t5203 + t7702 + t5338 + t5482 + t5688;
  t7709 = 0.7055*t7423;
  t7711 = -0.0184*t7434;
  t7713 = 0. + t7709 + t7425 + t7711 + t7436 + t7450 + t7466;
  t7696 = -0.7055*t7134;
  t7698 = 0.0184*t7212;
  t7699 = 0. + t7696 + t7175 + t7698 + t7218 + t7231 + t7237;
  t7734 = -0.052199999999999996*t5468;
  t7735 = 0.01770000000000005*t5660;
  t7736 = 0. + t7734 + t7735;
  t7741 = 0.052199999999999996*t7445;
  t7746 = -0.01770000000000005*t7457;
  t7750 = 0. + t7741 + t7746;
  t7723 = -0.052199999999999996*t7229;
  t7724 = 0.01770000000000005*t7236;
  t7725 = 0. + t7723 + t7724;
  p_output1[0]=0.;
  p_output1[1]=0. - 1.*(0. + t1518 + t1843 + t2363 + t2751 + t3183 + t3661 + t4020 + t4558 + t5203 + t5338 + t5482 + t5688 + 0.135*t88 - 0.1305*t243*t88 - 1.*t857*t88);
  p_output1[2]=0. + 0.135*t1605 - 0.1305*t1605*t243 + t6124 + t6308 + t6413 + t6518 + t6705 + t6911 + t7080 + t7106 + t7175 + t7218 + t7231 + t7237 - 1.*t1605*t857;
  p_output1[3]=-1.*t7242*(0. + t6124 + t6308 + t6413 - 0.049*t1605*t643 + t6518 + t6705 + t6911 + t7080 + t7106 + t7175 + t7218 + t7231 + t7237 + t7244 + 0.09*t88) + t7283*(0. + t1518 - 0.09*t1605 + t1843 + t2363 + t2751 + t3183 + t3661 + t4020 + t4558 + t5203 + t5338 + t5482 + t5688 + t7293 - 0.049*t643*t88);
  p_output1[4]=0. + t7242*t7469;
  p_output1[5]=0. - 1.*t7283*t7469;
  p_output1[6]=-1.*t7495*t7500 + t7507*t7529;
  p_output1[7]=t7495*t7549 - 1.*t7529*t7564;
  p_output1[8]=-1.*t7507*t7549 + t7500*t7564;
  p_output1[9]=-1.*t7495*t7609 + t7507*t7627;
  p_output1[10]=-1.*t7564*t7627 + t7495*t7638;
  p_output1[11]=t7564*t7609 - 1.*t7507*t7638;
  p_output1[12]=-1.*t7495*t7654 + t7507*t7671;
  p_output1[13]=-1.*t7564*t7671 + t7495*t7683;
  p_output1[14]=t7564*t7654 - 1.*t7507*t7683;
  p_output1[15]=-1.*t7495*t7699 + t7507*t7704;
  p_output1[16]=-1.*t7564*t7704 + t7495*t7713;
  p_output1[17]=t7564*t7699 - 1.*t7507*t7713;
  p_output1[18]=-1.*t7495*t7725 + t7507*t7736;
  p_output1[19]=-1.*t7564*t7736 + t7495*t7750;
  p_output1[20]=t7564*t7725 - 1.*t7507*t7750;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 14, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Jv_VectorNav_to_LeftToeBottom_mex.hh"

namespace SymExpression
{

void Jv_VectorNav_to_LeftToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
