/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:15:41 GMT-05:00
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
  double t3592;
  double t4023;
  double t4011;
  double t4015;
  double t4027;
  double t1824;
  double t2271;
  double t2319;
  double t2621;
  double t4005;
  double t4019;
  double t4031;
  double t4035;
  double t4043;
  double t6309;
  double t6563;
  double t7565;
  double t226;
  double t7627;
  double t7633;
  double t7634;
  double t7648;
  double t7650;
  double t7651;
  double t7655;
  double t7664;
  double t7667;
  double t7669;
  double t7690;
  double t7693;
  double t7694;
  double t7697;
  double t7703;
  double t7707;
  double t7710;
  double t7715;
  double t7716;
  double t7717;
  double t7727;
  double t7728;
  double t7729;
  double t2615;
  double t2965;
  double t2969;
  double t4006;
  double t4007;
  double t4269;
  double t4543;
  double t5487;
  double t5497;
  double t7609;
  double t7617;
  double t7619;
  double t7752;
  double t7753;
  double t7755;
  double t7758;
  double t7759;
  double t7760;
  double t7653;
  double t7656;
  double t7658;
  double t7762;
  double t7764;
  double t7765;
  double t7685;
  double t7687;
  double t7688;
  double t7708;
  double t7711;
  double t7713;
  double t7768;
  double t7769;
  double t7771;
  double t7784;
  double t7785;
  double t7786;
  double t7723;
  double t7724;
  double t7726;
  double t7788;
  double t7789;
  double t7790;
  double t7792;
  double t7793;
  double t7794;
  double t7811;
  double t7813;
  double t7814;
  double t7818;
  double t7819;
  double t7820;
  double t7826;
  double t7827;
  double t7828;
  double t7830;
  double t7831;
  double t7832;
  double t7834;
  double t7835;
  double t7836;
  double t7850;
  double t7851;
  double t7852;
  double t7854;
  double t7855;
  double t7856;
  double t7862;
  double t7863;
  double t7864;
  double t7866;
  double t7867;
  double t7868;
  double t7870;
  double t7871;
  double t7872;
  double t7886;
  double t7887;
  double t7888;
  double t7890;
  double t7891;
  double t7892;
  double t7898;
  double t7899;
  double t7900;
  double t7902;
  double t7903;
  double t7904;
  double t7906;
  double t7907;
  double t7908;
  double t7920;
  double t7921;
  double t7922;
  double t7928;
  double t7929;
  double t7924;
  double t7925;
  double t7926;
  double t7933;
  double t7934;
  double t7935;
  double t7937;
  double t7938;
  double t7939;
  double t7950;
  double t7951;
  double t7952;
  double t7958;
  double t7959;
  double t7960;
  double t7955;
  double t7956;
  double t7964;
  double t7965;
  double t7966;
  double t7968;
  double t7969;
  double t7970;
  double t7987;
  double t7988;
  double t7989;
  double t7983;
  double t7984;
  double t7985;
  double t7993;
  double t7994;
  double t7995;
  double t7997;
  double t7998;
  double t7999;
  double t8012;
  double t8013;
  double t8018;
  double t8019;
  double t8020;
  double t8022;
  double t8023;
  double t8024;
  double t8036;
  double t8037;
  double t8038;
  double t8043;
  double t8044;
  double t8040;
  double t8041;
  double t8048;
  double t8049;
  double t8050;
  double t8052;
  double t8053;
  double t8054;
  double t7986;
  double t7990;
  double t7991;
  double t7992;
  double t7996;
  double t8000;
  double t8001;
  double t8002;
  double t8003;
  double t8004;
  double t8005;
  double t8006;
  double t8007;
  double t8008;
  double t7775;
  double t7781;
  double t7782;
  double t8068;
  double t8069;
  double t8070;
  double t8072;
  double t8073;
  double t8092;
  double t8093;
  double t8094;
  double t8096;
  double t8097;
  double t8098;
  double t8115;
  double t8116;
  double t8117;
  double t8119;
  double t8120;
  double t8121;
  double t8145;
  double t8146;
  double t8147;
  double t7797;
  double t8138;
  double t8139;
  double t8141;
  double t8142;
  double t8143;
  double t8159;
  double t8160;
  double t8161;
  double t8163;
  double t8164;
  double t8165;
  double t8167;
  double t8168;
  double t8169;
  double t8181;
  double t8182;
  double t8183;
  double t8185;
  double t8186;
  double t8187;
  double t8189;
  double t8190;
  double t8191;
  double t7796;
  double t7798;
  double t8154;
  double t8202;
  double t8203;
  double t8204;
  double t8206;
  double t8207;
  double t8214;
  double t8215;
  double t8216;
  double t8172;
  double t8176;
  double t8226;
  double t8227;
  double t8228;
  double t8194;
  double t8198;
  t3592 = Sin(var1[3]);
  t4023 = Cos(var1[3]);
  t4011 = Cos(var1[5]);
  t4015 = Sin(var1[4]);
  t4027 = Sin(var1[5]);
  t1824 = Cos(var1[14]);
  t2271 = -1.*t1824;
  t2319 = 1. + t2271;
  t2621 = Sin(var1[14]);
  t4005 = Sin(var1[13]);
  t4019 = -1.*t4011*t3592*t4015;
  t4031 = t4023*t4027;
  t4035 = t4019 + t4031;
  t4043 = Cos(var1[13]);
  t6309 = -1.*t4023*t4011;
  t6563 = -1.*t3592*t4015*t4027;
  t7565 = t6309 + t6563;
  t226 = Cos(var1[4]);
  t7627 = t4005*t4035;
  t7633 = t4043*t7565;
  t7634 = t7627 + t7633;
  t7648 = Cos(var1[15]);
  t7650 = -1.*t7648;
  t7651 = 1. + t7650;
  t7655 = Sin(var1[15]);
  t7664 = t4043*t4035;
  t7667 = -1.*t4005*t7565;
  t7669 = t7664 + t7667;
  t7690 = -1.*t1824*t226*t3592;
  t7693 = t2621*t7634;
  t7694 = t7690 + t7693;
  t7697 = Cos(var1[16]);
  t7703 = -1.*t7697;
  t7707 = 1. + t7703;
  t7710 = Sin(var1[16]);
  t7715 = t7655*t7669;
  t7716 = t7648*t7694;
  t7717 = t7715 + t7716;
  t7727 = t7648*t7669;
  t7728 = -1.*t7655*t7694;
  t7729 = t7727 + t7728;
  t2615 = -0.049*t2319;
  t2965 = -0.135*t2621;
  t2969 = 0. + t2615 + t2965;
  t4006 = 0.135*t4005;
  t4007 = 0. + t4006;
  t4269 = -1.*t4043;
  t4543 = 1. + t4269;
  t5487 = -0.135*t4543;
  t5497 = 0. + t5487;
  t7609 = -0.135*t2319;
  t7617 = 0.049*t2621;
  t7619 = 0. + t7609 + t7617;
  t7752 = t4023*t4011*t4015;
  t7753 = t3592*t4027;
  t7755 = t7752 + t7753;
  t7758 = -1.*t4011*t3592;
  t7759 = t4023*t4015*t4027;
  t7760 = t7758 + t7759;
  t7653 = -0.09*t7651;
  t7656 = 0.049*t7655;
  t7658 = 0. + t7653 + t7656;
  t7762 = t4005*t7755;
  t7764 = t4043*t7760;
  t7765 = t7762 + t7764;
  t7685 = -0.049*t7651;
  t7687 = -0.09*t7655;
  t7688 = 0. + t7685 + t7687;
  t7708 = -0.049*t7707;
  t7711 = -0.21*t7710;
  t7713 = 0. + t7708 + t7711;
  t7768 = t4043*t7755;
  t7769 = -1.*t4005*t7760;
  t7771 = t7768 + t7769;
  t7784 = t1824*t4023*t226;
  t7785 = t2621*t7765;
  t7786 = t7784 + t7785;
  t7723 = -0.21*t7707;
  t7724 = 0.049*t7710;
  t7726 = 0. + t7723 + t7724;
  t7788 = t7655*t7771;
  t7789 = t7648*t7786;
  t7790 = t7788 + t7789;
  t7792 = t7648*t7771;
  t7793 = -1.*t7655*t7786;
  t7794 = t7792 + t7793;
  t7811 = t4023*t226*t4011*t4005;
  t7813 = t4043*t4023*t226*t4027;
  t7814 = t7811 + t7813;
  t7818 = t4043*t4023*t226*t4011;
  t7819 = -1.*t4023*t226*t4005*t4027;
  t7820 = t7818 + t7819;
  t7826 = -1.*t1824*t4023*t4015;
  t7827 = t2621*t7814;
  t7828 = t7826 + t7827;
  t7830 = t7655*t7820;
  t7831 = t7648*t7828;
  t7832 = t7830 + t7831;
  t7834 = t7648*t7820;
  t7835 = -1.*t7655*t7828;
  t7836 = t7834 + t7835;
  t7850 = t226*t4011*t4005*t3592;
  t7851 = t4043*t226*t3592*t4027;
  t7852 = t7850 + t7851;
  t7854 = t4043*t226*t4011*t3592;
  t7855 = -1.*t226*t4005*t3592*t4027;
  t7856 = t7854 + t7855;
  t7862 = -1.*t1824*t3592*t4015;
  t7863 = t2621*t7852;
  t7864 = t7862 + t7863;
  t7866 = t7655*t7856;
  t7867 = t7648*t7864;
  t7868 = t7866 + t7867;
  t7870 = t7648*t7856;
  t7871 = -1.*t7655*t7864;
  t7872 = t7870 + t7871;
  t7886 = -1.*t4011*t4005*t4015;
  t7887 = -1.*t4043*t4015*t4027;
  t7888 = t7886 + t7887;
  t7890 = -1.*t4043*t4011*t4015;
  t7891 = t4005*t4015*t4027;
  t7892 = t7890 + t7891;
  t7898 = -1.*t1824*t226;
  t7899 = t2621*t7888;
  t7900 = t7898 + t7899;
  t7902 = t7655*t7892;
  t7903 = t7648*t7900;
  t7904 = t7902 + t7903;
  t7906 = t7648*t7892;
  t7907 = -1.*t7655*t7900;
  t7908 = t7906 + t7907;
  t7920 = t4011*t3592;
  t7921 = -1.*t4023*t4015*t4027;
  t7922 = t7920 + t7921;
  t7928 = t4005*t7922;
  t7929 = t7768 + t7928;
  t7924 = -1.*t4005*t7755;
  t7925 = t4043*t7922;
  t7926 = t7924 + t7925;
  t7933 = t7655*t7926;
  t7934 = t7648*t2621*t7929;
  t7935 = t7933 + t7934;
  t7937 = t7648*t7926;
  t7938 = -1.*t2621*t7655*t7929;
  t7939 = t7937 + t7938;
  t7950 = t4011*t3592*t4015;
  t7951 = -1.*t4023*t4027;
  t7952 = t7950 + t7951;
  t7958 = t4043*t7952;
  t7959 = t4005*t7565;
  t7960 = t7958 + t7959;
  t7955 = -1.*t4005*t7952;
  t7956 = t7955 + t7633;
  t7964 = t7655*t7956;
  t7965 = t7648*t2621*t7960;
  t7966 = t7964 + t7965;
  t7968 = t7648*t7956;
  t7969 = -1.*t2621*t7655*t7960;
  t7970 = t7968 + t7969;
  t7987 = t4043*t226*t4011;
  t7988 = -1.*t226*t4005*t4027;
  t7989 = t7987 + t7988;
  t7983 = -1.*t226*t4011*t4005;
  t7984 = -1.*t4043*t226*t4027;
  t7985 = t7983 + t7984;
  t7993 = t7655*t7985;
  t7994 = t7648*t2621*t7989;
  t7995 = t7993 + t7994;
  t7997 = t7648*t7985;
  t7998 = -1.*t2621*t7655*t7989;
  t7999 = t7997 + t7998;
  t8012 = -1.*t4043*t7760;
  t8013 = t7924 + t8012;
  t8018 = t7655*t8013;
  t8019 = t7648*t2621*t7771;
  t8020 = t8018 + t8019;
  t8022 = t7648*t8013;
  t8023 = -1.*t2621*t7655*t7771;
  t8024 = t8022 + t8023;
  t8036 = t4023*t4011;
  t8037 = t3592*t4015*t4027;
  t8038 = t8036 + t8037;
  t8043 = -1.*t4005*t8038;
  t8044 = t7958 + t8043;
  t8040 = -1.*t4043*t8038;
  t8041 = t7955 + t8040;
  t8048 = t7655*t8041;
  t8049 = t7648*t2621*t8044;
  t8050 = t8048 + t8049;
  t8052 = t7648*t8041;
  t8053 = -1.*t2621*t7655*t8044;
  t8054 = t8052 + t8053;
  t7986 = t7658*t7985;
  t7990 = -0.1305*t1824*t7989;
  t7991 = t7619*t7989;
  t7992 = t2621*t7688*t7989;
  t7996 = t7713*t7995;
  t8000 = t7726*t7999;
  t8001 = -1.*t7710*t7995;
  t8002 = t7697*t7999;
  t8003 = t8001 + t8002;
  t8004 = -0.21*t8003;
  t8005 = t7697*t7995;
  t8006 = t7710*t7999;
  t8007 = t8005 + t8006;
  t8008 = -0.049*t8007;
  t7775 = -1.*t4023*t226*t2621;
  t7781 = t1824*t7765;
  t7782 = t7775 + t7781;
  t8068 = -0.135*t1824;
  t8069 = -0.049*t2621;
  t8070 = t8068 + t8069;
  t8072 = 0.049*t1824;
  t8073 = t8072 + t2965;
  t8092 = t4005*t7952;
  t8093 = t4043*t8038;
  t8094 = t8092 + t8093;
  t8096 = -1.*t226*t2621*t3592;
  t8097 = t1824*t8094;
  t8098 = t8096 + t8097;
  t8115 = t226*t4011*t4005;
  t8116 = t4043*t226*t4027;
  t8117 = t8115 + t8116;
  t8119 = t2621*t4015;
  t8120 = t1824*t8117;
  t8121 = t8119 + t8120;
  t8145 = -1.*t7655*t7771;
  t8146 = -1.*t7648*t7786;
  t8147 = t8145 + t8146;
  t7797 = t7697*t7794;
  t8138 = 0.049*t7648;
  t8139 = t8138 + t7687;
  t8141 = -0.09*t7648;
  t8142 = -0.049*t7655;
  t8143 = t8141 + t8142;
  t8159 = t1824*t226*t3592;
  t8160 = t2621*t8094;
  t8161 = t8159 + t8160;
  t8163 = -1.*t7655*t8044;
  t8164 = -1.*t7648*t8161;
  t8165 = t8163 + t8164;
  t8167 = t7648*t8044;
  t8168 = -1.*t7655*t8161;
  t8169 = t8167 + t8168;
  t8181 = -1.*t1824*t4015;
  t8182 = t2621*t8117;
  t8183 = t8181 + t8182;
  t8185 = -1.*t7655*t7989;
  t8186 = -1.*t7648*t8183;
  t8187 = t8185 + t8186;
  t8189 = t7648*t7989;
  t8190 = -1.*t7655*t8183;
  t8191 = t8189 + t8190;
  t7796 = -1.*t7710*t7790;
  t7798 = t7796 + t7797;
  t8154 = -1.*t7710*t7794;
  t8202 = -0.21*t7697;
  t8203 = -0.049*t7710;
  t8204 = t8202 + t8203;
  t8206 = 0.049*t7697;
  t8207 = t8206 + t7711;
  t8214 = t7655*t8044;
  t8215 = t7648*t8161;
  t8216 = t8214 + t8215;
  t8172 = t7697*t8169;
  t8176 = -1.*t7710*t8169;
  t8226 = t7655*t7989;
  t8227 = t7648*t8183;
  t8228 = t8226 + t8227;
  t8194 = t7697*t8191;
  t8198 = -1.*t7710*t8191;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=-1.*t226*t2969*t3592 + t4007*t4035 + t5497*t7565 + t7619*t7634 - 0.1305*(t226*t2621*t3592 + t1824*t7634) + t7658*t7669 + t7688*t7694 + t7713*t7717 + t7726*t7729 - 0.21*(-1.*t7710*t7717 + t7697*t7729) - 0.049*(t7697*t7717 + t7710*t7729);
  p_output1[10]=t226*t2969*t4023 + t4007*t7755 + t5497*t7760 + t7619*t7765 + t7658*t7771 - 0.1305*t7782 + t7688*t7786 + t7713*t7790 + t7726*t7794 - 0.049*(t7697*t7790 + t7710*t7794) - 0.21*t7798;
  p_output1[11]=0;
  p_output1[12]=t226*t4007*t4011*t4023 - 1.*t2969*t4015*t4023 + t226*t4023*t4027*t5497 + t7619*t7814 - 0.1305*(t2621*t4015*t4023 + t1824*t7814) + t7658*t7820 + t7688*t7828 + t7713*t7832 + t7726*t7836 - 0.21*(-1.*t7710*t7832 + t7697*t7836) - 0.049*(t7697*t7832 + t7710*t7836);
  p_output1[13]=t226*t3592*t4007*t4011 - 1.*t2969*t3592*t4015 + t226*t3592*t4027*t5497 + t7619*t7852 - 0.1305*(t2621*t3592*t4015 + t1824*t7852) + t7658*t7856 + t7688*t7864 + t7713*t7868 + t7726*t7872 - 0.21*(-1.*t7710*t7868 + t7697*t7872) - 0.049*(t7697*t7868 + t7710*t7872);
  p_output1[14]=-1.*t226*t2969 - 1.*t4007*t4011*t4015 - 1.*t4015*t4027*t5497 + t7619*t7888 - 0.1305*(t226*t2621 + t1824*t7888) + t7658*t7892 + t7688*t7900 + t7713*t7904 + t7726*t7908 - 0.21*(-1.*t7710*t7904 + t7697*t7908) - 0.049*(t7697*t7904 + t7710*t7908);
  p_output1[15]=t5497*t7755 + t4007*t7922 + t7658*t7926 - 0.1305*t1824*t7929 + t7619*t7929 + t2621*t7688*t7929 + t7713*t7935 + t7726*t7939 - 0.21*(-1.*t7710*t7935 + t7697*t7939) - 0.049*(t7697*t7935 + t7710*t7939);
  p_output1[16]=t4007*t7565 + t5497*t7952 + t7658*t7956 - 0.1305*t1824*t7960 + t7619*t7960 + t2621*t7688*t7960 + t7713*t7966 + t7726*t7970 - 0.21*(-1.*t7710*t7966 + t7697*t7970) - 0.049*(t7697*t7966 + t7710*t7970);
  p_output1[17]=-1.*t226*t4007*t4027 + t226*t4011*t5497 + t7986 + t7990 + t7991 + t7992 + t7996 + t8000 + t8004 + t8008;
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
  p_output1[39]=0.135*t4043*t7755 - 0.135*t4005*t7760 - 0.1305*t1824*t7771 + t7619*t7771 + t2621*t7688*t7771 + t7658*t8013 + t7713*t8020 + t7726*t8024 - 0.21*(-1.*t7710*t8020 + t7697*t8024) - 0.049*(t7697*t8020 + t7710*t8024);
  p_output1[40]=0.135*t4043*t7952 - 0.135*t4005*t8038 + t7658*t8041 - 0.1305*t1824*t8044 + t7619*t8044 + t2621*t7688*t8044 + t7713*t8050 + t7726*t8054 - 0.21*(-1.*t7710*t8050 + t7697*t8054) - 0.049*(t7697*t8050 + t7710*t8054);
  p_output1[41]=-0.135*t226*t4005*t4027 + 0.135*t226*t4011*t4043 + t7986 + t7990 + t7991 + t7992 + t7996 + t8000 + t8004 + t8008;
  p_output1[42]=-0.1305*(-1.*t1824*t226*t4023 - 1.*t2621*t7765) + t7688*t7782 + t7648*t7713*t7782 - 1.*t7655*t7726*t7782 - 0.21*(-1.*t7655*t7697*t7782 - 1.*t7648*t7710*t7782) - 0.049*(t7648*t7697*t7782 - 1.*t7655*t7710*t7782) + t226*t4023*t8070 + t7765*t8073;
  p_output1[43]=t226*t3592*t8070 + t8073*t8094 - 0.1305*(t7690 - 1.*t2621*t8094) + t7688*t8098 + t7648*t7713*t8098 - 1.*t7655*t7726*t8098 - 0.21*(-1.*t7655*t7697*t8098 - 1.*t7648*t7710*t8098) - 0.049*(t7648*t7697*t8098 - 1.*t7655*t7710*t8098);
  p_output1[44]=-1.*t4015*t8070 + t8073*t8117 - 0.1305*(t1824*t4015 - 1.*t2621*t8117) + t7688*t8121 + t7648*t7713*t8121 - 1.*t7655*t7726*t8121 - 0.21*(-1.*t7655*t7697*t8121 - 1.*t7648*t7710*t8121) - 0.049*(t7648*t7697*t8121 - 1.*t7655*t7710*t8121);
  p_output1[45]=t7713*t7794 + t7771*t8139 + t7786*t8143 + t7726*t8147 - 0.049*(t7797 + t7710*t8147) - 0.21*(t7697*t8147 + t8154);
  p_output1[46]=t8044*t8139 + t8143*t8161 + t7726*t8165 + t7713*t8169 - 0.049*(t7710*t8165 + t8172) - 0.21*(t7697*t8165 + t8176);
  p_output1[47]=t7989*t8139 + t8143*t8183 + t7726*t8187 + t7713*t8191 - 0.049*(t7710*t8187 + t8194) - 0.21*(t7697*t8187 + t8198);
  p_output1[48]=-0.049*t7798 - 0.21*(-1.*t7697*t7790 + t8154) + t7790*t8204 + t7794*t8207;
  p_output1[49]=t8169*t8207 + t8204*t8216 - 0.21*(t8176 - 1.*t7697*t8216) - 0.049*(t8172 - 1.*t7710*t8216);
  p_output1[50]=t8191*t8207 + t8204*t8228 - 0.21*(t8198 - 1.*t7697*t8228) - 0.049*(t8194 - 1.*t7710*t8228);
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

#include "J_knee_joint_right_mex.hh"

namespace SymExpression
{

void J_knee_joint_right_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
