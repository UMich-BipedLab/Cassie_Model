/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:15:33 GMT-05:00
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
  double t6817;
  double t6837;
  double t6831;
  double t6832;
  double t6838;
  double t6781;
  double t6785;
  double t6791;
  double t6799;
  double t6825;
  double t6835;
  double t6844;
  double t6845;
  double t6849;
  double t6855;
  double t6856;
  double t6857;
  double t4378;
  double t6862;
  double t6866;
  double t6867;
  double t6796;
  double t6804;
  double t6809;
  double t6827;
  double t6829;
  double t6850;
  double t6852;
  double t6853;
  double t6854;
  double t6859;
  double t6860;
  double t6861;
  double t6887;
  double t6888;
  double t6889;
  double t6891;
  double t6892;
  double t6893;
  double t6896;
  double t6897;
  double t6898;
  double t6916;
  double t6917;
  double t6918;
  double t6936;
  double t6937;
  double t6938;
  double t6956;
  double t6957;
  double t6958;
  double t6974;
  double t6975;
  double t6976;
  double t6900;
  double t6982;
  double t6983;
  double t6988;
  double t6989;
  double t6990;
  double t6996;
  double t6997;
  double t6998;
  double t7009;
  double t7010;
  double t7011;
  double t6978;
  double t6901;
  double t6902;
  double t6993;
  double t7026;
  double t7027;
  double t7028;
  double t7033;
  double t7034;
  double t7005;
  double t7006;
  double t7007;
  double t7008;
  double t7012;
  double t7013;
  double t7014;
  double t6904;
  double t6905;
  double t6906;
  double t7042;
  double t7043;
  double t7044;
  double t7046;
  double t7047;
  double t7056;
  double t7057;
  double t7058;
  double t6881;
  double t7069;
  double t7070;
  double t7071;
  t6817 = Sin(var1[3]);
  t6837 = Cos(var1[3]);
  t6831 = Cos(var1[5]);
  t6832 = Sin(var1[4]);
  t6838 = Sin(var1[5]);
  t6781 = Cos(var1[14]);
  t6785 = -1.*t6781;
  t6791 = 1. + t6785;
  t6799 = Sin(var1[14]);
  t6825 = Sin(var1[13]);
  t6835 = -1.*t6831*t6817*t6832;
  t6844 = t6837*t6838;
  t6845 = t6835 + t6844;
  t6849 = Cos(var1[13]);
  t6855 = -1.*t6837*t6831;
  t6856 = -1.*t6817*t6832*t6838;
  t6857 = t6855 + t6856;
  t4378 = Cos(var1[4]);
  t6862 = t6825*t6845;
  t6866 = t6849*t6857;
  t6867 = t6862 + t6866;
  t6796 = -0.049*t6791;
  t6804 = -0.135*t6799;
  t6809 = 0. + t6796 + t6804;
  t6827 = 0.135*t6825;
  t6829 = 0. + t6827;
  t6850 = -1.*t6849;
  t6852 = 1. + t6850;
  t6853 = -0.135*t6852;
  t6854 = 0. + t6853;
  t6859 = -0.135*t6791;
  t6860 = 0.049*t6799;
  t6861 = 0. + t6859 + t6860;
  t6887 = t6837*t6831*t6832;
  t6888 = t6817*t6838;
  t6889 = t6887 + t6888;
  t6891 = -1.*t6831*t6817;
  t6892 = t6837*t6832*t6838;
  t6893 = t6891 + t6892;
  t6896 = t6825*t6889;
  t6897 = t6849*t6893;
  t6898 = t6896 + t6897;
  t6916 = t6837*t4378*t6831*t6825;
  t6917 = t6849*t6837*t4378*t6838;
  t6918 = t6916 + t6917;
  t6936 = t4378*t6831*t6825*t6817;
  t6937 = t6849*t4378*t6817*t6838;
  t6938 = t6936 + t6937;
  t6956 = -1.*t6831*t6825*t6832;
  t6957 = -1.*t6849*t6832*t6838;
  t6958 = t6956 + t6957;
  t6974 = t6831*t6817;
  t6975 = -1.*t6837*t6832*t6838;
  t6976 = t6974 + t6975;
  t6900 = t6849*t6889;
  t6982 = t6825*t6976;
  t6983 = t6900 + t6982;
  t6988 = t6831*t6817*t6832;
  t6989 = -1.*t6837*t6838;
  t6990 = t6988 + t6989;
  t6996 = t6849*t6990;
  t6997 = t6825*t6857;
  t6998 = t6996 + t6997;
  t7009 = t6849*t4378*t6831;
  t7010 = -1.*t4378*t6825*t6838;
  t7011 = t7009 + t7010;
  t6978 = -1.*t6825*t6889;
  t6901 = -1.*t6825*t6893;
  t6902 = t6900 + t6901;
  t6993 = -1.*t6825*t6990;
  t7026 = t6837*t6831;
  t7027 = t6817*t6832*t6838;
  t7028 = t7026 + t7027;
  t7033 = -1.*t6825*t7028;
  t7034 = t6996 + t7033;
  t7005 = -1.*t4378*t6831*t6825;
  t7006 = -1.*t6849*t4378*t6838;
  t7007 = t7005 + t7006;
  t7008 = -0.09*t7007;
  t7012 = -0.135*t6781*t7011;
  t7013 = t6861*t7011;
  t7014 = -0.049*t6799*t7011;
  t6904 = -1.*t6837*t4378*t6799;
  t6905 = t6781*t6898;
  t6906 = t6904 + t6905;
  t7042 = -0.135*t6781;
  t7043 = -0.049*t6799;
  t7044 = t7042 + t7043;
  t7046 = 0.049*t6781;
  t7047 = t7046 + t6804;
  t7056 = t6825*t6990;
  t7057 = t6849*t7028;
  t7058 = t7056 + t7057;
  t6881 = -1.*t6781*t4378*t6817;
  t7069 = t4378*t6831*t6825;
  t7070 = t6849*t4378*t6838;
  t7071 = t7069 + t7070;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=-1.*t4378*t6809*t6817 + t6829*t6845 + t6854*t6857 - 0.09*(t6845*t6849 - 1.*t6825*t6857) + t6861*t6867 - 0.135*(t4378*t6799*t6817 + t6781*t6867) - 0.049*(t6799*t6867 + t6881);
  p_output1[10]=t4378*t6809*t6837 + t6829*t6889 + t6854*t6893 + t6861*t6898 - 0.049*(t4378*t6781*t6837 + t6799*t6898) - 0.09*t6902 - 0.135*t6906;
  p_output1[11]=0;
  p_output1[12]=t4378*t6829*t6831*t6837 - 1.*t6809*t6832*t6837 - 0.09*(-1.*t4378*t6825*t6837*t6838 + t4378*t6831*t6837*t6849) + t4378*t6837*t6838*t6854 + t6861*t6918 - 0.135*(t6799*t6832*t6837 + t6781*t6918) - 0.049*(-1.*t6781*t6832*t6837 + t6799*t6918);
  p_output1[13]=t4378*t6817*t6829*t6831 - 1.*t6809*t6817*t6832 - 0.09*(-1.*t4378*t6817*t6825*t6838 + t4378*t6817*t6831*t6849) + t4378*t6817*t6838*t6854 + t6861*t6938 - 0.135*(t6799*t6817*t6832 + t6781*t6938) - 0.049*(-1.*t6781*t6817*t6832 + t6799*t6938);
  p_output1[14]=-1.*t4378*t6809 - 1.*t6829*t6831*t6832 - 0.09*(t6825*t6832*t6838 - 1.*t6831*t6832*t6849) - 1.*t6832*t6838*t6854 + t6861*t6958 - 0.135*(t4378*t6799 + t6781*t6958) - 0.049*(-1.*t4378*t6781 + t6799*t6958);
  p_output1[15]=t6854*t6889 + t6829*t6976 - 0.09*(t6849*t6976 + t6978) - 0.135*t6781*t6983 - 0.049*t6799*t6983 + t6861*t6983;
  p_output1[16]=t6829*t6857 + t6854*t6990 - 0.09*(t6866 + t6993) - 0.135*t6781*t6998 - 0.049*t6799*t6998 + t6861*t6998;
  p_output1[17]=-1.*t4378*t6829*t6838 + t4378*t6831*t6854 + t7008 + t7012 + t7013 + t7014;
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
  p_output1[39]=0.135*t6849*t6889 - 0.135*t6825*t6893 - 0.135*t6781*t6902 - 0.049*t6799*t6902 + t6861*t6902 - 0.09*(-1.*t6849*t6893 + t6978);
  p_output1[40]=0.135*t6849*t6990 - 0.135*t6825*t7028 - 0.09*(t6993 - 1.*t6849*t7028) - 0.135*t6781*t7034 - 0.049*t6799*t7034 + t6861*t7034;
  p_output1[41]=-0.135*t4378*t6825*t6838 + 0.135*t4378*t6831*t6849 + t7008 + t7012 + t7013 + t7014;
  p_output1[42]=-0.135*(-1.*t4378*t6781*t6837 - 1.*t6799*t6898) - 0.049*t6906 + t4378*t6837*t7044 + t6898*t7047;
  p_output1[43]=t4378*t6817*t7044 + t7047*t7058 - 0.049*(-1.*t4378*t6799*t6817 + t6781*t7058) - 0.135*(t6881 - 1.*t6799*t7058);
  p_output1[44]=-1.*t6832*t7044 + t7047*t7071 - 0.049*(t6799*t6832 + t6781*t7071) - 0.135*(t6781*t6832 - 1.*t6799*t7071);
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
