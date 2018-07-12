/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:33:16 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_ankle_joint_left_src.h"

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
  double t812;
  double t1936;
  double t2447;
  double t2162;
  double t2635;
  double t1864;
  double t2958;
  double t3457;
  double t3538;
  double t2433;
  double t2668;
  double t2673;
  double t3600;
  double t623;
  double t4078;
  double t4080;
  double t4098;
  double t1430;
  double t1484;
  double t1493;
  double t2685;
  double t3633;
  double t3741;
  double t4004;
  double t4045;
  double t4054;
  double t4113;
  double t4162;
  double t4059;
  double t4135;
  double t4136;
  double t303;
  double t4179;
  double t4193;
  double t4202;
  double t4280;
  double t4158;
  double t4204;
  double t4245;
  double t277;
  double t4288;
  double t4319;
  double t4335;
  double t241;
  double t4559;
  double t4577;
  double t4579;
  double t4445;
  double t4481;
  double t4504;
  double t4678;
  double t4709;
  double t4710;
  double t4440;
  double t4516;
  double t4581;
  double t4631;
  double t4641;
  double t4645;
  double t4661;
  double t4730;
  double t4732;
  double t4748;
  double t4777;
  double t4778;
  double t4374;
  double t4738;
  double t4779;
  double t4791;
  double t4818;
  double t4822;
  double t4833;
  double t5082;
  double t5085;
  double t5088;
  double t4986;
  double t5000;
  double t5024;
  double t5029;
  double t5054;
  double t5065;
  double t5067;
  double t5097;
  double t5117;
  double t5144;
  double t5152;
  double t5157;
  double t5127;
  double t5187;
  double t5188;
  double t5214;
  double t5263;
  double t5299;
  double t4276;
  double t4347;
  double t4355;
  double t4403;
  double t4406;
  double t4410;
  double t4816;
  double t4842;
  double t4880;
  double t4912;
  double t4920;
  double t4963;
  double t5202;
  double t5318;
  double t5320;
  double t5339;
  double t5342;
  double t5355;
  t812 = Cos(var1[3]);
  t1936 = Cos(var1[5]);
  t2447 = Sin(var1[4]);
  t2162 = Sin(var1[3]);
  t2635 = Sin(var1[5]);
  t1864 = Cos(var1[6]);
  t2958 = t812*t1936*t2447;
  t3457 = t2162*t2635;
  t3538 = t2958 + t3457;
  t2433 = -1.*t1936*t2162;
  t2668 = t812*t2447*t2635;
  t2673 = t2433 + t2668;
  t3600 = Sin(var1[6]);
  t623 = Cos(var1[8]);
  t4078 = t1864*t3538;
  t4080 = -1.*t2673*t3600;
  t4098 = t4078 + t4080;
  t1430 = Cos(var1[4]);
  t1484 = Cos(var1[7]);
  t1493 = t812*t1430*t1484;
  t2685 = t1864*t2673;
  t3633 = t3538*t3600;
  t3741 = t2685 + t3633;
  t4004 = Sin(var1[7]);
  t4045 = t3741*t4004;
  t4054 = t1493 + t4045;
  t4113 = Sin(var1[8]);
  t4162 = Cos(var1[9]);
  t4059 = t623*t4054;
  t4135 = t4098*t4113;
  t4136 = t4059 + t4135;
  t303 = Sin(var1[9]);
  t4179 = t623*t4098;
  t4193 = -1.*t4054*t4113;
  t4202 = t4179 + t4193;
  t4280 = Cos(var1[10]);
  t4158 = -1.*t303*t4136;
  t4204 = t4162*t4202;
  t4245 = t4158 + t4204;
  t277 = Sin(var1[10]);
  t4288 = t4162*t4136;
  t4319 = t303*t4202;
  t4335 = t4288 + t4319;
  t241 = Sin(var1[11]);
  t4559 = t1936*t2162*t2447;
  t4577 = -1.*t812*t2635;
  t4579 = t4559 + t4577;
  t4445 = t812*t1936;
  t4481 = t2162*t2447*t2635;
  t4504 = t4445 + t4481;
  t4678 = t1864*t4579;
  t4709 = -1.*t4504*t3600;
  t4710 = t4678 + t4709;
  t4440 = t1430*t1484*t2162;
  t4516 = t1864*t4504;
  t4581 = t4579*t3600;
  t4631 = t4516 + t4581;
  t4641 = t4631*t4004;
  t4645 = t4440 + t4641;
  t4661 = t623*t4645;
  t4730 = t4710*t4113;
  t4732 = t4661 + t4730;
  t4748 = t623*t4710;
  t4777 = -1.*t4645*t4113;
  t4778 = t4748 + t4777;
  t4374 = Cos(var1[11]);
  t4738 = -1.*t303*t4732;
  t4779 = t4162*t4778;
  t4791 = t4738 + t4779;
  t4818 = t4162*t4732;
  t4822 = t303*t4778;
  t4833 = t4818 + t4822;
  t5082 = t1430*t1936*t1864;
  t5085 = -1.*t1430*t2635*t3600;
  t5088 = t5082 + t5085;
  t4986 = -1.*t1484*t2447;
  t5000 = t1430*t1864*t2635;
  t5024 = t1430*t1936*t3600;
  t5029 = t5000 + t5024;
  t5054 = t5029*t4004;
  t5065 = t4986 + t5054;
  t5067 = t623*t5065;
  t5097 = t5088*t4113;
  t5117 = t5067 + t5097;
  t5144 = t623*t5088;
  t5152 = -1.*t5065*t4113;
  t5157 = t5144 + t5152;
  t5127 = -1.*t303*t5117;
  t5187 = t4162*t5157;
  t5188 = t5127 + t5187;
  t5214 = t4162*t5117;
  t5263 = t303*t5157;
  t5299 = t5214 + t5263;
  t4276 = t277*t4245;
  t4347 = t4280*t4335;
  t4355 = t4276 + t4347;
  t4403 = t4280*t4245;
  t4406 = -1.*t277*t4335;
  t4410 = t4403 + t4406;
  t4816 = t277*t4791;
  t4842 = t4280*t4833;
  t4880 = t4816 + t4842;
  t4912 = t4280*t4791;
  t4920 = -1.*t277*t4833;
  t4963 = t4912 + t4920;
  t5202 = t277*t5188;
  t5318 = t4280*t5299;
  t5320 = t5202 + t5318;
  t5339 = t4280*t5188;
  t5342 = -1.*t277*t5299;
  t5355 = t5339 + t5342;
  p_output1[0]=t241*t4355 - 1.*t4374*t4410;
  p_output1[1]=t241*t4880 - 1.*t4374*t4963;
  p_output1[2]=t241*t5320 - 1.*t4374*t5355;
  p_output1[3]=t4355*t4374 + t241*t4410;
  p_output1[4]=t4374*t4880 + t241*t4963;
  p_output1[5]=t4374*t5320 + t241*t5355;
  p_output1[6]=-1.*t1484*t3741 + t1430*t4004*t812;
  p_output1[7]=t1430*t2162*t4004 - 1.*t1484*t4631;
  p_output1[8]=-1.*t2447*t4004 - 1.*t1484*t5029;
}



void R_ankle_joint_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
