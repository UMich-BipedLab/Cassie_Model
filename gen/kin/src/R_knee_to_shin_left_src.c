/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:33:11 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_knee_to_shin_left_src.h"

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
  double t1623;
  double t2221;
  double t2715;
  double t2452;
  double t2776;
  double t2101;
  double t3450;
  double t3624;
  double t3773;
  double t2596;
  double t2787;
  double t2942;
  double t3774;
  double t1487;
  double t4274;
  double t4294;
  double t4317;
  double t1637;
  double t1657;
  double t1844;
  double t3278;
  double t3848;
  double t4095;
  double t4105;
  double t4138;
  double t4231;
  double t4396;
  double t4441;
  double t4258;
  double t4400;
  double t4407;
  double t1461;
  double t4446;
  double t4454;
  double t4471;
  double t81;
  double t4746;
  double t4783;
  double t4792;
  double t4653;
  double t4683;
  double t4689;
  double t4895;
  double t4996;
  double t4997;
  double t4652;
  double t4740;
  double t4797;
  double t4799;
  double t4823;
  double t4832;
  double t4565;
  double t4834;
  double t5042;
  double t5048;
  double t5080;
  double t5092;
  double t5107;
  double t5319;
  double t5335;
  double t5349;
  double t5210;
  double t5232;
  double t5244;
  double t5250;
  double t5252;
  double t5296;
  double t5302;
  double t5352;
  double t5362;
  double t5421;
  double t5434;
  double t5447;
  double t4411;
  double t4520;
  double t4529;
  double t4580;
  double t4585;
  double t4601;
  double t5077;
  double t5125;
  double t5137;
  double t5170;
  double t5171;
  double t5176;
  double t5393;
  double t5448;
  double t5470;
  double t5494;
  double t5497;
  double t5507;
  t1623 = Cos(var1[3]);
  t2221 = Cos(var1[5]);
  t2715 = Sin(var1[4]);
  t2452 = Sin(var1[3]);
  t2776 = Sin(var1[5]);
  t2101 = Cos(var1[6]);
  t3450 = t1623*t2221*t2715;
  t3624 = t2452*t2776;
  t3773 = t3450 + t3624;
  t2596 = -1.*t2221*t2452;
  t2787 = t1623*t2715*t2776;
  t2942 = t2596 + t2787;
  t3774 = Sin(var1[6]);
  t1487 = Cos(var1[8]);
  t4274 = t2101*t3773;
  t4294 = -1.*t2942*t3774;
  t4317 = t4274 + t4294;
  t1637 = Cos(var1[4]);
  t1657 = Cos(var1[7]);
  t1844 = t1623*t1637*t1657;
  t3278 = t2101*t2942;
  t3848 = t3773*t3774;
  t4095 = t3278 + t3848;
  t4105 = Sin(var1[7]);
  t4138 = t4095*t4105;
  t4231 = t1844 + t4138;
  t4396 = Sin(var1[8]);
  t4441 = Cos(var1[9]);
  t4258 = t1487*t4231;
  t4400 = t4317*t4396;
  t4407 = t4258 + t4400;
  t1461 = Sin(var1[9]);
  t4446 = t1487*t4317;
  t4454 = -1.*t4231*t4396;
  t4471 = t4446 + t4454;
  t81 = Cos(var1[10]);
  t4746 = t2221*t2452*t2715;
  t4783 = -1.*t1623*t2776;
  t4792 = t4746 + t4783;
  t4653 = t1623*t2221;
  t4683 = t2452*t2715*t2776;
  t4689 = t4653 + t4683;
  t4895 = t2101*t4792;
  t4996 = -1.*t4689*t3774;
  t4997 = t4895 + t4996;
  t4652 = t1637*t1657*t2452;
  t4740 = t2101*t4689;
  t4797 = t4792*t3774;
  t4799 = t4740 + t4797;
  t4823 = t4799*t4105;
  t4832 = t4652 + t4823;
  t4565 = Sin(var1[10]);
  t4834 = t1487*t4832;
  t5042 = t4997*t4396;
  t5048 = t4834 + t5042;
  t5080 = t1487*t4997;
  t5092 = -1.*t4832*t4396;
  t5107 = t5080 + t5092;
  t5319 = t1637*t2221*t2101;
  t5335 = -1.*t1637*t2776*t3774;
  t5349 = t5319 + t5335;
  t5210 = -1.*t1657*t2715;
  t5232 = t1637*t2101*t2776;
  t5244 = t1637*t2221*t3774;
  t5250 = t5232 + t5244;
  t5252 = t5250*t4105;
  t5296 = t5210 + t5252;
  t5302 = t1487*t5296;
  t5352 = t5349*t4396;
  t5362 = t5302 + t5352;
  t5421 = t1487*t5349;
  t5434 = -1.*t5296*t4396;
  t5447 = t5421 + t5434;
  t4411 = -1.*t1461*t4407;
  t4520 = t4441*t4471;
  t4529 = t4411 + t4520;
  t4580 = t4441*t4407;
  t4585 = t1461*t4471;
  t4601 = t4580 + t4585;
  t5077 = -1.*t1461*t5048;
  t5125 = t4441*t5107;
  t5137 = t5077 + t5125;
  t5170 = t4441*t5048;
  t5171 = t1461*t5107;
  t5176 = t5170 + t5171;
  t5393 = -1.*t1461*t5362;
  t5448 = t4441*t5447;
  t5470 = t5393 + t5448;
  t5494 = t4441*t5362;
  t5497 = t1461*t5447;
  t5507 = t5494 + t5497;
  p_output1[0]=t4565*t4601 - 1.*t4529*t81;
  p_output1[1]=t4565*t5176 - 1.*t5137*t81;
  p_output1[2]=t4565*t5507 - 1.*t5470*t81;
  p_output1[3]=t4529*t4565 + t4601*t81;
  p_output1[4]=t4565*t5137 + t5176*t81;
  p_output1[5]=t4565*t5470 + t5507*t81;
  p_output1[6]=-1.*t1657*t4095 + t1623*t1637*t4105;
  p_output1[7]=t1637*t2452*t4105 - 1.*t1657*t4799;
  p_output1[8]=-1.*t2715*t4105 - 1.*t1657*t5250;
}



void R_knee_to_shin_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
