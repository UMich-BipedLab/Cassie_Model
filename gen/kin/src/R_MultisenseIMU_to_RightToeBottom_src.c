/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:17:33 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_MultisenseIMU_to_RightToeBottom_src.h"

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
  double t298;
  double t354;
  double t663;
  double t610;
  double t1332;
  double t1486;
  double t1257;
  double t1953;
  double t2047;
  double t2196;
  double t1348;
  double t1551;
  double t1617;
  double t2205;
  double t1014;
  double t2478;
  double t2486;
  double t2838;
  double t1891;
  double t2224;
  double t2381;
  double t2845;
  double t1013;
  double t3231;
  double t3507;
  double t3605;
  double t2413;
  double t3100;
  double t3174;
  double t3826;
  double t990;
  double t4023;
  double t4029;
  double t4064;
  double t3204;
  double t3874;
  double t3913;
  double t4099;
  double t5228;
  double t5237;
  double t5339;
  double t4807;
  double t4964;
  double t5172;
  double t5546;
  double t5557;
  double t5687;
  double t5221;
  double t5395;
  double t5425;
  double t5851;
  double t5875;
  double t5891;
  double t5476;
  double t5693;
  double t5828;
  double t6082;
  double t6101;
  double t6119;
  double t5838;
  double t5903;
  double t6015;
  double t6216;
  double t6235;
  double t6236;
  double t6179;
  double t6180;
  double t6197;
  double t6266;
  double t6285;
  double t6303;
  double t6213;
  double t6245;
  double t6246;
  double t6665;
  double t6693;
  double t6746;
  double t6249;
  double t6493;
  double t6574;
  double t3962;
  double t4111;
  double t4152;
  double t4237;
  double t4587;
  double t4695;
  double t6078;
  double t6126;
  double t6131;
  double t6142;
  double t6166;
  double t6167;
  double t6585;
  double t6810;
  double t6843;
  double t6896;
  double t6930;
  double t6965;
  t298 = Cos(var1[8]);
  t354 = Sin(var1[7]);
  t663 = Sin(var1[8]);
  t610 = Cos(var1[7]);
  t1332 = Cos(var1[9]);
  t1486 = Sin(var1[9]);
  t1257 = Cos(var1[10]);
  t1953 = t610*t1332;
  t2047 = -1.*t354*t663*t1486;
  t2196 = t1953 + t2047;
  t1348 = t1332*t354*t663;
  t1551 = t610*t1486;
  t1617 = t1348 + t1551;
  t2205 = Sin(var1[10]);
  t1014 = Cos(var1[11]);
  t2478 = t1257*t2196;
  t2486 = -1.*t1617*t2205;
  t2838 = t2478 + t2486;
  t1891 = t1257*t1617;
  t2224 = t2196*t2205;
  t2381 = t1891 + t2224;
  t2845 = Sin(var1[11]);
  t1013 = Cos(var1[12]);
  t3231 = t1014*t2838;
  t3507 = -1.*t2381*t2845;
  t3605 = t3231 + t3507;
  t2413 = t1014*t2381;
  t3100 = t2838*t2845;
  t3174 = t2413 + t3100;
  t3826 = Sin(var1[12]);
  t990 = Cos(var1[13]);
  t4023 = t1013*t3605;
  t4029 = -1.*t3174*t3826;
  t4064 = t4023 + t4029;
  t3204 = t1013*t3174;
  t3874 = t3605*t3826;
  t3913 = t3204 + t3874;
  t4099 = Sin(var1[13]);
  t5228 = -1.*t1332*t354;
  t5237 = -1.*t610*t663*t1486;
  t5339 = t5228 + t5237;
  t4807 = t610*t1332*t663;
  t4964 = -1.*t354*t1486;
  t5172 = t4807 + t4964;
  t5546 = t1257*t5339;
  t5557 = -1.*t5172*t2205;
  t5687 = t5546 + t5557;
  t5221 = t1257*t5172;
  t5395 = t5339*t2205;
  t5425 = t5221 + t5395;
  t5851 = t1014*t5687;
  t5875 = -1.*t5425*t2845;
  t5891 = t5851 + t5875;
  t5476 = t1014*t5425;
  t5693 = t5687*t2845;
  t5828 = t5476 + t5693;
  t6082 = t1013*t5891;
  t6101 = -1.*t5828*t3826;
  t6119 = t6082 + t6101;
  t5838 = t1013*t5828;
  t5903 = t5891*t3826;
  t6015 = t5838 + t5903;
  t6216 = -1.*t298*t1257*t1486;
  t6235 = -1.*t298*t1332*t2205;
  t6236 = t6216 + t6235;
  t6179 = t298*t1332*t1257;
  t6180 = -1.*t298*t1486*t2205;
  t6197 = t6179 + t6180;
  t6266 = t1014*t6236;
  t6285 = -1.*t6197*t2845;
  t6303 = t6266 + t6285;
  t6213 = t1014*t6197;
  t6245 = t6236*t2845;
  t6246 = t6213 + t6245;
  t6665 = t1013*t6303;
  t6693 = -1.*t6246*t3826;
  t6746 = t6665 + t6693;
  t6249 = t1013*t6246;
  t6493 = t6303*t3826;
  t6574 = t6249 + t6493;
  t3962 = t990*t3913;
  t4111 = t4064*t4099;
  t4152 = t3962 + t4111;
  t4237 = t990*t4064;
  t4587 = -1.*t3913*t4099;
  t4695 = t4237 + t4587;
  t6078 = t990*t6015;
  t6126 = t6119*t4099;
  t6131 = t6078 + t6126;
  t6142 = t990*t6119;
  t6166 = -1.*t6015*t4099;
  t6167 = t6142 + t6166;
  t6585 = t990*t6574;
  t6810 = t6746*t4099;
  t6843 = t6585 + t6810;
  t6896 = t990*t6746;
  t6930 = -1.*t6574*t4099;
  t6965 = t6896 + t6930;
  p_output1[0]=0. + t298*t354;
  p_output1[1]=0. - 1.*t298*t610;
  p_output1[2]=0. + t663;
  p_output1[3]=0. - 0.642788*t4152 - 0.766044*t4695;
  p_output1[4]=0. + 0.642788*t6131 + 0.766044*t6167;
  p_output1[5]=0. + 0.642788*t6843 + 0.766044*t6965;
  p_output1[6]=0. + 0.766044*t4152 - 0.642788*t4695;
  p_output1[7]=0. - 0.766044*t6131 + 0.642788*t6167;
  p_output1[8]=0. - 0.766044*t6843 + 0.642788*t6965;
}



void R_MultisenseIMU_to_RightToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
