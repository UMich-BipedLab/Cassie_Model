/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 12:16:44 GMT-04:00
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
  double t528;
  double t702;
  double t984;
  double t661;
  double t988;
  double t279;
  double t1015;
  double t1019;
  double t1024;
  double t825;
  double t997;
  double t1004;
  double t1057;
  double t214;
  double t1214;
  double t1271;
  double t1357;
  double t1009;
  double t1126;
  double t1193;
  double t1418;
  double t173;
  double t1452;
  double t1481;
  double t1540;
  double t1196;
  double t1424;
  double t1427;
  double t1567;
  double t2139;
  double t2034;
  double t2068;
  double t2280;
  double t2322;
  double t2347;
  double t2086;
  double t2147;
  double t2205;
  double t2438;
  double t2452;
  double t2471;
  double t2213;
  double t2366;
  double t2392;
  double t2716;
  double t2771;
  double t2866;
  double t2436;
  double t2552;
  double t2656;
  double t3254;
  double t3259;
  double t3304;
  double t2687;
  double t2894;
  double t3129;
  double t1439;
  double t1574;
  double t1630;
  double t1690;
  double t1838;
  double t1842;
  double t3201;
  double t3423;
  double t3468;
  double t3516;
  double t3606;
  double t3607;
  double t4051;
  double t4059;
  double t4094;
  double t3847;
  double t3983;
  double t4047;
  double t4827;
  double t4855;
  double t4920;
  double t4242;
  double t4641;
  double t4666;
  double t5946;
  double t7164;
  double t7303;
  double t4677;
  double t4956;
  double t5617;
  double t7386;
  double t7390;
  double t7396;
  double t5618;
  double t7330;
  double t7375;
  double t7425;
  double t7433;
  double t7445;
  double t7379;
  double t7403;
  double t7413;
  double t3514;
  double t3651;
  double t3659;
  double t1678;
  double t1885;
  double t1963;
  double t7423;
  double t7446;
  double t7450;
  double t7457;
  double t7462;
  double t7465;
  double t7454;
  double t7489;
  double t7495;
  double t7542;
  double t7543;
  double t7546;
  double t111;
  double t7577;
  double t7589;
  double t4219;
  double t7511;
  double t7514;
  double t7529;
  double t7541;
  double t7554;
  double t7568;
  double t7576;
  double t7590;
  double t7607;
  double t7610;
  double t7611;
  double t102;
  double t7618;
  double t7645;
  double t7636;
  double t7637;
  double t7638;
  double t7721;
  double t7717;
  double t7718;
  double t7722;
  double t7728;
  double t7719;
  double t7724;
  double t7725;
  double t7716;
  double t7729;
  double t7730;
  double t7731;
  double t7743;
  double t7727;
  double t7735;
  double t7740;
  double t7715;
  double t7744;
  double t7745;
  double t7746;
  double t7765;
  double t7742;
  double t7747;
  double t7751;
  double t7714;
  double t7766;
  double t7767;
  double t7768;
  double t3846;
  double t4111;
  double t4120;
  double t7795;
  double t7796;
  double t7797;
  double t7801;
  double t7802;
  double t7805;
  double t7798;
  double t7806;
  double t7807;
  double t7809;
  double t7810;
  double t7812;
  double t7808;
  double t7815;
  double t7818;
  double t7820;
  double t7821;
  double t7822;
  double t7819;
  double t7823;
  double t7826;
  double t7828;
  double t7829;
  double t7830;
  double t7617;
  double t7842;
  double t7843;
  double t7844;
  double t7849;
  double t7850;
  double t7854;
  double t7845;
  double t7855;
  double t7856;
  double t7859;
  double t7860;
  double t7861;
  double t7857;
  double t7862;
  double t7863;
  double t7865;
  double t7866;
  double t7867;
  double t7864;
  double t7868;
  double t7869;
  double t7872;
  double t7873;
  double t7874;
  double t7668;
  double t7671;
  double t7677;
  double t7757;
  double t7771;
  double t7772;
  double t7782;
  double t7783;
  double t7784;
  double t7785;
  double t7788;
  double t7793;
  double t7652;
  double t7653;
  double t7654;
  double t7827;
  double t7831;
  double t7832;
  double t7833;
  double t7834;
  double t7835;
  double t7838;
  double t7839;
  double t7840;
  double t7661;
  double t7662;
  double t7663;
  double t7870;
  double t7877;
  double t7880;
  double t7881;
  double t7882;
  double t7883;
  double t7884;
  double t7887;
  double t7888;
  double t7702;
  double t7703;
  double t7704;
  double t7681;
  double t7682;
  double t7687;
  double t7699;
  double t7903;
  double t7904;
  double t7907;
  double t7909;
  double t7910;
  double t7911;
  double t7913;
  double t7914;
  double t7917;
  t528 = Cos(var1[8]);
  t702 = Cos(var1[10]);
  t984 = Sin(var1[9]);
  t661 = Cos(var1[9]);
  t988 = Sin(var1[10]);
  t279 = Cos(var1[11]);
  t1015 = -1.*t528*t702*t984;
  t1019 = -1.*t528*t661*t988;
  t1024 = t1015 + t1019;
  t825 = t528*t661*t702;
  t997 = -1.*t528*t984*t988;
  t1004 = t825 + t997;
  t1057 = Sin(var1[11]);
  t214 = Cos(var1[12]);
  t1214 = t279*t1024;
  t1271 = -1.*t1004*t1057;
  t1357 = t1214 + t1271;
  t1009 = t279*t1004;
  t1126 = t1024*t1057;
  t1193 = t1009 + t1126;
  t1418 = Sin(var1[12]);
  t173 = Cos(var1[13]);
  t1452 = t214*t1357;
  t1481 = -1.*t1193*t1418;
  t1540 = t1452 + t1481;
  t1196 = t214*t1193;
  t1424 = t1357*t1418;
  t1427 = t1196 + t1424;
  t1567 = Sin(var1[13]);
  t2139 = Cos(var1[7]);
  t2034 = Sin(var1[7]);
  t2068 = Sin(var1[8]);
  t2280 = t2139*t661;
  t2322 = -1.*t2034*t2068*t984;
  t2347 = t2280 + t2322;
  t2086 = t661*t2034*t2068;
  t2147 = t2139*t984;
  t2205 = t2086 + t2147;
  t2438 = t702*t2347;
  t2452 = -1.*t2205*t988;
  t2471 = t2438 + t2452;
  t2213 = t702*t2205;
  t2366 = t2347*t988;
  t2392 = t2213 + t2366;
  t2716 = t279*t2471;
  t2771 = -1.*t2392*t1057;
  t2866 = t2716 + t2771;
  t2436 = t279*t2392;
  t2552 = t2471*t1057;
  t2656 = t2436 + t2552;
  t3254 = t214*t2866;
  t3259 = -1.*t2656*t1418;
  t3304 = t3254 + t3259;
  t2687 = t214*t2656;
  t2894 = t2866*t1418;
  t3129 = t2687 + t2894;
  t1439 = t173*t1427;
  t1574 = t1540*t1567;
  t1630 = t1439 + t1574;
  t1690 = t173*t1540;
  t1838 = -1.*t1427*t1567;
  t1842 = t1690 + t1838;
  t3201 = t173*t3129;
  t3423 = t3304*t1567;
  t3468 = t3201 + t3423;
  t3516 = t173*t3304;
  t3606 = -1.*t3129*t1567;
  t3607 = t3516 + t3606;
  t4051 = 0.642788*t3468;
  t4059 = 0.766044*t3607;
  t4094 = t4051 + t4059;
  t3847 = -0.766044*t1630;
  t3983 = 0.642788*t1842;
  t4047 = t3847 + t3983;
  t4827 = -1.*t661*t2034;
  t4855 = -1.*t2139*t2068*t984;
  t4920 = t4827 + t4855;
  t4242 = t2139*t661*t2068;
  t4641 = -1.*t2034*t984;
  t4666 = t4242 + t4641;
  t5946 = t702*t4920;
  t7164 = -1.*t4666*t988;
  t7303 = t5946 + t7164;
  t4677 = t702*t4666;
  t4956 = t4920*t988;
  t5617 = t4677 + t4956;
  t7386 = t279*t7303;
  t7390 = -1.*t5617*t1057;
  t7396 = t7386 + t7390;
  t5618 = t279*t5617;
  t7330 = t7303*t1057;
  t7375 = t5618 + t7330;
  t7425 = t214*t7396;
  t7433 = -1.*t7375*t1418;
  t7445 = t7425 + t7433;
  t7379 = t214*t7375;
  t7403 = t7396*t1418;
  t7413 = t7379 + t7403;
  t3514 = -0.766044*t3468;
  t3651 = 0.642788*t3607;
  t3659 = t3514 + t3651;
  t1678 = 0.642788*t1630;
  t1885 = 0.766044*t1842;
  t1963 = t1678 + t1885;
  t7423 = t173*t7413;
  t7446 = t7445*t1567;
  t7450 = t7423 + t7446;
  t7457 = t173*t7445;
  t7462 = -1.*t7413*t1567;
  t7465 = t7457 + t7462;
  t7454 = -0.766044*t7450;
  t7489 = 0.642788*t7465;
  t7495 = t7454 + t7489;
  t7542 = 0.642788*t7450;
  t7543 = 0.766044*t7465;
  t7546 = t7542 + t7543;
  t111 = Cos(var1[1]);
  t7577 = t1963*t7495;
  t7589 = -1.*t4047*t7546;
  t4219 = t2139*t528*t4047;
  t7511 = t2068*t7495;
  t7514 = t4219 + t7511;
  t7529 = -1.*t4094*t7514;
  t7541 = t2139*t528*t1963;
  t7554 = t2068*t7546;
  t7568 = t7541 + t7554;
  t7576 = t3659*t7568;
  t7590 = t7577 + t7589;
  t7607 = -1.*t528*t2034*t7590;
  t7610 = 0. + t7529 + t7576 + t7607;
  t7611 = 1/t7610;
  t102 = Cos(var1[0]);
  t7618 = Sin(var1[0]);
  t7645 = Sin(var1[1]);
  t7636 = t7546*t3659;
  t7637 = -1.*t7495*t4094;
  t7638 = 0. + t7636 + t7637;
  t7721 = Cos(var1[3]);
  t7717 = Cos(var1[2]);
  t7718 = Sin(var1[3]);
  t7722 = Sin(var1[2]);
  t7728 = Cos(var1[4]);
  t7719 = -1.*t111*t7717*t7718;
  t7724 = -1.*t7721*t111*t7722;
  t7725 = t7719 + t7724;
  t7716 = Sin(var1[4]);
  t7729 = t7721*t111*t7717;
  t7730 = -1.*t111*t7718*t7722;
  t7731 = t7729 + t7730;
  t7743 = Cos(var1[5]);
  t7727 = t7716*t7725;
  t7735 = t7728*t7731;
  t7740 = t7727 + t7735;
  t7715 = Sin(var1[5]);
  t7744 = t7728*t7725;
  t7745 = -1.*t7716*t7731;
  t7746 = t7744 + t7745;
  t7765 = Cos(var1[6]);
  t7742 = -1.*t7715*t7740;
  t7747 = t7743*t7746;
  t7751 = t7742 + t7747;
  t7714 = Sin(var1[6]);
  t7766 = t7743*t7740;
  t7767 = t7715*t7746;
  t7768 = t7766 + t7767;
  t3846 = -1.*t1963*t3659;
  t4111 = t4047*t4094;
  t4120 = 0. + t3846 + t4111;
  t7795 = t102*t7717*t7645;
  t7796 = -1.*t7618*t7722;
  t7797 = t7795 + t7796;
  t7801 = -1.*t7717*t7618;
  t7802 = -1.*t102*t7645*t7722;
  t7805 = t7801 + t7802;
  t7798 = -1.*t7718*t7797;
  t7806 = t7721*t7805;
  t7807 = t7798 + t7806;
  t7809 = t7721*t7797;
  t7810 = t7718*t7805;
  t7812 = t7809 + t7810;
  t7808 = t7716*t7807;
  t7815 = t7728*t7812;
  t7818 = t7808 + t7815;
  t7820 = t7728*t7807;
  t7821 = -1.*t7716*t7812;
  t7822 = t7820 + t7821;
  t7819 = -1.*t7715*t7818;
  t7823 = t7743*t7822;
  t7826 = t7819 + t7823;
  t7828 = t7743*t7818;
  t7829 = t7715*t7822;
  t7830 = t7828 + t7829;
  t7617 = 0. + t7577 + t7589;
  t7842 = t7717*t7618*t7645;
  t7843 = t102*t7722;
  t7844 = t7842 + t7843;
  t7849 = t102*t7717;
  t7850 = -1.*t7618*t7645*t7722;
  t7854 = t7849 + t7850;
  t7845 = -1.*t7718*t7844;
  t7855 = t7721*t7854;
  t7856 = t7845 + t7855;
  t7859 = t7721*t7844;
  t7860 = t7718*t7854;
  t7861 = t7859 + t7860;
  t7857 = t7716*t7856;
  t7862 = t7728*t7861;
  t7863 = t7857 + t7862;
  t7865 = t7728*t7856;
  t7866 = -1.*t7716*t7861;
  t7867 = t7865 + t7866;
  t7864 = -1.*t7715*t7863;
  t7868 = t7743*t7867;
  t7869 = t7864 + t7868;
  t7872 = t7743*t7863;
  t7873 = t7715*t7867;
  t7874 = t7872 + t7873;
  t7668 = -1.*t528*t2034*t7495;
  t7671 = t2139*t528*t3659;
  t7677 = 0. + t7668 + t7671;
  t7757 = t7714*t7751;
  t7771 = t7765*t7768;
  t7772 = t7757 + t7771;
  t7782 = 0.642788*t7772;
  t7783 = t7765*t7751;
  t7784 = -1.*t7714*t7768;
  t7785 = t7783 + t7784;
  t7788 = 0.766044*t7785;
  t7793 = t7782 + t7788;
  t7652 = t528*t2034*t4047;
  t7653 = t2068*t3659;
  t7654 = 0. + t7652 + t7653;
  t7827 = t7714*t7826;
  t7831 = t7765*t7830;
  t7832 = t7827 + t7831;
  t7833 = 0.642788*t7832;
  t7834 = t7765*t7826;
  t7835 = -1.*t7714*t7830;
  t7838 = t7834 + t7835;
  t7839 = 0.766044*t7838;
  t7840 = t7833 + t7839;
  t7661 = -1.*t2139*t528*t4047;
  t7662 = -1.*t2068*t7495;
  t7663 = 0. + t7661 + t7662;
  t7870 = t7714*t7869;
  t7877 = t7765*t7874;
  t7880 = t7870 + t7877;
  t7881 = 0.642788*t7880;
  t7882 = t7765*t7869;
  t7883 = -1.*t7714*t7874;
  t7884 = t7882 + t7883;
  t7887 = 0.766044*t7884;
  t7888 = t7881 + t7887;
  t7702 = t528*t2034*t7546;
  t7703 = -1.*t2139*t528*t4094;
  t7704 = 0. + t7702 + t7703;
  t7681 = -1.*t528*t2034*t1963;
  t7682 = -1.*t2068*t4094;
  t7687 = 0. + t7681 + t7682;
  t7699 = 0. + t7541 + t7554;
  t7903 = -0.766044*t7772;
  t7904 = 0.642788*t7785;
  t7907 = t7903 + t7904;
  t7909 = -0.766044*t7832;
  t7910 = 0.642788*t7838;
  t7911 = t7909 + t7910;
  t7913 = -0.766044*t7880;
  t7914 = 0.642788*t7884;
  t7917 = t7913 + t7914;

  p_output1(0)=0. - 1.*t102*t111*t4120*t7611 - 1.*t111*t7611*t7617*t7618 + t7611*t7638*t7645;
  p_output1(1)=0. - 1.*t102*t111*t7611*t7654 - 1.*t111*t7611*t7618*t7663 + t7611*t7645*t7677;
  p_output1(2)=0. - 1.*t102*t111*t7611*t7687 - 1.*t111*t7611*t7618*t7699 + t7611*t7645*t7704;
  p_output1(3)=0. + t7611*t7638*t7793 + t4120*t7611*t7840 + t7611*t7617*t7888;
  p_output1(4)=0. + t7611*t7677*t7793 + t7611*t7654*t7840 + t7611*t7663*t7888;
  p_output1(5)=0. + t7611*t7704*t7793 + t7611*t7687*t7840 + t7611*t7699*t7888;
  p_output1(6)=0. + t7611*t7638*t7907 + t4120*t7611*t7911 + t7611*t7617*t7917;
  p_output1(7)=0. + t7611*t7677*t7907 + t7611*t7654*t7911 + t7611*t7663*t7917;
  p_output1(8)=0. + t7611*t7704*t7907 + t7611*t7687*t7911 + t7611*t7699*t7917;
}


       
void R_RightToeBottom_to_LeftToeBottom(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
