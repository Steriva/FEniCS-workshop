// This code conforms with the UFC specification version 2018.2.0.dev0
// and was automatically generated by FFCx version 0.6.0.
//
// This code was generated with the following options:
//
//  {'assume_aligned': -1,
//   'epsilon': 1e-14,
//   'output_directory': '/root/shared/src',
//   'padlen': 1,
//   'profile': False,
//   'scalar_type': 'double',
//   'table_atol': 1e-09,
//   'table_rtol': 1e-06,
//   'tabulate_tensor_void': False,
//   'ufl_file': ['/root/shared/src/introduction.py'],
//   'verbosity': 30,
//   'visualise': True}


#pragma once

#include <ufcx.h>

#ifdef __cplusplus
extern "C" {
#endif

extern ufcx_finite_element element_a76db0f61460aaccd8bc0b0a40c901df15698bd0;

extern ufcx_finite_element element_0a4ffa6e8564366391e1da35313165204004868b;

extern ufcx_finite_element element_2a6c85620f947bc11d784a3a737a5688d21522e8;

extern ufcx_finite_element element_a5f36b58b1ce85c271fc957af82db8ccb5faf446;

extern ufcx_finite_element element_65eb15d29b263f8ce26c9cb270e94233b1820ad8;

extern ufcx_dofmap dofmap_a76db0f61460aaccd8bc0b0a40c901df15698bd0;

extern ufcx_dofmap dofmap_0a4ffa6e8564366391e1da35313165204004868b;

extern ufcx_dofmap dofmap_2a6c85620f947bc11d784a3a737a5688d21522e8;

extern ufcx_dofmap dofmap_a5f36b58b1ce85c271fc957af82db8ccb5faf446;

extern ufcx_dofmap dofmap_65eb15d29b263f8ce26c9cb270e94233b1820ad8;

extern ufcx_integral integral_5590c63196f9d6a5bb8238bcc42de8860bce3f71;

extern ufcx_integral integral_35c6356258b3443cd6903e1d382b0d99f4f06f53;

extern ufcx_form form_26ee9e1a09a8a4bbf57a4c6fd16202f7d3a449f7;

// Helper used to create form using name which was given to the
// form in the UFL file.
// This helper is called in user c++ code.
//
extern ufcx_form* form_introduction_a;

// Helper used to create function space using function name
// i.e. name of the Python variable.
//
ufcx_function_space* functionspace_form_introduction_a(const char* function_name);

extern ufcx_form form_961690e8e1fcf8cc7b04aa036a8fe1d6c10a0b16;

// Helper used to create form using name which was given to the
// form in the UFL file.
// This helper is called in user c++ code.
//
extern ufcx_form* form_introduction_L;

// Helper used to create function space using function name
// i.e. name of the Python variable.
//
ufcx_function_space* functionspace_form_introduction_L(const char* function_name);

#ifdef __cplusplus
}
#endif
