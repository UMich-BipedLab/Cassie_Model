/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:16:32 GMT-05:00
 */

#ifndef P_MULTISENSEMAGNETOMETERFRAME_MEX_HH
#define P_MULTISENSEMAGNETOMETERFRAME_MEX_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymExpression
{

  void p_MultisenseMagnetometerFrame_mex_raw(double *p_output1, const double *var1);

  inline void p_MultisenseMagnetometerFrame_mex(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 20, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 3, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    p_MultisenseMagnetometerFrame_mex_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // P_MULTISENSEMAGNETOMETERFRAME_MEX_HH
