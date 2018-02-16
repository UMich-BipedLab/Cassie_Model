/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:17:18 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jv_VectorNav_to_RightToeBottom_src.h"

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
  double t65;
  double t158;
  double t420;
  double t588;
  double t735;
  double t774;
  double t868;
  double t972;
  double t1297;
  double t1337;
  double t1361;
  double t1379;
  double t1260;
  double t1263;
  double t1290;
  double t1491;
  double t1559;
  double t1603;
  double t1934;
  double t2118;
  double t2179;
  double t2255;
  double t1781;
  double t1849;
  double t1880;
  double t2333;
  double t2344;
  double t2354;
  double t2480;
  double t2499;
  double t2542;
  double t2574;
  double t2432;
  double t2437;
  double t2441;
  double t2689;
  double t2726;
  double t2727;
  double t2807;
  double t2818;
  double t2834;
  double t2844;
  double t2788;
  double t2798;
  double t2804;
  double t2866;
  double t2867;
  double t2877;
  double t307;
  double t312;
  double t412;
  double t452;
  double t463;
  double t803;
  double t872;
  double t933;
  double t981;
  double t1076;
  double t1111;
  double t1377;
  double t1388;
  double t1391;
  double t1715;
  double t1729;
  double t1753;
  double t3005;
  double t3006;
  double t3009;
  double t3019;
  double t3029;
  double t3030;
  double t2244;
  double t2299;
  double t2323;
  double t2355;
  double t2356;
  double t2366;
  double t3034;
  double t3041;
  double t3054;
  double t3071;
  double t3090;
  double t3104;
  double t2571;
  double t2611;
  double t2617;
  double t2728;
  double t2740;
  double t2758;
  double t3123;
  double t3130;
  double t3162;
  double t3165;
  double t3176;
  double t3180;
  double t2837;
  double t2849;
  double t2850;
  double t2889;
  double t2894;
  double t2896;
  double t3194;
  double t3203;
  double t3207;
  double t3210;
  double t3220;
  double t3221;
  double t3003;
  double t3004;
  double t3015;
  double t3032;
  double t3058;
  double t3121;
  double t3163;
  double t3190;
  double t3208;
  double t3230;
  double t3252;
  double t3265;
  double t3270;
  double t3280;
  double t3319;
  double t3322;
  double t3326;
  double t3327;
  double t962;
  double t1139;
  double t1457;
  double t1758;
  double t2331;
  double t2410;
  double t2668;
  double t2772;
  double t2861;
  double t2899;
  double t2908;
  double t2927;
  double t2928;
  double t2934;
  double t2936;
  double t2940;
  double t2941;
  double t2942;
  double t3358;
  double t3365;
  double t3535;
  double t3545;
  double t3555;
  double t3567;
  double t3571;
  double t3591;
  double t3621;
  double t3630;
  double t3631;
  double t3660;
  double t3675;
  double t3679;
  double t3720;
  double t3722;
  double t3723;
  double t3737;
  double t3739;
  double t3763;
  double t3421;
  double t3498;
  double t3517;
  double t3523;
  double t3527;
  double t3528;
  double t3559;
  double t3602;
  double t3632;
  double t3694;
  double t3725;
  double t3783;
  double t3796;
  double t3799;
  double t3805;
  double t3859;
  double t3870;
  double t3883;
  double t3911;
  double t3939;
  double t3973;
  double t3367;
  double t3445;
  double t4060;
  double t4072;
  double t4399;
  double t4404;
  double t4437;
  double t4375;
  double t4385;
  double t4577;
  double t4647;
  double t4658;
  double t4852;
  double t4107;
  double t4126;
  double t4333;
  double t5171;
  double t5194;
  double t5215;
  double t5379;
  double t5397;
  double t5401;
  double t4982;
  double t5134;
  double t5165;
  double t5689;
  double t5691;
  double t5710;
  double t5737;
  double t5748;
  double t5753;
  double t5647;
  double t5648;
  double t5649;
  double t6250;
  double t6265;
  double t6280;
  double t6293;
  double t6302;
  double t6306;
  double t5935;
  double t5942;
  double t6103;
  double t6738;
  double t6804;
  double t6839;
  double t6898;
  double t6929;
  double t6936;
  double t6548;
  double t6589;
  double t6590;
  t65 = Sin(var1[7]);
  t158 = Cos(var1[8]);
  t420 = Sin(var1[8]);
  t588 = Cos(var1[9]);
  t735 = -1.*t588;
  t774 = 1. + t735;
  t868 = Sin(var1[9]);
  t972 = Cos(var1[7]);
  t1297 = Cos(var1[10]);
  t1337 = -1.*t1297;
  t1361 = 1. + t1337;
  t1379 = Sin(var1[10]);
  t1260 = t588*t65*t420;
  t1263 = t972*t868;
  t1290 = t1260 + t1263;
  t1491 = t972*t588;
  t1559 = -1.*t65*t420*t868;
  t1603 = t1491 + t1559;
  t1934 = Cos(var1[11]);
  t2118 = -1.*t1934;
  t2179 = 1. + t2118;
  t2255 = Sin(var1[11]);
  t1781 = t1297*t1290;
  t1849 = t1603*t1379;
  t1880 = t1781 + t1849;
  t2333 = t1297*t1603;
  t2344 = -1.*t1290*t1379;
  t2354 = t2333 + t2344;
  t2480 = Cos(var1[12]);
  t2499 = -1.*t2480;
  t2542 = 1. + t2499;
  t2574 = Sin(var1[12]);
  t2432 = t1934*t1880;
  t2437 = t2354*t2255;
  t2441 = t2432 + t2437;
  t2689 = t1934*t2354;
  t2726 = -1.*t1880*t2255;
  t2727 = t2689 + t2726;
  t2807 = Cos(var1[13]);
  t2818 = -1.*t2807;
  t2834 = 1. + t2818;
  t2844 = Sin(var1[13]);
  t2788 = t2480*t2441;
  t2798 = t2727*t2574;
  t2804 = t2788 + t2798;
  t2866 = t2480*t2727;
  t2867 = -1.*t2441*t2574;
  t2877 = t2866 + t2867;
  t307 = -1.*t158;
  t312 = 1. + t307;
  t412 = -0.135*t312;
  t452 = 0.049*t420;
  t463 = 0. + t412 + t452;
  t803 = -0.049*t774;
  t872 = -0.09*t868;
  t933 = 0. + t803 + t872;
  t981 = -0.09*t774;
  t1076 = 0.049*t868;
  t1111 = 0. + t981 + t1076;
  t1377 = -0.049*t1361;
  t1388 = -0.21*t1379;
  t1391 = 0. + t1377 + t1388;
  t1715 = -0.21*t1361;
  t1729 = 0.049*t1379;
  t1753 = 0. + t1715 + t1729;
  t3005 = t972*t588*t420;
  t3006 = -1.*t65*t868;
  t3009 = t3005 + t3006;
  t3019 = -1.*t588*t65;
  t3029 = -1.*t972*t420*t868;
  t3030 = t3019 + t3029;
  t2244 = -0.0016*t2179;
  t2299 = -0.2707*t2255;
  t2323 = 0. + t2244 + t2299;
  t2355 = -0.2707*t2179;
  t2356 = 0.0016*t2255;
  t2366 = 0. + t2355 + t2356;
  t3034 = t1297*t3009;
  t3041 = t3030*t1379;
  t3054 = t3034 + t3041;
  t3071 = t1297*t3030;
  t3090 = -1.*t3009*t1379;
  t3104 = t3071 + t3090;
  t2571 = 0.0184*t2542;
  t2611 = -0.7055*t2574;
  t2617 = 0. + t2571 + t2611;
  t2728 = -0.7055*t2542;
  t2740 = -0.0184*t2574;
  t2758 = 0. + t2728 + t2740;
  t3123 = t1934*t3054;
  t3130 = t3104*t2255;
  t3162 = t3123 + t3130;
  t3165 = t1934*t3104;
  t3176 = -1.*t3054*t2255;
  t3180 = t3165 + t3176;
  t2837 = -0.0216*t2834;
  t2849 = -1.1135*t2844;
  t2850 = 0. + t2837 + t2849;
  t2889 = -1.1135*t2834;
  t2894 = 0.0216*t2844;
  t2896 = 0. + t2889 + t2894;
  t3194 = t2480*t3162;
  t3203 = t3180*t2574;
  t3207 = t3194 + t3203;
  t3210 = t2480*t3180;
  t3220 = -1.*t3162*t2574;
  t3221 = t3210 + t3220;
  t3003 = -1.*t972*t420*t933;
  t3004 = t65*t1111;
  t3015 = -1.*t3009*t1391;
  t3032 = -1.*t3030*t1753;
  t3058 = -1.*t3054*t2323;
  t3121 = -1.*t3104*t2366;
  t3163 = -1.*t3162*t2617;
  t3190 = -1.*t3180*t2758;
  t3208 = -1.*t3207*t2850;
  t3230 = -1.*t3221*t2896;
  t3252 = t2807*t3207;
  t3265 = t3221*t2844;
  t3270 = t3252 + t3265;
  t3280 = -0.0306*t3270;
  t3319 = t2807*t3221;
  t3322 = -1.*t3207*t2844;
  t3326 = t3319 + t3322;
  t3327 = 1.1312*t3326;
  t962 = -1.*t65*t420*t933;
  t1139 = -1.*t972*t1111;
  t1457 = -1.*t1290*t1391;
  t1758 = -1.*t1603*t1753;
  t2331 = -1.*t1880*t2323;
  t2410 = -1.*t2354*t2366;
  t2668 = -1.*t2441*t2617;
  t2772 = -1.*t2727*t2758;
  t2861 = -1.*t2804*t2850;
  t2899 = -1.*t2877*t2896;
  t2908 = t2807*t2804;
  t2927 = t2877*t2844;
  t2928 = t2908 + t2927;
  t2934 = -0.0306*t2928;
  t2936 = t2807*t2877;
  t2940 = -1.*t2804*t2844;
  t2941 = t2936 + t2940;
  t2942 = 1.1312*t2941;
  t3358 = -1.*t972;
  t3365 = 0. + t3358;
  t3535 = t158*t588*t1297;
  t3545 = -1.*t158*t868*t1379;
  t3555 = t3535 + t3545;
  t3567 = -1.*t158*t1297*t868;
  t3571 = -1.*t158*t588*t1379;
  t3591 = t3567 + t3571;
  t3621 = t1934*t3555;
  t3630 = t3591*t2255;
  t3631 = t3621 + t3630;
  t3660 = t1934*t3591;
  t3675 = -1.*t3555*t2255;
  t3679 = t3660 + t3675;
  t3720 = t2480*t3631;
  t3722 = t3679*t2574;
  t3723 = t3720 + t3722;
  t3737 = t2480*t3679;
  t3739 = -1.*t3631*t2574;
  t3763 = t3737 + t3739;
  t3421 = 0. + t65;
  t3498 = 0.049*t158;
  t3517 = -0.004500000000000004*t420;
  t3523 = t158*t933;
  t3527 = t158*t588*t1391;
  t3528 = -1.*t158*t868*t1753;
  t3559 = t3555*t2323;
  t3602 = t3591*t2366;
  t3632 = t3631*t2617;
  t3694 = t3679*t2758;
  t3725 = t3723*t2850;
  t3783 = t3763*t2896;
  t3796 = t2807*t3723;
  t3799 = t3763*t2844;
  t3805 = t3796 + t3799;
  t3859 = 0.0306*t3805;
  t3870 = t2807*t3763;
  t3883 = -1.*t3723*t2844;
  t3911 = t3870 + t3883;
  t3939 = -1.1312*t3911;
  t3973 = 0. + t3498 + t3517 + t3523 + t3527 + t3528 + t3559 + t3602 + t3632 + t3694 + t3725 + t3783 + t3859 + t3939;
  t3367 = -0.004500000000000004*t972*t158;
  t3445 = -0.004500000000000004*t158*t65;
  t4060 = t158*t65;
  t4072 = 0. + t4060;
  t4399 = -0.049*t1290;
  t4404 = -0.09*t1603;
  t4437 = 0. + t3445 + t4399 + t4404 + t1457 + t1758 + t2331 + t2410 + t2668 + t2772 + t2861 + t2899 + t2934 + t2942;
  t4375 = t972*t158;
  t4385 = 0. + t4375;
  t4577 = 0.049*t158*t588;
  t4647 = -0.09*t158*t868;
  t4658 = 0. + t4577 + t3517 + t4647 + t3527 + t3528 + t3559 + t3602 + t3632 + t3694 + t3725 + t3783 + t3859 + t3939;
  t4852 = 0. + t420;
  t4107 = -0.049*t3009;
  t4126 = -0.09*t3030;
  t4333 = 0. + t3367 + t4107 + t4126 + t3015 + t3032 + t3058 + t3121 + t3163 + t3190 + t3208 + t3230 + t3280 + t3327;
  t5171 = -0.21*t2354;
  t5194 = -0.049*t1880;
  t5215 = 0. + t5171 + t5194 + t2331 + t2410 + t2668 + t2772 + t2861 + t2899 + t2934 + t2942;
  t5379 = 0.21*t3591;
  t5397 = 0.049*t3555;
  t5401 = 0. + t5379 + t5397 + t3559 + t3602 + t3632 + t3694 + t3725 + t3783 + t3859 + t3939;
  t4982 = -0.21*t3104;
  t5134 = -0.049*t3054;
  t5165 = 0. + t4982 + t5134 + t3058 + t3121 + t3163 + t3190 + t3208 + t3230 + t3280 + t3327;
  t5689 = -0.0016*t2441;
  t5691 = -0.2707*t2727;
  t5710 = 0. + t5689 + t5691 + t2668 + t2772 + t2861 + t2899 + t2934 + t2942;
  t5737 = 0.0016*t3631;
  t5748 = 0.2707*t3679;
  t5753 = 0. + t5737 + t5748 + t3632 + t3694 + t3725 + t3783 + t3859 + t3939;
  t5647 = -0.0016*t3162;
  t5648 = -0.2707*t3180;
  t5649 = 0. + t5647 + t5648 + t3163 + t3190 + t3208 + t3230 + t3280 + t3327;
  t6250 = -0.7055*t2877;
  t6265 = 0.0184*t2804;
  t6280 = 0. + t6250 + t6265 + t2861 + t2899 + t2934 + t2942;
  t6293 = 0.7055*t3763;
  t6302 = -0.0184*t3723;
  t6306 = 0. + t6293 + t6302 + t3725 + t3783 + t3859 + t3939;
  t5935 = -0.7055*t3221;
  t5942 = 0.0184*t3207;
  t6103 = 0. + t5935 + t5942 + t3208 + t3230 + t3280 + t3327;
  t6738 = -0.052199999999999996*t2928;
  t6804 = 0.01770000000000005*t2941;
  t6839 = 0. + t6738 + t6804;
  t6898 = 0.052199999999999996*t3805;
  t6929 = -0.01770000000000005*t3911;
  t6936 = 0. + t6898 + t6929;
  t6548 = -0.052199999999999996*t3270;
  t6589 = 0.01770000000000005*t3326;
  t6590 = 0. + t6548 + t6589;
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
  p_output1[21]=0.;
  p_output1[22]=0. - 1.*(0. + t1139 + t1457 + t1758 + t2331 + t2410 + t2668 + t2772 + t2861 + t2899 + t2934 + t2942 - 0.135*t65 + 0.1305*t158*t65 - 1.*t463*t65 + t962);
  p_output1[23]=0. + t3003 + t3004 + t3015 + t3032 + t3058 + t3121 + t3163 + t3190 + t3208 + t3230 + t3280 + t3327 - 0.135*t972 + 0.1305*t158*t972 - 1.*t463*t972;
  p_output1[24]=t3421*(0. + t1139 + t1457 + t1758 + t2331 + t2410 + t2668 + t2772 + t2861 + t2899 + t2934 + t2942 + t3445 - 0.049*t420*t65 + t962 - 0.09*t972) - 1.*t3365*(0. + t3003 + t3004 + t3015 + t3032 + t3058 + t3121 + t3163 + t3190 + t3208 + t3230 + t3280 + t3327 + t3367 + 0.09*t65 - 0.049*t420*t972);
  p_output1[25]=0. + t3365*t3973;
  p_output1[26]=0. - 1.*t3421*t3973;
  p_output1[27]=-1.*t4072*t4333 + t4385*t4437;
  p_output1[28]=t4072*t4658 - 1.*t4437*t4852;
  p_output1[29]=-1.*t4385*t4658 + t4333*t4852;
  p_output1[30]=-1.*t4072*t5165 + t4385*t5215;
  p_output1[31]=-1.*t4852*t5215 + t4072*t5401;
  p_output1[32]=t4852*t5165 - 1.*t4385*t5401;
  p_output1[33]=-1.*t4072*t5649 + t4385*t5710;
  p_output1[34]=-1.*t4852*t5710 + t4072*t5753;
  p_output1[35]=t4852*t5649 - 1.*t4385*t5753;
  p_output1[36]=-1.*t4072*t6103 + t4385*t6280;
  p_output1[37]=-1.*t4852*t6280 + t4072*t6306;
  p_output1[38]=t4852*t6103 - 1.*t4385*t6306;
  p_output1[39]=-1.*t4072*t6590 + t4385*t6839;
  p_output1[40]=-1.*t4852*t6839 + t4072*t6936;
  p_output1[41]=t4852*t6590 - 1.*t4385*t6936;
}



void Jv_VectorNav_to_RightToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
