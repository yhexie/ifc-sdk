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
#include <ifc2x3/IfcStructuralActivity.h>

#include <Step/BaseModel.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <ifc2x3/IfcProduct.h>
#include <ifc2x3/IfcRelConnectsStructuralActivity.h>
#include <ifc2x3/IfcStructuralLoad.h>
#include <ifc2x3/Visitor.h>
#include <stdlib.h>
#include <string>
#include <vector>

using namespace ifc2x3;

IfcStructuralActivity::IfcStructuralActivity(Step::SPFData *args) : IfcProduct(args) {
  m_appliedLoad = NULL;
  m_globalOrLocal = IfcGlobalOrLocalEnum_UNSET;
  m_assignedToStructuralItem = NULL;
}


IfcStructuralActivity::~IfcStructuralActivity() {
}

bool IfcStructuralActivity::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcStructuralActivity(this);
}

const char *IfcStructuralActivity::type() {
  return "IfcStructuralActivity";
}

Step::ClassType IfcStructuralActivity::getClassType() {
  return IfcStructuralActivity::s_type;
}

Step::ClassType IfcStructuralActivity::getType() const {
  return IfcStructuralActivity::s_type;
}

bool IfcStructuralActivity::isOfType(Step::ClassType t) {
  return IfcStructuralActivity::s_type == t ? true : IfcProduct::isOfType(t);
}

IfcStructuralLoad *IfcStructuralActivity::getAppliedLoad() {
  if (Step::BaseObject::inited()) {
    return m_appliedLoad.get();
  }
  else {
    return NULL;
  }
}

void IfcStructuralActivity::setAppliedLoad(const Step::RefPtr< IfcStructuralLoad > &value) {
  m_appliedLoad = value;
}

IfcGlobalOrLocalEnum IfcStructuralActivity::getGlobalOrLocal() {
  if (Step::BaseObject::inited()) {
    return m_globalOrLocal;
  }
  else {
    return IfcGlobalOrLocalEnum_UNSET;
  }
}

void IfcStructuralActivity::setGlobalOrLocal(IfcGlobalOrLocalEnum value) {
  m_globalOrLocal = value;
}

IfcRelConnectsStructuralActivity *IfcStructuralActivity::getAssignedToStructuralItem() {
  if (Step::BaseObject::inited()) {
    return m_assignedToStructuralItem.get();
  }
  else {
    return NULL;
  }
}

void IfcStructuralActivity::setAssignedToStructuralItem(const Step::RefPtr< IfcRelConnectsStructuralActivity > &value) {
  m_assignedToStructuralItem = value;
}

void IfcStructuralActivity::release() {
  IfcProduct::release();
  m_appliedLoad.release();
}

bool IfcStructuralActivity::init() {
  bool status = IfcProduct::init();
  std::string arg;
  std::vector< Step::StepId > *inverses;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_appliedLoad = NULL;
  }
  else {
    m_appliedLoad = static_cast< IfcStructuralLoad * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_globalOrLocal = IfcGlobalOrLocalEnum_UNSET;
  }
  else {
    if (arg == ".GLOBAL_COORDS.") {
      m_globalOrLocal = IfcGlobalOrLocalEnum_GLOBAL_COORDS;
    }
    else if (arg == ".LOCAL_COORDS.") {
      m_globalOrLocal = IfcGlobalOrLocalEnum_LOCAL_COORDS;
    }
  }
  inverses = m_args->getInverses(IfcRelConnectsStructuralActivity::getClassType(), 5);
  if (inverses) {
    m_assignedToStructuralItem = static_cast< IfcRelConnectsStructuralActivity * > (m_model->getObjectById((*inverses)[0]));
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcStructuralActivity::s_type = new Step::ClassType_class("IfcStructuralActivity");
