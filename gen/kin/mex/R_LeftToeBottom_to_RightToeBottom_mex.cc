/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 12:16:20 GMT-04:00
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
  double t234;
  double t1060;
  double t645;
  double t729;
  double t1071;
  double t1287;
  double t1046;
  double t1078;
  double t1145;
  double t195;
  double t1311;
  double t1723;
  double t2615;
  double t4395;
  double t1152;
  double t2664;
  double t4338;
  double t185;
  double t4408;
  double t4433;
  double t4451;
  double t4515;
  double t4359;
  double t4452;
  double t4468;
  double t151;
  double t4519;
  double t4525;
  double t4531;
  double t4670;
  double t4650;
  double t4652;
  double t4657;
  double t4690;
  double t4712;
  double t4734;
  double t4736;
  double t4738;
  double t4721;
  double t4742;
  double t4745;
  double t4758;
  double t4760;
  double t4765;
  double t4755;
  double t4766;
  double t4771;
  double t4778;
  double t4787;
  double t4790;
  double t4774;
  double t4813;
  double t4815;
  double t4839;
  double t4841;
  double t4842;
  double t4506;
  double t4554;
  double t4560;
  double t4566;
  double t4587;
  double t4623;
  double t4832;
  double t4845;
  double t4846;
  double t4856;
  double t4870;
  double t4871;
  double t4904;
  double t4908;
  double t4909;
  double t4917;
  double t4919;
  double t4921;
  double t4916;
  double t4929;
  double t4935;
  double t4945;
  double t4948;
  double t4951;
  double t4938;
  double t4955;
  double t4958;
  double t4968;
  double t4972;
  double t4975;
  double t4964;
  double t4976;
  double t4980;
  double t4985;
  double t4986;
  double t4992;
  double t4881;
  double t4884;
  double t4885;
  double t4849;
  double t4875;
  double t4877;
  double t4982;
  double t4999;
  double t5002;
  double t5014;
  double t5016;
  double t5017;
  double t4565;
  double t4628;
  double t4630;
  double t4889;
  double t4892;
  double t4893;
  double t4879;
  double t4895;
  double t104;
  double t5035;
  double t5036;
  double t5038;
  double t5012;
  double t5022;
  double t5024;
  double t5026;
  double t5027;
  double t5029;
  double t5033;
  double t5042;
  double t5044;
  double t5047;
  double t5049;
  double t5053;
  double t5054;
  double t5055;
  double t5056;
  double t130;
  double t5080;
  double t5061;
  double t5141;
  double t5144;
  double t5140;
  double t5153;
  double t5154;
  double t5155;
  double t5142;
  double t5146;
  double t5149;
  double t5156;
  double t5139;
  double t5162;
  double t5163;
  double t5164;
  double t5150;
  double t5159;
  double t5160;
  double t5169;
  double t5138;
  double t5173;
  double t5174;
  double t5176;
  double t5161;
  double t5170;
  double t5171;
  double t5179;
  double t5135;
  double t5183;
  double t5184;
  double t5185;
  double t5172;
  double t5180;
  double t5181;
  double t5186;
  double t4901;
  double t5208;
  double t5209;
  double t5210;
  double t5202;
  double t5203;
  double t5206;
  double t5218;
  double t5219;
  double t5220;
  double t5207;
  double t5211;
  double t5213;
  double t5232;
  double t5233;
  double t5234;
  double t5217;
  double t5221;
  double t5222;
  double t5238;
  double t5239;
  double t5242;
  double t5227;
  double t5235;
  double t5236;
  double t5064;
  double t5065;
  double t5066;
  double t5260;
  double t5261;
  double t5262;
  double t5255;
  double t5256;
  double t5258;
  double t5269;
  double t5270;
  double t5271;
  double t5259;
  double t5263;
  double t5265;
  double t5276;
  double t5277;
  double t5278;
  double t5268;
  double t5273;
  double t5274;
  double t5081;
  double t5083;
  double t5084;
  double t5182;
  double t5189;
  double t5190;
  double t5191;
  double t5192;
  double t5193;
  double t5194;
  double t5195;
  double t5200;
  double t5092;
  double t5093;
  double t5095;
  double t5275;
  double t5279;
  double t5280;
  double t5281;
  double t5282;
  double t5284;
  double t5285;
  double t5286;
  double t5287;
  double t5101;
  double t5102;
  double t5104;
  double t5237;
  double t5243;
  double t5244;
  double t5245;
  double t5246;
  double t5248;
  double t5249;
  double t5250;
  double t5253;
  double t5106;
  double t5107;
  double t5108;
  double t5115;
  double t5117;
  double t5121;
  double t5124;
  double t5127;
  double t5128;
  double t5131;
  double t5302;
  double t5303;
  double t5306;
  double t5314;
  double t5315;
  double t5316;
  double t5308;
  double t5309;
  double t5312;
  t234 = Cos(var1[1]);
  t1060 = Cos(var1[3]);
  t645 = Cos(var1[2]);
  t729 = Sin(var1[3]);
  t1071 = Sin(var1[2]);
  t1287 = Cos(var1[4]);
  t1046 = -1.*t234*t645*t729;
  t1078 = -1.*t1060*t234*t1071;
  t1145 = t1046 + t1078;
  t195 = Sin(var1[4]);
  t1311 = t1060*t234*t645;
  t1723 = -1.*t234*t729*t1071;
  t2615 = t1311 + t1723;
  t4395 = Cos(var1[5]);
  t1152 = t195*t1145;
  t2664 = t1287*t2615;
  t4338 = t1152 + t2664;
  t185 = Sin(var1[5]);
  t4408 = t1287*t1145;
  t4433 = -1.*t195*t2615;
  t4451 = t4408 + t4433;
  t4515 = Cos(var1[6]);
  t4359 = -1.*t185*t4338;
  t4452 = t4395*t4451;
  t4468 = t4359 + t4452;
  t151 = Sin(var1[6]);
  t4519 = t4395*t4338;
  t4525 = t185*t4451;
  t4531 = t4519 + t4525;
  t4670 = Sin(var1[0]);
  t4650 = Cos(var1[0]);
  t4652 = Sin(var1[1]);
  t4657 = t4650*t645*t4652;
  t4690 = -1.*t4670*t1071;
  t4712 = t4657 + t4690;
  t4734 = -1.*t645*t4670;
  t4736 = -1.*t4650*t4652*t1071;
  t4738 = t4734 + t4736;
  t4721 = -1.*t729*t4712;
  t4742 = t1060*t4738;
  t4745 = t4721 + t4742;
  t4758 = t1060*t4712;
  t4760 = t729*t4738;
  t4765 = t4758 + t4760;
  t4755 = t195*t4745;
  t4766 = t1287*t4765;
  t4771 = t4755 + t4766;
  t4778 = t1287*t4745;
  t4787 = -1.*t195*t4765;
  t4790 = t4778 + t4787;
  t4774 = -1.*t185*t4771;
  t4813 = t4395*t4790;
  t4815 = t4774 + t4813;
  t4839 = t4395*t4771;
  t4841 = t185*t4790;
  t4842 = t4839 + t4841;
  t4506 = t151*t4468;
  t4554 = t4515*t4531;
  t4560 = t4506 + t4554;
  t4566 = t4515*t4468;
  t4587 = -1.*t151*t4531;
  t4623 = t4566 + t4587;
  t4832 = t151*t4815;
  t4845 = t4515*t4842;
  t4846 = t4832 + t4845;
  t4856 = t4515*t4815;
  t4870 = -1.*t151*t4842;
  t4871 = t4856 + t4870;
  t4904 = t645*t4670*t4652;
  t4908 = t4650*t1071;
  t4909 = t4904 + t4908;
  t4917 = t4650*t645;
  t4919 = -1.*t4670*t4652*t1071;
  t4921 = t4917 + t4919;
  t4916 = -1.*t729*t4909;
  t4929 = t1060*t4921;
  t4935 = t4916 + t4929;
  t4945 = t1060*t4909;
  t4948 = t729*t4921;
  t4951 = t4945 + t4948;
  t4938 = t195*t4935;
  t4955 = t1287*t4951;
  t4958 = t4938 + t4955;
  t4968 = t1287*t4935;
  t4972 = -1.*t195*t4951;
  t4975 = t4968 + t4972;
  t4964 = -1.*t185*t4958;
  t4976 = t4395*t4975;
  t4980 = t4964 + t4976;
  t4985 = t4395*t4958;
  t4986 = t185*t4975;
  t4992 = t4985 + t4986;
  t4881 = -0.766044*t4560;
  t4884 = 0.642788*t4623;
  t4885 = t4881 + t4884;
  t4849 = -0.766044*t4846;
  t4875 = 0.642788*t4871;
  t4877 = t4849 + t4875;
  t4982 = t151*t4980;
  t4999 = t4515*t4992;
  t5002 = t4982 + t4999;
  t5014 = t4515*t4980;
  t5016 = -1.*t151*t4992;
  t5017 = t5014 + t5016;
  t4565 = 0.642788*t4560;
  t4628 = 0.766044*t4623;
  t4630 = t4565 + t4628;
  t4889 = 0.642788*t4846;
  t4892 = 0.766044*t4871;
  t4893 = t4889 + t4892;
  t4879 = t4630*t4877;
  t4895 = -1.*t4885*t4893;
  t104 = Cos(var1[8]);
  t5035 = -0.766044*t5002;
  t5036 = 0.642788*t5017;
  t5038 = t5035 + t5036;
  t5012 = 0.642788*t5002;
  t5022 = 0.766044*t5017;
  t5024 = t5012 + t5022;
  t5026 = t4650*t234*t4885;
  t5027 = t4652*t4877;
  t5029 = t5026 + t5027;
  t5033 = -1.*t5024*t5029;
  t5042 = t4650*t234*t4630;
  t5044 = t4652*t4893;
  t5047 = t5042 + t5044;
  t5049 = t5038*t5047;
  t5053 = t4879 + t4895;
  t5054 = -1.*t234*t4670*t5053;
  t5055 = 0. + t5033 + t5049 + t5054;
  t5056 = 1/t5055;
  t130 = Sin(var1[7]);
  t5080 = Sin(var1[8]);
  t5061 = Cos(var1[7]);
  t5141 = Cos(var1[9]);
  t5144 = Sin(var1[9]);
  t5140 = Cos(var1[10]);
  t5153 = t5061*t5141;
  t5154 = -1.*t130*t5080*t5144;
  t5155 = t5153 + t5154;
  t5142 = t5141*t130*t5080;
  t5146 = t5061*t5144;
  t5149 = t5142 + t5146;
  t5156 = Sin(var1[10]);
  t5139 = Cos(var1[11]);
  t5162 = t5140*t5155;
  t5163 = -1.*t5149*t5156;
  t5164 = t5162 + t5163;
  t5150 = t5140*t5149;
  t5159 = t5155*t5156;
  t5160 = t5150 + t5159;
  t5169 = Sin(var1[11]);
  t5138 = Cos(var1[12]);
  t5173 = t5139*t5164;
  t5174 = -1.*t5160*t5169;
  t5176 = t5173 + t5174;
  t5161 = t5139*t5160;
  t5170 = t5164*t5169;
  t5171 = t5161 + t5170;
  t5179 = Sin(var1[12]);
  t5135 = Cos(var1[13]);
  t5183 = t5138*t5176;
  t5184 = -1.*t5171*t5179;
  t5185 = t5183 + t5184;
  t5172 = t5138*t5171;
  t5180 = t5176*t5179;
  t5181 = t5172 + t5180;
  t5186 = Sin(var1[13]);
  t4901 = 0. + t4879 + t4895;
  t5208 = -1.*t5141*t130;
  t5209 = -1.*t5061*t5080*t5144;
  t5210 = t5208 + t5209;
  t5202 = t5061*t5141*t5080;
  t5203 = -1.*t130*t5144;
  t5206 = t5202 + t5203;
  t5218 = t5140*t5210;
  t5219 = -1.*t5206*t5156;
  t5220 = t5218 + t5219;
  t5207 = t5140*t5206;
  t5211 = t5210*t5156;
  t5213 = t5207 + t5211;
  t5232 = t5139*t5220;
  t5233 = -1.*t5213*t5169;
  t5234 = t5232 + t5233;
  t5217 = t5139*t5213;
  t5221 = t5220*t5169;
  t5222 = t5217 + t5221;
  t5238 = t5138*t5234;
  t5239 = -1.*t5222*t5179;
  t5242 = t5238 + t5239;
  t5227 = t5138*t5222;
  t5235 = t5234*t5179;
  t5236 = t5227 + t5235;
  t5064 = -1.*t4630*t5038;
  t5065 = t4885*t5024;
  t5066 = 0. + t5064 + t5065;
  t5260 = -1.*t104*t5140*t5144;
  t5261 = -1.*t104*t5141*t5156;
  t5262 = t5260 + t5261;
  t5255 = t104*t5141*t5140;
  t5256 = -1.*t104*t5144*t5156;
  t5258 = t5255 + t5256;
  t5269 = t5139*t5262;
  t5270 = -1.*t5258*t5169;
  t5271 = t5269 + t5270;
  t5259 = t5139*t5258;
  t5263 = t5262*t5169;
  t5265 = t5259 + t5263;
  t5276 = t5138*t5271;
  t5277 = -1.*t5265*t5179;
  t5278 = t5276 + t5277;
  t5268 = t5138*t5265;
  t5273 = t5271*t5179;
  t5274 = t5268 + t5273;
  t5081 = t4893*t5038;
  t5083 = -1.*t4877*t5024;
  t5084 = 0. + t5081 + t5083;
  t5182 = t5135*t5181;
  t5189 = t5185*t5186;
  t5190 = t5182 + t5189;
  t5191 = 0.642788*t5190;
  t5192 = t5135*t5185;
  t5193 = -1.*t5181*t5186;
  t5194 = t5192 + t5193;
  t5195 = 0.766044*t5194;
  t5200 = t5191 + t5195;
  t5092 = -1.*t4650*t234*t4885;
  t5093 = -1.*t4652*t4877;
  t5095 = 0. + t5092 + t5093;
  t5275 = t5135*t5274;
  t5279 = t5278*t5186;
  t5280 = t5275 + t5279;
  t5281 = 0.642788*t5280;
  t5282 = t5135*t5278;
  t5284 = -1.*t5274*t5186;
  t5285 = t5282 + t5284;
  t5286 = 0.766044*t5285;
  t5287 = t5281 + t5286;
  t5101 = -1.*t234*t4670*t4877;
  t5102 = t4650*t234*t5038;
  t5104 = 0. + t5101 + t5102;
  t5237 = t5135*t5236;
  t5243 = t5242*t5186;
  t5244 = t5237 + t5243;
  t5245 = 0.642788*t5244;
  t5246 = t5135*t5242;
  t5248 = -1.*t5236*t5186;
  t5249 = t5246 + t5248;
  t5250 = 0.766044*t5249;
  t5253 = t5245 + t5250;
  t5106 = t234*t4670*t4885;
  t5107 = t4652*t5038;
  t5108 = 0. + t5106 + t5107;
  t5115 = 0. + t5042 + t5044;
  t5117 = t234*t4670*t4893;
  t5121 = -1.*t4650*t234*t5024;
  t5124 = 0. + t5117 + t5121;
  t5127 = -1.*t234*t4670*t4630;
  t5128 = -1.*t4652*t5024;
  t5131 = 0. + t5127 + t5128;
  t5302 = -0.766044*t5190;
  t5303 = 0.642788*t5194;
  t5306 = t5302 + t5303;
  t5314 = -0.766044*t5280;
  t5315 = 0.642788*t5285;
  t5316 = t5314 + t5315;
  t5308 = -0.766044*t5244;
  t5309 = 0.642788*t5249;
  t5312 = t5308 + t5309;
  p_output1[0]=0. - 1.*t104*t130*t4901*t5056 - 1.*t104*t5056*t5061*t5066 + t5056*t5080*t5084;
  p_output1[1]=0. - 1.*t104*t130*t5056*t5095 + t5056*t5080*t5104 - 1.*t104*t5056*t5061*t5108;
  p_output1[2]=0. - 1.*t104*t130*t5056*t5115 + t5056*t5080*t5124 - 1.*t104*t5056*t5061*t5131;
  p_output1[3]=0. + t4901*t5056*t5200 + t5056*t5066*t5253 + t5056*t5084*t5287;
  p_output1[4]=0. + t5056*t5095*t5200 + t5056*t5108*t5253 + t5056*t5104*t5287;
  p_output1[5]=0. + t5056*t5115*t5200 + t5056*t5131*t5253 + t5056*t5124*t5287;
  p_output1[6]=0. + t4901*t5056*t5306 + t5056*t5066*t5312 + t5056*t5084*t5316;
  p_output1[7]=0. + t5056*t5095*t5306 + t5056*t5108*t5312 + t5056*t5104*t5316;
  p_output1[8]=0. + t5056*t5115*t5306 + t5056*t5131*t5312 + t5056*t5124*t5316;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "R_LeftToeBottom_to_RightToeBottom_mex.hh"

namespace SymExpression
{

void R_LeftToeBottom_to_RightToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
