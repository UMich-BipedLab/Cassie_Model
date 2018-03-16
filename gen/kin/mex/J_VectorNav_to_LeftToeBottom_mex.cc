/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 12:16:02 GMT-04:00
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
  double t1495;
  double t1548;
  double t1603;
  double t1628;
  double t1636;
  double t1645;
  double t1648;
  double t1659;
  double t1675;
  double t1676;
  double t1682;
  double t1694;
  double t1708;
  double t1712;
  double t1713;
  double t1721;
  double t1722;
  double t1723;
  double t1725;
  double t1726;
  double t1727;
  double t1729;
  double t1734;
  double t1735;
  double t1738;
  double t1748;
  double t1751;
  double t1754;
  double t1764;
  double t1766;
  double t1768;
  double t1770;
  double t1774;
  double t1776;
  double t1777;
  double t1786;
  double t1788;
  double t1789;
  double t1791;
  double t1792;
  double t1793;
  double t1795;
  double t1798;
  double t1799;
  double t1800;
  double t1806;
  double t1807;
  double t1810;
  double t1585;
  double t1590;
  double t1599;
  double t1604;
  double t1607;
  double t1646;
  double t1649;
  double t1651;
  double t1662;
  double t1666;
  double t1668;
  double t1692;
  double t1700;
  double t1702;
  double t1717;
  double t1718;
  double t1720;
  double t1728;
  double t1731;
  double t1732;
  double t1835;
  double t1836;
  double t1837;
  double t1839;
  double t1840;
  double t1841;
  double t1743;
  double t1744;
  double t1747;
  double t1769;
  double t1772;
  double t1773;
  double t1843;
  double t1844;
  double t1845;
  double t1847;
  double t1848;
  double t1849;
  double t1782;
  double t1784;
  double t1785;
  double t1794;
  double t1796;
  double t1797;
  double t1851;
  double t1852;
  double t1853;
  double t1855;
  double t1856;
  double t1857;
  double t1802;
  double t1803;
  double t1804;
  double t1859;
  double t1860;
  double t1861;
  double t1863;
  double t1864;
  double t1865;
  double t1881;
  double t1882;
  double t1883;
  double t1885;
  double t1886;
  double t1887;
  double t1889;
  double t1890;
  double t1891;
  double t1893;
  double t1894;
  double t1895;
  double t1897;
  double t1898;
  double t1899;
  double t1901;
  double t1902;
  double t1903;
  double t1922;
  double t1923;
  double t1924;
  double t1926;
  double t1927;
  double t1928;
  double t1930;
  double t1931;
  double t1932;
  double t1934;
  double t1935;
  double t1936;
  double t1938;
  double t1939;
  double t1940;
  double t1942;
  double t1943;
  double t1944;
  double t1915;
  double t1916;
  double t1917;
  double t1960;
  double t1961;
  double t1962;
  double t1964;
  double t1965;
  double t1966;
  double t1968;
  double t1969;
  double t1970;
  double t1972;
  double t1973;
  double t1974;
  double t1976;
  double t1977;
  double t1978;
  double t1980;
  double t1981;
  double t1982;
  double t1999;
  double t2001;
  double t2002;
  double t2004;
  double t2005;
  double t2006;
  double t2008;
  double t2009;
  double t2010;
  double t2012;
  double t2013;
  double t2014;
  double t2016;
  double t2017;
  double t2018;
  double t2020;
  double t2021;
  double t2022;
  double t1994;
  double t1995;
  double t1996;
  double t2037;
  double t2038;
  double t2039;
  double t2042;
  double t2043;
  double t2045;
  double t2046;
  double t2047;
  double t2049;
  double t2050;
  double t2051;
  double t2053;
  double t2054;
  double t2055;
  double t2057;
  double t2058;
  double t2059;
  double t2061;
  double t2062;
  double t2063;
  double t2033;
  double t2034;
  double t2077;
  double t2078;
  double t2079;
  double t2081;
  double t2082;
  double t2083;
  double t2085;
  double t2086;
  double t2088;
  double t2089;
  double t2090;
  double t2092;
  double t2093;
  double t2094;
  double t2096;
  double t2097;
  double t2098;
  double t2100;
  double t2101;
  double t2102;
  double t2003;
  double t2007;
  double t2011;
  double t2015;
  double t2019;
  double t2023;
  double t2024;
  double t2025;
  double t2026;
  double t2027;
  double t2028;
  double t2029;
  double t2030;
  double t2031;
  double t2113;
  double t2114;
  double t2115;
  double t2117;
  double t2118;
  double t2124;
  double t2125;
  double t2127;
  double t2128;
  double t2129;
  double t2131;
  double t2132;
  double t2134;
  double t2135;
  double t2136;
  double t2138;
  double t2139;
  double t2140;
  double t2151;
  double t2152;
  double t2153;
  double t2156;
  double t2157;
  double t2159;
  double t2160;
  double t2162;
  double t2163;
  double t2164;
  double t2166;
  double t2167;
  double t2168;
  double t2170;
  double t2171;
  double t2172;
  double t2174;
  double t2175;
  double t2176;
  double t2193;
  double t2194;
  double t2195;
  double t2197;
  double t2198;
  double t2200;
  double t2201;
  double t2203;
  double t2204;
  double t2205;
  double t2207;
  double t2208;
  double t2209;
  double t2187;
  double t2188;
  double t2190;
  double t2191;
  double t2192;
  double t2222;
  double t2223;
  double t2226;
  double t2227;
  double t2229;
  double t2230;
  double t2231;
  double t2243;
  double t2244;
  double t2245;
  double t2247;
  double t2248;
  double t2250;
  double t2251;
  double t2253;
  double t2254;
  double t2255;
  double t2257;
  double t2258;
  double t2259;
  double t2273;
  double t2274;
  double t2275;
  double t2280;
  double t2281;
  double t2283;
  double t2284;
  double t2270;
  double t2271;
  double t2272;
  double t2277;
  double t2278;
  double t2298;
  double t2299;
  double t1871;
  double t2309;
  double t2310;
  double t2311;
  double t2314;
  double t2315;
  double t2317;
  double t2318;
  double t2286;
  double t2335;
  double t2336;
  double t2337;
  double t2290;
  double t2329;
  double t2330;
  double t2332;
  double t2333;
  double t2334;
  double t2301;
  double t1872;
  double t1873;
  double t2320;
  double t2354;
  double t2355;
  double t2356;
  double t2324;
  t1495 = Sin(var1[0]);
  t1548 = Cos(var1[1]);
  t1603 = Sin(var1[1]);
  t1628 = Cos(var1[2]);
  t1636 = -1.*t1628;
  t1645 = 1. + t1636;
  t1648 = Sin(var1[2]);
  t1659 = Cos(var1[0]);
  t1675 = Cos(var1[3]);
  t1676 = -1.*t1675;
  t1682 = 1. + t1676;
  t1694 = Sin(var1[3]);
  t1708 = -1.*t1628*t1495*t1603;
  t1712 = -1.*t1659*t1648;
  t1713 = t1708 + t1712;
  t1721 = -1.*t1659*t1628;
  t1722 = t1495*t1603*t1648;
  t1723 = t1721 + t1722;
  t1725 = Cos(var1[4]);
  t1726 = -1.*t1725;
  t1727 = 1. + t1726;
  t1729 = Sin(var1[4]);
  t1734 = -1.*t1694*t1713;
  t1735 = t1675*t1723;
  t1738 = t1734 + t1735;
  t1748 = t1675*t1713;
  t1751 = t1694*t1723;
  t1754 = t1748 + t1751;
  t1764 = Cos(var1[5]);
  t1766 = -1.*t1764;
  t1768 = 1. + t1766;
  t1770 = Sin(var1[5]);
  t1774 = t1729*t1738;
  t1776 = t1725*t1754;
  t1777 = t1774 + t1776;
  t1786 = t1725*t1738;
  t1788 = -1.*t1729*t1754;
  t1789 = t1786 + t1788;
  t1791 = Cos(var1[6]);
  t1792 = -1.*t1791;
  t1793 = 1. + t1792;
  t1795 = Sin(var1[6]);
  t1798 = -1.*t1770*t1777;
  t1799 = t1764*t1789;
  t1800 = t1798 + t1799;
  t1806 = t1764*t1777;
  t1807 = t1770*t1789;
  t1810 = t1806 + t1807;
  t1585 = -1.*t1548;
  t1590 = 1. + t1585;
  t1599 = 0.135*t1590;
  t1604 = 0.049*t1603;
  t1607 = 0. + t1599 + t1604;
  t1646 = -0.049*t1645;
  t1649 = -0.09*t1648;
  t1651 = 0. + t1646 + t1649;
  t1662 = -0.09*t1645;
  t1666 = 0.049*t1648;
  t1668 = 0. + t1662 + t1666;
  t1692 = -0.049*t1682;
  t1700 = -0.21*t1694;
  t1702 = 0. + t1692 + t1700;
  t1717 = -0.21*t1682;
  t1718 = 0.049*t1694;
  t1720 = 0. + t1717 + t1718;
  t1728 = -0.2707*t1727;
  t1731 = 0.0016*t1729;
  t1732 = 0. + t1728 + t1731;
  t1835 = t1659*t1628*t1603;
  t1836 = -1.*t1495*t1648;
  t1837 = t1835 + t1836;
  t1839 = -1.*t1628*t1495;
  t1840 = -1.*t1659*t1603*t1648;
  t1841 = t1839 + t1840;
  t1743 = -0.0016*t1727;
  t1744 = -0.2707*t1729;
  t1747 = 0. + t1743 + t1744;
  t1769 = 0.0184*t1768;
  t1772 = -0.7055*t1770;
  t1773 = 0. + t1769 + t1772;
  t1843 = -1.*t1694*t1837;
  t1844 = t1675*t1841;
  t1845 = t1843 + t1844;
  t1847 = t1675*t1837;
  t1848 = t1694*t1841;
  t1849 = t1847 + t1848;
  t1782 = -0.7055*t1768;
  t1784 = -0.0184*t1770;
  t1785 = 0. + t1782 + t1784;
  t1794 = -1.1135*t1793;
  t1796 = 0.0216*t1795;
  t1797 = 0. + t1794 + t1796;
  t1851 = t1729*t1845;
  t1852 = t1725*t1849;
  t1853 = t1851 + t1852;
  t1855 = t1725*t1845;
  t1856 = -1.*t1729*t1849;
  t1857 = t1855 + t1856;
  t1802 = -0.0216*t1793;
  t1803 = -1.1135*t1795;
  t1804 = 0. + t1802 + t1803;
  t1859 = -1.*t1770*t1853;
  t1860 = t1764*t1857;
  t1861 = t1859 + t1860;
  t1863 = t1764*t1853;
  t1864 = t1770*t1857;
  t1865 = t1863 + t1864;
  t1881 = t1628*t1694*t1603;
  t1882 = t1675*t1603*t1648;
  t1883 = t1881 + t1882;
  t1885 = -1.*t1675*t1628*t1603;
  t1886 = t1694*t1603*t1648;
  t1887 = t1885 + t1886;
  t1889 = t1729*t1883;
  t1890 = t1725*t1887;
  t1891 = t1889 + t1890;
  t1893 = t1725*t1883;
  t1894 = -1.*t1729*t1887;
  t1895 = t1893 + t1894;
  t1897 = -1.*t1770*t1891;
  t1898 = t1764*t1895;
  t1899 = t1897 + t1898;
  t1901 = t1764*t1891;
  t1902 = t1770*t1895;
  t1903 = t1901 + t1902;
  t1922 = -1.*t1659*t1548*t1628*t1694;
  t1923 = -1.*t1675*t1659*t1548*t1648;
  t1924 = t1922 + t1923;
  t1926 = t1675*t1659*t1548*t1628;
  t1927 = -1.*t1659*t1548*t1694*t1648;
  t1928 = t1926 + t1927;
  t1930 = t1729*t1924;
  t1931 = t1725*t1928;
  t1932 = t1930 + t1931;
  t1934 = t1725*t1924;
  t1935 = -1.*t1729*t1928;
  t1936 = t1934 + t1935;
  t1938 = -1.*t1770*t1932;
  t1939 = t1764*t1936;
  t1940 = t1938 + t1939;
  t1942 = t1764*t1932;
  t1943 = t1770*t1936;
  t1944 = t1942 + t1943;
  t1915 = 0.049*t1548;
  t1916 = 0.135*t1603;
  t1917 = t1915 + t1916;
  t1960 = -1.*t1548*t1628*t1694*t1495;
  t1961 = -1.*t1675*t1548*t1495*t1648;
  t1962 = t1960 + t1961;
  t1964 = t1675*t1548*t1628*t1495;
  t1965 = -1.*t1548*t1694*t1495*t1648;
  t1966 = t1964 + t1965;
  t1968 = t1729*t1962;
  t1969 = t1725*t1966;
  t1970 = t1968 + t1969;
  t1972 = t1725*t1962;
  t1973 = -1.*t1729*t1966;
  t1974 = t1972 + t1973;
  t1976 = -1.*t1770*t1970;
  t1977 = t1764*t1974;
  t1978 = t1976 + t1977;
  t1980 = t1764*t1970;
  t1981 = t1770*t1974;
  t1982 = t1980 + t1981;
  t1999 = -1.*t1548*t1628*t1694;
  t2001 = -1.*t1675*t1548*t1648;
  t2002 = t1999 + t2001;
  t2004 = -1.*t1675*t1548*t1628;
  t2005 = t1548*t1694*t1648;
  t2006 = t2004 + t2005;
  t2008 = -1.*t1729*t2002;
  t2009 = t1725*t2006;
  t2010 = t2008 + t2009;
  t2012 = t1725*t2002;
  t2013 = t1729*t2006;
  t2014 = t2012 + t2013;
  t2016 = t1770*t2010;
  t2017 = t1764*t2014;
  t2018 = t2016 + t2017;
  t2020 = t1764*t2010;
  t2021 = -1.*t1770*t2014;
  t2022 = t2020 + t2021;
  t1994 = -0.09*t1628;
  t1995 = -0.049*t1648;
  t1996 = t1994 + t1995;
  t2037 = -1.*t1659*t1628*t1603;
  t2038 = t1495*t1648;
  t2039 = t2037 + t2038;
  t2042 = t1694*t2039;
  t2043 = t2042 + t1844;
  t2045 = t1675*t2039;
  t2046 = -1.*t1694*t1841;
  t2047 = t2045 + t2046;
  t2049 = -1.*t1729*t2043;
  t2050 = t1725*t2047;
  t2051 = t2049 + t2050;
  t2053 = t1725*t2043;
  t2054 = t1729*t2047;
  t2055 = t2053 + t2054;
  t2057 = t1770*t2051;
  t2058 = t1764*t2055;
  t2059 = t2057 + t2058;
  t2061 = t1764*t2051;
  t2062 = -1.*t1770*t2055;
  t2063 = t2061 + t2062;
  t2033 = 0.049*t1628;
  t2034 = t2033 + t1649;
  t2077 = t1659*t1628;
  t2078 = -1.*t1495*t1603*t1648;
  t2079 = t2077 + t2078;
  t2081 = t1694*t1713;
  t2082 = t1675*t2079;
  t2083 = t2081 + t2082;
  t2085 = -1.*t1694*t2079;
  t2086 = t1748 + t2085;
  t2088 = -1.*t1729*t2083;
  t2089 = t1725*t2086;
  t2090 = t2088 + t2089;
  t2092 = t1725*t2083;
  t2093 = t1729*t2086;
  t2094 = t2092 + t2093;
  t2096 = t1770*t2090;
  t2097 = t1764*t2094;
  t2098 = t2096 + t2097;
  t2100 = t1764*t2090;
  t2101 = -1.*t1770*t2094;
  t2102 = t2100 + t2101;
  t2003 = t1747*t2002;
  t2007 = t1732*t2006;
  t2011 = t1785*t2010;
  t2015 = t1773*t2014;
  t2019 = t1804*t2018;
  t2023 = t1797*t2022;
  t2024 = -1.*t1795*t2018;
  t2025 = t1791*t2022;
  t2026 = t2024 + t2025;
  t2027 = -1.1312*t2026;
  t2028 = t1791*t2018;
  t2029 = t1795*t2022;
  t2030 = t2028 + t2029;
  t2031 = 0.0306*t2030;
  t2113 = -0.21*t1675;
  t2114 = -0.049*t1694;
  t2115 = t2113 + t2114;
  t2117 = 0.049*t1675;
  t2118 = t2117 + t1700;
  t2124 = -1.*t1675*t1837;
  t2125 = t2124 + t2046;
  t2127 = -1.*t1729*t1845;
  t2128 = t1725*t2125;
  t2129 = t2127 + t2128;
  t2131 = t1729*t2125;
  t2132 = t1855 + t2131;
  t2134 = t1770*t2129;
  t2135 = t1764*t2132;
  t2136 = t2134 + t2135;
  t2138 = t1764*t2129;
  t2139 = -1.*t1770*t2132;
  t2140 = t2138 + t2139;
  t2151 = t1628*t1495*t1603;
  t2152 = t1659*t1648;
  t2153 = t2151 + t2152;
  t2156 = -1.*t1694*t2153;
  t2157 = t2156 + t2082;
  t2159 = -1.*t1675*t2153;
  t2160 = t2159 + t2085;
  t2162 = -1.*t1729*t2157;
  t2163 = t1725*t2160;
  t2164 = t2162 + t2163;
  t2166 = t1725*t2157;
  t2167 = t1729*t2160;
  t2168 = t2166 + t2167;
  t2170 = t1770*t2164;
  t2171 = t1764*t2168;
  t2172 = t2170 + t2171;
  t2174 = t1764*t2164;
  t2175 = -1.*t1770*t2168;
  t2176 = t2174 + t2175;
  t2193 = t1675*t1548*t1628;
  t2194 = -1.*t1548*t1694*t1648;
  t2195 = t2193 + t2194;
  t2197 = -1.*t1725*t2195;
  t2198 = t2008 + t2197;
  t2200 = -1.*t1729*t2195;
  t2201 = t2012 + t2200;
  t2203 = t1770*t2198;
  t2204 = t1764*t2201;
  t2205 = t2203 + t2204;
  t2207 = t1764*t2198;
  t2208 = -1.*t1770*t2201;
  t2209 = t2207 + t2208;
  t2187 = 0.0016*t1725;
  t2188 = t2187 + t1744;
  t2190 = -0.2707*t1725;
  t2191 = -0.0016*t1729;
  t2192 = t2190 + t2191;
  t2222 = -1.*t1725*t1849;
  t2223 = t2127 + t2222;
  t2226 = t1770*t2223;
  t2227 = t2226 + t1860;
  t2229 = t1764*t2223;
  t2230 = -1.*t1770*t1857;
  t2231 = t2229 + t2230;
  t2243 = t1675*t2153;
  t2244 = t1694*t2079;
  t2245 = t2243 + t2244;
  t2247 = -1.*t1725*t2245;
  t2248 = t2162 + t2247;
  t2250 = -1.*t1729*t2245;
  t2251 = t2166 + t2250;
  t2253 = t1770*t2248;
  t2254 = t1764*t2251;
  t2255 = t2253 + t2254;
  t2257 = t1764*t2248;
  t2258 = -1.*t1770*t2251;
  t2259 = t2257 + t2258;
  t2273 = t1729*t2002;
  t2274 = t1725*t2195;
  t2275 = t2273 + t2274;
  t2280 = -1.*t1770*t2275;
  t2281 = t2280 + t2204;
  t2283 = -1.*t1764*t2275;
  t2284 = t2283 + t2208;
  t2270 = -0.7055*t1764;
  t2271 = 0.0184*t1770;
  t2272 = t2270 + t2271;
  t2277 = -0.0184*t1764;
  t2278 = t2277 + t1772;
  t2298 = -1.*t1764*t1853;
  t2299 = t2298 + t2230;
  t1871 = t1791*t1861;
  t2309 = t1729*t2157;
  t2310 = t1725*t2245;
  t2311 = t2309 + t2310;
  t2314 = -1.*t1770*t2311;
  t2315 = t2314 + t2254;
  t2317 = -1.*t1764*t2311;
  t2318 = t2317 + t2258;
  t2286 = -1.*t1795*t2281;
  t2335 = t1764*t2275;
  t2336 = t1770*t2201;
  t2337 = t2335 + t2336;
  t2290 = t1791*t2281;
  t2329 = 0.0216*t1791;
  t2330 = t2329 + t1803;
  t2332 = -1.1135*t1791;
  t2333 = -0.0216*t1795;
  t2334 = t2332 + t2333;
  t2301 = -1.*t1795*t1861;
  t1872 = -1.*t1795*t1865;
  t1873 = t1871 + t1872;
  t2320 = -1.*t1795*t2315;
  t2354 = t1764*t2311;
  t2355 = t1770*t2251;
  t2356 = t2354 + t2355;
  t2324 = t1791*t2315;
  p_output1[0]=0;
  p_output1[1]=-0.135*t1495 + 0.1305*t1495*t1548 + t1495*t1607 + t1495*t1603*t1651 + t1659*t1668 - 1.*t1702*t1713 - 1.*t1720*t1723 - 1.*t1732*t1738 - 1.*t1747*t1754 - 1.*t1773*t1777 - 1.*t1785*t1789 - 1.*t1797*t1800 - 1.*t1804*t1810 - 0.0306*(t1795*t1800 + t1791*t1810) + 1.1312*(t1791*t1800 - 1.*t1795*t1810);
  p_output1[2]=0.135*t1659 - 0.1305*t1548*t1659 - 1.*t1607*t1659 - 1.*t1603*t1651*t1659 + t1495*t1668 - 1.*t1702*t1837 - 1.*t1720*t1841 - 1.*t1732*t1845 - 1.*t1747*t1849 - 1.*t1773*t1853 - 1.*t1785*t1857 - 1.*t1797*t1861 - 1.*t1804*t1865 - 0.0306*(t1795*t1861 + t1791*t1865) + 1.1312*t1873;
  p_output1[3]=0.004500000000000004*t1548 - 0.049*t1603 - 1.*t1603*t1651 - 1.*t1603*t1628*t1702 + t1603*t1648*t1720 + t1732*t1883 + t1747*t1887 + t1773*t1891 + t1785*t1895 + t1797*t1899 + t1804*t1903 + 0.0306*(t1795*t1899 + t1791*t1903) - 1.1312*(t1791*t1899 - 1.*t1795*t1903);
  p_output1[4]=0.1305*t1603*t1659 - 1.*t1548*t1651*t1659 - 1.*t1548*t1628*t1659*t1702 + t1548*t1648*t1659*t1720 - 1.*t1659*t1917 - 1.*t1732*t1924 - 1.*t1747*t1928 - 1.*t1773*t1932 - 1.*t1785*t1936 - 1.*t1797*t1940 - 1.*t1804*t1944 - 0.0306*(t1795*t1940 + t1791*t1944) + 1.1312*(t1791*t1940 - 1.*t1795*t1944);
  p_output1[5]=0.1305*t1495*t1603 - 1.*t1495*t1548*t1651 - 1.*t1495*t1548*t1628*t1702 + t1495*t1548*t1648*t1720 - 1.*t1495*t1917 - 1.*t1732*t1962 - 1.*t1747*t1966 - 1.*t1773*t1970 - 1.*t1785*t1974 - 1.*t1797*t1978 - 1.*t1804*t1982 - 0.0306*(t1795*t1978 + t1791*t1982) + 1.1312*(t1791*t1978 - 1.*t1795*t1982);
  p_output1[6]=-1.*t1548*t1648*t1702 - 1.*t1548*t1628*t1720 + t1548*t1996 + t2003 + t2007 + t2011 + t2015 + t2019 + t2023 + t2027 + t2031;
  p_output1[7]=-1.*t1702*t1841 - 1.*t1603*t1659*t1996 + t1495*t2034 - 1.*t1720*t2039 - 1.*t1747*t2043 - 1.*t1732*t2047 - 1.*t1785*t2051 - 1.*t1773*t2055 - 1.*t1804*t2059 - 1.*t1797*t2063 + 1.1312*(-1.*t1795*t2059 + t1791*t2063) - 0.0306*(t1791*t2059 + t1795*t2063);
  p_output1[8]=-1.*t1713*t1720 - 1.*t1495*t1603*t1996 - 1.*t1659*t2034 - 1.*t1702*t2079 - 1.*t1747*t2083 - 1.*t1732*t2086 - 1.*t1785*t2090 - 1.*t1773*t2094 - 1.*t1804*t2098 - 1.*t1797*t2102 + 1.1312*(-1.*t1795*t2098 + t1791*t2102) - 0.0306*(t1791*t2098 + t1795*t2102);
  p_output1[9]=t2003 + t2007 + t2011 + t2015 + t2019 + t2023 + t2027 + t2031 + t1548*t1628*t2115 - 1.*t1548*t1648*t2118;
  p_output1[10]=-1.*t1747*t1845 - 1.*t1837*t2115 - 1.*t1841*t2118 - 1.*t1732*t2125 - 1.*t1785*t2129 - 1.*t1773*t2132 - 1.*t1804*t2136 - 1.*t1797*t2140 + 1.1312*(-1.*t1795*t2136 + t1791*t2140) - 0.0306*(t1791*t2136 + t1795*t2140);
  p_output1[11]=-1.*t2079*t2118 - 1.*t2115*t2153 - 1.*t1747*t2157 - 1.*t1732*t2160 - 1.*t1785*t2164 - 1.*t1773*t2168 - 1.*t1804*t2172 - 1.*t1797*t2176 + 1.1312*(-1.*t1795*t2172 + t1791*t2176) - 0.0306*(t1791*t2172 + t1795*t2176);
  p_output1[12]=t2002*t2188 + t2192*t2195 + t1785*t2198 + t1773*t2201 + t1804*t2205 + t1797*t2209 - 1.1312*(-1.*t1795*t2205 + t1791*t2209) + 0.0306*(t1791*t2205 + t1795*t2209);
  p_output1[13]=-1.*t1773*t1857 - 1.*t1845*t2188 - 1.*t1849*t2192 - 1.*t1785*t2223 - 1.*t1804*t2227 - 1.*t1797*t2231 + 1.1312*(-1.*t1795*t2227 + t1791*t2231) - 0.0306*(t1791*t2227 + t1795*t2231);
  p_output1[14]=-1.*t2157*t2188 - 1.*t2192*t2245 - 1.*t1785*t2248 - 1.*t1773*t2251 - 1.*t1804*t2255 - 1.*t1797*t2259 + 1.1312*(-1.*t1795*t2255 + t1791*t2259) - 0.0306*(t1791*t2255 + t1795*t2259);
  p_output1[15]=t2272*t2275 + t2201*t2278 + t1804*t2281 + t1797*t2284 - 1.1312*(t1791*t2284 + t2286) + 0.0306*(t1795*t2284 + t2290);
  p_output1[16]=-1.*t1804*t1861 - 1.*t1853*t2272 - 1.*t1857*t2278 - 1.*t1797*t2299 - 0.0306*(t1871 + t1795*t2299) + 1.1312*(t1791*t2299 + t2301);
  p_output1[17]=-1.*t2251*t2278 - 1.*t2272*t2311 - 1.*t1804*t2315 - 1.*t1797*t2318 + 1.1312*(t1791*t2318 + t2320) - 0.0306*(t1795*t2318 + t2324);
  p_output1[18]=t2281*t2330 + t2334*t2337 - 1.1312*(t2286 - 1.*t1791*t2337) + 0.0306*(t2290 - 1.*t1795*t2337);
  p_output1[19]=-0.0306*t1873 + 1.1312*(-1.*t1791*t1865 + t2301) - 1.*t1861*t2330 - 1.*t1865*t2334;
  p_output1[20]=-1.*t2315*t2330 - 1.*t2334*t2356 + 1.1312*(t2320 - 1.*t1791*t2356) - 0.0306*(t2324 - 1.*t1795*t2356);
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
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
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

#include "J_VectorNav_to_LeftToeBottom_mex.hh"

namespace SymExpression
{

void J_VectorNav_to_LeftToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
