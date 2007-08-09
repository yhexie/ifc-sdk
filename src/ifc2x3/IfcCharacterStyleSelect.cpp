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
#include <ifc2x3/IfcCharacterStyleSelect.h>

#include <Step/BaseObject.h>
#include <ifc2x3/IfcTextStyleForDefinedFont.h>
#include <ifc2x3/Visitor.h>

using namespace ifc2x3;

IfcCharacterStyleSelect::IfcCharacterStyleSelect() : Step::BaseObject(0) {
  m_type = UNSET;
}

IfcCharacterStyleSelect::IfcCharacterStyleSelect(Step::SPFData *args) : Step::BaseObject(args) {
  m_type = UNSET;
}


IfcCharacterStyleSelect::~IfcCharacterStyleSelect() {
  deleteUnion();
}

bool IfcCharacterStyleSelect::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcCharacterStyleSelect(this);
}

bool IfcCharacterStyleSelect::init() {
  return false;
}

const char *IfcCharacterStyleSelect::type() {
  return "IfcCharacterStyleSelect";
}

Step::ClassType IfcCharacterStyleSelect::getClassType() {
  return IfcCharacterStyleSelect::s_type;
}

Step::ClassType IfcCharacterStyleSelect::getType() const {
  return IfcCharacterStyleSelect::s_type;
}

bool IfcCharacterStyleSelect::isOfType(Step::ClassType t) {
  return IfcCharacterStyleSelect::s_type == t ? true : Step::BaseObject::isOfType(t);
}

char *IfcCharacterStyleSelect::currentTypeName() {
  switch(m_type) {
  case IFCTEXTSTYLEFORDEFINEDFONT:
    return "IfcTextStyleForDefinedFont";
    break;
  default:
    return "UNSET";
  }
}

IfcCharacterStyleSelect::IfcCharacterStyleSelect_select IfcCharacterStyleSelect::currentType() {
  return m_type;
}

void IfcCharacterStyleSelect::deleteUnion() {
  switch(m_type) {
  case IFCTEXTSTYLEFORDEFINEDFONT:
    m_IfcCharacterStyleSelect_union.m_IfcTextStyleForDefinedFont->unref();
    break;
    }
  m_type = UNSET;
}

IfcTextStyleForDefinedFont *IfcCharacterStyleSelect::getIfcTextStyleForDefinedFont() {
  return m_IfcCharacterStyleSelect_union.m_IfcTextStyleForDefinedFont;
}

void IfcCharacterStyleSelect::setIfcTextStyleForDefinedFont(IfcTextStyleForDefinedFont *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcCharacterStyleSelect_union.m_IfcTextStyleForDefinedFont = value;
  if (value) {
    value->ref();
    m_type = IFCTEXTSTYLEFORDEFINEDFONT;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCTEXTSTYLEFORDEFINEDFONT;
}

void IfcCharacterStyleSelect::set(Step::BaseObject *v) {
  if (v->isOfType(IfcTextStyleForDefinedFont::getClassType())) {
    setIfcTextStyleForDefinedFont(static_cast< IfcTextStyleForDefinedFont* > (v));
  }
}

IFC2X3_DLL_DEF Step::ClassType IfcCharacterStyleSelect::s_type = new Step::ClassType_class("IfcCharacterStyleSelect");
