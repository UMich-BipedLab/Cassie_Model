/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:33:16 GMT-04:00
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
  double t2242;
  double t1888;
  double t2289;
  double t1981;
  double t2296;
  double t227;
  double t2187;
  double t2350;
  double t2413;
  double t2683;
  double t2825;
  double t3357;
  double t3529;
  double t5755;
  double t5770;
  double t5979;
  double t6146;
  double t4716;
  double t5479;
  double t5686;
  double t6487;
  double t6677;
  double t6689;
  double t6692;
  double t6701;
  double t6656;
  double t6661;
  double t6664;
  double t6754;
  double t6757;
  double t6767;
  double t6873;
  double t6883;
  double t6890;
  double t6895;
  double t6916;
  double t6924;
  double t6927;
  double t6972;
  double t6980;
  double t6995;
  double t7005;
  double t7009;
  double t7027;
  double t7040;
  double t7048;
  double t7062;
  double t7064;
  double t7090;
  double t7091;
  double t7095;
  double t7106;
  double t7109;
  double t7110;
  double t7113;
  double t7142;
  double t7144;
  double t7165;
  double t7195;
  double t7198;
  double t7199;
  double t7204;
  double t7206;
  double t7230;
  double t7239;
  double t7276;
  double t7280;
  double t7287;
  double t7340;
  double t7348;
  double t7360;
  double t867;
  double t1003;
  double t1125;
  double t1814;
  double t3627;
  double t3659;
  double t7466;
  double t7470;
  double t7480;
  double t7490;
  double t7506;
  double t7508;
  double t6105;
  double t6177;
  double t6355;
  double t6547;
  double t6567;
  double t6578;
  double t7519;
  double t7526;
  double t7527;
  double t6695;
  double t6710;
  double t6713;
  double t6783;
  double t6799;
  double t6810;
  double t6892;
  double t6909;
  double t6911;
  double t7601;
  double t7613;
  double t7620;
  double t7629;
  double t7634;
  double t7635;
  double t6958;
  double t6967;
  double t6969;
  double t7037;
  double t7046;
  double t7047;
  double t7651;
  double t7667;
  double t7682;
  double t7701;
  double t7705;
  double t7706;
  double t7074;
  double t7076;
  double t7081;
  double t7111;
  double t7119;
  double t7134;
  double t7725;
  double t7730;
  double t7731;
  double t7750;
  double t7777;
  double t7790;
  double t7179;
  double t7184;
  double t7186;
  double t7233;
  double t7240;
  double t7250;
  double t7797;
  double t7802;
  double t7808;
  double t7827;
  double t7838;
  double t7839;
  double t7329;
  double t7331;
  double t7334;
  double t7855;
  double t7856;
  double t7868;
  double t7887;
  double t7889;
  double t7890;
  double t7983;
  double t8006;
  double t8011;
  double t8055;
  double t8057;
  double t8058;
  double t8073;
  double t8074;
  double t8090;
  double t8105;
  double t8108;
  double t8109;
  double t8125;
  double t8130;
  double t8131;
  double t8140;
  double t8141;
  double t8148;
  double t8151;
  double t8152;
  double t8157;
  double t8163;
  double t8167;
  double t8172;
  double t8177;
  double t8178;
  double t8181;
  double t8185;
  double t8192;
  double t8194;
  double t8197;
  double t8201;
  double t8202;
  t2242 = Cos(var1[3]);
  t1888 = Cos(var1[5]);
  t2289 = Sin(var1[4]);
  t1981 = Sin(var1[3]);
  t2296 = Sin(var1[5]);
  t227 = Cos(var1[6]);
  t2187 = -1.*t1888*t1981;
  t2350 = t2242*t2289*t2296;
  t2413 = t2187 + t2350;
  t2683 = t2242*t1888*t2289;
  t2825 = t1981*t2296;
  t3357 = t2683 + t2825;
  t3529 = Sin(var1[6]);
  t5755 = Cos(var1[7]);
  t5770 = -1.*t5755;
  t5979 = 1. + t5770;
  t6146 = Sin(var1[7]);
  t4716 = t227*t2413;
  t5479 = t3357*t3529;
  t5686 = t4716 + t5479;
  t6487 = Cos(var1[4]);
  t6677 = Cos(var1[8]);
  t6689 = -1.*t6677;
  t6692 = 1. + t6689;
  t6701 = Sin(var1[8]);
  t6656 = t2242*t6487*t5755;
  t6661 = t5686*t6146;
  t6664 = t6656 + t6661;
  t6754 = t227*t3357;
  t6757 = -1.*t2413*t3529;
  t6767 = t6754 + t6757;
  t6873 = Cos(var1[9]);
  t6883 = -1.*t6873;
  t6890 = 1. + t6883;
  t6895 = Sin(var1[9]);
  t6916 = t6677*t6664;
  t6924 = t6767*t6701;
  t6927 = t6916 + t6924;
  t6972 = t6677*t6767;
  t6980 = -1.*t6664*t6701;
  t6995 = t6972 + t6980;
  t7005 = Cos(var1[10]);
  t7009 = -1.*t7005;
  t7027 = 1. + t7009;
  t7040 = Sin(var1[10]);
  t7048 = -1.*t6895*t6927;
  t7062 = t6873*t6995;
  t7064 = t7048 + t7062;
  t7090 = t6873*t6927;
  t7091 = t6895*t6995;
  t7095 = t7090 + t7091;
  t7106 = Cos(var1[11]);
  t7109 = -1.*t7106;
  t7110 = 1. + t7109;
  t7113 = Sin(var1[11]);
  t7142 = t7040*t7064;
  t7144 = t7005*t7095;
  t7165 = t7142 + t7144;
  t7195 = t7005*t7064;
  t7198 = -1.*t7040*t7095;
  t7199 = t7195 + t7198;
  t7204 = Cos(var1[12]);
  t7206 = -1.*t7204;
  t7230 = 1. + t7206;
  t7239 = Sin(var1[12]);
  t7276 = -1.*t7113*t7165;
  t7280 = t7106*t7199;
  t7287 = t7276 + t7280;
  t7340 = t7106*t7165;
  t7348 = t7113*t7199;
  t7360 = t7340 + t7348;
  t867 = -1.*t227;
  t1003 = 1. + t867;
  t1125 = 0.135*t1003;
  t1814 = 0. + t1125;
  t3627 = -0.135*t3529;
  t3659 = 0. + t3627;
  t7466 = t2242*t1888;
  t7470 = t1981*t2289*t2296;
  t7480 = t7466 + t7470;
  t7490 = t1888*t1981*t2289;
  t7506 = -1.*t2242*t2296;
  t7508 = t7490 + t7506;
  t6105 = 0.135*t5979;
  t6177 = 0.049*t6146;
  t6355 = 0. + t6105 + t6177;
  t6547 = -0.049*t5979;
  t6567 = 0.135*t6146;
  t6578 = 0. + t6547 + t6567;
  t7519 = t227*t7480;
  t7526 = t7508*t3529;
  t7527 = t7519 + t7526;
  t6695 = -0.049*t6692;
  t6710 = -0.09*t6701;
  t6713 = 0. + t6695 + t6710;
  t6783 = -0.09*t6692;
  t6799 = 0.049*t6701;
  t6810 = 0. + t6783 + t6799;
  t6892 = -0.049*t6890;
  t6909 = -0.21*t6895;
  t6911 = 0. + t6892 + t6909;
  t7601 = t6487*t5755*t1981;
  t7613 = t7527*t6146;
  t7620 = t7601 + t7613;
  t7629 = t227*t7508;
  t7634 = -1.*t7480*t3529;
  t7635 = t7629 + t7634;
  t6958 = -0.21*t6890;
  t6967 = 0.049*t6895;
  t6969 = 0. + t6958 + t6967;
  t7037 = -0.2707*t7027;
  t7046 = 0.0016*t7040;
  t7047 = 0. + t7037 + t7046;
  t7651 = t6677*t7620;
  t7667 = t7635*t6701;
  t7682 = t7651 + t7667;
  t7701 = t6677*t7635;
  t7705 = -1.*t7620*t6701;
  t7706 = t7701 + t7705;
  t7074 = -0.0016*t7027;
  t7076 = -0.2707*t7040;
  t7081 = 0. + t7074 + t7076;
  t7111 = 0.0184*t7110;
  t7119 = -0.7055*t7113;
  t7134 = 0. + t7111 + t7119;
  t7725 = -1.*t6895*t7682;
  t7730 = t6873*t7706;
  t7731 = t7725 + t7730;
  t7750 = t6873*t7682;
  t7777 = t6895*t7706;
  t7790 = t7750 + t7777;
  t7179 = -0.7055*t7110;
  t7184 = -0.0184*t7113;
  t7186 = 0. + t7179 + t7184;
  t7233 = -1.1135*t7230;
  t7240 = 0.0216*t7239;
  t7250 = 0. + t7233 + t7240;
  t7797 = t7040*t7731;
  t7802 = t7005*t7790;
  t7808 = t7797 + t7802;
  t7827 = t7005*t7731;
  t7838 = -1.*t7040*t7790;
  t7839 = t7827 + t7838;
  t7329 = -0.0216*t7230;
  t7331 = -1.1135*t7239;
  t7334 = 0. + t7329 + t7331;
  t7855 = -1.*t7113*t7808;
  t7856 = t7106*t7839;
  t7868 = t7855 + t7856;
  t7887 = t7106*t7808;
  t7889 = t7113*t7839;
  t7890 = t7887 + t7889;
  t7983 = t6487*t227*t2296;
  t8006 = t6487*t1888*t3529;
  t8011 = t7983 + t8006;
  t8055 = -1.*t5755*t2289;
  t8057 = t8011*t6146;
  t8058 = t8055 + t8057;
  t8073 = t6487*t1888*t227;
  t8074 = -1.*t6487*t2296*t3529;
  t8090 = t8073 + t8074;
  t8105 = t6677*t8058;
  t8108 = t8090*t6701;
  t8109 = t8105 + t8108;
  t8125 = t6677*t8090;
  t8130 = -1.*t8058*t6701;
  t8131 = t8125 + t8130;
  t8140 = -1.*t6895*t8109;
  t8141 = t6873*t8131;
  t8148 = t8140 + t8141;
  t8151 = t6873*t8109;
  t8152 = t6895*t8131;
  t8157 = t8151 + t8152;
  t8163 = t7040*t8148;
  t8167 = t7005*t8157;
  t8172 = t8163 + t8167;
  t8177 = t7005*t8148;
  t8178 = -1.*t7040*t8157;
  t8181 = t8177 + t8178;
  t8185 = -1.*t7113*t8172;
  t8192 = t7106*t8181;
  t8194 = t8185 + t8192;
  t8197 = t7106*t8172;
  t8201 = t7113*t8181;
  t8202 = t8197 + t8201;
  p_output1[0]=0. + t1814*t2413 + t3357*t3659 + t5686*t6355 + 0.1305*(t5686*t5755 - 1.*t2242*t6146*t6487) + t2242*t6487*t6578 + t6664*t6713 + t6767*t6810 + t6911*t6927 + t6969*t6995 + t7047*t7064 + t7081*t7095 + t7134*t7165 + t7186*t7199 + t7250*t7287 + t7334*t7360 - 0.0216*(t7239*t7287 + t7204*t7360) - 1.1135*(t7204*t7287 - 1.*t7239*t7360) + var1[0];
  p_output1[1]=0. + t1981*t6487*t6578 + t1814*t7480 + t3659*t7508 + t6355*t7527 + 0.1305*(-1.*t1981*t6146*t6487 + t5755*t7527) + t6713*t7620 + t6810*t7635 + t6911*t7682 + t6969*t7706 + t7047*t7731 + t7081*t7790 + t7134*t7808 + t7186*t7839 + t7250*t7868 + t7334*t7890 - 0.0216*(t7239*t7868 + t7204*t7890) - 1.1135*(t7204*t7868 - 1.*t7239*t7890) + var1[1];
  p_output1[2]=0. + t1814*t2296*t6487 + t1888*t3659*t6487 - 1.*t2289*t6578 + t6355*t8011 + 0.1305*(t2289*t6146 + t5755*t8011) + t6713*t8058 + t6810*t8090 + t6911*t8109 + t6969*t8131 + t7047*t8148 + t7081*t8157 + t7134*t8172 + t7186*t8181 + t7250*t8194 + t7334*t8202 - 0.0216*(t7239*t8194 + t7204*t8202) - 1.1135*(t7204*t8194 - 1.*t7239*t8202) + var1[2];
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

#include "p_toe_joint_left_mex.hh"

namespace SymExpression
{

void p_toe_joint_left_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
