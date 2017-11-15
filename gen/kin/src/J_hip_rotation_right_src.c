/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:33 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "J_hip_rotation_right_src.h"

#ifdef _MSC_VER
  #define INLINE __forceinline /* use __forceinline (VC++ specific) */
#else
  #define INLINE static inline        /* use standard inline */
#endif

/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
INLINE double Power(double x, double y) { return pow(x, y); }
INLINE double Sqrt(double x) { return sqrt(x); }

INLINE double Abs(double x) { return fabs(x); }

INLINE double Exp(double x) { return exp(x); }
INLINE double Log(double x) { return log(x); }

INLINE double Sin(double x) { return sin(x); }
INLINE double Cos(double x) { return cos(x); }
INLINE double Tan(double x) { return tan(x); }

INLINE double Csc(double x) { return 1.0/sin(x); }
INLINE double Sec(double x) { return 1.0/cos(x); }

INLINE double ArcSin(double x) { return asin(x); }
INLINE double ArcCos(double x) { return acos(x); }
//INLINE double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
INLINE double ArcTan(double x, double y) { return atan2(y,x); }

INLINE double Sinh(double x) { return sinh(x); }
INLINE double Cosh(double x) { return cosh(x); }
INLINE double Tanh(double x) { return tanh(x); }

#define E 2.71828182845904523536029
#define Pi 3.14159265358979323846264
#define Degree 0.01745329251994329576924

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1)
{
  double t6833;
  double t6871;
  double t6867;
  double t6868;
  double t6872;
  double t1408;
  double t1932;
  double t2024;
  double t6797;
  double t6851;
  double t6870;
  double t6874;
  double t6877;
  double t6879;
  double t6892;
  double t6894;
  double t6896;
  double t479;
  double t6901;
  double t6902;
  double t6904;
  double t3623;
  double t6809;
  double t6821;
  double t6856;
  double t6865;
  double t6885;
  double t6887;
  double t6888;
  double t6891;
  double t6898;
  double t6899;
  double t6900;
  double t6928;
  double t6929;
  double t6930;
  double t6932;
  double t6933;
  double t6935;
  double t6937;
  double t6938;
  double t6939;
  double t6958;
  double t6959;
  double t6960;
  double t6981;
  double t6982;
  double t6983;
  double t7003;
  double t7004;
  double t7007;
  double t7031;
  double t7032;
  double t7033;
  double t6941;
  double t7039;
  double t7040;
  double t7046;
  double t7047;
  double t7048;
  double t7055;
  double t7056;
  double t7057;
  double t7069;
  double t7070;
  double t7071;
  double t7035;
  double t6942;
  double t6943;
  double t7052;
  double t7088;
  double t7089;
  double t7090;
  double t7095;
  double t7096;
  double t7065;
  double t7066;
  double t7067;
  double t7068;
  double t7072;
  double t7073;
  double t7075;
  double t6945;
  double t6946;
  double t6947;
  double t7104;
  double t7105;
  double t7106;
  double t7108;
  double t7109;
  double t7118;
  double t7119;
  double t7120;
  double t6921;
  double t7131;
  double t7132;
  double t7133;
  t6833 = Sin(var1[3]);
  t6871 = Cos(var1[3]);
  t6867 = Cos(var1[5]);
  t6868 = Sin(var1[4]);
  t6872 = Sin(var1[5]);
  t1408 = Cos(var1[14]);
  t1932 = -1.*t1408;
  t2024 = 1. + t1932;
  t6797 = Sin(var1[14]);
  t6851 = Sin(var1[13]);
  t6870 = -1.*t6867*t6833*t6868;
  t6874 = t6871*t6872;
  t6877 = t6870 + t6874;
  t6879 = Cos(var1[13]);
  t6892 = -1.*t6871*t6867;
  t6894 = -1.*t6833*t6868*t6872;
  t6896 = t6892 + t6894;
  t479 = Cos(var1[4]);
  t6901 = t6851*t6877;
  t6902 = t6879*t6896;
  t6904 = t6901 + t6902;
  t3623 = -0.049*t2024;
  t6809 = -0.135*t6797;
  t6821 = 0. + t3623 + t6809;
  t6856 = 0.135*t6851;
  t6865 = 0. + t6856;
  t6885 = -1.*t6879;
  t6887 = 1. + t6885;
  t6888 = -0.135*t6887;
  t6891 = 0. + t6888;
  t6898 = -0.135*t2024;
  t6899 = 0.049*t6797;
  t6900 = 0. + t6898 + t6899;
  t6928 = t6871*t6867*t6868;
  t6929 = t6833*t6872;
  t6930 = t6928 + t6929;
  t6932 = -1.*t6867*t6833;
  t6933 = t6871*t6868*t6872;
  t6935 = t6932 + t6933;
  t6937 = t6851*t6930;
  t6938 = t6879*t6935;
  t6939 = t6937 + t6938;
  t6958 = t6871*t479*t6867*t6851;
  t6959 = t6879*t6871*t479*t6872;
  t6960 = t6958 + t6959;
  t6981 = t479*t6867*t6851*t6833;
  t6982 = t6879*t479*t6833*t6872;
  t6983 = t6981 + t6982;
  t7003 = -1.*t6867*t6851*t6868;
  t7004 = -1.*t6879*t6868*t6872;
  t7007 = t7003 + t7004;
  t7031 = t6867*t6833;
  t7032 = -1.*t6871*t6868*t6872;
  t7033 = t7031 + t7032;
  t6941 = t6879*t6930;
  t7039 = t6851*t7033;
  t7040 = t6941 + t7039;
  t7046 = t6867*t6833*t6868;
  t7047 = -1.*t6871*t6872;
  t7048 = t7046 + t7047;
  t7055 = t6879*t7048;
  t7056 = t6851*t6896;
  t7057 = t7055 + t7056;
  t7069 = t6879*t479*t6867;
  t7070 = -1.*t479*t6851*t6872;
  t7071 = t7069 + t7070;
  t7035 = -1.*t6851*t6930;
  t6942 = -1.*t6851*t6935;
  t6943 = t6941 + t6942;
  t7052 = -1.*t6851*t7048;
  t7088 = t6871*t6867;
  t7089 = t6833*t6868*t6872;
  t7090 = t7088 + t7089;
  t7095 = -1.*t6851*t7090;
  t7096 = t7055 + t7095;
  t7065 = -1.*t479*t6867*t6851;
  t7066 = -1.*t6879*t479*t6872;
  t7067 = t7065 + t7066;
  t7068 = -0.09*t7067;
  t7072 = -0.135*t1408*t7071;
  t7073 = t6900*t7071;
  t7075 = -0.049*t6797*t7071;
  t6945 = -1.*t6871*t479*t6797;
  t6946 = t1408*t6939;
  t6947 = t6945 + t6946;
  t7104 = -0.135*t1408;
  t7105 = -0.049*t6797;
  t7106 = t7104 + t7105;
  t7108 = 0.049*t1408;
  t7109 = t7108 + t6809;
  t7118 = t6851*t7048;
  t7119 = t6879*t7090;
  t7120 = t7118 + t7119;
  t6921 = -1.*t1408*t479*t6833;
  t7131 = t479*t6867*t6851;
  t7132 = t6879*t479*t6872;
  t7133 = t7131 + t7132;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=-1.*t479*t6821*t6833 + t6865*t6877 + t6891*t6896 - 0.09*(t6877*t6879 - 1.*t6851*t6896) + t6900*t6904 - 0.135*(t479*t6797*t6833 + t1408*t6904) - 0.049*(t6797*t6904 + t6921);
  p_output1[10]=t479*t6821*t6871 + t6865*t6930 + t6891*t6935 + t6900*t6939 - 0.049*(t1408*t479*t6871 + t6797*t6939) - 0.09*t6943 - 0.135*t6947;
  p_output1[11]=0;
  p_output1[12]=t479*t6865*t6867*t6871 - 1.*t6821*t6868*t6871 - 0.09*(-1.*t479*t6851*t6871*t6872 + t479*t6867*t6871*t6879) + t479*t6871*t6872*t6891 + t6900*t6960 - 0.135*(t6797*t6868*t6871 + t1408*t6960) - 0.049*(-1.*t1408*t6868*t6871 + t6797*t6960);
  p_output1[13]=t479*t6833*t6865*t6867 - 1.*t6821*t6833*t6868 - 0.09*(-1.*t479*t6833*t6851*t6872 + t479*t6833*t6867*t6879) + t479*t6833*t6872*t6891 + t6900*t6983 - 0.135*(t6797*t6833*t6868 + t1408*t6983) - 0.049*(-1.*t1408*t6833*t6868 + t6797*t6983);
  p_output1[14]=-1.*t479*t6821 - 1.*t6865*t6867*t6868 - 0.09*(t6851*t6868*t6872 - 1.*t6867*t6868*t6879) - 1.*t6868*t6872*t6891 + t6900*t7007 - 0.135*(t479*t6797 + t1408*t7007) - 0.049*(-1.*t1408*t479 + t6797*t7007);
  p_output1[15]=t6891*t6930 + t6865*t7033 - 0.09*(t6879*t7033 + t7035) - 0.135*t1408*t7040 - 0.049*t6797*t7040 + t6900*t7040;
  p_output1[16]=t6865*t6896 + t6891*t7048 - 0.09*(t6902 + t7052) - 0.135*t1408*t7057 - 0.049*t6797*t7057 + t6900*t7057;
  p_output1[17]=-1.*t479*t6865*t6872 + t479*t6867*t6891 + t7068 + t7072 + t7073 + t7075;
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
  p_output1[39]=0.135*t6879*t6930 - 0.135*t6851*t6935 - 0.135*t1408*t6943 - 0.049*t6797*t6943 + t6900*t6943 - 0.09*(-1.*t6879*t6935 + t7035);
  p_output1[40]=0.135*t6879*t7048 - 0.135*t6851*t7090 - 0.09*(t7052 - 1.*t6879*t7090) - 0.135*t1408*t7096 - 0.049*t6797*t7096 + t6900*t7096;
  p_output1[41]=-0.135*t479*t6851*t6872 + 0.135*t479*t6867*t6879 + t7068 + t7072 + t7073 + t7075;
  p_output1[42]=-0.135*(-1.*t1408*t479*t6871 - 1.*t6797*t6939) - 0.049*t6947 + t479*t6871*t7106 + t6939*t7109;
  p_output1[43]=t479*t6833*t7106 + t7109*t7120 - 0.049*(-1.*t479*t6797*t6833 + t1408*t7120) - 0.135*(t6921 - 1.*t6797*t7120);
  p_output1[44]=-1.*t6868*t7106 + t7109*t7133 - 0.049*(t6797*t6868 + t1408*t7133) - 0.135*(t1408*t6868 - 1.*t6797*t7133);
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



void J_hip_rotation_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
