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
#include <ifc2x3/IfcAnnotationSurfaceOccurrence.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcAnnotationSurfaceOccurrence::IfcAnnotationSurfaceOccurrence(Step::SPFData *args) : IfcAnnotationOccurrence(args) {
}


IfcAnnotationSurfaceOccurrence::~IfcAnnotationSurfaceOccurrence() {
}

bool IfcAnnotationSurfaceOccurrence::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcAnnotationSurfaceOccurrence(this);
}

const char *IfcAnnotationSurfaceOccurrence::type() {
  return "IfcAnnotationSurfaceOccurrence";
}

Step::ClassType IfcAnnotationSurfaceOccurrence::getClassType() {
  return IfcAnnotationSurfaceOccurrence::s_type;
}

Step::ClassType IfcAnnotationSurfaceOccurrence::getType() const {
  return IfcAnnotationSurfaceOccurrence::s_type;
}

bool IfcAnnotationSurfaceOccurrence::isOfType(Step::ClassType t) {
  return IfcAnnotationSurfaceOccurrence::s_type == t ? true : IfcAnnotationOccurrence::isOfType(t);
}

void IfcAnnotationSurfaceOccurrence::release() {
  IfcAnnotationOccurrence::release();
}

bool IfcAnnotationSurfaceOccurrence::init() {
  bool status = IfcAnnotationOccurrence::init();
  std::string arg;
  if (!status) {
    return false;
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcAnnotationSurfaceOccurrence::s_type = new Step::ClassType_class("IfcAnnotationSurfaceOccurrence");
IfcAnnotationSurfaceOccurrence_Factory::IfcAnnotationSurfaceOccurrence_Factory() {
}

IfcAnnotationSurfaceOccurrence_Factory::~IfcAnnotationSurfaceOccurrence_Factory() {
  clear(true);
}

void IfcAnnotationSurfaceOccurrence_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcAnnotationSurfaceOccurrence_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcAnnotationSurfaceOccurrence_Factory::end() {
  return m_idMap.end();
}

IfcAnnotationSurfaceOccurrence *IfcAnnotationSurfaceOccurrence_Factory::get(Step::StepId id) {
  IfcAnnotationSurfaceOccurrence *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcAnnotationSurfaceOccurrence * > (it->second);
  }
  else {
    LOG_ERROR("IfcAnnotationSurfaceOccurrence_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcAnnotationSurfaceOccurrence * > (create(id));
  }
}

Step::BaseObject *IfcAnnotationSurfaceOccurrence_Factory::create(Step::StepId id) {
  IfcAnnotationSurfaceOccurrence *ret = new IfcAnnotationSurfaceOccurrence(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcAnnotationSurfaceOccurrence_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcAnnotationSurfaceOccurrence *ret = new IfcAnnotationSurfaceOccurrence(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcAnnotationSurfaceOccurrence_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcAnnotationSurfaceOccurrence *ret = new IfcAnnotationSurfaceOccurrence(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcAnnotationSurfaceOccurrence *IfcAnnotationSurfaceOccurrence_Factory::generate() {
  return static_cast< IfcAnnotationSurfaceOccurrence * > (create(m_model->getNewId()));
}

IfcAnnotationSurfaceOccurrence *IfcAnnotationSurfaceOccurrence_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcAnnotationSurfaceOccurrence * > (it->second);
  }
  else {
    return NULL;
  }
}

