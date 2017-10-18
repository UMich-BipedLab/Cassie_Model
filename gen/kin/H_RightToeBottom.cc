/*
 * Automatically Generated from Mathematica.
 * Tue 17 Oct 2017 12:27:50 GMT-04:00
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
  double t1252;
  double t1332;
  double t1353;
  double t1334;
  double t1355;
  double t1394;
  double t1352;
  double t1361;
  double t1376;
  double t1326;
  double t1396;
  double t1409;
  double t1412;
  double t1268;
  double t1284;
  double t1306;
  double t1315;
  double t1429;
  double t1459;
  double t1462;
  double t1463;
  double t1469;
  double t1470;
  double t1471;
  double t1379;
  double t1417;
  double t1420;
  double t1445;
  double t1448;
  double t1449;
  double t1427;
  double t1452;
  double t1453;
  double t1557;
  double t1546;
  double t1547;
  double t1548;
  double t1545;
  double t1562;
  double t1563;
  double t1565;
  double t1571;
  double t1550;
  double t1566;
  double t1568;
  double t1543;
  double t1572;
  double t1573;
  double t1579;
  double t1592;
  double t1569;
  double t1581;
  double t1587;
  double t1539;
  double t1594;
  double t1598;
  double t1599;
  double t1605;
  double t1591;
  double t1600;
  double t1601;
  double t1537;
  double t1607;
  double t1608;
  double t1609;
  double t1614;
  double t1604;
  double t1611;
  double t1612;
  double t1535;
  double t1615;
  double t1616;
  double t1617;
  double t1466;
  double t1473;
  double t1475;
  double t1481;
  double t1482;
  double t1483;
  double t1479;
  double t1485;
  double t1497;
  double t1632;
  double t1634;
  double t1635;
  double t1638;
  double t1642;
  double t1643;
  double t1637;
  double t1644;
  double t1645;
  double t1648;
  double t1649;
  double t1652;
  double t1646;
  double t1653;
  double t1654;
  double t1656;
  double t1658;
  double t1659;
  double t1655;
  double t1660;
  double t1662;
  double t1665;
  double t1666;
  double t1668;
  double t1663;
  double t1669;
  double t1670;
  double t1672;
  double t1674;
  double t1675;
  double t1503;
  double t1507;
  double t1508;
  double t1513;
  double t1515;
  double t1517;
  double t1510;
  double t1520;
  double t1528;
  double t1688;
  double t1690;
  double t1691;
  double t1693;
  double t1694;
  double t1695;
  double t1692;
  double t1696;
  double t1697;
  double t1699;
  double t1700;
  double t1701;
  double t1698;
  double t1702;
  double t1703;
  double t1706;
  double t1707;
  double t1709;
  double t1704;
  double t1710;
  double t1712;
  double t1714;
  double t1715;
  double t1716;
  double t1713;
  double t1717;
  double t1718;
  double t1720;
  double t1721;
  double t1722;
  double t1613;
  double t1618;
  double t1619;
  double t1624;
  double t1625;
  double t1626;
  double t1671;
  double t1676;
  double t1678;
  double t1681;
  double t1682;
  double t1684;
  double t1719;
  double t1724;
  double t1726;
  double t1728;
  double t1730;
  double t1731;
  double t1747;
  double t1749;
  double t1773;
  double t1774;
  double t1791;
  double t1792;
  double t1801;
  double t1802;
  double t1811;
  double t1812;
  double t1821;
  double t1822;
  double t1750;
  double t1752;
  double t1754;
  double t1756;
  double t1758;
  double t1760;
  double t1761;
  double t1762;
  double t1763;
  double t1765;
  double t1766;
  double t1767;
  double t1768;
  double t1770;
  double t1771;
  double t1775;
  double t1776;
  double t1777;
  double t1779;
  double t1780;
  double t1781;
  double t1787;
  double t1788;
  double t1789;
  double t1793;
  double t1794;
  double t1795;
  double t1797;
  double t1798;
  double t1799;
  double t1803;
  double t1804;
  double t1805;
  double t1807;
  double t1808;
  double t1809;
  double t1813;
  double t1814;
  double t1815;
  double t1817;
  double t1818;
  double t1819;
  double t1823;
  double t1824;
  double t1825;
  double t1827;
  double t1828;
  double t1829;
  t1252 = Cos(var1[3]);
  t1332 = Cos(var1[5]);
  t1353 = Sin(var1[3]);
  t1334 = Sin(var1[4]);
  t1355 = Sin(var1[5]);
  t1394 = Cos(var1[14]);
  t1352 = t1252*t1332*t1334;
  t1361 = t1353*t1355;
  t1376 = t1352 + t1361;
  t1326 = Sin(var1[14]);
  t1396 = -1.*t1332*t1353;
  t1409 = t1252*t1334*t1355;
  t1412 = t1396 + t1409;
  t1268 = Cos(var1[4]);
  t1284 = Sin(var1[16]);
  t1306 = Cos(var1[16]);
  t1315 = Cos(var1[15]);
  t1429 = Sin(var1[15]);
  t1459 = t1332*t1353*t1334;
  t1462 = -1.*t1252*t1355;
  t1463 = t1459 + t1462;
  t1469 = t1252*t1332;
  t1470 = t1353*t1334*t1355;
  t1471 = t1469 + t1470;
  t1379 = t1326*t1376;
  t1417 = t1394*t1412;
  t1420 = t1379 + t1417;
  t1445 = t1394*t1376;
  t1448 = -1.*t1326*t1412;
  t1449 = t1445 + t1448;
  t1427 = t1315*t1420;
  t1452 = t1429*t1449;
  t1453 = t1427 + t1452;
  t1557 = Cos(var1[17]);
  t1546 = -1.*t1429*t1420;
  t1547 = t1315*t1449;
  t1548 = t1546 + t1547;
  t1545 = Sin(var1[17]);
  t1562 = t1306*t1252*t1268;
  t1563 = t1284*t1453;
  t1565 = t1562 + t1563;
  t1571 = Cos(var1[18]);
  t1550 = t1545*t1548;
  t1566 = t1557*t1565;
  t1568 = t1550 + t1566;
  t1543 = Sin(var1[18]);
  t1572 = t1557*t1548;
  t1573 = -1.*t1545*t1565;
  t1579 = t1572 + t1573;
  t1592 = Cos(var1[19]);
  t1569 = -1.*t1543*t1568;
  t1581 = t1571*t1579;
  t1587 = t1569 + t1581;
  t1539 = Sin(var1[19]);
  t1594 = t1571*t1568;
  t1598 = t1543*t1579;
  t1599 = t1594 + t1598;
  t1605 = Cos(var1[20]);
  t1591 = t1539*t1587;
  t1600 = t1592*t1599;
  t1601 = t1591 + t1600;
  t1537 = Sin(var1[20]);
  t1607 = t1592*t1587;
  t1608 = -1.*t1539*t1599;
  t1609 = t1607 + t1608;
  t1614 = Cos(var1[21]);
  t1604 = -1.*t1537*t1601;
  t1611 = t1605*t1609;
  t1612 = t1604 + t1611;
  t1535 = Sin(var1[21]);
  t1615 = t1605*t1601;
  t1616 = t1537*t1609;
  t1617 = t1615 + t1616;
  t1466 = t1326*t1463;
  t1473 = t1394*t1471;
  t1475 = t1466 + t1473;
  t1481 = t1394*t1463;
  t1482 = -1.*t1326*t1471;
  t1483 = t1481 + t1482;
  t1479 = t1315*t1475;
  t1485 = t1429*t1483;
  t1497 = t1479 + t1485;
  t1632 = -1.*t1429*t1475;
  t1634 = t1315*t1483;
  t1635 = t1632 + t1634;
  t1638 = t1306*t1268*t1353;
  t1642 = t1284*t1497;
  t1643 = t1638 + t1642;
  t1637 = t1545*t1635;
  t1644 = t1557*t1643;
  t1645 = t1637 + t1644;
  t1648 = t1557*t1635;
  t1649 = -1.*t1545*t1643;
  t1652 = t1648 + t1649;
  t1646 = -1.*t1543*t1645;
  t1653 = t1571*t1652;
  t1654 = t1646 + t1653;
  t1656 = t1571*t1645;
  t1658 = t1543*t1652;
  t1659 = t1656 + t1658;
  t1655 = t1539*t1654;
  t1660 = t1592*t1659;
  t1662 = t1655 + t1660;
  t1665 = t1592*t1654;
  t1666 = -1.*t1539*t1659;
  t1668 = t1665 + t1666;
  t1663 = -1.*t1537*t1662;
  t1669 = t1605*t1668;
  t1670 = t1663 + t1669;
  t1672 = t1605*t1662;
  t1674 = t1537*t1668;
  t1675 = t1672 + t1674;
  t1503 = t1268*t1332*t1326;
  t1507 = t1394*t1268*t1355;
  t1508 = t1503 + t1507;
  t1513 = t1394*t1268*t1332;
  t1515 = -1.*t1268*t1326*t1355;
  t1517 = t1513 + t1515;
  t1510 = t1315*t1508;
  t1520 = t1429*t1517;
  t1528 = t1510 + t1520;
  t1688 = -1.*t1429*t1508;
  t1690 = t1315*t1517;
  t1691 = t1688 + t1690;
  t1693 = -1.*t1306*t1334;
  t1694 = t1284*t1528;
  t1695 = t1693 + t1694;
  t1692 = t1545*t1691;
  t1696 = t1557*t1695;
  t1697 = t1692 + t1696;
  t1699 = t1557*t1691;
  t1700 = -1.*t1545*t1695;
  t1701 = t1699 + t1700;
  t1698 = -1.*t1543*t1697;
  t1702 = t1571*t1701;
  t1703 = t1698 + t1702;
  t1706 = t1571*t1697;
  t1707 = t1543*t1701;
  t1709 = t1706 + t1707;
  t1704 = t1539*t1703;
  t1710 = t1592*t1709;
  t1712 = t1704 + t1710;
  t1714 = t1592*t1703;
  t1715 = -1.*t1539*t1709;
  t1716 = t1714 + t1715;
  t1713 = -1.*t1537*t1712;
  t1717 = t1605*t1716;
  t1718 = t1713 + t1717;
  t1720 = t1605*t1712;
  t1721 = t1537*t1716;
  t1722 = t1720 + t1721;
  t1613 = t1535*t1612;
  t1618 = t1614*t1617;
  t1619 = t1613 + t1618;
  t1624 = t1614*t1612;
  t1625 = -1.*t1535*t1617;
  t1626 = t1624 + t1625;
  t1671 = t1535*t1670;
  t1676 = t1614*t1675;
  t1678 = t1671 + t1676;
  t1681 = t1614*t1670;
  t1682 = -1.*t1535*t1675;
  t1684 = t1681 + t1682;
  t1719 = t1535*t1718;
  t1724 = t1614*t1722;
  t1726 = t1719 + t1724;
  t1728 = t1614*t1718;
  t1730 = -1.*t1535*t1722;
  t1731 = t1728 + t1730;
  t1747 = -1.*t1306;
  t1749 = 1. + t1747;
  t1773 = -1.*t1557;
  t1774 = 1. + t1773;
  t1791 = -1.*t1571;
  t1792 = 1. + t1791;
  t1801 = -1.*t1592;
  t1802 = 1. + t1801;
  t1811 = -1.*t1605;
  t1812 = 1. + t1811;
  t1821 = -1.*t1614;
  t1822 = 1. + t1821;
  t1750 = -0.049*t1749;
  t1752 = -0.135*t1284;
  t1754 = 0. + t1750 + t1752;
  t1756 = 0.135*t1326;
  t1758 = 0. + t1756;
  t1760 = -1.*t1394;
  t1761 = 1. + t1760;
  t1762 = -0.135*t1761;
  t1763 = 0. + t1762;
  t1765 = -1.*t1315;
  t1766 = 1. + t1765;
  t1767 = -0.135*t1766;
  t1768 = 0. + t1767;
  t1770 = 0.135*t1429;
  t1771 = 0. + t1770;
  t1775 = -0.09*t1774;
  t1776 = 0.049*t1545;
  t1777 = 0. + t1775 + t1776;
  t1779 = -0.135*t1749;
  t1780 = 0.049*t1284;
  t1781 = 0. + t1779 + t1780;
  t1787 = -0.049*t1774;
  t1788 = -0.09*t1545;
  t1789 = 0. + t1787 + t1788;
  t1793 = -0.049*t1792;
  t1794 = -0.21*t1543;
  t1795 = 0. + t1793 + t1794;
  t1797 = -0.21*t1792;
  t1798 = 0.049*t1543;
  t1799 = 0. + t1797 + t1798;
  t1803 = -0.2707*t1802;
  t1804 = 0.0016*t1539;
  t1805 = 0. + t1803 + t1804;
  t1807 = -0.0016*t1802;
  t1808 = -0.2707*t1539;
  t1809 = 0. + t1807 + t1808;
  t1813 = 0.0184*t1812;
  t1814 = -0.7055*t1537;
  t1815 = 0. + t1813 + t1814;
  t1817 = -0.7055*t1812;
  t1818 = -0.0184*t1537;
  t1819 = 0. + t1817 + t1818;
  t1823 = -1.1135*t1822;
  t1824 = 0.0216*t1535;
  t1825 = 0. + t1823 + t1824;
  t1827 = -0.0216*t1822;
  t1828 = -1.1135*t1535;
  t1829 = 0. + t1827 + t1828;
  p_output1[0]=t1252*t1268*t1284 - 1.*t1306*t1453;
  p_output1[1]=t1268*t1284*t1353 - 1.*t1306*t1497;
  p_output1[2]=-1.*t1284*t1334 - 1.*t1306*t1528;
  p_output1[3]=0.;
  p_output1[4]=0.642788*t1619 + 0.766044*t1626;
  p_output1[5]=0.642788*t1678 + 0.766044*t1684;
  p_output1[6]=0.642788*t1726 + 0.766044*t1731;
  p_output1[7]=0.;
  p_output1[8]=-0.766044*t1619 + 0.642788*t1626;
  p_output1[9]=-0.766044*t1678 + 0.642788*t1684;
  p_output1[10]=-0.766044*t1726 + 0.642788*t1731;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.1305*(-1.*t1252*t1268*t1284 + t1306*t1453) + 0.0306*t1619 - 1.1312*t1626 + t1252*t1268*t1754 + t1376*t1758 + t1412*t1763 + t1420*t1768 + t1449*t1771 + t1548*t1777 + t1453*t1781 + t1565*t1789 + t1568*t1795 + t1579*t1799 + t1587*t1805 + t1599*t1809 + t1601*t1815 + t1609*t1819 + t1612*t1825 + t1617*t1829 + var1[0];
  p_output1[13]=0. - 0.1305*(-1.*t1268*t1284*t1353 + t1306*t1497) + 0.0306*t1678 - 1.1312*t1684 + t1268*t1353*t1754 + t1463*t1758 + t1471*t1763 + t1475*t1768 + t1483*t1771 + t1635*t1777 + t1497*t1781 + t1643*t1789 + t1645*t1795 + t1652*t1799 + t1654*t1805 + t1659*t1809 + t1662*t1815 + t1668*t1819 + t1670*t1825 + t1675*t1829 + var1[1];
  p_output1[14]=0. - 0.1305*(t1284*t1334 + t1306*t1528) + 0.0306*t1726 - 1.1312*t1731 - 1.*t1334*t1754 + t1268*t1332*t1758 + t1268*t1355*t1763 + t1508*t1768 + t1517*t1771 + t1691*t1777 + t1528*t1781 + t1695*t1789 + t1697*t1795 + t1701*t1799 + t1703*t1805 + t1709*t1809 + t1712*t1815 + t1716*t1819 + t1718*t1825 + t1722*t1829 + var1[2];
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
    ( !(mrows == 22 && ncols == 1) && 
      !(mrows == 1 && ncols == 22))) 
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

#include "H_RightToeBottom.hh"

namespace SymExpression
{

void H_RightToeBottom_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
