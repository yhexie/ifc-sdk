/*
// ////////////////////////////////////////////
// This File has been generated automaticaly //
// by Expressik modified generator           //
//  Powered by : Eve CSTB                    //
// ////////////////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2005 CSTB                                             *
 *                                                                         *
 *   This library is free software; you can redistribute it and/or         *
 *   modify it under the terms of the GNU Lesser General Public            *
 *   License as published by the Free Software Foundation; either          *
 *   version 2.1 of the License, or (at your option) any later version.    *
 *                                                                         *
 *   This library is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU     *
 *   Lesser General Public License for more details.                       *
 *                                                                         *
 *   You should have received a copy of the GNU Lesser General Public      *
 *   License along with this library; if not, write to the                 *
 *         Free Software Foundation, Inc.                                  *
 *         59 Temple Place, Suite 330                                      *
 *         Boston, MA  02111-1307                                          *
 *         USA                                                             *
 *                                                                         *
 *   For further information please contact                                *
 *                                                                         *
 *         eve@cstb.fr                                                     *
 *   or                                                                    *
 *         Eve, CSTB                                                       *
 *         290, route des Lucioles                                         *
 *         BP 209                                                          *
 *         06904 Sophia Antipolis, France                                  *
 *                                                                         *
 ***************************************************************************
*/

#include <MemoryLeak.h>
#include <ifc2x3/IfcBuildingElementComponent.h>

#include <Step/ClassType.h>
#include <Step/logger.h>
#include <ifc2x3/IfcBuildingElement.h>
#include <ifc2x3/Visitor.h>
#include <string>

using namespace ifc2x3;

IfcBuildingElementComponent::IfcBuildingElementComponent(Step::SPFData *args) : IfcBuildingElement(args) {
}


IfcBuildingElementComponent::~IfcBuildingElementComponent() {
}

bool IfcBuildingElementComponent::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcBuildingElementComponent(this);
}

const char *IfcBuildingElementComponent::type() {
  return "IfcBuildingElementComponent";
}

Step::ClassType IfcBuildingElementComponent::getClassType() {
  return IfcBuildingElementComponent::s_type;
}

Step::ClassType IfcBuildingElementComponent::getType() const {
  return IfcBuildingElementComponent::s_type;
}

bool IfcBuildingElementComponent::isOfType(Step::ClassType t) {
  return IfcBuildingElementComponent::s_type == t ? true : IfcBuildingElement::isOfType(t);
}

void IfcBuildingElementComponent::release() {
  IfcBuildingElement::release();
}

bool IfcBuildingElementComponent::init() {
  bool status = IfcBuildingElement::init();
  std::string arg;
  if (!status) {
    return false;
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcBuildingElementComponent::s_type = new Step::ClassType_class("IfcBuildingElementComponent");
