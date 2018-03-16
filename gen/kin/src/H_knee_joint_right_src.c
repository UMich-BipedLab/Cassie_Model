/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 11:08:23 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_knee_joint_right_src.h"

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
  double t410;
  double t713;
  double t284;
  double t490;
  double t764;
  double t973;
  double t523;
  double t862;
  double t870;
  double t279;
  double t982;
  double t1164;
  double t1376;
  double t1540;
  double t946;
  double t1413;
  double t1468;
  double t278;
  double t1697;
  double t1698;
  double t1797;
  double t1806;
  double t1933;
  double t1937;
  double t2189;
  double t2214;
  double t2330;
  double t269;
  double t2960;
  double t3044;
  double t3245;
  double t3471;
  double t3483;
  double t3504;
  double t2476;
  double t3248;
  double t3540;
  double t3544;
  double t3757;
  double t3761;
  double t3858;
  double t3927;
  double t3982;
  double t4031;
  double t7609;
  double t7619;
  double t7656;
  double t7669;
  double t7678;
  double t7685;
  double t7688;
  double t7708;
  double t7711;
  double t1514;
  double t2455;
  double t2465;
  double t2518;
  double t2615;
  double t2650;
  double t3609;
  double t4180;
  double t4304;
  double t4928;
  double t5487;
  double t5618;
  double t7664;
  double t7713;
  double t7715;
  double t7719;
  double t7723;
  double t7724;
  double t7827;
  double t7829;
  double t7861;
  double t7863;
  double t7888;
  double t7892;
  double t7751;
  double t7752;
  double t7756;
  double t7830;
  double t7831;
  double t7833;
  double t7841;
  double t7843;
  double t7848;
  double t7849;
  double t7850;
  double t7851;
  double t7854;
  double t7857;
  double t7858;
  double t7867;
  double t7870;
  double t7873;
  double t7881;
  double t7882;
  double t7883;
  double t7893;
  double t7894;
  double t7895;
  double t7899;
  double t7901;
  double t7902;
  double t7764;
  double t7788;
  double t7792;
  double t7795;
  double t7800;
  double t7803;
  t410 = Cos(var1[5]);
  t713 = Sin(var1[3]);
  t284 = Cos(var1[3]);
  t490 = Sin(var1[4]);
  t764 = Sin(var1[5]);
  t973 = Sin(var1[13]);
  t523 = t284*t410*t490;
  t862 = t713*t764;
  t870 = t523 + t862;
  t279 = Cos(var1[13]);
  t982 = -1.*t410*t713;
  t1164 = t284*t490*t764;
  t1376 = t982 + t1164;
  t1540 = Cos(var1[15]);
  t946 = t279*t870;
  t1413 = -1.*t973*t1376;
  t1468 = t946 + t1413;
  t278 = Sin(var1[15]);
  t1697 = Cos(var1[14]);
  t1698 = Cos(var1[4]);
  t1797 = t1697*t284*t1698;
  t1806 = Sin(var1[14]);
  t1933 = t973*t870;
  t1937 = t279*t1376;
  t2189 = t1933 + t1937;
  t2214 = t1806*t2189;
  t2330 = t1797 + t2214;
  t269 = Sin(var1[16]);
  t2960 = t410*t713*t490;
  t3044 = -1.*t284*t764;
  t3245 = t2960 + t3044;
  t3471 = t284*t410;
  t3483 = t713*t490*t764;
  t3504 = t3471 + t3483;
  t2476 = Cos(var1[16]);
  t3248 = t279*t3245;
  t3540 = -1.*t973*t3504;
  t3544 = t3248 + t3540;
  t3757 = t1697*t1698*t713;
  t3761 = t973*t3245;
  t3858 = t279*t3504;
  t3927 = t3761 + t3858;
  t3982 = t1806*t3927;
  t4031 = t3757 + t3982;
  t7609 = t279*t1698*t410;
  t7619 = -1.*t1698*t973*t764;
  t7656 = t7609 + t7619;
  t7669 = -1.*t1697*t490;
  t7678 = t1698*t410*t973;
  t7685 = t279*t1698*t764;
  t7688 = t7678 + t7685;
  t7708 = t1806*t7688;
  t7711 = t7669 + t7708;
  t1514 = t278*t1468;
  t2455 = t1540*t2330;
  t2465 = t1514 + t2455;
  t2518 = t1540*t1468;
  t2615 = -1.*t278*t2330;
  t2650 = t2518 + t2615;
  t3609 = t278*t3544;
  t4180 = t1540*t4031;
  t4304 = t3609 + t4180;
  t4928 = t1540*t3544;
  t5487 = -1.*t278*t4031;
  t5618 = t4928 + t5487;
  t7664 = t278*t7656;
  t7713 = t1540*t7711;
  t7715 = t7664 + t7713;
  t7719 = t1540*t7656;
  t7723 = -1.*t278*t7711;
  t7724 = t7719 + t7723;
  t7827 = -1.*t1697;
  t7829 = 1. + t7827;
  t7861 = -1.*t1540;
  t7863 = 1. + t7861;
  t7888 = -1.*t2476;
  t7892 = 1. + t7888;
  t7751 = t2476*t2465;
  t7752 = t269*t2650;
  t7756 = t7751 + t7752;
  t7830 = -0.049*t7829;
  t7831 = -0.135*t1806;
  t7833 = 0. + t7830 + t7831;
  t7841 = 0.135*t973;
  t7843 = 0. + t7841;
  t7848 = -1.*t279;
  t7849 = 1. + t7848;
  t7850 = -0.135*t7849;
  t7851 = 0. + t7850;
  t7854 = -0.135*t7829;
  t7857 = 0.049*t1806;
  t7858 = 0. + t7854 + t7857;
  t7867 = -0.09*t7863;
  t7870 = 0.049*t278;
  t7873 = 0. + t7867 + t7870;
  t7881 = -0.049*t7863;
  t7882 = -0.09*t278;
  t7883 = 0. + t7881 + t7882;
  t7893 = -0.049*t7892;
  t7894 = -0.21*t269;
  t7895 = 0. + t7893 + t7894;
  t7899 = -0.21*t7892;
  t7901 = 0.049*t269;
  t7902 = 0. + t7899 + t7901;
  t7764 = t2476*t4304;
  t7788 = t269*t5618;
  t7792 = t7764 + t7788;
  t7795 = t2476*t7715;
  t7800 = t269*t7724;
  t7803 = t7795 + t7800;
  p_output1[0]=-1.*t2476*t2650 + t2465*t269;
  p_output1[1]=t269*t4304 - 1.*t2476*t5618;
  p_output1[2]=t269*t7715 - 1.*t2476*t7724;
  p_output1[3]=0.;
  p_output1[4]=t7756;
  p_output1[5]=t7792;
  p_output1[6]=t7803;
  p_output1[7]=0.;
  p_output1[8]=-1.*t1697*t2189 + t1698*t1806*t284;
  p_output1[9]=-1.*t1697*t3927 + t1698*t1806*t713;
  p_output1[10]=-1.*t1806*t490 - 1.*t1697*t7688;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.21*(t2476*t2650 - 1.*t2465*t269) - 0.1305*(t1697*t2189 - 1.*t1698*t1806*t284) - 0.049*t7756 + t1698*t284*t7833 + t1376*t7851 + t2189*t7858 + t1468*t7873 + t2330*t7883 + t2465*t7895 + t2650*t7902 + t7843*t870 + var1[0];
  p_output1[13]=0. - 0.21*(-1.*t269*t4304 + t2476*t5618) - 0.1305*(t1697*t3927 - 1.*t1698*t1806*t713) - 0.049*t7792 + t1698*t713*t7833 + t3245*t7843 + t3504*t7851 + t3927*t7858 + t3544*t7873 + t4031*t7883 + t4304*t7895 + t5618*t7902 + var1[1];
  p_output1[14]=0. - 0.1305*(t1806*t490 + t1697*t7688) - 0.21*(-1.*t269*t7715 + t2476*t7724) - 0.049*t7803 - 1.*t490*t7833 + t1698*t410*t7843 + t1698*t764*t7851 + t7688*t7858 + t7656*t7873 + t7711*t7883 + t7715*t7895 + t7724*t7902 + var1[2];
  p_output1[15]=1.;
}



void H_knee_joint_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
