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
#include <ifc2x3/IfcConstraintRelationship.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcConstraint.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcConstraintRelationship::IfcConstraintRelationship(Step::SPFData *args) : Step::BaseObject(args) {
  m_name = getUnset(m_name);
  m_description = getUnset(m_description);
  m_relatingConstraint = NULL;
  m_relatedConstraints.setUnset(true);
}


IfcConstraintRelationship::~IfcConstraintRelationship() {
}

bool IfcConstraintRelationship::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcConstraintRelationship(this);
}

const char *IfcConstraintRelationship::type() {
  return "IfcConstraintRelationship";
}

Step::ClassType IfcConstraintRelationship::getClassType() {
  return IfcConstraintRelationship::s_type;
}

Step::ClassType IfcConstraintRelationship::getType() const {
  return IfcConstraintRelationship::s_type;
}

bool IfcConstraintRelationship::isOfType(Step::ClassType t) {
  return IfcConstraintRelationship::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcLabel IfcConstraintRelationship::getName() {
  if (Step::BaseObject::inited()) {
    return m_name;
  }
  else {
    return getUnset(m_name);
  }
}

void IfcConstraintRelationship::setName(const IfcLabel &value) {
  m_name = value;
}

IfcText IfcConstraintRelationship::getDescription() {
  if (Step::BaseObject::inited()) {
    return m_description;
  }
  else {
    return getUnset(m_description);
  }
}

void IfcConstraintRelationship::setDescription(const IfcText &value) {
  m_description = value;
}

IfcConstraint *IfcConstraintRelationship::getRelatingConstraint() {
  if (Step::BaseObject::inited()) {
    return m_relatingConstraint.get();
  }
  else {
    return NULL;
  }
}

void IfcConstraintRelationship::setRelatingConstraint(const Step::RefPtr< IfcConstraint > &value) {
  m_relatingConstraint = value;
}

Step::StepSet< Step::RefPtr< IfcConstraint > > &IfcConstraintRelationship::getRelatedConstraints() {
  if (Step::BaseObject::inited()) {
    return m_relatedConstraints;
  }
  else {
    m_relatedConstraints.setUnset(true);
    return m_relatedConstraints;
  }
}

void IfcConstraintRelationship::setRelatedConstraints(const Step::StepSet< Step::RefPtr< IfcConstraint > > &value) {
  m_relatedConstraints = value;
}

void IfcConstraintRelationship::release() {
  m_relatingConstraint.release();
  m_relatedConstraints.clear();
}

bool IfcConstraintRelationship::init() {
  std::string arg;
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_name = getUnset(m_name);
  }
  else {
    m_name = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_description = getUnset(m_description);
  }
  else {
    m_description = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_relatingConstraint = NULL;
  }
  else {
    m_relatingConstraint = static_cast< IfcConstraint * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_relatedConstraints.setUnset(true);
  }
  else {
    m_relatedConstraints.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Step::RefPtr< IfcConstraint > attr2;
        attr2 = static_cast< IfcConstraint * > (m_model->getObjectById(atoi(str1.c_str() + 1)));
        m_relatedConstraints.insert(attr2);
      }
      else {
        break;
      }
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcConstraintRelationship::s_type = new Step::ClassType_class("IfcConstraintRelationship");
IfcConstraintRelationship_Factory::IfcConstraintRelationship_Factory() {
}

IfcConstraintRelationship_Factory::~IfcConstraintRelationship_Factory() {
  clear(true);
}

void IfcConstraintRelationship_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcConstraintRelationship_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcConstraintRelationship_Factory::end() {
  return m_idMap.end();
}

IfcConstraintRelationship *IfcConstraintRelationship_Factory::get(Step::StepId id) {
  IfcConstraintRelationship *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcConstraintRelationship * > (it->second);
  }
  else {
    LOG_ERROR("IfcConstraintRelationship_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcConstraintRelationship * > (create(id));
  }
}

Step::BaseObject *IfcConstraintRelationship_Factory::create(Step::StepId id) {
  IfcConstraintRelationship *ret = new IfcConstraintRelationship(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcConstraintRelationship_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcConstraintRelationship *ret = new IfcConstraintRelationship(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcConstraintRelationship_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcConstraintRelationship *ret = new IfcConstraintRelationship(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcConstraintRelationship *IfcConstraintRelationship_Factory::generate() {
  return static_cast< IfcConstraintRelationship * > (create(m_model->getNewId()));
}

IfcConstraintRelationship *IfcConstraintRelationship_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcConstraintRelationship * > (it->second);
  }
  else {
    return NULL;
  }
}

