/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:15:33 GMT-05:00
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
  double t6827;
  double t6862;
  double t6859;
  double t6860;
  double t6866;
  double t1522;
  double t2344;
  double t2850;
  double t6796;
  double t6848;
  double t6861;
  double t6867;
  double t6868;
  double t6871;
  double t6879;
  double t6880;
  double t6882;
  double t1284;
  double t6887;
  double t6888;
  double t6890;
  double t2871;
  double t6804;
  double t6824;
  double t6853;
  double t6858;
  double t6873;
  double t6876;
  double t6877;
  double t6878;
  double t6884;
  double t6885;
  double t6886;
  double t6912;
  double t6913;
  double t6914;
  double t6916;
  double t6917;
  double t6919;
  double t6921;
  double t6922;
  double t6923;
  double t6942;
  double t6943;
  double t6944;
  double t6965;
  double t6966;
  double t6967;
  double t6987;
  double t6988;
  double t6991;
  double t7015;
  double t7016;
  double t7017;
  double t6925;
  double t7023;
  double t7024;
  double t7030;
  double t7031;
  double t7032;
  double t7039;
  double t7040;
  double t7041;
  double t7053;
  double t7054;
  double t7055;
  double t7019;
  double t6926;
  double t6927;
  double t7036;
  double t7072;
  double t7073;
  double t7074;
  double t7079;
  double t7080;
  double t7049;
  double t7050;
  double t7051;
  double t7052;
  double t7056;
  double t7057;
  double t7059;
  double t6929;
  double t6930;
  double t6931;
  double t7088;
  double t7089;
  double t7090;
  double t7092;
  double t7093;
  double t7102;
  double t7103;
  double t7104;
  double t6906;
  double t7115;
  double t7116;
  double t7117;
  t6827 = Sin(var1[3]);
  t6862 = Cos(var1[3]);
  t6859 = Cos(var1[5]);
  t6860 = Sin(var1[4]);
  t6866 = Sin(var1[5]);
  t1522 = Cos(var1[14]);
  t2344 = -1.*t1522;
  t2850 = 1. + t2344;
  t6796 = Sin(var1[14]);
  t6848 = Sin(var1[13]);
  t6861 = -1.*t6859*t6827*t6860;
  t6867 = t6862*t6866;
  t6868 = t6861 + t6867;
  t6871 = Cos(var1[13]);
  t6879 = -1.*t6862*t6859;
  t6880 = -1.*t6827*t6860*t6866;
  t6882 = t6879 + t6880;
  t1284 = Cos(var1[4]);
  t6887 = t6848*t6868;
  t6888 = t6871*t6882;
  t6890 = t6887 + t6888;
  t2871 = -0.049*t2850;
  t6804 = -0.135*t6796;
  t6824 = 0. + t2871 + t6804;
  t6853 = 0.135*t6848;
  t6858 = 0. + t6853;
  t6873 = -1.*t6871;
  t6876 = 1. + t6873;
  t6877 = -0.135*t6876;
  t6878 = 0. + t6877;
  t6884 = -0.135*t2850;
  t6885 = 0.049*t6796;
  t6886 = 0. + t6884 + t6885;
  t6912 = t6862*t6859*t6860;
  t6913 = t6827*t6866;
  t6914 = t6912 + t6913;
  t6916 = -1.*t6859*t6827;
  t6917 = t6862*t6860*t6866;
  t6919 = t6916 + t6917;
  t6921 = t6848*t6914;
  t6922 = t6871*t6919;
  t6923 = t6921 + t6922;
  t6942 = t6862*t1284*t6859*t6848;
  t6943 = t6871*t6862*t1284*t6866;
  t6944 = t6942 + t6943;
  t6965 = t1284*t6859*t6848*t6827;
  t6966 = t6871*t1284*t6827*t6866;
  t6967 = t6965 + t6966;
  t6987 = -1.*t6859*t6848*t6860;
  t6988 = -1.*t6871*t6860*t6866;
  t6991 = t6987 + t6988;
  t7015 = t6859*t6827;
  t7016 = -1.*t6862*t6860*t6866;
  t7017 = t7015 + t7016;
  t6925 = t6871*t6914;
  t7023 = t6848*t7017;
  t7024 = t6925 + t7023;
  t7030 = t6859*t6827*t6860;
  t7031 = -1.*t6862*t6866;
  t7032 = t7030 + t7031;
  t7039 = t6871*t7032;
  t7040 = t6848*t6882;
  t7041 = t7039 + t7040;
  t7053 = t6871*t1284*t6859;
  t7054 = -1.*t1284*t6848*t6866;
  t7055 = t7053 + t7054;
  t7019 = -1.*t6848*t6914;
  t6926 = -1.*t6848*t6919;
  t6927 = t6925 + t6926;
  t7036 = -1.*t6848*t7032;
  t7072 = t6862*t6859;
  t7073 = t6827*t6860*t6866;
  t7074 = t7072 + t7073;
  t7079 = -1.*t6848*t7074;
  t7080 = t7039 + t7079;
  t7049 = -1.*t1284*t6859*t6848;
  t7050 = -1.*t6871*t1284*t6866;
  t7051 = t7049 + t7050;
  t7052 = -0.09*t7051;
  t7056 = -0.135*t1522*t7055;
  t7057 = t6886*t7055;
  t7059 = -0.049*t6796*t7055;
  t6929 = -1.*t6862*t1284*t6796;
  t6930 = t1522*t6923;
  t6931 = t6929 + t6930;
  t7088 = -0.135*t1522;
  t7089 = -0.049*t6796;
  t7090 = t7088 + t7089;
  t7092 = 0.049*t1522;
  t7093 = t7092 + t6804;
  t7102 = t6848*t7032;
  t7103 = t6871*t7074;
  t7104 = t7102 + t7103;
  t6906 = -1.*t1522*t1284*t6827;
  t7115 = t1284*t6859*t6848;
  t7116 = t6871*t1284*t6866;
  t7117 = t7115 + t7116;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=-1.*t1284*t6824*t6827 + t6858*t6868 + t6878*t6882 - 0.09*(t6868*t6871 - 1.*t6848*t6882) + t6886*t6890 - 0.135*(t1284*t6796*t6827 + t1522*t6890) - 0.049*(t6796*t6890 + t6906);
  p_output1[10]=t1284*t6824*t6862 + t6858*t6914 + t6878*t6919 + t6886*t6923 - 0.049*(t1284*t1522*t6862 + t6796*t6923) - 0.09*t6927 - 0.135*t6931;
  p_output1[11]=0;
  p_output1[12]=t1284*t6858*t6859*t6862 - 1.*t6824*t6860*t6862 - 0.09*(-1.*t1284*t6848*t6862*t6866 + t1284*t6859*t6862*t6871) + t1284*t6862*t6866*t6878 + t6886*t6944 - 0.135*(t6796*t6860*t6862 + t1522*t6944) - 0.049*(-1.*t1522*t6860*t6862 + t6796*t6944);
  p_output1[13]=t1284*t6827*t6858*t6859 - 1.*t6824*t6827*t6860 - 0.09*(-1.*t1284*t6827*t6848*t6866 + t1284*t6827*t6859*t6871) + t1284*t6827*t6866*t6878 + t6886*t6967 - 0.135*(t6796*t6827*t6860 + t1522*t6967) - 0.049*(-1.*t1522*t6827*t6860 + t6796*t6967);
  p_output1[14]=-1.*t1284*t6824 - 1.*t6858*t6859*t6860 - 0.09*(t6848*t6860*t6866 - 1.*t6859*t6860*t6871) - 1.*t6860*t6866*t6878 + t6886*t6991 - 0.135*(t1284*t6796 + t1522*t6991) - 0.049*(-1.*t1284*t1522 + t6796*t6991);
  p_output1[15]=t6878*t6914 + t6858*t7017 - 0.09*(t6871*t7017 + t7019) - 0.135*t1522*t7024 - 0.049*t6796*t7024 + t6886*t7024;
  p_output1[16]=t6858*t6882 + t6878*t7032 - 0.09*(t6888 + t7036) - 0.135*t1522*t7041 - 0.049*t6796*t7041 + t6886*t7041;
  p_output1[17]=-1.*t1284*t6858*t6866 + t1284*t6859*t6878 + t7052 + t7056 + t7057 + t7059;
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
  p_output1[39]=0.135*t6871*t6914 - 0.135*t6848*t6919 - 0.135*t1522*t6927 - 0.049*t6796*t6927 + t6886*t6927 - 0.09*(-1.*t6871*t6919 + t7019);
  p_output1[40]=0.135*t6871*t7032 - 0.135*t6848*t7074 - 0.09*(t7036 - 1.*t6871*t7074) - 0.135*t1522*t7080 - 0.049*t6796*t7080 + t6886*t7080;
  p_output1[41]=-0.135*t1284*t6848*t6866 + 0.135*t1284*t6859*t6871 + t7052 + t7056 + t7057 + t7059;
  p_output1[42]=-0.135*(-1.*t1284*t1522*t6862 - 1.*t6796*t6923) - 0.049*t6931 + t1284*t6862*t7090 + t6923*t7093;
  p_output1[43]=t1284*t6827*t7090 + t7093*t7104 - 0.049*(-1.*t1284*t6796*t6827 + t1522*t7104) - 0.135*(t6906 - 1.*t6796*t7104);
  p_output1[44]=-1.*t6860*t7090 + t7093*t7117 - 0.049*(t6796*t6860 + t1522*t7117) - 0.135*(t1522*t6860 - 1.*t6796*t7117);
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
