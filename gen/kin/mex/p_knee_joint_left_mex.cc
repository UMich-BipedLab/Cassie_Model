/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:11:03 GMT-05:00
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
  double t1664;
  double t1659;
  double t1666;
  double t1662;
  double t1676;
  double t1618;
  double t1663;
  double t1677;
  double t1678;
  double t1683;
  double t1684;
  double t1689;
  double t1690;
  double t1699;
  double t1700;
  double t1703;
  double t1705;
  double t1695;
  double t1696;
  double t1697;
  double t1709;
  double t1725;
  double t1727;
  double t1728;
  double t1732;
  double t1720;
  double t1723;
  double t1724;
  double t1736;
  double t1737;
  double t1738;
  double t1640;
  double t1642;
  double t1649;
  double t1657;
  double t1691;
  double t1692;
  double t1759;
  double t1760;
  double t1761;
  double t1763;
  double t1764;
  double t1765;
  double t1704;
  double t1706;
  double t1707;
  double t1710;
  double t1711;
  double t1712;
  double t1767;
  double t1768;
  double t1769;
  double t1731;
  double t1733;
  double t1734;
  double t1739;
  double t1740;
  double t1741;
  double t1776;
  double t1778;
  double t1779;
  double t1782;
  double t1783;
  double t1784;
  double t1802;
  double t1804;
  double t1805;
  double t1815;
  double t1817;
  double t1818;
  double t1821;
  double t1822;
  double t1824;
  t1664 = Cos(var1[3]);
  t1659 = Cos(var1[5]);
  t1666 = Sin(var1[4]);
  t1662 = Sin(var1[3]);
  t1676 = Sin(var1[5]);
  t1618 = Cos(var1[6]);
  t1663 = -1.*t1659*t1662;
  t1677 = t1664*t1666*t1676;
  t1678 = t1663 + t1677;
  t1683 = t1664*t1659*t1666;
  t1684 = t1662*t1676;
  t1689 = t1683 + t1684;
  t1690 = Sin(var1[6]);
  t1699 = Cos(var1[7]);
  t1700 = -1.*t1699;
  t1703 = 1. + t1700;
  t1705 = Sin(var1[7]);
  t1695 = t1618*t1678;
  t1696 = t1689*t1690;
  t1697 = t1695 + t1696;
  t1709 = Cos(var1[4]);
  t1725 = Cos(var1[8]);
  t1727 = -1.*t1725;
  t1728 = 1. + t1727;
  t1732 = Sin(var1[8]);
  t1720 = t1664*t1709*t1699;
  t1723 = t1697*t1705;
  t1724 = t1720 + t1723;
  t1736 = t1618*t1689;
  t1737 = -1.*t1678*t1690;
  t1738 = t1736 + t1737;
  t1640 = -1.*t1618;
  t1642 = 1. + t1640;
  t1649 = 0.135*t1642;
  t1657 = 0. + t1649;
  t1691 = -0.135*t1690;
  t1692 = 0. + t1691;
  t1759 = t1664*t1659;
  t1760 = t1662*t1666*t1676;
  t1761 = t1759 + t1760;
  t1763 = t1659*t1662*t1666;
  t1764 = -1.*t1664*t1676;
  t1765 = t1763 + t1764;
  t1704 = 0.135*t1703;
  t1706 = 0.049*t1705;
  t1707 = 0. + t1704 + t1706;
  t1710 = -0.049*t1703;
  t1711 = 0.135*t1705;
  t1712 = 0. + t1710 + t1711;
  t1767 = t1618*t1761;
  t1768 = t1765*t1690;
  t1769 = t1767 + t1768;
  t1731 = -0.049*t1728;
  t1733 = -0.09*t1732;
  t1734 = 0. + t1731 + t1733;
  t1739 = -0.09*t1728;
  t1740 = 0.049*t1732;
  t1741 = 0. + t1739 + t1740;
  t1776 = t1709*t1699*t1662;
  t1778 = t1769*t1705;
  t1779 = t1776 + t1778;
  t1782 = t1618*t1765;
  t1783 = -1.*t1761*t1690;
  t1784 = t1782 + t1783;
  t1802 = t1709*t1618*t1676;
  t1804 = t1709*t1659*t1690;
  t1805 = t1802 + t1804;
  t1815 = -1.*t1699*t1666;
  t1817 = t1805*t1705;
  t1818 = t1815 + t1817;
  t1821 = t1709*t1659*t1618;
  t1822 = -1.*t1709*t1676*t1690;
  t1824 = t1821 + t1822;
  p_output1[0]=0. + t1657*t1678 + t1689*t1692 + t1697*t1707 + 0.1305*(t1697*t1699 - 1.*t1664*t1705*t1709) + t1664*t1709*t1712 + t1724*t1734 - 0.21*(-1.*t1724*t1732 + t1725*t1738) - 0.049*(t1724*t1725 + t1732*t1738) + t1738*t1741 + var1[0];
  p_output1[1]=0. + t1662*t1709*t1712 + t1657*t1761 + t1692*t1765 + t1707*t1769 + 0.1305*(-1.*t1662*t1705*t1709 + t1699*t1769) + t1734*t1779 + t1741*t1784 - 0.21*(-1.*t1732*t1779 + t1725*t1784) - 0.049*(t1725*t1779 + t1732*t1784) + var1[1];
  p_output1[2]=0. + t1657*t1676*t1709 + t1659*t1692*t1709 - 1.*t1666*t1712 + t1707*t1805 + 0.1305*(t1666*t1705 + t1699*t1805) + t1734*t1818 + t1741*t1824 - 0.21*(-1.*t1732*t1818 + t1725*t1824) - 0.049*(t1725*t1818 + t1732*t1824) + var1[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "p_knee_joint_left_mex.hh"

namespace SymExpression
{

void p_knee_joint_left_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
