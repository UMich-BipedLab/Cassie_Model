/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 12:16:18 GMT-04:00
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
  double t3645;
  double t2362;
  double t2460;
  double t3372;
  double t3685;
  double t2271;
  double t3738;
  double t3763;
  double t3775;
  double t3585;
  double t3699;
  double t3710;
  double t3777;
  double t1998;
  double t3844;
  double t3852;
  double t3865;
  double t3716;
  double t3805;
  double t3832;
  double t3867;
  double t1430;
  double t3910;
  double t3921;
  double t3928;
  double t3843;
  double t3888;
  double t3899;
  double t3932;
  double t1208;
  double t3970;
  double t3971;
  double t3989;
  double t3907;
  double t3948;
  double t3954;
  double t3995;
  double t4035;
  double t4071;
  double t4075;
  double t4077;
  double t4048;
  double t4049;
  double t4054;
  double t4104;
  double t4108;
  double t4112;
  double t4063;
  double t4080;
  double t4098;
  double t4140;
  double t4141;
  double t4147;
  double t4101;
  double t4116;
  double t4120;
  double t4182;
  double t4185;
  double t4186;
  double t4169;
  double t4171;
  double t4174;
  double t4202;
  double t4204;
  double t4207;
  double t4181;
  double t4194;
  double t4197;
  double t4213;
  double t4221;
  double t4223;
  double t4200;
  double t4208;
  double t4209;
  double t4234;
  double t4236;
  double t4238;
  double t4210;
  double t4224;
  double t4226;
  double t3964;
  double t4001;
  double t4004;
  double t4012;
  double t4013;
  double t4018;
  double t4134;
  double t4150;
  double t4153;
  double t4155;
  double t4156;
  double t4157;
  double t4229;
  double t4240;
  double t4241;
  double t4253;
  double t4254;
  double t4255;
  double t4269;
  double t4270;
  double t4271;
  double t4243;
  double t4256;
  double t4259;
  double t4154;
  double t4162;
  double t4163;
  double t4274;
  double t4275;
  double t4276;
  double t4009;
  double t4022;
  double t4026;
  double t4307;
  double t4308;
  double t4320;
  double t4322;
  double t4335;
  double t4336;
  double t4347;
  double t4348;
  double t4357;
  double t4358;
  double t4300;
  double t4301;
  double t4309;
  double t4310;
  double t4312;
  double t4323;
  double t4324;
  double t4325;
  double t4327;
  double t4329;
  double t4332;
  double t4337;
  double t4338;
  double t4339;
  double t4342;
  double t4343;
  double t4344;
  double t4349;
  double t4350;
  double t4351;
  double t4353;
  double t4354;
  double t4355;
  double t4359;
  double t4360;
  double t4361;
  double t4363;
  double t4364;
  double t4365;
  double t4266;
  double t4267;
  double t4268;
  double t4292;
  double t4293;
  double t4295;
  double t4298;
  double t4302;
  double t4303;
  double t4304;
  double t4305;
  double t4313;
  double t4314;
  double t4315;
  double t4316;
  double t4317;
  double t4326;
  double t4334;
  double t4341;
  double t4346;
  double t4352;
  double t4356;
  double t4362;
  double t4366;
  double t4367;
  double t4368;
  double t4369;
  double t4371;
  double t4372;
  double t4373;
  double t4374;
  double t4375;
  double t4376;
  double t4377;
  double t4378;
  double t4379;
  double t4380;
  double t4381;
  double t4382;
  double t4383;
  double t4384;
  double t4281;
  double t4282;
  double t4288;
  double t4165;
  double t4262;
  double t4263;
  double t4265;
  double t4273;
  double t4278;
  double t4279;
  double t4280;
  double t4289;
  double t4290;
  double t4291;
  double t4414;
  double t4418;
  double t4419;
  double t4420;
  double t4421;
  double t4423;
  double t4432;
  double t4440;
  double t4441;
  double t4442;
  double t4444;
  double t4447;
  double t4448;
  double t4449;
  double t4454;
  double t4455;
  double t4456;
  double t4458;
  double t4459;
  double t4460;
  double t4462;
  double t4465;
  double t4466;
  double t4467;
  double t4472;
  double t4473;
  double t4474;
  double t4476;
  double t4477;
  double t4478;
  double t4480;
  double t4483;
  double t4484;
  double t4485;
  double t4490;
  double t4491;
  double t4492;
  double t4507;
  double t4415;
  double t4416;
  double t4427;
  double t4429;
  double t4430;
  double t4431;
  double t4433;
  double t4434;
  double t4422;
  double t4424;
  double t4425;
  double t4517;
  double t4436;
  double t4437;
  double t4438;
  double t4443;
  double t4445;
  double t4446;
  double t4522;
  double t4523;
  double t4524;
  double t4526;
  double t4527;
  double t4528;
  double t4451;
  double t4452;
  double t4453;
  double t4461;
  double t4463;
  double t4464;
  double t4530;
  double t4531;
  double t4532;
  double t4534;
  double t4535;
  double t4536;
  double t4469;
  double t4470;
  double t4471;
  double t4479;
  double t4481;
  double t4482;
  double t4538;
  double t4539;
  double t4540;
  double t4542;
  double t4543;
  double t4544;
  double t4487;
  double t4488;
  double t4489;
  double t4546;
  double t4547;
  double t4548;
  double t4550;
  double t4551;
  double t4552;
  double t4512;
  double t4513;
  double t4514;
  double t4518;
  double t4519;
  double t4520;
  double t4570;
  double t4571;
  double t4572;
  double t4574;
  double t4575;
  double t4576;
  double t4578;
  double t4579;
  double t4580;
  double t4582;
  double t4583;
  double t4584;
  double t4586;
  double t4587;
  double t4588;
  double t4590;
  double t4591;
  double t4592;
  double t4594;
  double t4595;
  double t4596;
  double t4598;
  double t4599;
  double t4600;
  double t4392;
  double t4393;
  double t4394;
  double t4395;
  double t4396;
  double t4397;
  double t4398;
  double t4399;
  double t4400;
  double t4401;
  double t4402;
  double t4403;
  double t4404;
  double t4405;
  double t4406;
  double t4407;
  double t4370;
  double t4385;
  double t4386;
  double t4417;
  double t4426;
  double t4428;
  double t4435;
  double t4439;
  double t4450;
  double t4457;
  double t4468;
  double t4475;
  double t4486;
  double t4493;
  double t4494;
  double t4495;
  double t4496;
  double t4497;
  double t4498;
  double t4499;
  double t4500;
  double t4501;
  double t4502;
  double t4508;
  double t4509;
  double t4510;
  double t4511;
  double t4515;
  double t4516;
  double t4521;
  double t4525;
  double t4529;
  double t4533;
  double t4537;
  double t4541;
  double t4545;
  double t4549;
  double t4553;
  double t4554;
  double t4555;
  double t4556;
  double t4557;
  double t4558;
  double t4559;
  double t4560;
  double t4561;
  double t4562;
  double t4565;
  double t4566;
  double t4567;
  double t4568;
  double t4569;
  double t4573;
  double t4577;
  double t4581;
  double t4585;
  double t4589;
  double t4593;
  double t4597;
  double t4601;
  double t4602;
  double t4603;
  double t4604;
  double t4605;
  double t4606;
  double t4607;
  double t4608;
  double t4609;
  double t4610;
  double t4613;
  double t4614;
  double t4615;
  double t4388;
  double t4389;
  double t4390;
  t3645 = Cos(var1[7]);
  t2362 = Cos(var1[9]);
  t2460 = Sin(var1[7]);
  t3372 = Sin(var1[8]);
  t3685 = Sin(var1[9]);
  t2271 = Cos(var1[10]);
  t3738 = t3645*t2362;
  t3763 = -1.*t2460*t3372*t3685;
  t3775 = t3738 + t3763;
  t3585 = t2362*t2460*t3372;
  t3699 = t3645*t3685;
  t3710 = t3585 + t3699;
  t3777 = Sin(var1[10]);
  t1998 = Cos(var1[11]);
  t3844 = t2271*t3775;
  t3852 = -1.*t3710*t3777;
  t3865 = t3844 + t3852;
  t3716 = t2271*t3710;
  t3805 = t3775*t3777;
  t3832 = t3716 + t3805;
  t3867 = Sin(var1[11]);
  t1430 = Cos(var1[12]);
  t3910 = t1998*t3865;
  t3921 = -1.*t3832*t3867;
  t3928 = t3910 + t3921;
  t3843 = t1998*t3832;
  t3888 = t3865*t3867;
  t3899 = t3843 + t3888;
  t3932 = Sin(var1[12]);
  t1208 = Cos(var1[13]);
  t3970 = t1430*t3928;
  t3971 = -1.*t3899*t3932;
  t3989 = t3970 + t3971;
  t3907 = t1430*t3899;
  t3948 = t3928*t3932;
  t3954 = t3907 + t3948;
  t3995 = Sin(var1[13]);
  t4035 = Cos(var1[8]);
  t4071 = -1.*t4035*t2271*t3685;
  t4075 = -1.*t4035*t2362*t3777;
  t4077 = t4071 + t4075;
  t4048 = t4035*t2362*t2271;
  t4049 = -1.*t4035*t3685*t3777;
  t4054 = t4048 + t4049;
  t4104 = t1998*t4077;
  t4108 = -1.*t4054*t3867;
  t4112 = t4104 + t4108;
  t4063 = t1998*t4054;
  t4080 = t4077*t3867;
  t4098 = t4063 + t4080;
  t4140 = t1430*t4112;
  t4141 = -1.*t4098*t3932;
  t4147 = t4140 + t4141;
  t4101 = t1430*t4098;
  t4116 = t4112*t3932;
  t4120 = t4101 + t4116;
  t4182 = -1.*t2362*t2460;
  t4185 = -1.*t3645*t3372*t3685;
  t4186 = t4182 + t4185;
  t4169 = t3645*t2362*t3372;
  t4171 = -1.*t2460*t3685;
  t4174 = t4169 + t4171;
  t4202 = t2271*t4186;
  t4204 = -1.*t4174*t3777;
  t4207 = t4202 + t4204;
  t4181 = t2271*t4174;
  t4194 = t4186*t3777;
  t4197 = t4181 + t4194;
  t4213 = t1998*t4207;
  t4221 = -1.*t4197*t3867;
  t4223 = t4213 + t4221;
  t4200 = t1998*t4197;
  t4208 = t4207*t3867;
  t4209 = t4200 + t4208;
  t4234 = t1430*t4223;
  t4236 = -1.*t4209*t3932;
  t4238 = t4234 + t4236;
  t4210 = t1430*t4209;
  t4224 = t4223*t3932;
  t4226 = t4210 + t4224;
  t3964 = t1208*t3954;
  t4001 = t3989*t3995;
  t4004 = t3964 + t4001;
  t4012 = t1208*t3989;
  t4013 = -1.*t3954*t3995;
  t4018 = t4012 + t4013;
  t4134 = t1208*t4120;
  t4150 = t4147*t3995;
  t4153 = t4134 + t4150;
  t4155 = t1208*t4147;
  t4156 = -1.*t4120*t3995;
  t4157 = t4155 + t4156;
  t4229 = t1208*t4226;
  t4240 = t4238*t3995;
  t4241 = t4229 + t4240;
  t4253 = t1208*t4238;
  t4254 = -1.*t4226*t3995;
  t4255 = t4253 + t4254;
  t4269 = 0.642788*t4153;
  t4270 = 0.766044*t4157;
  t4271 = t4269 + t4270;
  t4243 = -0.766044*t4241;
  t4256 = 0.642788*t4255;
  t4259 = t4243 + t4256;
  t4154 = -0.766044*t4153;
  t4162 = 0.642788*t4157;
  t4163 = t4154 + t4162;
  t4274 = 0.642788*t4241;
  t4275 = 0.766044*t4255;
  t4276 = t4274 + t4275;
  t4009 = 0.642788*t4004;
  t4022 = 0.766044*t4018;
  t4026 = t4009 + t4022;
  t4307 = -1.*t2362;
  t4308 = 1. + t4307;
  t4320 = -1.*t2271;
  t4322 = 1. + t4320;
  t4335 = -1.*t1998;
  t4336 = 1. + t4335;
  t4347 = -1.*t1430;
  t4348 = 1. + t4347;
  t4357 = -1.*t1208;
  t4358 = 1. + t4357;
  t4300 = -1.*t4035;
  t4301 = 1. + t4300;
  t4309 = -0.049*t4308;
  t4310 = -0.09*t3685;
  t4312 = 0. + t4309 + t4310;
  t4323 = -0.049*t4322;
  t4324 = -0.21*t3777;
  t4325 = 0. + t4323 + t4324;
  t4327 = -0.21*t4322;
  t4329 = 0.049*t3777;
  t4332 = 0. + t4327 + t4329;
  t4337 = -0.0016*t4336;
  t4338 = -0.2707*t3867;
  t4339 = 0. + t4337 + t4338;
  t4342 = -0.2707*t4336;
  t4343 = 0.0016*t3867;
  t4344 = 0. + t4342 + t4343;
  t4349 = 0.0184*t4348;
  t4350 = -0.7055*t3932;
  t4351 = 0. + t4349 + t4350;
  t4353 = -0.7055*t4348;
  t4354 = -0.0184*t3932;
  t4355 = 0. + t4353 + t4354;
  t4359 = -0.0216*t4358;
  t4360 = -1.1135*t3995;
  t4361 = 0. + t4359 + t4360;
  t4363 = -1.1135*t4358;
  t4364 = 0.0216*t3995;
  t4365 = 0. + t4363 + t4364;
  t4266 = -0.766044*t4004;
  t4267 = 0.642788*t4018;
  t4268 = t4266 + t4267;
  t4292 = -1.*t3645;
  t4293 = 1. + t4292;
  t4295 = -0.135*t4293;
  t4298 = -0.1305*t3645*t4035;
  t4302 = -0.135*t4301;
  t4303 = 0.049*t3372;
  t4304 = 0. + t4302 + t4303;
  t4305 = t3645*t4304;
  t4313 = t3645*t3372*t4312;
  t4314 = -0.09*t4308;
  t4315 = 0.049*t3685;
  t4316 = 0. + t4314 + t4315;
  t4317 = -1.*t2460*t4316;
  t4326 = t4174*t4325;
  t4334 = t4186*t4332;
  t4341 = t4197*t4339;
  t4346 = t4207*t4344;
  t4352 = t4209*t4351;
  t4356 = t4223*t4355;
  t4362 = t4226*t4361;
  t4366 = t4238*t4365;
  t4367 = 0.0306*t4241;
  t4368 = -1.1312*t4255;
  t4369 = 0. + t4295 + t4298 + t4305 + t4313 + t4317 + t4326 + t4334 + t4341 + t4346 + t4352 + t4356 + t4362 + t4366 + t4367 + t4368;
  t4371 = -0.049*t4301;
  t4372 = -0.004500000000000004*t3372;
  t4373 = t4035*t4312;
  t4374 = t4035*t2362*t4325;
  t4375 = -1.*t4035*t3685*t4332;
  t4376 = t4054*t4339;
  t4377 = t4077*t4344;
  t4378 = t4098*t4351;
  t4379 = t4112*t4355;
  t4380 = t4120*t4361;
  t4381 = t4147*t4365;
  t4382 = 0.0306*t4153;
  t4383 = -1.1312*t4157;
  t4384 = 0. + t4371 + t4372 + t4373 + t4374 + t4375 + t4376 + t4377 + t4378 + t4379 + t4380 + t4381 + t4382 + t4383;
  t4281 = t4271*t4259;
  t4282 = -1.*t4163*t4276;
  t4288 = t4281 + t4282;
  t4165 = t3645*t4035*t4163;
  t4262 = t3372*t4259;
  t4263 = t4165 + t4262;
  t4265 = -1.*t4026*t4263;
  t4273 = t3645*t4035*t4271;
  t4278 = t3372*t4276;
  t4279 = t4273 + t4278;
  t4280 = t4268*t4279;
  t4289 = -1.*t4035*t2460*t4288;
  t4290 = 0. + t4265 + t4280 + t4289;
  t4291 = 1/t4290;
  t4414 = Cos(var1[1]);
  t4418 = Cos(var1[2]);
  t4419 = Cos(var1[3]);
  t4420 = -1.*t4419;
  t4421 = 1. + t4420;
  t4423 = Sin(var1[3]);
  t4432 = Sin(var1[2]);
  t4440 = Cos(var1[4]);
  t4441 = -1.*t4440;
  t4442 = 1. + t4441;
  t4444 = Sin(var1[4]);
  t4447 = -1.*t4414*t4418*t4423;
  t4448 = -1.*t4419*t4414*t4432;
  t4449 = t4447 + t4448;
  t4454 = t4419*t4414*t4418;
  t4455 = -1.*t4414*t4423*t4432;
  t4456 = t4454 + t4455;
  t4458 = Cos(var1[5]);
  t4459 = -1.*t4458;
  t4460 = 1. + t4459;
  t4462 = Sin(var1[5]);
  t4465 = t4444*t4449;
  t4466 = t4440*t4456;
  t4467 = t4465 + t4466;
  t4472 = t4440*t4449;
  t4473 = -1.*t4444*t4456;
  t4474 = t4472 + t4473;
  t4476 = Cos(var1[6]);
  t4477 = -1.*t4476;
  t4478 = 1. + t4477;
  t4480 = Sin(var1[6]);
  t4483 = -1.*t4462*t4467;
  t4484 = t4458*t4474;
  t4485 = t4483 + t4484;
  t4490 = t4458*t4467;
  t4491 = t4462*t4474;
  t4492 = t4490 + t4491;
  t4507 = Cos(var1[0]);
  t4415 = -1.*t4414;
  t4416 = 1. + t4415;
  t4427 = Sin(var1[1]);
  t4429 = -1.*t4418;
  t4430 = 1. + t4429;
  t4431 = -0.049*t4430;
  t4433 = -0.09*t4432;
  t4434 = 0. + t4431 + t4433;
  t4422 = -0.049*t4421;
  t4424 = -0.21*t4423;
  t4425 = 0. + t4422 + t4424;
  t4517 = Sin(var1[0]);
  t4436 = -0.21*t4421;
  t4437 = 0.049*t4423;
  t4438 = 0. + t4436 + t4437;
  t4443 = -0.2707*t4442;
  t4445 = 0.0016*t4444;
  t4446 = 0. + t4443 + t4445;
  t4522 = t4507*t4418*t4427;
  t4523 = -1.*t4517*t4432;
  t4524 = t4522 + t4523;
  t4526 = -1.*t4418*t4517;
  t4527 = -1.*t4507*t4427*t4432;
  t4528 = t4526 + t4527;
  t4451 = -0.0016*t4442;
  t4452 = -0.2707*t4444;
  t4453 = 0. + t4451 + t4452;
  t4461 = 0.0184*t4460;
  t4463 = -0.7055*t4462;
  t4464 = 0. + t4461 + t4463;
  t4530 = -1.*t4423*t4524;
  t4531 = t4419*t4528;
  t4532 = t4530 + t4531;
  t4534 = t4419*t4524;
  t4535 = t4423*t4528;
  t4536 = t4534 + t4535;
  t4469 = -0.7055*t4460;
  t4470 = -0.0184*t4462;
  t4471 = 0. + t4469 + t4470;
  t4479 = -1.1135*t4478;
  t4481 = 0.0216*t4480;
  t4482 = 0. + t4479 + t4481;
  t4538 = t4444*t4532;
  t4539 = t4440*t4536;
  t4540 = t4538 + t4539;
  t4542 = t4440*t4532;
  t4543 = -1.*t4444*t4536;
  t4544 = t4542 + t4543;
  t4487 = -0.0216*t4478;
  t4488 = -1.1135*t4480;
  t4489 = 0. + t4487 + t4488;
  t4546 = -1.*t4462*t4540;
  t4547 = t4458*t4544;
  t4548 = t4546 + t4547;
  t4550 = t4458*t4540;
  t4551 = t4462*t4544;
  t4552 = t4550 + t4551;
  t4512 = 0.135*t4416;
  t4513 = 0.049*t4427;
  t4514 = 0. + t4512 + t4513;
  t4518 = -0.09*t4430;
  t4519 = 0.049*t4432;
  t4520 = 0. + t4518 + t4519;
  t4570 = t4418*t4517*t4427;
  t4571 = t4507*t4432;
  t4572 = t4570 + t4571;
  t4574 = t4507*t4418;
  t4575 = -1.*t4517*t4427*t4432;
  t4576 = t4574 + t4575;
  t4578 = -1.*t4423*t4572;
  t4579 = t4419*t4576;
  t4580 = t4578 + t4579;
  t4582 = t4419*t4572;
  t4583 = t4423*t4576;
  t4584 = t4582 + t4583;
  t4586 = t4444*t4580;
  t4587 = t4440*t4584;
  t4588 = t4586 + t4587;
  t4590 = t4440*t4580;
  t4591 = -1.*t4444*t4584;
  t4592 = t4590 + t4591;
  t4594 = -1.*t4462*t4588;
  t4595 = t4458*t4592;
  t4596 = t4594 + t4595;
  t4598 = t4458*t4588;
  t4599 = t4462*t4592;
  t4600 = t4598 + t4599;
  t4392 = 0.135*t2460;
  t4393 = -0.1305*t4035*t2460;
  t4394 = t2460*t4304;
  t4395 = t2460*t3372*t4312;
  t4396 = t3645*t4316;
  t4397 = t3710*t4325;
  t4398 = t3775*t4332;
  t4399 = t3832*t4339;
  t4400 = t3865*t4344;
  t4401 = t3899*t4351;
  t4402 = t3928*t4355;
  t4403 = t3954*t4361;
  t4404 = t3989*t4365;
  t4405 = 0.0306*t4004;
  t4406 = -1.1312*t4018;
  t4407 = 0. + t4392 + t4393 + t4394 + t4395 + t4396 + t4397 + t4398 + t4399 + t4400 + t4401 + t4402 + t4403 + t4404 + t4405 + t4406;
  t4370 = t4163*t4369;
  t4385 = -1.*t4384*t4259;
  t4386 = t4370 + t4385;
  t4417 = -0.049*t4416;
  t4426 = t4414*t4418*t4425;
  t4428 = 0.004500000000000004*t4427;
  t4435 = t4414*t4434;
  t4439 = -1.*t4414*t4438*t4432;
  t4450 = t4446*t4449;
  t4457 = t4453*t4456;
  t4468 = t4464*t4467;
  t4475 = t4471*t4474;
  t4486 = t4482*t4485;
  t4493 = t4489*t4492;
  t4494 = t4480*t4485;
  t4495 = t4476*t4492;
  t4496 = t4494 + t4495;
  t4497 = 0.0306*t4496;
  t4498 = t4476*t4485;
  t4499 = -1.*t4480*t4492;
  t4500 = t4498 + t4499;
  t4501 = -1.1312*t4500;
  t4502 = 0. + t4417 + t4426 + t4428 + t4435 + t4439 + t4450 + t4457 + t4468 + t4475 + t4486 + t4493 + t4497 + t4501;
  t4508 = -1.*t4507;
  t4509 = 1. + t4508;
  t4510 = 0.135*t4509;
  t4511 = 0.1305*t4507*t4414;
  t4515 = t4507*t4514;
  t4516 = t4507*t4427*t4434;
  t4521 = -1.*t4517*t4520;
  t4525 = t4425*t4524;
  t4529 = t4438*t4528;
  t4533 = t4446*t4532;
  t4537 = t4453*t4536;
  t4541 = t4464*t4540;
  t4545 = t4471*t4544;
  t4549 = t4482*t4548;
  t4553 = t4489*t4552;
  t4554 = t4480*t4548;
  t4555 = t4476*t4552;
  t4556 = t4554 + t4555;
  t4557 = 0.0306*t4556;
  t4558 = t4476*t4548;
  t4559 = -1.*t4480*t4552;
  t4560 = t4558 + t4559;
  t4561 = -1.1312*t4560;
  t4562 = 0. + t4510 + t4511 + t4515 + t4516 + t4521 + t4525 + t4529 + t4533 + t4537 + t4541 + t4545 + t4549 + t4553 + t4557 + t4561;
  t4565 = -0.135*t4517;
  t4566 = 0.1305*t4414*t4517;
  t4567 = t4517*t4514;
  t4568 = t4517*t4427*t4434;
  t4569 = t4507*t4520;
  t4573 = t4425*t4572;
  t4577 = t4438*t4576;
  t4581 = t4446*t4580;
  t4585 = t4453*t4584;
  t4589 = t4464*t4588;
  t4593 = t4471*t4592;
  t4597 = t4482*t4596;
  t4601 = t4489*t4600;
  t4602 = t4480*t4596;
  t4603 = t4476*t4600;
  t4604 = t4602 + t4603;
  t4605 = 0.0306*t4604;
  t4606 = t4476*t4596;
  t4607 = -1.*t4480*t4600;
  t4608 = t4606 + t4607;
  t4609 = -1.1312*t4608;
  t4610 = 0. + t4565 + t4566 + t4567 + t4568 + t4569 + t4573 + t4577 + t4581 + t4585 + t4589 + t4593 + t4597 + t4601 + t4605 + t4609;
  t4613 = t3645*t4035*t4384;
  t4614 = t3372*t4369;
  t4615 = t4613 + t4614;
  t4388 = t4271*t4369;
  t4389 = -1.*t4384*t4276;
  t4390 = t4388 + t4389;
  p_output1[0]=t4291*(-1.*t4026*t4386 + t4268*t4390 - 1.*t4288*t4407) + (0. - 1.*t4026*t4259 + t4268*t4276)*t4291*t4502 + (0. + t4026*t4163 - 1.*t4268*t4271)*t4291*t4562 + (0. + t4281 + t4282)*t4291*t4610;
  p_output1[1]=(0. - 1.*t2460*t4035*t4259 + t3645*t4035*t4268)*t4291*t4502 + (0. + t2460*t4035*t4163 + t3372*t4268)*t4291*t4562 + (0. - 1.*t3645*t4035*t4163 - 1.*t3372*t4259)*t4291*t4610 + t4291*(-1.*t2460*t4035*t4386 + t4263*t4407 - 1.*t4268*t4615);
  p_output1[2]=(0. - 1.*t3645*t4026*t4035 + t2460*t4035*t4276)*t4291*t4502 + (0. - 1.*t3372*t4026 - 1.*t2460*t4035*t4271)*t4291*t4562 + (0. + t4273 + t4278)*t4291*t4610 + t4291*(t2460*t4035*t4390 - 1.*t4279*t4407 + t4026*t4615);
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

#include "p_RightToeBottom_to_LeftToeBottom_mex.hh"

namespace SymExpression
{

void p_RightToeBottom_to_LeftToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
