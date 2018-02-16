/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:15:12 GMT-05:00
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
  double t1489;
  double t1513;
  double t1525;
  double t1515;
  double t1526;
  double t1511;
  double t1549;
  double t1552;
  double t1554;
  double t1522;
  double t1535;
  double t1544;
  double t1556;
  double t1482;
  double t1574;
  double t1579;
  double t1580;
  double t1490;
  double t1498;
  double t1504;
  double t1545;
  double t1559;
  double t1561;
  double t1566;
  double t1568;
  double t1570;
  double t1581;
  double t1437;
  double t1621;
  double t1624;
  double t1625;
  double t1613;
  double t1617;
  double t1618;
  double t1596;
  double t1633;
  double t1635;
  double t1639;
  double t1610;
  double t1620;
  double t1626;
  double t1627;
  double t1628;
  double t1629;
  double t1674;
  double t1678;
  double t1682;
  double t1662;
  double t1664;
  double t1665;
  double t1668;
  double t1669;
  double t1670;
  double t1572;
  double t1584;
  double t1585;
  double t1599;
  double t1600;
  double t1601;
  double t1631;
  double t1642;
  double t1643;
  double t1650;
  double t1651;
  double t1654;
  double t1673;
  double t1684;
  double t1685;
  double t1691;
  double t1692;
  double t1693;
  double t1761;
  double t1762;
  double t1783;
  double t1785;
  double t1808;
  double t1809;
  double t1699;
  double t1700;
  double t1701;
  double t1733;
  double t1744;
  double t1748;
  double t1750;
  double t1757;
  double t1758;
  double t1763;
  double t1764;
  double t1765;
  double t1768;
  double t1769;
  double t1772;
  double t1786;
  double t1790;
  double t1795;
  double t1798;
  double t1800;
  double t1802;
  double t1812;
  double t1813;
  double t1814;
  double t1817;
  double t1818;
  double t1819;
  double t1704;
  double t1705;
  double t1706;
  double t1707;
  double t1709;
  double t1710;
  t1489 = Cos(var1[3]);
  t1513 = Cos(var1[5]);
  t1525 = Sin(var1[4]);
  t1515 = Sin(var1[3]);
  t1526 = Sin(var1[5]);
  t1511 = Cos(var1[6]);
  t1549 = t1489*t1513*t1525;
  t1552 = t1515*t1526;
  t1554 = t1549 + t1552;
  t1522 = -1.*t1513*t1515;
  t1535 = t1489*t1525*t1526;
  t1544 = t1522 + t1535;
  t1556 = Sin(var1[6]);
  t1482 = Cos(var1[8]);
  t1574 = t1511*t1554;
  t1579 = -1.*t1544*t1556;
  t1580 = t1574 + t1579;
  t1490 = Cos(var1[4]);
  t1498 = Cos(var1[7]);
  t1504 = t1489*t1490*t1498;
  t1545 = t1511*t1544;
  t1559 = t1554*t1556;
  t1561 = t1545 + t1559;
  t1566 = Sin(var1[7]);
  t1568 = t1561*t1566;
  t1570 = t1504 + t1568;
  t1581 = Sin(var1[8]);
  t1437 = Sin(var1[9]);
  t1621 = t1513*t1515*t1525;
  t1624 = -1.*t1489*t1526;
  t1625 = t1621 + t1624;
  t1613 = t1489*t1513;
  t1617 = t1515*t1525*t1526;
  t1618 = t1613 + t1617;
  t1596 = Cos(var1[9]);
  t1633 = t1511*t1625;
  t1635 = -1.*t1618*t1556;
  t1639 = t1633 + t1635;
  t1610 = t1490*t1498*t1515;
  t1620 = t1511*t1618;
  t1626 = t1625*t1556;
  t1627 = t1620 + t1626;
  t1628 = t1627*t1566;
  t1629 = t1610 + t1628;
  t1674 = t1490*t1513*t1511;
  t1678 = -1.*t1490*t1526*t1556;
  t1682 = t1674 + t1678;
  t1662 = -1.*t1498*t1525;
  t1664 = t1490*t1511*t1526;
  t1665 = t1490*t1513*t1556;
  t1668 = t1664 + t1665;
  t1669 = t1668*t1566;
  t1670 = t1662 + t1669;
  t1572 = t1482*t1570;
  t1584 = t1580*t1581;
  t1585 = t1572 + t1584;
  t1599 = t1482*t1580;
  t1600 = -1.*t1570*t1581;
  t1601 = t1599 + t1600;
  t1631 = t1482*t1629;
  t1642 = t1639*t1581;
  t1643 = t1631 + t1642;
  t1650 = t1482*t1639;
  t1651 = -1.*t1629*t1581;
  t1654 = t1650 + t1651;
  t1673 = t1482*t1670;
  t1684 = t1682*t1581;
  t1685 = t1673 + t1684;
  t1691 = t1482*t1682;
  t1692 = -1.*t1670*t1581;
  t1693 = t1691 + t1692;
  t1761 = -1.*t1498;
  t1762 = 1. + t1761;
  t1783 = -1.*t1482;
  t1785 = 1. + t1783;
  t1808 = -1.*t1596;
  t1809 = 1. + t1808;
  t1699 = t1596*t1585;
  t1700 = t1437*t1601;
  t1701 = t1699 + t1700;
  t1733 = -1.*t1511;
  t1744 = 1. + t1733;
  t1748 = 0.135*t1744;
  t1750 = 0. + t1748;
  t1757 = -0.135*t1556;
  t1758 = 0. + t1757;
  t1763 = 0.135*t1762;
  t1764 = 0.049*t1566;
  t1765 = 0. + t1763 + t1764;
  t1768 = -0.049*t1762;
  t1769 = 0.135*t1566;
  t1772 = 0. + t1768 + t1769;
  t1786 = -0.049*t1785;
  t1790 = -0.09*t1581;
  t1795 = 0. + t1786 + t1790;
  t1798 = -0.09*t1785;
  t1800 = 0.049*t1581;
  t1802 = 0. + t1798 + t1800;
  t1812 = -0.049*t1809;
  t1813 = -0.21*t1437;
  t1814 = 0. + t1812 + t1813;
  t1817 = -0.21*t1809;
  t1818 = 0.049*t1437;
  t1819 = 0. + t1817 + t1818;
  t1704 = t1596*t1643;
  t1705 = t1437*t1654;
  t1706 = t1704 + t1705;
  t1707 = t1596*t1685;
  t1709 = t1437*t1693;
  t1710 = t1707 + t1709;
  p_output1[0]=t1437*t1585 - 1.*t1596*t1601;
  p_output1[1]=t1437*t1643 - 1.*t1596*t1654;
  p_output1[2]=t1437*t1685 - 1.*t1596*t1693;
  p_output1[3]=0.;
  p_output1[4]=t1701;
  p_output1[5]=t1706;
  p_output1[6]=t1710;
  p_output1[7]=0.;
  p_output1[8]=-1.*t1498*t1561 + t1489*t1490*t1566;
  p_output1[9]=t1490*t1515*t1566 - 1.*t1498*t1627;
  p_output1[10]=-1.*t1525*t1566 - 1.*t1498*t1668;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.1305*(t1498*t1561 - 1.*t1489*t1490*t1566) - 0.21*(-1.*t1437*t1585 + t1596*t1601) - 0.049*t1701 + t1544*t1750 + t1554*t1758 + t1561*t1765 + t1489*t1490*t1772 + t1570*t1795 + t1580*t1802 + t1585*t1814 + t1601*t1819 + var1[0];
  p_output1[13]=0. + 0.1305*(-1.*t1490*t1515*t1566 + t1498*t1627) - 0.21*(-1.*t1437*t1643 + t1596*t1654) - 0.049*t1706 + t1618*t1750 + t1625*t1758 + t1627*t1765 + t1490*t1515*t1772 + t1629*t1795 + t1639*t1802 + t1643*t1814 + t1654*t1819 + var1[1];
  p_output1[14]=0. + 0.1305*(t1525*t1566 + t1498*t1668) - 0.21*(-1.*t1437*t1685 + t1596*t1693) - 0.049*t1710 + t1490*t1526*t1750 + t1490*t1513*t1758 + t1668*t1765 - 1.*t1525*t1772 + t1670*t1795 + t1682*t1802 + t1685*t1814 + t1693*t1819 + var1[2];
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
