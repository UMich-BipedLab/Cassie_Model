/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 12:15:58 GMT-04:00
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
  double t342;
  double t393;
  double t438;
  double t449;
  double t472;
  double t476;
  double t486;
  double t491;
  double t522;
  double t529;
  double t530;
  double t540;
  double t511;
  double t515;
  double t518;
  double t553;
  double t554;
  double t556;
  double t564;
  double t565;
  double t567;
  double t570;
  double t561;
  double t562;
  double t563;
  double t578;
  double t579;
  double t583;
  double t604;
  double t605;
  double t608;
  double t610;
  double t600;
  double t601;
  double t602;
  double t617;
  double t618;
  double t620;
  double t630;
  double t631;
  double t632;
  double t634;
  double t627;
  double t628;
  double t629;
  double t638;
  double t639;
  double t640;
  double t418;
  double t428;
  double t431;
  double t440;
  double t443;
  double t482;
  double t487;
  double t488;
  double t492;
  double t499;
  double t503;
  double t532;
  double t544;
  double t546;
  double t557;
  double t558;
  double t559;
  double t671;
  double t672;
  double t673;
  double t675;
  double t676;
  double t677;
  double t568;
  double t571;
  double t574;
  double t584;
  double t587;
  double t590;
  double t679;
  double t680;
  double t681;
  double t683;
  double t684;
  double t685;
  double t609;
  double t612;
  double t613;
  double t621;
  double t624;
  double t625;
  double t687;
  double t688;
  double t689;
  double t691;
  double t692;
  double t693;
  double t633;
  double t635;
  double t636;
  double t642;
  double t643;
  double t646;
  double t695;
  double t696;
  double t697;
  double t699;
  double t700;
  double t701;
  double t717;
  double t718;
  double t719;
  double t721;
  double t722;
  double t723;
  double t725;
  double t726;
  double t727;
  double t729;
  double t730;
  double t731;
  double t733;
  double t734;
  double t735;
  double t737;
  double t738;
  double t739;
  double t758;
  double t759;
  double t760;
  double t762;
  double t763;
  double t764;
  double t766;
  double t767;
  double t768;
  double t770;
  double t771;
  double t772;
  double t774;
  double t775;
  double t776;
  double t778;
  double t779;
  double t780;
  double t750;
  double t751;
  double t752;
  double t796;
  double t797;
  double t798;
  double t800;
  double t801;
  double t802;
  double t804;
  double t805;
  double t806;
  double t808;
  double t809;
  double t810;
  double t812;
  double t813;
  double t814;
  double t816;
  double t817;
  double t818;
  double t835;
  double t836;
  double t837;
  double t839;
  double t840;
  double t841;
  double t843;
  double t844;
  double t845;
  double t847;
  double t848;
  double t849;
  double t855;
  double t856;
  double t857;
  double t851;
  double t852;
  double t853;
  double t829;
  double t830;
  double t831;
  double t873;
  double t874;
  double t875;
  double t877;
  double t878;
  double t880;
  double t881;
  double t882;
  double t884;
  double t885;
  double t886;
  double t888;
  double t889;
  double t890;
  double t896;
  double t897;
  double t898;
  double t892;
  double t893;
  double t894;
  double t868;
  double t869;
  double t911;
  double t912;
  double t913;
  double t916;
  double t917;
  double t918;
  double t920;
  double t921;
  double t923;
  double t924;
  double t925;
  double t927;
  double t928;
  double t929;
  double t935;
  double t936;
  double t937;
  double t931;
  double t932;
  double t933;
  double t838;
  double t842;
  double t846;
  double t850;
  double t854;
  double t858;
  double t859;
  double t860;
  double t861;
  double t862;
  double t863;
  double t864;
  double t865;
  double t866;
  double t948;
  double t949;
  double t951;
  double t952;
  double t953;
  double t959;
  double t960;
  double t962;
  double t963;
  double t965;
  double t966;
  double t967;
  double t973;
  double t974;
  double t975;
  double t969;
  double t970;
  double t971;
  double t987;
  double t988;
  double t989;
  double t991;
  double t992;
  double t994;
  double t995;
  double t997;
  double t998;
  double t999;
  double t1001;
  double t1002;
  double t1003;
  double t1009;
  double t1010;
  double t1011;
  double t1005;
  double t1006;
  double t1007;
  double t1025;
  double t1026;
  double t1027;
  double t1032;
  double t1033;
  double t1035;
  double t1036;
  double t1042;
  double t1043;
  double t1044;
  double t1038;
  double t1039;
  double t1040;
  double t1022;
  double t1023;
  double t1028;
  double t1029;
  double t1030;
  double t1058;
  double t1059;
  double t1064;
  double t1065;
  double t1066;
  double t1061;
  double t1062;
  double t1078;
  double t1079;
  double t1080;
  double t1082;
  double t1083;
  double t1085;
  double t1086;
  double t1092;
  double t1093;
  double t1094;
  double t1088;
  double t1089;
  double t1090;
  double t1108;
  double t1109;
  double t1110;
  double t1118;
  double t1119;
  double t1115;
  double t1116;
  double t1105;
  double t1106;
  double t1111;
  double t1112;
  double t1113;
  double t1133;
  double t1134;
  double t707;
  double t1145;
  double t1146;
  double t1147;
  double t1152;
  double t1153;
  double t1149;
  double t1150;
  double t1167;
  double t1168;
  double t1169;
  double t1122;
  double t1125;
  double t1164;
  double t1165;
  double t1170;
  double t1171;
  double t1172;
  double t1137;
  double t708;
  double t709;
  double t1189;
  double t1190;
  double t1191;
  double t1156;
  double t1159;
  t342 = Sin(var1[7]);
  t393 = Cos(var1[8]);
  t438 = Sin(var1[8]);
  t449 = Cos(var1[9]);
  t472 = -1.*t449;
  t476 = 1. + t472;
  t486 = Sin(var1[9]);
  t491 = Cos(var1[7]);
  t522 = Cos(var1[10]);
  t529 = -1.*t522;
  t530 = 1. + t529;
  t540 = Sin(var1[10]);
  t511 = -1.*t449*t342*t438;
  t515 = -1.*t491*t486;
  t518 = t511 + t515;
  t553 = -1.*t491*t449;
  t554 = t342*t438*t486;
  t556 = t553 + t554;
  t564 = Cos(var1[11]);
  t565 = -1.*t564;
  t567 = 1. + t565;
  t570 = Sin(var1[11]);
  t561 = t522*t518;
  t562 = t556*t540;
  t563 = t561 + t562;
  t578 = t522*t556;
  t579 = -1.*t518*t540;
  t583 = t578 + t579;
  t604 = Cos(var1[12]);
  t605 = -1.*t604;
  t608 = 1. + t605;
  t610 = Sin(var1[12]);
  t600 = t564*t563;
  t601 = t583*t570;
  t602 = t600 + t601;
  t617 = t564*t583;
  t618 = -1.*t563*t570;
  t620 = t617 + t618;
  t630 = Cos(var1[13]);
  t631 = -1.*t630;
  t632 = 1. + t631;
  t634 = Sin(var1[13]);
  t627 = t604*t602;
  t628 = t620*t610;
  t629 = t627 + t628;
  t638 = t604*t620;
  t639 = -1.*t602*t610;
  t640 = t638 + t639;
  t418 = -1.*t393;
  t428 = 1. + t418;
  t431 = -0.135*t428;
  t440 = 0.049*t438;
  t443 = 0. + t431 + t440;
  t482 = -0.049*t476;
  t487 = -0.09*t486;
  t488 = 0. + t482 + t487;
  t492 = -0.09*t476;
  t499 = 0.049*t486;
  t503 = 0. + t492 + t499;
  t532 = -0.049*t530;
  t544 = -0.21*t540;
  t546 = 0. + t532 + t544;
  t557 = -0.21*t530;
  t558 = 0.049*t540;
  t559 = 0. + t557 + t558;
  t671 = t491*t449*t438;
  t672 = -1.*t342*t486;
  t673 = t671 + t672;
  t675 = -1.*t449*t342;
  t676 = -1.*t491*t438*t486;
  t677 = t675 + t676;
  t568 = -0.0016*t567;
  t571 = -0.2707*t570;
  t574 = 0. + t568 + t571;
  t584 = -0.2707*t567;
  t587 = 0.0016*t570;
  t590 = 0. + t584 + t587;
  t679 = t522*t673;
  t680 = t677*t540;
  t681 = t679 + t680;
  t683 = t522*t677;
  t684 = -1.*t673*t540;
  t685 = t683 + t684;
  t609 = 0.0184*t608;
  t612 = -0.7055*t610;
  t613 = 0. + t609 + t612;
  t621 = -0.7055*t608;
  t624 = -0.0184*t610;
  t625 = 0. + t621 + t624;
  t687 = t564*t681;
  t688 = t685*t570;
  t689 = t687 + t688;
  t691 = t564*t685;
  t692 = -1.*t681*t570;
  t693 = t691 + t692;
  t633 = -0.0216*t632;
  t635 = -1.1135*t634;
  t636 = 0. + t633 + t635;
  t642 = -1.1135*t632;
  t643 = 0.0216*t634;
  t646 = 0. + t642 + t643;
  t695 = t604*t689;
  t696 = t693*t610;
  t697 = t695 + t696;
  t699 = t604*t693;
  t700 = -1.*t689*t610;
  t701 = t699 + t700;
  t717 = -1.*t449*t522*t438;
  t718 = t438*t486*t540;
  t719 = t717 + t718;
  t721 = t522*t438*t486;
  t722 = t449*t438*t540;
  t723 = t721 + t722;
  t725 = t564*t719;
  t726 = t723*t570;
  t727 = t725 + t726;
  t729 = t564*t723;
  t730 = -1.*t719*t570;
  t731 = t729 + t730;
  t733 = t604*t727;
  t734 = t731*t610;
  t735 = t733 + t734;
  t737 = t604*t731;
  t738 = -1.*t727*t610;
  t739 = t737 + t738;
  t758 = t491*t393*t449*t522;
  t759 = -1.*t491*t393*t486*t540;
  t760 = t758 + t759;
  t762 = -1.*t491*t393*t522*t486;
  t763 = -1.*t491*t393*t449*t540;
  t764 = t762 + t763;
  t766 = t564*t760;
  t767 = t764*t570;
  t768 = t766 + t767;
  t770 = t564*t764;
  t771 = -1.*t760*t570;
  t772 = t770 + t771;
  t774 = t604*t768;
  t775 = t772*t610;
  t776 = t774 + t775;
  t778 = t604*t772;
  t779 = -1.*t768*t610;
  t780 = t778 + t779;
  t750 = 0.049*t393;
  t751 = -0.135*t438;
  t752 = t750 + t751;
  t796 = t393*t449*t522*t342;
  t797 = -1.*t393*t342*t486*t540;
  t798 = t796 + t797;
  t800 = -1.*t393*t522*t342*t486;
  t801 = -1.*t393*t449*t342*t540;
  t802 = t800 + t801;
  t804 = t564*t798;
  t805 = t802*t570;
  t806 = t804 + t805;
  t808 = t564*t802;
  t809 = -1.*t798*t570;
  t810 = t808 + t809;
  t812 = t604*t806;
  t813 = t810*t610;
  t814 = t812 + t813;
  t816 = t604*t810;
  t817 = -1.*t806*t610;
  t818 = t816 + t817;
  t835 = -1.*t393*t522*t486;
  t836 = -1.*t393*t449*t540;
  t837 = t835 + t836;
  t839 = -1.*t393*t449*t522;
  t840 = t393*t486*t540;
  t841 = t839 + t840;
  t843 = t564*t837;
  t844 = t841*t570;
  t845 = t843 + t844;
  t847 = t564*t841;
  t848 = -1.*t837*t570;
  t849 = t847 + t848;
  t855 = t604*t849;
  t856 = -1.*t845*t610;
  t857 = t855 + t856;
  t851 = t604*t845;
  t852 = t849*t610;
  t853 = t851 + t852;
  t829 = -0.09*t449;
  t830 = -0.049*t486;
  t831 = t829 + t830;
  t873 = -1.*t491*t449*t438;
  t874 = t342*t486;
  t875 = t873 + t874;
  t877 = t875*t540;
  t878 = t683 + t877;
  t880 = t522*t875;
  t881 = -1.*t677*t540;
  t882 = t880 + t881;
  t884 = t564*t878;
  t885 = t882*t570;
  t886 = t884 + t885;
  t888 = t564*t882;
  t889 = -1.*t878*t570;
  t890 = t888 + t889;
  t896 = t604*t890;
  t897 = -1.*t886*t610;
  t898 = t896 + t897;
  t892 = t604*t886;
  t893 = t890*t610;
  t894 = t892 + t893;
  t868 = 0.049*t449;
  t869 = t868 + t487;
  t911 = t491*t449;
  t912 = -1.*t342*t438*t486;
  t913 = t911 + t912;
  t916 = t522*t913;
  t917 = t518*t540;
  t918 = t916 + t917;
  t920 = -1.*t913*t540;
  t921 = t561 + t920;
  t923 = t564*t918;
  t924 = t921*t570;
  t925 = t923 + t924;
  t927 = t564*t921;
  t928 = -1.*t918*t570;
  t929 = t927 + t928;
  t935 = t604*t929;
  t936 = -1.*t925*t610;
  t937 = t935 + t936;
  t931 = t604*t925;
  t932 = t929*t610;
  t933 = t931 + t932;
  t838 = t837*t574;
  t842 = t841*t590;
  t846 = t845*t613;
  t850 = t849*t625;
  t854 = t853*t636;
  t858 = t857*t646;
  t859 = t630*t857;
  t860 = -1.*t853*t634;
  t861 = t859 + t860;
  t862 = -1.1312*t861;
  t863 = t630*t853;
  t864 = t857*t634;
  t865 = t863 + t864;
  t866 = 0.0306*t865;
  t948 = 0.049*t522;
  t949 = t948 + t544;
  t951 = -0.21*t522;
  t952 = -0.049*t540;
  t953 = t951 + t952;
  t959 = -1.*t522*t673;
  t960 = t959 + t881;
  t962 = t960*t570;
  t963 = t691 + t962;
  t965 = t564*t960;
  t966 = -1.*t685*t570;
  t967 = t965 + t966;
  t973 = t604*t967;
  t974 = -1.*t963*t610;
  t975 = t973 + t974;
  t969 = t604*t963;
  t970 = t967*t610;
  t971 = t969 + t970;
  t987 = t449*t342*t438;
  t988 = t491*t486;
  t989 = t987 + t988;
  t991 = -1.*t989*t540;
  t992 = t916 + t991;
  t994 = -1.*t522*t989;
  t995 = t994 + t920;
  t997 = t564*t992;
  t998 = t995*t570;
  t999 = t997 + t998;
  t1001 = t564*t995;
  t1002 = -1.*t992*t570;
  t1003 = t1001 + t1002;
  t1009 = t604*t1003;
  t1010 = -1.*t999*t610;
  t1011 = t1009 + t1010;
  t1005 = t604*t999;
  t1006 = t1003*t610;
  t1007 = t1005 + t1006;
  t1025 = t393*t449*t522;
  t1026 = -1.*t393*t486*t540;
  t1027 = t1025 + t1026;
  t1032 = -1.*t1027*t570;
  t1033 = t843 + t1032;
  t1035 = -1.*t564*t1027;
  t1036 = t1035 + t848;
  t1042 = t604*t1036;
  t1043 = -1.*t1033*t610;
  t1044 = t1042 + t1043;
  t1038 = t604*t1033;
  t1039 = t1036*t610;
  t1040 = t1038 + t1039;
  t1022 = 0.0016*t564;
  t1023 = t1022 + t571;
  t1028 = -0.2707*t564;
  t1029 = -0.0016*t570;
  t1030 = t1028 + t1029;
  t1058 = -1.*t564*t681;
  t1059 = t1058 + t966;
  t1064 = t604*t1059;
  t1065 = -1.*t693*t610;
  t1066 = t1064 + t1065;
  t1061 = t1059*t610;
  t1062 = t699 + t1061;
  t1078 = t522*t989;
  t1079 = t913*t540;
  t1080 = t1078 + t1079;
  t1082 = -1.*t1080*t570;
  t1083 = t997 + t1082;
  t1085 = -1.*t564*t1080;
  t1086 = t1085 + t1002;
  t1092 = t604*t1086;
  t1093 = -1.*t1083*t610;
  t1094 = t1092 + t1093;
  t1088 = t604*t1083;
  t1089 = t1086*t610;
  t1090 = t1088 + t1089;
  t1108 = t564*t1027;
  t1109 = t837*t570;
  t1110 = t1108 + t1109;
  t1118 = -1.*t604*t1110;
  t1119 = t1118 + t1043;
  t1115 = -1.*t1110*t610;
  t1116 = t1038 + t1115;
  t1105 = -0.0184*t604;
  t1106 = t1105 + t612;
  t1111 = -0.7055*t604;
  t1112 = 0.0184*t610;
  t1113 = t1111 + t1112;
  t1133 = -1.*t604*t689;
  t1134 = t1133 + t1065;
  t707 = t630*t701;
  t1145 = t564*t1080;
  t1146 = t992*t570;
  t1147 = t1145 + t1146;
  t1152 = -1.*t604*t1147;
  t1153 = t1152 + t1093;
  t1149 = -1.*t1147*t610;
  t1150 = t1088 + t1149;
  t1167 = t604*t1110;
  t1168 = t1033*t610;
  t1169 = t1167 + t1168;
  t1122 = -1.*t1116*t634;
  t1125 = t630*t1116;
  t1164 = 0.0216*t630;
  t1165 = t1164 + t635;
  t1170 = -1.1135*t630;
  t1171 = -0.0216*t634;
  t1172 = t1170 + t1171;
  t1137 = -1.*t701*t634;
  t708 = -1.*t697*t634;
  t709 = t707 + t708;
  t1189 = t604*t1147;
  t1190 = t1083*t610;
  t1191 = t1189 + t1190;
  t1156 = -1.*t1150*t634;
  t1159 = t630*t1150;
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
  p_output1[21]=0;
  p_output1[22]=0.135*t342 - 0.1305*t342*t393 + t342*t443 + t342*t438*t488 + t491*t503 - 1.*t518*t546 - 1.*t556*t559 - 1.*t563*t574 - 1.*t583*t590 - 1.*t602*t613 - 1.*t620*t625 - 1.*t629*t636 + 1.1312*(-1.*t629*t634 + t630*t640) - 0.0306*(t629*t630 + t634*t640) - 1.*t640*t646;
  p_output1[23]=-0.135*t491 + 0.1305*t393*t491 - 1.*t443*t491 - 1.*t438*t488*t491 + t342*t503 - 1.*t546*t673 - 1.*t559*t677 - 1.*t574*t681 - 1.*t590*t685 - 1.*t613*t689 - 1.*t625*t693 - 1.*t636*t697 - 1.*t646*t701 - 0.0306*(t630*t697 + t634*t701) + 1.1312*t709;
  p_output1[24]=-0.004500000000000004*t393 - 0.049*t438 - 1.*t438*t488 - 1.*t438*t449*t546 + t438*t486*t559 + t574*t719 + t590*t723 + t613*t727 + t625*t731 + t636*t735 + t646*t739 - 1.1312*(-1.*t634*t735 + t630*t739) + 0.0306*(t630*t735 + t634*t739);
  p_output1[25]=-0.1305*t438*t491 - 1.*t393*t488*t491 - 1.*t393*t449*t491*t546 + t393*t486*t491*t559 - 1.*t491*t752 - 1.*t574*t760 - 1.*t590*t764 - 1.*t613*t768 - 1.*t625*t772 - 1.*t636*t776 - 1.*t646*t780 + 1.1312*(-1.*t634*t776 + t630*t780) - 0.0306*(t630*t776 + t634*t780);
  p_output1[26]=-0.1305*t342*t438 - 1.*t342*t393*t488 - 1.*t342*t393*t449*t546 + t342*t393*t486*t559 - 1.*t342*t752 - 1.*t574*t798 - 1.*t590*t802 - 1.*t613*t806 - 1.*t625*t810 - 1.*t636*t814 - 1.*t646*t818 + 1.1312*(-1.*t634*t814 + t630*t818) - 0.0306*(t630*t814 + t634*t818);
  p_output1[27]=-1.*t393*t486*t546 - 1.*t393*t449*t559 + t393*t831 + t838 + t842 + t846 + t850 + t854 + t858 + t862 + t866;
  p_output1[28]=-1.*t546*t677 - 1.*t438*t491*t831 + t342*t869 - 1.*t559*t875 - 1.*t574*t878 - 1.*t590*t882 - 1.*t613*t886 - 1.*t625*t890 - 1.*t636*t894 - 1.*t646*t898 + 1.1312*(-1.*t634*t894 + t630*t898) - 0.0306*(t630*t894 + t634*t898);
  p_output1[29]=-1.*t518*t559 - 1.*t342*t438*t831 - 1.*t491*t869 - 1.*t546*t913 - 1.*t574*t918 - 1.*t590*t921 - 1.*t613*t925 - 1.*t625*t929 - 1.*t636*t933 - 1.*t646*t937 + 1.1312*(-1.*t634*t933 + t630*t937) - 0.0306*(t630*t933 + t634*t937);
  p_output1[30]=t838 + t842 + t846 + t850 + t854 + t858 + t862 + t866 - 1.*t393*t486*t949 + t393*t449*t953;
  p_output1[31]=-1.*t574*t685 - 1.*t677*t949 - 1.*t673*t953 - 1.*t590*t960 - 1.*t613*t963 - 1.*t625*t967 - 1.*t636*t971 - 1.*t646*t975 + 1.1312*(-1.*t634*t971 + t630*t975) - 0.0306*(t630*t971 + t634*t975);
  p_output1[32]=-1.*t1003*t625 + 1.1312*(t1011*t630 - 1.*t1007*t634) - 0.0306*(t1007*t630 + t1011*t634) - 1.*t1007*t636 - 1.*t1011*t646 - 1.*t913*t949 - 1.*t953*t989 - 1.*t574*t992 - 1.*t590*t995 - 1.*t613*t999;
  p_output1[33]=t1027*t1030 + t1033*t613 + t1036*t625 - 1.1312*(t1044*t630 - 1.*t1040*t634) + 0.0306*(t1040*t630 + t1044*t634) + t1040*t636 + t1044*t646 + t1023*t837;
  p_output1[34]=-1.*t1059*t625 + 1.1312*(t1066*t630 - 1.*t1062*t634) - 0.0306*(t1062*t630 + t1066*t634) - 1.*t1062*t636 - 1.*t1066*t646 - 1.*t1030*t681 - 1.*t1023*t685 - 1.*t613*t693;
  p_output1[35]=-1.*t1030*t1080 - 1.*t1083*t613 - 1.*t1086*t625 + 1.1312*(t1094*t630 - 1.*t1090*t634) - 0.0306*(t1090*t630 + t1094*t634) - 1.*t1090*t636 - 1.*t1094*t646 - 1.*t1023*t992;
  p_output1[36]=t1033*t1106 + t1110*t1113 - 1.1312*(t1122 + t1119*t630) + 0.0306*(t1125 + t1119*t634) + t1116*t636 + t1119*t646;
  p_output1[37]=1.1312*(t1137 + t1134*t630) - 1.*t1134*t646 - 1.*t1113*t689 - 1.*t1106*t693 - 1.*t636*t701 - 0.0306*(t1134*t634 + t707);
  p_output1[38]=-1.*t1083*t1106 - 1.*t1113*t1147 + 1.1312*(t1156 + t1153*t630) - 0.0306*(t1159 + t1153*t634) - 1.*t1150*t636 - 1.*t1153*t646;
  p_output1[39]=t1116*t1165 + t1169*t1172 - 1.1312*(t1122 - 1.*t1169*t630) + 0.0306*(t1125 - 1.*t1169*t634);
  p_output1[40]=-1.*t1172*t697 + 1.1312*(t1137 - 1.*t630*t697) - 1.*t1165*t701 - 0.0306*t709;
  p_output1[41]=-1.*t1150*t1165 - 1.*t1172*t1191 + 1.1312*(t1156 - 1.*t1191*t630) - 0.0306*(t1159 - 1.*t1191*t634);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 14, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_VectorNav_to_RightToeBottom_mex.hh"

namespace SymExpression
{

void J_VectorNav_to_RightToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
