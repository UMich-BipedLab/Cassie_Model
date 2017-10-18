/*
 * Automatically Generated from Mathematica.
 * Tue 17 Oct 2017 12:35:48 GMT-04:00
 */

#ifndef DJH_QFIXED_CASSIE_HH
#define DJH_QFIXED_CASSIE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void dJh_qfixed_cassie_raw(double *p_output1, const double *var1,const double *var2);

  inline void dJh_qfixed_cassie(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 22, 1);
    assert_size_matrix(var2, 22, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 4, 22);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    dJh_qfixed_cassie_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // DJH_QFIXED_CASSIE_HH
