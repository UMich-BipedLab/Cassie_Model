/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:33:04 GMT-04:00
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
  double t1175;
  double t1545;
  double t1660;
  double t1099;
  double t1741;
  double t35;
  double t1243;
  double t1999;
  double t2071;
  double t2165;
  double t2345;
  double t2457;
  double t2469;
  double t3047;
  double t3087;
  double t3179;
  double t3485;
  double t2729;
  double t2797;
  double t2907;
  double t3854;
  double t4676;
  double t4901;
  double t5001;
  double t5321;
  double t4478;
  double t4561;
  double t4607;
  double t5419;
  double t5462;
  double t5481;
  double t5621;
  double t5643;
  double t5650;
  double t5670;
  double t5763;
  double t5768;
  double t5769;
  double t5841;
  double t5863;
  double t5872;
  double t278;
  double t507;
  double t845;
  double t1046;
  double t2483;
  double t2486;
  double t5936;
  double t5944;
  double t5965;
  double t6005;
  double t6010;
  double t6037;
  double t3267;
  double t3566;
  double t3577;
  double t3867;
  double t3970;
  double t3991;
  double t6080;
  double t6126;
  double t6145;
  double t5224;
  double t5337;
  double t5361;
  double t5572;
  double t5581;
  double t5584;
  double t5666;
  double t5748;
  double t5758;
  double t6210;
  double t6229;
  double t6247;
  double t6256;
  double t6259;
  double t6269;
  double t5800;
  double t5810;
  double t5820;
  double t6291;
  double t6292;
  double t6293;
  double t6301;
  double t6320;
  double t6321;
  double t6444;
  double t6450;
  double t6457;
  double t6500;
  double t6505;
  double t6508;
  double t6514;
  double t6519;
  double t6521;
  double t6529;
  double t6543;
  double t6546;
  double t6554;
  double t6560;
  double t6565;
  double t6616;
  double t6617;
  double t6618;
  double t6642;
  double t6645;
  double t6646;
  double t6663;
  double t6672;
  double t6684;
  double t6697;
  double t6704;
  double t6705;
  double t6710;
  double t6712;
  double t6713;
  double t6758;
  double t6759;
  double t6770;
  double t6797;
  double t6798;
  double t6800;
  double t6806;
  double t6812;
  double t6821;
  double t6833;
  double t6839;
  double t6842;
  double t6846;
  double t6852;
  double t6854;
  double t6927;
  double t6928;
  double t6930;
  double t6940;
  double t6941;
  double t6951;
  double t6956;
  double t6960;
  double t6968;
  double t6970;
  double t6975;
  double t6987;
  double t6998;
  double t6999;
  double t7042;
  double t7043;
  double t7045;
  double t7053;
  double t7057;
  double t7058;
  double t7079;
  double t7087;
  double t7092;
  double t7093;
  double t7096;
  double t7102;
  double t7114;
  double t7116;
  double t7170;
  double t7177;
  double t7182;
  double t7192;
  double t7193;
  double t7200;
  double t7203;
  double t7206;
  double t7208;
  double t7219;
  double t7222;
  double t7224;
  double t7275;
  double t7278;
  double t7285;
  double t7287;
  double t7288;
  double t7308;
  double t7309;
  double t7312;
  double t7357;
  double t7359;
  double t7365;
  double t7379;
  double t7381;
  double t7394;
  double t7396;
  double t7400;
  double t7401;
  double t7405;
  double t7415;
  double t7419;
  double t7420;
  double t7183;
  double t7189;
  double t7190;
  double t7202;
  double t7214;
  double t7226;
  double t7227;
  double t7228;
  double t7229;
  double t7231;
  double t7238;
  double t7239;
  double t7241;
  double t7242;
  double t6180;
  double t6189;
  double t6200;
  double t7461;
  double t7463;
  double t7468;
  double t7476;
  double t7483;
  double t7571;
  double t7577;
  double t7578;
  double t7586;
  double t7591;
  double t7604;
  double t7676;
  double t7677;
  double t7681;
  double t7691;
  double t7694;
  double t7712;
  double t7787;
  double t7789;
  double t7791;
  double t6363;
  double t7768;
  double t7769;
  double t7771;
  double t7780;
  double t7782;
  double t7843;
  double t7852;
  double t7859;
  double t7864;
  double t7865;
  double t7869;
  double t7877;
  double t7878;
  double t7881;
  double t7927;
  double t7930;
  double t7935;
  double t7950;
  double t7955;
  double t7959;
  double t7966;
  double t7972;
  double t7985;
  double t6362;
  double t6364;
  double t7828;
  double t8032;
  double t8034;
  double t8045;
  double t8047;
  double t8048;
  double t8070;
  double t8079;
  double t8083;
  double t7888;
  double t7901;
  double t8127;
  double t8131;
  double t8134;
  double t7994;
  double t8004;
  t1175 = Cos(var1[5]);
  t1545 = Sin(var1[3]);
  t1660 = Sin(var1[4]);
  t1099 = Cos(var1[3]);
  t1741 = Sin(var1[5]);
  t35 = Cos(var1[6]);
  t1243 = -1.*t1099*t1175;
  t1999 = -1.*t1545*t1660*t1741;
  t2071 = t1243 + t1999;
  t2165 = -1.*t1175*t1545*t1660;
  t2345 = t1099*t1741;
  t2457 = t2165 + t2345;
  t2469 = Sin(var1[6]);
  t3047 = Cos(var1[7]);
  t3087 = -1.*t3047;
  t3179 = 1. + t3087;
  t3485 = Sin(var1[7]);
  t2729 = t35*t2071;
  t2797 = t2457*t2469;
  t2907 = t2729 + t2797;
  t3854 = Cos(var1[4]);
  t4676 = Cos(var1[8]);
  t4901 = -1.*t4676;
  t5001 = 1. + t4901;
  t5321 = Sin(var1[8]);
  t4478 = -1.*t3854*t3047*t1545;
  t4561 = t2907*t3485;
  t4607 = t4478 + t4561;
  t5419 = t35*t2457;
  t5462 = -1.*t2071*t2469;
  t5481 = t5419 + t5462;
  t5621 = Cos(var1[9]);
  t5643 = -1.*t5621;
  t5650 = 1. + t5643;
  t5670 = Sin(var1[9]);
  t5763 = t4676*t4607;
  t5768 = t5481*t5321;
  t5769 = t5763 + t5768;
  t5841 = t4676*t5481;
  t5863 = -1.*t4607*t5321;
  t5872 = t5841 + t5863;
  t278 = -1.*t35;
  t507 = 1. + t278;
  t845 = 0.135*t507;
  t1046 = 0. + t845;
  t2483 = -0.135*t2469;
  t2486 = 0. + t2483;
  t5936 = -1.*t1175*t1545;
  t5944 = t1099*t1660*t1741;
  t5965 = t5936 + t5944;
  t6005 = t1099*t1175*t1660;
  t6010 = t1545*t1741;
  t6037 = t6005 + t6010;
  t3267 = 0.135*t3179;
  t3566 = 0.049*t3485;
  t3577 = 0. + t3267 + t3566;
  t3867 = -0.049*t3179;
  t3970 = 0.135*t3485;
  t3991 = 0. + t3867 + t3970;
  t6080 = t35*t5965;
  t6126 = t6037*t2469;
  t6145 = t6080 + t6126;
  t5224 = -0.049*t5001;
  t5337 = -0.09*t5321;
  t5361 = 0. + t5224 + t5337;
  t5572 = -0.09*t5001;
  t5581 = 0.049*t5321;
  t5584 = 0. + t5572 + t5581;
  t5666 = -0.049*t5650;
  t5748 = -0.21*t5670;
  t5758 = 0. + t5666 + t5748;
  t6210 = t1099*t3854*t3047;
  t6229 = t6145*t3485;
  t6247 = t6210 + t6229;
  t6256 = t35*t6037;
  t6259 = -1.*t5965*t2469;
  t6269 = t6256 + t6259;
  t5800 = -0.21*t5650;
  t5810 = 0.049*t5670;
  t5820 = 0. + t5800 + t5810;
  t6291 = t4676*t6247;
  t6292 = t6269*t5321;
  t6293 = t6291 + t6292;
  t6301 = t4676*t6269;
  t6320 = -1.*t6247*t5321;
  t6321 = t6301 + t6320;
  t6444 = t1099*t3854*t35*t1741;
  t6450 = t1099*t3854*t1175*t2469;
  t6457 = t6444 + t6450;
  t6500 = -1.*t1099*t3047*t1660;
  t6505 = t6457*t3485;
  t6508 = t6500 + t6505;
  t6514 = t1099*t3854*t1175*t35;
  t6519 = -1.*t1099*t3854*t1741*t2469;
  t6521 = t6514 + t6519;
  t6529 = t4676*t6508;
  t6543 = t6521*t5321;
  t6546 = t6529 + t6543;
  t6554 = t4676*t6521;
  t6560 = -1.*t6508*t5321;
  t6565 = t6554 + t6560;
  t6616 = t3854*t35*t1545*t1741;
  t6617 = t3854*t1175*t1545*t2469;
  t6618 = t6616 + t6617;
  t6642 = -1.*t3047*t1545*t1660;
  t6645 = t6618*t3485;
  t6646 = t6642 + t6645;
  t6663 = t3854*t1175*t35*t1545;
  t6672 = -1.*t3854*t1545*t1741*t2469;
  t6684 = t6663 + t6672;
  t6697 = t4676*t6646;
  t6704 = t6684*t5321;
  t6705 = t6697 + t6704;
  t6710 = t4676*t6684;
  t6712 = -1.*t6646*t5321;
  t6713 = t6710 + t6712;
  t6758 = -1.*t35*t1660*t1741;
  t6759 = -1.*t1175*t1660*t2469;
  t6770 = t6758 + t6759;
  t6797 = -1.*t3854*t3047;
  t6798 = t6770*t3485;
  t6800 = t6797 + t6798;
  t6806 = -1.*t1175*t35*t1660;
  t6812 = t1660*t1741*t2469;
  t6821 = t6806 + t6812;
  t6833 = t4676*t6800;
  t6839 = t6821*t5321;
  t6842 = t6833 + t6839;
  t6846 = t4676*t6821;
  t6852 = -1.*t6800*t5321;
  t6854 = t6846 + t6852;
  t6927 = t1175*t1545;
  t6928 = -1.*t1099*t1660*t1741;
  t6930 = t6927 + t6928;
  t6940 = t6930*t2469;
  t6941 = t6256 + t6940;
  t6951 = t35*t6930;
  t6956 = -1.*t6037*t2469;
  t6960 = t6951 + t6956;
  t6968 = t4676*t6941*t3485;
  t6970 = t6960*t5321;
  t6975 = t6968 + t6970;
  t6987 = t4676*t6960;
  t6998 = -1.*t6941*t3485*t5321;
  t6999 = t6987 + t6998;
  t7042 = t1175*t1545*t1660;
  t7043 = -1.*t1099*t1741;
  t7045 = t7042 + t7043;
  t7053 = t35*t7045;
  t7057 = t2071*t2469;
  t7058 = t7053 + t7057;
  t7079 = -1.*t7045*t2469;
  t7087 = t2729 + t7079;
  t7092 = t4676*t7058*t3485;
  t7093 = t7087*t5321;
  t7096 = t7092 + t7093;
  t7102 = t4676*t7087;
  t7114 = -1.*t7058*t3485*t5321;
  t7116 = t7102 + t7114;
  t7170 = t3854*t1175*t35;
  t7177 = -1.*t3854*t1741*t2469;
  t7182 = t7170 + t7177;
  t7192 = -1.*t3854*t35*t1741;
  t7193 = -1.*t3854*t1175*t2469;
  t7200 = t7192 + t7193;
  t7203 = t4676*t7182*t3485;
  t7206 = t7200*t5321;
  t7208 = t7203 + t7206;
  t7219 = t4676*t7200;
  t7222 = -1.*t7182*t3485*t5321;
  t7224 = t7219 + t7222;
  t7275 = -1.*t35*t5965;
  t7278 = t7275 + t6956;
  t7285 = t4676*t6269*t3485;
  t7287 = t7278*t5321;
  t7288 = t7285 + t7287;
  t7308 = t4676*t7278;
  t7309 = -1.*t6269*t3485*t5321;
  t7312 = t7308 + t7309;
  t7357 = t1099*t1175;
  t7359 = t1545*t1660*t1741;
  t7365 = t7357 + t7359;
  t7379 = -1.*t7365*t2469;
  t7381 = t7053 + t7379;
  t7394 = -1.*t35*t7365;
  t7396 = t7394 + t7079;
  t7400 = t4676*t7381*t3485;
  t7401 = t7396*t5321;
  t7405 = t7400 + t7401;
  t7415 = t4676*t7396;
  t7419 = -1.*t7381*t3485*t5321;
  t7420 = t7415 + t7419;
  t7183 = 0.1305*t3047*t7182;
  t7189 = t7182*t3577;
  t7190 = t7182*t3485*t5361;
  t7202 = t7200*t5584;
  t7214 = t5758*t7208;
  t7226 = t5820*t7224;
  t7227 = -1.*t5670*t7208;
  t7228 = t5621*t7224;
  t7229 = t7227 + t7228;
  t7231 = -0.21*t7229;
  t7238 = t5621*t7208;
  t7239 = t5670*t7224;
  t7241 = t7238 + t7239;
  t7242 = -0.049*t7241;
  t6180 = t3047*t6145;
  t6189 = -1.*t1099*t3854*t3485;
  t6200 = t6180 + t6189;
  t7461 = 0.135*t3047;
  t7463 = -0.049*t3485;
  t7468 = t7461 + t7463;
  t7476 = 0.049*t3047;
  t7483 = t7476 + t3970;
  t7571 = t35*t7365;
  t7577 = t7045*t2469;
  t7578 = t7571 + t7577;
  t7586 = t3047*t7578;
  t7591 = -1.*t3854*t1545*t3485;
  t7604 = t7586 + t7591;
  t7676 = t3854*t35*t1741;
  t7677 = t3854*t1175*t2469;
  t7681 = t7676 + t7677;
  t7691 = t3047*t7681;
  t7694 = t1660*t3485;
  t7712 = t7691 + t7694;
  t7787 = -1.*t4676*t6247;
  t7789 = -1.*t6269*t5321;
  t7791 = t7787 + t7789;
  t6363 = t5621*t6321;
  t7768 = 0.049*t4676;
  t7769 = t7768 + t5337;
  t7771 = -0.09*t4676;
  t7780 = -0.049*t5321;
  t7782 = t7771 + t7780;
  t7843 = t3854*t3047*t1545;
  t7852 = t7578*t3485;
  t7859 = t7843 + t7852;
  t7864 = -1.*t4676*t7859;
  t7865 = -1.*t7381*t5321;
  t7869 = t7864 + t7865;
  t7877 = t4676*t7381;
  t7878 = -1.*t7859*t5321;
  t7881 = t7877 + t7878;
  t7927 = -1.*t3047*t1660;
  t7930 = t7681*t3485;
  t7935 = t7927 + t7930;
  t7950 = -1.*t4676*t7935;
  t7955 = -1.*t7182*t5321;
  t7959 = t7950 + t7955;
  t7966 = t4676*t7182;
  t7972 = -1.*t7935*t5321;
  t7985 = t7966 + t7972;
  t6362 = -1.*t5670*t6293;
  t6364 = t6362 + t6363;
  t7828 = -1.*t5670*t6321;
  t8032 = -0.21*t5621;
  t8034 = -0.049*t5670;
  t8045 = t8032 + t8034;
  t8047 = 0.049*t5621;
  t8048 = t8047 + t5748;
  t8070 = t4676*t7859;
  t8079 = t7381*t5321;
  t8083 = t8070 + t8079;
  t7888 = t5621*t7881;
  t7901 = -1.*t5670*t7881;
  t8127 = t4676*t7935;
  t8131 = t7182*t5321;
  t8134 = t8127 + t8131;
  t7994 = t5621*t7985;
  t8004 = -1.*t5670*t7985;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1046*t2071 + t2457*t2486 + t2907*t3577 + 0.1305*(t2907*t3047 + t1545*t3485*t3854) - 1.*t1545*t3854*t3991 + t4607*t5361 + t5481*t5584 + t5758*t5769 + t5820*t5872 - 0.21*(-1.*t5670*t5769 + t5621*t5872) - 0.049*(t5621*t5769 + t5670*t5872);
  p_output1[10]=t1099*t3854*t3991 + t1046*t5965 + t2486*t6037 + t3577*t6145 + 0.1305*t6200 + t5361*t6247 + t5584*t6269 + t5758*t6293 + t5820*t6321 - 0.049*(t5621*t6293 + t5670*t6321) - 0.21*t6364;
  p_output1[11]=0;
  p_output1[12]=t1046*t1099*t1741*t3854 + t1099*t1175*t2486*t3854 - 1.*t1099*t1660*t3991 + t3577*t6457 + 0.1305*(t1099*t1660*t3485 + t3047*t6457) + t5361*t6508 + t5584*t6521 + t5758*t6546 + t5820*t6565 - 0.21*(-1.*t5670*t6546 + t5621*t6565) - 0.049*(t5621*t6546 + t5670*t6565);
  p_output1[13]=t1046*t1545*t1741*t3854 + t1175*t1545*t2486*t3854 - 1.*t1545*t1660*t3991 + t3577*t6618 + 0.1305*(t1545*t1660*t3485 + t3047*t6618) + t5361*t6646 + t5584*t6684 + t5758*t6705 + t5820*t6713 - 0.21*(-1.*t5670*t6705 + t5621*t6713) - 0.049*(t5621*t6705 + t5670*t6713);
  p_output1[14]=-1.*t1046*t1660*t1741 - 1.*t1175*t1660*t2486 - 1.*t3854*t3991 + t3577*t6770 + 0.1305*(t3485*t3854 + t3047*t6770) + t5361*t6800 + t5584*t6821 + t5758*t6842 + t5820*t6854 - 0.21*(-1.*t5670*t6842 + t5621*t6854) - 0.049*(t5621*t6842 + t5670*t6854);
  p_output1[15]=t1046*t6037 + t2486*t6930 + 0.1305*t3047*t6941 + t3577*t6941 + t3485*t5361*t6941 + t5584*t6960 + t5758*t6975 + t5820*t6999 - 0.21*(-1.*t5670*t6975 + t5621*t6999) - 0.049*(t5621*t6975 + t5670*t6999);
  p_output1[16]=t2071*t2486 + t1046*t7045 + 0.1305*t3047*t7058 + t3577*t7058 + t3485*t5361*t7058 + t5584*t7087 + t5758*t7096 + t5820*t7116 - 0.21*(-1.*t5670*t7096 + t5621*t7116) - 0.049*(t5621*t7096 + t5670*t7116);
  p_output1[17]=t1046*t1175*t3854 - 1.*t1741*t2486*t3854 + t7183 + t7189 + t7190 + t7202 + t7214 + t7226 + t7231 + t7242;
  p_output1[18]=0.135*t2469*t5965 - 0.135*t35*t6037 + 0.1305*t3047*t6269 + t3577*t6269 + t3485*t5361*t6269 + t5584*t7278 + t5758*t7288 + t5820*t7312 - 0.21*(-1.*t5670*t7288 + t5621*t7312) - 0.049*(t5621*t7288 + t5670*t7312);
  p_output1[19]=-0.135*t35*t7045 + 0.135*t2469*t7365 + 0.1305*t3047*t7381 + t3577*t7381 + t3485*t5361*t7381 + t5584*t7396 + t5758*t7405 + t5820*t7420 - 0.21*(-1.*t5670*t7405 + t5621*t7420) - 0.049*(t5621*t7405 + t5670*t7420);
  p_output1[20]=0.135*t1741*t2469*t3854 - 0.135*t1175*t35*t3854 + t7183 + t7189 + t7190 + t7202 + t7214 + t7226 + t7231 + t7242;
  p_output1[21]=0.1305*(-1.*t1099*t3047*t3854 - 1.*t3485*t6145) + t5361*t6200 + t4676*t5758*t6200 - 1.*t5321*t5820*t6200 - 0.21*(-1.*t5321*t5621*t6200 - 1.*t4676*t5670*t6200) - 0.049*(t4676*t5621*t6200 - 1.*t5321*t5670*t6200) + t1099*t3854*t7468 + t6145*t7483;
  p_output1[22]=t1545*t3854*t7468 + t7483*t7578 + 0.1305*(t4478 - 1.*t3485*t7578) + t5361*t7604 + t4676*t5758*t7604 - 1.*t5321*t5820*t7604 - 0.21*(-1.*t5321*t5621*t7604 - 1.*t4676*t5670*t7604) - 0.049*(t4676*t5621*t7604 - 1.*t5321*t5670*t7604);
  p_output1[23]=-1.*t1660*t7468 + t7483*t7681 + 0.1305*(t1660*t3047 - 1.*t3485*t7681) + t5361*t7712 + t4676*t5758*t7712 - 1.*t5321*t5820*t7712 - 0.21*(-1.*t5321*t5621*t7712 - 1.*t4676*t5670*t7712) - 0.049*(t4676*t5621*t7712 - 1.*t5321*t5670*t7712);
  p_output1[24]=t5758*t6321 + t6269*t7769 + t6247*t7782 + t5820*t7791 - 0.049*(t6363 + t5670*t7791) - 0.21*(t5621*t7791 + t7828);
  p_output1[25]=t7381*t7769 + t7782*t7859 + t5820*t7869 + t5758*t7881 - 0.049*(t5670*t7869 + t7888) - 0.21*(t5621*t7869 + t7901);
  p_output1[26]=t7182*t7769 + t7782*t7935 + t5820*t7959 + t5758*t7985 - 0.049*(t5670*t7959 + t7994) - 0.21*(t5621*t7959 + t8004);
  p_output1[27]=-0.049*t6364 - 0.21*(-1.*t5621*t6293 + t7828) + t6293*t8045 + t6321*t8048;
  p_output1[28]=t7881*t8048 + t8045*t8083 - 0.21*(t7901 - 1.*t5621*t8083) - 0.049*(t7888 - 1.*t5670*t8083);
  p_output1[29]=t7985*t8048 + t8045*t8134 - 0.21*(t8004 - 1.*t5621*t8134) - 0.049*(t7994 - 1.*t5670*t8134);
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
    ( !(mrows == 20 && ncols == 1) && 
      !(mrows == 1 && ncols == 20))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 20, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_knee_joint_left_mex.hh"

namespace SymExpression
{

void J_knee_joint_left_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
