// SWIG file otcuba_module.i

%module(docstring="otcuba module") otcuba

%{
#include <openturns/OT.hxx>
#include <openturns/PythonWrappingFunctions.hxx>
%}

// Prerequisites needed
%include typemaps.i
%include exception.i
%ignore *::load(OT::Advocate & adv);
%ignore *::save(OT::Advocate & adv) const;

%import base_module.i
%import uncertainty_module.i

// The new classes
%include otcuba/OTCubaprivate.hxx
%include VegasAlgorithmImplementation.i
%include VegasAlgorithm.i


