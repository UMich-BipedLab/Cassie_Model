/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:25:11 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_MultisenseIMU_to_LeftToeBottom.h"

#ifdef _MSC_VER
  #define INLINE __forceinline /* use __forceinline (VC++ specific) */
#else
  #define INLINE inline        /* use standard inline */
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
static void output1(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  double t115;
  double t323;
  double t753;
  double t2118;
  double t2147;
  double t2199;
  double t2339;
  double t2495;
  double t2940;
  double t3224;
  double t3244;
  double t3312;
  double t3414;
  double t3459;
  double t3466;
  double t3651;
  double t3695;
  double t3913;
  double t4075;
  double t4260;
  double t4342;
  double t4391;
  double t4531;
  double t4779;
  double t4835;
  double t5068;
  double t5116;
  double t5148;
  double t5189;
  double t5209;
  double t5225;
  double t5401;
  double t5795;
  double t5830;
  double t5886;
  double t6156;
  double t6203;
  double t6216;
  double t6338;
  double t6346;
  double t6363;
  double t6461;
  double t6658;
  double t6678;
  double t6683;
  double t6794;
  double t6880;
  double t6903;
  double t409;
  double t578;
  double t637;
  double t949;
  double t1315;
  double t2231;
  double t2422;
  double t2436;
  double t2542;
  double t2753;
  double t2768;
  double t3292;
  double t3314;
  double t3397;
  double t3500;
  double t3589;
  double t3596;
  double t4354;
  double t4414;
  double t4506;
  double t7316;
  double t7323;
  double t7326;
  double t7348;
  double t7366;
  double t7380;
  double t4911;
  double t5048;
  double t5052;
  double t5307;
  double t5426;
  double t5503;
  double t7400;
  double t7415;
  double t7432;
  double t7450;
  double t7460;
  double t7467;
  double t6050;
  double t6096;
  double t6153;
  double t6374;
  double t6520;
  double t6629;
  double t7475;
  double t7476;
  double t7481;
  double t7496;
  double t7500;
  double t7501;
  double t6755;
  double t6764;
  double t6777;
  double t7511;
  double t7512;
  double t7513;
  double t7524;
  double t7525;
  double t7528;
  double t7659;
  double t7665;
  double t7669;
  double t7674;
  double t7678;
  double t7680;
  double t7687;
  double t7690;
  double t7693;
  double t7716;
  double t7717;
  double t7719;
  double t7724;
  double t7726;
  double t7728;
  double t7736;
  double t7739;
  double t7742;
  t115 = Sin(var1[0]);
  t323 = Cos(var1[1]);
  t753 = Sin(var1[1]);
  t2118 = Cos(var1[2]);
  t2147 = -1.*t2118;
  t2199 = 1. + t2147;
  t2339 = Sin(var1[2]);
  t2495 = Cos(var1[0]);
  t2940 = Cos(var1[3]);
  t3224 = -1.*t2940;
  t3244 = 1. + t3224;
  t3312 = Sin(var1[3]);
  t3414 = t2118*t115*t753;
  t3459 = t2495*t2339;
  t3466 = t3414 + t3459;
  t3651 = t2495*t2118;
  t3695 = -1.*t115*t753*t2339;
  t3913 = t3651 + t3695;
  t4075 = Cos(var1[4]);
  t4260 = -1.*t4075;
  t4342 = 1. + t4260;
  t4391 = Sin(var1[4]);
  t4531 = -1.*t3312*t3466;
  t4779 = t2940*t3913;
  t4835 = t4531 + t4779;
  t5068 = t2940*t3466;
  t5116 = t3312*t3913;
  t5148 = t5068 + t5116;
  t5189 = Cos(var1[5]);
  t5209 = -1.*t5189;
  t5225 = 1. + t5209;
  t5401 = Sin(var1[5]);
  t5795 = t4391*t4835;
  t5830 = t4075*t5148;
  t5886 = t5795 + t5830;
  t6156 = t4075*t4835;
  t6203 = -1.*t4391*t5148;
  t6216 = t6156 + t6203;
  t6338 = Cos(var1[6]);
  t6346 = -1.*t6338;
  t6363 = 1. + t6346;
  t6461 = Sin(var1[6]);
  t6658 = -1.*t5401*t5886;
  t6678 = t5189*t6216;
  t6683 = t6658 + t6678;
  t6794 = t5189*t5886;
  t6880 = t5401*t6216;
  t6903 = t6794 + t6880;
  t409 = -1.*t323;
  t578 = 1. + t409;
  t637 = 0.135*t578;
  t949 = 0.049*t753;
  t1315 = 0. + t637 + t949;
  t2231 = -0.049*t2199;
  t2422 = -0.09*t2339;
  t2436 = 0. + t2231 + t2422;
  t2542 = -0.09*t2199;
  t2753 = 0.049*t2339;
  t2768 = 0. + t2542 + t2753;
  t3292 = -0.049*t3244;
  t3314 = -0.21*t3312;
  t3397 = 0. + t3292 + t3314;
  t3500 = -0.21*t3244;
  t3589 = 0.049*t3312;
  t3596 = 0. + t3500 + t3589;
  t4354 = -0.2707*t4342;
  t4414 = 0.0016*t4391;
  t4506 = 0. + t4354 + t4414;
  t7316 = t2495*t2118*t753;
  t7323 = -1.*t115*t2339;
  t7326 = t7316 + t7323;
  t7348 = -1.*t2118*t115;
  t7366 = -1.*t2495*t753*t2339;
  t7380 = t7348 + t7366;
  t4911 = -0.0016*t4342;
  t5048 = -0.2707*t4391;
  t5052 = 0. + t4911 + t5048;
  t5307 = 0.0184*t5225;
  t5426 = -0.7055*t5401;
  t5503 = 0. + t5307 + t5426;
  t7400 = -1.*t3312*t7326;
  t7415 = t2940*t7380;
  t7432 = t7400 + t7415;
  t7450 = t2940*t7326;
  t7460 = t3312*t7380;
  t7467 = t7450 + t7460;
  t6050 = -0.7055*t5225;
  t6096 = -0.0184*t5401;
  t6153 = 0. + t6050 + t6096;
  t6374 = -1.1135*t6363;
  t6520 = 0.0216*t6461;
  t6629 = 0. + t6374 + t6520;
  t7475 = t4391*t7432;
  t7476 = t4075*t7467;
  t7481 = t7475 + t7476;
  t7496 = t4075*t7432;
  t7500 = -1.*t4391*t7467;
  t7501 = t7496 + t7500;
  t6755 = -0.0216*t6363;
  t6764 = -1.1135*t6461;
  t6777 = 0. + t6755 + t6764;
  t7511 = -1.*t5401*t7481;
  t7512 = t5189*t7501;
  t7513 = t7511 + t7512;
  t7524 = t5189*t7481;
  t7525 = t5401*t7501;
  t7528 = t7524 + t7525;
  t7659 = -1.*t323*t2118*t3312;
  t7665 = -1.*t2940*t323*t2339;
  t7669 = t7659 + t7665;
  t7674 = t2940*t323*t2118;
  t7678 = -1.*t323*t3312*t2339;
  t7680 = t7674 + t7678;
  t7687 = t4391*t7669;
  t7690 = t4075*t7680;
  t7693 = t7687 + t7690;
  t7716 = t4075*t7669;
  t7717 = -1.*t4391*t7680;
  t7719 = t7716 + t7717;
  t7724 = -1.*t5401*t7693;
  t7726 = t5189*t7719;
  t7728 = t7724 + t7726;
  t7736 = t5189*t7693;
  t7739 = t5401*t7719;
  t7742 = t7736 + t7739;

  p_output1(0)=0.24925 + 0.135*t115 - 1.*t115*t1315 - 1.*t2495*t2768 - 0.1305*t115*t323 - 1.*t3397*t3466 - 1.*t3596*t3913 - 1.*t4506*t4835 - 1.*t5052*t5148 - 1.*t5503*t5886 - 1.*t6153*t6216 - 1.*t6629*t6683 - 1.*t6777*t6903 - 0.0306*(t6461*t6683 + t6338*t6903) + 1.1312*(t6338*t6683 - 1.*t6461*t6903) - 1.*t115*t2436*t753;
  p_output1(1)=-0.0302 + 0.135*(1. - 1.*t2495) + t1315*t2495 - 1.*t115*t2768 + 0.1305*t2495*t323 + t3397*t7326 + t3596*t7380 + t4506*t7432 + t5052*t7467 + t5503*t7481 + t6153*t7501 + t6629*t7513 + t6777*t7528 + 0.0306*(t6461*t7513 + t6338*t7528) - 1.1312*(t6338*t7513 - 1.*t6461*t7528) + t2436*t2495*t753;
  p_output1(2)=-0.047 + t2436*t323 + t2118*t323*t3397 - 1.*t2339*t323*t3596 - 0.049*t578 + 0.004500000000000004*t753 + t4506*t7669 + t5052*t7680 + t5503*t7693 + t6153*t7719 + t6629*t7728 + t6777*t7742 + 0.0306*(t6461*t7728 + t6338*t7742) - 1.1312*(t6338*t7728 - 1.*t6461*t7742);
}


       
void p_MultisenseIMU_to_LeftToeBottom(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
