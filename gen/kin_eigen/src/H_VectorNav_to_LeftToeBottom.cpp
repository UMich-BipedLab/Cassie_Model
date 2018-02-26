/*
 * Automatically Generated from Mathematica.
 * Mon 26 Feb 2018 15:42:56 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_VectorNav_to_LeftToeBottom.h"

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
static void output1(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  double t296;
  double t1100;
  double t1050;
  double t1052;
  double t1101;
  double t1577;
  double t1090;
  double t1105;
  double t1214;
  double t996;
  double t1686;
  double t1886;
  double t1911;
  double t2230;
  double t1431;
  double t1966;
  double t2099;
  double t932;
  double t2382;
  double t2602;
  double t2636;
  double t2990;
  double t2183;
  double t2690;
  double t2771;
  double t899;
  double t3085;
  double t3182;
  double t3274;
  double t291;
  double t46;
  double t566;
  double t3990;
  double t3991;
  double t4045;
  double t4095;
  double t4104;
  double t4199;
  double t4093;
  double t4253;
  double t4254;
  double t4567;
  double t4583;
  double t4630;
  double t4320;
  double t4635;
  double t4649;
  double t4703;
  double t5097;
  double t5172;
  double t4650;
  double t5238;
  double t5294;
  double t5620;
  double t5959;
  double t5967;
  double t8004;
  double t8006;
  double t8024;
  double t8034;
  double t8036;
  double t8039;
  double t8032;
  double t8072;
  double t8090;
  double t8108;
  double t8111;
  double t8119;
  double t8106;
  double t8140;
  double t8152;
  double t8161;
  double t8162;
  double t8173;
  double t8154;
  double t8174;
  double t8177;
  double t8186;
  double t8187;
  double t8192;
  double t2865;
  double t3304;
  double t3315;
  double t3391;
  double t3412;
  double t3686;
  double t5588;
  double t6996;
  double t7918;
  double t7978;
  double t7982;
  double t7985;
  double t8178;
  double t8193;
  double t8197;
  double t8202;
  double t8209;
  double t8210;
  double t8258;
  double t8259;
  double t8291;
  double t8292;
  double t8302;
  double t8303;
  double t8314;
  double t8315;
  double t8251;
  double t8252;
  double t8274;
  double t8276;
  double t8277;
  double t8278;
  double t8280;
  double t8261;
  double t8262;
  double t8263;
  double t8284;
  double t8286;
  double t8288;
  double t8293;
  double t8294;
  double t8295;
  double t8297;
  double t8298;
  double t8299;
  double t8304;
  double t8305;
  double t8308;
  double t8310;
  double t8311;
  double t8312;
  double t8316;
  double t8317;
  double t8318;
  double t8320;
  double t8321;
  double t8322;
  double t8331;
  double t8332;
  double t8333;
  double t8336;
  double t8337;
  double t8338;
  t296 = Cos(var1[1]);
  t1100 = Cos(var1[3]);
  t1050 = Cos(var1[2]);
  t1052 = Sin(var1[3]);
  t1101 = Sin(var1[2]);
  t1577 = Cos(var1[4]);
  t1090 = -1.*t296*t1050*t1052;
  t1105 = -1.*t1100*t296*t1101;
  t1214 = t1090 + t1105;
  t996 = Sin(var1[4]);
  t1686 = t1100*t296*t1050;
  t1886 = -1.*t296*t1052*t1101;
  t1911 = t1686 + t1886;
  t2230 = Cos(var1[5]);
  t1431 = t996*t1214;
  t1966 = t1577*t1911;
  t2099 = t1431 + t1966;
  t932 = Sin(var1[5]);
  t2382 = t1577*t1214;
  t2602 = -1.*t996*t1911;
  t2636 = t2382 + t2602;
  t2990 = Cos(var1[6]);
  t2183 = -1.*t932*t2099;
  t2690 = t2230*t2636;
  t2771 = t2183 + t2690;
  t899 = Sin(var1[6]);
  t3085 = t2230*t2099;
  t3182 = t932*t2636;
  t3274 = t3085 + t3182;
  t291 = Cos(var1[0]);
  t46 = Sin(var1[1]);
  t566 = Sin(var1[0]);
  t3990 = t291*t1050*t46;
  t3991 = -1.*t566*t1101;
  t4045 = t3990 + t3991;
  t4095 = -1.*t1050*t566;
  t4104 = -1.*t291*t46*t1101;
  t4199 = t4095 + t4104;
  t4093 = -1.*t1052*t4045;
  t4253 = t1100*t4199;
  t4254 = t4093 + t4253;
  t4567 = t1100*t4045;
  t4583 = t1052*t4199;
  t4630 = t4567 + t4583;
  t4320 = t996*t4254;
  t4635 = t1577*t4630;
  t4649 = t4320 + t4635;
  t4703 = t1577*t4254;
  t5097 = -1.*t996*t4630;
  t5172 = t4703 + t5097;
  t4650 = -1.*t932*t4649;
  t5238 = t2230*t5172;
  t5294 = t4650 + t5238;
  t5620 = t2230*t4649;
  t5959 = t932*t5172;
  t5967 = t5620 + t5959;
  t8004 = t1050*t566*t46;
  t8006 = t291*t1101;
  t8024 = t8004 + t8006;
  t8034 = t291*t1050;
  t8036 = -1.*t566*t46*t1101;
  t8039 = t8034 + t8036;
  t8032 = -1.*t1052*t8024;
  t8072 = t1100*t8039;
  t8090 = t8032 + t8072;
  t8108 = t1100*t8024;
  t8111 = t1052*t8039;
  t8119 = t8108 + t8111;
  t8106 = t996*t8090;
  t8140 = t1577*t8119;
  t8152 = t8106 + t8140;
  t8161 = t1577*t8090;
  t8162 = -1.*t996*t8119;
  t8173 = t8161 + t8162;
  t8154 = -1.*t932*t8152;
  t8174 = t2230*t8173;
  t8177 = t8154 + t8174;
  t8186 = t2230*t8152;
  t8187 = t932*t8173;
  t8192 = t8186 + t8187;
  t2865 = t899*t2771;
  t3304 = t2990*t3274;
  t3315 = t2865 + t3304;
  t3391 = t2990*t2771;
  t3412 = -1.*t899*t3274;
  t3686 = t3391 + t3412;
  t5588 = t899*t5294;
  t6996 = t2990*t5967;
  t7918 = t5588 + t6996;
  t7978 = t2990*t5294;
  t7982 = -1.*t899*t5967;
  t7985 = t7978 + t7982;
  t8178 = t899*t8177;
  t8193 = t2990*t8192;
  t8197 = t8178 + t8193;
  t8202 = t2990*t8177;
  t8209 = -1.*t899*t8192;
  t8210 = t8202 + t8209;
  t8258 = -1.*t1100;
  t8259 = 1. + t8258;
  t8291 = -1.*t1577;
  t8292 = 1. + t8291;
  t8302 = -1.*t2230;
  t8303 = 1. + t8302;
  t8314 = -1.*t2990;
  t8315 = 1. + t8314;
  t8251 = -1.*t296;
  t8252 = 1. + t8251;
  t8274 = -1.*t1050;
  t8276 = 1. + t8274;
  t8277 = -0.049*t8276;
  t8278 = -0.09*t1101;
  t8280 = 0. + t8277 + t8278;
  t8261 = -0.049*t8259;
  t8262 = -0.21*t1052;
  t8263 = 0. + t8261 + t8262;
  t8284 = -0.21*t8259;
  t8286 = 0.049*t1052;
  t8288 = 0. + t8284 + t8286;
  t8293 = -0.2707*t8292;
  t8294 = 0.0016*t996;
  t8295 = 0. + t8293 + t8294;
  t8297 = -0.0016*t8292;
  t8298 = -0.2707*t996;
  t8299 = 0. + t8297 + t8298;
  t8304 = 0.0184*t8303;
  t8305 = -0.7055*t932;
  t8308 = 0. + t8304 + t8305;
  t8310 = -0.7055*t8303;
  t8311 = -0.0184*t932;
  t8312 = 0. + t8310 + t8311;
  t8316 = -1.1135*t8315;
  t8317 = 0.0216*t899;
  t8318 = 0. + t8316 + t8317;
  t8320 = -0.0216*t8315;
  t8321 = -1.1135*t899;
  t8322 = 0. + t8320 + t8321;
  t8331 = 0.135*t8252;
  t8332 = 0.049*t46;
  t8333 = 0. + t8331 + t8332;
  t8336 = -0.09*t8276;
  t8337 = 0.049*t1101;
  t8338 = 0. + t8336 + t8337;

  p_output1(0)=0. + t46;
  p_output1(1)=0. + t291*t296;
  p_output1(2)=0. + t296*t566;
  p_output1(3)=0.;
  p_output1(4)=0. + 0.642788*t3315 + 0.766044*t3686;
  p_output1(5)=0. - 0.642788*t7918 - 0.766044*t7985;
  p_output1(6)=0. - 0.642788*t8197 - 0.766044*t8210;
  p_output1(7)=0.;
  p_output1(8)=0. - 0.766044*t3315 + 0.642788*t3686;
  p_output1(9)=0. + 0.766044*t7918 - 0.642788*t7985;
  p_output1(10)=0. + 0.766044*t8197 - 0.642788*t8210;
  p_output1(11)=0.;
  p_output1(12)=-0.03155 + 0.0306*t3315 - 1.1312*t3686 + 0.004500000000000004*t46 - 0.049*t8252 + t1050*t296*t8263 + t296*t8280 - 1.*t1101*t296*t8288 + t1214*t8295 + t1911*t8299 + t2099*t8308 + t2636*t8312 + t2771*t8318 + t3274*t8322;
  p_output1(13)=0. - 0.135*(1. - 1.*t291) - 0.1305*t291*t296 - 0.0306*t7918 + 1.1312*t7985 - 1.*t4045*t8263 - 1.*t291*t46*t8280 - 1.*t4199*t8288 - 1.*t4254*t8295 - 1.*t4630*t8299 - 1.*t4649*t8308 - 1.*t5172*t8312 - 1.*t5294*t8318 - 1.*t5967*t8322 - 1.*t291*t8333 + t566*t8338;
  p_output1(14)=-0.07996 + 0.135*t566 - 0.1305*t296*t566 - 0.0306*t8197 + 1.1312*t8210 - 1.*t8024*t8263 - 1.*t46*t566*t8280 - 1.*t8039*t8288 - 1.*t8090*t8295 - 1.*t8119*t8299 - 1.*t8152*t8308 - 1.*t8173*t8312 - 1.*t8177*t8318 - 1.*t8192*t8322 - 1.*t566*t8333 - 1.*t291*t8338;
  p_output1(15)=1.;
}


       
void H_VectorNav_to_LeftToeBottom(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
