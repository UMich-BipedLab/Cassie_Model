/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:33:39 GMT-04:00
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
  double t2138;
  double t3275;
  double t3205;
  double t3238;
  double t3297;
  double t268;
  double t504;
  double t797;
  double t1279;
  double t2572;
  double t3240;
  double t3346;
  double t3487;
  double t3683;
  double t4462;
  double t4668;
  double t4991;
  double t59;
  double t5528;
  double t5549;
  double t5606;
  double t5735;
  double t6228;
  double t6409;
  double t6491;
  double t6829;
  double t6908;
  double t6930;
  double t7294;
  double t7583;
  double t7754;
  double t7840;
  double t7853;
  double t7854;
  double t7883;
  double t7906;
  double t7909;
  double t7989;
  double t8091;
  double t8100;
  double t8102;
  double t949;
  double t1389;
  double t1761;
  double t2626;
  double t2640;
  double t3742;
  double t3827;
  double t3838;
  double t4177;
  double t5297;
  double t5366;
  double t5482;
  double t8247;
  double t8270;
  double t8336;
  double t8345;
  double t8367;
  double t8380;
  double t6484;
  double t6535;
  double t6680;
  double t8433;
  double t8435;
  double t8440;
  double t7187;
  double t7188;
  double t7193;
  double t7861;
  double t7897;
  double t7904;
  double t8457;
  double t8463;
  double t8515;
  double t8631;
  double t8639;
  double t8642;
  double t8026;
  double t8033;
  double t8073;
  double t8652;
  double t8656;
  double t8657;
  double t8677;
  double t8679;
  double t8692;
  double t8965;
  double t8980;
  double t9002;
  double t9012;
  double t9014;
  double t9039;
  double t9069;
  double t9076;
  double t9091;
  double t9099;
  double t9102;
  double t9108;
  double t9124;
  double t9129;
  double t9136;
  double t9179;
  double t9185;
  double t9190;
  double t9201;
  double t9207;
  double t9210;
  double t9245;
  double t9249;
  double t9252;
  double t9257;
  double t9259;
  double t9260;
  double t9274;
  double t9276;
  double t9281;
  double t9365;
  double t9366;
  double t9369;
  double t9374;
  double t9377;
  double t9378;
  double t9401;
  double t9403;
  double t9404;
  double t9410;
  double t9412;
  double t9413;
  double t9418;
  double t9420;
  double t9426;
  double t9487;
  double t9491;
  double t9497;
  double t9521;
  double t9524;
  double t9502;
  double t9508;
  double t9512;
  double t9542;
  double t9545;
  double t9548;
  double t9553;
  double t9555;
  double t9556;
  double t9588;
  double t9590;
  double t9591;
  double t9605;
  double t9608;
  double t9610;
  double t9597;
  double t9598;
  double t9621;
  double t9624;
  double t9629;
  double t9631;
  double t9633;
  double t9634;
  double t9667;
  double t9668;
  double t9673;
  double t9662;
  double t9663;
  double t9665;
  double t9685;
  double t9691;
  double t9692;
  double t9699;
  double t9705;
  double t9707;
  double t9734;
  double t9735;
  double t9742;
  double t9744;
  double t9747;
  double t9752;
  double t9754;
  double t9765;
  double t9813;
  double t9815;
  double t9819;
  double t9838;
  double t9839;
  double t9834;
  double t9835;
  double t9853;
  double t9855;
  double t9856;
  double t9866;
  double t9867;
  double t9868;
  double t9666;
  double t9674;
  double t9675;
  double t9679;
  double t9694;
  double t9711;
  double t9712;
  double t9713;
  double t9715;
  double t9717;
  double t9722;
  double t9724;
  double t9725;
  double t9726;
  double t8573;
  double t8590;
  double t8597;
  double t9908;
  double t9909;
  double t9910;
  double t9914;
  double t9915;
  double t9959;
  double t9960;
  double t9961;
  double t9965;
  double t9968;
  double t9971;
  double t10014;
  double t10015;
  double t10016;
  double t10021;
  double t10028;
  double t10029;
  double t10091;
  double t10098;
  double t10103;
  double t8755;
  double t10068;
  double t10069;
  double t10079;
  double t10083;
  double t10084;
  double t10140;
  double t10144;
  double t10147;
  double t10149;
  double t10154;
  double t10155;
  double t10157;
  double t10159;
  double t10161;
  double t10194;
  double t10196;
  double t10197;
  double t10200;
  double t10201;
  double t10202;
  double t10210;
  double t10214;
  double t10222;
  double t8738;
  double t8763;
  double t10128;
  double t10244;
  double t10245;
  double t10247;
  double t10255;
  double t10256;
  double t10273;
  double t10275;
  double t10279;
  double t10170;
  double t10177;
  double t10314;
  double t10315;
  double t10316;
  double t10226;
  double t10238;
  t2138 = Sin(var1[3]);
  t3275 = Cos(var1[3]);
  t3205 = Cos(var1[5]);
  t3238 = Sin(var1[4]);
  t3297 = Sin(var1[5]);
  t268 = Cos(var1[14]);
  t504 = -1.*t268;
  t797 = 1. + t504;
  t1279 = Sin(var1[14]);
  t2572 = Sin(var1[13]);
  t3240 = -1.*t3205*t2138*t3238;
  t3346 = t3275*t3297;
  t3487 = t3240 + t3346;
  t3683 = Cos(var1[13]);
  t4462 = -1.*t3275*t3205;
  t4668 = -1.*t2138*t3238*t3297;
  t4991 = t4462 + t4668;
  t59 = Cos(var1[4]);
  t5528 = t2572*t3487;
  t5549 = t3683*t4991;
  t5606 = t5528 + t5549;
  t5735 = Cos(var1[15]);
  t6228 = -1.*t5735;
  t6409 = 1. + t6228;
  t6491 = Sin(var1[15]);
  t6829 = t3683*t3487;
  t6908 = -1.*t2572*t4991;
  t6930 = t6829 + t6908;
  t7294 = -1.*t268*t59*t2138;
  t7583 = t1279*t5606;
  t7754 = t7294 + t7583;
  t7840 = Cos(var1[16]);
  t7853 = -1.*t7840;
  t7854 = 1. + t7853;
  t7883 = Sin(var1[16]);
  t7906 = t6491*t6930;
  t7909 = t5735*t7754;
  t7989 = t7906 + t7909;
  t8091 = t5735*t6930;
  t8100 = -1.*t6491*t7754;
  t8102 = t8091 + t8100;
  t949 = -0.049*t797;
  t1389 = -0.135*t1279;
  t1761 = 0. + t949 + t1389;
  t2626 = 0.135*t2572;
  t2640 = 0. + t2626;
  t3742 = -1.*t3683;
  t3827 = 1. + t3742;
  t3838 = -0.135*t3827;
  t4177 = 0. + t3838;
  t5297 = -0.135*t797;
  t5366 = 0.049*t1279;
  t5482 = 0. + t5297 + t5366;
  t8247 = t3275*t3205*t3238;
  t8270 = t2138*t3297;
  t8336 = t8247 + t8270;
  t8345 = -1.*t3205*t2138;
  t8367 = t3275*t3238*t3297;
  t8380 = t8345 + t8367;
  t6484 = -0.09*t6409;
  t6535 = 0.049*t6491;
  t6680 = 0. + t6484 + t6535;
  t8433 = t2572*t8336;
  t8435 = t3683*t8380;
  t8440 = t8433 + t8435;
  t7187 = -0.049*t6409;
  t7188 = -0.09*t6491;
  t7193 = 0. + t7187 + t7188;
  t7861 = -0.049*t7854;
  t7897 = -0.21*t7883;
  t7904 = 0. + t7861 + t7897;
  t8457 = t3683*t8336;
  t8463 = -1.*t2572*t8380;
  t8515 = t8457 + t8463;
  t8631 = t268*t3275*t59;
  t8639 = t1279*t8440;
  t8642 = t8631 + t8639;
  t8026 = -0.21*t7854;
  t8033 = 0.049*t7883;
  t8073 = 0. + t8026 + t8033;
  t8652 = t6491*t8515;
  t8656 = t5735*t8642;
  t8657 = t8652 + t8656;
  t8677 = t5735*t8515;
  t8679 = -1.*t6491*t8642;
  t8692 = t8677 + t8679;
  t8965 = t3275*t59*t3205*t2572;
  t8980 = t3683*t3275*t59*t3297;
  t9002 = t8965 + t8980;
  t9012 = t3683*t3275*t59*t3205;
  t9014 = -1.*t3275*t59*t2572*t3297;
  t9039 = t9012 + t9014;
  t9069 = -1.*t268*t3275*t3238;
  t9076 = t1279*t9002;
  t9091 = t9069 + t9076;
  t9099 = t6491*t9039;
  t9102 = t5735*t9091;
  t9108 = t9099 + t9102;
  t9124 = t5735*t9039;
  t9129 = -1.*t6491*t9091;
  t9136 = t9124 + t9129;
  t9179 = t59*t3205*t2572*t2138;
  t9185 = t3683*t59*t2138*t3297;
  t9190 = t9179 + t9185;
  t9201 = t3683*t59*t3205*t2138;
  t9207 = -1.*t59*t2572*t2138*t3297;
  t9210 = t9201 + t9207;
  t9245 = -1.*t268*t2138*t3238;
  t9249 = t1279*t9190;
  t9252 = t9245 + t9249;
  t9257 = t6491*t9210;
  t9259 = t5735*t9252;
  t9260 = t9257 + t9259;
  t9274 = t5735*t9210;
  t9276 = -1.*t6491*t9252;
  t9281 = t9274 + t9276;
  t9365 = -1.*t3205*t2572*t3238;
  t9366 = -1.*t3683*t3238*t3297;
  t9369 = t9365 + t9366;
  t9374 = -1.*t3683*t3205*t3238;
  t9377 = t2572*t3238*t3297;
  t9378 = t9374 + t9377;
  t9401 = -1.*t268*t59;
  t9403 = t1279*t9369;
  t9404 = t9401 + t9403;
  t9410 = t6491*t9378;
  t9412 = t5735*t9404;
  t9413 = t9410 + t9412;
  t9418 = t5735*t9378;
  t9420 = -1.*t6491*t9404;
  t9426 = t9418 + t9420;
  t9487 = t3205*t2138;
  t9491 = -1.*t3275*t3238*t3297;
  t9497 = t9487 + t9491;
  t9521 = t2572*t9497;
  t9524 = t8457 + t9521;
  t9502 = -1.*t2572*t8336;
  t9508 = t3683*t9497;
  t9512 = t9502 + t9508;
  t9542 = t6491*t9512;
  t9545 = t5735*t1279*t9524;
  t9548 = t9542 + t9545;
  t9553 = t5735*t9512;
  t9555 = -1.*t1279*t6491*t9524;
  t9556 = t9553 + t9555;
  t9588 = t3205*t2138*t3238;
  t9590 = -1.*t3275*t3297;
  t9591 = t9588 + t9590;
  t9605 = t3683*t9591;
  t9608 = t2572*t4991;
  t9610 = t9605 + t9608;
  t9597 = -1.*t2572*t9591;
  t9598 = t9597 + t5549;
  t9621 = t6491*t9598;
  t9624 = t5735*t1279*t9610;
  t9629 = t9621 + t9624;
  t9631 = t5735*t9598;
  t9633 = -1.*t1279*t6491*t9610;
  t9634 = t9631 + t9633;
  t9667 = t3683*t59*t3205;
  t9668 = -1.*t59*t2572*t3297;
  t9673 = t9667 + t9668;
  t9662 = -1.*t59*t3205*t2572;
  t9663 = -1.*t3683*t59*t3297;
  t9665 = t9662 + t9663;
  t9685 = t6491*t9665;
  t9691 = t5735*t1279*t9673;
  t9692 = t9685 + t9691;
  t9699 = t5735*t9665;
  t9705 = -1.*t1279*t6491*t9673;
  t9707 = t9699 + t9705;
  t9734 = -1.*t3683*t8380;
  t9735 = t9502 + t9734;
  t9742 = t6491*t9735;
  t9744 = t5735*t1279*t8515;
  t9747 = t9742 + t9744;
  t9752 = t5735*t9735;
  t9754 = -1.*t1279*t6491*t8515;
  t9765 = t9752 + t9754;
  t9813 = t3275*t3205;
  t9815 = t2138*t3238*t3297;
  t9819 = t9813 + t9815;
  t9838 = -1.*t2572*t9819;
  t9839 = t9605 + t9838;
  t9834 = -1.*t3683*t9819;
  t9835 = t9597 + t9834;
  t9853 = t6491*t9835;
  t9855 = t5735*t1279*t9839;
  t9856 = t9853 + t9855;
  t9866 = t5735*t9835;
  t9867 = -1.*t1279*t6491*t9839;
  t9868 = t9866 + t9867;
  t9666 = t6680*t9665;
  t9674 = -0.1305*t268*t9673;
  t9675 = t5482*t9673;
  t9679 = t1279*t7193*t9673;
  t9694 = t7904*t9692;
  t9711 = t8073*t9707;
  t9712 = -1.*t7883*t9692;
  t9713 = t7840*t9707;
  t9715 = t9712 + t9713;
  t9717 = -0.21*t9715;
  t9722 = t7840*t9692;
  t9724 = t7883*t9707;
  t9725 = t9722 + t9724;
  t9726 = -0.049*t9725;
  t8573 = -1.*t3275*t59*t1279;
  t8590 = t268*t8440;
  t8597 = t8573 + t8590;
  t9908 = -0.135*t268;
  t9909 = -0.049*t1279;
  t9910 = t9908 + t9909;
  t9914 = 0.049*t268;
  t9915 = t9914 + t1389;
  t9959 = t2572*t9591;
  t9960 = t3683*t9819;
  t9961 = t9959 + t9960;
  t9965 = -1.*t59*t1279*t2138;
  t9968 = t268*t9961;
  t9971 = t9965 + t9968;
  t10014 = t59*t3205*t2572;
  t10015 = t3683*t59*t3297;
  t10016 = t10014 + t10015;
  t10021 = t1279*t3238;
  t10028 = t268*t10016;
  t10029 = t10021 + t10028;
  t10091 = -1.*t6491*t8515;
  t10098 = -1.*t5735*t8642;
  t10103 = t10091 + t10098;
  t8755 = t7840*t8692;
  t10068 = 0.049*t5735;
  t10069 = t10068 + t7188;
  t10079 = -0.09*t5735;
  t10083 = -0.049*t6491;
  t10084 = t10079 + t10083;
  t10140 = t268*t59*t2138;
  t10144 = t1279*t9961;
  t10147 = t10140 + t10144;
  t10149 = -1.*t6491*t9839;
  t10154 = -1.*t5735*t10147;
  t10155 = t10149 + t10154;
  t10157 = t5735*t9839;
  t10159 = -1.*t6491*t10147;
  t10161 = t10157 + t10159;
  t10194 = -1.*t268*t3238;
  t10196 = t1279*t10016;
  t10197 = t10194 + t10196;
  t10200 = -1.*t6491*t9673;
  t10201 = -1.*t5735*t10197;
  t10202 = t10200 + t10201;
  t10210 = t5735*t9673;
  t10214 = -1.*t6491*t10197;
  t10222 = t10210 + t10214;
  t8738 = -1.*t7883*t8657;
  t8763 = t8738 + t8755;
  t10128 = -1.*t7883*t8692;
  t10244 = -0.21*t7840;
  t10245 = -0.049*t7883;
  t10247 = t10244 + t10245;
  t10255 = 0.049*t7840;
  t10256 = t10255 + t7897;
  t10273 = t6491*t9839;
  t10275 = t5735*t10147;
  t10279 = t10273 + t10275;
  t10170 = t7840*t10161;
  t10177 = -1.*t7883*t10161;
  t10314 = t6491*t9673;
  t10315 = t5735*t10197;
  t10316 = t10314 + t10315;
  t10226 = t7840*t10222;
  t10238 = -1.*t7883*t10222;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t2640*t3487 + t4177*t4991 + t5482*t5606 - 1.*t1761*t2138*t59 - 0.1305*(t268*t5606 + t1279*t2138*t59) + t6680*t6930 + t7193*t7754 + t7904*t7989 + t8073*t8102 - 0.21*(-1.*t7883*t7989 + t7840*t8102) - 0.049*(t7840*t7989 + t7883*t8102);
  p_output1[10]=t1761*t3275*t59 + t2640*t8336 + t4177*t8380 + t5482*t8440 + t6680*t8515 - 0.1305*t8597 + t7193*t8642 + t7904*t8657 + t8073*t8692 - 0.049*(t7840*t8657 + t7883*t8692) - 0.21*t8763;
  p_output1[11]=0;
  p_output1[12]=-1.*t1761*t3238*t3275 + t2640*t3205*t3275*t59 + t3275*t3297*t4177*t59 + t5482*t9002 - 0.1305*(t1279*t3238*t3275 + t268*t9002) + t6680*t9039 + t7193*t9091 + t7904*t9108 + t8073*t9136 - 0.21*(-1.*t7883*t9108 + t7840*t9136) - 0.049*(t7840*t9108 + t7883*t9136);
  p_output1[13]=-1.*t1761*t2138*t3238 + t2138*t2640*t3205*t59 + t2138*t3297*t4177*t59 + t5482*t9190 - 0.1305*(t1279*t2138*t3238 + t268*t9190) + t6680*t9210 + t7193*t9252 + t7904*t9260 + t8073*t9281 - 0.21*(-1.*t7883*t9260 + t7840*t9281) - 0.049*(t7840*t9260 + t7883*t9281);
  p_output1[14]=-1.*t2640*t3205*t3238 - 1.*t3238*t3297*t4177 - 1.*t1761*t59 + t5482*t9369 - 0.1305*(t1279*t59 + t268*t9369) + t6680*t9378 + t7193*t9404 + t7904*t9413 + t8073*t9426 - 0.21*(-1.*t7883*t9413 + t7840*t9426) - 0.049*(t7840*t9413 + t7883*t9426);
  p_output1[15]=t4177*t8336 + t2640*t9497 + t6680*t9512 - 0.1305*t268*t9524 + t5482*t9524 + t1279*t7193*t9524 + t7904*t9548 + t8073*t9556 - 0.21*(-1.*t7883*t9548 + t7840*t9556) - 0.049*(t7840*t9548 + t7883*t9556);
  p_output1[16]=t2640*t4991 + t4177*t9591 + t6680*t9598 - 0.1305*t268*t9610 + t5482*t9610 + t1279*t7193*t9610 + t7904*t9629 + t8073*t9634 - 0.21*(-1.*t7883*t9629 + t7840*t9634) - 0.049*(t7840*t9629 + t7883*t9634);
  p_output1[17]=-1.*t2640*t3297*t59 + t3205*t4177*t59 + t9666 + t9674 + t9675 + t9679 + t9694 + t9711 + t9717 + t9726;
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
  p_output1[39]=0.135*t3683*t8336 - 0.135*t2572*t8380 - 0.1305*t268*t8515 + t5482*t8515 + t1279*t7193*t8515 + t6680*t9735 + t7904*t9747 + t8073*t9765 - 0.21*(-1.*t7883*t9747 + t7840*t9765) - 0.049*(t7840*t9747 + t7883*t9765);
  p_output1[40]=0.135*t3683*t9591 - 0.135*t2572*t9819 + t6680*t9835 - 0.1305*t268*t9839 + t5482*t9839 + t1279*t7193*t9839 + t7904*t9856 + t8073*t9868 - 0.21*(-1.*t7883*t9856 + t7840*t9868) - 0.049*(t7840*t9856 + t7883*t9868);
  p_output1[41]=-0.135*t2572*t3297*t59 + 0.135*t3205*t3683*t59 + t9666 + t9674 + t9675 + t9679 + t9694 + t9711 + t9717 + t9726;
  p_output1[42]=-0.1305*(-1.*t268*t3275*t59 - 1.*t1279*t8440) + t7193*t8597 + t5735*t7904*t8597 - 1.*t6491*t8073*t8597 - 0.21*(-1.*t6491*t7840*t8597 - 1.*t5735*t7883*t8597) - 0.049*(t5735*t7840*t8597 - 1.*t6491*t7883*t8597) + t3275*t59*t9910 + t8440*t9915;
  p_output1[43]=t2138*t59*t9910 + t9915*t9961 - 0.1305*(t7294 - 1.*t1279*t9961) + t7193*t9971 + t5735*t7904*t9971 - 1.*t6491*t8073*t9971 - 0.21*(-1.*t6491*t7840*t9971 - 1.*t5735*t7883*t9971) - 0.049*(t5735*t7840*t9971 - 1.*t6491*t7883*t9971);
  p_output1[44]=-0.1305*(-1.*t10016*t1279 + t268*t3238) + t10029*t7193 - 0.21*(-1.*t10029*t6491*t7840 - 1.*t10029*t5735*t7883) - 0.049*(t10029*t5735*t7840 - 1.*t10029*t6491*t7883) + t10029*t5735*t7904 - 1.*t10029*t6491*t8073 - 1.*t3238*t9910 + t10016*t9915;
  p_output1[45]=-0.21*(t10128 + t10103*t7840) + t10103*t8073 + t10069*t8515 + t10084*t8642 + t7904*t8692 - 0.049*(t10103*t7883 + t8755);
  p_output1[46]=t10084*t10147 - 0.21*(t10177 + t10155*t7840) - 0.049*(t10170 + t10155*t7883) + t10161*t7904 + t10155*t8073 + t10069*t9839;
  p_output1[47]=t10084*t10197 - 0.21*(t10238 + t10202*t7840) - 0.049*(t10226 + t10202*t7883) + t10222*t7904 + t10202*t8073 + t10069*t9673;
  p_output1[48]=t10247*t8657 - 0.21*(t10128 - 1.*t7840*t8657) + t10256*t8692 - 0.049*t8763;
  p_output1[49]=t10161*t10256 + t10247*t10279 - 0.21*(t10177 - 1.*t10279*t7840) - 0.049*(t10170 - 1.*t10279*t7883);
  p_output1[50]=t10222*t10256 + t10247*t10316 - 0.21*(t10238 - 1.*t10316*t7840) - 0.049*(t10226 - 1.*t10316*t7883);
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
