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
#include <ifc2x3/IfcRelContainedInSpatialStructure.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcProduct.h>
#include <ifc2x3/IfcSpatialStructureElement.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcRelContainedInSpatialStructure::IfcRelContainedInSpatialStructure(Step::SPFData *args) : IfcRelConnects(args) {
  m_relatedElements.setUnset(true);
  m_relatingStructure = NULL;
}


IfcRelContainedInSpatialStructure::~IfcRelContainedInSpatialStructure() {
}

bool IfcRelContainedInSpatialStructure::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcRelContainedInSpatialStructure(this);
}

const char *IfcRelContainedInSpatialStructure::type() {
  return "IfcRelContainedInSpatialStructure";
}

Step::ClassType IfcRelContainedInSpatialStructure::getClassType() {
  return IfcRelContainedInSpatialStructure::s_type;
}

Step::ClassType IfcRelContainedInSpatialStructure::getType() const {
  return IfcRelContainedInSpatialStructure::s_type;
}

bool IfcRelContainedInSpatialStructure::isOfType(Step::ClassType t) {
  return IfcRelContainedInSpatialStructure::s_type == t ? true : IfcRelConnects::isOfType(t);
}

Step::StepSet< Step::RefPtr< IfcProduct > > &IfcRelContainedInSpatialStructure::getRelatedElements() {
  if (Step::BaseObject::inited()) {
    return m_relatedElements;
  }
  else {
    m_relatedElements.setUnset(true);
    return m_relatedElements;
  }
}

void IfcRelContainedInSpatialStructure::setRelatedElements(const Step::StepSet< Step::RefPtr< IfcProduct > > &value) {
  m_relatedElements = value;
}

IfcSpatialStructureElement *IfcRelContainedInSpatialStructure::getRelatingStructure() {
  if (Step::BaseObject::inited()) {
    return m_relatingStructure.get();
  }
  else {
    return NULL;
  }
}

void IfcRelContainedInSpatialStructure::setRelatingStructure(const Step::RefPtr< IfcSpatialStructureElement > &value) {
  m_relatingStructure = value;
}

void IfcRelContainedInSpatialStructure::release() {
  IfcRelConnects::release();
  m_relatedElements.clear();
  m_relatingStructure.release();
}

bool IfcRelContainedInSpatialStructure::init() {
  bool status = IfcRelConnects::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_relatedElements.setUnset(true);
  }
  else {
    m_relatedElements.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Step::RefPtr< IfcProduct > attr2;
        attr2 = static_cast< IfcProduct * > (m_model->getObjectById(atoi(str1.c_str() + 1)));
        m_relatedElements.insert(attr2);
      }
      else {
        break;
      }
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_relatingStructure = NULL;
  }
  else {
    m_relatingStructure = static_cast< IfcSpatialStructureElement * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelContainedInSpatialStructure::s_type = new Step::ClassType_class("IfcRelContainedInSpatialStructure");
IfcRelContainedInSpatialStructure_Factory::IfcRelContainedInSpatialStructure_Factory() {
}

IfcRelContainedInSpatialStructure_Factory::~IfcRelContainedInSpatialStructure_Factory() {
  clear(true);
}

void IfcRelContainedInSpatialStructure_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRelContainedInSpatialStructure_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRelContainedInSpatialStructure_Factory::end() {
  return m_idMap.end();
}

IfcRelContainedInSpatialStructure *IfcRelContainedInSpatialStructure_Factory::get(Step::StepId id) {
  IfcRelContainedInSpatialStructure *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcRelContainedInSpatialStructure * > (it->second);
  }
  else {
    LOG_ERROR("IfcRelContainedInSpatialStructure_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcRelContainedInSpatialStructure * > (create(id));
  }
}

Step::BaseObject *IfcRelContainedInSpatialStructure_Factory::create(Step::StepId id) {
  IfcRelContainedInSpatialStructure *ret = new IfcRelContainedInSpatialStructure(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcRelContainedInSpatialStructure_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcRelContainedInSpatialStructure *ret = new IfcRelContainedInSpatialStructure(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcRelContainedInSpatialStructure_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcRelContainedInSpatialStructure *ret = new IfcRelContainedInSpatialStructure(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcRelContainedInSpatialStructure *IfcRelContainedInSpatialStructure_Factory::generate() {
  return static_cast< IfcRelContainedInSpatialStructure * > (create(m_model->getNewId()));
}

IfcRelContainedInSpatialStructure *IfcRelContainedInSpatialStructure_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcRelContainedInSpatialStructure * > (it->second);
  }
  else {
    return NULL;
  }
}

