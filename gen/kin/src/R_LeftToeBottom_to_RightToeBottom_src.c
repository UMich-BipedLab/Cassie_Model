/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 12:16:21 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_LeftToeBottom_to_RightToeBottom_src.h"

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
  double t1287;
  double t2664;
  double t1311;
  double t1313;
  double t4395;
  double t4468;
  double t2291;
  double t4408;
  double t4451;
  double t1152;
  double t4506;
  double t4515;
  double t4519;
  double t4565;
  double t4452;
  double t4525;
  double t4554;
  double t1145;
  double t4566;
  double t4623;
  double t4628;
  double t4745;
  double t4560;
  double t4657;
  double t4738;
  double t1039;
  double t4755;
  double t4758;
  double t4760;
  double t4856;
  double t4845;
  double t4846;
  double t4849;
  double t4871;
  double t4875;
  double t4881;
  double t4884;
  double t4889;
  double t4879;
  double t4892;
  double t4904;
  double t4917;
  double t4921;
  double t4929;
  double t4908;
  double t4935;
  double t4938;
  double t4948;
  double t4955;
  double t4968;
  double t4945;
  double t4975;
  double t4976;
  double t4982;
  double t4985;
  double t4986;
  double t4742;
  double t4766;
  double t4778;
  double t4813;
  double t4815;
  double t4832;
  double t4980;
  double t4999;
  double t5002;
  double t5014;
  double t5017;
  double t5022;
  double t5074;
  double t5081;
  double t5084;
  double t5089;
  double t5096;
  double t5102;
  double t5086;
  double t5104;
  double t5105;
  double t5107;
  double t5110;
  double t5112;
  double t5106;
  double t5116;
  double t5117;
  double t5125;
  double t5132;
  double t5134;
  double t5124;
  double t5135;
  double t5138;
  double t5142;
  double t5146;
  double t5150;
  double t5036;
  double t5042;
  double t5044;
  double t5012;
  double t5026;
  double t5027;
  double t5139;
  double t5153;
  double t5155;
  double t5161;
  double t5162;
  double t5164;
  double t4790;
  double t4839;
  double t4841;
  double t5047;
  double t5049;
  double t5055;
  double t5035;
  double t5059;
  double t653;
  double t5183;
  double t5185;
  double t5189;
  double t5159;
  double t5170;
  double t5172;
  double t5173;
  double t5176;
  double t5180;
  double t5182;
  double t5190;
  double t5191;
  double t5192;
  double t5194;
  double t5195;
  double t5200;
  double t5201;
  double t5202;
  double t981;
  double t5221;
  double t5210;
  double t5288;
  double t5291;
  double t5287;
  double t5295;
  double t5296;
  double t5297;
  double t5290;
  double t5292;
  double t5293;
  double t5299;
  double t5286;
  double t5307;
  double t5308;
  double t5309;
  double t5294;
  double t5302;
  double t5303;
  double t5312;
  double t5285;
  double t5316;
  double t5317;
  double t5322;
  double t5306;
  double t5313;
  double t5314;
  double t5323;
  double t5282;
  double t5327;
  double t5329;
  double t5332;
  double t5315;
  double t5324;
  double t5325;
  double t5333;
  double t5065;
  double t5349;
  double t5352;
  double t5353;
  double t5345;
  double t5346;
  double t5347;
  double t5357;
  double t5358;
  double t5359;
  double t5348;
  double t5354;
  double t5355;
  double t5363;
  double t5364;
  double t5365;
  double t5356;
  double t5360;
  double t5361;
  double t5370;
  double t5371;
  double t5372;
  double t5362;
  double t5366;
  double t5367;
  double t5211;
  double t5217;
  double t5218;
  double t5391;
  double t5392;
  double t5393;
  double t5387;
  double t5388;
  double t5389;
  double t5397;
  double t5398;
  double t5399;
  double t5390;
  double t5394;
  double t5395;
  double t5404;
  double t5405;
  double t5406;
  double t5396;
  double t5401;
  double t5402;
  double t5227;
  double t5232;
  double t5234;
  double t5326;
  double t5334;
  double t5335;
  double t5336;
  double t5337;
  double t5338;
  double t5339;
  double t5342;
  double t5343;
  double t5238;
  double t5242;
  double t5243;
  double t5403;
  double t5407;
  double t5408;
  double t5409;
  double t5411;
  double t5412;
  double t5413;
  double t5414;
  double t5415;
  double t5245;
  double t5246;
  double t5249;
  double t5369;
  double t5373;
  double t5374;
  double t5375;
  double t5376;
  double t5380;
  double t5381;
  double t5384;
  double t5385;
  double t5253;
  double t5254;
  double t5255;
  double t5263;
  double t5269;
  double t5271;
  double t5273;
  double t5276;
  double t5278;
  double t5279;
  double t5426;
  double t5427;
  double t5428;
  double t5434;
  double t5435;
  double t5436;
  double t5430;
  double t5431;
  double t5432;
  t1287 = Cos(var1[1]);
  t2664 = Cos(var1[3]);
  t1311 = Cos(var1[2]);
  t1313 = Sin(var1[3]);
  t4395 = Sin(var1[2]);
  t4468 = Cos(var1[4]);
  t2291 = -1.*t1287*t1311*t1313;
  t4408 = -1.*t2664*t1287*t4395;
  t4451 = t2291 + t4408;
  t1152 = Sin(var1[4]);
  t4506 = t2664*t1287*t1311;
  t4515 = -1.*t1287*t1313*t4395;
  t4519 = t4506 + t4515;
  t4565 = Cos(var1[5]);
  t4452 = t1152*t4451;
  t4525 = t4468*t4519;
  t4554 = t4452 + t4525;
  t1145 = Sin(var1[5]);
  t4566 = t4468*t4451;
  t4623 = -1.*t1152*t4519;
  t4628 = t4566 + t4623;
  t4745 = Cos(var1[6]);
  t4560 = -1.*t1145*t4554;
  t4657 = t4565*t4628;
  t4738 = t4560 + t4657;
  t1039 = Sin(var1[6]);
  t4755 = t4565*t4554;
  t4758 = t1145*t4628;
  t4760 = t4755 + t4758;
  t4856 = Sin(var1[0]);
  t4845 = Cos(var1[0]);
  t4846 = Sin(var1[1]);
  t4849 = t4845*t1311*t4846;
  t4871 = -1.*t4856*t4395;
  t4875 = t4849 + t4871;
  t4881 = -1.*t1311*t4856;
  t4884 = -1.*t4845*t4846*t4395;
  t4889 = t4881 + t4884;
  t4879 = -1.*t1313*t4875;
  t4892 = t2664*t4889;
  t4904 = t4879 + t4892;
  t4917 = t2664*t4875;
  t4921 = t1313*t4889;
  t4929 = t4917 + t4921;
  t4908 = t1152*t4904;
  t4935 = t4468*t4929;
  t4938 = t4908 + t4935;
  t4948 = t4468*t4904;
  t4955 = -1.*t1152*t4929;
  t4968 = t4948 + t4955;
  t4945 = -1.*t1145*t4938;
  t4975 = t4565*t4968;
  t4976 = t4945 + t4975;
  t4982 = t4565*t4938;
  t4985 = t1145*t4968;
  t4986 = t4982 + t4985;
  t4742 = t1039*t4738;
  t4766 = t4745*t4760;
  t4778 = t4742 + t4766;
  t4813 = t4745*t4738;
  t4815 = -1.*t1039*t4760;
  t4832 = t4813 + t4815;
  t4980 = t1039*t4976;
  t4999 = t4745*t4986;
  t5002 = t4980 + t4999;
  t5014 = t4745*t4976;
  t5017 = -1.*t1039*t4986;
  t5022 = t5014 + t5017;
  t5074 = t1311*t4856*t4846;
  t5081 = t4845*t4395;
  t5084 = t5074 + t5081;
  t5089 = t4845*t1311;
  t5096 = -1.*t4856*t4846*t4395;
  t5102 = t5089 + t5096;
  t5086 = -1.*t1313*t5084;
  t5104 = t2664*t5102;
  t5105 = t5086 + t5104;
  t5107 = t2664*t5084;
  t5110 = t1313*t5102;
  t5112 = t5107 + t5110;
  t5106 = t1152*t5105;
  t5116 = t4468*t5112;
  t5117 = t5106 + t5116;
  t5125 = t4468*t5105;
  t5132 = -1.*t1152*t5112;
  t5134 = t5125 + t5132;
  t5124 = -1.*t1145*t5117;
  t5135 = t4565*t5134;
  t5138 = t5124 + t5135;
  t5142 = t4565*t5117;
  t5146 = t1145*t5134;
  t5150 = t5142 + t5146;
  t5036 = -0.766044*t4778;
  t5042 = 0.642788*t4832;
  t5044 = t5036 + t5042;
  t5012 = -0.766044*t5002;
  t5026 = 0.642788*t5022;
  t5027 = t5012 + t5026;
  t5139 = t1039*t5138;
  t5153 = t4745*t5150;
  t5155 = t5139 + t5153;
  t5161 = t4745*t5138;
  t5162 = -1.*t1039*t5150;
  t5164 = t5161 + t5162;
  t4790 = 0.642788*t4778;
  t4839 = 0.766044*t4832;
  t4841 = t4790 + t4839;
  t5047 = 0.642788*t5002;
  t5049 = 0.766044*t5022;
  t5055 = t5047 + t5049;
  t5035 = t4841*t5027;
  t5059 = -1.*t5044*t5055;
  t653 = Cos(var1[8]);
  t5183 = -0.766044*t5155;
  t5185 = 0.642788*t5164;
  t5189 = t5183 + t5185;
  t5159 = 0.642788*t5155;
  t5170 = 0.766044*t5164;
  t5172 = t5159 + t5170;
  t5173 = t4845*t1287*t5044;
  t5176 = t4846*t5027;
  t5180 = t5173 + t5176;
  t5182 = -1.*t5172*t5180;
  t5190 = t4845*t1287*t4841;
  t5191 = t4846*t5055;
  t5192 = t5190 + t5191;
  t5194 = t5189*t5192;
  t5195 = t5035 + t5059;
  t5200 = -1.*t1287*t4856*t5195;
  t5201 = 0. + t5182 + t5194 + t5200;
  t5202 = 1/t5201;
  t981 = Sin(var1[7]);
  t5221 = Sin(var1[8]);
  t5210 = Cos(var1[7]);
  t5288 = Cos(var1[9]);
  t5291 = Sin(var1[9]);
  t5287 = Cos(var1[10]);
  t5295 = t5210*t5288;
  t5296 = -1.*t981*t5221*t5291;
  t5297 = t5295 + t5296;
  t5290 = t5288*t981*t5221;
  t5292 = t5210*t5291;
  t5293 = t5290 + t5292;
  t5299 = Sin(var1[10]);
  t5286 = Cos(var1[11]);
  t5307 = t5287*t5297;
  t5308 = -1.*t5293*t5299;
  t5309 = t5307 + t5308;
  t5294 = t5287*t5293;
  t5302 = t5297*t5299;
  t5303 = t5294 + t5302;
  t5312 = Sin(var1[11]);
  t5285 = Cos(var1[12]);
  t5316 = t5286*t5309;
  t5317 = -1.*t5303*t5312;
  t5322 = t5316 + t5317;
  t5306 = t5286*t5303;
  t5313 = t5309*t5312;
  t5314 = t5306 + t5313;
  t5323 = Sin(var1[12]);
  t5282 = Cos(var1[13]);
  t5327 = t5285*t5322;
  t5329 = -1.*t5314*t5323;
  t5332 = t5327 + t5329;
  t5315 = t5285*t5314;
  t5324 = t5322*t5323;
  t5325 = t5315 + t5324;
  t5333 = Sin(var1[13]);
  t5065 = 0. + t5035 + t5059;
  t5349 = -1.*t5288*t981;
  t5352 = -1.*t5210*t5221*t5291;
  t5353 = t5349 + t5352;
  t5345 = t5210*t5288*t5221;
  t5346 = -1.*t981*t5291;
  t5347 = t5345 + t5346;
  t5357 = t5287*t5353;
  t5358 = -1.*t5347*t5299;
  t5359 = t5357 + t5358;
  t5348 = t5287*t5347;
  t5354 = t5353*t5299;
  t5355 = t5348 + t5354;
  t5363 = t5286*t5359;
  t5364 = -1.*t5355*t5312;
  t5365 = t5363 + t5364;
  t5356 = t5286*t5355;
  t5360 = t5359*t5312;
  t5361 = t5356 + t5360;
  t5370 = t5285*t5365;
  t5371 = -1.*t5361*t5323;
  t5372 = t5370 + t5371;
  t5362 = t5285*t5361;
  t5366 = t5365*t5323;
  t5367 = t5362 + t5366;
  t5211 = -1.*t4841*t5189;
  t5217 = t5044*t5172;
  t5218 = 0. + t5211 + t5217;
  t5391 = -1.*t653*t5287*t5291;
  t5392 = -1.*t653*t5288*t5299;
  t5393 = t5391 + t5392;
  t5387 = t653*t5288*t5287;
  t5388 = -1.*t653*t5291*t5299;
  t5389 = t5387 + t5388;
  t5397 = t5286*t5393;
  t5398 = -1.*t5389*t5312;
  t5399 = t5397 + t5398;
  t5390 = t5286*t5389;
  t5394 = t5393*t5312;
  t5395 = t5390 + t5394;
  t5404 = t5285*t5399;
  t5405 = -1.*t5395*t5323;
  t5406 = t5404 + t5405;
  t5396 = t5285*t5395;
  t5401 = t5399*t5323;
  t5402 = t5396 + t5401;
  t5227 = t5055*t5189;
  t5232 = -1.*t5027*t5172;
  t5234 = 0. + t5227 + t5232;
  t5326 = t5282*t5325;
  t5334 = t5332*t5333;
  t5335 = t5326 + t5334;
  t5336 = 0.642788*t5335;
  t5337 = t5282*t5332;
  t5338 = -1.*t5325*t5333;
  t5339 = t5337 + t5338;
  t5342 = 0.766044*t5339;
  t5343 = t5336 + t5342;
  t5238 = -1.*t4845*t1287*t5044;
  t5242 = -1.*t4846*t5027;
  t5243 = 0. + t5238 + t5242;
  t5403 = t5282*t5402;
  t5407 = t5406*t5333;
  t5408 = t5403 + t5407;
  t5409 = 0.642788*t5408;
  t5411 = t5282*t5406;
  t5412 = -1.*t5402*t5333;
  t5413 = t5411 + t5412;
  t5414 = 0.766044*t5413;
  t5415 = t5409 + t5414;
  t5245 = -1.*t1287*t4856*t5027;
  t5246 = t4845*t1287*t5189;
  t5249 = 0. + t5245 + t5246;
  t5369 = t5282*t5367;
  t5373 = t5372*t5333;
  t5374 = t5369 + t5373;
  t5375 = 0.642788*t5374;
  t5376 = t5282*t5372;
  t5380 = -1.*t5367*t5333;
  t5381 = t5376 + t5380;
  t5384 = 0.766044*t5381;
  t5385 = t5375 + t5384;
  t5253 = t1287*t4856*t5044;
  t5254 = t4846*t5189;
  t5255 = 0. + t5253 + t5254;
  t5263 = 0. + t5190 + t5191;
  t5269 = t1287*t4856*t5055;
  t5271 = -1.*t4845*t1287*t5172;
  t5273 = 0. + t5269 + t5271;
  t5276 = -1.*t1287*t4856*t4841;
  t5278 = -1.*t4846*t5172;
  t5279 = 0. + t5276 + t5278;
  t5426 = -0.766044*t5335;
  t5427 = 0.642788*t5339;
  t5428 = t5426 + t5427;
  t5434 = -0.766044*t5408;
  t5435 = 0.642788*t5413;
  t5436 = t5434 + t5435;
  t5430 = -0.766044*t5374;
  t5431 = 0.642788*t5381;
  t5432 = t5430 + t5431;
  p_output1[0]=0. + t5202*t5221*t5234 - 1.*t5202*t5210*t5218*t653 - 1.*t5065*t5202*t653*t981;
  p_output1[1]=0. + t5202*t5221*t5249 - 1.*t5202*t5210*t5255*t653 - 1.*t5202*t5243*t653*t981;
  p_output1[2]=0. + t5202*t5221*t5273 - 1.*t5202*t5210*t5279*t653 - 1.*t5202*t5263*t653*t981;
  p_output1[3]=0. + t5065*t5202*t5343 + t5202*t5218*t5385 + t5202*t5234*t5415;
  p_output1[4]=0. + t5202*t5243*t5343 + t5202*t5255*t5385 + t5202*t5249*t5415;
  p_output1[5]=0. + t5202*t5263*t5343 + t5202*t5279*t5385 + t5202*t5273*t5415;
  p_output1[6]=0. + t5065*t5202*t5428 + t5202*t5218*t5432 + t5202*t5234*t5436;
  p_output1[7]=0. + t5202*t5243*t5428 + t5202*t5255*t5432 + t5202*t5249*t5436;
  p_output1[8]=0. + t5202*t5263*t5428 + t5202*t5279*t5432 + t5202*t5273*t5436;
}



void R_LeftToeBottom_to_RightToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
