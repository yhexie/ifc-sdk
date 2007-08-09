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
#include <ifc2x3/IfcHumidifierType.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcHumidifierType::IfcHumidifierType(Step::SPFData *args) : IfcEnergyConversionDeviceType(args) {
  m_predefinedType = IfcHumidifierTypeEnum_UNSET;
}


IfcHumidifierType::~IfcHumidifierType() {
}

bool IfcHumidifierType::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcHumidifierType(this);
}

const char *IfcHumidifierType::type() {
  return "IfcHumidifierType";
}

Step::ClassType IfcHumidifierType::getClassType() {
  return IfcHumidifierType::s_type;
}

Step::ClassType IfcHumidifierType::getType() const {
  return IfcHumidifierType::s_type;
}

bool IfcHumidifierType::isOfType(Step::ClassType t) {
  return IfcHumidifierType::s_type == t ? true : IfcEnergyConversionDeviceType::isOfType(t);
}

IfcHumidifierTypeEnum IfcHumidifierType::getPredefinedType() {
  if (Step::BaseObject::inited()) {
    return m_predefinedType;
  }
  else {
    return IfcHumidifierTypeEnum_UNSET;
  }
}

void IfcHumidifierType::setPredefinedType(IfcHumidifierTypeEnum value) {
  m_predefinedType = value;
}

void IfcHumidifierType::release() {
  IfcEnergyConversionDeviceType::release();
}

bool IfcHumidifierType::init() {
  bool status = IfcEnergyConversionDeviceType::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_predefinedType = IfcHumidifierTypeEnum_UNSET;
  }
  else {
    if (arg == ".STEAMINJECTION.") {
      m_predefinedType = IfcHumidifierTypeEnum_STEAMINJECTION;
    }
    else if (arg == ".ADIABATICAIRWASHER.") {
      m_predefinedType = IfcHumidifierTypeEnum_ADIABATICAIRWASHER;
    }
    else if (arg == ".ADIABATICPAN.") {
      m_predefinedType = IfcHumidifierTypeEnum_ADIABATICPAN;
    }
    else if (arg == ".ADIABATICWETTEDELEMENT.") {
      m_predefinedType = IfcHumidifierTypeEnum_ADIABATICWETTEDELEMENT;
    }
    else if (arg == ".ADIABATICATOMIZING.") {
      m_predefinedType = IfcHumidifierTypeEnum_ADIABATICATOMIZING;
    }
    else if (arg == ".ADIABATICULTRASONIC.") {
      m_predefinedType = IfcHumidifierTypeEnum_ADIABATICULTRASONIC;
    }
    else if (arg == ".ADIABATICRIGIDMEDIA.") {
      m_predefinedType = IfcHumidifierTypeEnum_ADIABATICRIGIDMEDIA;
    }
    else if (arg == ".ADIABATICCOMPRESSEDAIRNOZZLE.") {
      m_predefinedType = IfcHumidifierTypeEnum_ADIABATICCOMPRESSEDAIRNOZZLE;
    }
    else if (arg == ".ASSISTEDELECTRIC.") {
      m_predefinedType = IfcHumidifierTypeEnum_ASSISTEDELECTRIC;
    }
    else if (arg == ".ASSISTEDNATURALGAS.") {
      m_predefinedType = IfcHumidifierTypeEnum_ASSISTEDNATURALGAS;
    }
    else if (arg == ".ASSISTEDPROPANE.") {
      m_predefinedType = IfcHumidifierTypeEnum_ASSISTEDPROPANE;
    }
    else if (arg == ".ASSISTEDBUTANE.") {
      m_predefinedType = IfcHumidifierTypeEnum_ASSISTEDBUTANE;
    }
    else if (arg == ".ASSISTEDSTEAM.") {
      m_predefinedType = IfcHumidifierTypeEnum_ASSISTEDSTEAM;
    }
    else if (arg == ".USERDEFINED.") {
      m_predefinedType = IfcHumidifierTypeEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_predefinedType = IfcHumidifierTypeEnum_NOTDEFINED;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcHumidifierType::s_type = new Step::ClassType_class("IfcHumidifierType");
IfcHumidifierType_Factory::IfcHumidifierType_Factory() {
}

IfcHumidifierType_Factory::~IfcHumidifierType_Factory() {
  clear(true);
}

void IfcHumidifierType_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcHumidifierType_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcHumidifierType_Factory::end() {
  return m_idMap.end();
}

IfcHumidifierType *IfcHumidifierType_Factory::get(Step::StepId id) {
  IfcHumidifierType *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcHumidifierType * > (it->second);
  }
  else {
    LOG_ERROR("IfcHumidifierType_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcHumidifierType * > (create(id));
  }
}

Step::BaseObject *IfcHumidifierType_Factory::create(Step::StepId id) {
  IfcHumidifierType *ret = new IfcHumidifierType(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcHumidifierType_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcHumidifierType *ret = new IfcHumidifierType(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcHumidifierType_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcHumidifierType *ret = new IfcHumidifierType(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcHumidifierType *IfcHumidifierType_Factory::generate() {
  return static_cast< IfcHumidifierType * > (create(m_model->getNewId()));
}

IfcHumidifierType *IfcHumidifierType_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcHumidifierType * > (it->second);
  }
  else {
    return NULL;
  }
}

