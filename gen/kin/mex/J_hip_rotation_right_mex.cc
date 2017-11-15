/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:32 GMT-05:00
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
  double t6813;
  double t6841;
  double t6837;
  double t6839;
  double t6842;
  double t2023;
  double t4598;
  double t6785;
  double t6805;
  double t6823;
  double t6840;
  double t6845;
  double t6846;
  double t6852;
  double t6859;
  double t6861;
  double t6862;
  double t1078;
  double t6871;
  double t6872;
  double t6874;
  double t6797;
  double t6809;
  double t6810;
  double t6833;
  double t6834;
  double t6853;
  double t6855;
  double t6856;
  double t6857;
  double t6867;
  double t6868;
  double t6870;
  double t6901;
  double t6902;
  double t6903;
  double t6905;
  double t6906;
  double t6907;
  double t6909;
  double t6910;
  double t6912;
  double t6932;
  double t6933;
  double t6934;
  double t6952;
  double t6953;
  double t6954;
  double t6972;
  double t6973;
  double t6974;
  double t6990;
  double t6991;
  double t6992;
  double t6915;
  double t6998;
  double t6999;
  double t7004;
  double t7005;
  double t7006;
  double t7012;
  double t7013;
  double t7014;
  double t7025;
  double t7026;
  double t7027;
  double t6994;
  double t6916;
  double t6917;
  double t7009;
  double t7042;
  double t7043;
  double t7044;
  double t7049;
  double t7050;
  double t7021;
  double t7022;
  double t7023;
  double t7024;
  double t7028;
  double t7029;
  double t7030;
  double t6919;
  double t6920;
  double t6921;
  double t7058;
  double t7059;
  double t7060;
  double t7062;
  double t7063;
  double t7072;
  double t7073;
  double t7074;
  double t6895;
  double t7085;
  double t7086;
  double t7087;
  t6813 = Sin(var1[3]);
  t6841 = Cos(var1[3]);
  t6837 = Cos(var1[5]);
  t6839 = Sin(var1[4]);
  t6842 = Sin(var1[5]);
  t2023 = Cos(var1[14]);
  t4598 = -1.*t2023;
  t6785 = 1. + t4598;
  t6805 = Sin(var1[14]);
  t6823 = Sin(var1[13]);
  t6840 = -1.*t6837*t6813*t6839;
  t6845 = t6841*t6842;
  t6846 = t6840 + t6845;
  t6852 = Cos(var1[13]);
  t6859 = -1.*t6841*t6837;
  t6861 = -1.*t6813*t6839*t6842;
  t6862 = t6859 + t6861;
  t1078 = Cos(var1[4]);
  t6871 = t6823*t6846;
  t6872 = t6852*t6862;
  t6874 = t6871 + t6872;
  t6797 = -0.049*t6785;
  t6809 = -0.135*t6805;
  t6810 = 0. + t6797 + t6809;
  t6833 = 0.135*t6823;
  t6834 = 0. + t6833;
  t6853 = -1.*t6852;
  t6855 = 1. + t6853;
  t6856 = -0.135*t6855;
  t6857 = 0. + t6856;
  t6867 = -0.135*t6785;
  t6868 = 0.049*t6805;
  t6870 = 0. + t6867 + t6868;
  t6901 = t6841*t6837*t6839;
  t6902 = t6813*t6842;
  t6903 = t6901 + t6902;
  t6905 = -1.*t6837*t6813;
  t6906 = t6841*t6839*t6842;
  t6907 = t6905 + t6906;
  t6909 = t6823*t6903;
  t6910 = t6852*t6907;
  t6912 = t6909 + t6910;
  t6932 = t6841*t1078*t6837*t6823;
  t6933 = t6852*t6841*t1078*t6842;
  t6934 = t6932 + t6933;
  t6952 = t1078*t6837*t6823*t6813;
  t6953 = t6852*t1078*t6813*t6842;
  t6954 = t6952 + t6953;
  t6972 = -1.*t6837*t6823*t6839;
  t6973 = -1.*t6852*t6839*t6842;
  t6974 = t6972 + t6973;
  t6990 = t6837*t6813;
  t6991 = -1.*t6841*t6839*t6842;
  t6992 = t6990 + t6991;
  t6915 = t6852*t6903;
  t6998 = t6823*t6992;
  t6999 = t6915 + t6998;
  t7004 = t6837*t6813*t6839;
  t7005 = -1.*t6841*t6842;
  t7006 = t7004 + t7005;
  t7012 = t6852*t7006;
  t7013 = t6823*t6862;
  t7014 = t7012 + t7013;
  t7025 = t6852*t1078*t6837;
  t7026 = -1.*t1078*t6823*t6842;
  t7027 = t7025 + t7026;
  t6994 = -1.*t6823*t6903;
  t6916 = -1.*t6823*t6907;
  t6917 = t6915 + t6916;
  t7009 = -1.*t6823*t7006;
  t7042 = t6841*t6837;
  t7043 = t6813*t6839*t6842;
  t7044 = t7042 + t7043;
  t7049 = -1.*t6823*t7044;
  t7050 = t7012 + t7049;
  t7021 = -1.*t1078*t6837*t6823;
  t7022 = -1.*t6852*t1078*t6842;
  t7023 = t7021 + t7022;
  t7024 = -0.09*t7023;
  t7028 = -0.135*t2023*t7027;
  t7029 = t6870*t7027;
  t7030 = -0.049*t6805*t7027;
  t6919 = -1.*t6841*t1078*t6805;
  t6920 = t2023*t6912;
  t6921 = t6919 + t6920;
  t7058 = -0.135*t2023;
  t7059 = -0.049*t6805;
  t7060 = t7058 + t7059;
  t7062 = 0.049*t2023;
  t7063 = t7062 + t6809;
  t7072 = t6823*t7006;
  t7073 = t6852*t7044;
  t7074 = t7072 + t7073;
  t6895 = -1.*t2023*t1078*t6813;
  t7085 = t1078*t6837*t6823;
  t7086 = t6852*t1078*t6842;
  t7087 = t7085 + t7086;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=-1.*t1078*t6810*t6813 + t6834*t6846 + t6857*t6862 - 0.09*(t6846*t6852 - 1.*t6823*t6862) + t6870*t6874 - 0.135*(t1078*t6805*t6813 + t2023*t6874) - 0.049*(t6805*t6874 + t6895);
  p_output1[10]=t1078*t6810*t6841 + t6834*t6903 + t6857*t6907 + t6870*t6912 - 0.049*(t1078*t2023*t6841 + t6805*t6912) - 0.09*t6917 - 0.135*t6921;
  p_output1[11]=0;
  p_output1[12]=t1078*t6834*t6837*t6841 - 1.*t6810*t6839*t6841 - 0.09*(-1.*t1078*t6823*t6841*t6842 + t1078*t6837*t6841*t6852) + t1078*t6841*t6842*t6857 + t6870*t6934 - 0.135*(t6805*t6839*t6841 + t2023*t6934) - 0.049*(-1.*t2023*t6839*t6841 + t6805*t6934);
  p_output1[13]=t1078*t6813*t6834*t6837 - 1.*t6810*t6813*t6839 - 0.09*(-1.*t1078*t6813*t6823*t6842 + t1078*t6813*t6837*t6852) + t1078*t6813*t6842*t6857 + t6870*t6954 - 0.135*(t6805*t6813*t6839 + t2023*t6954) - 0.049*(-1.*t2023*t6813*t6839 + t6805*t6954);
  p_output1[14]=-1.*t1078*t6810 - 1.*t6834*t6837*t6839 - 0.09*(t6823*t6839*t6842 - 1.*t6837*t6839*t6852) - 1.*t6839*t6842*t6857 + t6870*t6974 - 0.135*(t1078*t6805 + t2023*t6974) - 0.049*(-1.*t1078*t2023 + t6805*t6974);
  p_output1[15]=t6857*t6903 + t6834*t6992 - 0.09*(t6852*t6992 + t6994) - 0.135*t2023*t6999 - 0.049*t6805*t6999 + t6870*t6999;
  p_output1[16]=t6834*t6862 + t6857*t7006 - 0.09*(t6872 + t7009) - 0.135*t2023*t7014 - 0.049*t6805*t7014 + t6870*t7014;
  p_output1[17]=-1.*t1078*t6834*t6842 + t1078*t6837*t6857 + t7024 + t7028 + t7029 + t7030;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
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
  p_output1[39]=0.135*t6852*t6903 - 0.135*t6823*t6907 - 0.135*t2023*t6917 - 0.049*t6805*t6917 + t6870*t6917 - 0.09*(-1.*t6852*t6907 + t6994);
  p_output1[40]=0.135*t6852*t7006 - 0.135*t6823*t7044 - 0.09*(t7009 - 1.*t6852*t7044) - 0.135*t2023*t7050 - 0.049*t6805*t7050 + t6870*t7050;
  p_output1[41]=-0.135*t1078*t6823*t6842 + 0.135*t1078*t6837*t6852 + t7024 + t7028 + t7029 + t7030;
  p_output1[42]=-0.135*(-1.*t1078*t2023*t6841 - 1.*t6805*t6912) - 0.049*t6921 + t1078*t6841*t7060 + t6912*t7063;
  p_output1[43]=t1078*t6813*t7060 + t7063*t7074 - 0.049*(-1.*t1078*t6805*t6813 + t2023*t7074) - 0.135*(t6895 - 1.*t6805*t7074);
  p_output1[44]=-1.*t6839*t7060 + t7063*t7087 - 0.049*(t6805*t6839 + t2023*t7087) - 0.135*(t2023*t6839 - 1.*t6805*t7087);
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 20, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_hip_rotation_right_mex.hh"

namespace SymExpression
{

void J_hip_rotation_right_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
