/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:50 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_ankle_joint_right_src.h"

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
  double t393;
  double t2602;
  double t4024;
  double t2770;
  double t4092;
  double t1316;
  double t1520;
  double t1542;
  double t1846;
  double t2082;
  double t3467;
  double t4098;
  double t4159;
  double t4943;
  double t6826;
  double t8503;
  double t8572;
  double t586;
  double t8630;
  double t8633;
  double t8637;
  double t8648;
  double t8649;
  double t8653;
  double t8659;
  double t8669;
  double t8672;
  double t8673;
  double t8695;
  double t8702;
  double t8704;
  double t8710;
  double t8711;
  double t8713;
  double t8727;
  double t8738;
  double t8740;
  double t8741;
  double t8751;
  double t8754;
  double t8765;
  double t8780;
  double t8784;
  double t8788;
  double t8795;
  double t8801;
  double t8807;
  double t8808;
  double t8829;
  double t8833;
  double t8835;
  double t8840;
  double t8843;
  double t8846;
  double t8857;
  double t8873;
  double t8877;
  double t8882;
  double t8897;
  double t8900;
  double t8903;
  double t1694;
  double t2010;
  double t2045;
  double t2217;
  double t2224;
  double t5211;
  double t5976;
  double t6553;
  double t6631;
  double t8583;
  double t8618;
  double t8629;
  double t8941;
  double t8942;
  double t8944;
  double t8950;
  double t8951;
  double t8956;
  double t8655;
  double t8662;
  double t8665;
  double t8960;
  double t8961;
  double t8962;
  double t8690;
  double t8692;
  double t8694;
  double t8714;
  double t8733;
  double t8734;
  double t8969;
  double t8970;
  double t8978;
  double t8987;
  double t8989;
  double t8990;
  double t8745;
  double t8746;
  double t8750;
  double t8791;
  double t8797;
  double t8799;
  double t9000;
  double t9001;
  double t9006;
  double t9014;
  double t9017;
  double t9018;
  double t8823;
  double t8824;
  double t8827;
  double t8849;
  double t8860;
  double t8868;
  double t9021;
  double t9024;
  double t9026;
  double t9031;
  double t9034;
  double t9039;
  double t8893;
  double t8894;
  double t8895;
  double t9045;
  double t9046;
  double t9047;
  double t9049;
  double t9054;
  double t9061;
  double t9098;
  double t9100;
  double t9101;
  double t9104;
  double t9105;
  double t9110;
  double t9123;
  double t9124;
  double t9127;
  double t9131;
  double t9132;
  double t9133;
  double t9135;
  double t9137;
  double t9139;
  double t9142;
  double t9144;
  double t9146;
  double t9150;
  double t9151;
  double t9154;
  double t9162;
  double t9165;
  double t9166;
  double t9168;
  double t9169;
  double t9170;
  t393 = Cos(var1[3]);
  t2602 = Cos(var1[5]);
  t4024 = Sin(var1[3]);
  t2770 = Sin(var1[4]);
  t4092 = Sin(var1[5]);
  t1316 = Cos(var1[14]);
  t1520 = -1.*t1316;
  t1542 = 1. + t1520;
  t1846 = Sin(var1[14]);
  t2082 = Sin(var1[13]);
  t3467 = t393*t2602*t2770;
  t4098 = t4024*t4092;
  t4159 = t3467 + t4098;
  t4943 = Cos(var1[13]);
  t6826 = -1.*t2602*t4024;
  t8503 = t393*t2770*t4092;
  t8572 = t6826 + t8503;
  t586 = Cos(var1[4]);
  t8630 = t2082*t4159;
  t8633 = t4943*t8572;
  t8637 = t8630 + t8633;
  t8648 = Cos(var1[15]);
  t8649 = -1.*t8648;
  t8653 = 1. + t8649;
  t8659 = Sin(var1[15]);
  t8669 = t4943*t4159;
  t8672 = -1.*t2082*t8572;
  t8673 = t8669 + t8672;
  t8695 = t1316*t393*t586;
  t8702 = t1846*t8637;
  t8704 = t8695 + t8702;
  t8710 = Cos(var1[16]);
  t8711 = -1.*t8710;
  t8713 = 1. + t8711;
  t8727 = Sin(var1[16]);
  t8738 = t8659*t8673;
  t8740 = t8648*t8704;
  t8741 = t8738 + t8740;
  t8751 = t8648*t8673;
  t8754 = -1.*t8659*t8704;
  t8765 = t8751 + t8754;
  t8780 = Cos(var1[17]);
  t8784 = -1.*t8780;
  t8788 = 1. + t8784;
  t8795 = Sin(var1[17]);
  t8801 = -1.*t8727*t8741;
  t8807 = t8710*t8765;
  t8808 = t8801 + t8807;
  t8829 = t8710*t8741;
  t8833 = t8727*t8765;
  t8835 = t8829 + t8833;
  t8840 = Cos(var1[18]);
  t8843 = -1.*t8840;
  t8846 = 1. + t8843;
  t8857 = Sin(var1[18]);
  t8873 = t8795*t8808;
  t8877 = t8780*t8835;
  t8882 = t8873 + t8877;
  t8897 = t8780*t8808;
  t8900 = -1.*t8795*t8835;
  t8903 = t8897 + t8900;
  t1694 = -0.049*t1542;
  t2010 = -0.135*t1846;
  t2045 = 0. + t1694 + t2010;
  t2217 = 0.135*t2082;
  t2224 = 0. + t2217;
  t5211 = -1.*t4943;
  t5976 = 1. + t5211;
  t6553 = -0.135*t5976;
  t6631 = 0. + t6553;
  t8583 = -0.135*t1542;
  t8618 = 0.049*t1846;
  t8629 = 0. + t8583 + t8618;
  t8941 = t2602*t4024*t2770;
  t8942 = -1.*t393*t4092;
  t8944 = t8941 + t8942;
  t8950 = t393*t2602;
  t8951 = t4024*t2770*t4092;
  t8956 = t8950 + t8951;
  t8655 = -0.09*t8653;
  t8662 = 0.049*t8659;
  t8665 = 0. + t8655 + t8662;
  t8960 = t2082*t8944;
  t8961 = t4943*t8956;
  t8962 = t8960 + t8961;
  t8690 = -0.049*t8653;
  t8692 = -0.09*t8659;
  t8694 = 0. + t8690 + t8692;
  t8714 = -0.049*t8713;
  t8733 = -0.21*t8727;
  t8734 = 0. + t8714 + t8733;
  t8969 = t4943*t8944;
  t8970 = -1.*t2082*t8956;
  t8978 = t8969 + t8970;
  t8987 = t1316*t586*t4024;
  t8989 = t1846*t8962;
  t8990 = t8987 + t8989;
  t8745 = -0.21*t8713;
  t8746 = 0.049*t8727;
  t8750 = 0. + t8745 + t8746;
  t8791 = -0.2707*t8788;
  t8797 = 0.0016*t8795;
  t8799 = 0. + t8791 + t8797;
  t9000 = t8659*t8978;
  t9001 = t8648*t8990;
  t9006 = t9000 + t9001;
  t9014 = t8648*t8978;
  t9017 = -1.*t8659*t8990;
  t9018 = t9014 + t9017;
  t8823 = -0.0016*t8788;
  t8824 = -0.2707*t8795;
  t8827 = 0. + t8823 + t8824;
  t8849 = 0.0184*t8846;
  t8860 = -0.7055*t8857;
  t8868 = 0. + t8849 + t8860;
  t9021 = -1.*t8727*t9006;
  t9024 = t8710*t9018;
  t9026 = t9021 + t9024;
  t9031 = t8710*t9006;
  t9034 = t8727*t9018;
  t9039 = t9031 + t9034;
  t8893 = -0.7055*t8846;
  t8894 = -0.0184*t8857;
  t8895 = 0. + t8893 + t8894;
  t9045 = t8795*t9026;
  t9046 = t8780*t9039;
  t9047 = t9045 + t9046;
  t9049 = t8780*t9026;
  t9054 = -1.*t8795*t9039;
  t9061 = t9049 + t9054;
  t9098 = t586*t2602*t2082;
  t9100 = t4943*t586*t4092;
  t9101 = t9098 + t9100;
  t9104 = t4943*t586*t2602;
  t9105 = -1.*t586*t2082*t4092;
  t9110 = t9104 + t9105;
  t9123 = -1.*t1316*t2770;
  t9124 = t1846*t9101;
  t9127 = t9123 + t9124;
  t9131 = t8659*t9110;
  t9132 = t8648*t9127;
  t9133 = t9131 + t9132;
  t9135 = t8648*t9110;
  t9137 = -1.*t8659*t9127;
  t9139 = t9135 + t9137;
  t9142 = -1.*t8727*t9133;
  t9144 = t8710*t9139;
  t9146 = t9142 + t9144;
  t9150 = t8710*t9133;
  t9151 = t8727*t9139;
  t9154 = t9150 + t9151;
  t9162 = t8795*t9146;
  t9165 = t8780*t9154;
  t9166 = t9162 + t9165;
  t9168 = t8780*t9146;
  t9169 = -1.*t8795*t9154;
  t9170 = t9168 + t9169;
  p_output1[0]=0. + t2224*t4159 + t2045*t393*t586 + t6631*t8572 + t8629*t8637 - 0.1305*(-1.*t1846*t393*t586 + t1316*t8637) + t8665*t8673 + t8694*t8704 + t8734*t8741 + t8750*t8765 + t8799*t8808 + t8827*t8835 + t8868*t8882 + t8895*t8903 - 0.7055*(-1.*t8857*t8882 + t8840*t8903) + 0.0184*(t8840*t8882 + t8857*t8903) + var1[0];
  p_output1[1]=0. + t2045*t4024*t586 + t2224*t8944 + t6631*t8956 + t8629*t8962 - 0.1305*(-1.*t1846*t4024*t586 + t1316*t8962) + t8665*t8978 + t8694*t8990 + t8734*t9006 + t8750*t9018 + t8799*t9026 + t8827*t9039 + t8868*t9047 + t8895*t9061 - 0.7055*(-1.*t8857*t9047 + t8840*t9061) + 0.0184*(t8840*t9047 + t8857*t9061) + var1[1];
  p_output1[2]=0. - 1.*t2045*t2770 + t2224*t2602*t586 + t4092*t586*t6631 + t8629*t9101 - 0.1305*(t1846*t2770 + t1316*t9101) + t8665*t9110 + t8694*t9127 + t8734*t9133 + t8750*t9139 + t8799*t9146 + t8827*t9154 + t8868*t9166 + t8895*t9170 - 0.7055*(-1.*t8857*t9166 + t8840*t9170) + 0.0184*(t8840*t9166 + t8857*t9170) + var1[2];
}



void p_ankle_joint_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
