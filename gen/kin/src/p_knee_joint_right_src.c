/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:33:39 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_knee_joint_right_src.h"

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
  double t400;
  double t5083;
  double t5438;
  double t5126;
  double t5564;
  double t1914;
  double t2147;
  double t2314;
  double t2657;
  double t4562;
  double t5166;
  double t5697;
  double t5735;
  double t5953;
  double t6816;
  double t6829;
  double t6896;
  double t946;
  double t7160;
  double t7193;
  double t7265;
  double t7350;
  double t7529;
  double t7531;
  double t7693;
  double t7754;
  double t7816;
  double t7820;
  double t7906;
  double t7909;
  double t7928;
  double t7940;
  double t7958;
  double t7962;
  double t7976;
  double t8026;
  double t8033;
  double t8043;
  double t8123;
  double t8133;
  double t8169;
  double t2626;
  double t3487;
  double t4096;
  double t4921;
  double t4991;
  double t5977;
  double t6037;
  double t6535;
  double t6680;
  double t6956;
  double t7032;
  double t7084;
  double t8241;
  double t8245;
  double t8246;
  double t8270;
  double t8308;
  double t8334;
  double t7583;
  double t7728;
  double t7739;
  double t8339;
  double t8367;
  double t8376;
  double t7883;
  double t7897;
  double t7904;
  double t7972;
  double t7989;
  double t7991;
  double t8421;
  double t8422;
  double t8433;
  double t8463;
  double t8474;
  double t8492;
  double t8091;
  double t8100;
  double t8102;
  double t8522;
  double t8543;
  double t8551;
  double t8573;
  double t8574;
  double t8586;
  double t8692;
  double t8727;
  double t8755;
  double t8763;
  double t8767;
  double t8781;
  double t8809;
  double t8814;
  double t8883;
  double t8925;
  double t8935;
  double t8946;
  double t8949;
  double t8954;
  double t8959;
  t400 = Cos(var1[3]);
  t5083 = Cos(var1[5]);
  t5438 = Sin(var1[3]);
  t5126 = Sin(var1[4]);
  t5564 = Sin(var1[5]);
  t1914 = Cos(var1[14]);
  t2147 = -1.*t1914;
  t2314 = 1. + t2147;
  t2657 = Sin(var1[14]);
  t4562 = Sin(var1[13]);
  t5166 = t400*t5083*t5126;
  t5697 = t5438*t5564;
  t5735 = t5166 + t5697;
  t5953 = Cos(var1[13]);
  t6816 = -1.*t5083*t5438;
  t6829 = t400*t5126*t5564;
  t6896 = t6816 + t6829;
  t946 = Cos(var1[4]);
  t7160 = t4562*t5735;
  t7193 = t5953*t6896;
  t7265 = t7160 + t7193;
  t7350 = Cos(var1[15]);
  t7529 = -1.*t7350;
  t7531 = 1. + t7529;
  t7693 = Sin(var1[15]);
  t7754 = t5953*t5735;
  t7816 = -1.*t4562*t6896;
  t7820 = t7754 + t7816;
  t7906 = t1914*t400*t946;
  t7909 = t2657*t7265;
  t7928 = t7906 + t7909;
  t7940 = Cos(var1[16]);
  t7958 = -1.*t7940;
  t7962 = 1. + t7958;
  t7976 = Sin(var1[16]);
  t8026 = t7693*t7820;
  t8033 = t7350*t7928;
  t8043 = t8026 + t8033;
  t8123 = t7350*t7820;
  t8133 = -1.*t7693*t7928;
  t8169 = t8123 + t8133;
  t2626 = -0.049*t2314;
  t3487 = -0.135*t2657;
  t4096 = 0. + t2626 + t3487;
  t4921 = 0.135*t4562;
  t4991 = 0. + t4921;
  t5977 = -1.*t5953;
  t6037 = 1. + t5977;
  t6535 = -0.135*t6037;
  t6680 = 0. + t6535;
  t6956 = -0.135*t2314;
  t7032 = 0.049*t2657;
  t7084 = 0. + t6956 + t7032;
  t8241 = t5083*t5438*t5126;
  t8245 = -1.*t400*t5564;
  t8246 = t8241 + t8245;
  t8270 = t400*t5083;
  t8308 = t5438*t5126*t5564;
  t8334 = t8270 + t8308;
  t7583 = -0.09*t7531;
  t7728 = 0.049*t7693;
  t7739 = 0. + t7583 + t7728;
  t8339 = t4562*t8246;
  t8367 = t5953*t8334;
  t8376 = t8339 + t8367;
  t7883 = -0.049*t7531;
  t7897 = -0.09*t7693;
  t7904 = 0. + t7883 + t7897;
  t7972 = -0.049*t7962;
  t7989 = -0.21*t7976;
  t7991 = 0. + t7972 + t7989;
  t8421 = t5953*t8246;
  t8422 = -1.*t4562*t8334;
  t8433 = t8421 + t8422;
  t8463 = t1914*t946*t5438;
  t8474 = t2657*t8376;
  t8492 = t8463 + t8474;
  t8091 = -0.21*t7962;
  t8100 = 0.049*t7976;
  t8102 = 0. + t8091 + t8100;
  t8522 = t7693*t8433;
  t8543 = t7350*t8492;
  t8551 = t8522 + t8543;
  t8573 = t7350*t8433;
  t8574 = -1.*t7693*t8492;
  t8586 = t8573 + t8574;
  t8692 = t946*t5083*t4562;
  t8727 = t5953*t946*t5564;
  t8755 = t8692 + t8727;
  t8763 = t5953*t946*t5083;
  t8767 = -1.*t946*t4562*t5564;
  t8781 = t8763 + t8767;
  t8809 = -1.*t1914*t5126;
  t8814 = t2657*t8755;
  t8883 = t8809 + t8814;
  t8925 = t7693*t8781;
  t8935 = t7350*t8883;
  t8946 = t8925 + t8935;
  t8949 = t7350*t8781;
  t8954 = -1.*t7693*t8883;
  t8959 = t8949 + t8954;
  p_output1[0]=0. + t4991*t5735 + t6680*t6896 + t7084*t7265 + t7739*t7820 + t7904*t7928 + t7991*t8043 + t8102*t8169 - 0.21*(-1.*t7976*t8043 + t7940*t8169) - 0.049*(t7940*t8043 + t7976*t8169) + t400*t4096*t946 - 0.1305*(t1914*t7265 - 1.*t2657*t400*t946) + var1[0];
  p_output1[1]=0. + t4991*t8246 + t6680*t8334 + t7084*t8376 + t7739*t8433 + t7904*t8492 + t7991*t8551 + t8102*t8586 - 0.21*(-1.*t7976*t8551 + t7940*t8586) - 0.049*(t7940*t8551 + t7976*t8586) + t4096*t5438*t946 - 0.1305*(t1914*t8376 - 1.*t2657*t5438*t946) + var1[1];
  p_output1[2]=0. - 1.*t4096*t5126 + t7084*t8755 - 0.1305*(t2657*t5126 + t1914*t8755) + t7739*t8781 + t7904*t8883 + t7991*t8946 + t8102*t8959 - 0.21*(-1.*t7976*t8946 + t7940*t8959) - 0.049*(t7940*t8946 + t7976*t8959) + t4991*t5083*t946 + t5564*t6680*t946 + var1[2];
}



void p_knee_joint_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
