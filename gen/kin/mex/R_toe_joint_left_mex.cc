/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:25 GMT-05:00
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
  double t3034;
  double t5248;
  double t5302;
  double t5286;
  double t5312;
  double t5236;
  double t5380;
  double t5390;
  double t5400;
  double t5294;
  double t5341;
  double t5351;
  double t5403;
  double t3027;
  double t5483;
  double t5486;
  double t5492;
  double t4922;
  double t5003;
  double t5201;
  double t5365;
  double t5407;
  double t5411;
  double t5434;
  double t5435;
  double t5442;
  double t5499;
  double t5512;
  double t5477;
  double t5502;
  double t5505;
  double t2422;
  double t5515;
  double t5521;
  double t5534;
  double t5560;
  double t5509;
  double t5537;
  double t5546;
  double t2418;
  double t5564;
  double t5573;
  double t5580;
  double t5606;
  double t5550;
  double t5589;
  double t5600;
  double t1577;
  double t5621;
  double t5623;
  double t5626;
  double t602;
  double t5707;
  double t5709;
  double t5711;
  double t5685;
  double t5689;
  double t5695;
  double t5735;
  double t5737;
  double t5742;
  double t5677;
  double t5705;
  double t5718;
  double t5720;
  double t5721;
  double t5732;
  double t5733;
  double t5755;
  double t5759;
  double t5764;
  double t5768;
  double t5770;
  double t5760;
  double t5777;
  double t5780;
  double t5785;
  double t5786;
  double t5789;
  double t5653;
  double t5781;
  double t5790;
  double t5807;
  double t5813;
  double t5819;
  double t5820;
  double t5875;
  double t5880;
  double t5881;
  double t5857;
  double t5859;
  double t5860;
  double t5862;
  double t5864;
  double t5866;
  double t5871;
  double t5885;
  double t5887;
  double t5893;
  double t5896;
  double t5898;
  double t5890;
  double t5899;
  double t5907;
  double t5911;
  double t5915;
  double t5916;
  double t5908;
  double t5917;
  double t5920;
  double t5926;
  double t5927;
  double t5929;
  double t5603;
  double t5629;
  double t5633;
  double t5657;
  double t5661;
  double t5662;
  double t5808;
  double t5822;
  double t5823;
  double t5837;
  double t5842;
  double t5844;
  double t5921;
  double t5933;
  double t5934;
  double t5940;
  double t5943;
  double t5948;
  t3034 = Cos(var1[3]);
  t5248 = Cos(var1[5]);
  t5302 = Sin(var1[4]);
  t5286 = Sin(var1[3]);
  t5312 = Sin(var1[5]);
  t5236 = Cos(var1[6]);
  t5380 = t3034*t5248*t5302;
  t5390 = t5286*t5312;
  t5400 = t5380 + t5390;
  t5294 = -1.*t5248*t5286;
  t5341 = t3034*t5302*t5312;
  t5351 = t5294 + t5341;
  t5403 = Sin(var1[6]);
  t3027 = Cos(var1[8]);
  t5483 = t5236*t5400;
  t5486 = -1.*t5351*t5403;
  t5492 = t5483 + t5486;
  t4922 = Cos(var1[4]);
  t5003 = Cos(var1[7]);
  t5201 = t3034*t4922*t5003;
  t5365 = t5236*t5351;
  t5407 = t5400*t5403;
  t5411 = t5365 + t5407;
  t5434 = Sin(var1[7]);
  t5435 = t5411*t5434;
  t5442 = t5201 + t5435;
  t5499 = Sin(var1[8]);
  t5512 = Cos(var1[9]);
  t5477 = t3027*t5442;
  t5502 = t5492*t5499;
  t5505 = t5477 + t5502;
  t2422 = Sin(var1[9]);
  t5515 = t3027*t5492;
  t5521 = -1.*t5442*t5499;
  t5534 = t5515 + t5521;
  t5560 = Cos(var1[10]);
  t5509 = -1.*t2422*t5505;
  t5537 = t5512*t5534;
  t5546 = t5509 + t5537;
  t2418 = Sin(var1[10]);
  t5564 = t5512*t5505;
  t5573 = t2422*t5534;
  t5580 = t5564 + t5573;
  t5606 = Cos(var1[11]);
  t5550 = t2418*t5546;
  t5589 = t5560*t5580;
  t5600 = t5550 + t5589;
  t1577 = Sin(var1[11]);
  t5621 = t5560*t5546;
  t5623 = -1.*t2418*t5580;
  t5626 = t5621 + t5623;
  t602 = Cos(var1[12]);
  t5707 = t5248*t5286*t5302;
  t5709 = -1.*t3034*t5312;
  t5711 = t5707 + t5709;
  t5685 = t3034*t5248;
  t5689 = t5286*t5302*t5312;
  t5695 = t5685 + t5689;
  t5735 = t5236*t5711;
  t5737 = -1.*t5695*t5403;
  t5742 = t5735 + t5737;
  t5677 = t4922*t5003*t5286;
  t5705 = t5236*t5695;
  t5718 = t5711*t5403;
  t5720 = t5705 + t5718;
  t5721 = t5720*t5434;
  t5732 = t5677 + t5721;
  t5733 = t3027*t5732;
  t5755 = t5742*t5499;
  t5759 = t5733 + t5755;
  t5764 = t3027*t5742;
  t5768 = -1.*t5732*t5499;
  t5770 = t5764 + t5768;
  t5760 = -1.*t2422*t5759;
  t5777 = t5512*t5770;
  t5780 = t5760 + t5777;
  t5785 = t5512*t5759;
  t5786 = t2422*t5770;
  t5789 = t5785 + t5786;
  t5653 = Sin(var1[12]);
  t5781 = t2418*t5780;
  t5790 = t5560*t5789;
  t5807 = t5781 + t5790;
  t5813 = t5560*t5780;
  t5819 = -1.*t2418*t5789;
  t5820 = t5813 + t5819;
  t5875 = t4922*t5248*t5236;
  t5880 = -1.*t4922*t5312*t5403;
  t5881 = t5875 + t5880;
  t5857 = -1.*t5003*t5302;
  t5859 = t4922*t5236*t5312;
  t5860 = t4922*t5248*t5403;
  t5862 = t5859 + t5860;
  t5864 = t5862*t5434;
  t5866 = t5857 + t5864;
  t5871 = t3027*t5866;
  t5885 = t5881*t5499;
  t5887 = t5871 + t5885;
  t5893 = t3027*t5881;
  t5896 = -1.*t5866*t5499;
  t5898 = t5893 + t5896;
  t5890 = -1.*t2422*t5887;
  t5899 = t5512*t5898;
  t5907 = t5890 + t5899;
  t5911 = t5512*t5887;
  t5915 = t2422*t5898;
  t5916 = t5911 + t5915;
  t5908 = t2418*t5907;
  t5917 = t5560*t5916;
  t5920 = t5908 + t5917;
  t5926 = t5560*t5907;
  t5927 = -1.*t2418*t5916;
  t5929 = t5926 + t5927;
  t5603 = -1.*t1577*t5600;
  t5629 = t5606*t5626;
  t5633 = t5603 + t5629;
  t5657 = t5606*t5600;
  t5661 = t1577*t5626;
  t5662 = t5657 + t5661;
  t5808 = -1.*t1577*t5807;
  t5822 = t5606*t5820;
  t5823 = t5808 + t5822;
  t5837 = t5606*t5807;
  t5842 = t1577*t5820;
  t5844 = t5837 + t5842;
  t5921 = -1.*t1577*t5920;
  t5933 = t5606*t5929;
  t5934 = t5921 + t5933;
  t5940 = t5606*t5920;
  t5943 = t1577*t5929;
  t5948 = t5940 + t5943;
  p_output1[0]=t5653*t5662 - 1.*t5633*t602;
  p_output1[1]=t5653*t5844 - 1.*t5823*t602;
  p_output1[2]=t5653*t5948 - 1.*t5934*t602;
  p_output1[3]=t5633*t5653 + t5662*t602;
  p_output1[4]=t5653*t5823 + t5844*t602;
  p_output1[5]=t5653*t5934 + t5948*t602;
  p_output1[6]=-1.*t5003*t5411 + t3034*t4922*t5434;
  p_output1[7]=t4922*t5286*t5434 - 1.*t5003*t5720;
  p_output1[8]=-1.*t5302*t5434 - 1.*t5003*t5862;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "R_toe_joint_left_mex.hh"

namespace SymExpression
{

void R_toe_joint_left_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
