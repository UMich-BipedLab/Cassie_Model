/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:36:44 GMT-04:00
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
  double t1697;
  double t4280;
  double t4288;
  double t4276;
  double t4319;
  double t4275;
  double t4374;
  double t4403;
  double t4406;
  double t4284;
  double t4335;
  double t4347;
  double t4410;
  double t4266;
  double t4481;
  double t4504;
  double t4516;
  double t4355;
  double t4424;
  double t4440;
  double t4559;
  double t4202;
  double t4623;
  double t4631;
  double t4641;
  double t4445;
  double t4577;
  double t4579;
  double t4645;
  double t1455;
  double t327;
  double t2552;
  double t4779;
  double t4782;
  double t4791;
  double t4738;
  double t4748;
  double t4777;
  double t4833;
  double t4842;
  double t4880;
  double t4778;
  double t4816;
  double t4818;
  double t4963;
  double t4986;
  double t5000;
  double t4822;
  double t4912;
  double t4920;
  double t5065;
  double t5067;
  double t5082;
  double t4948;
  double t5024;
  double t5029;
  double t5202;
  double t5210;
  double t5213;
  double t5152;
  double t5157;
  double t5187;
  double t5299;
  double t5318;
  double t5320;
  double t5188;
  double t5214;
  double t5263;
  double t5355;
  double t5383;
  double t5419;
  double t5272;
  double t5339;
  double t5341;
  double t5457;
  double t5471;
  double t5473;
  double t5342;
  double t5435;
  double t5446;
  double t4581;
  double t4661;
  double t4665;
  double t4678;
  double t4709;
  double t4710;
  double t5054;
  double t5085;
  double t5088;
  double t5117;
  double t5121;
  double t5127;
  double t5447;
  double t5476;
  double t5477;
  double t5485;
  double t5487;
  double t5492;
  double t5631;
  double t5635;
  double t5661;
  double t5663;
  double t5707;
  double t5709;
  double t5738;
  double t5745;
  double t5575;
  double t5577;
  double t5598;
  double t5616;
  double t5617;
  double t5624;
  double t5629;
  double t5637;
  double t5639;
  double t5640;
  double t5645;
  double t5652;
  double t5657;
  double t5667;
  double t5670;
  double t5677;
  double t5693;
  double t5696;
  double t5704;
  double t5713;
  double t5714;
  double t5715;
  double t5725;
  double t5732;
  double t5736;
  double t5746;
  double t5752;
  double t5754;
  double t5757;
  double t5781;
  double t5793;
  double t5851;
  double t5867;
  double t5872;
  double t5881;
  double t5900;
  double t5901;
  t1697 = Cos(var1[8]);
  t4280 = Cos(var1[10]);
  t4288 = Sin(var1[9]);
  t4276 = Cos(var1[9]);
  t4319 = Sin(var1[10]);
  t4275 = Cos(var1[11]);
  t4374 = -1.*t1697*t4280*t4288;
  t4403 = -1.*t1697*t4276*t4319;
  t4406 = t4374 + t4403;
  t4284 = t1697*t4276*t4280;
  t4335 = -1.*t1697*t4288*t4319;
  t4347 = t4284 + t4335;
  t4410 = Sin(var1[11]);
  t4266 = Cos(var1[12]);
  t4481 = t4275*t4406;
  t4504 = -1.*t4347*t4410;
  t4516 = t4481 + t4504;
  t4355 = t4275*t4347;
  t4424 = t4406*t4410;
  t4440 = t4355 + t4424;
  t4559 = Sin(var1[12]);
  t4202 = Cos(var1[13]);
  t4623 = t4266*t4516;
  t4631 = -1.*t4440*t4559;
  t4641 = t4623 + t4631;
  t4445 = t4266*t4440;
  t4577 = t4516*t4559;
  t4579 = t4445 + t4577;
  t4645 = Sin(var1[13]);
  t1455 = Cos(var1[7]);
  t327 = Sin(var1[8]);
  t2552 = Sin(var1[7]);
  t4779 = -1.*t4276*t2552;
  t4782 = -1.*t1455*t327*t4288;
  t4791 = t4779 + t4782;
  t4738 = t1455*t4276*t327;
  t4748 = -1.*t2552*t4288;
  t4777 = t4738 + t4748;
  t4833 = t4280*t4791;
  t4842 = -1.*t4777*t4319;
  t4880 = t4833 + t4842;
  t4778 = t4280*t4777;
  t4816 = t4791*t4319;
  t4818 = t4778 + t4816;
  t4963 = t4275*t4880;
  t4986 = -1.*t4818*t4410;
  t5000 = t4963 + t4986;
  t4822 = t4275*t4818;
  t4912 = t4880*t4410;
  t4920 = t4822 + t4912;
  t5065 = t4266*t5000;
  t5067 = -1.*t4920*t4559;
  t5082 = t5065 + t5067;
  t4948 = t4266*t4920;
  t5024 = t5000*t4559;
  t5029 = t4948 + t5024;
  t5202 = t1455*t4276;
  t5210 = -1.*t2552*t327*t4288;
  t5213 = t5202 + t5210;
  t5152 = t4276*t2552*t327;
  t5157 = t1455*t4288;
  t5187 = t5152 + t5157;
  t5299 = t4280*t5213;
  t5318 = -1.*t5187*t4319;
  t5320 = t5299 + t5318;
  t5188 = t4280*t5187;
  t5214 = t5213*t4319;
  t5263 = t5188 + t5214;
  t5355 = t4275*t5320;
  t5383 = -1.*t5263*t4410;
  t5419 = t5355 + t5383;
  t5272 = t4275*t5263;
  t5339 = t5320*t4410;
  t5341 = t5272 + t5339;
  t5457 = t4266*t5419;
  t5471 = -1.*t5341*t4559;
  t5473 = t5457 + t5471;
  t5342 = t4266*t5341;
  t5435 = t5419*t4559;
  t5446 = t5342 + t5435;
  t4581 = t4202*t4579;
  t4661 = t4641*t4645;
  t4665 = t4581 + t4661;
  t4678 = t4202*t4641;
  t4709 = -1.*t4579*t4645;
  t4710 = t4678 + t4709;
  t5054 = t4202*t5029;
  t5085 = t5082*t4645;
  t5088 = t5054 + t5085;
  t5117 = t4202*t5082;
  t5121 = -1.*t5029*t4645;
  t5127 = t5117 + t5121;
  t5447 = t4202*t5446;
  t5476 = t5473*t4645;
  t5477 = t5447 + t5476;
  t5485 = t4202*t5473;
  t5487 = -1.*t5446*t4645;
  t5492 = t5485 + t5487;
  t5631 = -1.*t4280;
  t5635 = 1. + t5631;
  t5661 = -1.*t4275;
  t5663 = 1. + t5661;
  t5707 = -1.*t4266;
  t5709 = 1. + t5707;
  t5738 = -1.*t4202;
  t5745 = 1. + t5738;
  t5575 = -1.*t1697;
  t5577 = 1. + t5575;
  t5598 = -1.*t4276;
  t5616 = 1. + t5598;
  t5617 = -0.049*t5616;
  t5624 = -0.09*t4288;
  t5629 = 0. + t5617 + t5624;
  t5637 = -0.049*t5635;
  t5639 = -0.21*t4319;
  t5640 = 0. + t5637 + t5639;
  t5645 = -0.21*t5635;
  t5652 = 0.049*t4319;
  t5657 = 0. + t5645 + t5652;
  t5667 = -0.0016*t5663;
  t5670 = -0.2707*t4410;
  t5677 = 0. + t5667 + t5670;
  t5693 = -0.2707*t5663;
  t5696 = 0.0016*t4410;
  t5704 = 0. + t5693 + t5696;
  t5713 = 0.0184*t5709;
  t5714 = -0.7055*t4559;
  t5715 = 0. + t5713 + t5714;
  t5725 = -0.7055*t5709;
  t5732 = -0.0184*t4559;
  t5736 = 0. + t5725 + t5732;
  t5746 = -0.0216*t5745;
  t5752 = -1.1135*t4645;
  t5754 = 0. + t5746 + t5752;
  t5757 = -1.1135*t5745;
  t5781 = 0.0216*t4645;
  t5793 = 0. + t5757 + t5781;
  t5851 = -0.135*t5577;
  t5867 = 0.049*t327;
  t5872 = 0. + t5851 + t5867;
  t5881 = -0.09*t5616;
  t5900 = 0.049*t4288;
  t5901 = 0. + t5881 + t5900;
  p_output1[0]=0. + t327;
  p_output1[1]=0. - 1.*t1455*t1697;
  p_output1[2]=0. - 1.*t1697*t2552;
  p_output1[3]=0.;
  p_output1[4]=0. + 0.642788*t4665 + 0.766044*t4710;
  p_output1[5]=0. + 0.642788*t5088 + 0.766044*t5127;
  p_output1[6]=0. + 0.642788*t5477 + 0.766044*t5492;
  p_output1[7]=0.;
  p_output1[8]=0. - 0.766044*t4665 + 0.642788*t4710;
  p_output1[9]=0. - 0.766044*t5088 + 0.642788*t5127;
  p_output1[10]=0. - 0.766044*t5477 + 0.642788*t5492;
  p_output1[11]=0.;
  p_output1[12]=-0.03155 - 0.004500000000000004*t327 + 0.0306*t4665 - 1.1312*t4710 - 0.049*t5577 + t1697*t5629 + t1697*t4276*t5640 - 1.*t1697*t4288*t5657 + t4347*t5677 + t4406*t5704 + t4440*t5715 + t4516*t5736 + t4579*t5754 + t4641*t5793;
  p_output1[13]=0. - 0.135*(1. - 1.*t1455) - 0.1305*t1455*t1697 + 0.0306*t5088 - 1.1312*t5127 + t1455*t327*t5629 + t4777*t5640 + t4791*t5657 + t4818*t5677 + t4880*t5704 + t4920*t5715 + t5000*t5736 + t5029*t5754 + t5082*t5793 + t1455*t5872 - 1.*t2552*t5901;
  p_output1[14]=0.07996 + 0.135*t2552 - 0.1305*t1697*t2552 + 0.0306*t5477 - 1.1312*t5492 + t2552*t327*t5629 + t5187*t5640 + t5213*t5657 + t5263*t5677 + t5320*t5704 + t5341*t5715 + t5419*t5736 + t5446*t5754 + t5473*t5793 + t2552*t5872 + t1455*t5901;
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
    ( !(mrows == 14 && ncols == 1) && 
      !(mrows == 1 && ncols == 14))) 
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

#include "H_VectorNav_to_RightToeBottom_mex.hh"

namespace SymExpression
{

void H_VectorNav_to_RightToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
