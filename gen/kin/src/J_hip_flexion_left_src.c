/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:10:59 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "J_hip_flexion_left_src.h"

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
  double t1192;
  double t1197;
  double t1200;
  double t1189;
  double t1201;
  double t1096;
  double t1218;
  double t1225;
  double t1228;
  double t1196;
  double t1204;
  double t1212;
  double t1231;
  double t1256;
  double t1259;
  double t1260;
  double t1265;
  double t1248;
  double t1249;
  double t1252;
  double t1275;
  double t1141;
  double t1154;
  double t1172;
  double t1181;
  double t1235;
  double t1236;
  double t1309;
  double t1312;
  double t1313;
  double t1298;
  double t1300;
  double t1303;
  double t1264;
  double t1268;
  double t1271;
  double t1279;
  double t1280;
  double t1283;
  double t1327;
  double t1328;
  double t1330;
  double t1362;
  double t1363;
  double t1365;
  double t1399;
  double t1400;
  double t1405;
  double t1439;
  double t1442;
  double t1445;
  double t1472;
  double t1473;
  double t1474;
  double t1318;
  double t1492;
  double t1493;
  double t1507;
  double t1508;
  double t1510;
  double t1521;
  double t1522;
  double t1523;
  double t1540;
  double t1542;
  double t1545;
  double t1484;
  double t1319;
  double t1320;
  double t1566;
  double t1569;
  double t1570;
  double t1514;
  double t1575;
  double t1576;
  double t1531;
  double t1532;
  double t1534;
  double t1536;
  double t1546;
  double t1547;
  double t1549;
  double t1334;
  double t1336;
  double t1339;
  double t1584;
  double t1585;
  double t1586;
  double t1589;
  double t1591;
  double t1604;
  double t1605;
  double t1606;
  double t1293;
  double t1618;
  double t1621;
  double t1623;
  t1192 = Cos(var1[5]);
  t1197 = Sin(var1[3]);
  t1200 = Sin(var1[4]);
  t1189 = Cos(var1[3]);
  t1201 = Sin(var1[5]);
  t1096 = Cos(var1[6]);
  t1218 = -1.*t1192*t1197*t1200;
  t1225 = t1189*t1201;
  t1228 = t1218 + t1225;
  t1196 = -1.*t1189*t1192;
  t1204 = -1.*t1197*t1200*t1201;
  t1212 = t1196 + t1204;
  t1231 = Sin(var1[6]);
  t1256 = Cos(var1[7]);
  t1259 = -1.*t1256;
  t1260 = 1. + t1259;
  t1265 = Sin(var1[7]);
  t1248 = t1096*t1212;
  t1249 = t1228*t1231;
  t1252 = t1248 + t1249;
  t1275 = Cos(var1[4]);
  t1141 = -1.*t1096;
  t1154 = 1. + t1141;
  t1172 = 0.135*t1154;
  t1181 = 0. + t1172;
  t1235 = -0.135*t1231;
  t1236 = 0. + t1235;
  t1309 = t1189*t1192*t1200;
  t1312 = t1197*t1201;
  t1313 = t1309 + t1312;
  t1298 = -1.*t1192*t1197;
  t1300 = t1189*t1200*t1201;
  t1303 = t1298 + t1300;
  t1264 = 0.135*t1260;
  t1268 = 0.049*t1265;
  t1271 = 0. + t1264 + t1268;
  t1279 = -0.049*t1260;
  t1280 = 0.135*t1265;
  t1283 = 0. + t1279 + t1280;
  t1327 = t1096*t1303;
  t1328 = t1313*t1231;
  t1330 = t1327 + t1328;
  t1362 = t1189*t1275*t1096*t1201;
  t1363 = t1189*t1275*t1192*t1231;
  t1365 = t1362 + t1363;
  t1399 = t1275*t1096*t1197*t1201;
  t1400 = t1275*t1192*t1197*t1231;
  t1405 = t1399 + t1400;
  t1439 = -1.*t1096*t1200*t1201;
  t1442 = -1.*t1192*t1200*t1231;
  t1445 = t1439 + t1442;
  t1472 = t1192*t1197;
  t1473 = -1.*t1189*t1200*t1201;
  t1474 = t1472 + t1473;
  t1318 = t1096*t1313;
  t1492 = t1474*t1231;
  t1493 = t1318 + t1492;
  t1507 = t1192*t1197*t1200;
  t1508 = -1.*t1189*t1201;
  t1510 = t1507 + t1508;
  t1521 = t1096*t1510;
  t1522 = t1212*t1231;
  t1523 = t1521 + t1522;
  t1540 = t1275*t1192*t1096;
  t1542 = -1.*t1275*t1201*t1231;
  t1545 = t1540 + t1542;
  t1484 = -1.*t1313*t1231;
  t1319 = -1.*t1303*t1231;
  t1320 = t1318 + t1319;
  t1566 = t1189*t1192;
  t1569 = t1197*t1200*t1201;
  t1570 = t1566 + t1569;
  t1514 = -1.*t1510*t1231;
  t1575 = -1.*t1570*t1231;
  t1576 = t1521 + t1575;
  t1531 = -1.*t1275*t1096*t1201;
  t1532 = -1.*t1275*t1192*t1231;
  t1534 = t1531 + t1532;
  t1536 = -0.09*t1534;
  t1546 = 0.135*t1256*t1545;
  t1547 = t1545*t1271;
  t1549 = -0.049*t1545*t1265;
  t1334 = t1256*t1330;
  t1336 = -1.*t1189*t1275*t1265;
  t1339 = t1334 + t1336;
  t1584 = 0.135*t1256;
  t1585 = -0.049*t1265;
  t1586 = t1584 + t1585;
  t1589 = 0.049*t1256;
  t1591 = t1589 + t1280;
  t1604 = t1096*t1570;
  t1605 = t1510*t1231;
  t1606 = t1604 + t1605;
  t1293 = -1.*t1275*t1256*t1197;
  t1618 = t1275*t1096*t1201;
  t1621 = t1275*t1192*t1231;
  t1623 = t1618 + t1621;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1181*t1212 - 0.09*(t1096*t1228 - 1.*t1212*t1231) + t1228*t1236 + t1252*t1271 + 0.135*(t1252*t1256 + t1197*t1265*t1275) - 1.*t1197*t1275*t1283 - 0.049*(t1252*t1265 + t1293);
  p_output1[10]=t1189*t1275*t1283 + t1181*t1303 + t1236*t1313 - 0.09*t1320 + t1271*t1330 - 0.049*(t1189*t1256*t1275 + t1265*t1330) + 0.135*t1339;
  p_output1[11]=0;
  p_output1[12]=t1181*t1189*t1201*t1275 + t1189*t1192*t1236*t1275 - 0.09*(t1096*t1189*t1192*t1275 - 1.*t1189*t1201*t1231*t1275) - 1.*t1189*t1200*t1283 + t1271*t1365 + 0.135*(t1189*t1200*t1265 + t1256*t1365) - 0.049*(-1.*t1189*t1200*t1256 + t1265*t1365);
  p_output1[13]=t1181*t1197*t1201*t1275 + t1192*t1197*t1236*t1275 - 0.09*(t1096*t1192*t1197*t1275 - 1.*t1197*t1201*t1231*t1275) - 1.*t1197*t1200*t1283 + t1271*t1405 + 0.135*(t1197*t1200*t1265 + t1256*t1405) - 0.049*(-1.*t1197*t1200*t1256 + t1265*t1405);
  p_output1[14]=-1.*t1181*t1200*t1201 - 0.09*(-1.*t1096*t1192*t1200 + t1200*t1201*t1231) - 1.*t1192*t1200*t1236 - 1.*t1275*t1283 + t1271*t1445 + 0.135*(t1265*t1275 + t1256*t1445) - 0.049*(-1.*t1256*t1275 + t1265*t1445);
  p_output1[15]=t1181*t1313 + t1236*t1474 - 0.09*(t1096*t1474 + t1484) + 0.135*t1256*t1493 - 0.049*t1265*t1493 + t1271*t1493;
  p_output1[16]=t1212*t1236 + t1181*t1510 - 0.09*(t1248 + t1514) + 0.135*t1256*t1523 - 0.049*t1265*t1523 + t1271*t1523;
  p_output1[17]=t1181*t1192*t1275 - 1.*t1201*t1236*t1275 + t1536 + t1546 + t1547 + t1549;
  p_output1[18]=0.135*t1231*t1303 - 0.135*t1096*t1313 + 0.135*t1256*t1320 - 0.049*t1265*t1320 + t1271*t1320 - 0.09*(-1.*t1096*t1303 + t1484);
  p_output1[19]=-0.135*t1096*t1510 + 0.135*t1231*t1570 - 0.09*(t1514 - 1.*t1096*t1570) + 0.135*t1256*t1576 - 0.049*t1265*t1576 + t1271*t1576;
  p_output1[20]=-0.135*t1096*t1192*t1275 + 0.135*t1201*t1231*t1275 + t1536 + t1546 + t1547 + t1549;
  p_output1[21]=0.135*(-1.*t1189*t1256*t1275 - 1.*t1265*t1330) - 0.049*t1339 + t1189*t1275*t1586 + t1330*t1591;
  p_output1[22]=t1197*t1275*t1586 + t1591*t1606 - 0.049*(-1.*t1197*t1265*t1275 + t1256*t1606) + 0.135*(t1293 - 1.*t1265*t1606);
  p_output1[23]=-1.*t1200*t1586 + t1591*t1623 - 0.049*(t1200*t1265 + t1256*t1623) + 0.135*(t1200*t1256 - 1.*t1265*t1623);
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



void J_hip_flexion_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
