/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:11:49 GMT-05:00
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
  double t2306;
  double t7063;
  double t7040;
  double t7045;
  double t7064;
  double t164;
  double t170;
  double t182;
  double t929;
  double t2684;
  double t7054;
  double t7065;
  double t7076;
  double t7085;
  double t7094;
  double t7095;
  double t7097;
  double t160;
  double t7116;
  double t7118;
  double t7119;
  double t7125;
  double t7126;
  double t7127;
  double t7129;
  double t7134;
  double t7142;
  double t7144;
  double t7159;
  double t7161;
  double t7163;
  double t7165;
  double t7168;
  double t7170;
  double t7175;
  double t7180;
  double t7182;
  double t7183;
  double t7189;
  double t7191;
  double t7192;
  double t363;
  double t1531;
  double t2139;
  double t7012;
  double t7032;
  double t7089;
  double t7090;
  double t7091;
  double t7093;
  double t7110;
  double t7111;
  double t7114;
  double t7213;
  double t7214;
  double t7217;
  double t7219;
  double t7220;
  double t7221;
  double t7128;
  double t7130;
  double t7131;
  double t7223;
  double t7224;
  double t7225;
  double t7154;
  double t7155;
  double t7156;
  double t7174;
  double t7178;
  double t7179;
  double t7227;
  double t7228;
  double t7229;
  double t7236;
  double t7237;
  double t7238;
  double t7185;
  double t7187;
  double t7188;
  double t7240;
  double t7241;
  double t7243;
  double t7246;
  double t7247;
  double t7249;
  double t7265;
  double t7266;
  double t7267;
  double t7269;
  double t7270;
  double t7271;
  double t7277;
  double t7278;
  double t7279;
  double t7281;
  double t7282;
  double t7283;
  double t7285;
  double t7286;
  double t7287;
  double t7301;
  double t7302;
  double t7303;
  double t7305;
  double t7306;
  double t7307;
  double t7313;
  double t7314;
  double t7315;
  double t7317;
  double t7318;
  double t7319;
  double t7321;
  double t7322;
  double t7323;
  double t7337;
  double t7338;
  double t7339;
  double t7341;
  double t7342;
  double t7343;
  double t7349;
  double t7350;
  double t7351;
  double t7353;
  double t7354;
  double t7355;
  double t7357;
  double t7358;
  double t7359;
  double t7371;
  double t7372;
  double t7373;
  double t7379;
  double t7380;
  double t7375;
  double t7376;
  double t7377;
  double t7384;
  double t7385;
  double t7386;
  double t7388;
  double t7389;
  double t7390;
  double t7401;
  double t7402;
  double t7403;
  double t7409;
  double t7410;
  double t7411;
  double t7406;
  double t7407;
  double t7415;
  double t7416;
  double t7417;
  double t7419;
  double t7420;
  double t7421;
  double t7438;
  double t7439;
  double t7440;
  double t7434;
  double t7435;
  double t7436;
  double t7444;
  double t7445;
  double t7446;
  double t7448;
  double t7449;
  double t7450;
  double t7463;
  double t7464;
  double t7469;
  double t7470;
  double t7471;
  double t7473;
  double t7474;
  double t7475;
  double t7487;
  double t7488;
  double t7489;
  double t7494;
  double t7495;
  double t7491;
  double t7492;
  double t7499;
  double t7500;
  double t7501;
  double t7503;
  double t7504;
  double t7505;
  double t7437;
  double t7441;
  double t7442;
  double t7443;
  double t7447;
  double t7451;
  double t7452;
  double t7453;
  double t7454;
  double t7455;
  double t7456;
  double t7457;
  double t7458;
  double t7459;
  double t7231;
  double t7232;
  double t7233;
  double t7519;
  double t7520;
  double t7521;
  double t7523;
  double t7524;
  double t7543;
  double t7544;
  double t7545;
  double t7547;
  double t7548;
  double t7549;
  double t7566;
  double t7567;
  double t7568;
  double t7570;
  double t7571;
  double t7572;
  double t7596;
  double t7597;
  double t7598;
  double t7254;
  double t7589;
  double t7590;
  double t7592;
  double t7593;
  double t7594;
  double t7610;
  double t7611;
  double t7612;
  double t7614;
  double t7615;
  double t7616;
  double t7618;
  double t7619;
  double t7620;
  double t7632;
  double t7633;
  double t7634;
  double t7636;
  double t7637;
  double t7638;
  double t7640;
  double t7641;
  double t7642;
  double t7253;
  double t7255;
  double t7605;
  double t7653;
  double t7654;
  double t7655;
  double t7657;
  double t7658;
  double t7665;
  double t7666;
  double t7667;
  double t7623;
  double t7627;
  double t7677;
  double t7678;
  double t7679;
  double t7645;
  double t7649;
  t2306 = Sin(var1[3]);
  t7063 = Cos(var1[3]);
  t7040 = Cos(var1[5]);
  t7045 = Sin(var1[4]);
  t7064 = Sin(var1[5]);
  t164 = Cos(var1[14]);
  t170 = -1.*t164;
  t182 = 1. + t170;
  t929 = Sin(var1[14]);
  t2684 = Sin(var1[13]);
  t7054 = -1.*t7040*t2306*t7045;
  t7065 = t7063*t7064;
  t7076 = t7054 + t7065;
  t7085 = Cos(var1[13]);
  t7094 = -1.*t7063*t7040;
  t7095 = -1.*t2306*t7045*t7064;
  t7097 = t7094 + t7095;
  t160 = Cos(var1[4]);
  t7116 = t2684*t7076;
  t7118 = t7085*t7097;
  t7119 = t7116 + t7118;
  t7125 = Cos(var1[15]);
  t7126 = -1.*t7125;
  t7127 = 1. + t7126;
  t7129 = Sin(var1[15]);
  t7134 = t7085*t7076;
  t7142 = -1.*t2684*t7097;
  t7144 = t7134 + t7142;
  t7159 = -1.*t164*t160*t2306;
  t7161 = t929*t7119;
  t7163 = t7159 + t7161;
  t7165 = Cos(var1[16]);
  t7168 = -1.*t7165;
  t7170 = 1. + t7168;
  t7175 = Sin(var1[16]);
  t7180 = t7129*t7144;
  t7182 = t7125*t7163;
  t7183 = t7180 + t7182;
  t7189 = t7125*t7144;
  t7191 = -1.*t7129*t7163;
  t7192 = t7189 + t7191;
  t363 = -0.049*t182;
  t1531 = -0.135*t929;
  t2139 = 0. + t363 + t1531;
  t7012 = 0.135*t2684;
  t7032 = 0. + t7012;
  t7089 = -1.*t7085;
  t7090 = 1. + t7089;
  t7091 = -0.135*t7090;
  t7093 = 0. + t7091;
  t7110 = -0.135*t182;
  t7111 = 0.049*t929;
  t7114 = 0. + t7110 + t7111;
  t7213 = t7063*t7040*t7045;
  t7214 = t2306*t7064;
  t7217 = t7213 + t7214;
  t7219 = -1.*t7040*t2306;
  t7220 = t7063*t7045*t7064;
  t7221 = t7219 + t7220;
  t7128 = -0.09*t7127;
  t7130 = 0.049*t7129;
  t7131 = 0. + t7128 + t7130;
  t7223 = t2684*t7217;
  t7224 = t7085*t7221;
  t7225 = t7223 + t7224;
  t7154 = -0.049*t7127;
  t7155 = -0.09*t7129;
  t7156 = 0. + t7154 + t7155;
  t7174 = -0.049*t7170;
  t7178 = -0.21*t7175;
  t7179 = 0. + t7174 + t7178;
  t7227 = t7085*t7217;
  t7228 = -1.*t2684*t7221;
  t7229 = t7227 + t7228;
  t7236 = t164*t7063*t160;
  t7237 = t929*t7225;
  t7238 = t7236 + t7237;
  t7185 = -0.21*t7170;
  t7187 = 0.049*t7175;
  t7188 = 0. + t7185 + t7187;
  t7240 = t7129*t7229;
  t7241 = t7125*t7238;
  t7243 = t7240 + t7241;
  t7246 = t7125*t7229;
  t7247 = -1.*t7129*t7238;
  t7249 = t7246 + t7247;
  t7265 = t7063*t160*t7040*t2684;
  t7266 = t7085*t7063*t160*t7064;
  t7267 = t7265 + t7266;
  t7269 = t7085*t7063*t160*t7040;
  t7270 = -1.*t7063*t160*t2684*t7064;
  t7271 = t7269 + t7270;
  t7277 = -1.*t164*t7063*t7045;
  t7278 = t929*t7267;
  t7279 = t7277 + t7278;
  t7281 = t7129*t7271;
  t7282 = t7125*t7279;
  t7283 = t7281 + t7282;
  t7285 = t7125*t7271;
  t7286 = -1.*t7129*t7279;
  t7287 = t7285 + t7286;
  t7301 = t160*t7040*t2684*t2306;
  t7302 = t7085*t160*t2306*t7064;
  t7303 = t7301 + t7302;
  t7305 = t7085*t160*t7040*t2306;
  t7306 = -1.*t160*t2684*t2306*t7064;
  t7307 = t7305 + t7306;
  t7313 = -1.*t164*t2306*t7045;
  t7314 = t929*t7303;
  t7315 = t7313 + t7314;
  t7317 = t7129*t7307;
  t7318 = t7125*t7315;
  t7319 = t7317 + t7318;
  t7321 = t7125*t7307;
  t7322 = -1.*t7129*t7315;
  t7323 = t7321 + t7322;
  t7337 = -1.*t7040*t2684*t7045;
  t7338 = -1.*t7085*t7045*t7064;
  t7339 = t7337 + t7338;
  t7341 = -1.*t7085*t7040*t7045;
  t7342 = t2684*t7045*t7064;
  t7343 = t7341 + t7342;
  t7349 = -1.*t164*t160;
  t7350 = t929*t7339;
  t7351 = t7349 + t7350;
  t7353 = t7129*t7343;
  t7354 = t7125*t7351;
  t7355 = t7353 + t7354;
  t7357 = t7125*t7343;
  t7358 = -1.*t7129*t7351;
  t7359 = t7357 + t7358;
  t7371 = t7040*t2306;
  t7372 = -1.*t7063*t7045*t7064;
  t7373 = t7371 + t7372;
  t7379 = t2684*t7373;
  t7380 = t7227 + t7379;
  t7375 = -1.*t2684*t7217;
  t7376 = t7085*t7373;
  t7377 = t7375 + t7376;
  t7384 = t7129*t7377;
  t7385 = t7125*t929*t7380;
  t7386 = t7384 + t7385;
  t7388 = t7125*t7377;
  t7389 = -1.*t929*t7129*t7380;
  t7390 = t7388 + t7389;
  t7401 = t7040*t2306*t7045;
  t7402 = -1.*t7063*t7064;
  t7403 = t7401 + t7402;
  t7409 = t7085*t7403;
  t7410 = t2684*t7097;
  t7411 = t7409 + t7410;
  t7406 = -1.*t2684*t7403;
  t7407 = t7406 + t7118;
  t7415 = t7129*t7407;
  t7416 = t7125*t929*t7411;
  t7417 = t7415 + t7416;
  t7419 = t7125*t7407;
  t7420 = -1.*t929*t7129*t7411;
  t7421 = t7419 + t7420;
  t7438 = t7085*t160*t7040;
  t7439 = -1.*t160*t2684*t7064;
  t7440 = t7438 + t7439;
  t7434 = -1.*t160*t7040*t2684;
  t7435 = -1.*t7085*t160*t7064;
  t7436 = t7434 + t7435;
  t7444 = t7129*t7436;
  t7445 = t7125*t929*t7440;
  t7446 = t7444 + t7445;
  t7448 = t7125*t7436;
  t7449 = -1.*t929*t7129*t7440;
  t7450 = t7448 + t7449;
  t7463 = -1.*t7085*t7221;
  t7464 = t7375 + t7463;
  t7469 = t7129*t7464;
  t7470 = t7125*t929*t7229;
  t7471 = t7469 + t7470;
  t7473 = t7125*t7464;
  t7474 = -1.*t929*t7129*t7229;
  t7475 = t7473 + t7474;
  t7487 = t7063*t7040;
  t7488 = t2306*t7045*t7064;
  t7489 = t7487 + t7488;
  t7494 = -1.*t2684*t7489;
  t7495 = t7409 + t7494;
  t7491 = -1.*t7085*t7489;
  t7492 = t7406 + t7491;
  t7499 = t7129*t7492;
  t7500 = t7125*t929*t7495;
  t7501 = t7499 + t7500;
  t7503 = t7125*t7492;
  t7504 = -1.*t929*t7129*t7495;
  t7505 = t7503 + t7504;
  t7437 = t7131*t7436;
  t7441 = -0.1305*t164*t7440;
  t7442 = t7114*t7440;
  t7443 = t929*t7156*t7440;
  t7447 = t7179*t7446;
  t7451 = t7188*t7450;
  t7452 = -1.*t7175*t7446;
  t7453 = t7165*t7450;
  t7454 = t7452 + t7453;
  t7455 = -0.2707*t7454;
  t7456 = t7165*t7446;
  t7457 = t7175*t7450;
  t7458 = t7456 + t7457;
  t7459 = -0.0016*t7458;
  t7231 = -1.*t7063*t160*t929;
  t7232 = t164*t7225;
  t7233 = t7231 + t7232;
  t7519 = -0.135*t164;
  t7520 = -0.049*t929;
  t7521 = t7519 + t7520;
  t7523 = 0.049*t164;
  t7524 = t7523 + t1531;
  t7543 = t2684*t7403;
  t7544 = t7085*t7489;
  t7545 = t7543 + t7544;
  t7547 = -1.*t160*t929*t2306;
  t7548 = t164*t7545;
  t7549 = t7547 + t7548;
  t7566 = t160*t7040*t2684;
  t7567 = t7085*t160*t7064;
  t7568 = t7566 + t7567;
  t7570 = t929*t7045;
  t7571 = t164*t7568;
  t7572 = t7570 + t7571;
  t7596 = -1.*t7129*t7229;
  t7597 = -1.*t7125*t7238;
  t7598 = t7596 + t7597;
  t7254 = t7165*t7249;
  t7589 = 0.049*t7125;
  t7590 = t7589 + t7155;
  t7592 = -0.09*t7125;
  t7593 = -0.049*t7129;
  t7594 = t7592 + t7593;
  t7610 = t164*t160*t2306;
  t7611 = t929*t7545;
  t7612 = t7610 + t7611;
  t7614 = -1.*t7129*t7495;
  t7615 = -1.*t7125*t7612;
  t7616 = t7614 + t7615;
  t7618 = t7125*t7495;
  t7619 = -1.*t7129*t7612;
  t7620 = t7618 + t7619;
  t7632 = -1.*t164*t7045;
  t7633 = t929*t7568;
  t7634 = t7632 + t7633;
  t7636 = -1.*t7129*t7440;
  t7637 = -1.*t7125*t7634;
  t7638 = t7636 + t7637;
  t7640 = t7125*t7440;
  t7641 = -1.*t7129*t7634;
  t7642 = t7640 + t7641;
  t7253 = -1.*t7175*t7243;
  t7255 = t7253 + t7254;
  t7605 = -1.*t7175*t7249;
  t7653 = -0.21*t7165;
  t7654 = -0.049*t7175;
  t7655 = t7653 + t7654;
  t7657 = 0.049*t7165;
  t7658 = t7657 + t7178;
  t7665 = t7129*t7495;
  t7666 = t7125*t7612;
  t7667 = t7665 + t7666;
  t7623 = t7165*t7620;
  t7627 = -1.*t7175*t7620;
  t7677 = t7129*t7440;
  t7678 = t7125*t7634;
  t7679 = t7677 + t7678;
  t7645 = t7165*t7642;
  t7649 = -1.*t7175*t7642;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=-1.*t160*t2139*t2306 + t7032*t7076 + t7093*t7097 + t7114*t7119 + t7131*t7144 + t7156*t7163 + t7179*t7183 + t7188*t7192 - 0.2707*(-1.*t7175*t7183 + t7165*t7192) - 0.0016*(t7165*t7183 + t7175*t7192) - 0.1305*(t164*t7119 + t160*t2306*t929);
  p_output1[10]=t160*t2139*t7063 + t7032*t7217 + t7093*t7221 + t7114*t7225 + t7131*t7229 - 0.1305*t7233 + t7156*t7238 + t7179*t7243 + t7188*t7249 - 0.0016*(t7165*t7243 + t7175*t7249) - 0.2707*t7255;
  p_output1[11]=0;
  p_output1[12]=t160*t7032*t7040*t7063 - 1.*t2139*t7045*t7063 + t160*t7063*t7064*t7093 + t7114*t7267 + t7131*t7271 + t7156*t7279 + t7179*t7283 + t7188*t7287 - 0.2707*(-1.*t7175*t7283 + t7165*t7287) - 0.0016*(t7165*t7283 + t7175*t7287) - 0.1305*(t164*t7267 + t7045*t7063*t929);
  p_output1[13]=t160*t2306*t7032*t7040 - 1.*t2139*t2306*t7045 + t160*t2306*t7064*t7093 + t7114*t7303 + t7131*t7307 + t7156*t7315 + t7179*t7319 + t7188*t7323 - 0.2707*(-1.*t7175*t7319 + t7165*t7323) - 0.0016*(t7165*t7319 + t7175*t7323) - 0.1305*(t164*t7303 + t2306*t7045*t929);
  p_output1[14]=-1.*t160*t2139 - 1.*t7032*t7040*t7045 - 1.*t7045*t7064*t7093 + t7114*t7339 + t7131*t7343 + t7156*t7351 + t7179*t7355 + t7188*t7359 - 0.2707*(-1.*t7175*t7355 + t7165*t7359) - 0.0016*(t7165*t7355 + t7175*t7359) - 0.1305*(t164*t7339 + t160*t929);
  p_output1[15]=t7093*t7217 + t7032*t7373 + t7131*t7377 - 0.1305*t164*t7380 + t7114*t7380 + t7179*t7386 + t7188*t7390 - 0.2707*(-1.*t7175*t7386 + t7165*t7390) - 0.0016*(t7165*t7386 + t7175*t7390) + t7156*t7380*t929;
  p_output1[16]=t7032*t7097 + t7093*t7403 + t7131*t7407 - 0.1305*t164*t7411 + t7114*t7411 + t7179*t7417 + t7188*t7421 - 0.2707*(-1.*t7175*t7417 + t7165*t7421) - 0.0016*(t7165*t7417 + t7175*t7421) + t7156*t7411*t929;
  p_output1[17]=-1.*t160*t7032*t7064 + t160*t7040*t7093 + t7437 + t7441 + t7442 + t7443 + t7447 + t7451 + t7455 + t7459;
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
  p_output1[39]=0.135*t7085*t7217 - 0.135*t2684*t7221 - 0.1305*t164*t7229 + t7114*t7229 + t7131*t7464 + t7179*t7471 + t7188*t7475 - 0.2707*(-1.*t7175*t7471 + t7165*t7475) - 0.0016*(t7165*t7471 + t7175*t7475) + t7156*t7229*t929;
  p_output1[40]=0.135*t7085*t7403 - 0.135*t2684*t7489 + t7131*t7492 - 0.1305*t164*t7495 + t7114*t7495 + t7179*t7501 + t7188*t7505 - 0.2707*(-1.*t7175*t7501 + t7165*t7505) - 0.0016*(t7165*t7501 + t7175*t7505) + t7156*t7495*t929;
  p_output1[41]=-0.135*t160*t2684*t7064 + 0.135*t160*t7040*t7085 + t7437 + t7441 + t7442 + t7443 + t7447 + t7451 + t7455 + t7459;
  p_output1[42]=t7156*t7233 + t7125*t7179*t7233 - 1.*t7129*t7188*t7233 - 0.2707*(-1.*t7129*t7165*t7233 - 1.*t7125*t7175*t7233) - 0.0016*(t7125*t7165*t7233 - 1.*t7129*t7175*t7233) + t160*t7063*t7521 + t7225*t7524 - 0.1305*(-1.*t160*t164*t7063 - 1.*t7225*t929);
  p_output1[43]=t160*t2306*t7521 + t7524*t7545 + t7156*t7549 + t7125*t7179*t7549 - 1.*t7129*t7188*t7549 - 0.2707*(-1.*t7129*t7165*t7549 - 1.*t7125*t7175*t7549) - 0.0016*(t7125*t7165*t7549 - 1.*t7129*t7175*t7549) - 0.1305*(t7159 - 1.*t7545*t929);
  p_output1[44]=-1.*t7045*t7521 + t7524*t7568 + t7156*t7572 + t7125*t7179*t7572 - 1.*t7129*t7188*t7572 - 0.2707*(-1.*t7129*t7165*t7572 - 1.*t7125*t7175*t7572) - 0.0016*(t7125*t7165*t7572 - 1.*t7129*t7175*t7572) - 0.1305*(t164*t7045 - 1.*t7568*t929);
  p_output1[45]=t7179*t7249 + t7229*t7590 + t7238*t7594 + t7188*t7598 - 0.0016*(t7254 + t7175*t7598) - 0.2707*(t7165*t7598 + t7605);
  p_output1[46]=t7495*t7590 + t7594*t7612 + t7188*t7616 + t7179*t7620 - 0.0016*(t7175*t7616 + t7623) - 0.2707*(t7165*t7616 + t7627);
  p_output1[47]=t7440*t7590 + t7594*t7634 + t7188*t7638 + t7179*t7642 - 0.0016*(t7175*t7638 + t7645) - 0.2707*(t7165*t7638 + t7649);
  p_output1[48]=-0.0016*t7255 - 0.2707*(-1.*t7165*t7243 + t7605) + t7243*t7655 + t7249*t7658;
  p_output1[49]=t7620*t7658 + t7655*t7667 - 0.2707*(t7627 - 1.*t7165*t7667) - 0.0016*(t7623 - 1.*t7175*t7667);
  p_output1[50]=t7642*t7658 + t7655*t7679 - 0.2707*(t7649 - 1.*t7165*t7679) - 0.0016*(t7645 - 1.*t7175*t7679);
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

#include "J_knee_to_shin_right_mex.hh"

namespace SymExpression
{

void J_knee_to_shin_right_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
