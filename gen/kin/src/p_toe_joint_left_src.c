/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:22 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_toe_joint_left_src.h"

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
  double t4859;
  double t4855;
  double t4860;
  double t4856;
  double t4861;
  double t4744;
  double t4858;
  double t4862;
  double t4869;
  double t4874;
  double t4877;
  double t4879;
  double t4881;
  double t4893;
  double t4898;
  double t4900;
  double t4902;
  double t4889;
  double t4890;
  double t4891;
  double t4907;
  double t4928;
  double t4930;
  double t4931;
  double t4942;
  double t4925;
  double t4926;
  double t4927;
  double t4949;
  double t4950;
  double t4951;
  double t4961;
  double t4965;
  double t4967;
  double t4970;
  double t4976;
  double t4977;
  double t4978;
  double t4988;
  double t4990;
  double t4992;
  double t4995;
  double t4996;
  double t4997;
  double t5000;
  double t5004;
  double t5005;
  double t5006;
  double t5015;
  double t5016;
  double t5019;
  double t5023;
  double t5024;
  double t5025;
  double t5029;
  double t5035;
  double t5036;
  double t5038;
  double t5046;
  double t5047;
  double t5048;
  double t5051;
  double t5052;
  double t5054;
  double t5057;
  double t5061;
  double t5062;
  double t5064;
  double t5072;
  double t5073;
  double t5075;
  double t4745;
  double t4849;
  double t4852;
  double t4853;
  double t4884;
  double t4885;
  double t5088;
  double t5089;
  double t5090;
  double t5092;
  double t5093;
  double t5094;
  double t4901;
  double t4903;
  double t4905;
  double t4908;
  double t4909;
  double t4915;
  double t5096;
  double t5097;
  double t5098;
  double t4939;
  double t4944;
  double t4946;
  double t4952;
  double t4953;
  double t4954;
  double t4968;
  double t4973;
  double t4974;
  double t5108;
  double t5109;
  double t5110;
  double t5113;
  double t5114;
  double t5116;
  double t4981;
  double t4985;
  double t4987;
  double t4998;
  double t5002;
  double t5003;
  double t5119;
  double t5120;
  double t5121;
  double t5123;
  double t5125;
  double t5126;
  double t5009;
  double t5011;
  double t5012;
  double t5026;
  double t5031;
  double t5032;
  double t5129;
  double t5130;
  double t5132;
  double t5135;
  double t5137;
  double t5138;
  double t5040;
  double t5043;
  double t5044;
  double t5055;
  double t5058;
  double t5060;
  double t5141;
  double t5142;
  double t5143;
  double t5145;
  double t5146;
  double t5147;
  double t5066;
  double t5068;
  double t5069;
  double t5149;
  double t5150;
  double t5151;
  double t5153;
  double t5154;
  double t5155;
  double t5168;
  double t5169;
  double t5170;
  double t5177;
  double t5178;
  double t5179;
  double t5181;
  double t5182;
  double t5183;
  double t5185;
  double t5186;
  double t5187;
  double t5189;
  double t5190;
  double t5191;
  double t5193;
  double t5194;
  double t5195;
  double t5197;
  double t5198;
  double t5199;
  double t5201;
  double t5202;
  double t5203;
  double t5205;
  double t5206;
  double t5207;
  double t5209;
  double t5210;
  double t5211;
  double t5213;
  double t5214;
  double t5215;
  t4859 = Cos(var1[3]);
  t4855 = Cos(var1[5]);
  t4860 = Sin(var1[4]);
  t4856 = Sin(var1[3]);
  t4861 = Sin(var1[5]);
  t4744 = Cos(var1[6]);
  t4858 = -1.*t4855*t4856;
  t4862 = t4859*t4860*t4861;
  t4869 = t4858 + t4862;
  t4874 = t4859*t4855*t4860;
  t4877 = t4856*t4861;
  t4879 = t4874 + t4877;
  t4881 = Sin(var1[6]);
  t4893 = Cos(var1[7]);
  t4898 = -1.*t4893;
  t4900 = 1. + t4898;
  t4902 = Sin(var1[7]);
  t4889 = t4744*t4869;
  t4890 = t4879*t4881;
  t4891 = t4889 + t4890;
  t4907 = Cos(var1[4]);
  t4928 = Cos(var1[8]);
  t4930 = -1.*t4928;
  t4931 = 1. + t4930;
  t4942 = Sin(var1[8]);
  t4925 = t4859*t4907*t4893;
  t4926 = t4891*t4902;
  t4927 = t4925 + t4926;
  t4949 = t4744*t4879;
  t4950 = -1.*t4869*t4881;
  t4951 = t4949 + t4950;
  t4961 = Cos(var1[9]);
  t4965 = -1.*t4961;
  t4967 = 1. + t4965;
  t4970 = Sin(var1[9]);
  t4976 = t4928*t4927;
  t4977 = t4951*t4942;
  t4978 = t4976 + t4977;
  t4988 = t4928*t4951;
  t4990 = -1.*t4927*t4942;
  t4992 = t4988 + t4990;
  t4995 = Cos(var1[10]);
  t4996 = -1.*t4995;
  t4997 = 1. + t4996;
  t5000 = Sin(var1[10]);
  t5004 = -1.*t4970*t4978;
  t5005 = t4961*t4992;
  t5006 = t5004 + t5005;
  t5015 = t4961*t4978;
  t5016 = t4970*t4992;
  t5019 = t5015 + t5016;
  t5023 = Cos(var1[11]);
  t5024 = -1.*t5023;
  t5025 = 1. + t5024;
  t5029 = Sin(var1[11]);
  t5035 = t5000*t5006;
  t5036 = t4995*t5019;
  t5038 = t5035 + t5036;
  t5046 = t4995*t5006;
  t5047 = -1.*t5000*t5019;
  t5048 = t5046 + t5047;
  t5051 = Cos(var1[12]);
  t5052 = -1.*t5051;
  t5054 = 1. + t5052;
  t5057 = Sin(var1[12]);
  t5061 = -1.*t5029*t5038;
  t5062 = t5023*t5048;
  t5064 = t5061 + t5062;
  t5072 = t5023*t5038;
  t5073 = t5029*t5048;
  t5075 = t5072 + t5073;
  t4745 = -1.*t4744;
  t4849 = 1. + t4745;
  t4852 = 0.135*t4849;
  t4853 = 0. + t4852;
  t4884 = -0.135*t4881;
  t4885 = 0. + t4884;
  t5088 = t4859*t4855;
  t5089 = t4856*t4860*t4861;
  t5090 = t5088 + t5089;
  t5092 = t4855*t4856*t4860;
  t5093 = -1.*t4859*t4861;
  t5094 = t5092 + t5093;
  t4901 = 0.135*t4900;
  t4903 = 0.049*t4902;
  t4905 = 0. + t4901 + t4903;
  t4908 = -0.049*t4900;
  t4909 = 0.135*t4902;
  t4915 = 0. + t4908 + t4909;
  t5096 = t4744*t5090;
  t5097 = t5094*t4881;
  t5098 = t5096 + t5097;
  t4939 = -0.049*t4931;
  t4944 = -0.09*t4942;
  t4946 = 0. + t4939 + t4944;
  t4952 = -0.09*t4931;
  t4953 = 0.049*t4942;
  t4954 = 0. + t4952 + t4953;
  t4968 = -0.049*t4967;
  t4973 = -0.21*t4970;
  t4974 = 0. + t4968 + t4973;
  t5108 = t4907*t4893*t4856;
  t5109 = t5098*t4902;
  t5110 = t5108 + t5109;
  t5113 = t4744*t5094;
  t5114 = -1.*t5090*t4881;
  t5116 = t5113 + t5114;
  t4981 = -0.21*t4967;
  t4985 = 0.049*t4970;
  t4987 = 0. + t4981 + t4985;
  t4998 = -0.2707*t4997;
  t5002 = 0.0016*t5000;
  t5003 = 0. + t4998 + t5002;
  t5119 = t4928*t5110;
  t5120 = t5116*t4942;
  t5121 = t5119 + t5120;
  t5123 = t4928*t5116;
  t5125 = -1.*t5110*t4942;
  t5126 = t5123 + t5125;
  t5009 = -0.0016*t4997;
  t5011 = -0.2707*t5000;
  t5012 = 0. + t5009 + t5011;
  t5026 = 0.0184*t5025;
  t5031 = -0.7055*t5029;
  t5032 = 0. + t5026 + t5031;
  t5129 = -1.*t4970*t5121;
  t5130 = t4961*t5126;
  t5132 = t5129 + t5130;
  t5135 = t4961*t5121;
  t5137 = t4970*t5126;
  t5138 = t5135 + t5137;
  t5040 = -0.7055*t5025;
  t5043 = -0.0184*t5029;
  t5044 = 0. + t5040 + t5043;
  t5055 = -1.1135*t5054;
  t5058 = 0.0216*t5057;
  t5060 = 0. + t5055 + t5058;
  t5141 = t5000*t5132;
  t5142 = t4995*t5138;
  t5143 = t5141 + t5142;
  t5145 = t4995*t5132;
  t5146 = -1.*t5000*t5138;
  t5147 = t5145 + t5146;
  t5066 = -0.0216*t5054;
  t5068 = -1.1135*t5057;
  t5069 = 0. + t5066 + t5068;
  t5149 = -1.*t5029*t5143;
  t5150 = t5023*t5147;
  t5151 = t5149 + t5150;
  t5153 = t5023*t5143;
  t5154 = t5029*t5147;
  t5155 = t5153 + t5154;
  t5168 = t4907*t4744*t4861;
  t5169 = t4907*t4855*t4881;
  t5170 = t5168 + t5169;
  t5177 = -1.*t4893*t4860;
  t5178 = t5170*t4902;
  t5179 = t5177 + t5178;
  t5181 = t4907*t4855*t4744;
  t5182 = -1.*t4907*t4861*t4881;
  t5183 = t5181 + t5182;
  t5185 = t4928*t5179;
  t5186 = t5183*t4942;
  t5187 = t5185 + t5186;
  t5189 = t4928*t5183;
  t5190 = -1.*t5179*t4942;
  t5191 = t5189 + t5190;
  t5193 = -1.*t4970*t5187;
  t5194 = t4961*t5191;
  t5195 = t5193 + t5194;
  t5197 = t4961*t5187;
  t5198 = t4970*t5191;
  t5199 = t5197 + t5198;
  t5201 = t5000*t5195;
  t5202 = t4995*t5199;
  t5203 = t5201 + t5202;
  t5205 = t4995*t5195;
  t5206 = -1.*t5000*t5199;
  t5207 = t5205 + t5206;
  t5209 = -1.*t5029*t5203;
  t5210 = t5023*t5207;
  t5211 = t5209 + t5210;
  t5213 = t5023*t5203;
  t5214 = t5029*t5207;
  t5215 = t5213 + t5214;
  p_output1[0]=0. + t4853*t4869 + t4879*t4885 + t4891*t4905 + 0.1305*(t4891*t4893 - 1.*t4859*t4902*t4907) + t4859*t4907*t4915 + t4927*t4946 + t4951*t4954 + t4974*t4978 + t4987*t4992 + t5003*t5006 + t5012*t5019 + t5032*t5038 + t5044*t5048 + t5060*t5064 + t5069*t5075 - 0.0216*(t5057*t5064 + t5051*t5075) - 1.1135*(t5051*t5064 - 1.*t5057*t5075) + var1[0];
  p_output1[1]=0. + t4856*t4907*t4915 + t4853*t5090 + t4885*t5094 + t4905*t5098 + 0.1305*(-1.*t4856*t4902*t4907 + t4893*t5098) + t4946*t5110 + t4954*t5116 + t4974*t5121 + t4987*t5126 + t5003*t5132 + t5012*t5138 + t5032*t5143 + t5044*t5147 + t5060*t5151 + t5069*t5155 - 0.0216*(t5057*t5151 + t5051*t5155) - 1.1135*(t5051*t5151 - 1.*t5057*t5155) + var1[1];
  p_output1[2]=0. + t4853*t4861*t4907 + t4855*t4885*t4907 - 1.*t4860*t4915 + t4905*t5170 + 0.1305*(t4860*t4902 + t4893*t5170) + t4946*t5179 + t4954*t5183 + t4974*t5187 + t4987*t5191 + t5003*t5195 + t5012*t5199 + t5032*t5203 + t5044*t5207 + t5060*t5211 + t5069*t5215 - 0.0216*(t5057*t5211 + t5051*t5215) - 1.1135*(t5051*t5211 - 1.*t5057*t5215) + var1[2];
}



void p_toe_joint_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
