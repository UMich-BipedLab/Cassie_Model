/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:33:27 GMT-05:00
 */

#ifndef KINETICENERGY_MEX_HH
#define KINETICENERGY_MEX_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymExpression
{

  void KineticEnergy_mex_raw(double *p_output1, const double *var1,const double *var2);

  inline void KineticEnergy_mex(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 20, 1);
    assert_size_matrix(var2, 20, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 1, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    KineticEnergy_mex_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // KINETICENERGY_MEX_HH
