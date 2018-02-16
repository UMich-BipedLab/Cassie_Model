/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:17:47 GMT-05:00
 */

#ifndef P_MULTISENSEIMU_TO_MULTISENSELEFTOPTICALFRAME_MEX_HH
#define P_MULTISENSEIMU_TO_MULTISENSELEFTOPTICALFRAME_MEX_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymExpression
{

  void p_MultisenseIMU_to_MultisenseLeftOpticalFrame_mex_raw(double *p_output1, const double *var1);

  inline void p_MultisenseIMU_to_MultisenseLeftOpticalFrame_mex(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 14, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 3, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    p_MultisenseIMU_to_MultisenseLeftOpticalFrame_mex_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // P_MULTISENSEIMU_TO_MULTISENSELEFTOPTICALFRAME_MEX_HH
