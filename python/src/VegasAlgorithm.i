// SWIG file VegasAlgorithm.i

%{
#include "otcuba/VegasAlgorithm.hxx"
%}

%include VegasAlgorithm_doc.i

TypedInterfaceObjectImplementationHelper(OTCUBA, VegasAlgorithm, VegasAlgorithmImplementation)

%include otcuba/VegasAlgorithm.hxx
namespace OTCUBA { %extend VegasAlgorithm { VegasAlgorithm(const VegasAlgorithm & other) { return new OTCUBA::VegasAlgorithm(other); } } }
