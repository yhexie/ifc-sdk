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
#include <ifc2x3/IfcQuantityWeight.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcQuantityWeight::IfcQuantityWeight(Step::SPFData *args) : IfcPhysicalSimpleQuantity(args) {
  m_weightValue = getUnset(m_weightValue);
}


IfcQuantityWeight::~IfcQuantityWeight() {
}

bool IfcQuantityWeight::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcQuantityWeight(this);
}

const char *IfcQuantityWeight::type() {
  return "IfcQuantityWeight";
}

Step::ClassType IfcQuantityWeight::getClassType() {
  return IfcQuantityWeight::s_type;
}

Step::ClassType IfcQuantityWeight::getType() const {
  return IfcQuantityWeight::s_type;
}

bool IfcQuantityWeight::isOfType(Step::ClassType t) {
  return IfcQuantityWeight::s_type == t ? true : IfcPhysicalSimpleQuantity::isOfType(t);
}

IfcMassMeasure IfcQuantityWeight::getWeightValue() {
  if (Step::BaseObject::inited()) {
    return m_weightValue;
  }
  else {
    return getUnset(m_weightValue);
  }
}

void IfcQuantityWeight::setWeightValue(IfcMassMeasure value) {
  m_weightValue = value;
}

void IfcQuantityWeight::release() {
  IfcPhysicalSimpleQuantity::release();
}

bool IfcQuantityWeight::init() {
  bool status = IfcPhysicalSimpleQuantity::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_weightValue = getUnset(m_weightValue);
  }
  else {
    m_weightValue = Step::spfToReal(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcQuantityWeight::s_type = new Step::ClassType_class("IfcQuantityWeight");
IfcQuantityWeight_Factory::IfcQuantityWeight_Factory() {
}

IfcQuantityWeight_Factory::~IfcQuantityWeight_Factory() {
  clear(true);
}

void IfcQuantityWeight_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcQuantityWeight_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcQuantityWeight_Factory::end() {
  return m_idMap.end();
}

IfcQuantityWeight *IfcQuantityWeight_Factory::get(Step::StepId id) {
  IfcQuantityWeight *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcQuantityWeight * > (it->second);
  }
  else {
    LOG_ERROR("IfcQuantityWeight_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcQuantityWeight * > (create(id));
  }
}

Step::BaseObject *IfcQuantityWeight_Factory::create(Step::StepId id) {
  IfcQuantityWeight *ret = new IfcQuantityWeight(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcQuantityWeight_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcQuantityWeight *ret = new IfcQuantityWeight(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcQuantityWeight_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcQuantityWeight *ret = new IfcQuantityWeight(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcQuantityWeight *IfcQuantityWeight_Factory::generate() {
  return static_cast< IfcQuantityWeight * > (create(m_model->getNewId()));
}

IfcQuantityWeight *IfcQuantityWeight_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcQuantityWeight * > (it->second);
  }
  else {
    return NULL;
  }
}

