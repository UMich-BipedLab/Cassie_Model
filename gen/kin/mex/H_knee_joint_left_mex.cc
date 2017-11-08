/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:11:05 GMT-05:00
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
  double t1874;
  double t1888;
  double t1873;
  double t1877;
  double t1893;
  double t1870;
  double t1908;
  double t1909;
  double t1912;
  double t1881;
  double t1894;
  double t1905;
  double t1913;
  double t1833;
  double t1919;
  double t1921;
  double t1957;
  double t1960;
  double t1961;
  double t1950;
  double t1951;
  double t1954;
  double t1939;
  double t1947;
  double t1923;
  double t1934;
  double t1937;
  double t1938;
  double t1940;
  double t1946;
  double t1907;
  double t1915;
  double t1916;
  double t1967;
  double t1968;
  double t1969;
  double t1974;
  double t1976;
  double t1977;
  double t1956;
  double t1962;
  double t1963;
  double t1992;
  double t1994;
  double t1995;
  double t1998;
  double t1999;
  double t2002;
  double t1986;
  double t1989;
  double t1990;
  double t2065;
  double t2066;
  double t2090;
  double t2091;
  double t2006;
  double t2009;
  double t2013;
  double t2042;
  double t2044;
  double t2046;
  double t2055;
  double t2059;
  double t2061;
  double t2067;
  double t2068;
  double t2069;
  double t2073;
  double t2074;
  double t2076;
  double t2096;
  double t2097;
  double t2098;
  double t2100;
  double t2101;
  double t2104;
  double t2014;
  double t2017;
  double t2018;
  double t2019;
  double t2020;
  double t2021;
  t1874 = Cos(var1[5]);
  t1888 = Sin(var1[3]);
  t1873 = Cos(var1[3]);
  t1877 = Sin(var1[4]);
  t1893 = Sin(var1[5]);
  t1870 = Cos(var1[6]);
  t1908 = -1.*t1874*t1888;
  t1909 = t1873*t1877*t1893;
  t1912 = t1908 + t1909;
  t1881 = t1873*t1874*t1877;
  t1894 = t1888*t1893;
  t1905 = t1881 + t1894;
  t1913 = Sin(var1[6]);
  t1833 = Cos(var1[8]);
  t1919 = Cos(var1[4]);
  t1921 = Cos(var1[7]);
  t1957 = t1873*t1874;
  t1960 = t1888*t1877*t1893;
  t1961 = t1957 + t1960;
  t1950 = t1874*t1888*t1877;
  t1951 = -1.*t1873*t1893;
  t1954 = t1950 + t1951;
  t1939 = Sin(var1[7]);
  t1947 = Sin(var1[8]);
  t1923 = t1873*t1919*t1921;
  t1934 = t1870*t1912;
  t1937 = t1905*t1913;
  t1938 = t1934 + t1937;
  t1940 = t1938*t1939;
  t1946 = t1923 + t1940;
  t1907 = t1870*t1905;
  t1915 = -1.*t1912*t1913;
  t1916 = t1907 + t1915;
  t1967 = t1919*t1921*t1888;
  t1968 = t1870*t1961;
  t1969 = t1954*t1913;
  t1974 = t1968 + t1969;
  t1976 = t1974*t1939;
  t1977 = t1967 + t1976;
  t1956 = t1870*t1954;
  t1962 = -1.*t1961*t1913;
  t1963 = t1956 + t1962;
  t1992 = -1.*t1921*t1877;
  t1994 = t1919*t1870*t1893;
  t1995 = t1919*t1874*t1913;
  t1998 = t1994 + t1995;
  t1999 = t1998*t1939;
  t2002 = t1992 + t1999;
  t1986 = t1919*t1874*t1870;
  t1989 = -1.*t1919*t1893*t1913;
  t1990 = t1986 + t1989;
  t2065 = -1.*t1921;
  t2066 = 1. + t2065;
  t2090 = -1.*t1833;
  t2091 = 1. + t2090;
  t2006 = t1833*t1946;
  t2009 = t1916*t1947;
  t2013 = t2006 + t2009;
  t2042 = -1.*t1870;
  t2044 = 1. + t2042;
  t2046 = 0.135*t2044;
  t2055 = 0. + t2046;
  t2059 = -0.135*t1913;
  t2061 = 0. + t2059;
  t2067 = 0.135*t2066;
  t2068 = 0.049*t1939;
  t2069 = 0. + t2067 + t2068;
  t2073 = -0.049*t2066;
  t2074 = 0.135*t1939;
  t2076 = 0. + t2073 + t2074;
  t2096 = -0.049*t2091;
  t2097 = -0.09*t1947;
  t2098 = 0. + t2096 + t2097;
  t2100 = -0.09*t2091;
  t2101 = 0.049*t1947;
  t2104 = 0. + t2100 + t2101;
  t2014 = t1833*t1977;
  t2017 = t1963*t1947;
  t2018 = t2014 + t2017;
  t2019 = t1833*t2002;
  t2020 = t1990*t1947;
  t2021 = t2019 + t2020;
  p_output1[0]=-1.*t1833*t1916 + t1946*t1947;
  p_output1[1]=-1.*t1833*t1963 + t1947*t1977;
  p_output1[2]=-1.*t1833*t1990 + t1947*t2002;
  p_output1[3]=0.;
  p_output1[4]=t2013;
  p_output1[5]=t2018;
  p_output1[6]=t2021;
  p_output1[7]=0.;
  p_output1[8]=-1.*t1921*t1938 + t1873*t1919*t1939;
  p_output1[9]=t1888*t1919*t1939 - 1.*t1921*t1974;
  p_output1[10]=-1.*t1877*t1939 - 1.*t1921*t1998;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.1305*(t1921*t1938 - 1.*t1873*t1919*t1939) - 0.21*(t1833*t1916 - 1.*t1946*t1947) - 0.049*t2013 + t1912*t2055 + t1905*t2061 + t1938*t2069 + t1873*t1919*t2076 + t1946*t2098 + t1916*t2104 + var1[0];
  p_output1[13]=0. + 0.1305*(-1.*t1888*t1919*t1939 + t1921*t1974) - 0.21*(t1833*t1963 - 1.*t1947*t1977) - 0.049*t2018 + t1961*t2055 + t1954*t2061 + t1974*t2069 + t1888*t1919*t2076 + t1977*t2098 + t1963*t2104 + var1[1];
  p_output1[14]=0. + 0.1305*(t1877*t1939 + t1921*t1998) - 0.21*(t1833*t1990 - 1.*t1947*t2002) - 0.049*t2021 + t1893*t1919*t2055 + t1874*t1919*t2061 + t1998*t2069 - 1.*t1877*t2076 + t2002*t2098 + t1990*t2104 + var1[2];
  p_output1[15]=1.;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 4, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "H_knee_joint_left_mex.hh"

namespace SymExpression
{

void H_knee_joint_left_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
