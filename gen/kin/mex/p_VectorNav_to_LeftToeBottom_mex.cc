/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 12:16:01 GMT-04:00
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
  double t970;
  double t1269;
  double t1369;
  double t1372;
  double t1375;
  double t1388;
  double t1456;
  double t1476;
  double t1488;
  double t1491;
  double t1493;
  double t1504;
  double t1507;
  double t1509;
  double t1521;
  double t1524;
  double t1525;
  double t1528;
  double t1531;
  double t1532;
  double t1534;
  double t1543;
  double t1544;
  double t1545;
  double t1558;
  double t1561;
  double t1562;
  double t1565;
  double t1566;
  double t1567;
  double t1571;
  double t1577;
  double t1578;
  double t1579;
  double t1584;
  double t1585;
  double t1586;
  double t1598;
  double t1107;
  double t1252;
  double t1428;
  double t1446;
  double t1452;
  double t1454;
  double t1458;
  double t1459;
  double t1376;
  double t1420;
  double t1423;
  double t1608;
  double t1467;
  double t1472;
  double t1473;
  double t1492;
  double t1495;
  double t1499;
  double t1613;
  double t1614;
  double t1615;
  double t1617;
  double t1618;
  double t1619;
  double t1513;
  double t1515;
  double t1516;
  double t1533;
  double t1535;
  double t1540;
  double t1621;
  double t1622;
  double t1623;
  double t1625;
  double t1626;
  double t1627;
  double t1547;
  double t1548;
  double t1550;
  double t1570;
  double t1572;
  double t1574;
  double t1629;
  double t1630;
  double t1631;
  double t1633;
  double t1634;
  double t1635;
  double t1581;
  double t1582;
  double t1583;
  double t1637;
  double t1638;
  double t1639;
  double t1641;
  double t1642;
  double t1643;
  double t1603;
  double t1604;
  double t1605;
  double t1609;
  double t1610;
  double t1611;
  double t1659;
  double t1660;
  double t1661;
  double t1663;
  double t1664;
  double t1665;
  double t1667;
  double t1668;
  double t1669;
  double t1671;
  double t1672;
  double t1673;
  double t1675;
  double t1676;
  double t1677;
  double t1679;
  double t1680;
  double t1681;
  double t1683;
  double t1684;
  double t1685;
  double t1687;
  double t1688;
  double t1689;
  t970 = Cos(var1[1]);
  t1269 = Cos(var1[2]);
  t1369 = Cos(var1[3]);
  t1372 = -1.*t1369;
  t1375 = 1. + t1372;
  t1388 = Sin(var1[3]);
  t1456 = Sin(var1[2]);
  t1476 = Cos(var1[4]);
  t1488 = -1.*t1476;
  t1491 = 1. + t1488;
  t1493 = Sin(var1[4]);
  t1504 = -1.*t970*t1269*t1388;
  t1507 = -1.*t1369*t970*t1456;
  t1509 = t1504 + t1507;
  t1521 = t1369*t970*t1269;
  t1524 = -1.*t970*t1388*t1456;
  t1525 = t1521 + t1524;
  t1528 = Cos(var1[5]);
  t1531 = -1.*t1528;
  t1532 = 1. + t1531;
  t1534 = Sin(var1[5]);
  t1543 = t1493*t1509;
  t1544 = t1476*t1525;
  t1545 = t1543 + t1544;
  t1558 = t1476*t1509;
  t1561 = -1.*t1493*t1525;
  t1562 = t1558 + t1561;
  t1565 = Cos(var1[6]);
  t1566 = -1.*t1565;
  t1567 = 1. + t1566;
  t1571 = Sin(var1[6]);
  t1577 = -1.*t1534*t1545;
  t1578 = t1528*t1562;
  t1579 = t1577 + t1578;
  t1584 = t1528*t1545;
  t1585 = t1534*t1562;
  t1586 = t1584 + t1585;
  t1598 = Cos(var1[0]);
  t1107 = -1.*t970;
  t1252 = 1. + t1107;
  t1428 = Sin(var1[1]);
  t1446 = -1.*t1269;
  t1452 = 1. + t1446;
  t1454 = -0.049*t1452;
  t1458 = -0.09*t1456;
  t1459 = 0. + t1454 + t1458;
  t1376 = -0.049*t1375;
  t1420 = -0.21*t1388;
  t1423 = 0. + t1376 + t1420;
  t1608 = Sin(var1[0]);
  t1467 = -0.21*t1375;
  t1472 = 0.049*t1388;
  t1473 = 0. + t1467 + t1472;
  t1492 = -0.2707*t1491;
  t1495 = 0.0016*t1493;
  t1499 = 0. + t1492 + t1495;
  t1613 = t1598*t1269*t1428;
  t1614 = -1.*t1608*t1456;
  t1615 = t1613 + t1614;
  t1617 = -1.*t1269*t1608;
  t1618 = -1.*t1598*t1428*t1456;
  t1619 = t1617 + t1618;
  t1513 = -0.0016*t1491;
  t1515 = -0.2707*t1493;
  t1516 = 0. + t1513 + t1515;
  t1533 = 0.0184*t1532;
  t1535 = -0.7055*t1534;
  t1540 = 0. + t1533 + t1535;
  t1621 = -1.*t1388*t1615;
  t1622 = t1369*t1619;
  t1623 = t1621 + t1622;
  t1625 = t1369*t1615;
  t1626 = t1388*t1619;
  t1627 = t1625 + t1626;
  t1547 = -0.7055*t1532;
  t1548 = -0.0184*t1534;
  t1550 = 0. + t1547 + t1548;
  t1570 = -1.1135*t1567;
  t1572 = 0.0216*t1571;
  t1574 = 0. + t1570 + t1572;
  t1629 = t1493*t1623;
  t1630 = t1476*t1627;
  t1631 = t1629 + t1630;
  t1633 = t1476*t1623;
  t1634 = -1.*t1493*t1627;
  t1635 = t1633 + t1634;
  t1581 = -0.0216*t1567;
  t1582 = -1.1135*t1571;
  t1583 = 0. + t1581 + t1582;
  t1637 = -1.*t1534*t1631;
  t1638 = t1528*t1635;
  t1639 = t1637 + t1638;
  t1641 = t1528*t1631;
  t1642 = t1534*t1635;
  t1643 = t1641 + t1642;
  t1603 = 0.135*t1252;
  t1604 = 0.049*t1428;
  t1605 = 0. + t1603 + t1604;
  t1609 = -0.09*t1452;
  t1610 = 0.049*t1456;
  t1611 = 0. + t1609 + t1610;
  t1659 = t1269*t1608*t1428;
  t1660 = t1598*t1456;
  t1661 = t1659 + t1660;
  t1663 = t1598*t1269;
  t1664 = -1.*t1608*t1428*t1456;
  t1665 = t1663 + t1664;
  t1667 = -1.*t1388*t1661;
  t1668 = t1369*t1665;
  t1669 = t1667 + t1668;
  t1671 = t1369*t1661;
  t1672 = t1388*t1665;
  t1673 = t1671 + t1672;
  t1675 = t1493*t1669;
  t1676 = t1476*t1673;
  t1677 = t1675 + t1676;
  t1679 = t1476*t1669;
  t1680 = -1.*t1493*t1673;
  t1681 = t1679 + t1680;
  t1683 = -1.*t1534*t1677;
  t1684 = t1528*t1681;
  t1685 = t1683 + t1684;
  t1687 = t1528*t1677;
  t1688 = t1534*t1681;
  t1689 = t1687 + t1688;
  p_output1[0]=-0.03155 - 0.049*t1252 + 0.004500000000000004*t1428 + t1499*t1509 + t1516*t1525 + t1540*t1545 + t1550*t1562 + t1574*t1579 + t1583*t1586 + 0.0306*(t1571*t1579 + t1565*t1586) - 1.1312*(t1565*t1579 - 1.*t1571*t1586) + t1269*t1423*t970 + t1459*t970 - 1.*t1456*t1473*t970;
  p_output1[1]=0. - 0.135*(1. - 1.*t1598) - 1.*t1428*t1459*t1598 - 1.*t1598*t1605 + t1608*t1611 - 1.*t1423*t1615 - 1.*t1473*t1619 - 1.*t1499*t1623 - 1.*t1516*t1627 - 1.*t1540*t1631 - 1.*t1550*t1635 - 1.*t1574*t1639 - 1.*t1583*t1643 - 0.0306*(t1571*t1639 + t1565*t1643) + 1.1312*(t1565*t1639 - 1.*t1571*t1643) - 0.1305*t1598*t970;
  p_output1[2]=-0.07996 + 0.135*t1608 - 1.*t1428*t1459*t1608 - 1.*t1605*t1608 - 1.*t1598*t1611 - 1.*t1423*t1661 - 1.*t1473*t1665 - 1.*t1499*t1669 - 1.*t1516*t1673 - 1.*t1540*t1677 - 1.*t1550*t1681 - 1.*t1574*t1685 - 1.*t1583*t1689 - 0.0306*(t1571*t1685 + t1565*t1689) + 1.1312*(t1565*t1685 - 1.*t1571*t1689) - 0.1305*t1608*t970;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "p_VectorNav_to_LeftToeBottom_mex.hh"

namespace SymExpression
{

void p_VectorNav_to_LeftToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
