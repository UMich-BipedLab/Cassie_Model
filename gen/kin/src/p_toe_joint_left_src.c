/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 11:08:08 GMT-04:00
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
  double t4811;
  double t4805;
  double t4812;
  double t4806;
  double t4814;
  double t341;
  double t4808;
  double t4815;
  double t4816;
  double t4823;
  double t4824;
  double t4826;
  double t4831;
  double t4843;
  double t4844;
  double t4852;
  double t4855;
  double t4838;
  double t4840;
  double t4841;
  double t4860;
  double t4881;
  double t4882;
  double t4884;
  double t4889;
  double t4877;
  double t4879;
  double t4880;
  double t4899;
  double t4901;
  double t4903;
  double t4910;
  double t4914;
  double t4916;
  double t4918;
  double t4926;
  double t4927;
  double t4929;
  double t4941;
  double t4942;
  double t4944;
  double t4947;
  double t4948;
  double t4949;
  double t4951;
  double t4956;
  double t4957;
  double t4958;
  double t4964;
  double t4965;
  double t4966;
  double t4971;
  double t4975;
  double t4977;
  double t4979;
  double t4984;
  double t4985;
  double t4986;
  double t4997;
  double t4999;
  double t5001;
  double t5003;
  double t5005;
  double t5006;
  double t5009;
  double t5013;
  double t5014;
  double t5015;
  double t5023;
  double t5025;
  double t5026;
  double t4695;
  double t4747;
  double t4800;
  double t4803;
  double t4832;
  double t4836;
  double t5041;
  double t5042;
  double t5043;
  double t5045;
  double t5046;
  double t5047;
  double t4854;
  double t4856;
  double t4857;
  double t4861;
  double t4862;
  double t4863;
  double t5049;
  double t5050;
  double t5051;
  double t4885;
  double t4892;
  double t4893;
  double t4904;
  double t4905;
  double t4907;
  double t4917;
  double t4920;
  double t4924;
  double t5060;
  double t5062;
  double t5063;
  double t5065;
  double t5067;
  double t5068;
  double t4933;
  double t4935;
  double t4939;
  double t4950;
  double t4954;
  double t4955;
  double t5071;
  double t5073;
  double t5074;
  double t5076;
  double t5077;
  double t5079;
  double t4961;
  double t4962;
  double t4963;
  double t4978;
  double t4982;
  double t4983;
  double t5081;
  double t5083;
  double t5084;
  double t5087;
  double t5089;
  double t5091;
  double t4990;
  double t4991;
  double t4995;
  double t5008;
  double t5011;
  double t5012;
  double t5093;
  double t5095;
  double t5096;
  double t5098;
  double t5099;
  double t5100;
  double t5019;
  double t5020;
  double t5022;
  double t5102;
  double t5103;
  double t5104;
  double t5106;
  double t5107;
  double t5108;
  double t5121;
  double t5122;
  double t5123;
  double t5130;
  double t5131;
  double t5132;
  double t5134;
  double t5135;
  double t5136;
  double t5138;
  double t5139;
  double t5140;
  double t5142;
  double t5143;
  double t5144;
  double t5146;
  double t5147;
  double t5148;
  double t5150;
  double t5151;
  double t5152;
  double t5154;
  double t5155;
  double t5156;
  double t5158;
  double t5159;
  double t5160;
  double t5162;
  double t5163;
  double t5164;
  double t5166;
  double t5167;
  double t5168;
  t4811 = Cos(var1[3]);
  t4805 = Cos(var1[5]);
  t4812 = Sin(var1[4]);
  t4806 = Sin(var1[3]);
  t4814 = Sin(var1[5]);
  t341 = Cos(var1[6]);
  t4808 = -1.*t4805*t4806;
  t4815 = t4811*t4812*t4814;
  t4816 = t4808 + t4815;
  t4823 = t4811*t4805*t4812;
  t4824 = t4806*t4814;
  t4826 = t4823 + t4824;
  t4831 = Sin(var1[6]);
  t4843 = Cos(var1[7]);
  t4844 = -1.*t4843;
  t4852 = 1. + t4844;
  t4855 = Sin(var1[7]);
  t4838 = t341*t4816;
  t4840 = t4826*t4831;
  t4841 = t4838 + t4840;
  t4860 = Cos(var1[4]);
  t4881 = Cos(var1[8]);
  t4882 = -1.*t4881;
  t4884 = 1. + t4882;
  t4889 = Sin(var1[8]);
  t4877 = t4811*t4860*t4843;
  t4879 = t4841*t4855;
  t4880 = t4877 + t4879;
  t4899 = t341*t4826;
  t4901 = -1.*t4816*t4831;
  t4903 = t4899 + t4901;
  t4910 = Cos(var1[9]);
  t4914 = -1.*t4910;
  t4916 = 1. + t4914;
  t4918 = Sin(var1[9]);
  t4926 = t4881*t4880;
  t4927 = t4903*t4889;
  t4929 = t4926 + t4927;
  t4941 = t4881*t4903;
  t4942 = -1.*t4880*t4889;
  t4944 = t4941 + t4942;
  t4947 = Cos(var1[10]);
  t4948 = -1.*t4947;
  t4949 = 1. + t4948;
  t4951 = Sin(var1[10]);
  t4956 = -1.*t4918*t4929;
  t4957 = t4910*t4944;
  t4958 = t4956 + t4957;
  t4964 = t4910*t4929;
  t4965 = t4918*t4944;
  t4966 = t4964 + t4965;
  t4971 = Cos(var1[11]);
  t4975 = -1.*t4971;
  t4977 = 1. + t4975;
  t4979 = Sin(var1[11]);
  t4984 = t4951*t4958;
  t4985 = t4947*t4966;
  t4986 = t4984 + t4985;
  t4997 = t4947*t4958;
  t4999 = -1.*t4951*t4966;
  t5001 = t4997 + t4999;
  t5003 = Cos(var1[12]);
  t5005 = -1.*t5003;
  t5006 = 1. + t5005;
  t5009 = Sin(var1[12]);
  t5013 = -1.*t4979*t4986;
  t5014 = t4971*t5001;
  t5015 = t5013 + t5014;
  t5023 = t4971*t4986;
  t5025 = t4979*t5001;
  t5026 = t5023 + t5025;
  t4695 = -1.*t341;
  t4747 = 1. + t4695;
  t4800 = 0.135*t4747;
  t4803 = 0. + t4800;
  t4832 = -0.135*t4831;
  t4836 = 0. + t4832;
  t5041 = t4811*t4805;
  t5042 = t4806*t4812*t4814;
  t5043 = t5041 + t5042;
  t5045 = t4805*t4806*t4812;
  t5046 = -1.*t4811*t4814;
  t5047 = t5045 + t5046;
  t4854 = 0.135*t4852;
  t4856 = 0.049*t4855;
  t4857 = 0. + t4854 + t4856;
  t4861 = -0.049*t4852;
  t4862 = 0.135*t4855;
  t4863 = 0. + t4861 + t4862;
  t5049 = t341*t5043;
  t5050 = t5047*t4831;
  t5051 = t5049 + t5050;
  t4885 = -0.049*t4884;
  t4892 = -0.09*t4889;
  t4893 = 0. + t4885 + t4892;
  t4904 = -0.09*t4884;
  t4905 = 0.049*t4889;
  t4907 = 0. + t4904 + t4905;
  t4917 = -0.049*t4916;
  t4920 = -0.21*t4918;
  t4924 = 0. + t4917 + t4920;
  t5060 = t4860*t4843*t4806;
  t5062 = t5051*t4855;
  t5063 = t5060 + t5062;
  t5065 = t341*t5047;
  t5067 = -1.*t5043*t4831;
  t5068 = t5065 + t5067;
  t4933 = -0.21*t4916;
  t4935 = 0.049*t4918;
  t4939 = 0. + t4933 + t4935;
  t4950 = -0.2707*t4949;
  t4954 = 0.0016*t4951;
  t4955 = 0. + t4950 + t4954;
  t5071 = t4881*t5063;
  t5073 = t5068*t4889;
  t5074 = t5071 + t5073;
  t5076 = t4881*t5068;
  t5077 = -1.*t5063*t4889;
  t5079 = t5076 + t5077;
  t4961 = -0.0016*t4949;
  t4962 = -0.2707*t4951;
  t4963 = 0. + t4961 + t4962;
  t4978 = 0.0184*t4977;
  t4982 = -0.7055*t4979;
  t4983 = 0. + t4978 + t4982;
  t5081 = -1.*t4918*t5074;
  t5083 = t4910*t5079;
  t5084 = t5081 + t5083;
  t5087 = t4910*t5074;
  t5089 = t4918*t5079;
  t5091 = t5087 + t5089;
  t4990 = -0.7055*t4977;
  t4991 = -0.0184*t4979;
  t4995 = 0. + t4990 + t4991;
  t5008 = -1.1135*t5006;
  t5011 = 0.0216*t5009;
  t5012 = 0. + t5008 + t5011;
  t5093 = t4951*t5084;
  t5095 = t4947*t5091;
  t5096 = t5093 + t5095;
  t5098 = t4947*t5084;
  t5099 = -1.*t4951*t5091;
  t5100 = t5098 + t5099;
  t5019 = -0.0216*t5006;
  t5020 = -1.1135*t5009;
  t5022 = 0. + t5019 + t5020;
  t5102 = -1.*t4979*t5096;
  t5103 = t4971*t5100;
  t5104 = t5102 + t5103;
  t5106 = t4971*t5096;
  t5107 = t4979*t5100;
  t5108 = t5106 + t5107;
  t5121 = t4860*t341*t4814;
  t5122 = t4860*t4805*t4831;
  t5123 = t5121 + t5122;
  t5130 = -1.*t4843*t4812;
  t5131 = t5123*t4855;
  t5132 = t5130 + t5131;
  t5134 = t4860*t4805*t341;
  t5135 = -1.*t4860*t4814*t4831;
  t5136 = t5134 + t5135;
  t5138 = t4881*t5132;
  t5139 = t5136*t4889;
  t5140 = t5138 + t5139;
  t5142 = t4881*t5136;
  t5143 = -1.*t5132*t4889;
  t5144 = t5142 + t5143;
  t5146 = -1.*t4918*t5140;
  t5147 = t4910*t5144;
  t5148 = t5146 + t5147;
  t5150 = t4910*t5140;
  t5151 = t4918*t5144;
  t5152 = t5150 + t5151;
  t5154 = t4951*t5148;
  t5155 = t4947*t5152;
  t5156 = t5154 + t5155;
  t5158 = t4947*t5148;
  t5159 = -1.*t4951*t5152;
  t5160 = t5158 + t5159;
  t5162 = -1.*t4979*t5156;
  t5163 = t4971*t5160;
  t5164 = t5162 + t5163;
  t5166 = t4971*t5156;
  t5167 = t4979*t5160;
  t5168 = t5166 + t5167;
  p_output1[0]=0. + t4803*t4816 + t4826*t4836 + t4841*t4857 + 0.1305*(t4841*t4843 - 1.*t4811*t4855*t4860) + t4811*t4860*t4863 + t4880*t4893 + t4903*t4907 + t4924*t4929 + t4939*t4944 + t4955*t4958 + t4963*t4966 + t4983*t4986 + t4995*t5001 + t5012*t5015 + t5022*t5026 - 0.0216*(t5009*t5015 + t5003*t5026) - 1.1135*(t5003*t5015 - 1.*t5009*t5026) + var1[0];
  p_output1[1]=0. + t4806*t4860*t4863 + t4803*t5043 + t4836*t5047 + t4857*t5051 + 0.1305*(-1.*t4806*t4855*t4860 + t4843*t5051) + t4893*t5063 + t4907*t5068 + t4924*t5074 + t4939*t5079 + t4955*t5084 + t4963*t5091 + t4983*t5096 + t4995*t5100 + t5012*t5104 + t5022*t5108 - 0.0216*(t5009*t5104 + t5003*t5108) - 1.1135*(t5003*t5104 - 1.*t5009*t5108) + var1[1];
  p_output1[2]=0. + t4803*t4814*t4860 + t4805*t4836*t4860 - 1.*t4812*t4863 + t4857*t5123 + 0.1305*(t4812*t4855 + t4843*t5123) + t4893*t5132 + t4907*t5136 + t4924*t5140 + t4939*t5144 + t4955*t5148 + t4963*t5152 + t4983*t5156 + t4995*t5160 + t5012*t5164 + t5022*t5168 - 0.0216*(t5009*t5164 + t5003*t5168) - 1.1135*(t5003*t5164 - 1.*t5009*t5168) + var1[2];
}



void p_toe_joint_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
