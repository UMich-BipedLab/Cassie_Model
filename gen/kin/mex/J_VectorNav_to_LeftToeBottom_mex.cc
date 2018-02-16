/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:17:22 GMT-05:00
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
  double t11;
  double t127;
  double t637;
  double t1017;
  double t1334;
  double t1756;
  double t1947;
  double t2502;
  double t2768;
  double t2794;
  double t2841;
  double t3301;
  double t3615;
  double t3648;
  double t3671;
  double t4299;
  double t4350;
  double t4352;
  double t4440;
  double t4443;
  double t4446;
  double t4481;
  double t4517;
  double t4527;
  double t4542;
  double t4598;
  double t4798;
  double t4818;
  double t4870;
  double t4950;
  double t4976;
  double t4982;
  double t5045;
  double t5056;
  double t5071;
  double t5280;
  double t5302;
  double t5357;
  double t5397;
  double t5431;
  double t5435;
  double t5450;
  double t5588;
  double t5691;
  double t5703;
  double t6324;
  double t6390;
  double t6412;
  double t304;
  double t409;
  double t477;
  double t651;
  double t702;
  double t1838;
  double t2412;
  double t2436;
  double t2510;
  double t2526;
  double t2554;
  double t2996;
  double t3403;
  double t3570;
  double t3937;
  double t4189;
  double t4251;
  double t4455;
  double t4486;
  double t4490;
  double t6681;
  double t6684;
  double t6700;
  double t6727;
  double t6735;
  double t6744;
  double t4553;
  double t4559;
  double t4574;
  double t4979;
  double t4990;
  double t5017;
  double t6750;
  double t6759;
  double t6786;
  double t6844;
  double t6851;
  double t6898;
  double t5187;
  double t5203;
  double t5240;
  double t5446;
  double t5555;
  double t5576;
  double t6949;
  double t7006;
  double t7060;
  double t7093;
  double t7097;
  double t7104;
  double t5922;
  double t6169;
  double t6302;
  double t7118;
  double t7145;
  double t7155;
  double t7173;
  double t7175;
  double t7179;
  double t7223;
  double t7227;
  double t6658;
  double t6678;
  double t6721;
  double t6745;
  double t6822;
  double t6920;
  double t7075;
  double t7112;
  double t7157;
  double t7185;
  double t7188;
  double t7192;
  double t7198;
  double t7204;
  double t7205;
  double t7207;
  double t7209;
  double t7212;
  double t7219;
  double t2445;
  double t2627;
  double t3735;
  double t4416;
  double t4552;
  double t4862;
  double t5156;
  double t5377;
  double t5871;
  double t6422;
  double t6432;
  double t6435;
  double t6437;
  double t6452;
  double t6486;
  double t6507;
  double t6508;
  double t6520;
  double t7267;
  double t7270;
  double t7271;
  double t7274;
  double t7277;
  double t7279;
  double t7283;
  double t7284;
  double t7289;
  double t7293;
  double t7296;
  double t7297;
  double t7305;
  double t7308;
  double t7313;
  double t7316;
  double t7317;
  double t7324;
  double t7255;
  double t7256;
  double t7257;
  double t7264;
  double t7266;
  double t7273;
  double t7280;
  double t7290;
  double t7299;
  double t7315;
  double t7325;
  double t7327;
  double t7330;
  double t7334;
  double t7338;
  double t7339;
  double t7341;
  double t7344;
  double t7345;
  double t7346;
  double t7361;
  double t7366;
  double t7228;
  double t7359;
  double t7360;
  double t7238;
  double t7358;
  double t7374;
  double t7375;
  double t7380;
  double t7386;
  double t7387;
  double t7388;
  double t7367;
  double t7368;
  double t7370;
  double t7403;
  double t7404;
  double t7408;
  double t7412;
  double t7414;
  double t7415;
  double t7398;
  double t7399;
  double t7400;
  double t7430;
  double t7431;
  double t7433;
  double t7439;
  double t7440;
  double t7443;
  double t7425;
  double t7426;
  double t7428;
  double t7476;
  double t7479;
  double t7482;
  double t7487;
  double t7488;
  double t7490;
  double t7466;
  double t7469;
  double t7473;
  double t7506;
  double t7507;
  double t7508;
  double t7515;
  double t7529;
  double t7530;
  double t7502;
  double t7503;
  double t7504;
  t11 = Sin(var1[0]);
  t127 = Cos(var1[1]);
  t637 = Sin(var1[1]);
  t1017 = Cos(var1[2]);
  t1334 = -1.*t1017;
  t1756 = 1. + t1334;
  t1947 = Sin(var1[2]);
  t2502 = Cos(var1[0]);
  t2768 = Cos(var1[3]);
  t2794 = -1.*t2768;
  t2841 = 1. + t2794;
  t3301 = Sin(var1[3]);
  t3615 = t1017*t11*t637;
  t3648 = t2502*t1947;
  t3671 = t3615 + t3648;
  t4299 = t2502*t1017;
  t4350 = -1.*t11*t637*t1947;
  t4352 = t4299 + t4350;
  t4440 = Cos(var1[4]);
  t4443 = -1.*t4440;
  t4446 = 1. + t4443;
  t4481 = Sin(var1[4]);
  t4517 = -1.*t3301*t3671;
  t4527 = t2768*t4352;
  t4542 = t4517 + t4527;
  t4598 = t2768*t3671;
  t4798 = t3301*t4352;
  t4818 = t4598 + t4798;
  t4870 = Cos(var1[5]);
  t4950 = -1.*t4870;
  t4976 = 1. + t4950;
  t4982 = Sin(var1[5]);
  t5045 = t4481*t4542;
  t5056 = t4440*t4818;
  t5071 = t5045 + t5056;
  t5280 = t4440*t4542;
  t5302 = -1.*t4481*t4818;
  t5357 = t5280 + t5302;
  t5397 = Cos(var1[6]);
  t5431 = -1.*t5397;
  t5435 = 1. + t5431;
  t5450 = Sin(var1[6]);
  t5588 = -1.*t4982*t5071;
  t5691 = t4870*t5357;
  t5703 = t5588 + t5691;
  t6324 = t4870*t5071;
  t6390 = t4982*t5357;
  t6412 = t6324 + t6390;
  t304 = -1.*t127;
  t409 = 1. + t304;
  t477 = 0.135*t409;
  t651 = 0.049*t637;
  t702 = 0. + t477 + t651;
  t1838 = -0.049*t1756;
  t2412 = -0.09*t1947;
  t2436 = 0. + t1838 + t2412;
  t2510 = -0.09*t1756;
  t2526 = 0.049*t1947;
  t2554 = 0. + t2510 + t2526;
  t2996 = -0.049*t2841;
  t3403 = -0.21*t3301;
  t3570 = 0. + t2996 + t3403;
  t3937 = -0.21*t2841;
  t4189 = 0.049*t3301;
  t4251 = 0. + t3937 + t4189;
  t4455 = -0.2707*t4446;
  t4486 = 0.0016*t4481;
  t4490 = 0. + t4455 + t4486;
  t6681 = t2502*t1017*t637;
  t6684 = -1.*t11*t1947;
  t6700 = t6681 + t6684;
  t6727 = -1.*t1017*t11;
  t6735 = -1.*t2502*t637*t1947;
  t6744 = t6727 + t6735;
  t4553 = -0.0016*t4446;
  t4559 = -0.2707*t4481;
  t4574 = 0. + t4553 + t4559;
  t4979 = 0.0184*t4976;
  t4990 = -0.7055*t4982;
  t5017 = 0. + t4979 + t4990;
  t6750 = -1.*t3301*t6700;
  t6759 = t2768*t6744;
  t6786 = t6750 + t6759;
  t6844 = t2768*t6700;
  t6851 = t3301*t6744;
  t6898 = t6844 + t6851;
  t5187 = -0.7055*t4976;
  t5203 = -0.0184*t4982;
  t5240 = 0. + t5187 + t5203;
  t5446 = -1.1135*t5435;
  t5555 = 0.0216*t5450;
  t5576 = 0. + t5446 + t5555;
  t6949 = t4481*t6786;
  t7006 = t4440*t6898;
  t7060 = t6949 + t7006;
  t7093 = t4440*t6786;
  t7097 = -1.*t4481*t6898;
  t7104 = t7093 + t7097;
  t5922 = -0.0216*t5435;
  t6169 = -1.1135*t5450;
  t6302 = 0. + t5922 + t6169;
  t7118 = -1.*t4982*t7060;
  t7145 = t4870*t7104;
  t7155 = t7118 + t7145;
  t7173 = t4870*t7060;
  t7175 = t4982*t7104;
  t7179 = t7173 + t7175;
  t7223 = -1.*t2502;
  t7227 = 0. + t7223;
  t6658 = -1.*t2502*t637*t2436;
  t6678 = t11*t2554;
  t6721 = -1.*t3570*t6700;
  t6745 = -1.*t4251*t6744;
  t6822 = -1.*t4490*t6786;
  t6920 = -1.*t4574*t6898;
  t7075 = -1.*t5017*t7060;
  t7112 = -1.*t5240*t7104;
  t7157 = -1.*t5576*t7155;
  t7185 = -1.*t6302*t7179;
  t7188 = t5450*t7155;
  t7192 = t5397*t7179;
  t7198 = t7188 + t7192;
  t7204 = -0.0306*t7198;
  t7205 = t5397*t7155;
  t7207 = -1.*t5450*t7179;
  t7209 = t7205 + t7207;
  t7212 = 1.1312*t7209;
  t7219 = 0. + t11;
  t2445 = -1.*t11*t637*t2436;
  t2627 = -1.*t2502*t2554;
  t3735 = -1.*t3570*t3671;
  t4416 = -1.*t4251*t4352;
  t4552 = -1.*t4490*t4542;
  t4862 = -1.*t4574*t4818;
  t5156 = -1.*t5017*t5071;
  t5377 = -1.*t5240*t5357;
  t5871 = -1.*t5576*t5703;
  t6422 = -1.*t6302*t6412;
  t6432 = t5450*t5703;
  t6435 = t5397*t6412;
  t6437 = t6432 + t6435;
  t6452 = -0.0306*t6437;
  t6486 = t5397*t5703;
  t6507 = -1.*t5450*t6412;
  t6508 = t6486 + t6507;
  t6520 = 1.1312*t6508;
  t7267 = -1.*t127*t1017*t3301;
  t7270 = -1.*t2768*t127*t1947;
  t7271 = t7267 + t7270;
  t7274 = t2768*t127*t1017;
  t7277 = -1.*t127*t3301*t1947;
  t7279 = t7274 + t7277;
  t7283 = t4481*t7271;
  t7284 = t4440*t7279;
  t7289 = t7283 + t7284;
  t7293 = t4440*t7271;
  t7296 = -1.*t4481*t7279;
  t7297 = t7293 + t7296;
  t7305 = -1.*t4982*t7289;
  t7308 = t4870*t7297;
  t7313 = t7305 + t7308;
  t7316 = t4870*t7289;
  t7317 = t4982*t7297;
  t7324 = t7316 + t7317;
  t7255 = 0.049*t127;
  t7256 = t127*t1017*t3570;
  t7257 = 0.004500000000000004*t637;
  t7264 = t127*t2436;
  t7266 = -1.*t127*t4251*t1947;
  t7273 = t4490*t7271;
  t7280 = t4574*t7279;
  t7290 = t5017*t7289;
  t7299 = t5240*t7297;
  t7315 = t5576*t7313;
  t7325 = t6302*t7324;
  t7327 = t5450*t7313;
  t7330 = t5397*t7324;
  t7334 = t7327 + t7330;
  t7338 = 0.0306*t7334;
  t7339 = t5397*t7313;
  t7341 = -1.*t5450*t7324;
  t7344 = t7339 + t7341;
  t7345 = -1.1312*t7344;
  t7346 = 0. + t7255 + t7256 + t7257 + t7264 + t7266 + t7273 + t7280 + t7290 + t7299 + t7315 + t7325 + t7338 + t7345;
  t7361 = t127*t11;
  t7366 = 0. + t7361;
  t7228 = 0.004500000000000004*t2502*t127;
  t7359 = t2502*t127;
  t7360 = 0. + t7359;
  t7238 = 0.004500000000000004*t127*t11;
  t7358 = 0. + t637;
  t7374 = -0.049*t3671;
  t7375 = -0.09*t4352;
  t7380 = 0. + t7238 + t7374 + t3735 + t7375 + t4416 + t4552 + t4862 + t5156 + t5377 + t5871 + t6422 + t6452 + t6520;
  t7386 = 0.049*t127*t1017;
  t7387 = -0.09*t127*t1947;
  t7388 = 0. + t7386 + t7256 + t7257 + t7387 + t7266 + t7273 + t7280 + t7290 + t7299 + t7315 + t7325 + t7338 + t7345;
  t7367 = -0.049*t6700;
  t7368 = -0.09*t6744;
  t7370 = 0. + t7228 + t7367 + t6721 + t7368 + t6745 + t6822 + t6920 + t7075 + t7112 + t7157 + t7185 + t7204 + t7212;
  t7403 = -0.21*t4542;
  t7404 = -0.049*t4818;
  t7408 = 0. + t7403 + t4552 + t7404 + t4862 + t5156 + t5377 + t5871 + t6422 + t6452 + t6520;
  t7412 = 0.21*t7271;
  t7414 = 0.049*t7279;
  t7415 = 0. + t7412 + t7273 + t7414 + t7280 + t7290 + t7299 + t7315 + t7325 + t7338 + t7345;
  t7398 = -0.21*t6786;
  t7399 = -0.049*t6898;
  t7400 = 0. + t7398 + t6822 + t7399 + t6920 + t7075 + t7112 + t7157 + t7185 + t7204 + t7212;
  t7430 = -0.0016*t5071;
  t7431 = -0.2707*t5357;
  t7433 = 0. + t7430 + t5156 + t7431 + t5377 + t5871 + t6422 + t6452 + t6520;
  t7439 = 0.0016*t7289;
  t7440 = 0.2707*t7297;
  t7443 = 0. + t7439 + t7290 + t7440 + t7299 + t7315 + t7325 + t7338 + t7345;
  t7425 = -0.0016*t7060;
  t7426 = -0.2707*t7104;
  t7428 = 0. + t7425 + t7075 + t7426 + t7112 + t7157 + t7185 + t7204 + t7212;
  t7476 = -0.7055*t5703;
  t7479 = 0.0184*t6412;
  t7482 = 0. + t7476 + t5871 + t7479 + t6422 + t6452 + t6520;
  t7487 = 0.7055*t7313;
  t7488 = -0.0184*t7324;
  t7490 = 0. + t7487 + t7315 + t7488 + t7325 + t7338 + t7345;
  t7466 = -0.7055*t7155;
  t7469 = 0.0184*t7179;
  t7473 = 0. + t7466 + t7157 + t7469 + t7185 + t7204 + t7212;
  t7506 = -0.052199999999999996*t6437;
  t7507 = 0.01770000000000005*t6508;
  t7508 = 0. + t7506 + t7507;
  t7515 = 0.052199999999999996*t7334;
  t7529 = -0.01770000000000005*t7344;
  t7530 = 0. + t7515 + t7529;
  t7502 = -0.052199999999999996*t7198;
  t7503 = 0.01770000000000005*t7209;
  t7504 = 0. + t7502 + t7503;
  p_output1[0]=1.;
  p_output1[1]=0.;
  p_output1[2]=0.;
  p_output1[3]=0.;
  p_output1[4]=0. - 1.*(0. + 0.135*t11 - 0.1305*t11*t127 + t2445 + t2627 + t3735 + t4416 + t4552 + t4862 + t5156 + t5377 + t5871 + t6422 + t6452 + t6520 - 1.*t11*t702);
  p_output1[5]=0. + 0.135*t2502 - 0.1305*t127*t2502 + t6658 + t6678 + t6721 + t6745 + t6822 + t6920 - 1.*t2502*t702 + t7075 + t7112 + t7157 + t7185 + t7204 + t7212;
  p_output1[6]=0.;
  p_output1[7]=t7219;
  p_output1[8]=t7227;
  p_output1[9]=-1.*t7227*(0. + 0.09*t11 - 0.049*t2502*t637 + t6658 + t6678 + t6721 + t6745 + t6822 + t6920 + t7075 + t7112 + t7157 + t7185 + t7204 + t7212 + t7228) + t7219*(0. + t2445 - 0.09*t2502 + t2627 + t3735 + t4416 + t4552 + t4862 + t5156 + t5377 + t5871 - 0.049*t11*t637 + t6422 + t6452 + t6520 + t7238);
  p_output1[10]=0. + t7227*t7346;
  p_output1[11]=0. - 1.*t7219*t7346;
  p_output1[12]=t7358;
  p_output1[13]=t7360;
  p_output1[14]=t7366;
  p_output1[15]=-1.*t7366*t7370 + t7360*t7380;
  p_output1[16]=-1.*t7358*t7380 + t7366*t7388;
  p_output1[17]=t7358*t7370 - 1.*t7360*t7388;
  p_output1[18]=t7358;
  p_output1[19]=t7360;
  p_output1[20]=t7366;
  p_output1[21]=-1.*t7366*t7400 + t7360*t7408;
  p_output1[22]=-1.*t7358*t7408 + t7366*t7415;
  p_output1[23]=t7358*t7400 - 1.*t7360*t7415;
  p_output1[24]=t7358;
  p_output1[25]=t7360;
  p_output1[26]=t7366;
  p_output1[27]=-1.*t7366*t7428 + t7360*t7433;
  p_output1[28]=-1.*t7358*t7433 + t7366*t7443;
  p_output1[29]=t7358*t7428 - 1.*t7360*t7443;
  p_output1[30]=t7358;
  p_output1[31]=t7360;
  p_output1[32]=t7366;
  p_output1[33]=-1.*t7366*t7473 + t7360*t7482;
  p_output1[34]=-1.*t7358*t7482 + t7366*t7490;
  p_output1[35]=t7358*t7473 - 1.*t7360*t7490;
  p_output1[36]=t7358;
  p_output1[37]=t7360;
  p_output1[38]=t7366;
  p_output1[39]=-1.*t7366*t7504 + t7360*t7508;
  p_output1[40]=-1.*t7358*t7508 + t7366*t7530;
  p_output1[41]=t7358*t7504 - 1.*t7360*t7530;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
  p_output1[60]=0;
  p_output1[61]=0;
  p_output1[62]=0;
  p_output1[63]=0;
  p_output1[64]=0;
  p_output1[65]=0;
  p_output1[66]=0;
  p_output1[67]=0;
  p_output1[68]=0;
  p_output1[69]=0;
  p_output1[70]=0;
  p_output1[71]=0;
  p_output1[72]=0;
  p_output1[73]=0;
  p_output1[74]=0;
  p_output1[75]=0;
  p_output1[76]=0;
  p_output1[77]=0;
  p_output1[78]=0;
  p_output1[79]=0;
  p_output1[80]=0;
  p_output1[81]=0;
  p_output1[82]=0;
  p_output1[83]=0;
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

#include "J_VectorNav_to_LeftToeBottom_mex.hh"

namespace SymExpression
{

void J_VectorNav_to_LeftToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
