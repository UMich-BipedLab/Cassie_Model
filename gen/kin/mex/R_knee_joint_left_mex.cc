/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:09 GMT-05:00
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
  double t1710;
  double t1740;
  double t1755;
  double t1745;
  double t1761;
  double t1732;
  double t1804;
  double t1805;
  double t1812;
  double t1746;
  double t1784;
  double t1793;
  double t1814;
  double t1697;
  double t1850;
  double t1853;
  double t1854;
  double t1718;
  double t1720;
  double t1724;
  double t1801;
  double t1826;
  double t1831;
  double t1834;
  double t1836;
  double t1843;
  double t1858;
  double t1649;
  double t1923;
  double t1926;
  double t1928;
  double t1912;
  double t1913;
  double t1919;
  double t1873;
  double t1940;
  double t1943;
  double t1949;
  double t1907;
  double t1922;
  double t1929;
  double t1930;
  double t1931;
  double t1937;
  double t1992;
  double t1993;
  double t1995;
  double t1976;
  double t1979;
  double t1980;
  double t1982;
  double t1984;
  double t1990;
  double t1849;
  double t1859;
  double t1867;
  double t1875;
  double t1878;
  double t1896;
  double t1938;
  double t1953;
  double t1954;
  double t1958;
  double t1961;
  double t1962;
  double t1991;
  double t1996;
  double t2001;
  double t2003;
  double t2005;
  double t2006;
  t1710 = Cos(var1[3]);
  t1740 = Cos(var1[5]);
  t1755 = Sin(var1[4]);
  t1745 = Sin(var1[3]);
  t1761 = Sin(var1[5]);
  t1732 = Cos(var1[6]);
  t1804 = t1710*t1740*t1755;
  t1805 = t1745*t1761;
  t1812 = t1804 + t1805;
  t1746 = -1.*t1740*t1745;
  t1784 = t1710*t1755*t1761;
  t1793 = t1746 + t1784;
  t1814 = Sin(var1[6]);
  t1697 = Cos(var1[8]);
  t1850 = t1732*t1812;
  t1853 = -1.*t1793*t1814;
  t1854 = t1850 + t1853;
  t1718 = Cos(var1[4]);
  t1720 = Cos(var1[7]);
  t1724 = t1710*t1718*t1720;
  t1801 = t1732*t1793;
  t1826 = t1812*t1814;
  t1831 = t1801 + t1826;
  t1834 = Sin(var1[7]);
  t1836 = t1831*t1834;
  t1843 = t1724 + t1836;
  t1858 = Sin(var1[8]);
  t1649 = Sin(var1[9]);
  t1923 = t1740*t1745*t1755;
  t1926 = -1.*t1710*t1761;
  t1928 = t1923 + t1926;
  t1912 = t1710*t1740;
  t1913 = t1745*t1755*t1761;
  t1919 = t1912 + t1913;
  t1873 = Cos(var1[9]);
  t1940 = t1732*t1928;
  t1943 = -1.*t1919*t1814;
  t1949 = t1940 + t1943;
  t1907 = t1718*t1720*t1745;
  t1922 = t1732*t1919;
  t1929 = t1928*t1814;
  t1930 = t1922 + t1929;
  t1931 = t1930*t1834;
  t1937 = t1907 + t1931;
  t1992 = t1718*t1740*t1732;
  t1993 = -1.*t1718*t1761*t1814;
  t1995 = t1992 + t1993;
  t1976 = -1.*t1720*t1755;
  t1979 = t1718*t1732*t1761;
  t1980 = t1718*t1740*t1814;
  t1982 = t1979 + t1980;
  t1984 = t1982*t1834;
  t1990 = t1976 + t1984;
  t1849 = t1697*t1843;
  t1859 = t1854*t1858;
  t1867 = t1849 + t1859;
  t1875 = t1697*t1854;
  t1878 = -1.*t1843*t1858;
  t1896 = t1875 + t1878;
  t1938 = t1697*t1937;
  t1953 = t1949*t1858;
  t1954 = t1938 + t1953;
  t1958 = t1697*t1949;
  t1961 = -1.*t1937*t1858;
  t1962 = t1958 + t1961;
  t1991 = t1697*t1990;
  t1996 = t1995*t1858;
  t2001 = t1991 + t1996;
  t2003 = t1697*t1995;
  t2005 = -1.*t1990*t1858;
  t2006 = t2003 + t2005;
  p_output1[0]=t1649*t1867 - 1.*t1873*t1896;
  p_output1[1]=t1649*t1954 - 1.*t1873*t1962;
  p_output1[2]=t1649*t2001 - 1.*t1873*t2006;
  p_output1[3]=t1867*t1873 + t1649*t1896;
  p_output1[4]=t1873*t1954 + t1649*t1962;
  p_output1[5]=t1873*t2001 + t1649*t2006;
  p_output1[6]=-1.*t1720*t1831 + t1710*t1718*t1834;
  p_output1[7]=t1718*t1745*t1834 - 1.*t1720*t1930;
  p_output1[8]=-1.*t1755*t1834 - 1.*t1720*t1982;
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
