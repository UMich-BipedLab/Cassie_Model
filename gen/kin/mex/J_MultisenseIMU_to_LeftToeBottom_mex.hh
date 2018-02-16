/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:17:41 GMT-05:00
 */

#ifndef J_MULTISENSEIMU_TO_LEFTTOEBOTTOM_MEX_HH
#define J_MULTISENSEIMU_TO_LEFTTOEBOTTOM_MEX_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymExpression
{

  void J_MultisenseIMU_to_LeftToeBottom_mex_raw(double *p_output1, const double *var1);

  inline void J_MultisenseIMU_to_LeftToeBottom_mex(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 14, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 6, 14);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    J_MultisenseIMU_to_LeftToeBottom_mex_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // J_MULTISENSEIMU_TO_LEFTTOEBOTTOM_MEX_HH
