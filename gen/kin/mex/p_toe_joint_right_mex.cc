/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:54 GMT-05:00
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
  double t722;
  double t3605;
  double t4106;
  double t3616;
  double t5044;
  double t729;
  double t1191;
  double t1234;
  double t2095;
  double t2941;
  double t3898;
  double t5079;
  double t5779;
  double t6426;
  double t7029;
  double t7030;
  double t7996;
  double t727;
  double t8969;
  double t8979;
  double t8984;
  double t8994;
  double t9013;
  double t9024;
  double t9042;
  double t9049;
  double t9067;
  double t9068;
  double t9111;
  double t9118;
  double t9122;
  double t9134;
  double t9144;
  double t9146;
  double t9165;
  double t9175;
  double t9176;
  double t9178;
  double t9200;
  double t9201;
  double t9207;
  double t9211;
  double t9214;
  double t9224;
  double t9230;
  double t9239;
  double t9240;
  double t9245;
  double t9265;
  double t9266;
  double t9270;
  double t9273;
  double t9277;
  double t9280;
  double t9285;
  double t9291;
  double t9294;
  double t9296;
  double t9310;
  double t9315;
  double t9319;
  double t9346;
  double t9354;
  double t9359;
  double t9371;
  double t9383;
  double t9384;
  double t9396;
  double t9418;
  double t9422;
  double t9425;
  double t1868;
  double t2100;
  double t2916;
  double t3460;
  double t3462;
  double t6441;
  double t6443;
  double t7024;
  double t7028;
  double t8645;
  double t8946;
  double t8964;
  double t9449;
  double t9450;
  double t9453;
  double t9456;
  double t9460;
  double t9462;
  double t9031;
  double t9045;
  double t9048;
  double t9467;
  double t9468;
  double t9470;
  double t9101;
  double t9103;
  double t9104;
  double t9162;
  double t9168;
  double t9171;
  double t9480;
  double t9482;
  double t9483;
  double t9493;
  double t9495;
  double t9496;
  double t9182;
  double t9186;
  double t9187;
  double t9225;
  double t9231;
  double t9234;
  double t9502;
  double t9506;
  double t9508;
  double t9512;
  double t9513;
  double t9514;
  double t9255;
  double t9261;
  double t9263;
  double t9283;
  double t9288;
  double t9289;
  double t9516;
  double t9519;
  double t9520;
  double t9524;
  double t9526;
  double t9527;
  double t9302;
  double t9305;
  double t9307;
  double t9368;
  double t9377;
  double t9379;
  double t9529;
  double t9530;
  double t9536;
  double t9542;
  double t9545;
  double t9549;
  double t9406;
  double t9409;
  double t9416;
  double t9555;
  double t9556;
  double t9557;
  double t9559;
  double t9560;
  double t9562;
  double t9591;
  double t9594;
  double t9595;
  double t9598;
  double t9605;
  double t9606;
  double t9619;
  double t9624;
  double t9627;
  double t9630;
  double t9631;
  double t9632;
  double t9634;
  double t9635;
  double t9638;
  double t9640;
  double t9643;
  double t9647;
  double t9657;
  double t9659;
  double t9660;
  double t9663;
  double t9664;
  double t9667;
  double t9669;
  double t9672;
  double t9673;
  double t9681;
  double t9682;
  double t9689;
  double t9693;
  double t9697;
  double t9699;
  t722 = Cos(var1[3]);
  t3605 = Cos(var1[5]);
  t4106 = Sin(var1[3]);
  t3616 = Sin(var1[4]);
  t5044 = Sin(var1[5]);
  t729 = Cos(var1[14]);
  t1191 = -1.*t729;
  t1234 = 1. + t1191;
  t2095 = Sin(var1[14]);
  t2941 = Sin(var1[13]);
  t3898 = t722*t3605*t3616;
  t5079 = t4106*t5044;
  t5779 = t3898 + t5079;
  t6426 = Cos(var1[13]);
  t7029 = -1.*t3605*t4106;
  t7030 = t722*t3616*t5044;
  t7996 = t7029 + t7030;
  t727 = Cos(var1[4]);
  t8969 = t2941*t5779;
  t8979 = t6426*t7996;
  t8984 = t8969 + t8979;
  t8994 = Cos(var1[15]);
  t9013 = -1.*t8994;
  t9024 = 1. + t9013;
  t9042 = Sin(var1[15]);
  t9049 = t6426*t5779;
  t9067 = -1.*t2941*t7996;
  t9068 = t9049 + t9067;
  t9111 = t729*t722*t727;
  t9118 = t2095*t8984;
  t9122 = t9111 + t9118;
  t9134 = Cos(var1[16]);
  t9144 = -1.*t9134;
  t9146 = 1. + t9144;
  t9165 = Sin(var1[16]);
  t9175 = t9042*t9068;
  t9176 = t8994*t9122;
  t9178 = t9175 + t9176;
  t9200 = t8994*t9068;
  t9201 = -1.*t9042*t9122;
  t9207 = t9200 + t9201;
  t9211 = Cos(var1[17]);
  t9214 = -1.*t9211;
  t9224 = 1. + t9214;
  t9230 = Sin(var1[17]);
  t9239 = -1.*t9165*t9178;
  t9240 = t9134*t9207;
  t9245 = t9239 + t9240;
  t9265 = t9134*t9178;
  t9266 = t9165*t9207;
  t9270 = t9265 + t9266;
  t9273 = Cos(var1[18]);
  t9277 = -1.*t9273;
  t9280 = 1. + t9277;
  t9285 = Sin(var1[18]);
  t9291 = t9230*t9245;
  t9294 = t9211*t9270;
  t9296 = t9291 + t9294;
  t9310 = t9211*t9245;
  t9315 = -1.*t9230*t9270;
  t9319 = t9310 + t9315;
  t9346 = Cos(var1[19]);
  t9354 = -1.*t9346;
  t9359 = 1. + t9354;
  t9371 = Sin(var1[19]);
  t9383 = -1.*t9285*t9296;
  t9384 = t9273*t9319;
  t9396 = t9383 + t9384;
  t9418 = t9273*t9296;
  t9422 = t9285*t9319;
  t9425 = t9418 + t9422;
  t1868 = -0.049*t1234;
  t2100 = -0.135*t2095;
  t2916 = 0. + t1868 + t2100;
  t3460 = 0.135*t2941;
  t3462 = 0. + t3460;
  t6441 = -1.*t6426;
  t6443 = 1. + t6441;
  t7024 = -0.135*t6443;
  t7028 = 0. + t7024;
  t8645 = -0.135*t1234;
  t8946 = 0.049*t2095;
  t8964 = 0. + t8645 + t8946;
  t9449 = t3605*t4106*t3616;
  t9450 = -1.*t722*t5044;
  t9453 = t9449 + t9450;
  t9456 = t722*t3605;
  t9460 = t4106*t3616*t5044;
  t9462 = t9456 + t9460;
  t9031 = -0.09*t9024;
  t9045 = 0.049*t9042;
  t9048 = 0. + t9031 + t9045;
  t9467 = t2941*t9453;
  t9468 = t6426*t9462;
  t9470 = t9467 + t9468;
  t9101 = -0.049*t9024;
  t9103 = -0.09*t9042;
  t9104 = 0. + t9101 + t9103;
  t9162 = -0.049*t9146;
  t9168 = -0.21*t9165;
  t9171 = 0. + t9162 + t9168;
  t9480 = t6426*t9453;
  t9482 = -1.*t2941*t9462;
  t9483 = t9480 + t9482;
  t9493 = t729*t727*t4106;
  t9495 = t2095*t9470;
  t9496 = t9493 + t9495;
  t9182 = -0.21*t9146;
  t9186 = 0.049*t9165;
  t9187 = 0. + t9182 + t9186;
  t9225 = -0.2707*t9224;
  t9231 = 0.0016*t9230;
  t9234 = 0. + t9225 + t9231;
  t9502 = t9042*t9483;
  t9506 = t8994*t9496;
  t9508 = t9502 + t9506;
  t9512 = t8994*t9483;
  t9513 = -1.*t9042*t9496;
  t9514 = t9512 + t9513;
  t9255 = -0.0016*t9224;
  t9261 = -0.2707*t9230;
  t9263 = 0. + t9255 + t9261;
  t9283 = 0.0184*t9280;
  t9288 = -0.7055*t9285;
  t9289 = 0. + t9283 + t9288;
  t9516 = -1.*t9165*t9508;
  t9519 = t9134*t9514;
  t9520 = t9516 + t9519;
  t9524 = t9134*t9508;
  t9526 = t9165*t9514;
  t9527 = t9524 + t9526;
  t9302 = -0.7055*t9280;
  t9305 = -0.0184*t9285;
  t9307 = 0. + t9302 + t9305;
  t9368 = -1.1135*t9359;
  t9377 = 0.0216*t9371;
  t9379 = 0. + t9368 + t9377;
  t9529 = t9230*t9520;
  t9530 = t9211*t9527;
  t9536 = t9529 + t9530;
  t9542 = t9211*t9520;
  t9545 = -1.*t9230*t9527;
  t9549 = t9542 + t9545;
  t9406 = -0.0216*t9359;
  t9409 = -1.1135*t9371;
  t9416 = 0. + t9406 + t9409;
  t9555 = -1.*t9285*t9536;
  t9556 = t9273*t9549;
  t9557 = t9555 + t9556;
  t9559 = t9273*t9536;
  t9560 = t9285*t9549;
  t9562 = t9559 + t9560;
  t9591 = t727*t3605*t2941;
  t9594 = t6426*t727*t5044;
  t9595 = t9591 + t9594;
  t9598 = t6426*t727*t3605;
  t9605 = -1.*t727*t2941*t5044;
  t9606 = t9598 + t9605;
  t9619 = -1.*t729*t3616;
  t9624 = t2095*t9595;
  t9627 = t9619 + t9624;
  t9630 = t9042*t9606;
  t9631 = t8994*t9627;
  t9632 = t9630 + t9631;
  t9634 = t8994*t9606;
  t9635 = -1.*t9042*t9627;
  t9638 = t9634 + t9635;
  t9640 = -1.*t9165*t9632;
  t9643 = t9134*t9638;
  t9647 = t9640 + t9643;
  t9657 = t9134*t9632;
  t9659 = t9165*t9638;
  t9660 = t9657 + t9659;
  t9663 = t9230*t9647;
  t9664 = t9211*t9660;
  t9667 = t9663 + t9664;
  t9669 = t9211*t9647;
  t9672 = -1.*t9230*t9660;
  t9673 = t9669 + t9672;
  t9681 = -1.*t9285*t9667;
  t9682 = t9273*t9673;
  t9689 = t9681 + t9682;
  t9693 = t9273*t9667;
  t9697 = t9285*t9673;
  t9699 = t9693 + t9697;
  p_output1[0]=0. + t3462*t5779 + t2916*t722*t727 + t7028*t7996 + t8964*t8984 - 0.1305*(-1.*t2095*t722*t727 + t729*t8984) + t9048*t9068 + t9104*t9122 + t9171*t9178 + t9187*t9207 + t9234*t9245 + t9263*t9270 + t9289*t9296 + t9307*t9319 + t9379*t9396 + t9416*t9425 - 0.0216*(t9371*t9396 + t9346*t9425) - 1.1135*(t9346*t9396 - 1.*t9371*t9425) + var1[0];
  p_output1[1]=0. + t2916*t4106*t727 + t3462*t9453 + t7028*t9462 + t8964*t9470 - 0.1305*(-1.*t2095*t4106*t727 + t729*t9470) + t9048*t9483 + t9104*t9496 + t9171*t9508 + t9187*t9514 + t9234*t9520 + t9263*t9527 + t9289*t9536 + t9307*t9549 + t9379*t9557 + t9416*t9562 - 0.0216*(t9371*t9557 + t9346*t9562) - 1.1135*(t9346*t9557 - 1.*t9371*t9562) + var1[1];
  p_output1[2]=0. - 1.*t2916*t3616 + t3462*t3605*t727 + t5044*t7028*t727 + t8964*t9595 - 0.1305*(t2095*t3616 + t729*t9595) + t9048*t9606 + t9104*t9627 + t9171*t9632 + t9187*t9638 + t9234*t9647 + t9263*t9660 + t9289*t9667 + t9307*t9673 + t9379*t9689 + t9416*t9699 - 0.0216*(t9371*t9689 + t9346*t9699) - 1.1135*(t9346*t9689 - 1.*t9371*t9699) + var1[2];
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

#include "p_toe_joint_right_mex.hh"

namespace SymExpression
{

void p_toe_joint_right_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
