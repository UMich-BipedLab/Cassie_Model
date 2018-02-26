/*
 * Automatically Generated from Mathematica.
 * Mon 26 Feb 2018 15:43:08 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RightToeBottom_to_LeftToeBottom.h"

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
  double t338;
  double t600;
  double t685;
  double t594;
  double t730;
  double t214;
  double t926;
  double t1088;
  double t1122;
  double t652;
  double t793;
  double t824;
  double t1143;
  double t90;
  double t1375;
  double t1387;
  double t1440;
  double t861;
  double t1181;
  double t1194;
  double t1445;
  double t69;
  double t1495;
  double t1628;
  double t1640;
  double t1235;
  double t1446;
  double t1449;
  double t1674;
  double t2259;
  double t2006;
  double t2043;
  double t2384;
  double t2389;
  double t2421;
  double t2192;
  double t2267;
  double t2318;
  double t2472;
  double t2487;
  double t2584;
  double t2320;
  double t2426;
  double t2436;
  double t2786;
  double t2805;
  double t2819;
  double t2446;
  double t2643;
  double t2687;
  double t3051;
  double t3084;
  double t3110;
  double t2721;
  double t2858;
  double t2902;
  double t1478;
  double t1705;
  double t1744;
  double t1874;
  double t1913;
  double t1916;
  double t2955;
  double t3134;
  double t3135;
  double t3233;
  double t3244;
  double t3273;
  double t3524;
  double t3525;
  double t3540;
  double t3377;
  double t3432;
  double t3440;
  double t3718;
  double t3732;
  double t3737;
  double t3648;
  double t3674;
  double t3696;
  double t3829;
  double t3874;
  double t3875;
  double t3698;
  double t3738;
  double t3795;
  double t3962;
  double t3963;
  double t3984;
  double t3800;
  double t3914;
  double t3939;
  double t4129;
  double t4207;
  double t4215;
  double t3959;
  double t4053;
  double t4083;
  double t3150;
  double t3314;
  double t3347;
  double t1870;
  double t1981;
  double t1992;
  double t4087;
  double t4230;
  double t4231;
  double t4344;
  double t4366;
  double t4373;
  double t4333;
  double t4394;
  double t4447;
  double t4577;
  double t4581;
  double t4644;
  double t33;
  double t4816;
  double t4899;
  double t3578;
  double t4494;
  double t4495;
  double t4535;
  double t4572;
  double t4646;
  double t4706;
  double t4797;
  double t4904;
  double t4930;
  double t4971;
  double t4976;
  double t15;
  double t5214;
  double t5464;
  double t5287;
  double t5308;
  double t5326;
  double t7465;
  double t7018;
  double t7056;
  double t7578;
  double t8618;
  double t7455;
  double t7588;
  double t7671;
  double t6957;
  double t8628;
  double t8629;
  double t8662;
  double t8716;
  double t8584;
  double t8664;
  double t8702;
  double t6954;
  double t8717;
  double t8720;
  double t8723;
  double t8766;
  double t8706;
  double t8732;
  double t8741;
  double t6894;
  double t8768;
  double t8769;
  double t8770;
  double t3354;
  double t3543;
  double t3546;
  double t8795;
  double t8796;
  double t8804;
  double t8807;
  double t8808;
  double t8812;
  double t8806;
  double t8815;
  double t8816;
  double t8825;
  double t8830;
  double t8832;
  double t8818;
  double t8835;
  double t8837;
  double t8839;
  double t8842;
  double t8844;
  double t8838;
  double t8845;
  double t8847;
  double t8851;
  double t8852;
  double t8853;
  double t5205;
  double t8863;
  double t8864;
  double t8865;
  double t8867;
  double t8868;
  double t8869;
  double t8866;
  double t8870;
  double t8871;
  double t8873;
  double t8874;
  double t8875;
  double t8872;
  double t8876;
  double t8877;
  double t8879;
  double t8880;
  double t8881;
  double t8878;
  double t8886;
  double t8889;
  double t8895;
  double t8896;
  double t8897;
  double t5907;
  double t5915;
  double t5996;
  double t8745;
  double t8771;
  double t8776;
  double t8779;
  double t8782;
  double t8783;
  double t8785;
  double t8791;
  double t8792;
  double t5542;
  double t5686;
  double t5687;
  double t8850;
  double t8854;
  double t8855;
  double t8856;
  double t8857;
  double t8858;
  double t8859;
  double t8860;
  double t8861;
  double t5714;
  double t5780;
  double t5883;
  double t8892;
  double t8900;
  double t8905;
  double t8906;
  double t8907;
  double t8908;
  double t8909;
  double t8917;
  double t8918;
  double t6648;
  double t6687;
  double t6797;
  double t6175;
  double t6211;
  double t6216;
  double t6346;
  double t8936;
  double t8937;
  double t8938;
  double t8942;
  double t8943;
  double t8944;
  double t8946;
  double t8947;
  double t8948;
  t338 = Cos(var1[8]);
  t600 = Cos(var1[10]);
  t685 = Sin(var1[9]);
  t594 = Cos(var1[9]);
  t730 = Sin(var1[10]);
  t214 = Cos(var1[11]);
  t926 = -1.*t338*t600*t685;
  t1088 = -1.*t338*t594*t730;
  t1122 = t926 + t1088;
  t652 = t338*t594*t600;
  t793 = -1.*t338*t685*t730;
  t824 = t652 + t793;
  t1143 = Sin(var1[11]);
  t90 = Cos(var1[12]);
  t1375 = t214*t1122;
  t1387 = -1.*t824*t1143;
  t1440 = t1375 + t1387;
  t861 = t214*t824;
  t1181 = t1122*t1143;
  t1194 = t861 + t1181;
  t1445 = Sin(var1[12]);
  t69 = Cos(var1[13]);
  t1495 = t90*t1440;
  t1628 = -1.*t1194*t1445;
  t1640 = t1495 + t1628;
  t1235 = t90*t1194;
  t1446 = t1440*t1445;
  t1449 = t1235 + t1446;
  t1674 = Sin(var1[13]);
  t2259 = Cos(var1[7]);
  t2006 = Sin(var1[7]);
  t2043 = Sin(var1[8]);
  t2384 = t2259*t594;
  t2389 = -1.*t2006*t2043*t685;
  t2421 = t2384 + t2389;
  t2192 = t594*t2006*t2043;
  t2267 = t2259*t685;
  t2318 = t2192 + t2267;
  t2472 = t600*t2421;
  t2487 = -1.*t2318*t730;
  t2584 = t2472 + t2487;
  t2320 = t600*t2318;
  t2426 = t2421*t730;
  t2436 = t2320 + t2426;
  t2786 = t214*t2584;
  t2805 = -1.*t2436*t1143;
  t2819 = t2786 + t2805;
  t2446 = t214*t2436;
  t2643 = t2584*t1143;
  t2687 = t2446 + t2643;
  t3051 = t90*t2819;
  t3084 = -1.*t2687*t1445;
  t3110 = t3051 + t3084;
  t2721 = t90*t2687;
  t2858 = t2819*t1445;
  t2902 = t2721 + t2858;
  t1478 = t69*t1449;
  t1705 = t1640*t1674;
  t1744 = t1478 + t1705;
  t1874 = t69*t1640;
  t1913 = -1.*t1449*t1674;
  t1916 = t1874 + t1913;
  t2955 = t69*t2902;
  t3134 = t3110*t1674;
  t3135 = t2955 + t3134;
  t3233 = t69*t3110;
  t3244 = -1.*t2902*t1674;
  t3273 = t3233 + t3244;
  t3524 = 0.642788*t3135;
  t3525 = 0.766044*t3273;
  t3540 = t3524 + t3525;
  t3377 = -0.766044*t1744;
  t3432 = 0.642788*t1916;
  t3440 = t3377 + t3432;
  t3718 = -1.*t594*t2006;
  t3732 = -1.*t2259*t2043*t685;
  t3737 = t3718 + t3732;
  t3648 = t2259*t594*t2043;
  t3674 = -1.*t2006*t685;
  t3696 = t3648 + t3674;
  t3829 = t600*t3737;
  t3874 = -1.*t3696*t730;
  t3875 = t3829 + t3874;
  t3698 = t600*t3696;
  t3738 = t3737*t730;
  t3795 = t3698 + t3738;
  t3962 = t214*t3875;
  t3963 = -1.*t3795*t1143;
  t3984 = t3962 + t3963;
  t3800 = t214*t3795;
  t3914 = t3875*t1143;
  t3939 = t3800 + t3914;
  t4129 = t90*t3984;
  t4207 = -1.*t3939*t1445;
  t4215 = t4129 + t4207;
  t3959 = t90*t3939;
  t4053 = t3984*t1445;
  t4083 = t3959 + t4053;
  t3150 = -0.766044*t3135;
  t3314 = 0.642788*t3273;
  t3347 = t3150 + t3314;
  t1870 = 0.642788*t1744;
  t1981 = 0.766044*t1916;
  t1992 = t1870 + t1981;
  t4087 = t69*t4083;
  t4230 = t4215*t1674;
  t4231 = t4087 + t4230;
  t4344 = t69*t4215;
  t4366 = -1.*t4083*t1674;
  t4373 = t4344 + t4366;
  t4333 = -0.766044*t4231;
  t4394 = 0.642788*t4373;
  t4447 = t4333 + t4394;
  t4577 = 0.642788*t4231;
  t4581 = 0.766044*t4373;
  t4644 = t4577 + t4581;
  t33 = Cos(var1[1]);
  t4816 = t1992*t4447;
  t4899 = -1.*t3440*t4644;
  t3578 = t2259*t338*t3440;
  t4494 = t2043*t4447;
  t4495 = t3578 + t4494;
  t4535 = -1.*t3540*t4495;
  t4572 = t2259*t338*t1992;
  t4646 = t2043*t4644;
  t4706 = t4572 + t4646;
  t4797 = t3347*t4706;
  t4904 = t4816 + t4899;
  t4930 = -1.*t338*t2006*t4904;
  t4971 = 0. + t4535 + t4797 + t4930;
  t4976 = 1/t4971;
  t15 = Cos(var1[0]);
  t5214 = Sin(var1[0]);
  t5464 = Sin(var1[1]);
  t5287 = t4644*t3347;
  t5308 = -1.*t4447*t3540;
  t5326 = 0. + t5287 + t5308;
  t7465 = Cos(var1[3]);
  t7018 = Cos(var1[2]);
  t7056 = Sin(var1[3]);
  t7578 = Sin(var1[2]);
  t8618 = Cos(var1[4]);
  t7455 = -1.*t33*t7018*t7056;
  t7588 = -1.*t7465*t33*t7578;
  t7671 = t7455 + t7588;
  t6957 = Sin(var1[4]);
  t8628 = t7465*t33*t7018;
  t8629 = -1.*t33*t7056*t7578;
  t8662 = t8628 + t8629;
  t8716 = Cos(var1[5]);
  t8584 = t6957*t7671;
  t8664 = t8618*t8662;
  t8702 = t8584 + t8664;
  t6954 = Sin(var1[5]);
  t8717 = t8618*t7671;
  t8720 = -1.*t6957*t8662;
  t8723 = t8717 + t8720;
  t8766 = Cos(var1[6]);
  t8706 = -1.*t6954*t8702;
  t8732 = t8716*t8723;
  t8741 = t8706 + t8732;
  t6894 = Sin(var1[6]);
  t8768 = t8716*t8702;
  t8769 = t6954*t8723;
  t8770 = t8768 + t8769;
  t3354 = -1.*t1992*t3347;
  t3543 = t3440*t3540;
  t3546 = 0. + t3354 + t3543;
  t8795 = t15*t7018*t5464;
  t8796 = -1.*t5214*t7578;
  t8804 = t8795 + t8796;
  t8807 = -1.*t7018*t5214;
  t8808 = -1.*t15*t5464*t7578;
  t8812 = t8807 + t8808;
  t8806 = -1.*t7056*t8804;
  t8815 = t7465*t8812;
  t8816 = t8806 + t8815;
  t8825 = t7465*t8804;
  t8830 = t7056*t8812;
  t8832 = t8825 + t8830;
  t8818 = t6957*t8816;
  t8835 = t8618*t8832;
  t8837 = t8818 + t8835;
  t8839 = t8618*t8816;
  t8842 = -1.*t6957*t8832;
  t8844 = t8839 + t8842;
  t8838 = -1.*t6954*t8837;
  t8845 = t8716*t8844;
  t8847 = t8838 + t8845;
  t8851 = t8716*t8837;
  t8852 = t6954*t8844;
  t8853 = t8851 + t8852;
  t5205 = 0. + t4816 + t4899;
  t8863 = t7018*t5214*t5464;
  t8864 = t15*t7578;
  t8865 = t8863 + t8864;
  t8867 = t15*t7018;
  t8868 = -1.*t5214*t5464*t7578;
  t8869 = t8867 + t8868;
  t8866 = -1.*t7056*t8865;
  t8870 = t7465*t8869;
  t8871 = t8866 + t8870;
  t8873 = t7465*t8865;
  t8874 = t7056*t8869;
  t8875 = t8873 + t8874;
  t8872 = t6957*t8871;
  t8876 = t8618*t8875;
  t8877 = t8872 + t8876;
  t8879 = t8618*t8871;
  t8880 = -1.*t6957*t8875;
  t8881 = t8879 + t8880;
  t8878 = -1.*t6954*t8877;
  t8886 = t8716*t8881;
  t8889 = t8878 + t8886;
  t8895 = t8716*t8877;
  t8896 = t6954*t8881;
  t8897 = t8895 + t8896;
  t5907 = -1.*t338*t2006*t4447;
  t5915 = t2259*t338*t3347;
  t5996 = 0. + t5907 + t5915;
  t8745 = t6894*t8741;
  t8771 = t8766*t8770;
  t8776 = t8745 + t8771;
  t8779 = 0.642788*t8776;
  t8782 = t8766*t8741;
  t8783 = -1.*t6894*t8770;
  t8785 = t8782 + t8783;
  t8791 = 0.766044*t8785;
  t8792 = t8779 + t8791;
  t5542 = t338*t2006*t3440;
  t5686 = t2043*t3347;
  t5687 = 0. + t5542 + t5686;
  t8850 = t6894*t8847;
  t8854 = t8766*t8853;
  t8855 = t8850 + t8854;
  t8856 = 0.642788*t8855;
  t8857 = t8766*t8847;
  t8858 = -1.*t6894*t8853;
  t8859 = t8857 + t8858;
  t8860 = 0.766044*t8859;
  t8861 = t8856 + t8860;
  t5714 = -1.*t2259*t338*t3440;
  t5780 = -1.*t2043*t4447;
  t5883 = 0. + t5714 + t5780;
  t8892 = t6894*t8889;
  t8900 = t8766*t8897;
  t8905 = t8892 + t8900;
  t8906 = 0.642788*t8905;
  t8907 = t8766*t8889;
  t8908 = -1.*t6894*t8897;
  t8909 = t8907 + t8908;
  t8917 = 0.766044*t8909;
  t8918 = t8906 + t8917;
  t6648 = t338*t2006*t4644;
  t6687 = -1.*t2259*t338*t3540;
  t6797 = 0. + t6648 + t6687;
  t6175 = -1.*t338*t2006*t1992;
  t6211 = -1.*t2043*t3540;
  t6216 = 0. + t6175 + t6211;
  t6346 = 0. + t4572 + t4646;
  t8936 = -0.766044*t8776;
  t8937 = 0.642788*t8785;
  t8938 = t8936 + t8937;
  t8942 = -0.766044*t8855;
  t8943 = 0.642788*t8859;
  t8944 = t8942 + t8943;
  t8946 = -0.766044*t8905;
  t8947 = 0.642788*t8909;
  t8948 = t8946 + t8947;

  p_output1(0)=0. - 1.*t15*t33*t3546*t4976 - 1.*t33*t4976*t5205*t5214 + t4976*t5326*t5464;
  p_output1(1)=0. - 1.*t15*t33*t4976*t5687 - 1.*t33*t4976*t5214*t5883 + t4976*t5464*t5996;
  p_output1(2)=0. - 1.*t15*t33*t4976*t6216 - 1.*t33*t4976*t5214*t6346 + t4976*t5464*t6797;
  p_output1(3)=0. + t4976*t5326*t8792 + t3546*t4976*t8861 + t4976*t5205*t8918;
  p_output1(4)=0. + t4976*t5996*t8792 + t4976*t5687*t8861 + t4976*t5883*t8918;
  p_output1(5)=0. + t4976*t6797*t8792 + t4976*t6216*t8861 + t4976*t6346*t8918;
  p_output1(6)=0. + t4976*t5326*t8938 + t3546*t4976*t8944 + t4976*t5205*t8948;
  p_output1(7)=0. + t4976*t5996*t8938 + t4976*t5687*t8944 + t4976*t5883*t8948;
  p_output1(8)=0. + t4976*t6797*t8938 + t4976*t6216*t8944 + t4976*t6346*t8948;
}


       
void R_RightToeBottom_to_LeftToeBottom(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
