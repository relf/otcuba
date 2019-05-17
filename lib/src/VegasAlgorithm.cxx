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
#include "otcuba/VegasAlgorithm.hxx"
#include "otcuba/VegasAlgorithmImplementation.hxx"
#include <openturns/PersistentObjectFactory.hxx>

using namespace OT;

namespace OTCUBA
{

CLASSNAMEINIT(VegasAlgorithm);

/* Default constructor */
VegasAlgorithm::VegasAlgorithm()
  : TypedInterfaceObject<VegasAlgorithmImplementation>(new VegasAlgorithmImplementation)
{
  // Nothing to do
}


VegasAlgorithm::VegasAlgorithm(const VegasAlgorithmImplementation & implementation)
  : TypedInterfaceObject<VegasAlgorithmImplementation>(implementation.clone())
{
  // Nothing to do
}

Point VegasAlgorithm::square(Point & p) const
{
  return getImplementation()->square(p);
}

/* String converter */
String VegasAlgorithm::__repr__() const
{
  OSS oss;
  oss << "class=" << VegasAlgorithm::GetClassName()
      << " implementation=" << getImplementation()->__repr__();
  return oss;
}


} /* namespace OTCUBA */
