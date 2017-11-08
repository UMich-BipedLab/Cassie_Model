/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:11:05 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "J_knee_joint_left_src.h"

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
  double t1788;
  double t1791;
  double t1807;
  double t1787;
  double t1811;
  double t1736;
  double t1789;
  double t1820;
  double t1821;
  double t1828;
  double t1832;
  double t1833;
  double t1834;
  double t1851;
  double t1852;
  double t1858;
  double t1862;
  double t1846;
  double t1848;
  double t1849;
  double t1869;
  double t1884;
  double t1885;
  double t1887;
  double t1889;
  double t1880;
  double t1881;
  double t1883;
  double t1898;
  double t1900;
  double t1901;
  double t1771;
  double t1775;
  double t1778;
  double t1785;
  double t1835;
  double t1836;
  double t1918;
  double t1919;
  double t1920;
  double t1922;
  double t1923;
  double t1924;
  double t1859;
  double t1863;
  double t1865;
  double t1870;
  double t1871;
  double t1872;
  double t1928;
  double t1929;
  double t1932;
  double t1888;
  double t1893;
  double t1894;
  double t1904;
  double t1905;
  double t1906;
  double t1939;
  double t1940;
  double t1941;
  double t1943;
  double t1944;
  double t1945;
  double t1962;
  double t1963;
  double t1964;
  double t1971;
  double t1974;
  double t1975;
  double t1977;
  double t1978;
  double t1979;
  double t1996;
  double t1997;
  double t1998;
  double t2008;
  double t2009;
  double t2012;
  double t2014;
  double t2015;
  double t2016;
  double t2032;
  double t2035;
  double t2036;
  double t2043;
  double t2044;
  double t2045;
  double t2047;
  double t2055;
  double t2057;
  double t2074;
  double t2075;
  double t2076;
  double t2078;
  double t2079;
  double t2083;
  double t2084;
  double t2085;
  double t2101;
  double t2102;
  double t2103;
  double t2106;
  double t2107;
  double t2108;
  double t2113;
  double t2114;
  double t2128;
  double t2130;
  double t2131;
  double t2135;
  double t2136;
  double t2137;
  double t2154;
  double t2155;
  double t2167;
  double t2168;
  double t2169;
  double t2172;
  double t2173;
  double t2177;
  double t2178;
  double t2132;
  double t2133;
  double t2134;
  double t2138;
  double t2139;
  double t2140;
  double t2142;
  double t2143;
  double t2144;
  double t2145;
  double t2146;
  double t2147;
  double t1935;
  double t1936;
  double t1937;
  double t2194;
  double t2195;
  double t2196;
  double t2198;
  double t2199;
  double t2210;
  double t2211;
  double t2212;
  double t2214;
  double t2215;
  double t2216;
  double t2225;
  double t2226;
  double t2227;
  double t2229;
  double t2230;
  double t2231;
  double t1951;
  double t1952;
  double t1954;
  double t2240;
  double t2241;
  double t2243;
  double t2244;
  double t2245;
  double t2254;
  double t2255;
  double t2256;
  double t2268;
  double t2269;
  double t2270;
  t1788 = Cos(var1[5]);
  t1791 = Sin(var1[3]);
  t1807 = Sin(var1[4]);
  t1787 = Cos(var1[3]);
  t1811 = Sin(var1[5]);
  t1736 = Cos(var1[6]);
  t1789 = -1.*t1787*t1788;
  t1820 = -1.*t1791*t1807*t1811;
  t1821 = t1789 + t1820;
  t1828 = -1.*t1788*t1791*t1807;
  t1832 = t1787*t1811;
  t1833 = t1828 + t1832;
  t1834 = Sin(var1[6]);
  t1851 = Cos(var1[7]);
  t1852 = -1.*t1851;
  t1858 = 1. + t1852;
  t1862 = Sin(var1[7]);
  t1846 = t1736*t1821;
  t1848 = t1833*t1834;
  t1849 = t1846 + t1848;
  t1869 = Cos(var1[4]);
  t1884 = Cos(var1[8]);
  t1885 = -1.*t1884;
  t1887 = 1. + t1885;
  t1889 = Sin(var1[8]);
  t1880 = -1.*t1869*t1851*t1791;
  t1881 = t1849*t1862;
  t1883 = t1880 + t1881;
  t1898 = t1736*t1833;
  t1900 = -1.*t1821*t1834;
  t1901 = t1898 + t1900;
  t1771 = -1.*t1736;
  t1775 = 1. + t1771;
  t1778 = 0.135*t1775;
  t1785 = 0. + t1778;
  t1835 = -0.135*t1834;
  t1836 = 0. + t1835;
  t1918 = -1.*t1788*t1791;
  t1919 = t1787*t1807*t1811;
  t1920 = t1918 + t1919;
  t1922 = t1787*t1788*t1807;
  t1923 = t1791*t1811;
  t1924 = t1922 + t1923;
  t1859 = 0.135*t1858;
  t1863 = 0.049*t1862;
  t1865 = 0. + t1859 + t1863;
  t1870 = -0.049*t1858;
  t1871 = 0.135*t1862;
  t1872 = 0. + t1870 + t1871;
  t1928 = t1736*t1920;
  t1929 = t1924*t1834;
  t1932 = t1928 + t1929;
  t1888 = -0.049*t1887;
  t1893 = -0.09*t1889;
  t1894 = 0. + t1888 + t1893;
  t1904 = -0.09*t1887;
  t1905 = 0.049*t1889;
  t1906 = 0. + t1904 + t1905;
  t1939 = t1787*t1869*t1851;
  t1940 = t1932*t1862;
  t1941 = t1939 + t1940;
  t1943 = t1736*t1924;
  t1944 = -1.*t1920*t1834;
  t1945 = t1943 + t1944;
  t1962 = t1787*t1869*t1736*t1811;
  t1963 = t1787*t1869*t1788*t1834;
  t1964 = t1962 + t1963;
  t1971 = -1.*t1787*t1851*t1807;
  t1974 = t1964*t1862;
  t1975 = t1971 + t1974;
  t1977 = t1787*t1869*t1788*t1736;
  t1978 = -1.*t1787*t1869*t1811*t1834;
  t1979 = t1977 + t1978;
  t1996 = t1869*t1736*t1791*t1811;
  t1997 = t1869*t1788*t1791*t1834;
  t1998 = t1996 + t1997;
  t2008 = -1.*t1851*t1791*t1807;
  t2009 = t1998*t1862;
  t2012 = t2008 + t2009;
  t2014 = t1869*t1788*t1736*t1791;
  t2015 = -1.*t1869*t1791*t1811*t1834;
  t2016 = t2014 + t2015;
  t2032 = -1.*t1736*t1807*t1811;
  t2035 = -1.*t1788*t1807*t1834;
  t2036 = t2032 + t2035;
  t2043 = -1.*t1869*t1851;
  t2044 = t2036*t1862;
  t2045 = t2043 + t2044;
  t2047 = -1.*t1788*t1736*t1807;
  t2055 = t1807*t1811*t1834;
  t2057 = t2047 + t2055;
  t2074 = t1788*t1791;
  t2075 = -1.*t1787*t1807*t1811;
  t2076 = t2074 + t2075;
  t2078 = t2076*t1834;
  t2079 = t1943 + t2078;
  t2083 = t1736*t2076;
  t2084 = -1.*t1924*t1834;
  t2085 = t2083 + t2084;
  t2101 = t1788*t1791*t1807;
  t2102 = -1.*t1787*t1811;
  t2103 = t2101 + t2102;
  t2106 = t1736*t2103;
  t2107 = t1821*t1834;
  t2108 = t2106 + t2107;
  t2113 = -1.*t2103*t1834;
  t2114 = t1846 + t2113;
  t2128 = t1869*t1788*t1736;
  t2130 = -1.*t1869*t1811*t1834;
  t2131 = t2128 + t2130;
  t2135 = -1.*t1869*t1736*t1811;
  t2136 = -1.*t1869*t1788*t1834;
  t2137 = t2135 + t2136;
  t2154 = -1.*t1736*t1920;
  t2155 = t2154 + t2084;
  t2167 = t1787*t1788;
  t2168 = t1791*t1807*t1811;
  t2169 = t2167 + t2168;
  t2172 = -1.*t2169*t1834;
  t2173 = t2106 + t2172;
  t2177 = -1.*t1736*t2169;
  t2178 = t2177 + t2113;
  t2132 = 0.1305*t1851*t2131;
  t2133 = t2131*t1865;
  t2134 = t2131*t1862*t1894;
  t2138 = t2137*t1906;
  t2139 = t1884*t2131*t1862;
  t2140 = t2137*t1889;
  t2142 = t2139 + t2140;
  t2143 = -0.049*t2142;
  t2144 = t1884*t2137;
  t2145 = -1.*t2131*t1862*t1889;
  t2146 = t2144 + t2145;
  t2147 = -0.21*t2146;
  t1935 = t1851*t1932;
  t1936 = -1.*t1787*t1869*t1862;
  t1937 = t1935 + t1936;
  t2194 = 0.135*t1851;
  t2195 = -0.049*t1862;
  t2196 = t2194 + t2195;
  t2198 = 0.049*t1851;
  t2199 = t2198 + t1871;
  t2210 = t1736*t2169;
  t2211 = t2103*t1834;
  t2212 = t2210 + t2211;
  t2214 = t1851*t2212;
  t2215 = -1.*t1869*t1791*t1862;
  t2216 = t2214 + t2215;
  t2225 = t1869*t1736*t1811;
  t2226 = t1869*t1788*t1834;
  t2227 = t2225 + t2226;
  t2229 = t1851*t2227;
  t2230 = t1807*t1862;
  t2231 = t2229 + t2230;
  t1951 = t1884*t1945;
  t1952 = -1.*t1941*t1889;
  t1954 = t1951 + t1952;
  t2240 = 0.049*t1884;
  t2241 = t2240 + t1893;
  t2243 = -0.09*t1884;
  t2244 = -0.049*t1889;
  t2245 = t2243 + t2244;
  t2254 = t1869*t1851*t1791;
  t2255 = t2212*t1862;
  t2256 = t2254 + t2255;
  t2268 = -1.*t1851*t1807;
  t2269 = t2227*t1862;
  t2270 = t2268 + t2269;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1785*t1821 + t1833*t1836 + t1849*t1865 + 0.1305*(t1849*t1851 + t1791*t1862*t1869) - 1.*t1791*t1869*t1872 + t1883*t1894 - 0.21*(-1.*t1883*t1889 + t1884*t1901) - 0.049*(t1883*t1884 + t1889*t1901) + t1901*t1906;
  p_output1[10]=t1787*t1869*t1872 + t1785*t1920 + t1836*t1924 + t1865*t1932 + 0.1305*t1937 + t1894*t1941 + t1906*t1945 - 0.049*(t1884*t1941 + t1889*t1945) - 0.21*t1954;
  p_output1[11]=0;
  p_output1[12]=t1785*t1787*t1811*t1869 + t1787*t1788*t1836*t1869 - 1.*t1787*t1807*t1872 + t1865*t1964 + 0.1305*(t1787*t1807*t1862 + t1851*t1964) + t1894*t1975 + t1906*t1979 - 0.21*(-1.*t1889*t1975 + t1884*t1979) - 0.049*(t1884*t1975 + t1889*t1979);
  p_output1[13]=t1785*t1791*t1811*t1869 + t1788*t1791*t1836*t1869 - 1.*t1791*t1807*t1872 + t1865*t1998 + 0.1305*(t1791*t1807*t1862 + t1851*t1998) + t1894*t2012 + t1906*t2016 - 0.21*(-1.*t1889*t2012 + t1884*t2016) - 0.049*(t1884*t2012 + t1889*t2016);
  p_output1[14]=-1.*t1785*t1807*t1811 - 1.*t1788*t1807*t1836 - 1.*t1869*t1872 + t1865*t2036 + 0.1305*(t1862*t1869 + t1851*t2036) + t1894*t2045 + t1906*t2057 - 0.21*(-1.*t1889*t2045 + t1884*t2057) - 0.049*(t1884*t2045 + t1889*t2057);
  p_output1[15]=t1785*t1924 + t1836*t2076 + 0.1305*t1851*t2079 + t1865*t2079 + t1862*t1894*t2079 + t1906*t2085 - 0.21*(-1.*t1862*t1889*t2079 + t1884*t2085) - 0.049*(t1862*t1884*t2079 + t1889*t2085);
  p_output1[16]=t1821*t1836 + t1785*t2103 + 0.1305*t1851*t2108 + t1865*t2108 + t1862*t1894*t2108 + t1906*t2114 - 0.21*(-1.*t1862*t1889*t2108 + t1884*t2114) - 0.049*(t1862*t1884*t2108 + t1889*t2114);
  p_output1[17]=t1785*t1788*t1869 - 1.*t1811*t1836*t1869 + t2132 + t2133 + t2134 + t2138 + t2143 + t2147;
  p_output1[18]=0.135*t1834*t1920 - 0.135*t1736*t1924 + 0.1305*t1851*t1945 + t1865*t1945 + t1862*t1894*t1945 + t1906*t2155 - 0.21*(-1.*t1862*t1889*t1945 + t1884*t2155) - 0.049*(t1862*t1884*t1945 + t1889*t2155);
  p_output1[19]=-0.135*t1736*t2103 + 0.135*t1834*t2169 + 0.1305*t1851*t2173 + t1865*t2173 + t1862*t1894*t2173 + t1906*t2178 - 0.21*(-1.*t1862*t1889*t2173 + t1884*t2178) - 0.049*(t1862*t1884*t2173 + t1889*t2178);
  p_output1[20]=-0.135*t1736*t1788*t1869 + 0.135*t1811*t1834*t1869 + t2132 + t2133 + t2134 + t2138 + t2143 + t2147;
  p_output1[21]=0.1305*(-1.*t1787*t1851*t1869 - 1.*t1862*t1932) - 0.049*t1884*t1937 + 0.21*t1889*t1937 + t1894*t1937 + t1787*t1869*t2196 + t1932*t2199;
  p_output1[22]=t1791*t1869*t2196 + t2199*t2212 + 0.1305*(t1880 - 1.*t1862*t2212) - 0.049*t1884*t2216 + 0.21*t1889*t2216 + t1894*t2216;
  p_output1[23]=-1.*t1807*t2196 + t2199*t2227 + 0.1305*(t1807*t1851 - 1.*t1862*t2227) - 0.049*t1884*t2231 + 0.21*t1889*t2231 + t1894*t2231;
  p_output1[24]=-0.21*(-1.*t1884*t1941 - 1.*t1889*t1945) - 0.049*t1954 + t1945*t2241 + t1941*t2245;
  p_output1[25]=t2173*t2241 + t2245*t2256 - 0.21*(-1.*t1889*t2173 - 1.*t1884*t2256) - 0.049*(t1884*t2173 - 1.*t1889*t2256);
  p_output1[26]=t2131*t2241 + t2245*t2270 - 0.21*(-1.*t1889*t2131 - 1.*t1884*t2270) - 0.049*(t1884*t2131 - 1.*t1889*t2270);
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
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
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



void J_knee_joint_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
