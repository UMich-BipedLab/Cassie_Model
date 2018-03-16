/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 12:15:56 GMT-04:00
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
  double t6;
  double t16;
  double t18;
  double t15;
  double t19;
  double t14;
  double t23;
  double t24;
  double t25;
  double t17;
  double t20;
  double t21;
  double t26;
  double t13;
  double t30;
  double t31;
  double t32;
  double t22;
  double t27;
  double t28;
  double t33;
  double t12;
  double t37;
  double t38;
  double t39;
  double t29;
  double t34;
  double t35;
  double t40;
  double t5;
  double t3;
  double t9;
  double t53;
  double t54;
  double t55;
  double t49;
  double t50;
  double t51;
  double t59;
  double t60;
  double t61;
  double t52;
  double t56;
  double t57;
  double t65;
  double t66;
  double t67;
  double t58;
  double t62;
  double t63;
  double t71;
  double t72;
  double t73;
  double t64;
  double t68;
  double t69;
  double t86;
  double t87;
  double t88;
  double t82;
  double t83;
  double t84;
  double t92;
  double t93;
  double t94;
  double t85;
  double t89;
  double t90;
  double t98;
  double t99;
  double t100;
  double t91;
  double t95;
  double t96;
  double t104;
  double t105;
  double t106;
  double t97;
  double t101;
  double t102;
  double t36;
  double t41;
  double t42;
  double t44;
  double t45;
  double t46;
  double t70;
  double t74;
  double t75;
  double t77;
  double t78;
  double t79;
  double t103;
  double t107;
  double t108;
  double t110;
  double t111;
  double t112;
  double t134;
  double t135;
  double t144;
  double t145;
  double t154;
  double t155;
  double t164;
  double t165;
  double t124;
  double t125;
  double t128;
  double t129;
  double t130;
  double t131;
  double t132;
  double t136;
  double t137;
  double t138;
  double t140;
  double t141;
  double t142;
  double t146;
  double t147;
  double t148;
  double t150;
  double t151;
  double t152;
  double t156;
  double t157;
  double t158;
  double t160;
  double t161;
  double t162;
  double t166;
  double t167;
  double t168;
  double t170;
  double t171;
  double t172;
  double t181;
  double t182;
  double t183;
  double t186;
  double t187;
  double t188;
  t6 = Cos(var1[8]);
  t16 = Cos(var1[10]);
  t18 = Sin(var1[9]);
  t15 = Cos(var1[9]);
  t19 = Sin(var1[10]);
  t14 = Cos(var1[11]);
  t23 = -1.*t6*t16*t18;
  t24 = -1.*t6*t15*t19;
  t25 = t23 + t24;
  t17 = t6*t15*t16;
  t20 = -1.*t6*t18*t19;
  t21 = t17 + t20;
  t26 = Sin(var1[11]);
  t13 = Cos(var1[12]);
  t30 = t14*t25;
  t31 = -1.*t21*t26;
  t32 = t30 + t31;
  t22 = t14*t21;
  t27 = t25*t26;
  t28 = t22 + t27;
  t33 = Sin(var1[12]);
  t12 = Cos(var1[13]);
  t37 = t13*t32;
  t38 = -1.*t28*t33;
  t39 = t37 + t38;
  t29 = t13*t28;
  t34 = t32*t33;
  t35 = t29 + t34;
  t40 = Sin(var1[13]);
  t5 = Cos(var1[7]);
  t3 = Sin(var1[8]);
  t9 = Sin(var1[7]);
  t53 = -1.*t15*t9;
  t54 = -1.*t5*t3*t18;
  t55 = t53 + t54;
  t49 = t5*t15*t3;
  t50 = -1.*t9*t18;
  t51 = t49 + t50;
  t59 = t16*t55;
  t60 = -1.*t51*t19;
  t61 = t59 + t60;
  t52 = t16*t51;
  t56 = t55*t19;
  t57 = t52 + t56;
  t65 = t14*t61;
  t66 = -1.*t57*t26;
  t67 = t65 + t66;
  t58 = t14*t57;
  t62 = t61*t26;
  t63 = t58 + t62;
  t71 = t13*t67;
  t72 = -1.*t63*t33;
  t73 = t71 + t72;
  t64 = t13*t63;
  t68 = t67*t33;
  t69 = t64 + t68;
  t86 = t5*t15;
  t87 = -1.*t9*t3*t18;
  t88 = t86 + t87;
  t82 = t15*t9*t3;
  t83 = t5*t18;
  t84 = t82 + t83;
  t92 = t16*t88;
  t93 = -1.*t84*t19;
  t94 = t92 + t93;
  t85 = t16*t84;
  t89 = t88*t19;
  t90 = t85 + t89;
  t98 = t14*t94;
  t99 = -1.*t90*t26;
  t100 = t98 + t99;
  t91 = t14*t90;
  t95 = t94*t26;
  t96 = t91 + t95;
  t104 = t13*t100;
  t105 = -1.*t96*t33;
  t106 = t104 + t105;
  t97 = t13*t96;
  t101 = t100*t33;
  t102 = t97 + t101;
  t36 = t12*t35;
  t41 = t39*t40;
  t42 = t36 + t41;
  t44 = t12*t39;
  t45 = -1.*t35*t40;
  t46 = t44 + t45;
  t70 = t12*t69;
  t74 = t73*t40;
  t75 = t70 + t74;
  t77 = t12*t73;
  t78 = -1.*t69*t40;
  t79 = t77 + t78;
  t103 = t12*t102;
  t107 = t106*t40;
  t108 = t103 + t107;
  t110 = t12*t106;
  t111 = -1.*t102*t40;
  t112 = t110 + t111;
  t134 = -1.*t16;
  t135 = 1. + t134;
  t144 = -1.*t14;
  t145 = 1. + t144;
  t154 = -1.*t13;
  t155 = 1. + t154;
  t164 = -1.*t12;
  t165 = 1. + t164;
  t124 = -1.*t6;
  t125 = 1. + t124;
  t128 = -1.*t15;
  t129 = 1. + t128;
  t130 = -0.049*t129;
  t131 = -0.09*t18;
  t132 = 0. + t130 + t131;
  t136 = -0.049*t135;
  t137 = -0.21*t19;
  t138 = 0. + t136 + t137;
  t140 = -0.21*t135;
  t141 = 0.049*t19;
  t142 = 0. + t140 + t141;
  t146 = -0.0016*t145;
  t147 = -0.2707*t26;
  t148 = 0. + t146 + t147;
  t150 = -0.2707*t145;
  t151 = 0.0016*t26;
  t152 = 0. + t150 + t151;
  t156 = 0.0184*t155;
  t157 = -0.7055*t33;
  t158 = 0. + t156 + t157;
  t160 = -0.7055*t155;
  t161 = -0.0184*t33;
  t162 = 0. + t160 + t161;
  t166 = -0.0216*t165;
  t167 = -1.1135*t40;
  t168 = 0. + t166 + t167;
  t170 = -1.1135*t165;
  t171 = 0.0216*t40;
  t172 = 0. + t170 + t171;
  t181 = -0.135*t125;
  t182 = 0.049*t3;
  t183 = 0. + t181 + t182;
  t186 = -0.09*t129;
  t187 = 0.049*t18;
  t188 = 0. + t186 + t187;
  p_output1[0]=0. + t3;
  p_output1[1]=0. + t5*t6;
  p_output1[2]=0. + t6*t9;
  p_output1[3]=0.;
  p_output1[4]=0. + 0.642788*t42 + 0.766044*t46;
  p_output1[5]=0. - 0.642788*t75 - 0.766044*t79;
  p_output1[6]=0. - 0.642788*t108 - 0.766044*t112;
  p_output1[7]=0.;
  p_output1[8]=0. - 0.766044*t42 + 0.642788*t46;
  p_output1[9]=0. + 0.766044*t75 - 0.642788*t79;
  p_output1[10]=0. + 0.766044*t108 - 0.642788*t112;
  p_output1[11]=0.;
  p_output1[12]=-0.03155 - 0.049*t125 + t148*t21 + t152*t25 + t158*t28 - 0.004500000000000004*t3 + t162*t32 + t168*t35 + t172*t39 + 0.0306*t42 - 1.1312*t46 + t132*t6 + t138*t15*t6 - 1.*t142*t18*t6;
  p_output1[13]=0. + 0.135*(1. - 1.*t5) - 1.*t183*t5 - 1.*t132*t3*t5 - 1.*t138*t51 - 1.*t142*t55 - 1.*t148*t57 + 0.1305*t5*t6 - 1.*t152*t61 - 1.*t158*t63 - 1.*t162*t67 - 1.*t168*t69 - 1.*t172*t73 - 0.0306*t75 + 1.1312*t79 + t188*t9;
  p_output1[14]=-0.07996 - 0.0306*t108 + 1.1312*t112 - 1.*t100*t162 - 1.*t102*t168 - 1.*t106*t172 - 1.*t188*t5 - 1.*t138*t84 - 1.*t142*t88 - 0.135*t9 - 1.*t183*t9 - 1.*t132*t3*t9 + 0.1305*t6*t9 - 1.*t148*t90 - 1.*t152*t94 - 1.*t158*t96;
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
    ( !(mrows == 14 && ncols == 1) && 
      !(mrows == 1 && ncols == 14))) 
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

#include "H_VectorNav_to_RightToeBottom_mex.hh"

namespace SymExpression
{

void H_VectorNav_to_RightToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
