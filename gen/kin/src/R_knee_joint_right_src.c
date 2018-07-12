/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:33:43 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_knee_joint_right_src.h"

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
  double t2581;
  double t3435;
  double t564;
  double t3167;
  double t3483;
  double t4075;
  double t3224;
  double t3776;
  double t3929;
  double t517;
  double t4140;
  double t4399;
  double t4490;
  double t4593;
  double t3970;
  double t4503;
  double t4535;
  double t515;
  double t4895;
  double t4968;
  double t4992;
  double t4999;
  double t5016;
  double t5069;
  double t5075;
  double t5115;
  double t5138;
  double t487;
  double t5573;
  double t5591;
  double t5606;
  double t5656;
  double t5677;
  double t5709;
  double t5353;
  double t5637;
  double t5751;
  double t5782;
  double t5822;
  double t5890;
  double t5929;
  double t5961;
  double t5963;
  double t6151;
  double t6303;
  double t6335;
  double t6338;
  double t6363;
  double t6395;
  double t6421;
  double t6438;
  double t6454;
  double t6484;
  double t4583;
  double t5145;
  double t5168;
  double t5392;
  double t5407;
  double t5416;
  double t5785;
  double t6185;
  double t6195;
  double t6215;
  double t6250;
  double t6297;
  double t6355;
  double t6490;
  double t6516;
  double t6558;
  double t6568;
  double t6576;
  t2581 = Cos(var1[5]);
  t3435 = Sin(var1[3]);
  t564 = Cos(var1[3]);
  t3167 = Sin(var1[4]);
  t3483 = Sin(var1[5]);
  t4075 = Sin(var1[13]);
  t3224 = t564*t2581*t3167;
  t3776 = t3435*t3483;
  t3929 = t3224 + t3776;
  t517 = Cos(var1[13]);
  t4140 = -1.*t2581*t3435;
  t4399 = t564*t3167*t3483;
  t4490 = t4140 + t4399;
  t4593 = Cos(var1[15]);
  t3970 = t517*t3929;
  t4503 = -1.*t4075*t4490;
  t4535 = t3970 + t4503;
  t515 = Sin(var1[15]);
  t4895 = Cos(var1[14]);
  t4968 = Cos(var1[4]);
  t4992 = t4895*t564*t4968;
  t4999 = Sin(var1[14]);
  t5016 = t4075*t3929;
  t5069 = t517*t4490;
  t5075 = t5016 + t5069;
  t5115 = t4999*t5075;
  t5138 = t4992 + t5115;
  t487 = Sin(var1[16]);
  t5573 = t2581*t3435*t3167;
  t5591 = -1.*t564*t3483;
  t5606 = t5573 + t5591;
  t5656 = t564*t2581;
  t5677 = t3435*t3167*t3483;
  t5709 = t5656 + t5677;
  t5353 = Cos(var1[16]);
  t5637 = t517*t5606;
  t5751 = -1.*t4075*t5709;
  t5782 = t5637 + t5751;
  t5822 = t4895*t4968*t3435;
  t5890 = t4075*t5606;
  t5929 = t517*t5709;
  t5961 = t5890 + t5929;
  t5963 = t4999*t5961;
  t6151 = t5822 + t5963;
  t6303 = t517*t4968*t2581;
  t6335 = -1.*t4968*t4075*t3483;
  t6338 = t6303 + t6335;
  t6363 = -1.*t4895*t3167;
  t6395 = t4968*t2581*t4075;
  t6421 = t517*t4968*t3483;
  t6438 = t6395 + t6421;
  t6454 = t4999*t6438;
  t6484 = t6363 + t6454;
  t4583 = t515*t4535;
  t5145 = t4593*t5138;
  t5168 = t4583 + t5145;
  t5392 = t4593*t4535;
  t5407 = -1.*t515*t5138;
  t5416 = t5392 + t5407;
  t5785 = t515*t5782;
  t6185 = t4593*t6151;
  t6195 = t5785 + t6185;
  t6215 = t4593*t5782;
  t6250 = -1.*t515*t6151;
  t6297 = t6215 + t6250;
  t6355 = t515*t6338;
  t6490 = t4593*t6484;
  t6516 = t6355 + t6490;
  t6558 = t4593*t6338;
  t6568 = -1.*t515*t6484;
  t6576 = t6558 + t6568;
  p_output1[0]=t487*t5168 - 1.*t5353*t5416;
  p_output1[1]=t487*t6195 - 1.*t5353*t6297;
  p_output1[2]=t487*t6516 - 1.*t5353*t6576;
  p_output1[3]=t5168*t5353 + t487*t5416;
  p_output1[4]=t5353*t6195 + t487*t6297;
  p_output1[5]=t5353*t6516 + t487*t6576;
  p_output1[6]=-1.*t4895*t5075 + t4968*t4999*t564;
  p_output1[7]=t3435*t4968*t4999 - 1.*t4895*t5961;
  p_output1[8]=-1.*t3167*t4999 - 1.*t4895*t6438;
}



void R_knee_joint_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
