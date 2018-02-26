/*
 * Automatically Generated from Mathematica.
 * Mon 26 Feb 2018 15:42:31 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_VectorNav_to_LeftToeBottom_src.h"

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
  double t1692;
  double t4961;
  double t4920;
  double t4957;
  double t4964;
  double t4980;
  double t4959;
  double t4968;
  double t4972;
  double t4915;
  double t4983;
  double t4984;
  double t4987;
  double t5002;
  double t4977;
  double t4996;
  double t4997;
  double t4905;
  double t5021;
  double t5024;
  double t5028;
  double t5041;
  double t5001;
  double t5034;
  double t5036;
  double t4887;
  double t5044;
  double t5047;
  double t5049;
  double t1635;
  double t258;
  double t4872;
  double t5065;
  double t5066;
  double t5068;
  double t5072;
  double t5076;
  double t5079;
  double t5069;
  double t5082;
  double t5083;
  double t5086;
  double t5087;
  double t5092;
  double t5085;
  double t5096;
  double t5099;
  double t5103;
  double t5105;
  double t5106;
  double t5102;
  double t5107;
  double t5110;
  double t5112;
  double t5113;
  double t5115;
  double t5126;
  double t5127;
  double t5128;
  double t5130;
  double t5131;
  double t5132;
  double t5129;
  double t5133;
  double t5134;
  double t5136;
  double t5137;
  double t5138;
  double t5135;
  double t5139;
  double t5140;
  double t5142;
  double t5143;
  double t5144;
  double t5141;
  double t5145;
  double t5146;
  double t5148;
  double t5149;
  double t5150;
  double t5038;
  double t5050;
  double t5051;
  double t5054;
  double t5056;
  double t5057;
  double t5111;
  double t5116;
  double t5117;
  double t5120;
  double t5121;
  double t5122;
  double t5147;
  double t5151;
  double t5152;
  double t5154;
  double t5155;
  double t5156;
  t1692 = Cos(var1[1]);
  t4961 = Cos(var1[3]);
  t4920 = Cos(var1[2]);
  t4957 = Sin(var1[3]);
  t4964 = Sin(var1[2]);
  t4980 = Cos(var1[4]);
  t4959 = -1.*t1692*t4920*t4957;
  t4968 = -1.*t4961*t1692*t4964;
  t4972 = t4959 + t4968;
  t4915 = Sin(var1[4]);
  t4983 = t4961*t1692*t4920;
  t4984 = -1.*t1692*t4957*t4964;
  t4987 = t4983 + t4984;
  t5002 = Cos(var1[5]);
  t4977 = t4915*t4972;
  t4996 = t4980*t4987;
  t4997 = t4977 + t4996;
  t4905 = Sin(var1[5]);
  t5021 = t4980*t4972;
  t5024 = -1.*t4915*t4987;
  t5028 = t5021 + t5024;
  t5041 = Cos(var1[6]);
  t5001 = -1.*t4905*t4997;
  t5034 = t5002*t5028;
  t5036 = t5001 + t5034;
  t4887 = Sin(var1[6]);
  t5044 = t5002*t4997;
  t5047 = t4905*t5028;
  t5049 = t5044 + t5047;
  t1635 = Cos(var1[0]);
  t258 = Sin(var1[1]);
  t4872 = Sin(var1[0]);
  t5065 = t1635*t4920*t258;
  t5066 = -1.*t4872*t4964;
  t5068 = t5065 + t5066;
  t5072 = -1.*t4920*t4872;
  t5076 = -1.*t1635*t258*t4964;
  t5079 = t5072 + t5076;
  t5069 = -1.*t4957*t5068;
  t5082 = t4961*t5079;
  t5083 = t5069 + t5082;
  t5086 = t4961*t5068;
  t5087 = t4957*t5079;
  t5092 = t5086 + t5087;
  t5085 = t4915*t5083;
  t5096 = t4980*t5092;
  t5099 = t5085 + t5096;
  t5103 = t4980*t5083;
  t5105 = -1.*t4915*t5092;
  t5106 = t5103 + t5105;
  t5102 = -1.*t4905*t5099;
  t5107 = t5002*t5106;
  t5110 = t5102 + t5107;
  t5112 = t5002*t5099;
  t5113 = t4905*t5106;
  t5115 = t5112 + t5113;
  t5126 = t4920*t4872*t258;
  t5127 = t1635*t4964;
  t5128 = t5126 + t5127;
  t5130 = t1635*t4920;
  t5131 = -1.*t4872*t258*t4964;
  t5132 = t5130 + t5131;
  t5129 = -1.*t4957*t5128;
  t5133 = t4961*t5132;
  t5134 = t5129 + t5133;
  t5136 = t4961*t5128;
  t5137 = t4957*t5132;
  t5138 = t5136 + t5137;
  t5135 = t4915*t5134;
  t5139 = t4980*t5138;
  t5140 = t5135 + t5139;
  t5142 = t4980*t5134;
  t5143 = -1.*t4915*t5138;
  t5144 = t5142 + t5143;
  t5141 = -1.*t4905*t5140;
  t5145 = t5002*t5144;
  t5146 = t5141 + t5145;
  t5148 = t5002*t5140;
  t5149 = t4905*t5144;
  t5150 = t5148 + t5149;
  t5038 = t4887*t5036;
  t5050 = t5041*t5049;
  t5051 = t5038 + t5050;
  t5054 = t5041*t5036;
  t5056 = -1.*t4887*t5049;
  t5057 = t5054 + t5056;
  t5111 = t4887*t5110;
  t5116 = t5041*t5115;
  t5117 = t5111 + t5116;
  t5120 = t5041*t5110;
  t5121 = -1.*t4887*t5115;
  t5122 = t5120 + t5121;
  t5147 = t4887*t5146;
  t5151 = t5041*t5150;
  t5152 = t5147 + t5151;
  t5154 = t5041*t5146;
  t5155 = -1.*t4887*t5150;
  t5156 = t5154 + t5155;
  p_output1[0]=0. + t258;
  p_output1[1]=0. + t1635*t1692;
  p_output1[2]=0. + t1692*t4872;
  p_output1[3]=0. + 0.642788*t5051 + 0.766044*t5057;
  p_output1[4]=0. - 0.642788*t5117 - 0.766044*t5122;
  p_output1[5]=0. - 0.642788*t5152 - 0.766044*t5156;
  p_output1[6]=0. - 0.766044*t5051 + 0.642788*t5057;
  p_output1[7]=0. + 0.766044*t5117 - 0.642788*t5122;
  p_output1[8]=0. + 0.766044*t5152 - 0.642788*t5156;
}



void R_VectorNav_to_LeftToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
