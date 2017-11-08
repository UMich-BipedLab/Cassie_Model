/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:11:51 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_knee_to_shin_right_src.h"

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
  double t908;
  double t945;
  double t831;
  double t934;
  double t1131;
  double t1299;
  double t944;
  double t1260;
  double t1270;
  double t748;
  double t1370;
  double t1680;
  double t1685;
  double t2369;
  double t1278;
  double t1865;
  double t1962;
  double t742;
  double t2491;
  double t2507;
  double t2721;
  double t2729;
  double t2740;
  double t2759;
  double t2802;
  double t2823;
  double t2833;
  double t657;
  double t2989;
  double t2993;
  double t3082;
  double t3640;
  double t3652;
  double t3736;
  double t2919;
  double t3530;
  double t3765;
  double t3945;
  double t4145;
  double t4712;
  double t4986;
  double t5311;
  double t5445;
  double t7065;
  double t7147;
  double t7151;
  double t7155;
  double t7164;
  double t7180;
  double t7184;
  double t7189;
  double t7196;
  double t7198;
  double t2155;
  double t2889;
  double t2904;
  double t2925;
  double t2926;
  double t2928;
  double t4094;
  double t7077;
  double t7108;
  double t7114;
  double t7116;
  double t7119;
  double t7156;
  double t7199;
  double t7206;
  double t7218;
  double t7223;
  double t7226;
  double t7282;
  double t7289;
  double t7312;
  double t7317;
  double t7346;
  double t7347;
  double t7240;
  double t7241;
  double t7250;
  double t7291;
  double t7292;
  double t7295;
  double t7297;
  double t7298;
  double t7300;
  double t7301;
  double t7302;
  double t7303;
  double t7305;
  double t7307;
  double t7308;
  double t7318;
  double t7320;
  double t7321;
  double t7334;
  double t7340;
  double t7342;
  double t7348;
  double t7350;
  double t7352;
  double t7356;
  double t7357;
  double t7361;
  double t7254;
  double t7255;
  double t7256;
  double t7259;
  double t7260;
  double t7261;
  t908 = Cos(var1[5]);
  t945 = Sin(var1[3]);
  t831 = Cos(var1[3]);
  t934 = Sin(var1[4]);
  t1131 = Sin(var1[5]);
  t1299 = Sin(var1[13]);
  t944 = t831*t908*t934;
  t1260 = t945*t1131;
  t1270 = t944 + t1260;
  t748 = Cos(var1[13]);
  t1370 = -1.*t908*t945;
  t1680 = t831*t934*t1131;
  t1685 = t1370 + t1680;
  t2369 = Cos(var1[15]);
  t1278 = t748*t1270;
  t1865 = -1.*t1299*t1685;
  t1962 = t1278 + t1865;
  t742 = Sin(var1[15]);
  t2491 = Cos(var1[14]);
  t2507 = Cos(var1[4]);
  t2721 = t2491*t831*t2507;
  t2729 = Sin(var1[14]);
  t2740 = t1299*t1270;
  t2759 = t748*t1685;
  t2802 = t2740 + t2759;
  t2823 = t2729*t2802;
  t2833 = t2721 + t2823;
  t657 = Sin(var1[16]);
  t2989 = t908*t945*t934;
  t2993 = -1.*t831*t1131;
  t3082 = t2989 + t2993;
  t3640 = t831*t908;
  t3652 = t945*t934*t1131;
  t3736 = t3640 + t3652;
  t2919 = Cos(var1[16]);
  t3530 = t748*t3082;
  t3765 = -1.*t1299*t3736;
  t3945 = t3530 + t3765;
  t4145 = t2491*t2507*t945;
  t4712 = t1299*t3082;
  t4986 = t748*t3736;
  t5311 = t4712 + t4986;
  t5445 = t2729*t5311;
  t7065 = t4145 + t5445;
  t7147 = t748*t2507*t908;
  t7151 = -1.*t2507*t1299*t1131;
  t7155 = t7147 + t7151;
  t7164 = -1.*t2491*t934;
  t7180 = t2507*t908*t1299;
  t7184 = t748*t2507*t1131;
  t7189 = t7180 + t7184;
  t7196 = t2729*t7189;
  t7198 = t7164 + t7196;
  t2155 = t742*t1962;
  t2889 = t2369*t2833;
  t2904 = t2155 + t2889;
  t2925 = t2369*t1962;
  t2926 = -1.*t742*t2833;
  t2928 = t2925 + t2926;
  t4094 = t742*t3945;
  t7077 = t2369*t7065;
  t7108 = t4094 + t7077;
  t7114 = t2369*t3945;
  t7116 = -1.*t742*t7065;
  t7119 = t7114 + t7116;
  t7156 = t742*t7155;
  t7199 = t2369*t7198;
  t7206 = t7156 + t7199;
  t7218 = t2369*t7155;
  t7223 = -1.*t742*t7198;
  t7226 = t7218 + t7223;
  t7282 = -1.*t2491;
  t7289 = 1. + t7282;
  t7312 = -1.*t2369;
  t7317 = 1. + t7312;
  t7346 = -1.*t2919;
  t7347 = 1. + t7346;
  t7240 = t2919*t2904;
  t7241 = t657*t2928;
  t7250 = t7240 + t7241;
  t7291 = -0.049*t7289;
  t7292 = -0.135*t2729;
  t7295 = 0. + t7291 + t7292;
  t7297 = 0.135*t1299;
  t7298 = 0. + t7297;
  t7300 = -1.*t748;
  t7301 = 1. + t7300;
  t7302 = -0.135*t7301;
  t7303 = 0. + t7302;
  t7305 = -0.135*t7289;
  t7307 = 0.049*t2729;
  t7308 = 0. + t7305 + t7307;
  t7318 = -0.09*t7317;
  t7320 = 0.049*t742;
  t7321 = 0. + t7318 + t7320;
  t7334 = -0.049*t7317;
  t7340 = -0.09*t742;
  t7342 = 0. + t7334 + t7340;
  t7348 = -0.049*t7347;
  t7350 = -0.21*t657;
  t7352 = 0. + t7348 + t7350;
  t7356 = -0.21*t7347;
  t7357 = 0.049*t657;
  t7361 = 0. + t7356 + t7357;
  t7254 = t2919*t7108;
  t7255 = t657*t7119;
  t7256 = t7254 + t7255;
  t7259 = t2919*t7206;
  t7260 = t657*t7226;
  t7261 = t7259 + t7260;
  p_output1[0]=-1.*t2919*t2928 + t2904*t657;
  p_output1[1]=t657*t7108 - 1.*t2919*t7119;
  p_output1[2]=t657*t7206 - 1.*t2919*t7226;
  p_output1[3]=0.;
  p_output1[4]=t7250;
  p_output1[5]=t7256;
  p_output1[6]=t7261;
  p_output1[7]=0.;
  p_output1[8]=-1.*t2491*t2802 + t2507*t2729*t831;
  p_output1[9]=-1.*t2491*t5311 + t2507*t2729*t945;
  p_output1[10]=-1.*t2491*t7189 - 1.*t2729*t934;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.2707*(t2919*t2928 - 1.*t2904*t657) - 0.0016*t7250 + t1270*t7298 + t1685*t7303 + t2802*t7308 + t1962*t7321 + t2833*t7342 + t2904*t7352 + t2928*t7361 + t2507*t7295*t831 - 0.1305*(t2491*t2802 - 1.*t2507*t2729*t831) + var1[0];
  p_output1[13]=0. - 0.2707*(-1.*t657*t7108 + t2919*t7119) - 0.0016*t7256 + t3082*t7298 + t3736*t7303 + t5311*t7308 + t3945*t7321 + t7065*t7342 + t7108*t7352 + t7119*t7361 + t2507*t7295*t945 - 0.1305*(t2491*t5311 - 1.*t2507*t2729*t945) + var1[1];
  p_output1[14]=0. - 0.2707*(-1.*t657*t7206 + t2919*t7226) - 0.0016*t7261 + t1131*t2507*t7303 + t7189*t7308 + t7155*t7321 + t7198*t7342 + t7206*t7352 + t7226*t7361 + t2507*t7298*t908 - 1.*t7295*t934 - 0.1305*(t2491*t7189 + t2729*t934) + var1[2];
  p_output1[15]=1.;
}



void H_knee_to_shin_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
