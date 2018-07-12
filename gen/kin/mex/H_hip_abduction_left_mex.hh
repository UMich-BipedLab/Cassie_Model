/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:32:53 GMT-04:00
 */

#ifndef H_HIP_ABDUCTION_LEFT_MEX_HH
#define H_HIP_ABDUCTION_LEFT_MEX_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymExpression
{

  void H_hip_abduction_left_mex_raw(double *p_output1, const double *var1);

  inline void H_hip_abduction_left_mex(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 20, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 4, 4);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    H_hip_abduction_left_mex_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // H_HIP_ABDUCTION_LEFT_MEX_HH
