/*
 * Automatically Generated from Mathematica.
 * Fri 16 Mar 2018 11:07:35 GMT-04:00
 */

#ifndef J_BASEPOSZ_MEX_HH
#define J_BASEPOSZ_MEX_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymExpression
{

  void J_BasePosZ_mex_raw(double *p_output1, const double *var1);

  inline void J_BasePosZ_mex(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 20, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 3, 20);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    J_BasePosZ_mex_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // J_BASEPOSZ_MEX_HH
