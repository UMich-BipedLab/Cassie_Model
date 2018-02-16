/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:15:27 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_toe_joint_left_src.h"

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
  double t5856;
  double t5967;
  double t5971;
  double t5969;
  double t5972;
  double t5961;
  double t5986;
  double t5998;
  double t6000;
  double t5970;
  double t5973;
  double t5975;
  double t6003;
  double t5855;
  double t6026;
  double t6027;
  double t6031;
  double t5945;
  double t5956;
  double t5959;
  double t5979;
  double t6007;
  double t6010;
  double t6014;
  double t6015;
  double t6019;
  double t6038;
  double t6051;
  double t6020;
  double t6044;
  double t6046;
  double t5841;
  double t6058;
  double t6060;
  double t6061;
  double t6073;
  double t6050;
  double t6064;
  double t6067;
  double t5687;
  double t6074;
  double t6076;
  double t6077;
  double t6084;
  double t6071;
  double t6078;
  double t6080;
  double t5681;
  double t6086;
  double t6091;
  double t6092;
  double t5662;
  double t6123;
  double t6126;
  double t6128;
  double t6115;
  double t6117;
  double t6119;
  double t6139;
  double t6141;
  double t6142;
  double t6111;
  double t6122;
  double t6129;
  double t6131;
  double t6134;
  double t6137;
  double t6138;
  double t6145;
  double t6146;
  double t6148;
  double t6151;
  double t6152;
  double t6147;
  double t6153;
  double t6156;
  double t6166;
  double t6167;
  double t6170;
  double t6100;
  double t6162;
  double t6173;
  double t6175;
  double t6179;
  double t6180;
  double t6184;
  double t6221;
  double t6223;
  double t6226;
  double t6197;
  double t6202;
  double t6203;
  double t6211;
  double t6212;
  double t6216;
  double t6220;
  double t6229;
  double t6231;
  double t6235;
  double t6236;
  double t6239;
  double t6234;
  double t6240;
  double t6243;
  double t6245;
  double t6246;
  double t6247;
  double t6244;
  double t6248;
  double t6249;
  double t6252;
  double t6253;
  double t6255;
  double t6082;
  double t6094;
  double t6095;
  double t6101;
  double t6102;
  double t6105;
  double t6176;
  double t6185;
  double t6187;
  double t6189;
  double t6190;
  double t6192;
  double t6251;
  double t6258;
  double t6261;
  double t6263;
  double t6266;
  double t6267;
  t5856 = Cos(var1[3]);
  t5967 = Cos(var1[5]);
  t5971 = Sin(var1[4]);
  t5969 = Sin(var1[3]);
  t5972 = Sin(var1[5]);
  t5961 = Cos(var1[6]);
  t5986 = t5856*t5967*t5971;
  t5998 = t5969*t5972;
  t6000 = t5986 + t5998;
  t5970 = -1.*t5967*t5969;
  t5973 = t5856*t5971*t5972;
  t5975 = t5970 + t5973;
  t6003 = Sin(var1[6]);
  t5855 = Cos(var1[8]);
  t6026 = t5961*t6000;
  t6027 = -1.*t5975*t6003;
  t6031 = t6026 + t6027;
  t5945 = Cos(var1[4]);
  t5956 = Cos(var1[7]);
  t5959 = t5856*t5945*t5956;
  t5979 = t5961*t5975;
  t6007 = t6000*t6003;
  t6010 = t5979 + t6007;
  t6014 = Sin(var1[7]);
  t6015 = t6010*t6014;
  t6019 = t5959 + t6015;
  t6038 = Sin(var1[8]);
  t6051 = Cos(var1[9]);
  t6020 = t5855*t6019;
  t6044 = t6031*t6038;
  t6046 = t6020 + t6044;
  t5841 = Sin(var1[9]);
  t6058 = t5855*t6031;
  t6060 = -1.*t6019*t6038;
  t6061 = t6058 + t6060;
  t6073 = Cos(var1[10]);
  t6050 = -1.*t5841*t6046;
  t6064 = t6051*t6061;
  t6067 = t6050 + t6064;
  t5687 = Sin(var1[10]);
  t6074 = t6051*t6046;
  t6076 = t5841*t6061;
  t6077 = t6074 + t6076;
  t6084 = Cos(var1[11]);
  t6071 = t5687*t6067;
  t6078 = t6073*t6077;
  t6080 = t6071 + t6078;
  t5681 = Sin(var1[11]);
  t6086 = t6073*t6067;
  t6091 = -1.*t5687*t6077;
  t6092 = t6086 + t6091;
  t5662 = Cos(var1[12]);
  t6123 = t5967*t5969*t5971;
  t6126 = -1.*t5856*t5972;
  t6128 = t6123 + t6126;
  t6115 = t5856*t5967;
  t6117 = t5969*t5971*t5972;
  t6119 = t6115 + t6117;
  t6139 = t5961*t6128;
  t6141 = -1.*t6119*t6003;
  t6142 = t6139 + t6141;
  t6111 = t5945*t5956*t5969;
  t6122 = t5961*t6119;
  t6129 = t6128*t6003;
  t6131 = t6122 + t6129;
  t6134 = t6131*t6014;
  t6137 = t6111 + t6134;
  t6138 = t5855*t6137;
  t6145 = t6142*t6038;
  t6146 = t6138 + t6145;
  t6148 = t5855*t6142;
  t6151 = -1.*t6137*t6038;
  t6152 = t6148 + t6151;
  t6147 = -1.*t5841*t6146;
  t6153 = t6051*t6152;
  t6156 = t6147 + t6153;
  t6166 = t6051*t6146;
  t6167 = t5841*t6152;
  t6170 = t6166 + t6167;
  t6100 = Sin(var1[12]);
  t6162 = t5687*t6156;
  t6173 = t6073*t6170;
  t6175 = t6162 + t6173;
  t6179 = t6073*t6156;
  t6180 = -1.*t5687*t6170;
  t6184 = t6179 + t6180;
  t6221 = t5945*t5967*t5961;
  t6223 = -1.*t5945*t5972*t6003;
  t6226 = t6221 + t6223;
  t6197 = -1.*t5956*t5971;
  t6202 = t5945*t5961*t5972;
  t6203 = t5945*t5967*t6003;
  t6211 = t6202 + t6203;
  t6212 = t6211*t6014;
  t6216 = t6197 + t6212;
  t6220 = t5855*t6216;
  t6229 = t6226*t6038;
  t6231 = t6220 + t6229;
  t6235 = t5855*t6226;
  t6236 = -1.*t6216*t6038;
  t6239 = t6235 + t6236;
  t6234 = -1.*t5841*t6231;
  t6240 = t6051*t6239;
  t6243 = t6234 + t6240;
  t6245 = t6051*t6231;
  t6246 = t5841*t6239;
  t6247 = t6245 + t6246;
  t6244 = t5687*t6243;
  t6248 = t6073*t6247;
  t6249 = t6244 + t6248;
  t6252 = t6073*t6243;
  t6253 = -1.*t5687*t6247;
  t6255 = t6252 + t6253;
  t6082 = -1.*t5681*t6080;
  t6094 = t6084*t6092;
  t6095 = t6082 + t6094;
  t6101 = t6084*t6080;
  t6102 = t5681*t6092;
  t6105 = t6101 + t6102;
  t6176 = -1.*t5681*t6175;
  t6185 = t6084*t6184;
  t6187 = t6176 + t6185;
  t6189 = t6084*t6175;
  t6190 = t5681*t6184;
  t6192 = t6189 + t6190;
  t6251 = -1.*t5681*t6249;
  t6258 = t6084*t6255;
  t6261 = t6251 + t6258;
  t6263 = t6084*t6249;
  t6266 = t5681*t6255;
  t6267 = t6263 + t6266;
  p_output1[0]=-1.*t5662*t6095 + t6100*t6105;
  p_output1[1]=-1.*t5662*t6187 + t6100*t6192;
  p_output1[2]=-1.*t5662*t6261 + t6100*t6267;
  p_output1[3]=t6095*t6100 + t5662*t6105;
  p_output1[4]=t6100*t6187 + t5662*t6192;
  p_output1[5]=t6100*t6261 + t5662*t6267;
  p_output1[6]=-1.*t5956*t6010 + t5856*t5945*t6014;
  p_output1[7]=t5945*t5969*t6014 - 1.*t5956*t6131;
  p_output1[8]=-1.*t5971*t6014 - 1.*t5956*t6211;
}



void R_toe_joint_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
