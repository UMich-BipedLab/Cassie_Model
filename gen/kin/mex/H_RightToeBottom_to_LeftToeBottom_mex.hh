/*
 * Automatically Generated from Mathematica.
 * Mon 26 Feb 2018 15:42:43 GMT-05:00
 */

#ifndef H_RIGHTTOEBOTTOM_TO_LEFTTOEBOTTOM_MEX_HH
#define H_RIGHTTOEBOTTOM_TO_LEFTTOEBOTTOM_MEX_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymExpression
{

  void H_RightToeBottom_to_LeftToeBottom_mex_raw(double *p_output1, const double *var1);

  inline void H_RightToeBottom_to_LeftToeBottom_mex(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 14, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 4, 4);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    H_RightToeBottom_to_LeftToeBottom_mex_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // H_RIGHTTOEBOTTOM_TO_LEFTTOEBOTTOM_MEX_HH
