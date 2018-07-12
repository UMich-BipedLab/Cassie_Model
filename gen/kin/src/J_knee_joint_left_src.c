/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:33:05 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "J_knee_joint_left_src.h"

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
  double t709;
  double t823;
  double t840;
  double t682;
  double t845;
  double t104;
  double t758;
  double t904;
  double t905;
  double t1002;
  double t1137;
  double t1205;
  double t1216;
  double t1565;
  double t1604;
  double t1668;
  double t1835;
  double t1329;
  double t1343;
  double t1423;
  double t2035;
  double t2410;
  double t2457;
  double t2463;
  double t2532;
  double t2345;
  double t2351;
  double t2383;
  double t2565;
  double t2570;
  double t2601;
  double t2777;
  double t2797;
  double t2858;
  double t2881;
  double t2990;
  double t3023;
  double t3071;
  double t3294;
  double t3296;
  double t3334;
  double t150;
  double t158;
  double t423;
  double t435;
  double t1265;
  double t1282;
  double t3747;
  double t3782;
  double t3867;
  double t3901;
  double t3924;
  double t3970;
  double t1813;
  double t1857;
  double t1901;
  double t2130;
  double t2190;
  double t2239;
  double t4012;
  double t4023;
  double t4088;
  double t2483;
  double t2541;
  double t2555;
  double t2605;
  double t2617;
  double t2702;
  double t2868;
  double t2907;
  double t2937;
  double t4279;
  double t4302;
  double t4330;
  double t4439;
  double t4449;
  double t4463;
  double t3142;
  double t3267;
  double t3280;
  double t4611;
  double t4722;
  double t4731;
  double t4977;
  double t5018;
  double t5027;
  double t5419;
  double t5481;
  double t5572;
  double t5736;
  double t5748;
  double t5758;
  double t5768;
  double t5785;
  double t5790;
  double t5810;
  double t5823;
  double t5841;
  double t5881;
  double t5898;
  double t5901;
  double t6023;
  double t6044;
  double t6060;
  double t6210;
  double t6229;
  double t6255;
  double t6287;
  double t6291;
  double t6292;
  double t6301;
  double t6302;
  double t6336;
  double t6364;
  double t6375;
  double t6391;
  double t6485;
  double t6488;
  double t6489;
  double t6523;
  double t6529;
  double t6543;
  double t6554;
  double t6569;
  double t6571;
  double t6577;
  double t6579;
  double t6580;
  double t6583;
  double t6586;
  double t6590;
  double t6645;
  double t6662;
  double t6663;
  double t6693;
  double t6697;
  double t6710;
  double t6717;
  double t6720;
  double t6725;
  double t6726;
  double t6731;
  double t6733;
  double t6742;
  double t6745;
  double t6791;
  double t6794;
  double t6798;
  double t6821;
  double t6825;
  double t6827;
  double t6846;
  double t6855;
  double t6859;
  double t6865;
  double t6874;
  double t6876;
  double t6884;
  double t6897;
  double t6951;
  double t6960;
  double t6964;
  double t6976;
  double t6978;
  double t6987;
  double t7004;
  double t7006;
  double t7007;
  double t7012;
  double t7014;
  double t7019;
  double t7092;
  double t7093;
  double t7102;
  double t7105;
  double t7115;
  double t7127;
  double t7132;
  double t7135;
  double t7203;
  double t7206;
  double t7219;
  double t7228;
  double t7229;
  double t7241;
  double t7244;
  double t7257;
  double t7259;
  double t7269;
  double t7278;
  double t7282;
  double t7285;
  double t6966;
  double t6968;
  double t6970;
  double t6996;
  double t7011;
  double t7022;
  double t7024;
  double t7032;
  double t7036;
  double t7042;
  double t7046;
  double t7051;
  double t7052;
  double t7053;
  double t4175;
  double t4177;
  double t4234;
  double t7351;
  double t7353;
  double t7357;
  double t7366;
  double t7385;
  double t7452;
  double t7453;
  double t7456;
  double t7461;
  double t7463;
  double t7473;
  double t7542;
  double t7552;
  double t7557;
  double t7570;
  double t7571;
  double t7577;
  double t7699;
  double t7708;
  double t7720;
  double t5224;
  double t7674;
  double t7675;
  double t7677;
  double t7686;
  double t7691;
  double t7754;
  double t7755;
  double t7757;
  double t7767;
  double t7768;
  double t7769;
  double t7771;
  double t7780;
  double t7782;
  double t7841;
  double t7843;
  double t7852;
  double t7869;
  double t7876;
  double t7877;
  double t7887;
  double t7892;
  double t7898;
  double t5215;
  double t5247;
  double t7741;
  double t7986;
  double t7990;
  double t7995;
  double t8001;
  double t8014;
  double t8046;
  double t8047;
  double t8048;
  double t7795;
  double t7821;
  double t8092;
  double t8093;
  double t8094;
  double t7912;
  double t7941;
  t709 = Cos(var1[5]);
  t823 = Sin(var1[3]);
  t840 = Sin(var1[4]);
  t682 = Cos(var1[3]);
  t845 = Sin(var1[5]);
  t104 = Cos(var1[6]);
  t758 = -1.*t682*t709;
  t904 = -1.*t823*t840*t845;
  t905 = t758 + t904;
  t1002 = -1.*t709*t823*t840;
  t1137 = t682*t845;
  t1205 = t1002 + t1137;
  t1216 = Sin(var1[6]);
  t1565 = Cos(var1[7]);
  t1604 = -1.*t1565;
  t1668 = 1. + t1604;
  t1835 = Sin(var1[7]);
  t1329 = t104*t905;
  t1343 = t1205*t1216;
  t1423 = t1329 + t1343;
  t2035 = Cos(var1[4]);
  t2410 = Cos(var1[8]);
  t2457 = -1.*t2410;
  t2463 = 1. + t2457;
  t2532 = Sin(var1[8]);
  t2345 = -1.*t2035*t1565*t823;
  t2351 = t1423*t1835;
  t2383 = t2345 + t2351;
  t2565 = t104*t1205;
  t2570 = -1.*t905*t1216;
  t2601 = t2565 + t2570;
  t2777 = Cos(var1[9]);
  t2797 = -1.*t2777;
  t2858 = 1. + t2797;
  t2881 = Sin(var1[9]);
  t2990 = t2410*t2383;
  t3023 = t2601*t2532;
  t3071 = t2990 + t3023;
  t3294 = t2410*t2601;
  t3296 = -1.*t2383*t2532;
  t3334 = t3294 + t3296;
  t150 = -1.*t104;
  t158 = 1. + t150;
  t423 = 0.135*t158;
  t435 = 0. + t423;
  t1265 = -0.135*t1216;
  t1282 = 0. + t1265;
  t3747 = -1.*t709*t823;
  t3782 = t682*t840*t845;
  t3867 = t3747 + t3782;
  t3901 = t682*t709*t840;
  t3924 = t823*t845;
  t3970 = t3901 + t3924;
  t1813 = 0.135*t1668;
  t1857 = 0.049*t1835;
  t1901 = 0. + t1813 + t1857;
  t2130 = -0.049*t1668;
  t2190 = 0.135*t1835;
  t2239 = 0. + t2130 + t2190;
  t4012 = t104*t3867;
  t4023 = t3970*t1216;
  t4088 = t4012 + t4023;
  t2483 = -0.049*t2463;
  t2541 = -0.09*t2532;
  t2555 = 0. + t2483 + t2541;
  t2605 = -0.09*t2463;
  t2617 = 0.049*t2532;
  t2702 = 0. + t2605 + t2617;
  t2868 = -0.049*t2858;
  t2907 = -0.21*t2881;
  t2937 = 0. + t2868 + t2907;
  t4279 = t682*t2035*t1565;
  t4302 = t4088*t1835;
  t4330 = t4279 + t4302;
  t4439 = t104*t3970;
  t4449 = -1.*t3867*t1216;
  t4463 = t4439 + t4449;
  t3142 = -0.21*t2858;
  t3267 = 0.049*t2881;
  t3280 = 0. + t3142 + t3267;
  t4611 = t2410*t4330;
  t4722 = t4463*t2532;
  t4731 = t4611 + t4722;
  t4977 = t2410*t4463;
  t5018 = -1.*t4330*t2532;
  t5027 = t4977 + t5018;
  t5419 = t682*t2035*t104*t845;
  t5481 = t682*t2035*t709*t1216;
  t5572 = t5419 + t5481;
  t5736 = -1.*t682*t1565*t840;
  t5748 = t5572*t1835;
  t5758 = t5736 + t5748;
  t5768 = t682*t2035*t709*t104;
  t5785 = -1.*t682*t2035*t845*t1216;
  t5790 = t5768 + t5785;
  t5810 = t2410*t5758;
  t5823 = t5790*t2532;
  t5841 = t5810 + t5823;
  t5881 = t2410*t5790;
  t5898 = -1.*t5758*t2532;
  t5901 = t5881 + t5898;
  t6023 = t2035*t104*t823*t845;
  t6044 = t2035*t709*t823*t1216;
  t6060 = t6023 + t6044;
  t6210 = -1.*t1565*t823*t840;
  t6229 = t6060*t1835;
  t6255 = t6210 + t6229;
  t6287 = t2035*t709*t104*t823;
  t6291 = -1.*t2035*t823*t845*t1216;
  t6292 = t6287 + t6291;
  t6301 = t2410*t6255;
  t6302 = t6292*t2532;
  t6336 = t6301 + t6302;
  t6364 = t2410*t6292;
  t6375 = -1.*t6255*t2532;
  t6391 = t6364 + t6375;
  t6485 = -1.*t104*t840*t845;
  t6488 = -1.*t709*t840*t1216;
  t6489 = t6485 + t6488;
  t6523 = -1.*t2035*t1565;
  t6529 = t6489*t1835;
  t6543 = t6523 + t6529;
  t6554 = -1.*t709*t104*t840;
  t6569 = t840*t845*t1216;
  t6571 = t6554 + t6569;
  t6577 = t2410*t6543;
  t6579 = t6571*t2532;
  t6580 = t6577 + t6579;
  t6583 = t2410*t6571;
  t6586 = -1.*t6543*t2532;
  t6590 = t6583 + t6586;
  t6645 = t709*t823;
  t6662 = -1.*t682*t840*t845;
  t6663 = t6645 + t6662;
  t6693 = t6663*t1216;
  t6697 = t4439 + t6693;
  t6710 = t104*t6663;
  t6717 = -1.*t3970*t1216;
  t6720 = t6710 + t6717;
  t6725 = t2410*t6697*t1835;
  t6726 = t6720*t2532;
  t6731 = t6725 + t6726;
  t6733 = t2410*t6720;
  t6742 = -1.*t6697*t1835*t2532;
  t6745 = t6733 + t6742;
  t6791 = t709*t823*t840;
  t6794 = -1.*t682*t845;
  t6798 = t6791 + t6794;
  t6821 = t104*t6798;
  t6825 = t905*t1216;
  t6827 = t6821 + t6825;
  t6846 = -1.*t6798*t1216;
  t6855 = t1329 + t6846;
  t6859 = t2410*t6827*t1835;
  t6865 = t6855*t2532;
  t6874 = t6859 + t6865;
  t6876 = t2410*t6855;
  t6884 = -1.*t6827*t1835*t2532;
  t6897 = t6876 + t6884;
  t6951 = t2035*t709*t104;
  t6960 = -1.*t2035*t845*t1216;
  t6964 = t6951 + t6960;
  t6976 = -1.*t2035*t104*t845;
  t6978 = -1.*t2035*t709*t1216;
  t6987 = t6976 + t6978;
  t7004 = t2410*t6964*t1835;
  t7006 = t6987*t2532;
  t7007 = t7004 + t7006;
  t7012 = t2410*t6987;
  t7014 = -1.*t6964*t1835*t2532;
  t7019 = t7012 + t7014;
  t7092 = -1.*t104*t3867;
  t7093 = t7092 + t6717;
  t7102 = t2410*t4463*t1835;
  t7105 = t7093*t2532;
  t7115 = t7102 + t7105;
  t7127 = t2410*t7093;
  t7132 = -1.*t4463*t1835*t2532;
  t7135 = t7127 + t7132;
  t7203 = t682*t709;
  t7206 = t823*t840*t845;
  t7219 = t7203 + t7206;
  t7228 = -1.*t7219*t1216;
  t7229 = t6821 + t7228;
  t7241 = -1.*t104*t7219;
  t7244 = t7241 + t6846;
  t7257 = t2410*t7229*t1835;
  t7259 = t7244*t2532;
  t7269 = t7257 + t7259;
  t7278 = t2410*t7244;
  t7282 = -1.*t7229*t1835*t2532;
  t7285 = t7278 + t7282;
  t6966 = 0.1305*t1565*t6964;
  t6968 = t6964*t1901;
  t6970 = t6964*t1835*t2555;
  t6996 = t6987*t2702;
  t7011 = t2937*t7007;
  t7022 = t3280*t7019;
  t7024 = -1.*t2881*t7007;
  t7032 = t2777*t7019;
  t7036 = t7024 + t7032;
  t7042 = -0.21*t7036;
  t7046 = t2777*t7007;
  t7051 = t2881*t7019;
  t7052 = t7046 + t7051;
  t7053 = -0.049*t7052;
  t4175 = t1565*t4088;
  t4177 = -1.*t682*t2035*t1835;
  t4234 = t4175 + t4177;
  t7351 = 0.135*t1565;
  t7353 = -0.049*t1835;
  t7357 = t7351 + t7353;
  t7366 = 0.049*t1565;
  t7385 = t7366 + t2190;
  t7452 = t104*t7219;
  t7453 = t6798*t1216;
  t7456 = t7452 + t7453;
  t7461 = t1565*t7456;
  t7463 = -1.*t2035*t823*t1835;
  t7473 = t7461 + t7463;
  t7542 = t2035*t104*t845;
  t7552 = t2035*t709*t1216;
  t7557 = t7542 + t7552;
  t7570 = t1565*t7557;
  t7571 = t840*t1835;
  t7577 = t7570 + t7571;
  t7699 = -1.*t2410*t4330;
  t7708 = -1.*t4463*t2532;
  t7720 = t7699 + t7708;
  t5224 = t2777*t5027;
  t7674 = 0.049*t2410;
  t7675 = t7674 + t2541;
  t7677 = -0.09*t2410;
  t7686 = -0.049*t2532;
  t7691 = t7677 + t7686;
  t7754 = t2035*t1565*t823;
  t7755 = t7456*t1835;
  t7757 = t7754 + t7755;
  t7767 = -1.*t2410*t7757;
  t7768 = -1.*t7229*t2532;
  t7769 = t7767 + t7768;
  t7771 = t2410*t7229;
  t7780 = -1.*t7757*t2532;
  t7782 = t7771 + t7780;
  t7841 = -1.*t1565*t840;
  t7843 = t7557*t1835;
  t7852 = t7841 + t7843;
  t7869 = -1.*t2410*t7852;
  t7876 = -1.*t6964*t2532;
  t7877 = t7869 + t7876;
  t7887 = t2410*t6964;
  t7892 = -1.*t7852*t2532;
  t7898 = t7887 + t7892;
  t5215 = -1.*t2881*t4731;
  t5247 = t5215 + t5224;
  t7741 = -1.*t2881*t5027;
  t7986 = -0.21*t2777;
  t7990 = -0.049*t2881;
  t7995 = t7986 + t7990;
  t8001 = 0.049*t2777;
  t8014 = t8001 + t2907;
  t8046 = t2410*t7757;
  t8047 = t7229*t2532;
  t8048 = t8046 + t8047;
  t7795 = t2777*t7782;
  t7821 = -1.*t2881*t7782;
  t8092 = t2410*t7852;
  t8093 = t6964*t2532;
  t8094 = t8092 + t8093;
  t7912 = t2777*t7898;
  t7941 = -1.*t2881*t7898;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1205*t1282 + t1423*t1901 + t2383*t2555 + t2601*t2702 + t2937*t3071 + t3280*t3334 - 0.21*(-1.*t2881*t3071 + t2777*t3334) - 0.049*(t2777*t3071 + t2881*t3334) - 1.*t2035*t2239*t823 + 0.1305*(t1423*t1565 + t1835*t2035*t823) + t435*t905;
  p_output1[10]=t1282*t3970 + t1901*t4088 + 0.1305*t4234 + t2555*t4330 + t3867*t435 + t2702*t4463 + t2937*t4731 + t3280*t5027 - 0.049*(t2777*t4731 + t2881*t5027) - 0.21*t5247 + t2035*t2239*t682;
  p_output1[11]=0;
  p_output1[12]=t1901*t5572 + t2555*t5758 + t2702*t5790 + t2937*t5841 + t3280*t5901 - 0.21*(-1.*t2881*t5841 + t2777*t5901) - 0.049*(t2777*t5841 + t2881*t5901) + t1282*t2035*t682*t709 - 1.*t2239*t682*t840 + 0.1305*(t1565*t5572 + t1835*t682*t840) + t2035*t435*t682*t845;
  p_output1[13]=t1901*t6060 + t2555*t6255 + t2702*t6292 + t2937*t6336 + t3280*t6391 - 0.21*(-1.*t2881*t6336 + t2777*t6391) - 0.049*(t2777*t6336 + t2881*t6391) + t1282*t2035*t709*t823 - 1.*t2239*t823*t840 + 0.1305*(t1565*t6060 + t1835*t823*t840) + t2035*t435*t823*t845;
  p_output1[14]=-1.*t2035*t2239 + t1901*t6489 + 0.1305*(t1835*t2035 + t1565*t6489) + t2555*t6543 + t2702*t6571 + t2937*t6580 + t3280*t6590 - 0.21*(-1.*t2881*t6580 + t2777*t6590) - 0.049*(t2777*t6580 + t2881*t6590) - 1.*t1282*t709*t840 - 1.*t435*t840*t845;
  p_output1[15]=t3970*t435 + t1282*t6663 + 0.1305*t1565*t6697 + t1901*t6697 + t1835*t2555*t6697 + t2702*t6720 + t2937*t6731 + t3280*t6745 - 0.21*(-1.*t2881*t6731 + t2777*t6745) - 0.049*(t2777*t6731 + t2881*t6745);
  p_output1[16]=t435*t6798 + 0.1305*t1565*t6827 + t1901*t6827 + t1835*t2555*t6827 + t2702*t6855 + t2937*t6874 + t3280*t6897 - 0.21*(-1.*t2881*t6874 + t2777*t6897) - 0.049*(t2777*t6874 + t2881*t6897) + t1282*t905;
  p_output1[17]=t6966 + t6968 + t6970 + t6996 + t7011 + t7022 + t7042 + t7053 + t2035*t435*t709 - 1.*t1282*t2035*t845;
  p_output1[18]=0.135*t1216*t3867 - 0.135*t104*t3970 + 0.1305*t1565*t4463 + t1901*t4463 + t1835*t2555*t4463 + t2702*t7093 + t2937*t7115 + t3280*t7135 - 0.21*(-1.*t2881*t7115 + t2777*t7135) - 0.049*(t2777*t7115 + t2881*t7135);
  p_output1[19]=-0.135*t104*t6798 + 0.135*t1216*t7219 + 0.1305*t1565*t7229 + t1901*t7229 + t1835*t2555*t7229 + t2702*t7244 + t2937*t7269 + t3280*t7285 - 0.21*(-1.*t2881*t7269 + t2777*t7285) - 0.049*(t2777*t7269 + t2881*t7285);
  p_output1[20]=t6966 + t6968 + t6970 + t6996 + t7011 + t7022 + t7042 + t7053 - 0.135*t104*t2035*t709 + 0.135*t1216*t2035*t845;
  p_output1[21]=t2555*t4234 + t2410*t2937*t4234 - 1.*t2532*t3280*t4234 - 0.21*(-1.*t2532*t2777*t4234 - 1.*t2410*t2881*t4234) - 0.049*(t2410*t2777*t4234 - 1.*t2532*t2881*t4234) + 0.1305*(-1.*t1835*t4088 - 1.*t1565*t2035*t682) + t2035*t682*t7357 + t4088*t7385;
  p_output1[22]=t7385*t7456 + 0.1305*(t2345 - 1.*t1835*t7456) + t2555*t7473 + t2410*t2937*t7473 - 1.*t2532*t3280*t7473 - 0.21*(-1.*t2532*t2777*t7473 - 1.*t2410*t2881*t7473) - 0.049*(t2410*t2777*t7473 - 1.*t2532*t2881*t7473) + t2035*t7357*t823;
  p_output1[23]=t7385*t7557 + t2555*t7577 + t2410*t2937*t7577 - 1.*t2532*t3280*t7577 - 0.21*(-1.*t2532*t2777*t7577 - 1.*t2410*t2881*t7577) - 0.049*(t2410*t2777*t7577 - 1.*t2532*t2881*t7577) - 1.*t7357*t840 + 0.1305*(-1.*t1835*t7557 + t1565*t840);
  p_output1[24]=t2937*t5027 + t4463*t7675 + t4330*t7691 + t3280*t7720 - 0.049*(t5224 + t2881*t7720) - 0.21*(t2777*t7720 + t7741);
  p_output1[25]=t7229*t7675 + t7691*t7757 + t3280*t7769 + t2937*t7782 - 0.049*(t2881*t7769 + t7795) - 0.21*(t2777*t7769 + t7821);
  p_output1[26]=t6964*t7675 + t7691*t7852 + t3280*t7877 + t2937*t7898 - 0.049*(t2881*t7877 + t7912) - 0.21*(t2777*t7877 + t7941);
  p_output1[27]=-0.049*t5247 - 0.21*(-1.*t2777*t4731 + t7741) + t4731*t7995 + t5027*t8014;
  p_output1[28]=t7782*t8014 + t7995*t8048 - 0.21*(t7821 - 1.*t2777*t8048) - 0.049*(t7795 - 1.*t2881*t8048);
  p_output1[29]=t7898*t8014 + t7995*t8094 - 0.21*(t7941 - 1.*t2777*t8094) - 0.049*(t7912 - 1.*t2881*t8094);
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



void J_knee_joint_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
