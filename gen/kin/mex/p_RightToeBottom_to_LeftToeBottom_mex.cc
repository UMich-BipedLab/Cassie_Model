/*
 * Automatically Generated from Mathematica.
 * Mon 26 Feb 2018 15:42:45 GMT-05:00
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
  double t845;
  double t486;
  double t590;
  double t674;
  double t1031;
  double t429;
  double t1189;
  double t1205;
  double t1608;
  double t740;
  double t1079;
  double t1175;
  double t1714;
  double t367;
  double t1890;
  double t2018;
  double t2188;
  double t1178;
  double t1824;
  double t1835;
  double t2237;
  double t195;
  double t2538;
  double t2551;
  double t2648;
  double t1854;
  double t2253;
  double t2339;
  double t2669;
  double t58;
  double t2808;
  double t2826;
  double t2896;
  double t2415;
  double t2674;
  double t2694;
  double t3104;
  double t6116;
  double t6323;
  double t6343;
  double t6381;
  double t6248;
  double t6264;
  double t6301;
  double t6481;
  double t6494;
  double t6499;
  double t6314;
  double t6387;
  double t6435;
  double t6573;
  double t6600;
  double t6602;
  double t6460;
  double t6530;
  double t6547;
  double t6780;
  double t6788;
  double t6792;
  double t6752;
  double t6769;
  double t6771;
  double t6817;
  double t6818;
  double t6829;
  double t6778;
  double t6800;
  double t6804;
  double t6871;
  double t6881;
  double t6884;
  double t6814;
  double t6835;
  double t6841;
  double t6897;
  double t6898;
  double t6903;
  double t6844;
  double t6891;
  double t6895;
  double t2695;
  double t3585;
  double t3680;
  double t4084;
  double t4341;
  double t4395;
  double t6570;
  double t6649;
  double t6652;
  double t6666;
  double t6672;
  double t6682;
  double t6896;
  double t6907;
  double t6912;
  double t6915;
  double t6927;
  double t6928;
  double t6958;
  double t6960;
  double t6965;
  double t6913;
  double t6929;
  double t6930;
  double t6659;
  double t6719;
  double t6743;
  double t6971;
  double t6972;
  double t6990;
  double t4079;
  double t4679;
  double t5551;
  double t7025;
  double t7026;
  double t7045;
  double t7047;
  double t7057;
  double t7059;
  double t7071;
  double t7072;
  double t7085;
  double t7086;
  double t7017;
  double t7018;
  double t7027;
  double t7033;
  double t7034;
  double t7048;
  double t7049;
  double t7050;
  double t7052;
  double t7054;
  double t7055;
  double t7060;
  double t7061;
  double t7062;
  double t7064;
  double t7067;
  double t7069;
  double t7073;
  double t7074;
  double t7076;
  double t7081;
  double t7082;
  double t7083;
  double t7088;
  double t7089;
  double t7090;
  double t7093;
  double t7094;
  double t7095;
  double t6948;
  double t6950;
  double t6951;
  double t7012;
  double t7013;
  double t7014;
  double t7015;
  double t7019;
  double t7021;
  double t7023;
  double t7024;
  double t7035;
  double t7036;
  double t7038;
  double t7039;
  double t7041;
  double t7051;
  double t7056;
  double t7063;
  double t7070;
  double t7079;
  double t7084;
  double t7091;
  double t7096;
  double t7097;
  double t7098;
  double t7099;
  double t7101;
  double t7102;
  double t7103;
  double t7104;
  double t7105;
  double t7106;
  double t7107;
  double t7108;
  double t7109;
  double t7110;
  double t7111;
  double t7112;
  double t7113;
  double t7114;
  double t7000;
  double t7004;
  double t7005;
  double t6748;
  double t6933;
  double t6941;
  double t6945;
  double t6969;
  double t6991;
  double t6992;
  double t6994;
  double t7007;
  double t7010;
  double t7011;
  double t7144;
  double t7148;
  double t7149;
  double t7150;
  double t7151;
  double t7153;
  double t7162;
  double t7170;
  double t7171;
  double t7172;
  double t7174;
  double t7177;
  double t7178;
  double t7179;
  double t7184;
  double t7185;
  double t7186;
  double t7188;
  double t7189;
  double t7190;
  double t7192;
  double t7195;
  double t7196;
  double t7197;
  double t7202;
  double t7203;
  double t7204;
  double t7206;
  double t7207;
  double t7208;
  double t7210;
  double t7213;
  double t7214;
  double t7215;
  double t7220;
  double t7221;
  double t7222;
  double t7237;
  double t7145;
  double t7146;
  double t7157;
  double t7159;
  double t7160;
  double t7161;
  double t7163;
  double t7164;
  double t7152;
  double t7154;
  double t7155;
  double t7247;
  double t7166;
  double t7167;
  double t7168;
  double t7173;
  double t7175;
  double t7176;
  double t7252;
  double t7253;
  double t7254;
  double t7256;
  double t7257;
  double t7258;
  double t7181;
  double t7182;
  double t7183;
  double t7191;
  double t7193;
  double t7194;
  double t7260;
  double t7261;
  double t7262;
  double t7264;
  double t7265;
  double t7266;
  double t7199;
  double t7200;
  double t7201;
  double t7209;
  double t7211;
  double t7212;
  double t7268;
  double t7269;
  double t7270;
  double t7272;
  double t7273;
  double t7274;
  double t7217;
  double t7218;
  double t7219;
  double t7276;
  double t7277;
  double t7278;
  double t7280;
  double t7281;
  double t7282;
  double t7242;
  double t7243;
  double t7244;
  double t7248;
  double t7249;
  double t7250;
  double t7300;
  double t7301;
  double t7302;
  double t7304;
  double t7305;
  double t7306;
  double t7308;
  double t7309;
  double t7310;
  double t7312;
  double t7313;
  double t7314;
  double t7316;
  double t7317;
  double t7318;
  double t7320;
  double t7321;
  double t7322;
  double t7324;
  double t7325;
  double t7326;
  double t7328;
  double t7329;
  double t7330;
  double t7122;
  double t7123;
  double t7124;
  double t7125;
  double t7126;
  double t7127;
  double t7128;
  double t7129;
  double t7130;
  double t7131;
  double t7132;
  double t7133;
  double t7134;
  double t7135;
  double t7136;
  double t7137;
  double t7100;
  double t7115;
  double t7116;
  double t7147;
  double t7156;
  double t7158;
  double t7165;
  double t7169;
  double t7180;
  double t7187;
  double t7198;
  double t7205;
  double t7216;
  double t7223;
  double t7224;
  double t7225;
  double t7226;
  double t7227;
  double t7228;
  double t7229;
  double t7230;
  double t7231;
  double t7232;
  double t7238;
  double t7239;
  double t7240;
  double t7241;
  double t7245;
  double t7246;
  double t7251;
  double t7255;
  double t7259;
  double t7263;
  double t7267;
  double t7271;
  double t7275;
  double t7279;
  double t7283;
  double t7284;
  double t7285;
  double t7286;
  double t7287;
  double t7288;
  double t7289;
  double t7290;
  double t7291;
  double t7292;
  double t7295;
  double t7296;
  double t7297;
  double t7298;
  double t7299;
  double t7303;
  double t7307;
  double t7311;
  double t7315;
  double t7319;
  double t7323;
  double t7327;
  double t7331;
  double t7332;
  double t7333;
  double t7334;
  double t7335;
  double t7336;
  double t7337;
  double t7338;
  double t7339;
  double t7340;
  double t7343;
  double t7344;
  double t7345;
  double t7118;
  double t7119;
  double t7120;
  t845 = Cos(var1[7]);
  t486 = Cos(var1[9]);
  t590 = Sin(var1[7]);
  t674 = Sin(var1[8]);
  t1031 = Sin(var1[9]);
  t429 = Cos(var1[10]);
  t1189 = t845*t486;
  t1205 = -1.*t590*t674*t1031;
  t1608 = t1189 + t1205;
  t740 = t486*t590*t674;
  t1079 = t845*t1031;
  t1175 = t740 + t1079;
  t1714 = Sin(var1[10]);
  t367 = Cos(var1[11]);
  t1890 = t429*t1608;
  t2018 = -1.*t1175*t1714;
  t2188 = t1890 + t2018;
  t1178 = t429*t1175;
  t1824 = t1608*t1714;
  t1835 = t1178 + t1824;
  t2237 = Sin(var1[11]);
  t195 = Cos(var1[12]);
  t2538 = t367*t2188;
  t2551 = -1.*t1835*t2237;
  t2648 = t2538 + t2551;
  t1854 = t367*t1835;
  t2253 = t2188*t2237;
  t2339 = t1854 + t2253;
  t2669 = Sin(var1[12]);
  t58 = Cos(var1[13]);
  t2808 = t195*t2648;
  t2826 = -1.*t2339*t2669;
  t2896 = t2808 + t2826;
  t2415 = t195*t2339;
  t2674 = t2648*t2669;
  t2694 = t2415 + t2674;
  t3104 = Sin(var1[13]);
  t6116 = Cos(var1[8]);
  t6323 = -1.*t6116*t429*t1031;
  t6343 = -1.*t6116*t486*t1714;
  t6381 = t6323 + t6343;
  t6248 = t6116*t486*t429;
  t6264 = -1.*t6116*t1031*t1714;
  t6301 = t6248 + t6264;
  t6481 = t367*t6381;
  t6494 = -1.*t6301*t2237;
  t6499 = t6481 + t6494;
  t6314 = t367*t6301;
  t6387 = t6381*t2237;
  t6435 = t6314 + t6387;
  t6573 = t195*t6499;
  t6600 = -1.*t6435*t2669;
  t6602 = t6573 + t6600;
  t6460 = t195*t6435;
  t6530 = t6499*t2669;
  t6547 = t6460 + t6530;
  t6780 = -1.*t486*t590;
  t6788 = -1.*t845*t674*t1031;
  t6792 = t6780 + t6788;
  t6752 = t845*t486*t674;
  t6769 = -1.*t590*t1031;
  t6771 = t6752 + t6769;
  t6817 = t429*t6792;
  t6818 = -1.*t6771*t1714;
  t6829 = t6817 + t6818;
  t6778 = t429*t6771;
  t6800 = t6792*t1714;
  t6804 = t6778 + t6800;
  t6871 = t367*t6829;
  t6881 = -1.*t6804*t2237;
  t6884 = t6871 + t6881;
  t6814 = t367*t6804;
  t6835 = t6829*t2237;
  t6841 = t6814 + t6835;
  t6897 = t195*t6884;
  t6898 = -1.*t6841*t2669;
  t6903 = t6897 + t6898;
  t6844 = t195*t6841;
  t6891 = t6884*t2669;
  t6895 = t6844 + t6891;
  t2695 = t58*t2694;
  t3585 = t2896*t3104;
  t3680 = t2695 + t3585;
  t4084 = t58*t2896;
  t4341 = -1.*t2694*t3104;
  t4395 = t4084 + t4341;
  t6570 = t58*t6547;
  t6649 = t6602*t3104;
  t6652 = t6570 + t6649;
  t6666 = t58*t6602;
  t6672 = -1.*t6547*t3104;
  t6682 = t6666 + t6672;
  t6896 = t58*t6895;
  t6907 = t6903*t3104;
  t6912 = t6896 + t6907;
  t6915 = t58*t6903;
  t6927 = -1.*t6895*t3104;
  t6928 = t6915 + t6927;
  t6958 = 0.642788*t6652;
  t6960 = 0.766044*t6682;
  t6965 = t6958 + t6960;
  t6913 = -0.766044*t6912;
  t6929 = 0.642788*t6928;
  t6930 = t6913 + t6929;
  t6659 = -0.766044*t6652;
  t6719 = 0.642788*t6682;
  t6743 = t6659 + t6719;
  t6971 = 0.642788*t6912;
  t6972 = 0.766044*t6928;
  t6990 = t6971 + t6972;
  t4079 = 0.642788*t3680;
  t4679 = 0.766044*t4395;
  t5551 = t4079 + t4679;
  t7025 = -1.*t486;
  t7026 = 1. + t7025;
  t7045 = -1.*t429;
  t7047 = 1. + t7045;
  t7057 = -1.*t367;
  t7059 = 1. + t7057;
  t7071 = -1.*t195;
  t7072 = 1. + t7071;
  t7085 = -1.*t58;
  t7086 = 1. + t7085;
  t7017 = -1.*t6116;
  t7018 = 1. + t7017;
  t7027 = -0.049*t7026;
  t7033 = -0.09*t1031;
  t7034 = 0. + t7027 + t7033;
  t7048 = -0.049*t7047;
  t7049 = -0.21*t1714;
  t7050 = 0. + t7048 + t7049;
  t7052 = -0.21*t7047;
  t7054 = 0.049*t1714;
  t7055 = 0. + t7052 + t7054;
  t7060 = -0.0016*t7059;
  t7061 = -0.2707*t2237;
  t7062 = 0. + t7060 + t7061;
  t7064 = -0.2707*t7059;
  t7067 = 0.0016*t2237;
  t7069 = 0. + t7064 + t7067;
  t7073 = 0.0184*t7072;
  t7074 = -0.7055*t2669;
  t7076 = 0. + t7073 + t7074;
  t7081 = -0.7055*t7072;
  t7082 = -0.0184*t2669;
  t7083 = 0. + t7081 + t7082;
  t7088 = -0.0216*t7086;
  t7089 = -1.1135*t3104;
  t7090 = 0. + t7088 + t7089;
  t7093 = -1.1135*t7086;
  t7094 = 0.0216*t3104;
  t7095 = 0. + t7093 + t7094;
  t6948 = -0.766044*t3680;
  t6950 = 0.642788*t4395;
  t6951 = t6948 + t6950;
  t7012 = -1.*t845;
  t7013 = 1. + t7012;
  t7014 = -0.135*t7013;
  t7015 = -0.1305*t845*t6116;
  t7019 = -0.135*t7018;
  t7021 = 0.049*t674;
  t7023 = 0. + t7019 + t7021;
  t7024 = t845*t7023;
  t7035 = t845*t674*t7034;
  t7036 = -0.09*t7026;
  t7038 = 0.049*t1031;
  t7039 = 0. + t7036 + t7038;
  t7041 = -1.*t590*t7039;
  t7051 = t6771*t7050;
  t7056 = t6792*t7055;
  t7063 = t6804*t7062;
  t7070 = t6829*t7069;
  t7079 = t6841*t7076;
  t7084 = t6884*t7083;
  t7091 = t6895*t7090;
  t7096 = t6903*t7095;
  t7097 = 0.0306*t6912;
  t7098 = -1.1312*t6928;
  t7099 = 0. + t7014 + t7015 + t7024 + t7035 + t7041 + t7051 + t7056 + t7063 + t7070 + t7079 + t7084 + t7091 + t7096 + t7097 + t7098;
  t7101 = -0.049*t7018;
  t7102 = -0.004500000000000004*t674;
  t7103 = t6116*t7034;
  t7104 = t6116*t486*t7050;
  t7105 = -1.*t6116*t1031*t7055;
  t7106 = t6301*t7062;
  t7107 = t6381*t7069;
  t7108 = t6435*t7076;
  t7109 = t6499*t7083;
  t7110 = t6547*t7090;
  t7111 = t6602*t7095;
  t7112 = 0.0306*t6652;
  t7113 = -1.1312*t6682;
  t7114 = 0. + t7101 + t7102 + t7103 + t7104 + t7105 + t7106 + t7107 + t7108 + t7109 + t7110 + t7111 + t7112 + t7113;
  t7000 = t6965*t6930;
  t7004 = -1.*t6743*t6990;
  t7005 = t7000 + t7004;
  t6748 = t845*t6116*t6743;
  t6933 = t674*t6930;
  t6941 = t6748 + t6933;
  t6945 = -1.*t5551*t6941;
  t6969 = t845*t6116*t6965;
  t6991 = t674*t6990;
  t6992 = t6969 + t6991;
  t6994 = t6951*t6992;
  t7007 = -1.*t6116*t590*t7005;
  t7010 = 0. + t6945 + t6994 + t7007;
  t7011 = 1/t7010;
  t7144 = Cos(var1[1]);
  t7148 = Cos(var1[2]);
  t7149 = Cos(var1[3]);
  t7150 = -1.*t7149;
  t7151 = 1. + t7150;
  t7153 = Sin(var1[3]);
  t7162 = Sin(var1[2]);
  t7170 = Cos(var1[4]);
  t7171 = -1.*t7170;
  t7172 = 1. + t7171;
  t7174 = Sin(var1[4]);
  t7177 = -1.*t7144*t7148*t7153;
  t7178 = -1.*t7149*t7144*t7162;
  t7179 = t7177 + t7178;
  t7184 = t7149*t7144*t7148;
  t7185 = -1.*t7144*t7153*t7162;
  t7186 = t7184 + t7185;
  t7188 = Cos(var1[5]);
  t7189 = -1.*t7188;
  t7190 = 1. + t7189;
  t7192 = Sin(var1[5]);
  t7195 = t7174*t7179;
  t7196 = t7170*t7186;
  t7197 = t7195 + t7196;
  t7202 = t7170*t7179;
  t7203 = -1.*t7174*t7186;
  t7204 = t7202 + t7203;
  t7206 = Cos(var1[6]);
  t7207 = -1.*t7206;
  t7208 = 1. + t7207;
  t7210 = Sin(var1[6]);
  t7213 = -1.*t7192*t7197;
  t7214 = t7188*t7204;
  t7215 = t7213 + t7214;
  t7220 = t7188*t7197;
  t7221 = t7192*t7204;
  t7222 = t7220 + t7221;
  t7237 = Cos(var1[0]);
  t7145 = -1.*t7144;
  t7146 = 1. + t7145;
  t7157 = Sin(var1[1]);
  t7159 = -1.*t7148;
  t7160 = 1. + t7159;
  t7161 = -0.049*t7160;
  t7163 = -0.09*t7162;
  t7164 = 0. + t7161 + t7163;
  t7152 = -0.049*t7151;
  t7154 = -0.21*t7153;
  t7155 = 0. + t7152 + t7154;
  t7247 = Sin(var1[0]);
  t7166 = -0.21*t7151;
  t7167 = 0.049*t7153;
  t7168 = 0. + t7166 + t7167;
  t7173 = -0.2707*t7172;
  t7175 = 0.0016*t7174;
  t7176 = 0. + t7173 + t7175;
  t7252 = t7237*t7148*t7157;
  t7253 = -1.*t7247*t7162;
  t7254 = t7252 + t7253;
  t7256 = -1.*t7148*t7247;
  t7257 = -1.*t7237*t7157*t7162;
  t7258 = t7256 + t7257;
  t7181 = -0.0016*t7172;
  t7182 = -0.2707*t7174;
  t7183 = 0. + t7181 + t7182;
  t7191 = 0.0184*t7190;
  t7193 = -0.7055*t7192;
  t7194 = 0. + t7191 + t7193;
  t7260 = -1.*t7153*t7254;
  t7261 = t7149*t7258;
  t7262 = t7260 + t7261;
  t7264 = t7149*t7254;
  t7265 = t7153*t7258;
  t7266 = t7264 + t7265;
  t7199 = -0.7055*t7190;
  t7200 = -0.0184*t7192;
  t7201 = 0. + t7199 + t7200;
  t7209 = -1.1135*t7208;
  t7211 = 0.0216*t7210;
  t7212 = 0. + t7209 + t7211;
  t7268 = t7174*t7262;
  t7269 = t7170*t7266;
  t7270 = t7268 + t7269;
  t7272 = t7170*t7262;
  t7273 = -1.*t7174*t7266;
  t7274 = t7272 + t7273;
  t7217 = -0.0216*t7208;
  t7218 = -1.1135*t7210;
  t7219 = 0. + t7217 + t7218;
  t7276 = -1.*t7192*t7270;
  t7277 = t7188*t7274;
  t7278 = t7276 + t7277;
  t7280 = t7188*t7270;
  t7281 = t7192*t7274;
  t7282 = t7280 + t7281;
  t7242 = 0.135*t7146;
  t7243 = 0.049*t7157;
  t7244 = 0. + t7242 + t7243;
  t7248 = -0.09*t7160;
  t7249 = 0.049*t7162;
  t7250 = 0. + t7248 + t7249;
  t7300 = t7148*t7247*t7157;
  t7301 = t7237*t7162;
  t7302 = t7300 + t7301;
  t7304 = t7237*t7148;
  t7305 = -1.*t7247*t7157*t7162;
  t7306 = t7304 + t7305;
  t7308 = -1.*t7153*t7302;
  t7309 = t7149*t7306;
  t7310 = t7308 + t7309;
  t7312 = t7149*t7302;
  t7313 = t7153*t7306;
  t7314 = t7312 + t7313;
  t7316 = t7174*t7310;
  t7317 = t7170*t7314;
  t7318 = t7316 + t7317;
  t7320 = t7170*t7310;
  t7321 = -1.*t7174*t7314;
  t7322 = t7320 + t7321;
  t7324 = -1.*t7192*t7318;
  t7325 = t7188*t7322;
  t7326 = t7324 + t7325;
  t7328 = t7188*t7318;
  t7329 = t7192*t7322;
  t7330 = t7328 + t7329;
  t7122 = 0.135*t590;
  t7123 = -0.1305*t6116*t590;
  t7124 = t590*t7023;
  t7125 = t590*t674*t7034;
  t7126 = t845*t7039;
  t7127 = t1175*t7050;
  t7128 = t1608*t7055;
  t7129 = t1835*t7062;
  t7130 = t2188*t7069;
  t7131 = t2339*t7076;
  t7132 = t2648*t7083;
  t7133 = t2694*t7090;
  t7134 = t2896*t7095;
  t7135 = 0.0306*t3680;
  t7136 = -1.1312*t4395;
  t7137 = 0. + t7122 + t7123 + t7124 + t7125 + t7126 + t7127 + t7128 + t7129 + t7130 + t7131 + t7132 + t7133 + t7134 + t7135 + t7136;
  t7100 = t6743*t7099;
  t7115 = -1.*t7114*t6930;
  t7116 = t7100 + t7115;
  t7147 = -0.049*t7146;
  t7156 = t7144*t7148*t7155;
  t7158 = 0.004500000000000004*t7157;
  t7165 = t7144*t7164;
  t7169 = -1.*t7144*t7168*t7162;
  t7180 = t7176*t7179;
  t7187 = t7183*t7186;
  t7198 = t7194*t7197;
  t7205 = t7201*t7204;
  t7216 = t7212*t7215;
  t7223 = t7219*t7222;
  t7224 = t7210*t7215;
  t7225 = t7206*t7222;
  t7226 = t7224 + t7225;
  t7227 = 0.0306*t7226;
  t7228 = t7206*t7215;
  t7229 = -1.*t7210*t7222;
  t7230 = t7228 + t7229;
  t7231 = -1.1312*t7230;
  t7232 = 0. + t7147 + t7156 + t7158 + t7165 + t7169 + t7180 + t7187 + t7198 + t7205 + t7216 + t7223 + t7227 + t7231;
  t7238 = -1.*t7237;
  t7239 = 1. + t7238;
  t7240 = 0.135*t7239;
  t7241 = 0.1305*t7237*t7144;
  t7245 = t7237*t7244;
  t7246 = t7237*t7157*t7164;
  t7251 = -1.*t7247*t7250;
  t7255 = t7155*t7254;
  t7259 = t7168*t7258;
  t7263 = t7176*t7262;
  t7267 = t7183*t7266;
  t7271 = t7194*t7270;
  t7275 = t7201*t7274;
  t7279 = t7212*t7278;
  t7283 = t7219*t7282;
  t7284 = t7210*t7278;
  t7285 = t7206*t7282;
  t7286 = t7284 + t7285;
  t7287 = 0.0306*t7286;
  t7288 = t7206*t7278;
  t7289 = -1.*t7210*t7282;
  t7290 = t7288 + t7289;
  t7291 = -1.1312*t7290;
  t7292 = 0. + t7240 + t7241 + t7245 + t7246 + t7251 + t7255 + t7259 + t7263 + t7267 + t7271 + t7275 + t7279 + t7283 + t7287 + t7291;
  t7295 = -0.135*t7247;
  t7296 = 0.1305*t7144*t7247;
  t7297 = t7247*t7244;
  t7298 = t7247*t7157*t7164;
  t7299 = t7237*t7250;
  t7303 = t7155*t7302;
  t7307 = t7168*t7306;
  t7311 = t7176*t7310;
  t7315 = t7183*t7314;
  t7319 = t7194*t7318;
  t7323 = t7201*t7322;
  t7327 = t7212*t7326;
  t7331 = t7219*t7330;
  t7332 = t7210*t7326;
  t7333 = t7206*t7330;
  t7334 = t7332 + t7333;
  t7335 = 0.0306*t7334;
  t7336 = t7206*t7326;
  t7337 = -1.*t7210*t7330;
  t7338 = t7336 + t7337;
  t7339 = -1.1312*t7338;
  t7340 = 0. + t7295 + t7296 + t7297 + t7298 + t7299 + t7303 + t7307 + t7311 + t7315 + t7319 + t7323 + t7327 + t7331 + t7335 + t7339;
  t7343 = t845*t6116*t7114;
  t7344 = t674*t7099;
  t7345 = t7343 + t7344;
  t7118 = t6965*t7099;
  t7119 = -1.*t7114*t6990;
  t7120 = t7118 + t7119;
  p_output1[0]=t7011*(-1.*t5551*t7116 + t6951*t7120 - 1.*t7005*t7137) + (0. - 1.*t5551*t6930 + t6951*t6990)*t7011*t7232 + (0. + t5551*t6743 - 1.*t6951*t6965)*t7011*t7292 + (0. + t7000 + t7004)*t7011*t7340;
  p_output1[1]=(0. + t590*t6116*t6743 + t674*t6951)*t7011*t7292 + t7011*(-1.*t590*t6116*t7116 + t6941*t7137 - 1.*t6951*t7345) + t7011*t7340*(0. - 1.*t674*t6930 - 1.*t6116*t6743*t845) + t7011*t7232*(0. - 1.*t590*t6116*t6930 + t6116*t6951*t845);
  p_output1[2]=(0. - 1.*t5551*t674 - 1.*t590*t6116*t6965)*t7011*t7292 + (0. + t6969 + t6991)*t7011*t7340 + t7011*(t590*t6116*t7120 - 1.*t6992*t7137 + t5551*t7345) + t7011*t7232*(0. + t590*t6116*t6990 - 1.*t5551*t6116*t845);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "p_RightToeBottom_to_LeftToeBottom_mex.hh"

namespace SymExpression
{

void p_RightToeBottom_to_LeftToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
