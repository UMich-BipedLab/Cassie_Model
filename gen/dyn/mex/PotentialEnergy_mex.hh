/*
 * Automatically Generated from Mathematica.
 * Thu 9 Nov 2017 12:27:37 GMT-05:00
 */

#ifndef POTENTIALENERGY_MEX_HH
#define POTENTIALENERGY_MEX_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymExpression
{

  void PotentialEnergy_mex_raw(double *p_output1, const double *var1);

  inline void PotentialEnergy_mex(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 20, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 1, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    PotentialEnergy_mex_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // POTENTIALENERGY_MEX_HH
