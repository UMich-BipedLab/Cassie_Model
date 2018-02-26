/*
 * Automatically Generated from Mathematica.
 * Mon 26 Feb 2018 15:43:10 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_LeftToeBottom_to_RightToeBottom.h"

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
static void output1(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  double t622;
  double t876;
  double t752;
  double t754;
  double t923;
  double t999;
  double t777;
  double t937;
  double t948;
  double t619;
  double t1020;
  double t1034;
  double t1080;
  double t1149;
  double t973;
  double t1086;
  double t1099;
  double t393;
  double t1165;
  double t1174;
  double t1175;
  double t1213;
  double t1121;
  double t1197;
  double t1204;
  double t381;
  double t1243;
  double t1260;
  double t1265;
  double t1435;
  double t1427;
  double t1430;
  double t1434;
  double t1440;
  double t1483;
  double t1520;
  double t1605;
  double t1654;
  double t1490;
  double t1742;
  double t1840;
  double t2018;
  double t2147;
  double t2152;
  double t1858;
  double t2187;
  double t2192;
  double t2247;
  double t2263;
  double t2319;
  double t2226;
  double t2361;
  double t2363;
  double t2531;
  double t2537;
  double t2595;
  double t1211;
  double t1273;
  double t1302;
  double t1319;
  double t1345;
  double t1366;
  double t2449;
  double t2596;
  double t2610;
  double t2638;
  double t2651;
  double t2678;
  double t2965;
  double t3006;
  double t3034;
  double t3094;
  double t3224;
  double t3293;
  double t3082;
  double t3318;
  double t3381;
  double t3429;
  double t3438;
  double t3448;
  double t3386;
  double t3450;
  double t3484;
  double t3535;
  double t3624;
  double t3672;
  double t3507;
  double t3705;
  double t3738;
  double t3768;
  double t3779;
  double t3818;
  double t2796;
  double t2797;
  double t2881;
  double t2618;
  double t2722;
  double t2729;
  double t3741;
  double t3829;
  double t3843;
  double t3886;
  double t3900;
  double t3962;
  double t1314;
  double t1369;
  double t1388;
  double t2888;
  double t2889;
  double t2939;
  double t2795;
  double t2960;
  double t61;
  double t4217;
  double t4255;
  double t4306;
  double t3849;
  double t3970;
  double t4041;
  double t4137;
  double t4156;
  double t4164;
  double t4168;
  double t4361;
  double t4405;
  double t4423;
  double t4462;
  double t4525;
  double t4538;
  double t4548;
  double t4555;
  double t152;
  double t4777;
  double t4588;
  double t6027;
  double t6080;
  double t6016;
  double t6158;
  double t6221;
  double t6236;
  double t6062;
  double t6084;
  double t6115;
  double t6249;
  double t5951;
  double t6335;
  double t6390;
  double t6392;
  double t6132;
  double t6253;
  double t6264;
  double t6394;
  double t5927;
  double t6531;
  double t6648;
  double t6701;
  double t6289;
  double t6401;
  double t6420;
  double t6709;
  double t5874;
  double t6885;
  double t6915;
  double t7072;
  double t6441;
  double t6729;
  double t6757;
  double t7115;
  double t2963;
  double t8628;
  double t8732;
  double t8741;
  double t7739;
  double t7748;
  double t7947;
  double t8855;
  double t8859;
  double t8863;
  double t8584;
  double t8794;
  double t8835;
  double t8909;
  double t8935;
  double t8948;
  double t8839;
  double t8867;
  double t8876;
  double t9012;
  double t9014;
  double t9015;
  double t8896;
  double t8955;
  double t8968;
  double t4670;
  double t4673;
  double t4724;
  double t9072;
  double t9077;
  double t9079;
  double t9063;
  double t9065;
  double t9067;
  double t9092;
  double t9093;
  double t9094;
  double t9069;
  double t9080;
  double t9084;
  double t9102;
  double t9105;
  double t9108;
  double t9091;
  double t9095;
  double t9096;
  double t4779;
  double t4803;
  double t4804;
  double t6831;
  double t7126;
  double t7180;
  double t7249;
  double t7303;
  double t7576;
  double t7597;
  double t7625;
  double t7632;
  double t4883;
  double t4893;
  double t4923;
  double t9099;
  double t9112;
  double t9113;
  double t9115;
  double t9117;
  double t9118;
  double t9119;
  double t9121;
  double t9122;
  double t5140;
  double t5146;
  double t5201;
  double t9000;
  double t9019;
  double t9031;
  double t9044;
  double t9051;
  double t9055;
  double t9056;
  double t9057;
  double t9061;
  double t5286;
  double t5309;
  double t5322;
  double t5457;
  double t5482;
  double t5516;
  double t5545;
  double t5631;
  double t5738;
  double t5749;
  double t9166;
  double t9169;
  double t9181;
  double t9194;
  double t9197;
  double t9198;
  double t9183;
  double t9185;
  double t9187;
  t622 = Cos(var1[1]);
  t876 = Cos(var1[3]);
  t752 = Cos(var1[2]);
  t754 = Sin(var1[3]);
  t923 = Sin(var1[2]);
  t999 = Cos(var1[4]);
  t777 = -1.*t622*t752*t754;
  t937 = -1.*t876*t622*t923;
  t948 = t777 + t937;
  t619 = Sin(var1[4]);
  t1020 = t876*t622*t752;
  t1034 = -1.*t622*t754*t923;
  t1080 = t1020 + t1034;
  t1149 = Cos(var1[5]);
  t973 = t619*t948;
  t1086 = t999*t1080;
  t1099 = t973 + t1086;
  t393 = Sin(var1[5]);
  t1165 = t999*t948;
  t1174 = -1.*t619*t1080;
  t1175 = t1165 + t1174;
  t1213 = Cos(var1[6]);
  t1121 = -1.*t393*t1099;
  t1197 = t1149*t1175;
  t1204 = t1121 + t1197;
  t381 = Sin(var1[6]);
  t1243 = t1149*t1099;
  t1260 = t393*t1175;
  t1265 = t1243 + t1260;
  t1435 = Sin(var1[0]);
  t1427 = Cos(var1[0]);
  t1430 = Sin(var1[1]);
  t1434 = t1427*t752*t1430;
  t1440 = -1.*t1435*t923;
  t1483 = t1434 + t1440;
  t1520 = -1.*t752*t1435;
  t1605 = -1.*t1427*t1430*t923;
  t1654 = t1520 + t1605;
  t1490 = -1.*t754*t1483;
  t1742 = t876*t1654;
  t1840 = t1490 + t1742;
  t2018 = t876*t1483;
  t2147 = t754*t1654;
  t2152 = t2018 + t2147;
  t1858 = t619*t1840;
  t2187 = t999*t2152;
  t2192 = t1858 + t2187;
  t2247 = t999*t1840;
  t2263 = -1.*t619*t2152;
  t2319 = t2247 + t2263;
  t2226 = -1.*t393*t2192;
  t2361 = t1149*t2319;
  t2363 = t2226 + t2361;
  t2531 = t1149*t2192;
  t2537 = t393*t2319;
  t2595 = t2531 + t2537;
  t1211 = t381*t1204;
  t1273 = t1213*t1265;
  t1302 = t1211 + t1273;
  t1319 = t1213*t1204;
  t1345 = -1.*t381*t1265;
  t1366 = t1319 + t1345;
  t2449 = t381*t2363;
  t2596 = t1213*t2595;
  t2610 = t2449 + t2596;
  t2638 = t1213*t2363;
  t2651 = -1.*t381*t2595;
  t2678 = t2638 + t2651;
  t2965 = t752*t1435*t1430;
  t3006 = t1427*t923;
  t3034 = t2965 + t3006;
  t3094 = t1427*t752;
  t3224 = -1.*t1435*t1430*t923;
  t3293 = t3094 + t3224;
  t3082 = -1.*t754*t3034;
  t3318 = t876*t3293;
  t3381 = t3082 + t3318;
  t3429 = t876*t3034;
  t3438 = t754*t3293;
  t3448 = t3429 + t3438;
  t3386 = t619*t3381;
  t3450 = t999*t3448;
  t3484 = t3386 + t3450;
  t3535 = t999*t3381;
  t3624 = -1.*t619*t3448;
  t3672 = t3535 + t3624;
  t3507 = -1.*t393*t3484;
  t3705 = t1149*t3672;
  t3738 = t3507 + t3705;
  t3768 = t1149*t3484;
  t3779 = t393*t3672;
  t3818 = t3768 + t3779;
  t2796 = -0.766044*t1302;
  t2797 = 0.642788*t1366;
  t2881 = t2796 + t2797;
  t2618 = -0.766044*t2610;
  t2722 = 0.642788*t2678;
  t2729 = t2618 + t2722;
  t3741 = t381*t3738;
  t3829 = t1213*t3818;
  t3843 = t3741 + t3829;
  t3886 = t1213*t3738;
  t3900 = -1.*t381*t3818;
  t3962 = t3886 + t3900;
  t1314 = 0.642788*t1302;
  t1369 = 0.766044*t1366;
  t1388 = t1314 + t1369;
  t2888 = 0.642788*t2610;
  t2889 = 0.766044*t2678;
  t2939 = t2888 + t2889;
  t2795 = t1388*t2729;
  t2960 = -1.*t2881*t2939;
  t61 = Cos(var1[8]);
  t4217 = -0.766044*t3843;
  t4255 = 0.642788*t3962;
  t4306 = t4217 + t4255;
  t3849 = 0.642788*t3843;
  t3970 = 0.766044*t3962;
  t4041 = t3849 + t3970;
  t4137 = t1427*t622*t2881;
  t4156 = t1430*t2729;
  t4164 = t4137 + t4156;
  t4168 = -1.*t4041*t4164;
  t4361 = t1427*t622*t1388;
  t4405 = t1430*t2939;
  t4423 = t4361 + t4405;
  t4462 = t4306*t4423;
  t4525 = t2795 + t2960;
  t4538 = -1.*t622*t1435*t4525;
  t4548 = 0. + t4168 + t4462 + t4538;
  t4555 = 1/t4548;
  t152 = Sin(var1[7]);
  t4777 = Sin(var1[8]);
  t4588 = Cos(var1[7]);
  t6027 = Cos(var1[9]);
  t6080 = Sin(var1[9]);
  t6016 = Cos(var1[10]);
  t6158 = t4588*t6027;
  t6221 = -1.*t152*t4777*t6080;
  t6236 = t6158 + t6221;
  t6062 = t6027*t152*t4777;
  t6084 = t4588*t6080;
  t6115 = t6062 + t6084;
  t6249 = Sin(var1[10]);
  t5951 = Cos(var1[11]);
  t6335 = t6016*t6236;
  t6390 = -1.*t6115*t6249;
  t6392 = t6335 + t6390;
  t6132 = t6016*t6115;
  t6253 = t6236*t6249;
  t6264 = t6132 + t6253;
  t6394 = Sin(var1[11]);
  t5927 = Cos(var1[12]);
  t6531 = t5951*t6392;
  t6648 = -1.*t6264*t6394;
  t6701 = t6531 + t6648;
  t6289 = t5951*t6264;
  t6401 = t6392*t6394;
  t6420 = t6289 + t6401;
  t6709 = Sin(var1[12]);
  t5874 = Cos(var1[13]);
  t6885 = t5927*t6701;
  t6915 = -1.*t6420*t6709;
  t7072 = t6885 + t6915;
  t6441 = t5927*t6420;
  t6729 = t6701*t6709;
  t6757 = t6441 + t6729;
  t7115 = Sin(var1[13]);
  t2963 = 0. + t2795 + t2960;
  t8628 = -1.*t6027*t152;
  t8732 = -1.*t4588*t4777*t6080;
  t8741 = t8628 + t8732;
  t7739 = t4588*t6027*t4777;
  t7748 = -1.*t152*t6080;
  t7947 = t7739 + t7748;
  t8855 = t6016*t8741;
  t8859 = -1.*t7947*t6249;
  t8863 = t8855 + t8859;
  t8584 = t6016*t7947;
  t8794 = t8741*t6249;
  t8835 = t8584 + t8794;
  t8909 = t5951*t8863;
  t8935 = -1.*t8835*t6394;
  t8948 = t8909 + t8935;
  t8839 = t5951*t8835;
  t8867 = t8863*t6394;
  t8876 = t8839 + t8867;
  t9012 = t5927*t8948;
  t9014 = -1.*t8876*t6709;
  t9015 = t9012 + t9014;
  t8896 = t5927*t8876;
  t8955 = t8948*t6709;
  t8968 = t8896 + t8955;
  t4670 = -1.*t1388*t4306;
  t4673 = t2881*t4041;
  t4724 = 0. + t4670 + t4673;
  t9072 = -1.*t61*t6016*t6080;
  t9077 = -1.*t61*t6027*t6249;
  t9079 = t9072 + t9077;
  t9063 = t61*t6027*t6016;
  t9065 = -1.*t61*t6080*t6249;
  t9067 = t9063 + t9065;
  t9092 = t5951*t9079;
  t9093 = -1.*t9067*t6394;
  t9094 = t9092 + t9093;
  t9069 = t5951*t9067;
  t9080 = t9079*t6394;
  t9084 = t9069 + t9080;
  t9102 = t5927*t9094;
  t9105 = -1.*t9084*t6709;
  t9108 = t9102 + t9105;
  t9091 = t5927*t9084;
  t9095 = t9094*t6709;
  t9096 = t9091 + t9095;
  t4779 = t2939*t4306;
  t4803 = -1.*t2729*t4041;
  t4804 = 0. + t4779 + t4803;
  t6831 = t5874*t6757;
  t7126 = t7072*t7115;
  t7180 = t6831 + t7126;
  t7249 = 0.642788*t7180;
  t7303 = t5874*t7072;
  t7576 = -1.*t6757*t7115;
  t7597 = t7303 + t7576;
  t7625 = 0.766044*t7597;
  t7632 = t7249 + t7625;
  t4883 = -1.*t1427*t622*t2881;
  t4893 = -1.*t1430*t2729;
  t4923 = 0. + t4883 + t4893;
  t9099 = t5874*t9096;
  t9112 = t9108*t7115;
  t9113 = t9099 + t9112;
  t9115 = 0.642788*t9113;
  t9117 = t5874*t9108;
  t9118 = -1.*t9096*t7115;
  t9119 = t9117 + t9118;
  t9121 = 0.766044*t9119;
  t9122 = t9115 + t9121;
  t5140 = -1.*t622*t1435*t2729;
  t5146 = t1427*t622*t4306;
  t5201 = 0. + t5140 + t5146;
  t9000 = t5874*t8968;
  t9019 = t9015*t7115;
  t9031 = t9000 + t9019;
  t9044 = 0.642788*t9031;
  t9051 = t5874*t9015;
  t9055 = -1.*t8968*t7115;
  t9056 = t9051 + t9055;
  t9057 = 0.766044*t9056;
  t9061 = t9044 + t9057;
  t5286 = t622*t1435*t2881;
  t5309 = t1430*t4306;
  t5322 = 0. + t5286 + t5309;
  t5457 = 0. + t4361 + t4405;
  t5482 = t622*t1435*t2939;
  t5516 = -1.*t1427*t622*t4041;
  t5545 = 0. + t5482 + t5516;
  t5631 = -1.*t622*t1435*t1388;
  t5738 = -1.*t1430*t4041;
  t5749 = 0. + t5631 + t5738;
  t9166 = -0.766044*t7180;
  t9169 = 0.642788*t7597;
  t9181 = t9166 + t9169;
  t9194 = -0.766044*t9113;
  t9197 = 0.642788*t9119;
  t9198 = t9194 + t9197;
  t9183 = -0.766044*t9031;
  t9185 = 0.642788*t9056;
  t9187 = t9183 + t9185;

  p_output1(0)=0. + t4555*t4777*t4804 - 1.*t152*t2963*t4555*t61 - 1.*t4555*t4588*t4724*t61;
  p_output1(1)=0. + t4555*t4777*t5201 - 1.*t152*t4555*t4923*t61 - 1.*t4555*t4588*t5322*t61;
  p_output1(2)=0. + t4555*t4777*t5545 - 1.*t152*t4555*t5457*t61 - 1.*t4555*t4588*t5749*t61;
  p_output1(3)=0. + t2963*t4555*t7632 + t4555*t4724*t9061 + t4555*t4804*t9122;
  p_output1(4)=0. + t4555*t4923*t7632 + t4555*t5322*t9061 + t4555*t5201*t9122;
  p_output1(5)=0. + t4555*t5457*t7632 + t4555*t5749*t9061 + t4555*t5545*t9122;
  p_output1(6)=0. + t2963*t4555*t9181 + t4555*t4724*t9187 + t4555*t4804*t9198;
  p_output1(7)=0. + t4555*t4923*t9181 + t4555*t5322*t9187 + t4555*t5201*t9198;
  p_output1(8)=0. + t4555*t5457*t9181 + t4555*t5749*t9187 + t4555*t5545*t9198;
}


       
void R_LeftToeBottom_to_RightToeBottom(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
