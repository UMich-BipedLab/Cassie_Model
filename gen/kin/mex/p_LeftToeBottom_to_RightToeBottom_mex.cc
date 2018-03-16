/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 12:16:21 GMT-04:00
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
  double t620;
  double t882;
  double t4565;
  double t4745;
  double t4766;
  double t4778;
  double t4832;
  double t4892;
  double t4999;
  double t5036;
  double t5042;
  double t5049;
  double t4948;
  double t4975;
  double t4976;
  double t5106;
  double t5110;
  double t5116;
  double t5155;
  double t5161;
  double t5164;
  double t5176;
  double t5142;
  double t5146;
  double t5153;
  double t5207;
  double t5217;
  double t5234;
  double t5269;
  double t5275;
  double t5280;
  double t5282;
  double t5250;
  double t5253;
  double t5259;
  double t5294;
  double t5295;
  double t5297;
  double t5334;
  double t5335;
  double t5336;
  double t5344;
  double t5324;
  double t5326;
  double t5332;
  double t5362;
  double t5363;
  double t5365;
  double t5411;
  double t5420;
  double t5415;
  double t5417;
  double t5422;
  double t5429;
  double t5419;
  double t5424;
  double t5426;
  double t5409;
  double t5431;
  double t5433;
  double t5434;
  double t5441;
  double t5427;
  double t5436;
  double t5438;
  double t5408;
  double t5443;
  double t5445;
  double t5446;
  double t5451;
  double t5440;
  double t5447;
  double t5448;
  double t5407;
  double t5452;
  double t5453;
  double t5454;
  double t5475;
  double t5470;
  double t5472;
  double t5473;
  double t5476;
  double t5478;
  double t5480;
  double t5481;
  double t5482;
  double t5479;
  double t5484;
  double t5485;
  double t5487;
  double t5488;
  double t5491;
  double t5486;
  double t5494;
  double t5495;
  double t5498;
  double t5500;
  double t5501;
  double t5497;
  double t5503;
  double t5504;
  double t5507;
  double t5508;
  double t5509;
  double t5450;
  double t5457;
  double t5460;
  double t5463;
  double t5464;
  double t5466;
  double t5506;
  double t5510;
  double t5512;
  double t5514;
  double t5515;
  double t5516;
  double t5528;
  double t5529;
  double t5530;
  double t5532;
  double t5533;
  double t5534;
  double t5531;
  double t5535;
  double t5536;
  double t5538;
  double t5539;
  double t5540;
  double t5537;
  double t5541;
  double t5542;
  double t5544;
  double t5545;
  double t5546;
  double t5543;
  double t5547;
  double t5548;
  double t5550;
  double t5551;
  double t5552;
  double t5520;
  double t5521;
  double t5522;
  double t5513;
  double t5517;
  double t5518;
  double t5549;
  double t5553;
  double t5554;
  double t5556;
  double t5557;
  double t5558;
  double t5461;
  double t5467;
  double t5469;
  double t5523;
  double t5524;
  double t5525;
  double t5519;
  double t5526;
  double t1241;
  double t1560;
  double t3163;
  double t4566;
  double t4628;
  double t4813;
  double t4839;
  double t4849;
  double t4904;
  double t4917;
  double t4921;
  double t5047;
  double t5074;
  double t5081;
  double t5125;
  double t5134;
  double t5135;
  double t5584;
  double t5585;
  double t5586;
  double t5588;
  double t5589;
  double t5590;
  double t5173;
  double t5183;
  double t5190;
  double t5237;
  double t5244;
  double t5246;
  double t5592;
  double t5593;
  double t5594;
  double t5596;
  double t5597;
  double t5598;
  double t5281;
  double t5285;
  double t5286;
  double t5306;
  double t5307;
  double t5313;
  double t5600;
  double t5601;
  double t5602;
  double t5604;
  double t5605;
  double t5606;
  double t5342;
  double t5353;
  double t5356;
  double t5372;
  double t5374;
  double t5375;
  double t5608;
  double t5609;
  double t5610;
  double t5612;
  double t5613;
  double t5614;
  double t5565;
  double t5566;
  double t5567;
  double t5555;
  double t5559;
  double t5560;
  double t5561;
  double t5562;
  double t5563;
  double t5564;
  double t5568;
  double t5569;
  double t5570;
  double t5571;
  double t5572;
  double t5573;
  double t5574;
  double t5575;
  double t5634;
  double t5635;
  double t5636;
  double t5638;
  double t5639;
  double t5640;
  double t5642;
  double t5643;
  double t5644;
  double t5646;
  double t5647;
  double t5648;
  double t5650;
  double t5651;
  double t5652;
  double t5654;
  double t5655;
  double t5656;
  double t5681;
  double t5682;
  double t5691;
  double t5692;
  double t5701;
  double t5702;
  double t5711;
  double t5712;
  double t5721;
  double t5722;
  double t5675;
  double t5676;
  double t5693;
  double t5694;
  double t5695;
  double t5683;
  double t5684;
  double t5685;
  double t5697;
  double t5698;
  double t5699;
  double t5703;
  double t5704;
  double t5705;
  double t5707;
  double t5708;
  double t5709;
  double t5713;
  double t5714;
  double t5715;
  double t5717;
  double t5718;
  double t5719;
  double t5723;
  double t5724;
  double t5725;
  double t5727;
  double t5728;
  double t5729;
  double t5671;
  double t5672;
  double t5673;
  double t5674;
  double t5677;
  double t5678;
  double t5679;
  double t5680;
  double t5686;
  double t5687;
  double t5688;
  double t5689;
  double t5690;
  double t5696;
  double t5700;
  double t5706;
  double t5710;
  double t5716;
  double t5720;
  double t5726;
  double t5730;
  double t5731;
  double t5732;
  double t5733;
  double t5735;
  double t5736;
  double t5737;
  double t5738;
  double t5739;
  double t5740;
  double t5741;
  double t5742;
  double t5743;
  double t5744;
  double t5745;
  double t5746;
  double t5747;
  double t5748;
  double t870;
  double t1174;
  double t4657;
  double t4889;
  double t4935;
  double t5102;
  double t5138;
  double t5191;
  double t5249;
  double t5292;
  double t5315;
  double t5359;
  double t5376;
  double t5381;
  double t5384;
  double t5386;
  double t5387;
  double t5393;
  double t5394;
  double t5397;
  double t5399;
  double t5406;
  double t5629;
  double t5630;
  double t5631;
  double t5632;
  double t5633;
  double t5637;
  double t5641;
  double t5645;
  double t5649;
  double t5653;
  double t5657;
  double t5658;
  double t5659;
  double t5660;
  double t5661;
  double t5662;
  double t5663;
  double t5664;
  double t5665;
  double t5666;
  double t5577;
  double t5578;
  double t5579;
  double t5580;
  double t5581;
  double t5582;
  double t5583;
  double t5587;
  double t5591;
  double t5595;
  double t5599;
  double t5603;
  double t5607;
  double t5611;
  double t5615;
  double t5616;
  double t5617;
  double t5618;
  double t5619;
  double t5620;
  double t5621;
  double t5622;
  double t5623;
  double t5624;
  double t5756;
  double t5757;
  double t5758;
  double t5759;
  double t5760;
  double t5761;
  double t5762;
  double t5763;
  double t5764;
  double t5765;
  double t5766;
  double t5767;
  double t5768;
  double t5769;
  double t5770;
  double t5771;
  double t5734;
  double t5749;
  double t5750;
  double t5788;
  double t5789;
  double t5790;
  double t5752;
  double t5753;
  double t5754;
  t620 = Sin(var1[7]);
  t882 = Cos(var1[8]);
  t4565 = Sin(var1[8]);
  t4745 = Cos(var1[9]);
  t4766 = -1.*t4745;
  t4778 = 1. + t4766;
  t4832 = Sin(var1[9]);
  t4892 = Cos(var1[7]);
  t4999 = Cos(var1[10]);
  t5036 = -1.*t4999;
  t5042 = 1. + t5036;
  t5049 = Sin(var1[10]);
  t4948 = t4745*t620*t4565;
  t4975 = t4892*t4832;
  t4976 = t4948 + t4975;
  t5106 = t4892*t4745;
  t5110 = -1.*t620*t4565*t4832;
  t5116 = t5106 + t5110;
  t5155 = Cos(var1[11]);
  t5161 = -1.*t5155;
  t5164 = 1. + t5161;
  t5176 = Sin(var1[11]);
  t5142 = t4999*t4976;
  t5146 = t5116*t5049;
  t5153 = t5142 + t5146;
  t5207 = t4999*t5116;
  t5217 = -1.*t4976*t5049;
  t5234 = t5207 + t5217;
  t5269 = Cos(var1[12]);
  t5275 = -1.*t5269;
  t5280 = 1. + t5275;
  t5282 = Sin(var1[12]);
  t5250 = t5155*t5153;
  t5253 = t5234*t5176;
  t5259 = t5250 + t5253;
  t5294 = t5155*t5234;
  t5295 = -1.*t5153*t5176;
  t5297 = t5294 + t5295;
  t5334 = Cos(var1[13]);
  t5335 = -1.*t5334;
  t5336 = 1. + t5335;
  t5344 = Sin(var1[13]);
  t5324 = t5269*t5259;
  t5326 = t5297*t5282;
  t5332 = t5324 + t5326;
  t5362 = t5269*t5297;
  t5363 = -1.*t5259*t5282;
  t5365 = t5362 + t5363;
  t5411 = Cos(var1[1]);
  t5420 = Cos(var1[3]);
  t5415 = Cos(var1[2]);
  t5417 = Sin(var1[3]);
  t5422 = Sin(var1[2]);
  t5429 = Cos(var1[4]);
  t5419 = -1.*t5411*t5415*t5417;
  t5424 = -1.*t5420*t5411*t5422;
  t5426 = t5419 + t5424;
  t5409 = Sin(var1[4]);
  t5431 = t5420*t5411*t5415;
  t5433 = -1.*t5411*t5417*t5422;
  t5434 = t5431 + t5433;
  t5441 = Cos(var1[5]);
  t5427 = t5409*t5426;
  t5436 = t5429*t5434;
  t5438 = t5427 + t5436;
  t5408 = Sin(var1[5]);
  t5443 = t5429*t5426;
  t5445 = -1.*t5409*t5434;
  t5446 = t5443 + t5445;
  t5451 = Cos(var1[6]);
  t5440 = -1.*t5408*t5438;
  t5447 = t5441*t5446;
  t5448 = t5440 + t5447;
  t5407 = Sin(var1[6]);
  t5452 = t5441*t5438;
  t5453 = t5408*t5446;
  t5454 = t5452 + t5453;
  t5475 = Sin(var1[0]);
  t5470 = Cos(var1[0]);
  t5472 = Sin(var1[1]);
  t5473 = t5470*t5415*t5472;
  t5476 = -1.*t5475*t5422;
  t5478 = t5473 + t5476;
  t5480 = -1.*t5415*t5475;
  t5481 = -1.*t5470*t5472*t5422;
  t5482 = t5480 + t5481;
  t5479 = -1.*t5417*t5478;
  t5484 = t5420*t5482;
  t5485 = t5479 + t5484;
  t5487 = t5420*t5478;
  t5488 = t5417*t5482;
  t5491 = t5487 + t5488;
  t5486 = t5409*t5485;
  t5494 = t5429*t5491;
  t5495 = t5486 + t5494;
  t5498 = t5429*t5485;
  t5500 = -1.*t5409*t5491;
  t5501 = t5498 + t5500;
  t5497 = -1.*t5408*t5495;
  t5503 = t5441*t5501;
  t5504 = t5497 + t5503;
  t5507 = t5441*t5495;
  t5508 = t5408*t5501;
  t5509 = t5507 + t5508;
  t5450 = t5407*t5448;
  t5457 = t5451*t5454;
  t5460 = t5450 + t5457;
  t5463 = t5451*t5448;
  t5464 = -1.*t5407*t5454;
  t5466 = t5463 + t5464;
  t5506 = t5407*t5504;
  t5510 = t5451*t5509;
  t5512 = t5506 + t5510;
  t5514 = t5451*t5504;
  t5515 = -1.*t5407*t5509;
  t5516 = t5514 + t5515;
  t5528 = t5415*t5475*t5472;
  t5529 = t5470*t5422;
  t5530 = t5528 + t5529;
  t5532 = t5470*t5415;
  t5533 = -1.*t5475*t5472*t5422;
  t5534 = t5532 + t5533;
  t5531 = -1.*t5417*t5530;
  t5535 = t5420*t5534;
  t5536 = t5531 + t5535;
  t5538 = t5420*t5530;
  t5539 = t5417*t5534;
  t5540 = t5538 + t5539;
  t5537 = t5409*t5536;
  t5541 = t5429*t5540;
  t5542 = t5537 + t5541;
  t5544 = t5429*t5536;
  t5545 = -1.*t5409*t5540;
  t5546 = t5544 + t5545;
  t5543 = -1.*t5408*t5542;
  t5547 = t5441*t5546;
  t5548 = t5543 + t5547;
  t5550 = t5441*t5542;
  t5551 = t5408*t5546;
  t5552 = t5550 + t5551;
  t5520 = -0.766044*t5460;
  t5521 = 0.642788*t5466;
  t5522 = t5520 + t5521;
  t5513 = -0.766044*t5512;
  t5517 = 0.642788*t5516;
  t5518 = t5513 + t5517;
  t5549 = t5407*t5548;
  t5553 = t5451*t5552;
  t5554 = t5549 + t5553;
  t5556 = t5451*t5548;
  t5557 = -1.*t5407*t5552;
  t5558 = t5556 + t5557;
  t5461 = 0.642788*t5460;
  t5467 = 0.766044*t5466;
  t5469 = t5461 + t5467;
  t5523 = 0.642788*t5512;
  t5524 = 0.766044*t5516;
  t5525 = t5523 + t5524;
  t5519 = t5469*t5518;
  t5526 = -1.*t5522*t5525;
  t1241 = -1.*t882;
  t1560 = 1. + t1241;
  t3163 = -0.135*t1560;
  t4566 = 0.049*t4565;
  t4628 = 0. + t3163 + t4566;
  t4813 = -0.049*t4778;
  t4839 = -0.09*t4832;
  t4849 = 0. + t4813 + t4839;
  t4904 = -0.09*t4778;
  t4917 = 0.049*t4832;
  t4921 = 0. + t4904 + t4917;
  t5047 = -0.049*t5042;
  t5074 = -0.21*t5049;
  t5081 = 0. + t5047 + t5074;
  t5125 = -0.21*t5042;
  t5134 = 0.049*t5049;
  t5135 = 0. + t5125 + t5134;
  t5584 = t4892*t4745*t4565;
  t5585 = -1.*t620*t4832;
  t5586 = t5584 + t5585;
  t5588 = -1.*t4745*t620;
  t5589 = -1.*t4892*t4565*t4832;
  t5590 = t5588 + t5589;
  t5173 = -0.0016*t5164;
  t5183 = -0.2707*t5176;
  t5190 = 0. + t5173 + t5183;
  t5237 = -0.2707*t5164;
  t5244 = 0.0016*t5176;
  t5246 = 0. + t5237 + t5244;
  t5592 = t4999*t5586;
  t5593 = t5590*t5049;
  t5594 = t5592 + t5593;
  t5596 = t4999*t5590;
  t5597 = -1.*t5586*t5049;
  t5598 = t5596 + t5597;
  t5281 = 0.0184*t5280;
  t5285 = -0.7055*t5282;
  t5286 = 0. + t5281 + t5285;
  t5306 = -0.7055*t5280;
  t5307 = -0.0184*t5282;
  t5313 = 0. + t5306 + t5307;
  t5600 = t5155*t5594;
  t5601 = t5598*t5176;
  t5602 = t5600 + t5601;
  t5604 = t5155*t5598;
  t5605 = -1.*t5594*t5176;
  t5606 = t5604 + t5605;
  t5342 = -0.0216*t5336;
  t5353 = -1.1135*t5344;
  t5356 = 0. + t5342 + t5353;
  t5372 = -1.1135*t5336;
  t5374 = 0.0216*t5344;
  t5375 = 0. + t5372 + t5374;
  t5608 = t5269*t5602;
  t5609 = t5606*t5282;
  t5610 = t5608 + t5609;
  t5612 = t5269*t5606;
  t5613 = -1.*t5602*t5282;
  t5614 = t5612 + t5613;
  t5565 = -0.766044*t5554;
  t5566 = 0.642788*t5558;
  t5567 = t5565 + t5566;
  t5555 = 0.642788*t5554;
  t5559 = 0.766044*t5558;
  t5560 = t5555 + t5559;
  t5561 = t5470*t5411*t5522;
  t5562 = t5472*t5518;
  t5563 = t5561 + t5562;
  t5564 = -1.*t5560*t5563;
  t5568 = t5470*t5411*t5469;
  t5569 = t5472*t5525;
  t5570 = t5568 + t5569;
  t5571 = t5567*t5570;
  t5572 = t5519 + t5526;
  t5573 = -1.*t5411*t5475*t5572;
  t5574 = 0. + t5564 + t5571 + t5573;
  t5575 = 1/t5574;
  t5634 = t882*t4745*t4999;
  t5635 = -1.*t882*t4832*t5049;
  t5636 = t5634 + t5635;
  t5638 = -1.*t882*t4999*t4832;
  t5639 = -1.*t882*t4745*t5049;
  t5640 = t5638 + t5639;
  t5642 = t5155*t5636;
  t5643 = t5640*t5176;
  t5644 = t5642 + t5643;
  t5646 = t5155*t5640;
  t5647 = -1.*t5636*t5176;
  t5648 = t5646 + t5647;
  t5650 = t5269*t5644;
  t5651 = t5648*t5282;
  t5652 = t5650 + t5651;
  t5654 = t5269*t5648;
  t5655 = -1.*t5644*t5282;
  t5656 = t5654 + t5655;
  t5681 = -1.*t5415;
  t5682 = 1. + t5681;
  t5691 = -1.*t5420;
  t5692 = 1. + t5691;
  t5701 = -1.*t5429;
  t5702 = 1. + t5701;
  t5711 = -1.*t5441;
  t5712 = 1. + t5711;
  t5721 = -1.*t5451;
  t5722 = 1. + t5721;
  t5675 = -1.*t5411;
  t5676 = 1. + t5675;
  t5693 = -0.049*t5692;
  t5694 = -0.21*t5417;
  t5695 = 0. + t5693 + t5694;
  t5683 = -0.049*t5682;
  t5684 = -0.09*t5422;
  t5685 = 0. + t5683 + t5684;
  t5697 = -0.21*t5692;
  t5698 = 0.049*t5417;
  t5699 = 0. + t5697 + t5698;
  t5703 = -0.2707*t5702;
  t5704 = 0.0016*t5409;
  t5705 = 0. + t5703 + t5704;
  t5707 = -0.0016*t5702;
  t5708 = -0.2707*t5409;
  t5709 = 0. + t5707 + t5708;
  t5713 = 0.0184*t5712;
  t5714 = -0.7055*t5408;
  t5715 = 0. + t5713 + t5714;
  t5717 = -0.7055*t5712;
  t5718 = -0.0184*t5408;
  t5719 = 0. + t5717 + t5718;
  t5723 = -1.1135*t5722;
  t5724 = 0.0216*t5407;
  t5725 = 0. + t5723 + t5724;
  t5727 = -0.0216*t5722;
  t5728 = -1.1135*t5407;
  t5729 = 0. + t5727 + t5728;
  t5671 = -1.*t5470;
  t5672 = 1. + t5671;
  t5673 = 0.135*t5672;
  t5674 = 0.1305*t5470*t5411;
  t5677 = 0.135*t5676;
  t5678 = 0.049*t5472;
  t5679 = 0. + t5677 + t5678;
  t5680 = t5470*t5679;
  t5686 = t5470*t5472*t5685;
  t5687 = -0.09*t5682;
  t5688 = 0.049*t5422;
  t5689 = 0. + t5687 + t5688;
  t5690 = -1.*t5475*t5689;
  t5696 = t5695*t5478;
  t5700 = t5699*t5482;
  t5706 = t5705*t5485;
  t5710 = t5709*t5491;
  t5716 = t5715*t5495;
  t5720 = t5719*t5501;
  t5726 = t5725*t5504;
  t5730 = t5729*t5509;
  t5731 = 0.0306*t5512;
  t5732 = -1.1312*t5516;
  t5733 = 0. + t5673 + t5674 + t5680 + t5686 + t5690 + t5696 + t5700 + t5706 + t5710 + t5716 + t5720 + t5726 + t5730 + t5731 + t5732;
  t5735 = -0.049*t5676;
  t5736 = t5411*t5415*t5695;
  t5737 = 0.004500000000000004*t5472;
  t5738 = t5411*t5685;
  t5739 = -1.*t5411*t5699*t5422;
  t5740 = t5705*t5426;
  t5741 = t5709*t5434;
  t5742 = t5715*t5438;
  t5743 = t5719*t5446;
  t5744 = t5725*t5448;
  t5745 = t5729*t5454;
  t5746 = 0.0306*t5460;
  t5747 = -1.1312*t5466;
  t5748 = 0. + t5735 + t5736 + t5737 + t5738 + t5739 + t5740 + t5741 + t5742 + t5743 + t5744 + t5745 + t5746 + t5747;
  t870 = 0.135*t620;
  t1174 = -0.1305*t882*t620;
  t4657 = t620*t4628;
  t4889 = t620*t4565*t4849;
  t4935 = t4892*t4921;
  t5102 = t4976*t5081;
  t5138 = t5116*t5135;
  t5191 = t5153*t5190;
  t5249 = t5234*t5246;
  t5292 = t5259*t5286;
  t5315 = t5297*t5313;
  t5359 = t5332*t5356;
  t5376 = t5365*t5375;
  t5381 = t5334*t5332;
  t5384 = t5365*t5344;
  t5386 = t5381 + t5384;
  t5387 = 0.0306*t5386;
  t5393 = t5334*t5365;
  t5394 = -1.*t5332*t5344;
  t5397 = t5393 + t5394;
  t5399 = -1.1312*t5397;
  t5406 = 0. + t870 + t1174 + t4657 + t4889 + t4935 + t5102 + t5138 + t5191 + t5249 + t5292 + t5315 + t5359 + t5376 + t5387 + t5399;
  t5629 = -0.049*t1560;
  t5630 = -0.004500000000000004*t4565;
  t5631 = t882*t4849;
  t5632 = t882*t4745*t5081;
  t5633 = -1.*t882*t4832*t5135;
  t5637 = t5636*t5190;
  t5641 = t5640*t5246;
  t5645 = t5644*t5286;
  t5649 = t5648*t5313;
  t5653 = t5652*t5356;
  t5657 = t5656*t5375;
  t5658 = t5334*t5652;
  t5659 = t5656*t5344;
  t5660 = t5658 + t5659;
  t5661 = 0.0306*t5660;
  t5662 = t5334*t5656;
  t5663 = -1.*t5652*t5344;
  t5664 = t5662 + t5663;
  t5665 = -1.1312*t5664;
  t5666 = 0. + t5629 + t5630 + t5631 + t5632 + t5633 + t5637 + t5641 + t5645 + t5649 + t5653 + t5657 + t5661 + t5665;
  t5577 = -1.*t4892;
  t5578 = 1. + t5577;
  t5579 = -0.135*t5578;
  t5580 = -0.1305*t4892*t882;
  t5581 = t4892*t4628;
  t5582 = t4892*t4565*t4849;
  t5583 = -1.*t620*t4921;
  t5587 = t5586*t5081;
  t5591 = t5590*t5135;
  t5595 = t5594*t5190;
  t5599 = t5598*t5246;
  t5603 = t5602*t5286;
  t5607 = t5606*t5313;
  t5611 = t5610*t5356;
  t5615 = t5614*t5375;
  t5616 = t5334*t5610;
  t5617 = t5614*t5344;
  t5618 = t5616 + t5617;
  t5619 = 0.0306*t5618;
  t5620 = t5334*t5614;
  t5621 = -1.*t5610*t5344;
  t5622 = t5620 + t5621;
  t5623 = -1.1312*t5622;
  t5624 = 0. + t5579 + t5580 + t5581 + t5582 + t5583 + t5587 + t5591 + t5595 + t5599 + t5603 + t5607 + t5611 + t5615 + t5619 + t5623;
  t5756 = -0.135*t5475;
  t5757 = 0.1305*t5411*t5475;
  t5758 = t5475*t5679;
  t5759 = t5475*t5472*t5685;
  t5760 = t5470*t5689;
  t5761 = t5695*t5530;
  t5762 = t5699*t5534;
  t5763 = t5705*t5536;
  t5764 = t5709*t5540;
  t5765 = t5715*t5542;
  t5766 = t5719*t5546;
  t5767 = t5725*t5548;
  t5768 = t5729*t5552;
  t5769 = 0.0306*t5554;
  t5770 = -1.1312*t5558;
  t5771 = 0. + t5756 + t5757 + t5758 + t5759 + t5760 + t5761 + t5762 + t5763 + t5764 + t5765 + t5766 + t5767 + t5768 + t5769 + t5770;
  t5734 = t5522*t5733;
  t5749 = -1.*t5748*t5518;
  t5750 = t5734 + t5749;
  t5788 = t5470*t5411*t5748;
  t5789 = t5472*t5733;
  t5790 = t5788 + t5789;
  t5752 = t5469*t5733;
  t5753 = -1.*t5748*t5525;
  t5754 = t5752 + t5753;
  p_output1[0]=t5406*(0. + t5519 + t5526)*t5575 + (0. + t5522*t5560 - 1.*t5469*t5567)*t5575*t5624 + (0. - 1.*t5518*t5560 + t5525*t5567)*t5575*t5666 + t5575*(-1.*t5560*t5750 + t5567*t5754 - 1.*t5572*t5771);
  p_output1[1]=t5406*(0. - 1.*t5472*t5518 - 1.*t5411*t5470*t5522)*t5575 + (0. + t5411*t5475*t5522 + t5472*t5567)*t5575*t5624 + (0. - 1.*t5411*t5475*t5518 + t5411*t5470*t5567)*t5575*t5666 + t5575*(-1.*t5411*t5475*t5750 + t5563*t5771 - 1.*t5567*t5790);
  p_output1[2]=t5406*(0. + t5568 + t5569)*t5575 + (0. - 1.*t5411*t5469*t5475 - 1.*t5472*t5560)*t5575*t5624 + (0. + t5411*t5475*t5525 - 1.*t5411*t5470*t5560)*t5575*t5666 + t5575*(t5411*t5475*t5754 - 1.*t5570*t5771 + t5560*t5790);
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

#include "p_LeftToeBottom_to_RightToeBottom_mex.hh"

namespace SymExpression
{

void p_LeftToeBottom_to_RightToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
