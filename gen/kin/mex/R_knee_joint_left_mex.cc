/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:15:13 GMT-05:00
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
  double t1674;
  double t1704;
  double t1719;
  double t1709;
  double t1725;
  double t1696;
  double t1768;
  double t1769;
  double t1776;
  double t1710;
  double t1748;
  double t1757;
  double t1778;
  double t1661;
  double t1814;
  double t1817;
  double t1818;
  double t1682;
  double t1684;
  double t1688;
  double t1765;
  double t1790;
  double t1795;
  double t1798;
  double t1800;
  double t1807;
  double t1822;
  double t1613;
  double t1887;
  double t1890;
  double t1892;
  double t1876;
  double t1877;
  double t1883;
  double t1837;
  double t1904;
  double t1907;
  double t1913;
  double t1871;
  double t1886;
  double t1893;
  double t1894;
  double t1895;
  double t1901;
  double t1956;
  double t1957;
  double t1959;
  double t1940;
  double t1943;
  double t1944;
  double t1946;
  double t1948;
  double t1954;
  double t1813;
  double t1823;
  double t1831;
  double t1839;
  double t1842;
  double t1860;
  double t1902;
  double t1917;
  double t1918;
  double t1922;
  double t1925;
  double t1926;
  double t1955;
  double t1960;
  double t1964;
  double t1966;
  double t1968;
  double t1969;
  t1674 = Cos(var1[3]);
  t1704 = Cos(var1[5]);
  t1719 = Sin(var1[4]);
  t1709 = Sin(var1[3]);
  t1725 = Sin(var1[5]);
  t1696 = Cos(var1[6]);
  t1768 = t1674*t1704*t1719;
  t1769 = t1709*t1725;
  t1776 = t1768 + t1769;
  t1710 = -1.*t1704*t1709;
  t1748 = t1674*t1719*t1725;
  t1757 = t1710 + t1748;
  t1778 = Sin(var1[6]);
  t1661 = Cos(var1[8]);
  t1814 = t1696*t1776;
  t1817 = -1.*t1757*t1778;
  t1818 = t1814 + t1817;
  t1682 = Cos(var1[4]);
  t1684 = Cos(var1[7]);
  t1688 = t1674*t1682*t1684;
  t1765 = t1696*t1757;
  t1790 = t1776*t1778;
  t1795 = t1765 + t1790;
  t1798 = Sin(var1[7]);
  t1800 = t1795*t1798;
  t1807 = t1688 + t1800;
  t1822 = Sin(var1[8]);
  t1613 = Sin(var1[9]);
  t1887 = t1704*t1709*t1719;
  t1890 = -1.*t1674*t1725;
  t1892 = t1887 + t1890;
  t1876 = t1674*t1704;
  t1877 = t1709*t1719*t1725;
  t1883 = t1876 + t1877;
  t1837 = Cos(var1[9]);
  t1904 = t1696*t1892;
  t1907 = -1.*t1883*t1778;
  t1913 = t1904 + t1907;
  t1871 = t1682*t1684*t1709;
  t1886 = t1696*t1883;
  t1893 = t1892*t1778;
  t1894 = t1886 + t1893;
  t1895 = t1894*t1798;
  t1901 = t1871 + t1895;
  t1956 = t1682*t1704*t1696;
  t1957 = -1.*t1682*t1725*t1778;
  t1959 = t1956 + t1957;
  t1940 = -1.*t1684*t1719;
  t1943 = t1682*t1696*t1725;
  t1944 = t1682*t1704*t1778;
  t1946 = t1943 + t1944;
  t1948 = t1946*t1798;
  t1954 = t1940 + t1948;
  t1813 = t1661*t1807;
  t1823 = t1818*t1822;
  t1831 = t1813 + t1823;
  t1839 = t1661*t1818;
  t1842 = -1.*t1807*t1822;
  t1860 = t1839 + t1842;
  t1902 = t1661*t1901;
  t1917 = t1913*t1822;
  t1918 = t1902 + t1917;
  t1922 = t1661*t1913;
  t1925 = -1.*t1901*t1822;
  t1926 = t1922 + t1925;
  t1955 = t1661*t1954;
  t1960 = t1959*t1822;
  t1964 = t1955 + t1960;
  t1966 = t1661*t1959;
  t1968 = -1.*t1954*t1822;
  t1969 = t1966 + t1968;
  p_output1[0]=t1613*t1831 - 1.*t1837*t1860;
  p_output1[1]=t1613*t1918 - 1.*t1837*t1926;
  p_output1[2]=t1613*t1964 - 1.*t1837*t1969;
  p_output1[3]=t1831*t1837 + t1613*t1860;
  p_output1[4]=t1837*t1918 + t1613*t1926;
  p_output1[5]=t1837*t1964 + t1613*t1969;
  p_output1[6]=-1.*t1684*t1795 + t1674*t1682*t1798;
  p_output1[7]=t1682*t1709*t1798 - 1.*t1684*t1894;
  p_output1[8]=-1.*t1719*t1798 - 1.*t1684*t1946;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "R_knee_joint_left_mex.hh"

namespace SymExpression
{

void R_knee_joint_left_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
