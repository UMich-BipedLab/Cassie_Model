/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:08 GMT-05:00
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
  double t1525;
  double t1549;
  double t1561;
  double t1551;
  double t1562;
  double t1547;
  double t1585;
  double t1588;
  double t1590;
  double t1558;
  double t1571;
  double t1580;
  double t1592;
  double t1518;
  double t1610;
  double t1615;
  double t1616;
  double t1526;
  double t1534;
  double t1540;
  double t1581;
  double t1595;
  double t1597;
  double t1602;
  double t1604;
  double t1606;
  double t1617;
  double t1473;
  double t1657;
  double t1660;
  double t1661;
  double t1649;
  double t1653;
  double t1654;
  double t1632;
  double t1669;
  double t1671;
  double t1675;
  double t1646;
  double t1656;
  double t1662;
  double t1663;
  double t1664;
  double t1665;
  double t1710;
  double t1714;
  double t1718;
  double t1698;
  double t1700;
  double t1701;
  double t1704;
  double t1705;
  double t1706;
  double t1608;
  double t1620;
  double t1621;
  double t1635;
  double t1636;
  double t1637;
  double t1667;
  double t1678;
  double t1679;
  double t1686;
  double t1687;
  double t1690;
  double t1709;
  double t1720;
  double t1721;
  double t1727;
  double t1728;
  double t1729;
  double t1797;
  double t1798;
  double t1819;
  double t1821;
  double t1844;
  double t1845;
  double t1735;
  double t1736;
  double t1737;
  double t1769;
  double t1780;
  double t1784;
  double t1786;
  double t1793;
  double t1794;
  double t1799;
  double t1800;
  double t1801;
  double t1804;
  double t1805;
  double t1808;
  double t1822;
  double t1826;
  double t1831;
  double t1834;
  double t1836;
  double t1838;
  double t1848;
  double t1849;
  double t1850;
  double t1853;
  double t1854;
  double t1855;
  double t1740;
  double t1741;
  double t1742;
  double t1743;
  double t1745;
  double t1746;
  t1525 = Cos(var1[3]);
  t1549 = Cos(var1[5]);
  t1561 = Sin(var1[4]);
  t1551 = Sin(var1[3]);
  t1562 = Sin(var1[5]);
  t1547 = Cos(var1[6]);
  t1585 = t1525*t1549*t1561;
  t1588 = t1551*t1562;
  t1590 = t1585 + t1588;
  t1558 = -1.*t1549*t1551;
  t1571 = t1525*t1561*t1562;
  t1580 = t1558 + t1571;
  t1592 = Sin(var1[6]);
  t1518 = Cos(var1[8]);
  t1610 = t1547*t1590;
  t1615 = -1.*t1580*t1592;
  t1616 = t1610 + t1615;
  t1526 = Cos(var1[4]);
  t1534 = Cos(var1[7]);
  t1540 = t1525*t1526*t1534;
  t1581 = t1547*t1580;
  t1595 = t1590*t1592;
  t1597 = t1581 + t1595;
  t1602 = Sin(var1[7]);
  t1604 = t1597*t1602;
  t1606 = t1540 + t1604;
  t1617 = Sin(var1[8]);
  t1473 = Sin(var1[9]);
  t1657 = t1549*t1551*t1561;
  t1660 = -1.*t1525*t1562;
  t1661 = t1657 + t1660;
  t1649 = t1525*t1549;
  t1653 = t1551*t1561*t1562;
  t1654 = t1649 + t1653;
  t1632 = Cos(var1[9]);
  t1669 = t1547*t1661;
  t1671 = -1.*t1654*t1592;
  t1675 = t1669 + t1671;
  t1646 = t1526*t1534*t1551;
  t1656 = t1547*t1654;
  t1662 = t1661*t1592;
  t1663 = t1656 + t1662;
  t1664 = t1663*t1602;
  t1665 = t1646 + t1664;
  t1710 = t1526*t1549*t1547;
  t1714 = -1.*t1526*t1562*t1592;
  t1718 = t1710 + t1714;
  t1698 = -1.*t1534*t1561;
  t1700 = t1526*t1547*t1562;
  t1701 = t1526*t1549*t1592;
  t1704 = t1700 + t1701;
  t1705 = t1704*t1602;
  t1706 = t1698 + t1705;
  t1608 = t1518*t1606;
  t1620 = t1616*t1617;
  t1621 = t1608 + t1620;
  t1635 = t1518*t1616;
  t1636 = -1.*t1606*t1617;
  t1637 = t1635 + t1636;
  t1667 = t1518*t1665;
  t1678 = t1675*t1617;
  t1679 = t1667 + t1678;
  t1686 = t1518*t1675;
  t1687 = -1.*t1665*t1617;
  t1690 = t1686 + t1687;
  t1709 = t1518*t1706;
  t1720 = t1718*t1617;
  t1721 = t1709 + t1720;
  t1727 = t1518*t1718;
  t1728 = -1.*t1706*t1617;
  t1729 = t1727 + t1728;
  t1797 = -1.*t1534;
  t1798 = 1. + t1797;
  t1819 = -1.*t1518;
  t1821 = 1. + t1819;
  t1844 = -1.*t1632;
  t1845 = 1. + t1844;
  t1735 = t1632*t1621;
  t1736 = t1473*t1637;
  t1737 = t1735 + t1736;
  t1769 = -1.*t1547;
  t1780 = 1. + t1769;
  t1784 = 0.135*t1780;
  t1786 = 0. + t1784;
  t1793 = -0.135*t1592;
  t1794 = 0. + t1793;
  t1799 = 0.135*t1798;
  t1800 = 0.049*t1602;
  t1801 = 0. + t1799 + t1800;
  t1804 = -0.049*t1798;
  t1805 = 0.135*t1602;
  t1808 = 0. + t1804 + t1805;
  t1822 = -0.049*t1821;
  t1826 = -0.09*t1617;
  t1831 = 0. + t1822 + t1826;
  t1834 = -0.09*t1821;
  t1836 = 0.049*t1617;
  t1838 = 0. + t1834 + t1836;
  t1848 = -0.049*t1845;
  t1849 = -0.21*t1473;
  t1850 = 0. + t1848 + t1849;
  t1853 = -0.21*t1845;
  t1854 = 0.049*t1473;
  t1855 = 0. + t1853 + t1854;
  t1740 = t1632*t1679;
  t1741 = t1473*t1690;
  t1742 = t1740 + t1741;
  t1743 = t1632*t1721;
  t1745 = t1473*t1729;
  t1746 = t1743 + t1745;
  p_output1[0]=t1473*t1621 - 1.*t1632*t1637;
  p_output1[1]=t1473*t1679 - 1.*t1632*t1690;
  p_output1[2]=t1473*t1721 - 1.*t1632*t1729;
  p_output1[3]=0.;
  p_output1[4]=t1737;
  p_output1[5]=t1742;
  p_output1[6]=t1746;
  p_output1[7]=0.;
  p_output1[8]=-1.*t1534*t1597 + t1525*t1526*t1602;
  p_output1[9]=t1526*t1551*t1602 - 1.*t1534*t1663;
  p_output1[10]=-1.*t1561*t1602 - 1.*t1534*t1704;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.1305*(t1534*t1597 - 1.*t1525*t1526*t1602) - 0.21*(-1.*t1473*t1621 + t1632*t1637) - 0.049*t1737 + t1580*t1786 + t1590*t1794 + t1597*t1801 + t1525*t1526*t1808 + t1606*t1831 + t1616*t1838 + t1621*t1850 + t1637*t1855 + var1[0];
  p_output1[13]=0. + 0.1305*(-1.*t1526*t1551*t1602 + t1534*t1663) - 0.21*(-1.*t1473*t1679 + t1632*t1690) - 0.049*t1742 + t1654*t1786 + t1661*t1794 + t1663*t1801 + t1526*t1551*t1808 + t1665*t1831 + t1675*t1838 + t1679*t1850 + t1690*t1855 + var1[1];
  p_output1[14]=0. + 0.1305*(t1561*t1602 + t1534*t1704) - 0.21*(-1.*t1473*t1721 + t1632*t1729) - 0.049*t1746 + t1526*t1562*t1786 + t1526*t1549*t1794 + t1704*t1801 - 1.*t1561*t1808 + t1706*t1831 + t1718*t1838 + t1721*t1850 + t1729*t1855 + var1[2];
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
