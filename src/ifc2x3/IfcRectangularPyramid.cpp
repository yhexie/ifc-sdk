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
#include <ifc2x3/IfcRectangularPyramid.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcRectangularPyramid::IfcRectangularPyramid(Step::SPFData *args) : IfcCsgPrimitive3D(args) {
  m_xLength = getUnset(m_xLength);
  m_yLength = getUnset(m_yLength);
  m_height = getUnset(m_height);
}


IfcRectangularPyramid::~IfcRectangularPyramid() {
}

bool IfcRectangularPyramid::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcRectangularPyramid(this);
}

const char *IfcRectangularPyramid::type() {
  return "IfcRectangularPyramid";
}

Step::ClassType IfcRectangularPyramid::getClassType() {
  return IfcRectangularPyramid::s_type;
}

Step::ClassType IfcRectangularPyramid::getType() const {
  return IfcRectangularPyramid::s_type;
}

bool IfcRectangularPyramid::isOfType(Step::ClassType t) {
  return IfcRectangularPyramid::s_type == t ? true : IfcCsgPrimitive3D::isOfType(t);
}

IfcPositiveLengthMeasure IfcRectangularPyramid::getXLength() {
  if (Step::BaseObject::inited()) {
    return m_xLength;
  }
  else {
    return getUnset(m_xLength);
  }
}

void IfcRectangularPyramid::setXLength(IfcPositiveLengthMeasure value) {
  m_xLength = value;
}

IfcPositiveLengthMeasure IfcRectangularPyramid::getYLength() {
  if (Step::BaseObject::inited()) {
    return m_yLength;
  }
  else {
    return getUnset(m_yLength);
  }
}

void IfcRectangularPyramid::setYLength(IfcPositiveLengthMeasure value) {
  m_yLength = value;
}

IfcPositiveLengthMeasure IfcRectangularPyramid::getHeight() {
  if (Step::BaseObject::inited()) {
    return m_height;
  }
  else {
    return getUnset(m_height);
  }
}

void IfcRectangularPyramid::setHeight(IfcPositiveLengthMeasure value) {
  m_height = value;
}

void IfcRectangularPyramid::release() {
  IfcCsgPrimitive3D::release();
}

bool IfcRectangularPyramid::init() {
  bool status = IfcCsgPrimitive3D::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_xLength = getUnset(m_xLength);
  }
  else {
    m_xLength = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_yLength = getUnset(m_yLength);
  }
  else {
    m_yLength = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_height = getUnset(m_height);
  }
  else {
    m_height = Step::spfToReal(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcRectangularPyramid::s_type = new Step::ClassType_class("IfcRectangularPyramid");
IfcRectangularPyramid_Factory::IfcRectangularPyramid_Factory() {
}

IfcRectangularPyramid_Factory::~IfcRectangularPyramid_Factory() {
  clear(true);
}

void IfcRectangularPyramid_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRectangularPyramid_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRectangularPyramid_Factory::end() {
  return m_idMap.end();
}

IfcRectangularPyramid *IfcRectangularPyramid_Factory::get(Step::StepId id) {
  IfcRectangularPyramid *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcRectangularPyramid * > (it->second);
  }
  else {
    LOG_ERROR("IfcRectangularPyramid_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcRectangularPyramid * > (create(id));
  }
}

Step::BaseObject *IfcRectangularPyramid_Factory::create(Step::StepId id) {
  IfcRectangularPyramid *ret = new IfcRectangularPyramid(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcRectangularPyramid_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcRectangularPyramid *ret = new IfcRectangularPyramid(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcRectangularPyramid_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcRectangularPyramid *ret = new IfcRectangularPyramid(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcRectangularPyramid *IfcRectangularPyramid_Factory::generate() {
  return static_cast< IfcRectangularPyramid * > (create(m_model->getNewId()));
}

IfcRectangularPyramid *IfcRectangularPyramid_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcRectangularPyramid * > (it->second);
  }
  else {
    return NULL;
  }
}

