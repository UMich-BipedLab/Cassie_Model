/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:11:23 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_toe_joint_left_src.h"

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
  double t4581;
  double t4643;
  double t4669;
  double t4649;
  double t4679;
  double t4623;
  double t4716;
  double t4717;
  double t4721;
  double t4654;
  double t4705;
  double t4709;
  double t4744;
  double t4551;
  double t4774;
  double t4775;
  double t4781;
  double t4586;
  double t4587;
  double t4607;
  double t4711;
  double t4748;
  double t4752;
  double t4758;
  double t4765;
  double t4766;
  double t4783;
  double t4805;
  double t4770;
  double t4786;
  double t4788;
  double t2041;
  double t4810;
  double t4815;
  double t4817;
  double t4835;
  double t4794;
  double t4822;
  double t4825;
  double t2037;
  double t4836;
  double t4837;
  double t4838;
  double t1379;
  double t4901;
  double t4904;
  double t4906;
  double t4879;
  double t4880;
  double t4889;
  double t4926;
  double t4929;
  double t4930;
  double t4874;
  double t4895;
  double t4908;
  double t4909;
  double t4914;
  double t4917;
  double t4918;
  double t4932;
  double t4934;
  double t4936;
  double t4939;
  double t4940;
  double t4852;
  double t4935;
  double t4943;
  double t4945;
  double t4948;
  double t4949;
  double t4951;
  double t4996;
  double t4999;
  double t5003;
  double t4975;
  double t4977;
  double t4979;
  double t4987;
  double t4989;
  double t4990;
  double t4992;
  double t5006;
  double t5011;
  double t5014;
  double t5017;
  double t5018;
  double t5012;
  double t5028;
  double t5029;
  double t5037;
  double t5038;
  double t5044;
  double t4833;
  double t4841;
  double t4844;
  double t4853;
  double t4857;
  double t4861;
  double t4947;
  double t4952;
  double t4955;
  double t4961;
  double t4965;
  double t4969;
  double t5032;
  double t5050;
  double t5053;
  double t5056;
  double t5057;
  double t5058;
  double t5130;
  double t5135;
  double t5159;
  double t5162;
  double t5183;
  double t5184;
  double t5224;
  double t5226;
  double t5243;
  double t5247;
  double t5070;
  double t5072;
  double t5073;
  double t5116;
  double t5118;
  double t5119;
  double t5121;
  double t5126;
  double t5127;
  double t5139;
  double t5140;
  double t5141;
  double t5144;
  double t5145;
  double t5148;
  double t5167;
  double t5169;
  double t5172;
  double t5176;
  double t5177;
  double t5180;
  double t5192;
  double t5198;
  double t5201;
  double t5213;
  double t5215;
  double t5220;
  double t5229;
  double t5230;
  double t5233;
  double t5235;
  double t5239;
  double t5240;
  double t5248;
  double t5251;
  double t5255;
  double t5260;
  double t5261;
  double t5264;
  double t5078;
  double t5079;
  double t5082;
  double t5084;
  double t5088;
  double t5094;
  t4581 = Cos(var1[3]);
  t4643 = Cos(var1[5]);
  t4669 = Sin(var1[4]);
  t4649 = Sin(var1[3]);
  t4679 = Sin(var1[5]);
  t4623 = Cos(var1[6]);
  t4716 = t4581*t4643*t4669;
  t4717 = t4649*t4679;
  t4721 = t4716 + t4717;
  t4654 = -1.*t4643*t4649;
  t4705 = t4581*t4669*t4679;
  t4709 = t4654 + t4705;
  t4744 = Sin(var1[6]);
  t4551 = Cos(var1[8]);
  t4774 = t4623*t4721;
  t4775 = -1.*t4709*t4744;
  t4781 = t4774 + t4775;
  t4586 = Cos(var1[4]);
  t4587 = Cos(var1[7]);
  t4607 = t4581*t4586*t4587;
  t4711 = t4623*t4709;
  t4748 = t4721*t4744;
  t4752 = t4711 + t4748;
  t4758 = Sin(var1[7]);
  t4765 = t4752*t4758;
  t4766 = t4607 + t4765;
  t4783 = Sin(var1[8]);
  t4805 = Cos(var1[9]);
  t4770 = t4551*t4766;
  t4786 = t4781*t4783;
  t4788 = t4770 + t4786;
  t2041 = Sin(var1[9]);
  t4810 = t4551*t4781;
  t4815 = -1.*t4766*t4783;
  t4817 = t4810 + t4815;
  t4835 = Cos(var1[10]);
  t4794 = -1.*t2041*t4788;
  t4822 = t4805*t4817;
  t4825 = t4794 + t4822;
  t2037 = Sin(var1[10]);
  t4836 = t4805*t4788;
  t4837 = t2041*t4817;
  t4838 = t4836 + t4837;
  t1379 = Sin(var1[11]);
  t4901 = t4643*t4649*t4669;
  t4904 = -1.*t4581*t4679;
  t4906 = t4901 + t4904;
  t4879 = t4581*t4643;
  t4880 = t4649*t4669*t4679;
  t4889 = t4879 + t4880;
  t4926 = t4623*t4906;
  t4929 = -1.*t4889*t4744;
  t4930 = t4926 + t4929;
  t4874 = t4586*t4587*t4649;
  t4895 = t4623*t4889;
  t4908 = t4906*t4744;
  t4909 = t4895 + t4908;
  t4914 = t4909*t4758;
  t4917 = t4874 + t4914;
  t4918 = t4551*t4917;
  t4932 = t4930*t4783;
  t4934 = t4918 + t4932;
  t4936 = t4551*t4930;
  t4939 = -1.*t4917*t4783;
  t4940 = t4936 + t4939;
  t4852 = Cos(var1[11]);
  t4935 = -1.*t2041*t4934;
  t4943 = t4805*t4940;
  t4945 = t4935 + t4943;
  t4948 = t4805*t4934;
  t4949 = t2041*t4940;
  t4951 = t4948 + t4949;
  t4996 = t4586*t4643*t4623;
  t4999 = -1.*t4586*t4679*t4744;
  t5003 = t4996 + t4999;
  t4975 = -1.*t4587*t4669;
  t4977 = t4586*t4623*t4679;
  t4979 = t4586*t4643*t4744;
  t4987 = t4977 + t4979;
  t4989 = t4987*t4758;
  t4990 = t4975 + t4989;
  t4992 = t4551*t4990;
  t5006 = t5003*t4783;
  t5011 = t4992 + t5006;
  t5014 = t4551*t5003;
  t5017 = -1.*t4990*t4783;
  t5018 = t5014 + t5017;
  t5012 = -1.*t2041*t5011;
  t5028 = t4805*t5018;
  t5029 = t5012 + t5028;
  t5037 = t4805*t5011;
  t5038 = t2041*t5018;
  t5044 = t5037 + t5038;
  t4833 = t2037*t4825;
  t4841 = t4835*t4838;
  t4844 = t4833 + t4841;
  t4853 = t4835*t4825;
  t4857 = -1.*t2037*t4838;
  t4861 = t4853 + t4857;
  t4947 = t2037*t4945;
  t4952 = t4835*t4951;
  t4955 = t4947 + t4952;
  t4961 = t4835*t4945;
  t4965 = -1.*t2037*t4951;
  t4969 = t4961 + t4965;
  t5032 = t2037*t5029;
  t5050 = t4835*t5044;
  t5053 = t5032 + t5050;
  t5056 = t4835*t5029;
  t5057 = -1.*t2037*t5044;
  t5058 = t5056 + t5057;
  t5130 = -1.*t4587;
  t5135 = 1. + t5130;
  t5159 = -1.*t4551;
  t5162 = 1. + t5159;
  t5183 = -1.*t4805;
  t5184 = 1. + t5183;
  t5224 = -1.*t4835;
  t5226 = 1. + t5224;
  t5243 = -1.*t4852;
  t5247 = 1. + t5243;
  t5070 = t4852*t4844;
  t5072 = t1379*t4861;
  t5073 = t5070 + t5072;
  t5116 = -1.*t4623;
  t5118 = 1. + t5116;
  t5119 = 0.135*t5118;
  t5121 = 0. + t5119;
  t5126 = -0.135*t4744;
  t5127 = 0. + t5126;
  t5139 = 0.135*t5135;
  t5140 = 0.049*t4758;
  t5141 = 0. + t5139 + t5140;
  t5144 = -0.049*t5135;
  t5145 = 0.135*t4758;
  t5148 = 0. + t5144 + t5145;
  t5167 = -0.049*t5162;
  t5169 = -0.09*t4783;
  t5172 = 0. + t5167 + t5169;
  t5176 = -0.09*t5162;
  t5177 = 0.049*t4783;
  t5180 = 0. + t5176 + t5177;
  t5192 = -0.049*t5184;
  t5198 = -0.21*t2041;
  t5201 = 0. + t5192 + t5198;
  t5213 = -0.21*t5184;
  t5215 = 0.049*t2041;
  t5220 = 0. + t5213 + t5215;
  t5229 = -0.2707*t5226;
  t5230 = 0.0016*t2037;
  t5233 = 0. + t5229 + t5230;
  t5235 = -0.0016*t5226;
  t5239 = -0.2707*t2037;
  t5240 = 0. + t5235 + t5239;
  t5248 = 0.0184*t5247;
  t5251 = -0.7055*t1379;
  t5255 = 0. + t5248 + t5251;
  t5260 = -0.7055*t5247;
  t5261 = -0.0184*t1379;
  t5264 = 0. + t5260 + t5261;
  t5078 = t4852*t4955;
  t5079 = t1379*t4969;
  t5082 = t5078 + t5079;
  t5084 = t4852*t5053;
  t5088 = t1379*t5058;
  t5094 = t5084 + t5088;
  p_output1[0]=t1379*t4844 - 1.*t4852*t4861;
  p_output1[1]=t1379*t4955 - 1.*t4852*t4969;
  p_output1[2]=t1379*t5053 - 1.*t4852*t5058;
  p_output1[3]=0.;
  p_output1[4]=t5073;
  p_output1[5]=t5082;
  p_output1[6]=t5094;
  p_output1[7]=0.;
  p_output1[8]=-1.*t4587*t4752 + t4581*t4586*t4758;
  p_output1[9]=t4586*t4649*t4758 - 1.*t4587*t4909;
  p_output1[10]=-1.*t4669*t4758 - 1.*t4587*t4987;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.1305*(t4587*t4752 - 1.*t4581*t4586*t4758) - 1.1135*(-1.*t1379*t4844 + t4852*t4861) - 0.0216*t5073 + t4709*t5121 + t4721*t5127 + t4752*t5141 + t4581*t4586*t5148 + t4766*t5172 + t4781*t5180 + t4788*t5201 + t4817*t5220 + t4825*t5233 + t4838*t5240 + t4844*t5255 + t4861*t5264 + var1[0];
  p_output1[13]=0. + 0.1305*(-1.*t4586*t4649*t4758 + t4587*t4909) - 1.1135*(-1.*t1379*t4955 + t4852*t4969) - 0.0216*t5082 + t4889*t5121 + t4906*t5127 + t4909*t5141 + t4586*t4649*t5148 + t4917*t5172 + t4930*t5180 + t4934*t5201 + t4940*t5220 + t4945*t5233 + t4951*t5240 + t4955*t5255 + t4969*t5264 + var1[1];
  p_output1[14]=0. + 0.1305*(t4669*t4758 + t4587*t4987) - 1.1135*(-1.*t1379*t5053 + t4852*t5058) - 0.0216*t5094 + t4586*t4679*t5121 + t4586*t4643*t5127 + t4987*t5141 - 1.*t4669*t5148 + t4990*t5172 + t5003*t5180 + t5011*t5201 + t5018*t5220 + t5029*t5233 + t5044*t5240 + t5053*t5255 + t5058*t5264 + var1[2];
  p_output1[15]=1.;
}



void H_toe_joint_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
