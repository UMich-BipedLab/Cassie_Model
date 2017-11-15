/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:46 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_knee_to_shin_right_src.h"

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
  double t137;
  double t8195;
  double t8206;
  double t8200;
  double t8207;
  double t781;
  double t801;
  double t1869;
  double t2389;
  double t8109;
  double t8205;
  double t8213;
  double t8216;
  double t8222;
  double t8229;
  double t8231;
  double t8238;
  double t780;
  double t8255;
  double t8258;
  double t8259;
  double t8265;
  double t8268;
  double t8269;
  double t8273;
  double t8284;
  double t8286;
  double t8289;
  double t8306;
  double t8313;
  double t8315;
  double t8320;
  double t8324;
  double t8328;
  double t8333;
  double t8338;
  double t8339;
  double t8340;
  double t8345;
  double t8346;
  double t8347;
  double t8349;
  double t8351;
  double t8354;
  double t8356;
  double t8361;
  double t8363;
  double t8365;
  double t8371;
  double t8372;
  double t8373;
  double t2059;
  double t2570;
  double t3766;
  double t8156;
  double t8187;
  double t8223;
  double t8224;
  double t8225;
  double t8228;
  double t8248;
  double t8251;
  double t8254;
  double t8393;
  double t8395;
  double t8396;
  double t8399;
  double t8402;
  double t8403;
  double t8270;
  double t8274;
  double t8277;
  double t8407;
  double t8408;
  double t8410;
  double t8300;
  double t8301;
  double t8305;
  double t8331;
  double t8335;
  double t8336;
  double t8412;
  double t8414;
  double t8415;
  double t8426;
  double t8429;
  double t8430;
  double t8342;
  double t8343;
  double t8344;
  double t8355;
  double t8359;
  double t8360;
  double t8433;
  double t8436;
  double t8438;
  double t8440;
  double t8442;
  double t8443;
  double t8368;
  double t8369;
  double t8370;
  double t8446;
  double t8448;
  double t8450;
  double t8452;
  double t8455;
  double t8456;
  double t8471;
  double t8472;
  double t8473;
  double t8475;
  double t8476;
  double t8477;
  double t8483;
  double t8484;
  double t8485;
  double t8487;
  double t8488;
  double t8489;
  double t8491;
  double t8492;
  double t8493;
  double t8495;
  double t8496;
  double t8497;
  double t8499;
  double t8500;
  double t8501;
  t137 = Cos(var1[3]);
  t8195 = Cos(var1[5]);
  t8206 = Sin(var1[3]);
  t8200 = Sin(var1[4]);
  t8207 = Sin(var1[5]);
  t781 = Cos(var1[14]);
  t801 = -1.*t781;
  t1869 = 1. + t801;
  t2389 = Sin(var1[14]);
  t8109 = Sin(var1[13]);
  t8205 = t137*t8195*t8200;
  t8213 = t8206*t8207;
  t8216 = t8205 + t8213;
  t8222 = Cos(var1[13]);
  t8229 = -1.*t8195*t8206;
  t8231 = t137*t8200*t8207;
  t8238 = t8229 + t8231;
  t780 = Cos(var1[4]);
  t8255 = t8109*t8216;
  t8258 = t8222*t8238;
  t8259 = t8255 + t8258;
  t8265 = Cos(var1[15]);
  t8268 = -1.*t8265;
  t8269 = 1. + t8268;
  t8273 = Sin(var1[15]);
  t8284 = t8222*t8216;
  t8286 = -1.*t8109*t8238;
  t8289 = t8284 + t8286;
  t8306 = t781*t137*t780;
  t8313 = t2389*t8259;
  t8315 = t8306 + t8313;
  t8320 = Cos(var1[16]);
  t8324 = -1.*t8320;
  t8328 = 1. + t8324;
  t8333 = Sin(var1[16]);
  t8338 = t8273*t8289;
  t8339 = t8265*t8315;
  t8340 = t8338 + t8339;
  t8345 = t8265*t8289;
  t8346 = -1.*t8273*t8315;
  t8347 = t8345 + t8346;
  t8349 = Cos(var1[17]);
  t8351 = -1.*t8349;
  t8354 = 1. + t8351;
  t8356 = Sin(var1[17]);
  t8361 = -1.*t8333*t8340;
  t8363 = t8320*t8347;
  t8365 = t8361 + t8363;
  t8371 = t8320*t8340;
  t8372 = t8333*t8347;
  t8373 = t8371 + t8372;
  t2059 = -0.049*t1869;
  t2570 = -0.135*t2389;
  t3766 = 0. + t2059 + t2570;
  t8156 = 0.135*t8109;
  t8187 = 0. + t8156;
  t8223 = -1.*t8222;
  t8224 = 1. + t8223;
  t8225 = -0.135*t8224;
  t8228 = 0. + t8225;
  t8248 = -0.135*t1869;
  t8251 = 0.049*t2389;
  t8254 = 0. + t8248 + t8251;
  t8393 = t8195*t8206*t8200;
  t8395 = -1.*t137*t8207;
  t8396 = t8393 + t8395;
  t8399 = t137*t8195;
  t8402 = t8206*t8200*t8207;
  t8403 = t8399 + t8402;
  t8270 = -0.09*t8269;
  t8274 = 0.049*t8273;
  t8277 = 0. + t8270 + t8274;
  t8407 = t8109*t8396;
  t8408 = t8222*t8403;
  t8410 = t8407 + t8408;
  t8300 = -0.049*t8269;
  t8301 = -0.09*t8273;
  t8305 = 0. + t8300 + t8301;
  t8331 = -0.049*t8328;
  t8335 = -0.21*t8333;
  t8336 = 0. + t8331 + t8335;
  t8412 = t8222*t8396;
  t8414 = -1.*t8109*t8403;
  t8415 = t8412 + t8414;
  t8426 = t781*t780*t8206;
  t8429 = t2389*t8410;
  t8430 = t8426 + t8429;
  t8342 = -0.21*t8328;
  t8343 = 0.049*t8333;
  t8344 = 0. + t8342 + t8343;
  t8355 = -0.2707*t8354;
  t8359 = 0.0016*t8356;
  t8360 = 0. + t8355 + t8359;
  t8433 = t8273*t8415;
  t8436 = t8265*t8430;
  t8438 = t8433 + t8436;
  t8440 = t8265*t8415;
  t8442 = -1.*t8273*t8430;
  t8443 = t8440 + t8442;
  t8368 = -0.0016*t8354;
  t8369 = -0.2707*t8356;
  t8370 = 0. + t8368 + t8369;
  t8446 = -1.*t8333*t8438;
  t8448 = t8320*t8443;
  t8450 = t8446 + t8448;
  t8452 = t8320*t8438;
  t8455 = t8333*t8443;
  t8456 = t8452 + t8455;
  t8471 = t780*t8195*t8109;
  t8472 = t8222*t780*t8207;
  t8473 = t8471 + t8472;
  t8475 = t8222*t780*t8195;
  t8476 = -1.*t780*t8109*t8207;
  t8477 = t8475 + t8476;
  t8483 = -1.*t781*t8200;
  t8484 = t2389*t8473;
  t8485 = t8483 + t8484;
  t8487 = t8273*t8477;
  t8488 = t8265*t8485;
  t8489 = t8487 + t8488;
  t8491 = t8265*t8477;
  t8492 = -1.*t8273*t8485;
  t8493 = t8491 + t8492;
  t8495 = -1.*t8333*t8489;
  t8496 = t8320*t8493;
  t8497 = t8495 + t8496;
  t8499 = t8320*t8489;
  t8500 = t8333*t8493;
  t8501 = t8499 + t8500;
  p_output1[0]=0. + t137*t3766*t780 + t8187*t8216 + t8228*t8238 + t8254*t8259 - 0.1305*(-1.*t137*t2389*t780 + t781*t8259) + t8277*t8289 + t8305*t8315 + t8336*t8340 + t8344*t8347 + t8360*t8365 + t8370*t8373 - 0.0016*(t8356*t8365 + t8349*t8373) - 0.2707*(t8349*t8365 - 1.*t8356*t8373) + var1[0];
  p_output1[1]=0. + t3766*t780*t8206 + t8187*t8396 + t8228*t8403 + t8254*t8410 - 0.1305*(-1.*t2389*t780*t8206 + t781*t8410) + t8277*t8415 + t8305*t8430 + t8336*t8438 + t8344*t8443 + t8360*t8450 + t8370*t8456 - 0.0016*(t8356*t8450 + t8349*t8456) - 0.2707*(t8349*t8450 - 1.*t8356*t8456) + var1[1];
  p_output1[2]=0. + t780*t8187*t8195 - 1.*t3766*t8200 + t780*t8207*t8228 + t8254*t8473 - 0.1305*(t2389*t8200 + t781*t8473) + t8277*t8477 + t8305*t8485 + t8336*t8489 + t8344*t8493 + t8360*t8497 + t8370*t8501 - 0.0016*(t8356*t8497 + t8349*t8501) - 0.2707*(t8349*t8497 - 1.*t8356*t8501) + var1[2];
}



void p_knee_to_shin_right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
