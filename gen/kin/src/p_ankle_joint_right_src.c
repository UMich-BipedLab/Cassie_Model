/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:15:49 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_ankle_joint_right_src.h"

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
  double t1225;
  double t1999;
  double t2006;
  double t2001;
  double t2011;
  double t1808;
  double t1809;
  double t1827;
  double t1862;
  double t1976;
  double t2004;
  double t2013;
  double t2014;
  double t2017;
  double t2035;
  double t2036;
  double t2037;
  double t1473;
  double t2048;
  double t2053;
  double t2056;
  double t2060;
  double t2061;
  double t2068;
  double t2078;
  double t2083;
  double t2085;
  double t2086;
  double t2403;
  double t2470;
  double t2602;
  double t3046;
  double t3062;
  double t3068;
  double t3522;
  double t3584;
  double t3998;
  double t4071;
  double t4200;
  double t4312;
  double t4316;
  double t5401;
  double t5710;
  double t8613;
  double t8680;
  double t8772;
  double t8775;
  double t8784;
  double t8802;
  double t8808;
  double t8813;
  double t8823;
  double t8835;
  double t8839;
  double t8845;
  double t8852;
  double t8853;
  double t8855;
  double t8863;
  double t8864;
  double t8872;
  double t1845;
  double t1935;
  double t1965;
  double t1988;
  double t1991;
  double t2019;
  double t2026;
  double t2033;
  double t2034;
  double t2039;
  double t2042;
  double t2045;
  double t8908;
  double t8919;
  double t8925;
  double t8931;
  double t8934;
  double t8939;
  double t2070;
  double t2079;
  double t2081;
  double t8942;
  double t8944;
  double t8945;
  double t2095;
  double t2328;
  double t2346;
  double t3402;
  double t3529;
  double t3538;
  double t8948;
  double t8964;
  double t8968;
  double t8976;
  double t8977;
  double t8978;
  double t4125;
  double t4136;
  double t4160;
  double t8622;
  double t8756;
  double t8771;
  double t8984;
  double t8985;
  double t8987;
  double t8996;
  double t9000;
  double t9001;
  double t8788;
  double t8793;
  double t8800;
  double t8844;
  double t8850;
  double t8851;
  double t9006;
  double t9007;
  double t9009;
  double t9013;
  double t9015;
  double t9018;
  double t8857;
  double t8859;
  double t8860;
  double t9029;
  double t9033;
  double t9038;
  double t9041;
  double t9042;
  double t9046;
  double t9079;
  double t9080;
  double t9081;
  double t9084;
  double t9085;
  double t9091;
  double t9105;
  double t9107;
  double t9108;
  double t9111;
  double t9112;
  double t9114;
  double t9116;
  double t9117;
  double t9121;
  double t9125;
  double t9127;
  double t9130;
  double t9136;
  double t9137;
  double t9138;
  double t9140;
  double t9142;
  double t9144;
  double t9146;
  double t9149;
  double t9152;
  t1225 = Cos(var1[3]);
  t1999 = Cos(var1[5]);
  t2006 = Sin(var1[3]);
  t2001 = Sin(var1[4]);
  t2011 = Sin(var1[5]);
  t1808 = Cos(var1[14]);
  t1809 = -1.*t1808;
  t1827 = 1. + t1809;
  t1862 = Sin(var1[14]);
  t1976 = Sin(var1[13]);
  t2004 = t1225*t1999*t2001;
  t2013 = t2006*t2011;
  t2014 = t2004 + t2013;
  t2017 = Cos(var1[13]);
  t2035 = -1.*t1999*t2006;
  t2036 = t1225*t2001*t2011;
  t2037 = t2035 + t2036;
  t1473 = Cos(var1[4]);
  t2048 = t1976*t2014;
  t2053 = t2017*t2037;
  t2056 = t2048 + t2053;
  t2060 = Cos(var1[15]);
  t2061 = -1.*t2060;
  t2068 = 1. + t2061;
  t2078 = Sin(var1[15]);
  t2083 = t2017*t2014;
  t2085 = -1.*t1976*t2037;
  t2086 = t2083 + t2085;
  t2403 = t1808*t1225*t1473;
  t2470 = t1862*t2056;
  t2602 = t2403 + t2470;
  t3046 = Cos(var1[16]);
  t3062 = -1.*t3046;
  t3068 = 1. + t3062;
  t3522 = Sin(var1[16]);
  t3584 = t2078*t2086;
  t3998 = t2060*t2602;
  t4071 = t3584 + t3998;
  t4200 = t2060*t2086;
  t4312 = -1.*t2078*t2602;
  t4316 = t4200 + t4312;
  t5401 = Cos(var1[17]);
  t5710 = -1.*t5401;
  t8613 = 1. + t5710;
  t8680 = Sin(var1[17]);
  t8772 = -1.*t3522*t4071;
  t8775 = t3046*t4316;
  t8784 = t8772 + t8775;
  t8802 = t3046*t4071;
  t8808 = t3522*t4316;
  t8813 = t8802 + t8808;
  t8823 = Cos(var1[18]);
  t8835 = -1.*t8823;
  t8839 = 1. + t8835;
  t8845 = Sin(var1[18]);
  t8852 = t8680*t8784;
  t8853 = t5401*t8813;
  t8855 = t8852 + t8853;
  t8863 = t5401*t8784;
  t8864 = -1.*t8680*t8813;
  t8872 = t8863 + t8864;
  t1845 = -0.049*t1827;
  t1935 = -0.135*t1862;
  t1965 = 0. + t1845 + t1935;
  t1988 = 0.135*t1976;
  t1991 = 0. + t1988;
  t2019 = -1.*t2017;
  t2026 = 1. + t2019;
  t2033 = -0.135*t2026;
  t2034 = 0. + t2033;
  t2039 = -0.135*t1827;
  t2042 = 0.049*t1862;
  t2045 = 0. + t2039 + t2042;
  t8908 = t1999*t2006*t2001;
  t8919 = -1.*t1225*t2011;
  t8925 = t8908 + t8919;
  t8931 = t1225*t1999;
  t8934 = t2006*t2001*t2011;
  t8939 = t8931 + t8934;
  t2070 = -0.09*t2068;
  t2079 = 0.049*t2078;
  t2081 = 0. + t2070 + t2079;
  t8942 = t1976*t8925;
  t8944 = t2017*t8939;
  t8945 = t8942 + t8944;
  t2095 = -0.049*t2068;
  t2328 = -0.09*t2078;
  t2346 = 0. + t2095 + t2328;
  t3402 = -0.049*t3068;
  t3529 = -0.21*t3522;
  t3538 = 0. + t3402 + t3529;
  t8948 = t2017*t8925;
  t8964 = -1.*t1976*t8939;
  t8968 = t8948 + t8964;
  t8976 = t1808*t1473*t2006;
  t8977 = t1862*t8945;
  t8978 = t8976 + t8977;
  t4125 = -0.21*t3068;
  t4136 = 0.049*t3522;
  t4160 = 0. + t4125 + t4136;
  t8622 = -0.2707*t8613;
  t8756 = 0.0016*t8680;
  t8771 = 0. + t8622 + t8756;
  t8984 = t2078*t8968;
  t8985 = t2060*t8978;
  t8987 = t8984 + t8985;
  t8996 = t2060*t8968;
  t9000 = -1.*t2078*t8978;
  t9001 = t8996 + t9000;
  t8788 = -0.0016*t8613;
  t8793 = -0.2707*t8680;
  t8800 = 0. + t8788 + t8793;
  t8844 = 0.0184*t8839;
  t8850 = -0.7055*t8845;
  t8851 = 0. + t8844 + t8850;
  t9006 = -1.*t3522*t8987;
  t9007 = t3046*t9001;
  t9009 = t9006 + t9007;
  t9013 = t3046*t8987;
  t9015 = t3522*t9001;
  t9018 = t9013 + t9015;
  t8857 = -0.7055*t8839;
  t8859 = -0.0184*t8845;
  t8860 = 0. + t8857 + t8859;
  t9029 = t8680*t9009;
  t9033 = t5401*t9018;
  t9038 = t9029 + t9033;
  t9041 = t5401*t9009;
  t9042 = -1.*t8680*t9018;
  t9046 = t9041 + t9042;
  t9079 = t1473*t1999*t1976;
  t9080 = t2017*t1473*t2011;
  t9081 = t9079 + t9080;
  t9084 = t2017*t1473*t1999;
  t9085 = -1.*t1473*t1976*t2011;
  t9091 = t9084 + t9085;
  t9105 = -1.*t1808*t2001;
  t9107 = t1862*t9081;
  t9108 = t9105 + t9107;
  t9111 = t2078*t9091;
  t9112 = t2060*t9108;
  t9114 = t9111 + t9112;
  t9116 = t2060*t9091;
  t9117 = -1.*t2078*t9108;
  t9121 = t9116 + t9117;
  t9125 = -1.*t3522*t9114;
  t9127 = t3046*t9121;
  t9130 = t9125 + t9127;
  t9136 = t3046*t9114;
  t9137 = t3522*t9121;
  t9138 = t9136 + t9137;
  t9140 = t8680*t9130;
  t9142 = t5401*t9138;
  t9144 = t9140 + t9142;
  t9146 = t5401*t9130;
  t9149 = -1.*t8680*t9138;
  t9152 = t9146 + t9149;
  p_output1[0]=0. + t1225*t1473*t1965 + t1991*t2014 + t2034*t2037 + t2045*t2056 - 0.1305*(-1.*t1225*t1473*t1862 + t1808*t2056) + t2081*t2086 + t2346*t2602 + t3538*t4071 + t4160*t4316 + t8771*t8784 + t8800*t8813 + t8851*t8855 + t8860*t8872 - 0.7055*(-1.*t8845*t8855 + t8823*t8872) + 0.0184*(t8823*t8855 + t8845*t8872) + var1[0];
  p_output1[1]=0. + t1473*t1965*t2006 + t1991*t8925 + t2034*t8939 + t2045*t8945 - 0.1305*(-1.*t1473*t1862*t2006 + t1808*t8945) + t2081*t8968 + t2346*t8978 + t3538*t8987 + t4160*t9001 + t8771*t9009 + t8800*t9018 + t8851*t9038 + t8860*t9046 - 0.7055*(-1.*t8845*t9038 + t8823*t9046) + 0.0184*(t8823*t9038 + t8845*t9046) + var1[1];
  p_output1[2]=0. + t1473*t1991*t1999 - 1.*t1965*t2001 + t1473*t2011*t2034 + t2045*t9081 - 0.1305*(t1862*t2001 + t1808*t9081) + t2081*t9091 + t2346*t9108 + t3538*t9114 + t4160*t9121 + t8771*t9130 + t8800*t9138 + t8851*t9144 + t8860*t9152 - 0.7055*(-1.*t8845*t9144 + t8823*t9152) + 0.0184*(t8823*t9144 + t8845*t9152) + var1[2];
}



void p_ankle_joint_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
