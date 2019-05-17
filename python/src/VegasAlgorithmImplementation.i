// SWIG file VegasAlgorithmImplementation.i

%{
#include "otcuba/VegasAlgorithmImplementation.hxx"
%}

%include VegasAlgorithmImplementation_doc.i

%template(VegasAlgorithmImplementationdInterfaceObject)           OT::TypedInterfaceObject<OTCUBA::VegasAlgorithmImplementation>;

%include otcuba/VegasAlgorithmImplementation.hxx
namespace OTCUBA { %extend VegasAlgorithmImplementation { VegasAlgorithmImplementation(const VegasAlgorithmImplementation & other) { return new OTCUBA::VegasAlgorithmImplementation(other); } } }
