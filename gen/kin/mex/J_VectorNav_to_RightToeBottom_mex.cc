/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:17:15 GMT-05:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
inline double Power(double x, double y) { return pow(x, y); }
inline double Sqrt(double x) { return sqrt(x); }

inline double Abs(double x) { return fabs(x); }

inline double Exp(double x) { return exp(x); }
inline double Log(double x) { return log(x); }

inline double Sin(double x) { return sin(x); }
inline double Cos(double x) { return cos(x); }
inline double Tan(double x) { return tan(x); }

inline double ArcSin(double x) { return asin(x); }
inline double ArcCos(double x) { return acos(x); }
inline double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
inline double ArcTan(double x, double y) { return atan2(y,x); }

inline double Sinh(double x) { return sinh(x); }
inline double Cosh(double x) { return cosh(x); }
inline double Tanh(double x) { return tanh(x); }

const double E	= 2.71828182845904523536029;
const double Pi = 3.14159265358979323846264;
const double Degree = 0.01745329251994329576924;


#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1)
{
  double t235;
  double t545;
  double t745;
  double t1528;
  double t1532;
  double t1642;
  double t2033;
  double t2155;
  double t2576;
  double t2583;
  double t2664;
  double t2761;
  double t2433;
  double t2444;
  double t2506;
  double t3098;
  double t3191;
  double t3201;
  double t3676;
  double t3700;
  double t3738;
  double t3830;
  double t3452;
  double t3454;
  double t3574;
  double t4141;
  double t4472;
  double t4515;
  double t5282;
  double t5290;
  double t5364;
  double t5497;
  double t5000;
  double t5207;
  double t5279;
  double t5649;
  double t5661;
  double t5724;
  double t6032;
  double t6075;
  double t6127;
  double t6278;
  double t5935;
  double t5957;
  double t6024;
  double t6424;
  double t6447;
  double t6487;
  double t601;
  double t607;
  double t694;
  double t1271;
  double t1272;
  double t1736;
  double t2107;
  double t2116;
  double t2160;
  double t2176;
  double t2247;
  double t2710;
  double t2830;
  double t2890;
  double t3266;
  double t3303;
  double t3312;
  double t6854;
  double t6883;
  double t6889;
  double t6905;
  double t6922;
  double t6924;
  double t3805;
  double t4083;
  double t4093;
  double t4814;
  double t4857;
  double t4860;
  double t6929;
  double t6936;
  double t6939;
  double t6957;
  double t6958;
  double t6964;
  double t5449;
  double t5578;
  double t5598;
  double t5737;
  double t5768;
  double t5787;
  double t6987;
  double t6990;
  double t6991;
  double t6997;
  double t7001;
  double t7004;
  double t6238;
  double t6302;
  double t6320;
  double t6500;
  double t6548;
  double t6551;
  double t7010;
  double t7012;
  double t7019;
  double t7021;
  double t7025;
  double t7035;
  double t7071;
  double t7073;
  double t6835;
  double t6839;
  double t6901;
  double t6928;
  double t6940;
  double t6967;
  double t6996;
  double t7007;
  double t7020;
  double t7038;
  double t7039;
  double t7040;
  double t7042;
  double t7045;
  double t7051;
  double t7055;
  double t7060;
  double t7063;
  double t7068;
  double t2150;
  double t2380;
  double t2984;
  double t3321;
  double t4139;
  double t4889;
  double t5643;
  double t5928;
  double t6388;
  double t6588;
  double t6589;
  double t6606;
  double t6608;
  double t6637;
  double t6638;
  double t6670;
  double t6729;
  double t6734;
  double t7124;
  double t7128;
  double t7129;
  double t7135;
  double t7137;
  double t7139;
  double t7141;
  double t7148;
  double t7149;
  double t7154;
  double t7156;
  double t7158;
  double t7167;
  double t7168;
  double t7170;
  double t7173;
  double t7176;
  double t7181;
  double t7111;
  double t7115;
  double t7118;
  double t7121;
  double t7122;
  double t7132;
  double t7140;
  double t7151;
  double t7166;
  double t7172;
  double t7182;
  double t7183;
  double t7184;
  double t7185;
  double t7188;
  double t7189;
  double t7195;
  double t7198;
  double t7199;
  double t7200;
  double t7214;
  double t7216;
  double t7075;
  double t7212;
  double t7213;
  double t7092;
  double t7211;
  double t7227;
  double t7229;
  double t7230;
  double t7236;
  double t7238;
  double t7239;
  double t7218;
  double t7219;
  double t7224;
  double t7262;
  double t7264;
  double t7265;
  double t7270;
  double t7271;
  double t7275;
  double t7256;
  double t7257;
  double t7258;
  double t7299;
  double t7302;
  double t7304;
  double t7316;
  double t7317;
  double t7320;
  double t7290;
  double t7293;
  double t7294;
  double t7339;
  double t7341;
  double t7343;
  double t7346;
  double t7347;
  double t7348;
  double t7330;
  double t7336;
  double t7337;
  double t7367;
  double t7368;
  double t7369;
  double t7372;
  double t7375;
  double t7376;
  double t7361;
  double t7362;
  double t7364;
  t235 = Sin(var1[7]);
  t545 = Cos(var1[8]);
  t745 = Sin(var1[8]);
  t1528 = Cos(var1[9]);
  t1532 = -1.*t1528;
  t1642 = 1. + t1532;
  t2033 = Sin(var1[9]);
  t2155 = Cos(var1[7]);
  t2576 = Cos(var1[10]);
  t2583 = -1.*t2576;
  t2664 = 1. + t2583;
  t2761 = Sin(var1[10]);
  t2433 = t1528*t235*t745;
  t2444 = t2155*t2033;
  t2506 = t2433 + t2444;
  t3098 = t2155*t1528;
  t3191 = -1.*t235*t745*t2033;
  t3201 = t3098 + t3191;
  t3676 = Cos(var1[11]);
  t3700 = -1.*t3676;
  t3738 = 1. + t3700;
  t3830 = Sin(var1[11]);
  t3452 = t2576*t2506;
  t3454 = t3201*t2761;
  t3574 = t3452 + t3454;
  t4141 = t2576*t3201;
  t4472 = -1.*t2506*t2761;
  t4515 = t4141 + t4472;
  t5282 = Cos(var1[12]);
  t5290 = -1.*t5282;
  t5364 = 1. + t5290;
  t5497 = Sin(var1[12]);
  t5000 = t3676*t3574;
  t5207 = t4515*t3830;
  t5279 = t5000 + t5207;
  t5649 = t3676*t4515;
  t5661 = -1.*t3574*t3830;
  t5724 = t5649 + t5661;
  t6032 = Cos(var1[13]);
  t6075 = -1.*t6032;
  t6127 = 1. + t6075;
  t6278 = Sin(var1[13]);
  t5935 = t5282*t5279;
  t5957 = t5724*t5497;
  t6024 = t5935 + t5957;
  t6424 = t5282*t5724;
  t6447 = -1.*t5279*t5497;
  t6487 = t6424 + t6447;
  t601 = -1.*t545;
  t607 = 1. + t601;
  t694 = -0.135*t607;
  t1271 = 0.049*t745;
  t1272 = 0. + t694 + t1271;
  t1736 = -0.049*t1642;
  t2107 = -0.09*t2033;
  t2116 = 0. + t1736 + t2107;
  t2160 = -0.09*t1642;
  t2176 = 0.049*t2033;
  t2247 = 0. + t2160 + t2176;
  t2710 = -0.049*t2664;
  t2830 = -0.21*t2761;
  t2890 = 0. + t2710 + t2830;
  t3266 = -0.21*t2664;
  t3303 = 0.049*t2761;
  t3312 = 0. + t3266 + t3303;
  t6854 = t2155*t1528*t745;
  t6883 = -1.*t235*t2033;
  t6889 = t6854 + t6883;
  t6905 = -1.*t1528*t235;
  t6922 = -1.*t2155*t745*t2033;
  t6924 = t6905 + t6922;
  t3805 = -0.0016*t3738;
  t4083 = -0.2707*t3830;
  t4093 = 0. + t3805 + t4083;
  t4814 = -0.2707*t3738;
  t4857 = 0.0016*t3830;
  t4860 = 0. + t4814 + t4857;
  t6929 = t2576*t6889;
  t6936 = t6924*t2761;
  t6939 = t6929 + t6936;
  t6957 = t2576*t6924;
  t6958 = -1.*t6889*t2761;
  t6964 = t6957 + t6958;
  t5449 = 0.0184*t5364;
  t5578 = -0.7055*t5497;
  t5598 = 0. + t5449 + t5578;
  t5737 = -0.7055*t5364;
  t5768 = -0.0184*t5497;
  t5787 = 0. + t5737 + t5768;
  t6987 = t3676*t6939;
  t6990 = t6964*t3830;
  t6991 = t6987 + t6990;
  t6997 = t3676*t6964;
  t7001 = -1.*t6939*t3830;
  t7004 = t6997 + t7001;
  t6238 = -0.0216*t6127;
  t6302 = -1.1135*t6278;
  t6320 = 0. + t6238 + t6302;
  t6500 = -1.1135*t6127;
  t6548 = 0.0216*t6278;
  t6551 = 0. + t6500 + t6548;
  t7010 = t5282*t6991;
  t7012 = t7004*t5497;
  t7019 = t7010 + t7012;
  t7021 = t5282*t7004;
  t7025 = -1.*t6991*t5497;
  t7035 = t7021 + t7025;
  t7071 = -1.*t2155;
  t7073 = 0. + t7071;
  t6835 = -1.*t2155*t745*t2116;
  t6839 = t235*t2247;
  t6901 = -1.*t6889*t2890;
  t6928 = -1.*t6924*t3312;
  t6940 = -1.*t6939*t4093;
  t6967 = -1.*t6964*t4860;
  t6996 = -1.*t6991*t5598;
  t7007 = -1.*t7004*t5787;
  t7020 = -1.*t7019*t6320;
  t7038 = -1.*t7035*t6551;
  t7039 = t6032*t7019;
  t7040 = t7035*t6278;
  t7042 = t7039 + t7040;
  t7045 = -0.0306*t7042;
  t7051 = t6032*t7035;
  t7055 = -1.*t7019*t6278;
  t7060 = t7051 + t7055;
  t7063 = 1.1312*t7060;
  t7068 = 0. + t235;
  t2150 = -1.*t235*t745*t2116;
  t2380 = -1.*t2155*t2247;
  t2984 = -1.*t2506*t2890;
  t3321 = -1.*t3201*t3312;
  t4139 = -1.*t3574*t4093;
  t4889 = -1.*t4515*t4860;
  t5643 = -1.*t5279*t5598;
  t5928 = -1.*t5724*t5787;
  t6388 = -1.*t6024*t6320;
  t6588 = -1.*t6487*t6551;
  t6589 = t6032*t6024;
  t6606 = t6487*t6278;
  t6608 = t6589 + t6606;
  t6637 = -0.0306*t6608;
  t6638 = t6032*t6487;
  t6670 = -1.*t6024*t6278;
  t6729 = t6638 + t6670;
  t6734 = 1.1312*t6729;
  t7124 = t545*t1528*t2576;
  t7128 = -1.*t545*t2033*t2761;
  t7129 = t7124 + t7128;
  t7135 = -1.*t545*t2576*t2033;
  t7137 = -1.*t545*t1528*t2761;
  t7139 = t7135 + t7137;
  t7141 = t3676*t7129;
  t7148 = t7139*t3830;
  t7149 = t7141 + t7148;
  t7154 = t3676*t7139;
  t7156 = -1.*t7129*t3830;
  t7158 = t7154 + t7156;
  t7167 = t5282*t7149;
  t7168 = t7158*t5497;
  t7170 = t7167 + t7168;
  t7173 = t5282*t7158;
  t7176 = -1.*t7149*t5497;
  t7181 = t7173 + t7176;
  t7111 = 0.049*t545;
  t7115 = -0.004500000000000004*t745;
  t7118 = t545*t2116;
  t7121 = t545*t1528*t2890;
  t7122 = -1.*t545*t2033*t3312;
  t7132 = t7129*t4093;
  t7140 = t7139*t4860;
  t7151 = t7149*t5598;
  t7166 = t7158*t5787;
  t7172 = t7170*t6320;
  t7182 = t7181*t6551;
  t7183 = t6032*t7170;
  t7184 = t7181*t6278;
  t7185 = t7183 + t7184;
  t7188 = 0.0306*t7185;
  t7189 = t6032*t7181;
  t7195 = -1.*t7170*t6278;
  t7198 = t7189 + t7195;
  t7199 = -1.1312*t7198;
  t7200 = 0. + t7111 + t7115 + t7118 + t7121 + t7122 + t7132 + t7140 + t7151 + t7166 + t7172 + t7182 + t7188 + t7199;
  t7214 = t545*t235;
  t7216 = 0. + t7214;
  t7075 = -0.004500000000000004*t2155*t545;
  t7212 = t2155*t545;
  t7213 = 0. + t7212;
  t7092 = -0.004500000000000004*t545*t235;
  t7211 = 0. + t745;
  t7227 = -0.049*t2506;
  t7229 = -0.09*t3201;
  t7230 = 0. + t7092 + t7227 + t7229 + t2984 + t3321 + t4139 + t4889 + t5643 + t5928 + t6388 + t6588 + t6637 + t6734;
  t7236 = 0.049*t545*t1528;
  t7238 = -0.09*t545*t2033;
  t7239 = 0. + t7236 + t7115 + t7238 + t7121 + t7122 + t7132 + t7140 + t7151 + t7166 + t7172 + t7182 + t7188 + t7199;
  t7218 = -0.049*t6889;
  t7219 = -0.09*t6924;
  t7224 = 0. + t7075 + t7218 + t7219 + t6901 + t6928 + t6940 + t6967 + t6996 + t7007 + t7020 + t7038 + t7045 + t7063;
  t7262 = -0.21*t4515;
  t7264 = -0.049*t3574;
  t7265 = 0. + t7262 + t7264 + t4139 + t4889 + t5643 + t5928 + t6388 + t6588 + t6637 + t6734;
  t7270 = 0.21*t7139;
  t7271 = 0.049*t7129;
  t7275 = 0. + t7270 + t7271 + t7132 + t7140 + t7151 + t7166 + t7172 + t7182 + t7188 + t7199;
  t7256 = -0.21*t6964;
  t7257 = -0.049*t6939;
  t7258 = 0. + t7256 + t7257 + t6940 + t6967 + t6996 + t7007 + t7020 + t7038 + t7045 + t7063;
  t7299 = -0.0016*t5279;
  t7302 = -0.2707*t5724;
  t7304 = 0. + t7299 + t7302 + t5643 + t5928 + t6388 + t6588 + t6637 + t6734;
  t7316 = 0.0016*t7149;
  t7317 = 0.2707*t7158;
  t7320 = 0. + t7316 + t7317 + t7151 + t7166 + t7172 + t7182 + t7188 + t7199;
  t7290 = -0.0016*t6991;
  t7293 = -0.2707*t7004;
  t7294 = 0. + t7290 + t7293 + t6996 + t7007 + t7020 + t7038 + t7045 + t7063;
  t7339 = -0.7055*t6487;
  t7341 = 0.0184*t6024;
  t7343 = 0. + t7339 + t7341 + t6388 + t6588 + t6637 + t6734;
  t7346 = 0.7055*t7181;
  t7347 = -0.0184*t7170;
  t7348 = 0. + t7346 + t7347 + t7172 + t7182 + t7188 + t7199;
  t7330 = -0.7055*t7035;
  t7336 = 0.0184*t7019;
  t7337 = 0. + t7330 + t7336 + t7020 + t7038 + t7045 + t7063;
  t7367 = -0.052199999999999996*t6608;
  t7368 = 0.01770000000000005*t6729;
  t7369 = 0. + t7367 + t7368;
  t7372 = 0.052199999999999996*t7185;
  t7375 = -0.01770000000000005*t7198;
  t7376 = 0. + t7372 + t7375;
  t7361 = -0.052199999999999996*t7042;
  t7362 = 0.01770000000000005*t7060;
  t7364 = 0. + t7361 + t7362;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=1.;
  p_output1[43]=0.;
  p_output1[44]=0.;
  p_output1[45]=0.;
  p_output1[46]=0. - 1.*(0. + t2150 - 0.135*t235 - 1.*t1272*t235 + t2380 + t2984 + t3321 + t4139 + t4889 + 0.1305*t235*t545 + t5643 + t5928 + t6388 + t6588 + t6637 + t6734);
  p_output1[47]=0. - 0.135*t2155 - 1.*t1272*t2155 + 0.1305*t2155*t545 + t6835 + t6839 + t6901 + t6928 + t6940 + t6967 + t6996 + t7007 + t7020 + t7038 + t7045 + t7063;
  p_output1[48]=0.;
  p_output1[49]=t7068;
  p_output1[50]=t7073;
  p_output1[51]=-1.*t7073*(0. + 0.09*t235 + t6835 + t6839 + t6901 + t6928 + t6940 + t6967 + t6996 + t7007 + t7020 + t7038 + t7045 + t7063 + t7075 - 0.049*t2155*t745) + t7068*(0. + t2150 - 0.09*t2155 + t2380 + t2984 + t3321 + t4139 + t4889 + t5643 + t5928 + t6388 + t6588 + t6637 + t6734 + t7092 - 0.049*t235*t745);
  p_output1[52]=0. + t7073*t7200;
  p_output1[53]=0. - 1.*t7068*t7200;
  p_output1[54]=t7211;
  p_output1[55]=t7213;
  p_output1[56]=t7216;
  p_output1[57]=-1.*t7216*t7224 + t7213*t7230;
  p_output1[58]=-1.*t7211*t7230 + t7216*t7239;
  p_output1[59]=t7211*t7224 - 1.*t7213*t7239;
  p_output1[60]=t7211;
  p_output1[61]=t7213;
  p_output1[62]=t7216;
  p_output1[63]=-1.*t7216*t7258 + t7213*t7265;
  p_output1[64]=-1.*t7211*t7265 + t7216*t7275;
  p_output1[65]=t7211*t7258 - 1.*t7213*t7275;
  p_output1[66]=t7211;
  p_output1[67]=t7213;
  p_output1[68]=t7216;
  p_output1[69]=-1.*t7216*t7294 + t7213*t7304;
  p_output1[70]=-1.*t7211*t7304 + t7216*t7320;
  p_output1[71]=t7211*t7294 - 1.*t7213*t7320;
  p_output1[72]=t7211;
  p_output1[73]=t7213;
  p_output1[74]=t7216;
  p_output1[75]=-1.*t7216*t7337 + t7213*t7343;
  p_output1[76]=-1.*t7211*t7343 + t7216*t7348;
  p_output1[77]=t7211*t7337 - 1.*t7213*t7348;
  p_output1[78]=t7211;
  p_output1[79]=t7213;
  p_output1[80]=t7216;
  p_output1[81]=-1.*t7216*t7364 + t7213*t7369;
  p_output1[82]=-1.*t7211*t7369 + t7216*t7376;
  p_output1[83]=t7211*t7364 - 1.*t7213*t7376;
}



#ifdef MATLAB_MEX_FILE

#include "mex.h"
/*
 * Main function
 */
void mexFunction( int nlhs, mxArray *plhs[],
                  int nrhs, const mxArray *prhs[] )
{
  size_t mrows, ncols;

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 14 && ncols == 1) && 
      !(mrows == 1 && ncols == 14))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 6, (mwSize) 14, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_VectorNav_to_RightToeBottom_mex.hh"

namespace SymExpression
{

void J_VectorNav_to_RightToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
