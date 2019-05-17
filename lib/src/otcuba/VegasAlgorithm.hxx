//                                               -*- C++ -*-
/**
 *  @brief VegasAlgorithm
 *
 *  Copyright 2005-2019 Airbus-EDF-IMACS-ONERA-Phimeca
 *
 *  This library is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public License
 *  along with this library.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
#ifndef OTCUBA_VEGASALGORITHM_HXX
#define OTCUBA_VEGASALGORITHM_HXX

#include <openturns/TypedInterfaceObject.hxx>
#include <openturns/StorageManager.hxx>
#include <openturns/Point.hxx>
#include "otcuba/OTCubaprivate.hxx"

namespace OTCUBA
{

/* forward declaration */
class VegasAlgorithmImplementation;

/**
 * @class VegasAlgorithm
 *
 * VegasAlgorithm is some vegasalgorithm type to illustrate how to add some classes in Open TURNS
 */
class OTCUBA_API VegasAlgorithm
  : public OT::TypedInterfaceObject<VegasAlgorithmImplementation>
{
  CLASSNAME;

public:

  /** Default constructor */
  VegasAlgorithm();

  /** Constructor from implementation */
  VegasAlgorithm(const VegasAlgorithmImplementation & implementation);

  /** a func that return a point squared. **/
  OT::Point square(OT::Point & p) const;

  /** String converter */
  OT::String __repr__() const;

private:

}; /* class VegasAlgorithm */

} /* namespace OTCUBA */

#endif /* OTCUBA_VEGASALGORITHM_HXX */
